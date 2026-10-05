"""Recover scene raycast selection result, native hit records and scratch layout."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (00000001400DC050)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Scene raycast requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0xdc5ee,'0f2f05ffbd1900410f92c6418bc6'),
                  (0xdc5fc,'488b8da0c000004833cce815c51100'),
                  (0xdc3ca,'4489742470'),(0xdc3e3,'4489b574bf0000'),
                  (0xdc132,'0f110547879a11'),(0xdc5b5,'0f1105c4829a11')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native scene raycast changed at '+hex(rva))
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r\n',b'\n')
    edits=((b'return sub_1401F8B20((unsigned __int64)&v40 ^ v57);',b'return !(*(float *)&dword_140404A6C[73006987] >= 1.0f);'),
           (b'int v49[24712];',b'int v49[12292];'),(b'v49[24709] = 0;',b'v49[12289] = 0;'))
    for old,new in edits:
        if body.count(old)!=1:raise ValueError('Scene raycast expression changed '+repr(old))
        body=body.replace(old,new)
    groups=[
        ({'v43':'sr_hit.first','v44':'sr_hit.words[4]','v45':'sr_hit.words[5]','v46':'sr_hit.coordinates[6]'},b'  union { __int128 first; unsigned words[8]; float coordinates[8]; } sr_hit;'),
        ({'v50':'(*(float *)&sr_maximum[0])','v51':'sr_maximum[1]','v52':'sr_maximum[2]'},b'  unsigned sr_maximum[3];'),
        ({'v53':'sr_minimum[0]','v54':'sr_minimum[1]','v55':'sr_minimum[2]'},b'  unsigned sr_minimum[3];'),
    ]
    for mapping,declaration in groups:
        for name in mapping:
            body,n=re.subn(rb'^  (?:float|unsigned int|__int128) '+name.encode()+rb';[^\n]*\n',b'',body,flags=re.M)
            if n!=1:raise ValueError('Scene hit/bounds declaration changed '+name)
        body=re.sub(rb'\b('+b'|'.join(n.encode() for n in mapping)+rb')\b',lambda m:mapping[m[0].decode()].encode(),body)
        body=body.replace(b'\n{\n',b'\n{\n'+declaration+b'\n',1)
    old=b'*(_OWORD *)&dword_140404A6C[73006981] = sr_hit.first;'
    if body.count(old)!=2:raise ValueError('Scene MOVUPS stores changed')
    body=body.replace(old,b'__builtin_memcpy(&dword_140404A6C[73006981], &sr_hit.first, 16);')
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1400DC050('
    if source.count(sig)!=2:raise ValueError('Scene raycast signature changed')
    source,block_counts=repair_block_raycast_result(source.replace(sig,b'int                sub_1400DC050('),pe)
    return source,{'recovered_scene_raycast_result':1,'recovered_scene_raycast_temporary_groups':3,'recovered_scene_raycast_scratch_layout':2,'recovered_scene_raycast_unaligned_stores':2,**block_counts}


def repair_block_raycast_result(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Block raycast requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    # Native hit path sets EAX=1; rejection and traversal exhaustion set EAX=0
    # before the shared cookie epilogue, whose checker preserves EAX.
    for rva,h in [(0xd871c,'b801000000eb0233c0'),(0xd8725,'488b8da01800004833cce8ec031200')]:
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native block raycast result changed')
    marker=b'//----- (00000001400D6B60)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
    old=b'return sub_1401F8B20((unsigned __int64)&v233 ^ v287);'
    if body.count(old)!=4:raise ValueError('Block raycast return inventory changed')
    if body.count(b'if ( *v10 < 1.0 )')!=1:raise ValueError('Block raycast hit condition changed')
    results=iter((0,0,1,0))
    body=re.sub(re.escape(old),lambda m:('return %d; /* native hit result */'%next(results)).encode(),body)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1400D6B60('
    if source.count(sig)!=2:raise ValueError('Block raycast prototype changed')
    return source.replace(sig,b'int                sub_1400D6B60('),{'recovered_block_raycast_result_paths':4}
