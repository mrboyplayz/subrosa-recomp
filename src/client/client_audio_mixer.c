#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140069400) ----------------------------------------------------
/* Diagnostics read by the debug console: callbacks so far and the loudest sample. */
volatile int sr_audio_calls, sr_audio_peak;
void            sr_audio_output_callback(__int64 userdata, __m128i *output, int byte_count)
{
  enum { READ_BUFFER = 9, OUTPUT_BASE = 11, BUFFER_WORDS = 0x10000 };
  const float *mixed = (const float *)&dword_140404A6C[
      OUTPUT_BASE + BUFFER_WORDS * dword_140404A6C[READ_BUFFER]];
  (void)userdata;
  memcpy(output, mixed, byte_count);
  /* SDL output is float32; report a normalized peak on the existing 16-bit scale. */
  for (int sample = 0; sample < byte_count / (int)sizeof(float); ++sample) {
    float magnitude = fabsf(((float *)output)[sample]);
    int peak = isfinite(magnitude) ? (int)(fminf(magnitude, 1.0f) * 32767.0f) : 0;
    if (peak > sr_audio_peak) sr_audio_peak = peak;
  }
  sr_audio_calls++;
  g_140404A90 ^= 1u;
  SDL_SemPost(*(void **)&g_140404A70);
}

// 140069439: control flows out of bounds to 140198E69

//----- (0000000140069440) ----------------------------------------------------
__int64 sub_140069440()
{
  int output_device_count;
  int capture_device_index;
  int output_device_index;
  char *output_device_name_cursor;
  int next_output_device_index;
  char *output_name_destination_offset;
  char output_name_character;
  int capture_device_count;
  char *capture_device_name_cursor;
  int next_capture_device_index;
  char *capture_name_destination_offset;
  char capture_name_character;
  __int64 result;

  output_device_count = sub_140198E7B();
  capture_device_index = 0;
  g_144970CA4 = 0x746C7561666544LL;
  output_device_index = 0;
  if ( output_device_count < 0 )
    output_device_count = 0;
  g_144970CA0 = output_device_count;
  if ( output_device_count > 0 )
  {
    do
    {
      output_device_name_cursor = (char *)sub_140198E81();
      next_output_device_index = output_device_index + 1;
      output_name_destination_offset = (char *)&g_140404A70 + ((__int64)output_device_index << 9) - (_QWORD)output_device_name_cursor;
      do
      {
        output_name_character = *output_device_name_cursor;
        output_device_name_cursor[(_QWORD)output_name_destination_offset + 72795188] = *output_device_name_cursor;
        ++output_device_name_cursor;
      }
      while ( output_name_character );
      output_device_count = g_144970CA0;
      ++output_device_index;
    }
    while ( next_output_device_index < (int)g_144970CA0 );
  }
  g_144970CA0 = output_device_count + 1;
  capture_device_count = sub_140198E7B();
  g_144978CB0 = 0x746C7561666544LL;
  if ( capture_device_count < 0 )
    capture_device_count = 0;
  g_144978CAC = capture_device_count;
  if ( capture_device_count > 0 )
  {
    do
    {
      capture_device_name_cursor = (char *)sub_140198E81();
      next_capture_device_index = capture_device_index + 1;
      capture_name_destination_offset = (char *)&g_140404A70 + ((__int64)capture_device_index << 9) - (_QWORD)capture_device_name_cursor;
      do
      {
        capture_name_character = *capture_device_name_cursor;
        capture_device_name_cursor[(_QWORD)capture_name_destination_offset + 72827968] = *capture_device_name_cursor;
        ++capture_device_name_cursor;
      }
      while ( capture_name_character );
      capture_device_count = g_144978CAC;
      ++capture_device_index;
    }
    while ( next_capture_device_index < (int)g_144978CAC );
  }
  result = (unsigned int)(capture_device_count + 1);
  g_144978CAC = result;
  return result;
}

