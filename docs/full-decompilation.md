# Full Binary Export

The Windows client and dedicated server are processed locally with IDA 9.3 and
Hex-Rays. Generated output stays under the Git-ignored `exports/` directory.
The existing CMake targets remain partial reconstructions, not the exported game.
Use [the client address map](decompilation-map.md) to find camera, player, UI,
frame-loop, and asset-loading candidates in the generated files.

## Outputs

Each export contains a combined `.c` file with inferred declarations, individual
function `.c` files, assembly for failures, and JSON inventories for imports,
strings, symbols, segments, and functions. `manifest.json` records the input hash,
tool versions, recovery totals, errors, and per-function paths. Generated C uses
Hex-Rays conventions and its `defs.h` helper. The launcher copies this header from
IDA's `include/` into each local export directory when it is available.

Full export coverage means every function in the final IDA function inventory has
an indexed result. It does not establish that IDA discovered every instruction,
that inferred types are correct, or that the output compiles or behaves identically.
Original variable names, comments, project structure, and source types generally
cannot be recovered from these binaries alone.

## Reproduce

Save a compressed snapshot of the current client database into
`work/full-export/subrosa.i64` before running the batch process. Do not run a second
IDA process against a database already in use. The dedicated-server export uses
a local binary copy in `work/full-export/` so generated database files stay there.

From the project directory in PowerShell:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File scripts/export-decompilation.ps1 -Database work/full-export/subrosa.i64 -OutputDirectory exports/client
powershell.exe -NoProfile -ExecutionPolicy Bypass -File scripts/export-decompilation.ps1 -Database work/full-export/subrosadedicated.exe -OutputDirectory exports/dedicated
powershell.exe -NoProfile -ExecutionPolicy Bypass -File scripts/verify-export.ps1 -Directory exports/client
powershell.exe -NoProfile -ExecutionPolicy Bypass -File scripts/verify-export.ps1 -Directory exports/dedicated
```

Use `-Resume` to continue the same export after an interruption. The exporter checks
the binary hash, keeps recorded successful functions, and retries failed functions.
Function discovery is repeated until no new entries appear. Entries merged away by
analysis are recorded separately. `progress.log` reports progress and `ida.log`
contains IDA diagnostics. A complete run may still have failed functions; inspect
the manifest instead of treating a successful process exit as complete C recovery.

## Client Stack Probe

The helper at `0x1401F89D0` probes Windows stack pages using RAX, preserving RAX,
R10, and R11. Its callers commonly use `mov eax, size; call helper; sub rsp, rax`.
When IDA treats this as an ordinary unknown function, it can lose the allocation
size and report incorrect frames or failed call analysis.

`ida/repair_export.py` verifies the surveyed client's SHA256 and the exact helper
bytes before naming it `__chkstk`, applying the observed calling convention, and
recording stack deltas at matching call sites in the export database. It retries
failed and affected functions, retains initial failure assembly, regenerates the
combined C, and records corrections in JSON. These are analysis edits only.
It also rebuilds three malformed frame types from verified prologue allocation
sizes, saved-register counts, and frame-pointer offsets.

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File scripts/export-decompilation.ps1 -Database work/full-export/subrosa.i64 -OutputDirectory exports/client -RepairStackProbe
```

## Remaining Reconstruction Work

The raw export is an analysis input. A runnable reconstruction still requires
correct data layouts, external library interfaces, initialization and asset loading,
rendering, audio, input, gameplay, physics, and networking, followed by behavioral
verification. The existing UI and wireframe viewer do not establish game parity.
