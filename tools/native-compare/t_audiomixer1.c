// NC_WRAPPERS: 14006B850
/* The mix pass that fills an output ring between callback rings: the clear,
 * the per-channel remix through audio_mix_emitter (whose spatializer at
 * 0x14006A5F0 is not ported: both builds run the original routine at its
 * address, so its work is compared exactly without a stub), the stereo
 * accumulation, the master gain and the ring handover. State below reaches
 * every branch: disabled output, the ring-selector collision that skips the
 * pass, both fill rings, channels on the capacity boundary, ring cursors
 * that collide with the voice words themselves, wrap and stop at the wave
 * end, and NaN gains and pitches wherever they cannot become addresses. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
#include "nc.h"
#include "audio.h"

#define ARENA ((unsigned char *)0x200000000ULL)
#define WAVE ((float *)(ARENA + 0x400000))

#ifdef NC_NATIVE
#define update_mix() ((void (*)(void))NC_ADDR(0x14006B850))()
#elif defined(NC_CLIENT_WRAPPERS)
void sr_audio_update_mix(void);
static void update_mix(void) { sr_audio_update_mix(); }
#else
#define update_mix() audio_mix_output()
#endif

static uint32_t bits_of(float value) { uint32_t bits; memcpy(&bits, &value, 4); return bits; }

static uint32_t word_bits(int flavor)
{
    static const uint32_t specials[] = {0x00000000, 0x80000000, 0x3F800000, 0xBF800000,
                                        0x7F800000, 0xFF800000, 0x7FC00000, 0x33800000};
    if (flavor) return specials[nc_rand_below(8)];
    return (uint32_t)nc_rand();
}

static float number_bits(int flavor)
{
    float value;
    uint32_t bits = word_bits(flavor);
    memcpy(&value, &bits, 4);
    return value;
}

int main(void)
{
    static const int32_t wave_lengths[] = {0, 1, 2, 3, 7, 255, 4096, 8192, 0x10000, -1, INT32_MIN};
    static const int counts[] = {0, 1, 2, 3, 5, 16, 17, 64, 255, 1024, -1, -16};
    static const int raw_cursors[] = {0, 1, 2, 17, 131071, 131070, 0x3FFFF, 0x3FFFE, 0x20000,
                                      0x40000, 0x40001, -1, -2, -7, -10, -13, -58};
    nc_map_image();
    if (!VirtualAlloc(ARENA, 0x800000, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE)) {
        nc_line("arena reserve failed %lu", GetLastError());
        return 2;
    }
    nc_seed(0xB16B00B5ULL);
    for (int word = 0; word < 0x800000 / 4; word++) {
        uint32_t bits = (uint32_t)nc_rand();
        memcpy(ARENA + 4 * word, &bits, 4);
    }
    /* the audio globals and both output rings go back to their saved image
       before every case; the channels are zeroed once and evolve
       deterministically across cases */
    nc_save(&dword_140404A6C[0], 44 + 0x80000);
    nc_save(&audio_master_gain, 4);
    memset(audio_channels, 0, sizeof(AudioChannel) * 64);
    memset((void *)&audio_sounds[0], 0, sizeof(AudioSound) * AUDIO_SOUND_CAPACITY);
    for (int n = 0; n < nc_cases(1000); n++) {
        nc_seed(0x4A00B000 + n);
        nc_restore();
        int mode = n % 11;
        audio_output_read_ring = 0;
        audio_output_write_ring = 1;
        if (mode == 3) audio_output_write_ring = 0;              /* write == read: skipped */
        if (mode == 7) { audio_output_write_ring = 0; audio_output_read_ring = 1; }
        audio_output_enabled = n % 9 ? (uint32_t)nc_rand() | 1u : 0;
        audio_mixed_channels = (uint32_t)nc_rand();              /* garbage: the pass resets it */
        audio_master_gain = nc_float_plain(-2.0f, 2.0f);
        int frames = counts[nc_rand_below(12)];
        audio_output_frames = (uint32_t)frames;
        int mixed_sound = (int)nc_rand_below(4);
        AudioSound *sample = &audio_sounds[mixed_sound];
        uint64_t bits[4];
        for (int k = 0; k < 4; k++) bits[k] = nc_rand();
        memcpy(sample, bits, 32);
        sample->sample_count = wave_lengths[nc_rand_below(11)];
        sample->samples = n % 23 ? (uint64_t)(uintptr_t)WAVE : 0;
        int32_t length = sample->sample_count;
        int active_count = mode == 0 ? 0 : 1 + (int)nc_rand_below(3 + (n % 5 == 0 ? 3 : 0));
        int touched[8];
        for (int k = 0; k < active_count && k < 8; k++) {
            int index = k == active_count - 1 && n % 13 == 3 ? 63 : (int)nc_rand_below(64);
            touched[k] = index;
            AudioChannel *record = &audio_channels[index];
            if (n % 37) memset(record, 0, sizeof(AudioChannel));
            else memcpy(record, ARENA, 0x3000);   /* dirty record: leftovers everywhere */
            record->active = 1;
            record->unknown_04 = n % 9 ? (uint32_t)nc_rand() : (uint32_t)(n / 9 - 2) % 5;
            record->gain = nc_float_plain(0.0f, 1.0f);
            record->mix_cursor = raw_cursors[nc_rand_below(17)];
            record->stereo_cursor = raw_cursors[nc_rand_below(17)];
            record->unknown_18 = word_bits(n % 7 == 3);          /* keep-alive compares this as a float */
            record->unknown_110150 = word_bits(n % 7 == 3);      /* the spatializer's mix position */
            record->unknown_1102f4 = (uint32_t)nc_rand();
            record->spatialized = n % 2;
            record->position[0] = number_bits(n % 8 == 5);
            record->position[1] = number_bits(n % 8 == 5);
            record->position[2] = number_bits(n % 8 == 5);
            for (int v = 0; v < 3; v++)
                ((float *)record->unknown_110140)[v] = number_bits(n % 8 == 5);
            for (int v = 0; v < 8; v++) {
                AudioVoice *voice = &audio_voices(index)[v];
                voice->active = nc_chance(40) ? (uint32_t)nc_rand() | 1u : 0;
                voice->state = (uint32_t)nc_rand();
                voice->sound = n % 40 ? (nc_chance(30) ? mixed_sound : (int32_t)nc_rand_below(0x1005))
                                      : (int32_t)(uint32_t)nc_rand();
                voice->playback_position = n % 13 == 9 && length > 0 ? (float)length
                                      : n % 13 == 4 && length > 0 ? (float)(length - 1)
                                      : length > 0 ? nc_float_plain((float)-(int)nc_rand_below(50), (float)length + 60.0f)
                                      : nc_float_plain(-1000.0f, 1000.0f);
                voice->gain_a = number_bits(n % 6 == 2);
                voice->gain_b = number_bits(n % 6 == 3);
                voice->pitch_a = nc_float_plain(0.25f, 3.0f);    /* special pitches only enter the one-count mix */
                voice->pitch_b = nc_float_plain(0.001f, 4.0f);
                voice->loop = n % 3 == 2 ? (uint32_t)nc_rand() : nc_rand_below(3);
            }
            /* dirty the mono ring span the emitter pass will clear, and the
               stereo ring span the pass will accumulate over */
            if (frames > 0 && frames <= 1024) {
                for (int w = 0; w < frames + 2; w++) {
                    uint32_t word_bits = (uint32_t)nc_rand();
                    memcpy((unsigned char *)&record->mix_ring[0] + 4 * (int64_t)(int32_t)record->mix_cursor + 4 * w,
                           &word_bits, 4);
                }
                for (int w = 0; w < 2 * frames + 2; w++) {
                    uint32_t word_bits = (uint32_t)nc_rand();
                    memcpy((unsigned char *)record->unknown_100134 + 4 * w, &word_bits, 4);
                }
            }
        }
        /* dirty the output ring span the pass will fill */
        if (frames > 0 && frames <= 1024)
            for (int w = 0; w < 2 * frames + 2; w++) {
                uint32_t word_bits = (uint32_t)nc_rand();
                memcpy(audio_output_ring[audio_output_write_ring] + w, &word_bits, 4);
            }
        uint32_t csr = 0x1f80 | ((n % 4) << 13) | ((n / 4 % 2) << 6) | ((n / 8 % 2) << 15);
        nc_set_mxcsr(csr);
        update_mix();
        nc_line("mixer %d op %d frames %d %08x %u %u", n, mode, frames, nc_get_mxcsr(),
                audio_output_write_ring, audio_mixed_channels);
        nc_line("ring0 %016llx", (unsigned long long)nc_hash(audio_output_ring[0], 0x40000));
        nc_line("ring1 %016llx", (unsigned long long)nc_hash(audio_output_ring[1], 0x40000));
        nc_line("sound %016llx", (unsigned long long)nc_hash(&audio_sounds[0], 4 * sizeof(AudioSound)));
        for (int k = 0; k < active_count && k < 8; k++)
            nc_line("channel %d %016llx %08x", touched[k],
                    (unsigned long long)nc_hash(&audio_channels[touched[k]], 0x110300),
                    audio_channels[touched[k]].active);
    }
    return 0;
}
