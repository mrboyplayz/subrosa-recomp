# Windows client load and address repairs

Reference: the installed client with SHA256
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
The original export and executable are unchanged. The preparation pipeline
checks the reference hash before applying these repairs to its build copy.

## Memory MOVSS loads

Seven integer-to-`__m128` casts correspond to memory `movss` instructions.
These instructions copy the low 32 bits and zero the upper 96 bits. They do
not convert an integer to a floating point number. The generated expression
uses `_mm_castsi128_ps(_mm_cvtsi32_si128((int)(operand)))` to preserve that
behavior. Each replacement requires exactly one matching expression in its
reviewed function range.

| Function | Instruction | Memory operand |
| --- | --- | --- |
| `0x14002edf0` | `0x14002ee0b` | `[rdx+8]` |
| `0x14010e370` | `0x14010e370` | `[rdx]` |
| `0x14010e370` | `0x14010e377` | `[rdx+0x10]` |
| `0x14010e370` | `0x14010e37f` | `[rdx+0x20]` |
| `0x14011c6b0` | `0x14011c6b4` | `[rcx+4]` |
| `0x140178e30` | `0x140178e94` | `[rcx+r9*4+8]` |
| `0x140178e30` | `0x140178ed5` | `[r10+r9*4+0xc]` |

The compiled fixture checks all four lanes for zero, subnormal bits, sign
bits, infinities, and quiet/signaling NaN patterns. It also checks that the
expression leaves MXCSR unchanged. The seven repairs reduced the lenient
compiler count from 198 to 191.

## Byte-comparison address expressions

Five exported expressions incorrectly add two pointers before subtracting
a base pointer. The original loops calculate `other - base` in `r8`, then
read a byte at `cursor + r8`. The repair groups the pointer difference first:

```c
*((unsigned char *)cursor + ((char *)other - (char *)base))
```

All three pointers refer to the same exported global storage array. Its
final recovery and aliasing still require review. No pointer is narrowed to
a 32-bit integer. The cursor increment and byte comparison are unchanged.

| Function | Subtraction | Indexed byte load |
| --- | --- | --- |
| `0x140027a60` | `0x140027ad6` | `0x140027ae3` |
| `0x140027b40` | `0x140027bb6` | `0x140027bc3` |
| `0x140027c20` | `0x140027c96` | `0x140027ca3` |
| `0x140028bd0`, first loop | `0x140028c46` | `0x140028c53` |
| `0x140028bd0`, third loop | `0x140028d86` | `0x140028d93` |

The middle loop in `0x140028bd0` already uses `strcmp` in the export.
The pass requires one expression per reviewed load and fails on repeated
application. A compiled fixture checks the resulting addresses and bytes
across positive, zero, and negative displacements.

After these five address repairs the lenient compiler count is 186 errors
and 5,032 warnings. All 30 preparation tests pass. The provenance audit
confirms that the compiler report describes the regenerated source; its
29 parser errors and four skipped overlapping edits remain open.

These focused tests verify the replacement expressions. They do not establish
complete function or game equivalence; full original-code comparisons remain
part of behavior recovery.
