# Windows client expression and ABI repairs

Reference SHA256:
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
The preparation pipeline checks the reference before applying scoped repairs
from `scripts/repair_client_expressions.py`. Every recipe requires its
reviewed function marker and expected expression count. The installed client
and original export remain unchanged.

The resulting lenient C syntax check passes with zero errors and 5,027
warnings. All 35 preparation tests pass. Four selected CTest checks also
pass: local client leaves and original-code camera, rigid-body, and client
leaf/funclet comparisons. No integrated client object or executable is
produced by the syntax check.

## Scalar and vector values

Seventeen remaining word loads/constructions use MOVSS or MOVD semantics:
copy the low 32 bits and clear the upper 96 bits. Twenty-six scalar float
casts now construct a vector with `_mm_set_ss`; integer-vector destinations
use a bit cast of that vector. The original integer conversions use MOVD
followed by CVTDQ2PS. The compiled fixture compares all four lanes and MXCSR
for signed boundary values under all four rounding modes.

Three MOVQ constructions now copy the low 64 bits and clear the upper 64.
Five vector/storage conversions preserve all 128 bits. Five additional lane
reads correspond to memory MOVSS loads, including lanes of stack vectors.
The original stack-pop load at `0x1401833a7` is MOVUPS of sixteen bytes;
its mistakenly generated eight-byte construction was restored to a complete
vector read. Three double scalar constructions now use `_mm_set_sd` before
CVTTPD2DQ. Complete math-function equivalence remains open.

## Address calculations

Eleven additional byte-comparison/copy expressions group a register-sized
displacement before adding it to a pointer. Forty-one address sums now use
`uintptr_t` operands, preserving the original 64-bit ADD/SUB calculations.
This includes differences between stack and global addresses; subtracting
unrelated C pointers would otherwise introduce undefined behavior. Ten
mixed byte-pointer differences and five opaque/structure differences retain
byte units and signed results, with existing shifts left in place.

Representative instruction evidence:

- `0x1400360f7..0x140036139`: stack/global address differences, followed by
  indexed stores in `0x140035e50`.
- `0x1401035d9..0x1401035f9`: successive register subtractions for copy
  offsets in `0x140103270`.
- `0x140248bbf/0x140248bc5`, `0x140248be6/0x140248bec`, and
  `0x14024937d/0x140249384`: subtraction plus indexed word reads.
- `0x140247a19/0x140247a25`: byte difference followed by a shift of three.
- `0x140249550/0x140249553` and `0x1402669ef/0x1402669f5`: byte
  difference followed by arithmetic shift of one.
- `0x14023223e/0x140232241`: byte differences without structure scaling.
- `0x14026af94`: raw address subtraction used by a word-comparison loop.

The compiled fixture compares address sums with native ADD/SUB over 4,096
inputs, including unsigned wraparound. The global storage layout and several
underlying index expressions remain inferred; correcting address arithmetic
does not establish those layouts or indices.

## Calls and declarations

Fourteen earlier type conflicts were caused by implicit-int calls before a
definition. The generated forward headers now copy each definition's actual
header, including function-pointer return types. The underlying recovered
signatures still need ABI review.

Fourteen calls to `0x140253fc0` omitted a locale pointer already present in
R9. The pass restores that caller's existing locale variable. Two Winsock
import-slot calls now use the thunk's actual function-pointer signature.
Other restored arguments are supported by these instructions:

| Call site | Restored input |
| --- | --- |
| `0x14019ddbc..0x14019ddcf` | R9D from `[rbp+0x48]`, recovered as `v69` |
| `0x1401d1c49..0x1401d1c6e` | Sixth argument from `[rsp+0x70]` into `[rsp+0x28]`, recovered as `v21` |
| `0x1401f90c9` | CL still contains the caller's first parameter |
| `0x140236f19` | RDX/R8 retain the mask and locale inputs |
| `0x14023df9e..0x14023dfaa`, `0x14023e0f0..0x14023e0fc` | R9D explicitly zeroed before setvbuf |
| `0x140260a1c` | RCX retains the allocation pointer passed to msize |

Eight Windows x64 varargs copies now write the actual eight-byte cursor
slot instead of attempting to assign a cast temporary. Independent cursor
consumption is tested with integer and double arguments.

## Flags, store widths, and expression boundaries

Three 32-bit subtraction-overflow expressions and five 64-bit shift-carry
expressions use unsigned arithmetic and hardware count masking. The later
left-shift carry site uses the same width. Fixtures compare overflow and
left/right carry with native SETO/SETC across 4,096 inputs and counts 0..127.
The variable right-shift sites clear carry before shifting, so a masked zero
count retains zero. No generic flag macro is replaced with a constant.

The exp parity test follows CMPLESD, CMPNLTSD, AND, and UCOMISD of the mask
with itself. Its low mask is either zero or an all-ones quiet NaN. The sign
bit therefore gives the original parity condition. The exact bounds at
`0x140289970` and `0x140289978` are preserved as hexadecimal double literals.
The test compares the condition and MXCSR with the native instruction
sequence at both bounds, adjacent values, zeros, infinities, and NaN patterns.

The failure path in `0x140235928` restores seven writes relative to the
input pointer, with the original QWORD/WORD/BYTE/DWORD widths at
`0x14023594a..0x140235965`. Two formerly skipped nested vector-result reads
are repaired as complete expressions rather than overlapping edits.

The unwind entry for `0x14025bc64` ends at `0x14025bed0`. Its terminal path
calls `0x140245600`, executes NOP, then INT3 at `0x14025becf`. There is no
CALL to the adjacent signal function. The export's invented `return signal()`
is replaced by an unreachable marker after the retained debug break.

## Recovered funclet entries

Entries `0x14020ae90` and `0x14020aee0` invoke a callback with its address
in RCX, the frame word in RDX, the notification code in R8D, and
`0x19930520` in R9. Notification helpers `0x1401fda90` and `0x1401fdac0`
preserve RAX. Both entries return the callback's RAX result. The longer
entry also reloads the frame after the callback; the clean recovery retains
that memory read.

`src/recovered/client_leaf.c` contains the recovery. The isolated fixture
copies both original entries and both original notification helpers from the
pinned executable, retaining their relative calls. It compares 8,192 cases
against the clean implementation, checking all four callback arguments and
the complete returned word. Those comparisons pass. Original debugger
notification addresses and complete exception-unwinding scenarios remain
outside this focused fixture.

These repairs remove syntax obstacles and recover specific machine effects.
They do not establish complete game behavior, validate the thousands of
remaining warnings, or make the wrapped assembly ready for an object build.
