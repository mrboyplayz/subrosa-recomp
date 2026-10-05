# `.cmo` Model Format

Status: first-pass skeleton from file observation plus recovered GLSL attribute layout.

2026-10-03 update: the native loader's recovered read sequence consumes all
48 installed CMO samples exactly. They include versions 1..3 and triangle
and quad faces. The fixed 24-byte face description below applies to the
observed triangle sample; it is not a universal record stride. See
`../notes/model-and-ragdoll-investigation-20261003.md` for the new evidence
and outstanding semantic checks.

Sample: `../data/model/9mm.cmo`

## Header

All observed scalar fields are little-endian.

| Offset | Type | Sample Value | Meaning |
| ---: | --- | ---: | --- |
| `0x00` | `char[4]` | `CMod` | magic |
| `0x04` | `u32` | `3` | version |
| `0x08` | `u32` | `876` | vertex count |

## Vertex Stream

The main stream is currently reconstructed as `vertex_count` records of `24` bytes:

| Offset | Type | Meaning |
| ---: | --- | --- |
| `0x00` | `f32` | position x |
| `0x04` | `f32` | position y |
| `0x08` | `f32` | position z |
| `0x0c` | `f32` | texture coordinate x |
| `0x10` | `f32` | texture coordinate y |
| `0x14` | `f32` | texture layer or third texture coordinate |
Evidence:

- Shipped GLSL uses `layout(location=0) in vec3 invertex`.
- Shipped GLSL uses `layout(location=1) in vec3 intexcoord` in world/atlas shaders.
- Shipped GLSL uses `layout(location=2) in vec3 innormal`.
- The first float stream in `9mm.cmo` is consistent with a 24-byte vertex stride.
- The later face/index stream likely pairs with generated or separate normal data.

## Face Stream

After the vertex stream, `9mm.cmo` has:

| Offset | Type | Sample Value | Meaning |
| ---: | --- | ---: | --- |
| `0x522c` | `u32` | `440` | face count |

The following records currently appear to be 24 bytes:

| Offset | Type | Sample Value | Meaning |
| ---: | --- | ---: | --- |
| `0x00` | `u32` | `3` | vertex count for face |
| `0x04` | `u32` | `3` | index 0 |
| `0x08` | `u32` | `2` | index 1 |
| `0x0c` | `u32` | `1` | index 2 |
| `0x10` | `u32` | `0` | flags/material candidate |
| `0x14` | `u32` | `0` | flags/material candidate |

## Next Work

- Confirm face index base and flags/material fields.
- Confirm whether all `.cmo` files use version `3` and this stride.
- Find the loader function and VBO upload path through `glVertexAttribPointer`.
