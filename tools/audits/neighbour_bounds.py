"""For every object the repair filled: is the address of a later original symbol used as a loop bound or
comparison in code that also walks the object, and does that symbol still follow it in the linked client?"""
import glob, re, subprocess
text = open('src/client/client_data.c', encoding='utf-8').read()
filled = {m.group(1): int(m.group(2)) for m in re.finditer(r'unsigned char (?:sr_bytes_)?((?:unk|off)_1[4B][0-9A-F]{7})\[(\d+)\]', text)}
for n in ('unk_140284A60', 'unk_140284A70', 'unk_140284B00', 'unk_140284B10', 'unk_140284B20'): filled[n] = 16
filled['unk_1402B26C0'] = 4; filled['off_1402848C0'] = 16
syms = {}
for l in subprocess.run(['nm', 'reports/current/link/client-link-probe.exe'], capture_output=True, text=True).stdout.splitlines():
    part = l.split()
    if len(part) == 3: syms.setdefault(part[2], int(part[0], 16))
addr = lambda name: int(name.rsplit('_', 1)[1], 16)
names = sorted(set(re.findall(r'\b\w+_1[4B][0-9A-F]{7}\b', text)), key=addr)
# split sources into functions
functions = []
for f in glob.glob('src/client/client_*.c'):
    if f.endswith('client_data.c'): continue
    body = open(f, encoding='utf-8', errors='replace').read()
    for part in re.split(r'\n//----- \(', body):
        functions.append((f[11:], part))
symbol = re.compile(r'&\s*(\w+_(1[4B][0-9A-F]{7}))\b')
compare = re.compile(r'(<=?|>=?|!=|==)\s*(?:\([^()]*\)\s*)*&\s*(\w+_(1[4B][0-9A-F]{7}))\b')
found = 0
for name, size in sorted(filled.items(), key=lambda kv: addr(kv[0])):
    a = addr(name)
    for f, part in functions:
        if not re.search(r'\b%s\b' % name, part): continue
        for m in compare.finditer(part):
            other = m.group(2); d = int(m.group(3), 16) - a
            if other == name or not (0 < d <= 0x20000): continue
            linked = syms.get(other, 0) - syms.get(name, 0)
            head = part.split('\n', 1)[0][:16]
            print('%s%s: %s %s &%s  original distance %#x, linked distance %#x  [%s %s]' % (
                'OK   ' if linked == d else 'BROKEN ', name, m.group(1), '', other, d, linked, f, head))
            found += 1
print(found, 'neighbour-address comparisons')
