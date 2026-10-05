# Spatial audio update recovery

The launch after scene raycast recovery stopped at the compiler cookie
check called by `sub_14014FCF0`. The function's old export used an
uninitialized cookie local and fabricated a return value. Pinned vanilla
assembly and Ghidra CLI decompilation identify a void updater.

`scripts/repair_client_spatial_audio.py` recovers its void signature and
exit, contiguous vector temporary, listener Y bit-copy, unaligned list
compaction and two single-precision constants. Native MOVSS copies the
listener Y bits; the old C converted them to unsigned integer. Native
MOVUPS allows the five-DWORD list's varying alignment. Float literal
suffixes preserve the original MULSS rounding in its time-scaled gain.
The repair checks the binary hash, relevant opcodes and constant bytes.

The native wrapper and recovered C pass 2,304 comparisons covering four
states, 16 voice masks, three listener positions, near/far positions,
occlusion outcomes and three list lengths. Tests compare leaf call traces,
listener preservation and all committed output pages, including guard
bytes. They exercise voice resets and actor vector dispatch; audio decoder,
allocation and raycast leaves are controlled. PCM decoding and complete
gameplay behavior remain outside this fixture's verified scope.

Evidence: `reports/client-spatial-audio-fixture-20261003/`,
`reports/ghidra-cli-vanilla-20261003/blocker-disassembly.txt` and `blocker.c`.
The signature is recorded in `sheets/abi.tsv`, applied through the CLI and
read back in `reports/ghidra-cli-spatial-abi-readback-20261003.json`.

The integrated build links with zero unresolved symbols and zero duplicate
definitions. All 148 tests pass. Launch progresses through this updater
and stops at a separate PCM scratch-buffer write in `sub_1401E0CC0`,
before the third SDL swap. The client remains unusable at this point.
See `reports/client-link-spatial-audio-20261003/launch-status.json`.
