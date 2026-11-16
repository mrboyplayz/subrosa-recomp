"""List client blocks whose body does not call an engine port (the undone work).

    python scripts/worklist.py            # summary per file
    python scripts/worklist.py --list     # one line per undone block
"""
import re
import sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent
CLIENT = PROJECT / 'src/client'
ENGINE = PROJECT / 'src/engine'
LIBRARY_ENGINE = {'crt_math.c', 'crt_string.c', 'crt_strtod.c'}

names = set()
for p in ENGINE.glob('*.c'):
    if p.name in LIBRARY_ENGINE:
        continue
    for m in re.finditer(r'^[A-Za-z_][\w \t\*]*?\b([a-z][a-z0-9_]*)\s*\([^;{]*\)[^;{]*?\{',
                         p.read_text(encoding='utf-8', errors='replace'), re.M):
        n = m.group(1)
        if n and not n.startswith(('nc_', 'crt_')):
            names.add(n)
names -= {'if', 'for', 'while', 'switch', 'return', 'sizeof', 'main'}
engine_call = re.compile(r'\b(%s)\s*\(' % '|'.join(sorted(names)))

LIST = '--list' in sys.argv
per_file = {}
for p in sorted(CLIENT.glob('client_*.c')):
    if p.name.startswith(('client_runtime_', 'client_stb_')):
        continue
    text = p.read_text(encoding='utf-8', errors='replace')
    for block in re.split(r'(?=//----- \(0*[0-9A-Fa-f]+\))', text):
        if not re.match(r'//----- \(0*[0-9A-Fa-f]+\)', block):
            continue
        address = block[9:block.index(')')].upper()
        body = '\n'.join(l for l in block.splitlines() if not l.strip().startswith(('//', '*', '/*')))
        if (engine_call.search(body)
                and not re.search(r'\bfor\s*\(|\bwhile\s*\(|\bswitch\s*\(', body)
                and body.count('\n') <= 30 and body.count(';') <= 8):
            continue
        # first line of the signature for a hint
        sig = next((l.strip() for l in block.splitlines()[1:] if l.strip()), '')
        per_file.setdefault(p.name, []).append((address, sig.split('(')[0]))

total = 0
for f in sorted(per_file, key=lambda k: -len(per_file[k])):
    n = len(per_file[f])
    total += n
    if LIST:
        for addr, sig in per_file[f]:
            print('%s\t%s\t%s' % (f, addr, sig))
    else:
        print('%4d  %s' % (n, f))
print('%d undone game-routine blocks' % total)
