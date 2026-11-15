"""List client routine blocks that are still decompiled C (no engine call in body)."""
import re
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent
CLIENT = PROJECT / 'src/client'
ENGINE = PROJECT / 'src/engine'

LIBRARY_ENGINE = {'crt_math.c', 'crt_string.c', 'crt_strtod.c'}
names = set()
for p in ENGINE.glob('*.c'):
    if p.name in LIBRARY_ENGINE:
        continue
    for m in re.finditer(r'^[A-Za-z_][\w \t\*]*?\b([a-z][a-z0-9_]*)\s*\([^;{]*\)\s*\{',
                         p.read_text(encoding='utf-8', errors='replace'), re.M):
        n = m.group(1)
        if n and not n.startswith(('nc_', 'crt_')):
            names.add(n)
names -= {'if', 'for', 'while', 'switch', 'return', 'sizeof', 'main'}
engine_call = re.compile(r'\b(%s)\s*\(' % '|'.join(sorted(names)))

rows = []
for p in sorted(CLIENT.glob('client_*.c')):
    if p.name.startswith(('client_runtime_', 'client_stb_')):
        continue  # library code, not game routines
    text = p.read_text(encoding='utf-8', errors='replace')
    for block in re.split(r'(?=//----- \(0*[0-9A-Fa-f]+\))', text):
        if not re.match(r'//----- \(0*[0-9A-Fa-f]+\)', block):
            continue
        address = block[9:block.index(')')].upper()
        body_lines = [l for l in block.splitlines() if not l.strip().startswith(('//', '*', '/*'))]
        body = '\n'.join(body_lines)
        if engine_call.search(body):
            continue
        # name from the first function-like line
        nm = ''
        for l in body_lines:
            m2 = re.search(r'([A-Za-z_][\w]*)\s*\(', l)
            if m2 and m2.group(1) not in ('if', 'for', 'while', 'switch', 'sizeof', 'return'):
                nm = m2.group(1)
                break
        rows.append((p.name, address, nm, len(body_lines), body.count(';')))

rows.sort()
print('%d unwrapped game routines' % len(rows))
for f, a, n, lines, semis in rows:
    print('%-38s %s %-42s lines=%-4d semis=%d' % (f, a, n, lines, semis))
