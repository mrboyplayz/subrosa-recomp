# Client Data-Pointer Leaf Functions

The client export has initialized pointers to executable entries absent from
its 4,269-function manifest. A fresh IDA analysis of the pinned executable
classified five such targets. The detailed local inspection is in ignored
`reports/code-inventory/pointer-targets/`; tracked source contains clean
reconstructions rather than Hex-Rays text.

| Address | Original instructions' effect | Recovery state |
| --- | --- | --- |
| `0x140198500` | Load the object's vtable and jump through slot 1 | `sr_client_virtual_abort`; compared with original dispatch |
| `0x140205c34` | Return the unsigned 32-bit word at object offset 16 | `sr_client_u32_at_16`; 4,096 original-code comparisons |
| `0x140247248` | Store `&off_140302420` at `0x144cbf778`, return true | `sr_client_initialize_global_variables`; compared with original bytes and return value |
| `0x140247cfc` | Return zero | `sr_client_zero_callback`; original-code comparisons |
| `0x1400012a0` | Forward to `fread(destination, 1, count, stream)` | `sr_client_fread_bytes`; local file behavior test, original-code bridge pending |

The clean source is in `src/recovered/client_leaf.c`. The original-code
fixture reads only a hash-pinned executable and copies the reviewed leaf
bytes into isolated memory. Four functions passed direct comparison; the
`fread` bridge passed a local file behavior test and still needs an original
code comparison. The preparation pipeline now includes checked-in adapters
for all five entries and links the clean source when the client build target
is enabled. Their broader game call paths still need end-to-end checks.

The same clean-source library now contains the two funclet invocation
entries at `0x14020ae90` and `0x14020aee0`. Their isolated original-code
fixture passes 8,192 comparisons of callback arguments and returned words.
See the [expression and ABI evidence](client-expression-repairs.md).
