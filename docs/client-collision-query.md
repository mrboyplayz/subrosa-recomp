# Client collision query recovery — 2026-10-04

After the rotation repair, the Practice trace stopped at an invalid exported
cookie check in `sub_14003C760`, called by `sub_14003DE80` and the character
collision consumer `sub_14010D0D0`.

`scripts/repair_client_collision_query.py` restores nine result sites. The
block query's seven early rejections return zero; its final result compares the
selected distance with 65536. The combined query returns the native comparison
against its selected global distance. The native result and comparison flags
are recovered independently of the cookie checker.

The repair also restores ten contiguous objects totaling 160 bytes: query
position/normal vectors, cell coordinate triplets, query bounds and a 32-byte
result, plus the character caller's point, contact offset and 32-byte result.
The character caller's distance comes from word seven of that result. The export
had instead indexed word 12,432 of an unrelated inferred stack array.

Two displaced-cell material values now retain all 32 bits through their helper
calls. The export truncated them to 16 bits, losing the upper material flags.

## Native comparisons

| Fixture | Cases | Compared behavior |
| --- | --- | --- |
| Complete block query | 11,520 | Bounds rejection, empty grids, both material layers, return result, vectors, selected state and cell/material arguments |
| Complete combined query | 4,096 | Bounds, list initialization, active map combinations, nearest result, output globals and input guards |
| Complete character consumer | 1,024 | Both sample points, contact offsets/normals/depth/coefficients, result buffer and final clear |

All 16,640 comparisons pass. Geometry and identifier helpers are controlled in
the block query fixture. Broadphase and query helpers are controlled in the
combined fixture. The character fixture uses empty grid candidates and
controlled queries/contact creation. These finite-input checks do not verify
complete world collision, populated broadphase lists, all exceptional inputs
or gameplay parity.

Evidence: `reports/client-collision-query-native-20261004/` and
`reports/client-collision-query-20261004/`.
