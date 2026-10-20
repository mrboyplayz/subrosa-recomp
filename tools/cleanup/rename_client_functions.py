"""Rename recompiled client symbols after src/client/names.tsv.

Each row gives an original address and a name. The symbol the decompiler
named after that address - a function (sub_), data (qword_, dword_, unk_,
off_, byte_, word_, xmmword_, flt_, dbl_, stru_, asc_) or a recovered data
alias (sr_mem_) - is renamed throughout the client, engine, rebuild, runtime
helpers and native fixtures (including mutation sources). The //----- (address)
markers keep the original address. A name already used for something else
is refused; a row whose name is already in place is skipped.

    python tools/cleanup/rename_client_functions.py
"""
import re
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent.parent
FILES = [p for d in ('src/client', 'src/rebuild', 'src/recovered', 'src/engine', 'tools/native-compare')
         for p in (PROJECT / d).rglob('*')
         if p.suffix in ('.c', '.h', '.s', '.inc', '.mutations')]
PREFIXES = ('sub', 'qword', 'dword', 'unk', 'off', 'byte', 'word', 'xmmword', 'flt', 'dbl', 'stru', 'asc')


def candidates(address):
    upper, lower = address.upper(), address.lower()
    return ['%s_%s' % (p, upper) for p in PREFIXES] + ['sr_mem_' + lower]


def main():
    rows = []
    for line in (PROJECT / 'src/client/names.tsv').read_text(encoding='utf-8').splitlines():
        if line.strip() and not line.startswith('#'):
            address, name = line.split()[:2]
            rows.append((address, name))
    texts = {p: p.read_bytes().decode('utf-8') for p in FILES}
    identifiers = set()
    for text in texts.values():
        identifiers.update(re.findall(r'\b[A-Za-z_]\w*\b', text))
    renames = {}
    for address, name in rows:
        found = [c for c in candidates(address) if c in identifiers]
        if not found:
            continue                                   # applied already, or nothing by that address
        if len(found) > 1:
            raise SystemExit('%s: several symbols at this address: %s' % (address, ', '.join(found)))
        if name in identifiers:
            raise SystemExit('%s is already used; cannot rename %s' % (name, found[0]))
        renames[found[0]] = name
    if not renames:
        print('nothing to rename')
        return
    pattern = re.compile(r'\b(%s)\b' % '|'.join(map(re.escape, renames)))
    changed = 0
    for path, text in texts.items():
        new_text = pattern.sub(lambda m: renames[m.group(1)], text)
        if new_text != text:
            path.write_bytes(new_text.encode('utf-8'))
            changed += 1
    print('%d renamed, %d files changed' % (len(renames), changed))


if __name__ == '__main__':
    main()
