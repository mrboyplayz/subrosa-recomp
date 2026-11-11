// NC_WRAPPERS: 14007D610 140069930
/* Sound buffer allocation (0x14007D610) and PCM loading (0x140069930).
 * The original routines allocate through the image's CRT: the j__malloc_base
 * thunk at 0x14023ACF8 and free at 0x14023ACE4. Neither runs with a live CRT
 * heap here, so the same deterministic stubs meet them in both builds: the
 * native build's calls are redirected there, and the port build's engine calls
 * sr_path_malloc/free, which this fixture defines as the same stubs. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
#include "nc.h"
#include "audio.h"

#define ARENA ((unsigned char *)0x100000000ULL)
#define SLOT_BYTES 0x400000
#define SLOTS 16

static unsigned alloc_calls;
static unsigned logging;   /* nc_map_image frees its image copy before the cases start */

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

#ifdef NC_NATIVE
#define allocate(sound,gain) ((uint64_t (*)(uint32_t,float))NC_ADDR(0x14007D610))(sound,gain)
#define load(sound,bytes,pcm,gain) ((void (*)(uint32_t,int,int16_t *,float))NC_ADDR(0x140069930))(sound,bytes,pcm,gain)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_audio_allocate_sound_buffer(unsigned int, float);
void sr_audio_load_pcm16(unsigned int, int, short *, float);
#define allocate(sound,gain) sr_audio_allocate_sound_buffer(sound,gain)
#define load(sound,bytes,pcm,gain) sr_audio_load_pcm16(sound,bytes,pcm,gain)
#else
#define allocate audio_allocate_sound_buffer
#define load audio_load_pcm16
#endif

static int16_t pcm[0x20000];

int main(void)
{
    static const uint32_t ids[] = {0, 1, 2, 0x7FF, 0x800, 0xFFF, 0x1000, 0x1001, 0x1800, 0x2000};
    static const int lengths[] = {0, 1, 2, 3, 7, 255, 4096, 32768, 65536, 131072, 262144,
                                  -1, -2, -262144, -2147483648};
    nc_map_image();
#ifdef NC_NATIVE
    nc_redirect(0x14023ACF8, (void *)stub_malloc);
    nc_redirect(0x14023ACE4, (void *)stub_free);
#endif
    if (!VirtualAlloc(ARENA, (size_t)SLOT_BYTES * SLOTS + 0x1000000, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE)) {
        nc_line("arena reserve failed %lu", GetLastError());
        return 2;
    }
    nc_seed(0x5165E851ULL);
    for (int word = 0; word < SLOT_BYTES * SLOTS / 4; word++) {
        uint32_t bits = (uint32_t)nc_rand();
        memcpy(ARENA + 4 * word, &bits, 4);
    }
    for (int sample = 0; sample < 0x20000; sample++) {
        uint32_t bits = (uint32_t)nc_rand();
        memcpy(pcm + sample, &bits, 2);
    }
    logging = 1;
    for (int n = 0; n < nc_cases(1200); n++) {
        nc_seed(1000003 + n);
        alloc_calls = 0;
        int op = n & 1;
        uint32_t sound;
        if (op != 0 && n % 13 == 0) sound = nc_rand_below(0x2000);   /* anywhere in or just past the guard */
        else sound = ids[nc_rand_below(sizeof ids / sizeof ids[0])];
        AudioSound *record = &audio_sounds[0] + (int64_t)(int32_t)sound;
        uint64_t bits[4];
        for (int k = 0; k < 4; k++) bits[k] = nc_rand();
        memcpy(record, bits, 32);
        record->samples = (uint64_t)(uintptr_t)(n % 3 == 0 ? ARENA + 0x1100000
                                           : n % 3 == 1 ? NULL : (unsigned char *)(uintptr_t)(uint32_t)nc_rand());
        int byte_count = lengths[nc_rand_below(sizeof lengths / sizeof lengths[0])];
        float gain;
        {
            uint32_t word = (uint32_t)nc_rand();
            if (n % 5 == 0) word = 0x7FC00000u + ((uint32_t)nc_rand() & 0xFFFFFu);   /* quiet NaN payload */
            memcpy(&gain, &word, 4);
        }
        int16_t *source = pcm;
        if (n % 7 == 3) {
            int offset = (int)nc_rand_below(0x10000);
            source = pcm + offset;
            if (byte_count > 2 * (0x20000 - offset)) byte_count = 2 * (0x20000 - offset);
            if (byte_count < -2 * offset) byte_count = -2 * offset;
        }
        uint32_t csr = 0x1f80 | ((n % 4) << 13) | ((n / 4 % 2) << 6) | ((n / 8 % 2) << 15);
        nc_set_mxcsr(csr);
        uint64_t result = 0;
        if (op == 0) result = allocate(sound, gain);
        else load(sound, byte_count, source, gain);
        nc_line("buffer %d op %d sound %u %016llx %08x", n, op, sound,
                (unsigned long long)result, nc_get_mxcsr());
        nc_line("record %016llx %016llx", (unsigned long long)nc_hash(record, 32),
                (unsigned long long)nc_hash((unsigned char *)record + 32, 32));
        nc_line("arena %016llx", (unsigned long long)nc_hash(ARENA, 0x100000));
    }
    return 0;
}
