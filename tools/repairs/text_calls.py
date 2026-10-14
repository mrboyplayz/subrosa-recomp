"""Restore the flags and colour arguments of sr_CSDrawText callers from the original instructions.

The original routine 0x14006D930 is variadic: (format, x, y, size, flags, red, green, blue, alpha, ...).
The decompiler gave its callers only the first four arguments, so they draw unanchored white text. For
every call site this reads what the original stores in the stack argument slots before the call
(flags at [rsp+20h], the colour at [rsp+28h..40h]) and rewrites the C call as sr_text_draw_recovered()
with those values. Calls are matched to the original's call sites in order within each function, and the
format string is compared where both sides have one.

  python tools/repairs/text_calls.py            report only
  python tools/repairs/text_calls.py --apply    rewrite src/client

A site is left alone (and listed) when a value comes from something other than a constant, or when the
function's calls cannot be matched one to one. Format arguments (%d and so on) are not recovered here:
such calls get their colour and flags but still print zeros for the values.
"""
import glob, os, re, struct, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import (X86_OP_MEM, X86_OP_IMM, X86_OP_REG, X86_REG_RIP, X86_REG_RSP, X86_REG_RCX, X86_REG_ECX,
                          X86_REG_XMM0, X86_REG_XMM15)

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..")
BASE, TARGET = 0x140000000, 0x14006D930
pe = pefile.PE(os.path.join(ROOT, "re", "binaries", "subrosa-vanilla.exe"), fast_load=True)
md = Cs(CS_ARCH_X86, CS_MODE_64)
md.detail = True


def data(address, size):
    return pe.get_data(address - BASE, size)


def split_call(text, open_paren):
    depth, args, current, i = 0, [], [], open_paren
    in_string = False
    while i < len(text):
        c = text[i]
        if in_string:
            current.append(c)
            if c == "\\":
                current.append(text[i + 1]); i += 1
            elif c == '"':
                in_string = False
        elif c == '"':
            in_string = True; current.append(c)
        elif c in "([{":
            depth += 1
            if depth > 1: current.append(c)
        elif c in ")]}":
            depth -= 1
            if depth == 0:
                args.append("".join(current).strip())
                return args, i + 1
            current.append(c)
        elif c == "," and depth == 1:
            args.append("".join(current).strip()); current = []
        else:
            current.append(c)
        i += 1
    raise ValueError("unbalanced call")


def native_sites(start, end):
    """Call sites of TARGET in [start, end): dict of slot -> ('int', v) / ('float', v) / None, plus the format string."""
    text = next(s for s in pe.sections if s.Name.startswith(b".text"))
    code = text.get_data()[start - BASE - text.VirtualAddress:end - BASE - text.VirtualAddress]
    xmm, gpr, slots, rcx_string, sites = {}, {}, {}, None, []
    for ins in md.disasm(code, start):
        ops = ins.operands
        m = ins.mnemonic
        if m == "call":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm == TARGET:
                sites.append((ins.address, dict(slots), rcx_string))
            slots = {}
            rcx_string = None
            for r in range(X86_REG_XMM0, X86_REG_XMM0 + 6):
                xmm.pop(r, None)
            gpr = {k: v for k, v in gpr.items() if k in KEPT}  # callee-saved registers keep their constants
            continue
        if len(ops) == 2:
            dst, src = ops
            if dst.type == X86_OP_REG and X86_REG_XMM0 <= dst.reg <= X86_REG_XMM15:
                if (m in ("movss", "movd") and src.type == X86_OP_MEM and src.mem.base == X86_REG_RIP
                        and 0x14026E000 <= ins.address + ins.size + src.mem.disp < 0x1402B2000):  # read-only constants only
                    xmm[dst.reg] = struct.unpack("<f", data(ins.address + ins.size + src.mem.disp, 4))[0]
                elif m in ("xorps", "pxor") and src.type == X86_OP_REG and src.reg == dst.reg:
                    xmm[dst.reg] = 0.0
                elif m in ("movaps", "movss", "movups") and src.type == X86_OP_REG and src.reg in xmm:
                    xmm[dst.reg] = xmm[src.reg]
                elif not m.startswith(("comis", "ucomis")):
                    xmm.pop(dst.reg, None)
                continue
            if dst.type == X86_OP_MEM and dst.mem.base == X86_REG_RSP and dst.mem.index == 0:
                offset = dst.mem.disp
                if src.type == X86_OP_IMM:
                    slots[offset] = ("int", src.imm & 0xFFFFFFFF)
                elif src.type == X86_OP_REG and X86_REG_XMM0 <= src.reg <= X86_REG_XMM15:
                    slots[offset] = ("float", xmm[src.reg]) if src.reg in xmm else None
                elif src.type == X86_OP_REG:
                    name = canonical(ins.reg_name(src.reg))
                    slots[offset] = ("int", gpr[name]) if name in gpr else None
                continue
            if dst.type == X86_OP_REG:
                name = canonical(ins.reg_name(dst.reg))
                if m == "lea" and src.type == X86_OP_MEM and src.mem.base == X86_REG_RIP and dst.reg == X86_REG_RCX:
                    target = ins.address + ins.size + src.mem.disp
                    try:
                        rcx_string = data(target, 96).split(b"\0")[0].decode("latin1")
                    except Exception:
                        rcx_string = None
                elif m == "mov" and src.type == X86_OP_IMM:
                    gpr[name] = src.imm & 0xFFFFFFFF
                elif m == "xor" and src.type == X86_OP_REG and src.reg == dst.reg:
                    gpr[name] = 0
                else:
                    gpr.pop(name, None)
                    if dst.reg in (X86_REG_RCX, X86_REG_ECX):
                        rcx_string = None
    return sites


