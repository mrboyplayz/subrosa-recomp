"""Give data the contents it has in the original client.

The data export left some objects of the original's initialised sections as
one-byte placeholders (`_UNKNOWN unk_...;`), so code reading them saw zeros.
The clearest symptom: the SSE sine/cosine routines returned 0 for angles above
10,000 radians, because their large-argument reduction tables were empty.

A placeholder whose original bytes are not all zero gets those bytes:

- read only as `(type)&name`: a byte array, declared as one in the header;
- also used as a plain `&name` (passed on, compared, stepped through): the
  same bytes under the same linker symbol, while C code keeps seeing the
  header's `extern _UNKNOWN name;`, so no use changes type;
- used as a value: the type its uses imply (TYPED below).

Bytes stop at the first address the original's relocation table marks: the
recompiled client lays its image out differently, so an address needs a
symbol, not a number. Placeholders that cannot be given contents this way are
listed in LEFT with the reason.

    python scripts/repair_client_data_tables.py [--check]
"""
import argparse, bisect, re, struct, sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent
ORIGINAL = PROJECT / 're/binaries/subrosa-vanilla.exe'
DATA = PROJECT / 'src/client/client_data.c'
HEADER = PROJECT / 'src/client/shared_client.h'

# Placeholders used as values. Each entry: how to define it from its original bytes.
#   'oword'  16 bytes copied as one __int128 (exception record templates)
OWORDS = ('unk_140284A60', 'unk_140284A70', 'unk_140284B00', 'unk_140284B10', 'unk_140284B20')

LEFT = {
    'unk_14026E720': 'run-time library table of exit routines; its end marker unk_14026E740 is a separate symbol, '
                     'so walking it needs both recovered as one object',
    'unk_14028A430': 'run-time library table of math function names; the name at 0x140289E4C has no symbol',
    'unk_14028AF90': 'no code refers to it',
    'unk_1402937C0': 'no code refers to it',
    'unk_140302B30': 'middle of a run-time library locale record that code copies 16 bytes at a time across '
                     'separately defined symbols; needs the record recovered as one object',
}


def sections(raw):
    pe = struct.unpack_from('<I', raw, 0x3C)[0]
    count, optional = struct.unpack_from('<H', raw, pe + 6)[0], struct.unpack_from('<H', raw, pe + 20)[0]
    base = struct.unpack_from('<Q', raw, pe + 24 + 24)[0]
    found = []
    for i in range(count):
        entry = pe + 24 + optional + 40 * i
        name = raw[entry:entry + 8].rstrip(b'\0')
        virtual_size, rva, raw_size, raw_at = struct.unpack_from('<IIII', raw, entry + 8)
        if name in (b'.rdata', b'.data', b'_RDATA'):
            found.append((base + rva, min(virtual_size, raw_size), raw_at))
    return found


def original_bytes(raw, found, address, size):
    for start, length, at in found:
        if start <= address < start + length:
            size = min(size, start + length - address)
            return raw[at + address - start:at + address - start + size]
    return None


