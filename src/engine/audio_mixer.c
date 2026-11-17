#include <string.h>
#include "audio.h"

/* SDL's device pause and the device API: the routines the client binds
   from SDL2.dll. */
extern void SDL_PauseAudioDevice(int device, int pause_on);
extern int SDL_GetNumAudioDevices(int capture);
extern const char *SDL_GetAudioDeviceName(int index, int capture);
extern void SDL_SemPost(void *semaphore);

/* Starts a sound on a channel without a world position. The record's words
   past the active pair are cleared, the first voice takes the sound and the
   caller's mix cursors restart from zero. Returns the played sound's gain
   word, or the unchanged channel when nothing starts. */
int64_t audio_channel_play(int channel, int sound, float gain, float pitch, uint32_t flags)  /* 0x14006A140 */
{
    if (!audio_output_enabled) return channel;
    AudioChannel *record = &audio_channels[channel];
    if (record->active) return channel;
    memset((unsigned char *)record + 4, 0, sizeof(*record) - 4);
    *(uint64_t *)(void *)&record->active = 1;
    record->mix_cursor = 0;
    record->stereo_cursor = 0;
    AudioVoice *voice = &audio_voices(channel)[0];
    voice->gain_a = gain;
    voice->gain_b = gain;
    voice->pitch_a = pitch;
    voice->pitch_b = pitch;
    voice->active = 1;
    voice->sound = sound;
    voice->loop = flags;
    uint32_t source_gain;
    memcpy(&source_gain, &audio_sounds[sound].gain, 4);
    memcpy(&record->source_gain, &source_gain, 4);
    audio_sounds[sound].unknown_10 = 0;
    return source_gain;
}

/* Starts a positional sound on a channel: additionally the record keeps the
   world position and the spatializer words the mixer reads. */
int64_t audio_channel_play_at(int channel, int sound, const float position[3],
                              float gain, float pitch, uint32_t flags)  /* 0x14006A240 */
{
    if (!audio_output_enabled) return channel;
    AudioChannel *record = &audio_channels[channel];
    if (record->active) return channel;
    memset((unsigned char *)record + 4, 0, sizeof(*record) - 4);
    record->gain = gain;
    *(uint64_t *)(void *)&record->active = 1;
    record->mix_cursor = 0;
    record->stereo_cursor = 0;
    AudioVoice *voice = &audio_voices(channel)[0];
    voice->gain_a = gain;
    voice->gain_b = gain;
    voice->pitch_a = pitch;
    voice->pitch_b = pitch;
    voice->active = 1;
    voice->sound = sound;
    voice->loop = flags;
    audio_sounds[sound].unknown_10 = 0;
    record->position[0] = position[0];
    record->position[1] = position[1];
    record->position[2] = position[2];
    uint32_t source_gain;
    memcpy(&source_gain, &audio_sounds[sound].gain, 4);
    memcpy(&record->source_gain, &source_gain, 4);
    record->spatialized = 1;
    record->unknown_1102f4 = 0;
    return source_gain;
}

/* Mixes one voice of a channel into its mono ring: resamples one linearly
   interpolated sample per step from the sound's wave, fading gain and pitch
   toward their targets across the count. Stops and deactivates the voice at
   the wave's end unless it loops. */
uint32_t audio_mix_channel(int channel, int voice, int cursor, int count)  /* 0x14006B4C0 */
{
    AudioChannel *record = &audio_channels[channel];
    AudioVoice *entry = &audio_voices(channel)[voice];
    int32_t sound = entry->sound;
    if ((uint32_t)sound > 0xFFF) return 0;
    AudioSound *sample = &audio_sounds[sound];
    if (!sample->samples) return 0;
    float gain = entry->gain_b;
    if (record->unknown_04 == 1) *(uint32_t *)(void *)&entry->gain_a = 0;
    float gain_target = entry->gain_a;
    float pitch_target = entry->pitch_a;
    float pitch = entry->pitch_b;
    entry->gain_b = gain_target;
    entry->pitch_b = pitch_target;
    /* Native computes the step increments before it tests the count, so their
       divisions' and subtractions' floating-point status lands even when
       nothing mixes. */
    volatile float inverse = 1.0f / (float)count;
    volatile float gain_step = (gain_target - gain) * inverse;
    volatile float pitch_step = (pitch_target - pitch) * inverse;
    for (int mixed = 0; mixed < count; pitch += pitch_step, gain += gain_step, ++mixed) {
        float playback_position = entry->playback_position;
        int32_t sample_count = sample->sample_count;
        int32_t current = 0;
        if ((int32_t)playback_position < sample_count) current = (int32_t)playback_position;
        float sample_fraction = playback_position - (float)current;
        int32_t next = 0;
        if (current + 1 < sample_count) next = current + 1;
        const float *wave = (const float *)(uintptr_t)sample->samples;
        float *cell = record->mix_ring + (int64_t)(int32_t)cursor;
        cursor = (cursor + 1) & 0x3FFFF;
        float mixed_sample = ((1.0f - sample_fraction) * wave[current]
                              + sample_fraction * wave[next]) * gain;
        *cell = mixed_sample + *cell;
        float advanced_position = pitch + entry->playback_position;
        entry->playback_position = advanced_position;
        float sound_length = (float)sample->sample_count;
        if (advanced_position >= sound_length) {
            if (!entry->loop) {
                *(uint32_t *)(void *)&entry->active = 0;
                entry->state = 2;
                break;
            }
            entry->playback_position = advanced_position - sound_length;
        }
    }
    sample->read_position = (int32_t)entry->playback_position;
    return entry->active;
}

