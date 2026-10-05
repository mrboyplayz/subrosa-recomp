"""Restore the default C locale descriptor and registered startup initializer."""
import hashlib
import re
import struct
import pefile
from repair_client_startup_arguments import PROJECT, PIN

POINTERS = {0: '&asc_14028B810', 0x48: '&unk_140302588', 0x68: '&unk_140302588',
            0x88: '&unk_140302588', 0xa8: '&unk_140302588', 0xc8: '&unk_140302588',
            0xf8: '&off_140302AE0', 0x110: '&unk_14028BA90', 0x118: '&unk_14028BC10',
            0x120: '&off_14028B0E0'}
TARGETS = {0: 0x14028b810, 0x48: 0x140302588, 0x68: 0x140302588,
           0x88: 0x140302588, 0xa8: 0x140302588, 0xc8: 0x140302588,
           0xf8: 0x140302ae0, 0x110: 0x14028ba90, 0x118: 0x14028bc10,
           0x120: 0x14028b0e0}


def storage(pe):
    data = pe.get_data(0x302420, 344)
    rels = {e.rva - 0x302420 for b in pe.DIRECTORY_ENTRY_BASERELOC for e in b.entries
            if e.type == 10 and 0x302420 <= e.rva < 0x302578}
    if rels != set(POINTERS) or any(struct.unpack_from('<Q', data, off)[0] != address for off, address in TARGETS.items()):
        raise ValueError('Native C locale pointer inventory changed')
    rows = []
    for off in range(0, 344, 8):
        rows.append(('(uintptr_t)(' + POINTERS[off] + ')') if off in POINTERS else
                    ('0x%xULL' % struct.unpack_from('<Q', data, off)[0]))
    return (b'extern _UNKNOWN unk_140302588;\nextern _UNKNOWN *off_140302AE0;\n'
            b'uintptr_t sr_c_locale[43] __attribute__((aligned(16))) = {' + ','.join(rows).encode() + b'};\n'
            b'_Static_assert(sizeof(sr_c_locale)==344, "Native C locale descriptor");\n'
            b'extern __int16 *off_140302420;\n'
            b'__asm__(".globl off_140302420\\n.set off_140302420, sr_c_locale\\n");')


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Locale recovery requires pinned original')
    pe = pefile.PE(str(binary))
    old = b'__int16 *off_140302420 = &asc_14028B810;'
    if source.count(old) != 1:
        raise ValueError('Truncated C locale descriptor changed')
    source = source.replace(old, storage(pe))
    for symbol, name, rva, length, bias in [('unk_14028BA90', 'sr_locale_lower', 0x28ba10, 384, 128),
                                          ('unk_14028BC10', 'sr_locale_upper', 0x28bb90, 384, 128),
                                          ('unk_140302588', 'sr_locale_name', 0x302588, 4, 0)]:
        old = ('(?m)^_UNKNOWN ' + symbol + ';').encode()
        if len(list(re.finditer(old, source))) != 1:
            raise ValueError('Locale backing declaration changed')
        data = pe.get_data(rva, length)
        new = ('unsigned char %s[%d] = {' % (name, length)).encode() + ','.join(map(str, data)).encode() + b'};\n'
        new += ('extern _UNKNOWN %s;\n__asm__(".globl %s\\n.set %s, %s+%d\\n");' %
                (symbol, symbol, symbol, name, bias)).encode()
        source = re.sub(old, lambda _: new, source)
    if pe.get_data(0x289fb0, 8) != struct.pack('<Q', 0x140247248) or pe.get_data(0x247248, 17) != bytes.fromhex('488d05d1b10b004889052285a704b001c3'):
        raise ValueError('Global locale initializer registration or behavior changed')
    old = b'__int64 WinMain_sr()\n{\n  sub_14024FAF0();'
    if source.count(old) != 1:
        raise ValueError('Locale startup insertion point changed')
    source = source.replace(old, b'__int64 WinMain_sr()\n{\n  initialize_global_variables();\n  sub_14024FAF0();')
    marker = b'//----- (0000000140091880)'
    start = source.index(marker)
    end = source.index(b'//----- (', start + len(marker))
    region = source[start:end]
    for name in [b'v18', b'v19']:
        old = b'(unsigned int)&' + name
        if region.count(old) != 1:
            raise ValueError('GL version scanner pointer boundary changed')
        region = region.replace(old, b'(__int64)(uintptr_t)&' + name)
    return source[:start] + region + source[end:], {'recovered_c_locale_bytes': 344,
                    'recovered_c_locale_relocations': 10, 'recovered_locale_case_bytes': 768,
                    'recovered_locale_startup_initializer': 1, 'recovered_gl_scan_output_pointers': 2}
