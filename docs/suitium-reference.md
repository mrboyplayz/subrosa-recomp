# Continuing The GLM/Suitium Reconstruction

## Source And Scope

The local reference is `third_party/suitium`, revision
`c5dc659e2bcc5b3c97fb96eb3ca2bdce3d33a04e`. Its structures are licensed under
GPL-3.0; the upstream license is retained in `Suitium-LICENSE.txt` alongside this
document. The translated C layouts in `src/rebuild/suitium_types.h` derive from
those headers. Suitium itself has not been built or integrated as a game runtime.

This continuation extends GLM's Human, ItemType and Vehicle definitions with Item
and VehicleType. It does not claim original source names or a finished executable.
The CustomData fields are Suitium modifications, not recovered vanilla fields.
Absolute-address convenience macros target the original Windows image layout;
they do not provide relocated storage for a standalone C client.

## Verified Layouts

The native comparison test includes the upstream C++ headers and translated C
header together. It checks 13 type sizes/alignments and 150 field offsets/sizes.
Human is 28,664 bytes, Item 7,040, ItemType 5,072, Vehicle 20,840 and VehicleType
99,776. VehicleType's name starts at byte 20.

The earlier 563,328-byte Human stride claim was incorrect. The exported code near
combined client line 123438 indexes a separate 64-entry history buffer with that
stride; the Human array walks 28,664-byte entries.

The test-only fmt/glm includes under `layout_test_deps/` are declarations, not
implementations. They permit sizeof/offsetof checks when upstream submodules are
absent and must not be used as production substitutes for either dependency.

Enable with `-DSR_ENABLE_SUITIUM_LAYOUT_CHECK=ON`, supplying the x64 C++ compiler
when needed, then build `sr_suitium_layout_test` and run CTest.

## Export Preparation

Semantic identity maps are selected by exact client/server SHA256, not just an
address appearing in a manifest. Unknown binaries receive no semantic renames.
This prevents an overlapping server address from incorrectly naming a client
function. Lexical renaming also preserves member access across whitespace and
comments without mistaking a greater-than comparison for member access.

Seven identity regression tests and the existing 19 preparation tests passed.
Use Python 3.13 with the installed `work/python-deps` tree-sitter binding:

```powershell
$env:CC = 'C:/Users/junin/mingw64/bin/gcc.exe'
& 'C:/Users/junin/AppData/Local/Programs/Python/Python313/python.exe' scripts/test_suitium_identities.py
& 'C:/Users/junin/AppData/Local/Programs/Python/Python313/python.exe' scripts/test_prepare_rebuild.py
```

## Recovered Runtime Code

`src/recovered/rigid_body.c` implements the real allocator at `0x14005CF80`, called
by original CreateItem. Its 2,048 differential cases compare all 8,192 body records
against the hash-pinned original routine. See `fidelity.md` for fixture details.

The full export still needs type, ABI, storage and dependency reconstruction before
it can compile, link and run as a standalone game. Passing these tests does not
make the older blockout faithful or produce a new playable Sub Rosa executable.
