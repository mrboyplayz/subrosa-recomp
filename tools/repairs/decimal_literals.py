"""Restores floating constants the decompiler printed with too few digits.

Hex-Rays prints a double constant with 16 significant digits and a float constant with 8; 17 and 9 are needed to
give the constant back. In the decompiled text of src/client the result is a literal that is close to the
original's constant but not equal to it:

    double:  1.570796326794897   where the original has 1.5707963267948966
    float:   0.11666667          where the original has the float 0.116666667163372...

A wrong double is simply a wrong constant. A float printed short is worse than it looks: `x * 0.11666667` on a
float x is computed in double and rounded, and because the literal is not the float the rounded result differs
from the original's float multiply in the last bit for 2% to 41% of x, depending on the constant.

The repair writes each such literal as the exact value of the original's constant, as a double literal: for a
float constant that is the float's exact value with 17 digits (0.11666666716337204), with no `f`. The types of the
expressions therefore do not change at all; only the value of the constant does. That is enough: when both
operands are floats held exactly in doubles, a double operation followed by rounding to float gives the same
result as the float operation (53 bits are more than twice 24 plus 2), which tools/repairs/literal_check.c
confirms over millions of operands for + - * / and comparisons.

Which constant a literal stands for is taken from the original's instructions. Every routine of src/client
starts with a `//----- (0000000140XXXXXX)` marker; the instructions from that address to the next marked address
are scanned for scalar SSE instructions that load from read-only data, by operand width: 8 bytes with an ..sd
instruction is a double constant, 4 bytes with an ..ss instruction a float constant. A literal of the routine's
text is rewritten when exactly one of those constants prints to it (%.16g for doubles, %.8g for floats) and is
not equal to it. Left alone and listed: a literal that a float and a double constant of the routine both print
to with different values (e.g. 0.1), and a literal that several different constants print to.

    python tools/repairs/decimal_literals.py [--write] [--function ADDR ...] [--verbose] [src/client/*.c]

Without --write it only reports. Needs objdump on PATH (MinGW). The disassembly of the whole image is read once.
"""
import bisect, re, struct, subprocess, sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
EXE = ROOT / 're/binaries/subrosa-vanilla.exe'
BANNER = re.compile(r'^//----- \(0000000(1[0-9A-F]{8})\) -+\s*$', re.M)
LITERAL = re.compile(r'(?<![\w.])(\d+\.\d+(?:e[-+]?\d+)?)(?![\w.])')
LOAD = re.compile(r'^\s*([0-9a-f]+):\s+(\w+)\s.*\b(DWORD|QWORD) PTR \[rip\+0x[0-9a-f]+\]\s+# 0x([0-9a-f]+)')
# Text and comments, whose numbers are not constants of the code.
QUOTED = re.compile(r'"(?:\\.|[^"\\\n])*"|//[^\n]*|/\*.*?\*/', re.S)
# A double the compiler built in a general register (2^100 in the C runtime's atan2, for one).
# Packed double arithmetic on a constant: both lanes count as double constants, so that a literal they print to
# is never taken for a float.
PACKED = re.compile(r'^\s*([0-9a-f]+):\s+(\w+pd)\s.*\bXMMWORD PTR \[rip\+0x[0-9a-f]+\]\s+# 0x([0-9a-f]+)')
IMMEDIATE = re.compile(r'^\s*([0-9a-f]+):\s+movabs\s+\w+,0x([0-9a-f]+)')

# Literals that a float and a double constant of the routine both print to, decided by reading the routine:
# (routine, the text around the literal, the literal, what it is there).
REVIEWED = [
    # 0x1401ED2D0 adds the float to floats ("(float)(v42 + 1.0e-15)") and the double inside sqrt's argument.
    ('1401ED2D0', '(float)(v42 + 1.0e-15)', '1.0e-15', 'float'),
    ('1401ED2D0', '(float)(8.0 * v56) + 1.0e-15', '1.0e-15', 'double'),
]


def read_only_data(data):
    pe = struct.unpack_from('<I', data, 0x3C)[0]
    count = struct.unpack_from('<H', data, pe + 6)[0]
    optional = struct.unpack_from('<H', data, pe + 20)[0]
    for i in range(count):
        name, vsize, vaddr, rsize, ptr = struct.unpack_from('<8sIIII', data, pe + 24 + optional + 40 * i)
        if name.rstrip(b'\0') == b'.rdata':
            return 0x140000000 + vaddr, rsize, ptr
    raise SystemExit('no .rdata section')


