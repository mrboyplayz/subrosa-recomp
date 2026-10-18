"""Set names (and optionally types/comments) in state_names.tsv by address.

    set_names.py ADDRESS=name[:type][#comment] ...
"""
import sys
from pathlib import Path
TABLE = Path(__file__).resolve().parent.parent.parent / 'src/client/state_names.tsv'
lines = TABLE.read_text(encoding='utf-8').splitlines()
index = {l.split('\t')[0]: i for i, l in enumerate(lines) if l and not l.startswith('#')}
taken = {l.split('\t')[1] for l in lines if l and not l.startswith('#')}
for arg in sys.argv[1:]:
    address, spec = arg.split('=', 1)
    spec, _, comment = spec.partition('#')
    name, _, ctype = spec.partition(':')
    address = address.upper().removeprefix('0X').removeprefix('G_')
    if address not in index:
        sys.exit('no row for ' + address)
    if name in taken and lines[index[address]].split('\t')[1] != name:
        sys.exit('name taken: ' + name)
    fields = lines[index[address]].split('\t')
    fields[1] = name
    if ctype:
        fields[2] = ctype
    if comment:
        fields[3:] = [comment.strip()]
    lines[index[address]] = '\t'.join(fields)
    taken.add(name)
TABLE.write_text('\n'.join(lines) + '\n', encoding='utf-8', newline='\n')
print('%d names set' % (len(sys.argv) - 1))
