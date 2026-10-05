"""Recover terrain raycast result and contiguous native vector/grid temporaries."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (00000001400D1830)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Terrain raycast requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0xd1860,'488b05390823004833c448894518'),
                  (0xd21af,'0f2f4b180f8718010000'),(0xd225a,'33c0'),
                  (0xd229b,'488b4d184833cce879681200'),(0xd22d1,'b801000000eb84'),
                  (0xdc100,'e82b57ffff')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native terrain raycast changed at '+hex(rva))
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r\n',b'\n')
    old=b'return sub_1401F8B20((unsigned __int64)&v121 ^ v157);'
    if body.count(old)!=2:raise ValueError('Terrain raycast return inventory changed')
    body=body.replace(old,b'return *(float *)(v40 + 24) < 1.0f;',1).replace(old,b'return 0;')
    groups=[
        ({'v139':'sr_direction[0]','v140':'sr_direction[1]','v141':'sr_direction[2]'},b'  int sr_direction[3];'),
        ({'v145':'sr_start[0]','v146':'sr_start[1]','v147':'sr_start[2]'},b'  int sr_start[3];'),
        ({'v154':'sr_end[0]','v155':'((_BYTE *)&sr_end[1])','v156':'sr_end[2]'},b'  int sr_end[3];'),
        ({'v142':'sr_weight[0]','v143':'sr_weight[1]','v144':'sr_weight[2]'},b'  float sr_weight[3];'),
        ({'v148':'sr_walk_a[0]','v149':'sr_walk_a[1]','v150':'sr_walk_a[2]'},b'  float sr_walk_a[3];'),
        ({'v151':'sr_walk_b[0]','v152':'sr_walk_b[1]','v153':'sr_walk_b[2]'},b'  float sr_walk_b[3];'),
        ({'v130':'sr_triangle_a[0]','v131':'sr_triangle_a[1]','v132':'sr_triangle_a[2]'},b'  float sr_triangle_a[3];'),
        ({'v123':'sr_normal[0]','v124':'sr_normal[1]'},b'  _Alignas(8) unsigned __int64 sr_normal[2];'),
        ({'v126':'sr_triangle_b[0]','v127':'sr_triangle_b[1]'},b'  _Alignas(8) __int64 sr_triangle_b[2];'),
        ({'v128':'sr_triangle_c.saved','v129':'sr_triangle_c.coordinates[2]'},b'  union { float *saved; float coordinates[4]; } sr_triangle_c;'),
    ]
    for mapping,declaration in groups:
        for name in mapping:
            body,n=re.subn(rb'^  (?:int|float|float \*|__int64|unsigned __int64|signed __int64|_BYTE) '+name.encode()+rb'(?:\[4\])?;[^\n]*\n',b'',body,flags=re.M)
            # Pointer spacing in the exporter is "float *v128".
            if not n:body,n=re.subn(rb'^  float \*'+name.encode()+rb';[^\n]*\n',b'',body,flags=re.M)
            if n!=1:raise ValueError('Terrain temporary declaration changed '+name)
        body=re.sub(rb'\b('+b'|'.join(n.encode() for n in mapping)+rb')\b',lambda m:mapping[m[0].decode()].encode(),body)
        body=body.replace(b'\n{\n',b'\n{\n'+declaration+b'\n',1)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1400D1830('
    if source.count(sig)!=2:raise ValueError('Terrain signature changed')
    return source.replace(sig,b'int                sub_1400D1830('),{'recovered_terrain_raycast_results':2,'recovered_terrain_raycast_temporary_groups':len(groups)}