//----- (0000000140069630) ----------------------------------------------------
__int64 sr_audio_initialize()
{
  int audio_count_result;
  int iteration_count;
  char *audio_name_result;
  int integer_sum;
  char *state_address;
  char input_byte;
  int audio_count_result_2;
  int iteration_count_2;
  char *audio_name_result_2;
  int integer_sum_2;
  char *state_address_2;
  char input_byte_2;
  unsigned int audio_open_result;
  unsigned int audio_open_result_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140069630[16];
#define unused_frame_slot_0 (*(char (*))(void *)(sr_frame_140069630 + 0)) /* [rsp+56h] */
#define unused_frame_slot_2 (*(unsigned __int16 (*))(void *)(sr_frame_140069630 + 2)) /* [rsp+58h] */

  *(unsigned int *)&g_144970C94 = 1048576000;
  sr_audio_load_hrtf();
  audio_count_result = sr_audio_count(0);
  g_144970CA4 = 0x746C7561666544LL;
  iteration_count = 0;
  if ( audio_count_result < 0 )
    audio_count_result = 0;
  g_144970CA0 = audio_count_result;
  if ( audio_count_result > 0 )
  {
    do
    {
      audio_name_result = (char *)sr_audio_name(iteration_count,0);
      integer_sum = iteration_count + 1;
      state_address = (char *)&g_140404A70 + ((__int64)iteration_count << 9) - (_QWORD)audio_name_result;
      do
      {
        input_byte = *audio_name_result;
        audio_name_result[(_QWORD)state_address + 72795188] = *audio_name_result;
        ++audio_name_result;
      }
      while ( input_byte );
      audio_count_result = g_144970CA0;
      ++iteration_count;
    }
    while ( integer_sum < (int)g_144970CA0 );
  }
  g_144970CA0 = audio_count_result + 1;
  audio_count_result_2 = sr_audio_count(1);
  g_144978CB0 = 0x746C7561666544LL;
  iteration_count_2 = 0;
  if ( audio_count_result_2 < 0 )
    audio_count_result_2 = 0;
  g_144978CAC = audio_count_result_2;
  if ( audio_count_result_2 > 0 )
  {
    do
    {
      audio_name_result_2 = (char *)sr_audio_name(iteration_count_2,1);
      integer_sum_2 = iteration_count_2 + 1;
      state_address_2 = (char *)&g_140404A70 + ((__int64)iteration_count_2 << 9) - (_QWORD)audio_name_result_2;
      do
      {
        input_byte_2 = *audio_name_result_2;
        audio_name_result_2[(_QWORD)state_address_2 + 72827968] = *audio_name_result_2;
        ++audio_name_result_2;
      }
      while ( input_byte_2 );
      audio_count_result_2 = g_144978CAC;
      ++iteration_count_2;
    }
    while ( integer_sum_2 < (int)g_144978CAC );
  }
  g_144978CAC = audio_count_result_2 + 1;
  {
    void *semaphore=sr_audio_semaphore(0);
    void *thread;
    sr_startup_audio_spec desired,obtained;
    __builtin_memcpy(&g_140404A70,&semaphore,8);
    /* SDL's Windows fallback creates the thread without the original EXE's CRT. */
    thread=sr_audio_thread((void *)(uintptr_t)sr_audio_mixer_thread,"cs_audio_updatethread",NULL,
       NULL,NULL);
    __builtin_memcpy(&g_140404A78,&thread,8);
    { extern void sr_debug_log(const char *, ...);
      sr_debug_log("Audio: mixer thread %s", thread ? "started" : "FAILED"); }
    if (!thread || !semaphore) return 0;
    memset(&desired,0,32);
    desired.freq=48000;desired.format=0x8120;desired.channels=2;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sr_audio_output_callback;
    audio_open_result=sr_audio_open(NULL,0,&desired,&obtained,0);
    g_140404A8C=obtained.samples;
    if(obtained.channels!=2 || obtained.samples!=1024)audio_open_result=0;
    g_140404A88=audio_open_result;
    { extern void sr_debug_log(const char *, ...);
      sr_debug_log("Audio: output device %u (%d Hz, %d channels, %d samples)", audio_open_result, obtained.freq, obtained.channels, obtained.samples); }
    memset(&desired,0,32);memset(&obtained,0,32);
    desired.freq=48000;desired.format=0x8010;desired.channels=1;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sr_audio_capture_write;
    audio_open_result_2=sr_audio_open(sr_audio_name(0,1),1,&desired,&obtained,0);
  }
  *(unsigned int *)&g_140404A80 = 1124856083;
  *(_OWORD *)&g_144970AC0 = xmmword_140278D30;
  *(_OWORD *)&g_144970AD0 = xmmword_140278D30;
  g_144970AE0 = 1065353216;
  g_1404C4A98 = audio_open_result_2;
  if(!g_140404A88)return 0;
  sr_audio_pause(g_140404A88,0);
  sr_audio_pause(g_1404C4A98,0);
  return 1;
}
#undef unused_frame_slot_0
#undef unused_frame_slot_2

//----- (0000000140069A00) ----------------------------------------------------
void sr_audio_load_hrtf()
{
  __int64 file_handle;
  __int64 file_handle_2;
  unsigned int *buffer_cursor;
  int state_word;
  int i;
  int iteration_count;
  int state_word_2;
  unsigned int *record_byte_offset;
  unsigned int *buffer_cursor_2;
  signed int iteration_count_2;
  __int64 element_index;
  int element_index_2;
  __int64 shifted_bits;
  unsigned int *state_address;
  unsigned int *buffer_cursor_3;
  int loaded_word;
  int element_index_3;
  unsigned int *buffer_cursor_4;
  signed int element_index_4;
  signed int state_word_3;
  signed int iteration_count_3;
  unsigned int *state_address_2;
  __int64 running_total;
  int loaded_word_2;
  signed int iteration_count_4;
  __int64 iteration_count_5;
  unsigned int *saved_state_address;
  int iteration_count_6;
  int integer_difference;
  __int64 lookup_index;
  _WORD *state_address_3;
  __int64 shifted_bits_2;
  unsigned int *state_address_4;
  __int64 shifted_bits_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140069A00[336];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140069A00 + 0)) /* [rsp+0h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_140069A00 + 32)) /* [rsp+20h] */
