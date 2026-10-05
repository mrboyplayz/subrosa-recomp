# Recovery of `flt_1402B2CF4`

The raw Hex-Rays export declares `float flt_1402B2CF4[479]` and writes
`?flt` for 54 entries. The pinned client binary stores this table at virtual
address `0x1402B2CF4`, file offset `0x2B12F4`, for 1,916 bytes. Reading its
479 little-endian 32-bit words gives exactly 425 `0x00000000` words and 54
`0x00000001` words. The export marks precisely those 54 one-valued entries
as `?flt`; every zero-valued entry appears as `0.0`.

`scripts/prepare_rebuild.py` now checks the full client hash, the table
location, all 479 source entries, and all corresponding binary words before
replacing those 54 placeholders with `0x1p-149f`. That C binary32 literal
has bit pattern `0x00000001`, verified by the preparation test compiled with
the local GCC. The prepared source therefore carries the original table
bytes instead of invented zeros. The three other `?flt` tokens belonged to a
false `__m256d` declaration over the TLS index and an adjacent pointer; the
index is now recovered as the original four-byte `-1` value.

The array's *type and role* are not yet established. A one-bit word may be an
integer flag within mixed storage rather than a meaningful floating-point
number. This recovery establishes the initializer bytes only; subsequent
type and alias analysis must determine how code uses them.
