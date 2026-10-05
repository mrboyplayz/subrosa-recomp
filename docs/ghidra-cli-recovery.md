# Ghidra CLI recovery

Installed `C:/Users/junin/.cargo/bin/ghidra.exe` version 0.2.2 from
akiselev/ghidra-cli commit `10019ba1f3b54c9edcca8ec644a30e16fb7b7c79`.
The existing Ghidra 12.1.3 PUBLIC and JDK 25 installations are configured
in `C:/Users/junin/AppData/Roaming/ghidra-cli/config.yaml`. The default
project is `subrosa-vanilla`, program `subrosa-vanilla.exe`, under this
project's `re/ghidra_projects`. The original game EXE is unchanged.

All doctor checks and 18 CLI unit tests pass. Rust 1.99.0 GNU was installed
to build the CLI; the game recovery remains C.

The new import's SHA256 matches the pinned vanilla reference:
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
Broad autoanalysis was cooperatively interrupted after its data scan
became expensive. The CLI reported success afterward, but this is not
evidence that every analyzer completed. The manager reports 4,491 functions;
the export enumerates 4,296 internal functions, excluding external entries.
Neither count establishes complete executable coverage.

The checked export in `reports/ghidra-cli-export-20261003.txt` contains
artifact hashes and binary provenance. The script pins the input SHA256
and enforces at least 4,000 internal functions and 500 instructions. CLI
`--expect` checks nonempty artifacts; this version supports row thresholds
only for JSONL/NDJSON, so TSV row checks are enforced by the script.

## Commands

From the decompilation directory in PowerShell:

```powershell
& C:/Users/junin/.cargo/bin/ghidra.exe doctor
& C:/Users/junin/.cargo/bin/ghidra.exe decompile 0x14014fcf0 --with-params --with-vars
& C:/Users/junin/.cargo/bin/ghidra.exe script run scripts/ghidra/ExportRecoveryEvidence.java --expect reports/ghidra-cli-vanilla-20261003/functions.tsv -- reports/ghidra-cli-vanilla-20261003
```

Saved outputs: `reports/ghidra-cli-vanilla-20261003/identity.txt`,
`functions.tsv`, `blocker-disassembly.txt`, and `blocker.c`.
`sub_14014FCF0` decompiles with a void return; its native epilogue calls the
compiler cookie check. Its IDA C export instead returns a cookie expression
using an uninitialized local. This is the next integrated launch blocker.
The function also uses a contiguous vector temporary and contains a
float-to-integer conversion where assembly copies float bits; these need
native comparisons before promoting the recovered behavior.