#define saved_record_byte_offset (*(unsigned int * (*))(void *)(sr_frame_140069A00 + 40)) /* [rsp+28h] */
#define saved_buffer_cursor (*(unsigned int * (*))(void *)(sr_frame_140069A00 + 48)) /* [rsp+30h] */
#define Buffer (*(char (*)[256])(void *)(sr_frame_140069A00 + 64)) /* [rsp+40h] */
#define unused_frame_slot_320 (*(__int64 (*))(void *)(sr_frame_140069A00 + 320)) /* [rsp+140h] */

  file_handle = crt_fopen("default-48000.mhr", "rb");
  file_handle_2 = file_handle;
  buffer_cursor = &g_16A1BB98C;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(Buffer), 8, 1, (FILE *)(uintptr_t)(file_handle));
    fread_sr((void *)(uintptr_t)(&g_16A1BB980), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(&g_16A1BB984), 1, 1, (FILE *)(uintptr_t)(file_handle_2));
    fread_sr((void *)(uintptr_t)(&g_16A1BB988), 1, 1, (FILE *)(uintptr_t)(file_handle_2));
    state_word = g_16A1BB988;
    for ( i = 0; i < (int)g_16A1BB988; ++i )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[i + 175561672]), 1, 1, (FILE *)(uintptr_t)(file_handle_2));
      state_word = g_16A1BB988;
    }
    iteration_count = 0;
    saved_iteration_count = 0;
    if ( state_word > 0 )
    {
      state_word_2 = g_16A1BB984;
      record_byte_offset = nullptr;
      saved_record_byte_offset = nullptr;
      buffer_cursor_2 = &g_16A1BB98C;
      saved_buffer_cursor = &g_16A1BB98C;
      do
      {
        iteration_count_2 = 0;
        element_index = 0;
        if ( (int)*buffer_cursor_2 > 0 )
        {
          do
          {
            element_index_2 = 0;
            if ( state_word_2 > 0 )
            {
              shifted_bits = 32 * (iteration_count_2 + ((__int64)iteration_count << 7));
              state_address = &dword_140404A6C[64 * ((_QWORD)record_byte_offset + element_index) + 176118984];
              buffer_cursor_3 = &dword_140404A6C[32 * ((_QWORD)record_byte_offset + element_index) + 175561928];
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[shifted_bits + 175561928 + element_index_2]), 2, 1, (FILE *)(uintptr_t)(file_handle_2));
                loaded_word = *(__int16 *)buffer_cursor_3++;
                ++element_index_2;
                state_address += 2;
                *((float *)state_address - 2) = (float)loaded_word * 0.000030517578;
                state_word_2 = g_16A1BB984;
              }
              while ( element_index_2 < (int)g_16A1BB984 );
              buffer_cursor_2 = saved_buffer_cursor;
              iteration_count = saved_iteration_count;
              record_byte_offset = saved_record_byte_offset;
            }
            ++iteration_count_2;
            ++element_index;
          }
          while ( iteration_count_2 < (int)*buffer_cursor_2 );
          state_word = g_16A1BB988;
        }
        ++iteration_count;
        ++buffer_cursor_2;
        record_byte_offset += 32;
        saved_iteration_count = iteration_count;
        saved_buffer_cursor = buffer_cursor_2;
        saved_record_byte_offset = record_byte_offset;
      }
      while ( iteration_count < state_word );
      buffer_cursor = &g_16A1BB98C;
    }
    element_index_3 = 0;
    if ( state_word > 0 )
    {
      buffer_cursor_4 = &g_16A1BB98C;
      do
      {
        element_index_4 = 0;
        if ( (int)*buffer_cursor_4 > 0 )
        {
          do
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[256 * (__int64)element_index_3 + 176086216 + 2 * element_index_4++]), 1, 1, (FILE *)(uintptr_t)(file_handle_2));
          while ( element_index_4 < (int)*buffer_cursor_4 );
          state_word = g_16A1BB988;
        }
        ++element_index_3;
        ++buffer_cursor_4;
      }
      while ( element_index_3 < state_word );
    }
    crt_fclose(file_handle_2);
  }
  state_word_3 = g_16A1BB988;
  iteration_count_3 = 0;
  saved_iteration_count = 0;
  if ( (int)g_16A1BB988 > 0 )
  {
    state_address_2 = &g_16A3BBD8C;
    running_total = 0;
    saved_record_byte_offset = &g_16A3BBD8C;
    do
    {
      loaded_word_2 = *buffer_cursor;
      iteration_count_4 = 0;
      iteration_count_5 = 0;
      if ( (int)*buffer_cursor > 0 )
      {
        saved_state_address = state_address_2;
        do
        {
          iteration_count_6 = 0;
          integer_difference = (loaded_word_2 - iteration_count_4) % loaded_word_2;
          lookup_index = integer_difference;
          if ( (int)g_16A1BB984 > 0 )
          {
            state_address_3 = (_WORD *)&dword_140404A6C[32 * (integer_difference + running_total) + 175561928] + 1;
            shifted_bits_2 = (iteration_count_5 - integer_difference) << 8;
            state_address_4 = &dword_140404A6C[64 * (integer_difference + running_total) + 176118985];
            shifted_bits_3 = (iteration_count_5 - integer_difference) << 7;
            do
            {
              ++iteration_count_6;
              *state_address_4 = *(unsigned int *)((char *)state_address_4 + shifted_bits_2 - 4);
              state_address_4 += 2;
              *state_address_3 = *(_WORD *)((char *)state_address_3 + shifted_bits_3 - 2);
              state_address_3 += 2;
            }
            while ( iteration_count_6 < (int)g_16A1BB984 );
          }
          dword_140404A6C[2 * lookup_index + 176086217 + 2 * running_total] = *saved_state_address;
          ++iteration_count_4;
          loaded_word_2 = *buffer_cursor;
          ++iteration_count_5;
          saved_state_address += 2;
        }
        while ( iteration_count_4 < (int)*buffer_cursor );
        state_word_3 = g_16A1BB988;
        iteration_count_3 = saved_iteration_count;
        state_address_2 = saved_record_byte_offset;
      }
      ++iteration_count_3;
      state_address_2 += 256;
      running_total += 128;
      saved_iteration_count = iteration_count_3;
      ++buffer_cursor;
      saved_record_byte_offset = state_address_2;
    }
    while ( iteration_count_3 < state_word_3 );
  }
  g_16A7DBD8C = 127;
  return;
}
#undef unused_frame_slot_0
#undef saved_iteration_count
#undef saved_record_byte_offset
#undef saved_buffer_cursor
#undef Buffer
#undef unused_frame_slot_320

