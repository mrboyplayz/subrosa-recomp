"""Preserve MOVDQU semantics in the PNG Up filter's vector stores."""
import re
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('PNG store recovery requires the pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva, raw in ((0x15f041,'f3410f7f4c00b0'),(0x15f057,'f3420f7f5400c0'),
                     (0x15f06d,'f3410f7f4c00d0'),(0x15f078,'f3410f7f5400e0')):
        if pe.get_data(rva,7)!=bytes.fromhex(raw):
            raise ValueError('Original PNG MOVDQU sequence changed')
    marker = b'//----- (000000014015E5F0)'
    a = source.index(marker)
    b = source.index(b'//----- (', a + len(marker))
    region = source[a:b]
    pattern = rb'\*\(\s*__m128i \*\)([^;\r\n]+?) = ([^;\r\n]+);'
    def replace(m):
        return b'{ __m128i sr_png_store = ' + m[2] + b'; __builtin_memcpy((void *)(' + m[1] + b'), &sr_png_store, 16); }'
    region, count = re.subn(pattern, replace, region)
    if count != 8:
        raise ValueError(f'Expected eight PNG MOVDQU stores, found {count}')
    return source[:a] + region + source[b:], {'recovered_png_unaligned_stores': count}
