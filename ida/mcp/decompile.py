"""Decompile functions from an existing IDA database with idalib.

usage: python decompile.py <binary-or-i64> <outdir> <addr> [addr ...]
       python decompile.py <binary-or-i64> <outdir> --all
Writes <outdir>/<ADDR>.c (Hex-Rays) and <ADDR>.asm (disassembly).
"""
import os, sys
import idapro

db, outdir, addrs = sys.argv[1], sys.argv[2], sys.argv[3:]
os.makedirs(outdir, exist_ok=True)
if idapro.open_database(db, run_auto_analysis=False):
    sys.exit("open_database failed")
import ida_funcs, ida_hexrays, ida_lines, idautils, idc
ida_hexrays.init_hexrays_plugin()
eas = list(idautils.Functions()) if addrs == ["--all"] else [int(a, 16) for a in addrs]
for ea in eas:
    f = ida_funcs.get_func(ea)
    if not f:
        print("no function at", hex(ea)); continue
    tag = "%016X" % f.start_ea
    try:
        c = str(ida_hexrays.decompile(f.start_ea))
    except Exception as e:
        c = "// decompilation failed: %s\n" % e
    open(os.path.join(outdir, tag + ".c"), "w", encoding="utf-8").write(c)
    lines = []
    for item in idautils.FuncItems(f.start_ea):
        lines.append("%X  %s" % (item, ida_lines.tag_remove(idc.generate_disasm_line(item, 0))))
    open(os.path.join(outdir, tag + ".asm"), "w", encoding="utf-8").write("\n".join(lines) + "\n")
print("done", len(eas))
idapro.close_database(save=False)