//----- (0000000140069DE0) ----------------------------------------------------
void            sub_140069DE0(unsigned int a1, __int64 a2, float a3)
{
  signed int iteration_count;
  __int64 record_word_offset;
  void *allocation_buffer;
  float limited_value;
  __int64 record_byte_offset;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140069DE0[112];
#define callee_output_word (*(int (*))(void *)(sr_frame_140069DE0 + 0)) /* [rsp+30h] */
#define frame_word_at_6 (*(char (*))(void *)(sr_frame_140069DE0 + 6)) /* [rsp+36h] */
#define callee_output_word_2 (*(unsigned int (*))(void *)(sr_frame_140069DE0 + 80)) /* [rsp+80h] */
#define callee_output_word_3 (*(__int64 (*))(void *)(sr_frame_140069DE0 + 104)) /* [rsp+98h] */

  if ( a1 <= 0xFFF )
  {
    iteration_count = 0;
    record_word_offset = 8LL * (int)a1;
    dword_140404A6C[record_word_offset + 18165777] = 0;
    /* SDL_RWFromFile(path, "rb") and SDL_LoadWAV_RW(rw, 1, &spec, &buffer, &length);
       the export dropped every argument and the stream (0x140069E2A..). */
    /* (Never called by the original; the sounds are loaded by 0x1400EE400.) */
    if ( SDL_LoadWAV_RW(SDL_RWFromFile(a2, "rb"), 1, (void *)&callee_output_word, (void *)&callee_output_word_3, (void *)&callee_output_word_2) )
    {
      if ( frame_word_at_6 == 1 && callee_output_word > 0 )
      {
        allocation_buffer = *(void **)&dword_140404A6C[record_word_offset + 18165779];
        dword_140404A6C[record_word_offset + 18165777] = 1;
        *(float *)&dword_140404A6C[record_word_offset + 18165783] = a3;
        dword_140404A6C[record_word_offset + 18165778] = (int)(float)((float)(callee_output_word_2 >> 1) * (float)(48000.0 / (float)callee_output_word));
        free(allocation_buffer);
        limited_value = 0.0;
        *(_QWORD *)&dword_140404A6C[record_word_offset + 18165779] = sr_path_malloc((int)(4 * dword_140404A6C[record_word_offset + 18165778]));
        if ( (int)dword_140404A6C[record_word_offset + 18165778] > 0 )
        {
          record_byte_offset = 0;
          do
          {
            ++iteration_count;
            *(float *)(record_byte_offset + *(_QWORD *)&dword_140404A6C[record_word_offset + 18165779]) = (float)*(__int16 *)(callee_output_word_3 + 2LL * (int)limited_value)
                                                                        * 0.000030517578;
            record_byte_offset += 4;
            limited_value = fminf(limited_value + (float)(1.0 / (float)(48000.0 / (float)callee_output_word)), (float)(int)((callee_output_word_2 >> 1) - 1));
          }
          while ( iteration_count < (int)dword_140404A6C[record_word_offset + 18165778] );
        }
        SDL_FreeWAV(callee_output_word_3);
      }
    }
  }
}
#undef callee_output_word
#undef frame_word_at_6
#undef callee_output_word_2
#undef callee_output_word_3

