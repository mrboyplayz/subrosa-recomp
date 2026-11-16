// NC_WRAPPERS: 14014D3E0
/* Uploading a texture record: the bind, the four sampler words, one image
 * call per level (the size shifted right by the level, the level count and
 * the pixel pointer re-read each time) and, when asked, the free of every
 * level's pixels with the pointer cleared. Level counts include zero,
 * negative and past the eight pointers' worth; sizes include zero and
 * negative values and levels past 31. Every GL call and every free is
 * recorded with its arguments, the same in both builds. */
#include <string.h>
#include "nc.h"
#include "gl.h"
#include "texture_solid.h"

static unsigned logging;

static void gl_bind_texture(GLenum target, GLuint name) { nc_line("glBindTexture %#x %u", target, name); }
static void gl_tex_parameteri(GLenum t, GLenum p, GLint v) { nc_line("glTexParameteri %#x %#x %d", t, p, v); }
static void gl_tex_image_2d(GLenum t, GLint level, GLint internal, GLsizei w, GLsizei h, GLint border, GLenum format,
                            GLenum type, const void *pixels)
{
    nc_line("glTexImage2D %#x %d %#x %d %d %d %#x %#x %llx", t, level, internal, w, h, border, format, type,
            (unsigned long long)(uintptr_t)pixels);
}

static void stub_free(void *block)
{
    if (logging) {
        uint64_t pointer[1] = {(uint64_t)(uintptr_t)block};
        nc_call("free", 1, pointer);
    }
}

#if !defined(NC_NATIVE)
void free(void *block) { stub_free(block); }
#endif

#ifdef NC_NATIVE
#define upload(i, f) ((void (*)(int, int))NC_ADDR(0x14014D3E0))(i, f)
#elif defined(NC_CLIENT_WRAPPERS)
void sub_14014D3E0(int, int);
#define upload sub_14014D3E0
#else
#define upload texture_upload
#endif

int main(void)
{
    nc_map_image();
    nc_save(&texture_records[0], sizeof(TextureRecord) * 4);
#ifdef NC_NATIVE
    nc_redirect(0x14023ACE4, (void *)stub_free);
#endif
    *(void **)&SR_GLOBAL(void *, 0x140404050ULL - 0x0) = 0;
    SR_GLOBAL(uint64_t, 0x140404050ULL) = (uint64_t)(uintptr_t)gl_bind_texture;
    SR_GLOBAL(uint64_t, 0x144980D00ULL) = (uint64_t)(uintptr_t)gl_tex_parameteri;
    SR_GLOBAL(uint64_t, 0x144980D18ULL) = (uint64_t)(uintptr_t)gl_tex_image_2d;
    logging = 1;
    for (int n = 0; n < nc_cases(3000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        int index = (int)nc_rand_below(4);
        TextureRecord *record = &texture_records[index];
        uint8_t *raw = (uint8_t *)record;
        for (size_t k = 0; k < sizeof *record; k++)
            raw[k] = (uint8_t)nc_rand();
        record->levels = nc_chance(10) ? (int32_t)nc_rand_below(12) - 2 : (int32_t)nc_rand_below(9);
        record->width = nc_chance(15) ? (int32_t)nc_rand() : (int32_t)nc_rand_below(2049);
        record->height = nc_chance(15) ? (int32_t)nc_rand() : (int32_t)nc_rand_below(2049);
        for (int k = 0; k < 8; k++)
            record->pixels[k] = nc_chance(30) ? 0 : 0x10000ULL + 16ULL * nc_rand_below(1000);
        int free_pixels = (int)nc_rand_below(3) == 0;
        upload(index, free_pixels);
        nc_line("n%d index %d free %d record %016llx", n, index, free_pixels,
                (unsigned long long)nc_hash(&texture_records[0], sizeof(TextureRecord) * 4));
    }
    return 0;
}
