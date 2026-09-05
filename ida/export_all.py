"""Run inside IDA: idat -A -S"export_all.py OUTPUT_DIR" snapshot.i64."""

import hashlib
import json
import os
from pathlib import Path
import re
import time
import traceback

import ida_auto
import ida_bytes
import ida_funcs
import ida_hexrays
import ida_nalt
import ida_pro
import ida_segment
import idaapi
import idautils
import idc


def write_json(path, value):
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")
    temporary.replace(path)


def discover_functions():
    """Analysis during decompilation can create or merge function entries."""
    visited = set()
    while True:
        ida_auto.auto_wait()
        pending = [ea for ea in idautils.Functions() if ea not in visited]
        if not pending:
            return
        for ea in pending:
            visited.add(ea)
            yield ea


def export(output):
    output.mkdir(parents=True, exist_ok=True)
    function_dir = output / "functions"
    function_dir.mkdir(exist_ok=True)
    ida_auto.auto_wait()
    if not ida_hexrays.init_hexrays_plugin():
        raise RuntimeError("Hex-Rays decompiler is unavailable")

    addresses = list(idautils.Functions())
    source = Path(ida_nalt.get_input_file_path())
    manifest = {
        "input": str(source),
        "sha256": hashlib.sha256(source.read_bytes()).hexdigest(),
        "image_base": hex(ida_nalt.get_imagebase()),
        "ida_version": idaapi.get_kernel_version(),
        "hexrays_version": ida_hexrays.get_hexrays_version(),
        "recognized_functions": len(addresses),
        "state": "running",
        "decompiled": 0,
        "failed": 0,
        "functions": [],
        "removed_during_analysis": [],
    }
    prior = {}
    previous_manifest = {}
    if os.environ.get("SUBROSA_EXPORT_RESUME") == "1" and (output / "manifest.json").exists():
        saved = json.loads((output / "manifest.json").read_text(encoding="utf-8"))
        if saved["sha256"] != manifest["sha256"]:
            raise RuntimeError("Cannot resume an export from a different binary")
        prior = {item["address"]: item for item in saved["functions"]}
        previous_manifest = saved
        for field in ("stack_probe_corrections", "frame_corrections"):
            if field in saved:
                manifest[field] = saved[field]
    write_json(output / "manifest.json", manifest)
    started = time.monotonic()
    recompiled = 0
    with (output / "progress.log").open("w", encoding="utf-8", buffering=1) as log:
        for index, ea in enumerate(discover_functions(), 1):
            fn = ida_funcs.get_func(ea)
            if fn is None or fn.start_ea != ea:
                manifest["removed_during_analysis"].append(hex(ea))
                log.write("%d/%d %s removed by analysis\n" % (index, len(addresses), hex(ea)))
                continue
            saved = prior.get(hex(ea))
            if (saved and saved["status"] == "decompiled" and (output / saved["file"]).is_file()
                    and (output / saved["file"]).stat().st_size > 0):
                manifest["functions"].append(saved)
                manifest["decompiled"] += 1
                continue
            name = ida_funcs.get_func_name(ea) or "sub_%X" % ea
            recompiled += 1
            stem = "%016X_%s" % (ea, re.sub(r"[^a-zA-Z0-9_.-]", "_", name)[:100])
            record = {
                "address": hex(ea),
                "name": name,
                "size": ida_funcs.calc_func_size(fn),
                "library": bool(fn.flags & ida_funcs.FUNC_LIB),
                "thunk": bool(fn.flags & ida_funcs.FUNC_THUNK),
                "prototype": idc.get_type(ea),
            }
            header = "/* Address: %s | Name: %s | Size: %d bytes */\n" % (
                hex(ea), name.replace("*/", "* /"), record["size"])
            try:
                failure = ida_hexrays.hexrays_failure_t()
                cfunc = ida_hexrays.decompile(ea, failure)
                if cfunc is None:
                    raise RuntimeError(failure.desc())
                code = str(cfunc)
                if not code.strip():
                    raise RuntimeError("Decompiler returned empty output")
                record.update(status="decompiled", file="functions/" + stem + ".c")
                (output / record["file"]).write_text(header + code + "\n", encoding="utf-8")
                manifest["decompiled"] += 1
            except Exception as exc:
                record.update(status="failed", error=str(exc), file="functions/" + stem + ".asm")
                with (output / record["file"]).open("w", encoding="utf-8") as assembly:
                    assembly.write("; %s: %s\n; Decompilation failed: %s\n" % (hex(ea), name, exc))
                    for item in idautils.FuncItems(ea):
                        assembly.write("%016X  %s\n" % (item, idc.generate_disasm_line(item, 0) or ""))
                manifest["failed"] += 1
            manifest["functions"].append(record)
            log.write("%d/%d %s %s %s\n" % (index, len(addresses), hex(ea), record["status"], name))
            if index % 50 == 0:
                manifest["elapsed_seconds"] = round(time.monotonic() - started, 1)
                write_json(output / "manifest.json", manifest)

        manifest["state"] = "exporting_declarations"
        final_addresses = {hex(ea) for ea in idautils.Functions()}
        manifest["removed_during_analysis"].extend(
            item["address"] for item in manifest["functions"] if item["address"] not in final_addresses)
        manifest["functions"] = [item for item in manifest["functions"] if item["address"] in final_addresses]
        manifest["final_function_addresses"] = sorted(final_addresses)
        manifest["decompiled"] = sum(item["status"] == "decompiled" for item in manifest["functions"])
        manifest["failed"] = sum(item["status"] == "failed" for item in manifest["functions"])
        manifest["initial_recognized_functions"] = len(addresses)
        manifest["recognized_functions"] = len(manifest["functions"])
        if {item["address"] for item in manifest["functions"]} != final_addresses:
            raise RuntimeError("Export index does not cover the final function inventory")
        write_json(output / "manifest.json", manifest)
        log.write("Exporting combined C with inferred declarations\n")
        # An explicit address list includes library functions as well as game code.
        targets = ida_pro.uint64vec_t()
        for item in manifest["functions"]:
            targets.push_back(int(item["address"], 16))
        combined = output / (source.stem + ".c")
        if (recompiled == 0 and set(prior) == final_addresses
                and previous_manifest.get("combined_export_ok") and combined.is_file()
                and combined.stat().st_size > 0):
            manifest["combined_export_ok"] = True
            log.write("Combined C is unchanged; retaining the completed export\n")
        else:
            combined_temporary = output / (source.stem + ".pending.c")
            manifest["combined_export_ok"] = bool(ida_hexrays.decompile_many(
                str(combined_temporary), targets,
                ida_hexrays.VDRUN_NEWFILE | ida_hexrays.VDRUN_SILENT))
            if manifest["combined_export_ok"]:
                combined_temporary.replace(combined)

        imports = []
        for module_index in range(ida_nalt.get_import_module_qty()):
            module = ida_nalt.get_import_module_name(module_index)

            def collect(ea, name, ordinal):
                imports.append({"module": module, "address": hex(ea), "name": name, "ordinal": ordinal})
                return True

            ida_nalt.enum_import_names(module_index, collect)
        write_json(output / "imports.json", imports)
        write_json(output / "strings.json", [
            {"address": hex(item.ea), "length": item.length, "text": str(item)}
            for item in idautils.Strings()])
        write_json(output / "symbols.json", [
            {"address": hex(ea), "name": name} for ea, name in idautils.Names()])
        write_json(output / "segments.json", [
            {"name": ida_segment.get_segm_name(ida_segment.getseg(ea)),
             "start": hex(ea), "end": hex(ida_segment.getseg(ea).end_ea)}
            for ea in idautils.Segments()])
        manifest["state"] = "complete"
        manifest["elapsed_seconds"] = round(time.monotonic() - started, 1)
        write_json(output / "manifest.json", manifest)
        summary = (
            "# Local Hex-Rays Export\n\n"
            "Input: `{input}`\n\nSHA256: `{sha256}`\n\n"
            "Recognized functions: {recognized_functions}\n\n"
            "Decompiled: {decompiled}\n\nFailed (assembly retained): {failed}\n\n"
            "This is C-like decompiler output, not recovered original source or a buildable game. "
            "Names, types, structures, function boundaries, and inferred behavior may be wrong. "
            "Coverage counts IDA-recognized functions, not all possible code in the binary.\n\n"
            "`manifest.json` maps every function to its output and records failures. "
            "The combined C file includes Hex-Rays inferred declarations. "
            "Individual files in `functions/` are convenient for analysis and are not standalone translation units.\n"
        ).format(**manifest)
        (output / "README.md").write_text(summary, encoding="utf-8")
        log.write("COMPLETE: %d decompiled, %d failed\n" % (manifest["decompiled"], manifest["failed"]))


if __name__ == "__main__":
    exit_code = 0
    try:
        destination = idc.ARGV[1] if len(idc.ARGV) == 2 else os.environ.get("SUBROSA_EXPORT_DIRECTORY")
        if not destination:
            raise RuntimeError("Expected an output directory argument or SUBROSA_EXPORT_DIRECTORY")
        export(Path(destination).resolve())
    except Exception:
        traceback.print_exc()
        exit_code = 1
    idc.qexit(exit_code)
