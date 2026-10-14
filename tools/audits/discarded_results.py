"""Lists routines whose returns were rewritten as "result discarded by all reviewed callers" but whose result is
used at some call site (if-condition, assignment, return, argument). Each hit needs the real result restored from
the original's exit paths (0x140035E50, the train sweep, was one: trains had no collision).
    python tools/audits/discarded_results.py
"""
import glob
import re

MARK = 'result discarded by all reviewed callers'
FUNC = re.compile(r'^[A-Za-z_][^;(]*?\b(sub_14[0-9A-F]+)\(', re.M)

sources = {p: open(p, encoding='utf-8', errors='replace').read() for p in glob.glob('src/client/*.c')}
marked = set()
for text in sources.values():
    starts = [(m.start(), m.group(1)) for m in FUNC.finditer(text)]
    for pos in [m.start() for m in re.finditer(re.escape(MARK), text)]:
        owner = None
        for start, name in starts:
            if start > pos:
                break
            owner = name
        if owner:
            marked.add(owner)

hits = 0
for name in sorted(marked):
    call = re.compile(r'(.{0,60})\b' + name + r'\(')
    for path, text in sources.items():
        for lineno, line in enumerate(text.splitlines(), 1):
            for m in call.finditer(line):
                before = m.group(1)
                if re.match(r'^[A-Za-z_][^;]*$', line) and not line.startswith(' '):
                    continue  # definition / prototype
                stripped = before.strip()
                if stripped in ('', '{', '}', 'else') or stripped.endswith((';', '{', '}')):
                    continue  # statement call, result ignored
                hits += 1
                print(f'{name}: {path}:{lineno}: {line.strip()[:140]}')
print(f'{len(marked)} marked routines, {hits} call sites that use a result')
