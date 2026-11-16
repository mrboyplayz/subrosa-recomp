/* Fixed-function GL state setups the render passes apply.
 *
 * Each function is a rewrite of one routine of the original executable and
 * issues the same OpenGL calls in the same order (checked against the
 * original executable with tools/native-compare). The original address is
 * given next to every declaration.
 */
#ifndef SR_ENGINE_RENDERER_STATE_H
#define SR_ENGINE_RENDERER_STATE_H

/* 0x1400A6DF0. Texturing, depth test with LEQUAL, culling and stencil test
   on; colour written with alpha masked off, depth writes off; stencil always
   keeps and only draws where stencil != 0 (func GL_NOTEQUAL, ref 0). */
void renderer_stencil_notequal_state(void);

/* 0x1400A6E90. The same pass state, but draws only where stencil == 0
   (func GL_EQUAL, ref 0). */
void renderer_stencil_equal_state(void);

/* 0x1400A6F30. Opaque-draw state: texturing and depth test on, blend and
   stencil test off, colour written with alpha masked off, depth writes on. */
void renderer_opaque_state(void);

/* 0x1400A6FB0. Shadow-volume state: texturing, culling and colour writes
   off, depth test on (LEQUAL when the reversed-depth word at 0x151E46194 is
   set, GEQUAL otherwise), depth writes off; stencil counts crossings with
   front faces incrementing and back faces decrementing (wrap), always
   passing. */
void renderer_shadow_volume_state(void);

#endif