def relocated_addresses(raw):
    """Addresses of the image's pointers, from its base relocation table."""
    pe = struct.unpack_from('<I', raw, 0x3C)[0]
    count, optional = struct.unpack_from('<H', raw, pe + 6)[0], struct.unpack_from('<H', raw, pe + 20)[0]
    base = struct.unpack_from('<Q', raw, pe + 24 + 24)[0]
    table_rva, table_size = struct.unpack_from('<II', raw, pe + 24 + 112 + 8 * 5)
    at = None
    for i in range(count):
        entry = pe + 24 + optional + 40 * i
        virtual_size, rva, raw_size, raw_at = struct.unpack_from('<IIII', raw, entry + 8)
        if rva <= table_rva < rva + max(virtual_size, raw_size):
            at = raw_at + table_rva - rva
    if at is None:
        sys.exit('the original has no base relocation table')
    addresses, end = [], at + table_size
    while at < end:
        page, size = struct.unpack_from('<II', raw, at)
        if size < 8:
            break
        for k in range((size - 8) // 2):
            entry = struct.unpack_from('<H', raw, at + 8 + 2 * k)[0]
            if entry >> 12 == 10:
                addresses.append(base + page + (entry & 0xFFF))
        at += size
    return sorted(addresses)


def before_first_address(pointers, address, data):
    """The bytes of data that precede the first relocated slot."""
    at = bisect.bisect_left(pointers, address - 7)
    if at < len(pointers) and pointers[at] < address + len(data):
        return data[:max(0, pointers[at] - address)]
    return data


DEFINITION = re.compile(r'^[A-Za-z_][^=;(]*?\b(\w+?_(1[4B][0-9A-F]{7}))\b\s*(?:\[[^\]]*\])*\s*(=|;)')
PLACEHOLDER = re.compile(r'^_UNKNOWN (\w+_(1[4B][0-9A-F]{7}));')
USE = re.compile(r'(\)\s*)?(&\s*)?\b((?:unk|off)_1[4B][0-9A-F]{7})\b')


def uses():
    """How client code uses each placeholder name: 'cast' (only `(type)&name`), 'address' (some plain
    `&name`) or 'value'."""
    kinds = {}
    rank = {'cast': 0, 'address': 1, 'value': 2}
    for path in sorted(DATA.parent.glob('*.c')):
        for line in path.read_text(encoding='utf-8', errors='replace').splitlines():
            if line.startswith(('//', '_UNKNOWN ')):
                continue
            for m in USE.finditer(line):
                kind = 'value' if not m.group(2) else 'cast' if m.group(1) else 'address'
                if rank[kind] >= rank[kinds.get(m.group(3), 'cast')]:
                    kinds[m.group(3)] = kind
    for path in sorted(DATA.parent.glob('*.h')):   # declared again elsewhere: the header's type must stay
        if path != HEADER:
            for m in USE.finditer(path.read_text(encoding='utf-8', errors='replace')):
                if kinds.get(m.group(3), 'cast') == 'cast':
                    kinds[m.group(3)] = 'address'
    return kinds


def byte_rows(data):
    return ',\n  '.join(', '.join('0x%02x' % b for b in data[at:at + 24]) for at in range(0, len(data), 24))


def alignment(address):
    return min(64, address & -address)


def typed(name, address, raw, found):
    """(definition, header declaration, other line edits) for a placeholder used as a value, or None."""
    def read(size, at=address):
        return original_bytes(raw, found, at, size)
    if name in OWORDS:
        low, high = struct.unpack('<QQ', read(16))
        return ('__int128 %s = ((__int128)0x%016xull | ((__int128)0x%016xull << 64));' % (name, low, high),
                'extern __int128 %s;' % name, {})
    if name == 'unk_1402B26C0':
        # A 4-byte value that code saves and restores; byte_1402B26C3 is its top byte, not a separate object.
        value = struct.unpack('<I', read(4))[0]
        return ('int unk_1402B26C0 = 0x%08x;\n'
                '__asm__(".globl byte_1402B26C3\\n.set byte_1402B26C3, unk_1402B26C0+3");' % value,
                'extern int unk_1402B26C0;', {"char byte_1402B26C3 = 'F';": '/* byte_1402B26C3: top byte of unk_1402B26C0 */'})
    if name == 'off_14028F270':
        # First of three pointers to locale names; code reads only this one.
        target = struct.unpack('<Q', read(8))[0]
        text = read(12, target).decode('utf-16-le').split('\0')[0]
        return ('__int16 *off_14028F270 = (__int16 *)L"%s";' % text, 'extern __int16 *off_14028F270;', {})
    if name == 'off_140302B18':
        # Compared with a pointer copied from this same record, never followed: like its neighbours, a number.
        return ('_UNKNOWN *off_140302B18 = (_UNKNOWN *)0x%XLL;' % struct.unpack('<Q', read(8))[0],
                'extern _UNKNOWN *off_140302B18;', {})
    if name == 'off_1402848C0':
        # 16-byte entries of a pointer and a count, like off_1402848D0 after it.
        target, count = struct.unpack('<QQ', read(16))
        return ('_UNKNOWN **off_1402848C0[2] = { &off_%X, (_UNKNOWN **)%d };' % (target, count),
                'extern _UNKNOWN **off_1402848C0[2];', {})
    return None


def plan(raw, lines):
    found = sections(raw)
    pointers = relocated_addresses(raw)
    symbols = sorted((int(m.group(2), 16), index) for index, line in enumerate(lines)
                     if (m := DEFINITION.match(line)))
    kinds = uses()
    edits, left = [], []
    for position, (address, index) in enumerate(symbols):
        m = PLACEHOLDER.match(lines[index])
        if not m or position + 1 == len(symbols):
            continue
        name = m.group(1)
        span = original_bytes(raw, found, address, symbols[position + 1][0] - address)
        if not span or not any(span):
            continue
        if name in LEFT:
            left.append((name, LEFT[name]))
            continue
        special = typed(name, address, raw, found)
        if special:
            edits.append((name, index, len(span)) + special)
            continue
        data = before_first_address(pointers, address, span)
        kind = kinds.get(name, 'cast')
        if kind == 'value' or not any(data):
            left.append((name, 'used as a value' if kind == 'value' else 'starts with image addresses'))
        elif kind == 'cast':
            edits.append((name, index, len(data),
                          '_Alignas(%d) unsigned char %s[%d] = {\n  %s\n};' % (alignment(address), name, len(data), byte_rows(data)),
                          'extern unsigned char %s[%d];' % (name, len(data)), {}))
        else:
            edits.append((name, index, len(data),
                          '_Alignas(%d) unsigned char sr_bytes_%s[%d] __asm__("%s") = {\n  %s\n};'
                          % (alignment(address), name, len(data), name, byte_rows(data)), None, {}))
    return edits, left


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--check', action='store_true', help='report only; exit 1 if anything fillable is empty')
    args = parser.parse_args()
    raw = ORIGINAL.read_bytes()
    lines = DATA.read_text(encoding='utf-8').split('\n')
    edits, left = plan(raw, lines)
    for name, reason in left:
        print('left alone: %s (%s)' % (name, reason))
    if args.check:
        for name, _, size, *_ in edits:
            print('missing: %s, %d bytes' % (name, size))
        return 1 if edits else 0
    header = HEADER.read_text(encoding='utf-8')
    for name, index, _, definition, declaration, others in edits:
        lines[index] = definition
        for find, replacement in others.items():
            if lines.count(find) != 1:
                sys.exit('%s: expected one line %r in %s' % (name, find, DATA.name))
            lines[lines.index(find)] = replacement
        if declaration:
            header, count = re.subn(r'^extern _UNKNOWN %s;' % name, declaration, header, flags=re.M)
            if count != 1:
                sys.exit('%s: expected one declaration in %s, found %d' % (name, HEADER.name, count))
    DATA.write_text('\n'.join(lines), encoding='utf-8', newline='\n')
    HEADER.write_text(header, encoding='utf-8', newline='\n')
    print('%d objects given their contents, %d bytes' % (len(edits), sum(e[2] for e in edits)))
    return 0


if __name__ == '__main__':
    sys.exit(main())
