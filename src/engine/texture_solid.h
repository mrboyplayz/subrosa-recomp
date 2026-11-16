/* Texture records of 0xB0 bytes from 0x183F7CC00. A record keeps its size
 * (+0, +4), the format words (+8 mipmap levels, +0xC and +0x10 the internal
 * and pixel formats), four words at +0x14..+0x20 whose meaning is not settled
 * (the upload reads them), a word at +0x28 and the pixel pointer at +0x30. */
#ifndef SR_ENGINE_TEXTURE_SOLID_H
#define SR_ENGINE_TEXTURE_SOLID_H
#include "memory.h"

typedef struct TextureRecord {
    int32_t width, height;
    int32_t levels;
    int32_t internal_format, pixel_format;
    int32_t unknown_14, unknown_18;     /* the third and fourth arguments */
    int32_t unknown_1c, unknown_20;     /* the fifth and sixth */
    uint8_t unknown_24[4];
    int32_t unknown_28;
    uint8_t unknown_2c[4];
    uint64_t pixels;
    uint8_t unknown_38[0xB0 - 0x38];
} TextureRecord;
_Static_assert(sizeof(TextureRecord) == 0xB0, "texture record stride");
#define texture_records (&SR_GLOBAL(TextureRecord, 0x183F7CC00ULL))

/* Makes record `index` a 1 x 1 texture (formats 0x1908, one level) whose pixel is
 * r + (g << 8) + (b << 16) + (a << 24), with the four words as given
 * and +0x28 cleared, frees its old pixels, allocates and fills the new one,
 * and uploads it (0x14014D3E0, still recompiled). Returns 1. 0x140138590 */
int texture_make_solid(int index, int64_t unused, uint32_t word_14, uint32_t word_18, uint32_t word_1c,
                       uint32_t word_20, int r, int g, int b, int a);
#endif
