"""Functions and call sites in src/client that lose a floating-point result of the original.

Decided from the original's machine code: after a direct call, a caller that reads xmm0 before
writing it is using the callee's floating-point result. Reported:

  A  the original's callers read xmm0, the C return type is an integer type or void;
  B  a prototype in a header disagrees with the definition about that;
  C  a caller in the C calls the function as a bare statement (result discarded) although the
     original reads xmm0 after that call;
  D  width: every exit of the original leaves a float (ss) and the C says double, or the reverse;
  E  (lower priority, --all) the C says float/double but no caller in the original reads xmm0;
  F  (informational, --all) the caller's C has fewer uses of the result than the original has reads
     and discards none: the caller was rewritten by hand, wraps src/engine, or Hex-Rays merged calls.

A caller that returns right after the call, or tail-jumps to the function, passes the result on:
such sites count as reads when the caller's own callers read xmm0 (worked out to a fixed point).
A call directly followed by another call counts when that callee reads xmm0 on entry.
Call sites inside code that is not C yet (src/rebuild/client_link/client_native_gaps.s) are
included: every unwind chunk of the original is scanned, not only functions with a marker.
The functions that file defines are audited too, against their prototypes in the headers.
Calls through the import table are listed with --imports. Calls through other pointers are not seen.

    python tools/audits/float_results.py [--all] [--imports] [--why NAME] [--exits NAME]

Entries in KNOWN are listed with their reason and do not count as mismatches.
"""
import argparse, re, struct, sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent.parent
sys.path.insert(0, str(PROJECT / 'scripts'))
import repair_client_cookie_exits as R
import capstone, pefile
from capstone import x86_const as X

XMM = {getattr(X, 'X86_REG_XMM%d' % n): n for n in range(16)}
XMM0 = X.X86_REG_XMM0
ZERO = {'xorps', 'xorpd', 'pxor', 'pcmpeqd', 'pcmpeqb', 'pcmpeqw', 'pcmpeqq', 'subps', 'subpd', 'psubd'}
# Forms whose destination is only written (or merged into): its old value is not used as a number.
LOAD = {'cvtsi2ss', 'cvtsi2sd', 'cvtss2sd', 'cvtsd2ss', 'sqrtss', 'sqrtsd', 'roundss', 'roundsd', 'rcpss', 'rsqrtss',
        'movss', 'movsd', 'movaps', 'movups', 'movapd', 'movupd', 'movdqa', 'movdqu', 'movd', 'movq', 'movlps', 'movhps',
        'cvtdq2ps', 'cvtdq2pd', 'cvtps2pd', 'cvtpd2ps', 'pshufd', 'sqrtps', 'cvttps2dq'}
COPY = {'movaps', 'movups', 'movapd', 'movupd', 'movdqa', 'movdqu'}

# name, or (callee, caller): reason. Reviewed cases where the rule does not mean a lost result.
KNOWN = {
}


def is_float(t):
    return bool(re.search(r'\b(float|double|__m128\w*)$', t.replace('const', '').strip()))


def reg_ops(i, reg):
    """(reads, writes) of one xmm register by an instruction, not counting writes that only merge."""
    try: r, w = i.regs_access()
    except capstone.CsError: return False, False
    rd, wr = reg in r, reg in w
    if not (rd or wr): return False, False
    ops = i.operands
    if len(ops) >= 2 and ops[0].type == X.X86_OP_REG and ops[0].reg == reg:
        same = ops[1].type == X.X86_OP_REG and ops[1].reg == reg
        if i.mnemonic in ZERO and same: return False, True
        if i.mnemonic in LOAD: return same, True
    return rd, wr


