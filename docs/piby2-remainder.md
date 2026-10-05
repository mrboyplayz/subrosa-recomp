# Pi/2 Remainder Helper: Binary Evidence

The pinned Windows client has a 306-byte routine at
`0x14025c700..0x14025c832` named `__remainder_piby2_cw_forAsm` by IDA.
It has a PE unwind entry but no separate function in the 4,269-function
Hex-Rays export. The recovered decompiler listing warns that local variable
allocation failed and only describes its integer return; it cannot be used as
a complete implementation.

Direct disassembly of the pinned bytes shows an unusual register contract:
the routine takes the argument in `xmm0` and its magnitude bit pattern in
`r9`, and returns a count in `rax` plus a two-part floating-point remainder
in the low lanes of `xmm0` and `xmm1`. The caller-side contract still needs
confirmation. A linear disassembly of the executable section found no direct
branch or call into this routine from outside its own range. The only exact
address occurrence found in the PE file is its unwind entry. It may be
unreferenced linked runtime code; indirect reachability remains open.

## Exact constants and decisions

The `r9` comparisons use these 64-bit patterns, ordered as branch cutoffs:

| Address | Raw bits | Binary64 value | Role |
| --- | --- | --- | --- |
| `0x14028c150` | `0x4002d97c7f3321d2` | 2.356194490192345 | 3π/4 cutoff |
| `0x14028c158` | `0x400f6a7a2955385e` | 3.9269908169872414 | 5π/4 cutoff |
| `0x14028c160` | `0x4015fdbbe9bba775` | 5.497787143782138 | 7π/4 cutoff |
| `0x14028c168` | `0x401c463abeccb2bb` | 7.0685834705770345 | 9π/4 cutoff |

For magnitudes through the fourth cutoff, the routine chooses an integer
multiple of π/2 from those comparisons. Above it, SSE operations multiply
by the binary64 constant at `0x14028c0e0` (`0x3fe45f306dc9c883`,
approximately 2/π), add 0.5, truncate to an integer, and mask the returned
count to two bits. The routine then reduces the original input with split
π/2 constants. These are binary64 words read directly from the executable:

| Address | Raw bits | Approximate value |
| --- | --- | --- |
| `0x14028c080` | `0x3ff921fb54400000` | 1.5707963267341256 |
| `0x14028c090` | `0x3dd0b4611a600000` | 6.077100506303966e-11 |
| `0x14028c0a0` | `0x3ba3198a2e000000` | 2.0222662487111665e-21 |
| `0x14028c0b0` | `0x3dd0b4611a626331` | 6.077100506506192e-11 |
| `0x14028c0c0` | `0x3ba3198a2e037073` | 2.0222662487959506e-21 |
| `0x14028c0d0` | `0x397b839a252049c1` | 8.4784276603689e-32 |

The reduction has one basic stage and up to two correction stages. It
compares an exponent-derived difference against the integer thresholds 15
and 48 before entering the correction stages. The final instructions form
the two-part remainder in `xmm0`/`xmm1` and transfer the count from `xmm2`
to `rax`. Reimplementing it requires preserving SSE rounding, the exact
branch boundaries, and all three outputs. A scalar C function based on the
decompiler listing would discard the two floating-point results.

Next: determine whether an indirect path reaches this routine. If it is
reachable, identify how the caller handles signs and the `xmm0`/`xmm1` pair;
then build an isolated differential fixture against these original bytes
across boundary, large, negative, and special inputs.
