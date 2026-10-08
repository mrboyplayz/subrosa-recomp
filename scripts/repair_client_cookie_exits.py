"""Replace stack-cookie pseudo-results with what the original returns.

Hex-Rays took the epilogue's cookie check for the function result, so 332
functions ended in `return sub_1401F8B20((unsigned __int64)&vA ^ vB);`. The
recompiled frame never stores the cookie, so every such exit called the
failure handler, and the real result was lost. The check preserves rax, so
the real result is whatever rax held when the epilogue was entered.

For each such function this disassembles the original, finds the epilogue
(`mov rcx,[slot]; xor rcx,rsp; call 0x1401F8B20`) and walks every path
backwards from it to the instruction that last wrote rax. The shapes below
are rewritten automatically; anything else is reported until it has a
reviewed entry in src/rebuild/client_cookie_exits_hand.json.

  const    every path loads the same constant (`xor eax,eax`, `mov eax,imm`,
           `or eax,-1`): each exit returns it;
  slot     every path loads the same frame slot (`mov eax,[rsp+N]`), and the
           C has exactly one local at that slot (offsets are anchored on the
           cookie slot, which both sides name): each exit returns it;
  call     one exit; on every path rax is still the result of the same direct
           call, which is the C statement just before the exit: return it;
  void     the C function is void and the check is a bare statement: drop it;
  unread   no caller in src/client or src/engine uses the result and the name
           is never used as a value, and no caller in the original reads eax
           after the call: each exit returns 0;
  hand     a reviewed entry: optional text edits inside the function (exact,
           each must match once), then one expression per remaining exit in
           source order (a single expression stands for all of them);
           `expr ## why` puts the reason in a comment. An edit of three
           strings replaces everything from the first through the second.

The evidence for every rewritten function (instruction addresses and bytes,
callers, rule) goes to src/rebuild/client_cookie_exits.json. A function that
was already rewritten is not touched again.

    python scripts/repair_client_cookie_exits.py [--check] [--only NAME]
"""
import argparse, bisect, glob, json, re, struct, sys
from pathlib import Path

import capstone, pefile
from capstone import x86_const as X

PROJECT = Path(__file__).resolve().parent.parent
ORIGINAL = PROJECT / 're/binaries/subrosa-vanilla.exe'
EVIDENCE = PROJECT / 'src/rebuild/client_cookie_exits.json'
HAND = PROJECT / 'src/rebuild/client_cookie_exits_hand.json'
BASE = 0x140000000
COOKIE = 0x1401F8B20

MARK = re.compile(r'^//----- \(([0-9A-F]{16})\)', re.M)
EXIT = re.compile(r'return sub_1401F8B20\(\s*\(unsigned __int64\)[^;]*?\^[^;]*?\);')
STATEMENT = re.compile(r'^([^\n]*?)sub_1401F8B20\(\s*\(unsigned __int64\)[^;\n]*?\^[^;\n]*?\);[ \t]*(\r?\n)', re.M)
ANY = re.compile(r'sub_1401F8B20\(\s*\(unsigned __int64\)\s*&?\w+\s*\^')
SLOT = re.compile(r'sub_1401F8B20\(\s*\(unsigned __int64\)\s*&?\w+\s*\^\s*(?:\(unsigned __int64\))?\s*(\w+)')
RAX = {X.X86_REG_RAX, X.X86_REG_EAX, X.X86_REG_AX, X.X86_REG_AL, X.X86_REG_AH}
FULL = {X.X86_REG_RAX, X.X86_REG_EAX}
SCALAR = re.compile(r'^(?!.*\b(void|float|double|__m128\w*)\s*$)')


