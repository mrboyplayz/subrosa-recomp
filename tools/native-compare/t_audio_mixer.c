// NC_WRAPPERS: 14006A5C0 140069440 140069400
/* Three audio-mixer routines around SDL's device and semaphore APIs. The
   pause (0x14006A5C0): each device word is read as signed and the device is
   resumed only when its word is positive, capture first, then output; the
   second call is the original's tail call through its SDL import
   (0x14006A5E1 falls to 0x140198E9F, SDL_PauseAudioDevice). The enumeration
   (0x140069440): negative counts clamp to zero, the "Default" magic lands
   on each not-opened slot, every name copies with its terminator into a
   512-byte slot, and both count words keep the original's odd +1. The
   output callback (0x140069400): byte_count bytes of the mix ring the last
   pass filled copy into SDL's stream, the ring selector flips and the
   semaphore posts (0x140069439 tails into SDL_SemPost at 0x140198E69). The
   native build binds the exe's four SDL imports to recording stubs; the
   port build defines the same stubs so the C ports' direct calls land on
   them too, and both print the observed call logs, tables and streams. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include "nc.h"
#include "audio.h"

#define ARENA ((unsigned char *)0x200000000ULL)
#define SDL_STREAM ((unsigned char *)(ARENA + 0x800000))
#define NAME_SLOTS 64
#define NAME_SLOT_BYTES 512
#define MAX_CALLS 4

static uint64_t pause_calls;
static uint32_t last_devices[MAX_CALLS];
static int last_flags[MAX_CALLS];

static void recording_pause(int device, int pause_on)
{
    int slot = (int)(pause_calls & (MAX_CALLS - 1));
    last_devices[slot] = (uint32_t)device;
    last_flags[slot] = pause_on;
    pause_calls++;
}

/* The device API: a scripted count per direction and names the generator
   writes into the arena, deterministic per (case, call, index). */
static int scripted_output_count, scripted_capture_count;
static int scripted_calls;

static int recording_count(int capture)
{
    int index = scripted_calls++;
    return capture ? scripted_capture_count : scripted_output_count;
}

static const char *recording_name(int index, int capture)
{
    int call = scripted_calls++;
    uint64_t words[4];
    for (int k = 0; k < 4; k++) words[k] = nc_rand() ^ ((uint64_t)(call * 8 + index + 1) << (8 * k));
    char *name = (char *)ARENA + 0x400000 + 64 * (size_t)(call & 7);
    memcpy(name, words, 32);
    name[32] = 0;
    return name;
}

static uint64_t post_calls;
static uint64_t last_sems[MAX_CALLS];

static void recording_post(void *semaphore)
{
    last_sems[post_calls & (MAX_CALLS - 1)] = (uint64_t)(uintptr_t)semaphore;
    post_calls++;
}

#ifdef NC_NATIVE
#define pause_devices() ((void (*)(void))NC_ADDR(0x14006A5C0))()
#define list_devices() ((void (*)(void))NC_ADDR(0x140069440))()
#define callback(stream, bytes, user) \
    ((void (*)(void *, void *, int))NC_ADDR(0x140069400))((void *)(uintptr_t)(user), \
        (void *)(uintptr_t)(stream), (int)(bytes))
#elif defined(NC_CLIENT_WRAPPERS)
void sr_audio_pause_devices(void);
void sr_audio_list_devices(void);
void sr_audio_output_callback(long long userdata, __m128i *output, int byte_count);
static void pause_devices(void) { sr_audio_pause_devices(); }
static void list_devices(void) { sr_audio_list_devices(); }
#define callback(stream, bytes, user) \
    sr_audio_output_callback((long long)(uintptr_t)(user), (__m128i *)(void *)(uintptr_t)(stream), (int)(bytes))
#else
/* the C ports call SDL's device API directly; the fixture's definitions of
   the same routines record them in the port build as well */
#define pause_devices audio_pause_devices
#define list_devices audio_list_devices
#define callback(stream, bytes, user) \
    audio_output_callback((void *)(uintptr_t)(user), (void *)(uintptr_t)(stream), (int)(bytes))
void SDL_PauseAudioDevice(int device, int pause_on) { recording_pause(device, pause_on); }
int SDL_GetNumAudioDevices(int capture) { return recording_count(capture); }
const char *SDL_GetAudioDeviceName(int index, int capture) { return recording_name(index, capture); }
void SDL_SemPost(void *semaphore) { recording_post(semaphore); }
#endif

