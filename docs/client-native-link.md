# Client linker gaps closed — 2026-10-01

At this milestone, the Windows client compiles and links with **zero errors, zero unresolved
symbols and zero duplicate definitions**. The object retains **4,955 warnings**
and four notes. The linked executable is a recovery probe and has not been run
as a game. Original startup and complete gameplay equivalence remain unfinished.

Subsequent [warning recovery](client-warning-recovery.md) retains the empty
linker queue while reducing compiler diagnostics.

## Final gap recovery

The preparation pipeline replaces **41 C definitions** with recovered assembly.
This includes twelve CRT math routines that lost live register values, their
local helper closure, narrow and wide bounded string lengths, image channel
conversion, floating point parsing, and the shared game fragment at
`0x1400403f0` together with its owner at `0x14003b920`.

The generated assembly records each decoded instruction and its original
encoding. RIP operands and external relative branches use symbolic assembler
relocations. Local branches and inline switch tables retain their original
relative layout. IDA instruction boundaries prevent switch data from being
decoded as instructions. This recovers assembly; it does not reconstruct the
author's original high-level source or names.

The security cookie at `0x1403020a0` uses its original eight-byte width and
initial value. The exported one-byte declaration could not support the restored
native stack checks. Writable references into the existing central storage
continue to use that storage. Read-only lookup arrays and literals use 68
checked windows; complete indexed math arrays include their final entries.

Native `.pdata` and `.xdata` retain 47 unwind entries, including the shared
fragment's chained entries, saved registers, stack allocation, and the GS
handler/cookie offset. Image-relative fields are relocated to the linked PE.

## Verification

- **55 client tooling/helper tests** pass; four selected native CTest suites pass.
- **245,760** math output-bit and MXCSR comparisons match original instructions
  across three CPU dispatch values and sixteen rounding/FTZ/DAZ modes.
- **49,152** narrow/wide bounded-length comparisons pass across alignments,
  termination positions, bounds, scalar/SSE and AVX2 dispatch paths.
- The linked PE preserves **7,913 instruction boundaries**, **1,346 relative
  fixups**, 68 read-only windows and 47 unwind entries. All other bytes in the
  recovered code regions, including inline switch data, match the original.
- The dependency fixture passes, including five SDL import-slot bindings and
  4,096 indirect memory-operation comparisons.

Math comparisons cover regular finite inputs. NaN/error paths, exceptional
unwinding, extreme argument reduction, surrounding game callers, and complete
client integration still require runtime comparisons. The fixture's abort
guards are isolated test scaffolding and are absent from the client link.
The linked probe uses the existing experimental MinGW startup/WinMain binding.

## Reports and reproduction

Object: `reports/client-object-native-final-20261001/client-prepared.json`.
Link and dependency hashes: `reports/client-link-native-final-20261001/`.
Native fixtures: `reports/client-native-tests-20261001/`.

```powershell
python scripts/prepare_rebuild.py --binary client
python scripts/check-rebuild.py --binary client --prepared --object --lenient --output reports/client-object-native-final-20261001
python scripts/link_client.py --object-report reports/client-object-native-final-20261001/client-prepared.json --output reports/client-link-native-final-20261001
python scripts/verify_client_native_link.py --directory reports/client-link-native-final-20261001
python scripts/verify_client_dependencies.py --report reports/client-link-native-final-20261001/dependencies.json
python -m unittest discover -s scripts -p test_client_native_gaps.py -v
```

The original executable, shipped DLLs and decompiler exports are unchanged.
Custom `lua51.dll` is excluded from vanilla recovery.
