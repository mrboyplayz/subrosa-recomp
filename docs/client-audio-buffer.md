# PCM conversion scratch recovery

After spatial audio recovery the integrated client crashes in
`sub_1401E0CC0` while writing PCM samples. Its export calls alloca but points
the destination at its scalar loop counter. The original subtracts the
allocation from RSP and uses the resulting scratch region.

`scripts/repair_client_audio_buffer.py` restores the scratch pointer,
signed 32-bit channel-times-frame product, float PCM scaling and actual
EAX result. The native wrapper returns -1 for a nonpositive frame count;
otherwise it forwards the downstream encoder result. The export instead
returned an uninitialized compiler-cookie expression. The repair pins the
vanilla hash, allocation/result instructions and scaling constant.

The recovered wrapper passes 297 native comparisons in
`scripts/test_client_audio_buffer.py`, covering nonpositive/positive frame
counts, zero/one/two/four/eight channels, three sample distributions and
failure/zero/positive downstream results. Every signed PCM16 value is
converted and compared bit for bit. The fixture also checks all dispatch
arguments, callback identity, output guards and the converted samples.
The encoder leaf is controlled; codec behavior is a separate recovery task.

Evidence is under `reports/client-audio-buffer-fixture-20261003/` and the
Ghidra CLI decompile/disassembly/ABI reports for audio-buffer recovery.

The integrated build links without unresolved symbols or duplicate
definitions and passes all 149 tests. Launch passes this PCM conversion
wrapper and stops at the separate resampling wrapper `sub_1401ED000`.
Evidence: `reports/client-link-audio-buffer-20261003/launch-status.json`.