//----- (000000014006A140) ----------------------------------------------------
__int64            sub_14006A140(int a1, int a2, float a3, float a4, unsigned int a5)
{
  __int64 input_value;
  __int64 result;
  __int64 audio_channel_offset;

  input_value = a2;
  if ( g_140404A88 )
  {
    result = a1;
    audio_channel_offset = 278720LL * a1;
    if ( !dword_140404A6C[audio_channel_offset + 327697] )
    {
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[audio_channel_offset + 327698]), 0, 0x1102FCu);
      *(_QWORD *)&dword_140404A6C[audio_channel_offset + 327697] = 1;
      dword_140404A6C[audio_channel_offset + 327772] = 0;
      dword_140404A6C[audio_channel_offset + 589917] = 0;
      *(float *)&dword_140404A6C[audio_channel_offset + 327704] = a3;
      *(float *)&dword_140404A6C[audio_channel_offset + 327705] = a3;
      *(float *)&dword_140404A6C[audio_channel_offset + 327706] = a4;
      *(float *)&dword_140404A6C[audio_channel_offset + 327707] = a4;
      dword_140404A6C[audio_channel_offset + 327700] = 1;
      dword_140404A6C[audio_channel_offset + 327702] = input_value;
      dword_140404A6C[audio_channel_offset + 327708] = a5;
      result = dword_140404A6C[8 * input_value + 18165783];
      dword_140404A6C[audio_channel_offset + 606308] = result;
      *(_QWORD *)&dword_140404A6C[8 * input_value + 18165781] = 0;
    }
  }
  return result;
}

//----- (000000014006A240) ----------------------------------------------------
__int64            sub_14006A240(int a1, int a2, unsigned int *a3, float a4, unsigned int a5, unsigned int a6)
{
  __int64 input_value;
  __int64 result;
  __int64 audio_channel_offset;

  input_value = a2;
  if ( g_140404A88 )
  {
    result = a1;
    audio_channel_offset = 278720LL * a1;
    if ( !dword_140404A6C[audio_channel_offset + 327697] )
    {
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[audio_channel_offset + 327698]), 0, 0x1102FCu);
      *(float *)&dword_140404A6C[audio_channel_offset + 327699] = a4;
      *(_QWORD *)&dword_140404A6C[audio_channel_offset + 327697] = 1;
      dword_140404A6C[audio_channel_offset + 327772] = 0;
      dword_140404A6C[audio_channel_offset + 589917] = 0;
      *(float *)&dword_140404A6C[audio_channel_offset + 327704] = a4;
      *(float *)&dword_140404A6C[audio_channel_offset + 327705] = a4;
      dword_140404A6C[audio_channel_offset + 327706] = a5;
      dword_140404A6C[audio_channel_offset + 327707] = a5;
      dword_140404A6C[audio_channel_offset + 327700] = 1;
      dword_140404A6C[audio_channel_offset + 327702] = input_value;
      dword_140404A6C[audio_channel_offset + 327708] = a6;
      *(_QWORD *)&dword_140404A6C[8 * input_value + 18165781] = 0;
      dword_140404A6C[audio_channel_offset + 606302] = *a3;
      dword_140404A6C[audio_channel_offset + 606303] = a3[1];
      dword_140404A6C[audio_channel_offset + 606304] = a3[2];
      result = dword_140404A6C[8 * input_value + 18165783];
      dword_140404A6C[audio_channel_offset + 606308] = result;
      dword_140404A6C[audio_channel_offset + 606310] = 1;
      dword_140404A6C[audio_channel_offset + 606414] = 0;
    }
  }
  return result;
}

//----- (000000014006A5C0) ----------------------------------------------------
__int64 sub_14006A5C0()
{
  __int64 result;

  if ( (int)g_1404C4A98 > 0 )
    result = sub_140198E9F();
  if ( (int)g_140404A88 > 0 )
    return sub_140198E9F();
  return result;
}

