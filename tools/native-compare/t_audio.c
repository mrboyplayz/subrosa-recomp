// NC_WRAPPERS: 1400EE400
/* Sound loading from WAV files (0x1400EE400).
 * The original changes to "sound" directory, loads a WAV, converts 16-bit
 * samples to float, stores the buffer in the sound record, then changes
 * directory back. The native build redirects the SDL imports and the CRT
 * malloc/free to deterministic stubs; the port build uses the same stubs
 * via sr_path_malloc/free, and its own _chdir. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
#include "nc.h"
#include "audio.h"
#include "crt.h"

#define ARENA ((unsigned char *)0x100000000ULL)
#define SLOT_BYTES 0x100000
#define SLOTS 16

static unsigned alloc_calls;

static void *stub_malloc(unsigned long long size)
{
    return ARENA + SLOT_BYTES * (alloc_calls++ % SLOTS);
}

static void stub_free(void *block)
{
    (void)block;
}

/* SDL import stubs: return NULL to simulate file open/load failure. */
static void *stub_SDL_RWFromFile(const char *file, const char *mode)
{
    (void)file; (void)mode;
    return NULL;
}

static void *stub_SDL_LoadWAV_RW(void *rw, int freesrc, void *spec,
                                  unsigned char **audio_buf, unsigned int *audio_len)
{
    (void)rw; (void)freesrc; (void)spec;
    /* Simulate successful load with silence: 48000 Hz, 1 channel, 48000 samples. */
    sr_wave_spec *s = (sr_wave_spec *)spec;
    s->freq = 48000;
    s->format = 0x0010;
    s->channels = 1;
    s->silence = 0;
    s->samples = 48000;
    s->padding = 0;
    s->size = 48000 * 2;
    *audio_buf = ARENA + SLOT_BYTES;
    *audio_len = 48000 * 2;
    return (void *)1;
}

static void stub_SDL_FreeWAV(unsigned char *audio_buf)
{
    (void)audio_buf;
}

/* The port builds reach the engine's sr_path_malloc/free and its asm SDL
 * aliases (crt.h); stub them so both builds behave identically. The stub
 * chdir succeeds, as it does next to the game's sound/ folder. */
#if !defined(NC_NATIVE)
long long sr_path_malloc(unsigned long long size) { return (long long)(intptr_t)stub_malloc(size); }
void free(void *block) { stub_free(block); }
long long crt_chdir(char *path) { (void)path; return 0; }
void *SDL_RWFromFile(const char *file, const char *mode)
{
    return stub_SDL_RWFromFile(file, mode);
}
void *SDL_LoadWAV_RW(void *rw, int freesrc, sr_wave_spec *spec,
                     unsigned char **audio_buf, unsigned int *audio_len)
{
    return stub_SDL_LoadWAV_RW(rw, freesrc, spec, audio_buf, audio_len);
}
void SDL_FreeWAV(unsigned char *audio_buf) { stub_SDL_FreeWAV(audio_buf); }
#endif

#ifdef NC_NATIVE
long long sr_path_malloc(unsigned long long size);
void free(void *block);
/* The original is the routine under test; the path travels as the integer
   the ABI hands it. */
#define load_wav(sound_id,path,gain) \
    ((int64_t (*)(int,__int64,float))NC_ADDR(0x1400EE400))(sound_id,(__int64)(intptr_t)(path),gain)
#elif defined(NC_CLIENT_WRAPPERS)
/* The client wrapper keeps the decompiler's signature: the path arrives as
   an integer and is cast back inside. */
long long sub_1400EE400(int,__int64,float);
#define load_wav(sound_id,path,gain) sub_1400EE400(sound_id,(__int64)(intptr_t)(path),gain)
#else
/* The engine port takes the path as a pointer. */
int64_t audio_load_sound_from_wav(int sound_id, const char *path, float gain);
#define load_wav(sound_id,path,gain) audio_load_sound_from_wav(sound_id,path,gain)
#endif

int main(void)
{
    nc_map_image();
#ifdef NC_NATIVE
    nc_redirect(0x14023ACF8, (void *)stub_malloc);
    nc_redirect(0x14023ACE4, (void *)stub_free);
    nc_bind_import("SDL2.dll", "SDL_RWFromFile", (void *)stub_SDL_RWFromFile);
    nc_bind_import("SDL2.dll", "SDL_LoadWAV_RW", (void *)stub_SDL_LoadWAV_RW);
    nc_bind_import("SDL2.dll", "SDL_FreeWAV", (void *)stub_SDL_FreeWAV);
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
    for (int n = 0; n < nc_cases(600); n++) {
        nc_seed(1000003 + n);
        alloc_calls = 0;
        int sound_id = nc_rand_below(0x2000);
        const char *path = "ak47_fire01.wav";
        if (n % 10 == 0) path = NULL;
        else if (n % 10 == 1) path = "";
        else if (n % 10 == 2) path = "sound\\m16_fire%02d.wav";
        float gain;
        {
            uint32_t word = (uint32_t)nc_rand();
            if (n % 5 == 0) word = 0x7FC00000u + ((uint32_t)nc_rand() & 0xFFFFFu);
            memcpy(&gain, &word, 4);
        }
        int64_t result = load_wav(sound_id, path, gain);
        nc_line("wav %d sound %d result %016llx %08x", n, sound_id,
                (unsigned long long)result, nc_get_mxcsr());
        if (sound_id >= 0 && sound_id <= 0xFFF) {
            long long record_offset = 8 * (long long)sound_id;
            nc_line("record %016llx %016llx %016llx",
                    (unsigned long long)nc_hash(&SR_GLOBAL(int32_t, 0x140404A6C + 4 * ((int)record_offset + 18165777)), 16),
                    (unsigned long long)nc_hash(&SR_GLOBAL(int32_t, 0x140404A6C + 4 * ((int)record_offset + 18165778)), 8),
                    (unsigned long long)nc_hash(&audio_sounds[sound_id], 32));
        }
    }
    return 0;
}
