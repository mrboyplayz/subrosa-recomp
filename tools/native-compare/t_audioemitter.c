// NC_WRAPPERS: 14006A140 14006A240 14006B4C0 14006B6F0
/* The channel play twins, the per-voice mixer and the per-channel emitter
 * pass. The spatializer at 0x14006A5F0 is not ported: both builds run the
 * original routine at its address, so its work is compared exactly without a
 * stub. State below was chosen to reach every branch: skipped and played
 * starts, guarded and mixing voices, ring cursors that collide with the
 * voice words themselves, wrap and stop at the wave end, and NaN gains and
 * pitches wherever they cannot become addresses. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>
#include "nc.h"
#include "audio.h"

#define ARENA ((unsigned char *)0x200000000ULL)
#define WAVE ((float *)(ARENA + 0x400000))

#ifdef NC_NATIVE
#define play(c,s,g,p,f) ((uint64_t (*)(int,int,float,float,uint32_t))NC_ADDR(0x14006A140))(c,s,g,p,f)
#define play_at(c,s,pos,g,p,f) ((uint64_t (*)(int,int,const float *,float,float,uint32_t))NC_ADDR(0x14006A240))(c,s,pos,g,p,f)
#define mix_channel(c,v,cur,cnt) ((uint64_t (*)(int,int,int,int))NC_ADDR(0x14006B4C0))(c,v,cur,cnt)
#define mix_emitter(c,cnt) ((uint64_t (*)(int,int))NC_ADDR(0x14006B6F0))(c,cnt)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_audio_channel_play(int,int,float,float,unsigned int);
long long sr_audio_channel_play_at(int,int,unsigned int *,float,unsigned int,unsigned int);
long long sr_audio_mix_channel(int,int,int,int);
long long sr_audio_mix_emitter(int,int);
static uint64_t play(int c,int s,float g,float p,uint32_t f){return sr_audio_channel_play(c,s,g,p,f);}
static uint64_t play_at_impl(int c,int s,const float *pos,float g,uint32_t pbits,uint32_t f){return sr_audio_channel_play_at(c,s,(unsigned int *)pos,g,pbits,f);}
static uint64_t mix_channel(int c,int v,int cur,int cnt){return sr_audio_mix_channel(c,v,cur,cnt);}
static uint64_t mix_emitter(int c,int cnt){return sr_audio_mix_emitter(c,cnt);}
#define play_at(c,s,pos,g,p,f) play_at_impl(c,s,pos,g,bits_of(p),f)
#else
#define play audio_channel_play
#define play_at(c,s,pos,g,p,f) audio_channel_play_at(c,s,pos,g,p,f)
#define mix_channel audio_mix_channel
#define mix_emitter audio_mix_emitter
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
    static const int32_t safe_cursors[] = {0, 1, 2, 17, 131071, 131070, 0x3FFFF, 0x3FFFE, 0x20000};
    static const int32_t raw_cursors[] = {0, 1, 2, 17, 131071, 131070, 0x3FFFF, 0x40000, 0x40001,
                                          -1, -2, -7, -10, -13, -58, -0x4000, -16384};
    static const int counts[] = {0, 1, 2, 3, 5, 16, 17, 64, 255, 1024, -1, -16};
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
    memset(&audio_channels[0], 0, sizeof(AudioChannel) * 64);   /* not n%37 cases: rows stay dirty */
    memset((void *)&audio_sounds[0], 0, sizeof(AudioSound) * AUDIO_SOUND_CAPACITY);
    for (int n = 0; n < nc_cases(2000); n++) {
        nc_seed(0x40000000 + n);
        int channel = n % 11 == 0 ? 63 : n % 11 == 5 ? 0 : (int)nc_rand_below(64);
        AudioChannel *record = &audio_channels[channel];
        if (n % 37) memset(record, 0, sizeof(AudioChannel));
        else memcpy(record, WAVE, 0x3000);   /* dirty record: leftovers everywhere */
        audio_output_enabled = n % 17;
        record->active = nc_chance(25) ? (uint32_t)nc_rand() | 1u : 0;
        record->unknown_04 = n % 9 ? (uint32_t)nc_rand() : (uint32_t)(n / 9 - 2) % 5;
        record->mix_cursor = safe_cursors[nc_rand_below(9)];
        record->stereo_cursor = safe_cursors[nc_rand_below(9)];
        record->unknown_18 = word_bits(n % 7 == 3);             /* keep-alive compares this as a float */
        record->unknown_110150 = word_bits(n % 7 == 3);
        record->unknown_1102f4 = (uint32_t)nc_rand();
        record->spatialized = n % 2;
        int mixed_sound = (int)nc_rand_below(4);
        AudioSound *sample = &audio_sounds[mixed_sound];
        uint64_t bits[4];
        for (int k = 0; k < 4; k++) bits[k] = nc_rand();
        memcpy(sample, bits, 32);
        sample->sample_count = wave_lengths[nc_rand_below(11)];
        sample->samples = n % 23 ? (uint64_t)(uintptr_t)WAVE : 0;
        int32_t length = sample->sample_count;
        for (int index = 0; index < 8; index++) {
            AudioVoice *voice = &audio_voices(channel)[index];
            voice->active = n % 4 == 0 && index == 3 ? (uint32_t)nc_rand() : nc_chance(40);
            voice->state = (uint32_t)nc_rand();
            voice->sound = n % 40 ? (nc_chance(30) ? mixed_sound : (int32_t)nc_rand_below(0x1005))
                                  : (int32_t)(uint32_t)nc_rand();
            voice->playback_position = n % 13 == 9 && length > 0 ? (float)length
                                  : n % 13 == 4 && length > 0 ? (float)(length - 1)
                                  : length > 0 ? nc_float_plain((float)-(int)nc_rand_below(50), (float)length + 60.0f)
                                  : nc_float_plain(-1000.0f, 1000.0f);
            voice->gain_a = number_bits(n % 6 == 2);
            voice->gain_b = number_bits(n % 6 == 3);
            voice->pitch_a = nc_float_plain(0.25f, 3.0f);   /* special pitches only enter the one-count mix */
            voice->pitch_b = nc_float_plain(0.001f, 4.0f);
            voice->loop = n % 3 == 2 ? (uint32_t)nc_rand() : nc_rand_below(3);
        }
        /* dirty the ring span the emitter pass will clear */
        int emitter_count = counts[nc_rand_below(12)];
        if (n % 2 == 1 && emitter_count > 0 && emitter_count <= 1024)
            for (int k = 0; k < emitter_count + 2; k++)
                memcpy((unsigned char *)&record->mix_ring[0] + 4 * (int64_t)(int32_t)record->mix_cursor + 4 * k,
                       &bits[0], 4);
        int op = n % 6;
        uint64_t result = 0;
        uint32_t csr = 0x1f80 | ((n % 4) << 13) | ((n / 4 % 2) << 6) | ((n / 8 % 2) << 15);
        nc_set_mxcsr(csr);
        if (op == 0) {
            int sound = (int)nc_rand_below(0x2000);
            float gain = number_bits(n % 5 == 1);
            float pitch = nc_float_plain(0.01f, 8.0f);
            uint32_t flags = nc_rand();
            /* the original leaves RAX alone when nothing starts: its value is
               not part of the observed behavior, so do not print it */
            if (audio_output_enabled && !record->active) result = play(channel, sound, gain, pitch, flags);
            else play(channel, sound, gain, pitch, flags);
        }
        if (op == 1 || op == 4) {
            int sound = (int)nc_rand_below(0x2000);
            float position[3];
            uint32_t words[3] = {word_bits(0), word_bits(0), word_bits(0)};
            memcpy(position, words, 12);
            const float *input = position;
            if (n % 11 == 2) input = &record->position[1];
            else if (n % 11 == 3) input = &record->source_gain;
            else if (n % 11 == 4) input = &audio_voices(channel)[5].playback_position;
            else if (n % 11 == 5) input = &audio_voices(channel)[7].gain_b;
            else if (n % 11 == 6) input = (const float *)&sample->gain;
            else if (n % 11 == 7 && !audio_output_enabled) input = NULL;
            float gain = number_bits(n % 5 == 2);
            float pitch = nc_float_plain(0.0f, 6.0f);
            uint32_t flags = nc_rand();
            if (audio_output_enabled && !record->active) result = play_at(channel, sound, input, gain, pitch, flags);
            else play_at(channel, sound, input, gain, pitch, flags);
        }
        if (op == 2) {
            int voice = (int)nc_rand_below(8);
            int cursor = raw_cursors[nc_rand_below(16)];
            int count = counts[nc_rand_below(12)];
            if (n % 50 == 0) {   /* one step: NaN pitch reaches the wrap compare, and the
                                    ring write lands on the mixed voice's own position word */
                if (!sample->samples) sample->samples = (uint64_t)(uintptr_t)WAVE;
                AudioVoice *focused = &audio_voices(channel)[6];
                focused->active = 1;
                focused->sound = mixed_sound;
                focused->playback_position = length > 0 ? (float)(length - 1) : 1.0f;
                focused->pitch_a = number_bits(1);
                focused->pitch_b = number_bits(1);
                focused->loop = (uint32_t)(n / 50 & 1);
                voice = 6;
                cursor = -16;   /* the ring write lands on voice 6's own position word */
                count = 1;
            }
            result = mix_channel(channel, voice, cursor, count);
        }
        if (op == 3 || op == 4 || op == 5) {
            if (op == 5) result = play(channel, (int)nc_rand_below(4), number_bits(0), nc_float_plain(0.25f, 3.0f), nc_rand());
            int count = counts[nc_rand_below(9)];
            if (op == 4) count = emitter_count;
            uint64_t mixed = mix_emitter(channel, count);
            nc_line("emitted %d %016llx", n, (unsigned long long)mixed);
            if (op == 5) result = mixed;
        }
        nc_line("mixer %d op %d channel %d %016llx %08x %u %u", n, op, channel,
                (unsigned long long)result, nc_get_mxcsr(),
                record->mix_cursor, record->stereo_cursor);
        nc_line("record %016llx", (unsigned long long)nc_hash(record, 0x110300));
        nc_line("sound %016llx", (unsigned long long)nc_hash(&audio_sounds[0], 4 * sizeof(AudioSound)));
        nc_line("scratch %016llx", (unsigned long long)nc_hash(&dword_140404A6C[18215641], 68 * 4));
        for (int index = 0; index < 8; index++) {
            AudioVoice *voice = &audio_voices(channel)[index];
            nc_line("voice %d %08x %08x %u %08x %08x %08x", index, voice->active, voice->state,
                    (unsigned)sample->read_position, bits_of(voice->playback_position),
                    bits_of(voice->gain_b), bits_of(voice->pitch_b));
        }
    }
    return 0;
}
