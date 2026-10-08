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
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_SRC_ALPHA 0x0302
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_CULL_FACE 0x0B44
#define GL_DEPTH_TEST 0x0B71
#define GL_BLEND 0x0BE2
#define GL_TEXTURE_2D 0x0DE1
#define GL_UNSIGNED_SHORT 0x1403
#define GL_FLOAT 0x1406
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_STREAM_DRAW 0x88E0
#define GL_STATIC_DRAW 0x88E4

/* Storage of the pointer table. The symbols are defined by the recompiled
   client's data module; each one holds a single function pointer. */
extern char qword_140302FE8[], qword_140302FF8[], qword_140404050[], qword_140404170[], unk_140404190[],
            qword_140404198[], qword_140404230[], qword_140404238[], qword_1404042E0[],
            qword_140404378[], unk_140404470[], qword_1404044A8[];
extern float flt_140384000[];

#define SR_GL_SLOT(storage, prototype) ((prototype)(*(void **)(void *)(storage)))

/* The OpenGL 1.0 functions live inside the shared state region instead. */
#define SR_GL_STATE_SLOT(address, prototype) ((prototype)SR_GLOBAL(void *, address))

#define glDrawArrays              SR_GL_SLOT(qword_140302FF8, void (*)(GLenum, GLint, GLsizei))
#define glDrawElements            SR_GL_SLOT(&flt_140384000[131076], void (*)(GLenum, GLsizei, GLenum, const void *))
#define glBindTexture             SR_GL_SLOT(qword_140404050, void (*)(GLenum, GLuint))
#define glBindBuffer              SR_GL_SLOT(qword_140404170, void (*)(GLenum, GLuint))
#define glBufferData              SR_GL_SLOT(unk_140404190, void (*)(GLenum, GLsizeiptr, const void *, GLenum))
#define glBufferSubData           SR_GL_SLOT(qword_140404198, void (*)(GLenum, GLintptr, GLsizeiptr, const void *))
#define glDisableVertexAttribArray SR_GL_SLOT(qword_140404230, void (*)(GLuint))
#define glEnableVertexAttribArray SR_GL_SLOT(qword_140404238, void (*)(GLuint))
#define glUseProgram              SR_GL_SLOT(qword_1404042E0, void (*)(GLuint))
#define glUniformMatrix4fv        SR_GL_SLOT(qword_140404378, void (*)(GLint, GLsizei, GLboolean, const GLfloat *))
#define glVertexAttrib4fv         SR_GL_SLOT(unk_140404470, void (*)(GLuint, const GLfloat *))
#define glVertexAttribPointer     SR_GL_SLOT(qword_1404044A8, void (*)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *))
#define glViewport                SR_GL_SLOT(qword_140302FE8, void (*)(GLint, GLint, GLsizei, GLsizei))

#define glScissor                 SR_GL_STATE_SLOT(0x144980CE8ULL, void (*)(GLint, GLint, GLsizei, GLsizei))
#define glDepthMask               SR_GL_STATE_SLOT(0x144980D58ULL, void (*)(GLboolean))
#define glDisable                 SR_GL_STATE_SLOT(0x144980D60ULL, void (*)(GLenum))
#define glEnable                  SR_GL_STATE_SLOT(0x144980D68ULL, void (*)(GLenum))
#define glBlendFunc               SR_GL_STATE_SLOT(0x144980D80ULL, void (*)(GLenum, GLenum))

#endif
