"""Restores double tables the decompiler printed with too few digits.

Hex-Rays prints a double with 16 significant digits; 17 are needed to give the value back. The tables of
src/client/client_data.c that are declared `double NAME_14XXXXXXX[N] = { ... };` (or a single `double NAME = x;`)
were written that way, so about half their entries were one unit in the last place off - among them the tables of
the C runtime's atan2, log and exp.

For each such definition this reads the original's bytes at the address in the name and rewrites every entry whose
text does not denote the original value. An entry whose text is right is left exactly as it is.

    python tools/repairs/double_tables.py [--write] [src/client/client_data.c ...]

Without --write it only reports.
"""
import re, struct, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
EXE = ROOT / 're/binaries/subrosa-vanilla.exe'
DEFINITION = re.compile(r'^(?:static\s+|const\s+)*double\s+(\w*?_(1[0-9A-F]{8}))\s*(\[\s*\d*\s*\])?\s*=\s*', re.M)
NUMBER = re.compile(r'[-+]?(?:\d+\.\d*|\.\d+|\d+)(?:[eE][-+]?\d+)?')


def main():
    args = sys.argv[1:]
    write = '--write' in args
    files = [Path(a) for a in args if not a.startswith('--')] or [ROOT / 'src/client/client_data.c']
    data = EXE.read_bytes()
    pe = struct.unpack_from('<I', data, 0x3C)[0]
    count = struct.unpack_from('<H', data, pe + 6)[0]
    optional = struct.unpack_from('<H', data, pe + 20)[0]
    sections = [struct.unpack_from('<8sIIII', data, pe + 24 + optional + 40 * i) for i in range(count)]

    def read(address, size):
        rva = address - 0x140000000
        for _, vsize, vaddr, rsize, ptr in sections:
            if vaddr <= rva and rva + size <= vaddr + rsize:
                return data[ptr + rva - vaddr: ptr + rva - vaddr + size]
        return None

    total = tables = 0
    for path in files:
        raw = path.read_bytes().decode('utf-8')
        out, last = [], 0
        for m in DEFINITION.finditer(raw):
            address = int(m.group(2), 16)
            end = raw.index(';', m.end())
            body = raw[m.end():end]
            if re.search(r'[A-Za-z_]\w*\s*\(|0x', body):
                continue                       # an expression, not a plain list of numbers
            index = 0
            changed = 0

            def fix(n):
                nonlocal index, changed
                bytes8 = read(address + 8 * index, 8)
                index += 1
                if bytes8 is None:
                    return n.group()
                value = struct.unpack('<d', bytes8)[0]
                if value != value or float(n.group()) == value:
                    return n.group()
                # Only a last-digits difference is a printing fault; anything else is left for a person to look at.
                if abs(float(n.group()) - value) > abs(value) * 1e-14:
                    print(f'{path.name}: {m.group(1)}[{index - 1}] is {n.group()}, the original has {value!r}: left alone')
                    return n.group()
                changed += 1
                return repr(value)

            new_body = NUMBER.sub(fix, body)
            if changed:
                tables += 1
                total += changed
                print(f'{path.name}: {m.group(1)}: {changed} of {index} entries')
                out.append(raw[last:m.end()])
                out.append(new_body)
                last = end
        if write and out:
            out.append(raw[last:])
            path.write_bytes(''.join(out).encode('utf-8'))
    print(total, 'entries in', tables, 'tables', 'rewritten' if write else 'would change')


if __name__ == '__main__':
    main()
