"""Recover Huffman code counts and native success/failure return paths."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER=b'//----- (000000014016F730)'

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Huffman recovery requires pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,expected in [(0x16f956,'b801000000'),(0x16f9a5,'33c0eb'),
                         (0x16f9cc,'33c0eb'),(0x16f963,'488b8c24b00000004833cce8ad910800')]:
        data=bytes.fromhex(expected)
        if pe.get_data(rva,len(data))!=data:raise ValueError('Native Huffman returns changed')
    start=source.index(MARKER);end=source.index(b'//----- (',start+len(MARKER));region=source[start:end]
    old=b'return sub_1401F8B20((unsigned __int64)&v26 ^ v30);'
    if region.count(old)!=3:raise ValueError('Huffman exported return inventory changed')
    region=region.replace(old,b'return 0;',2).replace(old,b'return 1;',1)
    if region.count(b'_OWORD v27[4];')!=1 or region.count(b'  v28 = 0;')!=1:
        raise ValueError('Huffman histogram layout changed')
    region=region.replace(b'_OWORD v27[4];',b'unsigned int v27[17];')
    region=region.replace(b'  v28 = 0;',b'')
    region=region.replace(b'LODWORD(v27[0]) = 0;',b'v27[0] = 0;')
    return source[:start]+region+source[end:],{'recovered_huffman_returns':3,'recovered_huffman_count_bytes':68}
