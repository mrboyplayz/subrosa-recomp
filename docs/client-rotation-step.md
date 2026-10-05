# Client rotation update recovery — 2026-10-04

The Practice trace reached world/shadow rendering and then stopped in
`sub_14012B2D0` at an invalid decompiler security-cookie check. The native
function updates a 3×3 rotation matrix and a three-float output vector through
four integration stages. Its cookie check does not produce a game return value.

`scripts/repair_client_rotation_step.py` is part of clean preparation. It restores:

- The contiguous 12-byte axis and 36-byte matrix that are passed by address.
- Native void behavior in the integrator and its standalone update loop. The
  recognized loop has no callers; the two integrator callers discard the native
  register result. The repair guards that caller inventory.
- Float reciprocals, half-step products and the exact stored final constants.
- The integrator's COMISS/JBE branches and the called matrix rotation's
  UCOMISS/JE zero-or-unordered branch.
- Float normalization in the called `sub_14007B2A0` matrix rotation.

The native stored `1/36` approximation is `0x1.c71c74p-6f`. Substituting a
mathematically rounded `1/36` produced different output bits in the comparison;
the recovered code uses the pinned original value.

## Comparison and limits

`scripts/test_client_rotation_step.py` executes the original integrator and
matrix rotation instructions. It compares 12,288 cases: output matrix/vector
bits, intermediate matrices, axis/angle arguments, call order, input guards,
three output aliases and four MXCSR rounding modes. Inputs include zero,
small threshold-adjacent magnitudes and larger finite values. All cases pass.

Both implementations use a shared sine/cosine boundary in this fixture. The
fixture does not verify the original trigonometric helper, all exceptional
inputs, surrounding rigid-body state or complete Practice gameplay. Only the
native fixture replaces the original cookie checker with RET; the rebuilt C
function uses its new compiler-managed frame normally.

Evidence: `reports/client-rotation-native-20261004/disassembly.txt` and
`reports/client-rotation-step-20261004/stdout.txt`.
