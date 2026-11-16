/* The OpenGL function loaders of the original. A loader checks the flag of
 * its version (set when the context is made, from the version string) and,
 * when it is not zero, asks the resolver for each function of the group in
 * order and stores whatever it returns in that function's slot: zero for a
 * function the driver lacks. The slots are the ones the game calls through. */
#ifndef SR_ENGINE_GL_LOADER_H
#define SR_ENGINE_GL_LOADER_H

/* What the loaders are given: the original passes it in rcx and calls it
 * with a function name. */
typedef long long (*GlResolver)(const char *name);

void gl_load_1_0(GlResolver resolve); /* OpenGL 1.0: 48 functions, 0x1400E3BC0 */
void gl_load_1_1(GlResolver resolve); /* OpenGL 1.1: 13 functions, 0x1400E3EE0 */
void gl_load_1_2(GlResolver resolve); /* OpenGL 1.2: 4 functions, 0x1400E3FD0 */
void gl_load_1_3(GlResolver resolve); /* OpenGL 1.3: 9 functions, 0x1400E4030 */
void gl_load_1_4(GlResolver resolve); /* OpenGL 1.4: 9 functions, 0x1400E40E0 */
void gl_load_1_5(GlResolver resolve); /* OpenGL 1.5: 19 functions, 0x1400E4190 */
void gl_load_2_0(GlResolver resolve); /* OpenGL 2.0: 93 functions, 0x1400E42E0 */
void gl_load_2_1(GlResolver resolve); /* OpenGL 2.1: 6 functions, 0x1400E48D0 */
void gl_load_3_0(GlResolver resolve); /* OpenGL 3.0: 84 functions, 0x1400E4950 */
void gl_load_3_1(GlResolver resolve); /* OpenGL 3.1: 15 functions, 0x1400E4EB0 */
void gl_load_3_2(GlResolver resolve); /* OpenGL 3.2: 19 functions, 0x1400E4FC0 */
void gl_load_3_3(GlResolver resolve); /* OpenGL 3.3: 58 functions, 0x1400E5110 */

/* glClipControl alone, behind its own flag. Returns the resolver itself when
 * the flag is clear, as the original leaves rcx in rax. 0x1400E3B90 */
long long gl_load_clip_control(GlResolver resolve);
#endif