int main(void)
{
#ifdef NC_NATIVE
    nc_bind_import("SDL2.dll", "SDL_PauseAudioDevice", recording_pause);
    nc_bind_import("SDL2.dll", "SDL_GetNumAudioDevices", recording_count);
    nc_bind_import("SDL2.dll", "SDL_GetAudioDeviceName", recording_name);
    nc_bind_import("SDL2.dll", "SDL_SemPost", recording_post);
#endif
    nc_map_image();
    if (!VirtualAlloc(ARENA, 0x1000000, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE)) {
        nc_line("arena reserve failed %lu", GetLastError());
        return 2;
    }
    /* the audio globals, both name tables, the sound record the last name
       slot abuts and the semaphore word go back to their saved image before
       every case */
    nc_save(&dword_140404A6C[0], 44 + 0x80000);
    nc_save(&audio_output_device_count, 4);
    nc_save(&audio_output_name_table, 8);
    nc_save(&audio_capture_device_count, 4);
    nc_save(&audio_capture_name_table, 8);
    nc_save(audio_output_name_slot(0), NAME_SLOTS * NAME_SLOT_BYTES);
    nc_save(audio_capture_name_slot(0), NAME_SLOTS * NAME_SLOT_BYTES);
    nc_save(&audio_sounds[0], 64);
    nc_seed(0xB16B00B5ULL);
    for (int word = 0; word < 0x1000000 / 4; word++) {
        uint32_t bits = (uint32_t)nc_rand();
        memcpy(ARENA + 4 * word, &bits, 4);
    }
    /* every flavor of the two device words and both counts: zero, one, the
       small counts, the +1 oddities, the negative words and both extremes */
    static const uint32_t specials[] = {0x00000000, 0x00000001, 0x00000003, 0x00000040,
                                        0xFFFFFFFF, 0x80000000, 0x7FFFFFFF, 0x00001000};
    static const int byte_counts[] = {0, 1, 2, 3, 4, 8, 4096, 65536, 262144};
    int cases = nc_cases(2000);
    for (int n = 0; n < cases; n++) {
        nc_restore();
        nc_seed(0x5EED0000 + (uint64_t)n);
        uint32_t out_bits = (n % 3 == 0) ? specials[n % 8] : (uint32_t)nc_rand();
        uint32_t cap_bits = (n % 3 == 1) ? specials[(n / 3) % 8] : (uint32_t)nc_rand();
        audio_output_enabled = out_bits;
        audio_capture_enabled = cap_bits;
        scripted_output_count = (n % 5 == 0) ? (int)specials[n % 8] : (int)nc_rand_below(200);
        scripted_capture_count = (n % 5 == 1) ? (int)specials[(n / 5) % 8] : (int)nc_rand_below(200);
        scripted_calls = 0;
        pause_calls = 0;
        post_calls = 0;
        for (int k = 0; k < MAX_CALLS; k++) { last_devices[k] = 0; last_flags[k] = 0; last_sems[k] = 0; }
        pause_devices();
        list_devices();
        /* the callback: one ring holds the mix, the other holds different
           garbage, so a wrong source ring or a missed flip shows in the
           hashes; the semaphore word holds generator garbage */
        audio_output_read_ring = n % 3 == 2 ? 1u : 0u;
        audio_semaphore = (void *)(uintptr_t)nc_rand();
        uint64_t sem_bits = (uint64_t)(uintptr_t)audio_semaphore;
        int bytes = byte_counts[n % 9];
        for (int w = 0; w < bytes / 4 + 2; w++) {
            uint32_t left = (uint32_t)nc_rand(), right = (uint32_t)nc_rand();
            memcpy(audio_output_ring[0] + w, &left, 4);
            memcpy(audio_output_ring[1] + w, &right, 4);
        }
        uint32_t dirty = (uint32_t)nc_rand();
        memcpy(SDL_STREAM, &dirty, 4);
        uint64_t user_bits = nc_rand();
        callback(SDL_STREAM, bytes, user_bits);
        nc_line("case %d out %08x cap %08x calls %llu", n, out_bits, cap_bits,
                (unsigned long long)pause_calls);
        for (int k = 0; k < MAX_CALLS; k++)
            nc_line("  call %d device %08x flag %d", k, last_devices[k], last_flags[k]);
        nc_line("  counts %d %d queries %d", audio_output_device_count,
                audio_capture_device_count, scripted_calls);
        nc_line("  tables %016llx %016llx",
                (unsigned long long)nc_hash(&audio_output_name_table, 16),
                (unsigned long long)nc_hash(&audio_capture_name_table, 16));
        nc_line("  names %016llx %016llx",
                (unsigned long long)nc_hash(audio_output_name_slot(0), NAME_SLOTS * NAME_SLOT_BYTES),
                (unsigned long long)nc_hash(audio_capture_name_slot(0), NAME_SLOTS * NAME_SLOT_BYTES));
        nc_line("  sounds %016llx", (unsigned long long)nc_hash(&audio_sounds[0], 64));
        nc_line("  cb bytes %d read_ring %u posts %llu sem %016llx", bytes,
                audio_output_read_ring, (unsigned long long)post_calls, sem_bits);
        for (int k = 0; k < MAX_CALLS; k++)
            nc_line("  post %d %016llx", k, (unsigned long long)last_sems[k]);
        nc_line("  stream %016llx", (unsigned long long)nc_hash(SDL_STREAM, (size_t)bytes + 4));
        nc_line("  ring0 %016llx", (unsigned long long)nc_hash(audio_output_ring[0], 0x40000));
        nc_line("  ring1 %016llx", (unsigned long long)nc_hash(audio_output_ring[1], 0x40000));
    }
    return 0;
}
