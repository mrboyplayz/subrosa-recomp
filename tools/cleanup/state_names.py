"""Name the client's fixed-address globals.

The recompiled client reaches almost all game state through one array,
dword_140404A6C, by fixed index: dword_140404A6C[284024502] is the 32-bit
word at original address 0x183F7C544. This tool gives every such address a
name and a type and rewrites the client code to use them.

src/client/state_names.tsv is the table: original address, name, type and
an optional comment. Addresses that have no row get one, named after their
address (g_183F7C544) and typed by how the code mostly reads them (u32,
float, u64 or u128). Editing a name in the table and running the tool again
renames it everywhere.

src/client/client_state.h is generated from the table. Each name is a macro
that expands to the very access it replaced, so the compiled code does not
change:
    u32    name -> dword_140404A6C[N]
    float  name -> (*(float *)&dword_140404A6C[N])
    u64    name -> (*(_QWORD *)&dword_140404A6C[N])
    u128   name -> (*(_OWORD *)&dword_140404A6C[N])
Reads through another type keep their cast: *(int **)&dword_140404A6C[N]
becomes *(int **)&name, and &dword_140404A6C[N] becomes &name (or
(unsigned int *)&name when the name is not a u32), both the same address
and type as before.

    python tools/cleanup/state_names.py
"""
import collections
import re
import sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent.parent
CLIENT = PROJECT / 'src/client'
TABLE = CLIENT / 'state_names.tsv'
HEADER = CLIENT / 'client_state.h'
BASE = 0x140404A6C
ARRAY = 'dword_140404A6C'

TYPES = {
    'u32': (None, 'dword_140404A6C[%d]'),
    'float': ('float', '(*(float *)&dword_140404A6C[%d])'),
    'u64': ('_QWORD', '(*(_QWORD *)&dword_140404A6C[%d])'),
    'u128': ('_OWORD', '(*(_OWORD *)&dword_140404A6C[%d])'),
}
CAST_TO_TYPE = {'float': 'float', '_QWORD': 'u64', '_OWORD': 'u128'}

# *(T *)&dword_140404A6C[N] with any single-level-or-deeper pointer type T.
CAST_ACCESS = re.compile(r'\*\((?P<cast>[A-Za-z_][\w ]*?\s*\*+)\)&dword_140404A6C\[(?P<n>\d+)\]')
ADDRESS_OF = re.compile(r'&dword_140404A6C\[(?P<n>\d+)\]')
PLAIN = re.compile(r'\bdword_140404A6C\[(?P<n>\d+)\]')


def expansion_of(ctype):
    """The access a name of this type expands to; any C type name is allowed."""
    if ctype in TYPES:
        return TYPES[ctype][1]
    return '(*(' + ctype + ' *)&dword_140404A6C[%d])'


def c_type(ctype):
    return TYPES[ctype][0] if ctype in TYPES else ctype


def address(index):
    return BASE + 4 * index


def index_of(addr):
    if (addr - BASE) % 4:
        raise ValueError('%#x is not word-aligned in the state array' % addr)
    return (addr - BASE) // 4


def default_name(index):
    return 'g_%X' % address(index)


def read_table():
    rows = collections.OrderedDict()
    if TABLE.exists():
        for line in TABLE.read_text(encoding='utf-8').splitlines():
            if not line.strip() or line.startswith('#'):
                continue
            fields = line.split('\t')
            addr, name, ctype = int(fields[0], 16), fields[1], fields[2]
            comment = fields[3] if len(fields) > 3 else ''
            rows[index_of(addr)] = [name, ctype, comment]
    return rows


def write_table(rows):
    lines = ['# Names of the client\'s fixed-address globals (see tools/cleanup/state_names.py).',
             '# original address, name, type (u32 float u64 u128 or a C type), comment. Edit a name and rerun the tool.']
    for index in sorted(rows):
        name, ctype, comment = rows[index]
        lines.append('\t'.join(['%X' % address(index), name, ctype] + ([comment] if comment else [])))
    TABLE.write_text('\n'.join(lines) + '\n', encoding='utf-8', newline='\n')


