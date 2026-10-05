# Resampling wrapper recovery

The integrated PCM-buffer build progresses to `sub_1401ED000`, where its
old export fabricates a cookie return and points two allocated buffers at
a scalar loop counter. The original returns a float in XMM0. Its 48kHz
path returns the saved filter result; the 16kHz path invokes the filter
without changing that saved result. Preserve this difference.

`scripts/repair_client_audio_resample.py` restores both scratch pointers,
the callback destination, float scaling, signed 32-bit tripled allocation
extent and the XMM0 result. It also captures both results in the
`sub_1401ED2D0` analysis caller: the native first site accumulates XMM0 in
its energy field, and the second stores XMM0. The export used uninitialized
register locals at both sites. Relevant machine instructions are pinned.

The resampling wrapper passes 320 native comparisons covering four rates,
five sample counts, four channel counts and four channel modes. Tests
compare callback arguments, converted filter inputs, scratch extents,
rate dispatch, output guards, filter-state updates and float-result bits.
The filter leaf is controlled. Complete filter and analysis-caller behavior
remain separate recovery work; the two caller result assignments are
supported by their native instructions and updated Ghidra decompilation.

Evidence: `reports/client-audio-resample-fixture-20261003/`,
`reports/ghidra-cli-audio-analysis-decompile-20261003.json` and
`reports/ghidra-cli-audio-resample-caller-20261003.json`.

The integrated build links without unresolved symbols or duplicate
definitions. Launch passes the resampling wrapper and crashes in the
analysis caller's FFT preparation loop. Evidence:
`reports/client-link-audio-resample-20261003/launch-status.json`.
