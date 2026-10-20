#include "shared_client.h"
#include "client_audio_synthesis.h"

//----- (0000000140065AE0) ----------------------------------------------------
void sr_audio_generate_synth_sound(signed int sound_id, float sound_gain)
{
  /* The filter state continues from the main pass into the loop prefix. */
  float filter_stage1_state = 0.0;
  if ( sound_id >= (int)audio_synth_keypad_first_id && sound_id <= (int)audio_synth_keypad_last_id )
  {
    /* DTMF row/column oscillators; index 10 uses the 480/620 Hz pair. */
    float tone_envelope = 1.0;
    unsigned int tone_sample_count = 0x4000;
    float high_tone_phase = 0.0;
    if ( sound_id == audio_synth_keypad_last_id )
      tone_sample_count = 22050;
    float low_tone_phase = 0.0;
    float high_tone_frequency = 0.0;
    unsigned int keypad_digit = sound_id - audio_synth_keypad_first_id;
    float low_tone_frequency = 0.0;
    if ( sound_id - audio_synth_keypad_first_id <= 7 )
    {
      int column_1209_mask = 146;
      if ( _bittest(&column_1209_mask, keypad_digit) )
        high_tone_frequency = 1209.0;
    }
    if ( keypad_digit <= 8 )
    {
      int column_1336_mask = 293;
      if ( _bittest(&column_1336_mask, keypad_digit) )
        high_tone_frequency = 1336.0;
    }
    if ( keypad_digit <= 9 )
    {
      int column_1477_mask = 584;
      if ( _bittest(&column_1477_mask, keypad_digit) )
        high_tone_frequency = 1477.0;
    }
    if ( keypad_digit - 1 <= 2 )
      low_tone_frequency = 697.0;
    if ( keypad_digit - 4 <= 2 )
      low_tone_frequency = 770.0;
    if ( keypad_digit - 7 <= 2 )
      low_tone_frequency = 852.0;
    if ( keypad_digit )
    {
      if ( keypad_digit == 10 )
      {
        high_tone_frequency = 480.0;
        low_tone_frequency = 620.0;
      }
    }
    else
    {
      low_tone_frequency = 941.0;
    }
    unsigned int tone_sample_index = 0;
    float high_tone_phase_step = (float)(high_tone_frequency + high_tone_frequency) * 0.00006544984694979166;
    __int64 tone_write_index = 0;
    float low_tone_phase_step = (float)(low_tone_frequency + low_tone_frequency) * 0.00006544984694979166;
    float cached_low_tone_step = low_tone_phase_step;
    do
    {
      double high_tone_pcm_sample = (double)(__int16)(int)(sin(high_tone_phase) * tone_envelope * 8192.0);
      double low_tone_sine = sin(low_tone_phase);
      high_tone_phase = high_tone_phase + high_tone_phase_step;
      low_tone_phase = low_tone_phase + cached_low_tone_step;
      *((_WORD *)&audio_synth_pcm_storage + tone_write_index) = (int)(high_tone_pcm_sample + low_tone_sine * tone_envelope * 8192.0);
      if ( tone_sample_index >= tone_sample_count - 32 )
        tone_envelope = tone_envelope * 0.89999998;
      ++tone_sample_index;
      ++tone_write_index;
    }
    while ( tone_write_index < tone_sample_count );
    sr_audio_load_pcm16(sound_id, tone_sample_count, (__int16 *)&audio_synth_pcm_storage, sound_gain);
  }
  if ( sound_id >= (int)audio_synth_filtered_first_id && sound_id <= (int)audio_synth_filtered_last_id )
  {
    /* Sawtooth source, with an additional harmonic for one sound ID. */
    unsigned int harmonic_sound_id = audio_synth_harmonic_id;
    float saw_phase = 0.0;
    float saw_phase_step = 0.0009765625;
    if ( sound_id == audio_synth_harmonic_id )
      saw_phase_step = 0.001953125;
    unsigned int *saw_sample_cursor = &audio_synth_pcm_storage;
    __int64 saw_samples_remaining = 0x10000;
    do
    {
      __m128d saw_phase_lanes = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
      SR_VEC_LANES(128, saw_phase_lanes, f64)[0] = saw_phase;
      int saw_phase_integer = (int)saw_phase;
      double saw_phase_floor = saw_phase;
      if ( (double)saw_phase_integer != saw_phase )
        saw_phase_floor = (double)(saw_phase_integer - (_mm_movemask_pd(_mm_unpacklo_pd(saw_phase_lanes, saw_phase_lanes)) & 1));
      int saw_pcm_sample = (int)(fabs(SR_VEC_LANES(128, saw_phase_lanes, f64)[0] - saw_phase_floor) * 16384.0 - 8192.0);
      *(_WORD *)saw_sample_cursor = saw_pcm_sample;
      if ( sound_id == harmonic_sound_id )
      {
        __m128d harmonic_phase_lanes = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
        SR_VEC_LANES(128, harmonic_phase_lanes, f64)[0] = (float)(saw_phase * 1.5);
        double harmonic_phase_floor = SR_VEC_LANES(128, harmonic_phase_lanes, f64)[0];
        if ( (double)(int)SR_VEC_LANES(128, harmonic_phase_lanes, f64)[0] != SR_VEC_LANES(128, harmonic_phase_lanes, f64)[0] )
          harmonic_phase_floor = (double)((int)SR_VEC_LANES(128, harmonic_phase_lanes, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(harmonic_phase_lanes, harmonic_phase_lanes)) & 1));
        *(_WORD *)saw_sample_cursor = (int)(fabs(SR_VEC_LANES(128, harmonic_phase_lanes, f64)[0] - harmonic_phase_floor) * 8192.0 + (double)(__int16)saw_pcm_sample - 4096.0);
      }
      saw_sample_cursor = (unsigned int *)((char *)saw_sample_cursor + 2);
      saw_phase = saw_phase + saw_phase_step;
      --saw_samples_remaining;
    }
    while ( saw_samples_remaining );
    float feedback_gain = 4.0;
    float filter_stage2_state = 0.0;
    float filter_stage3_state = 0.0;
    float filter_output_state = 0.0;
    if ( sound_id == harmonic_sound_id )
      feedback_gain = 1.0;
    unsigned int modulated_feedback_sound_id = audio_synth_feedback_modulated_id;
    if ( sound_id == audio_synth_feedback_modulated_id )
      feedback_gain = 0.125;
    _WORD * gain_sample_cursor = (_WORD *)&audio_synth_pcm_storage + 1;
    int prefix_sample_index = 2;
    int main_sample_index = 2;
    /* Retain the original eight-sample unroll and its feedback rounding. */
    __int16 *main_sample_cursor = (__int16 *)&audio_synth_pcm_storage + 1;
    do
    {
      if ( sound_id == modulated_feedback_sound_id )
      {
        int main_noise_seed_0 = ((int)(float)((float)(main_sample_index - 2) * 0.00390625) << 13) ^ (int)(float)((float)(main_sample_index - 2) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * main_noise_seed_0 * main_noise_seed_0 + 789221) * (15731 * main_noise_seed_0 * main_noise_seed_0 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float main_filter_stage1_0 = (float)((float)((float)((float)((float)*(main_sample_cursor - 1) * 0.000030517578f) - (float)(filter_output_state * feedback_gain)) - filter_stage1_state) * 0.025f)
          + filter_stage1_state;
      float main_filter_stage2_0 = (float)((float)(main_filter_stage1_0 - filter_stage2_state) * 0.025f) + filter_stage2_state;
      float main_filter_stage3_0 = (float)((float)(main_filter_stage2_0 - filter_stage3_state) * 0.025f) + filter_stage3_state;
      float main_filter_output_0 = (float)((float)((float)(main_filter_stage3_0 - filter_output_state) * 0.025f) + filter_output_state)
          - (float)((float)((float)((float)((float)(main_filter_stage3_0 - filter_output_state) * 0.025f) + filter_output_state)
                          * (float)((float)((float)(main_filter_stage3_0 - filter_output_state) * 0.025f) + filter_output_state))
                  * (float)((float)((float)((float)(main_filter_stage3_0 - filter_output_state) * 0.025f) + filter_output_state) * 0.16666667f));
      if ( main_sample_index - 2 >= 0x4000 )
        *(main_sample_cursor - 1) = (int)(float)(main_filter_output_0 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int main_noise_seed_1 = ((int)(float)((float)(main_sample_index - 1) * 0.00390625) << 13) ^ (int)(float)((float)(main_sample_index - 1) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * main_noise_seed_1 * main_noise_seed_1 + 789221) * (15731 * main_noise_seed_1 * main_noise_seed_1 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float main_filter_stage1_1 = (float)((float)((float)((float)((float)*main_sample_cursor * 0.000030517578f) - (float)(main_filter_output_0 * feedback_gain)) - main_filter_stage1_0) * 0.025f) + main_filter_stage1_0;
      float main_filter_stage2_1 = (float)((float)(main_filter_stage1_1 - main_filter_stage2_0) * 0.025f) + main_filter_stage2_0;
      float main_filter_stage3_1 = (float)((float)(main_filter_stage2_1 - main_filter_stage3_0) * 0.025f) + main_filter_stage3_0;
      float main_filter_output_1 = (float)((float)((float)(main_filter_stage3_1 - main_filter_output_0) * 0.025f) + main_filter_output_0)
          - (float)((float)((float)((float)((float)(main_filter_stage3_1 - main_filter_output_0) * 0.025f) + main_filter_output_0)
                          * (float)((float)((float)(main_filter_stage3_1 - main_filter_output_0) * 0.025f) + main_filter_output_0))
                  * (float)((float)((float)((float)(main_filter_stage3_1 - main_filter_output_0) * 0.025f) + main_filter_output_0) * 0.16666667f));
      if ( main_sample_index > 0x4000 )
        *main_sample_cursor = (int)(float)(main_filter_output_1 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int main_noise_seed_2 = ((int)(float)((float)main_sample_index * 0.00390625) << 13) ^ (int)(float)((float)main_sample_index * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * main_noise_seed_2 * main_noise_seed_2 + 789221) * (15731 * main_noise_seed_2 * main_noise_seed_2 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float main_filter_stage1_2 = (float)((float)((float)((float)((float)main_sample_cursor[1] * 0.000030517578f) - (float)(main_filter_output_1 * feedback_gain)) - main_filter_stage1_1) * 0.025f) + main_filter_stage1_1;
      float main_filter_stage2_2 = (float)((float)(main_filter_stage1_2 - main_filter_stage2_1) * 0.025f) + main_filter_stage2_1;
      float main_filter_stage3_2 = (float)((float)(main_filter_stage2_2 - main_filter_stage3_1) * 0.025f) + main_filter_stage3_1;
      float main_filter_output_2 = (float)((float)((float)(main_filter_stage3_2 - main_filter_output_1) * 0.025f) + main_filter_output_1)
          - (float)((float)((float)((float)((float)(main_filter_stage3_2 - main_filter_output_1) * 0.025f) + main_filter_output_1)
                          * (float)((float)((float)(main_filter_stage3_2 - main_filter_output_1) * 0.025f) + main_filter_output_1))
                  * (float)((float)((float)((float)(main_filter_stage3_2 - main_filter_output_1) * 0.025f) + main_filter_output_1) * 0.16666667f));
      if ( main_sample_index >= 0x4000 )
        main_sample_cursor[1] = (int)(float)(main_filter_output_2 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int main_noise_seed_3 = ((int)(float)((float)(main_sample_index + 1) * 0.00390625) << 13) ^ (int)(float)((float)(main_sample_index + 1) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * main_noise_seed_3 * main_noise_seed_3 + 789221) * (15731 * main_noise_seed_3 * main_noise_seed_3 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float main_filter_stage1_3 = (float)((float)((float)((float)((float)main_sample_cursor[2] * 0.000030517578f) - (float)(main_filter_output_2 * feedback_gain)) - main_filter_stage1_2) * 0.025f) + main_filter_stage1_2;
      float main_filter_stage2_3 = (float)((float)(main_filter_stage1_3 - main_filter_stage2_2) * 0.025f) + main_filter_stage2_2;
      float main_filter_stage3_3 = (float)((float)(main_filter_stage2_3 - main_filter_stage3_2) * 0.025f) + main_filter_stage3_2;
      float main_filter_output_3 = (float)((float)((float)(main_filter_stage3_3 - main_filter_output_2) * 0.025f) + main_filter_output_2)
          - (float)((float)((float)((float)((float)(main_filter_stage3_3 - main_filter_output_2) * 0.025f) + main_filter_output_2)
                          * (float)((float)((float)(main_filter_stage3_3 - main_filter_output_2) * 0.025f) + main_filter_output_2))
                  * (float)((float)((float)((float)(main_filter_stage3_3 - main_filter_output_2) * 0.025f) + main_filter_output_2) * 0.16666667f));
      if ( main_sample_index + 1 >= 0x4000 )
        main_sample_cursor[2] = (int)(float)(main_filter_output_3 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int main_noise_seed_4 = ((int)(float)((float)(main_sample_index + 2) * 0.00390625) << 13) ^ (int)(float)((float)(main_sample_index + 2) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * main_noise_seed_4 * main_noise_seed_4 + 789221) * (15731 * main_noise_seed_4 * main_noise_seed_4 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float main_filter_stage1_4 = (float)((float)((float)((float)((float)main_sample_cursor[3] * 0.000030517578f) - (float)(main_filter_output_3 * feedback_gain)) - main_filter_stage1_3) * 0.025f) + main_filter_stage1_3;
      float main_filter_stage2_4 = (float)((float)(main_filter_stage1_4 - main_filter_stage2_3) * 0.025f) + main_filter_stage2_3;
      float main_filter_stage3_4 = (float)((float)(main_filter_stage2_4 - main_filter_stage3_3) * 0.025f) + main_filter_stage3_3;
      float main_filter_output_4 = (float)((float)((float)(main_filter_stage3_4 - main_filter_output_3) * 0.025f) + main_filter_output_3)
          - (float)((float)((float)((float)((float)(main_filter_stage3_4 - main_filter_output_3) * 0.025f) + main_filter_output_3)
                          * (float)((float)((float)(main_filter_stage3_4 - main_filter_output_3) * 0.025f) + main_filter_output_3))
                  * (float)((float)((float)((float)(main_filter_stage3_4 - main_filter_output_3) * 0.025f) + main_filter_output_3) * 0.16666667f));
      if ( main_sample_index + 2 >= 0x4000 )
        main_sample_cursor[3] = (int)(float)(main_filter_output_4 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int main_noise_seed_5 = ((int)(float)((float)(main_sample_index + 3) * 0.00390625) << 13) ^ (int)(float)((float)(main_sample_index + 3) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * main_noise_seed_5 * main_noise_seed_5 + 789221) * (15731 * main_noise_seed_5 * main_noise_seed_5 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float main_filter_stage1_5 = (float)((float)((float)((float)((float)main_sample_cursor[4] * 0.000030517578f) - (float)(main_filter_output_4 * feedback_gain)) - main_filter_stage1_4) * 0.025f) + main_filter_stage1_4;
      float main_filter_stage2_5 = (float)((float)(main_filter_stage1_5 - main_filter_stage2_4) * 0.025f) + main_filter_stage2_4;
      float main_unsaturated_output_5 = (float)((float)((float)((float)((float)(main_filter_stage2_5 - main_filter_stage3_4) * 0.025f) + main_filter_stage3_4) - main_filter_output_4) * 0.025f) + main_filter_output_4;
      float main_filter_output_5 = main_unsaturated_output_5 - (float)((float)(main_unsaturated_output_5 * main_unsaturated_output_5) * (float)(main_unsaturated_output_5 * 0.16666667f));
      if ( main_sample_index + 3 >= 0x4000 )
        main_sample_cursor[4] = (int)(float)(main_filter_output_5 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int main_noise_seed_6 = ((int)(float)((float)(main_sample_index + 4) * 0.00390625) << 13) ^ (int)(float)((float)(main_sample_index + 4) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * main_noise_seed_6 * main_noise_seed_6 + 789221) * (15731 * main_noise_seed_6 * main_noise_seed_6 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float main_filter_stage1_6 = (float)((float)((float)((float)((float)main_sample_cursor[5] * 0.000030517578f) - (float)(main_filter_output_5 * feedback_gain)) - main_filter_stage1_5) * 0.025f) + main_filter_stage1_5;
      float main_filter_stage2_6 = (float)((float)(main_filter_stage1_6 - main_filter_stage2_5) * 0.025f) + main_filter_stage2_5;
      float main_filter_stage3_6 = (float)((float)(main_filter_stage2_6 - (float)((float)((float)(main_filter_stage2_5 - main_filter_stage3_4) * 0.025f) + main_filter_stage3_4)) * 0.025f)
          + (float)((float)((float)(main_filter_stage2_5 - main_filter_stage3_4) * 0.025f) + main_filter_stage3_4);
      float main_filter_output_6 = (float)((float)((float)(main_filter_stage3_6 - main_filter_output_5) * 0.025f) + main_filter_output_5)
          - (float)((float)((float)((float)((float)(main_filter_stage3_6 - main_filter_output_5) * 0.025f) + main_filter_output_5)
                          * (float)((float)((float)(main_filter_stage3_6 - main_filter_output_5) * 0.025f) + main_filter_output_5))
                  * (float)((float)((float)((float)(main_filter_stage3_6 - main_filter_output_5) * 0.025f) + main_filter_output_5) * 0.16666667f));
      if ( main_sample_index + 4 >= 0x4000 )
        main_sample_cursor[5] = (int)(float)(main_filter_output_6 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int main_noise_seed_7 = ((int)(float)((float)(main_sample_index + 5) * 0.00390625) << 13) ^ (int)(float)((float)(main_sample_index + 5) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * main_noise_seed_7 * main_noise_seed_7 + 789221) * (15731 * main_noise_seed_7 * main_noise_seed_7 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      filter_stage1_state = (float)((float)((float)((float)((float)main_sample_cursor[6] * 0.000030517578f) - (float)(main_filter_output_6 * feedback_gain)) - main_filter_stage1_6) * 0.025f) + main_filter_stage1_6;
      filter_stage2_state = (float)((float)(filter_stage1_state - main_filter_stage2_6) * 0.025f) + main_filter_stage2_6;
      filter_stage3_state = (float)((float)(filter_stage2_state - main_filter_stage3_6) * 0.025f) + main_filter_stage3_6;
      filter_output_state = (float)((float)((float)(filter_stage3_state - main_filter_output_6) * 0.025f) + main_filter_output_6)
          - (float)((float)((float)((float)((float)(filter_stage3_state - main_filter_output_6) * 0.025f) + main_filter_output_6)
                          * (float)((float)((float)(filter_stage3_state - main_filter_output_6) * 0.025f) + main_filter_output_6))
                  * (float)((float)((float)((float)(filter_stage3_state - main_filter_output_6) * 0.025f) + main_filter_output_6) * 0.16666667f));
      if ( main_sample_index + 5 >= 0x4000 )
        main_sample_cursor[6] = (int)(float)(filter_output_state * 65536.0);
      main_sample_cursor += 8;
      main_sample_index += 8;
    }
    while ( (__int64)main_sample_cursor < (__int64)((__int16 *)&audio_synth_pcm_limit + 1) );
    /* Refilter the prefix using the state at the end of the main pass. */
    __int16 *prefix_sample_cursor = (__int16 *)&audio_synth_pcm_storage + 1;
    do
    {
      if ( sound_id == modulated_feedback_sound_id )
      {
        int prefix_noise_seed_0 = ((int)(float)((float)(prefix_sample_index - 2) * 0.00390625) << 13) ^ (int)(float)((float)(prefix_sample_index - 2) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * prefix_noise_seed_0 * prefix_noise_seed_0 + 789221) * (15731 * prefix_noise_seed_0 * prefix_noise_seed_0 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float prefix_filter_stage1_0 = (float)((float)((float)((float)((float)*(prefix_sample_cursor - 1) * 0.000030517578f) - (float)(filter_output_state * feedback_gain)) - filter_stage1_state) * 0.025f)
          + filter_stage1_state;
      float prefix_filter_stage2_0 = (float)((float)(prefix_filter_stage1_0 - filter_stage2_state) * 0.025f) + filter_stage2_state;
      float prefix_filter_stage3_0 = (float)((float)(prefix_filter_stage2_0 - filter_stage3_state) * 0.025f) + filter_stage3_state;
      float prefix_filter_output_0 = (float)((float)((float)(prefix_filter_stage3_0 - filter_output_state) * 0.025f) + filter_output_state)
          - (float)((float)((float)((float)((float)(prefix_filter_stage3_0 - filter_output_state) * 0.025f) + filter_output_state)
                          * (float)((float)((float)(prefix_filter_stage3_0 - filter_output_state) * 0.025f) + filter_output_state))
                  * (float)((float)((float)((float)(prefix_filter_stage3_0 - filter_output_state) * 0.025f) + filter_output_state) * 0.16666667f));
      *(prefix_sample_cursor - 1) = (int)(float)(prefix_filter_output_0 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int prefix_noise_seed_1 = ((int)(float)((float)(prefix_sample_index - 1) * 0.00390625) << 13) ^ (int)(float)((float)(prefix_sample_index - 1) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * prefix_noise_seed_1 * prefix_noise_seed_1 + 789221) * (15731 * prefix_noise_seed_1 * prefix_noise_seed_1 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float prefix_filter_stage1_1 = (float)((float)((float)((float)((float)*prefix_sample_cursor * 0.000030517578f) - (float)(prefix_filter_output_0 * feedback_gain)) - prefix_filter_stage1_0) * 0.025f) + prefix_filter_stage1_0;
      float prefix_filter_stage2_1 = (float)((float)(prefix_filter_stage1_1 - prefix_filter_stage2_0) * 0.025f) + prefix_filter_stage2_0;
      float prefix_filter_stage3_1 = (float)((float)(prefix_filter_stage2_1 - prefix_filter_stage3_0) * 0.025f) + prefix_filter_stage3_0;
      float prefix_filter_output_1 = (float)((float)((float)(prefix_filter_stage3_1 - prefix_filter_output_0) * 0.025f) + prefix_filter_output_0)
          - (float)((float)((float)((float)((float)(prefix_filter_stage3_1 - prefix_filter_output_0) * 0.025f) + prefix_filter_output_0)
                          * (float)((float)((float)(prefix_filter_stage3_1 - prefix_filter_output_0) * 0.025f) + prefix_filter_output_0))
                  * (float)((float)((float)((float)(prefix_filter_stage3_1 - prefix_filter_output_0) * 0.025f) + prefix_filter_output_0) * 0.16666667f));
      *prefix_sample_cursor = (int)(float)(prefix_filter_output_1 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int prefix_noise_seed_2 = ((int)(float)((float)prefix_sample_index * 0.00390625) << 13) ^ (int)(float)((float)prefix_sample_index * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * prefix_noise_seed_2 * prefix_noise_seed_2 + 789221) * (15731 * prefix_noise_seed_2 * prefix_noise_seed_2 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float prefix_filter_stage1_2 = (float)((float)((float)((float)((float)prefix_sample_cursor[1] * 0.000030517578f) - (float)(prefix_filter_output_1 * feedback_gain)) - prefix_filter_stage1_1) * 0.025f) + prefix_filter_stage1_1;
      float prefix_filter_stage2_2 = (float)((float)(prefix_filter_stage1_2 - prefix_filter_stage2_1) * 0.025f) + prefix_filter_stage2_1;
      float prefix_filter_stage3_2 = (float)((float)(prefix_filter_stage2_2 - prefix_filter_stage3_1) * 0.025f) + prefix_filter_stage3_1;
      float prefix_filter_output_2 = (float)((float)((float)(prefix_filter_stage3_2 - prefix_filter_output_1) * 0.025f) + prefix_filter_output_1)
          - (float)((float)((float)((float)((float)(prefix_filter_stage3_2 - prefix_filter_output_1) * 0.025f) + prefix_filter_output_1)
                          * (float)((float)((float)(prefix_filter_stage3_2 - prefix_filter_output_1) * 0.025f) + prefix_filter_output_1))
                  * (float)((float)((float)((float)(prefix_filter_stage3_2 - prefix_filter_output_1) * 0.025f) + prefix_filter_output_1) * 0.16666667f));
      prefix_sample_cursor[1] = (int)(float)(prefix_filter_output_2 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int prefix_noise_seed_3 = ((int)(float)((float)(prefix_sample_index + 1) * 0.00390625) << 13) ^ (int)(float)((float)(prefix_sample_index + 1) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * prefix_noise_seed_3 * prefix_noise_seed_3 + 789221) * (15731 * prefix_noise_seed_3 * prefix_noise_seed_3 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float prefix_filter_stage1_3 = (float)((float)((float)((float)((float)prefix_sample_cursor[2] * 0.000030517578f) - (float)(prefix_filter_output_2 * feedback_gain)) - prefix_filter_stage1_2) * 0.025f) + prefix_filter_stage1_2;
      float prefix_filter_stage2_3 = (float)((float)(prefix_filter_stage1_3 - prefix_filter_stage2_2) * 0.025f) + prefix_filter_stage2_2;
      float prefix_filter_stage3_3 = (float)((float)(prefix_filter_stage2_3 - prefix_filter_stage3_2) * 0.025f) + prefix_filter_stage3_2;
      float prefix_filter_output_3 = (float)((float)((float)(prefix_filter_stage3_3 - prefix_filter_output_2) * 0.025f) + prefix_filter_output_2)
          - (float)((float)((float)((float)((float)(prefix_filter_stage3_3 - prefix_filter_output_2) * 0.025f) + prefix_filter_output_2)
                          * (float)((float)((float)(prefix_filter_stage3_3 - prefix_filter_output_2) * 0.025f) + prefix_filter_output_2))
                  * (float)((float)((float)((float)(prefix_filter_stage3_3 - prefix_filter_output_2) * 0.025f) + prefix_filter_output_2) * 0.16666667f));
      prefix_sample_cursor[2] = (int)(float)(prefix_filter_output_3 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int prefix_noise_seed_4 = ((int)(float)((float)(prefix_sample_index + 2) * 0.00390625) << 13) ^ (int)(float)((float)(prefix_sample_index + 2) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * prefix_noise_seed_4 * prefix_noise_seed_4 + 789221) * (15731 * prefix_noise_seed_4 * prefix_noise_seed_4 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float prefix_filter_stage1_4 = (float)((float)((float)((float)((float)prefix_sample_cursor[3] * 0.000030517578f) - (float)(prefix_filter_output_3 * feedback_gain)) - prefix_filter_stage1_3) * 0.025f) + prefix_filter_stage1_3;
      float prefix_filter_stage2_4 = (float)((float)(prefix_filter_stage1_4 - prefix_filter_stage2_3) * 0.025f) + prefix_filter_stage2_3;
      float prefix_filter_stage3_4 = (float)((float)(prefix_filter_stage2_4 - prefix_filter_stage3_3) * 0.025f) + prefix_filter_stage3_3;
      float prefix_filter_output_4 = (float)((float)((float)(prefix_filter_stage3_4 - prefix_filter_output_3) * 0.025f) + prefix_filter_output_3)
           - (float)((float)((float)((float)((float)(prefix_filter_stage3_4 - prefix_filter_output_3) * 0.025f) + prefix_filter_output_3)
                           * (float)((float)((float)(prefix_filter_stage3_4 - prefix_filter_output_3) * 0.025f) + prefix_filter_output_3))
                   * (float)((float)((float)((float)(prefix_filter_stage3_4 - prefix_filter_output_3) * 0.025f) + prefix_filter_output_3) * 0.16666667f));
      prefix_sample_cursor[3] = (int)(float)(prefix_filter_output_4 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int prefix_noise_seed_5 = ((int)(float)((float)(prefix_sample_index + 3) * 0.00390625) << 13) ^ (int)(float)((float)(prefix_sample_index + 3) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * prefix_noise_seed_5 * prefix_noise_seed_5 + 789221) * (15731 * prefix_noise_seed_5 * prefix_noise_seed_5 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float prefix_filter_stage1_5 = (float)((float)((float)((float)((float)prefix_sample_cursor[4] * 0.000030517578f) - (float)(prefix_filter_output_4 * feedback_gain)) - prefix_filter_stage1_4) * 0.025f)
           + prefix_filter_stage1_4;
      float prefix_filter_stage2_5 = (float)((float)(prefix_filter_stage1_5 - prefix_filter_stage2_4) * 0.025f) + prefix_filter_stage2_4;
      float prefix_unsaturated_output_5 = (float)((float)((float)((float)((float)(prefix_filter_stage2_5 - prefix_filter_stage3_4) * 0.025f) + prefix_filter_stage3_4) - prefix_filter_output_4) * 0.025f) + prefix_filter_output_4;
      float prefix_filter_output_5 = prefix_unsaturated_output_5 - (float)((float)(prefix_unsaturated_output_5 * prefix_unsaturated_output_5) * (float)(prefix_unsaturated_output_5 * 0.16666667f));
      prefix_sample_cursor[4] = (int)(float)(prefix_filter_output_5 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int prefix_noise_seed_6 = ((int)(float)((float)(prefix_sample_index + 4) * 0.00390625) << 13) ^ (int)(float)((float)(prefix_sample_index + 4) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * prefix_noise_seed_6 * prefix_noise_seed_6 + 789221) * (15731 * prefix_noise_seed_6 * prefix_noise_seed_6 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      float prefix_filter_stage1_6 = (float)((float)((float)((float)((float)prefix_sample_cursor[5] * 0.000030517578f) - (float)(prefix_filter_output_5 * feedback_gain)) - prefix_filter_stage1_5) * 0.025f)
           + prefix_filter_stage1_5;
      float prefix_filter_stage2_6 = (float)((float)(prefix_filter_stage1_6 - prefix_filter_stage2_5) * 0.025f) + prefix_filter_stage2_5;
      float prefix_filter_stage3_6 = (float)((float)(prefix_filter_stage2_6 - (float)((float)((float)(prefix_filter_stage2_5 - prefix_filter_stage3_4) * 0.025f) + prefix_filter_stage3_4)) * 0.025f)
           + (float)((float)((float)(prefix_filter_stage2_5 - prefix_filter_stage3_4) * 0.025f) + prefix_filter_stage3_4);
      float prefix_filter_output_6 = (float)((float)((float)(prefix_filter_stage3_6 - prefix_filter_output_5) * 0.025f) + prefix_filter_output_5)
           - (float)((float)((float)((float)((float)(prefix_filter_stage3_6 - prefix_filter_output_5) * 0.025f) + prefix_filter_output_5)
                           * (float)((float)((float)(prefix_filter_stage3_6 - prefix_filter_output_5) * 0.025f) + prefix_filter_output_5))
                   * (float)((float)((float)((float)(prefix_filter_stage3_6 - prefix_filter_output_5) * 0.025f) + prefix_filter_output_5) * 0.16666667f));
      prefix_sample_cursor[5] = (int)(float)(prefix_filter_output_6 * 65536.0);
      if ( sound_id == modulated_feedback_sound_id )
      {
        int prefix_noise_seed_7 = ((int)(float)((float)(prefix_sample_index + 5) * 0.00390625) << 13) ^ (int)(float)((float)(prefix_sample_index + 5) * 0.00390625);
        feedback_gain = (float)(0.5
                    - (float)((float)(((15731 * prefix_noise_seed_7 * prefix_noise_seed_7 + 789221) * (15731 * prefix_noise_seed_7 * prefix_noise_seed_7 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      prefix_sample_index += 8;
      filter_stage1_state = (float)((float)((float)((float)((float)prefix_sample_cursor[6] * 0.000030517578f) - (float)(prefix_filter_output_6 * feedback_gain)) - prefix_filter_stage1_6) * 0.025f)
         + prefix_filter_stage1_6;
      filter_stage2_state = (float)((float)(filter_stage1_state - prefix_filter_stage2_6) * 0.025f) + prefix_filter_stage2_6;
      filter_stage3_state = (float)((float)(filter_stage2_state - prefix_filter_stage3_6) * 0.025f) + prefix_filter_stage3_6;
      filter_output_state = (float)((float)((float)(filter_stage3_state - prefix_filter_output_6) * 0.025f) + prefix_filter_output_6)
          - (float)((float)((float)((float)((float)(filter_stage3_state - prefix_filter_output_6) * 0.025f) + prefix_filter_output_6)
                          * (float)((float)((float)(filter_stage3_state - prefix_filter_output_6) * 0.025f) + prefix_filter_output_6))
                  * (float)((float)((float)((float)(filter_stage3_state - prefix_filter_output_6) * 0.025f) + prefix_filter_output_6) * 0.16666667f));
      prefix_sample_cursor[6] = (int)(float)(filter_output_state * 65536.0);
      prefix_sample_cursor += 8;
    }
    while ( prefix_sample_index - 2 < 0x4000 );
    /* Final gain is applied with the original wrapping 16-bit arithmetic. */
    if ( sound_id == harmonic_sound_id )
    {
      __m128i *gain_vector_cursor = (__m128i *)&audio_synth_gain_vector_begin;
      do
      {
        __m128i gain_samples_first = _mm_loadu_si128(gain_vector_cursor - 1);
        _mm_storeu_si128(gain_vector_cursor - 1, _mm_add_epi16(gain_samples_first, gain_samples_first));
        __m128i gain_samples_second = _mm_loadu_si128(gain_vector_cursor);
        _mm_storeu_si128(gain_vector_cursor, _mm_add_epi16(gain_samples_second, gain_samples_second));
        __m128i gain_samples_third = _mm_loadu_si128(gain_vector_cursor + 1);
        _mm_storeu_si128(gain_vector_cursor + 1, _mm_add_epi16(gain_samples_third, gain_samples_third));
        __m128i gain_samples_fourth = _mm_loadu_si128(gain_vector_cursor + 2);
        _mm_storeu_si128(gain_vector_cursor + 2, _mm_add_epi16(gain_samples_fourth, gain_samples_fourth));
        gain_vector_cursor += 4;
      }
      while ( (__int64)gain_vector_cursor < (__int64)&audio_synth_gain_vector_end );
    }
    else
    {
      do
      {
        *(gain_sample_cursor - 1) *= 3;
        *gain_sample_cursor *= 3;
        gain_sample_cursor += 2;
      }
      while ( (__int64)gain_sample_cursor < (__int64)((_WORD *)&audio_synth_pcm_limit + 1) );
    }
    sr_audio_load_pcm16(sound_id, 0x20000, (__int16 *)&audio_synth_pcm_storage, sound_gain);
  }
}

// 140065C5F: conditional instruction was optimized away because r14d.4 is in (==4000|==5622)
// 140065DA5: conditional instruction was optimized away because rcx.8<100000000u
// 140065E05: conditional instruction was optimized away because rcx.8<100000000u

