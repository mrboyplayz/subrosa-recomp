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
    uint8_t unknown_30[0x110134 - 0x30];
    float position[3];
    uint8_t unknown_110140[12];
    float source_gain;
    uint32_t unknown_110150, spatialized;
    uint8_t unknown_110158[0x110300 - 0x110158];
} AudioChannel;
_Static_assert(sizeof(AudioSound) == 32, "sound stride");
_Static_assert(sizeof(AudioChannel) == 0x110300, "channel stride");
_Static_assert(offsetof(AudioChannel,position) == 0x110134, "channel position");
#define audio_sounds (&SR_GLOBAL(AudioSound, 0x144950AB0ULL))
#define audio_channels (&SR_GLOBAL(AudioChannel, 0x140544AB0ULL))

uint32_t audio_capture_available(void); /* 0x140069580 */
uint32_t audio_sound_available(int sound); /* 0x14007D6C0 */
/* Copies byte_count/2 signed 16-bit samples, with at most one ring wrap.
   Caller supplies accessible nonnegative copy extents and a valid cursor.
   Returns the destination of the final copy. 0x14006A380 */
void *audio_capture_write(const void *source, int byte_count);
/* First free channel; UINT32_MAX when output/sample is disabled or full.
   The sample index must be valid when output is enabled. 0x140069FA0 */
uint32_t audio_play_at(int sound, const float position[3], float gain, float pitch, uint32_t flags);
#endif