//----- (000000014006B4C0) ----------------------------------------------------
__int64            sr_audio_mix_channel(int a1, int a2, int a3, int a4)
{
  __int64 emitter_record_offset;
  __int64 sample_voice_byte_offset;
  __int64 sound_index;
  __int64 sound_record_offset;
  float interpolated_gain;
  float target_gain;
  int mixed_sample_count;
  float target_playback_step;
  float interpolated_playback_step;
  float gain_step;
  float i;
  float playback_position;
  int current_sample_index;
  int sound_sample_count;
  __int64 emitter_output_offset;
  float sample_fraction;
  int next_sample_index;
  float advanced_playback_position;
  float sound_length_float;

  emitter_record_offset = 278720LL * a1;
  sample_voice_byte_offset = emitter_record_offset * 4 + 36LL * a2;
  sound_index = *(int *)((char *)&g_140544AC4 + sample_voice_byte_offset);
  if ( (unsigned int)sound_index > 0xFFF )
    return 0;
  sound_record_offset = 8 * sound_index;
  if ( !*(_QWORD *)&dword_140404A6C[8 * sound_index + 18165779] )
    return 0;
  interpolated_gain = *(float *)((char *)&g_140544AD0 + sample_voice_byte_offset);
  if ( dword_140404A6C[emitter_record_offset + 327698] == 1 )
    *(unsigned int *)((char *)&g_140544ACC + sample_voice_byte_offset) = 0;
  target_gain = *(float *)((char *)&g_140544ACC + sample_voice_byte_offset);
  mixed_sample_count = 0;
  target_playback_step = *(float *)((char *)&g_140544AD4 + sample_voice_byte_offset);
  interpolated_playback_step = *(float *)((char *)&g_140544AD8 + sample_voice_byte_offset);
  *(float *)((char *)&g_140544AD0 + sample_voice_byte_offset) = target_gain;
  *(float *)((char *)&g_140544AD8 + sample_voice_byte_offset) = target_playback_step;
  gain_step = (float)(target_gain - interpolated_gain) * (float)(1.0 / (float)a4);
  for ( i = (float)(target_playback_step - interpolated_playback_step) * (float)(1.0 / (float)a4); mixed_sample_count < a4; interpolated_playback_step = interpolated_playback_step + i )
  {
    playback_position = *(float *)((char *)&g_140544AC8 + sample_voice_byte_offset);
    current_sample_index = 0;
    sound_sample_count = dword_140404A6C[sound_record_offset + 18165778];
    if ( (int)playback_position < sound_sample_count )
      current_sample_index = (int)playback_position;
    emitter_output_offset = 278720LL * a1 + a3;
    sample_fraction = playback_position - (float)current_sample_index;
    next_sample_index = 0;
    if ( current_sample_index + 1 < sound_sample_count )
      next_sample_index = current_sample_index + 1;
    a3 = (a3 + 1) & 0x3FFFF;
    *(float *)&dword_140404A6C[emitter_output_offset + 327773] = (float)((float)((float)((float)(1.0 - sample_fraction)
                                                                     * *(float *)(*(_QWORD *)&dword_140404A6C[sound_record_offset + 18165779]
                                                                                + 4LL * current_sample_index))
                                                             + (float)(sample_fraction
                                                                     * *(float *)(*(_QWORD *)&dword_140404A6C[sound_record_offset + 18165779]
                                                                                + 4LL * next_sample_index)))
                                                     * interpolated_gain)
                                             + *(float *)&dword_140404A6C[emitter_output_offset + 327773];
    advanced_playback_position = interpolated_playback_step + *(float *)((char *)&g_140544AC8 + sample_voice_byte_offset);
    *(float *)((char *)&g_140544AC8 + sample_voice_byte_offset) = advanced_playback_position;
    sound_length_float = (float)(int)dword_140404A6C[sound_record_offset + 18165778];
    if ( advanced_playback_position >= sound_length_float )
    {
      if ( !*(unsigned int *)((char *)&g_140544ADC + sample_voice_byte_offset) )
      {
        *(unsigned int *)((char *)&g_140544ABC + sample_voice_byte_offset) = 0;
        *(unsigned int *)((char *)&g_140544AC0 + sample_voice_byte_offset) = 2;
        break;
      }
      *(float *)((char *)&g_140544AC8 + sample_voice_byte_offset) = advanced_playback_position - sound_length_float;
    }
    ++mixed_sample_count;
    interpolated_gain = interpolated_gain + gain_step;
  }
  dword_140404A6C[sound_record_offset + 18165782] = (int)*(float *)((char *)&g_140544AC8 + sample_voice_byte_offset);
  return *(unsigned int *)((char *)&g_140544ABC + sample_voice_byte_offset);
}

//----- (000000014006B6F0) ----------------------------------------------------
__int64            sr_audio_mix_emitter(int a1, int a2)
{
  __int64 audio_channel_offset;
  int state_address;
  __int64 audio_channel_offset_2;
  __int64 remaining_count;
  __int64 integer_sum;
  int selection_flag;
  unsigned int *state_address_2;
  int i;
  __int64 result;

  audio_channel_offset = 278720LL * a1;
  state_address = dword_140404A6C[audio_channel_offset + 327772];
  if ( a2 > 0 )
  {
    audio_channel_offset_2 = 278720LL * a1;
    remaining_count = (unsigned int)a2;
    do
    {
      integer_sum = audio_channel_offset_2 + state_address;
      state_address = (state_address + 1) & 0x3FFFF;
      dword_140404A6C[integer_sum + 327773] = 0;
      --remaining_count;
    }
    while ( remaining_count );
  }
  selection_flag = 0;
  state_address_2 = &dword_140404A6C[audio_channel_offset + 327700];
  for ( i = 0; i < 8; ++i )
  {
    if ( *state_address_2 && (unsigned int)sr_audio_mix_channel(a1, i, dword_140404A6C[audio_channel_offset + 327772], a2) )
      selection_flag = 1;
    state_address_2 += 9;
  }
  dword_140404A6C[audio_channel_offset + 327772] = (a2 + dword_140404A6C[audio_channel_offset + 327772]) & 0x3FFFF;
  result = sub_14006A5F0(a1, a2);
  dword_140404A6C[audio_channel_offset + 589917] = (a2 + dword_140404A6C[audio_channel_offset + 589917]) & 0x3FFFF;
  if ( !selection_flag && *(float *)&dword_140404A6C[audio_channel_offset + 327703] < *(float *)&dword_140404A6C[audio_channel_offset + 606309] )
    dword_140404A6C[audio_channel_offset + 327697] = 0;
  if ( dword_140404A6C[audio_channel_offset + 327698] == 1 )
    dword_140404A6C[audio_channel_offset + 327697] = 0;
  return result;
}

