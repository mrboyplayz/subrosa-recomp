# Human orientation averaging recovery — 2026-10-04

Practice's next fault was the final quaternion store in `sub_1400ABB10`.
The generated C required 16-byte alignment; the native instruction is MOVUPS
and the destination field is not guaranteed to be aligned.

`scripts/repair_client_human_orientation.py` uses an unaligned SIMD store,
preserves the two float words in each qword during paired double-precision
normalization, restores the native UCOMISD/JE zero-or-unordered branch, and
retains float reciprocals in four preceding weighted averages.

The complete original averaging function and both matrix/quaternion conversion
leaves execute in `scripts/test_client_human_orientation.py`. All 4,608 cases
pass, comparing the entire 28,664-byte human state block and MXCSR. Cases cover
eight human slots, six current and previous rotations, opposite quaternion
signs, zero/positive weights and four rounding modes.

These checks use finite valid rotation matrices and controlled input state.
They do not establish all exceptional-input behavior, upstream body state,
long-session stability or complete character/gameplay parity. The native
function's incidental return register is not consumed by the fixture.

Evidence: `reports/client-human-orientation-native-20261004/disassembly.txt` and
`reports/client-human-orientation-20261004/stdout.txt`.
