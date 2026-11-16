#include "crt.h"
#include "gl.h"
#include "texture_solid.h"

/* The sampler and image calls live in the state region (OpenGL 1.0). */
#define glTexParameteri SR_GL_STATE_SLOT(0x144980D00ULL, void (*)(GLenum, GLenum, GLint))
#define glTexImage2D \
    SR_GL_STATE_SLOT(0x144980D18ULL, void (*)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *))

#define GL_TEXTURE_2D 0x0DE1
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803
#define GL_UNSIGNED_BYTE 0x1401

void texture_upload(int index, int free_pixels)
{
    TextureRecord *record = &texture_records[index];
    glBindTexture(GL_TEXTURE_2D, record->gl_name);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, record->wrap_s);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, record->wrap_t);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, record->filter_mag);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, record->filter_min);
    /* The level count and the pixel pointers are read again for every level,
       as the original does; the shift counts are the low five bits of the
       level, as SAR takes them. */
    for (int32_t level = 0; level < record->levels; level++) {
        glTexImage2D(GL_TEXTURE_2D, level, record->internal_format, record->width >> (level & 31),
                     record->height >> (level & 31), 0, (GLenum)record->pixel_format, GL_UNSIGNED_BYTE,
                     (const void *)(uintptr_t)record->pixels[level]);
    }
    if (!free_pixels)
        return;
    for (int32_t level = 0; level < record->levels; level++) {
        if (record->pixels[level]) {
            crt_free((void *)(uintptr_t)record->pixels[level]);
            record->pixels[level] = 0;
        }
    }
}
