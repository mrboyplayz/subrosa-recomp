"""Rank functions by structural difference between the committed Hex-Rays
export (pinned client e9500422...) and a fresh decompilation of another build.

Names, local-variable numbering and output style differ between IDA
versions, so text is not compared directly. Per function this counts calls,
control-flow keywords, string literals and float constants, and reports the
functions whose counts disagree.

usage: python structural_diff.py <old-functions-dir> <new-dir> <out.json>
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

QUOTED = re.compile(r'L?"((?:[^"\\]|\\.)*)"')
CALL = re.compile(r'\b[A-Za-z_][A-Za-z0-9_]*\s*\(')
KEYWORDS = re.compile(r'\b(if|while|for|switch|case|return|goto)\b')
FLOAT = re.compile(r'\b\d+\.\d+(?:e[-+]?\d+)?\b')
NOT_CALLS = {'if', 'while', 'for', 'switch', 'return', 'sizeof', 'LODWORD', 'HIDWORD', 'LOBYTE', 'HIBYTE',
             'LOWORD', 'HIWORD', 'BYTE1', 'BYTE2', 'BYTE3', 'SLODWORD', 'SHIDWORD', 'COERCE_FLOAT',
             'COERCE_DOUBLE', 'COERCE_UNSIGNED_INT', 'fabs', 'abs', '__ROL4__', '__ROR4__', '__PAIR64__',
             'SLOBYTE', 'SBYTE1', 'SHIBYTE', 'SLOWORD', 'SHIWORD', 'WORD1', 'WORD2', 'BYTE4', 'BYTE5',
             'BYTE6', 'BYTE7', 'HIBYTE', '_mm_cvtsi32_si128', '_mm_cvtsi128_si32', 'MEMORY'}


def features(path):
    text = path.read_text(encoding='utf-8', errors='replace')
    text = '\n'.join(line for line in text.splitlines() if not line.lstrip().startswith(('//', '/*')))
    strings = Counter(QUOTED.findall(text))
    body = QUOTED.sub('S', text)
    calls = sum(1 for m in CALL.finditer(body) if m.group(0)[:-1].strip() not in NOT_CALLS)
    keywords = Counter(KEYWORDS.findall(body))
    floats = Counter(float(x) for x in FLOAT.findall(body))
    return strings, calls, keywords, floats


def main():
    old_dir, new_dir, out = Path(sys.argv[1]), Path(sys.argv[2]), sys.argv[3]
    new = {p.stem.upper(): p for p in new_dir.glob('*.c')}
    rows = []
    for p in sorted(old_dir.glob('*.c')):
        key = p.name.split('_')[0].upper()
        if key not in new:
            continue
        os_, oc, ok, of = features(p)
        ns, nc, nk, nf = features(new[key])
        lost = sorted(set(os_) - set(ns))
        gained = sorted(set(ns) - set(os_))
        float_delta = sorted(set(of) ^ set(nf))
        score = abs(oc - nc) + sum(abs(ok[k] - nk[k]) for k in set(ok) | set(nk)) + 5 * (len(lost) + len(gained)) \
            + 3 * len(float_delta)
        if score:
            rows.append({'function': '0x' + key.lstrip('0'), 'score': score, 'calls': [oc, nc],
                         'strings_lost': lost[:6], 'strings_gained': gained[:6],
                         'floats_changed': float_delta[:8]})
    rows.sort(key=lambda r: -r['score'])
    json.dump(rows, open(out, 'w'), indent=1)
    print(len(rows), 'functions differ structurally')
    for r in rows[:40]:
        print(r['function'], r['score'], r['calls'], r['strings_lost'][:2], r['strings_gained'][:2], r['floats_changed'][:4])


if __name__ == '__main__':
    main()
