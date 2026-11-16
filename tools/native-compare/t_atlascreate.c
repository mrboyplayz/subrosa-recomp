// NC_WRAPPERS: 14006CA30
/* Creating the first atlas texture: the size words, the cleared counter, the
 * old buffer freed, the new one of width * height * 4 bytes of 0xFF, and the
 * GL calls (texture object generated into the record, the bind, four sampler
 * words, the RGBA image). Sizes include zero, odd values and sizes whose
 * 32-bit byte count wraps or goes negative (the allocation is a recording
 * stub, so the memset into the stub's arena stays inside it). The words around
 * the record, the arena and every recorded call are compared. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
#include "nc.h"
#include "atlas_create.h"
#include "gl.h"

#define ARENA ((unsigned char *)0x100000000ULL)
#define SLOT_BYTES 0x40000
static unsigned logging;
static unsigned alloc_calls;

static void *stub_malloc(unsigned long long size)
{
    uint64_t bytes[1] = {size};
    if (logging) nc_call("malloc", 1, bytes);
    return ARENA + SLOT_BYTES * (alloc_calls++ % 4);
}

static void stub_free(void *block)
{
    if (logging) {
        uint64_t pointer[1] = {(uint64_t)(uintptr_t)block};
        nc_call("free", 1, pointer);
    }
}

static void *stub_memset_guard(void *dest, int value, size_t count) { return memset(dest, value, count); }

#if !defined(NC_NATIVE)
long long sr_path_malloc(unsigned long long size) { return (long long)(intptr_t)stub_malloc(size); }
void free(void *block) { stub_free(block); }
#endif

static void gl_gen_textures(GLsizei n, GLuint *names)
{
    nc_line("glGenTextures %d", n);
    names[0] = 0x4000 + (unsigned)alloc_calls;
}
static void gl_bind_texture(GLenum target, GLuint name) { nc_line("glBindTexture %#x %u", target, name); }
static void gl_tex_parameteri(GLenum t, GLenum p, GLint v) { nc_line("glTexParameteri %#x %#x %d", t, p, v); }
static void gl_tex_image_2d(GLenum t, GLint level, GLint internal, GLsizei w, GLsizei h, GLint border, GLenum format,
                            GLenum type, const void *pixels)
{
    nc_line("glTexImage2D %#x %d %#x %d %d %d %#x %#x %llx", t, level, internal, w, h, border, format, type,
            (unsigned long long)(uintptr_t)pixels);
}

#ifdef NC_NATIVE
#define create(w, h) ((int64_t (*)(uint32_t, uint32_t))NC_ADDR(0x14006CA30))(w, h)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14006CA30(unsigned, unsigned);
#define create sub_14006CA30
#else
#define create atlas_create
#endif

int main(void)
{
    static const uint32_t sizes[] = {0, 1, 2, 7, 64, 100, 255, 256, 300, 511};
    nc_map_image();
    (void)stub_memset_guard;
#ifdef NC_NATIVE
    nc_redirect(0x14023ACF8, (void *)stub_malloc);
    nc_redirect(0x14023ACE4, (void *)stub_free);
#endif
    if (!VirtualAlloc(ARENA, (size_t)SLOT_BYTES * 4 + 0x10000, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE)) {
        nc_line("arena reserve failed %lu", GetLastError());
        return 2;
    }
    SR_GLOBAL(uint64_t, 0x140404060ULL) = (uint64_t)(uintptr_t)gl_gen_textures;
    SR_GLOBAL(uint64_t, 0x140404050ULL) = (uint64_t)(uintptr_t)gl_bind_texture;
    SR_GLOBAL(uint64_t, 0x144980D00ULL) = (uint64_t)(uintptr_t)gl_tex_parameteri;
    SR_GLOBAL(uint64_t, 0x144980D18ULL) = (uint64_t)(uintptr_t)gl_tex_image_2d;
    nc_save(NC_ADDR(0x1A7971D90ULL), 0x60);
    logging = 1;
    for (int n = 0; n < nc_cases(3000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        for (size_t k = 0; k < (size_t)SLOT_BYTES * 4; k += 4) {
            uint32_t w = (uint32_t)nc_rand();
            memcpy(ARENA + k, &w, 4);
        }
        uint8_t *record = NC_ADDR(0x1A7971D90ULL);
        for (size_t k = 0; k < 0x60; k++)
            record[k] = (uint8_t)nc_rand();
        *(uint64_t *)NC_ADDR(0x1A7971DC8ULL) = nc_chance(50) ? 0 : (uint64_t)(uintptr_t)(ARENA + SLOT_BYTES * nc_rand_below(4));
        alloc_calls = (unsigned)nc_rand_below(4);
        uint32_t w = sizes[nc_rand_below(10)], h = sizes[nc_rand_below(10)];
        if (w * h * 4 > SLOT_BYTES) h = SLOT_BYTES / 4 / (w ? w : 1) / 2;
        int64_t result = create(w, h);
        nc_line("n%d %ux%u -> %lld record %016llx arena %016llx", n, w, h, (long long)result,
                (unsigned long long)nc_hash(NC_ADDR(0x1A7971D90ULL), 0x60),
                (unsigned long long)nc_hash(ARENA, (size_t)SLOT_BYTES * 4));
    }
    return 0;
}