def constants_by_routine(starts):
    """{routine start: (set of float constants, set of double constants)}, magnitudes only."""
    data = EXE.read_bytes()
    base, size, ptr = read_only_data(data)
    found = {}
    listing = subprocess.run(['objdump', '-d', '-M', 'intel', '--no-show-raw-insn', str(EXE)], capture_output=True, text=True).stdout
    for line in listing.splitlines():
        if 'movabs' in line:
            m = IMMEDIATE.match(line)
            if m:
                value = struct.unpack('<d', struct.pack('<Q', int(m.group(2), 16)))[0]
                i = bisect.bisect_right(starts, int(m.group(1), 16)) - 1
                if i >= 0 and value == value and 1e-300 < abs(value) < 1e300:
                    found.setdefault(starts[i], (set(), set()))[1].add(abs(value))
            continue
        if 'rip+' not in line:
            continue
        m = PACKED.match(line)
        if m:
            target = int(m.group(3), 16)
            i = bisect.bisect_right(starts, int(m.group(1), 16)) - 1
            if i >= 0 and base <= target and target + 16 <= base + size:
                for value in struct.unpack('<2d', data[ptr + target - base: ptr + target - base + 16]):
                    if value == value and abs(value) != float('inf'):
                        found.setdefault(starts[i], (set(), set()))[1].add(abs(value))
            continue
        m = LOAD.match(line)
        if not m:
            continue
        address, mnemonic, width, target = int(m.group(1), 16), m.group(2), m.group(3), int(m.group(4), 16)
        if mnemonic.startswith('cvtsi'):
            continue
        n = 8 if width == 'QWORD' else 4
        if not (base <= target and target + n <= base + size):
            continue
        i = bisect.bisect_right(starts, address) - 1
        if i < 0:
            continue
        singles, doubles = found.setdefault(starts[i], (set(), set()))
        raw = data[ptr + target - base: ptr + target - base + n]
        if width == 'DWORD' and 'ss' in mnemonic:
            value = struct.unpack('<f', raw)[0]
            if value == value and abs(value) != float('inf'):
                singles.add(abs(value))
        elif width == 'QWORD' and 'sd' in mnemonic:
            value = struct.unpack('<d', raw)[0]
            if value == value and abs(value) != float('inf'):
                doubles.add(abs(value))
    return found


def main():
    args = sys.argv[1:]
    write, verbose = '--write' in args, '--verbose' in args
    only = set()
    files = []
    i = 0
    while i < len(args):
        if args[i] == '--function':
            only.add(args[i + 1].upper().removeprefix('0X'))
            i += 2
            continue
        if not args[i].startswith('--'):
            files.append(Path(args[i]))
        i += 1
    if not files:
        files = sorted((ROOT / 'src/client').glob('*.c'))
    starts = sorted({int(m.group(1), 16) for f in (ROOT / 'src/client').glob('*.c')
                     for m in BANNER.finditer(f.read_bytes().decode('utf-8', errors='replace'))})
    constants = constants_by_routine(starts)
    tally = Counter()
    left = []
    by_value = Counter()
    for path in files:
        raw = path.read_bytes().decode('utf-8')
        banners = list(BANNER.finditer(raw))
        pieces = []
        changed_here = Counter()
        for n, m in enumerate(banners):
            address = m.group(1)
            if only and address not in only:
                continue
            singles, doubles = constants.get(int(address, 16), (set(), set()))
            end = banners[n + 1].start() if n + 1 < len(banners) else len(raw)
            body = raw[m.end():end]
            quoted = [q.span() for q in QUOTED.finditer(body)]

            def fix(lit):
                text = lit.group(1)
                if any(a <= lit.start() < b for a, b in quoted):
                    return text
                value = float(text)
                d = {c for c in doubles if c == value or float('%.16g' % c) == value}
                s = {c for c in singles if c == value or float('%.8g' % c) == value}
                if d and s and d != s:
                    around = body[max(0, lit.start() - 40):lit.end() + 40]
                    for routine, context, literal, kind in REVIEWED:
                        if routine == address and literal == text and context in around:
                            d, s = (d, set()) if kind == 'double' else (set(), s)
                if len(d) > 1 or len(s) > 1:
                    left.append(f'{path.name} {address}: {text} is the print of several constants')
                    tally['left: several'] += 1
                    return text
                if d and s and d != s:
                    left.append(f'{path.name} {address}: {text} is both the float {next(iter(s))!r} and the double {next(iter(d))!r}')
                    tally['left: float and double'] += 1
                    return text
                exact = next(iter(d or s), None)
                if exact is None:
                    if len(text.replace('.', '').lstrip('0')) >= 7 and struct.unpack('<f', struct.pack('<f', value))[0] != value:
                        tally['no constant found'] += 1
                        if verbose:
                            left.append(f'{path.name} {address}: {text} matches no constant the routine loads')
                    return text
                if exact == value:
                    return text
                kind = 'double' if d else 'float'
                tally[kind] += 1
                changed_here[kind] += 1
                by_value[(kind, text, repr(exact))] += 1
                return repr(exact)

            new_body = LITERAL.sub(fix, body)
            if new_body != body:
                pieces.append((m.end(), end, new_body))
        if pieces:
            print(f'{path.name}: {changed_here["float"]} float, {changed_here["double"]} double literals')
            if write:
                # Other sessions edit these files too: take the file as it is now and replace only the routines
                # whose text is still what was read.
                now = path.read_bytes().decode('utf-8')
                if now != raw:
                    print(f'  {path.name} changed while it was being read; run again for this file')
                    continue
                out, last = [], 0
                for a, b, new_body in pieces:
                    out.append(raw[last:a])
                    out.append(new_body)
                    last = b
                out.append(raw[last:])
                path.write_bytes(''.join(out).encode('utf-8'))
    for line in left:
        print(line)
    if verbose:
        for (kind, text, exact), count in sorted(by_value.items(), key=lambda item: -item[1]):
            print(f'{count:5d}  {kind} {text} -> {exact}')
    print(', '.join(f'{v} {k}' for k, v in sorted(tally.items())) or 'nothing to change', '(written)' if write else '(report only)')


if __name__ == '__main__':
    main()
