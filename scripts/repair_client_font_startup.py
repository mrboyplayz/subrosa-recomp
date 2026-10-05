"""Recover font CSV output-pointer/result ABI and image row-flip void return."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Font recovery requires pinned client')
    pe=pefile.PE(str(binary))
    for rva,h in ((0x6ee83,'4c8d442420'),(0x6ee9e,'8b442420'),(0x6eea2,'488b8c24300400004833cce86e9c1800')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native font CSV output/result changed')
    a=source.index(b'//----- (000000014006EDD0)');b=source.index(b'//----- (',a+10);body=source[a:b]
    old=b'sub_14015B070((__int64)v9, "%d", (unsigned int)&v8);'
    if body.count(old)!=1:raise ValueError('Font CSV output pointer export changed')
    body=body.replace(old,b'sub_14015B070((__int64)(uintptr_t)v9, "%d", &v8);')
    old=b'return sub_1401F8B20((unsigned __int64)&v7 ^ v10);'
    if body.count(old)!=1:raise ValueError('Font CSV result export changed')
    body=body.replace(old,b'return v8; /* native MOV EAX,[RSP+20] */')
    source=source[:a]+body+source[b:]
    # Native vertical flip has no value result; all callers use its pixel writes.
    if pe.get_data(0x16f571,28)!=bytes.fromhex('488b8c24200800004833cce89f9508004881c468080000415f415cc3'):
        raise ValueError('Native vertical-flip exit changed')
    a=source.index(b'//----- (000000014016F470)');b=source.index(b'//----- (',a+10);body=source[a:b]
    old=b'return sub_1401F8B20((unsigned __int64)&v13 ^ v15);'
    if body.count(old)!=1:raise ValueError('Vertical flip export changed')
    body=body.replace(old,b'return;')
    source=source[:a]+body+source[b:]
    old=b'__int64            sub_14016F470(__m128i *a1, int a2, int a3, int a4)'
    if source.count(old)!=2:raise ValueError('Vertical flip prototype changed')
    source=source.replace(old,b'void sub_14016F470(__m128i *a1, int a2, int a3, int a4)')
    source,counts=repair_flip_wrapper(source)
    source,scan_counts=repair_numeric_output_pointers(source,pe)
    return source,{'recovered_font_csv_pointer':1,'recovered_font_csv_result':1,'recovered_image_row_flip_void_return':1,**counts,**scan_counts}


def repair_numeric_output_pointers(source,pe=None):
    import re
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Numeric outputs require pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,hex_bytes in [(0xa3e05,'4c8d442430'),(0xa5453,'4c8d442420'),
                         (0x1312e4,'4c8d442430'),(0x131bd3,'4c8d442430'),
                         (0x131d63,'4c8d442430'),(0x131f85,'4c8d442448'),(0x132178,'4c8d442430')]:
        if pe.get_data(rva,5)!=bytes.fromhex(hex_bytes):raise ValueError('Native numeric output pointer changed')
    count=0
    for rva in (0xa3d70,0xa5400,0x1307d0):
        marker=('//----- (%016X)'%(0x140000000+rva)).encode();a=source.index(marker);b=source.index(b'//----- (',a+10);body=source[a:b]
        body,n=re.subn(rb'(sub_14015B070\([^\r\n]+?, )\(unsigned int\)&(v\d+)(\))',rb'\1&\2\3',body)
        count+=n;source=source[:a]+body+source[b:]
    if count!=7:raise ValueError(f'Numeric output pointer inventory changed: {count}')
    return source,{'recovered_numeric_scan_output_pointers':count}


def repair_flip_wrapper(source):
    pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
    if pe.get_data(0x160419,8)!=bytes.fromhex('5be951f000005bc3'):
        raise ValueError('Native conditional flip tail call changed')
    a=source.index(b'//----- (00000001401603C0)');b=source.index(b'//----- (',a+10);body=source[a:b]
    old=b'return sub_14016F470(a1, *a2, *a3, 4 * v8);'
    if body.count(old)!=1:raise ValueError('Conditional flip tail call export changed')
    body=body.replace(old,b'sub_14016F470(a1, *a2, *a3, 4 * v8);\n    return;')
    body=body.replace(b'return result;',b'return;')
    source=source[:a]+body+source[b:]
    old=b'__int64            sub_1401603C0(__m128i *a1, unsigned int *a2, unsigned int *a3, int *a4, int a5)'
    if source.count(old)!=2:raise ValueError('Conditional flip prototype changed')
    return source.replace(old,b'void sub_1401603C0(__m128i *a1, unsigned int *a2, unsigned int *a3, int *a4, int a5)'),{'recovered_image_conditional_flip_void_return':1}
