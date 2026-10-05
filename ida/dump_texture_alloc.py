import idaapi, idautils, idc, json

idaapi.auto_wait()

BASE = idaapi.get_imagebase()  # 0x140000000
out = []

def ea_of(rva):
    return BASE + rva

# Targets of interest (RVAs relative to image base):
targets = {
    0x43E977C4: "ModelTextureResources table",
    0x43EBB0C0: "ModelResourceCount (?)",
    0x43EBB6C4: "ItemModelResources table",
    0x43E9B0C0: "GL texture name pool",
    0x43E9B404: "vanilla texture id global 1",
    0x43E9B408: "vanilla texture id global 2",
    0x43E9B414: "vanilla texture id global 3",
    0x43E9B418: "vanilla texture id global 4",
}

for rva, name in targets.items():
    ea = ea_of(rva)
    out.append(f"===== {name} @ {ea:#x} =====")
    refs = list(idautils.XrefsTo(ea, 0))
    out.append(f"xrefs: {len(refs)}")
    for x in refs[:40]:
        frm = x.frm
        fname = idc.get_func_name(frm) or "?"
        # render a small window of instructions around the ref
        lines = []
        start = idc.get_item_head(frm)
        addr = start
        for _ in range(6):
            lines.append(f"    {addr:#x}: {idc.GetDisasm(addr)}")
            addr = idc.next_head(addr)
            if addr == idaapi.BADADDR:
                break
        out.append(f"  from {frm:#x} in {fname} (type {x.type})")
        out.extend(lines)

# Also fully dump the PNG loader 0xEDED0..0xEE120
out.append("===== LoadTextureFunc 0xEDED0 full =====")
addr = ea_of(0xEDED0)
end = ea_of(0xEE120)
while addr < end:
    out.append(f"  {addr:#x}: {idc.GetDisasm(addr)}")
    addr = idc.next_head(addr)

# And dump the function that reads ItemModelResources (renderer) around 0x225ac
out.append("===== renderer region 0x22400-0x22c00 =====")
addr = ea_of(0x22400)
end = ea_of(0x22C00)
while addr < end:
    out.append(f"  {addr:#x}: {idc.GetDisasm(addr)}")
    addr = idc.next_head(addr)

with open(r"decompilation/notes/texture-alloc-analysis.txt", "w") as f:
    f.write("\n".join(out))
print("DONE, lines:", len(out))
idc.qexit(0)
