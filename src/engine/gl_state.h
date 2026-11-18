/* OpenGL state of a level pass: culling and depth testing turned off and
   then on. Four calls in that order, the last one a tail call
   (0x140094690). The GL entry points are the client's import slots; gl.h
   already exposes them as glEnable/glDisable. */
#ifndef SR_ENGINE_GL_STATE_H
#define SR_ENGINE_GL_STATE_H

/* 0x140094690 */
void gl_state_disable_then_enable_cull_depth(void);

#endif