class Original:
    def __init__(self, marks):
        pe = pefile.PE(str(ORIGINAL), fast_load=True)
        text = next(s for s in pe.sections if s.Name.startswith(b'.text'))
        self.t0 = BASE + text.VirtualAddress
        self.t1 = self.t0 + text.Misc_VirtualSize
        self.code = text.get_data()
        raw = next(s for s in pe.sections if s.Name.startswith(b'.pdata')).get_data()
        chunks = sorted((BASE + b, BASE + e) for b, e, _ in struct.iter_unpack('<III', raw[:len(raw) // 12 * 12]) if b)
        begins = [b for b, _ in chunks]
        # A function runs from its marker to the end of the last unwind chunk before the next marker.
        self.end = {}
        for n, a in enumerate(marks):
            nxt = marks[n + 1] if n + 1 < len(marks) else self.t1
            i = bisect.bisect_left(begins, nxt) - 1
            if i >= 0 and chunks[i][0] >= a: self.end[a] = min(chunks[i][1], nxt)
        self.md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
        self.md.detail = True
        self._callers = None
        self._cache = {}

    def disasm(self, a):
        if a not in self._cache:
            self._cache[a] = list(self.md.disasm(self.code[a - self.t0:self.end[a] - self.t0], a))
        return self._cache[a]

    def callers(self):
        """Direct calls and tail jumps to each function start: {target: [(site, is_jump, caller)]}."""
        if self._callers is None:
            self._callers = {}
            for a in sorted(self.end):
                for i in self.disasm(a):
                    if i.id in (X.X86_INS_CALL, X.X86_INS_JMP) and i.operands and i.operands[0].type == X.X86_OP_IMM:
                        t = i.operands[0].imm
                        if t in self.end and (i.id == X.X86_INS_CALL or not (a <= t < self.end[a])):
                            self._callers.setdefault(t, []).append((i.address, i.id == X.X86_INS_JMP, a))
        return self._callers


def target(i):
    return i.operands[0].imm if i.operands and i.operands[0].type == X.X86_OP_IMM else None


def reads_rax(i):
    if i.id in (X.X86_INS_XOR, X.X86_INS_SBB) and i.op_str.replace(' ', '') in ('eax,eax', 'rax,rax'): return False
    return bool(set(i.regs_access()[0]) & RAX)


def epilogues(ins):
    """Each cookie check with the instructions that last wrote rax on the paths into it."""
    jumps = {}
    for n, i in enumerate(ins):
        if i.group(X.X86_GRP_JUMP) and target(i) is not None: jumps.setdefault(target(i), []).append(n)
    out = []
    for c, call in enumerate(ins):
        if call.id != X.X86_INS_CALL or target(call) != COOKIE: continue
        leaves, seen, work = {}, set(), [c]
        while work:
            n = work.pop()
            if n in seen: continue
            seen.add(n)
            if n == 0: leaves[ins[0].address] = ('entry', None)
            elif ins[n - 1].id not in (X.X86_INS_JMP, X.X86_INS_INT3) and not ins[n - 1].mnemonic.startswith('ret'):
                p = ins[n - 1]
                if p.id == X.X86_INS_CALL and target(p) != COOKIE: leaves[p.address] = ('call', p)
                elif set(p.regs_access()[1]) & RAX and not p.group(X.X86_GRP_JUMP) and p.id != X.X86_INS_CALL:
                    leaves[p.address] = ('ins', p)
                else: work.append(n - 1)
            work.extend(jumps.get(ins[n].address, []))
        out.append((call, [(a,) + leaves[a] for a in sorted(leaves)]))
    return out


def constant(kind, i):
    """The value an instruction leaves in rax, when it is a constant: (value, C text)."""
    if kind != 'ins': return None
    t = (i.mnemonic + i.op_str).replace(' ', '')
    if t in ('xoreax,eax', 'xoral,al'): return 0, '0'
    m = re.fullmatch(r'mov(eax|al),(0x[0-9a-f]+|\d+)', t)
    if m:
        v = int(m[2], 0)
        if v >= 0x80000000: return v, '(unsigned int)%d' % (v - (1 << 32))
        return v, str(v)
    if t == 'oreax,0xffffffff': return 0xFFFFFFFF, '(unsigned int)-1'
    if t == 'orrax,0xffffffffffffffff': return -1, '-1'
    return None


def result_use(orig, site, caller):
    """What the caller does with eax after the call at site: read (with the instruction), dead, returned."""
    ins = orig.disasm(caller)
    at = {i.address: n for n, i in enumerate(ins)}
    found, seen, work = set(), set(), [at[site] + 1]
    while work:
        n = work.pop()
        while n < len(ins) and n not in seen:
            seen.add(n)
            i = ins[n]
            if i.id == X.X86_INS_CALL:
                if target(i) == COOKIE: n += 1; continue
                found.add('dead'); break
            if i.mnemonic.startswith('ret'): found.add('returned'); break
            if i.group(X.X86_GRP_JUMP):
                t = target(i)
                if t is None: found.add('unknown'); break
                if t not in at: found.add('dead' if i.id == X.X86_INS_JMP else 'unknown'); break
                if i.id == X.X86_INS_JMP: n = at[t]; continue
                work.append(at[t]); n += 1; continue
            if reads_rax(i): found.add('read at 0x%X: %s %s' % (i.address, i.mnemonic, i.op_str)); break
            if set(i.regs_access()[1]) & FULL: found.add('dead'); break
            n += 1
    return sorted(found)


def blank(text):
    """Comments and literals blanked out, offsets kept."""
    return re.sub(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\\n])*"|\'(?:\\.|[^\'\\\n])*\'',
                  lambda m: re.sub(r'[^\n]', ' ', m[0]), text, flags=re.S).replace('\r', ' ')


def close_paren(s, i):
    depth = 0
    for j in range(i, len(s)):
        if s[j] == '(': depth += 1
        elif s[j] == ')':
            depth -= 1
            if depth == 0: return j
    return -1


def open_paren(s, i):
    depth = 0
    for j in range(i, -1, -1):
        if s[j] == ')': depth += 1
        elif s[j] == '(':
            depth -= 1
            if depth == 0: return j
    return -1


def use_kind(s, a, b):
    """How the name at s[a:b] is used: decl, discard (call as a statement), used (call in an expression), ref."""
    j = b
    while s[j] in ' \t\n': j += 1
    if s[j] != '(': return 'ref'
    k = close_paren(s, j) + 1
    while s[k] in ' \t\n': k += 1
    line = s[s.rfind('\n', 0, a) + 1:a]
    if line.strip() and not line[0].isspace() and re.match(r'^[A-Za-z_][\w \t\*]*$', line) and s[k] in '{;': return 'decl'
    if s[k] != ';': return 'used'
    i = a - 1
    while s[i] in ' \t\n': i -= 1
    if s[i] in ';{}:': return 'discard'
    word = re.search(r'(\w+)$', s[max(0, i - 20):i + 1])
    if word and word[1] in ('else', 'do'): return 'discard'
    if s[i] == ')':
        o = open_paren(s, i)
        word = re.search(r'(\w+)\s*$', s[max(0, o - 20):o])
        if word and word[1] in ('if', 'while', 'for', 'switch'): return 'discard'
        if s[o:i + 1].replace(' ', '') == '(void)': return 'discard'
    return 'used'


class Sources:
    def __init__(self):
        self.files = sorted(glob.glob(str(PROJECT / 'src/client/client_*.c')))
        self.text = {f: open(f, encoding='utf-8', errors='replace', newline='').read() for f in self.files}
        others = glob.glob(str(PROJECT / 'src/client/*.[ch]')) + glob.glob(str(PROJECT / 'src/engine/*.[ch]'))
        self.scan = {f: blank(self.text[f] if f in self.text else open(f, encoding='utf-8', errors='replace').read())
                     for f in sorted(set(others) | set(self.files))}
        self.marks, self.where, self.names = [], {}, {}
        for f in self.files:
            ms = list(MARK.finditer(self.text[f]))
            for n, m in enumerate(ms):
                a = int(m[1], 16)
                end = ms[n + 1].start() if n + 1 < len(ms) else len(self.text[f])
                self.marks.append(a)
                self.where[a] = (f, m.start(), end)
                head = self.text[f][m.end():self.text[f].find('{', m.end(), end) if '{' in self.text[f][m.end():end] else end]
                nm = re.search(r'(\w+)\s*\(', re.sub(r'__attribute__\s*\(\(.*?\)\)', '', head))
                if nm: self.names[a] = (nm[1], ' '.join(head[:nm.start(1)].split()))
        self.marks.sort()
        self.byname = {v[0]: a for a, v in self.names.items()}

    def body(self, a):
        f, s, e = self.where[a]
        return self.text[f][s:e]

    def replace(self, a, new):
        f, s, e = self.where[a]
        delta = len(new) - (e - s)
        self.text[f] = self.text[f][:s] + new + self.text[f][e:]
        for b, (g, s2, e2) in self.where.items():
            if g == f and s2 > s: self.where[b] = (g, s2 + delta, e2 + delta)
        self.where[a] = (f, s, e + delta)

    def uses(self, names):
        out = {n: [] for n in names}
        if not names: return out
        pat = re.compile(r'\b(' + '|'.join(map(re.escape, names)) + r')\b')
        for f, s in self.scan.items():
            for m in pat.finditer(s):
                kind = use_kind(s, m.start(), m.end())
                if kind != 'decl': out[m[1]].append((kind, Path(f).name, s.count('\n', 0, m.start()) + 1))
        return out


def frame_locals(body):
    """{(base register, offset): [names]} from the frame comments of a function's locals."""
    out = {}
    for m in re.finditer(r'^#define (\w+) .*?/\* \[rsp\+([0-9A-F]+)h\] \*/', body, re.M):
        out.setdefault(('rsp', int(m[2], 16)), []).append(m[1])
    for m in re.finditer(r'^\s+[\w \t\*]*?\b(\w+)(?:\[[^\]]*\])*; // \[rsp\+([0-9A-F]+)h\](?: \[rbp([+-])([0-9A-F]+)h\])?', body, re.M):
        out.setdefault(('rsp', int(m[2], 16)), []).append(m[1])
        if m[3]: out.setdefault(('rbp', int(m[4], 16) * (1 if m[3] == '+' else -1)), []).append(m[1])
    return out


def mem_slot(i):
    """(register name, displacement, width) for `mov eax|rax, [rsp|rbp + disp]`."""
    if i.id != X.X86_INS_MOV or len(i.operands) != 2: return None
    d, s = i.operands
    if d.type != X.X86_OP_REG or d.reg not in FULL or s.type != X.X86_OP_MEM: return None
    if s.mem.index or s.mem.base not in (X.X86_REG_RSP, X.X86_REG_RBP): return None
    return ('rsp' if s.mem.base == X.X86_REG_RSP else 'rbp', s.mem.disp, 8 if d.reg == X.X86_REG_RAX else 4)


def by_hand(body, entry):
    """Apply a reviewed entry: text edits first, then one expression per remaining exit, in source order."""
    for old, *through, new in entry.get('edits', []):
        if through:
            # [first, last, new]: replace everything from `first` through `last` (each must occur once)
            if body.count(old) != 1 or body.count(through[0]) != 1 or body.index(through[0]) < body.index(old):
                raise ValueError('hand edit range no longer matches: ' + old[:60])
            old = body[body.index(old):body.index(through[0]) + len(through[0])]
        if body.count(old) != 1: raise ValueError('hand edit no longer matches once: ' + old[:60])
        body = body.replace(old, new)
    values = list(entry.get('exits', []))
    if len(values) == 1: values *= len(EXIT.findall(body))
    if len(values) != len(EXIT.findall(body)): raise ValueError('hand entry has the wrong number of exits')
    it = iter(values)

    def one(m):
        expr, _, why = next(it).partition(' ## ')
        return 'return %s;%s' % (expr, ' /* %s */' % why if why else '')
    body = EXIT.sub(one, body)
    if ANY.search(body): raise ValueError('hand entry leaves a cookie check')
    return body


def decide(orig, src, a, uses, hand):
    """(rule, new body, evidence) or (None, reason, evidence)."""
    name, rtype = src.names[a]
    body = src.body(a)
    exits = EXIT.findall(body)
    eps = epilogues(orig.disasm(a))
    native = [{'site': '0x%X' % s, 'use': ['tail jump'] if j else result_use(orig, s, c)} for s, j, c in orig.callers().get(a, [])]
    ev = {'function': '0x%X' % a, 'name': name, 'file': Path(src.where[a][0]).name, 'exits': len(exits),
          'epilogues': [{'check': '0x%X' % c.address, 'bytes': c.bytes.hex(),
                         'rax_from': [{'at': '0x%X' % at, 'bytes': i.bytes.hex() if i else '', 'text': '%s %s' % (i.mnemonic, i.op_str) if i else 'function entry'}
                                      for at, kind, i in ls]} for c, ls in eps],
          'c_uses': ['%s %s:%d' % u for u in uses], 'native_callers': native}
    if name in hand:
        return 'hand', by_hand(body, hand[name]), dict(ev, value=hand[name].get('exits'), note=hand[name].get('note', ''))
    if rtype.split()[-1:] == ['void'] and not exits:
        # the C function is void already: the check is a bare statement, drop it
        new = STATEMENT.sub(lambda m: m[1] + ';' + m[2] if m[1].strip() else '', body)
        if not ANY.search(new): return 'void', new, dict(ev, value=None)
    if len(ANY.findall(body)) != len(exits): return None, 'a cookie check that is not a return statement', ev
    if not eps: return None, 'no cookie check found in the original', ev
    if not SCALAR.match(rtype) or re.search(r'\b(void|float|double)\s*$', rtype): return None, 'return type ' + rtype, ev
    leaves = [l for _, ls in eps for l in ls]
    note = lambda l: '0x%X: %s %s' % (l[0], l[2].mnemonic, l[2].op_str)

    consts = {constant(k, i) for _, k, i in leaves}
    if None not in consts and len(consts) == 1:
        text = next(iter(consts))[1]
        new = EXIT.sub(lambda m: 'return %s; /* %s */' % (text, note(leaves[0])), body)
        return 'const', new, dict(ev, value=text)

    slots = {mem_slot(i) if k == 'ins' else None for _, k, i in leaves}
    if None not in slots and len(slots) == 1:
        reg, disp, width = next(iter(slots))
        locs = frame_locals(body)
        # The frame comments are tied to the original's registers through the cookie slot, which both
        # sides name: the load must use the cookie's base register, and its offset is taken relative to it.
        cs = SLOT.search(body)
        prev = [p for p in orig.disasm(a) if p.address < eps[0][0].address][-2:]
        cm = re.search(r'rcx, qword ptr \[(rsp|rbp)(?: ([+-]) (0x[0-9a-f]+|\d+))?\]', prev[0].op_str) if prev else None
        names = []
        if cs and cm and cm[1] == reg:
            at = int(cm[3] or '0', 0) * (-1 if cm[2] == '-' else 1)
            same = [k for k, v in locs.items() if cs[1] in v and k[0] == reg] or [k for k, v in locs.items() if cs[1] in v]
            if same: names = locs.get((same[0][0], same[0][1] + disp - at), [])
        if len(names) == 1:
            decl = re.search(r'^#define %s \(\*\(([^()]*?) \(\*\)\)|^\s+([\w \t\*]*?)\b%s; //' % (names[0], names[0]), body, re.M)
            ctype = (decl[1] or decl[2] or '').strip() if decl else ''
            if decl and '[' not in ctype and not re.search(r'float|double|__m128', ctype):
                text = names[0] if width == 8 else '(unsigned int)' + names[0]
                new = EXIT.sub(lambda m: 'return %s; /* %s */' % (text, note(leaves[0])), body)
                return 'slot', new, dict(ev, value=text)

    if len(exits) == 1 and all(k == 'call' for _, k, _ in leaves) and len({target(i) for _, _, i in leaves}) == 1:
        callee = target(leaves[0][2])
        if callee in src.names and not re.search(r'\b(void|float|double)\s*$', src.names[callee][1]):
            m = re.search(r'^([ \t]+)(%s\((?:[^;]*)\);)\r?\n\1%s' % (re.escape(src.names[callee][0]), re.escape(exits[0])), body, re.M)
            if m and blank(m[2]).count('(') == blank(m[2]).count(')'):
                new = body[:m.start()] + '%sreturn %s /* 0x%X: the result of this call is still in rax at the exit */' % (m[1], m[2], leaves[0][0]) + body[m.end():]
                return 'call', new, dict(ev, value=src.names[callee][0] + '(...)')

    kinds = {u[0] for u in uses}
    read = [n for n in native if any(u.startswith('read') or u in ('returned', 'unknown', 'tail jump') for u in n['use'])]
    if not kinds & {'used', 'ref'} and not read:
        why = 'no caller reads the result' if uses else 'the function has no caller'
        new = EXIT.sub('return 0; /* %s */' % why, body)
        return 'unread', new, dict(ev, value='0')
    return None, 'needs a hand edit', ev


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--check', action='store_true', help='report only')
    ap.add_argument('--only', help='one function name')
    args = ap.parse_args()
    src = Sources()
    orig = Original(src.marks)
    todo = [a for a in src.marks if a in src.names and ANY.search(src.body(a)) and src.names[a][0] != 'sub_1401F8B20']
    if args.only: todo = [a for a in todo if src.names[a][0] == args.only]
    uses = src.uses([src.names[a][0] for a in todo])
    record = json.loads(EVIDENCE.read_text(encoding='utf-8')) if EVIDENCE.exists() else {'functions': {}}
    hand = json.loads(HAND.read_text(encoding='utf-8')) if HAND.exists() else {}
    counts, left = {}, []
    for a in todo:
        if a not in orig.end:
            left.append((a, 'no unwind data', None)); continue
        try:
            rule, new, ev = decide(orig, src, a, uses[src.names[a][0]], hand)
        except ValueError as e:
            left.append((a, str(e), None)); continue
        if rule is None:
            left.append((a, new, ev)); continue
        counts[rule] = counts.get(rule, 0) + 1
        ev['rule'] = rule
        record['functions'][ev['function']] = ev
        src.replace(a, new)
    print('%d functions with cookie exits; rewritten: %s; left: %d' % (len(todo), counts or 'none', len(left)))
    for a, why, ev in left:
        print('  %s 0x%X %s: %s' % (Path(src.where[a][0]).name, a, src.names[a][0], why))
    if not args.check:
        for f in src.files:
            if src.text[f] != open(f, encoding='utf-8', errors='replace', newline='').read():
                open(f, 'w', encoding='utf-8', newline='').write(src.text[f])
        EVIDENCE.write_text(json.dumps(record, indent=1) + '\n', encoding='utf-8')
    return 0


if __name__ == '__main__':
    sys.exit(main())
