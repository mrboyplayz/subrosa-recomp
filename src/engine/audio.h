#ifndef SR_ENGINE_AUDIO_H
#define SR_ENGINE_AUDIO_H
#include <stddef.h>
#include "memory.h"
#define AUDIO_CAPTURE_SAMPLES 0x40000
#define AUDIO_CHANNEL_CAPACITY 56
#define AUDIO_SOUND_CAPACITY 4096
#define audio_output_enabled SR_GLOBAL(uint32_t, 0x140404A88ULL)
#define audio_capture_enabled SR_GLOBAL(uint32_t, 0x1404C4A98ULL)
#define audio_capture_write_position SR_GLOBAL(uint32_t, 0x1404C4AA4ULL)
#define audio_capture_read_position SR_GLOBAL(uint32_t, 0x1404C4AA8ULL)
#define audio_capture_buffer (&SR_GLOBAL(unsigned char, 0x1404C4AACULL))

typedef struct AudioSound {
    uint32_t loaded;
    int32_t sample_count;
    uint64_t samples;
    union {
        uint64_t unknown_10;
        struct { uint32_t write_position, read_position; };
    };
    float gain;
    uint32_t unknown_1c;
} AudioSound;
typedef struct AudioChannel {
    uint32_t active, unknown_04;
    float gain;
    uint32_t unknown_0c, unknown_10;
    int32_t sound;
    uint32_t unknown_18;
    float gain_a, gain_b, pitch_a, pitch_b;
    uint32_t flags;
    uint8_t unknown_30[0x12C - 0x30];      /* voices 1..7 of the block below */
    uint32_t mix_cursor;                   /* mono mix ring cursor, mask 0x3FFFF */
    float mix_ring[0x40000];               /* per-voice mono mixes the spatializer consumes */
    uint32_t stereo_cursor;                /* spatializer output cursor, mask 0x3FFFF */
    uint8_t unknown_100134[0x110134 - 0x100134];
    float position[3];
    uint8_t unknown_110140[12];
    float source_gain;
    uint32_t unknown_110150, spatialized;
    uint8_t unknown_110158[0x1102F4 - 0x110158];
    uint32_t unknown_1102f4;               /* spatializer interpolation word the twins clear */
    uint8_t unknown_1102f8[0x110300 - 0x1102F8];
} AudioChannel;
/* The eight per-channel voices (the words the play twins write for channel 0's
   first voice are pinned above as unknown_0c .. flags). */
typedef struct AudioVoice {
    uint32_t active;                       /* picked for mixing when nonzero */
    uint32_t state;                        /* set to 2 when playback stops */
    int32_t sound;                         /* index of the played AudioSound */
    float playback_position;               /* sample position in the wave */
    float gain_a;                          /* gain target */
    float gain_b;                          /* interpolated gain */
    float pitch_a;                         /* playback step target */
    float pitch_b;                         /* interpolated playback step */
    uint32_t loop;                         /* flags word: loop when nonzero */
} AudioVoice;
_Static_assert(sizeof(AudioSound) == 32, "sound stride");
_Static_assert(sizeof(AudioChannel) == 0x110300, "channel stride");
_Static_assert(offsetof(AudioChannel,position) == 0x110134, "channel position");
_Static_assert(offsetof(AudioChannel,mix_cursor) == 0x12C, "channel mix cursor");
_Static_assert(offsetof(AudioChannel,stereo_cursor) == 0x100130, "channel stereo cursor");
_Static_assert(offsetof(AudioChannel,unknown_1102f4) == 0x1102F4, "channel spatializer word");
_Static_assert(sizeof(AudioVoice) == 36, "voice stride");
#define audio_sounds (&SR_GLOBAL(AudioSound, 0x144950AB0ULL))
#define audio_channels (&SR_GLOBAL(AudioChannel, 0x140544AB0ULL))
#define audio_voices(emitter) ((AudioVoice *)((unsigned char *)&audio_channels[emitter] + 0xC))

uint32_t audio_capture_available(void); /* 0x140069580 */
uint32_t audio_sound_available(int sound); /* 0x14007D6C0 */
/* Copies byte_count/2 signed 16-bit samples, with at most one ring wrap.
   Caller supplies accessible nonnegative copy extents and a valid cursor.
   Returns the destination of the final copy. 0x14006A380 */
void *audio_capture_write(const void *source, int byte_count);
/* First free channel; UINT32_MAX when output/sample is disabled or full.
   The sample index must be valid when output is enabled. 0x140069FA0 */
uint32_t audio_play_at(int sound, const float position[3], float gain, float pitch, uint32_t flags);
/* Frees the sample buffer and installs a zeroed 1 MB one, marking the
   sound loaded with its full ring length; returns the sound index. 0x14007D610 */
uint32_t audio_allocate_sound_buffer(uint32_t sound, float gain);
/* Rewrites a sound from byte_count bytes of signed 16-bit PCM. 0x140069930 */
void audio_load_pcm16(uint32_t sound, int byte_count, const int16_t *pcm, float gain);
/* Start a sound on a channel (the caller's cursor fields are cleared);
   returns the sound's gain bits when started, the channel otherwise. 0x14006A140 */
int64_t audio_channel_play(int channel, int sound, float gain, float pitch, uint32_t flags);
/* Start a positional (spatialized) sound on a channel. 0x14006A240 */
int64_t audio_channel_play_at(int channel, int sound, const float position[3],
                              float gain, float pitch, uint32_t flags);
/* Mix one voice into the channel's ring for count samples from cursor;
   returns the voice's active flag. 0x14006B4C0 */
uint32_t audio_mix_channel(int channel, int voice, int cursor, int count);
/* Clear and remix one channel for count samples; the spatializer runs after;
   returns what it returns. 0x14006B6F0 */
int64_t audio_mix_emitter(int channel, int count);
#endif
