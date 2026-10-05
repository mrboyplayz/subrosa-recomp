import idaapi
import idautils
import idc

idaapi.auto_wait()

needles = ("bullethit", "concrete", "asphalt", "material", "foot")
out = []

for s in idautils.Strings():
    value = str(s)
    if not any(needle in value.lower() for needle in needles):
        continue
    out.append(f"STRING {s.ea:#x} {value!r}")
    for xref in idautils.XrefsTo(s.ea):
        func = idaapi.get_func(xref.frm)
        out.append(
            f"  XREF {xref.frm:#x} FUNC {(func.start_ea if func else 0):#x} "
            f"{idc.get_func_name(func.start_ea) if func else ''} {idc.GetDisasm(xref.frm)}"
        )

with open(r"D:\SteamLibrary\steamapps\common\Sub Rosa\decompilation\notes\surface-audio-xrefs.txt", "w", encoding="utf-8") as f:
    f.write("\n".join(out))

print("surface audio xrefs", len(out))
idc.qexit(0)
