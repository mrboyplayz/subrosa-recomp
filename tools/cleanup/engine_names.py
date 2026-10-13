"""Collect the named scalar globals of src/engine: name -> (C type, address)."""
import re
from pathlib import Path
ENGINE = Path(__file__).resolve().parent.parent.parent / 'src/engine'
SCALAR = re.compile(r'^#define\s+(\w+)\s+SR_GLOBAL\(\s*([\w ]+?)\s*,\s*(0x[0-9A-Fa-f]+)ULL\s*\)\s*(?:/\*.*)?$')

def scalars():
    names = {}
    for header in sorted(ENGINE.glob('*.[ch]')):
        for line in header.read_text(encoding='utf-8').splitlines():
            m = SCALAR.match(line.strip())
            if m:
                names.setdefault(m.group(1), (m.group(2), int(m.group(3), 16), header.name))
    return names

if __name__ == '__main__':
    for name, (ctype, address, where) in sorted(scalars().items(), key=lambda kv: kv[1][1]):
        print('%-40s %-10s %#x %s' % (name, ctype, address, where))
