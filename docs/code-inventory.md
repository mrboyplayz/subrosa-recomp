# Windows Client Code Inventory, First Pass

Run `python scripts/inventory_client_code.py` to compare the pinned client's
PE exception/unwind table with `exports/client/manifest.json`. Its full report
is `reports/code-inventory/client.json`. Unwind entries often mark compiler
funclets or chunks inside a larger IDA function, so exact-start differences
are review leads, not missing-function counts.

The installed client has 5,760 valid unwind ranges. Of their starts, 3,905
match exported function starts exactly, 1,851 lie inside an exported function
range, and four lie outside every exported range. Conversely, 364 of the 4,269
exported function starts have no unwind entry; leaf functions and thunks may
legitimately lack one.

The four uncovered unwind starts are:

| Start | Unwind range end | Initial observation |
| --- | --- | --- |
| `0x140053200` | `0x140053836` | IDA owns the entry as a tail chunk of `sub_140056980`; the exported source for that function contains the tail's texture setup, including `concrete2.png` and `asphalt2.png`. This is an address-range accounting gap, not an omitted standalone behavior. |
| `0x14025c700` | `0x14025c832` | IDA identifies a standalone math routine named `__remainder_piby2_cw_forAsm`. It is absent from the exported C source. Hex-Rays warns that local variable allocation failed, so its pseudocode is not a reliable replacement. |
| `0x14026cf90` | `0x14026cf92` | Two-byte `jmp rax` thunk. |
| `0x14026cfb0` | `0x14026cfb6` | Six-byte indirect jump through the pointer at `0x14026e698`, whose pinned-file value is `0x14026cf90`; together these form an indirect-call dispatch path. |

These classifications come from a fresh IDA analysis of a copy of the pinned
executable, with the original database untouched. The local inspection script
is `ida/inspect_unwind_gaps.py`; its detailed output is in ignored
`reports/code-inventory/ida-gaps-fresh/`. The math routine remains a genuine
source-coverage task. Recover it from its assembly and call sites, preserving
its register contract and floating-point behavior; the decompiler's short C
listing omits part of that behavior. The jump search was a linear Capstone
pass through `.text`; it is a lead, not a complete xref index.

Initialized data pointers exposed five more short `.text` entries absent
from the function manifest. Four are now directly compared with original
machine code; see [client pointer-target leaves](client-pointer-leaves.md).

This comparison does not classify `.text` bytes with no unwind record. The
next inventory pass will reconcile all executable bytes, direct and indirect
targets, tail calls, exception handlers, TLS callbacks, and data embedded in
code sections.
