"""Compare the committed Hex-Rays export (old pinned client) with a fresh
per-function decompilation of the installed client, looking for real changes.

Identifiers that only reflect naming (function names, local variable
numbers, string-literal labels) are normalized away; global data
addresses (dword_1402F97BF ...) and numeric constants are kept, so a
moved global or a changed constant shows up.

usage: python compare_exports.py <old-functions-dir> <new-dir> <out.json>
"""
import json, re, sys
from pathlib import Path

old_dir, new_dir, out = Path(sys.argv[1]), Path(sys.argv[2]), sys.argv[3]
FUNC = re.compile(r'\b(?:sub|j|nullsub|loc|locret|def|jpt|unknown_libname)_[0-9A-Fa-f]+\b|MEMORY\[0x[0-9A-Fa-f]+\]')
LOCAL = re.compile(r'\b[va]\d+\b')
STRLABEL = re.compile(r'\ba[A-Z][A-Za-z0-9_]*\b')
DATA = re.compile(r'\b(?:dword|qword|byte|word|xmmword|unk|off|stru|flt|dbl|asc|qword|oword)_([0-9A-Fa-f]{9,})\b')
CONST = re.compile(r'\b0x[0-9A-Fa-f]+u?i?\d*\b|\b\d+\.\d+(?:e[-+]?\d+)?\b|\b\d{3,}u?\b')

def tokens(path):
    text = path.read_text(encoding='utf-8', errors='replace')
    text = FUNC.sub('F', text)
    # Zero-initialized state (from 0x140404A6C) cannot move without the code
    # changing; the old export also wrote it as dword_140404A6C[index].
    data = sorted(a for a in (int(x, 16) for x in DATA.findall(text)) if a < 0x140404A6C)
    consts = sorted(CONST.findall(STRLABEL.sub('S', LOCAL.sub('V', text))))
    return data, consts

new = {p.stem.upper(): p for p in new_dir.glob('*.c')}
report = {'compared': 0, 'missing': [], 'data_changed': [], 'const_changed': []}
for p in sorted(old_dir.glob('*.c')):
    key = p.name.split('_')[0].upper()
    if key not in new:
        report['missing'].append(key); continue
    report['compared'] += 1
    od, oc = tokens(p); nd, nc = tokens(new[key])
    if od != nd:
        so, sn = set(od), set(nd)
        report['data_changed'].append({'function': '0x' + key.lstrip('0'),
            'old_only': [hex(x) for x in sorted(so - sn)][:12],
            'new_only': [hex(x) for x in sorted(sn - so)][:12]})
    if oc != nc:
        report['const_changed'].append('0x' + key.lstrip('0'))
json.dump(report, open(out, 'w'), indent=1)
print('compared', report['compared'], 'missing', len(report['missing']),
      'data-ref changes', len(report['data_changed']), 'constant changes', len(report['const_changed']))
