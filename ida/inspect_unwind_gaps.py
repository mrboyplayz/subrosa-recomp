"""IDA batch inspection of unwind starts absent from the client export.

Run only on a copied .i64 database. Results, including proprietary pseudocode,
go to the ignored reports directory named by SUBROSA_GAP_OUTPUT.
"""

import json
import os
from pathlib import Path
import traceback

import ida_auto
import ida_bytes
import ida_funcs
import ida_hexrays
import ida_name
import ida_ua
import idautils
import idc


TARGETS = ((0x140053200, 0x140053836), (0x14025C700, 0x14025C832))


def describe(ea):
    func = ida_funcs.get_func(ea)
    chunk = ida_funcs.get_fchunk(ea)
    refs = []
    for item in idautils.XrefsTo(ea, 0):
        refs.append({"from": hex(item.frm), "type": item.type,
                     "source_function": idc.get_func_name(item.frm)})
    return {"address": hex(ea), "name": ida_name.get_name(ea),
            "is_code": bool(ida_bytes.is_code(ida_bytes.get_flags(ea))),
            "owner_function": hex(func.start_ea) if func else None,
            "chunk_start": hex(chunk.start_ea) if chunk else None,
            "chunk_end": hex(chunk.end_ea) if chunk else None,
            "incoming_refs": refs}


def inspect():
    ida_auto.auto_wait()
    output = Path(os.environ["SUBROSA_GAP_OUTPUT"])
    output.mkdir(parents=True, exist_ok=True)
    if not ida_hexrays.init_hexrays_plugin():
        raise RuntimeError("Hex-Rays decompiler unavailable")
    records = []
    for start, end in TARGETS:
        before = describe(start)
        created = False
        if ida_funcs.get_func(start) is None:
            if not ida_bytes.is_code(ida_bytes.get_flags(start)):
                ida_ua.create_insn(start)
            created = bool(ida_funcs.add_func(start, end))
            ida_auto.auto_wait()
        after = describe(start)
        pseudocode_path = output / (f"{start:016X}.txt")
        try:
            pseudocode = str(ida_hexrays.decompile(start))
            pseudocode_path.write_text(pseudocode + "\n", encoding="utf-8")
            decompilation = {"status": "ok", "file": pseudocode_path.name,
                             "characters": len(pseudocode)}
        except Exception as exc:
            decompilation = {"status": "failed", "error": str(exc)}
        disassembly = []
        cursor = start
        for _ in range(24):
            if cursor >= end:
                break
            disassembly.append({"address": hex(cursor), "text": idc.GetDisasm(cursor)})
            next_cursor = idc.next_head(cursor, end)
            if next_cursor <= cursor:
                break
            cursor = next_cursor
        records.append({"start": hex(start), "expected_end": hex(end),
                        "before": before, "created_function_in_copy": created,
                        "after": after, "decompilation": decompilation,
                        "first_instructions": disassembly})
    (output / "inspection.json").write_text(json.dumps(records, indent=2) + "\n",
                                            encoding="utf-8")


try:
    inspect()
except Exception:
    output = Path(os.environ.get("SUBROSA_GAP_OUTPUT", "."))
    output.mkdir(parents=True, exist_ok=True)
    (output / "failure.txt").write_text(traceback.format_exc(), encoding="utf-8")
    idc.qexit(1)
idc.qexit(0)
