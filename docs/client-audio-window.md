# FFT analysis scratch recovery

After resampling recovery the integrated client crashes in
`sub_1401ED2D0` while preparing its 480-point FFT window. The exported
analysis routine allocates two 3,840-byte buffers and two 960-byte buffers,
then points the associated variables at single-byte locals. The repair
binds those pointers to their actual allocated regions and restores both
native void exits. Allocation instructions and the cookie epilogue are
checked against the pinned vanilla binary.

`scripts/test_client_audio_window.py` compares the recovered allocation and
window-packing kernel with the original instruction region
`0x1401ED786..0x1401ED8AE`. It passes 512 cases across 128 PCM patterns and
four output alignments, checking the entire 3,840-byte output and guards.
The original coefficient table is loaded from the pinned EXE. This verifies
window packing and the first buffer's extent, not the complete FFT,
spectral analysis or later buffers' consumers. Those remain partial.

Repair: `scripts/repair_client_audio_window.py`.
Evidence: `reports/client-audio-window-fixture-20261003/` and the Ghidra CLI
analysis-caller and audio-window ABI reports. Integrated launch results
are recorded separately after rebuilding.

The integrated build links cleanly and all 151 tests pass. Launch passes
window preparation and then stops in a filter output write, traced to
the main codec's corrupted scratch destination. Evidence:
`reports/client-link-audio-window-20261003/launch-status.json` and
`live-debug.txt`.
