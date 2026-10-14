"""Call sites in src/client that pass an undefined integer local where the callee takes a float.

Hex-Rays loses xmm arguments it cannot track: the C then passes a local that is declared with an
integer type and never assigned (`sub_14007D420(v13, v12, v14);`), and the callee draws from garbage.
Reported: every C call to a function that takes a float in some position -- its prototype says
float/double there, or the original reads that xmm register (xmm0-xmm3) on entry before writing it --
where the argument in such a position is (a cast of) an integer-typed local of the caller that nothing
in the caller assigns.

Also reported (class P): an integer-typed parameter of the caller passed bare in such a position where
the original does not convert an integer into that xmm register before the call (the caller's
parameter is really a float, or a pointer to floats that the original dereferences). Each C call is paired with the original's direct call instruction to the same callee: the
n-th call in the C text of a function is the n-th `call` in its machine code when the counts agree
(when they do not, the site is listed with both counts and no address).

    python tools/audits/float_args.py [--all] [--entry]

--all lists every site (default: per-function summary plus the first sites).
--entry also lists the prototypes themselves: callees that read xmm0-xmm3 on entry in a position the C
prototype gives an integer type (informational: harmless when every C caller passes the right bits).

Entries in KNOWN are listed with their reason and do not count.
"""
import argparse, re, sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import float_results as FR
R = FR.R
X = FR.X

PROJECT = FR.PROJECT
# (caller name, callee name): reason
KNOWN = {
}
INT = re.compile(r'^(?:const\s+)?(?:unsigned\s+|signed\s+)?(?:__int8|__int16|__int32|__int64|int|char|short|long|long long|_BYTE|_WORD|_DWORD|_QWORD|_BOOL\d|BOOL|bool|size_t|unsigned)$')
ASSIGN = r'(?:\b{0}\s*(?:[-+*/%|&^]|<<|>>)?=(?!=)|\b{0}\s*(?:\+\+|--)|(?:\+\+|--)\s*{0}\b|&\s*{0}\b|\b\w+\(\s*{0}\s*\)\s*(?:[-+*/%|&^]|<<|>>)?=(?!=))'


def params(text):
    """Parameter types of a prototype's parameter list text."""
    text = text.strip()
    if text in ('', 'void'): return []
    out, depth, cur = [], 0, ''
    for ch in text:
        if ch in '([': depth += 1
        elif ch in ')]': depth -= 1
        if ch == ',' and depth == 0: out.append(cur); cur = ''
        else: cur += ch
    out.append(cur)
    types = []
    for p in out:
        p = ' '.join(p.split())
        if p == '...': types.append('...'); continue
        m = re.match(r'^(.*?)(\b[A-Za-z_]\w*)$', p)
        t = m[1].strip() if m and m[1].strip() and not INT.match(p) and not FR.is_float(p) else p
        types.append(t)
    return types


