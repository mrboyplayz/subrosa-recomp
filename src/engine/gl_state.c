/* The level pass's culling/depth state change. See gl_state.h and gl.h. */
#include "gl.h"
#include "gl_state.h"

void gl_state_disable_then_enable_cull_depth(void)
{
    /* The original disables culling and depth testing, then enables both,
       in this order. The second pair is not redundant with the first: it is
       what leaves the pass with culling and depth testing on. */
    glDisable(GL_CULL_FACE);
    glDisable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glEnable(GL_DEPTH_TEST);
}
