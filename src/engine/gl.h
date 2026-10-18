/* OpenGL entry points used by the engine.
 *
 * The original loads its OpenGL functions into a table of pointers at
 * startup (the loaders at 0x1400E3B90-0x1400E5110, still recompiled code).
 * Each macro below is one slot of that table with the function's real
 * prototype, so a call made here always passes its arguments in the
 * registers the driver expects.
 *
 * Only functions that ported code calls are listed. Add a line when a module
 * needs another one; the slot for every name is recorded in
 * tools/native-compare/gl_slots.txt.
 */
#ifndef SR_ENGINE_GL_H
#define SR_ENGINE_GL_H

#include <stddef.h>
#include <stdint.h>
#include "memory.h"

typedef unsigned int GLenum;
typedef unsigned int GLuint;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLboolean;
typedef float GLfloat;
typedef ptrdiff_t GLsizeiptr;
typedef ptrdiff_t GLintptr;

#define GL_FALSE 0
#define GL_ONE 1
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_SRC_ALPHA 0x0302
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_LINE_SMOOTH 0x0B20
#define GL_CULL_FACE 0x0B44
#define GL_DEPTH_TEST 0x0B71
#define GL_BLEND 0x0BE2
#define GL_TEXTURE_2D 0x0DE1
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_UNSIGNED_SHORT 0x1403
#define GL_FLOAT 0x1406
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_STREAM_DRAW 0x88E0
#define GL_STATIC_DRAW 0x88E4

/* Storage of the pointer table: the client's pointer variables, named after
   the function each holds (src/client/client_gl.h). Declared under other C
   names here because the macros below take the functions' names. */
extern char slot_glActiveTexture[] __asm__("glActiveTexture");
extern char slot_glBindBuffer[] __asm__("glBindBuffer");
extern char slot_glBindTexture[] __asm__("glBindTexture");
extern char slot_glBufferData[] __asm__("glBufferData");
extern char slot_glBufferSubData[] __asm__("glBufferSubData");
extern char slot_glDisableVertexAttribArray[] __asm__("glDisableVertexAttribArray");
extern char slot_glDrawArrays[] __asm__("glDrawArrays");
extern char slot_glEnableVertexAttribArray[] __asm__("glEnableVertexAttribArray");
extern char slot_glUniform3fv[] __asm__("glUniform3fv");
extern char slot_glUniformMatrix4fv[] __asm__("glUniformMatrix4fv");
extern char slot_glUseProgram[] __asm__("glUseProgram");
extern char slot_glVertexAttrib2f[] __asm__("glVertexAttrib2f");
extern char slot_glVertexAttrib4fv[] __asm__("glVertexAttrib4fv");
extern char slot_glVertexAttribPointer[] __asm__("glVertexAttribPointer");
extern char slot_glViewport[] __asm__("glViewport");
extern float flt_140384000[];

#define SR_GL_SLOT(storage, prototype) ((prototype)(*(void **)(void *)(storage)))

/* The OpenGL 1.0 functions live inside the shared state region instead. */
#define SR_GL_STATE_SLOT(address, prototype) ((prototype)SR_GLOBAL(void *, address))

#define glDrawArrays              SR_GL_SLOT(slot_glDrawArrays, void (*)(GLenum, GLint, GLsizei))
#define glDrawElements            SR_GL_SLOT(&flt_140384000[131076], void (*)(GLenum, GLsizei, GLenum, const void *))
#define glActiveTexture           SR_GL_SLOT(slot_glActiveTexture, void (*)(GLenum))
#define glBindTexture             SR_GL_SLOT(slot_glBindTexture, void (*)(GLenum, GLuint))
#define glBindBuffer              SR_GL_SLOT(slot_glBindBuffer, void (*)(GLenum, GLuint))
#define glBufferData              SR_GL_SLOT(slot_glBufferData, void (*)(GLenum, GLsizeiptr, const void *, GLenum))
#define glBufferSubData           SR_GL_SLOT(slot_glBufferSubData, void (*)(GLenum, GLintptr, GLsizeiptr, const void *))
#define glDisableVertexAttribArray SR_GL_SLOT(slot_glDisableVertexAttribArray, void (*)(GLuint))
#define glEnableVertexAttribArray SR_GL_SLOT(slot_glEnableVertexAttribArray, void (*)(GLuint))
#define glUseProgram              SR_GL_SLOT(slot_glUseProgram, void (*)(GLuint))
#define glUniform3fv              SR_GL_SLOT(slot_glUniform3fv, void (*)(GLint, GLsizei, const GLfloat *))
#define glUniformMatrix4fv        SR_GL_SLOT(slot_glUniformMatrix4fv, void (*)(GLint, GLsizei, GLboolean, const GLfloat *))
#define glVertexAttrib2f          SR_GL_SLOT(slot_glVertexAttrib2f, void (*)(GLuint, GLfloat, GLfloat))
#define glVertexAttrib4fv         SR_GL_SLOT(slot_glVertexAttrib4fv, void (*)(GLuint, const GLfloat *))
#define glVertexAttribPointer     SR_GL_SLOT(slot_glVertexAttribPointer, void (*)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *))
#define glViewport                SR_GL_SLOT(slot_glViewport, void (*)(GLint, GLint, GLsizei, GLsizei))

#define glScissor                 SR_GL_STATE_SLOT(0x144980CE8ULL, void (*)(GLint, GLint, GLsizei, GLsizei))
#define glDepthMask               SR_GL_STATE_SLOT(0x144980D58ULL, void (*)(GLboolean))
#define glDisable                 SR_GL_STATE_SLOT(0x144980D60ULL, void (*)(GLenum))
#define glEnable                  SR_GL_STATE_SLOT(0x144980D68ULL, void (*)(GLenum))
#define glBlendFunc               SR_GL_STATE_SLOT(0x144980D80ULL, void (*)(GLenum, GLenum))

#endif
