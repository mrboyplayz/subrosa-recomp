#include <string.h>
#include "audio.h"
#include "crt.h"
#include "arith.h"

uint32_t audio_capture_available(void)
{
    if (!audio_capture_enabled) return 0;
    int32_t difference = subtract_int((int32_t)audio_capture_write_position,
                                       (int32_t)audio_capture_read_position);
    return difference >= -131072 ? (uint32_t)difference : (uint32_t)difference + AUDIO_CAPTURE_SAMPLES;
}

uint32_t audio_sound_available(int sound)
{
    const AudioSound *sample = &audio_sounds[sound];
    int32_t difference = subtract_int((int32_t)sample->write_position, (int32_t)sample->read_position);
    if (difference >= sample->sample_count / -2) return (uint32_t)difference;
    return sample->write_position + (uint32_t)sample->sample_count - sample->read_position;
}

void *audio_capture_write(const void *source, int byte_count)
{
    uint32_t position = audio_capture_write_position;
    uint32_t first = 0;
    int32_t samples = byte_count / 2;
    if ((int32_t)(position + (uint32_t)samples) > AUDIO_CAPTURE_SAMPLES) {
        first = AUDIO_CAPTURE_SAMPLES - position;
        memmove(audio_capture_buffer + 2 * (int64_t)(int32_t)position, source, (size_t)first * 2);
        samples = subtract_int(samples, (int32_t)first);
        position = 0;
        audio_capture_write_position = 0;
    }
    void *out = audio_capture_buffer + 2 * (int64_t)(int32_t)position;
    memmove(out, (const unsigned char *)source + 2 * (int64_t)(int32_t)first, (size_t)samples * 2);
    audio_capture_write_position = ((uint32_t)samples + audio_capture_write_position) & (AUDIO_CAPTURE_SAMPLES - 1);
    return out;
}

uint32_t audio_play_at(int sound, const float position[3], float gain, float pitch, uint32_t flags)
{
    if (!audio_output_enabled || !audio_sounds[sound].loaded) return UINT32_MAX;
    uint32_t index = 0;
    while (audio_channels[index].active)
        if (++index >= AUDIO_CHANNEL_CAPACITY) return UINT32_MAX;
    AudioChannel *channel = &audio_channels[index];
    memset((unsigned char *)channel + 4, 0, sizeof(*channel) - 4);
    channel->gain = gain;
    channel->active = 1;
    channel->flags = flags;
    channel->gain_a = gain; channel->gain_b = gain;
    channel->pitch_a = pitch; channel->pitch_b = pitch;
    channel->unknown_0c = 1;
    channel->sound = sound;
    audio_sounds[sound].unknown_10 = 0;
    for (int k = 0; k < 3; ++k) {
        uint32_t word;
        memcpy(&word, position + k, 4);
        memcpy(channel->position + k, &word, 4);
    }
    memcpy(&channel->source_gain, &audio_sounds[sound].gain, 4);
    channel->spatialized = 1;
    return index;
}

uint32_t audio_allocate_sound_buffer(uint32_t sound, float gain)  /* 0x14007D610 */
{
    AudioSound *record = &audio_sounds[0] + (int64_t)(int32_t)sound;
    void *previous = (void *)(uintptr_t)record->samples;
    record->gain = gain;
    record->loaded = 1;
    record->sample_count = 0x40000;  /* a full 1 MB ring, 4 bytes per sample */
    crt_free(previous);
    void *buffer = (void *)(uintptr_t)crt_malloc(0x100000);
    record->samples = (uintptr_t)buffer;
    memset(buffer, 0, 0x100000);
    record->unknown_10 = 0;  /* both ring cursors */
    return sound;
}

void audio_load_pcm16(uint32_t sound, int byte_count, const int16_t *pcm, float gain)  /* 0x140069930 */
{
    if (sound > 0xFFF) return;
    AudioSound *record = &audio_sounds[sound];
    void *previous = (void *)(uintptr_t)record->samples;
    record->gain = gain;
    record->loaded = 1;
    record->sample_count = byte_count / 2;
    crt_free(previous);
    record->samples =
        (uintptr_t)crt_malloc((int32_t)((uint32_t)record->sample_count << 2));
    int32_t converted = 0;
    int64_t byte_offset = 0;
    while (converted < record->sample_count) {
        int32_t sample = *pcm++;
        ++converted;
        byte_offset += 4;
        *(float *)((unsigned char *)(uintptr_t)record->samples + byte_offset - 4)
            = (float)sample * 0.000030517578125f;
    }
}
