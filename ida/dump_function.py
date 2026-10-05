import sys

import ida_hexrays
import idaapi
import idc

idaapi.auto_wait()

default_client = idaapi.get_imagebase() == 0x140000000
ea = int(idc.ARGV[1], 0) if len(idc.ARGV) >= 2 else (0x1400D8B70 if default_client else 0x88CF0)
output = idc.ARGV[2] if len(idc.ARGV) >= 3 else (
    r"D:\SteamLibrary\steamapps\common\Sub Rosa\decompilation\notes\loose-object-ray-client.txt"
    if default_client
    else r"D:\SteamLibrary\steamapps\common\Sub Rosa\decompilation\notes\line-intersect-linux.txt"
)
func = idaapi.get_func(ea)
with open(output, "w", encoding="utf-8") as stream:
    if func is None:
        stream.write(f"no function at {ea:#x}\n")
    else:
        stream.write(f"{func.start_ea:#x}-{func.end_ea:#x} {idc.get_func_name(func.start_ea)}\n\n")
        try:
            stream.write(str(ida_hexrays.decompile(func.start_ea)))
        except Exception as exc:
            stream.write(f"decompile failed: {exc}\n")
            cur = func.start_ea
            while cur < func.end_ea:
                stream.write(f"{cur:#x}: {idc.GetDisasm(cur)}\n")
                cur = idc.next_head(cur, func.end_ea)

idc.qexit(0)