/* Per-channel remix pass: clears the ring span, mixes every active voice
   through audio_mix_channel, advances the cursors around the spatializer,
   and releases the channel when its last sound fell quiet. */
int64_t audio_mix_emitter(int channel, int count)  /* 0x14006B6F0 */
{
    /* The spatializer of 0x14006A5F0 is not ported; both builds of the native
       comparison run the original routine at its address. */
    extern int64_t sub_14006A5F0(int channel, int count);
    AudioChannel *record = &audio_channels[channel];
    int32_t cursor = record->mix_cursor;
    if (count > 0) {
        int32_t remaining = count;
        do {
            record->mix_ring[cursor] = 0.0f;
            cursor = (cursor + 1) & 0x3FFFF;
        } while (--remaining);
    }
    int32_t selection_flag = 0;
    for (int index = 0; index < 8; ++index) {
        if (audio_voices(channel)[index].active
            && audio_mix_channel(channel, index, record->mix_cursor, count))
            selection_flag = 1;
    }
    record->mix_cursor = (count + record->mix_cursor) & 0x3FFFF;
    int64_t result = sub_14006A5F0(channel, count);
    record->stereo_cursor = (count + record->stereo_cursor) & 0x3FFFF;
    if (!selection_flag && !(*(float *)(void *)&record->unknown_18 >= *(float *)(void *)&record->unknown_110150))
        record->active = 0;
    if (record->unknown_04 == 1)
        record->active = 0;
    return result;
}

/* Unpauses both audio devices: each device word is read as signed and the
   device is paused (resume, flag 0) only when its word is positive, capture
   first, then output. The second call is the original's tail call through
   its import (0x14006A5E1 falls to 0x140198E9F, SDL_PauseAudioDevice). */
void audio_pause_devices(void)  /* 0x14006A5C0 */
{
    if ((int32_t)audio_capture_enabled > 0)
        SDL_PauseAudioDevice((int)audio_capture_enabled, 0);
    if ((int32_t)audio_output_enabled > 0)
        SDL_PauseAudioDevice((int)audio_output_enabled, 0);
}

/* Enumerates the audio devices into the name tables the device pickers read:
   the count words drop below zero to zero, every device's name is copied
   with its terminator into a 512-byte slot, and both count words keep the
   odd +1 the original leaves (the name of the not-opened device slot). The
   caller counts through the tables with the stored counts, so the copy loop
   must match the original's re-reads of them. */
void audio_list_devices(void)  /* 0x140069440 */
{
    int output_count = SDL_GetNumAudioDevices(0);
    if (output_count < 0) output_count = 0;
    audio_output_name_table = (uint64_t)0x746C7561666544ULL;  /* "Default" */
    audio_output_device_count = output_count;
    for (int index = 0; index < (int32_t)audio_output_device_count; index++) {
        const char *name = SDL_GetAudioDeviceName(index, 0);
        char *slot = audio_output_name_slot(index);
        char copied;
        do {
            copied = *name;
            *slot++ = copied;
        } while (copied);
    }
    audio_output_device_count = (int32_t)audio_output_device_count + 1;

    int capture_count = SDL_GetNumAudioDevices(1);
    if (capture_count < 0) capture_count = 0;
    audio_capture_name_table = (uint64_t)0x746C7561666544ULL;  /* "Default" */
    audio_capture_device_count = capture_count;
    for (int index = 0; index < (int32_t)audio_capture_device_count; index++) {
        const char *name = SDL_GetAudioDeviceName(index, 1);
        char *slot = audio_capture_name_slot(index);
        char copied;
        do {
            copied = *name;
            *slot++ = copied;
        } while (copied);
    }
    audio_capture_device_count = (int32_t)audio_capture_device_count + 1;
}

/* The SDL output callback: copies byte_count bytes of the stereo mix ring
   the last pass filled into SDL's stream, hands the ring back by flipping
   the ring selector, and posts the semaphore the mixer thread waits on.
   The original is just the copy, the flip and the post (0x140069439 tails
   into SDL_SemPost at 0x140198E69); the diagnostic words the debug console
   prints are not touched here. */
void audio_output_callback(void *userdata, void *output, int byte_count)  /* 0x140069400 */
{
    const float *mixed = audio_output_ring[audio_output_read_ring];
    (void)userdata;
    memcpy(output, mixed, (size_t)byte_count);
    audio_output_read_ring ^= 1u;
    SDL_SemPost(audio_semaphore);
}