def split_args(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([{': depth += 1
        elif ch in ')]}': depth -= 1
        if ch == ',' and depth == 0: out.append(cur); cur = ''
        else: cur += ch
    out.append(cur)
    return [a.strip() for a in out] if s.strip() else []


def prototypes(src):
    """{name: [parameter types]}: headers first, definitions override."""
    protos = {}
    for h in ('shared_client.h', 'recovered_forward.h'):
        text = R.blank((PROJECT / 'src/client' / h).read_text(encoding='utf-8', errors='replace'))
        for m in re.finditer(r'^[A-Za-z_][\w \t\*]*?[ \t\*](\w+)\s*\(([^()]*(?:\([^()]*\)[^()]*)*)\)\s*;', text, re.M):
            protos.setdefault(m[1], params(m[2]))
    for a, (name, _) in src.names.items():
        body = R.blank(src.body(a))
        m = re.search(r'\b%s\s*\(' % re.escape(name), body)
        if m:
            e = R.close_paren(body, m.end() - 1)
            if e > 0: protos[name] = params(body[m.end():e])
    return protos


def int_locals(body, any_type=False):
    """{name: type} of the integer-typed (any_type: also float-typed) locals declared at the top of a function body."""
    out = {}
    for m in re.finditer(r'^[ \t]+((?:unsigned |signed |const )*[A-Za-z_]\w*(?: \w+)?)[ \t]+(\w+);', body, re.M):
        t = ' '.join(m[1].split())
        if INT.match(t) or (any_type and FR.is_float(t)): out[m[2]] = t
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--entry', action='store_true')
    ap.add_argument('--float-locals', action='store_true', help='also undefined float-typed locals and *(float *)&v puns')
    args = ap.parse_args()
    src = R.Sources()
    code = FR.Code(sorted(src.marks))
    protos = prototypes(src)

    def address(name):
        if name in src.byname: return src.byname[name]
        m = re.fullmatch(r'sub_([0-9A-F]+)', name)
        return int(m[1], 16) if m else None

    # xmm0-3 read on entry (before any write, call or branch) = a float parameter in that position
    regs = [getattr(X, 'X86_REG_XMM%d' % n) for n in range(4)]
    entry = {}
    for name in protos:
        a = address(name)
        if a is None or a not in code.end: continue
        ins = code.disasm(a)
        for k, reg in enumerate(regs):
            for i in ins:
                if i.id == X.X86_INS_CALL or i.group(X.X86_GRP_JUMP) or i.mnemonic.startswith('ret'): break
                rd, wr = FR.reg_ops(i, reg)
                if rd: entry.setdefault(name, set()).add(k); break
                if wr: break
    floaty = {n: sorted({k for k, t in enumerate(ps) if FR.is_float(t)} | entry.get(n, set())) for n, ps in protos.items()}
    floaty = {n: ks for n, ks in floaty.items() if ks}

    callpat = re.compile(r'\b(' + '|'.join(map(re.escape, sorted(floaty, key=len, reverse=True))) + r')\s*\(')
    found, known, mismatched = [], [], set()
    for f in src.marks:
        if f not in src.where: continue
        file, start, _ = src.where[f]
        raw = src.body(f)
        body = R.blank(raw)
        fname = src.names.get(f, ('?',))[0]
        locs = int_locals(body, args.float_locals)
        head = body[:body.find('{')] if '{' in body else ''
        hp = re.search(r'\b%s\s*\((.*)\)' % re.escape(fname), head, re.S)
        own = {}
        if hp:
            for t in split_args(hp[1]):
                pm = re.match(r'^(.*?)\b(\w+)$', ' '.join(t.split()))
                if pm and INT.match(pm[1].strip()): own[pm[2]] = pm[1].strip()
        calls = {}
        for m in callpat.finditer(body):
            if m[1] == fname and R.use_kind(body, m.start(1), m.end(1)) == 'decl': continue
            e = R.close_paren(body, m.end() - 1)
            if e < 0: continue
            calls.setdefault(m[1], []).append((m.start(1), split_args(body[m.end():e])))
        if not calls: continue
        orig = {}
        if f in code.end:
            for i in code.disasm(f):
                if i.id in (X.X86_INS_CALL, X.X86_INS_JMP) and i.operands and i.operands[0].type == X.X86_OP_IMM:
                    orig.setdefault(i.operands[0].imm, []).append(i.address)
        assigned = {}
        for callee, lst in calls.items():
            sites = orig.get(address(callee), [])
            for n, (pos, cargs) in enumerate(lst):
                bad = []
                at = sites[n] if len(sites) == len(lst) else None
                for k in floaty[callee]:
                    if k >= len(cargs): continue
                    am = re.fullmatch(r'(?:\([^()]*\)\s*)?(\w+)', cargs[k])
                    if am and am[1] in own and k < 4 and at is not None:
                        ws = code.writers(f, code.index(f)[at], regs[k])
                        if not all(w == 'ins' and x.mnemonic in ('cvtsi2ss', 'cvtsi2sd', 'cvtdq2ps', 'cvtdq2pd') for w, x in ws):
                            bad.append((k, cargs[k], 'parameter %s; original: %s' % (own[am[1]], '; '.join(sorted({'%s %s' % (w, FR.show(x)) for w, x in ws})))))
                        continue
                    pun = args.float_locals and re.fullmatch(r'\*\((?:float|double) \*\)&(\w+)', cargs[k])
                    if pun and pun[1] in locs: am = pun
                    if not am or am[1] not in locs: continue
                    v = am[1]
                    if v not in assigned:
                        n_puns = len(re.findall(r'\*\((?:float|double) \*\)&%s\b(?!\s*=[^=])' % re.escape(v), body)) if args.float_locals else 0
                        n_refs = len(re.findall(r'&\s*%s\b' % re.escape(v), body))
                        plain = re.search(ASSIGN.replace(r'|&\s*{0}\b', '').format(re.escape(v)), body)
                        assigned[v] = bool(plain) or n_refs > n_puns
                    if not assigned[v]: bad.append((k, cargs[k], locs[v]))
                if not bad: continue
                line = src.text[file].count('\n', 0, start + pos) + 1
                if at is None: mismatched.add((fname, callee, len(lst), len(sites)))
                row = (Path(file).name, line, fname, f, callee, at, bad, len(lst), len(sites))
                if (fname, callee) in KNOWN: known.append(row + (KNOWN[(fname, callee)],))
                else: found.append(row)

    print('float-taking callees: %d (%d of them only by entry reads); C calls passing an undefined integer local, or an unconverted integer parameter, in a float position: %d' % (
        len(floaty), sum(1 for n in floaty if not any(FR.is_float(t) for t in protos[n])), len(found)))
    byfile, bycallee = {}, {}
    for r in found:
        byfile[r[0]] = byfile.get(r[0], 0) + 1
        bycallee[r[4]] = bycallee.get(r[4], 0) + 1
    for k in sorted(byfile): print('   %-32s %d' % (k, byfile[k]))
    for k in sorted(bycallee, key=lambda k: -bycallee[k]): print('   callee %-25s %d' % (k, bycallee[k]))
    shown = {}
    for file, line, fname, f, callee, at, bad, nc, no in found:
        key = (fname, callee)
        shown[key] = shown.get(key, 0) + 1
        if not args.all and shown[key] > 3:
            if shown[key] == 4: print('      ... (--all for every site of %s in %s)' % (callee, fname))
            continue
        print('   %s:%d %s 0x%X -> %s at %s: %s' % (file, line, fname, f, callee,
              '0x%X' % at if at else 'unpaired (C %d calls, original %d)' % (nc, no),
              ', '.join('arg %d %s (%s)' % (k + 1, a, t) for k, a, t in bad)))
    print('known, with reason: %d' % len(known))
    for row in known: print('   %s:%d %s -> %s: %s' % (row[0], row[1], row[2], row[4], row[-1]))

    if args.entry:
        # xmm0-3 read on entry (before any write) = a float parameter in that position
        print('prototype check (informational): position by position, entry reads vs C types')
        for name, ps in sorted(protos.items()):
            a = address(name)
            reads = entry.get(name, set())
            bad = [k for k in sorted(reads) if k < len(ps) and not FR.is_float(ps[k]) and ps[k] != '...'] + \
                  [k for k in sorted(reads) if k >= len(ps)]
            if bad: print('   %s 0x%X: reads xmm%s on entry, C has (%s)' % (name, a, ','.join(map(str, bad)), ', '.join(ps)))
    return 1 if found else 0


if __name__ == '__main__':
    sys.exit(main())
