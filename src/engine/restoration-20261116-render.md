# Rendering: textures

Two rendering routines are engine C now, progress 359 of 1,119 game routines.

| Original address | Engine routine | Behavior |
|---|---|---|
| 0x14014D3E0 | texture_upload | Binds a texture record's object, sets its four sampler words, uploads every mipmap level from its pointer (size shifted right by the level) and frees the levels when asked. |
| 0x14006CA30 | atlas_create | Makes the first atlas texture: frees the old buffer, allocates width * height * 4 bytes of 0xFF, creates and filters the texture, uploads it. |

`texture_make_solid` (0x140138590) called 0x14014D3E0 through a stub while
the upload was still recompiled; it now calls the engine routine, and its
suite drives the real upload.

The sampler words of a texture record are named now: +0xC is the pixel
format and +0x10 the internal format, +0x14 and +0x18 the wrap modes,
+0x1C and +0x20 the magnification and minification filters, +0x2C the GL
object and +0x30 one pixel pointer per level.

## The camera's model (0x14007B990, 0x14007B6F0)

`camera_set_model` disagreed with the original and the `effectsdraw` suite
had been failing on master because of it. The original starts the model as
the identity (its four "constant rows" are the identity's first rows padded
into whole matrices), puts the position in row 3, and then takes the rotation
as the first three rows untransposed, with a zero fourth word per row and
[0, 0, 0, 1] as the last row, multiplied into the model from the left. The
port had transposed it. The `cameramodel` suite (3,000 cases, both builds)
now matches bit for bit, `effectsdraw` passes again, and the mutation set
covers the transpose, the fourth words, the last row, the position words,
the null arguments, the recomputed product and the scale order.

## Drawing a mesh (0x140125270)

`model_draw_at` in `model_draw.c`. The routine is the camera's model set and
scale, the matrix uniform (the camera's model * view * projection), the vertex
buffer from the table, the attribute setup, the draw, and a tail that puts the
model back to the identity and retakes the products. The `modeldraw` suite
(2,000 cases, the engine port, the client wrappers and the original) matches
call for call, with positions, orientations and sizes including NaN and
infinities, and 12 mutations detected.

What the decompiler hid, and the disassembly showed:

- The "model table at 0x1406E000" is a folded base. The real one is one word
  per model at 0x183E977C4: the index of the model's entry in the buffer table.
- The vertex buffer table is at 0x183E9B0C0, **8 bytes per entry** with the GL
  buffer number in the first word. Reading it 4 bytes apart was most of the
  earlier mismatch.
- The mesh records are 0xE30 bytes each at 0x16AD0BE04, indexed by the model
  number, with the vertex stride in floats at +0 and the triangle count at
  +0xC.
- The model matrix the draw uses comes from the camera, and the tail's
  "constant rows" are the identity's first rows padded into matrices: the tail
  is `camera_reset_model`, now its own function in camera.c.
- The tenth argument is not used; the size is the fifth (`rsp+0x60` in the
  frame), which my first harness call got wrong by passing only four values.

One harness note: the camera words are hashed with every NaN normalised, since
the processor may pass either operand's NaN through and one case in 2,000 did.