def width(i):
    """f, d or ? for the kind of value an instruction reads or leaves."""
    m = i.mnemonic
    if m in ('cvtsd2ss', 'cvtsi2ss', 'cvtpd2ps', 'cvtdq2ps'): return 'f'
    if m in ('cvtss2sd', 'cvtsi2sd', 'cvtps2pd', 'cvtdq2pd'): return 'd'
    if m in COPY or m in ('movq', 'movd') or m.startswith('p'): return '?'
    if m.endswith('ss') or m.endswith('ps'): return 'f'
    if m.endswith('sd') or m.endswith('pd'): return 'd'
    if m.startswith('cvttss') or m.startswith('cvtss'): return 'f'
    if m.startswith('cvttsd') or m.startswith('cvtsd'): return 'd'
    return '?'


class Code(R.Original):
    """The original with every unwind chunk scanned for call sites."""
    def __init__(self, marks):
        super().__init__(marks)
        pe = pefile.PE(str(R.ORIGINAL), fast_load=False)
        raw = next(s for s in pe.sections if s.Name.startswith(b'.pdata')).get_data()
        chunks = sorted((R.BASE + b, R.BASE + e) for b, e, _ in struct.iter_unpack('<III', raw[:len(raw) // 12 * 12]) if b)
        covered = sorted((a, e) for a, e in self.end.items())
        n = 0
        for b, e in chunks:
            while n < len(covered) and covered[n][1] <= b: n += 1
            if n < len(covered) and covered[n][0] <= b < covered[n][1]: continue
            self.end.setdefault(b, e)
        # Leaf functions have no unwind data: they run to the next known start.
        known = sorted(set(self.end) | set(marks))
        for n, a in enumerate(known):
            if a in self.end: continue
            # ... or to the first ret/jmp that no earlier branch of the function jumps past
            limit = known[n + 1] if n + 1 < len(known) else self.t1
            reach = a
            for i in self.md.disasm(self.code[a - self.t0:limit - self.t0], a):
                t = R.target(i) if i.group(X.X86_GRP_JUMP) else None
                if t is not None and a <= t < limit: reach = max(reach, t)
                if (i.id == X.X86_INS_JMP or i.mnemonic.startswith('ret')) and i.address + i.size > reach:
                    limit = i.address + i.size
                    break
            self.end[a] = limit
        self.marked = set(marks)
        self.imports = {imp.address: (imp.name or b'#%d' % imp.ordinal).decode() for d in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []) for imp in d.imports}
        self._at, self._jumps = {}, {}

    def index(self, f):
        if f not in self._at: self._at[f] = {i.address: n for n, i in enumerate(self.disasm(f))}
        return self._at[f]

    def flow(self, caller, start=None):
        """What happens to xmm0 after the call at `start` (or from the function's entry): a set of outcomes."""
        ins, at = self.disasm(caller), self.index(caller)
        found, seen, work = set(), set(), [0 if start is None else at[start] + 1]
        while work:
            n = work.pop()
            while True:
                if n >= len(ins): found.add(('unknown', None)); break
                if n in seen: break
                seen.add(n)
                i = ins[n]
                if i.id == X.X86_INS_CALL:
                    t = R.target(i)
                    if t == R.COOKIE: n += 1; continue
                    found.add(('call', t) if t is not None else ('dead', None)); break
                if i.mnemonic.startswith('ret'): found.add(('returned', None)); break
                if i.id == X.X86_INS_INT3: break
                if i.group(X.X86_GRP_JUMP):
                    t = R.target(i)
                    if t is None: found.add(('unknown', None)); break
                    if t not in at:
                        if i.id == X.X86_INS_JMP: found.add(('tail', t)); break
                        found.add(('unknown', None)); n += 1; continue
                    if i.id == X.X86_INS_JMP: n = at[t]; continue
                    work.append(at[t]); n += 1; continue
                rd, wr = reg_ops(i, XMM0)
                if rd: found.add(('read', i)); break
                if wr: found.add(('dead', None)); break
                n += 1
        return found

    def writers(self, f, n, reg=XMM0, depth=0):
        """Instructions that last wrote `reg` on the paths into instruction n: [(kind, instruction or target)].
        kind: ins, call (direct, with target), entry (the function's own argument)."""
        ins = self.disasm(f)
        if f not in self._jumps:
            j = {}
            for k, i in enumerate(ins):
                if i.group(X.X86_GRP_JUMP) and R.target(i) is not None: j.setdefault(R.target(i), []).append(k)
            self._jumps[f] = j
        jumps = self._jumps[f]
        out, seen, work = [], set(), [n]
        while work:
            k = work.pop()
            if k in seen: continue
            seen.add(k)
            work.extend(jumps.get(ins[k].address, []))
            if k == 0: out.append(('entry', None)); continue
            p = ins[k - 1]
            if p.id in (X.X86_INS_JMP, X.X86_INS_INT3) or p.mnemonic.startswith('ret'): continue
            if p.id == X.X86_INS_CALL:
                if R.target(p) == R.COOKIE: work.append(k - 1)
                elif XMM.get(reg, 0) >= 6: work.append(k - 1)  # xmm6..15 survive calls
                else: out.append(('call', R.target(p) if R.target(p) is not None else p))
                continue
            if reg_ops(p, reg)[1]:
                src = p.operands[1] if len(p.operands) >= 2 else None
                if p.mnemonic in COPY and src is not None and src.type == X.X86_OP_REG and src.reg in XMM and src.reg != reg and depth < 6:
                    out.extend(self.writers(f, k - 1, src.reg, depth + 1))
                else: out.append(('ins', p))
                continue
            work.append(k - 1)
        return out

    def exits(self, f):
        """[(address of ret or tail jump, writers of xmm0)] for every way out of a function."""
        ins, at = self.disasm(f), self.index(f)
        out = []
        for n, i in enumerate(ins):
            if i.mnemonic.startswith('ret'): out.append((i.address, self.writers(f, n)))
            elif i.id == X.X86_INS_JMP and R.target(i) is not None and R.target(i) not in at:
                out.append((i.address, [('call', R.target(i))]))
        return out


def show(x):
    if x is None: return ''
    if isinstance(x, str): return x
    if isinstance(x, int): return '0x%X' % x
    return '0x%X: %s %s' % (x.address, x.mnemonic, x.op_str)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--all', action='store_true', help='also list class E and every site of each finding')
    ap.add_argument('--imports', action='store_true', help='list imported functions whose xmm0 is read after a call')
    ap.add_argument('--why', help='print every call site of one function with what follows it')
    ap.add_argument('--exits', help='print what one function leaves in xmm0 at each exit')
    args = ap.parse_args()
    src = R.Sources()
    # functions kept as assembly: C calls them through a header prototype
    gaps = {}
    for m in re.finditer(r'^\.globl (\w+)\n\1:\n# ([0-9a-f]+):', (PROJECT / 'src/rebuild/client_link/client_native_gaps.s').read_text(), re.M):
        if int(m[2], 16) not in src.names: gaps[int(m[2], 16)] = m[1]
    code = Code(sorted(set(src.marks) | set(gaps)))
    starts = sorted(code.end)

    # every direct call / tail jump to a marked function, and every call through the import table
    sites, imports = {}, {}
    for a in starts:
        for i in code.disasm(a):
            if i.id not in (X.X86_INS_CALL, X.X86_INS_JMP) or not i.operands: continue
            op = i.operands[0]
            if op.type == X.X86_OP_IMM:
                t = op.imm
                if t in code.marked and t != R.COOKIE and (i.id == X.X86_INS_CALL or not (a <= t < code.end[a])):
                    sites.setdefault(t, []).append((i.address, i.id == X.X86_INS_JMP, a))
            elif op.type == X.X86_OP_MEM and op.mem.base == X.X86_REG_RIP and i.id == X.X86_INS_CALL:
                t = i.address + i.size + op.mem.disp
                if t in code.imports: imports.setdefault(code.imports[t], []).append((i.address, a))
    entry = {}

    def takes_xmm0(f):
        if f not in entry: entry[f] = f in code.end and any(k == 'read' for k, _ in code.flow(f))
        return entry[f]

    after = {s: ({('returned', None)} if jump else code.flow(c, s)) for ss in sites.values() for s, jump, c in ss}
    reads = {}  # function -> [(site, caller, instruction or text)]
    done = set()
    changed = True
    while changed:
        changed = False
        for f, ss in sites.items():
            for s, jump, c in ss:
                if (f, s) in done: continue
                for kind, x in after[s]:
                    hit = None
                    if kind == 'read': hit = x
                    elif kind == 'returned' and c in reads: hit = 'passed on by the caller 0x%X, whose callers read it' % c
                    elif kind in ('call', 'tail') and x in code.end and takes_xmm0(x): hit = 'passed in xmm0 to 0x%X, which reads it on entry' % x
                    if hit is not None:
                        reads.setdefault(f, []).append((s, c, hit)); done.add((f, s)); changed = True
                        break

    if args.imports:
        for name in sorted(imports):
            hits = [(s, c, x) for s, c in imports[name] for k, x in code.flow(c, s) if k == 'read']
            if hits: print('%s: %d of %d sites, e.g. call 0x%X -> %s' % (name, len(hits), len(imports[name]), hits[0][0], show(hits[0][2])))
        return 0

    rtypes = {}
    for f, (name, _) in src.names.items():
        m = re.search(r'^([^\n]*?)\b%s\s*\(' % re.escape(name), src.body(f), re.M)
        rtypes[f] = ' '.join(re.sub(r'__fastcall|__cdecl|__stdcall|__noreturn|static|inline', '', m[1]).split()) if m else '?'

    if args.why or args.exits:
        key = args.why or args.exits
        byname = dict({v: k for k, v in gaps.items()}, **src.byname)
        f = byname[key] if key in byname else int(key, 16)
        print('%s 0x%X: C returns "%s"' % (src.names.get(f, gaps.get(f, '?'))[0] if f in src.names else gaps.get(f, '?'), f, rtypes.get(f, 'see headers')))
        if args.exits:
            for at, ws in code.exits(f):
                print('  exit 0x%X: %s' % (at, '; '.join(sorted({'%s %s' % (k, show(x)) for k, x in ws})) or 'nothing writes xmm0'))
        else:
            for s, jump, c in sites.get(f, []):
                print('  0x%X in 0x%X %s: %s' % (s, c, src.names.get(c, ('(not C)',))[0], '; '.join(sorted('%s %s' % (k, show(x)) for k, x in after[s]))))
        return 0

    headers = {}
    for h in ('shared_client.h', 'recovered_forward.h'):
        text = R.blank((PROJECT / 'src/client' / h).read_text(encoding='utf-8', errors='replace'))
        for m in re.finditer(r'^([A-Za-z_][\w \t\*]*?[ \t\*])(\w+)\s*\(', text, re.M):
            t = ' '.join(re.sub(r'__fastcall|__cdecl|__stdcall|__noreturn|static|inline|extern', '', m[1]).split())
            headers.setdefault(m[2], set()).add((h, t, text.count('\n', 0, m.start()) + 1))

    def kind_of(f, depth=0):
        """Widths left in xmm0 over all exits of a function: subset of {'f','d','?'}."""
        out = set()
        if f not in code.end or depth > 4: return {'?'}
        for _, ws in code.exits(f):
            for k, x in ws:
                if k == 'ins': out.add(width(x))
                elif k == 'call' and isinstance(x, int) and x in code.marked and x != f: out |= kind_of(x, depth + 1)
                else: out.add('?')
        return out

    for f, name in gaps.items():
        ts = sorted({t for _, t, _ in headers.get(name, ())}, key=is_float)
        if ts: src.names[f], rtypes[f], src.where[f] = (name, ts[0]), ts[0], ('client_native_gaps.s', 0, 0)
    A, B, C, D, E, G, known = [], [], [], [], [], [], []
    for f in sorted(src.names):
        name, rtype = src.names[f][0], rtypes[f]
        isfloat = is_float(rtype)
        rs = reads.get(f, [])
        if rs and not isfloat:
            if name in KNOWN: known.append((f, name, KNOWN[name]))
            else: A.append((f, name, rtype, rs))
        if isfloat and not rs and sites.get(f): E.append((f, name, rtype, len(sites[f])))
        for h, t, line in sorted(headers.get(name, ())):
            if is_float(t) != isfloat or (isfloat and t.split()[-1] != rtype.split()[-1]): B.append((f, name, rtype, h, line, t))
        if isfloat and rs and rtype.split()[-1] in ('float', 'double'):
            w = kind_of(f) - {'?'}
            want = 'f' if rtype.endswith('float') else 'd'
            if w and want not in w:
                if name in KNOWN: known.append((f, name, KNOWN[name]))
                else: D.append((f, name, rtype, sorted(w)))
        per = {}
        for s, c, x in rs: per.setdefault(c, []).append((s, x))
        for c, lst in per.items():
            if c not in src.where or c in gaps: continue
            body = R.blank(src.body(c)) + ' ;'
            kinds = [R.use_kind(body, m.start(), m.end()) for m in re.finditer(r'\b%s\b' % re.escape(name), body)]
            if kinds.count('discard') and kinds.count('used') < len(lst):
                pair = (name, src.names[c][0])
                if pair in KNOWN: known.append((f, '%s in %s' % pair, KNOWN[pair]))
                else: C.append((f, name, c, src.names[c][0], Path(src.where[c][0]).name, lst, kinds.count('used'), kinds.count('discard')))
            elif kinds.count('used') < len(lst): G.append((name, src.names[c][0], Path(src.where[c][0]).name, len(lst), kinds.count('used')))

    print('%d functions, %d with direct call sites in the original, %d whose xmm0 is read after a call' % (len(src.names), len(sites), len(reads)))
    print('A  integer/void in the C, callers in the original read xmm0: %d' % len(A))
    for f, name, rtype, rs in A:
        print('   0x%X %s (%s) "%s": %d sites, e.g. call 0x%X -> %s' % (f, name, Path(src.where[f][0]).name, rtype, len(rs), rs[0][0], show(rs[0][2])))
        if args.all:
            for s, c, x in rs: print('        call 0x%X in 0x%X -> %s' % (s, c, show(x)))
    print('B  header prototype disagrees with the definition: %d' % len(B))
    for f, name, rtype, h, line, t in B: print('   0x%X %s: definition "%s", %s:%d "%s"' % (f, name, rtype, h, line, t))
    print('C  result discarded in the C, read in the original: %d' % len(C))
    for f, name, c, cname, file, lst, used, disc in C:
        print('   %s called from %s (%s, 0x%X): %d sites read xmm0, C uses %d and discards %d; %s' % (
            name, cname, file, c, len(lst), used, disc, '; '.join('0x%X -> %s' % (s, show(x)) for s, x in lst)))
    print('D  float/double differs from what the original leaves in xmm0: %d' % len(D))
    for f, name, rtype, w in D: print('   0x%X %s "%s": exits leave %s' % (f, name, rtype, '/'.join(w)))
    print('known, with reason: %d' % len(known))
    for f, name, why in known: print('   0x%X %s: %s' % (f, name, why))
    print('E  float in the C, no caller in the original reads xmm0 (lower priority): %d' % len(E))
    if args.all:
        for f, name, rtype, n in E: print('   0x%X %s (%s) "%s": %d call sites' % (f, name, Path(src.where[f][0]).name, rtype, n))
    print('F  fewer uses of the result in the C than reads in the original, none discarded (rewritten or merged callers; informational): %d' % len(G))
    if args.all:
        for row in G: print('   %s in %s (%s): %d reads, %d uses' % row)
    return 1 if A or B or C or D else 0


if __name__ == '__main__':
    sys.exit(main())
