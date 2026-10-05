"""Recover the native nine-float immediate geometry attribute layout."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('GL argument recovery requires the pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,offset in ((0x6e166,0),(0x6e195,12),(0x6e1c5,20),
                       (0x6e340,0),(0x6e36f,12),(0x6e39f,20)):
        if pe.get_data(rva,9)!=bytes.fromhex('48c7442428')+offset.to_bytes(4,'little'):
            raise ValueError('Native vertex attribute offset changed')
    count = 0
    for rva in (0x6e0d0,0x6e2d0):
        marker = ('//----- (%016X)' % (0x140000000+rva)).encode()
        a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        region=source[a:b]
        for index,size,offset in ((0,3,0),(1,2,12),(2,4,20)):
            old = f'qword_1404044A8({index}, {size}, 5126);'.encode()
            new = f'((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)({index},{size},5126,0,4*dword_140404A6C[456217208],(const void *)(uintptr_t){offset});'.encode()
            if region.count(old)!=1:raise ValueError('Immediate attribute inventory changed')
            region=region.replace(old,new);count+=1
        old=b'(*(void (           **)(__int64, _QWORD, __int64))&flt_140384000[131076])(4, (unsigned int)v5, 5123);'
        new=b'((void (*)(unsigned,int,unsigned,const void *))(*(uintptr_t *)&flt_140384000[131076]))(4,v5,5123,NULL);'
        if region.count(old)!=1:raise ValueError('Immediate element draw inventory changed')
        region=region.replace(old,new);count+=1
        source=source[:a]+region+source[b:]
    return source,{'recovered_immediate_geometry_gl_arguments':count}
