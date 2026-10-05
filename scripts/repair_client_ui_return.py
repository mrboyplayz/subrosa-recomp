"""Restore UI asset loader EAX result rather than an invented cookie return."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('UI return requires pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x79105,5)!=bytes.fromhex('b801000000') or pe.get_data(0x7911c,18)!=bytes.fromhex('33c0488b8c24600400004833cce8f2f91700'):
        raise ValueError('Native UI result/cookie flow changed')
    if pe.get_data(0x12a0,22)!=bytes.fromhex('488bc24d63c04c8bc9ba01000000488bc8e912ae2000'):
        raise ValueError('Native image fread callback changed')
    marker=b'//----- (0000000140078610)'
    start=source.index(marker);end=source.index(b'//----- (',start+len(marker))
    region=source[start:end]
    old=b'return sub_1401F8B20((unsigned __int64)&v67 ^ v72);'
    if region.count(old)!=1:raise ValueError('UI exported return changed')
    region=region.replace(b'  v3 = (int)a1;',b'  unsigned int sr_loaded = 0;\n  v3 = (int)a1;',1)
    oldflag=b'*(unsigned int *)((char *)&dword_140404A6C[72777085] + v27) = 1;'
    if region.count(oldflag)!=1:raise ValueError('UI success marker changed')
    region=region.replace(oldflag,oldflag+b'\n      sr_loaded = 1;')
    region=region.replace(old,b'return sr_loaded;')
    source=source[:start]+region+source[end:]
    if pe.get_data(0x15cee5,5)!=bytes.fromhex('3a0c37751e'):
        raise ValueError('Native PNG byte comparison changed')
    marker=b'//----- (000000014015CE80)'
    start=source.index(marker);end=source.index(b'//----- (',start+len(marker))
    region=source[start:end]
    if region.count(b'  char v4; // cl')!=1:raise ValueError('PNG byte local changed')
    region=region.replace(b'  char v4; // cl',b'  unsigned char v4; // cl')
    source=source[:start]+region+source[end:]
    if pe.get_data(0x253f0b,12)!=bytes.fromhex('bf001000008bcfe849000000'):
        raise ValueError('Native stream buffer allocation changed')
    marker=b'//----- (0000000140253EF8)'
    start=source.index(marker);end=source.index(b'//----- (',start+len(marker))
    region=source[start:end]
    if region.count(b'malloc_base()')!=1:raise ValueError('Stream buffer malloc changed')
    region=region.replace(b'malloc_base()',b'sr_path_malloc(4096)')
    return source[:start]+region+source[end:],{'recovered_ui_asset_return':1,'recovered_png_signature_byte':1,
                                            'recovered_stream_buffer_allocation':1}
