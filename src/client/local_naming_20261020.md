# Complete local identifier naming pass, 2026-10-20

There are no remaining C identifiers matching `v<number>` in maintained
`src/` C files or headers. This pass changes 298,008 identifier references
across 71 files, including every recovery bucket, the Microsoft runtime,
the image/font code, shared prototypes and the three trunk vectors in the
readable engine.

The client registry adds 54,081 scoped identifier mappings in 2,988
address-marked blocks. These include ordinary locals, shared-frame aliases
and stale macro cleanup names. Together with the previous synthesis/PCM
batch, `local_names.tsv` records 54,209 local/argument mappings. Allocator
prototype arguments and the engine's pelvis/stomach/chest vector names are
also cleaned up.

## Meaning of the names

Names describe evidence from the current code: known callee argument roles,
record strides, named fields, input components, SIMD lanes, loop counters,
buffer cursors, bit operations, retained copies and arithmetic operations.
Function-specific reviewed names cover input events, quaternion packing,
voice packets, number parsing, sound loading and mixing, and allocation.

The pass does not claim to recover the original author's variable names or
fully reconstruct every game structure. Where a field's domain meaning is
not established, its name describes the visible operation or storage, such
as `source_float_6`, `frame_word_at_24`, `record_pointer` or `weighted_sum`.
Distinct values with the same role receive a numeric suffix within their
scope. The old generic `integer_value`/`scalar_value` fallback names in the
initial preview were refined through copy chains, storage fields and uses.

The existing decompiler output also contains reads without an initializer.
Those inputs are explicitly named `unrecovered_register_value` rather than
being assigned guessed values. Naming them does not repair their original
ABI/type recovery. Write-only slots, unused locals and unused frame aliases
are labeled separately. Numerical constants and expression order are
unchanged.

Comments describing Visual C++ version 14, original string literals, and
historical/raw decompilation artifacts retain their text. They are not C
local identifiers. Only maintained source under `src/` is in this pass.

## Verification

The full client rebuild and link succeed. The new executable and SDL library
are in `dist/`.

The source audit checks every one of the 261 saved C/header files. Reversing
the scoped identifier mappings reproduces the saved sources exactly,
including comments, literals, expressions and line endings. The original
4,229 address markers and all 334 assigned module owners remain valid.

All 223 saved object files also match the rebuilt objects in their **6,583
allocatable sections**, including relocation targets. This covers machine
code, constants, initialized data, storage sizes and unwind records. Debug
sections are excluded because local identifier names intentionally change
there. There are zero source or compiled-section differences after reversing
the identifier changes.

The snapshot, complete mapping evidence and verification result are local
build artifacts in `build/all-local-names-20261020/`:

- `before/` and `before-objects/`: the source and object snapshots.
- `final-plan.json`: every scoped name, its evidence and role confidence.
- `extra-inverse-names.json`: shared prototypes, trunk vectors and the
  independent `chdrive` error name beside its appended allocator helper.
- `verification.json`: source and COFF section/relocation audit results.

## Tools

```powershell
python tools/cleanup/recover_client_locals.py --check
python tools/cleanup/split_client_modules.py --check
python scripts/build.py --jobs 8
python tools/cleanup/verify_local_names.py
```

The final command requires this machine's saved snapshot. It reads both
builds without stashing, replacing sources or modifying objects.

For newly introduced decompiler locals, `recover_client_locals.py` previews
role mappings by default. `--apply` writes them only after each block passes
an exact inverse-identifier check. It preserves strings/comments and updates
`local_names.tsv`. Function-specific refinements live in
`tools/cleanup/local_role_overrides.json`; inspect the preview when recovering
another routine rather than treating inferred storage roles as established
game semantics.