KEPT = {"rbx", "rbp", "rsi", "rdi", "r12", "r13", "r14", "r15"}


def canonical(name):
    """64-bit name of a general register (ebx, bx, bl -> rbx; r12d -> r12)."""
    if name.startswith("r") and name[1:2].isdigit():
        return name.rstrip("dwb")
    table = {"eax": "rax", "ebx": "rbx", "ecx": "rcx", "edx": "rdx", "esi": "rsi", "edi": "rdi", "ebp": "rbp", "esp": "rsp",
             "ax": "rax", "bx": "rbx", "cx": "rcx", "dx": "rdx", "si": "rsi", "di": "rdi", "bp": "rbp",
             "al": "rax", "bl": "rbx", "cl": "rcx", "dl": "rdx", "sil": "rsi", "dil": "rdi", "bpl": "rbp"}
    return table.get(name, name)


def literal(value):
    return float(value).hex() + "f"


def main():
    apply = "--apply" in sys.argv
    marker = re.compile(r"^//----- \(0*([0-9A-Fa-f]{9,16})\)", re.M)
    files = [p for p in sorted(glob.glob(os.path.join(ROOT, "src", "client", "client_*.c"))) if not p.endswith("client_data.c")]
    bodies = {p: open(p, encoding="utf-8", errors="replace", newline="").read() for p in files}
    starts = sorted({int(m.group(1), 16) for b in bodies.values() for m in marker.finditer(b)})
    following = dict(zip(starts, starts[1:]))
    done = left = skipped_functions = 0
    for path, body in bodies.items():
        out, cursor = [], 0
        marks = list(marker.finditer(body))
        for m, nxt in zip(marks, marks[1:] + [None]):
            start = int(m.group(1), 16)
            lo, hi = m.end(), nxt.start() if nxt else len(body)
            part = body[lo:hi]
            calls = []
            for c in re.finditer(r"(?<![\w.])sr_CSDrawText\(", part):
                line_start = part.rfind("\n", 0, c.start()) + 1
                prefix = part[line_start:c.start()]
                if prefix.lstrip().startswith("//") or re.match(r"^\s*(__int64|void|extern)\b", prefix) or re.match(r"^__int64\s*$", prefix.strip() or "x") :
                    continue
                args, end = split_call(part, c.end() - 1)
                if len(args) == 4:
                    calls.append((c.start(), end, args))
            if not calls or start not in following or start == TARGET:
                continue
            sites = native_sites(start, min(following[start], start + 0x40000))
            name = "%s sub_%X" % (os.path.basename(path), start)
            def c_string(args):
                found = re.fullmatch(r'"((?:[^"\\]|\\.)*)"', args[0])
                return found.group(1).encode().decode("unicode_escape") if found else None

            ordered = len(sites) == len(calls) and all(
                c_string(c[2]) is None or site[2] is None or c_string(c[2]) == site[2] for c, site in zip(calls, sites))
            if not ordered:
                # Pair by format string instead: calls whose literal occurs equally often on both sides, in order.
                paired_calls, paired_sites = [], []
                for text in {c_string(c[2]) for c in calls} - {None}:
                    mine = [c for c in calls if c_string(c[2]) == text]
                    theirs = [site for site in sites if site[2] == text]
                    if len(mine) == len(theirs):
                        paired_calls += mine
                        paired_sites += theirs
                unpaired = len(calls) - len(paired_calls)
                if unpaired:
                    left += unpaired
                    print("%s: %d of %d calls could not be matched to an original call site; left alone" % (name, unpaired, len(calls)))
                calls, sites = paired_calls, paired_sites
            edits = []
            for (c_start, c_end, args), (address, slots, text) in zip(calls, sites):
                wanted = [slots.get(0x20), slots.get(0x28), slots.get(0x30), slots.get(0x38), slots.get(0x40)]
                if any(v is None for v in wanted) or wanted[0][0] != "int" or any(v[0] != "float" for v in wanted[1:]):
                    left += 1
                    print("%s: 0x%X %s: flags/colour not constant (%s); left alone" % (
                        name, address, args[0][:30], ",".join("?" if v is None else v[0] for v in wanted)))
                    continue
                new = "sr_text_draw_recovered(%s, %s, sr_text_bits_float((unsigned)(uintptr_t)(%s)), %s, %uu, %s, %s, %s, %s, NULL) /* 0x%X */" % (
                    args[0], args[1], args[2], args[3], wanted[0][1], literal(wanted[1][1]), literal(wanted[2][1]),
                    literal(wanted[3][1]), literal(wanted[4][1]), address)
                edits.append((lo + c_start, lo + c_end, new))
            done += len(edits)
            for e in edits:
                out.append(e)
        if apply and out:
            pieces, cursor = [], 0
            for s, e, new in sorted(out):
                pieces.append(body[cursor:s]); pieces.append(new); cursor = e
            pieces.append(body[cursor:])
            open(path, "w", encoding="utf-8", newline="").write("".join(pieces))
    print("%d call sites %s, %d left as they are (%d functions unmatched)" % (
        done, "rewritten" if apply else "recoverable", left, skipped_functions))


main()
