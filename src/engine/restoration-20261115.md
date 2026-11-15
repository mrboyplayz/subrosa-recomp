# Packet stream fields

`net_stream_optional_index` restores 0x14006C510. Reading maps the
width's all-ones sentinel to UINT32_MAX; writing delegates directly to the
existing stream transfer and preserves its full 64-bit return value.
Shifts explicitly mask their counts to match x86 without C shift UB.

`net_stream_signed_field` restores 0x14006C570. It extends the sign bit
on reads, preserving the original's unusual return: zero when the sign
bit is clear, otherwise the extended output word zero-extended to 64 bits.
The write path preserves the full transfer return. Both implementations
were checked against disassembly of the installed executable.

The existing client entry point and its char-width interface are retained.
No current direct callers were found in the client C modules; the original
entry point remains available, consistent with other restored helpers.

`t_streamfields.c` redirects 0x14006C360 to the same recording stub in
both builds. It compares the stream, width, read/write flag, caller-pointer
identity, write input, returned bits, output and adjacent guard words.
All 256 char-width patterns, zero and nonzero write flags, sentinel hits
and misses, and randomized transfer results are covered. Read fixtures
always initialize the transferred word; behavior when the underlying
reader leaves it uninitialized is outside this comparison's domain.
This verifies the helper and its delegation, not the unported transfer.

Validation command (set SUBROSA_GAME_DIR to the installed game directory):

```
python tools/native-compare/run.py streamfields --cases 16384 --client-wrappers
python tools/native-compare/mutate.py streamfields net_stream_fields.c tools/native-compare/streamfields.mutations --cases 4096
python tools/native-compare/mutate.py streamfields net_stream_fields.c tools/native-compare/streamsigned.mutations --cases 4096
```

The combined wrapper comparison matched 65,537 output lines at 16,384
cases per helper (output digest `76ffd03470d7ecb2`). The complete client
compiled and linked with the two replacements. Packaging could not fetch
SDL release-2.0.12 because the build environment could not connect to
GitHub; an interactive game launch was not validated.

All eight deliberate mutations were detected: four optional-index
mutations checked before adding the signed helper, then four signed-field
mutations checked against the combined implementation. Both mutation files
retain unique replacement targets in the final source.

The module ownership checker still reports the pre-existing unapplied
local-name entry `140115BD0 v3 encoded_bit_count`. Function uniqueness,
explicit ownership and the CMake source list pass its earlier checks.
