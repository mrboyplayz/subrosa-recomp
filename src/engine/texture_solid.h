/* Texture records of 0xB0 bytes from 0x183F7CC00. A record keeps its size
 * (+0, +4), +8 the mipmap levels, the two format words, the four sampler words
 * at +0x14..+0x20, a word at +0x28, the GL texture object at +0x2C and the
 * pixel pointer of each level from +0x30. */
#ifndef SR_ENGINE_TEXTURE_SOLID_H
#define SR_ENGINE_TEXTURE_SOLID_H
#include "memory.h"

typedef struct TextureRecord {
    int32_t width, height;
    int32_t levels;
    int32_t pixel_format, internal_format;   /* +0xC, +0x10 */
    int32_t wrap_s, wrap_t;             /* +0x14, +0x18 (GL_TEXTURE_WRAP_S, _T) */
    int32_t filter_mag, filter_min;     /* +0x1C, +0x20 (GL_TEXTURE_MAG_FILTER at 0x2800, MIN at 0x2801) */
    uint8_t unknown_24[4];
    int32_t unknown_28;
    uint32_t gl_name;                   /* +0x2C, the GL texture object */
    uint64_t pixels[8];                 /* +0x30, one pointer per mipmap level; level 0 is the image */
    uint8_t unknown_70[0xB0 - 0x70];
} TextureRecord;
_Static_assert(sizeof(TextureRecord) == 0xB0, "texture record stride");
#define texture_records (&SR_GLOBAL(TextureRecord, 0x183F7CC00ULL))

/* Binds the record's texture, sets the four sampler words, uploads each level
 * (size shifted right by the level, border 0, type GL_UNSIGNED_BYTE) from its
 * pixel pointer and, when free_pixels is nonzero, frees the level pointers
 * and clears them. 0x14014D3E0 */
void texture_upload(int index, int free_pixels);

/* Makes record `index` a 1 x 1 texture (formats 0x1908, one level) whose pixel is
 * r + (g << 8) + (b << 16) + (a << 24), with the four words as given
 * and +0x28 cleared, frees its old pixels, allocates and fills the new one,
 * and uploads it (0x14014D3E0, still recompiled). Returns 1. 0x140138590 */
int texture_make_solid(int index, int64_t unused, uint32_t word_14, uint32_t word_18, uint32_t word_1c,
                       uint32_t word_20, int r, int g, int b, int a);
#endif
