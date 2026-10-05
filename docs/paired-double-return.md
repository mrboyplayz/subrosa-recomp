# Paired-Double Return at `0x1401f8a50`

The pinned client helper returns a two-lane binary64 value in `xmm0`.
Its small-input path finishes with `unpcklpd xmm0, xmm1; ret`; its other
path also packs the lanes in `xmm0` before jumping to shared math code.
Callers at `0x1400054f0`, `0x14004eb60`, and `0x140052240` invoke it and
then copy `xmm0` with `movaps`. They subsequently use `shufpd` and other
double-lane operations. The register bits are copied without conversion.

Hex-Rays typed 69 recipient locals as `__m128` while typing the helper's
return as `__m128d`. GCC rejects those assignments. The preparation pass
now wraps precisely those assignments in `_mm_castpd_ps`, which is a
bit-preserving register cast. It checks each recipient declaration and
requires the pinned count of 69; other call expressions are left alone.
A focused compiled test verifies the cast retains the low binary64 bits.
The lenient compiler error count fell from 267 to 198 after this repair.

The helper's Hex-Rays body still warns of failed local-variable allocation.
This work verifies the return-register representation at the inspected
callers; it does not establish the helper's full numerical equivalence.
