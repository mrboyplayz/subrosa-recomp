#include "crt.h"
#include "texture_solid.h"

int texture_make_solid(int index, int64_t unused, uint32_t word_14, uint32_t word_18, uint32_t word_1c,
                       uint32_t word_20, int r, int g, int b, int a)
{
    (void)unused;
    TextureRecord *record = &texture_records[index];
    record->height = 1;
    record->width = 1;
    record->unknown_28 = 0;
    record->levels = 1;
    record->pixel_format = 0x1908;
    record->internal_format = 0x1908;
    record->wrap_s = (int32_t)word_14;
    record->wrap_t = (int32_t)word_18;
    record->filter_mag = (int32_t)word_1c;
    record->filter_min = (int32_t)word_20;
    crt_free((void *)(uintptr_t)record->pixels[0]);
    record->pixels[0] = (uint64_t)(uintptr_t)crt_malloc((size_t)(int64_t)(int32_t)((uint32_t)record->height * (uint32_t)record->width * 4u));
    /* a7 is red, a8 and a9 the next two bytes: the sum is (b << 16) + r + (g << 8) + (a << 24) in the
       original's names, where b is the ninth argument and g the eighth. */
    uint32_t packed = ((uint32_t)b << 16) + (uint32_t)r + ((uint32_t)g << 8) + ((uint32_t)a << 24);
    for (int32_t y = 0; y < record->height; y++) {
        for (int32_t x = 0; x < record->width; x++)
            ((uint32_t *)(uintptr_t)record->pixels[0])[(int64_t)(int32_t)((uint32_t)record->width * (uint32_t)y + (uint32_t)x)] = packed;
    }
    texture_upload(index, 0);
    return 1;
}
