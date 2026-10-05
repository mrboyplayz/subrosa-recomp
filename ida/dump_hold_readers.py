import idaapi, idautils, idc

idaapi.auto_wait()

BASE = idaapi.get_imagebase()
out = []

sites = [0xAC5C5, 0xAF784, 0xB099B, 0xB2B29, 0xB4AE7, 0xB66F1, 0xE84EB, 0xE8513]
funcs = set()
for s in sites:
    f = idaapi.get_func(BASE + s)
    if f:
        funcs.add(f.start_ea)
    out.append(f"site {s:#x} -> func {(f.start_ea if f else 0):#x}")

out.append("=====")
for fea in sorted(funcs):
    name = idc.get_func_name(fea)
    out.append(f"===== function {name} @ {fea:#x} =====")
    addr = fea
    end = idaapi.get_func(fea).end_ea
    count = 0
    while addr < end and count < 4000:
        out.append(f"  {addr:#x}: {idc.GetDisasm(addr)}")
        addr = idc.next_head(addr)
        if addr == idaapi.BADADDR:
            break
        count += 1

with open(r"decompilation/notes/hold-reader-functions.txt", "w") as f:
    f.write("\n".join(out))
print("DONE", len(out))
idc.qexit(0)
