#include "shared_client.h"

#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140069580) ----------------------------------------------------
__int64 sr_audio_capture_available()
{
  return audio_capture_available();
}

//----- (0000000140069FA0) ----------------------------------------------------
__int64            sr_audio_play_at(signed int a1, unsigned int *a2, float a3, float a4, unsigned int a5)
{
  return audio_play_at(a1, (const float *)a2, a3, a4, a5);
}

//----- (000000014006A380) ----------------------------------------------------
__m128i *           sr_audio_capture_write(__int64 a1,      __m128i *a2, int a3)
{
  return (__m128i *)audio_capture_write(a2, a3);
}

//----- (000000014007D610) ----------------------------------------------------
__int64            sr_audio_allocate_sound_buffer(unsigned int a1, float a2)
{
  __int64 sound_record_offset;
  void *previous_sample_buffer;
  _WORD *new_sample_buffer;

  sound_record_offset = 8LL * (int)a1;
  previous_sample_buffer = *(void **)&dword_140404A6C[sound_record_offset + 18165779];
  *(float *)&dword_140404A6C[sound_record_offset + 18165783] = a2;
  dword_140404A6C[sound_record_offset + 18165777] = 1;
  dword_140404A6C[sound_record_offset + 18165778] = 0x40000;
  free(previous_sample_buffer);
  new_sample_buffer = (_WORD *)sr_path_malloc(0x100000);
  *(_QWORD *)&dword_140404A6C[sound_record_offset + 18165779] = (uint64)(uintptr_t)(new_sample_buffer);
  crt_memset((void *)(uintptr_t)(new_sample_buffer), 0, 0x100000u);
  *(_QWORD *)&dword_140404A6C[sound_record_offset + 18165781] = 0;
  return a1;
}

//----- (000000014007D6C0) ----------------------------------------------------
__int64            sr_audio_sound_available(int a1)
{
  return audio_sound_available(a1);
}

//----- (00000001400EE400) ----------------------------------------------------
__int64            sub_1400EE400(int a1, __int64 a2, float a3)
{
  __int64 sound_id;
  __int64 result;
  int directory_change_status;
  __int64 sound_record_offset;
  signed int converted_sample_count;
  void *previous_sample_buffer;
  float source_sample_position;
  __int64 destination_byte_offset;
  sr_wave_spec sr_spec;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EE400[32];
#define wave_byte_count (*(unsigned int (*))(void *)(sr_frame_1400EE400 + 0)) /* [rsp+80h] */
#define wave_samples (*(__int64 (*))(void *)(sr_frame_1400EE400 + 24)) /* [rsp+98h] */

  sound_id = a1;
  result = crt_chdir("sound");
  directory_change_status = result;
  if ( (unsigned int)sound_id <= 0xFFF )
  {
    sound_record_offset = 8 * sound_id;
    converted_sample_count = 0;
    dword_140404A6C[sound_record_offset + 18165777] = 0;
    void *sr_stream = sr_wave_file((const char *)(uintptr_t)a2,"rb");
    result = (uintptr_t)sr_wave_load(sr_stream,1,&sr_spec,(unsigned char **)&wave_samples,&wave_byte_count);
    if ( result )
    {
      if ( sr_spec.channels == 1 )
      {
        result = (unsigned int)sr_spec.freq;
        if ( sr_spec.freq > 0 )
        {
          previous_sample_buffer = *(void **)&dword_140404A6C[sound_record_offset + 18165779];
          dword_140404A6C[sound_record_offset + 18165777] = 1;
          *(float *)&dword_140404A6C[sound_record_offset + 18165783] = a3;
          dword_140404A6C[sound_record_offset + 18165778] = (int)(float)((float)(wave_byte_count >> 1) * (float)(48000.0 / (float)sr_spec.freq));
          free(previous_sample_buffer);
          source_sample_position = 0.0;
          *(_QWORD *)&dword_140404A6C[sound_record_offset + 18165779] = sr_path_malloc((int)(4 * dword_140404A6C[sound_record_offset + 18165778]));
          if ( (int)dword_140404A6C[sound_record_offset + 18165778] > 0 )
          {
            destination_byte_offset = 0;
            do
            {
              ++converted_sample_count;
              *(float *)(destination_byte_offset + *(_QWORD *)&dword_140404A6C[sound_record_offset + 18165779]) = (float)*(__int16 *)(wave_samples + 2LL * (int)source_sample_position)
                                                                           * 0.000030517578;
              destination_byte_offset += 4;
              source_sample_position = fminf(source_sample_position + (float)(1.0 / (float)(48000.0 / (float)sr_spec.freq)), (float)(int)((wave_byte_count >> 1) - 1));
            }
            while ( converted_sample_count < (int)dword_140404A6C[sound_record_offset + 18165778] );
          }
          sr_wave_free((unsigned char *)(uintptr_t)wave_samples);
        }
      }
    }
  }
  if ( !directory_change_status )
    return crt_chdir("..");
  return result;
}
#undef wave_byte_count
#undef wave_samples
