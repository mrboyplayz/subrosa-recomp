#include <math.h>
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

/* Rewrites a sound from a WAV file: changes directory to "sound", loads the
 * file, converts 16-bit samples to float, stores the buffer in the sound
 * record, then changes directory back. The sound is only rewritten when the
 * index is in range and the file loads successfully, and the chdir results
 * are all the call returns. 0x1400EE400 */
int64_t audio_load_sound_from_wav(int sound_id, const char *path, float gain)
{
    int64_t result;
    int directory_status;

    directory_status = (int)crt_chdir("sound");
    result = directory_status;
    if ((unsigned int)sound_id <= 0xFFF) {
        AudioSound *record = &audio_sounds[sound_id];
        int converted_sample_count = 0;
        record->loaded = 0;
        void *sr_stream = sr_wave_file(path, "rb");
        sr_wave_spec sr_spec;
        unsigned char *wave_samples;
        unsigned int wave_byte_count;
        result = (int64_t)(uintptr_t)sr_wave_load(sr_stream, 1, &sr_spec, &wave_samples, &wave_byte_count);
        if (result) {
            if (sr_spec.channels == 1) {
                result = (int64_t)(int)sr_spec.freq;
                if (sr_spec.freq > 0) {
                    void *previous_sample_buffer = (void *)(uintptr_t)record->samples;
                    record->loaded = 1;
                    record->gain = gain;
                    /* sample count = (byte_count / 2) * (48000 / freq) */
                    record->sample_count = (int)(float)((float)(wave_byte_count >> 1)
                        * (float)(48000.0 / (float)sr_spec.freq));
                    crt_free(previous_sample_buffer);
                    float source_sample_position = 0.0f;
                    record->samples = (uint64_t)(uintptr_t)crt_malloc(
                        (size_t)(int64_t)(int32_t)((uint32_t)record->sample_count << 2));
                    if (record->sample_count > 0) {
                        int64_t destination_byte_offset = 0;
                        do {
                            ++converted_sample_count;
                            *(float *)((unsigned char *)(uintptr_t)record->samples
                                + destination_byte_offset)
                                = (float)*(int16_t *)(wave_samples
                                    + 2 * (int64_t)(int)source_sample_position)
                                * 0.000030517578f;
                            destination_byte_offset += 4;
                            source_sample_position = fminf(source_sample_position
                                + (float)(1.0 / (float)(48000.0 / (float)sr_spec.freq)),
                                (float)((wave_byte_count >> 1) - 1));
                        } while (converted_sample_count < record->sample_count);
                    }
                    sr_wave_free(wave_samples);
                }
            }
        }
    }
    if (!directory_status)
        /* The original tail-jumps into chdir("..") and returns its result
         * (asm 0x1400EE5D1: jne ret / jmp 0x14024C22C). */
        return crt_chdir("..");
    return result;
}

/* Still recompiled code: whether the straight path from one point to the
   other passes through the level. */
extern int sub_1400DC050(float *from, float *to, int unknown);

/* Where sounds are heard from: the position the camera writes for its view
   (x, y, z). 0x183F7C544 */
#define audio_listener_position (&SR_GLOBAL(float, 0x183F7C544ULL))

/* Plays a sound when the player can hear it: the gain is capped at 1 and
   halved when the source is more than 128 units from the listener or the
   straight path to it passes through the level. The sound plays only when
   its record is loaded. The original leaves its third argument unread; the
   port keeps it for the call. 0x14005ED40 */
int64_t audio_play_at_reach(int sound, float *position, int64_t unused, float gain, float pitch)
{
    float selected = 1.0f;
    float limited = fminf(gain, 1.0f);
    float *listener = audio_listener_position;
    float x = listener[1] - position[1];
    float y = listener[0] - position[0];
    float z = listener[2] - position[2];
    if (sqrtf((x * x + y * y) + z * z) > 128.0f
        || sub_1400DC050(position, listener, 0))
        selected = 0.5f;
    if (audio_sounds[sound].loaded)
        audio_play_at(sound, position, limited * selected, pitch, 0);
    return -1;
}
