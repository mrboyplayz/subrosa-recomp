"""Functions whose shared exit is entered past the instruction that loads the result register.

A security-cookie epilogue usually reads   mov eax, <result> ; ... ; call __security_check_cookie ; ret.
Some branches jump straight to the tail after that load, carrying their own value in EAX (often a table
lookup made just before the branch). The recovered C then has one `return <result>;` for all of them,
which returns an unset local on those paths (sub_14001A990 returned stack garbage for cached blocks).

  python tools/audits/exit_bypass.py [--all]

Lists, per function recorded in src/rebuild/client_cookie_exits.json, the branches that enter the exit
tail after its last EAX/RAX write. Entries reviewed by hand go in REVIEWED below.
"""
import json, os, sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_IMM, X86_OP_REG, X86_REG_EAX, X86_REG_RAX, X86_REG_AX, X86_REG_AL

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..")
REVIEWED = {
    # function: note
    "0x14001A990": "fixed 2026-10-08: cache hit returns the table entry, full table returns 0",
}

_sources = {}


def c_returns(file_name, name):
    """Distinct return expressions of the C function, or None when it cannot be found."""
    import re
    if file_name not in _sources:
        path = os.path.join(ROOT, "src", "client", file_name)
        _sources[file_name] = open(path, encoding="utf-8", errors="replace").read() if os.path.exists(path) else ""
    text = _sources[file_name]
    m = re.search(r"^[A-Za-z_][^\n;]*\b%s\(" % re.escape(name), text, re.M)
    if not m:
        return None
    end = text.find("\n//----- (", m.start())
    body = re.sub(r"/\*.*?\*/", "", text[m.start():end if end > 0 else len(text)], flags=re.S)
    return {re.sub(r"\s+", " ", r).strip() for r in re.findall(r"\breturn\b([^;]*);", body)}


def main():
    pe = pefile.PE(os.path.join(ROOT, "re", "binaries", "subrosa-vanilla.exe"), fast_load=True)
    base = pe.OPTIONAL_HEADER.ImageBase
    text = next(s for s in pe.sections if s.Name.startswith(b".text"))
    code, code_va = text.get_data(), base + text.VirtualAddress
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    functions = json.load(open(os.path.join(ROOT, "src", "rebuild", "client_cookie_exits.json")))["functions"]
    starts = sorted(int(k, 16) for k in functions)
    shown = 0
    for key in sorted(functions, key=lambda k: int(k, 16)):
        entry = functions[key]
        start = int(key, 16)
        for epilogue in entry["epilogues"]:
            check = int(epilogue["check"], 16)
            if check < start:
                continue  # cold exit placed before the function body; not handled here
            instructions = list(md.disasm(code[start - code_va:check - code_va + 5], start))
            if not instructions or instructions[-1].address != check:
                continue
            # last write to the result register on the straight line into the check
            load = None
            for ins in instructions[:-1]:
                if ins.mnemonic in ("ret", "jmp", "int3") and ins.address < check:
                    load = None  # a new straight line starts after this instruction
                    continue
                written = ins.regs_access()[1]
                if any(r in written for r in (X86_REG_EAX, X86_REG_RAX, X86_REG_AX, X86_REG_AL)) and ins.mnemonic != "call":
                    load = ins.address
                elif ins.mnemonic == "call":
                    load = ins.address
            if load is None:
                continue
            index = {ins.address: i for i, ins in enumerate(instructions)}
            writes = lambda ins: any(r in ins.regs_access()[1] for r in (X86_REG_EAX, X86_REG_RAX, X86_REG_AX, X86_REG_AL))
            sources = {"%s %s" % (instructions[index[load]].mnemonic, instructions[index[load]].op_str)}
            bypass = []
            for ins in instructions:
                if ins.mnemonic.startswith("j") and ins.operands and ins.operands[0].type == X86_OP_IMM:
                    target = ins.operands[0].imm
                    if load < target <= check and not (load < ins.address <= check):
                        # the value this branch carries: the last EAX write on the straight line before it
                        source = "live-in"
                        for back in range(index[ins.address] - 1, max(-1, index[ins.address] - 40), -1):
                            prev = instructions[back]
                            if prev.mnemonic in ("jmp", "ret", "int3"):
                                break
                            if writes(prev) or prev.mnemonic == "call":
                                source = "%s %s" % (prev.mnemonic, prev.op_str)
                                break
                        sources.add(source)
                        bypass.append("0x%X %s <- %s" % (ins.address, ins.mnemonic, source))
            returns = c_returns(entry["file"], entry["name"])
            if bypass and returns is not None and len(returns) < len(sources) and (key not in REVIEWED or "--all" in sys.argv):
                shown += 1
                print("%s %s (%s): %d native result sources, %d distinct C returns %s; entered after the load from %s%s" % (
                    key, entry["name"], entry["file"], len(sources), len(returns), sorted(returns)[:3],
                    ", ".join(bypass[:6]), "  [" + REVIEWED[key] + "]" if key in REVIEWED else ""))
    print("%d functions to review" % shown)


main()