//----- (000000014006B850) ----------------------------------------------------
void sr_audio_update_mix()
{
  int gain_sample_index;
  int cleared_sample_count;
  int output_frame_count;
  __int64 clear_frame_index;
  __int64 clear_left_sample_offset;
  __int64 clear_right_frame_offset;
  unsigned int *emitter_cursor;
  int emitter_index;
  __int64 emitter_record_offset;
  int emitter_write_position;
  __int64 clear_samples_remaining;
  __int64 emitter_sample_offset;
  int has_active_sample;
  unsigned int *sample_voice_cursor;
  int i;
  int accumulated_frame_count;
  __int64 accumulation_frame_index;
  float *stereo_sample_cursor;
  int left_sample_offset;
  float right_channel_sample;
  __int64 right_frame_offset;
  __int64 gain_frame_index;
  int gain_left_sample_offset;
  __int64 gain_right_frame_offset;

  if ( g_140404A88 && g_140404A94 != g_140404A90 )
  {
    gain_sample_index = 0;
    cleared_sample_count = 0;
    output_frame_count = g_140404A8C;
    if ( (int)g_140404A8C > 0 )
    {
      clear_frame_index = 0;
      do
      {
        clear_left_sample_offset = 2 * cleared_sample_count++;
        dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + clear_left_sample_offset] = 0;
        clear_right_frame_offset = clear_frame_index + ((__int64)(int)g_140404A94 << 15);
        ++clear_frame_index;
        dword_140404A6C[2 * clear_right_frame_offset + 12] = 0;
        output_frame_count = g_140404A8C;
      }
      while ( cleared_sample_count < (int)g_140404A8C );
    }
    g_140404A84 = 0;
    emitter_cursor = &g_140544BDC;
    emitter_index = 0;
    emitter_record_offset = 0;
    do
    {
      if ( *(emitter_cursor - 75) )
      {
        emitter_write_position = *emitter_cursor;
        if ( output_frame_count > 0 )
        {
          clear_samples_remaining = (unsigned int)output_frame_count;
          do
          {
            emitter_sample_offset = emitter_record_offset + emitter_write_position;
            emitter_write_position = (emitter_write_position + 1) & 0x3FFFF;
            dword_140404A6C[emitter_sample_offset + 327773] = 0;
            --clear_samples_remaining;
          }
          while ( clear_samples_remaining );
        }
        has_active_sample = 0;
        sample_voice_cursor = emitter_cursor - 72;
        for ( i = 0; i < 8; ++i )
        {
          if ( *sample_voice_cursor && (unsigned int)sr_audio_mix_channel(emitter_index, i, *emitter_cursor, output_frame_count) )
            has_active_sample = 1;
          sample_voice_cursor += 9;
        }
        *emitter_cursor = (output_frame_count + *emitter_cursor) & 0x3FFFF;
        sub_14006A5F0(emitter_index, output_frame_count);
        emitter_cursor[262145] = (output_frame_count + emitter_cursor[262145]) & 0x3FFFF;
        if ( !has_active_sample && *((float *)emitter_cursor - 69) < *((float *)emitter_cursor + 278537) )
          *(emitter_cursor - 75) = 0;
        if ( *(emitter_cursor - 74) == 1 )
          *(emitter_cursor - 75) = 0;
        output_frame_count = g_140404A8C;
        accumulated_frame_count = 0;
        accumulation_frame_index = 0;
        if ( (int)g_140404A8C > 0 )
        {
          stereo_sample_cursor = (float *)(emitter_cursor + 262147);
          do
          {
            left_sample_offset = 2 * accumulated_frame_count++;
            *(float *)&dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + left_sample_offset] = *(stereo_sample_cursor - 1)
                                                                                               + *(float *)&dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + left_sample_offset];
            right_channel_sample = *stereo_sample_cursor;
            stereo_sample_cursor += 2;
            right_frame_offset = accumulation_frame_index + ((__int64)(int)g_140404A94 << 15);
            ++accumulation_frame_index;
            *(float *)&dword_140404A6C[2 * right_frame_offset + 12] = right_channel_sample + *(float *)&dword_140404A6C[2 * right_frame_offset + 12];
            output_frame_count = g_140404A8C;
          }
          while ( accumulated_frame_count < (int)g_140404A8C );
        }
        ++g_140404A84;
      }
      ++emitter_index;
      emitter_record_offset += 278720;
      emitter_cursor += 278720;
    }
    while ( emitter_index < 64 );
    if ( output_frame_count > 0 )
    {
      gain_frame_index = 0;
      do
      {
        gain_left_sample_offset = 2 * gain_sample_index++;
        *(float *)&dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + gain_left_sample_offset] = g_144970C94
                                                                                           * *(float *)&dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + gain_left_sample_offset];
        gain_right_frame_offset = gain_frame_index + ((__int64)(int)g_140404A94 << 15);
        ++gain_frame_index;
        *(float *)&dword_140404A6C[2 * gain_right_frame_offset + 12] = g_144970C94
                                                 * *(float *)&dword_140404A6C[2 * gain_right_frame_offset + 12];
      }
      while ( gain_sample_index < (int)g_140404A8C );
    }
    g_140404A94 ^= 1u;
  }
}

