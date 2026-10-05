"""Inspect short executable targets referenced by exported client data slots.

Run on an isolated, closed IDA database. Pseudocode goes to ignored reports.
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


TARGETS = (0x140198500, 0x140205C34, 0x140247248,
           0x140247CFC, 0x1400012A0)


def inspect():
    ida_auto.auto_wait()
    output = Path(os.environ["SUBROSA_POINTER_OUTPUT"])
    output.mkdir(parents=True, exist_ok=True)
    if not ida_hexrays.init_hexrays_plugin():
        raise RuntimeError("Hex-Rays decompiler unavailable")
    records = []
    for start in TARGETS:
        before = ida_funcs.get_func(start)
        created = False
        if before is None:
            if not ida_bytes.is_code(ida_bytes.get_flags(start)):
                ida_ua.create_insn(start)
            created = bool(ida_funcs.add_func(start))
            ida_auto.auto_wait()
        function = ida_funcs.get_func(start)
        pseudocode = None
        error = None
        try:
            pseudocode = str(ida_hexrays.decompile(start))
            (output / (f"{start:016X}.txt")).write_text(pseudocode + "\n",
                                                        encoding="utf-8")
        except Exception as exc:
            error = str(exc)
        records.append({"address": hex(start), "name": ida_name.get_name(start),
                        "created_function_in_copy": created,
                        "function_start": hex(function.start_ea) if function else None,
                        "function_end": hex(function.end_ea) if function else None,
                        "incoming_refs": [{"from": hex(ref.frm), "type": ref.type}
                                          for ref in idautils.XrefsTo(start, 0)],
                        "pseudocode_characters": len(pseudocode) if pseudocode else None,
                        "decompile_error": error,
                        "first_instructions": [idc.GetDisasm(ea) for ea in
                                               idautils.Heads(start, min(start + 32,
                                               function.end_ea if function else start + 32))]})
    (output / "inspection.json").write_text(json.dumps(records, indent=2) + "\n",
                                             encoding="utf-8")


try:
    inspect()
except Exception:
    output = Path(os.environ["SUBROSA_POINTER_OUTPUT"])
    output.mkdir(parents=True, exist_ok=True)
    (output / "failure.txt").write_text(traceback.format_exc(), encoding="utf-8")
    idc.qexit(1)
idc.qexit(0)
