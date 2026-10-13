"""Rename recompiled client functions after src/client/names.tsv.

Renames the identifier sub_<address> everywhere in src/client, src/rebuild
and src/recovered (C, headers and the recovered assembly) and the
//----- (address) markers keep the original address. Refuses a name that
is already used for something else.
"""
import re
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent.parent
FILES = [p for d in ('src/client', 'src/rebuild', 'src/recovered') for p in (PROJECT / d).rglob('*')
         if p.suffix in ('.c', '.h', '.s', '.inc')]


def main():
    names = {}
    for line in (PROJECT / 'src/client/names.tsv').read_text(encoding='utf-8').splitlines():
        if line.strip() and not line.startswith('#'):
            address, name = line.split()
            names['sub_' + address.upper()] = name
    texts = {p: p.read_bytes().decode('utf-8') for p in FILES}
    everything = ''.join(texts.values())
    for old, new in names.items():
        if re.search(r'\b%s\b' % new, everything) and not re.search(r'\b%s\b' % old, everything):
            continue   # already applied
        if re.search(r'\b%s\b' % new, everything):
            raise SystemExit('%s is already used; cannot rename %s' % (new, old))
    pattern = re.compile(r'\b(%s)\b' % '|'.join(map(re.escape, names)))
    changed = 0
    for path, text in texts.items():
        new_text = pattern.sub(lambda m: names[m.group(1)], text)
        if new_text != text:
            path.write_bytes(new_text.encode('utf-8'))
            changed += 1
    print('%d names, %d files changed' % (len(names), changed))


if __name__ == '__main__':
    main()
