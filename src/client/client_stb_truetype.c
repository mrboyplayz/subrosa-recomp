#include "shared_client.h"

//----- (00000001401740A0) ----------------------------------------------------
__int64            sub_1401740A0(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int masked_bits;
  FILE *cached_stream;
  unsigned __int64 (           *callback_function)(__int64, __int64, int);
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401740A0[176];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_1401740A0 + 48)) /* [rsp+30h] */
#define file_handle (*(FILE * (*))(void *)(sr_frame_1401740A0 + 72)) /* [rsp+48h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1401740A0 + 80)) /* [rsp+50h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 96)) /* [rsp+60h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 112)) /* [rsp+70h] */
#define unused_written_slot_4 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 128)) /* [rsp+80h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 144)) /* [rsp+90h] */
#define unused_frame_slot_160 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 160)) /* [rsp+A0h] */

  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_4 = 0;
  masked_bits = sub_14020B8E4((__int64 *)&Stream, a1, "wb");
  cached_stream = Stream;
  callback_function = sub_14016E2F0;
  if ( masked_bits )
    cached_stream = nullptr;
  file_handle = cached_stream;
  if ( cached_stream )
  {
    sub_140174170((__int64)&callback_function, a2, a3, a4, a5);
    crt_fclose((__int64)file_handle);
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef Stream
#undef file_handle
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_frame_slot_160

//----- (0000000140174170) ----------------------------------------------------
__int64            sub_140174170(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned __int64 input_value;
  int integer_difference;
  __int64 input_value_2;
  int input_value_3;
  int integer_difference_2;
  int selection_flag;
  BOOL state_address;
  int integer_sum;
  int scaled_index;
  int running_total;
  int integer_difference_3;
  int scaled_index_2;
  int scaled_index_3;
  int running_total_2;
  __int64 integer_sum_2;
  int integer_difference_4;
  int call_result;
  unsigned __int64 *record_pointer;
  int remaining_count;
  int integer_sum_3;
  unsigned __int64 *record_pointer_2;
  int running_total_3;
  int loaded_word;
  char saved_remaining_count;
  unsigned int integer_sum_4;
  int running_total_4;
  char integer_difference_5;
  int saved_loaded_word;
  __int64 remaining_count_2;
  int loaded_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140174170[144];
#define saved_running_total (*(int (*))(void *)(sr_frame_140174170 + 0)) /* [rsp+C0h] */
#define cached_integer_difference (*(int (*))(void *)(sr_frame_140174170 + 4)) /* [rsp+C4h] */
#define running_total_5 (*(int (*))(void *)(sr_frame_140174170 + 8)) /* [rsp+C8h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_140174170 + 16)) /* [rsp+D0h] */
#define cached_integer_sum (*(__int64 (*))(void *)(sr_frame_140174170 + 24)) /* [rsp+D8h] */
#define integer_difference_6 (*(int (*))(void *)(sr_frame_140174170 + 128)) /* [rsp+140h] */
#define saved_state_address (*(int (*))(void *)(sr_frame_140174170 + 136)) /* [rsp+148h] */

  integer_difference_6 = a3;
  input_value = a4;
  integer_difference = a3;
  input_value_2 = a1;
  input_value_3 = a2;
  integer_difference_2 = a4 - 1;
  selection_flag = 0;
  state_address = ((a4 - 2) & 0xFFFFFFFD) == 0;
  saved_state_address = state_address;
  if ( ((a4 - 2) & 0xFFFFFFFD) != 0 )
    integer_difference_2 = a4;
  LOBYTE(selection_flag) = integer_difference_2 < 2;
  integer_sum = selection_flag + 2;
  if ( a3 < 0 || a2 < 0 )
    return 0;
  scaled_index = 8 * (state_address + integer_difference_2);
  if ( !dword_1402B280C )
    return sub_140176DF0(
             input_value_2,
             -1,
             -1,
             a2,
             a3,
             a4,
             0,
             a5,
             state_address,
             0,
             "111 221 2222 11",
             0,
             0,
             integer_sum,
             0,
             0,
             0,
             0,
             0,
             a2,
             a3,
             scaled_index,
             8 * state_address);
  sub_140177A80(input_value_2, "111 221 2222 11", 0, 0, integer_sum + 8, 0, 0, 0, 0, 0, a2, a3, scaled_index, 8 * state_address);
  if ( g_1449815C0 )
  {
    running_total = 0;
    integer_difference_3 = 1;
  }
  else
  {
    running_total = integer_difference - 1;
    integer_difference = -1;
    integer_difference_6 = -1;
    integer_difference_3 = -1;
  }
  cached_integer_difference = integer_difference_3;
  saved_running_total = running_total;
  if ( running_total == integer_difference )
    goto LABEL_46;
  scaled_index_2 = input_value * input_value_3 * running_total;
  scaled_index_3 = input_value * input_value_3 * integer_difference_3;
  running_total_5 = scaled_index_2;
  cached_scaled_index = scaled_index_3;
  do
  {
    running_total_2 = 0;
    integer_sum_2 = a5 + scaled_index_2;
    cached_integer_sum = integer_sum_2;
    if ( input_value_3 <= 0 )
      goto LABEL_45;
    integer_difference_4 = input_value_3 - 1;
    do
    {
      call_result = 1;
      record_pointer = (unsigned __int64 *)(integer_sum_2 + (int)input_value * running_total_2);
      remaining_count = 1;
      if ( running_total_2 < integer_difference_4 )
      {
        remaining_count = 2;
        call_result = sub_1401FC820((unsigned __int64 *)(integer_sum_2 + (int)input_value * running_total_2), integer_sum_2 + (int)input_value * (running_total_2 + 1), input_value);
        integer_sum_3 = running_total_2 + 2;
        if ( call_result )
        {
          record_pointer_2 = record_pointer;
          if ( integer_sum_3 < a2 )
          {
            running_total_3 = input_value * integer_sum_3;
            while ( remaining_count < 128 )
            {
              if ( !(unsigned int)sub_1401FC820(record_pointer_2, cached_integer_sum + running_total_3, input_value) )
              {
                --remaining_count;
                break;
              }
              ++remaining_count;
              record_pointer_2 = (unsigned __int64 *)((char *)record_pointer_2 + input_value);
              running_total_3 += input_value;
              if ( remaining_count + running_total_2 >= a2 )
              {
                loaded_word = *(_DWORD *)(input_value_2 + 80);
                saved_remaining_count = remaining_count;
                input_value_3 = a2;
                integer_sum_4 = loaded_word + 1;
                goto LABEL_32;
              }
            }
          }
          loaded_word = *(_DWORD *)(input_value_2 + 80);
          saved_remaining_count = remaining_count;
          input_value_3 = a2;
          integer_sum_4 = loaded_word + 1;
LABEL_32:
          integer_difference_5 = saved_remaining_count - 1;
          saved_loaded_word = loaded_word;
          if ( integer_sum_4 > 0x40 && loaded_word )
          {
            (*(void (           **)(_QWORD, __int64))input_value_2)(*(_QWORD *)(input_value_2 + 8), input_value_2 + 16);
            saved_loaded_word = 0;
            *(_DWORD *)(input_value_2 + 80) = 0;
          }
          state_address = saved_state_address;
          *(_BYTE *)(saved_loaded_word + input_value_2 + 16) = integer_difference_5;
          ++*(_DWORD *)(input_value_2 + 80);
          if ( remaining_count > 0 )
          {
            remaining_count_2 = (unsigned int)remaining_count;
            do
            {
              sub_1401776D0(input_value_2, -1, input_value, saved_state_address, 0, (__int64)record_pointer);
              record_pointer = (unsigned __int64 *)((char *)record_pointer + input_value);
              --remaining_count_2;
            }
            while ( remaining_count_2 );
            input_value_3 = a2;
          }
          goto LABEL_43;
        }
        if ( integer_sum_3 < input_value_3 )
        {
          running_total_4 = input_value * integer_sum_3;
          do
          {
            if ( remaining_count >= 128 )
              break;
            if ( (unsigned int)sub_1401FC820(record_pointer, cached_integer_sum + running_total_4, input_value) )
              break;
            ++remaining_count;
            running_total_4 += input_value;
          }
          while ( remaining_count + running_total_2 < input_value_3 );
          input_value_2 = a1;
          call_result = 0;
        }
        state_address = saved_state_address;
      }
      loaded_word = *(_DWORD *)(input_value_2 + 80);
      saved_remaining_count = remaining_count;
      integer_sum_4 = loaded_word + 1;
      if ( call_result )
        goto LABEL_32;
      loaded_word_2 = *(_DWORD *)(input_value_2 + 80);
      if ( integer_sum_4 > 0x40 && loaded_word )
      {
        (*(void (           **)(_QWORD, __int64))input_value_2)(*(_QWORD *)(input_value_2 + 8), input_value_2 + 16);
        loaded_word_2 = 0;
        *(_DWORD *)(input_value_2 + 80) = 0;
      }
      *(_BYTE *)(loaded_word_2 + input_value_2 + 16) = remaining_count + 127;
      ++*(_DWORD *)(input_value_2 + 80);
      sub_1401776D0(input_value_2, -1, input_value, state_address, 0, (__int64)record_pointer);
LABEL_43:
      integer_sum_2 = cached_integer_sum;
      integer_difference_4 = input_value_3 - 1;
      running_total_2 += remaining_count;
    }
    while ( running_total_2 < input_value_3 );
    running_total = saved_running_total;
    integer_difference = integer_difference_6;
    scaled_index_3 = cached_scaled_index;
LABEL_45:
    running_total += cached_integer_difference;
    scaled_index_2 = scaled_index_3 + running_total_5;
    saved_running_total = running_total;
    running_total_5 += scaled_index_3;
  }
  while ( running_total != integer_difference );
LABEL_46:
  if ( *(_DWORD *)(input_value_2 + 80) )
  {
    (*(void (           **)(_QWORD, __int64))input_value_2)(*(_QWORD *)(input_value_2 + 8), input_value_2 + 16);
    *(_DWORD *)(input_value_2 + 80) = 0;
  }
  return 1;
}
#undef saved_running_total
#undef cached_integer_difference
#undef running_total_5
#undef cached_scaled_index
#undef cached_integer_sum
#undef integer_difference_6
#undef saved_state_address

//----- (00000001401745F0) ----------------------------------------------------
__int64            sub_1401745F0(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401745F0[160];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_QWORD (*)[2])(void *)(sr_frame_1401745F0 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1401745F0 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 96)) /* [rsp+60h] */
#define unused_written_slot_4 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 112)) /* [rsp+70h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 128)) /* [rsp+80h] */
#define unused_frame_slot_144 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 144)) /* [rsp+90h] */

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  unused_written_slot_5 = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  return sub_140174170((__int64)scratch_buffer, a3, a4, a5, a6); /* 0x14017465B: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_frame_slot_144

//----- (0000000140174680) ----------------------------------------------------
__m128i *           sub_140174680(__int64 a1, int a2, _DWORD *a3, int a4)
{
  __int64 input_value;
       __m128i *source_buffer;
  int input_value_2;
  __m128i *result;
  __m128i *cached_block;
  int input_value_3;
  _DWORD *returned_pointer;
  int integer_difference;
  int scaled_index;
  int *returned_pointer_2;
  unsigned int remaining_bits;
  unsigned int record_byte_offset;
  int integer_sum;
  __int64 cached_integer_sum;
  int saved_iteration_count;
  __int64 packed_word_bits;
  int shifted_bits;
  unsigned int shifted_bits_2;
  unsigned int shifted_bits_3;
  __m128i **shifted_bits_4;
  __m128i *destination_buffer;
  int integer_difference_2;
  __int64 element_index;
  __m128i *loaded_word;
  __int64 input_value_4;
  __int64 integer_difference_3;
  int iteration_count;
  unsigned __int64 iteration_count_2;
  int scaled_index_2;
  __int8 *state_address;
  __int64 call_result;
  __m128i *packed_vector;
  unsigned __int8 *record_pointer;
  int shifted_bits_5;
  unsigned int shifted_bits_6;
  unsigned int shifted_bits_7;
  __int16 shifted_bits_8;
  unsigned __int64 iteration_count_3;
  __int64 masked_bits;
  int loaded_word_2;
  __int64 iteration_count_4;
  int cached_integer_sum_2;
  __int64 input_value_5;
  __int64 loaded_word_3;
  int iteration_count_5;
  __int64 integer_difference_4;
  int cached_iteration_count;
  int integer_difference_5;
  int scaled_index_3;
  int iteration_count_6;
  __int64 element_index_2;
  int table_value;
  int integer_sum_2;
  int remaining_bits_2;
  int remaining_count;
  int masked_bits_2;
  unsigned int remaining_amount;
  unsigned int remaining_bits_3;
  __int32 *state_address_2;
  unsigned __int64 remaining_count_2;
  int scaled_index_4;
  __int32 *saved_state_address;
  int *returned_pointer_3;
  int remaining_bits_4;
  int remaining_count_3;
  int masked_bits_3;
  __int32 *state_address_3;
  unsigned __int64 remaining_count_4;
  int scaled_index_5;
  __int32 *saved_state_address_2;
  int *returned_pointer_4;
  int remaining_bits_5;
  int remaining_count_5;
  int masked_bits_4;
  __int32 *state_address_4;
  unsigned __int64 remaining_count_6;
  int scaled_index_6;
  __int32 *saved_state_address_3;
  int *returned_pointer_5;
  int remaining_bits_6;
  int remaining_count_7;
  int masked_bits_5;
  __int32 *state_address_5;
  unsigned __int64 remaining_count_8;
  int scaled_index_7;
  __int32 *saved_state_address_4;
  int *returned_pointer_6;
  int table_value_2;
  char saved_remaining_amount;
  __int32 *state_address_6;
  unsigned __int64 remaining_count_9;
  int scaled_index_8;
  __int32 *saved_state_address_5;
  int *returned_pointer_7;
  int remaining_bits_7;
  __int64 element_index_3;
  int table_value_3;
  int scaled_index_9;
  int remaining_count_10;
  int masked_bits_6;
  char saved_remaining_amount_2;
  __int32 *state_address_7;
  unsigned __int64 remaining_count_11;
  int scaled_index_10;
  __int32 *saved_state_address_6;
  int *returned_pointer_8;
  int table_value_4;
  char saved_record_byte_offset;
  __int32 *state_address_8;
  unsigned __int64 remaining_count_12;
  int scaled_index_11;
  __int32 *saved_state_address_7;
  int *returned_pointer_9;
  int cached_iteration_count_2;
  int loaded_word_4;
  int remaining_bits_8;
  int scaled_index_12;
  int remaining_count_13;
  int masked_bits_7;
  __int32 *state_address_9;
  unsigned __int64 remaining_count_14;
  int scaled_index_13;
  __int32 *saved_state_address_8;
  int *returned_pointer_10;
  int remaining_bits_9;
  int scaled_index_14;
  int remaining_count_15;
  int masked_bits_8;
  __int32 *state_address_10;
  unsigned __int64 remaining_count_16;
  int scaled_index_15;
  __int32 *saved_state_address_9;
  int *returned_pointer_11;
  __int64 iteration_count_7;
  __int64 cached_input_value;
  int loaded_word_5;
  int scaled_index_16;
  int remaining_bits_10;
  int remaining_count_17;
  int masked_bits_9;
  char saved_record_byte_offset_2;
  __int32 *state_address_11;
  unsigned __int64 remaining_count_18;
  int scaled_index_17;
  __int32 *saved_state_address_10;
  int *returned_pointer_12;
  int remaining_bits_11;
  int remaining_count_19;
  int masked_bits_10;
  char saved_record_byte_offset_3;
  __int32 *state_address_12;
  unsigned __int64 remaining_count_20;
  int scaled_index_18;
  __int32 *saved_state_address_11;
  int *returned_pointer_13;
  int remaining_bits_12;
  int scaled_index_19;
  int remaining_count_21;
  int masked_bits_11;
  char saved_record_byte_offset_4;
  unsigned int iteration_count_8;
  unsigned int remaining_bits_13;
  __int32 *state_address_13;
  unsigned __int64 remaining_count_22;
  int scaled_index_20;
  __int32 *saved_state_address_12;
  int *returned_pointer_14;
  __int32 *state_address_14;
  unsigned __int64 remaining_count_23;
  int scaled_index_21;
  __int32 *saved_state_address_13;
  int *returned_pointer_15;
  __int64 remaining_count_24;
  __int64 *cached_block_2;
  unsigned int running_total;
  unsigned int running_total_2;
  __int64 running_total_3;
  __int64 selected_word;
  __int64 i;
  int loaded_word_6;
  __m128i *destination_buffer_2;
  int integer_difference_6;
  int scaled_index_22;
  __m128i *saved_destination_buffer;
  int *returned_pointer_16;
  int scaled_index_23;
  int *returned_pointer_17;
  int scaled_index_24;
  int *returned_pointer_18;
  int scaled_index_25;
  int *returned_pointer_19;
  unsigned __int64 byte_count;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140174680[64];
#define saved_record_byte_offset_5 (*(int (*))(void *)(sr_frame_140174680 + 0)) /* [rsp+20h] */
#define saved_source_buffer (*(__m128i * (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define saved_element_index (*(__int64 (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define cached_input_value_2 (*(__int64 (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define saved_iteration_count_2 (*(int (*))(void *)(sr_frame_140174680 + 16)) /* [rsp+30h] */
#define cached_integer_sum_3 (*(int (*))(void *)(sr_frame_140174680 + 20)) /* [rsp+34h] */
#define table_value_5 (*(__int64 (*))(void *)(sr_frame_140174680 + 24)) /* [rsp+38h] */
#define cached_input_value_3 (*(int (*))(void *)(sr_frame_140174680 + 32)) /* [rsp+40h] */
#define integer_sum_3 (*(__int64 (*))(void *)(sr_frame_140174680 + 32)) /* [rsp+40h] */
#define Block (*(__m128i * (*))(void *)(sr_frame_140174680 + 40)) /* [rsp+48h] */
#define record_pointer_2 (*(unsigned __int8 * (*))(void *)(sr_frame_140174680 + 48)) /* [rsp+50h] */

  input_value = a1;
  source_buffer = nullptr;
  saved_source_buffer = nullptr;
  input_value_2 = a2;
  result = (__m128i *)sr_path_malloc(0x20000);
  Block = result;
  cached_block = result;
  if ( !result )
    return result;
  input_value_3 = 5;
  if ( a4 >= 5 )
    input_value_3 = a4;
  cached_input_value_3 = input_value_3;
  returned_pointer = (_DWORD *)j__realloc_base_sr(0, 10);
  if ( returned_pointer )
  {
    source_buffer = (     __m128i *)(returned_pointer + 2);
    returned_pointer[1] = 0;
    saved_source_buffer = (     __m128i *)(returned_pointer + 2);
    *returned_pointer = 2;
  }
  else
  {
    crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
  }
  SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = 120;
  integer_difference = SR_VEC_LANES(128, source_buffer[-1], i32)[2];
  if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= integer_difference )
  {
    scaled_index = 2 * integer_difference + 1;
    returned_pointer_2 = (int *)j__realloc_base_sr(&SR_VEC_LANES(128, source_buffer[-1], u64)[1], scaled_index + 8LL);
    if ( returned_pointer_2 )
    {
      source_buffer = (     __m128i *)(returned_pointer_2 + 2);
      *returned_pointer_2 = scaled_index;
      saved_source_buffer = (     __m128i *)(returned_pointer_2 + 2);
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  remaining_bits = 3;
  saved_record_byte_offset_5 = 3;
  record_byte_offset = 3;
  SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = 94;
  crt_memset((void *)(uintptr_t)(cached_block), 0, 0x20000u);
  cached_integer_sum_3 = 0;
  integer_sum = 0;
  if ( input_value_2 - 3 <= 0 )
    goto LABEL_229;
  while ( 1 )
  {
    cached_integer_sum = integer_sum;
    saved_iteration_count = 3;
    packed_word_bits = 0;
    record_pointer_2 = (unsigned __int8 *)(input_value + integer_sum);
    shifted_bits = *record_pointer_2 + (record_pointer_2[1] << 8) + (record_pointer_2[2] << 16);
    saved_iteration_count_2 = 3;
    table_value_5 = 0;
    shifted_bits_2 = (((8 * shifted_bits) ^ (unsigned int)shifted_bits) >> 5) + ((8 * shifted_bits) ^ shifted_bits);
    shifted_bits_3 = (((16 * shifted_bits_2) ^ shifted_bits_2) >> 17) + ((16 * shifted_bits_2) ^ shifted_bits_2);
    shifted_bits_4 = (__m128i **)cached_block + (((_WORD)shifted_bits_3 + (unsigned __int16)(((shifted_bits_3 << 25) ^ shifted_bits_3) >> 6)) & 0x3FFF);
    destination_buffer = *shifted_bits_4;
    if ( *shifted_bits_4 )
      integer_difference_2 = SR_VEC_LANES(128, destination_buffer[-1], i32)[3];
    else
      integer_difference_2 = 0;
    element_index = 0;
    loaded_word = *shifted_bits_4;
    if ( integer_difference_2 > 0 )
    {
      input_value_4 = a1;
      integer_difference_3 = integer_sum - 0x8000;
      do
      {
        if ( SR_VEC_PTR_LANES(128, destination_buffer, i64)[element_index] - input_value_4 > integer_difference_3 )
        {
          iteration_count = 0;
          iteration_count_2 = 0;
          if ( a2 - integer_sum > 0 )
          {
            do
            {
              if ( iteration_count_2 >= 0x102 )
                break;
              if ( *(_BYTE *)(SR_VEC_PTR_LANES(128, destination_buffer, i64)[element_index] + iteration_count_2) != *(_BYTE *)(iteration_count_2 + input_value_4 + cached_integer_sum) )
                break;
              ++iteration_count;
              ++iteration_count_2;
            }
            while ( (__int64)iteration_count_2 < a2 - integer_sum );
            saved_iteration_count = saved_iteration_count_2;
            integer_sum = cached_integer_sum_3;
            input_value_4 = a1;
          }
          if ( iteration_count >= saved_iteration_count )
          {
            saved_iteration_count = iteration_count;
            saved_iteration_count_2 = iteration_count;
            table_value_5 = SR_VEC_PTR_LANES(128, destination_buffer, i64)[element_index];
          }
        }
        ++element_index;
      }
      while ( element_index < integer_difference_2 );
      source_buffer = saved_source_buffer;
      packed_word_bits = table_value_5;
      loaded_word = *shifted_bits_4;
    }
    if ( destination_buffer && SR_VEC_LANES(128, destination_buffer[-1], i32)[3] == 2 * cached_input_value_3 )
    {
      crt_memcpy(destination_buffer, (__m128i *)((char *)destination_buffer + 8 * cached_input_value_3), 8LL * cached_input_value_3);
      SR_VEC_LANES(128, (*shifted_bits_4)[-1], i32)[3] = cached_input_value_3;
      loaded_word = *shifted_bits_4;
    }
    if ( loaded_word )
    {
      if ( SR_VEC_LANES(128, loaded_word[-1], i32)[3] + 1 < SR_VEC_LANES(128, loaded_word[-1], i32)[2] )
        goto LABEL_43;
      scaled_index_2 = 2 * SR_VEC_LANES(128, loaded_word[-1], i32)[2] + 1;
    }
    else
    {
      scaled_index_2 = 2;
    }
    state_address = &SR_VEC_LANES(128, loaded_word[-1], i8)[8];
    if ( !loaded_word )
      state_address = nullptr;
    call_result = j__realloc_base_sr(state_address, 8 * scaled_index_2 + 8LL);
    if ( call_result )
    {
      if ( !*shifted_bits_4 )
        *(_DWORD *)(call_result + 4) = 0;
      packed_vector = (__m128i *)(call_result + 8);
      *shifted_bits_4 = packed_vector;
      SR_VEC_LANES(128, packed_vector[-1], i32)[2] = scaled_index_2;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
LABEL_43:
    record_pointer = record_pointer_2;
    SR_VEC_PTR_LANES(128, (*shifted_bits_4), i64)[SR_VEC_LANES(128, (*shifted_bits_4)[-1], i32)[3]++] = (__int64)record_pointer_2;
    if ( !packed_word_bits )
      goto LABEL_192;
    shifted_bits_5 = record_pointer_2[1] + (record_pointer_2[2] << 8) + (record_pointer_2[3] << 16);
    shifted_bits_6 = (((8 * shifted_bits_5) ^ (unsigned int)shifted_bits_5) >> 5) + ((8 * shifted_bits_5) ^ shifted_bits_5);
    shifted_bits_7 = (((16 * shifted_bits_6) ^ shifted_bits_6) >> 17) + ((16 * shifted_bits_6) ^ shifted_bits_6);
    shifted_bits_8 = shifted_bits_7 + (((shifted_bits_7 << 25) ^ shifted_bits_7) >> 6);
    iteration_count_3 = 0;
    masked_bits = SR_VEC_PTR_LANES(128, Block, i64)[shifted_bits_8 & 0x3FFF];
    if ( masked_bits )
      loaded_word_2 = *(_DWORD *)(masked_bits - 4);
    else
      loaded_word_2 = 0;
    iteration_count_4 = 0;
    if ( loaded_word_2 > 0 )
    {
      cached_integer_sum_2 = cached_integer_sum_3;
      input_value_5 = a1;
      do
      {
        loaded_word_3 = *(_QWORD *)(masked_bits + 8 * iteration_count_4);
        if ( loaded_word_3 - input_value_5 > cached_integer_sum_3 - 0x7FFF )
        {
          iteration_count_5 = 0;
          if ( a2 - cached_integer_sum_2 - 1 > 0 )
          {
            integer_difference_4 = cached_integer_sum - loaded_word_3 + input_value_5;
            do
            {
              if ( iteration_count_3 >= 0x102 )
                break;
              if ( *(_BYTE *)(loaded_word_3 + iteration_count_3) != *(_BYTE *)(loaded_word_3 + iteration_count_3 + integer_difference_4 + 1) )
                break;
              ++iteration_count_5;
              ++iteration_count_3;
            }
            while ( (__int64)iteration_count_3 < a2 - cached_integer_sum_2 - 1 );
            cached_integer_sum_2 = cached_integer_sum_3;
            input_value_5 = a1;
          }
          if ( iteration_count_5 > saved_iteration_count_2 )
          {
            record_pointer = record_pointer_2;
LABEL_192:
            loaded_word_4 = *record_pointer;
            if ( (unsigned __int8)loaded_word_4 <= 0x8Fu )
            {
              remaining_bits_8 = loaded_word_4 + 48;
              scaled_index_12 = 0;
              remaining_count_13 = 8;
              do
              {
                masked_bits_7 = remaining_bits_8 & 1;
                remaining_bits_8 >>= 1;
                scaled_index_12 = masked_bits_7 | (2 * scaled_index_12);
                --remaining_count_13;
              }
              while ( remaining_count_13 );
              record_byte_offset = saved_record_byte_offset_5 + 8;
              remaining_bits |= scaled_index_12 << saved_record_byte_offset_5;
              saved_record_byte_offset_5 = record_byte_offset;
              if ( (int)record_byte_offset < 8 )
                goto LABEL_227;
              state_address_9 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
              remaining_count_14 = (unsigned __int64)record_byte_offset >> 3;
              saved_record_byte_offset_5 = record_byte_offset - 8 * (record_byte_offset >> 3);
              while ( 2 )
              {
                if ( source_buffer )
                {
                  if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_9 )
                  {
                    scaled_index_13 = 2 * *state_address_9 + 1;
                    goto LABEL_201;
                  }
                }
                else
                {
                  scaled_index_13 = 2;
LABEL_201:
                  saved_state_address_8 = state_address_9;
                  if ( !source_buffer )
                    saved_state_address_8 = nullptr;
                  returned_pointer_10 = (int *)j__realloc_base_sr(saved_state_address_8, scaled_index_13 + 8LL);
                  if ( returned_pointer_10 )
                  {
                    if ( !source_buffer )
                      returned_pointer_10[1] = 0;
                    source_buffer = (     __m128i *)(returned_pointer_10 + 2);
                    state_address_9 = returned_pointer_10;
                    *returned_pointer_10 = scaled_index_13;
                  }
                  else
                  {
                    crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
                  }
                }
                SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits;
                remaining_bits >>= 8;
                if ( !--remaining_count_14 )
                  goto LABEL_226;
                continue;
              }
            }
            remaining_bits_9 = loaded_word_4 + 256;
            scaled_index_14 = 0;
            remaining_count_15 = 9;
            do
            {
              masked_bits_8 = remaining_bits_9 & 1;
              remaining_bits_9 >>= 1;
              scaled_index_14 = masked_bits_8 | (2 * scaled_index_14);
              --remaining_count_15;
            }
            while ( remaining_count_15 );
            record_byte_offset = saved_record_byte_offset_5 + 9;
            remaining_bits |= scaled_index_14 << saved_record_byte_offset_5;
            saved_record_byte_offset_5 = record_byte_offset;
            if ( (int)record_byte_offset < 8 )
              goto LABEL_227;
            state_address_10 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
            remaining_count_16 = (unsigned __int64)record_byte_offset >> 3;
            saved_record_byte_offset_5 = record_byte_offset - 8 * (record_byte_offset >> 3);
            while ( 2 )
            {
              if ( source_buffer )
              {
                if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_10 )
                {
                  scaled_index_15 = 2 * *state_address_10 + 1;
                  goto LABEL_218;
                }
              }
              else
              {
                scaled_index_15 = 2;
LABEL_218:
                saved_state_address_9 = state_address_10;
                if ( !source_buffer )
                  saved_state_address_9 = nullptr;
                returned_pointer_11 = (int *)j__realloc_base_sr(saved_state_address_9, scaled_index_15 + 8LL);
                if ( returned_pointer_11 )
                {
                  if ( !source_buffer )
                    returned_pointer_11[1] = 0;
                  source_buffer = (     __m128i *)(returned_pointer_11 + 2);
                  state_address_10 = returned_pointer_11;
                  *returned_pointer_11 = scaled_index_15;
                }
                else
                {
                  crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
                }
              }
              SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits;
              remaining_bits >>= 8;
              if ( !--remaining_count_16 )
              {
LABEL_226:
                record_byte_offset = saved_record_byte_offset_5;
LABEL_227:
                saved_source_buffer = source_buffer;
                cached_iteration_count_2 = 1;
                goto LABEL_228;
              }
              continue;
            }
          }
          iteration_count_3 = 0;
        }
        ++iteration_count_4;
      }
      while ( iteration_count_4 < loaded_word_2 );
      LODWORD(packed_word_bits) = table_value_5;
    }
    cached_iteration_count = saved_iteration_count_2;
    integer_difference_5 = cached_integer_sum_3 + a1 - packed_word_bits;
    if ( integer_difference_5 > 0x7FFF || saved_iteration_count_2 > 258 )
      crt_assert(
        (char *)L"d <= 32767 && best <= 258",
        (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
        0x3B2u);
    scaled_index_3 = 0;
    saved_element_index = 0;
    iteration_count_6 = 0;
    element_index_2 = 0;
    if ( saved_iteration_count_2 > (unsigned __int16)word_1403018C2 - 1 )
    {
      do
      {
        table_value = (unsigned __int16)word_1403018C4[element_index_2++];
        ++iteration_count_6;
      }
      while ( saved_iteration_count_2 > table_value - 1 );
      saved_element_index = element_index_2;
    }
    integer_sum_2 = iteration_count_6 + 257;
    if ( iteration_count_6 + 257 <= 143 )
    {
      remaining_bits_2 = iteration_count_6 + 305;
      remaining_count = 8;
      do
      {
        masked_bits_2 = remaining_bits_2 & 1;
        remaining_bits_2 >>= 1;
        scaled_index_3 = masked_bits_2 | (2 * scaled_index_3);
        --remaining_count;
      }
      while ( remaining_count );
      remaining_amount = saved_record_byte_offset_5 + 8;
      remaining_bits_3 = (scaled_index_3 << saved_record_byte_offset_5) | remaining_bits;
      if ( saved_record_byte_offset_5 + 8 >= 8 )
      {
        state_address_2 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
        remaining_count_2 = (unsigned __int64)remaining_amount >> 3;
        remaining_amount -= 8 * (remaining_amount >> 3);
        while ( source_buffer )
        {
          if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_2 )
          {
            scaled_index_4 = 2 * *state_address_2 + 1;
LABEL_75:
            saved_state_address = state_address_2;
            if ( !source_buffer )
              saved_state_address = nullptr;
            returned_pointer_3 = (int *)j__realloc_base_sr(saved_state_address, scaled_index_4 + 8LL);
            if ( returned_pointer_3 )
            {
              if ( !source_buffer )
                returned_pointer_3[1] = 0;
              source_buffer = (     __m128i *)(returned_pointer_3 + 2);
              state_address_2 = returned_pointer_3;
              *returned_pointer_3 = scaled_index_4;
            }
            else
            {
              crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits_3;
          remaining_bits_3 >>= 8;
          if ( !--remaining_count_2 )
            goto LABEL_136;
        }
        scaled_index_4 = 2;
        goto LABEL_75;
      }
      goto LABEL_137;
    }
    if ( integer_sum_2 > 255 )
    {
      if ( integer_sum_2 <= 279 )
      {
        remaining_bits_5 = iteration_count_6 + 1;
        remaining_count_5 = 7;
        do
        {
          masked_bits_4 = remaining_bits_5 & 1;
          remaining_bits_5 >>= 1;
          scaled_index_3 = masked_bits_4 | (2 * scaled_index_3);
          --remaining_count_5;
        }
        while ( remaining_count_5 );
        remaining_amount = saved_record_byte_offset_5 + 7;
        remaining_bits_3 = (scaled_index_3 << saved_record_byte_offset_5) | remaining_bits;
        if ( saved_record_byte_offset_5 + 7 < 8 )
          goto LABEL_137;
        state_address_4 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
        remaining_count_6 = (unsigned __int64)remaining_amount >> 3;
        remaining_amount -= 8 * (remaining_amount >> 3);
        while ( source_buffer )
        {
          if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_4 )
          {
            scaled_index_6 = 2 * *state_address_4 + 1;
LABEL_111:
            saved_state_address_3 = state_address_4;
            if ( !source_buffer )
              saved_state_address_3 = nullptr;
            returned_pointer_5 = (int *)j__realloc_base_sr(saved_state_address_3, scaled_index_6 + 8LL);
            if ( returned_pointer_5 )
            {
              if ( !source_buffer )
                returned_pointer_5[1] = 0;
              source_buffer = (     __m128i *)(returned_pointer_5 + 2);
              state_address_4 = returned_pointer_5;
              *returned_pointer_5 = scaled_index_6;
            }
            else
            {
              crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits_3;
          remaining_bits_3 >>= 8;
          if ( !--remaining_count_6 )
            goto LABEL_136;
        }
        scaled_index_6 = 2;
        goto LABEL_111;
      }
      remaining_bits_6 = iteration_count_6 + 169;
      remaining_count_7 = 8;
      do
      {
        masked_bits_5 = remaining_bits_6 & 1;
        remaining_bits_6 >>= 1;
        scaled_index_3 = masked_bits_5 | (2 * scaled_index_3);
        --remaining_count_7;
      }
      while ( remaining_count_7 );
      remaining_amount = saved_record_byte_offset_5 + 8;
      remaining_bits_3 = (scaled_index_3 << saved_record_byte_offset_5) | remaining_bits;
      if ( saved_record_byte_offset_5 + 8 < 8 )
        goto LABEL_137;
      state_address_5 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
      remaining_count_8 = (unsigned __int64)remaining_amount >> 3;
      remaining_amount -= 8 * (remaining_amount >> 3);
      while ( source_buffer )
      {
        if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_5 )
        {
          scaled_index_7 = 2 * *state_address_5 + 1;
LABEL_128:
          saved_state_address_4 = state_address_5;
          if ( !source_buffer )
            saved_state_address_4 = nullptr;
          returned_pointer_6 = (int *)j__realloc_base_sr(saved_state_address_4, scaled_index_7 + 8LL);
          if ( returned_pointer_6 )
          {
            if ( !source_buffer )
              returned_pointer_6[1] = 0;
            source_buffer = (     __m128i *)(returned_pointer_6 + 2);
            state_address_5 = returned_pointer_6;
            *returned_pointer_6 = scaled_index_7;
          }
          else
          {
            crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits_3;
        remaining_bits_3 >>= 8;
        if ( !--remaining_count_8 )
        {
LABEL_136:
          element_index_2 = saved_element_index;
          cached_iteration_count = saved_iteration_count_2;
          goto LABEL_137;
        }
      }
      scaled_index_7 = 2;
      goto LABEL_128;
    }
    remaining_bits_4 = iteration_count_6 + 513;
    remaining_count_3 = 9;
    do
    {
      masked_bits_3 = remaining_bits_4 & 1;
      remaining_bits_4 >>= 1;
      scaled_index_3 = masked_bits_3 | (2 * scaled_index_3);
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    remaining_amount = saved_record_byte_offset_5 + 9;
    remaining_bits_3 = (scaled_index_3 << saved_record_byte_offset_5) | remaining_bits;
    if ( saved_record_byte_offset_5 + 9 >= 8 )
    {
      state_address_3 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
      remaining_count_4 = (unsigned __int64)remaining_amount >> 3;
      remaining_amount -= 8 * (remaining_amount >> 3);
      while ( source_buffer )
      {
        if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_3 )
        {
          scaled_index_5 = 2 * *state_address_3 + 1;
LABEL_93:
          saved_state_address_2 = state_address_3;
          if ( !source_buffer )
            saved_state_address_2 = nullptr;
          returned_pointer_4 = (int *)j__realloc_base_sr(saved_state_address_2, scaled_index_5 + 8LL);
          if ( returned_pointer_4 )
          {
            if ( !source_buffer )
              returned_pointer_4[1] = 0;
            source_buffer = (     __m128i *)(returned_pointer_4 + 2);
            state_address_3 = returned_pointer_4;
            *returned_pointer_4 = scaled_index_5;
          }
          else
          {
            crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits_3;
        remaining_bits_3 >>= 8;
        if ( !--remaining_count_4 )
          goto LABEL_136;
      }
      scaled_index_5 = 2;
      goto LABEL_93;
    }
LABEL_137:
    saved_source_buffer = source_buffer;
    table_value_2 = byte_140301900[element_index_2];
    if ( !(_BYTE)table_value_2 )
      goto LABEL_154;
    saved_remaining_amount = remaining_amount;
    remaining_amount += table_value_2;
    remaining_bits_3 |= (cached_iteration_count - (unsigned __int16)word_1403018C0[element_index_2]) << saved_remaining_amount;
    if ( (int)remaining_amount < 8 )
      goto LABEL_153;
    state_address_6 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
    remaining_count_9 = (unsigned __int64)remaining_amount >> 3;
    do
    {
      if ( source_buffer )
      {
        if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 < *state_address_6 )
          goto LABEL_151;
        scaled_index_8 = 2 * *state_address_6 + 1;
      }
      else
      {
        scaled_index_8 = 2;
      }
      saved_state_address_5 = state_address_6;
      if ( !source_buffer )
        saved_state_address_5 = nullptr;
      returned_pointer_7 = (int *)j__realloc_base_sr(saved_state_address_5, scaled_index_8 + 8LL);
      if ( returned_pointer_7 )
      {
        if ( !source_buffer )
          returned_pointer_7[1] = 0;
        source_buffer = (     __m128i *)(returned_pointer_7 + 2);
        state_address_6 = returned_pointer_7;
        *returned_pointer_7 = scaled_index_8;
      }
      else
      {
        crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
      }
LABEL_151:
      SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits_3;
      remaining_bits_3 >>= 8;
      --remaining_count_9;
    }
    while ( remaining_count_9 );
    remaining_amount -= 8 * (remaining_amount >> 3);
LABEL_153:
    saved_source_buffer = source_buffer;
LABEL_154:
    remaining_bits_7 = 0;
    element_index_3 = 0;
    if ( integer_difference_5 > (unsigned __int16)word_140301922 - 1 )
    {
      do
      {
        table_value_3 = (unsigned __int16)word_140301924[element_index_3++];
        ++remaining_bits_7;
      }
      while ( integer_difference_5 > table_value_3 - 1 );
    }
    scaled_index_9 = 0;
    remaining_count_10 = 5;
    do
    {
      masked_bits_6 = remaining_bits_7 & 1;
      remaining_bits_7 >>= 1;
      scaled_index_9 = masked_bits_6 | (2 * scaled_index_9);
      --remaining_count_10;
    }
    while ( remaining_count_10 );
    saved_remaining_amount_2 = remaining_amount;
    record_byte_offset = remaining_amount + 5;
    remaining_bits = (scaled_index_9 << saved_remaining_amount_2) | remaining_bits_3;
    saved_record_byte_offset_5 = record_byte_offset;
    if ( (int)record_byte_offset >= 8 )
    {
      state_address_7 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
      remaining_count_11 = (unsigned __int64)record_byte_offset >> 3;
      saved_record_byte_offset_5 = record_byte_offset - 8 * (record_byte_offset >> 3);
      while ( source_buffer )
      {
        if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_7 )
        {
          scaled_index_10 = 2 * *state_address_7 + 1;
LABEL_164:
          saved_state_address_6 = state_address_7;
          if ( !source_buffer )
            saved_state_address_6 = nullptr;
          returned_pointer_8 = (int *)j__realloc_base_sr(saved_state_address_6, scaled_index_10 + 8LL);
          if ( returned_pointer_8 )
          {
            if ( !source_buffer )
              returned_pointer_8[1] = 0;
            source_buffer = (     __m128i *)(returned_pointer_8 + 2);
            state_address_7 = returned_pointer_8;
            *returned_pointer_8 = scaled_index_10;
          }
          else
          {
            crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits;
        remaining_bits >>= 8;
        if ( !--remaining_count_11 )
        {
          record_byte_offset -= 8 * (record_byte_offset >> 3);
          saved_source_buffer = source_buffer;
          goto LABEL_173;
        }
      }
      scaled_index_10 = 2;
      goto LABEL_164;
    }
LABEL_173:
    table_value_4 = byte_140301960[element_index_3];
    if ( !(_BYTE)table_value_4 )
      goto LABEL_190;
    saved_record_byte_offset = record_byte_offset;
    record_byte_offset += table_value_4;
    remaining_bits |= (integer_difference_5 - (unsigned __int16)word_140301920[element_index_3]) << saved_record_byte_offset;
    saved_record_byte_offset_5 = record_byte_offset;
    if ( (int)record_byte_offset < 8 )
      goto LABEL_189;
    state_address_8 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
    remaining_count_12 = (unsigned __int64)record_byte_offset >> 3;
    saved_record_byte_offset_5 = record_byte_offset - 8 * (record_byte_offset >> 3);
    while ( 2 )
    {
      if ( source_buffer )
      {
        if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_8 )
        {
          scaled_index_11 = 2 * *state_address_8 + 1;
          goto LABEL_180;
        }
      }
      else
      {
        scaled_index_11 = 2;
LABEL_180:
        saved_state_address_7 = state_address_8;
        if ( !source_buffer )
          saved_state_address_7 = nullptr;
        returned_pointer_9 = (int *)j__realloc_base_sr(saved_state_address_7, scaled_index_11 + 8LL);
        if ( returned_pointer_9 )
        {
          if ( !source_buffer )
            returned_pointer_9[1] = 0;
          source_buffer = (     __m128i *)(returned_pointer_9 + 2);
          state_address_8 = returned_pointer_9;
          *returned_pointer_9 = scaled_index_11;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits;
      remaining_bits >>= 8;
      if ( --remaining_count_12 )
        continue;
      break;
    }
    record_byte_offset -= 8 * (record_byte_offset >> 3);
LABEL_189:
    saved_source_buffer = source_buffer;
LABEL_190:
    cached_iteration_count_2 = saved_iteration_count_2;
LABEL_228:
    input_value_2 = a2;
    integer_sum = cached_iteration_count_2 + cached_integer_sum_3;
    input_value = a1;
    cached_integer_sum_3 = integer_sum;
    if ( integer_sum >= a2 - 3 )
      break;
    cached_block = Block;
  }
LABEL_229:
  iteration_count_7 = integer_sum;
  cached_input_value = input_value_2;
  integer_sum_3 = integer_sum;
  cached_input_value_2 = input_value_2;
  if ( integer_sum < (__int64)input_value_2 )
  {
    while ( 1 )
    {
      loaded_word_5 = *(unsigned __int8 *)(iteration_count_7 + input_value);
      scaled_index_16 = 0;
      if ( (unsigned __int8)loaded_word_5 > 0x8Fu )
        break;
      remaining_bits_10 = loaded_word_5 + 48;
      remaining_count_17 = 8;
      do
      {
        masked_bits_9 = remaining_bits_10 & 1;
        remaining_bits_10 >>= 1;
        scaled_index_16 = masked_bits_9 | (2 * scaled_index_16);
        --remaining_count_17;
      }
      while ( remaining_count_17 );
      saved_record_byte_offset_2 = record_byte_offset;
      record_byte_offset += 8;
      remaining_bits |= scaled_index_16 << saved_record_byte_offset_2;
      if ( (int)record_byte_offset >= 8 )
      {
        state_address_11 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
        remaining_count_18 = (unsigned __int64)record_byte_offset >> 3;
        record_byte_offset -= 8 * (record_byte_offset >> 3);
        while ( source_buffer )
        {
          if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_11 )
          {
            scaled_index_17 = 2 * *state_address_11 + 1;
LABEL_239:
            saved_state_address_10 = state_address_11;
            if ( !source_buffer )
              saved_state_address_10 = nullptr;
            returned_pointer_12 = (int *)j__realloc_base_sr(saved_state_address_10, scaled_index_17 + 8LL);
            if ( returned_pointer_12 )
            {
              if ( !source_buffer )
                returned_pointer_12[1] = 0;
              source_buffer = (     __m128i *)(returned_pointer_12 + 2);
              state_address_11 = returned_pointer_12;
              *returned_pointer_12 = scaled_index_17;
            }
            else
            {
              crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits;
          remaining_bits >>= 8;
          if ( !--remaining_count_18 )
            goto LABEL_264;
        }
        scaled_index_17 = 2;
        goto LABEL_239;
      }
LABEL_265:
      integer_sum_3 = ++iteration_count_7;
      if ( iteration_count_7 >= cached_input_value )
        goto LABEL_266;
    }
    remaining_bits_11 = loaded_word_5 + 256;
    remaining_count_19 = 9;
    do
    {
      masked_bits_10 = remaining_bits_11 & 1;
      remaining_bits_11 >>= 1;
      scaled_index_16 = masked_bits_10 | (2 * scaled_index_16);
      --remaining_count_19;
    }
    while ( remaining_count_19 );
    saved_record_byte_offset_3 = record_byte_offset;
    record_byte_offset += 9;
    remaining_bits |= scaled_index_16 << saved_record_byte_offset_3;
    if ( (int)record_byte_offset < 8 )
      goto LABEL_265;
    state_address_12 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
    remaining_count_20 = (unsigned __int64)record_byte_offset >> 3;
    record_byte_offset -= 8 * (record_byte_offset >> 3);
    while ( 2 )
    {
      if ( source_buffer )
      {
        if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_12 )
        {
          scaled_index_18 = 2 * *state_address_12 + 1;
          goto LABEL_256;
        }
      }
      else
      {
        scaled_index_18 = 2;
LABEL_256:
        saved_state_address_11 = state_address_12;
        if ( !source_buffer )
          saved_state_address_11 = nullptr;
        returned_pointer_13 = (int *)j__realloc_base_sr(saved_state_address_11, scaled_index_18 + 8LL);
        if ( returned_pointer_13 )
        {
          if ( !source_buffer )
            returned_pointer_13[1] = 0;
          source_buffer = (     __m128i *)(returned_pointer_13 + 2);
          state_address_12 = returned_pointer_13;
          *returned_pointer_13 = scaled_index_18;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits;
      remaining_bits >>= 8;
      if ( !--remaining_count_20 )
      {
LABEL_264:
        input_value = a1;
        cached_input_value = cached_input_value_2;
        iteration_count_7 = integer_sum_3;
        goto LABEL_265;
      }
      continue;
    }
  }
LABEL_266:
  remaining_bits_12 = 0;
  scaled_index_19 = 0;
  remaining_count_21 = 7;
  do
  {
    masked_bits_11 = remaining_bits_12 & 1;
    remaining_bits_12 >>= 1;
    scaled_index_19 = masked_bits_11 | (2 * scaled_index_19);
    --remaining_count_21;
  }
  while ( remaining_count_21 );
  saved_record_byte_offset_4 = record_byte_offset;
  iteration_count_8 = record_byte_offset + 7;
  remaining_bits_13 = (scaled_index_19 << saved_record_byte_offset_4) | remaining_bits;
  if ( (int)iteration_count_8 >= 8 )
  {
    state_address_13 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
    remaining_count_22 = (unsigned __int64)iteration_count_8 >> 3;
    iteration_count_8 -= 8 * (iteration_count_8 >> 3);
    while ( source_buffer )
    {
      if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_13 )
      {
        scaled_index_20 = 2 * *state_address_13 + 1;
LABEL_274:
        saved_state_address_12 = state_address_13;
        if ( !source_buffer )
          saved_state_address_12 = nullptr;
        returned_pointer_14 = (int *)j__realloc_base_sr(saved_state_address_12, scaled_index_20 + 8LL);
        if ( returned_pointer_14 )
        {
          if ( !source_buffer )
            returned_pointer_14[1] = 0;
          source_buffer = (     __m128i *)(returned_pointer_14 + 2);
          state_address_13 = returned_pointer_14;
          *returned_pointer_14 = scaled_index_20;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits_13;
      remaining_bits_13 >>= 8;
      if ( !--remaining_count_22 )
      {
        cached_input_value = cached_input_value_2;
        goto LABEL_283;
      }
    }
    scaled_index_20 = 2;
    goto LABEL_274;
  }
LABEL_283:
  if ( iteration_count_8 )
  {
    while ( (int)++iteration_count_8 < 8 )
    {
LABEL_298:
      if ( !iteration_count_8 )
      {
        cached_input_value = cached_input_value_2;
        goto LABEL_300;
      }
    }
    state_address_14 = &SR_VEC_LANES(128, source_buffer[-1], i32)[2];
    remaining_count_23 = (unsigned __int64)iteration_count_8 >> 3;
    iteration_count_8 -= 8 * (iteration_count_8 >> 3);
    while ( 2 )
    {
      if ( source_buffer )
      {
        if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= *state_address_14 )
        {
          scaled_index_21 = 2 * *state_address_14 + 1;
          goto LABEL_290;
        }
      }
      else
      {
        scaled_index_21 = 2;
LABEL_290:
        saved_state_address_13 = state_address_14;
        if ( !source_buffer )
          saved_state_address_13 = nullptr;
        returned_pointer_15 = (int *)j__realloc_base_sr(saved_state_address_13, scaled_index_21 + 8LL);
        if ( returned_pointer_15 )
        {
          if ( !source_buffer )
            returned_pointer_15[1] = 0;
          source_buffer = (     __m128i *)(returned_pointer_15 + 2);
          state_address_14 = returned_pointer_15;
          *returned_pointer_15 = scaled_index_21;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = remaining_bits_13;
      remaining_bits_13 >>= 8;
      if ( !--remaining_count_23 )
        goto LABEL_298;
      continue;
    }
  }
LABEL_300:
  remaining_count_24 = 0x4000;
  cached_block_2 = (__int64 *)Block;
  do
  {
    if ( *cached_block_2 )
      free((void *)(*cached_block_2 - 8));
    ++cached_block_2;
    --remaining_count_24;
  }
  while ( remaining_count_24 );
  free(Block);
  running_total = 1;
  running_total_2 = 0;
  if ( cached_input_value > 0 )
  {
    running_total_3 = 0;
    selected_word = a2 % 5552;
    do
    {
      for ( i = 0; i < selected_word; running_total_2 += running_total )
      {
        loaded_word_6 = *(unsigned __int8 *)(running_total_3 + a1 + i++);
        running_total += loaded_word_6;
      }
      running_total_3 += selected_word;
      selected_word = 5552;
      running_total %= 0xFFF1u;
      running_total_2 %= 0xFFF1u;
    }
    while ( running_total_3 < cached_input_value );
  }
  if ( source_buffer )
  {
    destination_buffer_2 = (__m128i *)&SR_VEC_LANES(128, source_buffer[-1], u64)[1];
    integer_difference_6 = SR_VEC_LANES(128, source_buffer[-1], i32)[2];
    if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= integer_difference_6 )
    {
      scaled_index_22 = 2 * integer_difference_6 + 1;
      goto LABEL_313;
    }
  }
  else
  {
    destination_buffer_2 = (__m128i *)-8LL;
    scaled_index_22 = 2;
LABEL_313:
    saved_destination_buffer = destination_buffer_2;
    if ( !source_buffer )
      saved_destination_buffer = nullptr;
    returned_pointer_16 = (int *)j__realloc_base_sr(saved_destination_buffer, scaled_index_22 + 8LL);
    if ( returned_pointer_16 )
    {
      if ( !source_buffer )
        returned_pointer_16[1] = 0;
      source_buffer = (     __m128i *)(returned_pointer_16 + 2);
      destination_buffer_2 = (__m128i *)returned_pointer_16;
      *returned_pointer_16 = scaled_index_22;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = BYTE1(running_total_2);
  if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, destination_buffer_2, i32)[0] )
  {
    scaled_index_23 = 2 * SR_VEC_PTR_LANES(128, destination_buffer_2, i32)[0] + 1;
    returned_pointer_17 = (int *)j__realloc_base_sr(destination_buffer_2, scaled_index_23 + 8LL);
    if ( returned_pointer_17 )
    {
      source_buffer = (     __m128i *)(returned_pointer_17 + 2);
      destination_buffer_2 = (__m128i *)returned_pointer_17;
      *returned_pointer_17 = scaled_index_23;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = running_total_2;
  if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, destination_buffer_2, i32)[0] )
  {
    scaled_index_24 = 2 * SR_VEC_PTR_LANES(128, destination_buffer_2, i32)[0] + 1;
    returned_pointer_18 = (int *)j__realloc_base_sr(destination_buffer_2, scaled_index_24 + 8LL);
    if ( returned_pointer_18 )
    {
      source_buffer = (     __m128i *)(returned_pointer_18 + 2);
      destination_buffer_2 = (__m128i *)returned_pointer_18;
      *returned_pointer_18 = scaled_index_24;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = BYTE1(running_total);
  if ( SR_VEC_LANES(128, source_buffer[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, destination_buffer_2, i32)[0] )
  {
    scaled_index_25 = 2 * SR_VEC_PTR_LANES(128, destination_buffer_2, i32)[0] + 1;
    returned_pointer_19 = (int *)j__realloc_base_sr(destination_buffer_2, scaled_index_25 + 8LL);
    if ( returned_pointer_19 )
    {
      source_buffer = (     __m128i *)(returned_pointer_19 + 2);
      destination_buffer_2 = (__m128i *)returned_pointer_19;
      *returned_pointer_19 = scaled_index_25;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, source_buffer, i8)[SR_VEC_LANES(128, source_buffer[-1], i32)[3]++] = running_total;
  byte_count = SR_VEC_LANES(128, source_buffer[-1], i32)[3];
  *a3 = byte_count;
  crt_memcpy(destination_buffer_2, source_buffer, byte_count);
  return destination_buffer_2;
}
#undef saved_record_byte_offset_5
#undef saved_source_buffer
#undef saved_element_index
#undef cached_input_value_2
#undef saved_iteration_count_2
#undef cached_integer_sum_3
#undef table_value_5
#undef cached_input_value_3
#undef integer_sum_3
#undef Block
#undef record_pointer_2

// 140174966: conditional instruction was optimized away because r8.8!=0

//----- (0000000140175A20) ----------------------------------------------------
__int64            sub_140175A20(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175A20[4112];
#define scratch_buffer (*(_QWORD (*)[6])(void *)(sr_frame_140175A20 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140175A20 + 48)) /* [rsp+30h] */
#define unused_frame_slot_4096 (*(__int64 (*))(void *)(sr_frame_140175A20 + 4096)) /* [rsp+1000h] */

  scratch_buffer[4] = a1;
  scratch_buffer[1] = a3 + a4;
  scratch_buffer[3] = a1;
  scratch_buffer[5] = a1 + a2;
  scratch_buffer[0] = a3;
  unused_written_slot = 0;
  sub_140168E00((__int64)scratch_buffer, 1);
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef unused_written_slot
#undef unused_frame_slot_4096

//----- (0000000140175AC0) ----------------------------------------------------
__int64            sub_140175AC0(__int64 a1, int a2, _DWORD *a3)
{
  __int64 input_value;
  char *allocated_buffer;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175AC0[4112];
#define scratch_buffer (*(_QWORD (*)[3])(void *)(sr_frame_140175AC0 + 0)) /* [rsp+0h] */
#define saved_allocated_buffer (*(char * (*))(void *)(sr_frame_140175AC0 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175AC0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(char * (*))(void *)(sr_frame_140175AC0 + 40)) /* [rsp+28h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140175AC0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_4096 (*(__int64 (*))(void *)(sr_frame_140175AC0 + 4096)) /* [rsp+1000h] */

  input_value = a2;
  allocated_buffer = (char *)sr_path_malloc(0x4000);
  if ( allocated_buffer )
  {
    scratch_buffer[0] = a1;
    scratch_buffer[1] = a1 + input_value;
    Block = allocated_buffer;
    unused_written_slot = allocated_buffer + 0x4000;
    saved_allocated_buffer = allocated_buffer;
    unused_written_slot_2 = 1;
    if ( (unsigned int)sub_140168E00((__int64)scratch_buffer, 1) )
    {
      if ( a3 )
        *a3 = (_DWORD)saved_allocated_buffer - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef saved_allocated_buffer
#undef Block
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_frame_slot_4096

//----- (0000000140175B80) ----------------------------------------------------
__int64            sub_140175B80(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 input_value;
  __int64 input_value_2;
  char *allocated_buffer;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175B80[4112];
#define scratch_buffer (*(_QWORD (*)[3])(void *)(sr_frame_140175B80 + 0)) /* [rsp+0h] */
#define saved_allocated_buffer (*(char * (*))(void *)(sr_frame_140175B80 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175B80 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(char * (*))(void *)(sr_frame_140175B80 + 40)) /* [rsp+28h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140175B80 + 48)) /* [rsp+30h] */
#define unused_frame_slot_4096 (*(__int64 (*))(void *)(sr_frame_140175B80 + 4096)) /* [rsp+1000h] */

  input_value = a3;
  input_value_2 = a2;
  allocated_buffer = (char *)sr_path_malloc(a3);
  if ( allocated_buffer )
  {
    scratch_buffer[0] = a1;
    scratch_buffer[1] = a1 + input_value_2;
    Block = allocated_buffer;
    unused_written_slot = &allocated_buffer[input_value];
    saved_allocated_buffer = allocated_buffer;
    unused_written_slot_2 = 1;
    if ( (unsigned int)sub_140168E00((__int64)scratch_buffer, 1) )
    {
      if ( a4 )
        *a4 = (_DWORD)saved_allocated_buffer - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef saved_allocated_buffer
#undef Block
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_frame_slot_4096

//----- (0000000140175C40) ----------------------------------------------------
__int64            sub_140175C40(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 input_value;
  __int64 input_value_2;
  char *allocated_buffer;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175C40[4208];
#define scratch_buffer (*(_QWORD (*)[3])(void *)(sr_frame_140175C40 + 0)) /* [rsp+0h] */
#define saved_allocated_buffer (*(char * (*))(void *)(sr_frame_140175C40 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175C40 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(char * (*))(void *)(sr_frame_140175C40 + 40)) /* [rsp+28h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140175C40 + 48)) /* [rsp+30h] */
#define unused_frame_slot_4096 (*(__int64 (*))(void *)(sr_frame_140175C40 + 4096)) /* [rsp+1000h] */
#define frame_word_at_4192 (*(int (*))(void *)(sr_frame_140175C40 + 4192)) /* [rsp+1060h] */

  input_value = a3;
  input_value_2 = a2;
  allocated_buffer = (char *)sr_path_malloc(a3);
  if ( allocated_buffer )
  {
    scratch_buffer[1] = a1 + input_value_2;
    scratch_buffer[0] = a1;
    unused_written_slot = &allocated_buffer[input_value];
    Block = allocated_buffer;
    saved_allocated_buffer = allocated_buffer;
    unused_written_slot_2 = 1;
    if ( (unsigned int)sub_140168E00((__int64)scratch_buffer, frame_word_at_4192) )
    {
      if ( a4 )
        *a4 = (_DWORD)saved_allocated_buffer - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef saved_allocated_buffer
#undef Block
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_frame_slot_4096
#undef frame_word_at_4192

//----- (0000000140175D00) ----------------------------------------------------
__int64            sub_140175D00(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175D00[4112];
#define scratch_buffer (*(_QWORD (*)[6])(void *)(sr_frame_140175D00 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140175D00 + 48)) /* [rsp+30h] */
#define unused_frame_slot_4096 (*(__int64 (*))(void *)(sr_frame_140175D00 + 4096)) /* [rsp+1000h] */

  scratch_buffer[4] = a1;
  scratch_buffer[1] = a3 + a4;
  scratch_buffer[3] = a1;
  scratch_buffer[5] = a1 + a2;
  scratch_buffer[0] = a3;
  unused_written_slot = 0;
  sub_140168E00((__int64)scratch_buffer, 0);
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef unused_written_slot
#undef unused_frame_slot_4096

//----- (0000000140175DA0) ----------------------------------------------------
__int64            sub_140175DA0(__int64 a1, int a2, _DWORD *a3)
{
  __int64 input_value;
  char *allocated_buffer;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175DA0[4112];
#define scratch_buffer (*(_QWORD (*)[3])(void *)(sr_frame_140175DA0 + 0)) /* [rsp+0h] */
#define saved_allocated_buffer (*(char * (*))(void *)(sr_frame_140175DA0 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175DA0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(char * (*))(void *)(sr_frame_140175DA0 + 40)) /* [rsp+28h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140175DA0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_4096 (*(__int64 (*))(void *)(sr_frame_140175DA0 + 4096)) /* [rsp+1000h] */

  input_value = a2;
  allocated_buffer = (char *)sr_path_malloc(0x4000);
  if ( allocated_buffer )
  {
    scratch_buffer[0] = a1;
    scratch_buffer[1] = a1 + input_value;
    Block = allocated_buffer;
    unused_written_slot = allocated_buffer + 0x4000;
    saved_allocated_buffer = allocated_buffer;
    unused_written_slot_2 = 1;
    if ( (unsigned int)sub_140168E00((__int64)scratch_buffer, 0) )
    {
      if ( a3 )
        *a3 = (_DWORD)saved_allocated_buffer - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef saved_allocated_buffer
#undef Block
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_frame_slot_4096

//----- (0000000140175E60) ----------------------------------------------------
__int64            sub_140175E60(__int64 a1, int a2)
{
  unsigned int shifted_bits;
  __int64 i;
  unsigned __int64 loaded_word;

  shifted_bits = -1;
  if ( a2 > 0 )
  {
    for ( i = 0; i < a2; ++i )
    {
      loaded_word = *(unsigned __int8 *)(i + a1);
      shifted_bits = (shifted_bits >> 8) ^ dword_140301980[(unsigned __int8)shifted_bits ^ loaded_word];
    }
  }
  return ~shifted_bits;
}

//----- (0000000140175EB0) ----------------------------------------------------
unsigned __int8            sub_140175EB0(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, __m128i *a8)
{
  int input_value;
  _DWORD *state_address;
  int integer_difference;
  int table_value;
       __m128i *source_buffer;
  unsigned __int8 result;
  __int64 input_value_2;
       __m128i *saved_source_buffer;
  __int64 remaining_count;
  __int8 shifted_bits;
  __int8 integer_difference_2;
  int scaled_index;
  __int8 *buffer_cursor;
  __int64 remaining_count_2;
  int scaled_index_2;
  __int8 *buffer_cursor_2;
  __int64 remaining_count_3;
  __int64 scaled_index_3;
  __int8 *state_address_2;
  __int64 remaining_count_4;
  int table_value_2;
  int integer_difference_3;
  int scaled_index_4;
  unsigned __int8 *buffer_cursor_3;
  __int8 *state_address_3;
  __int64 remaining_count_5;
  int scaled_index_5;
  __int8 *buffer_cursor_4;
  __int64 remaining_count_6;
  int scaled_index_6;
  __int8 *buffer_cursor_5;
  __int64 remaining_count_7;

  input_value = a5;
  state_address = &unk_140301D98;
  if ( a5 )
    state_address = &unk_140301D80;
  integer_difference = a4 - a5 - 1;
  table_value = state_address[a7];
  if ( g_1449815C0 )
    input_value = integer_difference;
  source_buffer = (     __m128i *)(a1 + a2 * input_value);
  if ( g_1449815C0 )
    a2 = -a2;
  if ( !table_value )
    return (unsigned __int8)crt_memcpy(a8, source_buffer, a6 * a3);
  input_value_2 = a2;
  if ( a6 > 0 )
  {
    saved_source_buffer = source_buffer;
    remaining_count = a6;
    do
    {
      switch ( table_value )
      {
        case 1:
        case 5:
        case 6:
          shifted_bits = SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[0];
          goto LABEL_18;
        case 2:
          shifted_bits = SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[0] - SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[-a2];
          goto LABEL_18;
        case 3:
          shifted_bits = SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[0] - ((unsigned __int8)SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[-a2] >> 1);
          goto LABEL_18;
        case 4:
          integer_difference_2 = 0;
          if ( SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[-a2] )
            integer_difference_2 = SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[-a2];
          shifted_bits = SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[0] - integer_difference_2;
LABEL_18:
          SR_VEC_PTR_LANES(128, saved_source_buffer, i8)[(char *)a8 - (char *)source_buffer] = shifted_bits;
          break;
        default:
          break;
      }
      saved_source_buffer = (     __m128i *)((char *)saved_source_buffer + 1);
      --remaining_count;
    }
    while ( remaining_count );
  }
  result = table_value - 1;
  switch ( table_value )
  {
    case 1:
      scaled_index = a6 * a3;
      if ( a6 < (__int64)scaled_index )
      {
        buffer_cursor = &SR_VEC_PTR_LANES(128, source_buffer, i8)[a6];
        remaining_count_2 = scaled_index - (__int64)a6;
        do
        {
          result = (_BYTE)buffer_cursor - a6;
          buffer_cursor[(char *)a8 - (char *)source_buffer] = *buffer_cursor - buffer_cursor[-a6];
          ++buffer_cursor;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      break;
    case 2:
      scaled_index_2 = a6 * a3;
      if ( a6 < (__int64)scaled_index_2 )
      {
        buffer_cursor_2 = &SR_VEC_PTR_LANES(128, source_buffer, i8)[a6];
        remaining_count_3 = scaled_index_2 - (__int64)a6;
        do
        {
          result = (_BYTE)buffer_cursor_2 - a2;
          buffer_cursor_2[(char *)a8 - (char *)source_buffer] = *buffer_cursor_2 - buffer_cursor_2[-a2];
          ++buffer_cursor_2;
          --remaining_count_3;
        }
        while ( remaining_count_3 );
      }
      break;
    case 3:
      scaled_index_3 = a6 * a3;
      if ( a6 < scaled_index_3 )
      {
        state_address_2 = &SR_VEC_PTR_LANES(128, a8, i8)[a6 - (_QWORD)source_buffer];
        remaining_count_4 = scaled_index_3 - a6;
        do
        {
          table_value_2 = SR_VEC_PTR_LANES(128, source_buffer, u8)[0];
          integer_difference_3 = SR_VEC_PTR_LANES(128, source_buffer, u8)[a6 - (__int64)a2];
          source_buffer = (     __m128i *)((char *)source_buffer + 1);
          result = SR_VEC_PTR_LANES(128, source_buffer, i8)[a6 - 1] - ((unsigned int)(table_value_2 + integer_difference_3) >> 1);
          SR_VEC_PTR_LANES(128, source_buffer, i8)[(_QWORD)state_address_2 - 1] = result;
          --remaining_count_4;
        }
        while ( remaining_count_4 );
      }
      break;
    case 4:
      scaled_index_4 = a6 * a3;
      if ( a6 < (__int64)scaled_index_4 )
      {
        buffer_cursor_3 = &SR_VEC_PTR_LANES(128, source_buffer, u8)[a6 - (__int64)a2];
        state_address_3 = &SR_VEC_PTR_LANES(128, a8, i8)[a2 - (_QWORD)source_buffer];
        remaining_count_5 = scaled_index_4 - (__int64)a6;
        do
        {
          result = sub_140176F90(buffer_cursor_3[input_value_2 - a6], *buffer_cursor_3, buffer_cursor_3[-a6]);
          buffer_cursor_3[(_QWORD)state_address_3] = buffer_cursor_3[input_value_2] - result;
          ++buffer_cursor_3;
          --remaining_count_5;
        }
        while ( remaining_count_5 );
      }
      break;
    case 5:
      scaled_index_5 = a6 * a3;
      if ( a6 < (__int64)scaled_index_5 )
      {
        buffer_cursor_4 = &SR_VEC_PTR_LANES(128, source_buffer, i8)[a6];
        remaining_count_6 = scaled_index_5 - (__int64)a6;
        do
        {
          result = *buffer_cursor_4 - ((unsigned __int8)buffer_cursor_4[-a6] >> 1);
          (buffer_cursor_4++)[(char *)a8 - (char *)source_buffer] = result;
          --remaining_count_6;
        }
        while ( remaining_count_6 );
      }
      break;
    case 6:
      scaled_index_6 = a6 * a3;
      if ( a6 < (__int64)scaled_index_6 )
      {
        buffer_cursor_5 = &SR_VEC_PTR_LANES(128, source_buffer, i8)[a6];
        remaining_count_7 = scaled_index_6 - (__int64)a6;
        do
        {
          result = (_BYTE)buffer_cursor_5 - a6;
          buffer_cursor_5[(char *)a8 - (char *)source_buffer] = *buffer_cursor_5 - buffer_cursor_5[-a6];
          ++buffer_cursor_5;
          --remaining_count_7;
        }
        while ( remaining_count_7 );
      }
      break;
    default:
      result = table_value - 1;
      break;
  }
  return result;
}

//----- (00000001401761E0) ----------------------------------------------------
__int64            sub_1401761E0(char *a1, char *a2)
{
  int call_result;
  __int64 unused_written_slot;
  __int64 callee_output_word;

  call_result = sub_14020B8E4(&callee_output_word, a1, a2);
  unused_written_slot = callee_output_word;
  if ( call_result )
    return 0;
  return unused_written_slot;
}

//----- (0000000140176210) ----------------------------------------------------
float *           sub_140176210(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  float weighted_sum;
  float product_difference;
  float weighted_sum_2;
  float product_difference_2;
  float weighted_sum_3;
  float product_difference_3;
  float weighted_sum_4;
  float component_sum;
  float combined_products;
  float component_sum_2;
  float component_delta;
  float weighted_sum_5;
  float component_sum_3;
  float component_delta_2;
  float combined_products_2;
  float component_sum_4;
  float combined_products_3;
  float component_delta_3;
  float weighted_sum_6;
  float weighted_sum_7;

  weighted_sum = *a6 + *a3;
  product_difference = *a3 - *a6;
  weighted_sum_2 = *a7 + *a2;
  product_difference_2 = *a2 - *a7;
  weighted_sum_3 = *a8 + *a1;
  product_difference_3 = *a1 - *a8;
  weighted_sum_4 = *a5 + *a4;
  component_sum = product_difference_2 + product_difference_3;
  combined_products = (float)(*a4 - *a5) + product_difference;
  component_sum_2 = weighted_sum_4 + weighted_sum_3;
  component_delta = weighted_sum_3 - weighted_sum_4;
  weighted_sum_5 = (float)(product_difference + product_difference_2) * 0.70710677;
  component_sum_3 = (float)(weighted_sum + weighted_sum_2) + component_sum_2;
  component_delta_2 = component_sum_2 - (float)(weighted_sum + weighted_sum_2);
  combined_products_2 = (float)(combined_products - (float)(product_difference_2 + product_difference_3)) * 0.38268343;
  component_sum_4 = weighted_sum_5 + product_difference_3;
  combined_products_3 = (float)((float)(weighted_sum_2 - weighted_sum) + component_delta) * 0.70710677;
  component_delta_3 = product_difference_3 - weighted_sum_5;
  weighted_sum_6 = (float)(combined_products * 0.54119611) + combined_products_2;
  weighted_sum_7 = (float)(component_sum * 1.306563) + combined_products_2;
  *a6 = component_delta_3 + weighted_sum_6;
  *a4 = component_delta_3 - weighted_sum_6;
  *a2 = component_sum_4 + weighted_sum_7;
  *a8 = component_sum_4 - weighted_sum_7;
  *a1 = component_sum_3;
  *a3 = combined_products_3 + component_delta;
  *a5 = component_delta_2;
  *a7 = component_delta - combined_products_3;
  return a6;
}

//----- (0000000140176410) ----------------------------------------------------
__int64            CMFCVisualManager__OnDrawTab(
        __int64 a1,
        int *a2,
        int *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int16 *a8,
        _WORD *a9)
{
  unsigned __int16 table_value;
  int running_total;
  __int64 remaining_count;
  __int64 record_word_offset;
  float *buffer_cursor;
  __int64 record_word_offset_2;
  __int64 record_word_offset_3;
  __int64 record_byte_offset;
  float *weighted_sum;
  __int64 cached_input_value;
  __int64 scaled_index;
  float combined_products;
  float component_delta;
  int saved_component_delta;
  float combined_products_2;
  float component_delta_2;
  int saved_component_delta_2;
  float weighted_sum_2;
  float component_delta_3;
  int saved_component_delta_3;
  float weighted_sum_3;
  float component_delta_4;
  int saved_component_delta_4;
  float weighted_sum_4;
  float component_delta_5;
  int saved_component_delta_5;
  float weighted_sum_5;
  float component_delta_6;
  int saved_component_delta_6;
  float weighted_sum_6;
  float component_delta_7;
  int saved_component_delta_7;
  float weighted_sum_7;
  float component_delta_8;
  __int64 table_value_2;
  bool comparison_result;
  int integer_difference;
  int *saved_remaining_amount;
  int *saved_shifted_bits;
  __int16 loword_result;
  int abs32_result;
  int remaining_bits;
  unsigned __int16 i;
  int cached_i;
  int remaining_amount;
  int shifted_bits;
  unsigned __int64 remaining_count_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 packed_word_bits;
  char *state_address;
  __int64 remaining_amount_2;
  int remaining_amount_3;
  int shifted_bits_2;
  unsigned __int64 remaining_count_3;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  __int64 saved_packed_word_bits;
  int iteration_count;
  __int64 element_index;
  int saved_iteration_count;
  int option_flags;
  unsigned int shifted_bits_3;
  int saved_packed_word_bits_2;
  int cached_table_value;
  int *saved_remaining_amount_2;
  __int64 remaining_count_4;
  int remaining_amount_4;
  int shifted_bits_4;
  unsigned __int64 remaining_count_5;
  __int64 loaded_word_5;
  __int64 loaded_word_6;
  int table_value_3;
  int abs32_result_2;
  __int16 integer_difference_2;
  int remaining_bits_2;
  unsigned __int16 j;
  int *record_pointer;
  int cached_j;
  int remaining_amount_5;
  int shifted_bits_5;
  unsigned __int64 remaining_count_6;
  __int64 loaded_word_7;
  __int64 loaded_word_8;
  int *saved_remaining_amount_3;
  int remaining_amount_6;
  int shifted_bits_6;
  unsigned __int64 remaining_count_7;
  __int64 loaded_word_9;
  __int64 loaded_word_10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140176410[448];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140176410 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(char (*)[8])(void *)(sr_frame_140176410 + 64)) /* [rsp+40h] */
#define table_value_4 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 72)) /* [rsp+48h] */
#define table_value_5 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 74)) /* [rsp+4Ah] */
#define loaded_word_11 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 76)) /* [rsp+4Ch] */
#define input_cursor (*(int * (*))(void *)(sr_frame_140176410 + 80)) /* [rsp+50h] */
#define input_cursor_2 (*(int * (*))(void *)(sr_frame_140176410 + 88)) /* [rsp+58h] */
#define cached_table_value_2 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 96)) /* [rsp+60h] */
#define saved_packed_word_bits_3 (*(__int64 (*))(void *)(sr_frame_140176410 + 104)) /* [rsp+68h] */
#define packed_word_bits_2 (*(__int64 (*))(void *)(sr_frame_140176410 + 112)) /* [rsp+70h] */
#define remaining_count_8 (*(__int64 (*))(void *)(sr_frame_140176410 + 120)) /* [rsp+78h] */
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_140176410 + 128)) /* [rsp+80h] */
#define packed_word_bits_3 (*(__int64 (*))(void *)(sr_frame_140176410 + 136)) /* [rsp+88h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_140176410 + 144)) /* [rsp+90h] */
#define input_value (*(__int64 (*))(void *)(sr_frame_140176410 + 152)) /* [rsp+98h] */
#define input_cursor_3 (*(_WORD * (*))(void *)(sr_frame_140176410 + 160)) /* [rsp+A0h] */
#define scratch_buffer_2 (*(_DWORD (*)[61])(void *)(sr_frame_140176410 + 176)) /* [rsp+B0h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140176410 + 420)) /* [rsp+1A4h] */
#define unused_frame_slot_432 (*(__int64 (*))(void *)(sr_frame_140176410 + 432)) /* [rsp+1B0h] */

  input_value = a1;
  saved_packed_word_bits_3 = (__int64)a8;
  input_cursor_3 = a9;
  packed_word_bits_2 = a4;
  input_cursor_2 = a3;
  loaded_word_11 = *a9;
  table_value_5 = a9[1];
  table_value = a9[480];
  table_value_4 = a9[481];
  input_cursor = a2;
  cached_table_value_2 = table_value;
  if ( 8 * a5 > 0 )
  {
    running_total = 6;
    do
    {
      sub_140176210(
        (float *)(a4 + 4LL * (running_total - 6)),
        (float *)(a4 + 4LL * (running_total - 5)),
        (float *)(a4 + 4LL * (running_total - 4)),
        (float *)(a4 + 4LL * (running_total - 3)),
        (float *)(a4 + 4LL * (running_total - 2)),
        (float *)(a4 + 4LL * (running_total - 1)),
        (float *)(a4 + 4LL * running_total),
        (float *)(a4 + 4LL * (running_total + 1)));
      running_total += a5;
    }
    while ( running_total - 6 < 8 * a5 );
  }
  packed_word_bits_3 = a5;
  remaining_count = 8;
  record_word_offset = 6 * a5;
  remaining_count_8 = 8;
  buffer_cursor = (float *)(a4 + 4 * record_word_offset);
  record_word_offset_2 = 3 * a5 - record_word_offset;
  record_word_offset_3 = 2 * a5 - record_word_offset;
  saved_remaining_count = record_word_offset_2;
  saved_record_word_offset = record_word_offset_3;
  do
  {
    sub_140176210(
      &buffer_cursor[-6 * a5],
      &buffer_cursor[a5 - record_word_offset],
      &buffer_cursor[record_word_offset_3],
      &buffer_cursor[record_word_offset_2],
      &buffer_cursor[4 * a5 - record_word_offset],
      &buffer_cursor[5 * a5 - record_word_offset],
      buffer_cursor,
      &buffer_cursor[7 * a5 - record_word_offset]);
    record_word_offset_2 = saved_remaining_count;
    ++buffer_cursor;
    record_word_offset_3 = saved_record_word_offset;
    --remaining_count;
  }
  while ( remaining_count );
  record_byte_offset = 0;
  weighted_sum = (float *)(packed_word_bits_2 + 8);
  cached_input_value = input_value;
  scaled_index = 4 * packed_word_bits_3;
  do
  {
    combined_products = *(weighted_sum - 2) * *(float *)(a6 + 4 * record_byte_offset);
    if ( combined_products >= 0.0 )
      component_delta = combined_products + 0.5;
    else
      component_delta = combined_products - 0.5;
    saved_component_delta = (int)component_delta;
    combined_products_2 = *(weighted_sum - 1) * *(float *)(a6 + 4 * record_byte_offset + 4);
    scratch_buffer_2[byte_14026E780[record_byte_offset]] = saved_component_delta;
    if ( combined_products_2 >= 0.0 )
      component_delta_2 = combined_products_2 + 0.5;
    else
      component_delta_2 = combined_products_2 - 0.5;
    saved_component_delta_2 = (int)component_delta_2;
    weighted_sum_2 = *(float *)(a6 + 4 * record_byte_offset + 8) * *weighted_sum;
    scratch_buffer_2[byte_14026E780[record_byte_offset + 1]] = saved_component_delta_2;
    if ( weighted_sum_2 >= 0.0 )
      component_delta_3 = weighted_sum_2 + 0.5;
    else
      component_delta_3 = weighted_sum_2 - 0.5;
    saved_component_delta_3 = (int)component_delta_3;
    weighted_sum_3 = *(float *)(a6 + 4 * record_byte_offset + 12) * weighted_sum[1];
    scratch_buffer_2[byte_14026E780[record_byte_offset + 2]] = saved_component_delta_3;
    if ( weighted_sum_3 >= 0.0 )
      component_delta_4 = weighted_sum_3 + 0.5;
    else
      component_delta_4 = weighted_sum_3 - 0.5;
    saved_component_delta_4 = (int)component_delta_4;
    weighted_sum_4 = *(float *)(a6 + 4 * record_byte_offset + 16) * weighted_sum[2];
    scratch_buffer_2[byte_14026E780[record_byte_offset + 3]] = saved_component_delta_4;
    if ( weighted_sum_4 >= 0.0 )
      component_delta_5 = weighted_sum_4 + 0.5;
    else
      component_delta_5 = weighted_sum_4 - 0.5;
    saved_component_delta_5 = (int)component_delta_5;
    weighted_sum_5 = *(float *)(a6 + 4 * record_byte_offset + 20) * weighted_sum[3];
    scratch_buffer_2[byte_14026E780[record_byte_offset + 4]] = saved_component_delta_5;
    if ( weighted_sum_5 >= 0.0 )
      component_delta_6 = weighted_sum_5 + 0.5;
    else
      component_delta_6 = weighted_sum_5 - 0.5;
    saved_component_delta_6 = (int)component_delta_6;
    weighted_sum_6 = *(float *)(a6 + 4 * record_byte_offset + 24) * weighted_sum[4];
    scratch_buffer_2[byte_14026E780[record_byte_offset + 5]] = saved_component_delta_6;
    if ( weighted_sum_6 >= 0.0 )
      component_delta_7 = weighted_sum_6 + 0.5;
    else
      component_delta_7 = weighted_sum_6 - 0.5;
    saved_component_delta_7 = (int)component_delta_7;
    weighted_sum_7 = *(float *)(a6 + 4 * record_byte_offset + 28) * weighted_sum[5];
    scratch_buffer_2[byte_14026E780[record_byte_offset + 6]] = saved_component_delta_7;
    if ( weighted_sum_7 >= 0.0 )
      component_delta_8 = weighted_sum_7 + 0.5;
    else
      component_delta_8 = weighted_sum_7 - 0.5;
    table_value_2 = byte_14026E780[record_byte_offset + 7];
    weighted_sum = (float *)((char *)weighted_sum + scaled_index);
    record_byte_offset += 8;
    comparison_result = remaining_count_8-- == 1;
    scratch_buffer_2[table_value_2] = (int)component_delta_8;
  }
  while ( !comparison_result );
  integer_difference = scratch_buffer_2[0] - a7;
  if ( scratch_buffer_2[0] == a7 )
  {
    saved_remaining_amount = input_cursor_2;
    sub_140176C80(cached_input_value, input_cursor, input_cursor_2, (unsigned __int16 *)saved_packed_word_bits_3);
    saved_shifted_bits = input_cursor;
  }
  else
  {
    loword_result = integer_difference - 1;
    abs32_result = abs32(integer_difference);
    if ( integer_difference >= 0 )
      loword_result = LOWORD(scratch_buffer_2[0]) - a7;
    remaining_bits = abs32_result >> 1;
    for ( i = 1; remaining_bits; remaining_bits >>= 1 )
      ++i;
    saved_remaining_amount = input_cursor_2;
    cached_i = i;
    sub_140176C80(cached_input_value, input_cursor, input_cursor_2, (unsigned __int16 *)(saved_packed_word_bits_3 + 4LL * i));
    saved_shifted_bits = input_cursor;
    remaining_amount = cached_i + *input_cursor_2;
    shifted_bits = *input_cursor | ((unsigned __int16)(loword_result & ((1 << cached_i) - 1)) << (24 - remaining_amount));
    if ( remaining_amount >= 8 )
    {
      remaining_count_2 = (unsigned __int64)(unsigned int)remaining_amount >> 3;
      remaining_amount -= 8 * ((unsigned int)remaining_amount >> 3);
      do
      {
        loaded_word = *(_QWORD *)(cached_input_value + 8);
        scratch_buffer[0] = BYTE2(shifted_bits);
        (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word, scratch_buffer, 1);
        if ( BYTE2(shifted_bits) == 0xFF )
        {
          loaded_word_2 = *(_QWORD *)(cached_input_value + 8);
          scratch_buffer[0] = 0;
          (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_2, scratch_buffer, 1);
        }
        shifted_bits <<= 8;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      saved_shifted_bits = input_cursor;
      saved_remaining_amount = input_cursor_2;
    }
    *saved_shifted_bits = shifted_bits;
    *saved_remaining_amount = remaining_amount;
  }
  LODWORD(packed_word_bits) = 63;
  state_address = &callee_output_word;
  saved_packed_word_bits_3 = 63;
  remaining_amount_2 = 63;
  while ( !*((_DWORD *)state_address + 2) )
  {
    if ( *((_DWORD *)state_address + 1) )
    {
      packed_word_bits = (unsigned int)(packed_word_bits - 1);
      goto LABEL_53;
    }
    if ( *(_DWORD *)state_address )
    {
      packed_word_bits = (unsigned int)(packed_word_bits - 2);
LABEL_53:
      saved_packed_word_bits_3 = packed_word_bits;
      break;
    }
    packed_word_bits = (unsigned int)(packed_word_bits - 3);
    remaining_amount_2 -= 3;
    state_address -= 12;
    saved_packed_word_bits_3 = packed_word_bits;
    if ( remaining_amount_2 <= 0 )
      break;
  }
  if ( (_DWORD)packed_word_bits )
  {
    saved_packed_word_bits = (int)packed_word_bits;
    LODWORD(packed_word_bits_2) = 1;
    iteration_count = 1;
    if ( (int)packed_word_bits < 1LL )
    {
      saved_remaining_amount_3 = input_cursor_2;
    }
    else
    {
      element_index = 1;
      remaining_count_8 = 1;
      do
      {
        saved_iteration_count = iteration_count;
        if ( !scratch_buffer_2[element_index] )
        {
          do
          {
            if ( element_index > saved_packed_word_bits )
              break;
            ++element_index;
            ++iteration_count;
          }
          while ( !scratch_buffer_2[element_index] );
          LODWORD(packed_word_bits_2) = iteration_count;
          remaining_count_8 = element_index;
        }
        option_flags = iteration_count - saved_iteration_count;
        LODWORD(saved_record_word_offset) = iteration_count - saved_iteration_count;
        if ( iteration_count - saved_iteration_count >= 16 )
        {
          shifted_bits_3 = option_flags >> 4;
          if ( option_flags >> 4 >= 1 )
          {
            saved_packed_word_bits_2 = cached_table_value_2;
            cached_table_value = table_value_4;
            saved_remaining_amount_2 = input_cursor_2;
            remaining_count_4 = shifted_bits_3;
            LODWORD(packed_word_bits_3) = cached_table_value_2;
            saved_remaining_count = shifted_bits_3;
            do
            {
              remaining_amount_4 = cached_table_value + *saved_remaining_amount_2;
              shifted_bits_4 = *saved_shifted_bits | (saved_packed_word_bits_2 << (24 - (cached_table_value + *(_BYTE *)saved_remaining_amount_2)));
              if ( remaining_amount_4 >= 8 )
              {
                remaining_count_5 = (unsigned __int64)(unsigned int)remaining_amount_4 >> 3;
                remaining_amount_4 -= 8 * ((unsigned int)remaining_amount_4 >> 3);
                do
                {
                  loaded_word_5 = *(_QWORD *)(cached_input_value + 8);
                  scratch_buffer[0] = BYTE2(shifted_bits_4);
                  (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_5, scratch_buffer, 1);
                  if ( BYTE2(shifted_bits_4) == 0xFF )
                  {
                    loaded_word_6 = *(_QWORD *)(cached_input_value + 8);
                    scratch_buffer[0] = 0;
                    (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_6, scratch_buffer, 1);
                  }
                  shifted_bits_4 <<= 8;
                  --remaining_count_5;
                }
                while ( remaining_count_5 );
                remaining_count_4 = saved_remaining_count;
                cached_table_value = table_value_4;
                saved_packed_word_bits_2 = packed_word_bits_3;
                saved_shifted_bits = input_cursor;
              }
              --remaining_count_4;
              *saved_shifted_bits = shifted_bits_4;
              saved_remaining_count = remaining_count_4;
              *saved_remaining_amount_2 = remaining_amount_4;
            }
            while ( remaining_count_4 );
            element_index = remaining_count_8;
            iteration_count = packed_word_bits_2;
            LOBYTE(option_flags) = saved_record_word_offset;
          }
          option_flags &= 0xFu;
        }
        table_value_3 = scratch_buffer_2[element_index];
        abs32_result_2 = abs32(table_value_3);
        integer_difference_2 = table_value_3 - 1;
        if ( table_value_3 >= 0 )
          integer_difference_2 = table_value_3;
        remaining_bits_2 = abs32_result_2 >> 1;
        for ( j = 1; remaining_bits_2; remaining_bits_2 >>= 1 )
          ++j;
        record_pointer = input_cursor_2;
        cached_j = j;
        sub_140176C80(cached_input_value, saved_shifted_bits, input_cursor_2, &input_cursor_3[32 * option_flags + 2 * j]);
        saved_shifted_bits = input_cursor;
        remaining_amount_5 = cached_j + *record_pointer;
        shifted_bits_5 = *input_cursor | ((unsigned __int16)(integer_difference_2 & ((1 << cached_j) - 1)) << (24 - remaining_amount_5));
        if ( remaining_amount_5 >= 8 )
        {
          remaining_count_6 = (unsigned __int64)(unsigned int)remaining_amount_5 >> 3;
          remaining_amount_5 -= 8 * ((unsigned int)remaining_amount_5 >> 3);
          do
          {
            loaded_word_7 = *(_QWORD *)(cached_input_value + 8);
            scratch_buffer[0] = BYTE2(shifted_bits_5);
            (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_7, scratch_buffer, 1);
            if ( BYTE2(shifted_bits_5) == 0xFF )
            {
              loaded_word_8 = *(_QWORD *)(cached_input_value + 8);
              scratch_buffer[0] = 0;
              (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_8, scratch_buffer, 1);
            }
            shifted_bits_5 <<= 8;
            --remaining_count_6;
          }
          while ( remaining_count_6 );
          iteration_count = packed_word_bits_2;
          saved_shifted_bits = input_cursor;
        }
        saved_remaining_amount_3 = input_cursor_2;
        ++iteration_count;
        LODWORD(packed_word_bits) = saved_packed_word_bits_3;
        ++element_index;
        saved_packed_word_bits = (int)saved_packed_word_bits_3;
        *saved_shifted_bits = shifted_bits_5;
        *saved_remaining_amount_3 = remaining_amount_5;
        LODWORD(packed_word_bits_2) = iteration_count;
        remaining_count_8 = element_index;
      }
      while ( element_index <= saved_packed_word_bits );
    }
    if ( (_DWORD)packed_word_bits != 63 )
    {
      remaining_amount_6 = *saved_remaining_amount_3 + table_value_5;
      shifted_bits_6 = *saved_shifted_bits | (loaded_word_11 << (24 - (*(_BYTE *)saved_remaining_amount_3 + table_value_5)));
      if ( remaining_amount_6 >= 8 )
      {
        remaining_count_7 = (unsigned __int64)(unsigned int)remaining_amount_6 >> 3;
        remaining_amount_6 -= 8 * ((unsigned int)remaining_amount_6 >> 3);
        do
        {
          loaded_word_9 = *(_QWORD *)(cached_input_value + 8);
          scratch_buffer[0] = BYTE2(shifted_bits_6);
          (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_9, scratch_buffer, 1);
          if ( BYTE2(shifted_bits_6) == 0xFF )
          {
            loaded_word_10 = *(_QWORD *)(cached_input_value + 8);
            scratch_buffer[0] = 0;
            (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_10, scratch_buffer, 1);
          }
          shifted_bits_6 <<= 8;
          --remaining_count_7;
        }
        while ( remaining_count_7 );
        saved_shifted_bits = input_cursor;
        saved_remaining_amount_3 = input_cursor_2;
      }
      *saved_shifted_bits = shifted_bits_6;
      *saved_remaining_amount_3 = remaining_amount_6;
    }
  }
  else
  {
    remaining_amount_3 = *saved_remaining_amount + table_value_5;
    shifted_bits_2 = *saved_shifted_bits | (loaded_word_11 << (24 - (*(_BYTE *)saved_remaining_amount + table_value_5)));
    if ( remaining_amount_3 >= 8 )
    {
      remaining_count_3 = (unsigned __int64)(unsigned int)remaining_amount_3 >> 3;
      remaining_amount_3 -= 8 * ((unsigned int)remaining_amount_3 >> 3);
      do
      {
        loaded_word_3 = *(_QWORD *)(cached_input_value + 8);
        scratch_buffer[0] = BYTE2(shifted_bits_2);
        (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_3, scratch_buffer, 1);
        if ( BYTE2(shifted_bits_2) == 0xFF )
        {
          loaded_word_4 = *(_QWORD *)(cached_input_value + 8);
          scratch_buffer[0] = 0;
          (*(void (           **)(__int64, char *, __int64))cached_input_value)(loaded_word_4, scratch_buffer, 1);
        }
        shifted_bits_2 <<= 8;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      saved_shifted_bits = input_cursor;
    }
    *saved_shifted_bits = shifted_bits_2;
    *saved_remaining_amount = remaining_amount_3;
  }
  return (unsigned int)scratch_buffer_2[0]; /* 0x140176C51: mov eax, dword ptr [rbp - 0x50] */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef table_value_4
#undef table_value_5
#undef loaded_word_11
#undef input_cursor
#undef input_cursor_2
#undef cached_table_value_2
#undef saved_packed_word_bits_3
#undef packed_word_bits_2
#undef remaining_count_8
#undef saved_remaining_count
#undef packed_word_bits_3
#undef saved_record_word_offset
#undef input_value
#undef input_cursor_3
#undef scratch_buffer_2
#undef callee_output_word
#undef unused_frame_slot_432

//----- (0000000140176C80) ----------------------------------------------------
__int64            sub_140176C80(__int64 a1, int *a2, int *a3, unsigned __int16 *a4)
{
  int scaled_index;
  int shifted_bits;
  unsigned __int64 remaining_count;
  int shifted_bits_2;
  __int64 loaded_word;
  __int64 result;
  __int64 loaded_word_2;
  char byte2_result;

  scaled_index = *a3 + a4[1];
  shifted_bits = *a2 | (*a4 << (24 - (*(_BYTE *)a3 + a4[1])));
  if ( scaled_index < 8 )
  {
    *a2 = shifted_bits;
    *a3 = scaled_index;
  }
  else
  {
    remaining_count = (unsigned __int64)(unsigned int)scaled_index >> 3;
    shifted_bits_2 = scaled_index - 8 * ((unsigned int)scaled_index >> 3);
    do
    {
      loaded_word = *(_QWORD *)(a1 + 8);
      byte2_result = BYTE2(shifted_bits);
      result = (*(__int64 (           **)(__int64, char *, __int64))a1)(loaded_word, &byte2_result, 1);
      if ( BYTE2(shifted_bits) == 0xFF )
      {
        loaded_word_2 = *(_QWORD *)(a1 + 8);
        byte2_result = 0;
        result = (*(__int64 (           **)(__int64, char *, __int64))a1)(loaded_word_2, &byte2_result, 1);
      }
      shifted_bits <<= 8;
      --remaining_count;
    }
    while ( remaining_count );
    *a2 = shifted_bits;
    *a3 = shifted_bits_2;
  }
  return result;
}

//----- (0000000140176D40) ----------------------------------------------------
char            sub_140176D40(_BYTE *a1, float *a2)
{
  float limited_value;
  float call_result;
  float scaled_ratio;
  float scaled_value;
  char result;
  int callee_output_word;

  limited_value = fmaxf(fmaxf(a2[2], a2[1]), *a2);
  if ( limited_value >= 1.0e-32 )
  {
    call_result = sub_14020B144(limited_value, &callee_output_word);
    scaled_ratio = (float)(call_result * 256.0) / limited_value;
    *a1 = (int)(float)(scaled_ratio * *a2);
    a1[1] = (int)(float)(scaled_ratio * a2[1]);
    scaled_value = scaled_ratio * a2[2];
    result = callee_output_word + 0x80;
    a1[3] = callee_output_word + 0x80;
    a1[2] = (int)scaled_value;
  }
  else
  {
    *(_DWORD *)a1 = 0;
  }
  return result;
}

//----- (0000000140176DF0) ----------------------------------------------------
__int64 sub_140176DF0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        unsigned int a10,
        unsigned __int8 *a11,
        ...)
{
  int integer_difference;
  __int64 remaining_count;
  int running_total;
  int integer_difference_2;
  int running_total_2;
  int scaled_index;
  __int64 running_total_3;
  int saved_running_total;
  int cached_integer_difference;
  int cached_scaled_index;
  int scratch_buffer[3];
  int input_value;
  va_list va;

  va_start(va, a11);
  input_value = a3;
  integer_difference = a3;
  remaining_count = (unsigned int)a4;
  if ( a5 < 0 || a4 < 0 )
    return 0;
  sub_140177AB0(a1, a11, (__int64)va);
  scratch_buffer[0] = 0;
  if ( a5 > 0 )
  {
    if ( g_1449815C0 )
    {
      integer_difference = -integer_difference;
      input_value = integer_difference;
    }
    running_total = a5 - 1;
    integer_difference_2 = -1;
    if ( integer_difference >= 0 )
    {
      running_total = 0;
      integer_difference_2 = a5;
    }
    saved_running_total = running_total;
    cached_integer_difference = integer_difference_2;
    if ( running_total != integer_difference_2 )
    {
      running_total_2 = a6 * remaining_count * running_total;
      scaled_index = a6 * remaining_count * integer_difference;
      cached_scaled_index = scaled_index;
      do
      {
        if ( (int)remaining_count > 0 )
        {
          running_total_3 = a8 + running_total_2;
          do
          {
            sub_1401776D0(a1, a2, a6, a9, a7, running_total_3);
            running_total_3 += a6;
            --remaining_count;
          }
          while ( remaining_count );
          running_total = saved_running_total;
          integer_difference = input_value;
          remaining_count = (unsigned int)a4;
          integer_difference_2 = cached_integer_difference;
          scaled_index = cached_scaled_index;
        }
        if ( *(_DWORD *)(a1 + 80) )
        {
          (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
          *(_DWORD *)(a1 + 80) = 0;
        }
        (*(void (           **)(_QWORD, int *, _QWORD))a1)(*(_QWORD *)(a1 + 8), scratch_buffer, a10);
        running_total += integer_difference;
        running_total_2 += scaled_index;
        saved_running_total = running_total;
      }
      while ( running_total != integer_difference_2 );
    }
  }
  return 1;
}

//----- (0000000140176F90) ----------------------------------------------------
__int64            sub_140176F90(int a1, int a2, int a3)
{
  unsigned __int8 unused_written_slot;
  int integer_difference;
  signed int abs32_result;
  signed int abs32_result_2;
  signed int abs32_result_3;
  __int64 result;
  bool comparison_result;

  unused_written_slot = a1;
  integer_difference = a1 - a3 + a2 - a3;
  abs32_result = abs32(a2 - a3);
  abs32_result_2 = abs32(a1 - a3);
  abs32_result_3 = abs32(integer_difference);
  if ( abs32_result <= abs32_result_2 && abs32_result <= abs32_result_3 )
    return unused_written_slot;
  comparison_result = abs32_result_2 <= abs32_result_3;
  result = (unsigned __int8)a2;
  if ( !comparison_result )
    return (unsigned __int8)a3;
  return result;
}

//----- (0000000140177000) ----------------------------------------------------
__int64            sub_140177000(__int64 a1, char a2)
{
  char input_value;

  input_value = a2;
  return (*(__int64 (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &input_value, 1);
}

//----- (0000000140177030) ----------------------------------------------------
__int64            sub_140177030(__int64 *a1, int a2, int a3)
{
  __int64 loaded_word;
  int loaded_word_2;
  int integer_sum;
  __int64 integer_difference;
  __int64 scaled_index;
  __int64 call_result;
  __int64 integer_sum_2;

  loaded_word = *a1;
  if ( *a1 )
    loaded_word_2 = 2 * *(_DWORD *)(loaded_word - 8);
  else
    loaded_word_2 = 1;
  integer_sum = loaded_word_2 + a2;
  integer_difference = loaded_word - 8;
  scaled_index = a3 * (loaded_word_2 + a2) + 8LL;
  if ( !loaded_word )
    integer_difference = 0;
  call_result = j__realloc_base_sr(integer_difference, scaled_index);
  if ( call_result )
  {
    if ( !*a1 )
      *(_DWORD *)(call_result + 4) = 0;
    integer_sum_2 = call_result + 8;
    *a1 = integer_sum_2;
    *(_DWORD *)(integer_sum_2 - 8) = integer_sum;
    return *a1;
  }
  else
  {
    crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    return *a1;
  }
}

//----- (0000000140177160) ----------------------------------------------------
__int64            sub_140177160(__int64 a1, char a2)
{
  int loaded_word;
  int saved_loaded_word;

  loaded_word = *(_DWORD *)(a1 + 80);
  saved_loaded_word = loaded_word;
  if ( (unsigned int)(loaded_word + 1) > 0x40 && loaded_word )
  {
    (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    saved_loaded_word = 0;
    *(_DWORD *)(a1 + 80) = 0;
  }
  *(_BYTE *)(saved_loaded_word + a1 + 16) = a2;
  ++*(_DWORD *)(a1 + 80);
  return saved_loaded_word;
}

//----- (00000001401771B0) ----------------------------------------------------
__int64            sub_1401771B0(__int64 a1, char a2, char a3, char a4)
{
  int loaded_word;
  int saved_loaded_word;

  loaded_word = *(_DWORD *)(a1 + 80);
  saved_loaded_word = loaded_word;
  if ( (unsigned int)(loaded_word + 3) > 0x40 && loaded_word )
  {
    (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    saved_loaded_word = 0;
  }
  *(_DWORD *)(a1 + 80) = saved_loaded_word + 3;
  *(_BYTE *)(saved_loaded_word + a1 + 16) = a2;
  *(_BYTE *)(saved_loaded_word + a1 + 17) = a3;
  *(_BYTE *)(saved_loaded_word + a1 + 18) = a4;
  return saved_loaded_word;
}

//----- (0000000140177220) ----------------------------------------------------
__int64            sub_140177220(__int64 a1, int a2, __int64 a3)
{
  char input_value;

  input_value = a2;
  if ( a2 > 128 )
    crt_assert((char *)L"length <= 128", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x28Du);
  (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &input_value, 1);
  return (*(__int64 (           **)(_QWORD, __int64, _QWORD))a1)(*(_QWORD *)(a1 + 8), a3, (unsigned int)a2);
}

//----- (0000000140177290) ----------------------------------------------------
__int64            sub_140177290(__int64 a1)
{
  __int64 result;

  if ( *(_DWORD *)(a1 + 80) )
  {
    result = (*(__int64 (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    *(_DWORD *)(a1 + 80) = 0;
  }
  return result;
}

//----- (00000001401772C0) ----------------------------------------------------
__int64            sub_1401772C0(__int64 a1, int a2, int a3, _BYTE *a4, float *a5)
{
  __int64 result;
  float *weighted_sum;
  _BYTE *buffer_cursor;
  __int64 remaining_count;
  unsigned int integer_difference;
  __int64 record_word_offset;
  _BYTE *buffer_cursor_2;
  float *saved_weighted_sum;
  float *saved_weighted_sum_2;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float limited_value;
  char integer_sum;
  int scaled_index;
  int scaled_index_2;
  int scaled_index_3;
  float call_result;
  float scaled_ratio;
  __int64 saved_record_word_offset;
  __int64 remaining_count_2;
  _BYTE *running_total;
  int running_total_2;
  int iteration_count;
  int element_index;
  _BYTE *buffer_cursor_3;
  char scaled_index_4;
  unsigned int integer_difference_2;
  __int64 loaded_word;
  _BYTE *buffer_cursor_4;
  int integer_difference_3;
  float *weighted_sum_2;
  unsigned int integer_difference_4;
  __int64 remaining_count_3;
  __int64 record_word_offset_2;
  float *saved_weighted_sum_3;
  float *saved_weighted_sum_4;
  float scaled_value_4;
  float scaled_value_5;
  float scaled_value_6;
  float limited_value_2;
  float call_result_2;
  float scaled_ratio_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401772C0[240];
#define scratch_buffer (*(char (*)[8])(void *)(sr_frame_1401772C0 + 0)) /* [rsp+28h] */
#define selection_flag (*(int (*))(void *)(sr_frame_1401772C0 + 8)) /* [rsp+30h] */
#define selection_code (*(__int16 (*))(void *)(sr_frame_1401772C0 + 12)) /* [rsp+34h] */
#define unused_written_slot (*(char (*))(void *)(sr_frame_1401772C0 + 14)) /* [rsp+36h] */
#define unused_written_slot_2 (*(char (*))(void *)(sr_frame_1401772C0 + 15)) /* [rsp+37h] */
#define integer_difference_5 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 16)) /* [rsp+38h] */
#define record_word_offset_3 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 24)) /* [rsp+40h] */
#define record_word_offset_4 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 32)) /* [rsp+48h] */
#define integer_difference_6 (*(int (*))(void *)(sr_frame_1401772C0 + 216)) /* [rsp+100h] */
#define input_cursor (*(_BYTE * (*))(void *)(sr_frame_1401772C0 + 232)) /* [rsp+110h] */

  input_cursor = a4;
  result = (unsigned int)(a2 >> 8);
  selection_code = 514;
  unused_written_slot = BYTE1(a2);
  unused_written_slot_2 = a2;
  if ( a2 < 8 )
  {
    if ( a2 <= 0 )
      return result;
  }
  else if ( a2 < 0x8000 )
  {
    weighted_sum = a5;
    buffer_cursor = a4;
    remaining_count = (unsigned int)a2;
    integer_difference_6 = a3 - 3;
    integer_difference = a3 - 3;
    record_word_offset = 2 * a2;
    record_word_offset_4 = 4LL * a3;
    buffer_cursor_2 = &a4[record_word_offset];
    integer_difference_5 = a2 - record_word_offset;
    record_word_offset_3 = 3 * a2 - record_word_offset;
    do
    {
      if ( integer_difference > 1 )
      {
        saved_weighted_sum_2 = weighted_sum;
        saved_weighted_sum = weighted_sum;
      }
      else
      {
        saved_weighted_sum = weighted_sum + 1;
        saved_weighted_sum_2 = weighted_sum + 2;
      }
      scaled_value = *saved_weighted_sum;
      scaled_value_2 = *saved_weighted_sum_2;
      scaled_value_3 = *weighted_sum;
      limited_value = fmaxf(*saved_weighted_sum, *saved_weighted_sum_2);
      if ( *weighted_sum > limited_value )
        limited_value = *weighted_sum;
      if ( limited_value >= 1.0e-32 )
      {
        call_result = sub_14020B144(limited_value, &integer_difference_6);
        integer_sum = integer_difference_6 + 0x80;
        HIBYTE(selection_flag) = integer_difference_6 + 0x80;
        scaled_ratio = (float)(call_result * 256.0) / limited_value;
        scaled_index_3 = (int)(float)(scaled_value_3 * scaled_ratio);
        scaled_index_2 = (int)(float)(scaled_value * scaled_ratio);
        LOBYTE(selection_flag) = scaled_index_3;
        scaled_index = (int)(float)(scaled_value_2 * scaled_ratio);
        BYTE1(selection_flag) = scaled_index_2;
        BYTE2(selection_flag) = scaled_index;
      }
      else
      {
        integer_sum = 0;
        selection_flag = 0;
        LOBYTE(scaled_index) = 0;
        LOBYTE(scaled_index_2) = 0;
        LOBYTE(scaled_index_3) = 0;
      }
      weighted_sum = (float *)((char *)weighted_sum + record_word_offset_4);
      *buffer_cursor++ = scaled_index_3;
      buffer_cursor_2[integer_difference_5] = scaled_index_2;
      saved_record_word_offset = record_word_offset_3;
      *buffer_cursor_2 = scaled_index;
      (buffer_cursor_2++)[saved_record_word_offset] = integer_sum;
      --remaining_count;
    }
    while ( remaining_count );
    remaining_count_2 = 4;
    (*(void (           **)(_QWORD, __int16 *, __int64))a1)(*(_QWORD *)(a1 + 8), &selection_code, 4);
    running_total = input_cursor;
    do
    {
      running_total_2 = 0;
      do
      {
        iteration_count = running_total_2 + 2;
        element_index = running_total_2;
        if ( running_total_2 + 2 < a2 )
        {
          buffer_cursor_3 = &running_total[running_total_2 + 2];
          do
          {
            scaled_index_4 = *(buffer_cursor_3 - 2);
            if ( scaled_index_4 == *(buffer_cursor_3 - 1) && scaled_index_4 == *buffer_cursor_3 )
              break;
            ++element_index;
            ++iteration_count;
            ++buffer_cursor_3;
          }
          while ( iteration_count < a2 );
        }
        if ( element_index + 2 >= a2 )
          element_index = a2;
        for ( ; running_total_2 < element_index; running_total_2 += integer_difference_2 )
        {
          integer_difference_2 = element_index - running_total_2;
          if ( element_index - running_total_2 > 128 )
            integer_difference_2 = 128;
          loaded_word = *(_QWORD *)(a1 + 8);
          LOBYTE(integer_difference_6) = integer_difference_2;
          (*(void (           **)(__int64, int *, __int64))a1)(loaded_word, &integer_difference_6, 1);
          (*(void (           **)(_QWORD, _BYTE *, _QWORD))a1)(*(_QWORD *)(a1 + 8), &running_total[running_total_2], integer_difference_2);
        }
        if ( element_index + 2 < a2 )
        {
          if ( element_index < a2 )
          {
            buffer_cursor_4 = &running_total[element_index];
            do
            {
              if ( *buffer_cursor_4 != running_total[running_total_2] )
                break;
              ++element_index;
              ++buffer_cursor_4;
            }
            while ( element_index < a2 );
          }
          for ( ; running_total_2 < element_index; running_total_2 += integer_difference_3 )
          {
            integer_difference_3 = element_index - running_total_2;
            scratch_buffer[0] = running_total[running_total_2];
            if ( element_index - running_total_2 <= 127 )
            {
              LOBYTE(integer_difference_6) = integer_difference_3 + 0x80;
              if ( integer_difference_3 + 128 > 255 )
                crt_assert(
                  (char *)L"length+128 <= 255",
                  (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
                  0x285u);
            }
            else
            {
              integer_difference_3 = 127;
              LOBYTE(integer_difference_6) = -1;
            }
            (*(void (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &integer_difference_6, 1);
            (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), scratch_buffer, 1);
          }
        }
      }
      while ( running_total_2 < a2 );
      result = a2;
      running_total += a2;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    return result;
  }
  weighted_sum_2 = a5;
  integer_difference_4 = a3 - 3;
  remaining_count_3 = (unsigned int)a2;
  record_word_offset_2 = 4LL * a3;
  do
  {
    if ( integer_difference_4 > 1 )
    {
      saved_weighted_sum_4 = weighted_sum_2;
      saved_weighted_sum_3 = weighted_sum_2;
    }
    else
    {
      saved_weighted_sum_3 = weighted_sum_2 + 1;
      saved_weighted_sum_4 = weighted_sum_2 + 2;
    }
    scaled_value_4 = *saved_weighted_sum_3;
    scaled_value_5 = *saved_weighted_sum_4;
    scaled_value_6 = *weighted_sum_2;
    limited_value_2 = fmaxf(*saved_weighted_sum_3, *saved_weighted_sum_4);
    if ( *weighted_sum_2 > limited_value_2 )
      limited_value_2 = *weighted_sum_2;
    if ( limited_value_2 >= 1.0e-32 )
    {
      call_result_2 = sub_14020B144(limited_value_2, &integer_difference_6);
      scaled_ratio_2 = (float)(call_result_2 * 256.0) / limited_value_2;
      LOBYTE(selection_flag) = (int)(float)(scaled_value_6 * scaled_ratio_2);
      BYTE1(selection_flag) = (int)(float)(scaled_value_4 * scaled_ratio_2);
      BYTE2(selection_flag) = (int)(float)(scaled_value_5 * scaled_ratio_2);
      HIBYTE(selection_flag) = integer_difference_6 + 0x80;
    }
    else
    {
      selection_flag = 0;
    }
    result = (*(__int64 (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &selection_flag, 4);
    weighted_sum_2 = (float *)((char *)weighted_sum_2 + record_word_offset_2);
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  return result;
}
#undef scratch_buffer
#undef selection_flag
#undef selection_code
#undef unused_written_slot
#undef unused_written_slot_2
#undef integer_difference_5
#undef record_word_offset_3
#undef record_word_offset_4
#undef integer_difference_6
#undef input_cursor

//----- (00000001401776D0) ----------------------------------------------------
__int64            sub_1401776D0(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 input_value_3;
  int loaded_word;
  char loaded_word_2;
  __int64 result;
  int loaded_word_3;
  int loaded_word_4;
  unsigned int saved_loaded_word;
  int loaded_word_5;
  char input_byte;
  int loaded_word_6;
  int saved_loaded_word_2;
  char loaded_word_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401776D0[16];
#define loaded_word_8 (*(char (*))(void *)(sr_frame_1401776D0 + 0)) /* [rsp+50h] */
#define integer_quotient (*(char (*))(void *)(sr_frame_1401776D0 + 1)) /* [rsp+51h] */
#define unused_written_slot (*(char (*))(void *)(sr_frame_1401776D0 + 2)) /* [rsp+52h] */

  input_value = a6;
  input_value_2 = a3;
  input_value_3 = a2;
  if ( a4 < 0 )
  {
    loaded_word = *(_DWORD *)(a1 + 80);
    loaded_word_2 = *(_BYTE *)(a3 + a6 - 1);
    if ( (unsigned int)(loaded_word + 1) > 0x40 && loaded_word )
    {
      (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
      loaded_word = 0;
      *(_DWORD *)(a1 + 80) = 0;
    }
    result = loaded_word;
    *(_BYTE *)(loaded_word + a1 + 16) = loaded_word_2;
    ++*(_DWORD *)(a1 + 80);
  }
  if ( (int)input_value_2 <= 0 )
    goto LABEL_16;
  if ( (int)input_value_2 <= 2 )
  {
    input_byte = *(_BYTE *)input_value;
    if ( a5 )
      result = sub_1401771B0(a1, input_byte, input_byte, input_byte);
    else
      result = sub_140177160(a1, input_byte);
  }
  else
  {
    if ( (_DWORD)input_value_2 != 3 )
    {
      if ( (_DWORD)input_value_2 != 4 )
        goto LABEL_16;
      if ( !a4 )
      {
        loaded_word_3 = *(unsigned __int8 *)(input_value + 3);
        loaded_word_4 = loaded_word_3 * *(unsigned __int8 *)(input_value + 1);
        loaded_word_8 = -(char)(loaded_word_3 * (*(_BYTE *)input_value + 1)) - 1;
        saved_loaded_word = loaded_word_4;
        loaded_word_5 = loaded_word_3 * (*(unsigned __int8 *)(input_value + 2) - 255);
        integer_quotient = saved_loaded_word / 0xFF;
        unused_written_slot = ((int)((unsigned __int64)(2155905153LL * loaded_word_5) >> 32) >> 7 < 0)
            + ((int)((unsigned __int64)(2155905153LL * loaded_word_5) >> 32) >> 7)
            - 1;
        return sub_1401771B0(a1, *(&loaded_word_8 + 1 - (int)input_value_3), integer_quotient, *(&integer_quotient + input_value_3));
      }
    }
    result = sub_1401771B0(a1, *(_BYTE *)(1 - (int)input_value_3 + input_value), *(_BYTE *)(input_value + 1), *(_BYTE *)(input_value_3 + input_value + 1));
  }
LABEL_16:
  if ( a4 > 0 )
  {
    loaded_word_6 = *(_DWORD *)(a1 + 80);
    saved_loaded_word_2 = loaded_word_6;
    loaded_word_7 = *(_BYTE *)(input_value_2 + input_value - 1);
    if ( (unsigned int)(loaded_word_6 + 1) > 0x40 )
    {
      if ( loaded_word_6 )
      {
        (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
        saved_loaded_word_2 = 0;
        *(_DWORD *)(a1 + 80) = 0;
      }
    }
    *(_BYTE *)(saved_loaded_word_2 + a1 + 16) = loaded_word_7;
    ++*(_DWORD *)(a1 + 80);
    return saved_loaded_word_2;
  }
  return result;
}
#undef loaded_word_8
#undef integer_quotient
#undef unused_written_slot

//----- (0000000140177890) ----------------------------------------------------
__int64            sub_140177890(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        unsigned int a9,
        int a10)
{
  __int64 result;
  int integer_difference;
  int running_total;
  int integer_difference_2;
  int running_total_2;
  int scaled_index;
  __int64 running_total_3;
  __int64 remaining_count;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177890[128];
#define cached_integer_difference (*(int (*))(void *)(sr_frame_140177890 + 0)) /* [rsp+30h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_140177890 + 4)) /* [rsp+34h] */
#define selection_flag (*(int (*))(void *)(sr_frame_140177890 + 8)) /* [rsp+38h] */
#define integer_difference_3 (*(int (*))(void *)(sr_frame_140177890 + 96)) /* [rsp+90h] */
#define input_value (*(int (*))(void *)(sr_frame_140177890 + 104)) /* [rsp+98h] */
#define saved_running_total (*(int (*))(void *)(sr_frame_140177890 + 112)) /* [rsp+A0h] */

  input_value = a4;
  integer_difference_3 = a3;
  result = (unsigned int)a5;
  selection_flag = 0;
  integer_difference = a3;
  if ( a5 > 0 )
  {
    if ( g_1449815C0 )
    {
      integer_difference = -a3;
      integer_difference_3 = -a3;
    }
    running_total = a5 - 1;
    integer_difference_2 = -1;
    if ( integer_difference >= 0 )
    {
      running_total = 0;
      integer_difference_2 = a5;
    }
    saved_running_total = running_total;
    cached_integer_difference = integer_difference_2;
    if ( running_total != integer_difference_2 )
    {
      running_total_2 = a6 * a4 * running_total;
      scaled_index = a6 * a4 * integer_difference;
      cached_scaled_index = scaled_index;
      do
      {
        if ( a4 > 0 )
        {
          running_total_3 = a7 + running_total_2;
          remaining_count = (unsigned int)a4;
          do
          {
            sub_1401776D0(a1, a2, a6, a8, a10, running_total_3);
            running_total_3 += a6;
            --remaining_count;
          }
          while ( remaining_count );
          integer_difference = integer_difference_3;
          running_total = saved_running_total;
          integer_difference_2 = cached_integer_difference;
          scaled_index = cached_scaled_index;
        }
        if ( *(_DWORD *)(a1 + 80) )
        {
          (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
          *(_DWORD *)(a1 + 80) = 0;
        }
        result = (*(__int64 (           **)(_QWORD, int *, _QWORD))a1)(*(_QWORD *)(a1 + 8), &selection_flag, a9);
        a4 = input_value;
        running_total += integer_difference;
        running_total_2 += scaled_index;
        saved_running_total = running_total;
      }
      while ( running_total != integer_difference_2 );
    }
  }
  return result;
}
#undef cached_integer_difference
#undef cached_scaled_index
#undef selection_flag
#undef integer_difference_3
#undef input_value
#undef saved_running_total

//----- (0000000140177A10) ----------------------------------------------------
__int64            sub_140177A10(__int64 a1, int a2, char a3)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177A10[16];
#define integer_sum (*(char (*))(void *)(sr_frame_140177A10 + 0)) /* [rsp+38h] */
#define input_value (*(char (*))(void *)(sr_frame_140177A10 + 8)) /* [rsp+40h] */

  input_value = a3;
  integer_sum = a2 + 0x80;
  if ( a2 + 128 > 255 )
    crt_assert(
      (char *)L"length+128 <= 255",
      (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
      0x285u);
  (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &integer_sum, 1);
  return (*(__int64 (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &input_value, 1);
}
#undef integer_sum
#undef input_value

//----- (0000000140177A80) ----------------------------------------------------
__int64 sub_140177A80(__int64 a1, unsigned __int8 *a2, ...)
{
  va_list va;

  va_start(va, a2);
  return sub_140177AB0(a1, a2, (__int64)va);
}

//----- (0000000140177AB0) ----------------------------------------------------
__int64            sub_140177AB0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result;
  unsigned __int8 *buffer_cursor;
  __int64 record_byte_offset;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int loaded_word;
  __int16 *state_address;
  __int64 selection_code;
  int loaded_word_2;
  int loaded_word_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177AB0[64];
#define saved_loaded_word (*(int (*))(void *)(sr_frame_140177AB0 + 0)) /* [rsp+20h] */
#define saved_loaded_word_2 (*(char (*))(void *)(sr_frame_140177AB0 + 40)) /* [rsp+48h] */
#define saved_loaded_word_3 (*(__int16 (*))(void *)(sr_frame_140177AB0 + 56)) /* [rsp+58h] */

  result = *a2;
  buffer_cursor = a2;
  if ( (_BYTE)result )
  {
    record_byte_offset = a3 - 8;
    do
    {
      ++buffer_cursor;
      integer_difference = (char)result - 32;
      if ( integer_difference )
      {
        integer_difference_2 = integer_difference - 17;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 1;
          if ( integer_difference_3 )
          {
            if ( integer_difference_3 != 2 )
              return crt_assert(
                       (char *)L"0",
                       (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
                       0x173u);
            loaded_word = *(_DWORD *)(record_byte_offset + 8);
            state_address = (__int16 *)&saved_loaded_word;
            record_byte_offset += 8;
            saved_loaded_word = loaded_word;
            selection_code = 4;
          }
          else
          {
            loaded_word_2 = *(_DWORD *)(record_byte_offset + 8);
            state_address = &saved_loaded_word_3;
            record_byte_offset += 8;
            saved_loaded_word_3 = loaded_word_2;
            selection_code = 2;
          }
        }
        else
        {
          loaded_word_3 = *(unsigned __int8 *)(record_byte_offset + 8);
          state_address = (__int16 *)&saved_loaded_word_2;
          record_byte_offset += 8;
          saved_loaded_word_2 = loaded_word_3;
          selection_code = 1;
        }
        (*(void (           **)(_QWORD, __int16 *, __int64))a1)(*(_QWORD *)(a1 + 8), state_address, selection_code);
      }
      result = *buffer_cursor;
    }
    while ( (_BYTE)result );
  }
  return result;
}
#undef saved_loaded_word
#undef saved_loaded_word_2
#undef saved_loaded_word_3

//----- (0000000140177C80) ----------------------------------------------------
_DWORD *           sub_140177C80(_DWORD *a1, _BYTE *a2, int *a3)
{
  _DWORD *integer_sum;
  int *record_pointer;
  int scaled_index;
  int *record_pointer_2;
  int *returned_pointer;

  integer_sum = a1;
  if ( *a3 >= 8 )
  {
    record_pointer = a1 - 2;
    while ( integer_sum )
    {
      if ( *(integer_sum - 1) + 1 >= *record_pointer )
      {
        scaled_index = 2 * *record_pointer + 1;
LABEL_7:
        record_pointer_2 = record_pointer;
        if ( !integer_sum )
          record_pointer_2 = nullptr;
        returned_pointer = (int *)j__realloc_base_sr(record_pointer_2, scaled_index + 8LL);
        if ( returned_pointer )
        {
          if ( !integer_sum )
            returned_pointer[1] = 0;
          integer_sum = returned_pointer + 2;
          record_pointer = returned_pointer;
          *returned_pointer = scaled_index;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      *((_BYTE *)integer_sum + (int)(*(integer_sum - 1))++) = *a2;
      *(_DWORD *)a2 >>= 8;
      *a3 -= 8;
      if ( *a3 < 8 )
        return integer_sum;
    }
    scaled_index = 2;
    goto LABEL_7;
  }
  return integer_sum;
}

//----- (0000000140177D70) ----------------------------------------------------
__int64            sub_140177D70(_DWORD *a1, __int64 a2, int a3)
{
  __int64 input_value;
  int iteration_count;
  int table_value;
  int *running_total;
  int table_value_2;
  __int64 iteration_count_2;
  __int64 result;
  int loaded_word;
  int table_value_3;
  __int64 remaining_count;
  _DWORD *running_total_2;

  input_value = a3;
  iteration_count = 0;
  if ( a3 > 0 )
  {
    table_value = a1[2];
    running_total = (int *)(a2 + 12);
    table_value_2 = a1[3];
    iteration_count_2 = 0;
    do
    {
      if ( table_value + *running_total > *a1 )
      {
        table_value_2 = a1[4];
        table_value = 0;
        a1[3] = table_value_2;
        a1[2] = 0;
      }
      if ( table_value_2 + running_total[1] > a1[1] )
        break;
      *(running_total - 3) = table_value;
      result = (unsigned int)a1[3];
      loaded_word = *running_total;
      *(running_total - 2) = result;
      running_total[2] = 1;
      table_value = a1[2] + loaded_word;
      table_value_2 = a1[3];
      a1[2] = table_value;
      table_value_3 = table_value_2 + running_total[1];
      if ( table_value_3 > a1[4] )
        a1[4] = table_value_3;
      ++iteration_count;
      ++iteration_count_2;
      running_total += 6;
    }
    while ( iteration_count_2 < input_value );
  }
  if ( iteration_count < input_value )
  {
    result = 3LL * iteration_count;
    remaining_count = input_value - iteration_count;
    running_total_2 = (_DWORD *)(a2 + 20 + 24LL * iteration_count);
    do
    {
      *running_total_2 = 0;
      running_total_2 += 6;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

//----- (0000000140177E50) ----------------------------------------------------
__int64            sub_140177E50(
        __int64 a1,
        unsigned int a2,
        float a3,
        _WORD *a4,
        signed int a5,
        signed int a6,
        int a7,
        int a8,
        __int64 a9)
{
  unsigned int table_value;
  unsigned int return_value;
  int cached_return_value;
  int running_total;
  int integer_sum;
  float shifted_bits;
  int masked_bits;
  int saved_masked_bits;
  __int64 loaded_word;
  __int16 shifted_bits_2;
  __int64 shifted_bits_3;
  int masked_bits_2;
  int shifted_bits_4;
  int shifted_bits_5;
  int dword1_result;
  int dword2_result;
  int masked_bits_3;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  __m128 vector_result;
  __m128d converted_vector;
  int table_value_5;
  __m128 vector_result_2;
  __m128d converted_vector_2;
  int table_value_6;
  __m128 vector_result_3;
  __m128d converted_vector_3;
  int table_value_7;
  __m128 vector_result_4;
  __m128d converted_vector_4;
  int table_value_8;
  int integer_difference;
  int integer_difference_2;
  signed int integer_sum_2;
  int cached_return_value_2;
  signed int integer_sum_3;
  __int16 integer_sum_4;
  __int64 saved_iteration_count;
  __m128i converted_vector_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177E50[176];
#define cached_return_value_3 (*(int (*))(void *)(sr_frame_140177E50 + 0)) /* [rsp+50h] */
#define cached_return_value_4 (*(int (*))(void *)(sr_frame_140177E50 + 4)) /* [rsp+54h] */
#define iteration_count (*(int (*))(void *)(sr_frame_140177E50 + 8)) /* [rsp+58h] */
#define saved_shifted_bits (*(int (*))(void *)(sr_frame_140177E50 + 12)) /* [rsp+5Ch] */
#define iteration_count_2 (*(__int64 (*))(void *)(sr_frame_140177E50 + 24)) /* [rsp+68h] */
#define running_total_2 (*(__int64 (*))(void *)(sr_frame_140177E50 + 32)) /* [rsp+70h] */
#define selection_flag (*(__int64 (*))(void *)(sr_frame_140177E50 + 40)) /* [rsp+78h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140177E50 + 48)) /* [rsp+80h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_140177E50 + 64)) /* [rsp+90h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140177E50 + 80)) /* [rsp+A0h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140177E50 + 88)) /* [rsp+A8h] */
#define selection_flag_3 (*(__int64 (*))(void *)(sr_frame_140177E50 + 96)) /* [rsp+B0h] */
#define frame_word_at_104 (*(__int64 (*))(void *)(sr_frame_140177E50 + 104)) /* [rsp+B8h] */
#define frame_word_at_132 (*(int (*))(void *)(sr_frame_140177E50 + 132)) /* [rsp+D4h] */
#define frame_word_at_136 (*(int (*))(void *)(sr_frame_140177E50 + 136)) /* [rsp+D8h] */
#define frame_word_at_172 (*(int (*))(void *)(sr_frame_140177E50 + 172)) /* [rsp+FCh] */

  table_value = 0;
  selection_flag_3 = 0;
  if ( !(unsigned int)sub_14017B740((__int64)&selection_flag_3, a1, a2) )
    return 0xFFFFFFFFLL;
  crt_memset((void *)(uintptr_t)(a4), 0, a6 * a5);
  return_value = 1;
  cached_return_value = 1;
  running_total = 1;
  cached_return_value_4 = 1;
  integer_sum = 0;
  iteration_count = 0;
  shifted_bits = a3
      / (float)((__int16)(*(unsigned __int8 *)(frame_word_at_132 + frame_word_at_104 + 5) + (*(unsigned __int8 *)(frame_word_at_132 + frame_word_at_104 + 4) << 8))
              - (__int16)(*(unsigned __int8 *)(frame_word_at_132 + frame_word_at_104 + 7) + (*(unsigned __int8 *)(frame_word_at_132 + frame_word_at_104 + 6) << 8)));
  if ( a8 > 0 )
  {
    iteration_count_2 = 0;
    running_total_2 = a9 + 4;
    do
    {
      masked_bits = sub_140178410((__int64)&selection_flag_3, a7 + integer_sum);
      saved_masked_bits = masked_bits;
      loaded_word = *(unsigned __int8 *)(frame_word_at_132 + frame_word_at_104 + 35);
      if ( masked_bits >= (int)(loaded_word + (*(unsigned __int8 *)(frame_word_at_132 + frame_word_at_104 + 34) << 8)) )
      {
        shifted_bits_3 = loaded_word + ((unsigned __int64)*(unsigned __int8 *)(frame_word_at_132 + frame_word_at_104 + 34) << 8);
        shifted_bits_2 = (*(unsigned __int8 *)(frame_word_at_136 + frame_word_at_104 + 4 * shifted_bits_3 - 4) << 8) + *(unsigned __int8 *)(frame_word_at_136 + frame_word_at_104 + 4 * shifted_bits_3 - 3);
      }
      else
      {
        shifted_bits_2 = *(unsigned __int8 *)(frame_word_at_136 + frame_word_at_104 + 4 * masked_bits + 1) + (*(unsigned __int8 *)(frame_word_at_136 + frame_word_at_104 + 4 * masked_bits) << 8);
      }
      saved_shifted_bits = shifted_bits_2;
      if ( frame_word_at_172 )
      {
        selection_flag = 1;
        unused_written_slot_2 = 0;
        unused_written_slot_3 = 0;
        unused_written_slot = 0;
        selection_flag_2 = 0;
        masked_bits_2 = sub_140182AD0((__int64)&selection_flag_3, masked_bits, (__int64)&selection_flag);
        shifted_bits_4 = 0;
        shifted_bits_5 = 0;
        dword1_result = 0;
        if ( masked_bits_2 )
          shifted_bits_4 = HIDWORD(selection_flag_2);
        dword2_result = 0;
        if ( masked_bits_2 )
        {
          shifted_bits_5 = selection_flag_2;
          dword1_result = DWORD1(selection_flag_2);
          dword2_result = DWORD2(selection_flag_2);
        }
      }
      else
      {
        masked_bits_3 = sub_14017DA60((__int64)&selection_flag_3, masked_bits);
        if ( masked_bits_3 < 0 )
        {
          table_value_2 = 0;
          table_value_3 = 0;
          table_value_4 = 0;
          goto LABEL_30;
        }
        shifted_bits_4 = (__int16)(*(unsigned __int8 *)(masked_bits_3 + frame_word_at_104 + 9) + (*(unsigned __int8 *)(masked_bits_3 + frame_word_at_104 + 8) << 8));
        shifted_bits_5 = (__int16)(*(unsigned __int8 *)(masked_bits_3 + frame_word_at_104 + 3) + (*(unsigned __int8 *)(masked_bits_3 + frame_word_at_104 + 2) << 8));
        dword1_result = (__int16)(*(unsigned __int8 *)(masked_bits_3 + frame_word_at_104 + 7) + (*(unsigned __int8 *)(masked_bits_3 + frame_word_at_104 + 6) << 8));
        dword2_result = (__int16)(*(unsigned __int8 *)(masked_bits_3 + frame_word_at_104 + 5) + (*(unsigned __int8 *)(masked_bits_3 + frame_word_at_104 + 4) << 8));
      }
      vector_result = _mm_set_ss((float)-dword2_result);
      SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] * shifted_bits;
      converted_vector = _mm_cvtps_pd(vector_result);
      table_value_5 = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
      if ( (double)table_value_5 != SR_VEC_LANES(128, converted_vector, f64)[0] )
        SR_VEC_LANES(128, converted_vector, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1) + table_value_5);
      vector_result_2 = _mm_set_ss((float)dword1_result);
      table_value_2 = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
      SR_VEC_LANES(128, vector_result_2, f32)[0] = SR_VEC_LANES(128, vector_result_2, f32)[0] * shifted_bits;
      converted_vector_2 = _mm_cvtps_pd(vector_result_2);
      table_value_6 = (int)SR_VEC_LANES(128, converted_vector_2, f64)[0];
      if ( (double)table_value_6 != SR_VEC_LANES(128, converted_vector_2, f64)[0] )
        SR_VEC_LANES(128, converted_vector_2, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_2, converted_vector_2)) & 1) + table_value_6);
      vector_result_3 = _mm_set_ss((float)shifted_bits_5);
      table_value_3 = (int)SR_VEC_LANES(128, converted_vector_2, f64)[0];
      SR_VEC_LANES(128, vector_result_3, f32)[0] = SR_VEC_LANES(128, vector_result_3, f32)[0] * shifted_bits;
      converted_vector_3 = _mm_cvtps_pd(vector_result_3);
      table_value_7 = (int)SR_VEC_LANES(128, converted_vector_3, f64)[0];
      if ( (double)table_value_7 != SR_VEC_LANES(128, converted_vector_3, f64)[0] )
        SR_VEC_LANES(128, converted_vector_3, f64)[0] = (double)(table_value_7 - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_3, converted_vector_3)) & 1));
      table_value = (int)SR_VEC_LANES(128, converted_vector_3, f64)[0];
      vector_result_4 = _mm_set_ss((float)-shifted_bits_4);
      SR_VEC_LANES(128, vector_result_4, f32)[0] = SR_VEC_LANES(128, vector_result_4, f32)[0] * shifted_bits;
      converted_vector_4 = _mm_cvtps_pd(vector_result_4);
      table_value_8 = (int)SR_VEC_LANES(128, converted_vector_4, f64)[0];
      if ( (double)table_value_8 != SR_VEC_LANES(128, converted_vector_4, f64)[0] )
        SR_VEC_LANES(128, converted_vector_4, f64)[0] = (double)(table_value_8 - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_4, converted_vector_4)) & 1));
      table_value_4 = (int)SR_VEC_LANES(128, converted_vector_4, f64)[0];
LABEL_30:
      integer_difference = table_value_3 - table_value;
      integer_difference_2 = table_value_2 - table_value_4;
      integer_sum_2 = integer_difference + running_total + 1;
      if ( integer_sum_2 >= a5 )
        running_total = 1;
      cached_return_value_2 = cached_return_value_4;
      if ( integer_sum_2 < a5 )
        cached_return_value_2 = cached_return_value;
      cached_return_value_3 = cached_return_value_2;
      integer_sum_3 = integer_difference_2 + cached_return_value_2 + 1;
      if ( integer_sum_3 >= a6 )
        return (unsigned int)-iteration_count;
      if ( integer_difference + running_total >= a5 )
        crt_assert((char *)L"x+gw < pw", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xE47u);
      if ( integer_difference_2 + cached_return_value_3 >= a6 )
        crt_assert((char *)L"y+gh < ph", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xE48u);
      sub_14017C040((__int64)&selection_flag_3, (__int64)a4 + a5 * cached_return_value_3 + running_total, integer_difference, integer_difference_2, a5, shifted_bits, shifted_bits, 0.0, 0, saved_masked_bits);
      *(_WORD *)(running_total_2 - 4) = running_total;
      *(_WORD *)(running_total_2 - 2) = cached_return_value_3;
      integer_sum_4 = integer_difference_2 + cached_return_value_3;
      saved_iteration_count = iteration_count_2;
      *(_WORD *)running_total_2 = integer_difference + running_total;
      running_total += integer_difference + 1;
      *(_WORD *)(running_total_2 + 2) = integer_sum_4;
      if ( integer_sum_3 <= cached_return_value_4 )
        integer_sum_3 = cached_return_value_4;
      integer_sum = iteration_count + 1;
      return_value = integer_sum_3;
      cached_return_value = cached_return_value_3;
      ++iteration_count_2;
      cached_return_value_4 = return_value;
      ++iteration_count;
      *(float *)(running_total_2 + 12) = (float)saved_shifted_bits * shifted_bits;
      converted_vector_5 = _mm_cvtsi32_si128(table_value);
      table_value = 0;
      *(float *)(running_total_2 + 8) = (float)table_value_4;
      *(_DWORD *)(running_total_2 + 4) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_5), u32)[0];
      running_total_2 += 20;
    }
    while ( saved_iteration_count + 1 < a8 );
  }
  return return_value;
}
#undef cached_return_value_3
#undef cached_return_value_4
#undef iteration_count
#undef saved_shifted_bits
#undef iteration_count_2
#undef running_total_2
#undef selection_flag
#undef unused_written_slot
#undef selection_flag_2
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef selection_flag_3
#undef frame_word_at_104
#undef frame_word_at_132
#undef frame_word_at_136
#undef frame_word_at_172

// 1401780F2: conditional instruction was optimized away because rcx.8<100000000u
// 14017813A: conditional instruction was optimized away because rcx.8<100000000u
// 140178181: conditional instruction was optimized away because rcx.8<100000000u
// 1401781CA: conditional instruction was optimized away because rcx.8<100000000u

//----- (00000001401783D0) ----------------------------------------------------
_BOOL8            sub_1401783D0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  return a2 == (unsigned int)sub_14017D6B0(a1, a2, a3, a4);
}

//----- (00000001401783F0) ----------------------------------------------------
_BOOL8            sub_1401783F0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  return a2 == (unsigned int)sub_14017D6B0(a1, a2, a3, a4);
}

//----- (0000000140178410) ----------------------------------------------------
__int64            sub_140178410(__int64 a1, int a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 saved_loaded_word;
  __int16 shifted_bits;
  unsigned int shifted_bits_2;
  unsigned int line;
  __int16 loaded_word_3;
  __int16 loaded_word_4;
  __int16 loaded_word_5;
  unsigned __int16 shifted_bits_3;
  unsigned __int16 shifted_bits_4;
  __int16 shifted_bits_5;
  __int64 integer_sum;
  int scaled_index;
  unsigned __int16 remaining_bits;
  __int16 remaining_count;
  unsigned __int16 shifted_bits_6;
  unsigned int i;
  __int64 shifted_bits_7;
  __int64 scaled_index_2;
  int shifted_bits_8;
  unsigned __int16 shifted_bits_9;
  __int64 scaled_index_3;
  int integer_sum_2;
  int shifted_bits_10;
  int shifted_bits_11;
  __int64 scaled_index_4;
  unsigned __int8 *record_pointer;
  unsigned int shifted_bits_12;
  unsigned int shifted_bits_13;

  loaded_word = *(unsigned int *)(a1 + 52);
  loaded_word_2 = *(_QWORD *)(a1 + 8);
  saved_loaded_word = loaded_word;
  shifted_bits = *(unsigned __int8 *)(loaded_word + loaded_word_2 + 1) + (*(unsigned __int8 *)(loaded_word + loaded_word_2) << 8);
  switch ( shifted_bits )
  {
    case 0:
      if ( a2 < *(unsigned __int8 *)(loaded_word + loaded_word_2 + 3) - 6 + (*(unsigned __int8 *)(loaded_word + loaded_word_2 + 2) << 8) )
        return *(unsigned __int8 *)(loaded_word + a2 + loaded_word_2 + 6);
      return 0;
    case 6:
      shifted_bits_2 = *(unsigned __int8 *)(loaded_word + loaded_word_2 + 7) + (*(unsigned __int8 *)(loaded_word + loaded_word_2 + 6) << 8);
      if ( a2 >= shifted_bits_2 && a2 < shifted_bits_2 + (*(unsigned __int8 *)(loaded_word + loaded_word_2 + 8) << 8) + *(unsigned __int8 *)(loaded_word + loaded_word_2 + 9) )
        return (*(unsigned __int8 *)(loaded_word + 2 * (a2 - shifted_bits_2) + loaded_word_2 + 10) << 8)
             + (unsigned int)*(unsigned __int8 *)(loaded_word + 2 * (a2 - shifted_bits_2) + loaded_word_2 + 11);
      return 0;
    case 2:
      line = 1463;
LABEL_10:
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", line);
      return 0;
    case 4:
      loaded_word_3 = *(unsigned __int8 *)(loaded_word + loaded_word_2 + 12);
      loaded_word_4 = *(unsigned __int8 *)(loaded_word + loaded_word_2 + 11);
      loaded_word_5 = *(unsigned __int8 *)(loaded_word + loaded_word_2 + 13);
      shifted_bits_3 = (unsigned __int16)(*(unsigned __int8 *)(loaded_word + loaded_word_2 + 7) + (*(unsigned __int8 *)(loaded_word + loaded_word_2 + 6) << 8)) >> 1;
      shifted_bits_4 = (*(unsigned __int8 *)(loaded_word + loaded_word_2 + 8) << 8) + *(unsigned __int8 *)(loaded_word + loaded_word_2 + 9);
      shifted_bits_5 = *(unsigned __int8 *)(loaded_word + loaded_word_2 + 10) << 8;
      integer_sum = (unsigned int)(loaded_word + 14);
      scaled_index = integer_sum;
      remaining_bits = shifted_bits_4 >> 1;
      remaining_count = shifted_bits_5 + loaded_word_4;
      shifted_bits_6 = (unsigned __int16)(loaded_word_5 + (loaded_word_3 << 8)) >> 1;
      if ( a2 <= 0xFFFF )
      {
        if ( a2 >= *(unsigned __int8 *)(integer_sum + 2LL * shifted_bits_6 + loaded_word_2 + 1) + (*(unsigned __int8 *)(integer_sum + 2LL * shifted_bits_6 + loaded_word_2) << 8) )
          scaled_index = integer_sum + 2 * shifted_bits_6;
        for ( i = scaled_index - 2; remaining_count; --remaining_count )
        {
          remaining_bits >>= 1;
          if ( a2 > *(unsigned __int8 *)(loaded_word_2 + i + 2LL * remaining_bits + 1) + (*(unsigned __int8 *)(loaded_word_2 + i + 2LL * remaining_bits) << 8) )
            i += 2 * remaining_bits;
        }
        shifted_bits_7 = 2LL * (unsigned __int16)((i - (unsigned int)integer_sum + 2) >> 1);
        if ( a2 > *(unsigned __int8 *)(integer_sum + shifted_bits_7 + loaded_word_2 + 1) + (*(unsigned __int8 *)(integer_sum + shifted_bits_7 + loaded_word_2) << 8) )
          crt_assert(
            (char *)L"unicode_codepoint <= ttUSHORT(data + endCount + 2*item)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x5DBu);
        scaled_index_2 = saved_loaded_word + shifted_bits_7 + 2 * (unsigned int)shifted_bits_3;
        shifted_bits_8 = *(unsigned __int8 *)(scaled_index_2 + loaded_word_2 + 17) + (*(unsigned __int8 *)(scaled_index_2 + loaded_word_2 + 16) << 8);
        if ( a2 >= shifted_bits_8 )
        {
          shifted_bits_9 = *(unsigned __int8 *)(saved_loaded_word + 6 * (unsigned int)shifted_bits_3 + shifted_bits_7 + loaded_word_2 + 17)
              + (*(unsigned __int8 *)(saved_loaded_word + 6 * (unsigned int)shifted_bits_3 + shifted_bits_7 + loaded_word_2 + 16) << 8);
          if ( !shifted_bits_9 )
            return (unsigned __int16)(a2
                                    + (*(unsigned __int8 *)(saved_loaded_word + shifted_bits_7 + 4 * (unsigned int)shifted_bits_3 + loaded_word_2 + 16) << 8)
                                    + *(unsigned __int8 *)(saved_loaded_word + shifted_bits_7 + 4 * (unsigned int)shifted_bits_3 + loaded_word_2 + 17));
          scaled_index_3 = saved_loaded_word + shifted_bits_7 + 6 * (unsigned int)shifted_bits_3 + (__int64)(2 * (a2 - shifted_bits_8)) + shifted_bits_9;
          return (*(unsigned __int8 *)(scaled_index_3 + loaded_word_2 + 16) << 8) + (unsigned int)*(unsigned __int8 *)(scaled_index_3 + loaded_word_2 + 17);
        }
      }
      return 0;
  }
  if ( (unsigned __int16)(shifted_bits - 12) > 1u )
  {
    line = 1534;
    goto LABEL_10;
  }
  integer_sum_2 = 0;
  shifted_bits_10 = *(unsigned __int8 *)(loaded_word + loaded_word_2 + 15)
      + ((*(unsigned __int8 *)(loaded_word + loaded_word_2 + 14)
        + ((*(unsigned __int8 *)(loaded_word + loaded_word_2 + 13) + (*(unsigned __int8 *)(loaded_word + loaded_word_2 + 12) << 8)) << 8)) << 8);
  if ( shifted_bits_10 <= 0 )
    return 0;
  while ( 1 )
  {
    shifted_bits_11 = integer_sum_2 + ((shifted_bits_10 - integer_sum_2) >> 1);
    scaled_index_4 = 12 * shifted_bits_11;
    record_pointer = (unsigned __int8 *)(loaded_word_2 + scaled_index_4 + saved_loaded_word);
    shifted_bits_12 = record_pointer[19] + (record_pointer[16] << 24) + (record_pointer[18] << 8) + (record_pointer[17] << 16);
    if ( a2 >= shifted_bits_12 )
      break;
    shifted_bits_10 = integer_sum_2 + ((shifted_bits_10 - integer_sum_2) >> 1);
LABEL_33:
    if ( integer_sum_2 >= shifted_bits_10 )
      return 0;
  }
  if ( a2 > (unsigned int)(record_pointer[23] + (record_pointer[20] << 24) + (record_pointer[22] << 8) + (record_pointer[21] << 16)) )
  {
    integer_sum_2 = shifted_bits_11 + 1;
    goto LABEL_33;
  }
  shifted_bits_13 = *(unsigned __int8 *)(loaded_word_2 + scaled_index_4 + saved_loaded_word + 27)
      + (*(unsigned __int8 *)(loaded_word_2 + scaled_index_4 + saved_loaded_word + 24) << 24)
      + (*(unsigned __int8 *)(loaded_word_2 + scaled_index_4 + saved_loaded_word + 26) << 8)
      + (*(unsigned __int8 *)(loaded_word_2 + scaled_index_4 + saved_loaded_word + 25) << 16);
  if ( shifted_bits == 12 )
    return a2 + shifted_bits_13 - shifted_bits_12;
  else
    return shifted_bits_13;
}

//----- (0000000140178800) ----------------------------------------------------
__int64            sub_140178800(char *a1, __int64 a2, int a3)
{
  int iteration_count;
  unsigned int call_result;
  __int64 iteration_count_2;
  int table_value;
  bool comparison_result;
  unsigned int integer_sum;
  int element_index;
  int shifted_bits;
  __int64 scaled_index;
  unsigned int shifted_bits_2;
  int call_result_2;

  iteration_count = 0;
  call_result = sub_140179790(a1);
  if ( (call_result & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      iteration_count_2 = -1;
      do
        ++iteration_count_2;
      while ( *(_BYTE *)(iteration_count_2 + a2) );
      table_value = (unsigned __int8)a1[call_result];
      if ( *(_WORD *)&a1[call_result] == 49 && !a1[call_result + 2] && !a1[call_result + 3] )
        break;
      if ( table_value == 116 )
      {
        if ( a1[call_result + 1] == 121 && a1[call_result + 2] == 112 && a1[call_result + 3] == 49 )
          break;
      }
      else if ( table_value == 79 && a1[call_result + 1] == 84 && a1[call_result + 2] == 84 && a1[call_result + 3] == 79 )
      {
        break;
      }
      if ( (_BYTE)table_value )
      {
        if ( (_BYTE)table_value != 116 || a1[call_result + 1] != 114 || a1[call_result + 2] != 117 )
          goto LABEL_42;
        comparison_result = a1[call_result + 3] == 101;
      }
      else
      {
        if ( a1[call_result + 1] != 1 || a1[call_result + 2] )
          goto LABEL_42;
        comparison_result = a1[call_result + 3] == 0;
      }
      if ( comparison_result )
        break;
LABEL_42:
      ++iteration_count;
      call_result = sub_140179790(a1);
      if ( (call_result & 0x80000000) != 0 )
        return call_result;
    }
    if ( !a3
      || (((unsigned __int8)a3 ^ (unsigned __int8)a1[(unsigned int)sub_140180D50((__int64)a1, call_result, "head") + 45]) & 7) == 0 )
    {
      integer_sum = call_result + 12;
      element_index = 0;
      shifted_bits = (unsigned __int8)a1[call_result + 5] + ((unsigned __int8)a1[call_result + 4] << 8);
      if ( shifted_bits )
      {
        while ( 1 )
        {
          scaled_index = integer_sum + 16 * element_index;
          if ( a1[scaled_index] == 110 && a1[scaled_index + 1] == 97 && a1[scaled_index + 2] == 109 && a1[scaled_index + 3] == 101 )
            break;
          if ( ++element_index >= shifted_bits )
            goto LABEL_42;
        }
        shifted_bits_2 = (unsigned __int8)a1[16 * element_index + 11 + integer_sum]
            + ((unsigned __int8)a1[16 * element_index + 8 + integer_sum] << 24)
            + ((unsigned __int8)a1[scaled_index + 10] << 8)
            + ((unsigned __int8)a1[scaled_index + 9] << 16);
        if ( shifted_bits_2 )
        {
          if ( a3 )
          {
            if ( (unsigned int)sub_1401818E0((__int64)a1, shifted_bits_2, a2, iteration_count_2, 16, -1) )
              return call_result;
            call_result_2 = sub_1401818E0((__int64)a1, shifted_bits_2, a2, iteration_count_2, 1, -1);
          }
          else
          {
            if ( (unsigned int)sub_1401818E0((__int64)a1, shifted_bits_2, a2, iteration_count_2, 16, 17) )
              return call_result;
            call_result_2 = sub_1401818E0((__int64)a1, shifted_bits_2, a2, iteration_count_2, 1, 2);
          }
          if ( call_result_2 || (unsigned int)sub_1401818E0((__int64)a1, shifted_bits_2, a2, iteration_count_2, 3, -1) )
            return call_result;
        }
      }
    }
    goto LABEL_42;
  }
  return call_result;
}

//----- (0000000140178A70) ----------------------------------------------------
__int64            sub_140178A70(__int64 a1, int a2, float a3, void **a4, _DWORD *a5)
{
  float squared_component;
  __int64 input_value;
  __int64 allocated_buffer;
  int cached_integer_sum;
  __int64 saved_iteration_count;
  _BYTE *running_total;
  __int64 remaining_count;
  bool comparison_result;
  int integer_sum;
  _DWORD *unused_written_slot;
  void *allocated_buffer_2;
  int unused_written_slot_2;
  int i;
  __int64 iteration_count;
  __int16 *running_total_2;
  __int64 remaining_count_2;
  __int64 saved_iteration_count_2;
  float product_difference;
  __m128i converted_vector;
  float converted_vector_2;
  float product_difference_2;
  __m128i converted_vector_3;
  float converted_vector_4;
  int iteration_count_2;
  float sr_x0, sr_y0; /* the current point: xmm8, xmm9 */

  iteration_count_2 = 0;
  squared_component = a3 * a3;
  input_value = a2;
  allocated_buffer = 0;
  cached_integer_sum = 0;
  LODWORD(saved_iteration_count) = 0;
  if ( a2 > 0 )
  {
    running_total = (_BYTE *)(a1 + 12);
    remaining_count = input_value;
    do
    {
      comparison_result = *running_total == 1;
      integer_sum = cached_integer_sum + 1;
      running_total += 14;
      if ( !comparison_result )
        integer_sum = cached_integer_sum;
      cached_integer_sum = integer_sum;
      --remaining_count;
    }
    while ( remaining_count );
  }
  unused_written_slot = a5;
  *a5 = cached_integer_sum;
  if ( !cached_integer_sum )
    return 0;
  allocated_buffer_2 = (void *)sr_path_malloc(4LL * cached_integer_sum);
  *a4 = allocated_buffer_2;
  if ( !allocated_buffer_2 )
  {
    *unused_written_slot = 0;
    return 0;
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( i == 1 )
    {
      allocated_buffer = sr_path_malloc(8LL * iteration_count_2);
      if ( !allocated_buffer )
      {
        free(nullptr);
        free(*a4);
        *a4 = nullptr;
        *unused_written_slot = 0;
        return 0;
      }
    }
    iteration_count_2 = 0;
    iteration_count = -1;
    sr_x0 = 0.0f; /* 0x140178B31, 0x140178B35 */
    sr_y0 = 0.0f;
    if ( input_value > 0 )
    {
      running_total_2 = (__int16 *)(a1 + 10);
      remaining_count_2 = input_value;
      while ( 1 )
      {
        if ( *((_BYTE *)running_total_2 + 2) == 1 )
        {
          if ( iteration_count >= 0 )
            *((_DWORD *)*a4 + iteration_count) = iteration_count_2 - saved_iteration_count;
          ++iteration_count;
          saved_iteration_count = iteration_count_2;
          product_difference_2 = (float)*(running_total_2 - 5);
          converted_vector_3 = _mm_cvtsi32_si128(*(running_total_2 - 4));
          ++iteration_count_2;
          converted_vector_4 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_3), f32)[0];
          sr_x0 = product_difference_2; /* 0x140178D41, 0x140178D54 */
          sr_y0 = converted_vector_4;
          if ( allocated_buffer )
          {
            *(float *)(allocated_buffer + 8 * saved_iteration_count) = product_difference_2;
            *(float *)(allocated_buffer + 8 * saved_iteration_count + 4) = converted_vector_4;
          }
          goto LABEL_28;
        }
        if ( *((_BYTE *)running_total_2 + 2) == 2 )
        {
          saved_iteration_count_2 = iteration_count_2;
          product_difference = (float)*(running_total_2 - 5);
          converted_vector = _mm_cvtsi32_si128(*(running_total_2 - 4));
          ++iteration_count_2;
          converted_vector_2 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0];
          sr_x0 = product_difference; /* 0x140178CE7, 0x140178CFA */
          sr_y0 = converted_vector_2;
          if ( allocated_buffer )
          {
            *(float *)(allocated_buffer + 8 * saved_iteration_count_2) = product_difference;
            *(float *)(allocated_buffer + 8 * saved_iteration_count_2 + 4) = converted_vector_2;
          }
          goto LABEL_28;
        }
        if ( *((_BYTE *)running_total_2 + 2) == 3 )
          break;
        if ( *((_BYTE *)running_total_2 + 2) == 4 )
        {
          /* 0x140178C36: x0, y0 = xmm8, xmm9 (0x140178BC9, 0x140178BBE); the control points and end point are
             converted shorts stored as floats ([rsp+20h]..[rsp+48h]); the C had passed an int and a pointer for
             x0, y0 and the bits of three floats as numbers */
          sub_140183DC0(
            allocated_buffer,
            &iteration_count_2,
            sr_x0,
            sr_y0,
            (float)*(running_total_2 - 3),
            (float)*(running_total_2 - 2),
            (float)*(running_total_2 - 1),
            (float)*running_total_2,
            (float)*(running_total_2 - 5),
            (float)*(running_total_2 - 4),
            squared_component,
            0);
LABEL_20:
          unused_written_slot_2 = *(running_total_2 - 5);
          sr_x0 = (float)*(running_total_2 - 5); /* 0x140178C4F, 0x140178C53 */
          sr_y0 = (float)*(running_total_2 - 4);
        }
LABEL_28:
        running_total_2 += 7;
        if ( !--remaining_count_2 )
          goto LABEL_29;
      }
      /* 0x140178CC6: x0, y0 = xmm8, xmm9 (0x140178CAC, 0x140178C96) */
      sub_140184190(
        allocated_buffer,
        &iteration_count_2,
        sr_x0,
        sr_y0,
        (float)*(running_total_2 - 3),
        (float)*(running_total_2 - 2),
        (float)*(running_total_2 - 5),
        (float)*(running_total_2 - 4),
        squared_component,
        0);
      goto LABEL_20;
    }
LABEL_29:
    *((_DWORD *)*a4 + iteration_count) = iteration_count_2 - saved_iteration_count;
  }
  return allocated_buffer;
}

//----- (0000000140178E30) ----------------------------------------------------
__int64            sub_140178E30(__int64 a1, int a2, int a3, int a4, float *a5, float *a6, float *a7, int a8)
{
  float component_delta;
  __int64 record_word_offset;
  float scaled_ratio;
  float scaled_ratio_2;
  __m128 vector_result;
  __m128d converted_vector;
  int table_value;
  __m128 vector_result_2;
  int table_value_2;
  __m128d converted_vector_2;
  int table_value_3;
  __int64 result;

  if ( a8 )
    component_delta = 0.0;
  else
    component_delta = -0.5;
  record_word_offset = 5LL * a4;
  scaled_ratio = 1.0 / (float)a2;
  scaled_ratio_2 = 1.0 / (float)a3;
  vector_result = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a1 + 4 * record_word_offset + 8))));
  SR_VEC_LANES(128, vector_result, f32)[0] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] + *a5) + 0.5;
  converted_vector = _mm_cvtps_pd(vector_result);
  table_value = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
  if ( (double)table_value != SR_VEC_LANES(128, converted_vector, f64)[0] )
    SR_VEC_LANES(128, converted_vector, f64)[0] = (double)(table_value - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1));
  vector_result_2 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a1 + 4 * record_word_offset + 12))));
  table_value_2 = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
  SR_VEC_LANES(128, vector_result_2, f32)[0] = (float)(SR_VEC_LANES(128, vector_result_2, f32)[0] + *a6) + 0.5;
  converted_vector_2 = _mm_cvtps_pd(vector_result_2);
  table_value_3 = (int)SR_VEC_LANES(128, converted_vector_2, f64)[0];
  if ( (double)table_value_3 != SR_VEC_LANES(128, converted_vector_2, f64)[0] )
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = (double)(table_value_3 - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_2, converted_vector_2)) & 1));
  *a7 = (float)table_value_2 + component_delta;
  a7[1] = (float)(int)SR_VEC_LANES(128, converted_vector_2, f64)[0] + component_delta;
  a7[4] = (float)(table_value_2 + *(unsigned __int16 *)(a1 + 4 * record_word_offset + 4) - *(unsigned __int16 *)(a1 + 4 * record_word_offset)) + component_delta;
  a7[5] = (float)((int)SR_VEC_LANES(128, converted_vector_2, f64)[0]
                + *(unsigned __int16 *)(a1 + 4 * record_word_offset + 6)
                - *(unsigned __int16 *)(a1 + 4 * record_word_offset + 2))
        + component_delta;
  a7[2] = (float)*(unsigned __int16 *)(a1 + 4 * record_word_offset) * scaled_ratio;
  a7[3] = (float)*(unsigned __int16 *)(a1 + 4 * record_word_offset + 2) * scaled_ratio_2;
  a7[6] = (float)*(unsigned __int16 *)(a1 + 4 * record_word_offset + 4) * scaled_ratio;
  result = *(unsigned __int16 *)(a1 + 4 * record_word_offset + 6);
  a7[7] = (float)*(unsigned __int16 *)(a1 + 4 * record_word_offset + 6) * scaled_ratio_2;
  *a5 = *(float *)(a1 + 4 * record_word_offset + 16) + *a5;
  return result;
}

// 140178EAE: conditional instruction was optimized away because rcx.8<100000000u
// 140178EFC: conditional instruction was optimized away because rcx.8<100000000u

//----- (0000000140179010) ----------------------------------------------------
__int64            sub_140179010(__int64 a1, float a2, float a3, int a4, int *a5, int *a6, int *a7, int *a8)
{
  int call_result;

  call_result = sub_140178410(a1, a4);
  return sub_140179E50(a1, a2, a3, 0.0, 0.0, call_result, a5, a6, a7, a8);
}

//----- (0000000140179090) ----------------------------------------------------
__int64            sub_140179090(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int call_result;

  call_result = sub_140178410(a1, a2);
  return sub_140179B80(a1, call_result, a3, a4, 0.0, 0, a5, a6, a7, a8);
}

//----- (0000000140179120) ----------------------------------------------------
__int64            sub_140179120(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  int call_result;

  call_result = sub_140178410(a1, a2);
  return sub_140179B80(a1, call_result, a3, a4, a5, a6, a7, a8, a9, a10);
}

//----- (0000000140179160) ----------------------------------------------------
__int64            sub_140179160(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10)
{
  int call_result;

  call_result = sub_140178410(a1, a6);
  return sub_140179E50(a1, a2, a3, a4, a5, call_result, a7, a8, a9, a10);
}

//----- (00000001401791D0) ----------------------------------------------------
__int64            sub_1401791D0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int call_result;
  int selected_word;
  int masked_bits;
  int saved_masked_bits;
  int cached_selection_flag;
  int dword2_result;
  int dword1_result;
  int call_result_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401791D0[64];
#define selection_flag (*(__int64 (*))(void *)(sr_frame_1401791D0 + 8)) /* [rsp+20h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1401791D0 + 16)) /* [rsp+28h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_1401791D0 + 32)) /* [rsp+38h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_1401791D0 + 48)) /* [rsp+48h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1401791D0 + 56)) /* [rsp+50h] */

  call_result = sub_140178410(a1, a2);
  if ( *(_DWORD *)(a1 + 76) )
  {
    selected_word = 0;
    selection_flag = 1;
    unused_written_slot_2 = 0;
    unused_written_slot_3 = 0;
    unused_written_slot = 0;
    selection_flag_2 = 0;
    masked_bits = sub_140182AD0(a1, call_result, (__int64)&selection_flag);
    saved_masked_bits = masked_bits;
    if ( a3 )
    {
      cached_selection_flag = 0;
      if ( masked_bits )
        cached_selection_flag = selection_flag_2;
      *a3 = cached_selection_flag;
    }
    if ( a4 )
    {
      dword2_result = 0;
      if ( masked_bits )
        dword2_result = DWORD2(selection_flag_2);
      *a4 = dword2_result;
    }
    if ( a5 )
    {
      dword1_result = 0;
      if ( saved_masked_bits )
        dword1_result = DWORD1(selection_flag_2);
      *a5 = dword1_result;
    }
    if ( a6 )
    {
      if ( saved_masked_bits )
        selected_word = HIDWORD(selection_flag_2);
      *a6 = selected_word;
    }
  }
  else
  {
    call_result_2 = sub_14017DA60(a1, call_result);
    if ( call_result_2 < 0 )
      return 0;
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result_2 + 2LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result_2 + 3LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result_2 + 4LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result_2 + 5LL));
    if ( a5 )
      *a5 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result_2 + 6LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result_2 + 7LL));
    if ( a6 )
      *a6 = (__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result_2 + 9LL)
                    + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result_2 + 8LL) << 8));
  }
  return 1;
}
#undef selection_flag
#undef unused_written_slot
#undef selection_flag_2
#undef unused_written_slot_2
#undef unused_written_slot_3

//----- (0000000140179360) ----------------------------------------------------
int            sub_140179360(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int call_result;

  call_result = sub_140178410(a1, a2);
  return sub_14017A3C0(a1, call_result, a3, a4);
}

//----- (00000001401793A0) ----------------------------------------------------
__int64            sub_1401793A0(__int64 a1, int a2, int a3)
{
  int call_result;
  int call_result_2;
  int shifted_bits;
  int cached_call_result;
  unsigned int running_total;
  __int64 loaded_word;
  unsigned __int8 *loaded_record_pointer;
  int integer_sum;
  unsigned int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  __int64 scaled_index;
  unsigned int shifted_bits_5;

  if ( !*(_DWORD *)(a1 + 44) && !*(_DWORD *)(a1 + 48) )
    return 0;
  call_result = sub_140178410(a1, a3);
  call_result_2 = sub_140178410(a1, a2);
  shifted_bits = 0;
  cached_call_result = call_result_2;
  running_total = 0;
  if ( *(_DWORD *)(a1 + 48) )
    running_total = sub_14017DCC0(a1, call_result_2, call_result);
  loaded_word = *(int *)(a1 + 44);
  if ( (_DWORD)loaded_word )
  {
    loaded_record_pointer = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + loaded_word);
    if ( loaded_record_pointer[3] + (loaded_record_pointer[2] << 8) )
    {
      if ( loaded_record_pointer[9] + (loaded_record_pointer[8] << 8) == 1 )
      {
        integer_sum = 0;
        shifted_bits_2 = call_result | (cached_call_result << 16);
        shifted_bits_3 = (loaded_record_pointer[10] << 8) + loaded_record_pointer[11] - 1;
        if ( shifted_bits_3 >= 0 )
        {
          do
          {
            shifted_bits_4 = (shifted_bits_3 + integer_sum) >> 1;
            scaled_index = 6 * shifted_bits_4;
            shifted_bits_5 = loaded_record_pointer[scaled_index + 21] + (loaded_record_pointer[scaled_index + 18] << 24) + (loaded_record_pointer[scaled_index + 20] << 8) + (loaded_record_pointer[scaled_index + 19] << 16);
            if ( shifted_bits_2 >= shifted_bits_5 )
            {
              if ( shifted_bits_2 <= shifted_bits_5 )
              {
                shifted_bits = (__int16)(loaded_record_pointer[scaled_index + 23] + (loaded_record_pointer[scaled_index + 22] << 8));
                break;
              }
              integer_sum = shifted_bits_4 + 1;
            }
            else
            {
              shifted_bits_3 = shifted_bits_4 - 1;
            }
          }
          while ( integer_sum <= shifted_bits_3 );
        }
      }
    }
    running_total += shifted_bits;
  }
  return running_total;
}

//----- (0000000140179510) ----------------------------------------------------
__int64            sub_140179510(
        __int64 a1,
        float a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        float a6,
        void *a7,
        int *a8,
        unsigned int *a9,
        signed int *a10)
{
  int call_result;

  call_result = sub_140178410(a1, a3);
  return sub_14017A640(a1, a2, call_result, a4, a5, a6, a7, a8, a9, a10);
}

//----- (0000000140179560) ----------------------------------------------------
__int64            sub_140179560(__int64 a1, int a2, __int64 *a3)
{
  int call_result;

  call_result = sub_140178410(a1, a2);
  return sub_14017B360(a1, call_result, a3);
}

//----- (0000000140179590) ----------------------------------------------------
_DWORD *           sub_140179590(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 loaded_word;

  loaded_word = *(_QWORD *)(a1 + 8) + *(int *)(a1 + 28);
  *a2 = (__int16)((*(unsigned __int8 *)(loaded_word + 36) << 8) + *(unsigned __int8 *)(loaded_word + 37));
  *a3 = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 38LL) << 8)
                + *(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 39LL));
  *a4 = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 40LL) << 8)
                + *(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 41LL));
  *a5 = (__int16)(*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 43LL)
                + (*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 42LL) << 8));
  return a5;
}

//----- (0000000140179650) ----------------------------------------------------
unsigned __int64            sub_140179650(__int64 a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  __int64 loaded_word;
  unsigned int loaded_word_2;
  int iteration_count;
  int shifted_bits;
  int shifted_bits_2;
  __int64 scaled_index;

  loaded_word = *(_QWORD *)(a1 + 8);
  loaded_word_2 = sub_140180D50(loaded_word, *(_DWORD *)(a1 + 16), "name");
  if ( !loaded_word_2 )
    return 0;
  iteration_count = 0;
  shifted_bits = loaded_word_2 + (*(unsigned __int8 *)(loaded_word + loaded_word_2 + 4) << 8) + *(unsigned __int8 *)(loaded_word + loaded_word_2 + 5);
  shifted_bits_2 = *(unsigned __int8 *)(loaded_word + loaded_word_2 + 3) + (*(unsigned __int8 *)(loaded_word + loaded_word_2 + 2) << 8);
  if ( !shifted_bits_2 )
    return 0;
  while ( 1 )
  {
    scaled_index = loaded_word_2 + 6 + 12 * iteration_count;
    if ( a3 == *(unsigned __int8 *)(scaled_index + loaded_word + 1) + (*(unsigned __int8 *)(scaled_index + loaded_word) << 8)
      && a4 == *(unsigned __int8 *)(scaled_index + loaded_word + 3) + (*(unsigned __int8 *)(scaled_index + loaded_word + 2) << 8)
      && a5 == *(unsigned __int8 *)(scaled_index + loaded_word + 5) + (*(unsigned __int8 *)(scaled_index + loaded_word + 4) << 8)
      && a6 == *(unsigned __int8 *)(scaled_index + loaded_word + 7) + (*(unsigned __int8 *)(scaled_index + loaded_word + 6) << 8) )
    {
      break;
    }
    if ( ++iteration_count >= shifted_bits_2 )
      return 0;
  }
  *a2 = *(unsigned __int8 *)(scaled_index + loaded_word + 9) + (*(unsigned __int8 *)(scaled_index + loaded_word + 8) << 8);
  return ((unsigned __int64)*(unsigned __int8 *)(scaled_index + loaded_word + 10) << 8) + loaded_word + *(unsigned __int8 *)(scaled_index + loaded_word + 11) + shifted_bits;
}

//----- (0000000140179790) ----------------------------------------------------
__int64            sub_140179790(char *a1)
{
  int lookup_index;
  _BYTE *byte_cursor;
  unsigned __int8 *unrecovered_register_value;

  if ( sub_140181710(a1) )
    return (unsigned int)-(lookup_index != 0);
  if ( *byte_cursor == 116
    && byte_cursor[1] == 116
    && byte_cursor[2] == 99
    && byte_cursor[3] == 102
    && ((unrecovered_register_value[7] - 0x10000 + (unrecovered_register_value[4] << 24) + (unrecovered_register_value[6] << 8) + ((unsigned __int8)byte_cursor[5] << 16)) & 0xFFFEFFFF) == 0
    && lookup_index < unrecovered_register_value[11] + ((unrecovered_register_value[10] + ((unrecovered_register_value[9] + (unrecovered_register_value[8] << 8)) << 8)) << 8) )
  {
    return unrecovered_register_value[4 * lookup_index + 15] + ((unrecovered_register_value[4 * lookup_index + 14] + ((unrecovered_register_value[4 * lookup_index + 13] + (unrecovered_register_value[4 * lookup_index + 12] << 8)) << 8)) << 8);
  }
  return 0xFFFFFFFFLL;
}

//----- (0000000140179870) ----------------------------------------------------
__int64            sub_140179870(char *a1)
{
  int lookup_index;
  _BYTE *byte_cursor;
  unsigned __int8 *unrecovered_register_value;

  if ( sub_140181710(a1) )
    return (unsigned int)-(lookup_index != 0);
  if ( *byte_cursor == 116
    && byte_cursor[1] == 116
    && byte_cursor[2] == 99
    && byte_cursor[3] == 102
    && ((unrecovered_register_value[7] - 0x10000 + (unrecovered_register_value[4] << 24) + (unrecovered_register_value[6] << 8) + ((unsigned __int8)byte_cursor[5] << 16)) & 0xFFFEFFFF) == 0
    && lookup_index < unrecovered_register_value[11] + ((unrecovered_register_value[10] + ((unrecovered_register_value[9] + (unrecovered_register_value[8] << 8)) << 8)) << 8) )
  {
    return unrecovered_register_value[4 * lookup_index + 15] + ((unrecovered_register_value[4 * lookup_index + 14] + ((unrecovered_register_value[4 * lookup_index + 13] + (unrecovered_register_value[4 * lookup_index + 12] << 8)) << 8)) << 8);
  }
  return 0xFFFFFFFFLL;
}

//----- (0000000140179950) ----------------------------------------------------
int            sub_140179950(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result;

  if ( a2 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 4LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 5LL));
    *a2 = result;
  }
  if ( a3 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 6LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 7LL));
    *a3 = result;
  }
  if ( a4 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 8LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 9LL));
    *a4 = result;
  }
  return result;
}

//----- (0000000140179A00) ----------------------------------------------------
__int64            sub_140179A00(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 loaded_word;
  __int64 result;

  loaded_word = *(_QWORD *)(a1 + 8);
  result = sub_140180D50(loaded_word, *(_DWORD *)(a1 + 16), "OS/2");
  if ( (_DWORD)result )
  {
    if ( a2 )
      *a2 = (__int16)((*(unsigned __int8 *)(loaded_word + (int)result + 68) << 8) + *(unsigned __int8 *)(loaded_word + (int)result + 69));
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 70LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 71LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 72LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 73LL));
    return 1;
  }
  return result;
}

//----- (0000000140179AD0) ----------------------------------------------------
__int64            sub_140179AD0(__int64 a1, float a2, float a3, int a4, int *a5, int *a6, int *a7, int *a8)
{
  return sub_140179E50(a1, a2, a3, 0.0, 0.0, a4, a5, a6, a7, a8);
}

//----- (0000000140179B20) ----------------------------------------------------
__int64            sub_140179B20(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  return sub_140179B80(a1, a2, a3, a4, 0.0, 0, a5, a6, a7, a8);
}

//----- (0000000140179B80) ----------------------------------------------------
__int64            sub_140179B80(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  int dword2_result;
  __int64 result;
  int shifted_bits;
  int saved_shifted_bits;
  int dword1_result;
  int call_result;
  __int64 loaded_word;
  __int64 cached_call_result;
  __int16 loaded_word_2;
  __int16 shifted_bits_2;
  __m128 vector_result;
  __m128d converted_vector;
  int table_value;
  __m128 converted_vector_2;
  __m128 converted_vector_3;
  __m128d converted_vector_4;
  int table_value_2;
  __m128 vector_result_2;
  __m128d converted_vector_5;
  int table_value_3;
  __m128d converted_vector_6;
  int table_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140179B80[64];
#define selection_flag (*(__int64 (*))(void *)(sr_frame_140179B80 + 8)) /* [rsp+20h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140179B80 + 16)) /* [rsp+28h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_140179B80 + 32)) /* [rsp+38h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140179B80 + 48)) /* [rsp+48h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140179B80 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    dword2_result = 0;
    selection_flag = 1;
    unused_written_slot_2 = 0;
    unused_written_slot_3 = 0;
    unused_written_slot = 0;
    selection_flag_2 = 0;
    result = sub_140182AD0(a1, a2, (__int64)&selection_flag);
    shifted_bits = 0;
    saved_shifted_bits = 0;
    dword1_result = 0;
    if ( (_DWORD)result )
    {
      shifted_bits = HIDWORD(selection_flag_2);
      saved_shifted_bits = selection_flag_2;
      dword1_result = DWORD1(selection_flag_2);
      dword2_result = DWORD2(selection_flag_2);
    }
    goto LABEL_7;
  }
  call_result = sub_14017DA60(a1, a2);
  if ( call_result >= 0 )
  {
    loaded_word = *(_QWORD *)(a1 + 8);
    cached_call_result = call_result;
    loaded_word_2 = *(unsigned __int8 *)(loaded_word + call_result + 7);
    shifted_bits = (__int16)(*(unsigned __int8 *)(loaded_word + call_result + 9) + (*(unsigned __int8 *)(loaded_word + call_result + 8) << 8));
    shifted_bits_2 = *(unsigned __int8 *)(loaded_word + call_result + 3) + (*(unsigned __int8 *)(loaded_word + call_result + 2) << 8);
    result = *(unsigned __int8 *)(loaded_word + call_result + 5);
    saved_shifted_bits = shifted_bits_2;
    dword1_result = (__int16)((*(unsigned __int8 *)(loaded_word + cached_call_result + 6) << 8) + loaded_word_2);
    dword2_result = (__int16)(result + (*(unsigned __int8 *)(loaded_word + cached_call_result + 4) << 8));
LABEL_7:
    if ( a7 )
    {
      vector_result = _mm_set_ss((float)saved_shifted_bits);
      SR_VEC_LANES(128, vector_result, f32)[0] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] * a3) + a5;
      converted_vector = _mm_cvtps_pd(vector_result);
      table_value = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
      if ( (double)table_value != SR_VEC_LANES(128, converted_vector, f64)[0] )
        SR_VEC_LANES(128, converted_vector, f64)[0] = (double)(table_value - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1));
      result = (unsigned int)(int)SR_VEC_LANES(128, converted_vector, f64)[0];
      *a7 = result;
    }
    converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
    if ( a8 )
    {
      converted_vector_3 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
      SR_VEC_LANES(128, converted_vector_3, f32)[0] = a6 - (float)((float)shifted_bits * a4);
      converted_vector_4 = _mm_cvtps_pd(converted_vector_3);
      table_value_2 = (int)SR_VEC_LANES(128, converted_vector_4, f64)[0];
      if ( (double)table_value_2 != SR_VEC_LANES(128, converted_vector_4, f64)[0] )
        SR_VEC_LANES(128, converted_vector_4, f64)[0] = (double)(table_value_2 - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_4, converted_vector_4)) & 1));
      result = (unsigned int)(int)SR_VEC_LANES(128, converted_vector_4, f64)[0];
      *a8 = result;
    }
    if ( a9 )
    {
      vector_result_2 = _mm_set_ss((float)dword1_result);
      SR_VEC_LANES(128, vector_result_2, f32)[0] = (float)(SR_VEC_LANES(128, vector_result_2, f32)[0] * a3) + a5;
      converted_vector_5 = _mm_cvtps_pd(vector_result_2);
      table_value_3 = (int)SR_VEC_LANES(128, converted_vector_5, f64)[0];
      if ( (double)table_value_3 != SR_VEC_LANES(128, converted_vector_5, f64)[0] )
        SR_VEC_LANES(128, converted_vector_5, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_5, converted_vector_5)) & 1) + table_value_3);
      result = (unsigned int)(int)SR_VEC_LANES(128, converted_vector_5, f64)[0];
      *a9 = result;
    }
    if ( a10 )
    {
      SR_VEC_LANES(128, converted_vector_2, f32)[0] = a6 - (float)((float)dword2_result * a4);
      converted_vector_6 = _mm_cvtps_pd(converted_vector_2);
      table_value_4 = (int)SR_VEC_LANES(128, converted_vector_6, f64)[0];
      if ( (double)table_value_4 != SR_VEC_LANES(128, converted_vector_6, f64)[0] )
        SR_VEC_LANES(128, converted_vector_6, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_6, converted_vector_6)) & 1) + table_value_4);
      result = (unsigned int)(int)SR_VEC_LANES(128, converted_vector_6, f64)[0];
      *a10 = result;
    }
    return result;
  }
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  result = (__int64)a10;
  if ( a10 )
    *a10 = 0;
  return result;
}
#undef selection_flag
#undef unused_written_slot
#undef selection_flag_2
#undef unused_written_slot_2
#undef unused_written_slot_3

// 140179CAB: conditional instruction was optimized away because rcx.8<100000000u
// 140179D0E: conditional instruction was optimized away because rcx.8<100000000u
// 140179D66: conditional instruction was optimized away because rcx.8<100000000u
// 140179DC4: conditional instruction was optimized away because rcx.8<100000000u

//----- (0000000140179E50) ----------------------------------------------------
__int64            sub_140179E50(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10)
{
  float input_value;
  float input_value_2;
  int masked_bits;
  __int64 unused_written_slot;
  int masked_bits_2;
  int shifted_bits;
  int shifted_bits_2;
  int dword1_result;
  int dword2_result;
  int call_result;
  __int64 loaded_word;
  __m128 vector_result;
  __m128d converted_vector;
  int table_value;
  int table_value_2;
  __m128 converted_vector_2;
  __m128d converted_vector_3;
  int table_value_3;
  __m128 converted_vector_4;
  int table_value_4;
  __m128d converted_vector_5;
  int table_value_5;
  __m128 vector_result_2;
  int table_value_6;
  __m128d converted_vector_6;
  int table_value_7;
  int table_value_8;
  int cached_table_value;
  int cached_table_value_2;
  int integer_difference;
  int integer_difference_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140179E50[96];
#define loaded_word_2 (*(__int64 (*))(void *)(sr_frame_140179E50 + 0)) /* [rsp+58h] */
#define Block (*(void * (*))(void *)(sr_frame_140179E50 + 8)) /* [rsp+60h] */
#define scratch_buffer (*(int (*)[4])(void *)(sr_frame_140179E50 + 16)) /* [rsp+68h] */
#define allocated_buffer (*(__int64 (*))(void *)(sr_frame_140179E50 + 32)) /* [rsp+78h] */
#define selection_flag (*(__int64 (*))(void *)(sr_frame_140179E50 + 40)) /* [rsp+80h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_140179E50 + 48)) /* [rsp+88h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_140179E50 + 64)) /* [rsp+98h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_140179E50 + 80)) /* [rsp+A8h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140179E50 + 88)) /* [rsp+B0h] */

  input_value = a2;
  input_value_2 = a3;
  masked_bits = sub_14017B360(a1, a6, (__int64 *)&Block);
  if ( a2 == 0.0 )
    input_value = a3;
  if ( a3 == 0.0 )
  {
    if ( input_value == 0.0 )
    {
      free(Block);
      return 0;
    }
    input_value_2 = input_value;
  }
  unused_written_slot = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    selection_flag = 1;
    unused_written_slot_3 = 0;
    selection_flag_2 = 0;
    unused_written_slot_4 = 0;
    unused_written_slot_2 = 0;
    masked_bits_2 = sub_140182AD0(a1, a6, (__int64)&selection_flag);
    shifted_bits = 0;
    shifted_bits_2 = 0;
    dword1_result = 0;
    if ( masked_bits_2 )
      shifted_bits = HIDWORD(selection_flag_2);
    dword2_result = 0;
    if ( masked_bits_2 )
    {
      shifted_bits_2 = selection_flag_2;
      dword1_result = DWORD1(selection_flag_2);
      dword2_result = DWORD2(selection_flag_2);
    }
    goto LABEL_15;
  }
  call_result = sub_14017DA60(a1, a6);
  if ( call_result >= 0 )
  {
    loaded_word = *(_QWORD *)(a1 + 8);
    shifted_bits = (__int16)(*(unsigned __int8 *)(loaded_word + call_result + 9) + (*(unsigned __int8 *)(loaded_word + call_result + 8) << 8));
    shifted_bits_2 = (__int16)(*(unsigned __int8 *)(loaded_word + call_result + 3) + (*(unsigned __int8 *)(loaded_word + call_result + 2) << 8));
    dword1_result = (__int16)((*(unsigned __int8 *)(loaded_word + call_result + 6) << 8) + *(unsigned __int8 *)(loaded_word + call_result + 7));
    dword2_result = (__int16)(*(unsigned __int8 *)(loaded_word + call_result + 5) + (*(unsigned __int8 *)(loaded_word + call_result + 4) << 8));
LABEL_15:
    vector_result = _mm_set_ss((float)shifted_bits_2);
    SR_VEC_LANES(128, vector_result, f32)[0] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] * input_value) + a4;
    converted_vector = _mm_cvtps_pd(vector_result);
    table_value = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
    if ( (double)table_value != SR_VEC_LANES(128, converted_vector, f64)[0] )
      SR_VEC_LANES(128, converted_vector, f64)[0] = (double)(table_value - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1));
    table_value_2 = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
    converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a5))));
    SR_VEC_LANES(128, converted_vector_2, f32)[0] = a5 - (float)((float)shifted_bits * input_value_2);
    converted_vector_3 = _mm_cvtps_pd(converted_vector_2);
    table_value_3 = (int)SR_VEC_LANES(128, converted_vector_3, f64)[0];
    if ( (double)table_value_3 != SR_VEC_LANES(128, converted_vector_3, f64)[0] )
      SR_VEC_LANES(128, converted_vector_3, f64)[0] = (double)(table_value_3 - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_3, converted_vector_3)) & 1));
    converted_vector_4 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a5))));
    table_value_4 = (int)SR_VEC_LANES(128, converted_vector_3, f64)[0];
    SR_VEC_LANES(128, converted_vector_4, f32)[0] = a5 - (float)((float)dword2_result * input_value_2);
    converted_vector_5 = _mm_cvtps_pd(converted_vector_4);
    table_value_5 = (int)SR_VEC_LANES(128, converted_vector_5, f64)[0];
    if ( (double)table_value_5 != SR_VEC_LANES(128, converted_vector_5, f64)[0] )
      SR_VEC_LANES(128, converted_vector_5, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_5, converted_vector_5)) & 1) + table_value_5);
    vector_result_2 = _mm_set_ss((float)dword1_result);
    table_value_6 = (int)SR_VEC_LANES(128, converted_vector_5, f64)[0];
    SR_VEC_LANES(128, vector_result_2, f32)[0] = (float)(SR_VEC_LANES(128, vector_result_2, f32)[0] * input_value) + a4;
    converted_vector_6 = _mm_cvtps_pd(vector_result_2);
    table_value_7 = (int)SR_VEC_LANES(128, converted_vector_6, f64)[0];
    if ( (double)table_value_7 != SR_VEC_LANES(128, converted_vector_6, f64)[0] )
      SR_VEC_LANES(128, converted_vector_6, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_6, converted_vector_6)) & 1) + table_value_7);
    table_value_8 = (int)SR_VEC_LANES(128, converted_vector_6, f64)[0];
    cached_table_value = table_value_2;
    cached_table_value_2 = table_value_4;
    goto LABEL_29;
  }
  table_value_2 = 0;
  table_value_4 = 0;
  table_value_6 = 0;
  table_value_8 = 0;
  cached_table_value = 0;
  cached_table_value_2 = 0;
LABEL_29:
  integer_difference = table_value_8 - cached_table_value;
  integer_difference_2 = table_value_6 - cached_table_value_2;
  scratch_buffer[0] = integer_difference;
  scratch_buffer[1] = integer_difference_2;
  if ( a7 )
    *a7 = integer_difference;
  if ( a8 )
    *a8 = integer_difference_2;
  if ( a9 )
    *a9 = table_value_2;
  if ( a10 )
    *a10 = table_value_4;
  if ( integer_difference && integer_difference_2 )
  {
    allocated_buffer = sr_path_malloc(integer_difference_2 * integer_difference);
    unused_written_slot = allocated_buffer;
    if ( allocated_buffer )
    {
      loaded_word_2 = *(_QWORD *)a1;
      scratch_buffer[2] = integer_difference;
      sub_14017D510(scratch_buffer, 0.34999999, (__int64)Block, masked_bits, input_value, input_value_2, a4, a5, table_value_2, table_value_4, 1, loaded_word_2);
      unused_written_slot = allocated_buffer;
    }
  }
  free(Block);
  return unused_written_slot;
}
#undef loaded_word_2
#undef Block
#undef scratch_buffer
#undef allocated_buffer
#undef selection_flag
#undef unused_written_slot_2
#undef selection_flag_2
#undef unused_written_slot_3
#undef unused_written_slot_4

// 140179FFF: conditional instruction was optimized away because rcx.8<100000000u
// 14017A04C: conditional instruction was optimized away because rcx.8<100000000u
// 14017A098: conditional instruction was optimized away because rcx.8<100000000u
// 14017A0E5: conditional instruction was optimized away because rdx.8<100000000u

//----- (000000014017A240) ----------------------------------------------------
__int64            sub_14017A240(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int selected_word;
  int masked_bits;
  int cached_selection_flag;
  int dword2_result;
  int dword1_result;
  int call_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017A240[64];
#define selection_flag (*(__int64 (*))(void *)(sr_frame_14017A240 + 8)) /* [rsp+20h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14017A240 + 16)) /* [rsp+28h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_14017A240 + 32)) /* [rsp+38h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_14017A240 + 48)) /* [rsp+48h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14017A240 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    selected_word = 0;
    selection_flag = 1;
    unused_written_slot_2 = 0;
    unused_written_slot_3 = 0;
    unused_written_slot = 0;
    selection_flag_2 = 0;
    masked_bits = sub_140182AD0(a1, a2, (__int64)&selection_flag);
    if ( a3 )
    {
      cached_selection_flag = 0;
      if ( masked_bits )
        cached_selection_flag = selection_flag_2;
      *a3 = cached_selection_flag;
    }
    if ( a4 )
    {
      dword2_result = 0;
      if ( masked_bits )
        dword2_result = DWORD2(selection_flag_2);
      *a4 = dword2_result;
    }
    if ( a5 )
    {
      dword1_result = 0;
      if ( masked_bits )
        dword1_result = DWORD1(selection_flag_2);
      *a5 = dword1_result;
    }
    if ( a6 )
    {
      if ( masked_bits )
        selected_word = HIDWORD(selection_flag_2);
      *a6 = selected_word;
    }
  }
  else
  {
    call_result = sub_14017DA60(a1, a2);
    if ( call_result < 0 )
      return 0;
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 2LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 3LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 4LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 5LL));
    if ( a5 )
      *a5 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 6LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 7LL));
    if ( a6 )
      *a6 = (__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 9LL)
                    + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 8LL) << 8));
  }
  return 1;
}
#undef selection_flag
#undef unused_written_slot
#undef selection_flag_2
#undef unused_written_slot_2
#undef unused_written_slot_3

//----- (000000014017A3C0) ----------------------------------------------------
int            sub_14017A3C0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 loaded_word;
  __int64 packed_word_bits;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  int shifted_bits;
  __int64 loaded_word_4;
  __int64 record_word_offset;
  __int16 loaded_word_5;
  __int16 loaded_word_6;
  unsigned __int8 *shifted_bits_2;

  loaded_word = *(_QWORD *)(a1 + 8);
  packed_word_bits = *(int *)(a1 + 36);
  loaded_word_2 = *(unsigned __int8 *)(packed_word_bits + loaded_word + 34);
  loaded_word_3 = *(unsigned __int8 *)(packed_word_bits + loaded_word + 35);
  shifted_bits = loaded_word_3 + (*(unsigned __int8 *)(packed_word_bits + loaded_word + 34) << 8);
  if ( a2 >= shifted_bits )
  {
    if ( a3 )
    {
      LODWORD(packed_word_bits) = (__int16)((*(unsigned __int8 *)(loaded_word + *(int *)(a1 + 40) + 4 * (loaded_word_3 + (loaded_word_2 << 8)) - 4) << 8)
                            + *(unsigned __int8 *)(loaded_word + *(int *)(a1 + 40) + 4 * (loaded_word_3 + (loaded_word_2 << 8)) - 3));
      *a3 = packed_word_bits;
    }
    if ( a4 )
    {
      shifted_bits_2 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 40) + 2 * (a2 - shifted_bits) + 4 * (loaded_word_3 + (loaded_word_2 << 8)));
      loaded_word_5 = *shifted_bits_2;
      loaded_word_6 = shifted_bits_2[1];
      goto LABEL_10;
    }
  }
  else
  {
    if ( a3 )
    {
      LODWORD(packed_word_bits) = (__int16)((*(unsigned __int8 *)(4 * a2 + loaded_word + *(int *)(a1 + 40)) << 8)
                            + *(unsigned __int8 *)(4 * a2 + loaded_word + *(int *)(a1 + 40) + 1));
      *a3 = packed_word_bits;
    }
    if ( a4 )
    {
      loaded_word_4 = *(_QWORD *)(a1 + 8);
      record_word_offset = 4 * a2 + (__int64)*(int *)(a1 + 40);
      loaded_word_5 = *(unsigned __int8 *)(record_word_offset + loaded_word_4 + 2);
      loaded_word_6 = *(unsigned __int8 *)(record_word_offset + loaded_word_4 + 3);
LABEL_10:
      LODWORD(packed_word_bits) = (__int16)((loaded_word_5 << 8) + loaded_word_6);
      *a4 = packed_word_bits;
    }
  }
  return packed_word_bits;
}

//----- (000000014017A4F0) ----------------------------------------------------
__int64            sub_14017A4F0(__int64 a1, int a2, int a3)
{
  int shifted_bits;
  unsigned int call_result;
  __int64 loaded_word;
  unsigned __int8 *loaded_record_pointer;
  int integer_sum;
  unsigned int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  __int64 scaled_index;
  unsigned int shifted_bits_5;

  shifted_bits = 0;
  call_result = 0;
  if ( *(_DWORD *)(a1 + 48) )
    call_result = sub_14017DCC0(a1, a2, a3);
  loaded_word = *(int *)(a1 + 44);
  if ( !(_DWORD)loaded_word )
    return call_result;
  loaded_record_pointer = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + loaded_word);
  if ( loaded_record_pointer[3] + (loaded_record_pointer[2] << 8) )
  {
    if ( loaded_record_pointer[9] + (loaded_record_pointer[8] << 8) == 1 )
    {
      integer_sum = 0;
      shifted_bits_2 = a3 | (a2 << 16);
      shifted_bits_3 = (loaded_record_pointer[10] << 8) + loaded_record_pointer[11] - 1;
      if ( shifted_bits_3 >= 0 )
      {
        while ( 1 )
        {
          shifted_bits_4 = (shifted_bits_3 + integer_sum) >> 1;
          scaled_index = 6 * shifted_bits_4;
          shifted_bits_5 = loaded_record_pointer[scaled_index + 21] + (loaded_record_pointer[scaled_index + 18] << 24) + (loaded_record_pointer[scaled_index + 20] << 8) + (loaded_record_pointer[scaled_index + 19] << 16);
          if ( shifted_bits_2 >= shifted_bits_5 )
          {
            if ( shifted_bits_2 <= shifted_bits_5 )
            {
              shifted_bits = (__int16)(loaded_record_pointer[scaled_index + 23] + (loaded_record_pointer[scaled_index + 22] << 8));
              return shifted_bits + call_result;
            }
            integer_sum = shifted_bits_4 + 1;
          }
          else
          {
            shifted_bits_3 = shifted_bits_4 - 1;
          }
          if ( integer_sum > shifted_bits_3 )
            return call_result;
        }
      }
    }
  }
  return shifted_bits + call_result;
}

//----- (000000014017A640) ----------------------------------------------------
__int64            sub_14017A640(
        __int64 a1,
        float a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        float a6,
        void *a7,
        int *a8,
        unsigned int *a9,
        signed int *a10)
{
  float input_value;
  int shifted_bits;
  int masked_bits;
  int shifted_bits_2;
  int dword1_result;
  int dword2_result;
  int call_result;
  __int64 loaded_word;
  __m128 vector_result;
  __m128d converted_vector;
  int table_value;
  __m128 vector_result_2;
  __m128d converted_vector_2;
  __m128 vector_result_3;
  int table_value_2;
  __m128d converted_vector_3;
  int table_value_3;
  __m128 vector_result_4;
  __m128d converted_vector_4;
  int table_value_4;
  signed int integer_difference;
  unsigned int integer_difference_2;
  int integer_sum;
  signed int integer_difference_3;
  int integer_difference_4;
  signed int iteration_count;
  float component_delta;
  __int64 masked_bits_2;
  _BYTE *saved_allocated_buffer;
  __int64 saved_masked_bits;
  __int64 allocated_buffer;
  _BYTE *allocation_buffer;
  float *allocation_buffer_2;
  __int64 element_index;
  __int64 saved_running_total;
  __int64 running_total;
  char table_value_5;
  float combined_products;
  float product_difference;
  float square_root;
  float scaled_ratio;
  float weighted_sum;
  float combined_products_2;
  float weighted_sum_2;
  float combined_products_3;
  float weighted_sum_3;
  float squared_length;
  _BYTE *cached_block;
  int cached_integer_difference;
  signed int cached_integer_sum;
  float product_difference_2;
  int cached_integer_sum_2;
  __int64 cached_integer_difference_2;
  int iteration_count_2;
  __m128i converted_vector_5;
  _BYTE *buffer_cursor;
  float scaled_ratio_2;
  float converted_vector_6;
  float input_value_2;
  float scaled_ratio_3;
  float square_root_2;
  float component_sum;
  __int64 element_index_2;
  int call_result_2;
  __int64 scaled_index;
  float scaled_value;
  float weighted_sum_4;
  float component_delta_2;
  float component_delta_3;
  float squared_value;
  char table_value_6;
  float product_difference_3;
  float product_difference_4;
  float absolute_value;
  float squared_length_2;
  float product_difference_5;
  float product_difference_6;
  float weighted_sum_5;
  float weighted_sum_6;
  float scaled_value_2;
  float limited_value;
  float limited_value_2;
  float limited_value_3;
  float component_delta_4;
  float component_delta_5;
  float component_sum_2;
  float comparison_operand;
  float component_delta_6;
  float component_delta_7;
  float weighted_sum_7;
  float squared_length_3;
  float weighted_sum_8;
  float squared_length_4;
  int call_result_3;
  float scaled_ratio_4;
  float squared_value_2;
  float square_root_3;
  float cached_scaled_value;
  float cached_product_difference;
  float cached_weighted_sum;
  float cached_product_difference_2;
  float component_sum_3;
  float component_delta_8;
  float squared_component;
  float scaled_value_3;
  float squared_component_2;
  float scaled_value_4;
  float weighted_sum_9;
  float weighted_sum_10;
  float squared_value_3;
  float combined_products_4;
  float combined_products_5;
  float squared_value_4;
  float combined_products_6;
  float product_difference_7;
  float scaled_value_5;
  float squared_value_5;
  float weighted_sum_11;
  float limited_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017A640[224];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_14017A640 + 8)) /* [rsp+0h] */
#define saved_component_sum (*(float (*))(void *)(sr_frame_14017A640 + 40)) /* [rsp+20h] */
#define saved_converted_vector (*(float (*))(void *)(sr_frame_14017A640 + 44)) /* [rsp+24h] */
#define input_value_3 (*(float (*))(void *)(sr_frame_14017A640 + 48)) /* [rsp+28h] */
#define saved_product_difference (*(float (*))(void *)(sr_frame_14017A640 + 52)) /* [rsp+2Ch] */
#define saved_product_difference_2 (*(float (*))(void *)(sr_frame_14017A640 + 56)) /* [rsp+30h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_14017A640 + 60)) /* [rsp+34h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_14017A640 + 64)) /* [rsp+38h] */
#define saved_iteration_count (*(signed int (*))(void *)(sr_frame_14017A640 + 68)) /* [rsp+3Ch] */
#define integer_sum_2 (*(signed int (*))(void *)(sr_frame_14017A640 + 72)) /* [rsp+40h] */
#define Block (*(void * (*))(void *)(sr_frame_14017A640 + 80)) /* [rsp+48h] */
#define cached_integer_sum_3 (*(int (*))(void *)(sr_frame_14017A640 + 88)) /* [rsp+50h] */
#define component_delta_9 (*(float (*))(void *)(sr_frame_14017A640 + 92)) /* [rsp+54h] */
#define cached_integer_difference_3 (*(unsigned int (*))(void *)(sr_frame_14017A640 + 100)) /* [rsp+5Ch] */
#define cached_input_value (*(float (*))(void *)(sr_frame_14017A640 + 104)) /* [rsp+60h] */
#define scaled_ratio_5 (*(float (*))(void *)(sr_frame_14017A640 + 108)) /* [rsp+64h] */
#define scaled_ratio_6 (*(float (*))(void *)(sr_frame_14017A640 + 112)) /* [rsp+68h] */
#define cached_integer_difference_4 (*(__int64 (*))(void *)(sr_frame_14017A640 + 120)) /* [rsp+70h] */
#define allocated_buffer_2 (*(__int64 (*))(void *)(sr_frame_14017A640 + 128)) /* [rsp+78h] */
#define selection_flag (*(__int64 (*))(void *)(sr_frame_14017A640 + 136)) /* [rsp+80h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14017A640 + 144)) /* [rsp+88h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_14017A640 + 160)) /* [rsp+98h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_14017A640 + 176)) /* [rsp+A8h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14017A640 + 184)) /* [rsp+B0h] */
#define saved_scaled_ratio (*(float (*))(void *)(sr_frame_14017A640 + 192)) /* [rsp+B8h] */
#define saved_product_difference_3 (*(float (*))(void *)(sr_frame_14017A640 + 196)) /* [rsp+BCh] */
#define frame_float_at_200 (*(float (*))(void *)(sr_frame_14017A640 + 200)) /* [rsp+C0h] */
#define unused_frame_slot_208 (*(__int64 (*))(void *)(sr_frame_14017A640 + 208)) /* [rsp+C8h] */

  input_value = a2;
  Block = a7;
  input_value_3 = a2;
  if ( a2 != 0.0 )
  {
    shifted_bits = 0;
    if ( *(_DWORD *)(a1 + 76) )
    {
      selection_flag = 1;
      unused_written_slot_2 = 0;
      unused_written_slot_3 = 0;
      unused_written_slot = 0;
      selection_flag_2 = 0;
      masked_bits = sub_140182AD0(a1, a3, (__int64)&selection_flag);
      shifted_bits_2 = 0;
      if ( masked_bits )
      {
        shifted_bits_2 = HIDWORD(selection_flag_2);
        shifted_bits = selection_flag_2;
      }
      dword1_result = 0;
      if ( masked_bits )
        dword1_result = DWORD1(selection_flag_2);
      dword2_result = 0;
      if ( masked_bits )
        dword2_result = DWORD2(selection_flag_2);
    }
    else
    {
      call_result = sub_14017DA60(a1, a3);
      if ( call_result < 0 )
        return 0; /* 0x14017A719: js -> xor eax, eax */
      loaded_word = *(_QWORD *)(a1 + 8);
      shifted_bits_2 = (__int16)((*(unsigned __int8 *)(loaded_word + call_result + 8) << 8) + *(unsigned __int8 *)(loaded_word + call_result + 9));
      shifted_bits = (__int16)(*(unsigned __int8 *)(loaded_word + call_result + 3) + (*(unsigned __int8 *)(loaded_word + call_result + 2) << 8));
      dword1_result = (__int16)((*(unsigned __int8 *)(loaded_word + call_result + 6) << 8) + *(unsigned __int8 *)(loaded_word + call_result + 7));
      dword2_result = (__int16)(*(unsigned __int8 *)(loaded_word + call_result + 5) + (*(unsigned __int8 *)(loaded_word + call_result + 4) << 8));
    }
    vector_result = _mm_set_ss((float)shifted_bits);
    SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] * a2;
    converted_vector = _mm_cvtps_pd(vector_result);
    if ( (double)(int)SR_VEC_LANES(128, converted_vector, f64)[0] != SR_VEC_LANES(128, converted_vector, f64)[0] )
      SR_VEC_LANES(128, converted_vector, f64)[0] = (double)((int)SR_VEC_LANES(128, converted_vector, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1));
    table_value = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
    vector_result_2 = _mm_set_ss((float)-shifted_bits_2);
    SR_VEC_LANES(128, vector_result_2, f32)[0] = SR_VEC_LANES(128, vector_result_2, f32)[0] * input_value;
    converted_vector_2 = _mm_cvtps_pd(vector_result_2);
    if ( (double)(int)SR_VEC_LANES(128, converted_vector_2, f64)[0] != SR_VEC_LANES(128, converted_vector_2, f64)[0] )
      SR_VEC_LANES(128, converted_vector_2, f64)[0] = (double)((int)SR_VEC_LANES(128, converted_vector_2, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_2, converted_vector_2)) & 1));
    vector_result_3 = _mm_set_ss((float)dword1_result);
    table_value_2 = (int)SR_VEC_LANES(128, converted_vector_2, f64)[0];
    SR_VEC_LANES(128, vector_result_3, f32)[0] = SR_VEC_LANES(128, vector_result_3, f32)[0] * input_value;
    converted_vector_3 = _mm_cvtps_pd(vector_result_3);
    if ( (double)(int)SR_VEC_LANES(128, converted_vector_3, f64)[0] != SR_VEC_LANES(128, converted_vector_3, f64)[0] )
      SR_VEC_LANES(128, converted_vector_3, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_3, converted_vector_3)) & 1) + (int)SR_VEC_LANES(128, converted_vector_3, f64)[0]);
    table_value_3 = (int)SR_VEC_LANES(128, converted_vector_3, f64)[0];
    vector_result_4 = _mm_set_ss((float)-dword2_result);
    SR_VEC_LANES(128, vector_result_4, f32)[0] = SR_VEC_LANES(128, vector_result_4, f32)[0] * input_value;
    converted_vector_4 = _mm_cvtps_pd(vector_result_4);
    if ( (double)(int)SR_VEC_LANES(128, converted_vector_4, f64)[0] != SR_VEC_LANES(128, converted_vector_4, f64)[0] )
      SR_VEC_LANES(128, converted_vector_4, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_4, converted_vector_4)) & 1) + (int)SR_VEC_LANES(128, converted_vector_4, f64)[0]);
    table_value_4 = (int)SR_VEC_LANES(128, converted_vector_4, f64)[0];
    if ( table_value != table_value_3 && table_value_2 != table_value_4 )
    {
      integer_difference = table_value_2 - a4;
      integer_sum_2 = a4 + table_value_4;
      integer_difference_2 = table_value - a4;
      integer_sum = a4 + table_value_3;
      cached_integer_difference_3 = integer_difference_2;
      saved_iteration_count = integer_difference;
      integer_difference_3 = a4 + table_value_3 - integer_difference_2;
      cached_integer_sum_3 = integer_sum;
      integer_difference_4 = integer_sum_2 - integer_difference;
      if ( Block )
        *(_DWORD *)Block = integer_difference_3;
      if ( a8 )
        *a8 = integer_difference_4;
      if ( a9 )
        *a9 = integer_difference_2;
      iteration_count = integer_difference;
      if ( a10 )
        *a10 = integer_difference;
      component_delta = -input_value;
      component_delta_9 = -input_value;
      masked_bits_2 = (int)sub_14017B360(a1, a3, (__int64 *)&Block);
      allocated_buffer_2 = sr_path_malloc(integer_difference_3 * integer_difference_4);
      saved_allocated_buffer = (_BYTE *)allocated_buffer_2;
      saved_masked_bits = masked_bits_2;
      allocated_buffer = sr_path_malloc(4 * masked_bits_2);
      allocation_buffer = Block;
      allocation_buffer_2 = (float *)allocated_buffer;
      if ( (int)masked_bits_2 > 0 )
      {
        element_index = 0;
        saved_running_total = 14LL * ((int)masked_bits_2 - 1);
        running_total = 0;
        do
        {
          table_value_5 = allocation_buffer[running_total + 12];
          if ( table_value_5 == 2 )
          {
            combined_products = (float)((float)*(__int16 *)&allocation_buffer[saved_running_total + 2] * component_delta) - (float)((float)*(__int16 *)&allocation_buffer[running_total + 2] * component_delta);
            product_difference = (float)((float)*(__int16 *)&allocation_buffer[saved_running_total] * input_value) - (float)((float)*(__int16 *)&allocation_buffer[running_total] * input_value);
            square_root = fsqrt((float)(combined_products * combined_products) + (float)(product_difference * product_difference));
            if ( square_root == 0.0 )
              goto LABEL_38;
            scaled_ratio = 1.0 / square_root;
          }
          else
          {
            if ( table_value_5 != 3
              || (weighted_sum = (float)*(__int16 *)&allocation_buffer[running_total + 4] * input_value,
                  combined_products_2 = (float)((float)((float)*(__int16 *)&allocation_buffer[running_total] * input_value) - (float)(weighted_sum + weighted_sum))
                      + (float)((float)*(__int16 *)&allocation_buffer[saved_running_total] * input_value),
                  weighted_sum_2 = (float)*(__int16 *)&allocation_buffer[running_total + 6] * component_delta,
                  combined_products_3 = (float)((float)*(__int16 *)&allocation_buffer[running_total + 2] * component_delta) - (float)(weighted_sum_2 + weighted_sum_2),
                  weighted_sum_3 = (float)*(__int16 *)&allocation_buffer[saved_running_total + 2] * component_delta,
                  squared_length = (float)((float)(combined_products_3 + weighted_sum_3) * (float)(combined_products_3 + weighted_sum_3)) + (float)(combined_products_2 * combined_products_2),
                  squared_length == 0.0) )
            {
LABEL_38:
              scaled_ratio = 0.0;
              goto LABEL_39;
            }
            scaled_ratio = 1.0 / squared_length;
          }
LABEL_39:
          saved_running_total = running_total;
          running_total += 14;
          allocation_buffer_2[element_index++] = scaled_ratio;
        }
        while ( element_index < masked_bits_2 );
      }
      if ( iteration_count >= integer_sum_2 )
        goto LABEL_99;
      cached_block = saved_allocated_buffer;
      cached_integer_difference = cached_integer_difference_3;
      cached_integer_sum = integer_sum_2;
      product_difference_2 = saved_product_difference_3;
      cached_integer_difference_4 = integer_difference_3;
      cached_integer_sum_2 = cached_integer_sum_3;
      cached_integer_difference_2 = integer_difference_3;
      Block = saved_allocated_buffer;
LABEL_42:
      iteration_count_2 = cached_integer_difference;
      if ( cached_integer_difference >= cached_integer_sum_2 )
        goto LABEL_98;
      converted_vector_5 = _mm_cvtsi32_si128(iteration_count);
      buffer_cursor = cached_block;
      scaled_ratio_2 = 1.0 / input_value;
      converted_vector_6 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_5), f32)[0] + 0.5;
      input_value_2 = (float)a5;
      saved_converted_vector = converted_vector_6;
      scaled_ratio_3 = converted_vector_6 / component_delta;
      scaled_ratio_6 = 1.0 / input_value;
      scaled_ratio_5 = converted_vector_6 / component_delta;
      cached_input_value = input_value_2;
LABEL_44:
      square_root_2 = 999999.0;
      component_sum = (float)iteration_count_2 + 0.5;
      saved_component_sum = component_sum;
      element_index_2 = 0;
      call_result_2 = sub_14017FB20(scaled_ratio_2 * component_sum, scaled_ratio_3, masked_bits_2, (__int64)allocation_buffer);
      if ( saved_masked_bits <= 0 )
        goto LABEL_91;
      while ( 1 )
      {
        scaled_index = 14 * element_index_2;
        scaled_value = (float)*(__int16 *)&allocation_buffer[14 * element_index_2] * input_value;
        weighted_sum_4 = (float)*(__int16 *)&allocation_buffer[14 * element_index_2 + 2] * component_delta_9;
        component_delta_2 = scaled_value - component_sum;
        component_delta_3 = weighted_sum_4 - converted_vector_6;
        squared_value = (float)(component_delta_2 * component_delta_2) + (float)(component_delta_3 * component_delta_3);
        if ( squared_value < (float)(square_root_2 * square_root_2) )
          square_root_2 = fsqrt(squared_value);
        table_value_6 = allocation_buffer[scaled_index + 12];
        if ( table_value_6 == 2 )
        {
          product_difference_3 = (float)((float)*(__int16 *)&allocation_buffer[scaled_index - 14] * input_value) - scaled_value;
          product_difference_4 = (float)((float)*(__int16 *)&allocation_buffer[scaled_index - 12] * component_delta_9) - weighted_sum_4;
          absolute_value = fabs((float)(component_delta_3 * product_difference_3) - (float)(product_difference_4 * component_delta_2)) * allocation_buffer_2[element_index_2];
          if ( !element_index_2 )
            crt_assert((char *)L"i != 0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x115Eu);
          if ( absolute_value >= square_root_2
            || (squared_length_2 = (float)((float)(component_delta_2 * product_difference_3) + (float)(component_delta_3 * product_difference_4))
                    / (float)((float)(product_difference_4 * product_difference_4) + (float)(product_difference_3 * product_difference_3)),
                squared_length_2 > -0.0) )
          {
            component_sum = saved_component_sum;
          }
          else
          {
            component_sum = saved_component_sum;
            if ( squared_length_2 >= -1.0 )
              square_root_2 = absolute_value;
          }
          goto LABEL_88;
        }
        if ( table_value_6 != 3 )
          goto LABEL_89;
        product_difference_5 = (float)*(__int16 *)&allocation_buffer[14 * element_index_2 - 14] * input_value;
        product_difference_6 = (float)*(__int16 *)&allocation_buffer[14 * element_index_2 - 12] * component_delta_9;
        weighted_sum_5 = (float)*(__int16 *)&allocation_buffer[scaled_index + 4] * input_value;
        weighted_sum_6 = (float)*(__int16 *)&allocation_buffer[scaled_index + 6];
        saved_product_difference_2 = product_difference_5;
        scaled_value_2 = weighted_sum_6 * component_delta_9;
        saved_product_difference = product_difference_6;
        saved_weighted_sum = weighted_sum_5;
        limited_value = fmaxf(weighted_sum_5, scaled_value);
        saved_scaled_value = scaled_value_2;
        limited_value_2 = fminf(scaled_value_2, weighted_sum_4);
        limited_value_3 = fmaxf(scaled_value_2, weighted_sum_4);
        if ( saved_component_sum > (float)(fminf(fminf(weighted_sum_5, scaled_value), product_difference_5) - square_root_2)
          && saved_component_sum < (float)(fmaxf(limited_value, product_difference_5) + square_root_2)
          && converted_vector_6 > (float)(fminf(limited_value_2, product_difference_6) - square_root_2)
          && converted_vector_6 < (float)(fmaxf(limited_value_3, product_difference_6) + square_root_2) )
        {
          break;
        }
        component_sum = saved_component_sum;
        input_value = input_value_3;
LABEL_89:
        if ( ++element_index_2 >= saved_masked_bits )
        {
          input_value_2 = cached_input_value;
LABEL_91:
          if ( !call_result_2 )
            square_root_2 = -square_root_2;
          weighted_sum_11 = (float)(square_root_2 * a6) + input_value_2;
          if ( weighted_sum_11 >= 0.0 )
            limited_value_4 = fminf(weighted_sum_11, 255.0);
          else
            limited_value_4 = 0.0;
          ++iteration_count_2;
          scaled_ratio_3 = scaled_ratio_5;
          LODWORD(masked_bits_2) = saved_masked_bits;
          scaled_ratio_2 = scaled_ratio_6;
          *buffer_cursor++ = (int)limited_value_4;
          cached_integer_sum_2 = cached_integer_sum_3;
          if ( iteration_count_2 >= cached_integer_sum_3 )
          {
            component_delta = component_delta_9;
            iteration_count = saved_iteration_count;
            cached_block = Block;
            cached_integer_difference = cached_integer_difference_3;
            cached_integer_difference_2 = cached_integer_difference_4;
            cached_integer_sum = integer_sum_2;
LABEL_98:
            ++iteration_count;
            cached_block += cached_integer_difference_2;
            saved_iteration_count = iteration_count;
            Block = cached_block;
            if ( iteration_count >= cached_integer_sum )
            {
LABEL_99:
              free(allocation_buffer_2);
              free(allocation_buffer);
              return (__int64)allocated_buffer_2; /* 0x14017B319: mov rax, rbx */
            }
            goto LABEL_42;
          }
          goto LABEL_44;
        }
      }
      component_delta_4 = scaled_value_2 - weighted_sum_4;
      component_delta_5 = weighted_sum_5 - scaled_value;
      component_sum_2 = scaled_value_2 + scaled_value_2;
      comparison_operand = allocation_buffer_2[element_index_2];
      component_delta_6 = (float)(scaled_value - (float)(weighted_sum_5 + weighted_sum_5)) + product_difference_5;
      component_delta_7 = (float)(weighted_sum_4 - component_sum_2) + product_difference_6;
      weighted_sum_7 = (float)(component_delta_5 * component_delta_2) + (float)(component_delta_4 * component_delta_3);
      squared_length_3 = (float)((float)(component_delta_5 * component_delta_5) + (float)(component_delta_4 * component_delta_4)) + (float)(component_delta_4 * component_delta_4);
      weighted_sum_8 = (float)((float)(component_delta_4 * component_delta_7) + (float)(component_delta_5 * component_delta_6)) * 3.0;
      squared_length_4 = (float)((float)((float)(component_delta_3 * component_delta_7) + (float)(component_delta_2 * component_delta_6)) + (float)(component_delta_5 * component_delta_5)) + squared_length_3;
      if ( comparison_operand == 0.0 )
      {
        if ( weighted_sum_8 == 0.0 )
        {
          if ( squared_length_4 != 0.0 )
          {
            call_result_3 = 1;
            scaled_ratio_4 = -(float)(weighted_sum_7 / squared_length_4);
            saved_scaled_ratio = scaled_ratio_4;
LABEL_67:
            cached_scaled_value = saved_scaled_value;
            cached_product_difference = saved_product_difference;
            cached_weighted_sum = saved_weighted_sum;
            cached_product_difference_2 = saved_product_difference_2;
            if ( scaled_ratio_4 >= 0.0 && scaled_ratio_4 <= 1.0 )
            {
              component_sum_3 = scaled_ratio_4 + scaled_ratio_4;
              component_delta_8 = 1.0 - scaled_ratio_4;
              squared_component = scaled_ratio_4 * scaled_ratio_4;
              scaled_value_3 = component_sum_3 * component_delta_8;
              squared_component_2 = component_delta_8 * component_delta_8;
              scaled_value_4 = squared_component * saved_product_difference;
              weighted_sum_9 = (float)(scaled_value_3 * saved_scaled_value) + (float)(squared_component_2 * weighted_sum_4);
              weighted_sum_10 = (float)((float)(scaled_value_3 * saved_weighted_sum) + (float)(squared_component_2 * scaled_value)) + (float)(squared_component * saved_product_difference_2);
              component_sum = saved_component_sum;
              squared_value_3 = (float)((float)(weighted_sum_10 - saved_component_sum) * (float)(weighted_sum_10 - saved_component_sum))
                   + (float)((float)((float)(weighted_sum_9 + scaled_value_4) - saved_converted_vector) * (float)((float)(weighted_sum_9 + scaled_value_4) - saved_converted_vector));
              if ( squared_value_3 < (float)(square_root_2 * square_root_2) )
                square_root_2 = fsqrt(squared_value_3);
LABEL_73:
              if ( call_result_3 >= 2 && product_difference_2 >= 0.0 && product_difference_2 <= 1.0 )
              {
                combined_products_4 = (float)(product_difference_2 + product_difference_2) * (float)(1.0 - product_difference_2);
                combined_products_5 = (float)(combined_products_4 * cached_scaled_value) + (float)((float)((float)(1.0 - product_difference_2) * (float)(1.0 - product_difference_2)) * weighted_sum_4);
                squared_value_4 = (float)((float)((float)((float)((float)(combined_products_4 * cached_weighted_sum)
                                                     + (float)((float)((float)(1.0 - product_difference_2) * (float)(1.0 - product_difference_2)) * scaled_value))
                                             + (float)((float)(product_difference_2 * product_difference_2) * cached_product_difference_2))
                                     - component_sum)
                             * (float)((float)((float)((float)(combined_products_4 * cached_weighted_sum)
                                                     + (float)((float)((float)(1.0 - product_difference_2) * (float)(1.0 - product_difference_2)) * scaled_value))
                                             + (float)((float)(product_difference_2 * product_difference_2) * cached_product_difference_2))
                                     - component_sum))
                     + (float)((float)((float)(combined_products_5 + (float)((float)(product_difference_2 * product_difference_2) * cached_product_difference)) - saved_converted_vector)
                             * (float)((float)(combined_products_5 + (float)((float)(product_difference_2 * product_difference_2) * cached_product_difference)) - saved_converted_vector));
                if ( squared_value_4 < (float)(square_root_2 * square_root_2) )
                  square_root_2 = fsqrt(squared_value_4);
              }
              if ( call_result_3 >= 3 && frame_float_at_200 >= 0.0 && frame_float_at_200 <= 1.0 )
              {
                combined_products_6 = (float)(frame_float_at_200 + frame_float_at_200) * (float)(1.0 - frame_float_at_200);
                product_difference_7 = (float)(1.0 - frame_float_at_200) * (float)(1.0 - frame_float_at_200);
                scaled_value_5 = combined_products_6 * cached_scaled_value;
                input_value = input_value_3;
                squared_value_5 = (float)((float)((float)((float)((float)(combined_products_6 * cached_weighted_sum) + (float)(product_difference_7 * scaled_value))
                                             + (float)((float)(frame_float_at_200 * frame_float_at_200) * cached_product_difference_2))
                                     - component_sum)
                             * (float)((float)((float)((float)(combined_products_6 * cached_weighted_sum) + (float)(product_difference_7 * scaled_value))
                                             + (float)((float)(frame_float_at_200 * frame_float_at_200) * cached_product_difference_2))
                                     - component_sum))
                     + (float)((float)((float)((float)(scaled_value_5 + (float)(product_difference_7 * weighted_sum_4)) + (float)((float)(frame_float_at_200 * frame_float_at_200) * cached_product_difference))
                                     - saved_converted_vector)
                             * (float)((float)((float)(scaled_value_5 + (float)(product_difference_7 * weighted_sum_4)) + (float)((float)(frame_float_at_200 * frame_float_at_200) * cached_product_difference))
                                     - saved_converted_vector));
                if ( squared_value_5 < (float)(square_root_2 * square_root_2) )
                  square_root_2 = fsqrt(squared_value_5);
                goto LABEL_88;
              }
LABEL_87:
              input_value = input_value_3;
LABEL_88:
              converted_vector_6 = saved_converted_vector;
              goto LABEL_89;
            }
LABEL_72:
            component_sum = saved_component_sum;
            goto LABEL_73;
          }
        }
        else
        {
          squared_value_2 = (float)(squared_length_4 * squared_length_4) - (float)((float)(weighted_sum_8 * 4.0) * weighted_sum_7);
          if ( squared_value_2 >= 0.0 )
          {
            square_root_3 = fsqrt(squared_value_2);
            call_result_3 = 2;
            scaled_ratio_4 = (float)((float)-squared_length_4 - square_root_3) * (float)(0.5 / weighted_sum_8);
            product_difference_2 = (float)(square_root_3 - squared_length_4) * (float)(0.5 / weighted_sum_8);
            saved_scaled_ratio = scaled_ratio_4;
            saved_product_difference_3 = product_difference_2;
            goto LABEL_67;
          }
        }
        component_sum = saved_component_sum;
        goto LABEL_87;
      }
      call_result_3 = sub_140183820(weighted_sum_8 * comparison_operand, comparison_operand * squared_length_4, weighted_sum_7 * comparison_operand, &saved_scaled_ratio);
      product_difference_2 = saved_product_difference_3;
      if ( call_result_3 >= 1 )
      {
        scaled_ratio_4 = saved_scaled_ratio;
        goto LABEL_67;
      }
      cached_product_difference = saved_product_difference;
      cached_product_difference_2 = saved_product_difference_2;
      cached_weighted_sum = saved_weighted_sum;
      cached_scaled_value = saved_scaled_value;
      goto LABEL_72;
    }
  }
  return 0; /* 0x14017B326: xor eax, eax */
}
#undef unused_frame_slot_8
#undef saved_component_sum
#undef saved_converted_vector
#undef input_value_3
#undef saved_product_difference
#undef saved_product_difference_2
#undef saved_weighted_sum
#undef saved_scaled_value
#undef saved_iteration_count
#undef integer_sum_2
#undef Block
#undef cached_integer_sum_3
#undef component_delta_9
#undef cached_integer_difference_3
#undef cached_input_value
#undef scaled_ratio_5
#undef scaled_ratio_6
#undef cached_integer_difference_4
#undef allocated_buffer_2
#undef selection_flag
#undef unused_written_slot
#undef selection_flag_2
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef saved_scaled_ratio
#undef saved_product_difference_3
#undef frame_float_at_200
#undef unused_frame_slot_208

// 14017A7BF: conditional instruction was optimized away because rcx.8<100000000u
// 14017A809: conditional instruction was optimized away because rcx.8<100000000u
// 14017A850: conditional instruction was optimized away because rcx.8<100000000u
// 14017A89B: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017B360) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14017B360(__int64 a1, int a2, __int64 *a3)
{
  unsigned int unused_written_slot;
  __int64 allocated_buffer;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017B360[112];
#define selection_flag (*(__int64 (*))(void *)(sr_frame_14017B360 + 0)) /* [rsp+20h] */
#define unused_written_slot_2 (*(sr_frame_i128 (*))(void *)(sr_frame_14017B360 + 8)) /* [rsp+28h] */
#define unused_written_slot_3 (*(sr_frame_i128 (*))(void *)(sr_frame_14017B360 + 24)) /* [rsp+38h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_14017B360 + 40)) /* [rsp+48h] */
#define selection_flag_2 (*(int (*))(void *)(sr_frame_14017B360 + 48)) /* [rsp+50h] */
#define selection_flag_3 (*(__int64 (*))(void *)(sr_frame_14017B360 + 56)) /* [rsp+58h] */
#define unused_written_slot_5 (*(__int128 (*))(void *)(sr_frame_14017B360 + 64)) /* [rsp+60h] */
#define unused_written_slot_6 (*(__int128 (*))(void *)(sr_frame_14017B360 + 80)) /* [rsp+70h] */
#define unused_written_slot_7 (*(__int64 (*))(void *)(sr_frame_14017B360 + 96)) /* [rsp+80h] */
#define selection_flag_4 (*(unsigned int (*))(void *)(sr_frame_14017B360 + 104)) /* [rsp+88h] */

  if ( !*(_DWORD *)(a1 + 76) )
    return sub_14017E380(a1, a2, a3);
  unused_written_slot = 0;
  selection_flag = 1;
  unused_written_slot_4 = 0;
  selection_flag_2 = 0;
  selection_flag_3 = 0;
  selection_flag_4 = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  if ( (unsigned int)sub_140182AD0(a1, a2, (__int64)&selection_flag)
    && (allocated_buffer = sr_path_malloc(14LL * selection_flag_2), *a3 = allocated_buffer, unused_written_slot_7 = allocated_buffer, (unsigned int)sub_140182AD0(a1, a2, (__int64)&selection_flag_3)) )
  {
    unused_written_slot = selection_flag_4;
    if ( selection_flag_4 != selection_flag_2 )
      crt_assert(
        (char *)L"output_ctx.num_vertices == count_ctx.num_vertices",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x8B6u);
  }
  else
  {
    *a3 = 0;
  }
  return unused_written_slot;
}
#undef selection_flag
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag_2
#undef selection_flag_3
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef selection_flag_4

//----- (000000014017B460) ----------------------------------------------------
__int64            sub_14017B460(char *a1)
{
  unsigned __int8 *unrecovered_register_value;
  _BYTE *byte_cursor;

  if ( sub_140181710(a1) )
    return 1;
  if ( *byte_cursor == 116
    && byte_cursor[1] == 116
    && byte_cursor[2] == 99
    && byte_cursor[3] == 102
    && ((unrecovered_register_value[7] - 0x10000 + (unrecovered_register_value[4] << 24) + (unrecovered_register_value[6] << 8) + ((unsigned __int8)byte_cursor[5] << 16)) & 0xFFFEFFFF) == 0 )
  {
    return unrecovered_register_value[11] + ((unrecovered_register_value[10] + ((unrecovered_register_value[9] + (unrecovered_register_value[8] << 8)) << 8)) << 8);
  }
  return 0;
}

//----- (000000014017B4F0) ----------------------------------------------------
__int64            sub_14017B4F0(char *a1)
{
  unsigned __int8 *unrecovered_register_value;
  _BYTE *byte_cursor;

  if ( sub_140181710(a1) )
    return 1;
  if ( *byte_cursor == 116
    && byte_cursor[1] == 116
    && byte_cursor[2] == 99
    && byte_cursor[3] == 102
    && ((unrecovered_register_value[7] - 0x10000 + (unrecovered_register_value[4] << 24) + (unrecovered_register_value[6] << 8) + ((unsigned __int8)byte_cursor[5] << 16)) & 0xFFFEFFFF) == 0 )
  {
    return unrecovered_register_value[11] + ((unrecovered_register_value[10] + ((unrecovered_register_value[9] + (unrecovered_register_value[8] << 8)) << 8)) << 8);
  }
  return 0;
}

//----- (000000014017B740) ----------------------------------------------------
__int64            sub_14017B740(__int64 a1, __int64 a2, unsigned int a3)
{
  int iteration_count;
  __int64 call_result;
  int call_result_2;
  int cached_call_result;
  int call_result_3;
  int cached_call_result_2;
  int call_result_4;
  int cached_call_result_3;
  int masked_bits;
  int masked_bits_2;
  int masked_bits_3;
  unsigned int call_result_5;
  __m128i saved_converted_vector;
  __m128i saved_converted_vector_2;
  __int32 table_value;
  int table_value_2;
  _OWORD *returned_pointer;
  int table_value_3;
  int integer_difference;
  unsigned int call_result_6;
  int shifted_bits;
  int loaded_word;
  int shifted_bits_2;
  int integer_sum;
  __int64 scaled_index;
  int shifted_bits_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017B740[144];
#define packed_vector (*(__m128i (*))(void *)(sr_frame_14017B740 + 0)) /* [rsp+20h] */
#define converted_vector (*(__m128i (*))(void *)(sr_frame_14017B740 + 16)) /* [rsp+30h] */
#define saved_converted_vector_3 (*(__m128i (*))(void *)(sr_frame_14017B740 + 32)) /* [rsp+40h] */
#define packed_vector_2 (*(__int128 (*))(void *)(sr_frame_14017B740 + 48)) /* [rsp+50h] */
#define call_result_7 (*(int (*))(void *)(sr_frame_14017B740 + 128)) /* [rsp+A0h] */
#define masked_bits_4 (*(int (*))(void *)(sr_frame_14017B740 + 128)) /* [rsp+A0h] */
#define call_result_8 (*(int (*))(void *)(sr_frame_14017B740 + 136)) /* [rsp+A8h] */

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  iteration_count = 0;
  converted_vector = _mm_cvtsi64_si128((long long)(0u));
  *(_OWORD *)(a1 + 64) = 0u;
  call_result = (unsigned int)sub_140180D50(a2, a3, "cmap");
  call_result_2 = sub_140180D50(a2, a3, "loca");
  *(_DWORD *)(a1 + 24) = call_result_2;
  cached_call_result = call_result_2;
  call_result_3 = sub_140180D50(a2, a3, "head");
  *(_DWORD *)(a1 + 28) = call_result_3;
  cached_call_result_2 = call_result_3;
  call_result_8 = sub_140180D50(a2, a3, "glyf");
  *(_DWORD *)(a1 + 32) = call_result_8;
  call_result_4 = sub_140180D50(a2, a3, "hhea");
  *(_DWORD *)(a1 + 36) = call_result_4;
  cached_call_result_3 = call_result_4;
  call_result_7 = sub_140180D50(a2, a3, "hmtx");
  *(_DWORD *)(a1 + 40) = call_result_7;
  *(_DWORD *)(a1 + 44) = sub_140180D50(a2, a3, "kern");
  *(_DWORD *)(a1 + 48) = sub_140180D50(a2, a3, "GPOS");
  if ( !(_DWORD)call_result || !cached_call_result_2 || !cached_call_result_3 || !call_result_7 )
    return 0;
  if ( call_result_8 )
  {
    if ( !cached_call_result )
      return 0;
  }
  else
  {
    masked_bits_4 = 2;
    masked_bits = 0;
    masked_bits_2 = 0;
    masked_bits_3 = 0;
    call_result_5 = sub_140180D50(a2, a3, "CFF ");
    if ( !call_result_5 )
      return 0;
    converted_vector = _mm_cvtsi64_si128((long long)(0u));
    *(_OWORD *)(a1 + 128) = 0u;
    saved_converted_vector = converted_vector;
    SR_VEC_LANES(128, converted_vector, i32)[3] = 0x20000000;
    SR_VEC_LANES(128, converted_vector, i64)[0] = a2 + call_result_5;
    *(__m128i_u *)(a1 + 144) = saved_converted_vector;
    SR_VEC_LANES(128, converted_vector, i32)[2] = 0;
    saved_converted_vector_2 = converted_vector;
    *(__m128i_u *)(a1 + 64) = converted_vector;
    packed_vector = saved_converted_vector_2;
    if ( SR_VEC_READ_LANES(128, _mm_srli_si128(saved_converted_vector_2, 8), i32)[1] < 2 )
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( SR_VEC_LANES(128, packed_vector, i32)[3] > 2 )
      LOBYTE(table_value) = *(_BYTE *)(SR_VEC_LANES(128, packed_vector, i64)[0] + 2);
    else
      LOBYTE(table_value) = 0;
    table_value = (unsigned __int8)table_value;
    if ( (unsigned __int8)table_value > SR_VEC_LANES(128, packed_vector, i32)[3] )
    {
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      table_value = SR_VEC_LANES(128, packed_vector, i32)[3];
    }
    SR_VEC_LANES(128, packed_vector, i32)[2] = table_value;
    sub_14017F1F0(&saved_converted_vector_3, (__int64)&packed_vector);
    converted_vector = *(__m128i_u *)sub_14017F1F0(&saved_converted_vector_3, (__int64)&packed_vector);
    converted_vector = *(__m128i_u *)sub_14017F410(&saved_converted_vector_3, (__int64)&converted_vector, 0);
    sub_14017F1F0(&saved_converted_vector_3, (__int64)&packed_vector);
    *(_OWORD *)(a1 + 96) = *sub_14017F1F0(&saved_converted_vector_3, (__int64)&packed_vector);
    saved_converted_vector_3 = *(__m128i_u *)sub_1401803B0(&saved_converted_vector_3, (__int64)&converted_vector, 17);
    if ( SR_VEC_LANES(128, saved_converted_vector_3, i32)[2] < SR_VEC_LANES(128, saved_converted_vector_3, i32)[3] )
      masked_bits = sub_14017F5B0((__int64)&saved_converted_vector_3);
    saved_converted_vector_3 = *(__m128i_u *)sub_1401803B0(&saved_converted_vector_3, (__int64)&converted_vector, 262);
    if ( SR_VEC_LANES(128, saved_converted_vector_3, i32)[2] < SR_VEC_LANES(128, saved_converted_vector_3, i32)[3] )
      masked_bits_4 = sub_14017F5B0((__int64)&saved_converted_vector_3);
    saved_converted_vector_3 = *(__m128i_u *)sub_1401803B0(&saved_converted_vector_3, (__int64)&converted_vector, 292);
    if ( SR_VEC_LANES(128, saved_converted_vector_3, i32)[2] < SR_VEC_LANES(128, saved_converted_vector_3, i32)[3] )
      masked_bits_2 = sub_14017F5B0((__int64)&saved_converted_vector_3);
    saved_converted_vector_3 = *(__m128i_u *)sub_1401803B0(&saved_converted_vector_3, (__int64)&converted_vector, 293);
    if ( SR_VEC_LANES(128, saved_converted_vector_3, i32)[2] < SR_VEC_LANES(128, saved_converted_vector_3, i32)[3] )
      masked_bits_3 = sub_14017F5B0((__int64)&saved_converted_vector_3);
    saved_converted_vector_3 = converted_vector;
    converted_vector = packed_vector;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)sub_140180F10((__int64)&packed_vector_2, (__int64)&converted_vector, (__int64)&saved_converted_vector_3);
    if ( masked_bits_4 != 2 || !masked_bits )
      return 0;
    if ( masked_bits_2 )
    {
      if ( !masked_bits_3 )
        return 0;
      table_value_2 = SR_VEC_LANES(128, packed_vector, i32)[3];
      if ( masked_bits_2 > SR_VEC_LANES(128, packed_vector, i32)[3] || masked_bits_2 < 0 )
      {
        crt_assert(
          (char *)L"!(o > b->size || o < 0)",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0x45Cu);
        table_value_2 = SR_VEC_LANES(128, packed_vector, i32)[3];
      }
      if ( masked_bits_2 > table_value_2 || (SR_VEC_LANES(128, packed_vector, i32)[2] = masked_bits_2, masked_bits_2 < 0) )
        SR_VEC_LANES(128, packed_vector, i32)[2] = table_value_2;
      returned_pointer = sub_14017F1F0(&packed_vector_2, (__int64)&packed_vector);
      table_value_3 = SR_VEC_LANES(128, packed_vector, i32)[3];
      integer_difference = SR_VEC_LANES(128, packed_vector, i32)[3] - masked_bits_3;
      converted_vector = _mm_cvtsi64_si128((long long)(0u));
      *(_OWORD *)(a1 + 128) = *returned_pointer;
      if ( masked_bits_3 >= 0 && integer_difference >= 0 && masked_bits_3 <= table_value_3 )
      {
        SR_VEC_LANES(128, converted_vector, i64)[0] = SR_VEC_LANES(128, packed_vector, i64)[0] + masked_bits_3;
        SR_VEC_LANES(128, converted_vector, i32)[3] = integer_difference;
      }
      *(__m128i_u *)(a1 + 144) = converted_vector;
    }
    else
    {
      table_value_3 = SR_VEC_LANES(128, packed_vector, i32)[3];
    }
    if ( masked_bits > table_value_3 || masked_bits < 0 )
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( masked_bits > table_value_3 || (SR_VEC_LANES(128, packed_vector, i32)[2] = masked_bits, masked_bits < 0) )
      SR_VEC_LANES(128, packed_vector, i32)[2] = table_value_3;
    *(_OWORD *)(a1 + 80) = *sub_14017F1F0(&packed_vector_2, (__int64)&packed_vector);
  }
  call_result_6 = sub_140180D50(a2, a3, "maxp");
  if ( call_result_6 )
    shifted_bits = *(unsigned __int8 *)(call_result_6 + a2 + 5) + (*(unsigned __int8 *)(call_result_6 + a2 + 4) << 8);
  else
    shifted_bits = 0xFFFF;
  *(_DWORD *)(a1 + 20) = shifted_bits;
  loaded_word = *(unsigned __int8 *)(call_result + a2 + 3);
  shifted_bits_2 = *(unsigned __int8 *)(call_result + a2 + 2) << 8;
  *(_DWORD *)(a1 + 52) = 0;
  integer_sum = loaded_word + shifted_bits_2;
  if ( !integer_sum )
    return 0;
  do
  {
    scaled_index = (unsigned int)(call_result + 4 + 8 * iteration_count);
    shifted_bits_3 = *(unsigned __int8 *)(scaled_index + a2 + 1) + (*(unsigned __int8 *)(scaled_index + a2) << 8);
    if ( !shifted_bits_3
      || shifted_bits_3 == 3
      && (*(unsigned __int8 *)(scaled_index + a2 + 3) + (*(unsigned __int8 *)(scaled_index + a2 + 2) << 8) == 1
       || *(unsigned __int8 *)(scaled_index + a2 + 3) + (*(unsigned __int8 *)(scaled_index + a2 + 2) << 8) == 10) )
    {
      *(_DWORD *)(a1 + 52) = call_result
                           + ((((*(unsigned __int8 *)(scaled_index + a2 + 5) + (*(unsigned __int8 *)(scaled_index + a2 + 4) << 8)) << 8)
                             + *(unsigned __int8 *)(scaled_index + a2 + 6)) << 8)
                           + *(unsigned __int8 *)(scaled_index + a2 + 7);
    }
    ++iteration_count;
  }
  while ( iteration_count < integer_sum );
  if ( !*(_DWORD *)(a1 + 52) )
    return 0;
  *(_DWORD *)(a1 + 56) = (*(unsigned __int8 *)(*(int *)(a1 + 28) + a2 + 50) << 8)
                       + *(unsigned __int8 *)(*(int *)(a1 + 28) + a2 + 51);
  return 1;
}
#undef packed_vector
#undef converted_vector
#undef saved_converted_vector_3
#undef packed_vector_2
#undef call_result_7
#undef masked_bits_4
#undef call_result_8

//----- (000000014017BCC0) ----------------------------------------------------
__int64            sub_14017BCC0(__int64 a1, int a2)
{
  unsigned int selection_flag;
  int masked_bits;
  int cached_selection_flag;
  int call_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017BCC0[64];
#define selection_flag_2 (*(__int64 (*))(void *)(sr_frame_14017BCC0 + 8)) /* [rsp+20h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14017BCC0 + 16)) /* [rsp+28h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_14017BCC0 + 32)) /* [rsp+38h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_14017BCC0 + 48)) /* [rsp+48h] */
#define selection_flag_3 (*(int (*))(void *)(sr_frame_14017BCC0 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    selection_flag = 0;
    selection_flag_2 = 1;
    unused_written_slot_3 = 0;
    selection_flag_3 = 0;
    unused_written_slot = 0;
    unused_written_slot_2 = 0;
    masked_bits = sub_140182AD0(a1, a2, (__int64)&selection_flag_2);
    cached_selection_flag = 0;
    if ( masked_bits )
      cached_selection_flag = selection_flag_3;
    LOBYTE(selection_flag) = cached_selection_flag == 0;
    return selection_flag;
  }
  else
  {
    call_result = sub_14017DA60(a1, a2);
    return call_result < 0
        || *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result + 1LL) + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + call_result) << 8) == 0;
  }
}
#undef selection_flag_2
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef selection_flag_3

//----- (000000014017BD70) ----------------------------------------------------
void            sub_14017BD70(__int64 a1, __int64 a2, int a3, int a4, int a5, float a6, float a7, int a8)
{
  int call_result;

  call_result = sub_140178410(a1, a8);
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, 0.0, 0, call_result);
}

//----- (000000014017BE00) ----------------------------------------------------
void            sub_14017BE00(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10)
{
  int call_result;

  call_result = sub_140178410(a1, a10);
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, a8, a9, call_result);
}

//----- (000000014017BE60) ----------------------------------------------------
float *           sub_14017BE60(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10,
        int a11,
        float *a12,
        float *a13,
        int a14)
{
  int call_result;
  float product_difference;
  float *result;

  call_result = sub_140178410(a1, a14);
  sub_14017C040(a1, (__int64)a2, a3 - a10 + 1, a4 - a11 + 1, a5, a6, a7, a8, a9, call_result);
  if ( a10 > 1 )
    sub_140181080(a2, a3, a4, a5, a10);
  if ( a11 > 1 )
    sub_1401843E0((__int64)a2, a3, a4, a5, a11);
  if ( a10 )
    product_difference = (float)(0.5 / (float)a10) * (float)(1 - a10);
  else
    product_difference = 0.0;
  *a12 = product_difference;
  result = a13;
  if ( a11 )
    *a13 = (float)(0.5 / (float)a11) * (float)(1 - a11);
  else
    *a13 = 0.0;
  return result;
}

//----- (000000014017BFE0) ----------------------------------------------------
void            sub_14017BFE0(__int64 a1, __int64 a2, int a3, int a4, int a5, float a6, float a7, int a8)
{
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, 0.0, 0, a8);
}

//----- (000000014017C040) ----------------------------------------------------
void            sub_14017C040(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10)
{
  int input_value;
  int masked_bits;
  __m128 vector_result;
  float input_value_2;
  float input_value_3;
  float input_value_4;
  int shifted_bits;
  int masked_bits_2;
  int shifted_bits_2;
  int call_result;
  __int64 loaded_word;
  __m128 vector_result_2;
  __m128d converted_vector;
  int table_value;
  int table_value_2;
  __m128 saved_vector_result;
  __m128d converted_vector_2;
  int table_value_3;
  int table_value_4;
  void *allocation_buffer;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C040[208];
#define scratch_buffer (*(int (*)[4])(void *)(sr_frame_14017C040 + 0)) /* [rsp+60h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_14017C040 + 16)) /* [rsp+70h] */
#define selection_flag (*(__int64 (*))(void *)(sr_frame_14017C040 + 24)) /* [rsp+78h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_14017C040 + 32)) /* [rsp+80h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_14017C040 + 48)) /* [rsp+90h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_14017C040 + 64)) /* [rsp+A0h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_14017C040 + 72)) /* [rsp+A8h] */
#define Block (*(void * (*))(void *)(sr_frame_14017C040 + 192)) /* [rsp+120h] */

  input_value = a10;
  masked_bits = sub_14017B360(a1, a10, (__int64 *)&Block);
  vector_result = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(a9)));
  input_value_2 = a8;
  input_value_3 = a7;
  input_value_4 = a6;
  if ( *(_DWORD *)(a1 + 76) )
  {
    shifted_bits = 0;
    selection_flag = 1;
    unused_written_slot_3 = 0;
    unused_written_slot_4 = 0;
    unused_written_slot_2 = 0;
    selection_flag_2 = 0;
    masked_bits_2 = sub_140182AD0(a1, input_value, (__int64)&selection_flag);
    shifted_bits_2 = 0;
    if ( masked_bits_2 )
    {
      shifted_bits_2 = HIDWORD(selection_flag_2);
      shifted_bits = selection_flag_2;
    }
  }
  else
  {
    call_result = sub_14017DA60(a1, input_value);
    if ( call_result < 0 )
    {
      table_value_2 = 0;
      table_value_4 = 0;
      goto LABEL_15;
    }
    loaded_word = *(_QWORD *)(a1 + 8);
    shifted_bits_2 = (__int16)(*(unsigned __int8 *)(loaded_word + call_result + 9) + (*(unsigned __int8 *)(loaded_word + call_result + 8) << 8));
    shifted_bits = (__int16)(*(unsigned __int8 *)(loaded_word + call_result + 3) + (*(unsigned __int8 *)(loaded_word + call_result + 2) << 8));
  }
  vector_result_2 = _mm_set_ss((float)shifted_bits);
  SR_VEC_LANES(128, vector_result_2, f32)[0] = (float)(SR_VEC_LANES(128, vector_result_2, f32)[0] * input_value_4) + input_value_2;
  converted_vector = _mm_cvtps_pd(vector_result_2);
  table_value = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
  if ( (double)table_value != SR_VEC_LANES(128, converted_vector, f64)[0] )
    SR_VEC_LANES(128, converted_vector, f64)[0] = (double)(table_value - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1));
  table_value_2 = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
  saved_vector_result = vector_result;
  SR_VEC_LANES(128, saved_vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] - (float)((float)shifted_bits_2 * input_value_3);
  converted_vector_2 = _mm_cvtps_pd(saved_vector_result);
  table_value_3 = (int)SR_VEC_LANES(128, converted_vector_2, f64)[0];
  if ( (double)table_value_3 != SR_VEC_LANES(128, converted_vector_2, f64)[0] )
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = (double)(table_value_3 - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_2, converted_vector_2)) & 1));
  table_value_4 = (int)SR_VEC_LANES(128, converted_vector_2, f64)[0];
LABEL_15:
  allocation_buffer = Block;
  unused_written_slot = a2;
  scratch_buffer[0] = a3;
  scratch_buffer[2] = a5;
  scratch_buffer[1] = a4;
  if ( a3 && a4 )
    sub_14017D510(scratch_buffer, 0.34999999, (__int64)Block, masked_bits, input_value_4, input_value_3, input_value_2, SR_VEC_LANES(128, vector_result, f32)[0], table_value_2, table_value_4, 1, *(_QWORD *)a1);
  free(allocation_buffer);
}
#undef scratch_buffer
#undef unused_written_slot
#undef selection_flag
#undef unused_written_slot_2
#undef selection_flag_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef Block

// 14017C185: conditional instruction was optimized away because rcx.8<100000000u
// 14017C1D1: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017C2C0) ----------------------------------------------------
float *           sub_14017C2C0(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10,
        int a11,
        float *a12,
        float *a13,
        int a14)
{
  float product_difference;
  float *result;

  sub_14017C040(a1, (__int64)a2, a3 - a10 + 1, a4 - a11 + 1, a5, a6, a7, a8, a9, a14);
  if ( a10 > 1 )
    sub_140181080(a2, a3, a4, a5, a10);
  if ( a11 > 1 )
    sub_1401843E0((__int64)a2, a3, a4, a5, a11);
  if ( a10 )
    product_difference = (float)(0.5 / (float)a10) * (float)(1 - a10);
  else
    product_difference = 0.0;
  *a12 = product_difference;
  result = a13;
  if ( a11 )
    *a13 = (float)(0.5 / (float)a11) * (float)(1 - a11);
  else
    *a13 = 0.0;
  return result;
}

//----- (000000014017C420) ----------------------------------------------------
__int64            sub_14017C420(__int64 a1, _WORD *a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  int allocation_size;
  __int64 allocated_buffer;
  __int64 allocated_buffer_2;
  int input_value;
  void *allocation_buffer;

  allocation_size = a3 - a6;
  allocated_buffer = sr_path_malloc(20);
  allocated_buffer_2 = sr_path_malloc(allocation_size);
  if ( !allocated_buffer )
  {
    if ( !allocated_buffer_2 )
      return 0;
    allocation_buffer = (void *)allocated_buffer_2;
LABEL_11:
    free(allocation_buffer);
    return 0;
  }
  if ( !allocated_buffer_2 )
  {
    allocation_buffer = (void *)allocated_buffer;
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 48) = allocated_buffer_2;
  *(_QWORD *)a1 = a7;
  input_value = a3;
  if ( a5 )
    input_value = a5;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = input_value;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(a2);
  *(_QWORD *)(a1 + 8) = allocated_buffer;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  *(_DWORD *)allocated_buffer = allocation_size;
  *(_DWORD *)(allocated_buffer + 4) = a4 - a6;
  *(_QWORD *)(allocated_buffer + 8) = 0;
  *(_DWORD *)(allocated_buffer + 16) = 0;
  if ( a2 )
    crt_memset((void *)(uintptr_t)(a2), 0, a4 * a3);
  return 1;
}

//----- (000000014017C520) ----------------------------------------------------
void            sub_14017C520(__int64 a1)
{
  free(*(void **)(a1 + 48));
  free(*(void **)(a1 + 8));
}

//----- (000000014017C540) ----------------------------------------------------
int *           sub_14017C540(_QWORD *a1, char *a2, __int64 a3, float a4, int a5, int a6, __int64 a7)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C540[32];
#define input_value (*(_DWORD (*)[2])(void *)(sr_frame_14017C540 + 0)) /* [rsp+30h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_14017C540 + 8)) /* [rsp+38h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14017C540 + 16)) /* [rsp+40h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_14017C540 + 24)) /* [rsp+48h] */

  input_value[1] = a5;
  unused_written_slot_2 = a6;
  unused_written_slot_3 = a7;
  *(float *)input_value = a4;
  unused_written_slot = 0;
  return sub_14017C590(a1, a2, a3, (__int64)input_value, 1);
}
#undef input_value
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3

//----- (000000014017C590) ----------------------------------------------------
int *           sub_14017C590(_QWORD *a1, char *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 running_total;
  __int64 remaining_count;
  int iteration_count;
  __int64 running_total_2;
  int vector_result;
  int record_byte_offset;
  unsigned int *running_total_3;
  __m128i vector_result_2;
  __m128i converted_vector;
  signed __int64 running_total_4;
  __m128i converted_vector_2;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  __m128i converted_vector_5;
  __m128i vector_result_3;
  __m128i vector_result_4;
  __m128i vector_result_5;
  __int64 saved_record_byte_offset;
  int running_total_5;
  int running_total_6;
  _DWORD *running_total_7;
  unsigned __int64 remaining_count_2;
  int *result;
  int *allocation_buffer;
  unsigned int call_result;
  int call_result_2;
  _DWORD *table_value;
  int element_index;
  int table_value_2;
  int *running_total_8;
  int table_value_3;
  __int64 i;
  int loaded_word;
  int table_value_4;
  int *state_address;
  __int64 remaining_count_3;
  unsigned int call_result_3;
  _QWORD scratch_buffer[20];

  if ( a5 > 0 )
  {
    running_total = a4 + 16;
    remaining_count = a5;
    do
    {
      iteration_count = 0;
      if ( *(int *)running_total > 0 )
      {
        running_total_2 = 0;
        do
        {
          running_total_2 += 28;
          ++iteration_count;
          *(_WORD *)(running_total_2 + *(_QWORD *)(running_total + 8) - 22) = 0;
          *(_WORD *)(running_total_2 + *(_QWORD *)(running_total + 8) - 24) = 0;
          *(_WORD *)(running_total_2 + *(_QWORD *)(running_total + 8) - 26) = 0;
          *(_WORD *)(running_total_2 + *(_QWORD *)(running_total + 8) - 28) = 0;
        }
        while ( iteration_count < *(_DWORD *)running_total );
      }
      running_total += 40;
      --remaining_count;
    }
    while ( remaining_count );
  }
  vector_result = 0;
  record_byte_offset = 0;
  if ( a5 >= 8 )
  {
    running_total_3 = (unsigned int *)(a4 + 96);
    vector_result_2 = _mm_cvtsi64_si128((long long)(0));
    converted_vector = _mm_cvtsi64_si128((long long)(0));
    running_total_4 = 0;
    do
    {
      converted_vector_2 = _mm_cvtsi32_si128(running_total_3[10]);
      record_byte_offset += 8;
      converted_vector_3 = _mm_cvtsi32_si128(*(running_total_3 - 10));
      running_total_4 += 8LL;
      converted_vector_4 = _mm_cvtsi32_si128(*running_total_3);
      converted_vector_5 = _mm_cvtsi32_si128(*(running_total_3 - 20));
      running_total_3 += 80;
      vector_result_2 = _mm_add_epi32(_mm_unpacklo_epi64(_mm_unpacklo_epi32(converted_vector_5, converted_vector_3), _mm_unpacklo_epi32(converted_vector_4, converted_vector_2)), vector_result_2);
      vector_result_3 = _mm_add_epi32(
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(running_total_3 - 60)), _mm_cvtsi32_si128(*(running_total_3 - 50))),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(running_total_3 - 40)), _mm_cvtsi32_si128(*(running_total_3 - 30)))),
              converted_vector);
      converted_vector = vector_result_3;
    }
    while ( running_total_4 < (__int64)(a5 & 0xFFFFFFFFFFFFFFF8uLL) );
    vector_result_4 = _mm_add_epi32(vector_result_3, vector_result_2);
    vector_result_5 = _mm_add_epi32(vector_result_4, _mm_srli_si128(vector_result_4, 8));
    vector_result = _mm_cvtsi128_si32(_mm_add_epi32(vector_result_5, _mm_srli_si128(vector_result_5, 4)));
  }
  saved_record_byte_offset = record_byte_offset;
  running_total_5 = 0;
  running_total_6 = 0;
  if ( record_byte_offset < (__int64)a5 )
  {
    if ( a5 - (__int64)record_byte_offset < 2 )
      goto LABEL_16;
    running_total_7 = (_DWORD *)(a4 + 8 * (record_byte_offset + 4LL * record_byte_offset + 7));
    remaining_count_2 = ((unsigned __int64)(a5 - saved_record_byte_offset - 2) >> 1) + 1;
    saved_record_byte_offset += 2 * remaining_count_2;
    do
    {
      running_total_5 += *(running_total_7 - 10);
      running_total_6 += *running_total_7;
      running_total_7 += 20;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    if ( saved_record_byte_offset < a5 )
LABEL_16:
      vector_result += *(_DWORD *)(a4 + 40 * saved_record_byte_offset + 16);
    vector_result += running_total_6 + running_total_5;
  }
  result = (int *)sr_path_malloc(24LL * vector_result);
  allocation_buffer = result;
  if ( result )
  {
    scratch_buffer[0] = *a1;
    call_result = sub_140179790(a2);
    sub_14017B740((__int64)scratch_buffer, (__int64)a2, call_result);
    call_result_2 = sub_14017C8A0((__int64)a1, (__int64)scratch_buffer, a4, a5, (__int64)allocation_buffer);
    table_value = (_DWORD *)a1[1];
    element_index = 0;
    if ( call_result_2 > 0 )
    {
      table_value_2 = table_value[2];
      running_total_8 = allocation_buffer + 3;
      table_value_3 = table_value[3];
      for ( i = 0; i < call_result_2; ++i )
      {
        if ( table_value_2 + *running_total_8 > *table_value )
        {
          table_value_3 = table_value[4];
          table_value_2 = 0;
          table_value[3] = table_value_3;
          table_value[2] = 0;
        }
        if ( table_value_3 + running_total_8[1] > table_value[1] )
          break;
        *(running_total_8 - 3) = table_value_2;
        loaded_word = *running_total_8;
        *(running_total_8 - 2) = table_value[3];
        running_total_8[2] = 1;
        table_value_2 = table_value[2] + loaded_word;
        table_value_3 = table_value[3];
        table_value[2] = table_value_2;
        table_value_4 = table_value_3 + running_total_8[1];
        if ( table_value_4 > table_value[4] )
          table_value[4] = table_value_4;
        ++element_index;
        running_total_8 += 6;
      }
    }
    if ( element_index < (__int64)call_result_2 )
    {
      state_address = &allocation_buffer[6 * element_index + 5];
      remaining_count_3 = call_result_2 - (__int64)element_index;
      do
      {
        *state_address = 0;
        state_address += 6;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
    }
    call_result_3 = sub_14017CDD0((__int64)a1, (__int64)scratch_buffer, a4, a5, (__int64)allocation_buffer);
    free(allocation_buffer);
    return (int *)call_result_3;
  }
  return result;
}

//----- (000000014017C8A0) ----------------------------------------------------
__int64            sub_14017C8A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int dword1_result;
  __int64 result;
  float *weighted_sum;
  __int64 iteration_count;
  float product_difference;
  __int64 loaded_word;
  float shifted_bits;
  bool comparison_result;
  int iteration_count_2;
  __int64 record_byte_offset;
  _DWORD *running_total;
  __int64 loaded_word_2;
  int loaded_word_3;
  int call_result;
  float weighted_sum_2;
  float weighted_sum_3;
  int masked_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int dword2_result;
  int call_result_2;
  int table_value;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  __int64 loaded_word_4;
  __m128 vector_result;
  __m128d converted_vector;
  __m128 vector_result_2;
  __m128d converted_vector_2;
  __m128 vector_result_3;
  __m128d converted_vector_3;
  __m128 vector_result_4;
  __m128d converted_vector_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C8A0[224];
#define remaining_count (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 0)) /* [rsp+20h] */
#define selection_flag (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 8)) /* [rsp+28h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14017C8A0 + 16)) /* [rsp+30h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_14017C8A0 + 32)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 48)) /* [rsp+50h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14017C8A0 + 56)) /* [rsp+58h] */
#define iteration_count_3 (*(unsigned int (*))(void *)(sr_frame_14017C8A0 + 216)) /* [rsp+F8h] */

  dword1_result = 0;
  result = 0;
  iteration_count_3 = 0;
  remaining_count = a4;
  if ( a4 > 0 )
  {
    weighted_sum = (float *)(a3 + 32);
    iteration_count = 0;
    while ( 1 )
    {
      product_difference = *(weighted_sum - 8);
      if ( product_difference <= 0.0 )
      {
        shifted_bits = -(float)(product_difference
                     / (float)(*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 19LL)
                             + (*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 18LL) << 8)));
      }
      else
      {
        loaded_word = *(int *)(a2 + 36);
        shifted_bits = product_difference
            / (float)((__int16)((*(unsigned __int8 *)(loaded_word + *(_QWORD *)(a2 + 8) + 4) << 8)
                              + *(unsigned __int8 *)(loaded_word + *(_QWORD *)(a2 + 8) + 5))
                    - (__int16)(*(unsigned __int8 *)(loaded_word + *(_QWORD *)(a2 + 8) + 7)
                              + (*(unsigned __int8 *)(loaded_word + *(_QWORD *)(a2 + 8) + 6) << 8)));
      }
      comparison_result = *((_DWORD *)weighted_sum - 4) <= 0;
      iteration_count_2 = 0;
      *(_BYTE *)weighted_sum = *(_BYTE *)(a1 + 32);
      *((_BYTE *)weighted_sum + 1) = *(_BYTE *)(a1 + 36);
      if ( !comparison_result )
        break;
      result = iteration_count_3;
LABEL_32:
      weighted_sum += 10;
      if ( !--remaining_count )
        return result;
    }
    record_byte_offset = 0;
    running_total = (_DWORD *)(a5 + 8 * (iteration_count + 2 * iteration_count + 2));
    while ( 1 )
    {
      loaded_word_2 = *((_QWORD *)weighted_sum - 3);
      loaded_word_3 = loaded_word_2 ? *(_DWORD *)(loaded_word_2 + record_byte_offset) : iteration_count_2 + *((_DWORD *)weighted_sum - 7);
      call_result = sub_140178410(a2, loaded_word_3);
      weighted_sum_2 = (float)*(int *)(a1 + 36) * shifted_bits;
      weighted_sum_3 = (float)*(int *)(a1 + 32) * shifted_bits;
      if ( *(_DWORD *)(a2 + 76) )
        break;
      call_result_2 = sub_14017DA60(a2, call_result);
      if ( call_result_2 >= 0 )
      {
        loaded_word_4 = *(_QWORD *)(a2 + 8);
        shifted_bits_2 = (__int16)(*(unsigned __int8 *)(loaded_word_4 + call_result_2 + 9) + (*(unsigned __int8 *)(loaded_word_4 + call_result_2 + 8) << 8));
        shifted_bits_3 = (__int16)(*(unsigned __int8 *)(loaded_word_4 + call_result_2 + 3) + (*(unsigned __int8 *)(loaded_word_4 + call_result_2 + 2) << 8));
        dword1_result = (__int16)(*(unsigned __int8 *)(loaded_word_4 + call_result_2 + 7) + (*(unsigned __int8 *)(loaded_word_4 + call_result_2 + 6) << 8));
        dword2_result = (__int16)(*(unsigned __int8 *)(loaded_word_4 + call_result_2 + 5) + (*(unsigned __int8 *)(loaded_word_4 + call_result_2 + 4) << 8));
LABEL_20:
        vector_result = _mm_set_ss((float)-dword2_result);
        SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] * weighted_sum_2;
        converted_vector = _mm_cvtps_pd(vector_result);
        if ( (double)(int)SR_VEC_LANES(128, converted_vector, f64)[0] != SR_VEC_LANES(128, converted_vector, f64)[0] )
          SR_VEC_LANES(128, converted_vector, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1) + (int)SR_VEC_LANES(128, converted_vector, f64)[0]);
        vector_result_2 = _mm_set_ss((float)shifted_bits_3);
        table_value = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
        SR_VEC_LANES(128, vector_result_2, f32)[0] = SR_VEC_LANES(128, vector_result_2, f32)[0] * weighted_sum_3;
        converted_vector_2 = _mm_cvtps_pd(vector_result_2);
        if ( (double)(int)SR_VEC_LANES(128, converted_vector_2, f64)[0] != SR_VEC_LANES(128, converted_vector_2, f64)[0] )
          SR_VEC_LANES(128, converted_vector_2, f64)[0] = (double)((int)SR_VEC_LANES(128, converted_vector_2, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_2, converted_vector_2)) & 1));
        vector_result_3 = _mm_set_ss((float)dword1_result);
        table_value_2 = (int)SR_VEC_LANES(128, converted_vector_2, f64)[0];
        SR_VEC_LANES(128, vector_result_3, f32)[0] = SR_VEC_LANES(128, vector_result_3, f32)[0] * weighted_sum_3;
        converted_vector_3 = _mm_cvtps_pd(vector_result_3);
        if ( (double)(int)SR_VEC_LANES(128, converted_vector_3, f64)[0] != SR_VEC_LANES(128, converted_vector_3, f64)[0] )
          SR_VEC_LANES(128, converted_vector_3, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_3, converted_vector_3)) & 1) + (int)SR_VEC_LANES(128, converted_vector_3, f64)[0]);
        table_value_3 = (int)SR_VEC_LANES(128, converted_vector_3, f64)[0];
        vector_result_4 = _mm_set_ss((float)-shifted_bits_2);
        SR_VEC_LANES(128, vector_result_4, f32)[0] = SR_VEC_LANES(128, vector_result_4, f32)[0] * weighted_sum_2;
        converted_vector_4 = _mm_cvtps_pd(vector_result_4);
        if ( (double)(int)SR_VEC_LANES(128, converted_vector_4, f64)[0] != SR_VEC_LANES(128, converted_vector_4, f64)[0] )
          SR_VEC_LANES(128, converted_vector_4, f64)[0] = (double)((int)SR_VEC_LANES(128, converted_vector_4, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_4, converted_vector_4)) & 1));
        table_value_4 = (int)SR_VEC_LANES(128, converted_vector_4, f64)[0];
        dword1_result = 0;
        goto LABEL_29;
      }
      table_value = 0;
      table_value_2 = 0;
      table_value_3 = 0;
      table_value_4 = 0;
LABEL_29:
      ++iteration_count;
      ++iteration_count_2;
      *(running_total - 1) = *(_DWORD *)(a1 + 28) - 1 + table_value_3 + *(_DWORD *)(a1 + 32) - table_value_2;
      result = iteration_count_3 + 1;
      record_byte_offset += 4;
      ++iteration_count_3;
      *running_total = *(_DWORD *)(a1 + 36) + table_value - table_value_4 + *(_DWORD *)(a1 + 28) - 1;
      running_total += 6;
      if ( iteration_count_2 >= *((_DWORD *)weighted_sum - 4) )
        goto LABEL_32;
    }
    selection_flag = 1;
    unused_written_slot_2 = 0;
    unused_written_slot_3 = 0;
    unused_written_slot = 0;
    selection_flag_2 = 0;
    masked_bits = sub_140182AD0(a2, call_result, (__int64)&selection_flag);
    shifted_bits_2 = 0;
    shifted_bits_3 = 0;
    if ( masked_bits )
    {
      shifted_bits_2 = HIDWORD(selection_flag_2);
      shifted_bits_3 = selection_flag_2;
      dword1_result = DWORD1(selection_flag_2);
    }
    dword2_result = 0;
    if ( masked_bits )
      dword2_result = DWORD2(selection_flag_2);
    goto LABEL_20;
  }
  return result;
}
#undef remaining_count
#undef selection_flag
#undef unused_written_slot
#undef selection_flag_2
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef iteration_count_3

// 14017CB1E: conditional instruction was optimized away because rcx.8<100000000u
// 14017CB66: conditional instruction was optimized away because rcx.8<100000000u
// 14017CBAB: conditional instruction was optimized away because rcx.8<100000000u
// 14017CBF7: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017CCF0) ----------------------------------------------------
__int64            sub_14017CCF0(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 input_value;
  int iteration_count;
  int loaded_word;
  _DWORD *running_total;
  int loaded_word_2;
  __int64 iteration_count_2;
  int table_value;
  __int64 remaining_count;
  _DWORD *running_total_2;

  result = *(_QWORD *)(a1 + 8);
  input_value = a3;
  iteration_count = 0;
  if ( a3 > 0 )
  {
    loaded_word = *(_DWORD *)(result + 8);
    running_total = (_DWORD *)(a2 + 12);
    loaded_word_2 = *(_DWORD *)(result + 12);
    iteration_count_2 = 0;
    do
    {
      if ( loaded_word + *running_total > *(_DWORD *)result )
      {
        loaded_word_2 = *(_DWORD *)(result + 16);
        loaded_word = 0;
        *(_DWORD *)(result + 12) = loaded_word_2;
        *(_DWORD *)(result + 8) = 0;
      }
      if ( loaded_word_2 + running_total[1] > *(_DWORD *)(result + 4) )
        break;
      *(running_total - 3) = loaded_word;
      *(running_total - 2) = *(_DWORD *)(result + 12);
      running_total[2] = 1;
      loaded_word = *running_total + *(_DWORD *)(result + 8);
      loaded_word_2 = *(_DWORD *)(result + 12);
      *(_DWORD *)(result + 8) = loaded_word;
      table_value = loaded_word_2 + running_total[1];
      if ( table_value > *(_DWORD *)(result + 16) )
        *(_DWORD *)(result + 16) = table_value;
      ++iteration_count;
      ++iteration_count_2;
      running_total += 6;
    }
    while ( iteration_count_2 < input_value );
  }
  if ( iteration_count < input_value )
  {
    result = 3LL * iteration_count;
    remaining_count = input_value - iteration_count;
    running_total_2 = (_DWORD *)(a2 + 20 + 24LL * iteration_count);
    do
    {
      *running_total_2 = 0;
      running_total_2 += 6;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

//----- (000000014017CDD0) ----------------------------------------------------
__int64            sub_14017CDD0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int table_value;
  __int64 iteration_count;
  __int64 running_total;
  float product_difference;
  __int64 loaded_word;
  float shifted_bits;
  int loaded_word_2;
  int loaded_word_3;
  float scaled_ratio;
  float scaled_ratio_2;
  float product_difference_2;
  float product_difference_3;
  int iteration_count_2;
  __int64 record_byte_offset;
  __int64 running_total_2;
  _DWORD *running_total_3;
  __int64 loaded_word_4;
  int loaded_word_5;
  int call_result;
  int loaded_word_6;
  __int64 loaded_word_7;
  __int64 loaded_word_8;
  __int64 loaded_word_9;
  __int64 loaded_word_10;
  __int16 shifted_bits_2;
  __int64 loaded_word_11;
  __int64 shifted_bits_3;
  __int16 loaded_word_12;
  float weighted_sum;
  float weighted_sum_2;
  int masked_bits;
  int shifted_bits_4;
  int shifted_bits_5;
  int call_result_2;
  int table_value_2;
  __int64 loaded_word_13;
  __m128 vector_result;
  __m128d converted_vector;
  __m128 vector_result_2;
  __m128d converted_vector_2;
  unsigned int loaded_word_14;
  unsigned int loaded_word_15;
  __int16 loaded_word_16;
  int table_value_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017CDD0[352];
#define saved_iteration_count (*(int (*))(void *)(sr_frame_14017CDD0 + 0)) /* [rsp+50h] */
#define saved_shifted_bits (*(int (*))(void *)(sr_frame_14017CDD0 + 4)) /* [rsp+54h] */
#define loaded_word_17 (*(int (*))(void *)(sr_frame_14017CDD0 + 8)) /* [rsp+58h] */
#define loaded_word_18 (*(int (*))(void *)(sr_frame_14017CDD0 + 12)) /* [rsp+5Ch] */
#define saved_iteration_count_2 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 16)) /* [rsp+60h] */
#define saved_record_byte_offset (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 24)) /* [rsp+68h] */
#define remaining_count (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 32)) /* [rsp+70h] */
#define selection_flag (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 40)) /* [rsp+78h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14017CDD0 + 48)) /* [rsp+80h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_14017CDD0 + 64)) /* [rsp+90h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 80)) /* [rsp+A0h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14017CDD0 + 88)) /* [rsp+A8h] */
#define selection_flag_3 (*(int (*))(void *)(sr_frame_14017CDD0 + 320)) /* [rsp+190h] */
#define cached_call_result (*(int (*))(void *)(sr_frame_14017CDD0 + 344)) /* [rsp+1A8h] */

  table_value = 1;
  loaded_word_17 = *(_DWORD *)(a1 + 32);
  loaded_word_18 = *(_DWORD *)(a1 + 36);
  remaining_count = a4;
  selection_flag_3 = 1;
  if ( a4 > 0 )
  {
    iteration_count = 0;
    running_total = a3 + 8;
    saved_iteration_count_2 = 0;
    while ( 1 )
    {
      product_difference = *(float *)(running_total - 8);
      if ( product_difference <= 0.0 )
      {
        shifted_bits = -(float)(product_difference
                     / (float)(*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 19LL)
                             + (*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 18LL) << 8)));
      }
      else
      {
        loaded_word = *(int *)(a2 + 36);
        iteration_count = saved_iteration_count_2;
        shifted_bits = product_difference
            / (float)((__int16)(*(unsigned __int8 *)(loaded_word + *(_QWORD *)(a2 + 8) + 5)
                              + (*(unsigned __int8 *)(loaded_word + *(_QWORD *)(a2 + 8) + 4) << 8))
                    - (__int16)((*(unsigned __int8 *)(loaded_word + *(_QWORD *)(a2 + 8) + 6) << 8)
                              + *(unsigned __int8 *)(loaded_word + *(_QWORD *)(a2 + 8) + 7)));
      }
      loaded_word_2 = *(unsigned __int8 *)(running_total + 24);
      *(_DWORD *)(a1 + 32) = loaded_word_2;
      loaded_word_3 = *(unsigned __int8 *)(running_total + 25);
      *(_DWORD *)(a1 + 36) = loaded_word_3;
      scaled_ratio = 1.0 / (float)loaded_word_2;
      scaled_ratio_2 = 1.0 / (float)loaded_word_3;
      product_difference_2 = loaded_word_2 ? (float)(0.5 / (float)loaded_word_2) * (float)(1 - loaded_word_2) : 0.0;
      product_difference_3 = loaded_word_3 ? (float)(0.5 / (float)loaded_word_3) * (float)(1 - loaded_word_3) : 0.0;
      iteration_count_2 = 0;
      saved_iteration_count = 0;
      if ( *(int *)(running_total + 8) > 0 )
        break;
LABEL_41:
      running_total += 40;
      if ( !--remaining_count )
        goto LABEL_42;
    }
    table_value = 0;
    record_byte_offset = 0;
    saved_record_byte_offset = 0;
    running_total_2 = 0;
    running_total_3 = (_DWORD *)(a5 + 4 + 24 * iteration_count);
    while ( 1 )
    {
      if ( !running_total_3[4] )
      {
        selection_flag_3 = 0;
        goto LABEL_40;
      }
      loaded_word_4 = *(_QWORD *)(running_total + 16);
      loaded_word_5 = *(_QWORD *)running_total ? *(_DWORD *)(record_byte_offset + *(_QWORD *)running_total) : iteration_count_2 + *(_DWORD *)(running_total - 4);
      call_result = sub_140178410(a2, loaded_word_5);
      cached_call_result = call_result;
      loaded_word_6 = *(_DWORD *)(a1 + 28);
      *(running_total_3 - 1) += loaded_word_6;
      *running_total_3 += loaded_word_6;
      running_total_3[2] -= loaded_word_6;
      running_total_3[3] -= loaded_word_6;
      loaded_word_7 = *(int *)(a2 + 36);
      loaded_word_8 = *(_QWORD *)(a2 + 8);
      loaded_word_9 = *(unsigned __int8 *)(loaded_word_7 + loaded_word_8 + 34);
      loaded_word_10 = *(unsigned __int8 *)(loaded_word_7 + loaded_word_8 + 35);
      if ( call_result >= (int)(loaded_word_10 + (*(unsigned __int8 *)(loaded_word_7 + loaded_word_8 + 34) << 8)) )
      {
        loaded_word_11 = *(int *)(a2 + 40) + loaded_word_8;
        shifted_bits_3 = loaded_word_10 + (loaded_word_9 << 8);
        loaded_word_12 = *(unsigned __int8 *)(loaded_word_11 + 4 * shifted_bits_3 - 4);
        LOWORD(loaded_word_11) = *(unsigned __int8 *)(loaded_word_11 + 4 * shifted_bits_3 - 3);
        call_result = cached_call_result;
        shifted_bits_2 = (loaded_word_12 << 8) + loaded_word_11;
      }
      else
      {
        shifted_bits_2 = *(unsigned __int8 *)(*(int *)(a2 + 40) + loaded_word_8 + 4 * call_result + 1)
            + (*(unsigned __int8 *)(*(int *)(a2 + 40) + loaded_word_8 + 4 * call_result) << 8);
      }
      saved_shifted_bits = shifted_bits_2;
      weighted_sum = (float)*(int *)(a1 + 36) * shifted_bits;
      weighted_sum_2 = (float)*(int *)(a1 + 32) * shifted_bits;
      if ( *(_DWORD *)(a2 + 76) )
        break;
      call_result_2 = sub_14017DA60(a2, call_result);
      if ( call_result_2 >= 0 )
      {
        loaded_word_13 = *(_QWORD *)(a2 + 8);
        shifted_bits_4 = (__int16)(*(unsigned __int8 *)(call_result_2 + loaded_word_13 + 9) + (*(unsigned __int8 *)(call_result_2 + loaded_word_13 + 8) << 8));
        shifted_bits_5 = (__int16)((*(unsigned __int8 *)(call_result_2 + loaded_word_13 + 2) << 8) + *(unsigned __int8 *)(call_result_2 + loaded_word_13 + 3));
LABEL_29:
        vector_result = _mm_set_ss((float)-shifted_bits_4);
        SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] * weighted_sum;
        converted_vector = _mm_cvtps_pd(vector_result);
        if ( (double)(int)SR_VEC_LANES(128, converted_vector, f64)[0] != SR_VEC_LANES(128, converted_vector, f64)[0] )
          SR_VEC_LANES(128, converted_vector, f64)[0] = (double)((int)SR_VEC_LANES(128, converted_vector, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1));
        vector_result_2 = _mm_set_ss((float)shifted_bits_5);
        table_value_2 = (int)SR_VEC_LANES(128, converted_vector, f64)[0];
        SR_VEC_LANES(128, vector_result_2, f32)[0] = SR_VEC_LANES(128, vector_result_2, f32)[0] * weighted_sum_2;
        converted_vector_2 = _mm_cvtps_pd(vector_result_2);
        if ( (double)(int)SR_VEC_LANES(128, converted_vector_2, f64)[0] != SR_VEC_LANES(128, converted_vector_2, f64)[0] )
          SR_VEC_LANES(128, converted_vector_2, f64)[0] = (double)((int)SR_VEC_LANES(128, converted_vector_2, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_2, converted_vector_2)) & 1));
        table_value = (int)SR_VEC_LANES(128, converted_vector_2, f64)[0];
        goto LABEL_34;
      }
      table_value_2 = 0;
LABEL_34:
      sub_14017C040(
        a2,
        *(_QWORD *)(a1 + 40) + (int)*(running_total_3 - 1) + (__int64)(*running_total_3 * *(_DWORD *)(a1 + 24)),
        running_total_3[2] - *(_DWORD *)(a1 + 32) + 1,
        running_total_3[3] - *(_DWORD *)(a1 + 36) + 1,
        *(_DWORD *)(a1 + 24),
        (float)*(int *)(a1 + 32) * shifted_bits,
        (float)*(int *)(a1 + 36) * shifted_bits,
        0.0,
        0,
        cached_call_result);
      loaded_word_14 = *(_DWORD *)(a1 + 32);
      if ( loaded_word_14 > 1 )
        sub_140181080(
          (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + (int)*(running_total_3 - 1) + (__int64)(*running_total_3 * *(_DWORD *)(a1 + 24))),
          running_total_3[2],
          running_total_3[3],
          *(_DWORD *)(a1 + 24),
          loaded_word_14);
      loaded_word_15 = *(_DWORD *)(a1 + 36);
      if ( loaded_word_15 > 1 )
        sub_1401843E0(
          *(_QWORD *)(a1 + 40) + (int)*(running_total_3 - 1) + (__int64)(*running_total_3 * *(_DWORD *)(a1 + 24)),
          running_total_3[2],
          running_total_3[3],
          *(_DWORD *)(a1 + 24),
          loaded_word_15);
      iteration_count_2 = saved_iteration_count;
      record_byte_offset = saved_record_byte_offset;
      iteration_count = saved_iteration_count_2;
      *(_WORD *)(running_total_2 + loaded_word_4) = *((_WORD *)running_total_3 - 2);
      *(_WORD *)(running_total_2 + loaded_word_4 + 2) = *(_WORD *)running_total_3;
      *(_WORD *)(running_total_2 + loaded_word_4 + 4) = *((_WORD *)running_total_3 - 2) + *((_WORD *)running_total_3 + 4);
      loaded_word_16 = *(_WORD *)running_total_3 + *((_WORD *)running_total_3 + 6);
      *(float *)(running_total_2 + loaded_word_4 + 16) = (float)saved_shifted_bits * shifted_bits;
      *(_WORD *)(running_total_2 + loaded_word_4 + 6) = loaded_word_16;
      *(float *)(running_total_2 + loaded_word_4 + 12) = (float)((float)table_value_2 * scaled_ratio_2) + product_difference_3;
      *(float *)(running_total_2 + loaded_word_4 + 8) = (float)((float)table_value * scaled_ratio) + product_difference_2;
      table_value_3 = table_value + running_total_3[2];
      table_value = selection_flag_3;
      *(float *)(running_total_2 + loaded_word_4 + 20) = (float)((float)table_value_3 * scaled_ratio) + product_difference_2;
      *(float *)(running_total_2 + loaded_word_4 + 24) = (float)((float)(table_value_2 + running_total_3[3]) * scaled_ratio_2) + product_difference_3;
LABEL_40:
      ++iteration_count;
      ++iteration_count_2;
      record_byte_offset += 4;
      saved_iteration_count_2 = iteration_count;
      running_total_3 += 6;
      saved_iteration_count = iteration_count_2;
      running_total_2 += 28;
      saved_record_byte_offset = record_byte_offset;
      if ( iteration_count_2 >= *(_DWORD *)(running_total + 8) )
        goto LABEL_41;
      table_value = 0;
    }
    selection_flag = 1;
    unused_written_slot_2 = 0;
    unused_written_slot_3 = 0;
    unused_written_slot = 0;
    selection_flag_2 = 0;
    masked_bits = sub_140182AD0(a2, call_result, (__int64)&selection_flag);
    shifted_bits_4 = 0;
    shifted_bits_5 = 0;
    if ( masked_bits )
    {
      shifted_bits_4 = HIDWORD(selection_flag_2);
      shifted_bits_5 = selection_flag_2;
    }
    goto LABEL_29;
  }
LABEL_42:
  *(_DWORD *)(a1 + 32) = loaded_word_17;
  *(_DWORD *)(a1 + 36) = loaded_word_18;
  return (unsigned int)table_value;
}
#undef saved_iteration_count
#undef saved_shifted_bits
#undef loaded_word_17
#undef loaded_word_18
#undef saved_iteration_count_2
#undef saved_record_byte_offset
#undef remaining_count
#undef selection_flag
#undef unused_written_slot
#undef selection_flag_2
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef selection_flag_3
#undef cached_call_result

// 14017D197: conditional instruction was optimized away because rcx.8<100000000u
// 14017D1DC: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017D490) ----------------------------------------------------
__int64            sub_14017D490(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result;

  if ( a2 > 8 )
    result = crt_assert(
               (char *)L"h_oversample <= 8",
               (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
               0xEE1u);
  if ( a3 > 8 )
    result = crt_assert(
               (char *)L"v_oversample <= 8",
               (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
               0xEE2u);
  if ( a2 <= 8 )
    *(_DWORD *)(a1 + 32) = a2;
  if ( a3 <= 8 )
    *(_DWORD *)(a1 + 36) = a3;
  return result;
}

//----- (000000014017D510) ----------------------------------------------------
void            sub_14017D510(
        int *a1,
        float a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 input_value;
  float input_value_2;
  float input_value_3;
  __int64 limited_value;
  void *allocation_buffer;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017D510[80];
#define Block (*(void * (*))(void *)(sr_frame_14017D510 + 0)) /* [rsp+60h] */
#define selection_flag (*(unsigned int (*))(void *)(sr_frame_14017D510 + 72)) /* [rsp+A8h] */

  input_value = a12;
  input_value_2 = a5;
  input_value_3 = a6;
  selection_flag = 0;
  Block = nullptr;
  limited_value = sub_140178A70(a3, a4, a2 / fminf(a5, a6), &Block, &selection_flag);
  allocation_buffer = (void *)limited_value;
  if ( limited_value )
  {
    sub_140181CF0(a1, limited_value, (int *)Block, selection_flag, input_value_2, input_value_3, a7, a8, a9, a10, a11, input_value);
    free(Block);
    free(allocation_buffer);
  }
}
#undef Block
#undef selection_flag

//----- (000000014017D6B0) ----------------------------------------------------
__int64            sub_14017D6B0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  __int64 result;
  int remaining_amount;
  int record_byte_offset;
  int record_byte_offset_2;
  int record_byte_offset_3;
  unsigned __int16 shifted_bits;
  __int64 saved_call_status;
  __int64 saved_call_status_2;
  int integer_sum;
  unsigned __int8 table_value;
  __int64 saved_call_status_3;
  unsigned int shifted_bits_2;
  int integer_sum_2;
  __int64 cached_integer_sum;
  int integer_sum_3;
  __int64 cached_integer_sum_2;
  int integer_sum_4;
  __int64 cached_integer_sum_3;
  __int64 saved_call_status_4;
  int integer_sum_5;
  __int64 cached_integer_sum_4;
  __int64 cached_integer_sum_5;

  result = 0;
  remaining_amount = a4;
  if ( a4 )
  {
    record_byte_offset = 3;
    record_byte_offset_2 = 1;
    record_byte_offset_3 = 2;
    do
    {
      shifted_bits = a3[1] + (*a3 << 8);
      if ( shifted_bits >= 0x80u )
      {
        if ( shifted_bits < 0x800u )
        {
          if ( record_byte_offset_2 >= a2 )
            return 0xFFFFFFFFLL;
          saved_call_status_2 = (int)result;
          integer_sum = result + 1;
          table_value = a3[1];
          if ( *(unsigned __int8 *)(saved_call_status_2 + a1) != (shifted_bits >> 6) + 192 )
            return 0xFFFFFFFFLL;
          record_byte_offset_2 += 2;
          record_byte_offset += 2;
          record_byte_offset_3 += 2;
          goto LABEL_25;
        }
        if ( shifted_bits < 0xD800u )
          goto LABEL_21;
        if ( shifted_bits >= 0xDC00u )
        {
          if ( shifted_bits < 0xE000u )
            return 0xFFFFFFFFLL;
LABEL_21:
          if ( record_byte_offset_3 >= a2 )
            return 0xFFFFFFFFLL;
          saved_call_status_4 = (int)result;
          integer_sum_5 = result + 1;
          table_value = a3[1];
          if ( *(unsigned __int8 *)(saved_call_status_4 + a1) != (shifted_bits >> 12) + 224 )
            return 0xFFFFFFFFLL;
          cached_integer_sum_4 = integer_sum_5;
          integer_sum = integer_sum_5 + 1;
          if ( *(unsigned __int8 *)(cached_integer_sum_4 + a1) != ((shifted_bits >> 6) & 0x3F) + 128 )
            return 0xFFFFFFFFLL;
          record_byte_offset_2 += 3;
          record_byte_offset += 3;
          record_byte_offset_3 += 3;
LABEL_25:
          cached_integer_sum_5 = integer_sum;
          result = (unsigned int)(integer_sum + 1);
          if ( *(unsigned __int8 *)(cached_integer_sum_5 + a1) != (table_value & 0x3F) + 128 )
            return 0xFFFFFFFFLL;
          goto LABEL_26;
        }
        if ( record_byte_offset >= a2 )
          return 0xFFFFFFFFLL;
        saved_call_status_3 = (int)result;
        shifted_bits_2 = (a3[2] << 8) - 56613888 + (shifted_bits << 10) + a3[3];
        integer_sum_2 = result + 1;
        if ( *(unsigned __int8 *)(saved_call_status_3 + a1) != (shifted_bits_2 >> 18) + 240 )
          return 0xFFFFFFFFLL;
        cached_integer_sum = integer_sum_2;
        integer_sum_3 = integer_sum_2 + 1;
        if ( *(unsigned __int8 *)(cached_integer_sum + a1) != ((shifted_bits_2 >> 12) & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        cached_integer_sum_2 = integer_sum_3;
        integer_sum_4 = integer_sum_3 + 1;
        if ( *(unsigned __int8 *)(cached_integer_sum_2 + a1) != ((shifted_bits_2 >> 6) & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        cached_integer_sum_3 = integer_sum_4;
        result = (unsigned int)(integer_sum_4 + 1);
        record_byte_offset_2 += 4;
        record_byte_offset += 4;
        record_byte_offset_3 += 4;
        if ( *(unsigned __int8 *)(cached_integer_sum_3 + a1) != (shifted_bits_2 & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        a3 += 2;
        remaining_amount -= 2;
      }
      else
      {
        if ( (int)result >= a2 )
          return 0xFFFFFFFFLL;
        saved_call_status = (int)result;
        ++record_byte_offset_2;
        result = (unsigned int)(result + 1);
        ++record_byte_offset;
        ++record_byte_offset_3;
        if ( *(unsigned __int8 *)(saved_call_status + a1) != shifted_bits )
          return 0xFFFFFFFFLL;
      }
LABEL_26:
      a3 += 2;
      remaining_amount -= 2;
    }
    while ( remaining_amount );
  }
  return result;
}

//----- (000000014017D900) ----------------------------------------------------
__int64            sub_14017D900(unsigned __int8 *a1, int a2)
{
  int integer_sum;
  int shifted_bits;
  int shifted_bits_2;
  unsigned __int8 *state_address;
  int shifted_bits_3;
  int integer_sum_2;
  int shifted_bits_4;
  unsigned int shifted_bits_5;
  int shifted_bits_6;

  if ( a1[1] + (*a1 << 8) != 1 )
  {
    if ( a1[1] + (*a1 << 8) == 2 )
    {
      integer_sum = 0;
      shifted_bits = a1[3] - 1 + (a1[2] << 8);
      if ( shifted_bits >= 0 )
      {
        while ( 1 )
        {
          shifted_bits_2 = (shifted_bits + integer_sum) >> 1;
          state_address = &a1[6 * shifted_bits_2 + 4];
          shifted_bits_3 = state_address[1] + (*state_address << 8);
          if ( a2 >= shifted_bits_3 )
          {
            if ( a2 <= state_address[3] + (state_address[2] << 8) )
              return a2 + state_address[5] + (state_address[4] << 8) - shifted_bits_3;
            integer_sum = shifted_bits_2 + 1;
          }
          else
          {
            shifted_bits = shifted_bits_2 - 1;
          }
          if ( integer_sum > shifted_bits )
            return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x92Fu);
    }
    return 0xFFFFFFFFLL;
  }
  integer_sum_2 = 0;
  shifted_bits_4 = (a1[2] << 8) + a1[3] - 1;
  if ( shifted_bits_4 < 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    shifted_bits_5 = (shifted_bits_4 + integer_sum_2) >> 1;
    shifted_bits_6 = a1[2 * shifted_bits_5 + 5] + (a1[2 * shifted_bits_5 + 4] << 8);
    if ( a2 >= shifted_bits_6 )
      break;
    shifted_bits_4 = shifted_bits_5 - 1;
LABEL_18:
    if ( integer_sum_2 > shifted_bits_4 )
      return 0xFFFFFFFFLL;
  }
  if ( a2 > shifted_bits_6 )
  {
    integer_sum_2 = shifted_bits_5 + 1;
    goto LABEL_18;
  }
  return shifted_bits_5;
}

//----- (000000014017DA60) ----------------------------------------------------
__int64            sub_14017DA60(__int64 a1, int a2)
{
  int loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 scaled_index;
  int loaded_word_4;
  unsigned __int8 *record_pointer;
  unsigned int shifted_bits;
  unsigned __int8 *record_pointer_2;
  unsigned int shifted_bits_2;

  if ( *(_DWORD *)(a1 + 76) )
    crt_assert((char *)L"!info->cff.size", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x614u);
  if ( a2 >= *(_DWORD *)(a1 + 20) )
    return 0xFFFFFFFFLL;
  loaded_word = *(_DWORD *)(a1 + 56);
  if ( loaded_word >= 2 )
    return 0xFFFFFFFFLL;
  loaded_word_2 = *(int *)(a1 + 24);
  loaded_word_3 = *(_QWORD *)(a1 + 8);
  if ( loaded_word )
  {
    record_pointer_2 = (unsigned __int8 *)(loaded_word_2 + loaded_word_3 + 4 * a2);
    shifted_bits_2 = *(_DWORD *)(a1 + 32) + ((((record_pointer_2[1] + (*record_pointer_2 << 8)) << 8) + record_pointer_2[2]) << 8) + record_pointer_2[3];
    if ( shifted_bits_2 == *(_DWORD *)(a1 + 32) + ((((record_pointer_2[5] + (record_pointer_2[4] << 8)) << 8) + record_pointer_2[6]) << 8) + record_pointer_2[7] )
      return (unsigned int)-1;
    return shifted_bits_2;
  }
  else
  {
    scaled_index = loaded_word_3 + 2 * a2;
    loaded_word_4 = *(_DWORD *)(a1 + 32);
    record_pointer = (unsigned __int8 *)(scaled_index + loaded_word_2);
    shifted_bits = loaded_word_4 + 2 * (record_pointer[1] + (*record_pointer << 8));
    if ( shifted_bits == loaded_word_4 + 2 * (record_pointer[3] + (record_pointer[2] << 8)) )
      return (unsigned int)-1;
    return shifted_bits;
  }
}

//----- (000000014017DB90) ----------------------------------------------------
__int64            sub_14017DB90(unsigned __int8 *a1, int a2)
{
  int integer_sum;
  int shifted_bits;
  int shifted_bits_2;
  unsigned __int8 *state_address;
  int table_value;
  int table_value_2;
  int shifted_bits_3;

  if ( a1[1] + (*a1 << 8) != 1 )
  {
    if ( a1[1] + (*a1 << 8) == 2 )
    {
      integer_sum = 0;
      shifted_bits = (a1[2] << 8) + a1[3] - 1;
      if ( shifted_bits >= 0 )
      {
        while ( 1 )
        {
          shifted_bits_2 = (shifted_bits + integer_sum) >> 1;
          state_address = &a1[6 * shifted_bits_2 + 4];
          if ( a2 >= state_address[1] + (*state_address << 8) )
          {
            if ( a2 <= state_address[3] + (state_address[2] << 8) )
              return state_address[5] + (state_address[4] << 8);
            integer_sum = shifted_bits_2 + 1;
          }
          else
          {
            shifted_bits = shifted_bits_2 - 1;
          }
          if ( integer_sum > shifted_bits )
            return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x960u);
    }
    return 0xFFFFFFFFLL;
  }
  table_value = a1[2];
  table_value_2 = a1[3];
  shifted_bits_3 = table_value_2 + (table_value << 8);
  if ( a2 < shifted_bits_3 || a2 >= table_value_2 + ((table_value + a1[4]) << 8) + a1[5] )
    return 0xFFFFFFFFLL;
  return (a1[2 * (a2 - shifted_bits_3) + 6] << 8) + (unsigned int)a1[2 * (a2 - shifted_bits_3) + 7];
}

//----- (000000014017DCC0) ----------------------------------------------------
int            sub_14017DCC0(__int64 a1, int a2, int a3)
{
  __int64 loaded_word;
  int input_value;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 *state_address;
  signed __int64 iteration_count;
  unsigned __int8 *record_pointer;
  unsigned __int8 *state_address_2;
  __int64 element_index;
  unsigned __int8 *state_address_3;
  int loaded_word_2;
  int table_value;
  int call_result;
  int cached_call_result;
  unsigned int table_value_2;
  __int64 table_value_3;
  __int16 shifted_bits;
  __int16 shifted_bits_2;
  int call_result_2;
  int call_result_3;
  int table_value_4;
  int shifted_bits_3;
  __int64 scaled_index;
  unsigned __int8 *state_address_4;
  unsigned __int64 shifted_bits_4;
  int table_value_5;
  unsigned __int64 state_address_5;
  int table_value_6;
  int integer_sum;
  int shifted_bits_5;
  int shifted_bits_6;
  unsigned __int8 *record_pointer_2;
  int shifted_bits_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017DCC0[144];
#define saved_iteration_count (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 0)) /* [rsp+20h] */
#define i (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 8)) /* [rsp+28h] */
#define shifted_bits_8 (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 16)) /* [rsp+30h] */
#define saved_state_address (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 24)) /* [rsp+38h] */
#define shifted_bits_9 (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 32)) /* [rsp+40h] */
#define saved_state_address_2 (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 40)) /* [rsp+48h] */
#define table_value_7 (*(unsigned __int8 (*))(void *)(sr_frame_14017DCC0 + 112)) /* [rsp+90h] */
#define shifted_bits_10 (*(int (*))(void *)(sr_frame_14017DCC0 + 136)) /* [rsp+A8h] */

  loaded_word = *(int *)(a1 + 48);
  input_value = a2;
  if ( (_DWORD)loaded_word )
  {
    loaded_record_pointer = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + loaded_word);
    if ( loaded_record_pointer[1] + (*loaded_record_pointer << 8) == 1 && !(loaded_record_pointer[3] + (loaded_record_pointer[2] << 8)) )
    {
      state_address = &loaded_record_pointer[256 * (unsigned __int64)loaded_record_pointer[8] + loaded_record_pointer[9]];
      saved_state_address_2 = state_address;
      shifted_bits_9 = ((unsigned __int64)*state_address << 8) + state_address[1];
      if ( shifted_bits_9 )
      {
        iteration_count = 0;
        record_pointer = state_address + 2;
        saved_iteration_count = 0;
        for ( i = state_address + 2; ; i += 2 )
        {
          state_address_2 = &state_address[256 * (unsigned __int64)*record_pointer + record_pointer[1]];
          saved_state_address = state_address_2;
          if ( state_address_2[1] + (*state_address_2 << 8) == 2 )
          {
            element_index = 0;
            shifted_bits_8 = ((unsigned __int64)state_address_2[4] << 8) + state_address_2[5];
            if ( shifted_bits_8 )
              break;
          }
LABEL_25:
          ++iteration_count;
          record_pointer = i + 2;
          saved_iteration_count = iteration_count;
          if ( iteration_count >= shifted_bits_9 )
            return 0;
          state_address = saved_state_address_2;
        }
        while ( 1 )
        {
          state_address_3 = &state_address_2[256 * (unsigned __int64)state_address_2[2 * element_index + 6] + state_address_2[2 * element_index + 7]];
          loaded_word_2 = *state_address_3;
          table_value = state_address_3[1];
          call_result = sub_14017D900(&state_address_3[256 * (unsigned __int64)state_address_3[2] + state_address_3[3]], input_value);
          cached_call_result = call_result;
          if ( call_result != -1 )
          {
            if ( table_value + (loaded_word_2 << 8) == 1 )
            {
              scaled_index = 2 * call_result;
              state_address_4 = &state_address_3[state_address_3[scaled_index + 11]];
              shifted_bits_4 = (unsigned __int64)state_address_3[scaled_index + 10] << 8;
              table_value_5 = state_address_4[shifted_bits_4];
              state_address_5 = (unsigned __int64)&state_address_4[shifted_bits_4 + 2];
              table_value_6 = state_address_4[shifted_bits_4 + 1];
              if ( state_address_3[5] + (state_address_3[4] << 8) != 4 || state_address_3[7] + (state_address_3[6] << 8) )
                return 0;
              if ( cached_call_result >= state_address_3[9] + (state_address_3[8] << 8) )
                crt_assert(
                  (char *)L"coverageIndex < pairSetCount",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9A1u);
              integer_sum = 0;
              shifted_bits_5 = (table_value_5 << 8) + table_value_6 - 1;
              if ( shifted_bits_5 >= 0 )
              {
                do
                {
                  shifted_bits_6 = (integer_sum + shifted_bits_5) >> 1;
                  record_pointer_2 = (unsigned __int8 *)(state_address_5 + 4 * shifted_bits_6);
                  shifted_bits_7 = (*record_pointer_2 << 8) + record_pointer_2[1];
                  if ( a3 >= shifted_bits_7 )
                  {
                    if ( a3 <= shifted_bits_7 )
                      return (__int16)((record_pointer_2[2] << 8) + record_pointer_2[3]);
                    integer_sum = shifted_bits_6 + 1;
                  }
                  else
                  {
                    shifted_bits_5 = shifted_bits_6 - 1;
                  }
                }
                while ( integer_sum <= shifted_bits_5 );
              }
LABEL_22:
              input_value = a2;
              goto LABEL_23;
            }
            if ( table_value + (loaded_word_2 << 8) == 2 )
            {
              table_value_2 = state_address_3[10];
              table_value_3 = state_address_3[11];
              shifted_bits = state_address_3[5] + (state_address_3[4] << 8);
              shifted_bits_2 = state_address_3[7] + (state_address_3[6] << 8);
              call_result_2 = sub_14017DB90(&state_address_3[256 * (unsigned __int64)state_address_3[8] + state_address_3[9]], input_value);
              call_result_3 = sub_14017DB90(&state_address_3[256 * (unsigned __int64)table_value_2 + table_value_3], a3);
              table_value_4 = state_address_3[14];
              table_value_7 = state_address_3[15];
              shifted_bits_10 = state_address_3[13] + (state_address_3[12] << 8);
              if ( call_result_2 >= shifted_bits_10 )
                crt_assert(
                  (char *)L"glyph1class < class1Count",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9C5u);
              shifted_bits_3 = table_value_7 + (table_value_4 << 8);
              if ( call_result_3 >= shifted_bits_3 )
                crt_assert(
                  (char *)L"glyph2class < class2Count",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9C6u);
              if ( shifted_bits != 4 || shifted_bits_2 )
                return 0;
              if ( call_result_2 >= 0 && call_result_2 < shifted_bits_10 && call_result_3 >= 0 && call_result_3 < shifted_bits_3 )
                return (__int16)(state_address_3[2 * call_result_2 * shifted_bits_3 + 17 + 2 * call_result_3] + (state_address_3[2 * call_result_2 * shifted_bits_3 + 16 + 2 * call_result_3] << 8));
              goto LABEL_22;
            }
            crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x9D8u);
          }
LABEL_23:
          state_address_2 = saved_state_address;
          if ( ++element_index >= shifted_bits_8 )
          {
            iteration_count = saved_iteration_count;
            goto LABEL_25;
          }
        }
      }
    }
  }
  return 0;
}
#undef saved_iteration_count
#undef i
#undef shifted_bits_8
#undef saved_state_address
#undef shifted_bits_9
#undef saved_state_address_2
#undef table_value_7
#undef shifted_bits_10

//----- (000000014017E0F0) ----------------------------------------------------
__int64            sub_14017E0F0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int unused_written_slot;
  int masked_bits;
  int cached_selection_flag;
  int dword2_result;
  int dword1_result;
  int selected_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E0F0[64];
#define selection_flag (*(__int64 (*))(void *)(sr_frame_14017E0F0 + 8)) /* [rsp+20h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_14017E0F0 + 16)) /* [rsp+28h] */
#define selection_flag_2 (*(__int128 (*))(void *)(sr_frame_14017E0F0 + 32)) /* [rsp+38h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_14017E0F0 + 48)) /* [rsp+48h] */
#define unused_written_slot_4 (*(unsigned int (*))(void *)(sr_frame_14017E0F0 + 56)) /* [rsp+50h] */

  selection_flag = 1;
  unused_written_slot = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_2 = 0;
  selection_flag_2 = 0;
  masked_bits = sub_140182AD0(a1, a2, (__int64)&selection_flag);
  if ( a3 )
  {
    cached_selection_flag = 0;
    if ( masked_bits )
      cached_selection_flag = selection_flag_2;
    *a3 = cached_selection_flag;
  }
  if ( a4 )
  {
    dword2_result = 0;
    if ( masked_bits )
      dword2_result = DWORD2(selection_flag_2);
    *a4 = dword2_result;
  }
  if ( a5 )
  {
    dword1_result = 0;
    if ( masked_bits )
      dword1_result = DWORD1(selection_flag_2);
    *a5 = dword1_result;
  }
  if ( a6 )
  {
    selected_word = 0;
    if ( masked_bits )
      selected_word = HIDWORD(selection_flag_2);
    *a6 = selected_word;
  }
  if ( masked_bits )
    return unused_written_slot_4;
  return unused_written_slot;
}
#undef selection_flag
#undef unused_written_slot_2
#undef selection_flag_2
#undef unused_written_slot_3
#undef unused_written_slot_4

//----- (000000014017E1A0) ----------------------------------------------------
int            sub_14017E1A0(__int64 a1, int a2, int a3)
{
  unsigned __int8 *loaded_record_pointer;
  int integer_sum;
  unsigned int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  __int64 scaled_index;
  unsigned int shifted_bits_4;

  loaded_record_pointer = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 44));
  if ( !*(_DWORD *)(a1 + 44) )
    return 0;
  if ( !(loaded_record_pointer[3] + (loaded_record_pointer[2] << 8)) )
    return 0;
  if ( loaded_record_pointer[9] + (loaded_record_pointer[8] << 8) != 1 )
    return 0;
  integer_sum = 0;
  shifted_bits = a3 | (a2 << 16);
  shifted_bits_2 = (loaded_record_pointer[10] << 8) + loaded_record_pointer[11] - 1;
  if ( shifted_bits_2 < 0 )
    return 0;
  while ( 1 )
  {
    shifted_bits_3 = (shifted_bits_2 + integer_sum) >> 1;
    scaled_index = 6 * shifted_bits_3;
    shifted_bits_4 = loaded_record_pointer[scaled_index + 21] + (loaded_record_pointer[scaled_index + 18] << 24) + (loaded_record_pointer[scaled_index + 20] << 8) + (loaded_record_pointer[scaled_index + 19] << 16);
    if ( shifted_bits >= shifted_bits_4 )
      break;
    shifted_bits_2 = shifted_bits_3 - 1;
LABEL_9:
    if ( integer_sum > shifted_bits_2 )
      return 0;
  }
  if ( shifted_bits > shifted_bits_4 )
  {
    integer_sum = shifted_bits_3 + 1;
    goto LABEL_9;
  }
  return (__int16)((loaded_record_pointer[scaled_index + 22] << 8) + loaded_record_pointer[scaled_index + 23]);
}

//----- (000000014017E2A0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14017E2A0(__int64 a1, int a2, __int64 *a3)
{
  __int64 allocated_buffer;
  unsigned int unused_written_slot;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E2A0[112];
#define selection_flag (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 0)) /* [rsp+20h] */
#define unused_written_slot_2 (*(sr_frame_i128 (*))(void *)(sr_frame_14017E2A0 + 8)) /* [rsp+28h] */
#define unused_written_slot_3 (*(sr_frame_i128 (*))(void *)(sr_frame_14017E2A0 + 24)) /* [rsp+38h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 40)) /* [rsp+48h] */
#define selection_flag_2 (*(int (*))(void *)(sr_frame_14017E2A0 + 48)) /* [rsp+50h] */
#define selection_flag_3 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 56)) /* [rsp+58h] */
#define unused_written_slot_5 (*(__int128 (*))(void *)(sr_frame_14017E2A0 + 64)) /* [rsp+60h] */
#define unused_written_slot_6 (*(__int128 (*))(void *)(sr_frame_14017E2A0 + 80)) /* [rsp+70h] */
#define unused_written_slot_7 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 96)) /* [rsp+80h] */
#define selection_flag_4 (*(unsigned int (*))(void *)(sr_frame_14017E2A0 + 104)) /* [rsp+88h] */

  selection_flag = 1;
  unused_written_slot_4 = 0;
  selection_flag_2 = 0;
  selection_flag_3 = 0;
  selection_flag_4 = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  if ( (unsigned int)sub_140182AD0(a1, a2, (__int64)&selection_flag)
    && (allocated_buffer = sr_path_malloc(14LL * selection_flag_2), *a3 = allocated_buffer, unused_written_slot_7 = allocated_buffer, (unsigned int)sub_140182AD0(a1, a2, (__int64)&selection_flag_3)) )
  {
    unused_written_slot = selection_flag_4;
    if ( selection_flag_4 != selection_flag_2 )
      crt_assert(
        (char *)L"output_ctx.num_vertices == count_ctx.num_vertices",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x8B6u);
    return unused_written_slot;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
#undef selection_flag
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag_2
#undef selection_flag_3
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef selection_flag_4

//----- (000000014017E380) ----------------------------------------------------
__int64            sub_14017E380(__int64 a1, int a2, __int64 *a3)
{
  __int64 loaded_word;
  int selection_flag;
  __m128i *source_buffer;
  int cached_integer_sum;
  int call_result;
  __int16 shifted_bits;
  char input_byte;
  BOOL comparison_result;
  int scaled_index;
  __int64 cached_scaled_index;
  int shifted_bits_2;
  char *text_cursor;
  __int64 allocated_buffer;
  __int64 saved_allocated_buffer;
  unsigned __int8 remaining_count;
  __int64 remaining_count_2;
  _BYTE *running_total;
  __int64 remaining_count_3;
  int running_total_2;
  __int64 running_total_3;
  char masked_bits;
  int scaled_index_2;
  __int64 remaining_count_4;
  __int64 running_total_4;
  int running_total_5;
  char masked_bits_2;
  int scaled_index_3;
  __int64 iteration_count;
  __int16 *running_total_6;
  int iteration_count_2;
  int cached_table_value;
  int saved_loaded_word;
  int shifted_bits_3;
  int shifted_bits_4;
  int iteration_count_3;
  int loaded_word_2;
  char cached_block;
  int table_value;
  int call_result_2;
  __int64 integer_sum;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int16 cached_table_value_2;
  __int16 cached_loaded_word;
  int cached_table_value_3;
  int cached_loaded_word_2;
  __int64 result;
  char *record_byte_offset;
  char table_value_2;
  float converted_vector;
  int table_value_3;
  float saved_shifted_bits;
  int table_value_4;
  __m128i converted_vector_2;
  int shifted_bits_5;
  float converted_vector_3;
  float shifted_bits_6;
  int shifted_bits_7;
  float scaled_value;
  float converted_vector_4;
  __m128i converted_vector_5;
  int shifted_bits_8;
  __m128i converted_vector_6;
  int shifted_bits_9;
  int shifted_bits_10;
  float square_root;
  float square_root_2;
  int masked_bits_3;
  __int64 saved_masked_bits;
  __int64 scaled_index_7;
  __int64 running_total_7;
  unsigned __int64 remaining_count_5;
  char *cached_block_2;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  char *cached_block_3;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  char *cached_block_4;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  char *cached_block_5;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  __int64 running_total_8;
  __int64 remaining_count_6;
  char *cached_block_6;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  int integer_sum_2;
  __m128i *allocated_buffer_2;
  __m128i *saved_allocated_buffer_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E380[304];
#define table_value_5 (*(__int16 (*))(void *)(sr_frame_14017E380 + 0)) /* [rsp+50h] */
#define cached_table_value_4 (*(int (*))(void *)(sr_frame_14017E380 + 4)) /* [rsp+54h] */
#define saved_loaded_word_2 (*(int (*))(void *)(sr_frame_14017E380 + 8)) /* [rsp+58h] */
#define shifted_bits_11 (*(int (*))(void *)(sr_frame_14017E380 + 12)) /* [rsp+5Ch] */
#define saved_loaded_word_3 (*(int (*))(void *)(sr_frame_14017E380 + 16)) /* [rsp+60h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_14017E380 + 20)) /* [rsp+64h] */
#define running_total_9 (*(unsigned __int8 * (*))(void *)(sr_frame_14017E380 + 24)) /* [rsp+68h] */
#define integer_sum_3 (*(__int64 (*))(void *)(sr_frame_14017E380 + 32)) /* [rsp+70h] */
#define Block (*(void * (*))(void *)(sr_frame_14017E380 + 272)) /* [rsp+160h] */
#define unused_written_slot (*(__int64 * (*))(void *)(sr_frame_14017E380 + 288)) /* [rsp+170h] */
#define loaded_word_3 (*(__int16 (*))(void *)(sr_frame_14017E380 + 296)) /* [rsp+178h] */

  unused_written_slot = a3;
  loaded_word = *(_QWORD *)(a1 + 8);
  selection_flag = 0;
  source_buffer = nullptr;
  cached_integer_sum = 0;
  call_result = sub_14017DA60(a1, a2);
  *a3 = 0;
  if ( call_result < 0 )
    return 0;
  shifted_bits = *(unsigned __int8 *)(call_result + loaded_word + 1) + (*(unsigned __int8 *)(call_result + loaded_word) << 8);
  if ( shifted_bits > 0 )
  {
    input_byte = 0;
    running_total_9 = (unsigned __int8 *)(call_result + loaded_word + 10);
    comparison_result = 0;
    scaled_index = 2 * shifted_bits;
    cached_scaled_index = scaled_index;
    shifted_bits_2 = running_total_9[scaled_index - 1] + (running_total_9[scaled_index - 2] << 8);
    text_cursor = (char *)(scaled_index
                 + call_result
                 + ((unsigned __int64)*(unsigned __int8 *)(call_result + (__int64)scaled_index + loaded_word + 10) << 8)
                 + *(unsigned __int8 *)(call_result + (__int64)scaled_index + loaded_word + 11)
                 + loaded_word
                 + 12);
    allocated_buffer = sr_path_malloc(14LL * (shifted_bits_2 + scaled_index + 1));
    saved_allocated_buffer = allocated_buffer;
    if ( !allocated_buffer )
      return 0;
    shifted_bits_11 = 0;
    remaining_count = 0;
    integer_sum_3 = (unsigned int)(shifted_bits_2 + 1);
    if ( shifted_bits_2 == -1 )
    {
      iteration_count_2 = 0;
      cached_table_value_3 = 0;
      cached_loaded_word_2 = 0;
      cached_table_value = 0;
      saved_loaded_word = 0;
      LOWORD(shifted_bits_3) = 0;
      LOWORD(shifted_bits_4) = 0;
    }
    else
    {
      remaining_count_2 = (unsigned int)(shifted_bits_2 + 1);
      running_total = (_BYTE *)(14 * cached_scaled_index + allocated_buffer + 12);
      do
      {
        if ( remaining_count )
        {
          --remaining_count;
        }
        else
        {
          input_byte = *text_cursor;
          if ( (*text_cursor & 8) != 0 )
            remaining_count = text_cursor[1];
          text_cursor += ((input_byte & 8) != 0) + 1;
        }
        *running_total = input_byte;
        running_total += 14;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      remaining_count_3 = (unsigned int)(shifted_bits_2 + 1);
      running_total_2 = 0;
      running_total_3 = allocated_buffer + 14 * cached_scaled_index;
      do
      {
        masked_bits = *(_BYTE *)(running_total_3 + 12) & 0x10;
        if ( (*(_BYTE *)(running_total_3 + 12) & 2) != 0 )
        {
          scaled_index_2 = (unsigned __int8)*text_cursor++;
          if ( !masked_bits )
            scaled_index_2 = -scaled_index_2;
          running_total_2 += scaled_index_2;
        }
        else if ( !masked_bits )
        {
          running_total_2 += (__int16)(((unsigned __int8)*text_cursor << 8) + (unsigned __int8)text_cursor[1]);
          text_cursor += 2;
        }
        *(_WORD *)running_total_3 = running_total_2;
        running_total_3 += 14;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      remaining_count_4 = (unsigned int)(shifted_bits_2 + 1);
      running_total_4 = 14 * cached_scaled_index + allocated_buffer + 2;
      running_total_5 = 0;
      do
      {
        masked_bits_2 = *(_BYTE *)(running_total_4 + 10) & 0x20;
        if ( (*(_BYTE *)(running_total_4 + 10) & 4) != 0 )
        {
          scaled_index_3 = (unsigned __int8)*text_cursor++;
          if ( !masked_bits_2 )
            scaled_index_3 = -scaled_index_3;
          running_total_5 += scaled_index_3;
        }
        else if ( !masked_bits_2 )
        {
          running_total_5 += (__int16)(((unsigned __int8)*text_cursor << 8) + (unsigned __int8)text_cursor[1]);
          text_cursor += 2;
        }
        *(_WORD *)running_total_4 = running_total_5;
        running_total_4 += 14;
        --remaining_count_4;
      }
      while ( remaining_count_4 );
      iteration_count = 0;
      cached_table_value_4 = 0;
      running_total_6 = (__int16 *)(allocated_buffer + 14 * cached_scaled_index);
      saved_loaded_word_2 = 0;
      iteration_count_2 = 0;
      saved_loaded_word_3 = 0;
      cached_table_value = 0;
      saved_iteration_count = 0;
      saved_loaded_word = 0;
      LOWORD(shifted_bits_3) = 0;
      LOWORD(shifted_bits_4) = 0;
      iteration_count_3 = 0;
      do
      {
        loaded_word_2 = *running_total_6;
        cached_block = *((_BYTE *)running_total_6 + 12);
        loaded_word_3 = *running_total_6;
        table_value = running_total_6[1];
        table_value_5 = running_total_6[1];
        LOBYTE(Block) = cached_block;
        if ( shifted_bits_11 == iteration_count_3 )
        {
          if ( iteration_count )
          {
            call_result_2 = sub_14017FA30(saved_allocated_buffer, iteration_count_2, selection_flag, comparison_result, shifted_bits_4, shifted_bits_3, saved_loaded_word_2, cached_table_value_4, saved_loaded_word, cached_table_value);
            saved_loaded_word = saved_loaded_word_3;
            iteration_count_2 = call_result_2;
            cached_block = (char)Block;
            iteration_count_3 = saved_iteration_count;
          }
          comparison_result = (cached_block & 1) == 0;
          if ( (cached_block & 1) != 0 )
          {
            LOWORD(shifted_bits_4) = loaded_word_2;
            LOWORD(shifted_bits_3) = table_value;
          }
          else
          {
            shifted_bits_4 = running_total_6[7];
            shifted_bits_3 = running_total_6[8];
            saved_loaded_word_2 = loaded_word_2;
            cached_table_value_4 = table_value;
            if ( (running_total_6[13] & 1) != 0 )
            {
              ++iteration_count_3;
              ++iteration_count;
              running_total_6 += 7;
            }
            else
            {
              shifted_bits_4 = (loaded_word_2 + shifted_bits_4) >> 1;
              shifted_bits_3 = (table_value + shifted_bits_3) >> 1;
            }
          }
          integer_sum = iteration_count_2++;
          scaled_index_4 = 14 * integer_sum;
          selection_flag = 0;
          *(_DWORD *)(scaled_index_4 + saved_allocated_buffer + 4) = 0;
          *(_BYTE *)(scaled_index_4 + saved_allocated_buffer + 12) = 1;
          *(_WORD *)(scaled_index_4 + saved_allocated_buffer) = shifted_bits_4;
          *(_WORD *)(scaled_index_4 + saved_allocated_buffer + 2) = shifted_bits_3;
          shifted_bits_11 = (*running_total_9 << 8) + running_total_9[1] + 1;
          running_total_9 += 2;
        }
        else if ( (cached_block & 1) != 0 )
        {
          scaled_index_6 = 14LL * iteration_count_2++;
          if ( selection_flag )
          {
            cached_table_value_2 = cached_table_value;
            cached_loaded_word = saved_loaded_word;
          }
          else
          {
            cached_table_value_2 = 0;
            cached_loaded_word = 0;
          }
          *(_BYTE *)(scaled_index_6 + saved_allocated_buffer + 12) = (selection_flag != 0) + 2;
          *(_WORD *)(scaled_index_6 + saved_allocated_buffer) = loaded_word_3;
          *(_WORD *)(scaled_index_6 + saved_allocated_buffer + 2) = table_value_5;
          *(_WORD *)(scaled_index_6 + saved_allocated_buffer + 4) = cached_loaded_word;
          selection_flag = 0;
          *(_WORD *)(scaled_index_6 + saved_allocated_buffer + 6) = cached_table_value_2;
        }
        else
        {
          if ( selection_flag )
          {
            scaled_index_5 = 14LL * iteration_count_2;
            *(_WORD *)(scaled_index_5 + saved_allocated_buffer) = (saved_loaded_word + loaded_word_2) >> 1;
            *(_WORD *)(scaled_index_5 + saved_allocated_buffer + 2) = (table_value + cached_table_value) >> 1;
            ++iteration_count_2;
            *(_BYTE *)(scaled_index_5 + saved_allocated_buffer + 12) = 3;
            *(_WORD *)(scaled_index_5 + saved_allocated_buffer + 4) = saved_loaded_word;
            *(_WORD *)(scaled_index_5 + saved_allocated_buffer + 6) = cached_table_value;
          }
          saved_loaded_word = loaded_word_2;
          saved_loaded_word_3 = loaded_word_2;
          cached_table_value = table_value;
          selection_flag = 1;
        }
        ++iteration_count_3;
        ++iteration_count;
        running_total_6 += 7;
        saved_iteration_count = iteration_count_3;
      }
      while ( iteration_count < integer_sum_3 );
      cached_table_value_3 = cached_table_value_4;
      cached_loaded_word_2 = saved_loaded_word_2;
    }
    LODWORD(result) = sub_14017FA30(saved_allocated_buffer, iteration_count_2, selection_flag, comparison_result, shifted_bits_4, shifted_bits_3, cached_loaded_word_2, cached_table_value_3, saved_loaded_word, cached_table_value);
    *unused_written_slot = saved_allocated_buffer;
    return (unsigned int)result;
  }
  if ( shifted_bits != -1 )
  {
    if ( shifted_bits < 0 )
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x730u);
LABEL_90:
    *unused_written_slot = (__int64)source_buffer;
    return (unsigned int)cached_integer_sum;
  }
  record_byte_offset = (char *)(call_result + loaded_word + 10);
  while ( 1 )
  {
    table_value_2 = record_byte_offset[1];
    converted_vector = 0.0;
    table_value_3 = (unsigned __int8)record_byte_offset[2];
    saved_shifted_bits = 0.0;
    table_value_4 = (unsigned __int8)record_byte_offset[3];
    record_byte_offset += 4;
    Block = nullptr;
    if ( (table_value_2 & 2) != 0 )
    {
      if ( (table_value_2 & 1) != 0 )
      {
        converted_vector_2 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)*record_byte_offset << 8) + (unsigned __int8)record_byte_offset[1]));
        shifted_bits_5 = (__int16)(((unsigned __int8)record_byte_offset[2] << 8) + (unsigned __int8)record_byte_offset[3]);
        record_byte_offset += 4;
      }
      else
      {
        converted_vector_2 = _mm_cvtsi32_si128(*record_byte_offset);
        shifted_bits_5 = record_byte_offset[1];
        record_byte_offset += 2;
      }
      converted_vector = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0];
      saved_shifted_bits = (float)shifted_bits_5;
    }
    else
    {
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x6FBu);
    }
    if ( (table_value_2 & 8) != 0 )
    {
      converted_vector_3 = 0.0;
      shifted_bits_6 = 0.0;
      shifted_bits_7 = (__int16)(((unsigned __int8)*record_byte_offset << 8) + (unsigned __int8)record_byte_offset[1]);
      record_byte_offset += 2;
      scaled_value = (float)shifted_bits_7 * 0.000061035156;
      converted_vector_4 = scaled_value;
    }
    else if ( (table_value_2 & 0x40) != 0 )
    {
      converted_vector_3 = 0.0;
      shifted_bits_6 = 0.0;
      converted_vector_5 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)*record_byte_offset << 8) + (unsigned __int8)record_byte_offset[1]));
      shifted_bits_8 = (__int16)(((unsigned __int8)record_byte_offset[2] << 8) + (unsigned __int8)record_byte_offset[3]);
      record_byte_offset += 4;
      converted_vector_4 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_5), f32)[0] * 0.000061035156;
      scaled_value = (float)shifted_bits_8 * 0.000061035156;
    }
    else if ( table_value_2 >= 0 )
    {
      scaled_value = 1.0;
      converted_vector_3 = 0.0;
      shifted_bits_6 = 0.0;
      converted_vector_4 = 1.0;
    }
    else
    {
      converted_vector_4 = (float)(__int16)(((unsigned __int8)*record_byte_offset << 8) + (unsigned __int8)record_byte_offset[1]) * 0.000061035156;
      converted_vector_6 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)record_byte_offset[4] << 8) + (unsigned __int8)record_byte_offset[5]));
      shifted_bits_6 = (float)(__int16)(((unsigned __int8)record_byte_offset[2] << 8) + (unsigned __int8)record_byte_offset[3]) * 0.000061035156;
      shifted_bits_9 = (__int16)(((unsigned __int8)record_byte_offset[6] << 8) + (unsigned __int8)record_byte_offset[7]);
      record_byte_offset += 8;
      converted_vector_3 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_6), f32)[0] * 0.000061035156;
      scaled_value = (float)shifted_bits_9 * 0.000061035156;
    }
    shifted_bits_10 = table_value_4 + (table_value_3 << 8);
    square_root = fsqrt((float)(shifted_bits_6 * shifted_bits_6) + (float)(converted_vector_4 * converted_vector_4));
    square_root_2 = fsqrt((float)(scaled_value * scaled_value) + (float)(converted_vector_3 * converted_vector_3));
    masked_bits_3 = *(_DWORD *)(a1 + 76) ? sub_14017E2A0(a1, shifted_bits_10, (__int64 *)&Block) : sub_14017E380(a1, shifted_bits_10, (__int64 *)&Block);
    if ( masked_bits_3 > 0 )
      break;
LABEL_81:
    if ( (table_value_2 & 0x20) == 0 )
      goto LABEL_90;
  }
  saved_masked_bits = masked_bits_3;
  scaled_index_7 = 0;
  if ( masked_bits_3 < 4LL )
    goto LABEL_73;
  running_total_7 = 0;
  remaining_count_5 = ((unsigned __int64)(masked_bits_3 - 4LL) >> 2) + 1;
  scaled_index_7 = 4 * remaining_count_5;
  do
  {
    cached_block_2 = (char *)Block;
    weighted_sum = (float)*(__int16 *)((char *)Block + running_total_7 + 2);
    weighted_sum_2 = (float)((float)((float)((float)*(__int16 *)((char *)Block + running_total_7) * shifted_bits_6) + (float)(weighted_sum * scaled_value)) + saved_shifted_bits) * square_root_2;
    *(_WORD *)((char *)Block + running_total_7) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block + running_total_7) * converted_vector_4)
                                                                 + (float)(weighted_sum * converted_vector_3))
                                                         + converted_vector)
                                                 * square_root);
    *(_WORD *)&cached_block_2[running_total_7 + 2] = (int)weighted_sum_2;
    weighted_sum_3 = (float)*(__int16 *)&cached_block_2[running_total_7 + 6];
    weighted_sum_4 = (float)((float)((float)((float)*(__int16 *)&cached_block_2[running_total_7 + 4] * shifted_bits_6) + (float)(weighted_sum_3 * scaled_value)) + saved_shifted_bits) * square_root_2;
    *(_WORD *)&cached_block_2[running_total_7 + 4] = (int)(float)((float)((float)((float)((float)*(__int16 *)&cached_block_2[running_total_7 + 4] * converted_vector_4)
                                                         + (float)(weighted_sum_3 * converted_vector_3))
                                                 + converted_vector)
                                         * square_root);
    *(_WORD *)&cached_block_2[running_total_7 + 6] = (int)weighted_sum_4;
    cached_block_3 = (char *)Block;
    weighted_sum_5 = (float)*(__int16 *)((char *)Block + running_total_7 + 16);
    weighted_sum_6 = (float)((float)((float)((float)*(__int16 *)((char *)Block + running_total_7 + 14) * shifted_bits_6) + (float)(weighted_sum_5 * scaled_value)) + saved_shifted_bits)
        * square_root_2;
    *(_WORD *)((char *)Block + running_total_7 + 14) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block
                                                                                                  + running_total_7
                                                                                                  + 14)
                                                                              * converted_vector_4)
                                                                      + (float)(weighted_sum_5 * converted_vector_3))
                                                              + converted_vector)
                                                      * square_root);
    *(_WORD *)&cached_block_3[running_total_7 + 16] = (int)weighted_sum_6;
    weighted_sum_7 = (float)*(__int16 *)&cached_block_3[running_total_7 + 18] * shifted_bits_6;
    weighted_sum_8 = (float)*(__int16 *)&cached_block_3[running_total_7 + 20] * scaled_value;
    *(_WORD *)&cached_block_3[running_total_7 + 18] = (int)(float)((float)((float)((float)((float)*(__int16 *)&cached_block_3[running_total_7 + 18] * converted_vector_4)
                                                          + (float)((float)*(__int16 *)&cached_block_3[running_total_7 + 20] * converted_vector_3))
                                                  + converted_vector)
                                          * square_root);
    *(_WORD *)&cached_block_3[running_total_7 + 20] = (int)(float)((float)((float)(weighted_sum_7 + weighted_sum_8) + saved_shifted_bits) * square_root_2);
    cached_block_4 = (char *)Block;
    weighted_sum_9 = (float)*(__int16 *)((char *)Block + running_total_7 + 30);
    weighted_sum_10 = (float)*(__int16 *)((char *)Block + running_total_7 + 28);
    *(_WORD *)((char *)Block + running_total_7 + 28) = (int)(float)((float)((float)((float)(weighted_sum_10 * converted_vector_4) + (float)(weighted_sum_9 * converted_vector_3)) + converted_vector)
                                                      * square_root);
    *(_WORD *)&cached_block_4[running_total_7 + 30] = (int)(float)((float)((float)((float)(weighted_sum_10 * shifted_bits_6) + (float)(weighted_sum_9 * scaled_value)) + saved_shifted_bits) * square_root_2);
    weighted_sum_11 = (float)*(__int16 *)&cached_block_4[running_total_7 + 34];
    weighted_sum_12 = (float)*(__int16 *)&cached_block_4[running_total_7 + 32];
    *(_WORD *)&cached_block_4[running_total_7 + 32] = (int)(float)((float)((float)((float)(weighted_sum_12 * converted_vector_4) + (float)(weighted_sum_11 * converted_vector_3)) + converted_vector) * square_root);
    *(_WORD *)&cached_block_4[running_total_7 + 34] = (int)(float)((float)((float)((float)(weighted_sum_12 * shifted_bits_6) + (float)(weighted_sum_11 * scaled_value)) + saved_shifted_bits) * square_root_2);
    cached_block_5 = (char *)Block;
    weighted_sum_13 = (float)*(__int16 *)((char *)Block + running_total_7 + 44);
    weighted_sum_14 = (float)((float)((float)((float)*(__int16 *)((char *)Block + running_total_7 + 42) * shifted_bits_6) + (float)(weighted_sum_13 * scaled_value)) + saved_shifted_bits)
        * square_root_2;
    *(_WORD *)((char *)Block + running_total_7 + 42) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block
                                                                                                  + running_total_7
                                                                                                  + 42)
                                                                              * converted_vector_4)
                                                                      + (float)(weighted_sum_13 * converted_vector_3))
                                                              + converted_vector)
                                                      * square_root);
    *(_WORD *)&cached_block_5[running_total_7 + 44] = (int)weighted_sum_14;
    weighted_sum_15 = (float)*(__int16 *)&cached_block_5[running_total_7 + 48];
    weighted_sum_16 = (float)*(__int16 *)&cached_block_5[running_total_7 + 46];
    *(_WORD *)&cached_block_5[running_total_7 + 46] = (int)(float)((float)((float)((float)(weighted_sum_16 * converted_vector_4) + (float)(weighted_sum_15 * converted_vector_3)) + converted_vector) * square_root);
    *(_WORD *)&cached_block_5[running_total_7 + 48] = (int)(float)((float)((float)((float)(weighted_sum_16 * shifted_bits_6) + (float)(weighted_sum_15 * scaled_value)) + saved_shifted_bits) * square_root_2);
    running_total_7 += 56;
    --remaining_count_5;
  }
  while ( remaining_count_5 );
  if ( scaled_index_7 < masked_bits_3 )
  {
LABEL_73:
    running_total_8 = 14 * scaled_index_7;
    remaining_count_6 = masked_bits_3 - scaled_index_7;
    do
    {
      cached_block_6 = (char *)Block;
      weighted_sum_17 = (float)*(__int16 *)((char *)Block + running_total_8 + 2);
      weighted_sum_18 = (float)*(__int16 *)((char *)Block + running_total_8);
      *(_WORD *)((char *)Block + running_total_8) = (int)(float)((float)((float)((float)(weighted_sum_18 * converted_vector_4) + (float)(weighted_sum_17 * converted_vector_3)) + converted_vector)
                                                   * square_root);
      *(_WORD *)&cached_block_6[running_total_8 + 2] = (int)(float)((float)((float)((float)(weighted_sum_18 * shifted_bits_6) + (float)(weighted_sum_17 * scaled_value)) + saved_shifted_bits) * square_root_2);
      weighted_sum_19 = (float)*(__int16 *)&cached_block_6[running_total_8 + 6];
      weighted_sum_20 = (float)*(__int16 *)&cached_block_6[running_total_8 + 4];
      *(_WORD *)&cached_block_6[running_total_8 + 4] = (int)(float)((float)((float)((float)(weighted_sum_20 * converted_vector_4) + (float)(weighted_sum_19 * converted_vector_3)) + converted_vector) * square_root);
      *(_WORD *)&cached_block_6[running_total_8 + 6] = (int)(float)((float)((float)((float)(weighted_sum_20 * shifted_bits_6) + (float)(weighted_sum_19 * scaled_value)) + saved_shifted_bits) * square_root_2);
      running_total_8 += 14;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
  }
  integer_sum_2 = masked_bits_3 + cached_integer_sum;
  allocated_buffer_2 = (__m128i *)sr_path_malloc(14LL * (masked_bits_3 + cached_integer_sum));
  saved_allocated_buffer_2 = allocated_buffer_2;
  if ( allocated_buffer_2 )
  {
    if ( cached_integer_sum > 0 )
      crt_memcpy(allocated_buffer_2, source_buffer, 14LL * cached_integer_sum);
    crt_memcpy((__m128i *)((char *)saved_allocated_buffer_2 + 14 * cached_integer_sum), (     __m128i *)Block, 14 * saved_masked_bits);
    if ( source_buffer )
      free(source_buffer);
    source_buffer = saved_allocated_buffer_2;
    free(Block);
    cached_integer_sum = integer_sum_2;
    goto LABEL_81;
  }
  if ( source_buffer )
    free(source_buffer);
  if ( Block )
    free(Block);
  return 0;
}
#undef table_value_5
#undef cached_table_value_4
#undef saved_loaded_word_2
#undef shifted_bits_11
#undef saved_loaded_word_3
#undef saved_iteration_count
#undef running_total_9
#undef integer_sum_3
#undef Block
#undef unused_written_slot
#undef loaded_word_3

// 14017EDF9: conditional instruction was optimized away because eax.4>=1

//----- (000000014017F020) ----------------------------------------------------
__int64            sub_14017F020(__int64 a1, unsigned int a2)
{
  __int64 input_value;
  unsigned int shifted_bits;
  int loaded_word;
  __int64 remaining_count;
  int iteration_count;
  unsigned __int8 loaded_word_2;
  __int64 integer_sum;

  input_value = a2;
  shifted_bits = 0;
  if ( a2 - 1 <= 3
    || (crt_assert((char *)L"n >= 1 && n <= 4", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x469u),
        (int)input_value > 0) )
  {
    loaded_word = *(_DWORD *)(a1 + 12);
    remaining_count = input_value;
    iteration_count = *(_DWORD *)(a1 + 8);
    do
    {
      if ( iteration_count < loaded_word )
      {
        integer_sum = iteration_count++;
        loaded_word_2 = *(_BYTE *)(integer_sum + *(_QWORD *)a1);
        *(_DWORD *)(a1 + 8) = iteration_count;
      }
      else
      {
        loaded_word_2 = 0;
      }
      shifted_bits = loaded_word_2 | (shifted_bits << 8);
      --remaining_count;
    }
    while ( remaining_count );
  }
  return shifted_bits;
}

//----- (000000014017F0C0) ----------------------------------------------------
char            sub_14017F0C0(__int64 a1)
{
  __int64 loaded_word;

  loaded_word = *(int *)(a1 + 8);
  if ( (int)loaded_word < *(_DWORD *)(a1 + 12) )
    return *(_BYTE *)(loaded_word + *(_QWORD *)a1);
  else
    return 0;
}

//----- (000000014017F0E0) ----------------------------------------------------
__int64            sub_14017F0E0(__int64 a1, __int64 a2, int a3, int a4)
{
  int loaded_word;

  *(_OWORD *)a1 = 0u;
  if ( a3 >= 0 && a4 >= 0 )
  {
    loaded_word = *(_DWORD *)(a2 + 12);
    if ( a3 <= loaded_word && a4 <= loaded_word - a3 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a2 + a3;
      *(_DWORD *)(a1 + 12) = a4;
    }
  }
  return a1;
}

//----- (000000014017F130) ----------------------------------------------------
__int64            sub_14017F130(__int64 a1, int a2)
{
  __int64 result;

  result = *(unsigned int *)(a1 + 12);
  if ( (a2 > (int)result || a2 < 0)
    && ((crt_assert(
           (char *)L"!(o > b->size || o < 0)",
           (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
           0x45Cu),
         result = *(unsigned int *)(a1 + 12),
         a2 > (int)result)
     || a2 < 0) )
  {
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a2;
  }
  return result;
}

//----- (000000014017F190) ----------------------------------------------------
__int64            sub_14017F190(__int64 a1, int a2)
{
  __int64 result;
  int loaded_word;

  result = *(unsigned int *)(a1 + 12);
  loaded_word = a2 + *(_DWORD *)(a1 + 8);
  if ( (loaded_word > (int)result || loaded_word < 0)
    && ((crt_assert(
           (char *)L"!(o > b->size || o < 0)",
           (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
           0x45Cu),
         result = *(unsigned int *)(a1 + 12),
         loaded_word > (int)result)
     || loaded_word < 0) )
  {
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = loaded_word;
  }
  return result;
}

//----- (000000014017F1F0) ----------------------------------------------------
_OWORD *           sub_14017F1F0(_OWORD *a1, __int64 a2)
{
  __int64 loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  int iteration_count;
  unsigned __int8 loaded_word_4;
  __int64 loaded_word_5;
  __int64 saved_iteration_count;
  int shifted_bits;
  unsigned __int8 loaded_word_6;
  __int64 integer_sum;
  unsigned int saved_loaded_word;
  int loaded_word_7;
  int call_result;
  int integer_difference;
  __int128 packed_word_bits;

  loaded_word = *(int *)(a2 + 8);
  loaded_word_2 = *(_DWORD *)(a2 + 12);
  if ( (int)loaded_word < loaded_word_2 )
  {
    loaded_word_5 = *(_QWORD *)a2;
    iteration_count = loaded_word + 1;
    loaded_word_3 = *(unsigned __int8 *)(loaded_word + *(_QWORD *)a2);
    *(_DWORD *)(a2 + 8) = loaded_word + 1;
    if ( (int)loaded_word + 1 < loaded_word_2 )
    {
      saved_iteration_count = iteration_count;
      iteration_count = loaded_word + 2;
      loaded_word_4 = *(_BYTE *)(saved_iteration_count + loaded_word_5);
      *(_DWORD *)(a2 + 8) = loaded_word + 2;
    }
    else
    {
      loaded_word_4 = 0;
    }
  }
  else
  {
    loaded_word_3 = 0;
    iteration_count = *(_DWORD *)(a2 + 8);
    loaded_word_4 = 0;
  }
  shifted_bits = loaded_word_4 | (loaded_word_3 << 8);
  if ( shifted_bits )
  {
    if ( iteration_count < loaded_word_2 )
    {
      integer_sum = iteration_count++;
      loaded_word_6 = *(_BYTE *)(integer_sum + *(_QWORD *)a2);
      *(_DWORD *)(a2 + 8) = iteration_count;
    }
    else
    {
      loaded_word_6 = 0;
    }
    saved_loaded_word = loaded_word_6;
    if ( !loaded_word_6 || loaded_word_6 > 4u )
    {
      crt_assert(
        (char *)L"offsize >= 1 && offsize <= 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x48Cu);
      loaded_word_2 = *(_DWORD *)(a2 + 12);
      iteration_count = *(_DWORD *)(a2 + 8);
    }
    loaded_word_7 = iteration_count + saved_loaded_word * shifted_bits;
    if ( loaded_word_7 > loaded_word_2 || loaded_word_7 < 0 )
    {
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      if ( loaded_word_7 > *(_DWORD *)(a2 + 12) || loaded_word_7 < 0 )
        loaded_word_7 = *(_DWORD *)(a2 + 12);
    }
    *(_DWORD *)(a2 + 8) = loaded_word_7;
    call_result = sub_14017F020(a2, saved_loaded_word);
    loaded_word_2 = *(_DWORD *)(a2 + 12);
    iteration_count = *(_DWORD *)(a2 + 8) + call_result - 1;
    if ( iteration_count > loaded_word_2 || iteration_count < 0 )
    {
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      loaded_word_2 = *(_DWORD *)(a2 + 12);
      if ( iteration_count > loaded_word_2 || iteration_count < 0 )
        iteration_count = *(_DWORD *)(a2 + 12);
    }
    *(_DWORD *)(a2 + 8) = iteration_count;
  }
  integer_difference = iteration_count - loaded_word;
  packed_word_bits = 0u;
  if ( (int)loaded_word >= 0 && integer_difference >= 0 && (int)loaded_word <= loaded_word_2 && integer_difference <= loaded_word_2 - (int)loaded_word )
  {
    HIDWORD(packed_word_bits) = integer_difference;
    *(_QWORD *)&packed_word_bits = *(_QWORD *)a2 + loaded_word;
  }
  *a1 = packed_word_bits;
  return a1;
}

//----- (000000014017F380) ----------------------------------------------------
__int64            sub_14017F380(__int64 a1)
{
  int loaded_word;
  int loaded_word_2;
  int saved_loaded_word;
  __int64 cached_loaded_word;
  int integer_sum;
  unsigned __int8 loaded_word_3;

  loaded_word = *(_DWORD *)(a1 + 12);
  if ( loaded_word < 0 )
  {
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    loaded_word = *(_DWORD *)(a1 + 12);
  }
  loaded_word_2 = 0;
  saved_loaded_word = 0;
  if ( loaded_word < 0 )
    saved_loaded_word = loaded_word;
  *(_DWORD *)(a1 + 8) = saved_loaded_word;
  if ( saved_loaded_word >= loaded_word )
    return (unsigned int)(loaded_word_2 << 8);
  cached_loaded_word = saved_loaded_word;
  integer_sum = saved_loaded_word + 1;
  loaded_word_2 = *(unsigned __int8 *)(cached_loaded_word + *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = integer_sum;
  if ( integer_sum >= loaded_word )
    return (unsigned int)(loaded_word_2 << 8);
  loaded_word_3 = *(_BYTE *)(integer_sum + *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = integer_sum + 1;
  return loaded_word_3 | (unsigned int)(loaded_word_2 << 8);
}

//----- (000000014017F410) ----------------------------------------------------
_OWORD *           sub_14017F410(_OWORD *a1, __int64 a2, int a3)
{
  __int64 loaded_word;
  int iteration_count;
  __int64 saved_iteration_count;
  int loaded_word_2;
  unsigned __int8 loaded_word_3;
  __int64 integer_sum;
  int shifted_bits;
  unsigned __int8 loaded_word_4;
  __int64 integer_sum_2;
  unsigned int saved_loaded_word;
  int saved_loaded_word_2;
  int call_result;
  int call_result_2;
  int scaled_index;
  int loaded_word_5;
  __int128 packed_word_bits;

  loaded_word = *(int *)(a2 + 12);
  if ( (int)loaded_word < 0 )
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  iteration_count = 0;
  if ( (int)loaded_word < 0 )
    iteration_count = loaded_word;
  saved_iteration_count = iteration_count;
  if ( iteration_count < loaded_word )
  {
    integer_sum = ++iteration_count;
    loaded_word_2 = *(unsigned __int8 *)(saved_iteration_count + *(_QWORD *)a2);
    if ( saved_iteration_count + 1 < loaded_word )
    {
      loaded_word_3 = *(_BYTE *)(integer_sum + *(_QWORD *)a2);
      ++iteration_count;
    }
    else
    {
      loaded_word_3 = 0;
    }
  }
  else
  {
    loaded_word_2 = 0;
    loaded_word_3 = 0;
  }
  shifted_bits = loaded_word_3 | (loaded_word_2 << 8);
  if ( iteration_count < (int)loaded_word )
  {
    integer_sum_2 = iteration_count++;
    loaded_word_4 = *(_BYTE *)(integer_sum_2 + *(_QWORD *)a2);
  }
  else
  {
    loaded_word_4 = 0;
  }
  saved_loaded_word = loaded_word_4;
  if ( a3 < 0 || a3 >= shifted_bits )
    crt_assert((char *)L"i >= 0 && i < count", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4D1u);
  if ( saved_loaded_word - 1 > 3 )
    crt_assert(
      (char *)L"offsize >= 1 && offsize <= 4",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x4D2u);
  saved_loaded_word_2 = iteration_count + a3 * saved_loaded_word;
  if ( saved_loaded_word_2 > (int)loaded_word || saved_loaded_word_2 < 0 )
  {
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    if ( saved_loaded_word_2 > (int)loaded_word || saved_loaded_word_2 < 0 )
      saved_loaded_word_2 = loaded_word;
  }
  *(_DWORD *)(a2 + 8) = saved_loaded_word_2;
  call_result = sub_14017F020(a2, saved_loaded_word);
  call_result_2 = sub_14017F020(a2, saved_loaded_word) - call_result;
  packed_word_bits = 0u;
  scaled_index = saved_loaded_word * (shifted_bits + 1) + call_result + 2;
  if ( scaled_index >= 0 && call_result_2 >= 0 )
  {
    loaded_word_5 = *(_DWORD *)(a2 + 12);
    if ( scaled_index <= loaded_word_5 && call_result_2 <= loaded_word_5 - scaled_index )
    {
      *(_QWORD *)&packed_word_bits = *(_QWORD *)a2 + scaled_index;
      HIDWORD(packed_word_bits) = call_result_2;
    }
  }
  *a1 = packed_word_bits;
  return a1;
}

//----- (000000014017F5B0) ----------------------------------------------------
__int64            sub_14017F5B0(__int64 a1)
{
  __int64 packed_word_bits;
  int loaded_word;
  unsigned __int8 loaded_word_2;
  __int64 result;
  unsigned __int8 loaded_word_3;
  unsigned __int8 loaded_word_4;
  __int64 saved_packed_word_bits;
  int integer_sum;
  int loaded_word_5;
  unsigned __int8 loaded_word_6;

  packed_word_bits = *(int *)(a1 + 8);
  loaded_word = *(_DWORD *)(a1 + 12);
  if ( (int)packed_word_bits < loaded_word )
  {
    loaded_word_2 = *(_BYTE *)(packed_word_bits + *(_QWORD *)a1);
    LODWORD(packed_word_bits) = packed_word_bits + 1;
    *(_DWORD *)(a1 + 8) = packed_word_bits;
  }
  else
  {
    loaded_word_2 = 0;
  }
  if ( (unsigned int)loaded_word_2 - 32 <= 0xD6 )
    return (unsigned int)loaded_word_2 - 139;
  if ( (unsigned int)loaded_word_2 - 247 > 3 )
  {
    if ( (unsigned int)loaded_word_2 - 251 > 3 )
    {
      if ( loaded_word_2 == 28 )
      {
        if ( (int)packed_word_bits < loaded_word )
        {
          saved_packed_word_bits = (int)packed_word_bits;
          integer_sum = packed_word_bits + 1;
          loaded_word_5 = *(unsigned __int8 *)(saved_packed_word_bits + *(_QWORD *)a1);
          *(_DWORD *)(a1 + 8) = integer_sum;
          if ( integer_sum < loaded_word )
          {
            loaded_word_6 = *(_BYTE *)(integer_sum + *(_QWORD *)a1);
            *(_DWORD *)(a1 + 8) = integer_sum + 1;
            LODWORD(result) = loaded_word_6 | (loaded_word_5 << 8);
          }
          else
          {
            LODWORD(result) = loaded_word_5 << 8;
          }
          return (unsigned int)result;
        }
        else
        {
          return 0;
        }
      }
      else if ( loaded_word_2 == 29 )
      {
        return sub_14017F020(a1, 4u);
      }
      else
      {
        crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x49Bu);
        return 0;
      }
    }
    else if ( (int)packed_word_bits < loaded_word )
    {
      loaded_word_4 = *(_BYTE *)((int)packed_word_bits + *(_QWORD *)a1);
      *(_DWORD *)(a1 + 8) = packed_word_bits + 1;
      return 64148 - (loaded_word_2 << 8) - (unsigned int)loaded_word_4;
    }
    else
    {
      return 64148 - (loaded_word_2 << 8);
    }
  }
  else if ( (int)packed_word_bits < loaded_word )
  {
    loaded_word_3 = *(_BYTE *)((int)packed_word_bits + *(_QWORD *)a1);
    *(_DWORD *)(a1 + 8) = packed_word_bits + 1;
    return (loaded_word_2 << 8) + (unsigned int)loaded_word_3 - 63124;
  }
  else
  {
    return (loaded_word_2 << 8) - 63124;
  }
}

//----- (000000014017F720) ----------------------------------------------------
__int64            sub_14017F720(__int64 a1)
{
  __int64 result;
  unsigned __int8 loaded_word;
  int loaded_word_2;
  int iteration_count;
  int loaded_word_3;
  unsigned __int8 loaded_word_4;
  __int64 integer_sum;
  int saved_loaded_word;

  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12)
    || (result = *(_QWORD *)a1, loaded_word = *(_BYTE *)(*(int *)(a1 + 8) + *(_QWORD *)a1), loaded_word < 0x1Cu) )
  {
    crt_assert((char *)L"b0 >= 28", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4A1u);
    return sub_14017F5B0(a1);
  }
  if ( loaded_word != 30 )
    return sub_14017F5B0(a1);
  loaded_word_2 = *(_DWORD *)(a1 + 12);
  iteration_count = *(_DWORD *)(a1 + 8) + 1;
  if ( (iteration_count > loaded_word_2 || (loaded_word_3 = *(_DWORD *)(a1 + 12), iteration_count < 0))
    && ((result = crt_assert(
                    (char *)L"!(o > b->size || o < 0)",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                    0x45Cu),
         loaded_word_2 = *(_DWORD *)(a1 + 12),
         loaded_word_3 = loaded_word_2,
         iteration_count > loaded_word_2)
     || iteration_count < 0) )
  {
    *(_DWORD *)(a1 + 8) = loaded_word_2;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = iteration_count;
    if ( iteration_count < loaded_word_3 )
    {
      do
      {
        if ( iteration_count < loaded_word_3 )
        {
          integer_sum = iteration_count++;
          loaded_word_4 = *(_BYTE *)(integer_sum + *(_QWORD *)a1);
          *(_DWORD *)(a1 + 8) = iteration_count;
        }
        else
        {
          loaded_word_4 = 0;
        }
        saved_loaded_word = loaded_word_4;
        result = loaded_word_4 & 0xF;
      }
      while ( (_BYTE)result != 15 && (saved_loaded_word & 0xFFFFFFF0) != 0xF0 && iteration_count < loaded_word_2 );
    }
  }
  return result;
}

//----- (000000014017F820) ----------------------------------------------------
_OWORD *           sub_14017F820(_OWORD *a1, __int64 a2, int a3)
{
  int saved_loaded_word;
  int iteration_count;
  __int32 iteration_count_2;
  unsigned __int8 loaded_word;
  int saved_loaded_word_2;
  unsigned __int8 loaded_word_2;
  __int64 integer_sum;
  int shifted_bits;
  unsigned __int8 loaded_word_3;
  __int64 integer_sum_2;
  int saved_loaded_word_3;
  unsigned __int8 loaded_word_4;
  __int64 integer_sum_3;
  int shifted_bits_2;
  unsigned __int8 loaded_word_5;
  __int64 integer_sum_4;
  int saved_loaded_word_4;
  unsigned __int8 loaded_word_6;
  __int64 integer_sum_5;
  int saved_loaded_word_5;
  unsigned __int8 loaded_word_7;
  __int64 integer_sum_6;
  int shifted_bits_3;
  int integer_sum_7;
  unsigned __int8 loaded_word_8;
  __m128i masked_bits;
  __int128 masked_bits_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017F820[64];
#define saved_masked_bits (*(__m128i (*))(void *)(sr_frame_14017F820 + 0)) /* [rsp+20h] */
#define loaded_word_9 (*(__int128 (*))(void *)(sr_frame_14017F820 + 16)) /* [rsp+30h] */
#define packed_vector (*(__int128 (*))(void *)(sr_frame_14017F820 + 32)) /* [rsp+40h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_14017F820 + 48)) /* [rsp+50h] */

  saved_loaded_word = -1;
  saved_masked_bits = *(__m128i_u *)(a2 + 144);
  if ( SR_VEC_READ_LANES(128, _mm_srli_si128(saved_masked_bits, 8), i32)[1] < 0 )
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  if ( SR_VEC_LANES(128, saved_masked_bits, i32)[3] < 0 )
  {
    iteration_count_2 = SR_VEC_LANES(128, saved_masked_bits, i32)[3];
LABEL_35:
    integer_sum_7 = iteration_count_2 + a3;
    if ( integer_sum_7 > SR_VEC_LANES(128, saved_masked_bits, i32)[3] || integer_sum_7 < 0 )
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( integer_sum_7 > SR_VEC_LANES(128, saved_masked_bits, i32)[3] || integer_sum_7 < 0 || integer_sum_7 >= SR_VEC_LANES(128, saved_masked_bits, i32)[3] )
      loaded_word_8 = 0;
    else
      loaded_word_8 = *(_BYTE *)(integer_sum_7 + SR_VEC_LANES(128, saved_masked_bits, i64)[0]);
    saved_loaded_word = loaded_word_8;
    goto LABEL_44;
  }
  iteration_count = 0;
  iteration_count_2 = 0;
  if ( SR_VEC_LANES(128, saved_masked_bits, i32)[3] <= 0 )
    goto LABEL_35;
  iteration_count_2 = 1;
  if ( !*(_BYTE *)SR_VEC_LANES(128, saved_masked_bits, i64)[0] )
    goto LABEL_35;
  if ( *(_BYTE *)SR_VEC_LANES(128, saved_masked_bits, i64)[0] == 3 )
  {
    if ( SR_VEC_LANES(128, saved_masked_bits, i32)[3] > 1 )
    {
      iteration_count_2 = 2;
      loaded_word = *(_BYTE *)(SR_VEC_LANES(128, saved_masked_bits, i64)[0] + 1);
    }
    else
    {
      loaded_word = 0;
    }
    saved_loaded_word_2 = loaded_word;
    if ( iteration_count_2 < SR_VEC_LANES(128, saved_masked_bits, i32)[3] )
    {
      integer_sum = iteration_count_2++;
      loaded_word_2 = *(_BYTE *)(integer_sum + SR_VEC_LANES(128, saved_masked_bits, i64)[0]);
    }
    else
    {
      loaded_word_2 = 0;
    }
    shifted_bits = loaded_word_2 | (saved_loaded_word_2 << 8);
    if ( iteration_count_2 < SR_VEC_LANES(128, saved_masked_bits, i32)[3] )
    {
      integer_sum_2 = iteration_count_2++;
      loaded_word_3 = *(_BYTE *)(integer_sum_2 + SR_VEC_LANES(128, saved_masked_bits, i64)[0]);
    }
    else
    {
      loaded_word_3 = 0;
    }
    saved_loaded_word_3 = loaded_word_3;
    if ( iteration_count_2 < SR_VEC_LANES(128, saved_masked_bits, i32)[3] )
    {
      integer_sum_3 = iteration_count_2++;
      loaded_word_4 = *(_BYTE *)(integer_sum_3 + SR_VEC_LANES(128, saved_masked_bits, i64)[0]);
    }
    else
    {
      loaded_word_4 = 0;
    }
    shifted_bits_2 = loaded_word_4 | (saved_loaded_word_3 << 8);
    if ( shifted_bits )
    {
      while ( 1 )
      {
        if ( iteration_count_2 < SR_VEC_LANES(128, saved_masked_bits, i32)[3] )
        {
          integer_sum_4 = iteration_count_2++;
          loaded_word_5 = *(_BYTE *)(integer_sum_4 + SR_VEC_LANES(128, saved_masked_bits, i64)[0]);
        }
        else
        {
          loaded_word_5 = 0;
        }
        saved_loaded_word_4 = loaded_word_5;
        if ( iteration_count_2 < SR_VEC_LANES(128, saved_masked_bits, i32)[3] )
        {
          integer_sum_5 = iteration_count_2++;
          loaded_word_6 = *(_BYTE *)(integer_sum_5 + SR_VEC_LANES(128, saved_masked_bits, i64)[0]);
        }
        else
        {
          loaded_word_6 = 0;
        }
        saved_loaded_word_5 = loaded_word_6;
        if ( iteration_count_2 < SR_VEC_LANES(128, saved_masked_bits, i32)[3] )
        {
          integer_sum_6 = iteration_count_2++;
          loaded_word_7 = *(_BYTE *)(integer_sum_6 + SR_VEC_LANES(128, saved_masked_bits, i64)[0]);
        }
        else
        {
          loaded_word_7 = 0;
        }
        shifted_bits_3 = loaded_word_7 | (saved_loaded_word_5 << 8);
        if ( a3 >= shifted_bits_2 && a3 < shifted_bits_3 )
          break;
        ++iteration_count;
        shifted_bits_2 = shifted_bits_3;
        if ( iteration_count >= shifted_bits )
          goto LABEL_44;
      }
      saved_loaded_word = saved_loaded_word_4;
    }
  }
LABEL_44:
  saved_masked_bits = *(__m128i_u *)(a2 + 128);
  masked_bits = *(__m128i_u *)sub_14017F410(&packed_vector, (__int64)&saved_masked_bits, saved_loaded_word);
  loaded_word_9 = *(_OWORD *)(a2 + 64);
  saved_masked_bits = masked_bits;
  masked_bits_2 = *(_OWORD *)sub_140180F10((__int64)scratch_buffer, (__int64)&loaded_word_9, (__int64)&saved_masked_bits);
  *a1 = masked_bits_2;
  return a1;
}
#undef saved_masked_bits
#undef loaded_word_9
#undef packed_vector
#undef scratch_buffer

//----- (000000014017FA30) ----------------------------------------------------
__int64            sub_14017FA30(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int integer_sum;
  __int64 record_word_offset;
  __int64 scaled_index;
  __int64 record_word_offset_2;

  integer_sum = a2;
  if ( a4 )
  {
    if ( a3 )
    {
      record_word_offset = 14LL * a2;
      *(_WORD *)(record_word_offset + a1) = (a7 + a9) >> 1;
      *(_BYTE *)(record_word_offset + a1 + 12) = 3;
      *(_WORD *)(record_word_offset + a1 + 4) = a9;
      *(_WORD *)(record_word_offset + a1 + 6) = a10;
      *(_WORD *)(record_word_offset + a1 + 2) = (a8 + a10) >> 1;
      integer_sum = a2 + 1;
    }
    scaled_index = 14LL * integer_sum;
    *(_WORD *)(scaled_index + a1) = a5;
    *(_WORD *)(scaled_index + a1 + 2) = a6;
    *(_WORD *)(scaled_index + a1 + 4) = a7;
    *(_BYTE *)(scaled_index + a1 + 12) = 3;
    *(_WORD *)(scaled_index + a1 + 6) = a8;
    return (unsigned int)(integer_sum + 1);
  }
  else
  {
    record_word_offset_2 = 14LL * a2;
    *(_WORD *)(record_word_offset_2 + a1) = a5;
    *(_WORD *)(record_word_offset_2 + a1 + 2) = a6;
    if ( a3 )
    {
      *(_WORD *)(record_word_offset_2 + a1 + 4) = a9;
      *(_WORD *)(record_word_offset_2 + a1 + 6) = a10;
      *(_BYTE *)(record_word_offset_2 + a1 + 12) = 3;
    }
    else
    {
      *(_BYTE *)(record_word_offset_2 + a1 + 12) = 2;
      *(_DWORD *)(record_word_offset_2 + a1 + 4) = 0;
    }
    return (unsigned int)(a2 + 1);
  }
}

//----- (000000014017FB20) ----------------------------------------------------
__int64            sub_14017FB20(float a1, float a2, unsigned int a3, __int64 a4)
{
  unsigned int running_total;
  float component_delta;
  __int64 input_value;
  float fmod_result;
  __int16 *running_total_2;
  __int64 remaining_count;
  char loaded_word;
  int loaded_word_2;
  int table_value;
  int loaded_word_3;
  int loaded_word_4;
  int table_value_2;
  int scaled_index;
  int scaled_index_2;
  int integer_difference;
  int table_value_3;
  int table_value_4;
  int table_value_5;
  int loaded_word_5;
  int loaded_word_6;
  int table_value_6;
  int saved_loaded_word;
  int table_value_7;
  int scaled_index_3;
  int scaled_index_4;
  float saved_loaded_word_2;
  float cached_table_value;
  int saved_loaded_word_3;
  int saved_loaded_word_4;
  int cached_table_value_2;
  int integer_difference_2;
  int masked_bits;
  int integer_difference_3;
  int integer_difference_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017FB20[64];
#define float_buffer (*(float (*)[2])(void *)(sr_frame_14017FB20 + 0)) /* [rsp+30h] */
#define float_buffer_2 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 8)) /* [rsp+38h] */
#define float_buffer_3 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 16)) /* [rsp+40h] */
#define float_word (*(__int64 (*))(void *)(sr_frame_14017FB20 + 24)) /* [rsp+48h] */
#define float_buffer_4 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 32)) /* [rsp+50h] */
#define float_buffer_5 (*(float (*)[6])(void *)(sr_frame_14017FB20 + 40)) /* [rsp+58h] */

  running_total = 0;
  component_delta = a2;
  input_value = a3;
  float_word = 1065353216;
  float_buffer_4[0] = a1;
  fmod_result = fmod(a2, 1.0);
  if ( fmod_result >= 0.0099999998 )
  {
    if ( fmod_result > 0.99000001 )
      component_delta = component_delta + -0.0099999998;
  }
  else
  {
    component_delta = component_delta + 0.0099999998;
  }
  float_buffer_4[1] = component_delta;
  if ( (int)input_value > 0 )
  {
    running_total_2 = (__int16 *)(a4 - 12);
    remaining_count = input_value;
    do
    {
      loaded_word = *((_BYTE *)running_total_2 + 24);
      if ( loaded_word == 2 )
      {
        loaded_word_2 = *running_total_2;
        table_value = running_total_2[7];
        loaded_word_3 = table_value;
        if ( loaded_word_2 < table_value )
          loaded_word_3 = *running_total_2;
        if ( component_delta > (float)loaded_word_3 )
        {
          loaded_word_4 = *running_total_2;
          if ( loaded_word_2 < table_value )
            loaded_word_4 = running_total_2[7];
          if ( component_delta < (float)loaded_word_4 )
          {
            table_value_2 = running_total_2[6];
            scaled_index = *(running_total_2 - 1);
            scaled_index_2 = table_value_2;
            if ( scaled_index < table_value_2 )
              scaled_index_2 = *(running_total_2 - 1);
            if ( a1 > (float)scaled_index_2
              && (float)((float)((float)((float)(component_delta - (float)loaded_word_2) / (float)(table_value - loaded_word_2)) * (float)(table_value_2 - scaled_index))
                       + (float)scaled_index) < a1 )
            {
              integer_difference = -1;
              if ( loaded_word_2 < table_value )
                integer_difference = 1;
              running_total += integer_difference;
            }
          }
        }
      }
      else if ( loaded_word == 3 )
      {
        table_value_3 = running_total_2[9];
        table_value_4 = running_total_2[7];
        table_value_5 = table_value_3;
        loaded_word_5 = *running_total_2;
        loaded_word_6 = table_value_4;
        table_value_6 = running_total_2[8];
        saved_loaded_word = loaded_word_5;
        table_value_7 = running_total_2[6];
        scaled_index_3 = *(running_total_2 - 1);
        scaled_index_4 = table_value_7;
        if ( table_value_6 < table_value_7 )
          scaled_index_4 = running_total_2[8];
        if ( scaled_index_3 < scaled_index_4 )
          scaled_index_4 = *(running_total_2 - 1);
        if ( table_value_3 < table_value_4 )
          loaded_word_6 = running_total_2[9];
        if ( loaded_word_5 < loaded_word_6 )
          loaded_word_6 = *running_total_2;
        if ( table_value_3 < table_value_4 )
          table_value_5 = running_total_2[7];
        if ( loaded_word_5 < table_value_5 )
          saved_loaded_word = table_value_5;
        if ( component_delta > (float)loaded_word_6 && component_delta < (float)saved_loaded_word && a1 > (float)scaled_index_4 )
        {
          saved_loaded_word_2 = (float)loaded_word_5;
          cached_table_value = (float)table_value_3;
          float_buffer_3[0] = (float)scaled_index_3;
          float_buffer_3[1] = (float)loaded_word_5;
          float_buffer_2[0] = (float)table_value_6;
          float_buffer_2[1] = (float)table_value_3;
          float_buffer[0] = (float)table_value_7;
          float_buffer[1] = (float)table_value_4;
          if ( (float)scaled_index_3 == (float)table_value_6 && saved_loaded_word_2 == cached_table_value || (float)table_value_6 == (float)table_value_7 && cached_table_value == (float)table_value_4 )
          {
            saved_loaded_word_3 = table_value_4;
            if ( loaded_word_5 < table_value_4 )
              saved_loaded_word_3 = loaded_word_5;
            if ( component_delta > (float)saved_loaded_word_3 )
            {
              saved_loaded_word_4 = loaded_word_5;
              if ( loaded_word_5 < table_value_4 )
                saved_loaded_word_4 = table_value_4;
              if ( component_delta < (float)saved_loaded_word_4 )
              {
                cached_table_value_2 = table_value_7;
                if ( scaled_index_3 < table_value_7 )
                  cached_table_value_2 = scaled_index_3;
                if ( a1 > (float)cached_table_value_2
                  && (float)((float)((float)((float)(component_delta - saved_loaded_word_2) / (float)(table_value_4 - loaded_word_5)) * (float)(table_value_7 - scaled_index_3)) + (float)scaled_index_3) < a1 )
                {
                  integer_difference_2 = -1;
                  if ( loaded_word_5 < table_value_4 )
                    integer_difference_2 = 1;
                  running_total += integer_difference_2;
                }
              }
            }
          }
          else
          {
            masked_bits = sub_1401827E0(float_buffer_4, (float *)&float_word, float_buffer_3, float_buffer_2, float_buffer, float_buffer_5);
            if ( masked_bits >= 1 && float_buffer_5[0] < 0.0 )
            {
              integer_difference_3 = 1;
              if ( float_buffer_5[1] < 0.0 )
                integer_difference_3 = -1;
              running_total += integer_difference_3;
            }
            if ( masked_bits >= 2 && float_buffer_5[2] < 0.0 )
            {
              integer_difference_4 = 1;
              if ( float_buffer_5[3] < 0.0 )
                integer_difference_4 = -1;
              running_total += integer_difference_4;
            }
          }
        }
      }
      running_total_2 += 7;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return running_total;
}
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_word
#undef float_buffer_4
#undef float_buffer_5

//----- (000000014017FF00) ----------------------------------------------------
__int64            sub_14017FF00(__int64 a1)
{
  float weighted_sum;
  int loaded_word;
  int saved_weighted_sum;
  __int64 loaded_word_2;
  __int64 result;

  weighted_sum = *(float *)(a1 + 8);
  if ( weighted_sum != *(float *)(a1 + 16) || *(float *)(a1 + 20) != *(float *)(a1 + 12) )
  {
    loaded_word = (int)*(float *)(a1 + 12);
    saved_weighted_sum = (int)weighted_sum;
    if ( *(_DWORD *)a1 )
    {
      if ( saved_weighted_sum > *(_DWORD *)(a1 + 28) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 28) = saved_weighted_sum;
      if ( loaded_word > *(_DWORD *)(a1 + 36) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 36) = loaded_word;
      if ( saved_weighted_sum < *(_DWORD *)(a1 + 24) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 24) = saved_weighted_sum;
      if ( loaded_word < *(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 32) = loaded_word;
      ++*(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 4) = 1;
    }
    else
    {
      loaded_word_2 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
      *(_WORD *)(loaded_word_2 + 2) = loaded_word;
      *(_DWORD *)(loaded_word_2 + 4) = 0;
      *(_BYTE *)(loaded_word_2 + 12) = 2;
      *(_WORD *)loaded_word_2 = saved_weighted_sum;
      *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = 0;
      result = *(_QWORD *)(a1 + 40);
      *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + result + 10) = 0;
    }
  }
  return result;
}

//----- (000000014017FFC0) ----------------------------------------------------
void            sub_14017FFC0(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float weighted_sum;
  float weighted_sum_2;
  float component_sum;

  weighted_sum = a2 + *(float *)(a1 + 16);
  weighted_sum_2 = a3 + *(float *)(a1 + 20);
  component_sum = (float)(weighted_sum + a4) + a6;
  *(float *)(a1 + 16) = component_sum;
  *(float *)(a1 + 20) = (float)(weighted_sum_2 + a5) + a7;
  sub_140180200(
    a1,
    4,
    (int)component_sum,
    (int)(float)((float)(weighted_sum_2 + a5) + a7),
    (int)weighted_sum,
    (int)weighted_sum_2,
    (int)(float)(weighted_sum + a4),
    (int)(float)(weighted_sum_2 + a5));
}
//----- (0000000140180060) ----------------------------------------------------
__int64            sub_140180060(__int64 a1, float a2, float a3)
{
  bool comparison_result;
  float weighted_sum;
  float weighted_sum_2;
  int saved_weighted_sum;
  int saved_weighted_sum_2;
  __int64 loaded_word;
  __int64 result;

  comparison_result = *(_DWORD *)a1 == 0;
  weighted_sum = a2 + *(float *)(a1 + 16);
  weighted_sum_2 = a3 + *(float *)(a1 + 20);
  *(float *)(a1 + 16) = weighted_sum;
  *(float *)(a1 + 20) = weighted_sum_2;
  saved_weighted_sum = (int)weighted_sum_2;
  saved_weighted_sum_2 = (int)weighted_sum;
  if ( comparison_result )
  {
    loaded_word = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
    *(_WORD *)(loaded_word + 2) = saved_weighted_sum;
    *(_DWORD *)(loaded_word + 4) = 0;
    *(_BYTE *)(loaded_word + 12) = 2;
    *(_WORD *)loaded_word = saved_weighted_sum_2;
    *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = 0;
    result = *(_QWORD *)(a1 + 40);
    *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + result + 10) = 0;
  }
  else
  {
    if ( saved_weighted_sum_2 > *(_DWORD *)(a1 + 28) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 28) = saved_weighted_sum_2;
    if ( saved_weighted_sum > *(_DWORD *)(a1 + 36) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 36) = saved_weighted_sum;
    if ( saved_weighted_sum_2 < *(_DWORD *)(a1 + 24) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 24) = saved_weighted_sum_2;
    if ( saved_weighted_sum < *(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 32) = saved_weighted_sum;
    ++*(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 4) = 1;
  }
  return result;
}

//----- (0000000140180120) ----------------------------------------------------
__int64            sub_140180120(__int64 a1, float a2, float a3)
{
  __int64 result;
  __int64 unrecovered_register_value;
  bool comparison_result;
  float weighted_sum;
  float weighted_sum_2;
  int saved_weighted_sum;
  int saved_weighted_sum_2;
  __int64 loaded_word;

  result = sub_14017FF00(a1);
  comparison_result = *(_DWORD *)unrecovered_register_value == 0;
  weighted_sum = a2 + *(float *)(unrecovered_register_value + 16);
  weighted_sum_2 = a3 + *(float *)(unrecovered_register_value + 20);
  *(float *)(unrecovered_register_value + 16) = weighted_sum;
  *(float *)(unrecovered_register_value + 8) = weighted_sum;
  *(float *)(unrecovered_register_value + 20) = weighted_sum_2;
  *(float *)(unrecovered_register_value + 12) = weighted_sum_2;
  saved_weighted_sum = (int)weighted_sum_2;
  saved_weighted_sum_2 = (int)weighted_sum;
  if ( comparison_result )
  {
    loaded_word = *(_QWORD *)(unrecovered_register_value + 40) + 14LL * *(int *)(unrecovered_register_value + 48);
    *(_WORD *)(loaded_word + 2) = saved_weighted_sum;
    *(_DWORD *)(loaded_word + 4) = 0;
    *(_BYTE *)(loaded_word + 12) = 1;
    *(_WORD *)loaded_word = saved_weighted_sum_2;
    *(_WORD *)(14LL * *(int *)(unrecovered_register_value + 48) + *(_QWORD *)(unrecovered_register_value + 40) + 8) = 0;
    result = *(_QWORD *)(unrecovered_register_value + 40);
    *(_WORD *)(14LL * (int)(*(_DWORD *)(unrecovered_register_value + 48))++ + result + 10) = 0;
  }
  else
  {
    if ( saved_weighted_sum_2 > *(_DWORD *)(unrecovered_register_value + 28) || !*(_DWORD *)(unrecovered_register_value + 4) )
      *(_DWORD *)(unrecovered_register_value + 28) = saved_weighted_sum_2;
    if ( saved_weighted_sum > *(_DWORD *)(unrecovered_register_value + 36) || !*(_DWORD *)(unrecovered_register_value + 4) )
      *(_DWORD *)(unrecovered_register_value + 36) = saved_weighted_sum;
    if ( saved_weighted_sum_2 < *(_DWORD *)(unrecovered_register_value + 24) || !*(_DWORD *)(unrecovered_register_value + 4) )
      *(_DWORD *)(unrecovered_register_value + 24) = saved_weighted_sum_2;
    if ( saved_weighted_sum < *(_DWORD *)(unrecovered_register_value + 32) || !*(_DWORD *)(unrecovered_register_value + 4) )
      *(_DWORD *)(unrecovered_register_value + 32) = saved_weighted_sum;
    ++*(_DWORD *)(unrecovered_register_value + 48);
    *(_DWORD *)(unrecovered_register_value + 4) = 1;
  }
  return result;
}

//----- (0000000140180200) ----------------------------------------------------
void            sub_140180200(__int64 a1, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  int loaded_word_4;
  __int64 loaded_word_5;

  if ( *(_DWORD *)a1 )
  {
    loaded_word = *(_DWORD *)(a1 + 28);
    if ( a3 > loaded_word || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 28) = a3;
      loaded_word = a3;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 36);
    if ( a4 > loaded_word_2 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 36) = a4;
      loaded_word_2 = a4;
    }
    loaded_word_3 = *(_DWORD *)(a1 + 24);
    if ( a3 < loaded_word_3 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 24) = a3;
      loaded_word_3 = a3;
    }
    loaded_word_4 = *(_DWORD *)(a1 + 32);
    if ( a4 < loaded_word_4 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 32) = a4;
      loaded_word_4 = a4;
    }
    *(_DWORD *)(a1 + 4) = 1;
    if ( a2 == 4 )
    {
      if ( a5 > loaded_word )
      {
        *(_DWORD *)(a1 + 28) = a5;
        loaded_word = a5;
      }
      if ( a6 > loaded_word_2 )
      {
        *(_DWORD *)(a1 + 36) = a6;
        loaded_word_2 = a6;
      }
      if ( a5 < loaded_word_3 )
      {
        *(_DWORD *)(a1 + 24) = a5;
        loaded_word_3 = a5;
      }
      if ( a6 < loaded_word_4 )
      {
        *(_DWORD *)(a1 + 32) = a6;
        loaded_word_4 = a6;
      }
      if ( a7 > loaded_word )
        *(_DWORD *)(a1 + 28) = a7;
      if ( a8 > loaded_word_2 )
        *(_DWORD *)(a1 + 36) = a8;
      if ( a7 < loaded_word_3 )
        *(_DWORD *)(a1 + 24) = a7;
      ++*(_DWORD *)(a1 + 48);
      if ( a8 < loaded_word_4 )
        *(_DWORD *)(a1 + 32) = a8;
    }
    else
    {
      ++*(_DWORD *)(a1 + 48);
    }
  }
  else
  {
    loaded_word_5 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
    *(_WORD *)(loaded_word_5 + 4) = a5;
    *(_WORD *)(loaded_word_5 + 6) = a6;
    *(_BYTE *)(loaded_word_5 + 12) = a2;
    *(_WORD *)loaded_word_5 = a3;
    *(_WORD *)(loaded_word_5 + 2) = a4;
    *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = a7;
    *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + *(_QWORD *)(a1 + 40) + 10) = a8;
  }
}

//----- (0000000140180360) ----------------------------------------------------
float            sub_140180360(float a1)
{
  float pow_result;

  if ( a1 >= 0.0 )
    return pow(a1, 0.3333333432674408);
  pow_result = pow((float)-a1, 0.3333333432674408);
  return -pow_result;
}

//----- (00000001401803B0) ----------------------------------------------------
_OWORD *           sub_1401803B0(_OWORD *a1, __int64 a2, int a3)
{
  int loaded_word;
  int saved_loaded_word;
  int iteration_count;
  int loaded_word_2;
  unsigned __int8 loaded_word_3;
  int loaded_word_4;
  int saved_loaded_word_2;
  int iteration_count_2;
  char loaded_word_5;
  __int64 integer_sum;
  int saved_iteration_count;
  int combined_flags;
  __int64 integer_sum_2;
  int saved_iteration_count_2;
  unsigned __int8 loaded_word_6;
  __int64 cached_iteration_count;
  __int64 loaded_word_7;
  int integer_difference;
  __int128 packed_word_bits;

  loaded_word = *(_DWORD *)(a2 + 12);
  if ( loaded_word < 0 )
  {
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    loaded_word = *(_DWORD *)(a2 + 12);
  }
  saved_loaded_word = 0;
  if ( loaded_word < 0 )
    saved_loaded_word = loaded_word;
  *(_DWORD *)(a2 + 8) = saved_loaded_word;
  if ( saved_loaded_word >= loaded_word )
  {
LABEL_38:
    packed_word_bits = 0u;
    if ( loaded_word >= 0 )
    {
      loaded_word_7 = *(_QWORD *)a2;
LABEL_40:
      *(_QWORD *)&packed_word_bits = loaded_word_7;
    }
  }
  else
  {
    iteration_count = saved_loaded_word;
    while ( 1 )
    {
      while ( (unsigned __int8)sub_14017F0C0(a2) >= 0x1Cu )
      {
        loaded_word_2 = *(_DWORD *)(a2 + 12);
        if ( iteration_count >= loaded_word_2 || (loaded_word_3 = *(_BYTE *)(iteration_count + *(_QWORD *)a2), loaded_word_3 < 0x1Cu) )
        {
          crt_assert((char *)L"b0 >= 28", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4A1u);
        }
        else if ( loaded_word_3 == 30 )
        {
          if ( (++iteration_count > loaded_word_2 || (loaded_word_4 = *(_DWORD *)(a2 + 12), iteration_count < 0))
            && ((crt_assert(
                   (char *)L"!(o > b->size || o < 0)",
                   (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                   0x45Cu),
                 loaded_word_4 = *(_DWORD *)(a2 + 12),
                 loaded_word_2 = loaded_word_4,
                 iteration_count > loaded_word_4)
             || iteration_count < 0) )
          {
            iteration_count = *(_DWORD *)(a2 + 12);
            *(_DWORD *)(a2 + 8) = loaded_word_4;
          }
          else
          {
            *(_DWORD *)(a2 + 8) = iteration_count;
            if ( iteration_count < loaded_word_2 )
            {
              saved_loaded_word_2 = loaded_word_2;
              iteration_count_2 = iteration_count;
              do
              {
                if ( iteration_count_2 < loaded_word_2 )
                {
                  saved_loaded_word_2 = loaded_word_4;
                  integer_sum = iteration_count_2++;
                  loaded_word_5 = *(_BYTE *)(integer_sum + *(_QWORD *)a2);
                  *(_DWORD *)(a2 + 8) = iteration_count_2;
                }
                else
                {
                  loaded_word_5 = 0;
                }
                iteration_count = iteration_count_2;
              }
              while ( (loaded_word_5 & 0xF) != 0xF && (loaded_word_5 & 0xF0) != 0xF0 && iteration_count_2 < saved_loaded_word_2 );
            }
          }
          continue;
        }
        sub_14017F5B0(a2);
        iteration_count = *(_DWORD *)(a2 + 8);
      }
      loaded_word = *(_DWORD *)(a2 + 12);
      saved_iteration_count = iteration_count;
      if ( iteration_count < loaded_word )
      {
        integer_sum_2 = iteration_count++;
        LOBYTE(combined_flags) = *(_BYTE *)(integer_sum_2 + *(_QWORD *)a2);
        *(_DWORD *)(a2 + 8) = iteration_count;
      }
      else
      {
        LOBYTE(combined_flags) = 0;
      }
      combined_flags = (unsigned __int8)combined_flags;
      saved_iteration_count_2 = iteration_count;
      if ( (unsigned __int8)combined_flags == 12 )
      {
        if ( iteration_count < loaded_word )
        {
          ++iteration_count;
          cached_iteration_count = saved_iteration_count_2;
          saved_iteration_count_2 = iteration_count;
          loaded_word_6 = *(_BYTE *)(cached_iteration_count + *(_QWORD *)a2);
          *(_DWORD *)(a2 + 8) = iteration_count;
        }
        else
        {
          loaded_word_6 = 0;
        }
        combined_flags = loaded_word_6 | 0x100;
      }
      if ( combined_flags == a3 )
        break;
      saved_loaded_word = saved_iteration_count_2;
      if ( saved_iteration_count_2 >= loaded_word )
        goto LABEL_38;
    }
    integer_difference = saved_iteration_count - saved_loaded_word;
    packed_word_bits = 0u;
    if ( saved_loaded_word >= 0 && integer_difference >= 0 && saved_loaded_word <= loaded_word && integer_difference <= loaded_word - saved_loaded_word )
    {
      loaded_word_7 = *(_QWORD *)a2 + saved_loaded_word;
      HIDWORD(packed_word_bits) = integer_difference;
      goto LABEL_40;
    }
  }
  *a1 = packed_word_bits;
  return a1;
}

//----- (00000001401805D0) ----------------------------------------------------
__int64            sub_1401805D0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 input_value;
  __int64 result;
  __int64 cached_input_value;
  __int64 iteration_count;
  __int128 loaded_word;

  input_value = a3;
  result = (__int64)sub_1401803B0(&loaded_word, a1, a2);
  cached_input_value = input_value;
  loaded_word = *(_OWORD *)result;
  if ( (int)input_value > 0 )
  {
    iteration_count = 0;
    do
    {
      result = HIDWORD(loaded_word);
      if ( SDWORD2(loaded_word) >= SHIDWORD(loaded_word) )
        break;
      result = sub_14017F5B0((__int64)&loaded_word);
      *(_DWORD *)(a4 + 4 * iteration_count++) = result;
    }
    while ( iteration_count < cached_input_value );
  }
  return result;
}

//----- (0000000140180640) ----------------------------------------------------
void            sub_140180640(__int64 a1, __int64 a2, int a3, float *a4, float a5)
{
  float *scaled_value;
  float component_sum;
  float source_component_w;
  float source_component_z;
  float component_delta;
  float component_delta_2;
  float component_sum_2;
  float saved_component_delta;
  float saved_source_component_z;
  float combined_products;
  int saved_combined_products;
  float component_delta_3;
  float component_delta_4;
  float saved_combined_products_2;
  int saved_combined_products_3;
  int integer_sum;
  __int64 record_byte_offset;
  float component_delta_5;
  float source_float_5;
  float scaled_value_2;
  float weighted_sum;
  float product_difference;
  float *record_byte_offset_2;
  unsigned __int64 remaining_count;
  float scaled_value_3;
  float component_sum_3;
  float component_sum_4;
  float component_sum_5;
  float component_sum_6;
  float component_sum_7;
  float component_sum_8;
  float component_sum_9;
  float weighted_sum_2;
  float combined_products_2;
  int iteration_count;
  float scaled_ratio;
  int integer_sum_2;
  float saved_iteration_count;
  float saved_iteration_count_2;
  float combined_products_3;
  bool comparison_result;
  bool comparison_result_2;

  if ( a4 )
  {
    scaled_value = a4;
    component_sum = a5 + 1.0;
    while ( 1 )
    {
      if ( a5 > scaled_value[7] )
        crt_assert((char *)L"e->ey >= y_top", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xB92u);
      source_component_w = scaled_value[3];
      source_component_z = scaled_value[2];
      if ( source_component_w == 0.0 )
      {
        if ( source_component_z < (float)a3 )
        {
          if ( source_component_z < 0.0 )
          {
            sub_140181350(a2 - 4, 0, scaled_value, source_component_z, a5, source_component_z, component_sum);
          }
          else
          {
            sub_140181350(a1, (int)source_component_z, scaled_value, source_component_z, a5, source_component_z, component_sum);
            sub_140181350(a2 - 4, (int)source_component_z + 1, scaled_value, source_component_z, a5, source_component_z, component_sum);
          }
        }
        goto LABEL_63;
      }
      component_delta = scaled_value[6];
      component_delta_2 = scaled_value[4];
      component_sum_2 = source_component_w + source_component_z;
      if ( component_delta > component_sum || (saved_component_delta = scaled_value[7], saved_component_delta < a5) )
      {
        crt_assert(
          (char *)L"e->sy <= y_bottom && e->ey >= y_top",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0xBA5u);
        component_delta = scaled_value[6];
        saved_component_delta = scaled_value[7];
      }
      if ( component_delta <= a5 )
      {
        saved_source_component_z = source_component_z;
        component_delta = a5;
      }
      else
      {
        saved_source_component_z = (float)((float)(component_delta - a5) * source_component_w) + source_component_z;
      }
      if ( saved_component_delta >= component_sum )
      {
        combined_products = source_component_w + source_component_z;
        saved_component_delta = a5 + 1.0;
      }
      else
      {
        combined_products = (float)((float)(saved_component_delta - a5) * source_component_w) + source_component_z;
      }
      if ( saved_source_component_z >= 0.0 && combined_products >= 0.0 && saved_source_component_z < (float)a3 && combined_products < (float)a3 )
      {
        saved_combined_products = (int)saved_source_component_z;
        if ( SLODWORD(saved_source_component_z) == SLODWORD(combined_products) )
        {
          component_delta_3 = saved_component_delta - component_delta;
          if ( saved_combined_products < 0 || saved_combined_products >= a3 )
            crt_assert(
              (char *)L"x >= 0 && x < len",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xBC1u);
          *(float *)(a1 + 4LL * saved_combined_products) = (float)((float)((float)(1.0
                                                             - (float)((float)((float)(combined_products - (float)saved_combined_products)
                                                                             + (float)(saved_source_component_z - (float)saved_combined_products))
                                                                     * 0.5))
                                                     * scaled_value[5])
                                             * component_delta_3)
                                     + *(float *)(a1 + 4LL * saved_combined_products);
          *(float *)(a2 + 4LL * saved_combined_products) = (float)(component_delta_3 * scaled_value[5]) + *(float *)(a2 + 4LL * saved_combined_products);
        }
        else
        {
          if ( saved_source_component_z > combined_products )
          {
            component_delta_2 = -component_delta_2;
            source_component_z = source_component_w + source_component_z;
            component_delta_4 = component_sum - (float)(component_delta - a5);
            component_delta = component_sum - (float)(saved_component_delta - a5);
            saved_component_delta = component_delta_4;
            saved_combined_products_2 = combined_products;
            combined_products = saved_source_component_z;
            saved_source_component_z = saved_combined_products_2;
          }
          saved_combined_products_3 = (int)combined_products;
          integer_sum = (int)saved_source_component_z + 1;
          record_byte_offset = integer_sum;
          component_delta_5 = (float)integer_sum - source_component_z;
          source_float_5 = scaled_value[5];
          scaled_value_2 = source_float_5 * component_delta_2;
          weighted_sum = (float)(component_delta_5 * component_delta_2) + a5;
          product_difference = (float)(weighted_sum - component_delta) * source_float_5;
          *(float *)(a1 + 4LL * (int)saved_source_component_z) = (float)((float)(0.5 - (float)((float)(saved_source_component_z - (float)(int)saved_source_component_z) * 0.5)) * product_difference)
                                          + *(float *)(a1 + 4LL * (int)saved_source_component_z);
          if ( integer_sum < (__int64)(int)combined_products )
          {
            if ( saved_combined_products_3 - (__int64)integer_sum < 4 )
              goto LABEL_66;
            record_byte_offset_2 = (float *)(a1 + 8 + 4LL * integer_sum);
            remaining_count = ((unsigned __int64)(saved_combined_products_3 - (__int64)integer_sum - 4) >> 2) + 1;
            scaled_value_3 = scaled_value_2 * 0.5;
            record_byte_offset += 4 * remaining_count;
            do
            {
              component_sum_3 = scaled_value_3 + product_difference;
              component_sum_4 = product_difference + scaled_value_2;
              *(record_byte_offset_2 - 2) = component_sum_3 + *(record_byte_offset_2 - 2);
              component_sum_5 = scaled_value_3 + component_sum_4;
              component_sum_6 = component_sum_4 + scaled_value_2;
              component_sum_7 = scaled_value_3 + component_sum_6;
              component_sum_8 = component_sum_6 + scaled_value_2;
              *(record_byte_offset_2 - 1) = component_sum_5 + *(record_byte_offset_2 - 1);
              component_sum_9 = scaled_value_3 + component_sum_8;
              product_difference = component_sum_8 + scaled_value_2;
              *record_byte_offset_2 = component_sum_7 + *record_byte_offset_2;
              record_byte_offset_2[1] = component_sum_9 + record_byte_offset_2[1];
              record_byte_offset_2 += 4;
              --remaining_count;
            }
            while ( remaining_count );
            if ( record_byte_offset < saved_combined_products_3 )
            {
LABEL_66:
              do
              {
                weighted_sum_2 = (float)(scaled_value_2 * 0.5) + product_difference;
                product_difference = product_difference + scaled_value_2;
                *(float *)(a1 + 4 * record_byte_offset) = weighted_sum_2 + *(float *)(a1 + 4 * record_byte_offset);
                ++record_byte_offset;
              }
              while ( record_byte_offset < saved_combined_products_3 );
            }
          }
          combined_products_2 = weighted_sum + (float)((float)(saved_combined_products_3 - (int)saved_source_component_z - 1) * component_delta_2);
          if ( fabs(product_difference) > 1.01 )
            crt_assert(
              (char *)L"fabs(area) <= 1.01f",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xBE6u);
          *(float *)(a1 + 4LL * saved_combined_products_3) = (float)((float)((float)((float)(1.0 - (float)((float)(combined_products - (float)saved_combined_products_3) * 0.5))
                                                             * source_float_5)
                                                     * (float)(saved_component_delta - combined_products_2))
                                             + product_difference)
                                     + *(float *)(a1 + 4LL * saved_combined_products_3);
          *(float *)(a2 + 4LL * saved_combined_products_3) = (float)((float)(saved_component_delta - component_delta) * source_float_5) + *(float *)(a2 + 4LL * saved_combined_products_3);
        }
        goto LABEL_63;
      }
      iteration_count = 0;
      if ( a3 > 0 )
        break;
LABEL_63:
      scaled_value = *(float **)scaled_value;
      if ( !scaled_value )
        return;
    }
    scaled_ratio = 1.0 / source_component_w;
    while ( 1 )
    {
      integer_sum_2 = iteration_count + 1;
      saved_iteration_count = (float)iteration_count;
      saved_iteration_count_2 = (float)(iteration_count + 1);
      combined_products_3 = (float)((float)(saved_iteration_count_2 - source_component_z) * scaled_ratio) + a5;
      if ( source_component_z >= (float)iteration_count || component_sum_2 <= saved_iteration_count_2 )
        break;
      sub_140181350(a1, iteration_count, scaled_value, source_component_z, a5, (float)iteration_count, (float)((float)((float)iteration_count - source_component_z) * scaled_ratio) + a5);
      sub_140181350(
        a1,
        iteration_count,
        scaled_value,
        saved_iteration_count,
        (float)((float)((float)iteration_count - source_component_z) * scaled_ratio) + a5,
        (float)integer_sum_2,
        (float)((float)((float)integer_sum_2 - source_component_z) * scaled_ratio) + a5);
LABEL_62:
      sub_140181350(a1, iteration_count++, scaled_value, saved_iteration_count_2, combined_products_3, component_sum_2, component_sum);
      if ( integer_sum_2 >= a3 )
        goto LABEL_63;
    }
    if ( component_sum_2 < saved_iteration_count && source_component_z > saved_iteration_count_2 )
    {
      sub_140181350(a1, iteration_count, scaled_value, source_component_z, a5, (float)integer_sum_2, (float)((float)((float)integer_sum_2 - source_component_z) * scaled_ratio) + a5);
      sub_140181350(
        a1,
        iteration_count,
        scaled_value,
        saved_iteration_count_2,
        (float)((float)((float)integer_sum_2 - source_component_z) * scaled_ratio) + a5,
        (float)iteration_count,
        (float)((float)((float)iteration_count - source_component_z) * scaled_ratio) + a5);
LABEL_54:
      saved_iteration_count_2 = (float)iteration_count;
      combined_products_3 = (float)((float)((float)iteration_count - source_component_z) * scaled_ratio) + a5;
      goto LABEL_62;
    }
    if ( source_component_z >= saved_iteration_count )
    {
      comparison_result = component_sum_2 < saved_iteration_count;
    }
    else
    {
      comparison_result = component_sum_2 < saved_iteration_count;
      if ( component_sum_2 > saved_iteration_count )
      {
LABEL_53:
        sub_140181350(a1, iteration_count, scaled_value, source_component_z, a5, (float)iteration_count, (float)((float)((float)iteration_count - source_component_z) * scaled_ratio) + a5);
        goto LABEL_54;
      }
    }
    if ( !comparison_result || source_component_z <= saved_iteration_count )
    {
      if ( source_component_z >= saved_iteration_count_2 )
      {
        comparison_result_2 = component_sum_2 < saved_iteration_count_2;
      }
      else
      {
        comparison_result_2 = component_sum_2 < saved_iteration_count_2;
        if ( component_sum_2 > saved_iteration_count_2 )
        {
LABEL_57:
          sub_140181350(a1, iteration_count, scaled_value, source_component_z, a5, (float)integer_sum_2, (float)((float)((float)integer_sum_2 - source_component_z) * scaled_ratio) + a5);
          goto LABEL_62;
        }
      }
      if ( !comparison_result_2 || source_component_z <= saved_iteration_count_2 )
      {
        saved_iteration_count_2 = source_component_z;
        combined_products_3 = a5;
        goto LABEL_62;
      }
      goto LABEL_57;
    }
    goto LABEL_53;
  }
}

//----- (0000000140180D50) ----------------------------------------------------
__int64            sub_140180D50(__int64 a1, unsigned int a2, char *a3)
{
  __int64 input_value;
  unsigned int integer_sum;
  int iteration_count;
  int shifted_bits;
  __int64 scaled_index;

  input_value = a2;
  integer_sum = a2 + 12;
  iteration_count = 0;
  shifted_bits = *(unsigned __int8 *)(input_value + a1 + 5) + (*(unsigned __int8 *)(input_value + a1 + 4) << 8);
  if ( !shifted_bits )
    return 0;
  while ( 1 )
  {
    scaled_index = integer_sum + 16 * iteration_count;
    if ( *(unsigned __int8 *)(scaled_index + a1) == *a3
      && *(unsigned __int8 *)(scaled_index + a1 + 1) == a3[1]
      && *(unsigned __int8 *)(scaled_index + a1 + 2) == a3[2]
      && *(unsigned __int8 *)(scaled_index + a1 + 3) == a3[3] )
    {
      break;
    }
    if ( ++iteration_count >= shifted_bits )
      return 0;
  }
  return *(unsigned __int8 *)(scaled_index + a1 + 11)
       + ((*(unsigned __int8 *)(scaled_index + a1 + 10)
         + ((*(unsigned __int8 *)(scaled_index + a1 + 9) + (*(unsigned __int8 *)(scaled_index + a1 + 8) << 8)) << 8)) << 8);
}

//----- (0000000140180E10) ----------------------------------------------------
_QWORD *           sub_140180E10(_QWORD *a1, __int64 *a2, int a3)
{
  int loaded_word;
  int saved_loaded_word;
  int loaded_word_2;
  unsigned __int8 loaded_word_3;
  int integer_sum;
  __int64 cached_loaded_word;
  __int64 loaded_word_4;
  unsigned int shifted_bits;
  int selection_code;
  int integer_sum_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140180E10[32];
#define loaded_word_5 (*(__int128 (*))(void *)(sr_frame_140180E10 + 0)) /* [rsp+20h] */
#define packed_vector (*(__int128 (*))(void *)(sr_frame_140180E10 + 16)) /* [rsp+30h] */

  loaded_word = *((_DWORD *)a2 + 3);
  if ( loaded_word < 0 )
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  saved_loaded_word = 0;
  if ( loaded_word < 0 )
    saved_loaded_word = loaded_word;
  *((_DWORD *)a2 + 2) = saved_loaded_word;
  if ( saved_loaded_word < loaded_word )
  {
    integer_sum = saved_loaded_word + 1;
    cached_loaded_word = saved_loaded_word;
    loaded_word_4 = *a2;
    *((_DWORD *)a2 + 2) = integer_sum;
    loaded_word_2 = *(unsigned __int8 *)(cached_loaded_word + loaded_word_4);
    if ( integer_sum < loaded_word )
    {
      loaded_word_3 = *(_BYTE *)(integer_sum + loaded_word_4);
      *((_DWORD *)a2 + 2) = integer_sum + 1;
    }
    else
    {
      loaded_word_3 = 0;
    }
  }
  else
  {
    loaded_word_2 = 0;
    loaded_word_3 = 0;
  }
  shifted_bits = loaded_word_3 | (loaded_word_2 << 8);
  selection_code = 107;
  if ( shifted_bits < 0x846C )
  {
    if ( shifted_bits >= 0x4D8 )
      selection_code = 1131;
  }
  else
  {
    selection_code = 0x8000;
  }
  integer_sum_2 = selection_code + a3;
  if ( integer_sum_2 < 0 || integer_sum_2 >= (int)shifted_bits )
  {
    *a1 = 0;
    a1[1] = 0;
  }
  else
  {
    loaded_word_5 = *(_OWORD *)a2;
    *(_OWORD *)a1 = *sub_14017F410(&packed_vector, (__int64)&loaded_word_5, integer_sum_2);
  }
  return a1;
}
#undef loaded_word_5
#undef packed_vector

//----- (0000000140180F10) ----------------------------------------------------
__int64            sub_140180F10(__int64 a1, __int64 a2, __int64 a3)
{
  int masked_bits;
  __int64 iteration_count;
  int comparison_operand;
  int loaded_word;
  int saved_loaded_word;
  int loaded_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140180F10[80];
#define shidword_result (*(__int128 (*))(void *)(sr_frame_140180F10 + 0)) /* [rsp+20h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_140180F10 + 16)) /* [rsp+30h] */
#define selection_flag (*(__int64 (*))(void *)(sr_frame_140180F10 + 64)) /* [rsp+60h] */

  selection_flag = 0;
  masked_bits = 0;
  iteration_count = 0;
  shidword_result = *sub_1401803B0(&shidword_result, a3, 18);
  do
  {
    if ( SDWORD2(shidword_result) >= SHIDWORD(shidword_result) )
      break;
    *((_DWORD *)&selection_flag + iteration_count++) = sub_14017F5B0((__int64)&shidword_result);
  }
  while ( iteration_count < 2 );
  comparison_operand = HIDWORD(selection_flag);
  if ( !HIDWORD(selection_flag) || !(_DWORD)selection_flag )
    goto LABEL_20;
  shidword_result = 0u;
  if ( selection_flag >= 0 && (int)selection_flag >= 0 )
  {
    loaded_word = *(_DWORD *)(a2 + 12);
    if ( SHIDWORD(selection_flag) <= loaded_word && (int)selection_flag <= loaded_word - HIDWORD(selection_flag) )
    {
      HIDWORD(shidword_result) = selection_flag;
      *(_QWORD *)&shidword_result = *(_QWORD *)a2 + SHIDWORD(selection_flag);
    }
  }
  shidword_result = *sub_1401803B0(scratch_buffer, (__int64)&shidword_result, 19);
  if ( SDWORD2(shidword_result) < SHIDWORD(shidword_result) )
    masked_bits = sub_14017F5B0((__int64)&shidword_result);
  if ( masked_bits )
  {
    saved_loaded_word = masked_bits + comparison_operand;
    loaded_word_2 = *(_DWORD *)(a2 + 12);
    if ( saved_loaded_word > loaded_word_2 || saved_loaded_word < 0 )
    {
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      if ( saved_loaded_word > loaded_word_2 || saved_loaded_word < 0 )
        saved_loaded_word = loaded_word_2;
    }
    *(_DWORD *)(a2 + 8) = saved_loaded_word;
    *(_OWORD *)a1 = *sub_14017F1F0(scratch_buffer, a2);
  }
  else
  {
LABEL_20:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}
#undef shidword_result
#undef scratch_buffer
#undef selection_flag

//----- (0000000140181080) ----------------------------------------------------
__int64            sub_140181080(unsigned __int8 *a1, int a2, int a3, int a4, unsigned int a5)
{
  int input_value;
  __int64 integer_difference;
  unsigned __int64 byte_count;
  __int64 remaining_count;
  unsigned int remaining_amount;
  int element_index;
  unsigned __int8 *buffer_cursor;
  __int64 remaining_count_2;
  int loaded_word;
  __int64 masked_bits;
  unsigned __int8 *buffer_cursor_2;
  __int64 remaining_count_3;
  int loaded_word_2;
  __int64 masked_bits_2;
  unsigned __int8 *buffer_cursor_3;
  __int64 remaining_count_4;
  int loaded_word_3;
  __int64 masked_bits_3;
  unsigned __int8 *buffer_cursor_4;
  __int64 remaining_count_5;
  int loaded_word_4;
  __int64 masked_bits_4;
  unsigned __int8 *buffer_cursor_5;
  __int64 remaining_count_6;
  int loaded_word_5;
  __int64 masked_bits_5;
  __int64 iteration_count;
  __int64 remaining_count_7;
  unsigned __int8 *buffer_cursor_6;
  __int64 integer_sum;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140181080[64];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140181080 + 0)) /* [rsp+0h] */
#define input_value_2 (*(int (*))(void *)(sr_frame_140181080 + 32)) /* [rsp+20h] */
#define input_value_3 (*(__int64 (*))(void *)(sr_frame_140181080 + 40)) /* [rsp+28h] */
#define scratch_buffer (*(_QWORD (*)[2])(void *)(sr_frame_140181080 + 48)) /* [rsp+30h] */

  input_value_2 = a2;
  scratch_buffer[0] = 0;
  input_value = a2;
  integer_difference = (int)(a2 - a5);
  if ( a3 > 0 )
  {
    byte_count = a5;
    remaining_count = (unsigned int)a3;
    input_value_3 = a4;
    do
    {
      crt_memset((void *)(uintptr_t)(scratch_buffer), 0, byte_count);
      remaining_amount = 0;
      switch ( a5 )
      {
        case 2u:
          element_index = 0;
          if ( integer_difference >= 0 )
          {
            buffer_cursor_5 = a1;
            remaining_count_6 = integer_difference + 1;
            do
            {
              loaded_word_5 = *buffer_cursor_5++;
              masked_bits_5 = ((_BYTE)element_index + 2) & 7;
              remaining_amount += loaded_word_5 - *((unsigned __int8 *)scratch_buffer + (element_index++ & 7));
              *((_BYTE *)scratch_buffer + masked_bits_5) = loaded_word_5;
              *(buffer_cursor_5 - 1) = remaining_amount >> 1;
              --remaining_count_6;
            }
            while ( remaining_count_6 );
          }
          break;
        case 3u:
          element_index = 0;
          if ( integer_difference >= 0 )
          {
            buffer_cursor_4 = a1;
            remaining_count_5 = integer_difference + 1;
            do
            {
              loaded_word_4 = *buffer_cursor_4++;
              masked_bits_4 = ((_BYTE)element_index + 3) & 7;
              remaining_amount += loaded_word_4 - *((unsigned __int8 *)scratch_buffer + (element_index++ & 7));
              *((_BYTE *)scratch_buffer + masked_bits_4) = loaded_word_4;
              *(buffer_cursor_4 - 1) = remaining_amount / 3;
              --remaining_count_5;
            }
            while ( remaining_count_5 );
          }
          break;
        case 4u:
          element_index = 0;
          if ( integer_difference >= 0 )
          {
            buffer_cursor_3 = a1;
            remaining_count_4 = integer_difference + 1;
            do
            {
              loaded_word_3 = *buffer_cursor_3++;
              masked_bits_3 = ((_BYTE)element_index - 4) & 7;
              remaining_amount += loaded_word_3 - *((unsigned __int8 *)scratch_buffer + (element_index++ & 7));
              *((_BYTE *)scratch_buffer + masked_bits_3) = loaded_word_3;
              *(buffer_cursor_3 - 1) = remaining_amount >> 2;
              --remaining_count_4;
            }
            while ( remaining_count_4 );
          }
          break;
        default:
          element_index = 0;
          if ( a5 == 5 )
          {
            if ( integer_difference >= 0 )
            {
              buffer_cursor_2 = a1;
              remaining_count_3 = integer_difference + 1;
              do
              {
                loaded_word_2 = *buffer_cursor_2++;
                masked_bits_2 = ((_BYTE)element_index - 3) & 7;
                remaining_amount += loaded_word_2 - *((unsigned __int8 *)scratch_buffer + (element_index++ & 7));
                *((_BYTE *)scratch_buffer + masked_bits_2) = loaded_word_2;
                *(buffer_cursor_2 - 1) = remaining_amount / 5;
                --remaining_count_3;
              }
              while ( remaining_count_3 );
            }
          }
          else if ( integer_difference >= 0 )
          {
            buffer_cursor = a1;
            remaining_count_2 = integer_difference + 1;
            do
            {
              loaded_word = *buffer_cursor++;
              masked_bits = ((_BYTE)a5 + (_BYTE)element_index) & 7;
              remaining_amount += loaded_word - *((unsigned __int8 *)scratch_buffer + (element_index++ & 7));
              *((_BYTE *)scratch_buffer + masked_bits) = loaded_word;
              *(buffer_cursor - 1) = remaining_amount / a5;
              --remaining_count_2;
            }
            while ( remaining_count_2 );
          }
          break;
      }
      if ( element_index < input_value )
      {
        iteration_count = element_index;
        remaining_count_7 = (unsigned int)(input_value - element_index);
        buffer_cursor_6 = &a1[element_index];
        do
        {
          if ( *buffer_cursor_6 )
            crt_assert(
              (char *)L"pixels[i] == 0",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xF20u);
          integer_sum = iteration_count++ & 7;
          remaining_amount -= *((unsigned __int8 *)scratch_buffer + integer_sum);
          *buffer_cursor_6++ = remaining_amount / a5;
          --remaining_count_7;
        }
        while ( remaining_count_7 );
        input_value = input_value_2;
      }
      a1 += input_value_3;
      byte_count = a5;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef input_value_2
#undef input_value_3
#undef scratch_buffer

//----- (0000000140181350) ----------------------------------------------------
__int64            sub_140181350(__int64 a1, int a2, float *a3, float a4, float a5, float a6, float a7)
{
  float input_value;
  float input_value_2;
  __int64 input_value_3;
  __int64 result;
  float source_float_7;
  float source_float_6;
  float combined_products;
  float cached_input_value;
  float component_sum;
  unsigned int line;
  __int16 *literal_text;

  input_value = a7;
  input_value_2 = a5;
  input_value_3 = a2;
  if ( a5 != a7 )
  {
    if ( a5 >= a7 )
      result = crt_assert((char *)L"y0 < y1", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xB68u);
    source_float_7 = a3[7];
    if ( source_float_7 < a3[6] )
    {
      result = crt_assert(
                 (char *)L"e->sy <= e->ey",
                 (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                 0xB69u);
      source_float_7 = a3[7];
    }
    if ( a5 <= source_float_7 )
    {
      source_float_6 = a3[6];
      if ( a7 >= source_float_6 )
      {
        combined_products = a6;
        if ( a5 < source_float_6 )
        {
          input_value_2 = a3[6];
          a4 = a4 + (float)((float)((float)(source_float_6 - a5) * (float)(a6 - a4)) / (float)(a7 - a5));
        }
        if ( a7 > source_float_7 )
        {
          input_value = source_float_7;
          combined_products = a6 + (float)((float)((float)(source_float_7 - a7) * (float)(a6 - a4)) / (float)(a7 - input_value_2));
        }
        result = (unsigned int)(input_value_3 + 1);
        cached_input_value = (float)(int)input_value_3;
        component_sum = (float)(input_value_3 + 1);
        if ( a4 == (float)(int)input_value_3 )
        {
          if ( combined_products <= component_sum )
            goto LABEL_24;
          line = 2934;
          literal_text = L"x1 <= x+1";
          goto LABEL_23;
        }
        if ( a4 == component_sum )
        {
          if ( combined_products < cached_input_value )
            result = crt_assert(
                       (char *)L"x1 >= x",
                       (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                       0xB78u);
          if ( a4 <= cached_input_value )
          {
LABEL_24:
            if ( combined_products <= cached_input_value )
              goto LABEL_25;
            if ( a4 < component_sum )
              goto LABEL_32;
          }
        }
        else
        {
          if ( a4 <= cached_input_value )
          {
            if ( combined_products <= cached_input_value )
            {
LABEL_25:
              *(float *)(a1 + 4 * input_value_3) = (float)((float)(input_value - input_value_2) * a3[5]) + *(float *)(a1 + 4 * input_value_3);
              return result;
            }
            line = 2938;
            literal_text = L"x1 <= x";
LABEL_23:
            result = crt_assert((char *)literal_text, (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", line);
            goto LABEL_24;
          }
          if ( a4 < component_sum )
          {
            if ( combined_products >= cached_input_value && combined_products <= component_sum )
              goto LABEL_41;
            result = crt_assert(
                       (char *)L"x1 >= x && x1 <= x+1",
                       (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                       0xB7Eu);
            goto LABEL_38;
          }
          if ( combined_products >= component_sum )
            return result;
          result = crt_assert(
                     (char *)L"x1 >= x+1",
                     (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                     0xB7Cu);
        }
        if ( combined_products >= component_sum )
          return result;
LABEL_32:
        if ( a4 < cached_input_value || a4 > component_sum )
        {
LABEL_40:
          result = crt_assert(
                     (char *)L"x0 >= x && x0 <= x+1 && x1 >= x && x1 <= x+1",
                     (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                     0xB85u);
LABEL_41:
          *(float *)(a1 + 4 * input_value_3) = (float)((float)(1.0 - (float)((float)((float)(a4 - cached_input_value) + (float)(combined_products - cached_input_value)) * 0.5))
                                           * (float)((float)(input_value - input_value_2) * a3[5]))
                                   + *(float *)(a1 + 4 * input_value_3);
          return result;
        }
LABEL_38:
        if ( combined_products >= cached_input_value && combined_products <= component_sum )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
  }
  return result;
}

//----- (0000000140181620) ----------------------------------------------------
_QWORD *           sub_140181620(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result;
  unsigned int loaded_word;

  result = *(_QWORD **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = *result;
    return result;
  }
  loaded_word = *(_DWORD *)(a1 + 16);
  if ( loaded_word )
    goto LABEL_10;
  if ( a2 >= 0x20 )
  {
    loaded_word = 100;
    if ( a2 < 0x80 )
      loaded_word = 800;
  }
  else
  {
    loaded_word = 2000;
  }
  result = (_QWORD *)sr_path_malloc(a2 * loaded_word + 8);
  if ( result )
  {
    *result = *(_QWORD *)a1;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(result);
LABEL_10:
    *(_DWORD *)(a1 + 16) = loaded_word - 1;
    return (_QWORD *)(a2 * (int)(loaded_word - 1) + *(_QWORD *)a1 + 8LL);
  }
  return result;
}

//----- (00000001401816D0) ----------------------------------------------------
void            sub_1401816D0(_QWORD **a1)
{
  _QWORD *allocation_buffer;
  _QWORD *record_pointer;

  allocation_buffer = *a1;
  if ( allocation_buffer )
  {
    do
    {
      record_pointer = (_QWORD *)*allocation_buffer;
      free(allocation_buffer);
      allocation_buffer = record_pointer;
    }
    while ( record_pointer );
  }
}

//----- (0000000140181710) ----------------------------------------------------
__int64            sub_140181710(char *a1)
{
  char input_byte;

  input_byte = *a1;
  if ( *a1 == 49 )
  {
    if ( a1[1] || a1[2] )
      return 0;
    return a1[3] == 0;
  }
  else
  {
    if ( input_byte == 116 && a1[1] == 121 && a1[2] == 112 && a1[3] == 49 )
      return 1;
    if ( input_byte == 79 )
    {
      if ( a1[1] != 84 || a1[2] != 84 )
        return 0;
      return a1[3] == 79;
    }
    else if ( input_byte )
    {
      if ( input_byte != 116 || a1[1] != 114 || a1[2] != 117 )
        return 0;
      return a1[3] == 101;
    }
    else
    {
      if ( a1[1] != 1 || a1[2] )
        return 0;
      return a1[3] == 0;
    }
  }
}

//----- (0000000140181790) ----------------------------------------------------
_BOOL8            sub_140181790(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 iteration_count;
  unsigned int call_result;
  unsigned int cached_call_result;
  int call_result_2;

  iteration_count = -1;
  do
    ++iteration_count;
  while ( *(_BYTE *)(a3 + iteration_count) );
  if ( !(unsigned int)sub_140181710((char *)(a2 + a1))
    || a4 && (((unsigned __int8)a4 ^ *(_BYTE *)((unsigned int)sub_140180D50(a1, a2, "head") + a1 + 45)) & 7) != 0 )
  {
    return 0;
  }
  call_result = sub_140180D50(a1, a2, "name");
  cached_call_result = call_result;
  if ( !call_result )
    return 0;
  if ( !a4 )
  {
    if ( !(unsigned int)sub_1401818E0(a1, call_result, a3, iteration_count, 16, 17) )
    {
      call_result_2 = sub_1401818E0(a1, cached_call_result, a3, iteration_count, 1, 2);
      return call_result_2 || (unsigned int)sub_1401818E0(a1, cached_call_result, a3, iteration_count, 3, -1);
    }
    return 1;
  }
  if ( (unsigned int)sub_1401818E0(a1, call_result, a3, iteration_count, 16, -1) )
    return 1;
  call_result_2 = sub_1401818E0(a1, cached_call_result, a3, iteration_count, 1, -1);
  return call_result_2 || (unsigned int)sub_1401818E0(a1, cached_call_result, a3, iteration_count, 3, -1);
}

//----- (00000001401818E0) ----------------------------------------------------
__int64            sub_1401818E0(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6)
{
  int iteration_count;
  unsigned __int8 *record_pointer;
  int shifted_bits;
  int shifted_bits_2;
  __int64 input_value;
  __int64 scaled_index;
  int shifted_bits_3;
  int shifted_bits_4;
  int shifted_bits_5;
  __int64 saved_shifted_bits;
  int shifted_bits_6;
  int shifted_bits_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401818E0[96];
#define saved_shifted_bits_2 (*(int (*))(void *)(sr_frame_1401818E0 + 0)) /* [rsp+20h] */
#define input_value_2 (*(unsigned int (*))(void *)(sr_frame_1401818E0 + 88)) /* [rsp+78h] */

  input_value_2 = a2;
  iteration_count = 0;
  record_pointer = (unsigned __int8 *)(a1 + a2);
  shifted_bits = record_pointer[3] + (record_pointer[2] << 8);
  shifted_bits_2 = a2 + (record_pointer[4] << 8) + record_pointer[5];
  saved_shifted_bits_2 = shifted_bits_2;
  if ( !shifted_bits )
    return 0;
  input_value = a1;
  while ( 1 )
  {
    scaled_index = a2 + 12 * iteration_count + 6;
    if ( *(unsigned __int8 *)(scaled_index + input_value + 7) + (*(unsigned __int8 *)(scaled_index + input_value + 6) << 8) != a5 )
      goto LABEL_21;
    shifted_bits_3 = *(unsigned __int8 *)(scaled_index + input_value + 1) + (*(unsigned __int8 *)(scaled_index + input_value) << 8);
    shifted_bits_4 = *(unsigned __int8 *)(scaled_index + input_value + 3) + (*(unsigned __int8 *)(scaled_index + input_value + 2) << 8);
    shifted_bits_5 = *(unsigned __int8 *)(scaled_index + input_value + 5) + (*(unsigned __int8 *)(scaled_index + input_value + 4) << 8);
    if ( shifted_bits_3 )
    {
      if ( shifted_bits_3 != 3 || shifted_bits_4 != 1 && shifted_bits_4 != 10 )
        goto LABEL_21;
    }
    saved_shifted_bits = shifted_bits_2;
    shifted_bits_6 = sub_14017D6B0(
            a3,
            a4,
            (unsigned __int8 *)(input_value
                              + shifted_bits_2
                              + ((unsigned __int64)*(unsigned __int8 *)(scaled_index + input_value + 10) << 8)
                              + *(unsigned __int8 *)(scaled_index + input_value + 11)),
            (*(unsigned __int8 *)(scaled_index + input_value + 8) << 8) + (unsigned int)*(unsigned __int8 *)(scaled_index + input_value + 9));
    input_value = a1;
    if ( shifted_bits_6 >= 0 )
    {
      if ( iteration_count + 1 < shifted_bits
        && *(unsigned __int8 *)(scaled_index + a1 + 19) + (*(unsigned __int8 *)(scaled_index + a1 + 18) << 8) == a6
        && *(unsigned __int8 *)(scaled_index + a1 + 13) + (*(unsigned __int8 *)(scaled_index + a1 + 12) << 8) == shifted_bits_3
        && *(unsigned __int8 *)(scaled_index + a1 + 15) + (*(unsigned __int8 *)(scaled_index + a1 + 14) << 8) == shifted_bits_4
        && *(unsigned __int8 *)(scaled_index + a1 + 17) + (*(unsigned __int8 *)(scaled_index + a1 + 16) << 8) == shifted_bits_5 )
      {
        shifted_bits_7 = *(unsigned __int8 *)(scaled_index + a1 + 21) + (*(unsigned __int8 *)(scaled_index + a1 + 20) << 8);
        if ( shifted_bits_7 )
        {
          if ( shifted_bits_6 < a4 && *(_BYTE *)(shifted_bits_6 + a3) == 32 )
          {
            if ( a4 - (shifted_bits_6 + 1) == (unsigned int)sub_14017D6B0(
                                                   a3 + shifted_bits_6 + 1,
                                                   a4 - (shifted_bits_6 + 1),
                                                   (unsigned __int8 *)(a1
                                                                     + saved_shifted_bits
                                                                     + ((unsigned __int64)*(unsigned __int8 *)(scaled_index + a1 + 22) << 8)
                                                                     + *(unsigned __int8 *)(scaled_index + a1 + 23)),
                                                   shifted_bits_7) )
              return 1;
            input_value = a1;
          }
          goto LABEL_20;
        }
      }
      if ( shifted_bits_6 == a4 )
        return 1;
    }
LABEL_20:
    shifted_bits_2 = saved_shifted_bits_2;
    a2 = input_value_2;
LABEL_21:
    if ( ++iteration_count >= shifted_bits )
      return 0;
  }
}
#undef saved_shifted_bits_2
#undef input_value_2

//----- (0000000140181B30) ----------------------------------------------------
__int64            sub_140181B30(__int64 a1, __int64 a2, int a3, float a4)
{
  __int64 loaded_word;
  int loaded_word_2;
  _QWORD *allocated_buffer;
  _QWORD *saved_allocated_buffer;
  int integer_difference;
  float combined_products;
  int integer_difference_2;
  float scaled_ratio;

  loaded_word = *(_QWORD *)(a1 + 8);
  if ( loaded_word )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)loaded_word;
    goto LABEL_8;
  }
  loaded_word_2 = *(_DWORD *)(a1 + 16);
  if ( !loaded_word_2 )
  {
    allocated_buffer = (_QWORD *)sr_path_malloc(25608);
    saved_allocated_buffer = allocated_buffer;
    if ( !allocated_buffer )
    {
      loaded_word = 0;
      goto LABEL_8;
    }
    *allocated_buffer = *(_QWORD *)a1;
    loaded_word_2 = 800;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(saved_allocated_buffer);
  }
  integer_difference = loaded_word_2 - 1;
  loaded_word = 32LL * integer_difference + *(_QWORD *)a1 + 8LL;
  *(_DWORD *)(a1 + 16) = integer_difference;
LABEL_8:
  combined_products = (float)(*(float *)(a2 + 8) - *(float *)a2) / (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4));
  if ( loaded_word )
  {
    integer_difference_2 = 1065353216;
    scaled_ratio = 0.0;
    *(float *)(loaded_word + 12) = combined_products;
    if ( combined_products != 0.0 )
      scaled_ratio = 1.0 / combined_products;
    *(float *)(loaded_word + 16) = scaled_ratio;
    *(float *)(loaded_word + 8) = (float)((float)((float)(a4 - *(float *)(a2 + 4)) * combined_products) + *(float *)a2) - (float)a3;
    if ( !*(_DWORD *)(a2 + 16) )
      integer_difference_2 = -1082130432;
    *(_DWORD *)(loaded_word + 20) = integer_difference_2;
    *(_DWORD *)(loaded_word + 24) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(loaded_word + 28) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)loaded_word = 0;
    return loaded_word;
  }
  else
  {
    crt_assert((char *)L"z != ((void *)0)", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xABEu);
    return 0;
  }
}

//----- (0000000140181C60) ----------------------------------------------------
__int64            sub_140181C60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int input_value;

  input_value = a3;
  if ( a3 >= 0x40000000 )
    crt_assert((char *)L"size < 0x40000000", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x472u);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = input_value;
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}

//----- (0000000140181CF0) ----------------------------------------------------
__int64            sub_140181CF0(
        int *a1,
        __int64 a2,
        int *a3,
        unsigned int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  int *buffer_cursor;
  float component_delta;
  __int64 input_value;
  __int64 remaining_count;
  int *input_cursor;
  int vector_result;
  __int64 running_total;
  __m128i vector_result_2;
  __m128i converted_vector;
  signed __int64 running_total_2;
  __m128i loaded_vector;
  __m128i vector_result_3;
  __m128i vector_result_4;
  __m128i vector_result_5;
  int running_total_3;
  int running_total_4;
  float *allocation_buffer;
  int running_total_5;
  int iteration_count;
  __int64 element_index;
  int scaled_index;
  __int64 record_byte_offset;
  __int64 scaled_index_2;
  int loaded_word;
  int integer_difference;
  __int64 saved_record_byte_offset;
  __int64 record_byte_offset_2;
  float *state_address;
  float *record_byte_offset_3;
  unsigned int shifted_bits;
  __int64 remaining_count_2;
  float weighted_sum;
  __int64 saved_record_byte_offset_2;
  float product_difference;
  int selection_flag;
  bool comparison_result;
  bool comparison_result_2;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float product_difference_2;
  __int64 saved_record_byte_offset_3;
  __int64 saved_record_byte_offset_4;
  __int64 saved_record_byte_offset_5;
  int selection_flag_2;
  bool comparison_result_3;
  bool comparison_result_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float scaled_value;
  __int64 saved_record_byte_offset_6;
  int selection_flag_3;
  bool comparison_result_5;
  bool comparison_result_6;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float source_component_z;
  __int64 saved_record_byte_offset_7;
  __int64 saved_record_byte_offset_8;
  int selection_flag_4;
  bool comparison_result_7;
  bool comparison_result_8;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  __int64 remaining_count_3;
  float *state_address_2;
  float weighted_sum_14;
  __int64 saved_record_byte_offset_9;
  float weighted_sum_15;
  int selection_flag_5;
  bool comparison_result_9;
  bool comparison_result_10;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  __int64 iteration_count_2;
  float *running_total_6;
  __int128 loaded_word_2;
  float source_float_4;
  float *remaining_amount;
  __int64 remaining_count_4;
  float weighted_sum_19;
  int loaded_word_3;
  __int64 scaled_index_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140181CF0[144];
#define scratch_buffer (*(_QWORD (*)[8])(void *)(sr_frame_140181CF0 + 0)) /* [rsp+0h] */
#define saved_running_total (*(int (*))(void *)(sr_frame_140181CF0 + 64)) /* [rsp+40h] */
#define saved_buffer_cursor (*(int * (*))(void *)(sr_frame_140181CF0 + 72)) /* [rsp+48h] */
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_140181CF0 + 80)) /* [rsp+50h] */
#define allocated_buffer (*(__int64 (*))(void *)(sr_frame_140181CF0 + 88)) /* [rsp+58h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 96)) /* [rsp+60h] */
#define input_cursor_2 (*(int * (*))(void *)(sr_frame_140181CF0 + 104)) /* [rsp+68h] */
#define float_word (*(__int128 (*))(void *)(sr_frame_140181CF0 + 112)) /* [rsp+70h] */
#define unused_frame_slot_136 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 136)) /* [rsp+88h] */

  buffer_cursor = a3;
  component_delta = a6;
  input_value = a2;
  remaining_count = a4;
  input_cursor = a1;
  saved_buffer_cursor = a3;
  input_value_2 = a2;
  input_cursor_2 = a1;
  if ( a11 )
    component_delta = -a6;
  vector_result = 0;
  LODWORD(running_total) = 0;
  if ( (int)remaining_count >= 8 )
  {
    vector_result_2 = _mm_cvtsi64_si128((long long)(0));
    converted_vector = _mm_cvtsi64_si128((long long)(0));
    running_total_2 = 0;
    do
    {
      LODWORD(running_total) = running_total + 8;
      vector_result_2 = _mm_add_epi32(_mm_loadu_si128((     __m128i *)&a3[running_total_2]), vector_result_2);
      loaded_vector = _mm_loadu_si128((     __m128i *)&a3[running_total_2 + 4]);
      running_total_2 += 8LL;
      vector_result_3 = _mm_add_epi32(loaded_vector, converted_vector);
      converted_vector = vector_result_3;
    }
    while ( running_total_2 < (__int64)((int)remaining_count & 0xFFFFFFFFFFFFFFF8uLL) );
    vector_result_4 = _mm_add_epi32(vector_result_3, vector_result_2);
    vector_result_5 = _mm_add_epi32(vector_result_4, _mm_srli_si128(vector_result_4, 8));
    vector_result = _mm_cvtsi128_si32(_mm_add_epi32(vector_result_5, _mm_srli_si128(vector_result_5, 4)));
  }
  running_total_3 = 0;
  running_total = (int)running_total;
  running_total_4 = 0;
  if ( (int)running_total < (__int64)(int)remaining_count )
  {
    if ( (int)remaining_count - (__int64)(int)running_total < 2 )
      goto LABEL_11;
    do
    {
      running_total_3 += buffer_cursor[running_total];
      running_total_4 += buffer_cursor[running_total + 1];
      running_total += 2;
    }
    while ( running_total < (int)remaining_count - 1LL );
    if ( running_total < (int)remaining_count )
LABEL_11:
      vector_result += buffer_cursor[running_total];
    vector_result += running_total_4 + running_total_3;
  }
  allocated_buffer = sr_path_malloc(20LL * (vector_result + 1));
  allocation_buffer = (float *)allocated_buffer;
  if ( !allocated_buffer )
    return 0; /* compatibility result discarded by all reviewed callers */
  running_total_5 = 0;
  iteration_count = 0;
  if ( (int)remaining_count <= 0 )
    goto LABEL_63;
  element_index = 0;
  saved_remaining_count = remaining_count;
  do
  {
    scaled_index = 0;
    record_byte_offset = 0;
    scaled_index_2 = input_value + 8LL * running_total_5;
    loaded_word = *buffer_cursor;
    running_total_5 += *buffer_cursor;
    saved_running_total = running_total_5;
    integer_difference = loaded_word - 1;
    if ( loaded_word < 4 )
    {
      if ( loaded_word <= 0 )
        goto LABEL_61;
      saved_record_byte_offset = integer_difference;
    }
    else
    {
      saved_record_byte_offset = integer_difference;
      record_byte_offset_2 = 2;
      state_address = &allocation_buffer[5 * element_index];
      record_byte_offset_3 = (float *)(scaled_index_2 + 20);
      shifted_bits = ((unsigned int)(loaded_word - 4) >> 2) + 1;
      remaining_count_2 = shifted_bits;
      scaled_index = 4 * shifted_bits;
      do
      {
        weighted_sum = *(float *)(scaled_index_2 + 8 * saved_record_byte_offset + 4);
        saved_record_byte_offset_2 = record_byte_offset;
        product_difference = *(record_byte_offset_3 - 4);
        if ( weighted_sum != product_difference )
        {
          selection_flag = 0;
          state_address[4] = 0.0;
          if ( a11 )
          {
            comparison_result = weighted_sum < product_difference;
            comparison_result_2 = weighted_sum == product_difference;
          }
          else
          {
            comparison_result = product_difference < weighted_sum;
            comparison_result_2 = product_difference == weighted_sum;
          }
          LOBYTE(selection_flag) = !comparison_result && !comparison_result_2;
          if ( selection_flag )
          {
            saved_record_byte_offset_2 = saved_record_byte_offset;
            *((_DWORD *)state_address + 4) = 1;
            saved_record_byte_offset = record_byte_offset;
          }
          ++iteration_count;
          ++element_index;
          weighted_sum_2 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_2 + 4)) + a8;
          *state_address = (float)(a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_2)) + a7;
          weighted_sum_3 = a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset);
          state_address[1] = weighted_sum_2;
          weighted_sum_4 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset + 4)) + a8;
          state_address[2] = weighted_sum_3 + a7;
          state_address[3] = weighted_sum_4;
          state_address += 5;
        }
        product_difference_2 = *(record_byte_offset_3 - 2);
        saved_record_byte_offset_3 = record_byte_offset_2 - 1;
        saved_record_byte_offset_4 = record_byte_offset_2 - 1;
        saved_record_byte_offset_5 = record_byte_offset;
        if ( product_difference != product_difference_2 )
        {
          selection_flag_2 = 0;
          state_address[4] = 0.0;
          if ( a11 )
          {
            comparison_result_3 = product_difference < product_difference_2;
            comparison_result_4 = product_difference == product_difference_2;
          }
          else
          {
            comparison_result_3 = product_difference_2 < product_difference;
            comparison_result_4 = product_difference_2 == product_difference;
          }
          LOBYTE(selection_flag_2) = !comparison_result_3 && !comparison_result_4;
          if ( selection_flag_2 )
          {
            *((_DWORD *)state_address + 4) = 1;
            saved_record_byte_offset_4 = record_byte_offset;
            saved_record_byte_offset_5 = record_byte_offset_2 - 1;
          }
          ++iteration_count;
          ++element_index;
          weighted_sum_5 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_4 + 4)) + a8;
          *state_address = (float)(a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_4)) + a7;
          weighted_sum_6 = a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_5);
          state_address[1] = weighted_sum_5;
          weighted_sum_7 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_5 + 4)) + a8;
          state_address[2] = weighted_sum_6 + a7;
          state_address[3] = weighted_sum_7;
          state_address += 5;
        }
        scaled_value = *record_byte_offset_3;
        saved_record_byte_offset_6 = record_byte_offset_2;
        if ( product_difference_2 != *record_byte_offset_3 )
        {
          selection_flag_3 = 0;
          state_address[4] = 0.0;
          if ( a11 )
          {
            comparison_result_5 = product_difference_2 < scaled_value;
            comparison_result_6 = product_difference_2 == scaled_value;
          }
          else
          {
            comparison_result_5 = scaled_value < product_difference_2;
            comparison_result_6 = scaled_value == product_difference_2;
          }
          LOBYTE(selection_flag_3) = !comparison_result_5 && !comparison_result_6;
          if ( selection_flag_3 )
          {
            saved_record_byte_offset_6 = record_byte_offset_2 - 1;
            *((_DWORD *)state_address + 4) = 1;
            saved_record_byte_offset_3 = record_byte_offset_2;
          }
          ++iteration_count;
          ++element_index;
          weighted_sum_8 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_6 + 4)) + a8;
          *state_address = (float)(a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_6)) + a7;
          weighted_sum_9 = a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_3);
          state_address[1] = weighted_sum_8;
          weighted_sum_10 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_3 + 4)) + a8;
          state_address[2] = weighted_sum_9 + a7;
          state_address[3] = weighted_sum_10;
          state_address += 5;
        }
        source_component_z = record_byte_offset_3[2];
        saved_record_byte_offset = record_byte_offset_2 + 1;
        saved_record_byte_offset_7 = record_byte_offset_2 + 1;
        saved_record_byte_offset_8 = record_byte_offset_2;
        if ( scaled_value != source_component_z )
        {
          selection_flag_4 = 0;
          state_address[4] = 0.0;
          if ( a11 )
          {
            comparison_result_7 = scaled_value < source_component_z;
            comparison_result_8 = scaled_value == source_component_z;
          }
          else
          {
            comparison_result_7 = source_component_z < scaled_value;
            comparison_result_8 = source_component_z == scaled_value;
          }
          LOBYTE(selection_flag_4) = !comparison_result_7 && !comparison_result_8;
          if ( selection_flag_4 )
          {
            *((_DWORD *)state_address + 4) = 1;
            saved_record_byte_offset_7 = record_byte_offset_2;
            saved_record_byte_offset_8 = record_byte_offset_2 + 1;
          }
          ++iteration_count;
          ++element_index;
          weighted_sum_11 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_7 + 4)) + a8;
          *state_address = (float)(a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_7)) + a7;
          weighted_sum_12 = a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_8);
          state_address[1] = weighted_sum_11;
          weighted_sum_13 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_8 + 4)) + a8;
          state_address[2] = weighted_sum_12 + a7;
          state_address[3] = weighted_sum_13;
          state_address += 5;
        }
        record_byte_offset += 4;
        record_byte_offset_2 += 4;
        record_byte_offset_3 += 8;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      buffer_cursor = saved_buffer_cursor;
      allocation_buffer = (float *)allocated_buffer;
      remaining_count = saved_remaining_count;
      if ( scaled_index >= loaded_word )
        goto LABEL_60;
    }
    remaining_count_3 = (unsigned int)(loaded_word - scaled_index);
    state_address_2 = &allocation_buffer[4 * element_index + 4 + element_index];
    do
    {
      weighted_sum_14 = *(float *)(scaled_index_2 + 8 * saved_record_byte_offset + 4);
      saved_record_byte_offset_9 = record_byte_offset;
      weighted_sum_15 = *(float *)(scaled_index_2 + 8 * record_byte_offset + 4);
      if ( weighted_sum_14 != weighted_sum_15 )
      {
        selection_flag_5 = 0;
        *state_address_2 = 0.0;
        if ( a11 )
        {
          comparison_result_9 = weighted_sum_14 < weighted_sum_15;
          comparison_result_10 = weighted_sum_14 == weighted_sum_15;
        }
        else
        {
          comparison_result_9 = weighted_sum_15 < weighted_sum_14;
          comparison_result_10 = weighted_sum_15 == weighted_sum_14;
        }
        LOBYTE(selection_flag_5) = !comparison_result_9 && !comparison_result_10;
        if ( selection_flag_5 )
        {
          saved_record_byte_offset_9 = saved_record_byte_offset;
          *(_DWORD *)state_address_2 = 1;
          saved_record_byte_offset = record_byte_offset;
        }
        ++iteration_count;
        ++element_index;
        weighted_sum_16 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_9 + 4)) + a8;
        *(state_address_2 - 4) = (float)(a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset_9)) + a7;
        weighted_sum_17 = a5 * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset);
        *(state_address_2 - 3) = weighted_sum_16;
        weighted_sum_18 = (float)(component_delta * *(float *)(scaled_index_2 + 8 * saved_record_byte_offset + 4)) + a8;
        *(state_address_2 - 2) = weighted_sum_17 + a7;
        *(state_address_2 - 1) = weighted_sum_18;
        state_address_2 += 5;
      }
      saved_record_byte_offset = record_byte_offset++;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
LABEL_60:
    running_total_5 = saved_running_total;
LABEL_61:
    input_value = input_value_2;
    ++buffer_cursor;
    --remaining_count;
    saved_buffer_cursor = buffer_cursor;
    saved_remaining_count = remaining_count;
  }
  while ( remaining_count );
  input_cursor = input_cursor_2;
LABEL_63:
  sub_140183BF0(allocation_buffer, iteration_count);
  if ( iteration_count > 1LL )
  {
    iteration_count_2 = 1;
    running_total_6 = allocation_buffer + 5;
    do
    {
      loaded_word_2 = *(_OWORD *)running_total_6;
      source_float_4 = running_total_6[4];
      remaining_amount = running_total_6 - 5;
      remaining_count_4 = iteration_count_2;
      float_word = *(_OWORD *)running_total_6;
      weighted_sum_19 = *((float *)&float_word + 1);
      do
      {
        if ( weighted_sum_19 >= remaining_amount[1] )
          break;
        loaded_word_3 = *((_DWORD *)remaining_amount + 4);
        --remaining_count_4;
        *(_OWORD *)(remaining_amount + 5) = *(_OWORD *)remaining_amount;
        *((_DWORD *)remaining_amount + 9) = loaded_word_3;
        remaining_amount -= 5;
      }
      while ( remaining_count_4 > 0 );
      if ( iteration_count_2 != remaining_count_4 )
      {
        scaled_index_3 = 5 * remaining_count_4;
        *(_OWORD *)&allocation_buffer[scaled_index_3] = loaded_word_2;
        allocation_buffer[scaled_index_3 + 4] = source_float_4;
      }
      ++iteration_count_2;
      running_total_6 += 5;
    }
    while ( iteration_count_2 < iteration_count );
  }
  scratch_buffer[6] = a12;
  sub_140182310(input_cursor, (__int64)allocation_buffer, iteration_count, 1, a9, a10);
  free(allocation_buffer);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef scratch_buffer
#undef saved_running_total
#undef saved_buffer_cursor
#undef saved_remaining_count
#undef allocated_buffer
#undef input_value_2
#undef input_cursor_2
#undef float_word
#undef unused_frame_slot_136

//----- (0000000140182310) ----------------------------------------------------
__int64            sub_140182310(int *a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int loaded_word;
  int remaining_count;
  float *saved_state_address;
  _QWORD *allocation_buffer;
  float *scaled_value;
  int integer_sum;
  __int64 input_value;
  _WORD *allocated_buffer;
  int input_value_2;
  char *state_address;
  int table_value;
  int loaded_word_2;
  float **state_address_2;
  float component_sum;
  float component_sum_2;
  int integer_sum_2;
  char *byte_cursor;
  float weighted_sum;
  __int64 state_address_3;
  _QWORD *allocated_buffer_2;
  float combined_products;
  float scaled_ratio;
  int integer_difference;
  float weighted_sum_2;
  int cached_integer_sum;
  int iteration_count;
  float weighted_sum_3;
  float *buffer_cursor;
  signed __int64 scaled_index;
  int absolute_value;
  int scaled_index_2;
  float **state_address_4;
  float **scaled_value_2;
  _QWORD *record_pointer;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140182310[624];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140182310 + 0)) /* [rsp+0h] */
#define cached_integer_sum_2 (*(int (*))(void *)(sr_frame_140182310 + 48)) /* [rsp+30h] */
#define saved_allocated_buffer (*(_WORD * (*))(void *)(sr_frame_140182310 + 56)) /* [rsp+38h] */
#define saved_state_address_2 (*(float * (*))(void *)(sr_frame_140182310 + 64)) /* [rsp+40h] */
#define saved_state_address_3 (*(char * (*))(void *)(sr_frame_140182310 + 72)) /* [rsp+48h] */
#define scratch_buffer (*(_BYTE (*)[528])(void *)(sr_frame_140182310 + 80)) /* [rsp+50h] */
#define unused_frame_slot_608 (*(__int64 (*))(void *)(sr_frame_140182310 + 608)) /* [rsp+260h] */

  loaded_word = *a1;
  remaining_count = 0;
  saved_state_address = nullptr;
  allocation_buffer = nullptr;
  scaled_value = nullptr;
  integer_sum = 0;
  input_value = a3;
  saved_state_address_2 = nullptr;
  cached_integer_sum_2 = 0;
  if ( loaded_word <= 64 )
  {
    allocated_buffer = scratch_buffer;
  }
  else
  {
    allocated_buffer = (_WORD *)sr_path_malloc(4LL * (2 * loaded_word + 1));
    integer_sum = 0;
    loaded_word = *a1;
  }
  input_value_2 = a6;
  saved_allocated_buffer = allocated_buffer;
  state_address = (char *)&allocated_buffer[2 * loaded_word];
  table_value = a6 + a1[1];
  saved_state_address_3 = state_address;
  *(float *)(a2 + 20 * input_value + 4) = (float)table_value + 1.0;
  if ( a1[1] > 0 )
  {
    while ( 1 )
    {
      loaded_word_2 = *a1;
      state_address_2 = &saved_state_address_2;
      component_sum = (float)(integer_sum + input_value_2);
      component_sum_2 = component_sum + 1.0;
      crt_memset((void *)(uintptr_t)(saved_allocated_buffer), 0, 4LL * *a1);
      integer_sum_2 = loaded_word_2 + 1;
      byte_cursor = saved_state_address_3;
      crt_memset((void *)(uintptr_t)(saved_state_address_3), 0, 4LL * integer_sum_2);
      if ( saved_state_address )
      {
        do
        {
          if ( component_sum < saved_state_address[7] )
          {
            state_address_2 = (float **)saved_state_address;
          }
          else
          {
            *state_address_2 = *(float **)saved_state_address;
            if ( saved_state_address[5] == 0.0 )
              crt_assert(
                (char *)L"z->direction",
                (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                0xC4Eu);
            *(_QWORD *)saved_state_address = (uint64)(uintptr_t)(scaled_value);
            scaled_value = saved_state_address;
            saved_state_address[5] = 0.0;
          }
          saved_state_address = *state_address_2;
        }
        while ( *state_address_2 );
        saved_state_address = saved_state_address_2;
      }
      weighted_sum = *(float *)(a2 + 4);
      if ( weighted_sum <= component_sum_2 )
        break;
LABEL_35:
      allocated_buffer = saved_allocated_buffer;
      if ( saved_state_address )
        sub_140180640((__int64)saved_allocated_buffer, (__int64)(byte_cursor + 4), *a1, saved_state_address, component_sum);
      cached_integer_sum = cached_integer_sum_2;
      iteration_count = 0;
      weighted_sum_3 = 0.0;
      if ( *a1 > 0 )
      {
        buffer_cursor = (float *)saved_allocated_buffer;
        scaled_index = byte_cursor - (char *)saved_allocated_buffer;
        do
        {
          weighted_sum_3 = weighted_sum_3 + *(float *)((char *)buffer_cursor + scaled_index);
          absolute_value = (int)(float)((float)(fabs(weighted_sum_3 + *buffer_cursor) * 255.0) + 0.5);
          if ( absolute_value > 255 )
            LOBYTE(absolute_value) = -1;
          ++buffer_cursor;
          scaled_index_2 = iteration_count + cached_integer_sum * a1[2];
          ++iteration_count;
          *(_BYTE *)(scaled_index_2 + *((_QWORD *)a1 + 2)) = absolute_value;
        }
        while ( iteration_count < *a1 );
        allocated_buffer = saved_allocated_buffer;
      }
      state_address_4 = &saved_state_address_2;
      if ( saved_state_address )
      {
        scaled_value_2 = (float **)saved_state_address;
        do
        {
          *((float *)scaled_value_2 + 2) = *((float *)scaled_value_2 + 3) + *((float *)scaled_value_2 + 2);
          state_address_4 = (float **)*state_address_4;
          scaled_value_2 = (float **)*state_address_4;
        }
        while ( *state_address_4 );
      }
      input_value_2 = a6;
      integer_sum = cached_integer_sum + 1;
      cached_integer_sum_2 = integer_sum;
      if ( integer_sum >= a1[1] )
        goto LABEL_47;
    }
    while ( weighted_sum == *(float *)(a2 + 12) )
    {
LABEL_33:
      weighted_sum = *(float *)(a2 + 24);
      a2 += 20;
      if ( weighted_sum > component_sum_2 )
      {
        byte_cursor = saved_state_address_3;
        goto LABEL_35;
      }
    }
    if ( scaled_value )
    {
      state_address_3 = (__int64)scaled_value;
      scaled_value = *(float **)scaled_value;
      goto LABEL_22;
    }
    if ( !remaining_count )
    {
      allocated_buffer_2 = (_QWORD *)sr_path_malloc(25608);
      if ( !allocated_buffer_2 )
      {
        state_address_3 = 0;
        goto LABEL_22;
      }
      *allocated_buffer_2 = (uint64)(uintptr_t)(allocation_buffer);
      remaining_count = 800;
      allocation_buffer = allocated_buffer_2;
    }
    state_address_3 = (__int64)&allocation_buffer[4 * --remaining_count + 1];
LABEL_22:
    combined_products = (float)(*(float *)(a2 + 8) - *(float *)a2) / (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4));
    if ( state_address_3 )
    {
      *(float *)(state_address_3 + 12) = combined_products;
      if ( combined_products == 0.0 )
        scaled_ratio = 0.0;
      else
        scaled_ratio = 1.0 / combined_products;
      *(float *)(state_address_3 + 16) = scaled_ratio;
      *(float *)(state_address_3 + 8) = (float)((float)((float)(component_sum - *(float *)(a2 + 4)) * combined_products) + *(float *)a2) - (float)a5;
      if ( *(_DWORD *)(a2 + 16) )
        integer_difference = 1065353216;
      else
        integer_difference = -1082130432;
      *(_DWORD *)(state_address_3 + 20) = integer_difference;
      *(_DWORD *)(state_address_3 + 24) = *(_DWORD *)(a2 + 4);
      weighted_sum_2 = *(float *)(a2 + 12);
      *(_QWORD *)state_address_3 = 0;
      *(float *)(state_address_3 + 28) = weighted_sum_2;
      if ( weighted_sum_2 < component_sum )
        crt_assert(
          (char *)L"z->ey >= scan_y_top",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0xC5Bu);
      *(_QWORD *)state_address_3 = (uint64)(uintptr_t)(saved_state_address);
      saved_state_address = (float *)state_address_3;
      saved_state_address_2 = (float *)state_address_3;
    }
    else
    {
      crt_assert((char *)L"z != ((void *)0)", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xABEu);
    }
    goto LABEL_33;
  }
LABEL_47:
  if ( allocation_buffer )
  {
    do
    {
      record_pointer = (_QWORD *)*allocation_buffer;
      free(allocation_buffer);
      allocation_buffer = record_pointer;
    }
    while ( record_pointer );
  }
  if ( allocated_buffer != (_WORD *)scratch_buffer )
    free(allocated_buffer);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef cached_integer_sum_2
#undef saved_allocated_buffer
#undef saved_state_address_2
#undef saved_state_address_3
#undef scratch_buffer
#undef unused_frame_slot_608

//----- (00000001401827E0) ----------------------------------------------------
__int64            sub_1401827E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float product_difference;
  float scaled_value;
  float scaled_value_2;
  float source_component_y;
  unsigned int iteration_count;
  float source_component_y_2;
  float product_difference_2;
  float product_difference_3;
  float component_sum;
  float component_delta;
  float combined_products;
  float product_difference_4;
  float squared_value;
  float square_root;
  float product_difference_5;
  float squared_length;
  float scaled_value_3;
  float scaled_value_4;
  float weighted_sum;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;

  product_difference = 0.0;
  scaled_value = *a2;
  scaled_value_2 = *a2;
  source_component_y = a2[1];
  iteration_count = 0;
  source_component_y_2 = a3[1];
  product_difference_2 = (float)(scaled_value_2 * source_component_y_2) - (float)(*a3 * source_component_y);
  product_difference_3 = (float)(a4[1] * scaled_value) - (float)(*a4 * source_component_y);
  component_sum = product_difference_3 + product_difference_3;
  component_delta = product_difference_3 - product_difference_2;
  combined_products = (float)((float)(a5[1] * scaled_value) - (float)(*a5 * source_component_y)) + (float)(product_difference_2 - component_sum);
  product_difference_4 = product_difference_2 - (float)((float)(a1[1] * scaled_value) - (float)(*a1 * source_component_y));
  if ( combined_products == 0.0 )
  {
    product_difference_5 = (float)(-0.5 / component_delta) * product_difference_4;
    if ( product_difference_5 < 0.0 || product_difference_5 > 1.0 )
      return 0;
    iteration_count = 1;
  }
  else
  {
    squared_value = (float)(component_delta * component_delta) - (float)(product_difference_4 * combined_products);
    if ( squared_value <= 0.0 )
      return 0;
    square_root = fsqrt(squared_value);
    product_difference = (float)(component_delta - square_root) * (float)(-1.0 / combined_products);
    product_difference_5 = (float)(square_root + component_delta) * (float)(-1.0 / combined_products);
    if ( product_difference_5 >= 0.0 )
      iteration_count = product_difference_5 <= 1.0;
    if ( square_root > 0.0 && product_difference >= 0.0 && product_difference <= 1.0 )
    {
      if ( !iteration_count )
        product_difference_5 = (float)(component_delta - square_root) * (float)(-1.0 / combined_products);
      ++iteration_count;
    }
    if ( !iteration_count )
      return 0;
  }
  squared_length = 1.0 / (float)((float)(source_component_y * source_component_y) + (float)(scaled_value * scaled_value));
  scaled_value_3 = scaled_value * squared_length;
  scaled_value_4 = source_component_y * squared_length;
  weighted_sum = (float)(*a3 * scaled_value_3) + (float)(source_component_y_2 * scaled_value_4);
  combined_products_2 = (float)((float)(*a5 * scaled_value_3) + (float)(a5[1] * scaled_value_4)) - weighted_sum;
  combined_products_3 = (float)((float)(*a4 * scaled_value_3) + (float)(a4[1] * scaled_value_4)) - weighted_sum;
  combined_products_4 = weighted_sum - (float)((float)(*a1 * scaled_value_3) + (float)(a1[1] * scaled_value_4));
  a6[1] = (float)(product_difference_5 * combined_products) + component_delta;
  *a6 = (float)((float)((float)((float)(2.0 - (float)(product_difference_5 + product_difference_5)) * product_difference_5) * combined_products_3) + combined_products_4)
      + (float)((float)(product_difference_5 * product_difference_5) * combined_products_2);
  if ( iteration_count <= 1 )
    return 1;
  a6[3] = (float)(product_difference * combined_products) + component_delta;
  a6[2] = (float)((float)((float)((float)(2.0 - (float)(product_difference + product_difference)) * product_difference) * combined_products_3) + combined_products_4) + (float)((float)(product_difference * product_difference) * combined_products_2);
  return 2;
}

//----- (0000000140182AD0) ----------------------------------------------------
__int64            sub_140182AD0(__int64 a1, int a2, __int64 a3)
{
  int remaining_count;
  int remaining_count_2;
  __m128i loaded_word;
  __m128i *returned_pointer;
  float frame_float_at_64;
  float frame_float_at_176;
  float frame_float_at_228;
  float comparison_operand;
  float comparison_operand_2;
  float comparison_operand_3;
  float comparison_operand_4;
  float comparison_operand_5;
  int iteration_count;
  int record_byte_offset;
  __int64 integer_sum;
  __int32 iteration_count_2;
  int loaded_word_2;
  int saved_loaded_word;
  int saved_running_total;
  __int32 table_value;
  float *state_address;
  int unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  float weighted_sum;
  float comparison_result;
  int running_total;
  float *state_address_2;
  int running_total_2;
  float *state_address_3;
  float *state_address_4;
  __int64 unrecovered_register_value_3;
  int unrecovered_register_value_4;
  float product_difference;
  __int64 masked_bits;
  int record_byte_offset_2;
  float *record_byte_offset_3;
  float source_component_y;
  float source_component_y_2;
  float product_difference_2;
  __int64 cached_input_value;
  int scaled_index;
  __int64 integer_sum_2;
  __m128i *state_address_5;
  unsigned __int8 loaded_word_3;
  __int32 iteration_count_3;
  __int64 integer_sum_3;
  int saved_loaded_word_2;
  unsigned __int8 loaded_word_4;
  unsigned int shifted_bits;
  int selection_code;
  int integer_sum_4;
  __m128i converted_vector;
  char loaded_word_5;
  float component_delta;
  float component_delta_2;
  float component_sum;
  float component_sum_2;
  float comparison_operand_6;
  __int32 table_value_2;
  int integer_difference;
  __int16 masked_bits_2;
  float shifted_bits_2;
  unsigned __int8 loaded_word_6;
  int saved_loaded_word_3;
  unsigned __int8 loaded_word_7;
  __int64 integer_sum_5;
  int shifted_bits_3;
  unsigned __int8 loaded_word_8;
  __int64 integer_sum_6;
  int shifted_bits_4;
  unsigned __int8 loaded_word_9;
  __int64 integer_sum_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140182AD0[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 0)) /* [rsp+8h] */
#define saved_component_delta (*(float (*))(void *)(sr_frame_140182AD0 + 40)) /* [rsp+30h] */
#define saved_component_delta_2 (*(float (*))(void *)(sr_frame_140182AD0 + 48)) /* [rsp+38h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140182AD0 + 64)) /* [rsp+48h] */
#define saved_converted_vector (*(__m128i (*))(void *)(sr_frame_140182AD0 + 80)) /* [rsp+58h] */
#define running_total_3 (*(int (*))(void *)(sr_frame_140182AD0 + 96)) /* [rsp+68h] */
#define selection_flag (*(int (*))(void *)(sr_frame_140182AD0 + 100)) /* [rsp+6Ch] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140182AD0 + 104)) /* [rsp+70h] */
#define converted_vector_2 (*(__m128i (*))(void *)(sr_frame_140182AD0 + 112)) /* [rsp+78h] */
#define input_value (*(int (*))(void *)(sr_frame_140182AD0 + 128)) /* [rsp+88h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 136)) /* [rsp+90h] */
#define loaded_word_10 (*(__int128 (*))(void *)(sr_frame_140182AD0 + 144)) /* [rsp+98h] */
#define packed_vector (*(__int128 (*))(void *)(sr_frame_140182AD0 + 160)) /* [rsp+A8h] */
#define float_word (*(__int128 (*))(void *)(sr_frame_140182AD0 + 176)) /* [rsp+B8h] */
#define frame_float_at_192 (*(float (*))(void *)(sr_frame_140182AD0 + 192)) /* [rsp+C8h] */
#define frame_float_at_196 (*(float (*))(void *)(sr_frame_140182AD0 + 196)) /* [rsp+CCh] */
#define frame_float_at_200 (*(float (*))(void *)(sr_frame_140182AD0 + 200)) /* [rsp+D0h] */
#define frame_float_at_204 (*(float (*))(void *)(sr_frame_140182AD0 + 204)) /* [rsp+D4h] */
#define frame_float_at_208 (*(float (*))(void *)(sr_frame_140182AD0 + 208)) /* [rsp+D8h] */
#define frame_float_at_212 (*(float (*))(void *)(sr_frame_140182AD0 + 212)) /* [rsp+DCh] */
#define frame_float_at_216 (*(float (*))(void *)(sr_frame_140182AD0 + 216)) /* [rsp+E0h] */
#define frame_float_at_220 (*(float (*))(void *)(sr_frame_140182AD0 + 220)) /* [rsp+E4h] */
#define frame_float_at_224 (*(float (*))(void *)(sr_frame_140182AD0 + 224)) /* [rsp+E8h] */
#define frame_float_at_228_2 (*(float (*))(void *)(sr_frame_140182AD0 + 228)) /* [rsp+ECh] */
#define frame_float_at_232 (*(float (*))(void *)(sr_frame_140182AD0 + 232)) /* [rsp+F0h] */
#define frame_float_at_236 (*(float (*))(void *)(sr_frame_140182AD0 + 236)) /* [rsp+F4h] */
#define scratch_buffer (*(__m128i (*)[10])(void *)(sr_frame_140182AD0 + 384)) /* [rsp+188h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 544)) /* [rsp+228h] */

  input_value_2 = a1;
  input_value = a2;
  running_total_3 = 0;
  remaining_count = 0;
  packed_word_bits = 0;
  remaining_count_2 = 0;
  loaded_word = *(__m128i_u *)(a1 + 80);
  loaded_word_10 = *(_OWORD *)(a1 + 112);
  selection_flag = 1;
  converted_vector_2 = loaded_word;
  returned_pointer = (__m128i *)sub_14017F410(&saved_converted_vector, (__int64)&converted_vector_2, a2);
  frame_float_at_64 = frame_float_at_216;
  frame_float_at_176 = frame_float_at_212;
  frame_float_at_228 = frame_float_at_208;
  comparison_operand = frame_float_at_204;
  comparison_operand_2 = frame_float_at_200;
  comparison_operand_3 = frame_float_at_196;
  comparison_operand_4 = frame_float_at_192;
  comparison_operand_5 = frame_float_at_224;
  saved_converted_vector = *returned_pointer;
  iteration_count = SR_VEC_LANES(128, saved_converted_vector, i32)[2];
  while ( iteration_count < SR_VEC_LANES(128, saved_converted_vector, i32)[3] )
  {
    record_byte_offset = 0;
    integer_sum = iteration_count++;
    unused_written_slot = 1;
    iteration_count_2 = iteration_count;
    SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count;
    loaded_word_2 = *(unsigned __int8 *)(integer_sum + SR_VEC_LANES(128, saved_converted_vector, i64)[0]);
    saved_loaded_word = loaded_word_2;
    switch ( *(_BYTE *)(integer_sum + SR_VEC_LANES(128, saved_converted_vector, i64)[0]) )
    {
      case 1:
      case 3:
      case 0x12:
      case 0x17:
        running_total_3 += remaining_count_2 / 2;
        remaining_count_2 = 0;
        continue;
      case 4:
        selection_flag = 0;
        if ( remaining_count_2 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, 0.0, *((float *)&float_word + remaining_count_2 + 3));
        remaining_count_2 = 0;
        continue;
      case 5:
        if ( remaining_count_2 < 2 )
          return 0; /* 0x140182DEF: xor eax, eax */
        state_address = &frame_float_at_192;
        do
        {
          sub_140180060(a3, *state_address, state_address[1]);
          state_address = (float *)(unrecovered_register_value_2 + 8);
        }
        while ( unrecovered_register_value + 2 < remaining_count_2 );
        remaining_count_2 = 0;
        continue;
      case 6:
        if ( remaining_count_2 >= 1 )
          goto LABEL_27;
        return 0; /* 0x140182DEF: xor eax, eax */
      case 7:
        if ( remaining_count_2 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        while ( record_byte_offset < remaining_count_2 )
        {
          sub_140180060(a3, 0.0, *(&frame_float_at_192 + record_byte_offset++));
LABEL_27:
          if ( record_byte_offset >= remaining_count_2 )
            break;
          sub_140180060(a3, *(&frame_float_at_192 + record_byte_offset++), 0.0);
        }
        goto LABEL_68;
      case 8:
        if ( remaining_count_2 < 6 )
          return 0; /* 0x140182DEF: xor eax, eax */
        running_total = 5;
        state_address_2 = &frame_float_at_208;
        do
        {
          sub_14017FFC0(a3, *(state_address_2 - 4), *(state_address_2 - 3), *(state_address_2 - 2), *(state_address_2 - 1), *state_address_2, state_address_2[1]);
          running_total += 6;
          state_address_2 += 6;
        }
        while ( running_total < remaining_count_2 );
        remaining_count_2 = 0;
        continue;
      case 0xA:
        cached_input_value = input_value_2;
        if ( !HIDWORD(packed_word_bits) )
        {
          if ( *(_DWORD *)(input_value_2 + 156) )
            loaded_word_10 = *sub_14017F820(&packed_vector, input_value_2, input_value);
          HIDWORD(packed_word_bits) = 1;
        }
        goto LABEL_74;
      case 0xB:
        if ( remaining_count <= 0 )
          return 0; /* 0x140182DEF: xor eax, eax */
        LODWORD(packed_word_bits) = --remaining_count;
        saved_converted_vector = scratch_buffer[remaining_count];
        iteration_count = SR_VEC_LANES(128, saved_converted_vector, i32)[2];
        continue;
      case 0xC:
        if ( iteration_count < SR_VEC_LANES(128, saved_converted_vector, i32)[3] )
        {
          loaded_word_5 = *(_BYTE *)(iteration_count++ + SR_VEC_LANES(128, saved_converted_vector, i64)[0]);
          SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count_2 + 1;
        }
        else
        {
          loaded_word_5 = 0;
        }
        switch ( loaded_word_5 )
        {
          case '"':
            if ( remaining_count_2 < 7 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, comparison_operand_4, 0.0, comparison_operand_3, comparison_operand_2, comparison_operand, 0.0);
            sub_14017FFC0(a3, frame_float_at_228, 0.0, frame_float_at_176, -comparison_operand_2, frame_float_at_64, 0.0);
            remaining_count_2 = 0;
            break;
          case '#':
            if ( remaining_count_2 < 13 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, comparison_operand_4, comparison_operand_3, comparison_operand_2, comparison_operand, frame_float_at_228, frame_float_at_176);
            saved_component_delta_2 = frame_float_at_236;
            saved_component_delta = frame_float_at_232;
LABEL_115:
            comparison_operand_6 = frame_float_at_224;
            sub_14017FFC0(a3, frame_float_at_64, frame_float_at_220, frame_float_at_224, frame_float_at_228_2, saved_component_delta, saved_component_delta_2);
            comparison_operand_5 = comparison_operand_6;
            remaining_count_2 = 0;
            continue;
          case '$':
            if ( remaining_count_2 < 9 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, comparison_operand_4, comparison_operand_3, comparison_operand_2, comparison_operand, frame_float_at_228, 0.0);
            sub_14017FFC0(a3, frame_float_at_176, 0.0, frame_float_at_64, frame_float_at_220, comparison_operand_5, -(float)((float)(comparison_operand + comparison_operand_3) + frame_float_at_220));
            remaining_count_2 = 0;
            break;
          default:
            if ( loaded_word_5 != 37 || remaining_count_2 < 11 )
              return 0; /* 0x140182DEF: xor eax, eax */
            component_delta = frame_float_at_232;
            component_delta_2 = frame_float_at_232;
            component_sum = (float)((float)((float)(comparison_operand_2 + comparison_operand_4) + frame_float_at_228) + frame_float_at_64) + frame_float_at_224;
            component_sum_2 = (float)((float)((float)(comparison_operand + comparison_operand_3) + frame_float_at_176) + frame_float_at_220) + frame_float_at_228_2;
            if ( fabs(component_sum) <= fabs(component_sum_2) )
              component_delta_2 = -component_sum;
            else
              component_delta = -component_sum_2;
            sub_14017FFC0(a3, comparison_operand_4, comparison_operand_3, comparison_operand_2, comparison_operand, frame_float_at_228, frame_float_at_176);
            saved_component_delta_2 = component_delta;
            saved_component_delta = component_delta_2;
            goto LABEL_115;
        }
        break;
      case 0xE:
        sub_14017FF00(a3);
        return 1; /* 0x14018378E: mov eax, 1 */
      case 0x13:
      case 0x14:
        saved_running_total = running_total_3;
        if ( selection_flag )
        {
          saved_running_total = remaining_count_2 / 2 + running_total_3;
          running_total_3 = saved_running_total;
        }
        table_value = SR_VEC_LANES(128, saved_converted_vector, i32)[3];
        selection_flag = 0;
        iteration_count += (saved_running_total + 7) / 8;
        if ( iteration_count > SR_VEC_LANES(128, saved_converted_vector, i32)[3] || iteration_count < 0 )
          crt_assert(
            (char *)L"!(o > b->size || o < 0)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x45Cu);
        if ( iteration_count > table_value || iteration_count < 0 )
        {
          SR_VEC_LANES(128, saved_converted_vector, i32)[2] = table_value;
          iteration_count = table_value;
          remaining_count_2 = 0;
        }
        else
        {
          SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count;
          remaining_count_2 = 0;
        }
        continue;
      case 0x15:
        selection_flag = 0;
        if ( remaining_count_2 < 2 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, *((float *)&float_word + remaining_count_2 + 2), *((float *)&float_word + remaining_count_2 + 3));
        remaining_count_2 = 0;
        continue;
      case 0x16:
        selection_flag = 0;
        if ( remaining_count_2 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, *((float *)&float_word + remaining_count_2 + 3), 0.0);
        remaining_count_2 = 0;
        continue;
      case 0x18:
        if ( remaining_count_2 < 8 )
          return 0; /* 0x140182DEF: xor eax, eax */
        running_total_2 = 5;
        state_address_3 = &frame_float_at_208;
        do
        {
          sub_14017FFC0(a3, *(state_address_3 - 4), *(state_address_3 - 3), *(state_address_3 - 2), *(state_address_3 - 1), *state_address_3, state_address_3[1]);
          record_byte_offset += 6;
          state_address_3 += 6;
          running_total_2 += 6;
        }
        while ( running_total_2 < remaining_count_2 - 2 );
        if ( record_byte_offset + 1 >= remaining_count_2 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180060(a3, *(&frame_float_at_192 + record_byte_offset), *(&frame_float_at_196 + record_byte_offset));
        remaining_count = packed_word_bits;
        remaining_count_2 = 0;
        continue;
      case 0x19:
        if ( remaining_count_2 < 8 )
          return 0; /* 0x140182DEF: xor eax, eax */
        state_address_4 = &frame_float_at_192;
        do
        {
          sub_140180060(a3, *state_address_4, state_address_4[1]);
          record_byte_offset += 2;
          state_address_4 = (float *)(unrecovered_register_value_3 + 8);
        }
        while ( unrecovered_register_value_4 + 2 < remaining_count_2 - 6 );
        if ( record_byte_offset + 5 >= remaining_count_2 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_14017FFC0(a3, *(&frame_float_at_192 + record_byte_offset), *(&frame_float_at_196 + record_byte_offset), *(&frame_float_at_200 + record_byte_offset), *(&frame_float_at_204 + record_byte_offset), *(&frame_float_at_208 + record_byte_offset), *(&frame_float_at_212 + record_byte_offset));
        remaining_count_2 = 0;
        continue;
      case 0x1A:
      case 0x1B:
        if ( remaining_count_2 < 4 )
          return 0; /* 0x140182DEF: xor eax, eax */
        product_difference = 0.0;
        masked_bits = remaining_count_2 & 1;
        if ( (remaining_count_2 & 1) != 0 )
          product_difference = comparison_operand_4;
        record_byte_offset_2 = masked_bits + 3;
        if ( (int)masked_bits + 3 >= remaining_count_2 )
          goto LABEL_68;
        record_byte_offset_3 = &frame_float_at_200 + masked_bits;
        do
        {
          source_component_y = record_byte_offset_3[1];
          if ( (_BYTE)loaded_word_2 == 27 )
          {
            source_component_y_2 = record_byte_offset_3[1];
            product_difference_2 = *(record_byte_offset_3 - 2);
            source_component_y = 0.0;
          }
          else
          {
            product_difference_2 = product_difference;
            source_component_y_2 = 0.0;
            product_difference = *(record_byte_offset_3 - 2);
          }
          sub_14017FFC0(a3, product_difference_2, product_difference, *(record_byte_offset_3 - 1), *record_byte_offset_3, source_component_y_2, source_component_y);
          record_byte_offset_2 += 4;
          record_byte_offset_3 += 4;
          product_difference = 0.0;
        }
        while ( record_byte_offset_2 < remaining_count_2 );
        remaining_count_2 = 0;
        continue;
      case 0x1D:
        cached_input_value = input_value_2;
LABEL_74:
        if ( remaining_count_2 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        scaled_index = (int)*(&frame_float_at_192 + --remaining_count_2);
        if ( remaining_count >= 10 )
          return 0; /* 0x140182DEF: xor eax, eax */
        integer_sum_2 = remaining_count++;
        LODWORD(packed_word_bits) = remaining_count;
        scratch_buffer[integer_sum_2] = saved_converted_vector;
        state_address_5 = (__m128i *)&loaded_word_10;
        if ( saved_loaded_word != 10 )
          state_address_5 = (__m128i *)(cached_input_value + 96);
        saved_converted_vector = *state_address_5;
        if ( SR_VEC_READ_LANES(128, _mm_srli_si128(saved_converted_vector, 8), i32)[1] < 0 )
          crt_assert(
            (char *)L"!(o > b->size || o < 0)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x45Cu);
        loaded_word_3 = 0;
        iteration_count_3 = SR_VEC_LANES(128, saved_converted_vector, i32)[3];
        if ( SR_VEC_LANES(128, saved_converted_vector, i32)[3] >= 0 )
          iteration_count_3 = 0;
        SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count_3;
        if ( iteration_count_3 < SR_VEC_LANES(128, saved_converted_vector, i32)[3] )
        {
          integer_sum_3 = iteration_count_3++;
          SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count_3;
          loaded_word_3 = *(_BYTE *)(integer_sum_3 + SR_VEC_LANES(128, saved_converted_vector, i64)[0]);
        }
        saved_loaded_word_2 = loaded_word_3;
        if ( iteration_count_3 < SR_VEC_LANES(128, saved_converted_vector, i32)[3] )
        {
          SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count_3 + 1;
          loaded_word_4 = *(_BYTE *)(iteration_count_3 + SR_VEC_LANES(128, saved_converted_vector, i64)[0]);
        }
        else
        {
          loaded_word_4 = 0;
        }
        shifted_bits = loaded_word_4 | (saved_loaded_word_2 << 8);
        if ( shifted_bits < 0x846C )
        {
          selection_code = 107;
          if ( shifted_bits >= 0x4D8 )
            selection_code = 1131;
        }
        else
        {
          selection_code = 0x8000;
        }
        integer_sum_4 = selection_code + scaled_index;
        if ( selection_code + scaled_index < 0 || integer_sum_4 >= (int)shifted_bits )
        {
          converted_vector_2 = _mm_cvtsi64_si128((long long)(0u));
          converted_vector = _mm_cvtsi64_si128((long long)(0u));
        }
        else
        {
          converted_vector_2 = saved_converted_vector;
          converted_vector = *(__m128i_u *)sub_14017F410(&float_word, (__int64)&converted_vector_2, integer_sum_4);
          converted_vector_2 = converted_vector;
        }
        saved_converted_vector = converted_vector;
        if ( !SR_VEC_READ_LANES(128, _mm_srli_si128(converted_vector, 8), u32)[1] )
          return 0; /* 0x140182DEF: xor eax, eax */
        SR_VEC_LANES(128, saved_converted_vector, i32)[2] = 0;
        iteration_count = 0;
        continue;
      case 0x1E:
        if ( remaining_count_2 >= 4 )
          goto LABEL_34;
        return 0; /* 0x140182DEF: xor eax, eax */
      case 0x1F:
        if ( remaining_count_2 < 4 )
          return 0; /* 0x140182DEF: xor eax, eax */
        while ( record_byte_offset + 3 < remaining_count_2 )
        {
          comparison_result = remaining_count_2 - record_byte_offset == 5 ? *(&frame_float_at_192 + record_byte_offset + 4) : 0.0;
          sub_14017FFC0(a3, *(&frame_float_at_192 + record_byte_offset), 0.0, *(&frame_float_at_196 + record_byte_offset), *(&frame_float_at_200 + record_byte_offset), comparison_result, *(&frame_float_at_204 + record_byte_offset));
          record_byte_offset += 4;
LABEL_34:
          if ( record_byte_offset + 3 >= remaining_count_2 )
            break;
          if ( remaining_count_2 - record_byte_offset == 5 )
            weighted_sum = *(&frame_float_at_192 + record_byte_offset + 4);
          else
            weighted_sum = 0.0;
          sub_14017FFC0(a3, 0.0, *(&frame_float_at_192 + record_byte_offset), *(&frame_float_at_196 + record_byte_offset), *(&frame_float_at_200 + record_byte_offset), *(&frame_float_at_204 + record_byte_offset), weighted_sum);
          record_byte_offset += 4;
        }
LABEL_68:
        remaining_count_2 = 0;
        continue;
      default:
        if ( loaded_word_2 == 255 )
        {
          if ( iteration_count < SR_VEC_LANES(128, saved_converted_vector, i32)[3] )
          {
            loaded_word_6 = *(_BYTE *)(iteration_count++ + SR_VEC_LANES(128, saved_converted_vector, i64)[0]);
            SR_VEC_LANES(128, saved_converted_vector, i32)[2] = ++iteration_count_2;
          }
          else
          {
            loaded_word_6 = 0;
          }
          saved_loaded_word_3 = loaded_word_6;
          if ( iteration_count_2 < SR_VEC_LANES(128, saved_converted_vector, i32)[3] )
          {
            integer_sum_5 = iteration_count++;
            SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count;
            loaded_word_7 = *(_BYTE *)(integer_sum_5 + SR_VEC_LANES(128, saved_converted_vector, i64)[0]);
          }
          else
          {
            loaded_word_7 = 0;
          }
          shifted_bits_3 = loaded_word_7 | (saved_loaded_word_3 << 8);
          if ( iteration_count < SR_VEC_LANES(128, saved_converted_vector, i32)[3] )
          {
            integer_sum_6 = iteration_count++;
            SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count;
            loaded_word_8 = *(_BYTE *)(integer_sum_6 + SR_VEC_LANES(128, saved_converted_vector, i64)[0]);
          }
          else
          {
            loaded_word_8 = 0;
          }
          shifted_bits_4 = loaded_word_8 | (shifted_bits_3 << 8);
          if ( iteration_count < SR_VEC_LANES(128, saved_converted_vector, i32)[3] )
          {
            integer_sum_7 = iteration_count++;
            SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count;
            loaded_word_9 = *(_BYTE *)(integer_sum_7 + SR_VEC_LANES(128, saved_converted_vector, i64)[0]);
          }
          else
          {
            loaded_word_9 = 0;
          }
          shifted_bits_2 = (float)(loaded_word_9 | (shifted_bits_4 << 8)) * 0.000015258789;
        }
        else
        {
          if ( loaded_word_2 != 28 && (unsigned int)(loaded_word_2 - 32) > 0xDE )
            return 0; /* 0x140182DEF: xor eax, eax */
          table_value_2 = SR_VEC_LANES(128, saved_converted_vector, i32)[3];
          integer_difference = iteration_count - 1;
          if ( iteration_count - 1 > SR_VEC_LANES(128, saved_converted_vector, i32)[3] || integer_difference < 0 )
            crt_assert(
              (char *)L"!(o > b->size || o < 0)",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0x45Cu);
          if ( integer_difference > table_value_2 || (SR_VEC_LANES(128, saved_converted_vector, i32)[2] = iteration_count - 1, integer_difference < 0) )
            SR_VEC_LANES(128, saved_converted_vector, i32)[2] = table_value_2;
          masked_bits_2 = sub_14017F5B0((__int64)&saved_converted_vector);
          iteration_count = SR_VEC_LANES(128, saved_converted_vector, i32)[2];
          shifted_bits_2 = (float)masked_bits_2;
        }
        if ( remaining_count_2 >= 48 )
          return 0; /* 0x140182DEF: xor eax, eax */
        *(&frame_float_at_192 + remaining_count_2) = shifted_bits_2;
        frame_float_at_64 = frame_float_at_216;
        frame_float_at_176 = frame_float_at_212;
        ++remaining_count_2;
        frame_float_at_228 = frame_float_at_208;
        comparison_operand = frame_float_at_204;
        comparison_operand_2 = frame_float_at_200;
        comparison_operand_3 = frame_float_at_196;
        comparison_operand_4 = frame_float_at_192;
        comparison_operand_5 = frame_float_at_224;
        continue;
    }
  }
  return 0; /* 0x140182DEF: xor eax, eax */
}
#undef unused_frame_slot_0
#undef saved_component_delta
#undef saved_component_delta_2
#undef unused_written_slot
#undef saved_converted_vector
#undef running_total_3
#undef selection_flag
#undef packed_word_bits
#undef converted_vector_2
#undef input_value
#undef input_value_2
#undef loaded_word_10
#undef packed_vector
#undef float_word
#undef frame_float_at_192
#undef frame_float_at_196
#undef frame_float_at_200
#undef frame_float_at_204
#undef frame_float_at_208
#undef frame_float_at_212
#undef frame_float_at_216
#undef frame_float_at_220
#undef frame_float_at_224
#undef frame_float_at_228_2
#undef frame_float_at_232
#undef frame_float_at_236
#undef scratch_buffer
#undef unused_frame_slot_544

// 140182CAF: conditional instruction was optimized away because %var_2C0.4==1
// 140182CC9: conditional instruction was optimized away because %var_2C0.4==1
// 140182CE7: conditional instruction was optimized away because %var_2C0.4==1
// 140182D22: conditional instruction was optimized away because %var_2C0.4==1
// 140182D5B: conditional instruction was optimized away because %var_2C0.4==1
// 140182D94: conditional instruction was optimized away because %var_2C0.4==1
// 140182DDC: conditional instruction was optimized away because %var_2C0.4==1
// 140182FDE: conditional instruction was optimized away because %var_2C0.4==1
// 140182FF9: conditional instruction was optimized away because edi.4>=8
// 14018308B: conditional instruction was optimized away because %var_2C0.4==1
// 1401830A4: conditional instruction was optimized away because edi.4>=8
// 14018312D: conditional instruction was optimized away because %var_2C0.4==1
// 1401831CC: conditional instruction was optimized away because %var_2C0.4==1
// 1401831E2: conditional instruction was optimized away because %var_2C0.4==1
// 140183524: conditional instruction was optimized away because %var_2C0.4==1
// 1401835A6: conditional instruction was optimized away because %var_2C0.4==1
// 140183621: conditional instruction was optimized away because %var_2C0.4==1

//----- (0000000140183820) ----------------------------------------------------
__int64            sub_140183820(float a1, float a2, float a3, float *a4)
{
  float squared_component;
  float product_difference;
  float squared_component_2;
  float combined_products;
  float squared_value;
  float square_root;
  float product_difference_2;
  float product_difference_3;
  float pow_result;
  float pow_result_2;
  float pow_result_3;
  float pow_result_4;
  __m128 converted_vector;
  float square_root_2;
  float acos_result;
  float scaled_value;
  float cosine_value;
  float scaled_value_2;
  float scaled_value_3;

  squared_component = a2 - (float)((float)(a1 * a1) * 0.33333334);
  product_difference = a1 * -0.33333334;
  squared_component_2 = (float)(squared_component * squared_component) * squared_component;
  combined_products = (float)((float)((float)((float)((float)(a1 + a1) * a1) - (float)(a2 * 9.0)) * a1) * 0.037037037) + a3;
  squared_value = (float)(combined_products * combined_products) + (float)(squared_component_2 * 0.14814815);
  if ( squared_value < 0.0 )
  {
    converted_vector = ((__m128)_mm_cvtsi32_si128((int)(0xC1D80000)));
    SR_VEC_LANES(128, converted_vector, f32)[0] = -27.0 / squared_component_2;
    square_root_2 = fsqrt(squared_component * -0.33333334);
    acos_result = acos(SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(converted_vector)), f64)[0] * combined_products * -0.5);
    scaled_value = acos_result * 0.33333334;
    cosine_value = cosf(scaled_value);
    *(double *)SR_VEC_LANES(128, converted_vector, u64) = cos(scaled_value - 1.570796);
    scaled_value_2 = *(double *)SR_VEC_LANES(128, converted_vector, u64);
    scaled_value_3 = scaled_value_2 * 1.7320508;
    *a4 = (float)((float)(square_root_2 + square_root_2) * cosine_value) + product_difference;
    a4[1] = product_difference - (float)((float)(scaled_value_3 + cosine_value) * square_root_2);
    a4[2] = product_difference - (float)((float)(cosine_value - scaled_value_3) * square_root_2);
    return 3;
  }
  else
  {
    square_root = fsqrt(squared_value);
    product_difference_2 = (float)(square_root - combined_products) * 0.5;
    product_difference_3 = (float)((float)-combined_products - square_root) * 0.5;
    if ( product_difference_2 >= 0.0 )
    {
      pow_result_2 = pow(product_difference_2, 0.3333333432674408);
    }
    else
    {
      pow_result = pow((float)-product_difference_2, 0.3333333432674408);
      pow_result_2 = -pow_result;
    }
    if ( product_difference_3 >= 0.0 )
    {
      pow_result_4 = pow(product_difference_3, 0.3333333432674408);
    }
    else
    {
      pow_result_3 = pow((float)-product_difference_3, 0.3333333432674408);
      pow_result_4 = -pow_result_3;
    }
    *a4 = (float)(pow_result_2 + product_difference) + pow_result_4;
    return 1;
  }
}

//----- (0000000140183A70) ----------------------------------------------------
__int64            sub_140183A70(float *a1, int a2)
{
  __int64 input_value;
  __int64 iteration_count;
  float *running_total;
  __int128 loaded_word;
  float source_float_4;
  float *remaining_amount;
  __int64 remaining_count;
  float weighted_sum;
  int loaded_word_2;
  __int64 scaled_index;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183A70[64];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140183A70 + 0)) /* [rsp+0h] */
#define float_word (*(__int128 (*))(void *)(sr_frame_140183A70 + 32)) /* [rsp+20h] */
#define unused_frame_slot_56 (*(__int64 (*))(void *)(sr_frame_140183A70 + 56)) /* [rsp+38h] */

  input_value = a2;
  sub_140183BF0(a1, a2);
  if ( input_value > 1 )
  {
    iteration_count = 1;
    running_total = a1 + 5;
    do
    {
      loaded_word = *(_OWORD *)running_total;
      source_float_4 = running_total[4];
      remaining_amount = running_total - 5;
      remaining_count = iteration_count;
      float_word = *(_OWORD *)running_total;
      weighted_sum = *((float *)&float_word + 1);
      do
      {
        if ( weighted_sum >= remaining_amount[1] )
          break;
        loaded_word_2 = *((_DWORD *)remaining_amount + 4);
        --remaining_count;
        *(_OWORD *)(remaining_amount + 5) = *(_OWORD *)remaining_amount;
        *((_DWORD *)remaining_amount + 9) = loaded_word_2;
        remaining_amount -= 5;
      }
      while ( remaining_count > 0 );
      if ( iteration_count != remaining_count )
      {
        scaled_index = 5 * remaining_count;
        *(_OWORD *)&a1[scaled_index] = loaded_word;
        a1[scaled_index + 4] = source_float_4;
      }
      ++iteration_count;
      running_total += 5;
    }
    while ( iteration_count < input_value );
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef float_word
#undef unused_frame_slot_56

//----- (0000000140183B30) ----------------------------------------------------
__int64            sub_140183B30(__int64 a1, int a2)
{
  __int64 iteration_count;
  __int128 *packed_vector;
  __int64 remaining_count;
  int loaded_word;
  __int64 remaining_count_2;
  __int128 loaded_word_2;
  float weighted_sum;
  __int64 remaining_amount;
  int loaded_word_3;
  __int64 scaled_index;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183B30[32];
#define float_word (*(__int128 (*))(void *)(sr_frame_140183B30 + 0)) /* [rsp+0h] */
#define unused_frame_slot_24 (*(__int64 (*))(void *)(sr_frame_140183B30 + 24)) /* [rsp+18h] */

  if ( a2 > 1 )
  {
    iteration_count = 1;
    packed_vector = (__int128 *)(a1 + 20);
    remaining_count = (unsigned int)(a2 - 1);
    do
    {
      loaded_word = *((_DWORD *)packed_vector + 4);
      remaining_count_2 = iteration_count;
      loaded_word_2 = *packed_vector;
      float_word = *packed_vector;
      if ( iteration_count > 0 )
      {
        weighted_sum = *((float *)&float_word + 1);
        remaining_amount = (__int64)packed_vector - 20;
        do
        {
          if ( weighted_sum >= *(float *)(remaining_amount + 4) )
            break;
          loaded_word_3 = *(_DWORD *)(remaining_amount + 16);
          --remaining_count_2;
          *(_OWORD *)(remaining_amount + 20) = *(_OWORD *)remaining_amount;
          *(_DWORD *)(remaining_amount + 36) = loaded_word_3;
          remaining_amount -= 20;
        }
        while ( remaining_count_2 > 0 );
        if ( iteration_count != remaining_count_2 )
        {
          scaled_index = 5 * remaining_count_2;
          *(_OWORD *)(a1 + 4 * scaled_index) = loaded_word_2;
          *(_DWORD *)(a1 + 4 * scaled_index + 16) = loaded_word;
        }
      }
      ++iteration_count;
      packed_vector = (__int128 *)((char *)packed_vector + 20);
      --remaining_count;
    }
    while ( remaining_count );
    return 0; /* the function has no caller */
  }
  return result;
}
#undef float_word
#undef unused_frame_slot_24

//----- (0000000140183BF0) ----------------------------------------------------
void            sub_140183BF0(float *a1, int a2)
{
  unsigned int saved_remaining_count;
  float source_component_y;
  signed int remaining_count;
  float *input_cursor;
  float *input_cursor_2;
  __int64 remaining_count_2;
  float shifted_bits;
  float weighted_sum;
  BOOL comparison_result;
  signed int integer_difference;
  __int64 scaled_index;
  __int128 masked_bits;
  float weighted_sum_2;
  float source_float_4;
  int iteration_count;
  __int128 loaded_word;
  __int64 element_index;
  float source_component_y_2;
  __int64 scaled_index_2;
  float *state_address;
  __int64 scaled_index_3;
  bool comparison_result_2;
  float *state_address_2;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int128 masked_bits_2;
  float weighted_sum_3;
  float combined_products;
  bool comparison_result_3;
  signed int saved_remaining_amount;
  int saved_remaining_count_2;

  if ( a2 > 12 )
  {
    saved_remaining_count = a2;
    do
    {
      source_component_y = a1[1];
      remaining_count = saved_remaining_count - 1;
      input_cursor = a1;
      input_cursor_2 = a1;
      remaining_count_2 = saved_remaining_count - 1LL;
      shifted_bits = a1[5 * ((unsigned __int64)saved_remaining_count >> 1) + 1];
      weighted_sum = a1[5 * remaining_count_2 + 1];
      comparison_result = weighted_sum > shifted_bits;
      if ( shifted_bits > source_component_y != comparison_result )
      {
        integer_difference = 0;
        if ( weighted_sum > source_component_y != comparison_result )
          integer_difference = saved_remaining_count - 1;
        scaled_index = 5LL * integer_difference;
        masked_bits = *(_OWORD *)&a1[5 * integer_difference];
        weighted_sum_2 = a1[5 * integer_difference + 4];
        *(_OWORD *)&a1[scaled_index] = *(_OWORD *)&a1[5 * ((unsigned __int64)saved_remaining_count >> 1)];
        a1[scaled_index + 4] = a1[5 * ((unsigned __int64)saved_remaining_count >> 1) + 4];
        *(_OWORD *)&a1[5 * ((unsigned __int64)saved_remaining_count >> 1)] = masked_bits;
        a1[5 * ((unsigned __int64)saved_remaining_count >> 1) + 4] = weighted_sum_2;
      }
      source_float_4 = a1[4];
      iteration_count = 1;
      loaded_word = *(_OWORD *)a1;
      element_index = 1;
      *(_OWORD *)a1 = *(_OWORD *)&a1[5 * ((unsigned __int64)saved_remaining_count >> 1)];
      a1[4] = a1[5 * ((unsigned __int64)saved_remaining_count >> 1) + 4];
      *(_OWORD *)&a1[5 * ((unsigned __int64)saved_remaining_count >> 1)] = loaded_word;
      a1[5 * ((unsigned __int64)saved_remaining_count >> 1) + 4] = source_float_4;
      while ( 1 )
      {
        source_component_y_2 = a1[1];
        scaled_index_2 = element_index + 4 * element_index + 1;
        comparison_result_3 = source_component_y_2 <= a1[scaled_index_2];
        state_address = &a1[scaled_index_2];
        if ( !comparison_result_3 )
        {
          do
          {
            ++iteration_count;
            state_address += 5;
            ++element_index;
          }
          while ( source_component_y_2 > *state_address );
        }
        scaled_index_3 = remaining_count_2 + 4 * remaining_count_2 + 1;
        comparison_result_2 = source_component_y_2 < a1[scaled_index_3];
        state_address_2 = &a1[scaled_index_3];
        if ( comparison_result_2 )
        {
          do
          {
            --remaining_count;
            state_address_2 -= 5;
            --remaining_count_2;
          }
          while ( source_component_y_2 < *state_address_2 );
        }
        if ( element_index >= remaining_count_2 )
          break;
        scaled_index_4 = 5 * remaining_count_2;
        ++iteration_count;
        scaled_index_5 = 5 * element_index;
        --remaining_count;
        masked_bits_2 = *(_OWORD *)&a1[5 * element_index];
        weighted_sum_3 = a1[5 * element_index++ + 4];
        *(_OWORD *)&a1[scaled_index_5] = *(_OWORD *)&a1[5 * remaining_count_2];
        combined_products = a1[5 * remaining_count_2-- + 4];
        a1[scaled_index_5 + 4] = combined_products;
        *(_OWORD *)&a1[scaled_index_4] = masked_bits_2;
        a1[scaled_index_4 + 4] = weighted_sum_3;
      }
      saved_remaining_count -= iteration_count;
      comparison_result_3 = remaining_count < (int)saved_remaining_count;
      saved_remaining_amount = saved_remaining_count;
      saved_remaining_count_2 = remaining_count;
      if ( remaining_count >= (int)saved_remaining_count )
      {
        saved_remaining_count_2 = saved_remaining_count;
        saved_remaining_count = remaining_count;
      }
      a1 += 5 * iteration_count;
      if ( !comparison_result_3 )
        input_cursor_2 = a1;
      sub_140183BF0(input_cursor_2, saved_remaining_count_2);
      if ( remaining_count >= saved_remaining_amount )
        a1 = input_cursor;
    }
    while ( (int)saved_remaining_count > 12 );
  }
}

//----- (0000000140183DC0) ----------------------------------------------------
__int64            sub_140183DC0(
        __int64 a1,
        int *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        int a12)
{
  float input_value = a3; // xmm2_4: x0 (0x140183DC0 keeps it in its home slot [rsp+120h]); Hex-Rays had lost it
  float input_value_2 = a4; // xmm3_4: y0 ([rsp+128h])
  __int64 result;
  int iteration_count;
  __m128 converted_vector;
  float input_value_3;
  float cached_input_value;
  float weighted_sum;
  __m128 saved_converted_vector;
  __m128 converted_vector_2;
  __m128 converted_vector_3;
  float squared_length;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float weighted_sum_2;
  float weighted_sum_3;
  __m128 converted_vector_4;
  unsigned int float_word;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  unsigned int float_word_2;
  __m128 converted_vector_5;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  __m128 packed_vector;
  float product_difference;
  double vector_result;
  __m128d converted_vector_6;
  __int64 packed_word_bits;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183DC0[64];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_140183DC0 + 0)) /* [rsp+108h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_140183DC0 + 24)) /* [rsp+120h] */
#define scaled_value_4 (*(float (*))(void *)(sr_frame_140183DC0 + 32)) /* [rsp+128h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_140183DC0 + 56)) /* [rsp+140h] */

  result = (__int64)&retaddr;
  scaled_value_4 = input_value_2;
  saved_weighted_sum = input_value;
  iteration_count = a12;
  converted_vector = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
  input_value_3 = a7;
  cached_input_value = input_value_2;
  weighted_sum = a5;
  SR_VEC_LANES(128, saved_converted_vector, f32)[0] = a6;
  converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
  SR_VEC_LANES(128, converted_vector_2, f32)[0] = a6 - input_value_2;
  converted_vector_3 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a10))));
  SR_VEC_LANES(128, converted_vector, f32)[0] = (float)((float)(a8 - a6) * (float)(a8 - a6)) + (float)((float)(a7 - a5) * (float)(a7 - a5));
  SR_VEC_LANES(128, converted_vector_2, f32)[0] = (float)(SR_VEC_LANES(128, converted_vector_2, f32)[0] * SR_VEC_LANES(128, converted_vector_2, f32)[0]) + (float)((float)(a5 - input_value) * (float)(a5 - input_value));
  SR_VEC_LANES(128, converted_vector_3, f32)[0] = (float)((float)(a10 - a8) * (float)(a10 - a8)) + (float)((float)(a9 - a7) * (float)(a9 - a7));
  SR_VEC_LANES(128, converted_vector, f32)[0] = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(converted_vector)), f64)[0]
                  + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(converted_vector_2)), f64)[0]
                  + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(converted_vector_3)), f64)[0];
  squared_length = (float)(SR_VEC_LANES(128, converted_vector, f32)[0] * SR_VEC_LANES(128, converted_vector, f32)[0])
      - (float)((float)((float)(a10 - cached_input_value) * (float)(a10 - cached_input_value)) + (float)((float)(a9 - input_value) * (float)(a9 - input_value)));
  if ( a12 <= 16 )
  {
    while ( squared_length > a11 )
    {
      ++iteration_count;
      scaled_value = weighted_sum * 0.5;
      scaled_value_2 = input_value_3 * 0.5;
      scaled_value_3 = SR_VEC_LANES(128, saved_converted_vector, f32)[0] * 0.5;
      weighted_sum_2 = scaled_value_2 + (float)(weighted_sum * 0.5);
      weighted_sum_3 = (float)(saved_weighted_sum * 0.5) + scaled_value;
      converted_vector_4 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
      *(float *)&float_word = (float)(scaled_value_4 * 0.5) + (float)(SR_VEC_LANES(128, saved_converted_vector, f32)[0] * 0.5);
      SR_VEC_LANES(128, converted_vector_4, f32)[0] = a8 * 0.5;
      weighted_sum_4 = (float)(a9 * 0.5) + scaled_value_2;
      saved_converted_vector = converted_vector_4;
      SR_VEC_LANES(128, saved_converted_vector, f32)[0] = (float)(a8 * 0.5) + scaled_value_3;
      saved_weighted_sum_2 = weighted_sum_4;
      weighted_sum_5 = (float)(weighted_sum_2 + weighted_sum_3) * 0.5;
      SR_VEC_LANES(128, converted_vector_4, f32)[0] = SR_VEC_LANES(128, saved_converted_vector, f32)[0] + *(float *)&float_word;
      weighted_sum = (float)(weighted_sum_2 + weighted_sum_4) * 0.5;
      SR_VEC_LANES(128, saved_converted_vector, f32)[0] = SR_VEC_LANES(128, saved_converted_vector, f32)[0] + (float)((float)(a10 * 0.5) + (float)(a8 * 0.5));
      a8 = (float)(a10 * 0.5) + (float)(a8 * 0.5);
      SR_VEC_LANES(128, converted_vector_4, f32)[0] = SR_VEC_LANES(128, converted_vector_4, f32)[0] * 0.5;
      SR_VEC_LANES(128, saved_converted_vector, f32)[0] = SR_VEC_LANES(128, saved_converted_vector, f32)[0] * 0.5;
      weighted_sum_6 = (float)(weighted_sum + weighted_sum_5) * 0.5;
      *(float *)&float_word_2 = (float)(SR_VEC_LANES(128, saved_converted_vector, f32)[0] + SR_VEC_LANES(128, converted_vector_4, f32)[0]) * 0.5;
      /* 0x140184044: x0, y0 from [rsp+120h] / [rsp+128h] (0x140183F37, 0x140183F2A), the current start point */
      result = sub_140183DC0(a1, a2, saved_weighted_sum, scaled_value_4, weighted_sum_3, *(float *)&float_word, weighted_sum_5, SR_VEC_LANES(128, converted_vector_4, f32)[0], weighted_sum_6, *(float *)&float_word_2, a11, iteration_count);
      converted_vector_5 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
      saved_weighted_sum = weighted_sum_6;
      scaled_value_4 = *(float *)&float_word_2;
      component_delta = weighted_sum_4 - weighted_sum;
      component_delta_2 = a9 - weighted_sum_4;
      component_delta_3 = weighted_sum - weighted_sum_6;
      component_delta_4 = a9 - weighted_sum_6;
      packed_vector = saved_converted_vector;
      SR_VEC_LANES(128, packed_vector, f32)[0] = SR_VEC_LANES(128, saved_converted_vector, f32)[0] - *(float *)&float_word_2;
      product_difference = a10 - *(float *)&float_word_2;
      SR_VEC_LANES(128, converted_vector_5, f32)[0] = (float)((float)(a8 - SR_VEC_LANES(128, saved_converted_vector, f32)[0]) * (float)(a8 - SR_VEC_LANES(128, saved_converted_vector, f32)[0])) + (float)(component_delta * component_delta);
      input_value_3 = saved_weighted_sum_2;
      vector_result = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(converted_vector_5)), f64)[0];
      SR_VEC_LANES(128, packed_vector, f32)[0] = (float)(SR_VEC_LANES(128, packed_vector, f32)[0] * SR_VEC_LANES(128, packed_vector, f32)[0]) + (float)(component_delta_3 * component_delta_3);
      converted_vector_6 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
      SR_VEC_LANES(128, converted_vector_6, f64)[0] = (float)((float)((float)(a10 - a8) * (float)(a10 - a8)) + (float)(component_delta_2 * component_delta_2));
      *(float *)SR_VEC_LANES(128, converted_vector_6, f64) = vector_result + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(packed_vector)), f64)[0] + SR_VEC_READ_LANES(128, _mm_sqrt_pd(converted_vector_6), f64)[0];
      squared_length = (float)(*(float *)SR_VEC_LANES(128, converted_vector_6, f64) * *(float *)SR_VEC_LANES(128, converted_vector_6, f64))
          - (float)((float)(product_difference * product_difference) + (float)(component_delta_4 * component_delta_4));
      if ( iteration_count > 16 )
        return result;
    }
    packed_word_bits = *a2;
    if ( a1 )
    {
      *(float *)(a1 + 8 * packed_word_bits) = a9;
      *(float *)(a1 + 8 * packed_word_bits + 4) = a10;
      LODWORD(packed_word_bits) = *a2;
    }
    result = (unsigned int)(packed_word_bits + 1);
    *a2 = result;
  }
  return result;
}
#undef retaddr
#undef saved_weighted_sum
#undef scaled_value_4
#undef saved_weighted_sum_2

//----- (0000000140184190) ----------------------------------------------------
__int64            sub_140184190(
        __int64 a1,
        int *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10)
{
  float input_value = a3; // xmm2_4: x0; Hex-Rays had lost it
  float input_value_2 = a4; // xmm3_4: y0
  float cached_input_value;
  float weighted_sum;
  float combined_products;
  float combined_products_2;
  int unused_local;
  int unused_local_2;
  __int64 packed_word_bits;

  cached_input_value = input_value;
  weighted_sum = (float)((float)(a5 + a5) + (float)(input_value + a7)) * 0.25;
  combined_products = (float)((float)(input_value + a7) * 0.5) - weighted_sum;
  if ( a10 <= 16 )
  {
    combined_products_2 = (float)((float)(input_value_2 + a8) * 0.5) - (float)((float)((float)(a6 + a6) + (float)(input_value_2 + a8)) * 0.25);
    if ( (float)((float)(combined_products_2 * combined_products_2) + (float)(combined_products * combined_products)) <= a9 )
    {
      packed_word_bits = *a2;
      if ( a1 )
      {
        *(float *)(a1 + 8 * packed_word_bits) = a7;
        *(float *)(a1 + 8 * packed_word_bits + 4) = a8;
        LODWORD(packed_word_bits) = *a2;
      }
      *a2 = packed_word_bits + 1;
    }
    else
    {
      sub_140184190(
        a1,
        a2,
        a3,
        a4,
        (float)(cached_input_value + a5) * 0.5,
        (float)(input_value_2 + a6) * 0.5,
        weighted_sum,
        (float)((float)(a6 + a6) + (float)(input_value_2 + a8)) * 0.25,
        a9,
        a10 + 1);
      /* 0x14018431E: the second half starts at the midpoint (xmm2 = xmm11 from 0x140184237, xmm3 = xmm12 from
         0x140184252); the C had passed undefined locals */
      sub_140184190(
        a1,
        a2,
        weighted_sum,
        (float)((float)((float)(a6 + a6) + (float)(input_value_2 + a8)) * 0.25),
        (float)(a5 + a7) * 0.5,
        (float)(a6 + a8) * 0.5,
        a7,
        a8,
        a9,
        a10 + 1);
    }
  }
  return 1;
}

//----- (00000001401843E0) ----------------------------------------------------
__int64            sub_1401843E0(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int input_value;
  int integer_difference;
  __int64 input_value_2;
  int input_value_3;
  unsigned __int64 byte_count;
  __int64 remaining_count;
  unsigned int remaining_amount;
  int iteration_count;
  int running_total;
  __int64 saved_running_total;
  __int64 masked_bits;
  int running_total_2;
  __int64 saved_running_total_2;
  __int64 masked_bits_2;
  int running_total_3;
  __int64 saved_running_total_3;
  __int64 masked_bits_3;
  int running_total_4;
  __int64 saved_running_total_4;
  __int64 masked_bits_4;
  int running_total_5;
  __int64 saved_running_total_5;
  __int64 masked_bits_5;
  __int64 iteration_count_2;
  _BYTE *running_total_6;
  __int64 remaining_count_2;
  unsigned int cached_input_value;
  __int64 integer_sum;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401843E0[64];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401843E0 + 0)) /* [rsp+0h] */
#define input_value_4 (*(unsigned int (*))(void *)(sr_frame_1401843E0 + 32)) /* [rsp+20h] */
#define input_value_5 (*(int (*))(void *)(sr_frame_1401843E0 + 36)) /* [rsp+24h] */
#define integer_difference_2 (*(__int64 (*))(void *)(sr_frame_1401843E0 + 40)) /* [rsp+28h] */
#define scratch_buffer (*(_QWORD (*)[2])(void *)(sr_frame_1401843E0 + 48)) /* [rsp+30h] */

  input_value = a5;
  integer_difference = a3 - a5;
  input_value_2 = a4;
  input_value_5 = a3;
  input_value_3 = a3;
  input_value_4 = a5;
  scratch_buffer[0] = 0;
  if ( a2 > 0 )
  {
    byte_count = a5;
    remaining_count = (unsigned int)a2;
    integer_difference_2 = (unsigned int)a2;
    do
    {
      crt_memset((void *)(uintptr_t)(scratch_buffer), 0, byte_count);
      remaining_amount = 0;
      switch ( input_value )
      {
        case 2u:
          iteration_count = 0;
          if ( integer_difference >= 0 )
          {
            running_total_5 = 0;
            do
            {
              saved_running_total_5 = running_total_5;
              running_total_5 += input_value_2;
              remaining_amount += *(unsigned __int8 *)(saved_running_total_5 + a1) - *((unsigned __int8 *)scratch_buffer + (iteration_count & 7));
              masked_bits_5 = ((_BYTE)iteration_count++ + 2) & 7;
              *((_BYTE *)scratch_buffer + masked_bits_5) = *(_BYTE *)(saved_running_total_5 + a1);
              *(_BYTE *)(saved_running_total_5 + a1) = remaining_amount >> 1;
            }
            while ( iteration_count <= integer_difference );
          }
          break;
        case 3u:
          iteration_count = 0;
          if ( integer_difference >= 0 )
          {
            running_total_4 = 0;
            do
            {
              saved_running_total_4 = running_total_4;
              running_total_4 += input_value_2;
              remaining_amount += *(unsigned __int8 *)(saved_running_total_4 + a1) - *((unsigned __int8 *)scratch_buffer + (iteration_count & 7));
              masked_bits_4 = ((_BYTE)iteration_count++ + 3) & 7;
              *((_BYTE *)scratch_buffer + masked_bits_4) = *(_BYTE *)(saved_running_total_4 + a1);
              *(_BYTE *)(saved_running_total_4 + a1) = remaining_amount / 3;
            }
            while ( iteration_count <= integer_difference );
          }
          break;
        case 4u:
          iteration_count = 0;
          if ( integer_difference >= 0 )
          {
            running_total_3 = 0;
            do
            {
              saved_running_total_3 = running_total_3;
              running_total_3 += input_value_2;
              remaining_amount += *(unsigned __int8 *)(saved_running_total_3 + a1) - *((unsigned __int8 *)scratch_buffer + (iteration_count & 7));
              masked_bits_3 = ((_BYTE)iteration_count++ - 4) & 7;
              *((_BYTE *)scratch_buffer + masked_bits_3) = *(_BYTE *)(saved_running_total_3 + a1);
              *(_BYTE *)(saved_running_total_3 + a1) = remaining_amount >> 2;
            }
            while ( iteration_count <= integer_difference );
          }
          break;
        default:
          iteration_count = 0;
          if ( input_value == 5 )
          {
            if ( integer_difference >= 0 )
            {
              running_total_2 = 0;
              do
              {
                saved_running_total_2 = running_total_2;
                running_total_2 += input_value_2;
                remaining_amount += *(unsigned __int8 *)(saved_running_total_2 + a1) - *((unsigned __int8 *)scratch_buffer + (iteration_count & 7));
                masked_bits_2 = ((_BYTE)iteration_count++ - 3) & 7;
                *((_BYTE *)scratch_buffer + masked_bits_2) = *(_BYTE *)(saved_running_total_2 + a1);
                *(_BYTE *)(saved_running_total_2 + a1) = remaining_amount / 5;
              }
              while ( iteration_count <= integer_difference );
            }
          }
          else if ( integer_difference >= 0 )
          {
            running_total = 0;
            do
            {
              saved_running_total = running_total;
              running_total += input_value_2;
              remaining_amount += *(unsigned __int8 *)(saved_running_total + a1) - *((unsigned __int8 *)scratch_buffer + (iteration_count & 7));
              masked_bits = ((_BYTE)input_value + (_BYTE)iteration_count++) & 7;
              *((_BYTE *)scratch_buffer + masked_bits) = *(_BYTE *)(saved_running_total + a1);
              *(_BYTE *)(saved_running_total + a1) = remaining_amount / input_value;
            }
            while ( iteration_count <= integer_difference );
          }
          break;
      }
      if ( iteration_count < input_value_3 )
      {
        iteration_count_2 = iteration_count;
        running_total_6 = (_BYTE *)(a1 + iteration_count * (int)input_value_2);
        remaining_count_2 = (unsigned int)(input_value_3 - iteration_count);
        cached_input_value = input_value_4;
        do
        {
          if ( *running_total_6 )
          {
            crt_assert(
              (char *)L"pixels[i*stride_in_bytes] == 0",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xF5Eu);
            cached_input_value = input_value_4;
          }
          integer_sum = iteration_count_2++ & 7;
          remaining_amount -= *((unsigned __int8 *)scratch_buffer + integer_sum);
          *running_total_6 = remaining_amount / cached_input_value;
          running_total_6 += input_value_2;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        input_value = input_value_4;
        remaining_count = integer_difference_2;
        input_value_3 = input_value_5;
      }
      ++a1;
      byte_count = input_value;
      integer_difference_2 = --remaining_count;
    }
    while ( remaining_count );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef input_value_4
#undef input_value_5
#undef integer_difference_2
#undef scratch_buffer

//----- (0000000140184710) ----------------------------------------------------
_BOOL8            sub_140184710(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float product_difference;
  float component_delta_4;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  float square_root;
  float *from;
  float *to;
  float *input_cursor;
  float component_delta_5;
  float component_delta_6;
  float component_delta_7;
  float component_delta_8;
  float product_difference_6;
  float product_difference_7;
  float product_difference_8;
  float product_difference_9;
  float product_difference_10;
  float square_root_2;
  _BOOL8 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140184710[176];
#define normal (*(__int64 (*))(void *)(sr_frame_140184710 + 0)) /* [rsp+40h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140184710 + 8)) /* [rsp+48h] */
#define fraction (*(float (*))(void *)(sr_frame_140184710 + 168)) /* [rsp+E8h] */

  component_delta = a4[1] - a2[1];
  component_delta_2 = a3[2] - a2[2];
  component_delta_3 = a3[1] - a2[1];
  product_difference = *a3 - *a2;
  component_delta_4 = a4[2] - a2[2];
  product_difference_2 = *a4 - *a2;
  product_difference_3 = (float)(component_delta * component_delta_2) - (float)(component_delta_4 * component_delta_3);
  product_difference_4 = (float)(component_delta_4 * product_difference) - (float)(product_difference_2 * component_delta_2);
  product_difference_5 = (float)(product_difference_2 * component_delta_3) - (float)(component_delta * product_difference);
  square_root = fsqrt((float)((float)(product_difference_4 * product_difference_4) + (float)(product_difference_3 * product_difference_3)) + (float)(product_difference_5 * product_difference_5));
  if ( square_root == 0.0 )
  {
    normal = 0;
    unused_written_slot = 0.0;
  }
  else
  {
    *(float *)&normal = product_difference_3 * (float)(1.0 / square_root);
    *((float *)&normal + 1) = product_difference_4 * (float)(1.0 / square_root);
    unused_written_slot = product_difference_5 * (float)(1.0 / square_root);
  }
  from = a6;
  to = a7;
  if ( sr_collision_segment_triangle(a1, (float *)&normal, &fraction, a6, a7, a2, a3, a4) )
    return 1;
  input_cursor = a5;
  component_delta_5 = a4[1] - a2[1];
  component_delta_6 = a5[2] - a2[2];
  component_delta_7 = a5[1] - a2[1];
  component_delta_8 = a4[2] - a2[2];
  product_difference_6 = *a4 - *a2;
  product_difference_7 = (float)(component_delta_7 * component_delta_8) - (float)(component_delta_6 * component_delta_5);
  product_difference_8 = *a5 - *a2;
  product_difference_9 = (float)(product_difference_8 * component_delta_5) - (float)(component_delta_7 * product_difference_6);
  product_difference_10 = (float)(component_delta_6 * product_difference_6) - (float)(product_difference_8 * component_delta_8);
  square_root_2 = fsqrt((float)((float)(product_difference_10 * product_difference_10) + (float)(product_difference_7 * product_difference_7)) + (float)(product_difference_9 * product_difference_9));
  if ( square_root_2 == 0.0 )
  {
    normal = 0;
    unused_written_slot = 0.0;
  }
  else
  {
    *(float *)&normal = product_difference_7 * (float)(1.0 / square_root_2);
    *((float *)&normal + 1) = product_difference_10 * (float)(1.0 / square_root_2);
    unused_written_slot = product_difference_9 * (float)(1.0 / square_root_2);
  }
  if ( sr_collision_segment_triangle(a1, (float *)&normal, &fraction, from, to, a2, a4, a5) )
    return 1;
  sr_math_triangle_normal((float *)&normal, a2, a3, input_cursor);
  if ( sr_collision_segment_triangle(a1, (float *)&normal, &fraction, from, to, a2, a3, input_cursor) )
    return 1;
  sr_math_triangle_normal((float *)&normal, a3, a4, input_cursor);
  result = sr_collision_segment_triangle(a1, (float *)&normal, &fraction, from, to, a3, a4, input_cursor);
  if ( result )
    return 1;
  return result;
}
#undef normal
#undef unused_written_slot
#undef fraction

//----- (0000000140184A70) ----------------------------------------------------
int sub_140184A70()
{
  int result;
  __int64 PerformanceCount;

  result = QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  if ( result )
    return (int)((double)(long long)PerformanceCount * *(double *)&g_182A7D550);
  return result;
}

