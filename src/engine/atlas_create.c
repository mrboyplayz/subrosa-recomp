#include <string.h>
#include "atlas_create.h"
#include "crt.h"
#include "gl.h"

#define atlas_width SR_GLOBAL(uint32_t, 0x1A7971DA0ULL)
#define atlas_height SR_GLOBAL(uint32_t, 0x1A7971DA4ULL)
#define atlas_texture SR_GLOBAL(uint32_t, 0x1A7971DC0ULL)
#define atlas_pixels SR_GLOBAL(uint64_t, 0x1A7971DC8ULL)
#define atlas_counter SR_GLOBAL(uint32_t, 0x1A7971DD0ULL)

#define glGenTextures SR_GL_SLOT(slot_glGenTextures, void (*)(GLsizei, GLuint *))
extern char slot_glGenTextures[] __asm__("glGenTextures");
#define glTexParameteri SR_GL_STATE_SLOT(0x144980D00ULL, void (*)(GLenum, GLenum, GLint))
#define glTexImage2D \
    SR_GL_STATE_SLOT(0x144980D18ULL, void (*)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *))

int64_t atlas_create(uint32_t width, uint32_t height)
{
    atlas_width = width;
    atlas_counter = 0;
    atlas_height = height;
    crt_free((void *)(uintptr_t)atlas_pixels);
    /* The byte count is the product of the two words read back, as a signed
       32-bit multiply shifted left by two, then sign-extended. */
    int32_t bytes = (int32_t)(((uint32_t)atlas_height * (uint32_t)atlas_width) << 2);
    void *pixels = crt_malloc((size_t)(int64_t)bytes);
    atlas_pixels = (uint64_t)(uintptr_t)pixels;
    memset(pixels, 0xFF, (size_t)(int64_t)(int32_t)(((uint32_t)atlas_height * (uint32_t)atlas_width) << 2));
    glGenTextures(1, &atlas_texture);
    glBindTexture(0x0DE1, atlas_texture);
    glTexParameteri(0x0DE1, 0x2802, 0x812F);
    glTexParameteri(0x0DE1, 0x2803, 0x812F);
    glTexParameteri(0x0DE1, 0x2800, 0x2601);
    glTexParameteri(0x0DE1, 0x2801, 0x2601);
    glTexImage2D(0x0DE1, 0, 0x1908, (GLsizei)atlas_width, (GLsizei)atlas_height, 0, 0x1908, 0x1401,
                 (const void *)(uintptr_t)atlas_pixels);
    return 0;
}
