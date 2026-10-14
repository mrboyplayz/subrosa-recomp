"""Functions whose exits check a stack cookie that the function never stored: each such exit faults."""
import glob, re
check = re.compile(r'sub_1401F8B20\(\s*\(unsigned __int64\)\s*&?\w+\s*\^\s*(?:\(unsigned __int64\))?\s*(\w+)\s*\)')
bad = []
total = 0
for f in sorted(glob.glob('src/client/client_*.c')):
    body = open(f, encoding='utf-8', errors='replace').read()
    for part in re.split(r'\n//----- \(', body)[1:]:
        address = part[:16]
        slots = set(check.findall(part))
        if not slots: continue
        total += 1
        for slot in slots:
            if not re.search(r'\b%s\b\s*=[^=]' % re.escape(slot), part):
                name = re.search(r'\b(sub_\w+|\w+)\s*\(', part.split('\n', 2)[1] if '\n' in part else part)
                bad.append((f[11:], address, slot, len(check.findall(part)), 'return sub_1401F8B20' in part))
print(total, 'functions end in a cookie check;', len(bad), 'never store the cookie:')
for b in bad: print('  %s %s slot %s, %d exits, result returned: %s' % b)
