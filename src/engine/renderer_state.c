/* Fixed-function GL state setups. See renderer_state.h. */
#include "renderer_state.h"

#include "gl.h"

/* 0x1400A6DF0. The last call is a tail call in the original; the routine's
   own return value is whatever the GL stub leaves in eax, so the port
   returns void. */
void renderer_stencil_notequal_state(void)
{
    glEnable(GL_TEXTURE_2D);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_FALSE);
    glDepthMask(GL_FALSE);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glEnable(GL_CULL_FACE);
    glFrontFace(GL_CW);
    glEnable(GL_STENCIL_TEST);
    glStencilMask(0xFFFFFFFFu);
    glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
    glStencilFunc(GL_NOTEQUAL, 0, 0xFFFFFFFFu);
}

/* 0x1400A6E90. */
void renderer_stencil_equal_state(void)
{
    glEnable(GL_TEXTURE_2D);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_FALSE);
    glDepthMask(GL_FALSE);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glEnable(GL_CULL_FACE);
    glFrontFace(GL_CW);
    glEnable(GL_STENCIL_TEST);
    glStencilMask(0xFFFFFFFFu);
    glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
    glStencilFunc(GL_EQUAL, 0, 0xFFFFFFFFu);
}

/* 0x1400A6F30. */
void renderer_opaque_state(void)
{
    glEnable(GL_TEXTURE_2D);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_FALSE);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glEnable(GL_CULL_FACE);
    glFrontFace(GL_CW);
    glDisable(GL_STENCIL_TEST);
}

/* 0x1400A6FB0. The reversed-depth word is read as a plain dword. */
void renderer_shadow_volume_state(void)
{
    glDisable(GL_TEXTURE_2D);
    glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);
    glDepthMask(GL_FALSE);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(SR_GLOBAL(uint32_t, 0x151E46194ULL) ? GL_LEQUAL : GL_GEQUAL);
    glDisable(GL_CULL_FACE);
    glFrontFace(GL_CW);
    glEnable(GL_STENCIL_TEST);
    glStencilFuncSeparate(GL_BACK, GL_ALWAYS, 0, 0xFFFFFFFFu);
    glStencilMaskSeparate(GL_BACK, 0xFFFFFFFFu);
    glStencilOpSeparate(GL_BACK, GL_KEEP, GL_KEEP, GL_DECR_WRAP);
    glStencilFuncSeparate(GL_FRONT, GL_ALWAYS, 0, 0xFFFFFFFFu);
    glStencilMaskSeparate(GL_FRONT, 0xFFFFFFFFu);
    glStencilOpSeparate(GL_FRONT, GL_KEEP, GL_KEEP, GL_INCR_WRAP);
}
