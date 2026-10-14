"""Check the state-array index constants in src/client against the addresses the original code uses.

Every `dword_140404A6C[N ...]` in a recovered function stands for original address 0x140404A6C + 4*N. That
address (or its offset from the image base) should appear in the function's original instructions, as a
RIP-relative target or as a displacement. A constant with no such instruction was mistyped or mis-scaled
somewhere along the way (sub_140193FE0 used 309076805 where the original has 309078347, which overfilled
GPU buffer pages and drew garbage faces).

  python tools/audits/state_indices.py [--near BYTES] [--file NAME] [--address-of]

Lists constants with no matching address within --near bytes (default 0) in the function's own code.
Functions replaced by clean engine wrappers and constants formed by folding two terms give false positives;
check a hit against the disassembly before changing it.
"""
import glob, os, re, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM, X86_OP_IMM, X86_REG_RIP

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..")
BASE, ARRAY = 0x140000000, 0x140404A6C


def main():
    near = int(sys.argv[sys.argv.index("--near") + 1]) if "--near" in sys.argv else 0
    only = sys.argv[sys.argv.index("--file") + 1] if "--file" in sys.argv else None
    pe = pefile.PE(os.path.join(ROOT, "re", "binaries", "subrosa-vanilla.exe"), fast_load=True)
    text = next(s for s in pe.sections if s.Name.startswith(b".text"))
    code, code_va = text.get_data(), BASE + text.VirtualAddress
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    marker = re.compile(r"^//----- \(0*([0-9A-Fa-f]{9,16})\)", re.M)
    sources = {}
    starts = set()
    for path in sorted(glob.glob(os.path.join(ROOT, "src", "client", "client_*.c"))):
        if path.endswith("client_data.c"):
            continue
        body = open(path, encoding="utf-8", errors="replace").read()
        sources[os.path.basename(path)] = body
        starts.update(int(m.group(1), 16) for m in marker.finditer(body))
    ordered = sorted(starts)
    following = {a: b for a, b in zip(ordered, ordered[1:])}
    address_of = "--address-of" in sys.argv  # only constants in &dword_140404A6C[...] (pointer bases)
    index = re.compile((r"&" if address_of else r"") + r"dword_140404A6C\[([^\[\]]*(?:\[[^\[\]]*\][^\[\]]*)*)\]")
    literal = re.compile(r"(?<![\w.])(\d{4,9})(?![\w.])")
    total = 0
    for name, body in sources.items():
        if only and only != name:
            continue
        marks = list(marker.finditer(body))
        for m, nxt in zip(marks, marks[1:] + [None]):
            start = int(m.group(1), 16)
            part = body[m.end():nxt.start() if nxt else len(body)]
            if "Clean implementation: src/engine" in part or start not in following:
                continue
            part = re.sub(r"//[^\n]*", "", part)
            wanted = {}
            for expr in index.finditer(part):
                inner = re.sub(r"dword_140404A6C\[[^\[\]]*\]", "", expr.group(1))  # constants of nested lookups are visited on their own
                for lit in literal.finditer(inner):
                    before = inner[:lit.start()].rstrip()
                    after = inner[lit.end():].lstrip()
                    if before.endswith("*") or after.startswith("*") or before.endswith("<<") or before.endswith(">>"):
                        continue  # a scale factor, not a base index
                    wanted.setdefault(int(lit.group(1)), body.count("\n", 0, m.end() + expr.start()) + 1)
            if not wanted:
                continue
            end = min(following[start], start + 0x20000)
            seen = set()
            for ins in md.disasm(code[start - code_va:end - code_va], start):
                for op in ins.operands:
                    if op.type == X86_OP_MEM:
                        if op.mem.base == X86_REG_RIP:
                            seen.add(ins.address + ins.size + op.mem.disp)
                        elif op.mem.disp > 0x100000:
                            seen.add(BASE + op.mem.disp)
                            seen.add(op.mem.disp)
                    elif op.type == X86_OP_IMM and op.imm > 0x100000:
                        seen.add(BASE + op.imm)
            ordered_seen = sorted(seen)
            for constant, line in sorted(wanted.items()):
                address = ARRAY + 4 * constant
                if address in seen:
                    continue
                if near and any(abs(address - s) <= near for s in ordered_seen):
                    continue
                total += 1
                closest = min(ordered_seen, key=lambda s: abs(s - address)) if ordered_seen else 0
                print("%s:%d sub_%X: index %d = 0x%X not referenced (closest 0x%X, %+d bytes)" % (
                    name, line, start, constant, address, closest, closest - address))
    print("%d unmatched index constants" % total)


main()
