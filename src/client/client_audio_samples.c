#include "shared_client.h"

//----- (0000000140069930) ----------------------------------------------------
/* Convert byte_count bytes of signed 16-bit PCM into the sound float buffer. */
void sr_audio_load_pcm16(unsigned int sound_id, int byte_count, __int16 * pcm_samples, float sound_gain)
{
  if ( sound_id <= 0xFFF )
  {
    __int64 sound_record_word_offset = 8LL * (int)sound_id;
    void *previous_sample_buffer = *(void **)&dword_140404A6C[sound_record_word_offset + 18165779];
    *(float *)&dword_140404A6C[sound_record_word_offset + 18165783] = sound_gain;
    dword_140404A6C[sound_record_word_offset + 18165777] = 1;
    dword_140404A6C[sound_record_word_offset + 18165778] = byte_count / 2;
    free(previous_sample_buffer);
    __int64 sample_buffer_address = sr_path_malloc((int)(4 * dword_140404A6C[sound_record_word_offset + 18165778]));
    signed int sample_index = 0;
    *(_QWORD *)&dword_140404A6C[sound_record_word_offset + 18165779] = sample_buffer_address;
    if ( (int)dword_140404A6C[sound_record_word_offset + 18165778] > 0 )
    {
      __int64 sample_byte_offset = 0;
      do
      {
        int pcm_sample = *pcm_samples++;
        ++sample_index;
        sample_byte_offset += 4;
        *(float *)(sample_byte_offset + *(_QWORD *)&dword_140404A6C[sound_record_word_offset + 18165779] - 4) = (float)pcm_sample * 0.000030517578;
      }
      while ( sample_index < (int)dword_140404A6C[sound_record_word_offset + 18165778] );
    }
  }
}