//----- (000000014006BB10) ----------------------------------------------------
void __attribute__((noreturn)) sr_audio_mixer_thread()
{
  int output_frame_count;
  int cleared_sample_count;
  __int64 i;
  __int64 clear_left_sample_offset;
  __int64 clear_right_frame_offset;
  unsigned int *emitter_cursor;
  int emitter_index;
  __int64 emitter_record_offset;
  int emitter_write_position;
  __int64 clear_samples_remaining;
  __int64 emitter_sample_offset;
  int has_active_sample;
  unsigned int *sample_voice_cursor;
  int j;
  int accumulated_frame_count;
  __int64 accumulation_frame_index;
  float *stereo_sample_cursor;
  int left_sample_offset;
  float right_channel_sample;
  __int64 right_frame_offset;
  int gain_sample_index;
  __int64 gain_frame_index;
  int gain_left_sample_offset;
  __int64 gain_right_frame_offset;

  while ( 1 )
  {
    do
    {
      do
        sub_140198E63(*(void **)&g_140404A70);   /* the audio semaphore at 0x140404A70 */
      while ( !g_140404A88 );
    }
    while ( g_140404A94 == g_140404A90 );
    output_frame_count = g_140404A8C;
    cleared_sample_count = 0;
    for ( i = 0; cleared_sample_count < (int)g_140404A8C; output_frame_count = g_140404A8C )
    {
      clear_left_sample_offset = 2 * cleared_sample_count++;
      dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + clear_left_sample_offset] = 0;
      clear_right_frame_offset = i + ((__int64)(int)g_140404A94 << 15);
      ++i;
      dword_140404A6C[2 * clear_right_frame_offset + 12] = 0;
    }
    g_140404A84 = 0;
    emitter_cursor = &g_140544BDC;
    emitter_index = 0;
    emitter_record_offset = 0;
    do
    {
      if ( *(emitter_cursor - 75) )
      {
        emitter_write_position = *emitter_cursor;
        if ( output_frame_count > 0 )
        {
          clear_samples_remaining = (unsigned int)output_frame_count;
          do
          {
            emitter_sample_offset = emitter_record_offset + emitter_write_position;
            emitter_write_position = (emitter_write_position + 1) & 0x3FFFF;
            dword_140404A6C[emitter_sample_offset + 327773] = 0;
            --clear_samples_remaining;
          }
          while ( clear_samples_remaining );
        }
        has_active_sample = 0;
        sample_voice_cursor = emitter_cursor - 72;
        for ( j = 0; j < 8; ++j )
        {
          if ( *sample_voice_cursor && (unsigned int)sr_audio_mix_channel(emitter_index, j, *emitter_cursor, output_frame_count) )
            has_active_sample = 1;
          sample_voice_cursor += 9;
        }
        *emitter_cursor = (output_frame_count + *emitter_cursor) & 0x3FFFF;
        sub_14006A5F0(emitter_index, output_frame_count);
        emitter_cursor[262145] = (output_frame_count + emitter_cursor[262145]) & 0x3FFFF;
        if ( !has_active_sample && *((float *)emitter_cursor - 69) < *((float *)emitter_cursor + 278537) )
          *(emitter_cursor - 75) = 0;
        if ( *(emitter_cursor - 74) == 1 )
          *(emitter_cursor - 75) = 0;
        output_frame_count = g_140404A8C;
        accumulated_frame_count = 0;
        accumulation_frame_index = 0;
        if ( (int)g_140404A8C > 0 )
        {
          stereo_sample_cursor = (float *)(emitter_cursor + 262147);
          do
          {
            left_sample_offset = 2 * accumulated_frame_count++;
            *(float *)&dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + left_sample_offset] = *(stereo_sample_cursor - 1)
                                                                                               + *(float *)&dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + left_sample_offset];
            right_channel_sample = *stereo_sample_cursor;
            stereo_sample_cursor += 2;
            right_frame_offset = accumulation_frame_index + ((__int64)(int)g_140404A94 << 15);
            ++accumulation_frame_index;
            *(float *)&dword_140404A6C[2 * right_frame_offset + 12] = right_channel_sample + *(float *)&dword_140404A6C[2 * right_frame_offset + 12];
            output_frame_count = g_140404A8C;
          }
          while ( accumulated_frame_count < (int)g_140404A8C );
        }
        ++g_140404A84;
      }
      ++emitter_index;
      emitter_record_offset += 278720;
      emitter_cursor += 278720;
    }
    while ( emitter_index < 64 );
    gain_sample_index = 0;
    gain_frame_index = 0;
    if ( output_frame_count > 0 )
    {
      do
      {
        gain_left_sample_offset = 2 * gain_sample_index++;
        *(float *)&dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + gain_left_sample_offset] = g_144970C94
                                                                                           * *(float *)&dword_140404A6C[0x10000 * (__int64)(int)g_140404A94 + 11 + gain_left_sample_offset];
        gain_right_frame_offset = gain_frame_index + ((__int64)(int)g_140404A94 << 15);
        ++gain_frame_index;
        *(float *)&dword_140404A6C[2 * gain_right_frame_offset + 12] = g_144970C94
                                                 * *(float *)&dword_140404A6C[2 * gain_right_frame_offset + 12];
      }
      while ( gain_sample_index < (int)g_140404A8C );
    }
    g_140404A94 ^= 1u;
  }
}

