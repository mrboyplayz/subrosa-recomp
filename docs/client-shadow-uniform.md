# Item shadow uniform recovery — 2026-10-04

The item adjacency shadow pass (`sub_14011C950`) lost the float argument to
`glUniform1f`. The original uses the item's age plus one, its type parameter,
and eight divided by the maximum of a global value and 0.125. The exported C
passed only the uniform location.

`scripts/repair_client_shadow_uniform.py` restores that argument, signed type
indexing, the wrapping age increment and the original MAXSS, DIVSS,
CVTDQ2PS and MULSS operation order.

`scripts/test_client_shadow_uniform.py` compares the original arithmetic/call
block with the repaired C: 8,192 cases pass for location/value bits and MXCSR.
They include four rounding modes, signed type indices, wrapping age counters,
finite and NaN input words. The fixture controls the uniform callback. It does
not establish complete shadow drawing, shader behavior or driver stability.

The preceding integrated client still aborts in the NVIDIA driver. A captured
32 MiB world element buffer and completed draw arrays pass 15,170 range checks;
the largest effective vertex is 227,747 in a 64 MiB, 64-byte-stride vertex buffer.
This snapshot does not cover all buffers, later uploads or item adjacency draws.

The diagnostic DLL in `scripts/client_gl_debug.c` enables driver messages only
in explicitly requested diagnostic launches. It is not linked into the client.
Messages include undefined texture base levels and an invalid legacy texture
enable in the core profile; their connection to the abort is not established.

Evidence: `reports/client-shadow-uniform-20261004/stdout.txt`,
`reports/client-gl-index-readback-20261004/world-index-range-check.json` and
`reports/client-gl-debug-20261004/driver-messages.txt`.
