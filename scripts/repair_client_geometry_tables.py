"""Keep cube vertices, normals and topology in their original indexed storage."""
import re
import struct
from repair_client_menu_actions import pinned_pe

START, END = 0x2b34f0, 0x2b3840


def repair(source):
    pe = pinned_pe()
    pe.parse_data_directories()
    if any(START <= entry.rva < END for block in pe.DIRECTORY_ENTRY_BASERELOC
           for entry in block.entries if entry.type):
        raise ValueError('Geometry tables contain relocated pointers')
    raw = pe.get_data(START, END-START)
    if len(raw) != END-START:
        raise ValueError('Incomplete native geometry tables')
    pattern = rb'^\s*(?:int|float|_UNKNOWN) ((?:dword|flt|unk)_1402B[0-9A-F]{4})(?:\[\d*\])?(?:\s*=\s*(?:\{[^}]*\}|[^;\n]+))?;'
    matches = [m for m in re.finditer(pattern, source, re.M)
               if START <= int(m[1].split(b'_140')[1], 16) < END]
    if len(matches) != 131:
        raise ValueError('Geometry table alias inventory changed: '+str(len(matches)))
    values = struct.unpack('<%di' % (len(raw)//4), raw)
    declaration = '_Alignas(16) int sr_geometry_tables[%d] = {\n' % len(values)
    declaration += '\n'.join('  '+', '.join(map(str, values[i:i+8]))+',' for i in range(0, len(values), 8))
    declaration += '\n};\n__asm__(\n'
    for m in matches:
        name = m[1].decode(); offset = int(name.split('_140')[1], 16)-START
        declaration += f'  ".globl {name}\\n.set {name}, sr_geometry_tables+{offset}\\n"\n'
    declaration += ');\n'
    for m in reversed(matches):
        source = source[:m.start()]+(declaration.encode() if m is matches[0] else b'')+source[m.end():]
    return source, {'recovered_geometry_table_bytes': len(raw),
                    'recovered_geometry_table_aliases': len(matches)}
