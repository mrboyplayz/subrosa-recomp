# Windows client object compilation, 2026-09-30

The prepared client produces a native Windows x64 COFF object with zero
compiler or assembler errors. This does not establish a runnable or equivalent
game. No client executable was linked or launched in this pass.

## Reproduce

```powershell
python scripts/prepare_rebuild.py --binary client
python scripts/check-rebuild.py --binary client --prepared --lenient --object --output reports/client-object-final-20260930
```

The object check uses MinGW GCC, GNU C11, `-O0`, `-msse4.2`, `-mcmodel=large`,
and `-Wa,-mbig-obj`. Existing lenient conversion downgrades remain recorded
in the command. No new warning downgrades or assembly instruction removals
were introduced. `-save-temps=obj` retains preprocessed C and generated
assembly for diagnosing code generation and relocation problems.

| Gate | Result |
| --- | --- |
| Initial object attempt with SSE4.1 | Nine SSE4.2 intrinsic errors |
| SSE4.2 enabled | 114 assembler errors |
| Instruction separators and operand notation repaired | Seven assembler errors |
| MASM comment notation converted | Zero errors, 5,032 warnings, four notes |
| Object format verified by `objdump -f` | `pe-bigobj-x86-64`, x64 architecture |
| Object size | 7,233,854 bytes |
| Preparation tests | 36 pass |
| Mixed diagnostic parsing tests | Four pass |
| Selected existing native comparison suites | Four pass |

Prepared source SHA256:
`e240939bc7415c12b8dd5eab12c519aeb4647380abaa1c1a983fa0997b66f7e2`.

Object SHA256:
`ebf380d54e43d60b9d863823b33fb1457ca1ce662db429f3febcd390965765fd`.

These identify this local build. Absolute paths and the compiler version can
affect regenerated intermediate files and object bytes.

## Assembly wrapper repairs

The wrapper previously joined instructions with literal backslash characters
and then escaped those characters again. The assembler received `\n\t`
inside an operand. It now joins with real newlines and tabs, then escapes
them once for the C string.

Two regular expressions contained literal backspace bytes where word
boundaries were intended. They now implement the already documented dump
conversions: `var_XX` becomes `-0xXX`, and `cs:symbol` becomes `[rip+symbol]`.
The original displacement values and symbol names are retained.

MASM `;` comments now use GAS `#` notation. The seven final errors were
character-literal comments such as `34h ; '4'` being treated as a second
instruction. No instruction was removed to make the assembler accept it.

An executable fixture checks multiple instructions, hexadecimal immediate
conversion, a comment, and a RIP-relative global store. A separate fixture
object checks a stack displacement. All 190 original non-CPUID/XGETBV blocks
also pass an isolated object syntax check, without executing those blocks.

## Diagnostics and provenance

GCC emits SARIF while GNU assembler emits plain text. Saving intermediate
files also causes the preprocessing and compilation stages to emit separate
SARIF documents. The checking tool now merges their runs and records
assembler diagnostics separately, preserving drive-letter paths and counts.
Unrecognized trailing tool output remains an error in the report.

The final report directory contains the complete `.stderr.log`, valid merged
`.sarif`, `.assembler.log`, structured `.json`, generated `.i` and `.s`, and
the `.obj`. The source and local compatibility headers are hashed before
compilation and checked for changes afterward. The preparation audit matches
the final object report's source hash. Intermediate reports are retained;
the seven-error report was reparsed from its saved stderr after the
multi-stage diagnostic parser was corrected.

## Remaining recovery work

`nm --undefined-only` reports **508 undefined object symbols**, captured in
`client-prepared.undefined.txt` and `.undefined.json` beside the final object.
These are object dependencies, not 508 established linker failures. Many
are ordinary Win32, CRT, and project library dependencies. Of these symbols,
112 have `xmmword_`, `qword_`, or `dword_` address names and require checked
storage and aliases. No dummy definitions were supplied.

The 190 basic assembly blocks occur in 15 functions. The largest groups are
54 blocks in `0x140242320`, 47 in `0x140240C80`, and 20 in `0x1402437E0`.
The source-hashed inventory is in `reports/client-assembly-20260930/`.

Basic assembly still assumes original machine registers and stack locations.
GCC can allocate pseudocode variables elsewhere and does not receive complete
operand/clobber constraints from these wrappers. Some blocks modify registers
that the Windows ABI requires a function to preserve. Restoring instruction
syntax does not solve those issues. Recover their actual data flow and frame
layout before relying on them in a linked client.

Enabling SSE4.2 globally allows the exported string intrinsics to compile.
It is not evidence that the original CPU dispatch and fallback paths are
preserved. Scope ISA requirements to recovered functions and verify dispatch
before treating a replacement as equivalent on supported machines.

The warnings include five additional code-generation warnings that a
`noreturn` function returns. Inferred pointer types, unresolved helper calls,
global aliases, initialization, and ABI recovery remain open. The 29
Tree-sitter findings also remain in the audit. Existing native comparison
tests cover selected recovered functions; they do not execute this monolithic
client object or prove full-game equivalence.
