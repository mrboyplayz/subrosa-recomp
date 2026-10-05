# Paired shape contacts

Practice's first game tick reached the paired shape handler at RVA 0x4A7A0.
The exported C body returned the security-check helper's result, using
uninitialized decompiler cookie storage, instead of the native collision
Boolean. Native EAX is R13D on the early path and the saved Boolean at
RSP+0x74 on the full path. Both returns are restored from pinned instructions.

The handler's split C locals also violated nine native object layouts:
two body offsets, a shape center, an edge normal, two closest edge points,
the 28-byte triangle contact result, and the 6,144/8,192-byte transformed
vertex buffers. The triangle/quad helper at RVA 0xDAD20 has one more split
three-component intersection point. `repair_client_shape_contacts.py`
restores all ten objects during normal source preparation.

The original triangle contact is seven floats: position at +0, normal at
+12 and distance at +24. Allocating only position and normal would let the
helper write past the object. ItemType stride 5,072 in Sandium agrees with
the native caller's 1,268-dword stride, but its opaque fields do not establish
these collision layouts; the layouts above come from native loads/stores.

`test_client_shape_contacts.py` passes 3,840 comparisons of the complete
paired handler, with narrowphase and contact creation controlled. Cases
cover both point/edge paths, contact vectors and coefficients, collision
returns and up to 512/682 transformed points. A further 8,192 cases compare
the complete triangle/quad handler together with the original segment-plane
and triangle helpers. They include 477 actual hits, nearest selection, full
28-byte output and output guards. Evidence:
`reports/client-shape-contacts-20261004`.

Integration and playable input remain separate checks from these fixtures.
