"""Recover CELT encoder's separate dynamic stack allocations from native stores."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER = b'//----- (000000014019B2E0)'
# Allocation result, exported pointer, native LEA/store address and frame offset.
BINDINGS = (
    (7, 'v127', 0x19bb5b, 0x168), (14, 'v123', 0x19c29c, 0x148),
    (16, 'v82', 0x19c2dd, 0x80), (18, 'v86', 0x19c31e, 0x98),
    (20, 'v110', 0x19c394, 0x108), (22, 'p_j', 0x19c6ce, 0x150),
    (26, 'v125', 0x19d295, 0x158), (28, 'v218', 0x19d352, 0x2d8),
    (30, 'v242', 0x19d38e, 0x360), (32, 'v243', 0x19d3ca, 0x368),
    (34, 'v111', 0x19d4f8, 0x110), (36, 'v126', 0x19d6fa, 0x160),
    (40, 'v239', 0x19db25, 0x348), (42, 'v240', 0x19e624, 0x350),
    (44, 'v244', 0x19e660, 0x370), (46, 'v246', 0x19e69c, 0x380),
    (49, 'v251', 0x19ea1a, 0x3a8),
)


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('CELT scratch requires pinned vanilla client')
    pe = pefile.PE(str(binary), fast_load=True)
    a = source.index(MARKER)
    b = source.index(b'//----- (', a + len(MARKER))
    body = source[a:b].replace(b'\r\n', b'\n')
    for allocation, pointer, rva, offset in BINDINGS:
        native = bytes.fromhex('488d8424c0000000488985') + offset.to_bytes(4, 'little')
        if pe.get_data(rva, len(native)) != native:
            raise ValueError('Native CELT allocation changed at ' + hex(rva))
        cast = '(float *)' if pointer == 'v82' else '(__m128i *)' if pointer in ('v86', 'v110', 'v126') else '(int *)'
        import re
        pattern = re.compile(rb'\b' + pointer.encode() + rb' = (?:\([^;]*?\))?&j;')
        body, count = pattern.subn(f'{pointer} = {cast}v{allocation};'.encode(), body)
        if count != 1:
            raise ValueError('CELT allocation expression changed: ' + pointer)
    for old, new in (
        (b'sub_1401FCD30((void *)(uintptr_t)(&j), 0, 4LL * v57);', b'sub_1401FCD30(p_j, 0, 4LL * v57);'),
        (b'sub_1401A35F0(v60, (__int64)v123, (__int64)&j, (__int64)v82,', b'sub_1401A35F0(v60, (__int64)v123, (__int64)v125, (__int64)v82,'),
        (b'sub_1401A12E0(v60, (__int64)&j, i, v53);', b'sub_1401A12E0(v60, (__int64)v239, i, v53);'),
    ):
        if body.count(old) != 1:
            raise ValueError('CELT direct scratch argument changed: ' + repr(old))
        body = body.replace(old, new)
    source = source[:a] + body + source[b:]
    source = repair_prefilter(source, pe)
    return source, {
        'recovered_celt_scratch_pointers': len(BINDINGS),
        'recovered_celt_direct_scratch_arguments': 3,
        'recovered_celt_prefilter_scratch': 5,
    }


def repair_prefilter(source, pe=None):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('CELT prefilter requires pinned vanilla client')
    if pe is None:
        pe = pefile.PE(str(binary), fast_load=True)
    for rva, code in ((0x1b27db, '488d44246048894558'), (0x1b2984, '488d44246048894548'),
                      (0x1b2803, '488b4d58488d0481')):
        expected = bytes.fromhex(code)
        if pe.get_data(rva, len(expected)) != expected:
            raise ValueError('Native CELT prefilter scratch changed at ' + hex(rva))
    marker = b'//----- (00000001401B2750)'
    a = source.index(marker)
    b = source.index(b'//----- (', a + len(marker))
    body = source[a:b].replace(b'\r\n', b'\n')
    for old, new in (
        (b'v40 = &v24;', b'v40 = (int *)v13;'),
        (b'v31[0] = (uint64)(uintptr_t)(&v24);', b'v31[0] = (uint64)(uintptr_t)v40;'),
        (b'v31[1] = (uint64)(uintptr_t)(&v24 + a5 + 1024);', b'v31[1] = (uint64)(uintptr_t)(v40 + a5 + 1024);'),
        (b'v38 = &v24;', b'v38 = (int *)v15;'),
        (b'sub_1401A8190(v31, (float *)&v24,', b'sub_1401A8190(v31, (float *)v38,'),
    ):
        if body.count(old) != 1:
            raise ValueError('CELT prefilter scratch expression changed: ' + repr(old))
        body = body.replace(old, new)
    return source[:a] + body + source[b:]
