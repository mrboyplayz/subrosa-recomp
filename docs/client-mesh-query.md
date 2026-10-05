# Transformed mesh query recovery — 2026-10-04

The next Practice trace passed the repaired rotation and collision queries,
then faulted while `sub_1400E21F0` read its model's face count. Its transformed
vertex writes were directed into separately allocated decompiler locals and
could corrupt the saved mesh offset.

`scripts/repair_client_mesh_query.py` restores one 3,072-byte vertex workspace,
five adjacent triangle/normal/hit vectors, and two endpoint triplets in the
calling dispatcher. The replacement objects allocate 3,176 bytes in total.
The decompiler's pointer deltas now address the same contiguous vertex words.

The six early rejected-ray returns now produce zero. The completed query
returns the original comparison of its selected fraction with one. The repair
also retains native float division during normal normalization.

`scripts/test_client_mesh_query.py` executes the original complete query with
a controlled triangle intersection helper. All 6,144 cases pass: counts from
zero to 256 vertices, four affine transform patterns, triangle and quad input
vertices/normals, query inputs and guards, selected output globals, return bits,
and four MXCSR modes. The highest vertex indices and unrolled/scalar tails are
included.

This fixture verifies the query's transformed geometry and state handling at
the intersection boundary. It does not prove the intersection helper, all
exceptional inputs, the full calling dispatcher or complete character collision.

Evidence: `reports/client-mesh-query-native-20261004/disassembly.txt` and
`reports/client-mesh-query-20261004/stdout.txt`.
