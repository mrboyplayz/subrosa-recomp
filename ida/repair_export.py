"""Retry a completed client export after correcting a verified stack probe."""

import json
import os
from pathlib import Path
import sys
import traceback

import ida_auto
import ida_bytes
import ida_frame
import ida_funcs
import ida_hexrays
import ida_name
import ida_pro
import idautils
import idc

sys.path.insert(0, str(Path(__file__).resolve().parent))
from export_all import write_json


def repair(output):
    manifest = json.loads((output / "manifest.json").read_text(encoding="utf-8"))
    if manifest["sha256"] != "e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e":
        raise RuntimeError("This correction is specific to the surveyed Windows client")
    probe = 0x1401F89D0
    signature = bytes.fromhex(
        "4883ec104c8914244c895c24084d33db4c8d5424184c2bd04d0f42d3"
        "654c8b1c25100000004d3bd3f27317664181e200f04d8d9b00f0ffff"
        "41c603004d3bd3f275ef4c8b14244c8b5c24084883c410f2c3")
    if ida_bytes.get_bytes(probe, len(signature)) != signature:
        raise RuntimeError("Stack probe bytes do not match the inspected helper")
    manifest["state"] = "repairing"
    write_json(output / "manifest.json", manifest)
    ida_auto.auto_wait()
    if not ida_hexrays.init_hexrays_plugin():
        raise RuntimeError("Hex-Rays unavailable")
    ida_name.set_name(probe, "__chkstk", ida_name.SN_CHECK)
    # The verified helper probes pages using RAX and restores R10/R11. It preserves RAX.
    if not idc.SetType(probe, "unsigned __int64 __usercall __spoils<> __chkstk@<rax>(unsigned __int64 size@<rax>);"):
        raise RuntimeError("Could not apply the verified stack probe calling convention")

    corrections = []
    affected = {probe}
    for reference in idautils.CodeRefsTo(probe, False):
        fn = ida_funcs.get_func(reference)
        if not fn:
            continue
        previous = idc.prev_head(reference, fn.start_ea)
        following = idc.next_head(reference, fn.end_ea)
        if (idc.print_insn_mnem(previous) != "mov"
                or idc.print_operand(previous, 0) != "eax"
                or idc.get_operand_type(previous, 1) != idc.o_imm
                or idc.print_insn_mnem(following) != "sub"
                or idc.print_operand(following, 0) != "rsp"
                or idc.print_operand(following, 1) != "rax"):
            continue
        allocation = idc.get_operand_value(previous, 1)
        if not (0 < allocation < 0x1000000):
            continue
        end = idc.next_head(following, fn.end_ea)
        if not ida_frame.add_user_stkpnt(end, -allocation):
            raise RuntimeError("Could not correct stack delta at " + hex(end))
        corrections.append({"function": hex(fn.start_ea), "instruction": hex(following),
                            "stack_delta": -allocation, "old_frame_size": fn.frsize})
        affected.add(fn.start_ea)
        fn.flags &= ~ida_funcs.FUNC_SP_READY
        ida_funcs.update_func(fn)
        ida_funcs.reanalyze_function(fn)
    ida_auto.auto_wait()

    # Rebuild three malformed frame types using their inspected prologue sizes.
    frame_recipes = {
        0x1400F80A0: (0x1510, 0x28, 0x1410, 0x1400F80C0, "eax"),
        0x14019B2E0: (0x4B0, 8, 0x3F0, 0x14019B2F5, "rsp"),
        0x1401E5400: (0x3F0, 8, 0x390, 0x1401E5415, "rsp"),
    }
    frame_corrections = []
    for ea, (locals_size, saved_size, fp_delta, instruction, destination) in frame_recipes.items():
        if not any(int(item["address"], 16) == ea and item["status"] == "failed"
                   for item in manifest["functions"]):
            continue
        if (idc.print_operand(instruction, 0) != destination
                or idc.get_operand_type(instruction, 1) != idc.o_imm
                or idc.get_operand_value(instruction, 1) != locals_size):
            raise RuntimeError("Frame allocation instruction differs at " + hex(instruction))
        fn = ida_funcs.get_func(ea)
        before = {"locals": fn.frsize, "saved_registers": fn.frregs, "fp_delta": fn.fpd}
        ida_frame.del_frame(fn)
        if not ida_frame.add_frame(fn, locals_size, saved_size, 0):
            raise RuntimeError("Could not rebuild frame at " + hex(ea))
        fn.fpd = fp_delta
        fn.flags |= ida_funcs.FUNC_FRAME
        fn.flags &= ~(ida_funcs.FUNC_BOTTOMBP | ida_funcs.FUNC_SP_READY)
        ida_funcs.update_func(fn)
        ida_funcs.reanalyze_function(fn)
        affected.add(ea)
        frame_corrections.append({"function": hex(ea), "before": before,
                                  "locals": locals_size, "saved_registers": saved_size, "fp_delta": fp_delta})
    ida_auto.auto_wait()

    with (output / "repair.log").open("w", encoding="utf-8", buffering=1) as log:
        for record in manifest["functions"]:
            ea = int(record["address"], 16)
            if record["status"] != "failed" and ea not in affected:
                continue
            ida_hexrays.mark_cfunc_dirty(ea)
            try:
                failure = ida_hexrays.hexrays_failure_t()
                function = ida_hexrays.decompile(ea, failure)
                if function is None:
                    raise RuntimeError(failure.desc())
                relative = str(Path(record["file"]).with_suffix(".c")).replace("\\", "/")
                code = str(function)
                (output / relative).write_text(
                    "/* Address: %s | Name: %s | Stack analysis corrected in export snapshot. */\n%s\n"
                    % (record["address"], ida_funcs.get_func_name(ea), code), encoding="utf-8")
                if record["status"] == "failed":
                    record["initial_error"] = record.pop("error", "")
                    record["initial_assembly"] = record["file"]
                record.update(status="decompiled", file=relative,
                              name=ida_funcs.get_func_name(ea), prototype=idc.get_type(ea))
                log.write(record["address"] + " decompiled\n")
            except Exception as exc:
                record["retry_error"] = str(exc)
                log.write(record["address"] + " retry failed: " + str(exc) + "\n")
        manifest["decompiled"] = sum(r["status"] == "decompiled" for r in manifest["functions"])
        manifest["failed"] = sum(r["status"] == "failed" for r in manifest["functions"])
        manifest["stack_probe_corrections"] = corrections
        manifest["frame_corrections"] = frame_corrections
        write_json(output / "manifest.json", manifest)
        write_json(output / "stack-probe-corrections.json", corrections)
        log.write("Regenerating combined C\n")
        targets = ida_pro.uint64vec_t()
        for record in manifest["functions"]:
            targets.push_back(int(record["address"], 16))
        temporary = output / "subrosa.pending.c"
        manifest["combined_export_ok"] = bool(ida_hexrays.decompile_many(
            str(temporary), targets, ida_hexrays.VDRUN_NEWFILE | ida_hexrays.VDRUN_SILENT))
        if manifest["combined_export_ok"]:
            temporary.replace(output / "subrosa.c")
        manifest["state"] = "complete"
        write_json(output / "manifest.json", manifest)
        write_json(output / "symbols.json", [
            {"address": hex(ea), "name": name} for ea, name in idautils.Names()])
        readme = output / "README.md"
        with readme.open("a", encoding="utf-8") as report:
            report.write("\n## Stack Analysis Retry\n\nUpdated result: %d decompiled, %d failed. "
                         "See `stack-probe-corrections.json` and `repair.log`.\n" %
                         (manifest["decompiled"], manifest["failed"]))
        log.write("COMPLETE: %d decompiled, %d failed\n" % (manifest["decompiled"], manifest["failed"]))


if __name__ == "__main__":
    exit_code = 0
    try:
        repair(Path(os.environ["SUBROSA_EXPORT_DIRECTORY"]).resolve())
    except Exception:
        traceback.print_exc()
        exit_code = 1
    idc.qexit(exit_code)
