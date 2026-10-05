import idaapi, idautils, idc

idaapi.auto_wait()

BASE = idaapi.get_imagebase()  # 0x180000000 in this DB
out = []

def ea_of(rva):
    return BASE + rva

targets = {
    0x43EBF580: "perTypeColor table",
    0x43EBF0F4: "colorA",
    0x43EBF10C: "colorB",
    0x43EBF134: "table134 (8 entries)",
    0x43EBF178: "colorC",
    0x43EBF180: "table180",
    0x43EBF110: "colorD",
    0x43EBF148: "colorE",
    0x43EBF168: "colorF",
    0x43EBF16C: "colorG",
}

for rva, name in targets.items():
    ea = ea_of(rva)
    out.append(f"===== {name} @ {ea:#x} =====")
    refs = list(idautils.XrefsTo(ea, 0))
    out.append(f"xrefs: {len(refs)}")
    for x in refs[:30]:
        frm = x.frm
        fname = idc.get_func_name(frm) or "?"
        out.append(f"  from {frm:#x} in {fname} type {x.type}")

# Dump the init region that fills these tables: find the function containing
# writes to 0x183EBF580 - dump xref frames with context
out.append("===== write contexts =====")
ea = ea_of(0x43EBF580)
for x in idautils.XrefsTo(ea, 0):
    addr = x.frm
    start = addr - 0x40
    out.append(f"--- context around {addr:#x} ---")
    a = start
    for _ in range(20):
        out.append(f"  {a:#x}: {idc.GetDisasm(a)}")
        a = idc.next_head(a)
        if a == idaapi.BADADDR:
            break

# Also dump the whole sub that likely initializes them: search functions
# reading the counter 0x183EBB0C0 we know is written by sub_14013DCD0;
# dump sub_14013DCD0 callers
out.append("===== callers of sub_14013DCD0 =====")
for x in idautils.XrefsTo(ea_of(0x13DCD0), 0):
    out.append(f"  call from {x.frm:#x} ({idc.get_func_name(x.frm)})")

with open(r"decompilation/notes/color-table-analysis.txt", "w") as f:
    f.write("\n".join(out))
print("DONE, lines:", len(out))
idc.qexit(0)
