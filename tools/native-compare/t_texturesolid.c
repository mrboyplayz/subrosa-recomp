// NC_WRAPPERS: 140138590
/* Making a record a 1 x 1 texture of one colour: the record's words, the old
 * pixels freed, a new buffer of 4 bytes allocated and filled with the sum
 * r + (g << 8) + (b << 16) + (a << 24) (32-bit, so wide and negative
 * components carry), and the upload called with the record and 0. The CRT's
 * malloc (0x14023ACF8) and free (0x14023ACE4) and the upload (0x14014D3E0)
 * are recording stubs in both builds. The record, the arena slot and the
 * recorded calls are hashed. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
#include "nc.h"
#include "texture_solid.h"

#define ARENA ((unsigned char *)0x100000000ULL)
#define SLOT_BYTES 0x1000
#define SLOTS 8

static unsigned alloc_calls;
static unsigned logging;

static void *stub_malloc(unsigned long long size)
{
    uint64_t bytes[1] = {size};
    if (logging) nc_call("malloc", 1, bytes);
    return ARENA + SLOT_BYTES * (alloc_calls++ % SLOTS);
}

static void stub_free(void *block)
{
    if (logging) {
        uint64_t pointer[1] = {(uint64_t)(uintptr_t)block};
        nc_call("free", 1, pointer);
    }
}

#if !defined(NC_NATIVE)
long long sr_path_malloc(unsigned long long size) { return (long long)(intptr_t)stub_malloc(size); }
void free(void *block) { stub_free(block); }
#endif

void sub_14014D3E0(int index, int unknown)
{
    uint64_t args[2] = {(uint64_t)(uint32_t)index, (uint64_t)(uint32_t)unknown};
    if (logging) nc_call("upload", 2, args);
}

#ifdef NC_NATIVE
#define make(i, u, a, b, c, d, r, g, bl, al) \
    ((int64_t (*)(int, int64_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int))NC_ADDR(0x140138590))(i, u, a, b, c, d, r, g, bl, al)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140138590(int, long long, unsigned, unsigned, unsigned, unsigned, int, int, int, int);
#define make sub_140138590
#else
#define make texture_make_solid
#endif

int main(void)
{
    nc_map_image();
#ifdef NC_NATIVE
    nc_redirect(0x14023ACF8, (void *)stub_malloc);
    nc_redirect(0x14023ACE4, (void *)stub_free);
    nc_redirect(0x14014D3E0, (void *)sub_14014D3E0);
#endif
    if (!VirtualAlloc(ARENA, (size_t)SLOT_BYTES * SLOTS + 0x10000, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE)) {
        nc_line("arena reserve failed %lu", GetLastError());
        return 2;
    }
    nc_save(&texture_records[0], sizeof(TextureRecord) * 4);
    logging = 1;
    for (int n = 0; n < nc_cases(4000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        for (size_t k = 0; k < (size_t)SLOT_BYTES * SLOTS; k += 4) {
            uint32_t w = (uint32_t)nc_rand();
            memcpy(ARENA + k, &w, 4);
        }
        int index = (int)nc_rand_below(4);
        TextureRecord *record = &texture_records[index];
        uint8_t *raw = (uint8_t *)record;
        for (size_t k = 0; k < sizeof *record; k++)
            raw[k] = (uint8_t)nc_rand();
        record->pixels = nc_chance(50) ? 0 : (uint64_t)(uintptr_t)(ARENA + SLOT_BYTES * nc_rand_below(SLOTS));
        alloc_calls = (unsigned)nc_rand_below(SLOTS);
        int colour[4];
        for (int k = 0; k < 4; k++)
            colour[k] = nc_chance(20) ? (int)nc_rand() : (int)nc_rand_below(300) - 20;
        int64_t result = make(index, (int64_t)nc_rand(), (uint32_t)nc_rand(), (uint32_t)nc_rand(), (uint32_t)nc_rand(),
                              (uint32_t)nc_rand(), colour[0], colour[1], colour[2], colour[3]);
        nc_line("n%d index %d -> %lld record %016llx arena %016llx", n, index, (long long)result,
                (unsigned long long)nc_hash(&texture_records[0], sizeof(TextureRecord) * 4),
                (unsigned long long)nc_hash(ARENA, (size_t)SLOT_BYTES * SLOTS));
    }
    return 0;
}
