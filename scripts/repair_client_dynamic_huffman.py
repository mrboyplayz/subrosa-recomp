"""Recover dynamic block scratch lengths and builder result propagation."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN
MARKER=b'//----- (000000014015CF70)'
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Dynamic Huffman needs pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x15d3a5,5)!=bytes.fromhex('b801000000') or pe.get_data(0x15d3cf,2)!=bytes.fromhex('33c0'):
        raise ValueError('Native dynamic block returns changed')
    start=source.index(MARKER);end=source.index(b'//----- (',start+len(MARKER));region=source[start:end]
    old=b'return sub_1401F8B20((unsigned __int64)&v51 ^ v60);'
    if region.count(old)!=2:raise ValueError('Dynamic block exported returns changed')
    region=region.replace(old,b'return 0;')
    region=region.replace(b'__int128 v55;',b'unsigned char v55[19];')
    region=region.replace(b'  v56 = 0;',b'').replace(b'  v57 = 0;',b'')
    region=region.replace(b'  v55 = 0;',b'  memset(v55,0,sizeof(v55));')
    old=b'if ( (unsigned int)sub_14016F730(a1 + 52, v59, v25) )\r\n      sub_14016F730(a1 + 2072, &v59[v25], v10);'
    if region.count(old)!=1:raise ValueError('Final Huffman builder flow changed')
    region=region.replace(old,b'if (!(unsigned int)sub_14016F730(a1 + 52, v59, v25)) return 0;\n    if (!(unsigned int)sub_14016F730(a1 + 2072, &v59[v25], v10)) return 0;\n    return 1;')
    return source[:start]+region+source[end:],{'recovered_dynamic_huffman_returns':3,'recovered_dynamic_code_length_bytes':19}
