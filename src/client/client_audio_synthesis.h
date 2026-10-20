#ifndef SR_CLIENT_AUDIO_SYNTHESIS_H
#define SR_CLIENT_AUDIO_SYNTHESIS_H

/* Runtime sound IDs and the shared signed-16-bit waveform workspace.
   Preserve the recovered storage aliases and their exact pointer views. */
#define audio_synth_keypad_first_id       g_183E9366C
#define audio_synth_keypad_last_id        item_event_ring
#define audio_synth_filtered_first_id     g_183E936D8
#define audio_synth_feedback_modulated_id g_183E936DC
#define audio_synth_harmonic_id           g_183E936E0
#define audio_synth_filtered_last_id      g_183E936E4
#define audio_synth_pcm_storage           g_151069740
#define audio_synth_pcm_limit             g_151089740
#define audio_synth_gain_vector_begin     g_151069750
#define audio_synth_gain_vector_end       g_151089750

#endif
