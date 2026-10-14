"""Restore the format values of text calls that tools/repairs/text_calls.py already gave flags and colour.

Those calls read  sr_text_draw_recovered("Time /i:/i/i", ..., NULL) /* 0x<original call site> */  and print
zeros for every "/i", "/s" and so on. The original passes the values in the stack slots from [rsp+48h] up.
For each such call this reads what the original stores there and, when every value is something that can be
named in C without the surrounding code (a constant, a 32-bit global of the state array, the address of a
global, or a string constant), replaces NULL with the list of values.

  python tools/repairs/text_values.py [--apply]

Values computed in registers (sums, table lookups, floats) are not recovered; those calls are listed and
keep printing zeros.
"""
import glob, os, re, struct, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM, X86_OP_IMM, X86_OP_REG, X86_REG_RIP, X86_REG_RSP

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..")
BASE, TARGET, ARRAY, ARRAY_END = 0x140000000, 0x14006D930, 0x140404A6C, 0x1B475D000
KEPT = {"rbx", "rbp", "rsi", "rdi", "r12", "r13", "r14", "r15"}
pe = pefile.PE(os.path.join(ROOT, "re", "binaries", "subrosa-vanilla.exe"), fast_load=True)
md = Cs(CS_ARCH_X86, CS_MODE_64)
md.detail = True
TEXT = next(s for s in pe.sections if s.Name.startswith(b".text"))


def canonical(name):
    if name.startswith("r") and name[1:2].isdigit():
        return name.rstrip("dwb")
    table = {"eax": "rax", "ebx": "rbx", "ecx": "rcx", "edx": "rdx", "esi": "rsi", "edi": "rdi", "ebp": "rbp",
             "ax": "rax", "bx": "rbx", "cx": "rcx", "dx": "rdx", "si": "rsi", "di": "rdi", "bp": "rbp"}
    return table.get(name, name)


def sites(start, end):
    """address of each call to TARGET -> {stack offset: value}; a value is ('int', n), ('global', address, bits),
    ('address', address) or None when it cannot be named."""
    code = TEXT.get_data()[start - BASE - TEXT.VirtualAddress:end - BASE - TEXT.VirtualAddress]
    reg, slots, found = {}, {}, {}
    for ins in md.disasm(code, start):
        ops, m = ins.operands, ins.mnemonic
        if m == "call":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm == TARGET:
                found[ins.address] = dict(slots)
            slots = {}
            reg = {k: v for k, v in reg.items() if k in KEPT}
            continue
        if len(ops) != 2:
            continue
        dst, src = ops
        if dst.type == X86_OP_MEM and dst.mem.base == X86_REG_RSP and dst.mem.index == 0:
            if src.type == X86_OP_IMM:
                slots[dst.mem.disp] = ("int", src.imm & 0xFFFFFFFF)
            elif src.type == X86_OP_REG:
                slots[dst.mem.disp] = reg.get(canonical(ins.reg_name(src.reg)))
            continue
        if dst.type != X86_OP_REG:
            continue
        name = canonical(ins.reg_name(dst.reg))
        if name.startswith(("xmm", "ymm")):
            continue
        value = None
        if src.type == X86_OP_MEM and src.mem.base == X86_REG_RIP and src.mem.index == 0:
            target = ins.address + ins.size + src.mem.disp
            if m == "lea":
                value = ("address", target)
            elif m in ("mov", "movsxd") and ARRAY <= target < ARRAY_END and (target - ARRAY) % 4 == 0:
                value = ("global", target, 32 if dst.size == 4 or m == "movsxd" else 64)
        elif m == "mov" and src.type == X86_OP_IMM:
            value = ("int", src.imm & 0xFFFFFFFF)
        elif m == "xor" and src.type == X86_OP_REG and src.reg == dst.reg:
            value = ("int", 0)
        elif m == "mov" and src.type == X86_OP_REG:
            value = reg.get(canonical(ins.reg_name(src.reg)))
        if value is None:
            reg.pop(name, None)
        else:
            reg[name] = value
    return found


def c_value(value):
    kind = value[0]
    if kind == "int":
        return "%uu" % value[1]
    if kind == "global":
        if value[2] != 32:
            return None
        return "dword_140404A6C[%d]" % ((value[1] - ARRAY) // 4)
    if kind == "address":
        target = value[1]
        if ARRAY <= target < ARRAY_END and (target - ARRAY) % 4 == 0:
            return "(uint64)(uintptr_t)&dword_140404A6C[%d]" % ((target - ARRAY) // 4)
        if 0x14026E000 <= target < 0x1402B2000:
            raw = pe.get_data(target - BASE, 128).split(b"\0")[0]
            if raw and all(32 <= b < 127 for b in raw):
                return '(uint64)(uintptr_t)"%s"' % raw.decode().replace("\\", "\\\\").replace('"', '\\"')
    return None


def main():
    apply = "--apply" in sys.argv
    marker = re.compile(r"^//----- \(0*([0-9A-Fa-f]{9,16})\)", re.M)
    files = [p for p in sorted(glob.glob(os.path.join(ROOT, "src", "client", "client_*.c"))) if not p.endswith("client_data.c")]
    bodies = {p: open(p, encoding="utf-8", errors="replace", newline="").read() for p in files}
    starts = sorted({int(m.group(1), 16) for b in bodies.values() for m in marker.finditer(b)})
    following = dict(zip(starts, starts[1:]))
    call = re.compile(r'sr_text_draw_recovered\("((?:[^"\\\n]|\\.)*)"((?:[^;\n]|\n(?!\s*sr_text))*?), NULL\) /\* 0x([0-9A-F]+) \*/')
    done = left = plain = 0
    for path, body in bodies.items():
        marks = list(marker.finditer(body))
        edits = []
        for m, nxt in zip(marks, marks[1:] + [None]):
            start = int(m.group(1), 16)
            lo, hi = m.end(), nxt.start() if nxt else len(body)
            found = None
            for c in call.finditer(body, lo, hi):
                wanted = len(re.findall(r"/[IiLlbcfhsux]", c.group(1).replace("//", "")))
                if not wanted:
                    plain += 1
                    continue
                if found is None:
                    found = sites(start, min(following.get(start, start + 0x40000), start + 0x40000))
                slots = found.get(int(c.group(3), 16), {})
                values = [c_value(slots[0x48 + 8 * k]) if slots.get(0x48 + 8 * k) else None for k in range(wanted)]
                has_float = "/f" in c.group(1)
                if has_float or any(v is None for v in values):
                    left += 1
                    print("%s 0x%s \"%s\": %s" % (os.path.basename(path), c.group(3), c.group(1)[:30],
                                                  "float value" if has_float else "value computed in a register"))
                    continue
                done += 1
                end = c.end()
                null_at = body.rindex(", NULL)", c.start(), end)
                edits.append((null_at, null_at + len(", NULL)"), ", (const uint64[]){%s})" % ", ".join(values)))
        if apply and edits:
            pieces, cursor = [], 0
            for s, e, new in sorted(edits):
                pieces.append(body[cursor:s]); pieces.append(new); cursor = e
            pieces.append(body[cursor:])
            open(path, "w", encoding="utf-8", newline="").write("".join(pieces))
    print("%d calls %s their values, %d still print zeros, %d have no values to print" % (
        done, "given" if apply else "can be given", left, plain))


main()
