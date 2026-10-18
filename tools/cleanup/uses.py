"""Show sample uses of an identifier in src/client: uses.py <name> [count]."""
import random, re, sys
from pathlib import Path
CLIENT = Path(__file__).resolve().parent.parent.parent / 'src/client'
name, count = sys.argv[1], int(sys.argv[2]) if len(sys.argv) > 2 else 14
hits = []
for p in sorted(CLIENT.glob('client_*.c')):
    lines = p.read_text(encoding='utf-8').splitlines()
    func = '?'
    for i, line in enumerate(lines):
        if line.startswith('//----- ('):
            m = re.search(r'(\w+)\s*\(', lines[i + 1]) if i + 1 < len(lines) else None
            func = m.group(1) if m else '?'
        if re.search(r'\b%s\b' % re.escape(name), line):
            hits.append((p.name, func, line.strip()))
random.seed(1)
funcs = sorted({f for _, f, _ in hits})
print('%d uses in %d functions' % (len(hits), len(funcs)))
for f, func, line in sorted(random.sample(hits, min(count, len(hits)))):
    print('  %-22s %-16s %s' % (f[7:-2], func, line[:150]))
