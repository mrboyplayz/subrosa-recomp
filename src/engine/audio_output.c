#include "audio.h"

/* The mix pass that fills an output ring between callback rings: clears the
   ring, remixes every active channel through audio_mix_emitter, adds each
   channel's spatialized stereo into the ring, applies the master gain and
   flips the ring selector to hand the result to the output callback. */
void audio_mix_output(void)  /* 0x14006B850 */
{
    if (!audio_output_enabled || audio_output_write_ring == audio_output_read_ring) return;
    int ring = (int)audio_output_write_ring;
    int frames = (int)audio_output_frames;
    if (frames > 0) {
        float *output = audio_output_ring[ring];
        for (int frame = 0; frame < frames; ++frame) {
            output[2 * frame] = 0.0f;
            output[2 * frame + 1] = 0.0f;
        }
    }
    audio_mixed_channels = 0;
    for (int channel = 0; channel < 64; ++channel) {
        AudioChannel *record = &audio_channels[channel];
        if (!record->active) continue;
        audio_mix_emitter(channel, frames);
        /* the channel's stereo ring at 0x100134: the spatializer's
           interleaved output, always written and accumulated from its start */
        const float *stereo = (const float *)record->unknown_100134;
        float *output = audio_output_ring[ring];
        for (int frame = 0; frame < frames; ++frame) {
            output[2 * frame] = stereo[2 * frame] + output[2 * frame];
            output[2 * frame + 1] = stereo[2 * frame + 1] + output[2 * frame + 1];
        }
        ++audio_mixed_channels;
    }
    if (frames > 0) {
        float *output = audio_output_ring[ring];
        for (int frame = 0; frame < frames; ++frame) {
            output[2 * frame] = audio_master_gain * output[2 * frame];
            output[2 * frame + 1] = audio_master_gain * output[2 * frame + 1];
        }
    }
    audio_output_write_ring ^= 1u;
}
