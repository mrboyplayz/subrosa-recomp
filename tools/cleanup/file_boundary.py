"""Which functions defined in one client file are referenced from other files."""
import re, sys
from pathlib import Path
CLIENT = Path(__file__).resolve().parent.parent.parent / 'src/client'
DEF = re.compile(r'^[A-Za-z_][^;()\n]*?\b((?:sub|sr|j)_\w+|\w+)\s*\([^;]*$', re.M)

def defined(text):
    names = []
    for m in re.finditer(r'^//----- \(([0-9A-F]+)\)[^\n]*\n([^\n]*)', text, re.M):
        n = re.search(r'\b(\w+)\s*\(', m.group(2))
        if n: names.append((n.group(1), m.group(1)))
    return names

target = CLIENT / sys.argv[1]
text = target.read_text(encoding='utf-8')
others = ''.join(p.read_text(encoding='utf-8') for p in CLIENT.glob('*.c') if p != target)
names = defined(text)
print(len(names), 'functions in', target.name)
for name, address in names:
    count = len(re.findall(r'\b%s\b' % re.escape(name), others))
    if count:
        print('  %-28s %s  used %d times outside' % (name, address, count))
