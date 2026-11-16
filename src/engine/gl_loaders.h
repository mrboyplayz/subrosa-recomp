#ifndef SR_ENGINE_GL_LOADERS_H
#define SR_ENGINE_GL_LOADERS_H

/* The OpenGL loader: every routine resolves GL function names through the
 * caller-supplied resolver (the original passes wglGetProcAddress, loaded in
 * gl_proc.c) and stores the results in the client's pointer table, gated by
 * the extension flags the version parse (0x140091880) set. The master runs
 * them all in the original's order. Original addresses in comments. */

int gl_load_all(void *(*resolve)(const char *));                       /* 0x1400A6700 */
void gl_load_fixed_functions(void *(*resolve)(const char *));
void gl_load_core_1_1(void *(*resolve)(const char *));
void gl_load_core_1_2(void *(*resolve)(const char *));
void gl_load_multitexture_1_3(void *(*resolve)(const char *));
void gl_load_blend_1_4(void *(*resolve)(const char *));
void gl_load_buffers_1_5(void *(*resolve)(const char *));
void gl_load_stencil_2_0(void *(*resolve)(const char *));
void gl_load_uniform_2_0(void *(*resolve)(const char *));
void gl_load_indexed_3_0(void *(*resolve)(const char *));
void gl_load_instanced_3_0(void *(*resolve)(const char *));
void gl_load_basevertex_3_2(void *(*resolve)(const char *));
void gl_load_sync_3_3(void *(*resolve)(const char *));

/* Resolves glClipControl through the gate, or returns the resolver itself
 * when the extension is missing, as the original does. */
void *gl_clip_control_proc(void *(*resolve)(const char *));            /* 0x1400E3B90 */

#endif
