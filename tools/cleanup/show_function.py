"""Print a client function's definition: show_function.py <address> [max lines]."""
import re, sys
from pathlib import Path
CLIENT = Path(__file__).resolve().parent.parent.parent / 'src/client'
address = sys.argv[1].upper().removeprefix('0X').removeprefix('SUB_').rjust(16, '0')
limit = int(sys.argv[2]) if len(sys.argv) > 2 else 60
for path in sorted(CLIENT.glob('*.c')):
    text = path.read_text(encoding='utf-8')
    i = text.find('//----- (%s)' % address)
    if i < 0:
        continue
    j = text.find('\n//----- (', i + 1)
    body = text[i:j if j > 0 else len(text)].splitlines()
    print('== %s (%d lines)' % (path.name, len(body)))
    print('\n'.join(l for l in body[1:limit] if not re.match(r'^\s+[\w ]+\*?\s*\*?v\d+;$', l)))
