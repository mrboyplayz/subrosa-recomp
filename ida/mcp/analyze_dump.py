"""Open a binary with idalib, run auto-analysis, save the database and dump
the function table (start, size, name, byte hash) as JSON.

usage: python analyze_dump.py <binary> <out.json>
"""
import hashlib, json, sys
import idapro

binary, out = sys.argv[1], sys.argv[2]
if idapro.open_database(binary, run_auto_analysis=True):
    sys.exit("open_database failed")
import ida_auto, ida_bytes, ida_funcs, ida_name, idautils, ida_nalt
ida_auto.auto_wait()
funcs = []
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    data = ida_bytes.get_bytes(f.start_ea, f.end_ea - f.start_ea) or b""
    funcs.append({
        "address": hex(f.start_ea),
        "size": f.end_ea - f.start_ea,
        "name": ida_name.get_name(f.start_ea),
        "sha1": hashlib.sha1(data).hexdigest(),
        "library": bool(f.flags & ida_funcs.FUNC_LIB),
    })
json.dump({"input": binary, "sha256": ida_nalt.retrieve_input_file_sha256().hex(),
           "functions": funcs}, open(out, "w"), indent=1)
print(len(funcs), "functions")
idapro.close_database(save=True)