def write_header(rows):
    lines = ['/* Names of the client\'s fixed-address globals, generated from state_names.tsv by',
             ' * tools/cleanup/state_names.py; edit the table, not this file. Each name expands',
             ' * to the access of the shared state array it replaced (see the tool). */',
             '#ifndef SR_CLIENT_STATE_H', '#define SR_CLIENT_STATE_H', '']
    for index in sorted(rows):
        name, ctype, comment = rows[index]
        expansion = expansion_of(ctype) % index
        text = '#define %-32s %-44s /* %X%s */' % (name, expansion, address(index),
                                                   (' ' + comment) if comment else '')
        lines.append(text)
    lines += ['', '#endif', '']
    HEADER.write_text('\n'.join(lines), encoding='utf-8', newline='\n')


def previous_names():
    """name -> index of the header as it was, to follow renames."""
    names = {}
    if HEADER.exists():
        for m in re.finditer(r'^#define (\w+)[ \t]+[^\n]*?dword_140404A6C\[(\d+)\]', HEADER.read_text(encoding='utf-8'),
                             re.M):
            names[m.group(1)] = int(m.group(2))
    return names


def main():
    sources = {p: p.read_bytes().decode('utf-8') for p in sorted(CLIENT.glob('*.[ch]'))
               if p.name not in (HEADER.name, 'client_data.c')}
    sources[CLIENT / 'client_data.c'] = (CLIENT / 'client_data.c').read_bytes().decode('utf-8')
    rows = read_table()

    # Follow renames made in the table since the last run.
    old = previous_names()
    renames = {}
    for name, index in old.items():
        if index in rows and rows[index][0] != name:
            renames[name] = rows[index][0]

    # Types of addresses without a row, by how the code reads them.
    views = collections.defaultdict(collections.Counter)
    for text in sources.values():
        for m in CAST_ACCESS.finditer(text):
            cast = re.sub(r'\s+', ' ', m.group('cast')).strip()
            t = CAST_TO_TYPE.get(cast.rstrip(' *')) if cast.count('*') == 1 else None
            views[int(m.group('n'))][t or 'other'] += 1
        stripped = CAST_ACCESS.sub('', text)
        for m in ADDRESS_OF.finditer(stripped):
            views[int(m.group('n'))]['address'] += 1
        for m in PLAIN.finditer(ADDRESS_OF.sub('', stripped)):
            views[int(m.group('n'))]['u32'] += 1
    taken = {row[0] for row in rows.values()}
    for index, counter in views.items():
        if index in rows:
            continue
        typed = {k: v for k, v in counter.items() if k in TYPES}
        ctype = max(typed, key=lambda k: (typed[k], k == 'u32')) if typed else 'u32'
        name = default_name(index)
        if name in taken:
            raise SystemExit('duplicate name ' + name)
        rows[index] = [name, ctype, '']
        taken.add(name)

    used = set()
    for text in sources.values():
        used.update(re.findall(r'\b[A-Za-z_]\w*\b', text))
    for index, (name, ctype, comment) in rows.items():
        if name in used and name not in old and name not in renames.values():
            raise SystemExit('%s is already an identifier in the client code' % name)

    def cast_access(m):
        index = int(m.group('n'))
        name, ctype, _ = rows[index]
        cast = re.sub(r'\s+', ' ', m.group('cast')).strip()
        if c_type(ctype) and cast == c_type(ctype) + ' *':
            return name
        return '*(%s)&%s' % (m.group('cast'), name)

    def address_of(m):
        name, ctype, _ = rows[int(m.group('n'))]
        return '&' + name if ctype == 'u32' else '(unsigned int *)&' + name   # same address and type as before

    def plain(m):
        name, ctype, _ = rows[int(m.group('n'))]
        if ctype == 'u32':
            return name
        return '*(unsigned int *)&' + name

    rename_pattern = re.compile(r'\b(%s)\b' % '|'.join(map(re.escape, renames))) if renames else None
    changed = 0
    for path, text in sources.items():
        new = text
        if rename_pattern:
            new = rename_pattern.sub(lambda m: renames[m.group(1)], new)
        if path.name != 'client_data.c':     # the array's own definition stays
            new = CAST_ACCESS.sub(cast_access, new)
            new = ADDRESS_OF.sub(address_of, new)
            new = PLAIN.sub(plain, new)
        if new != text:
            path.write_bytes(new.encode('utf-8'))
            changed += 1
    write_table(rows)
    write_header(rows)
    print('%d names (%d renamed), %d files changed' % (len(rows), len(renames), changed))


if __name__ == '__main__':
    main()
