import ida_auto
import ida_funcs
import ida_hexrays
import ida_nalt
import ida_kernwin
import idc

ida_auto.auto_wait()
base = ida_nalt.get_imagebase()
target = base + 0x718D0
fn = ida_funcs.get_func(target)
out = r"D:\SteamLibrary\steamapps\common\Sub Rosa\decompilation\ida\analyze_limb.txt"
with open(out, "w", encoding="utf-8") as handle:
    handle.write(f"base={base:#x} target={target:#x} fn={fn.start_ea if fn else None}\n")
    if fn and ida_hexrays.init_hexrays_plugin():
        handle.write(str(ida_hexrays.decompile(fn.start_ea)))
    else:
        handle.write("No function or decompiler unavailable\n")
idc.qexit(0)
