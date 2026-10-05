import idaapi
import idautils
import idc

idaapi.auto_wait()

base = idaapi.get_imagebase()
result = base + (0x11A84880 if base == 0x140000000 else 0x569EF720)
out = []
for offset in range(0, 0x90, 4):
    ea = result + offset
    refs = list(idautils.XrefsTo(ea))
    if not refs:
        continue
    out.append(f"FIELD +{offset:#x} {ea:#x}")
    for ref in refs:
        func = idaapi.get_func(ref.frm)
        out.append(f"  {ref.frm:#x} func={(func.start_ea if func else 0):#x} {idc.GetDisasm(ref.frm)}")

output = (
    r"D:\SteamLibrary\steamapps\common\Sub Rosa\decompilation\notes\line-result-xrefs-client.txt"
    if base == 0x140000000
    else r"D:\SteamLibrary\steamapps\common\Sub Rosa\decompilation\notes\line-result-xrefs-linux.txt"
)
with open(output, "w", encoding="utf-8") as stream:
    stream.write("\n".join(out))
idc.qexit(0)
