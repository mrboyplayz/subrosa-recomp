#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (00000001401063E0) ----------------------------------------------------
unsigned int *sub_1401063E0()
{
  signed int state_word;
  signed int iteration_count;
  signed int integer_sum;
  unsigned int *state_address;
  __int64 iteration_count_2;
  char masked_bits;
  char masked_bits_2;
  int state_word_2;
  int record_byte_offset;
  __int64 shifted_bits;
  int state_word_3;
  __m128i si128;
  __int64 record_byte_offset_2;
  unsigned int *state_address_2;
  __m128i converted_vector;
  __m128i converted_vector_2;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  __m128i reordered_vector;
  __m128i converted_vector_5;
  __m128i reordered_vector_2;
  __m128i converted_vector_6;
  __m128i vector_result;
  __m128i converted_vector_7;
  unsigned int *buffer_cursor;
  unsigned int *state_address_3;
  __int64 remaining_count;
  int scaled_index;
  int iteration_count_3;
  unsigned int *result;
  unsigned int *buffer_cursor_2;
  char *destination_text;
  bool comparison_result;
  unsigned int *state_address_4;
  unsigned int *state_address_5;
  char input_byte;
  int iteration_count_4;
  int element_index;
  __int64 element_index_2;
       char *source_text;
  char *destination_text_2;

  sub_1400ED940("readme.txt");
  state_word = g_1862AE024;
  iteration_count = g_1862AE020;
  integer_sum = 0;
  g_183E53120 = 0;
  do
  {
    if ( iteration_count >= state_word )
      break;
    state_address = &dword_140404A6C[64 * (__int64)integer_sum + 283720110];
    iteration_count_2 = 0;
    do
    {
      if ( iteration_count_2 >= 123 )
        break;
      masked_bits = *((_BYTE *)&g_1862AE028 + iteration_count);
      if ( masked_bits == 13 )
        break;
      if ( masked_bits == 10 )
        break;
      ++iteration_count;
      *((_BYTE *)state_address + iteration_count_2++) = masked_bits;
      g_1862AE020 = iteration_count;
    }
    while ( iteration_count < state_word );
    for ( *((_BYTE *)state_address + iteration_count_2) = 0; iteration_count < state_word; g_1862AE020 = ++iteration_count )
    {
      masked_bits_2 = *((_BYTE *)&g_1862AE028 + iteration_count);
      if ( masked_bits_2 != 13 && masked_bits_2 != 10 )
        break;
    }
    integer_sum = g_183E53120 + 1;
    g_183E53120 = integer_sum;
  }
  while ( integer_sum < 1022 );
  state_word_2 = g_160361344;
  record_byte_offset = 0;
  renderer_sort_count = g_160361344;
  LOBYTE(dword_140404A6C[64 * (__int64)integer_sum + 283720110]) = 0;
  shifted_bits = (__int64)(int)++g_183E53120 << 8;
  *(_QWORD *)((char *)&g_183E53124 + shifted_bits) = 0x6C20303120706F54LL;
  *(unsigned int *)((char *)&g_183E5312C + shifted_bits) = 7631721;
  state_word_3 = ++g_183E53120;
  if ( state_word_2 >= 8 )
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
    record_byte_offset_2 = 0;
    state_address_2 = &g_160361464;
    do
    {
      converted_vector = _mm_cvtsi32_si128(state_address_2[28]);
      record_byte_offset += 8;
      converted_vector_2 = _mm_cvtsi32_si128(*(state_address_2 - 28));
      converted_vector_3 = _mm_cvtsi32_si128(*state_address_2);
      converted_vector_4 = _mm_cvtsi32_si128(*(state_address_2 - 56));
      state_address_2 += 224;
      reordered_vector = _mm_unpacklo_epi32(converted_vector_3, converted_vector);
      converted_vector_5 = _mm_cvtsi32_si128(*(state_address_2 - 84));
      reordered_vector_2 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(converted_vector_4, converted_vector_2), reordered_vector);
      converted_vector_6 = _mm_cvtsi32_si128(*(state_address_2 - 112));
      vector_result = _mm_sub_epi32(si128, reordered_vector_2);
      converted_vector_7 = _mm_cvtsi32_si128(*(state_address_2 - 168));
      *(__m128i_u *)&dword_140404A6C[record_byte_offset_2 + 437192782] = vector_result;
      *(__m128i_u *)&dword_140404A6C[record_byte_offset_2 + 437192786] = _mm_sub_epi32(
                                                        si128,
                                                        _mm_unpacklo_epi64(
                                                          _mm_unpacklo_epi32(converted_vector_7, _mm_cvtsi32_si128(*(state_address_2 - 140))),
                                                          _mm_unpacklo_epi32(converted_vector_6, converted_vector_5)));
      record_byte_offset_2 += 8;
    }
    while ( record_byte_offset_2 < state_word_2 - (state_word_2 & 7) );
  }
  if ( record_byte_offset < state_word_2 )
  {
    buffer_cursor = &dword_140404A6C[record_byte_offset + 437192782];
    state_address_3 = &dword_140404A6C[28 * record_byte_offset + 134050374];
    remaining_count = (unsigned int)(state_word_2 - record_byte_offset);
    do
    {
      ++buffer_cursor;
      scaled_index = -1879048193 - *state_address_3;
      state_address_3 += 28;
      *(buffer_cursor - 1) = scaled_index;
      --remaining_count;
    }
    while ( remaining_count );
  }
  sr_renderer_sort();
  iteration_count_3 = 0;
  result = &g_1A85C6BCC;
  buffer_cursor_2 = &g_1A85C6BA4;
  do
  {
    if ( iteration_count_3 < state_word_2 )
    {
      crt_sprintf(
        &g_144AFA5A0,
        "%d. %s   $",
        iteration_count_3 + 1,
        (     char *)&dword_140404A6C[28 * *buffer_cursor_2 + 134050365]);
      format_with_thousands(&g_144AFA7A0, dword_140404A6C[28 * *buffer_cursor_2 + 134050374]);
      destination_text = (char *)&g_144AFA59C + 3;
      do
        comparison_result = *++destination_text == 0;
      while ( !comparison_result );
      strcpy(destination_text, (     char *)&g_144AFA7A0);
      state_address_4 = &g_144AFA5A0;
      state_address_5 = &dword_140404A6C[64 * (__int64)(int)g_183E53120 + 283720110];
      do
      {
        input_byte = *(_BYTE *)state_address_4;
        state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
        *(_BYTE *)state_address_5 = input_byte;
        state_address_5 = (unsigned int *)((char *)state_address_5 + 1);
      }
      while ( input_byte );
      result = &g_1A85C6BCC;
      state_word_2 = g_160361344;
      state_word_3 = ++g_183E53120;
    }
    ++iteration_count_3;
    ++buffer_cursor_2;
  }
  while ( (__int64)buffer_cursor_2 < (__int64)&g_1A85C6BCC );
  iteration_count_4 = 0;
  LOBYTE(g_183E93124) = 0;
  element_index = 0;
  if ( state_word_3 > 0 )
  {
    result = nullptr;
    do
    {
      element_index_2 = -1;
      source_text = (     char *)&dword_140404A6C[64 * (__int64)element_index + 283720110];
      do
        ++element_index_2;
      while ( source_text[element_index_2] );
      if ( (unsigned __int64)(iteration_count_4 + element_index_2) < 0x3FE )
      {
        destination_text_2 = (char *)&g_183E93120 + 3;
        do
          comparison_result = *++destination_text_2 == 0;
        while ( !comparison_result );
        strcpy(destination_text_2, source_text);
        for ( ; (__int64)result < 1022; result = (unsigned int *)((char *)result + 1) )
        {
          if ( !*((_BYTE *)&g_183E93124 + (_QWORD)result) )
            break;
          ++iteration_count_4;
        }
        *((_BYTE *)&g_183E93124 + (_QWORD)result) = 10;
        ++iteration_count_4;
        result = (unsigned int *)((char *)result + 1);
        *((_BYTE *)&g_183E93124 + (_QWORD)result) = 0;
        state_word_3 = g_183E53120;
      }
      ++element_index;
    }
    while ( element_index < state_word_3 );
  }
  return result;
}

// 14010653D: conditional instruction was optimized away because esi.4>=8
// 140106537: mask 0x80000007 is shortened because esi.4 <= 0x7FFFFFFF

//----- (000000014010C110) ----------------------------------------------------
__int64            sub_14010C110(int a1)
{
  __int64 record_word_offset;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  unsigned int masked_bits_3;
  char *state_address;
  __int64 masked_bits_4;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 masked_bits_5;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 masked_bits_6;
  __int64 masked_bits_7;
  float weighted_sum_7;
  float weighted_sum_8;
  __int64 masked_bits_8;
  float weighted_sum_9;
  int running_total;
  int state_address_2;
  float weighted_sum_10;
  int saved_weighted_sum;
  float weighted_sum_11;
  int saved_weighted_sum_2;
  int state_address_3;
  unsigned __int64 iteration_count;
  __int64 running_total_2;
  __int64 record_byte_offset;
  unsigned __int64 remaining_count;
  unsigned __int64 element_index;
  __int64 remaining_count_2;
  __int64 scaled_index;
  __int64 saved_running_total;
  __int64 element_index_2;
  __int64 table_value;
  __int64 scaled_index_2;
  int *saved_state_address;
  __int64 body;
  __int64 scaled_index_3;
  float *state_address_4;
  float *running_total_3;
  float product_difference;
  float combined_products;
  float state_address_5;
  float state_address_6;
  float weighted_sum_12;
  float state_address_7;
  float weighted_sum_13;
  float component_delta;
  float component_delta_2;
  float product_difference_2;
  unsigned int float_word;
  unsigned int float_word_2;
  bool comparison_result;
  _DWORD scratch_buffer[16];
  float sr_train_track_hit[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010C110[49568];
#define remaining_count_3 (*(__int64 (*))(void *)(sr_frame_14010C110 + 0)) /* [rsp+20h] */
#define saved_remaining_count (*(unsigned __int64 (*))(void *)(sr_frame_14010C110 + 8)) /* [rsp+28h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_14010C110 + 16)) /* [rsp+30h] */
#define saved_state_address_2 (*(int (*))(void *)(sr_frame_14010C110 + 24)) /* [rsp+38h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_14010C110 + 32)) /* [rsp+40h] */
#define state_address_8 (*(char * (*))(void *)(sr_frame_14010C110 + 40)) /* [rsp+48h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_14010C110 + 48)) /* [rsp+50h] */
#define offset (*(unsigned int (*)[4])(void *)(sr_frame_14010C110 + 64)) /* [rsp+60h] */
#define callee_output_word (*(int (*)[12356])(void *)(sr_frame_14010C110 + 128)) /* [rsp+A0h] */
#define unused_frame_slot_49552 (*(__int64 (*))(void *)(sr_frame_14010C110 + 49552)) /* [rsp+C1B0h] */

  record_word_offset = 20840LL * a1;
  masked_bits = *(unsigned int *)((char *)&g_15F2D9250 + record_word_offset);
  masked_bits_2 = *(unsigned int *)((char *)&g_15F2D9254 + record_word_offset);
  masked_bits_3 = *(unsigned int *)((char *)&g_15F2D9258 + record_word_offset);
  saved_record_word_offset = record_word_offset;
  state_address = (char *)&g_15F2DE1BC + record_word_offset;
  state_address_8 = (char *)&g_15F2DE1BC + record_word_offset;
  masked_bits_4 = 47LL * *(int *)((char *)&g_15F2D9228 + record_word_offset);
  weighted_sum = *(float *)&dword_140404A6C[masked_bits_4 + 18215729];
  weighted_sum_2 = *(float *)&dword_140404A6C[masked_bits_4 + 18215728];
  weighted_sum_3 = *(float *)&dword_140404A6C[masked_bits_4 + 18215727];
  masked_bits_5 = 47LL * *(int *)((char *)&g_15F2DE1BC + record_word_offset);
  weighted_sum_4 = *(float *)&dword_140404A6C[masked_bits_5 + 18215728];
  weighted_sum_5 = *(float *)&dword_140404A6C[masked_bits_5 + 18215729];
  weighted_sum_6 = *(float *)&dword_140404A6C[masked_bits_5 + 18215727];
  masked_bits_6 = *(int *)((char *)&g_15F2DE1C8 + record_word_offset);
  masked_bits_7 = 18LL * *(int *)((char *)&g_15F2DE1C4 + record_word_offset);
  *(float *)&dword_140404A6C[2 * masked_bits_7 + 485543033] = (float)((float)(weighted_sum_4 * weighted_sum) - (float)(weighted_sum_5 * weighted_sum_2)) * 0.0625;
  *(float *)&dword_140404A6C[2 * masked_bits_7 + 485543034] = (float)((float)(weighted_sum_3 * weighted_sum_5) - (float)(weighted_sum_6 * weighted_sum)) * 0.0625;
  *(float *)&dword_140404A6C[2 * masked_bits_7 + 485543035] = (float)((float)(weighted_sum_6 * weighted_sum_2) - (float)(weighted_sum_3 * weighted_sum_4)) * 0.0625;
  dword_140404A6C[2 * masked_bits_7 + 485543052] = 1;
  dword_140404A6C[2 * masked_bits_7 + 485543053] = masked_bits;
  dword_140404A6C[2 * masked_bits_7 + 485543054] = masked_bits_2;
  dword_140404A6C[2 * masked_bits_7 + 485543055] = masked_bits_3;
  weighted_sum_7 = *(float *)&dword_140404A6C[47 * masked_bits_6 + 18215728];
  weighted_sum_8 = *(float *)&dword_140404A6C[47 * masked_bits_6 + 18215729];
  masked_bits_8 = 18LL * *(int *)((char *)&g_15F2DE1D0 + record_word_offset);
  weighted_sum_9 = *(float *)&dword_140404A6C[47 * masked_bits_6 + 18215727];
  *(float *)&dword_140404A6C[2 * masked_bits_8 + 485543033] = (float)((float)(weighted_sum_7 * weighted_sum) - (float)(weighted_sum_8 * weighted_sum_2)) * 0.0625;
  *(float *)&dword_140404A6C[2 * masked_bits_8 + 485543034] = (float)((float)(weighted_sum_3 * weighted_sum_8) - (float)(weighted_sum_9 * weighted_sum)) * 0.0625;
  *(float *)&dword_140404A6C[2 * masked_bits_8 + 485543035] = (float)((float)(weighted_sum_9 * weighted_sum_2) - (float)(weighted_sum_3 * weighted_sum_7)) * 0.0625;
  dword_140404A6C[2 * masked_bits_8 + 485543052] = 1;
  dword_140404A6C[2 * masked_bits_8 + 485543053] = masked_bits;
  dword_140404A6C[2 * masked_bits_8 + 485543054] = masked_bits_2;
  dword_140404A6C[2 * masked_bits_8 + 485543055] = masked_bits_3;
  running_total = 0;
  state_address_2 = (int)(float)(*(float *)((char *)&g_15F2D92B0 + record_word_offset) * 0.015625);
  weighted_sum_10 = *(float *)((char *)&g_15F2D92BC + record_word_offset) * 0.015625;
  saved_state_address_2 = state_address_2;
  saved_weighted_sum = (int)weighted_sum_10;
  weighted_sum_11 = *(float *)((char *)&g_15F2D92B8 + record_word_offset) * 0.015625;
  LODWORD(packed_word_bits) = saved_weighted_sum;
  saved_weighted_sum_2 = (int)weighted_sum_11;
  state_address_3 = (int)(float)(*(float *)((char *)&g_15F2D92C4 + record_word_offset) * 0.015625);
  if ( (int)weighted_sum_11 <= state_address_3 )
  {
    iteration_count = saved_weighted_sum_2;
    remaining_count_3 = saved_weighted_sum_2;
    running_total_2 = 0;
    record_byte_offset = (__int64)saved_weighted_sum_2 << 6;
    remaining_count = (unsigned int)(state_address_3 - saved_weighted_sum_2 + 1);
    saved_remaining_count = (unsigned int)remaining_count;
    do
    {
      if ( iteration_count <= 0x3F && state_address_2 <= saved_weighted_sum )
      {
        element_index = state_address_2;
        remaining_count_2 = (unsigned int)(saved_weighted_sum - state_address_2 + 1);
        do
        {
          if ( element_index <= 0x3F )
          {
            scaled_index = (int)dword_140404A6C[9 * element_index + 254352099 + 9 * record_byte_offset];
            if ( (int)scaled_index > 0 )
            {
              crt_memcpy(
                (__m128i *)&callee_output_word[running_total_2 + 12292],
                (     __m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36 * (element_index + record_byte_offset) + 1021621756),
                4 * scaled_index);
              running_total += scaled_index;
              running_total_2 += scaled_index;
            }
          }
          ++element_index;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        iteration_count = remaining_count_3;
        state_address_2 = saved_state_address_2;
        remaining_count = saved_remaining_count;
        saved_weighted_sum = packed_word_bits;
      }
      ++iteration_count;
      record_byte_offset += 64;
      --remaining_count;
      remaining_count_3 = iteration_count;
      saved_remaining_count = remaining_count;
    }
    while ( remaining_count );
    record_word_offset = saved_record_word_offset;
    state_address = state_address_8;
  }
  saved_running_total = running_total;
  saved_record_word_offset = running_total;
  if ( running_total > 0 )
  {
    element_index_2 = 0;
    packed_word_bits = 0;
    do
    {
      table_value = callee_output_word[element_index_2 + 12292];
      scaled_index_2 = 15432 * table_value;
      if ( !dword_140404A6C[15432 * table_value + 358297501]
        && *(float *)&dword_140404A6C[scaled_index_2 + 358312926] <= *(float *)((char *)&g_15F2D92BC + record_word_offset)
        && *(float *)&dword_140404A6C[scaled_index_2 + 358312928] <= *(float *)((char *)&g_15F2D92C4 + record_word_offset)
        && *(float *)&dword_140404A6C[scaled_index_2 + 358312929] >= *(float *)((char *)&g_15F2D92B0 + record_word_offset)
        && *(float *)&dword_140404A6C[scaled_index_2 + 358312931] >= *(float *)((char *)&g_15F2D92B8 + record_word_offset) )
      {
        callee_output_word[0] = 0;
        callee_output_word[12289] = 0;
        sub_1401885C0(callee_output_word, table_value, 0);
        sub_1401885C0(callee_output_word, table_value, 1);
        saved_state_address = (int *)state_address;
        saved_remaining_count = (unsigned __int64)state_address;
        remaining_count_3 = 2;
        do
        {
          body = *saved_state_address;
          scaled_index_3 = 47 * body;
          state_address_4 = (float *)&dword_140404A6C[47 * body + 18215715];
          running_total_3 = (float *)dword_1402B34F8;
          do
          {
            product_difference = (float)(*(running_total_3 - 2) - 0.5) * 1.4349999;
            combined_products = (float)((float)(*running_total_3 - 0.5) + *running_total_3) - 0.5;
            state_address_5 = (float)((float)(product_difference * *(float *)&dword_140404A6C[scaled_index_3 + 18215725]) + state_address_4[1])
                + (float)(combined_products * *(float *)&dword_140404A6C[scaled_index_3 + 18215731]);
            state_address_6 = (float)((float)((float)(product_difference * *(float *)&dword_140404A6C[scaled_index_3 + 18215724]) + *state_address_4)
                        + (float)(combined_products * *(float *)&dword_140404A6C[scaled_index_3 + 18215730]))
                - (float)(*(float *)&dword_140404A6C[scaled_index_3 + 18215727] * 0.5);
            weighted_sum_12 = *(float *)&dword_140404A6C[scaled_index_3 + 18215729] * 0.5;
            state_address_7 = (float)((float)(product_difference * *(float *)&dword_140404A6C[scaled_index_3 + 18215726]) + state_address_4[2])
                + (float)(combined_products * *(float *)&dword_140404A6C[scaled_index_3 + 18215732]);
            weighted_sum_13 = *(float *)&dword_140404A6C[scaled_index_3 + 18215728] * 0.5;
            float_buffer[0] = state_address_6;
            component_delta = state_address_7 - weighted_sum_12;
            component_delta_2 = state_address_5 - weighted_sum_13;
            float_buffer[2] = component_delta;
            float_buffer[1] = component_delta_2;
            if ( sub_1400DA300((__int64)sr_train_track_hit, callee_output_word, (float *)&dword_140404A6C[47 * body + 18215715], float_buffer) )
            {
              scratch_buffer[12] = 1040187392;
              scratch_buffer[10] = 1040187392;
              product_difference_2 = state_address_6 - *state_address_4;
              scratch_buffer[8] = 0;
              *(float *)&float_word = component_delta_2 - state_address_4[1];
              *(float *)offset = product_difference_2;
              *(float *)&float_word_2 = component_delta - state_address_4[2];
              offset[1] = float_word;
              offset[2] = float_word_2;
              sr_physics_add_world_contact(
                body,
                offset,
                ((unsigned *)(void *)(sr_train_track_hit+3)),
                (float)((float)((float)(sr_train_track_hit[0] - state_address_6) * *(float *)((unsigned *)(void *)(sr_train_track_hit+3)))
                      + (float)((float)(sr_train_track_hit[1] - component_delta_2) * *(float *)&((unsigned *)(void *)(sr_train_track_hit+3))[1]))
              + (float)((float)(sr_train_track_hit[2] - component_delta) * *(float *)&((unsigned *)(void *)(sr_train_track_hit+3))[2]),
                0,
                0.125,
                0x3E000000u);
              *(unsigned int *)((char *)&g_15F2DE1B0 + record_word_offset) = table_value;
            }
            running_total_3 += 3;
            g_16B2A2EA0 = 0;
          }
          while ( (__int64)running_total_3 < (__int64)&dword_1402B3528 );
          saved_state_address = (int *)(saved_remaining_count + 12);
          comparison_result = remaining_count_3-- == 1;
          saved_remaining_count += 12LL;
        }
        while ( !comparison_result );
        element_index_2 = packed_word_bits;
        saved_running_total = saved_record_word_offset;
      }
      state_address = state_address_8;
      packed_word_bits = ++element_index_2;
    }
    while ( element_index_2 < saved_running_total );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef remaining_count_3
#undef saved_remaining_count
#undef packed_word_bits
#undef saved_state_address_2
#undef saved_record_word_offset
#undef state_address_8
#undef float_buffer
#undef offset
#undef callee_output_word
#undef unused_frame_slot_49552

//----- (000000014010CD40) ----------------------------------------------------
__int64            sub_14010CD40(__m128 *a1, float *a2, float *a3)
{
  __int64 result;
  float *component_sum;
  float *running_total;
  float product_difference;
  float component_delta;
  float component_delta_2;
  float product_difference_2;
  float component_delta_3;
  float component_delta_4;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  __int64 element_index;
  __int64 iteration_count;
  float *running_total_2;
  float *running_total_3;
  float scaled_value;
  float source_component_y;
  float product_difference_6;
  float product_difference_7;
  float product_difference_8;
  float product_difference_9;
  float product_difference_10;
  float product_difference_11;
  float product_difference_12;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float product_difference_13;
  float product_difference_14;
  float product_difference_15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010CD40[32];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_14010CD40 + 0)) /* [rsp+A8h] */
#define saved_scaled_ratio (*(float (*))(void *)(sr_frame_14010CD40 + 8)) /* [rsp+B0h] */
#define saved_scaled_ratio_2 (*(float (*))(void *)(sr_frame_14010CD40 + 24)) /* [rsp+C0h] */

  result = (__int64)&retaddr;
  component_sum = a3 + 1;
  running_total = a3 + 2;
  SR_VEC_PTR_LANES(128, a1, u64)[0] = 0;
  SR_VEC_PTR_LANES(128, a1, u64)[1] = 0;
  product_difference = a3[6] - *a3;
  component_delta = a3[7] - a3[1];
  component_delta_2 = a3[8] - a3[2];
  product_difference_2 = a3[3] - *a3;
  component_delta_3 = a3[4] - a3[1];
  component_delta_4 = a3[5] - a3[2];
  product_difference_3 = (float)(component_delta * component_delta_4) - (float)(component_delta_2 * component_delta_3);
  product_difference_4 = (float)(component_delta_2 * product_difference_2) - (float)(product_difference * component_delta_4);
  product_difference_5 = (float)(product_difference * component_delta_3) - (float)(component_delta * product_difference_2);
  square_root = fsqrt((float)((float)(product_difference_4 * product_difference_4) + (float)(product_difference_3 * product_difference_3)) + (float)(product_difference_5 * product_difference_5));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
  }
  else
  {
    scaled_ratio = (float)(1.0 / square_root) * product_difference_3;
    scaled_ratio_2 = (float)(1.0 / square_root) * product_difference_4;
    scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_5;
  }
  element_index = 0;
  saved_scaled_ratio_2 = scaled_ratio_2;
  saved_scaled_ratio = scaled_ratio;
  do
  {
    iteration_count = 0;
    running_total_2 = component_sum;
    do
    {
      if ( iteration_count != element_index )
      {
        result = iteration_count + 1;
        if ( iteration_count + 1 < 4 )
        {
          running_total_3 = running_total_2 + 4;
          do
          {
            if ( result != element_index )
            {
              scaled_value = *running_total_2;
              source_component_y = running_total_2[1];
              product_difference_6 = *(running_total_3 - 1) - *running_total_2;
              product_difference_7 = *(running_total_2 - 1);
              product_difference_8 = *running_total_3 - source_component_y;
              product_difference_9 = *(running_total_3 - 2) - product_difference_7;
              product_difference_10 = (float)(product_difference_6 * scaled_ratio_3) - (float)(product_difference_8 * scaled_ratio_2);
              product_difference_11 = (float)(product_difference_8 * scaled_ratio) - (float)(product_difference_9 * scaled_ratio_3);
              product_difference_12 = (float)(product_difference_9 * scaled_ratio_2) - (float)(product_difference_6 * scaled_ratio);
              square_root_2 = fsqrt((float)((float)(product_difference_11 * product_difference_11) + (float)(product_difference_10 * product_difference_10)) + (float)(product_difference_12 * product_difference_12));
              if ( square_root_2 == 0.0 )
              {
                scaled_ratio_4 = 0.0;
                scaled_ratio_5 = 0.0;
                scaled_ratio_6 = 0.0;
              }
              else
              {
                scaled_ratio_4 = (float)(1.0 / square_root_2) * product_difference_10;
                scaled_ratio_5 = (float)(1.0 / square_root_2) * product_difference_11;
                scaled_ratio_6 = (float)(1.0 / square_root_2) * product_difference_12;
              }
              product_difference_13 = *(running_total - 2) - product_difference_7;
              product_difference_14 = *(running_total - 1) - scaled_value;
              product_difference_15 = *running_total - source_component_y;
              if ( (float)((float)((float)(scaled_ratio_5 * product_difference_14) + (float)(scaled_ratio_4 * product_difference_13)) + (float)(scaled_ratio_6 * product_difference_15)) < 0.0 )
              {
                scaled_ratio_4 = -scaled_ratio_4;
                scaled_ratio_5 = -scaled_ratio_5;
                scaled_ratio_6 = -scaled_ratio_6;
              }
              SR_VEC_PTR_LANES(128, a1, f32)[element_index] = (float)((float)((float)((float)((float)(a2[1] - scaled_value) * scaled_ratio_5)
                                                        + (float)((float)(*a2 - product_difference_7) * scaled_ratio_4))
                                                + (float)((float)(a2[2] - source_component_y) * scaled_ratio_6))
                                        / (float)((float)((float)(scaled_ratio_5 * product_difference_14) + (float)(scaled_ratio_4 * product_difference_13)) + (float)(scaled_ratio_6 * product_difference_15)))
                                + SR_VEC_PTR_LANES(128, a1, f32)[element_index];
            }
            scaled_ratio = saved_scaled_ratio;
            ++result;
            scaled_ratio_2 = saved_scaled_ratio_2;
            running_total_3 += 3;
          }
          while ( result < 4 );
        }
      }
      scaled_ratio = saved_scaled_ratio;
      ++iteration_count;
      scaled_ratio_2 = saved_scaled_ratio_2;
      running_total_2 += 3;
    }
    while ( iteration_count < 4 );
    ++element_index;
    running_total += 3;
  }
  while ( element_index < 4 );
  *a1 = _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_140279310)), *a1);
  return result;
}
#undef retaddr
#undef saved_scaled_ratio
#undef saved_scaled_ratio_2

//----- (00000001401164B0) ----------------------------------------------------
__int64            sub_1401164B0(int a1, int a2)
{
  __int64 speaker;
  unsigned __int64 record_word_offset;
  __int64 speaker_2;
  __int64 scaled_index;
  __int64 record_word_offset_2;
  unsigned int *state_address;
       __m128i *text;
  __int64 result;
  __int64 iteration_count;
  unsigned int *state_address_2;
  __int64 scaled_index_2;
  __int64 speaker_3;
  __int64 scaled_index_3;
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  __int64 saved_record_word_offset;

  speaker = a1;
  if ( game_state == 3 )
    return sr_event_message(
             0,
             (     __m128i *)&dword_140404A6C[3597 * speaker + 71856372 + 21 * a2],
             speaker,
             dword_140404A6C[3597 * speaker + 71856369 + 21 * a2]);
  record_word_offset = 14388LL * a1;
  speaker_2 = (int)dword_140404A6C[record_word_offset / 4 + 71856292];
  if ( (_DWORD)speaker_2 == -1 )
    return sr_event_message(
             0,
             (     __m128i *)&dword_140404A6C[3597 * speaker + 71856372 + 21 * a2],
             speaker,
             dword_140404A6C[3597 * speaker + 71856369 + 21 * a2]);
  scaled_index = 7166 * speaker_2;
  if ( (int)dword_140404A6C[7166 * speaker_2 + 280651318] <= 0 )
    return sr_event_message(
             0,
             (     __m128i *)&dword_140404A6C[3597 * speaker + 71856372 + 21 * a2],
             speaker,
             dword_140404A6C[3597 * speaker + 71856369 + 21 * a2]);
  record_word_offset_2 = 84LL * a2;
  saved_record_word_offset = record_word_offset_2;
  state_address = (unsigned int *)((char *)&g_151620E30 + record_word_offset_2 + record_word_offset);
  text = (     __m128i *)((char *)&g_151620E3C + record_word_offset_2 + record_word_offset);
  result = sr_event_message(1u, text, speaker_2, *state_address);
  iteration_count = 0;
  state_address_2 = &dword_140404A6C[scaled_index + 280658140];
  do
  {
    if ( (int)*(state_address_2 - 1) > 0 )
    {
      scaled_index_2 = (int)*state_address_2;
      if ( !iteration_count && dword_140404A6C[1760 * scaled_index_2 + 278845898] == 25 )
      {
        speaker_3 = (int)dword_140404A6C[1760 * scaled_index_2 + 278845980];
        if ( (_DWORD)speaker_3 != -1 && dword_140404A6C[1760 * speaker_3 + 278845980] == (_DWORD)scaled_index_2 )
          result = sr_event_message(2u, text, speaker_3, *(unsigned int *)((char *)&g_151620E30 + record_word_offset_2 + record_word_offset));
      }
      if ( dword_140404A6C[1760 * scaled_index_2 + 278845898] == 26 )
      {
        scaled_index_3 = 257LL * (int)dword_140404A6C[1760 * scaled_index_2 + 278846111];
        result = dword_140404A6C[scaled_index_3 + 273270157];
        if ( (int)result > 0 )
        {
          remaining_count = (unsigned int)result;
          buffer_cursor = &dword_140404A6C[scaled_index_3 + 273270158];
          do
          {
            if ( (_DWORD)scaled_index_2 != *buffer_cursor )
              result = sr_event_message(2u, text, *buffer_cursor, *state_address);
            ++buffer_cursor;
            --remaining_count;
          }
          while ( remaining_count );
          record_word_offset_2 = saved_record_word_offset;
        }
      }
    }
    ++iteration_count;
    state_address_2 += 10;
  }
  while ( iteration_count < 2 );
  return result;
}

//----- (00000001401166B0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1401166B0(int a1)
{
  __int64 player_record_offset;
  __int64 table_value;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  double weighted_sum_4;
  float state_scalar;
  float scaled_value;
  signed int masked_bits;
  __int64 scaled_index;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401166B0[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401166B0 + 0)) /* [rsp+8h] */
#define rand_result (*(float (*))(void *)(sr_frame_1401166B0 + 32)) /* [rsp+28h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1401166B0 + 36)) /* [rsp+2Ch] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1401166B0 + 40)) /* [rsp+30h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_1401166B0 + 48)) /* [rsp+38h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_1401166B0 + 64)) /* [rsp+48h] */
#define frame_float_at_80 (*(float (*))(void *)(sr_frame_1401166B0 + 80)) /* [rsp+58h] */
#define unused_frame_slot_88 (*(sr_frame_i128 (*))(void *)(sr_frame_1401166B0 + 88)) /* [rsp+60h] */

  player_record_offset = 3597LL * a1;
  if ( (int)dword_140404A6C[player_record_offset + 71856276] < (int)g_183F7A5E0 )
  {
    table_value = (int)dword_140404A6C[player_record_offset + 71856286];
    if ( (unsigned int)table_value > 5 )
    {
      state_scalar = g_16B2A2EC8;
      scaled_value = *(float *)&g_16B2A2ED0;
      unused_written_slot = g_16B2A2ECC;
      rand_result = state_scalar
          + (float)((float)((float)(*(float *)&g_16B2A2ED4 - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      unused_written_slot_2 = scaled_value
          + (float)((float)((float)(*(float *)&g_16B2A2EDC - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      *(_QWORD *)&weighted_sum_4 = 3217625051LL;
    }
    else
    {
      matrix = xmmword_140278D30;
      cached_xmmword_140278d30 = xmmword_140278D30;
      frame_float_at_80 = 1.0;
      weighted_sum = *(float *)&dword_140404A6C[5873 * table_value + 283831498];
      weighted_sum_2 = *(float *)&dword_140404A6C[5873 * table_value + 283831499];
      weighted_sum_3 = *(float *)&dword_140404A6C[5873 * table_value + 283831500];
      weighted_sum_4 = *(float *)&dword_140404A6C[5873 * table_value + 283831497] + 1.570796326795;
      sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, sr_export_float_lane_container(sr_text_float_bits((float)(weighted_sum_4))) /* the original converts to float (cvtsd2ss) before this call */);
      rand_result = (float)(weighted_sum - (float)(*((float *)&cached_xmmword_140278d30 + 2) * 4.0)) + (float)(*(float *)&matrix * 18.0);
      unused_written_slot = (float)((float)(weighted_sum_2 - 0.5) - (float)(*((float *)&cached_xmmword_140278d30 + 3) * 4.0)) + (float)(*((float *)&matrix + 1) * 18.0);
      unused_written_slot_2 = (float)(weighted_sum_3 - (float)(frame_float_at_80 * 4.0)) + (float)(*((float *)&matrix + 2) * 18.0);
    }
    frame_float_at_80 = 1.0;
    matrix = xmmword_140278D30;
    cached_xmmword_140278d30 = xmmword_140278D30;
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, sr_export_float_lane_container(sr_text_float_bits((float)(weighted_sum_4))) /* the original converts to float (cvtsd2ss) before this call */);
    masked_bits = sub_140053840(&rand_result, (float *)&matrix, a1);
    dword_140404A6C[player_record_offset + 71856292] = masked_bits;
    if ( masked_bits != -1 )
    {
      scaled_index = 7166LL * masked_bits;
      dword_140404A6C[scaled_index + 280651306] = dword_140404A6C[player_record_offset + 71856268];
      dword_140404A6C[scaled_index + 280651341] = LODWORD(weighted_sum_4);
      sr_event_player_update(a1);
      sr_event_player_finance(a1);
      dword_140404A6C[player_record_offset + 71856342] = 0;
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef rand_result
#undef unused_written_slot
#undef unused_written_slot_2
#undef matrix
#undef cached_xmmword_140278d30
#undef frame_float_at_80
#undef unused_frame_slot_88

//----- (0000000140116A40) ----------------------------------------------------
__int64            sub_140116A40(int a1,      __m128i *a2)
{
  __int64 element_index;
  unsigned __int64 byte_count;
  __int64 player_record_offset;
  __int64 result;

  element_index = -1;
  do
    ++element_index;
  while ( SR_VEC_PTR_LANES(128, a2, i8)[element_index] );
  byte_count = element_index & 0x3F;
  player_record_offset = 3597LL * a1;
  dword_140404A6C[21 * (int)dword_140404A6C[player_record_offset + 71856362] + 71856367 + player_record_offset] = 1;
  dword_140404A6C[21 * (int)dword_140404A6C[player_record_offset + 71856362] + 71856368 + player_record_offset] = byte_count;
  crt_memcpy((__m128i *)&dword_140404A6C[21 * (int)dword_140404A6C[player_record_offset + 71856362] + 71856372 + player_record_offset], a2, byte_count);
  dword_140404A6C[21 * (int)dword_140404A6C[player_record_offset + 71856362] + 71856369 + player_record_offset] = g_183E93544;
  result = ((unsigned __int8)dword_140404A6C[player_record_offset + 71856362] + 1) & 0x3F;
  dword_140404A6C[player_record_offset + 71856362] = result;
  return result;
}

//----- (0000000140116B00) ----------------------------------------------------
__int64            sub_140116B00(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 player_record_offset;
  __int64 result;

  player_record_offset = 3597LL * a1;
  dword_140404A6C[21 * (int)dword_140404A6C[player_record_offset + 71856362] + 71856367 + player_record_offset] = 3;
  dword_140404A6C[21 * (int)dword_140404A6C[player_record_offset + 71856362] + 71856368 + player_record_offset] = a2;
  dword_140404A6C[21 * (int)dword_140404A6C[player_record_offset + 71856362] + 71856369 + player_record_offset] = a3;
  dword_140404A6C[21 * (int)dword_140404A6C[player_record_offset + 71856362] + 71856370 + player_record_offset] = a4;
  result = ((unsigned __int8)dword_140404A6C[player_record_offset + 71856362] + 1) & 0x3F;
  dword_140404A6C[player_record_offset + 71856362] = result;
  return result;
}

//----- (0000000140116CA0) ----------------------------------------------------
unsigned int *           sub_140116CA0(int a1)
{
  unsigned int *result;
  __int64 player_record_offset;
  __int64 table_value;
  __int64 remaining_count;
  unsigned int *state_address;
  __int64 remaining_count_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;

  result = (unsigned int *)a1;
  player_record_offset = 3597LL * a1;
  table_value = (int)dword_140404A6C[player_record_offset + 71856292];
  if ( (_DWORD)table_value != -1 )
  {
    sub_14011AF80(a1, dword_140404A6C[player_record_offset + 71856288]);
    result = &g_1832A4DDC;
    remaining_count = 7;
    state_address = &dword_140404A6C[7166 * table_value + 280658140];
    do
    {
      remaining_count_2 = (int)*(state_address - 1);
      if ( remaining_count_2 > 0 )
      {
        result = state_address;
        do
        {
          scaled_index = (int)*result;
          if ( dword_140404A6C[1760 * scaled_index + 278845898] == 27 )
          {
            scaled_index_2 = (int)dword_140404A6C[1760 * scaled_index + 278846053];
            if ( (unsigned int)scaled_index_2 <= 0x1FF )
            {
              scaled_index_3 = 5210 * scaled_index_2;
              if ( dword_140404A6C[5210 * scaled_index_2 + 129716709] )
              {
                if ( (int)dword_140404A6C[scaled_index_3 + 129716712] > 0 )
                  dword_140404A6C[player_record_offset + 71856272] += dword_140404A6C[24944 * dword_140404A6C[scaled_index_3 + 129716710] + 346707730];
              }
            }
          }
          ++result;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      state_address += 10;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

//----- (0000000140117020) ----------------------------------------------------
__int64            sub_140117020(int a1)
{
  __int64 result;
  __int64 player_record_offset;
  __int64 human;
  unsigned int table_value;
  int slot;
  unsigned int *state_address;
  float weighted_sum;
  signed int iteration_count;
  int *running_total;
  unsigned int *running_total_2;
  __int64 createitem_result;
  __int64 scaled_index;
  signed int createitem_result_2;
  unsigned int saved_call_status;
  signed int createitem_result_3;
  signed int createitem_result_4;
  __int64 saved_createitem_result;
  int loaded_word;
  unsigned int *record_byte_offset;
  __int64 remaining_count;
  signed int createitem_result_5;
  __int64 scaled_index_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140117020[128];
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140117020 + 0)) /* [rsp+20h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_140117020 + 16)) /* [rsp+30h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140117020 + 48)) /* [rsp+50h] */
#define cached_table_value (*(unsigned int (*))(void *)(sr_frame_140117020 + 112)) /* [rsp+90h] */

  result = a1;
  player_record_offset = 3597LL * a1;
  human = (int)dword_140404A6C[player_record_offset + 71856292];
  table_value = dword_140404A6C[player_record_offset + 71856286];
  cached_table_value = table_value;
  if ( (_DWORD)human != -1 )
  {
    result = (__int64)&g_18329E52C;
    slot = 0;
    state_address = &dword_140404A6C[player_record_offset + 71857786];
    weighted_sum = *(float *)&dword_140404A6C[7166 * human + 280651441];
    LODWORD(float_buffer[0]) = dword_140404A6C[7166 * human + 280651440];
    LODWORD(float_buffer[2]) = dword_140404A6C[7166 * human + 280651442];
    float_buffer[1] = weighted_sum;
    unused_written_slot = 1065353216;
    scratch_buffer[0] = xmmword_140278D30;
    scratch_buffer[1] = xmmword_140278D30;
    do
    {
      iteration_count = 0;
      if ( (int)*state_address > 0 )
      {
        running_total = (int *)(state_address + 2);
        running_total_2 = state_address + 2;
        do
        {
          result = *(running_total_2 - 1);
          if ( (int)result > 14 )
          {
            if ( (_DWORD)result == 27 )
            {
              if ( game_type == 4 )
              {
                createitem_result_4 = sr_CreateItem(27, float_buffer, nullptr, (float *)scratch_buffer);
                saved_createitem_result = createitem_result_4;
                sr_item_transfer(createitem_result_4, -1, human, slot);
                result = g_16B2A2EE0;
                if ( (int)g_16B2A2EE0 > 0 )
                {
                  loaded_word = *running_total;
                  record_byte_offset = &g_16B2A2EEC;
                  remaining_count = g_16B2A2EE0;
                  do
                  {
                    if ( record_byte_offset[1] == loaded_word )
                    {
                      result = *record_byte_offset;
                      dword_140404A6C[1760 * saved_createitem_result + 278846053] = result;
                    }
                    record_byte_offset += 16;
                    --remaining_count;
                  }
                  while ( remaining_count );
                  table_value = cached_table_value;
                }
              }
              else if ( table_value <= 2 )
              {
                result = sub_1400F00D0(*running_total_2, table_value, running_total_2[1]);
                saved_call_status = result;
                if ( (_DWORD)result != -1 )
                {
                  createitem_result_3 = sr_CreateItem(27, float_buffer, nullptr, (float *)scratch_buffer);
                  dword_140404A6C[1760 * createitem_result_3 + 278846053] = saved_call_status;
                  result = sr_item_transfer(createitem_result_3, -1, human, slot);
                }
              }
            }
            else if ( (_DWORD)result == 18 )
            {
              createitem_result_5 = sr_CreateItem(18, float_buffer, nullptr, (float *)scratch_buffer);
              scaled_index_2 = 1760LL * createitem_result_5;
              dword_140404A6C[scaled_index_2 + 278846062] = *running_total_2;
              dword_140404A6C[scaled_index_2 + 278846063] = running_total_2[1];
              result = sr_item_transfer(createitem_result_5, -1, human, slot);
            }
          }
          else
          {
            createitem_result = (int)sr_CreateItem(result, float_buffer, nullptr, (float *)scratch_buffer);
            scaled_index = (int)*(running_total_2 - 1);
            if ( dword_140404A6C[1268 * scaled_index + 278521289] )
            {
              if ( (int)*running_total_2 > 0 )
              {
                createitem_result_2 = sr_CreateItem((int)scaled_index + 1, float_buffer, nullptr, (float *)scratch_buffer);
                dword_140404A6C[1760 * createitem_result_2 + 278845974] = running_total_2[1];
                sr_item_transfer(createitem_result, createitem_result_2, -1, 0);
              }
            }
            else
            {
              dword_140404A6C[1760 * createitem_result + 278845974] = running_total_2[1];
            }
            result = sr_item_transfer(createitem_result, -1, human, slot);
          }
          ++iteration_count;
          running_total += 3;
          running_total_2 += 3;
        }
        while ( iteration_count < (int)*state_address );
      }
      ++slot;
      state_address += 25;
    }
    while ( slot < 7 );
  }
  return result;
}
#undef float_buffer
#undef scratch_buffer
#undef unused_written_slot
#undef cached_table_value

//----- (0000000140117820) ----------------------------------------------------
void            sub_140117820(unsigned int a1)
{
  __int64 input_value;
  bool comparison_result;
  int iteration_count;
  unsigned int *buffer_cursor;
  signed int state_word;
  signed int iteration_count_2;
  unsigned int scaled_index;
  unsigned int *buffer_cursor_2;

  if ( a1 <= 0xFF )
  {
    input_value = (int)a1;
    comparison_result = dword_140404A6C[a1 + 284023074] == 1;
    dword_140404A6C[a1 + 284023074] ^= 1u;
    if ( comparison_result )
    {
      state_word = g_183F7B2F4;
      iteration_count_2 = 0;
      if ( (int)g_183F7B2F4 > 0 )
      {
        scaled_index = dword_140404A6C[3597 * input_value + 71856265];
        buffer_cursor_2 = &g_183F7B2F8;
        do
        {
          if ( *buffer_cursor_2 == scaled_index )
          {
            g_183F7B2F4 = state_word - 1;
            *buffer_cursor_2 = dword_140404A6C[state_word + 284023330];
            state_word = g_183F7B2F4;
          }
          else
          {
            ++iteration_count_2;
            ++buffer_cursor_2;
          }
        }
        while ( iteration_count_2 < state_word );
      }
    }
    else
    {
      iteration_count = 0;
      if ( (int)g_183F7B2F4 <= 0 )
      {
LABEL_7:
        if ( (int)g_183F7B2F4 < 1024 )
        {
          dword_140404A6C[g_183F7B2F4 + 284023331] = dword_140404A6C[3597 * a1 + 71856265];
          ++g_183F7B2F4;
        }
      }
      else
      {
        buffer_cursor = &g_183F7B2F8;
        while ( *buffer_cursor != dword_140404A6C[3597 * a1 + 71856265] )
        {
          ++iteration_count;
          ++buffer_cursor;
          if ( iteration_count >= (int)g_183F7B2F4 )
            goto LABEL_7;
        }
      }
    }
  }
}

//----- (00000001401189F0) ----------------------------------------------------
__int64            sub_1401189F0(int a1, int a2)
{
  __int64 result;
  __int64 player_record_offset;
  __int64 table_value;
  int table_value_2;
  __int64 scaled_index;
  float component_sum;
  float weighted_sum;

  result = a1;
  player_record_offset = 3597LL * a1;
  table_value = (int)dword_140404A6C[player_record_offset + 71856286];
  if ( (_DWORD)table_value != -1 )
  {
    table_value_2 = dword_140404A6C[player_record_offset + 71856288];
    if ( table_value_2 < 10000 )
    {
      result = (unsigned int)(table_value_2 + a2);
      if ( (int)result >= 10000 )
        a2 = 10000 - table_value_2;
    }
    else
    {
      a2 = 0;
    }
    scaled_index = 3 * table_value;
    component_sum = (float)(int)dword_140404A6C[player_record_offset + 71856272];
    weighted_sum = (float)a2 * *(float *)&dword_140404A6C[2 * scaled_index + 335047062];
    if ( component_sum > weighted_sum )
    {
      dword_140404A6C[2 * scaled_index + 335047061] += a2;
      dword_140404A6C[player_record_offset + 71856272] = (int)(float)(component_sum - weighted_sum);
      result = (unsigned int)(table_value_2 + a2);
      dword_140404A6C[player_record_offset + 71856288] = result;
    }
  }
  return result;
}

//----- (000000014011AF80) ----------------------------------------------------
__int64            sub_14011AF80(int a1, int a2)
{
  __int64 player_record_offset;
  __int64 result;
  signed int table_value;
  __int64 scaled_index;
  __int64 remaining_count;
  float scaled_ratio;
  unsigned int *state_address;
  int scaled_index_2;
  int scaled_index_3;
  int scaled_index_4;
  int cached_scaled_index;
  int scaled_index_5;
  signed int scaled_index_6;
  int table_value_2;
  int scaled_index_7;
  int scaled_index_8;
  int cached_scaled_index_2;
  int table_value_3;
  int scaled_index_9;
  int scaled_index_10;
  int cached_scaled_index_3;
  int table_value_4;
  int scaled_index_11;
  int scaled_index_12;
  int cached_scaled_index_4;
  int table_value_5;
  int scaled_index_13;
  int scaled_index_14;
  int cached_scaled_index_5;
  int table_value_6;
  int scaled_index_15;
  int scaled_index_16;
  int cached_scaled_index_6;
  int table_value_7;
  int scaled_index_17;
  int scaled_index_18;
  int cached_scaled_index_7;
  float selected_scalar;
  __m128i converted_vector;

  player_record_offset = 3597LL * a1;
  result = (int)dword_140404A6C[player_record_offset + 71856286];
  if ( (unsigned int)result <= 5 )
  {
    table_value = dword_140404A6C[player_record_offset + 71856288];
    if ( table_value >= a2 )
    {
      scaled_index = 3 * result;
      remaining_count = 2;
      scaled_ratio = *(float *)&dword_140404A6C[6 * result + 335047062];
      state_address = &dword_140404A6C[5873 * result + 283831886];
      do
      {
        if ( *(state_address - 298) )
        {
          scaled_index_2 = *(state_address - 279);
          if ( scaled_index_2 > 0 )
          {
            scaled_index_3 = scaled_index_2 - dword_140404A6C[2 * scaled_index + 335047066];
            scaled_index_4 = dword_140404A6C[2 * scaled_index + 335047061];
            if ( scaled_index_4 > 0 )
            {
              cached_scaled_index = 0;
              if ( scaled_index_3 >= 0 )
                cached_scaled_index = scaled_index_3;
              scaled_ratio = scaled_ratio - (float)((float)cached_scaled_index / (float)scaled_index_4);
            }
          }
        }
        if ( *(state_address - 19) )
        {
          if ( (int)*state_address > 0 )
          {
            scaled_index_5 = dword_140404A6C[2 * scaled_index + 335047061];
            if ( scaled_index_5 > 0 )
            {
              scaled_index_6 = 0;
              if ( (int)(*state_address - dword_140404A6C[2 * scaled_index + 335047066]) >= 0 )
                scaled_index_6 = *state_address - dword_140404A6C[2 * scaled_index + 335047066];
              scaled_ratio = scaled_ratio - (float)((float)scaled_index_6 / (float)scaled_index_5);
            }
          }
        }
        if ( state_address[260] )
        {
          table_value_2 = state_address[279];
          if ( table_value_2 > 0 )
          {
            scaled_index_7 = table_value_2 - dword_140404A6C[2 * scaled_index + 335047066];
            scaled_index_8 = dword_140404A6C[2 * scaled_index + 335047061];
            if ( scaled_index_8 > 0 )
            {
              cached_scaled_index_2 = 0;
              if ( scaled_index_7 >= 0 )
                cached_scaled_index_2 = scaled_index_7;
              scaled_ratio = scaled_ratio - (float)((float)cached_scaled_index_2 / (float)scaled_index_8);
            }
          }
        }
        if ( state_address[539] )
        {
          table_value_3 = state_address[558];
          if ( table_value_3 > 0 )
          {
            scaled_index_9 = table_value_3 - dword_140404A6C[2 * scaled_index + 335047066];
            scaled_index_10 = dword_140404A6C[2 * scaled_index + 335047061];
            if ( scaled_index_10 > 0 )
            {
              cached_scaled_index_3 = 0;
              if ( scaled_index_9 >= 0 )
                cached_scaled_index_3 = scaled_index_9;
              scaled_ratio = scaled_ratio - (float)((float)cached_scaled_index_3 / (float)scaled_index_10);
            }
          }
        }
        if ( state_address[818] )
        {
          table_value_4 = state_address[837];
          if ( table_value_4 > 0 )
          {
            scaled_index_11 = table_value_4 - dword_140404A6C[2 * scaled_index + 335047066];
            scaled_index_12 = dword_140404A6C[2 * scaled_index + 335047061];
            if ( scaled_index_12 > 0 )
            {
              cached_scaled_index_4 = 0;
              if ( scaled_index_11 >= 0 )
                cached_scaled_index_4 = scaled_index_11;
              scaled_ratio = scaled_ratio - (float)((float)cached_scaled_index_4 / (float)scaled_index_12);
            }
          }
        }
        if ( state_address[1097] )
        {
          table_value_5 = state_address[1116];
          if ( table_value_5 > 0 )
          {
            scaled_index_13 = table_value_5 - dword_140404A6C[2 * scaled_index + 335047066];
            scaled_index_14 = dword_140404A6C[2 * scaled_index + 335047061];
            if ( scaled_index_14 > 0 )
            {
              cached_scaled_index_5 = 0;
              if ( scaled_index_13 >= 0 )
                cached_scaled_index_5 = scaled_index_13;
              scaled_ratio = scaled_ratio - (float)((float)cached_scaled_index_5 / (float)scaled_index_14);
            }
          }
        }
        if ( state_address[1376] )
        {
          table_value_6 = state_address[1395];
          if ( table_value_6 > 0 )
          {
            scaled_index_15 = table_value_6 - dword_140404A6C[2 * scaled_index + 335047066];
            scaled_index_16 = dword_140404A6C[2 * scaled_index + 335047061];
            if ( scaled_index_16 > 0 )
            {
              cached_scaled_index_6 = 0;
              if ( scaled_index_15 >= 0 )
                cached_scaled_index_6 = scaled_index_15;
              scaled_ratio = scaled_ratio - (float)((float)cached_scaled_index_6 / (float)scaled_index_16);
            }
          }
        }
        if ( state_address[1655] )
        {
          table_value_7 = state_address[1674];
          if ( table_value_7 > 0 )
          {
            scaled_index_17 = table_value_7 - dword_140404A6C[2 * scaled_index + 335047066];
            scaled_index_18 = dword_140404A6C[2 * scaled_index + 335047061];
            if ( scaled_index_18 > 0 )
            {
              cached_scaled_index_7 = 0;
              if ( scaled_index_17 >= 0 )
                cached_scaled_index_7 = scaled_index_17;
              scaled_ratio = scaled_ratio - (float)((float)cached_scaled_index_7 / (float)scaled_index_18);
            }
          }
        }
        state_address += 2232;
        --remaining_count;
      }
      while ( remaining_count );
      selected_scalar = 0.94999999;
      if ( game_type == 3 )
        selected_scalar = 0.98000002;
      converted_vector = _mm_cvtsi32_si128(dword_140404A6C[player_record_offset + 71856272]);
      dword_140404A6C[2 * scaled_index + 335047061] -= a2;
      dword_140404A6C[player_record_offset + 71856288] = table_value - a2;
      result = (unsigned int)(int)(float)((float)((float)(selected_scalar * scaled_ratio) * (float)a2) + SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0]);
      dword_140404A6C[player_record_offset + 71856272] = result;
    }
  }
  return result;
}

//----- (000000014011B7F0) ----------------------------------------------------
__int64            sub_14011B7F0(int a1, int a2)
{
  __int64 player_record_offset;
  int table_value;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011B7F0[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14011B7F0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_14011B7F0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_14011B7F0 + 560)) /* [rsp+230h] */

  if ( (unsigned int)a1 <= 0xFF )
  {
    player_record_offset = 3597LL * a1;
    if ( !dword_140404A6C[player_record_offset + 71856277] && a2 > 0 && game_type - 4 > 1 )
    {
      crt_sprintf(
        scratch_buffer,
        "%s(%d) team damage: %d",
        (     char *)&dword_140404A6C[player_record_offset + 71856254],
        dword_140404A6C[player_record_offset + 71856265],
        a2);
      table_value = dword_140404A6C[player_record_offset + 71856292];
      if ( table_value != -1 )
        sub_1400A9760(table_value, 3u, 0, (signed int)(a2 * g_183EBFCE8) / 100);
      sr_event_player_update(a1);
      sr_event_player_finance(a1);
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (000000014011BD10) ----------------------------------------------------
__int64 sub_14011BD10(     char *a1, ...)
{
  char *returned_pointer;
  __int64 *returned_pointer_2;
  va_list va;

  va_start(va, a1);
  returned_pointer = sub_14020B528(1u);
  returned_pointer_2 = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*returned_pointer_2, (__int64)returned_pointer, (__int64)a1, 0, (__int64)va);
}

//----- (000000014011BD70) ----------------------------------------------------
__int64            sub_14011BD70(signed int a1)
{
  int byte2_result;
  char hibyte_result;
  int masked_bits;
  signed int saved_masked_bits;
  __int64 scaled_index;
  __int64 scaled_index_2;
  int byte_count;
  signed int shifted_bits;
  unsigned int shifted_bits_2;

  crt_memcpy((__m128i *)&g_185A2D7F0, (     __m128i *)&packet_in_data, a1);
  byte2_result = BYTE2(g_185A2D7F4);
  hibyte_result = HIBYTE(g_185A2D7F4);
  g_185A2D7EC = 1;
  *(_QWORD *)&g_185A2D7E0 = 8;
  g_185A2D7E8 = a1;
  if ( BYTE2(g_185A2D7F4) >= 0x10u || HIBYTE(g_185A2D7F4) > 0x10u )
    return 0;
  masked_bits = g_1853BD428;
  saved_masked_bits = -1;
  while ( masked_bits != g_1853BD42C )
  {
    if ( dword_140404A6C[16387 * masked_bits + 289333873] == LOWORD(g_185A2D7F4) )
      saved_masked_bits = masked_bits;
    else
      masked_bits = ((_BYTE)masked_bits + 1) & 0x3F;
    if ( saved_masked_bits != -1 )
      goto LABEL_12;
  }
  scaled_index = 16387LL * (int)g_1853BD42C;
  saved_masked_bits = g_1853BD42C;
  dword_140404A6C[scaled_index + 289333873] = LOWORD(g_185A2D7F4);
  *(_QWORD *)&dword_140404A6C[scaled_index + 289333874] = 0;
  g_1853BD42C = (LOBYTE(g_1853BD42C) + 1) & 0x3F;
  if ( g_1853BD428 == g_1853BD42C )
    g_1853BD428 = (LOBYTE(g_1853BD428) + 1) & 0x3F;
LABEL_12:
  scaled_index_2 = 16387LL * saved_masked_bits;
  byte_count = a1 - 8;
  crt_memcpy(
    (__m128i *)((char *)&dword_140404A6C[scaled_index_2 + 289333876] + (unsigned int)(byte2_result << 10)),
    (     __m128i *)&g_185A2D7F8,
    byte_count);
  shifted_bits = byte_count + (byte2_result << 10);
  if ( (int)dword_140404A6C[scaled_index_2 + 289333875] < shifted_bits )
    dword_140404A6C[scaled_index_2 + 289333875] = shifted_bits;
  shifted_bits_2 = dword_140404A6C[scaled_index_2 + 289333874] | (1 << byte2_result);
  dword_140404A6C[scaled_index_2 + 289333874] = shifted_bits_2;
  if ( (((1 << hibyte_result) - 1) & shifted_bits_2) != (1 << hibyte_result) - 1 )
    return 0;
  *(_QWORD *)&packet_in_byte = 4;
  crt_memcpy(
    (__m128i *)&packet_in_data,
    (     __m128i *)&dword_140404A6C[scaled_index_2 + 289333876],
    (int)dword_140404A6C[scaled_index_2 + 289333875]);
  return dword_140404A6C[scaled_index_2 + 289333875];
}

//----- (000000014011C730) ----------------------------------------------------
__int64            sub_14011C730(__int64 a1, __int64 a2, __int64 a3)
{
  if ( g_183EBFD5C )
    sub_140198F0B(1, a2, a3);
  sub_14013D1B0();
  return render_cache_camera_uniforms_candidate();
}

//----- (000000014011C950) ----------------------------------------------------
double sub_14011C950()
{
  __int64 unused_local;
  __int64 unused_local_2;
  unsigned int *state_address;
  __int64 i;
  __int64 unused_local_3;
  __int64 unrecovered_register_value;
  double result;

  if ( !g_18B7D2FBC && !g_18DCF901C )
  {
    g_1A724E600 = xmmword_140278D30;
    g_1A724E610 = xmmword_140278D80;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    glUseProgram(shadow_program);
    glUniformMatrix4fv(shadow_u_modelmatrix, 1, 0, (unsigned int *)&g_1A724E600);
    glUniformMatrix4fv(shadow_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glUniformMatrix4fv(shadow_u_projectionmatrix, 1, 0, (unsigned int *)&g_1A724E580);
    glUniformMatrix4fv(shadow_u_viewmatrix, 1, 0, (unsigned int *)&g_1A724E5C0);
    glUniform3fv(shadow_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
    glBindBuffer(34963, dword_140404A6C[2 * g_183E98C14 + 283793813]);
    glEnableVertexAttribArray(0);
    state_address = &g_154161244;
    for ( i = 0; i < 98304; i += 24 )
    {
      if ( *(state_address - 1) )
      {
        /* sr_item_shadow_uniform: original MAXSS/DIVSS/CVTDQ2PS/MULSS order. */
        __m128 sr_shadow_denom=_mm_max_ss(_mm_set_ss(g_18417DE7C),_mm_set_ss(0.125f));
        __m128 sr_shadow_recip=_mm_div_ss(_mm_set_ss(8.0f),sr_shadow_denom);
        int32_t sr_shadow_age=(int32_t)(state_address[6150]+1u);
        __m128 sr_shadow_value=_mm_cvtepi32_ps(_mm_setr_epi32(sr_shadow_age,0,0,0));
        sr_shadow_value=_mm_mul_ss(sr_shadow_value,_mm_set_ss(*(float *)&dword_140404A6C[111579653+263004*(int64_t)(int32_t)*state_address]));
        sr_shadow_value=_mm_mul_ss(sr_shadow_value,sr_shadow_recip);
        glUniform1f((int)shadow_u_shadowlength,_mm_cvtss_f32(sr_shadow_value));
        /* sr_item_shadow_uniform_end */
        glVertexAttribPointer(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[312324436+3074*((int64_t)(int32_t)dword_140404A6C[i/4+315472211])+3*((int64_t)(int32_t)dword_140404A6C[(i/4+315472211)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[i/4+315472211])*g_18AB70FAC)));
        (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*state_address[6154]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[322062700+3074*((int64_t)(int32_t)dword_140404A6C[i/4+325210475])+3*((int64_t)(int32_t)dword_140404A6C[(i/4+325210475)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[i/4+325210475])*g_18D09700C)));
      }
      state_address += 6930;
    }
    glDisableVertexAttribArray(0);
    glBindBuffer(34963, 0);
    return ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34962, 0, unrecovered_register_value);
  }
  return result;
}

//----- (000000014011CC30) ----------------------------------------------------
__int64            sub_14011CC30(int a1)
{
  unsigned int call_result;
  float state_scalar;
  float state_scalar_2;
  unsigned int *state_address;
  float state_scalar_3;
  __int64 remaining_count;
  float float_word;
  unsigned int *state_address_2;
  unsigned int state_word;
  __int64 remaining_count_2;
  int table_value;
  int table_value_2;
  int scaled_index;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float combined_products;
  __int64 integer_difference;
  unsigned int *state_address_3;
  signed int i;
  signed int iteration_count;
  _BYTE *record_byte_offset;
  char *byte_cursor;
  float state_scalar_4;
  unsigned int *state_address_4;
  float state_scalar_5;
  float state_scalar_6;
  int iteration_count_2;
  float state_scalar_7;
  unsigned int state_word_2;
  int selection_flag;
  int cached_selection_flag;
  int cached_selection_flag_2;
  int cached_selection_flag_3;
  float comparison_operand;
  float weighted_sum;
  float weighted_sum_2;
  int *saved_state_address;
  int *state_address_5;
  int cached_input_value;
  int table_value_3;
  int table_value_4;
  int scaled_index_2;
  int table_value_5;
  float weighted_sum_3;
  float source_component_z;
  int table_value_6;
  _DWORD *running_total;
  __int64 remaining_count_3;
  __int64 loaded_word;
  __int64 table_value_7;
  __int64 loaded_word_2;
  __int64 table_value_8;
  unsigned int *state_address_6;
  __int64 shifted_bits;
  int integer_quotient;
  __int64 scaled_index_3;
  int state_word_3;
  int iteration_count_3;
  unsigned int *buffer_cursor;
  float *state_address_7;
  __int64 remaining_count_4;
  float scaled_value_4;
  __int64 element_index;
  __int64 table_value_9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011CC30[128];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_14011CC30 + 8)) /* [rsp+8h] */
#define weighted_sum_4 (*(float (*))(void *)(sr_frame_14011CC30 + 40)) /* [rsp+28h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14011CC30 + 44)) /* [rsp+2Ch] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_14011CC30 + 48)) /* [rsp+30h] */
#define input_value (*(int (*))(void *)(sr_frame_14011CC30 + 56)) /* [rsp+38h] */
#define weighted_sum_5 (*(float (*))(void *)(sr_frame_14011CC30 + 64)) /* [rsp+40h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_14011CC30 + 68)) /* [rsp+44h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_14011CC30 + 72)) /* [rsp+48h] */
#define integer_difference_2 (*(__int64 (*))(void *)(sr_frame_14011CC30 + 80)) /* [rsp+50h] */
#define state_address_8 (*(unsigned int * (*))(void *)(sr_frame_14011CC30 + 88)) /* [rsp+58h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_14011CC30 + 96)) /* [rsp+60h] */
#define unused_frame_slot_112 (*(__int128 (*))(void *)(sr_frame_14011CC30 + 112)) /* [rsp+70h] */

  input_value = a1;
  crt_memset((void *)(uintptr_t)(&g_149F54C20), 0, 0x400u);
  g_150F55020 = 0;
  g_150F61024 = 0;
  call_result = sub_140198F9B();
  state_scalar = g_15ADA9280;
  state_scalar_2 = g_183F7C54C;
  state_address = &g_154167E7C;
  state_scalar_3 = g_183F7C548;
  remaining_count = 4096;
  float_word = g_183F7C544;
  state_address_2 = &g_154167258;
  state_word = g_183F7CB60;
  remaining_count_2 = 4096;
  state_address_8 = &g_154167258;
  g_150F61028 = call_result;
  do
  {
    if ( *(state_address_2 - 6150) )
    {
      state_address_2[775] = 0;
      *(_QWORD *)(state_address - 1) = 0;
      *(_QWORD *)(state_address + 1) = 0;
      table_value = state_address_2[1];
      table_value_2 = state_address_2[2];
      scaled_index = *state_address_2 + 1;
      scaled_value = (float)(int)*state_address_2 * 8.0;
      scaled_value_2 = (float)table_value * 8.0;
      unused_written_slot = (float)(scaled_value_2 * state_scalar) - 8.0;
      scaled_value_3 = (float)table_value_2 * 8.0;
      unused_written_slot_2 = (float)(scaled_value_3 * state_scalar) - 8.0;
      combined_products = (float)((float)((float)(state_scalar_3 - (float)((float)(scaled_value_2 + 4.0) * state_scalar))
                          * (float)(state_scalar_3 - (float)((float)(scaled_value_2 + 4.0) * state_scalar)))
                  + (float)((float)(float_word - (float)((float)(scaled_value + 4.0) * state_scalar))
                          * (float)(float_word - (float)((float)(scaled_value + 4.0) * state_scalar))))
          + (float)((float)(state_scalar_2 - (float)((float)(scaled_value_3 + 4.0) * state_scalar)) * (float)(state_scalar_2 - (float)((float)(scaled_value_3 + 4.0) * state_scalar)));
      weighted_sum_4 = (float)(state_scalar * scaled_value) - 8.0;
      weighted_sum_5 = (float)((float)((float)scaled_index * 8.0) * state_scalar) + 8.0;
      unused_written_slot_3 = (float)((float)((float)(table_value + 1) * 8.0) * state_scalar) + 8.0;
      *(float *)&unused_written_slot_4 = (float)((float)((float)(table_value_2 + 1) * 8.0) * state_scalar) + 8.0;
      if ( state_word )
      {
        if ( combined_products <= 4096.0 )
          goto LABEL_7;
      }
      if ( (unsigned int)sub_14001FD20(&weighted_sum_4, &weighted_sum_5) )
      {
LABEL_7:
        if ( combined_products < 1024.0 || combined_products < 36864.0 )
        {
          state_address_2[775] = 1;
          *(state_address - 1) = 1;
          *state_address = 1;
          state_address[1] = 1;
          state_address[2] = 1;
        }
      }
    }
    state_address_2 += 6930;
    state_address += 6930;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  integer_difference = 27704LL - (_QWORD)scratch_buffer;
  state_address_3 = &g_154161240;
  integer_difference_2 = 27704LL - (_QWORD)scratch_buffer;
  for ( i = 0; i < 4096; ++i )
  {
    if ( *state_address_3 && state_address_3[6925] )
    {
      iteration_count = 0;
      record_byte_offset = scratch_buffer;
      byte_cursor = (char *)state_address_3 + integer_difference;
      do
      {
        if ( *(_DWORD *)&byte_cursor[(_QWORD)record_byte_offset] )
          sub_140013120(i, iteration_count);
        ++iteration_count;
        record_byte_offset += 4;
      }
      while ( iteration_count < 4 );
      integer_difference = integer_difference_2;
      remaining_count = 4096;
    }
    state_address_3 += 6930;
  }
  state_scalar_4 = g_15ADA9280;
  state_address_4 = &g_154167248;
  state_scalar_5 = g_183F7C54C;
  state_scalar_6 = g_183F7C548;
  iteration_count_2 = 0;
  state_scalar_7 = g_183F7C544;
  state_word_2 = g_150F55020;
  do
  {
    if ( *(state_address_4 - 6146) && state_address_4[779] )
    {
      selection_flag = 0;
      cached_selection_flag = 0;
      cached_selection_flag_2 = 0;
      if ( state_address_4[1] != -1 )
      {
        LOBYTE(selection_flag) = *state_address_4 != -1;
        cached_selection_flag = selection_flag;
      }
      cached_selection_flag_3 = 0;
      if ( state_address_4[2] != -1 )
        cached_selection_flag_2 = cached_selection_flag;
      if ( state_address_4[3] != -1 )
        cached_selection_flag_3 = cached_selection_flag_2;
      if ( cached_selection_flag_3 )
      {
        comparison_operand = (float)(int)state_address_4[4];
        dword_140404A6C[2 * state_word_2 + 70078830] = iteration_count_2;
        weighted_sum = (float)((float)(int)state_address_4[6] * 8.0) + 4.0;
        weighted_sum_2 = (float)((float)((float)(int)state_address_4[5] * 8.0) + 4.0) * state_scalar_4;
        weighted_sum_4 = (float)((float)(comparison_operand * 8.0) + 4.0) * state_scalar_4;
        unused_written_slot = weighted_sum_2;
        unused_written_slot_2 = weighted_sum * state_scalar_4;
        *(float *)&dword_140404A6C[2 * g_150F55020 + 70078831] = fsqrt(
                                                                                 (float)((float)((float)(state_scalar_6 - weighted_sum_2)
                                                                                               * (float)(state_scalar_6 - weighted_sum_2))
                                                                                       + (float)((float)(state_scalar_7 - weighted_sum_4)
                                                                                               * (float)(state_scalar_7 - weighted_sum_4)))
                                                                               + (float)((float)(state_scalar_5 - (float)(weighted_sum * state_scalar_4))
                                                                                       * (float)(state_scalar_5 - (float)(weighted_sum * state_scalar_4))));
        state_word_2 = ++g_150F55020;
      }
      else
      {
        state_address_4[779] = 0;
      }
    }
    ++iteration_count_2;
    state_address_4 += 6930;
  }
  while ( iteration_count_2 < 4096 );
  saved_state_address = (int *)state_address_8;
  state_address_5 = (int *)&g_18B772FB8;
  cached_input_value = input_value;
  do
  {
    if ( *(saved_state_address - 6150) )
    {
      if ( !cached_input_value )
        goto LABEL_37;
      table_value_3 = saved_state_address[1];
      table_value_4 = saved_state_address[2];
      scaled_index_2 = *saved_state_address + 1;
      weighted_sum_4 = (float)((float)((float)*saved_state_address * 8.0) * state_scalar_4) - 8.0;
      unused_written_slot = (float)((float)((float)table_value_3 * 8.0) * state_scalar_4) - 8.0;
      unused_written_slot_2 = (float)((float)((float)table_value_4 * 8.0) * state_scalar_4) - 8.0;
      weighted_sum_5 = (float)((float)((float)scaled_index_2 * 8.0) * state_scalar_4) + 8.0;
      unused_written_slot_3 = (float)((float)((float)(table_value_3 + 1) * 8.0) * state_scalar_4) + 8.0;
      *(float *)&unused_written_slot_4 = (float)((float)((float)(table_value_4 + 1) * 8.0) * state_scalar_4) + 8.0;
      if ( (unsigned int)sub_14001FD20(&weighted_sum_4, &weighted_sum_5) || saved_state_address[775] )
      {
LABEL_37:
        table_value_5 = saved_state_address[6];
        weighted_sum_3 = (float)((float)((float)saved_state_address[1] * 8.0) + 4.0) * state_scalar_4;
        weighted_sum_4 = (float)((float)((float)*saved_state_address * 8.0) + 4.0) * state_scalar_4;
        source_component_z = (float)saved_state_address[2];
        unused_written_slot = weighted_sum_3;
        unused_written_slot_2 = (float)((float)(source_component_z * 8.0) + 4.0) * state_scalar_4;
        if ( table_value_5 > 0 )
        {
          table_value_6 = saved_state_address[775];
          running_total = saved_state_address + 8;
          remaining_count_3 = (unsigned int)table_value_5;
          do
          {
            loaded_word = *((unsigned __int8 *)running_total - 4);
            if ( !table_value_6 || !dword_140404A6C[46 * loaded_word + 421784738] )
            {
              table_value_7 = state_address_5[3246088];
              if ( (_DWORD)table_value_7 != -1 )
              {
                loaded_word_2 = *state_address_5;
                if ( (_DWORD)loaded_word_2 != -1 )
                {
                  if ( *running_total )
                  {
                    table_value_8 = (int)dword_140404A6C[loaded_word + 40714349];
                    state_address_6 = &dword_140404A6C[loaded_word + 40714349];
                    shifted_bits = loaded_word << 14;
                    dword_140404A6C[shifted_bits + 40714605 + table_value_8] = 3 * *running_total;
                    integer_quotient = running_total[1]
                        + (int)(table_value_7 * g_18B7D2FCC
                              + dword_140404A6C[3074 * table_value_7 + 315570524 + 3 * state_address_5[3246089]])
                        / 4
                        + 2 * running_total[1];
                    dword_140404A6C[shifted_bits + 53297517 + (int)*state_address_6] = integer_quotient;
                    dword_140404A6C[shifted_bits + 53297517 + (int)*state_address_6] *= 4;
                    *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 44908909 + 2 * (int)*state_address_6] = 4 * integer_quotient;
                    *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 57491821 + 2 * (int)*state_address_6] = dword_140404A6C[shifted_bits + 53297517 + (int)*state_address_6];
                    scaled_index_3 = (int)(loaded_word_2 * g_18AB70FAC + dword_140404A6C[3074 * loaded_word_2 + 312324436 + 3 * state_address_5[1]]);
                    dword_140404A6C[shifted_bits + 65880429 + (int)(*state_address_6)++] = ((BYTE4(scaled_index_3) & 0x3F) + (int)scaled_index_3) >> 6;
                  }
                }
              }
            }
            running_total += 3;
            --remaining_count_3;
          }
          while ( remaining_count_3 );
          cached_input_value = input_value;
        }
      }
    }
    state_address_5 += 6;
    saved_state_address += 6930;
    --remaining_count;
  }
  while ( remaining_count );
  state_word_3 = g_150F55020;
  iteration_count_3 = 0;
  if ( (int)g_150F55020 > 0 )
  {
    buffer_cursor = &g_1A87C6BA4;
    state_address_7 = (float *)&g_150F59028;
    remaining_count_4 = g_150F55020;
    do
    {
      scaled_value_4 = *state_address_7 * 256.0;
      state_address_7 += 2;
      *buffer_cursor++ = (int)(float)(16777216.0 - scaled_value_4);
      --remaining_count_4;
    }
    while ( remaining_count_4 );
  }
  renderer_sort_count = state_word_3;
  sr_renderer_sort();
  if ( state_word_3 > 0 )
  {
    element_index = 0;
    do
    {
      table_value_9 = (int)dword_140404A6C[element_index + 436668494];
      ++element_index;
      ++iteration_count_3;
      dword_140404A6C[element_index + 70074733] = dword_140404A6C[2 * table_value_9 + 70078830];
    }
    while ( iteration_count_3 < (int)g_150F55020 );
  }
  return 0; /* all native callers ignore EAX */
}
#undef unused_frame_slot_8
#undef weighted_sum_4
#undef unused_written_slot
#undef unused_written_slot_2
#undef input_value
#undef weighted_sum_5
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef integer_difference_2
#undef state_address_8
#undef scratch_buffer
#undef unused_frame_slot_112

//----- (000000014011E730) ----------------------------------------------------
double            sub_14011E730(int a1, int a2)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;

  input_value = a1;
  input_value_2 = a2;
  glUseProgram(skin_program);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glEnableVertexAttribArray(2);
  glEnableVertexAttribArray(4);
  glEnableVertexAttribArray(5);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[input_value_2 + 283791190] + 283793813]);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*input_value_2+160858070]),(const void *)(intptr_t)(0));
  glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*input_value_2+160858070]),(const void *)(intptr_t)(12));
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*input_value_2+160858070]),(const void *)(intptr_t)(20));
  glVertexAttribIPointer(4, 4, 5124, 4 * dword_140404A6C[196707 * input_value_2 + 160858070], 32);
  glVertexAttribPointer(5, 4, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[196707*input_value_2+160858070]),(const void *)(intptr_t)(48));
  glUniform3fv(skin_u_boneorgposition, 16, &dword_140404A6C[240 * input_value + 23875685]);
  glUniform3fv(skin_u_boneposition, 16, &dword_140404A6C[240 * input_value + 23875733]);
  glUniformMatrix3fv(skin_u_boneorientation, 16, 0, &dword_140404A6C[240 * input_value + 23875781]);
  glEnable(35977);
  glBeginTransformFeedback(0);
  glDrawArrays(0, 0, dword_140404A6C[196707 * input_value_2 + 160858069]);
  glEndTransformFeedback();
  glDisable(35977);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(2);
  glDisableVertexAttribArray(4);
  glDisableVertexAttribArray(5);
  glBindBuffer(34962, 0);
  return ((double (*)(_QWORD))glUseProgram)(0);
}

//----- (000000014011E9B0) ----------------------------------------------------
__int64 sub_14011E9B0()
{
  __int64 unused_local;
  int iteration_count;
  int i;
  int j;
  int iteration_count_2;
  float *state_address;
  __int64 scaled_index;
  int iteration_count_3;
  float *state_address_2;
  __int64 scaled_index_2;
  __int64 remaining_count;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  unsigned int *state_address_5;
  float *saved_state_address;
  unsigned int *saved_state_address_2;
  __int64 remaining_count_2;
  int scaled_index_3;
  float weighted_sum;
  float scaled_value;
  __int128 loaded_word;
  int element_index;
  unsigned int *state_address_6;
  unsigned int masked_bits;
  float combined_products;
  unsigned int *state_address_7;
  __int64 remaining_count_3;
  __int64 unused_local_2;
  unsigned int *state_address_8;
  __int64 remaining_count_4;
  float *state_address_9;
  __int64 loaded_word_2;
  int iteration_count_4;
  __int64 scaled_index_4;
  unsigned int masked_bits_2;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float scaled_value_2;
  float scaled_value_3;
  float weighted_sum_7;
  float weighted_sum_8;
  float component_sum;
  float component_sum_2;
  float scaled_value_4;
  float weighted_sum_9;
  __int64 unrecovered_register_value;
  unsigned int *void_2;
  __int64 unrecovered_register_value_2;
  signed int iteration_count_5;
  signed int cached_world_street_count;
  unsigned int *state_address_10;
  __int64 running_total;
  signed int iteration_count_6;
  __int64 scaled_index_5;
  unsigned int *saved_void;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  float weighted_sum_10;
  float weighted_sum_11;
  float combined_products_2;
  float weighted_sum_12;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float combined_products_7;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float weighted_sum_13;
  float weighted_sum_14;
  unsigned int float_word;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 element_index_2;
  __int64 void_3;
  __int64 remaining_count_5;
  float *state_address_11;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  float source_float_5;
  float product_difference_4;
  float *record_byte_offset;
  float source_float_6;
  float scaled_value_5;
  float source_float_7;
  float source_component_y;
  __int64 record_byte_offset_2;
  __int64 scaled_index_11;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float state_address_12;
  float scaled_value_6;
  float component_sum_3;
  float weighted_sum_20;
  float scaled_value_7;
  float weighted_sum_21;
  float weighted_sum_22;
  float scaled_value_8;
  float component_sum_4;
  float scaled_value_9;
  float scaled_value_10;
  float weighted_sum_23;
  float weighted_sum_24;
  float state_address_13;
  float scaled_value_11;
  float component_sum_5;
  float weighted_sum_25;
  float scaled_value_12;
  float weighted_sum_26;
  float weighted_sum_27;
  float scaled_value_13;
  float scaled_value_14;
  float scaled_value_15;
  float component_sum_6;
  float weighted_sum_28;
  float weighted_sum_29;
  float scaled_value_16;
  float weighted_sum_30;
  float saved_weighted_sum;
  float scaled_value_17;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  float weighted_sum_34;
  float weighted_sum_35;
  float source_float_5_2;
  float product_difference_5;
  float source_float_6_2;
  float scaled_value_18;
  float source_float_7_2;
  float source_component_y_2;
  __int64 scaled_index_12;
  float weighted_sum_36;
  float weighted_sum_37;
  float weighted_sum_38;
  float scaled_value_19;
  float saved_weighted_sum_2;
  float scaled_value_20;
  float weighted_sum_39;
  float weighted_sum_40;
  float weighted_sum_41;
  float weighted_sum_42;
  float weighted_sum_43;
  signed int iteration_count_7;
  unsigned int *state_address_14;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  __int64 unrecovered_register_value_9;
  __int64 unrecovered_register_value_10;
  __int64 unrecovered_register_value_11;
  __int64 unrecovered_register_value_12;
  __int64 unrecovered_register_value_13;
  __int64 unrecovered_register_value_14;
  __int64 unrecovered_register_value_15;
  __int64 unrecovered_register_value_16;
  __int64 unrecovered_register_value_17;
  __int64 unrecovered_register_value_18;
  __int64 unrecovered_register_value_19;
  __int64 unrecovered_register_value_20;
  __int64 unrecovered_register_value_21;
  __int64 scaled_index_13;
  __int64 unrecovered_register_value_22;
  unsigned int *state_address_15;
  signed int iteration_count_8;
  float *weighted_sum_44;
  unsigned int loaded_word_3;
  double angle;
  __int128 loaded_word_4;
  float scaled_value_21;
  __int128 loaded_word_5;
  unsigned int *state_address_16;
  unsigned int *state_address_17;
  __int64 loaded_word_6;
  signed int iteration_count_9;
  __int64 running_total_2;
  __int64 scaled_index_14;
  unsigned int table_value;
  __int64 masked_bits_3;
  unsigned int table_value_2;
  float weighted_sum_45;
  __int64 scaled_index_15;
  unsigned int table_value_3;
  float weighted_sum_46;
  __int64 unrecovered_register_value_23;
  __int64 unrecovered_register_value_24;
  signed int state_word;
  signed int iteration_count_10;
  unsigned int *state_address_18;
  signed int iteration_count_11;
  __int64 scaled_index_16;
  __int64 unrecovered_register_value_25;
  __int64 unrecovered_register_value_26;
  unsigned int *state_address_19;
  __int64 table_value_4;
  __int64 unrecovered_register_value_27;
  __int64 unrecovered_register_value_28;
  unsigned int *state_address_20;
  unsigned int scaled_index_17;
  unsigned int loaded_word_7;
  __int64 unrecovered_register_value_29;
  __int64 unrecovered_register_value_30;
  unsigned int *state_address_21;
  __int64 remaining_count_6;
  unsigned int *state_address_22;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011E9B0[3232];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14011E9B0 + 0)) /* [rsp+8h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14011E9B0 + 32)) /* [rsp+28h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14011E9B0 + 40)) /* [rsp+30h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14011E9B0 + 48)) /* [rsp+38h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_14011E9B0 + 56)) /* [rsp+40h] */
#define position (*(unsigned int (*))(void *)(sr_frame_14011E9B0 + 64)) /* [rsp+48h] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_14011E9B0 + 68)) /* [rsp+4Ch] */
#define float_word_2 (*(__int64 (*))(void *)(sr_frame_14011E9B0 + 72)) /* [rsp+50h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_14011E9B0 + 80)) /* [rsp+58h] */
#define saved_void_2 (*(unsigned int * (*))(void *)(sr_frame_14011E9B0 + 88)) /* [rsp+60h] */
#define axis (*(__int128 (*))(void *)(sr_frame_14011E9B0 + 96)) /* [rsp+68h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_14011E9B0 + 112)) /* [rsp+78h] */
#define weighted_sum_47 (*(float (*))(void *)(sr_frame_14011E9B0 + 128)) /* [rsp+88h] */
#define callee_output_word (*(_DWORD (*)[2])(void *)(sr_frame_14011E9B0 + 144)) /* [rsp+98h] */
#define callee_output_word_2 (*(_DWORD (*)[766])(void *)(sr_frame_14011E9B0 + 152)) /* [rsp+A0h] */
#define unused_frame_slot_3216 (*(__int64 (*))(void *)(sr_frame_14011E9B0 + 3216)) /* [rsp+C98h] */

  glBindTexture(3553, renderer_white_texture);
  iteration_count = 0;
  for ( i = 0; i < (int)g_16B265F7C; ++i )
  {
    glVertexAttrib3f(2, 1.0f, 0.0f, 0.5f); /* native XMM1-3 */
    sub_140125670((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12LL * i + 723935104), 4.0, 2);
  }
  if ( g_16B165F68 )
  {
    glVertexAttrib3f(2, 1.0f, 1.0f, 0.0f); /* native XMM1-3 */
    for ( j = 0; j < (int)world_train_stop_count; ++j )
      sub_140125670((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 20LL * j + 454739976), 1.0, 1);
  }
  iteration_count_2 = 0;
  if ( (int)game_unknown_16b1f5f74 > 0 )
  {
    state_address = (float *)&g_16B1F5F90;
    do
    {
      scaled_index = 7LL * iteration_count_2;
      glVertexAttrib3fv(2, &dword_140404A6C[scaled_index + 179815750]);
      sub_140125670(&dword_140404A6C[scaled_index + 179815747], *state_address, 2);
      ++iteration_count_2;
      state_address += 7;
    }
    while ( iteration_count_2 < (int)game_unknown_16b1f5f74 );
  }
  iteration_count_3 = 0;
  if ( (int)g_16B22DF78 > 0 )
  {
    state_address_2 = (float *)&g_16B22DF94;
    do
    {
      scaled_index_2 = 7LL * iteration_count_3;
      glVertexAttrib3fv(2, &dword_140404A6C[scaled_index_2 + 179873095]);
      sub_140125670(&dword_140404A6C[scaled_index_2 + 179873092], *state_address_2, 2);
      ++iteration_count_3;
      state_address_2 += 7;
    }
    while ( iteration_count_3 < (int)g_16B22DF78 );
  }
  remaining_count = 256;
  state_address_3 = &g_18329E570;
  packed_word_bits = 256;
  state_address_4 = &g_18329E52C;
  do
  {
    if ( *(state_address_3 - 154) )
    {
      state_address_5 = &g_18399DF3C;
      saved_state_address = (float *)state_address_4;
      saved_state_address_2 = state_address_3;
      remaining_count_2 = 16;
      do
      {
        scaled_index_3 = *(state_address_5 - 1);
        weighted_sum = *((float *)state_address_5 + 1);
        scaled_value = *(float *)state_address_5;
        axis = *(_OWORD *)(saved_state_address_2 - 5);
        loaded_word = *(_OWORD *)(saved_state_address_2 - 1);
        unused_written_slot = LODWORD(weighted_sum);
        cached_xmmword_140278d30 = loaded_word;
        weighted_sum_47 = *((float *)saved_state_address_2 + 3);
        sub_14007E2A0(saved_state_address, (__int64)&axis, scaled_index_3, scaled_value, weighted_sum);
        saved_state_address += 78;
        saved_state_address_2 += 78;
        state_address_5 += 25;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      remaining_count = packed_word_bits;
    }
    state_address_4 += 7166;
    state_address_3 += 7166;
    packed_word_bits = --remaining_count;
  }
  while ( remaining_count );
  element_index = 0;
  if ( (int)world_unknown_15fd16260_count > 0 )
  {
    state_address_6 = &g_15FD16278;
    do
    {
      weighted_sum_47 = 1.0;
      axis = xmmword_140278D30;
      cached_xmmword_140278d30 = xmmword_140278D30;
      sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis + 3, sr_export_float_lane_container(1070141403));
      sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis + 3, sr_export_float_lane_container((unsigned __int64)state_address_6[4]));
      sub_140125670(&dword_140404A6C[383 * element_index + 132400641], 0.125, 1);
      *(float *)&masked_bits = *((float *)state_address_6 - 2) - (float)(*((float *)&cached_xmmword_140278d30 + 2) * 1.5);
      unused_written_slot_4 = 0;
      unused_written_slot_3 = 0;
      position = masked_bits;
      combined_products = *((float *)state_address_6 - 1) - (float)(*((float *)&cached_xmmword_140278d30 + 3) * 1.5);
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 0x40000000;
      unused_written_slot_5 = combined_products;
      *(float *)&float_word_2 = *(float *)state_address_6 - (float)(weighted_sum_47 * 1.5);
      sub_14007E010(&position, &axis, 1.0, 1.0, 2.0, 0x3F800000u, 0, 0);
      if ( element_index == g_16B2A2220 )
        sub_14007E010(&position, &axis, 1.0, 2.0, 2.0, 0x3F800000u, 0x3F800000u, 0);
      ++element_index;
      state_address_6 += 383;
    }
    while ( element_index < (int)world_unknown_15fd16260_count );
  }
  state_address_7 = (unsigned int *)&g_183EBFD60;
  remaining_count_3 = 6;
  do
  {
    sr_renderer_draw_wire_box((float *)state_address_7, (float *)(state_address_7 + 3));
    sr_renderer_draw_wire_box((float *)(state_address_7 + 6), (float *)(state_address_7 + 9));
    state_address_7 += 5873;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  state_address_8 = &g_1B4657DBC;
  remaining_count_4 = 8;
  do
  {
    unused_written_slot = 1065353216;
    glVertexAttrib4f(2,0x1.0000000000000p-1f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.0000000000000p+0f);
    sub_140125670(state_address_8, 1.0, 2);
    state_address_8 += 19;
    --remaining_count_4;
  }
  while ( remaining_count_4 );
  state_address_9 = (float *)&g_182BBB194;
  do
  {
    if ( *((_DWORD *)state_address_9 - 5) )
    {
      loaded_word_2 = *(int *)state_address_9;
      unused_written_slot = 1061158912;
      glVertexAttrib4f(2,0x1.0000000000000p-1f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.8000000000000p-1f);
      if ( *((_DWORD *)state_address_9 - 4) )
      {
        unused_written_slot = 1061158912;
        glVertexAttrib4f(2,0x0.0p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.8000000000000p-1f);
      }
      iteration_count_4 = 0;
      scaled_index_4 = 1268 * loaded_word_2;
      do
      {
        masked_bits_2 = iteration_count_4 & 3;
        if ( (iteration_count_4 & 3) == 0 || masked_bits_2 == 3 )
          weighted_sum_2 = -*(float *)&dword_140404A6C[scaled_index_4 + 278521350];
        else
          weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_4 + 278521350];
        weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index_4 + 278521351];
        weighted_sum_4 = (float)(weighted_sum_2 * state_address_9[37]) + state_address_9[19];
        weighted_sum_5 = (float)(weighted_sum_2 * state_address_9[36]) + state_address_9[18];
        weighted_sum_6 = (float)(weighted_sum_2 * state_address_9[38]) + state_address_9[20];
        if ( (unsigned int)iteration_count_4 < 4 )
          weighted_sum_3 = -weighted_sum_3;
        scaled_value_2 = weighted_sum_3 * state_address_9[40];
        scaled_value_3 = weighted_sum_3 * state_address_9[39];
        weighted_sum_7 = weighted_sum_6 + (float)(weighted_sum_3 * state_address_9[41]);
        weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_4 + 278521352];
        component_sum = weighted_sum_4 + scaled_value_2;
        component_sum_2 = weighted_sum_5 + scaled_value_3;
        if ( masked_bits_2 < 2 )
          weighted_sum_8 = -weighted_sum_8;
        scaled_value_4 = weighted_sum_8 * state_address_9[42];
        weighted_sum_9 = weighted_sum_7 + (float)(weighted_sum_8 * state_address_9[44]);
        unused_written_slot_5 = component_sum + (float)(weighted_sum_8 * state_address_9[43]);
        *(float *)&position = component_sum_2 + scaled_value_4;
        *(float *)&float_word_2 = weighted_sum_9;
        sub_140125670(&position, 0.03125, 1);
        ++iteration_count_4;
      }
      while ( iteration_count_4 < 8 );
    }
    state_address_9 += 1760;
  }
  while ( (__int64)state_address_9 < (__int64)&g_18329B194 );
  glBindTexture(3553, renderer_white_texture);
  iteration_count_5 = 0;
  cached_world_street_count = world_street_count;
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  LODWORD(packed_word_bits) = 0;
  g_1AD299450 = xmmword_140279650;
  if ( (int)world_street_count > 0 )
  {
    void_2 = &g_195AD3920;
    state_address_10 = &g_195AD38F8;
    running_total = 0;
    saved_void_2 = &g_195AD3920;
    do
    {
      iteration_count_6 = 0;
      if ( (int)*state_address_10 > 0 )
      {
        scaled_index_5 = 5144LL * iteration_count_5;
        saved_void = void_2;
        do
        {
          scaled_index_6 = (int)*(saved_void - 1);
          scaled_index_7 = 3 * (running_total + (int)saved_void[1]);
          scaled_index_8 = 3 * (running_total + (int)*saved_void);
          weighted_sum_10 = *(float *)&dword_140404A6C[3 * running_total + 358297508 + 3 * scaled_index_6];
          weighted_sum_11 = *(float *)&dword_140404A6C[3 * running_total + 358297509 + 3 * scaled_index_6];
          combined_products_2 = *(float *)&dword_140404A6C[3 * running_total + 358297508 + 3 * (int)saved_void[1]] - weighted_sum_10;
          weighted_sum_12 = *(float *)&dword_140404A6C[3 * running_total + 358297507 + 3 * scaled_index_6];
          combined_products_3 = *(float *)&dword_140404A6C[3 * running_total + 358297509 + 3 * (int)*saved_void] - weighted_sum_11;
          combined_products_4 = *(float *)&dword_140404A6C[3 * running_total + 358297507 + 3 * (int)saved_void[1]] - weighted_sum_12;
          combined_products_5 = *(float *)&dword_140404A6C[3 * running_total + 358297507 + 3 * (int)*saved_void] - weighted_sum_12;
          combined_products_6 = *(float *)&dword_140404A6C[3 * running_total + 358297508 + 3 * (int)*saved_void] - weighted_sum_10;
          combined_products_7 = *(float *)&dword_140404A6C[3 * running_total + 358297509 + 3 * (int)saved_void[1]] - weighted_sum_11;
          product_difference = (float)(combined_products_2 * combined_products_3) - (float)(combined_products_7 * combined_products_6);
          product_difference_2 = (float)(combined_products_7 * combined_products_5) - (float)(combined_products_4 * combined_products_3);
          product_difference_3 = (float)(combined_products_4 * combined_products_6) - (float)(combined_products_2 * combined_products_5);
          square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
          if ( square_root == 0.0 )
          {
            scaled_ratio = 0.0;
            scaled_ratio_2 = 0.0;
            scaled_ratio_3 = 0.0;
          }
          else
          {
            scaled_ratio = product_difference * (float)(1.0 / square_root);
            scaled_ratio_2 = product_difference_2 * (float)(1.0 / square_root);
            scaled_ratio_3 = product_difference_3 * (float)(1.0 / square_root);
          }
          weighted_sum_13 = (float)((float)(scaled_ratio * g_18417DE78)
                      + (float)(scaled_ratio_2 * g_18417DE7C))
              + (float)(scaled_ratio_3 * g_18417DE80);
          if ( weighted_sum_13 <= 0.0 )
            weighted_sum_13 = 0.0;
          g_1AD29945C = 1065353216;
          if ( ((2 * (_BYTE)iteration_count_5 + (_BYTE)iteration_count_6) & 3u) >= 2 )
          {
            weighted_sum_14 = (float)(weighted_sum_13 * 0.28049999) + 0.093500003;
            *(float *)&float_word = (float)(weighted_sum_13 * 0.28125) + 0.09375;
          }
          else
          {
            weighted_sum_14 = (float)(weighted_sum_13 * 0.17999999) + 0.059999999;
            *(float *)&float_word = (float)(weighted_sum_13 * 0.1875) + 0.0625;
          }
          g_1AD299458 = float_word;
          g_1AD299454 = float_word;
          *(float *)&g_1AD299450 = weighted_sum_14;
          sr_renderer_batch_vertex3fv((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (scaled_index_6 + scaled_index_5) + 1437403384), scaled_index_8, scaled_index_7);
          sr_renderer_batch_vertex3fv((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (scaled_index_5 + (int)*saved_void) + 1437403384), unrecovered_register_value_3, unrecovered_register_value_4);
          sr_renderer_batch_vertex3fv((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (scaled_index_5 + (int)saved_void[1]) + 1437403384), unrecovered_register_value_5, unrecovered_register_value_6);
          ++iteration_count_6;
          saved_void += 3;
        }
        while ( iteration_count_6 < (int)*state_address_10 );
        cached_world_street_count = world_street_count;
        iteration_count = 0;
        iteration_count_5 = packed_word_bits;
        void_2 = saved_void_2;
      }
      ++iteration_count_5;
      void_2 += 15432;
      running_total += 5144;
      LODWORD(packed_word_bits) = iteration_count_5;
      state_address_10 += 15432;
      saved_void_2 = void_2;
    }
    while ( iteration_count_5 < cached_world_street_count );
  }
  sr_renderer_batch_flush((__int64)void_2, unrecovered_register_value, unrecovered_register_value_2);
  state_address_11 = (float *)&g_15F2D9230;
  g_1AD299450 = xmmword_1402794A0;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  do
  {
    if ( *((_DWORD *)state_address_11 - 12) )
    {
      element_index_2 = *((int *)state_address_11 - 11);
      scaled_index_9 = 0;
      scaled_index_10 = 45072 * element_index_2;
      remaining_count_5 = (int)dword_140404A6C[45072 * element_index_2 + 335161466];
      if ( remaining_count_5 >= 4 )
      {
        source_float_5 = state_address_11[5];
        product_difference_4 = *(state_address_11 - 1);
        record_byte_offset = (float *)callee_output_word_2;
        source_float_6 = state_address_11[6];
        scaled_value_5 = *state_address_11;
        source_float_7 = state_address_11[7];
        source_component_y = state_address_11[1];
        record_byte_offset_2 = 15024 * element_index_2;
        void_3 = ((unsigned __int64)(remaining_count_5 - 4) >> 2) + 1;
        scaled_index_9 = 4 * void_3;
        do
        {
          scaled_index_11 = 3 * record_byte_offset_2;
          weighted_sum_15 = *(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161467];
          weighted_sum_16 = (float)(weighted_sum_15 * source_float_5) + product_difference_4;
          weighted_sum_17 = *(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161469] * state_address_11[13];
          weighted_sum_18 = (float)((float)(weighted_sum_15 * source_float_7) + source_component_y) + (float)(*(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161468] * state_address_11[10]);
          weighted_sum_19 = *(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161471];
          state_address_12 = (float)((float)((float)(*(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161467] * source_float_6) + scaled_value_5)
                       + (float)(*(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161468] * state_address_11[9]))
               + (float)(*(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161469] * state_address_11[12]);
          *(record_byte_offset - 2) = (float)(weighted_sum_16 + (float)(*(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161468] * state_address_11[8]))
                     + (float)(*(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161469] * state_address_11[11]);
          scaled_value_6 = weighted_sum_19 * state_address_11[8];
          component_sum_3 = weighted_sum_18 + weighted_sum_17;
          weighted_sum_20 = *(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161472];
          *(record_byte_offset - 1) = state_address_12;
          scaled_value_7 = weighted_sum_20 * state_address_11[11];
          *record_byte_offset = component_sum_3;
          weighted_sum_21 = *(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161470];
          weighted_sum_22 = (float)((float)(weighted_sum_21 * source_float_5) + product_difference_4) + scaled_value_6;
          scaled_value_8 = weighted_sum_19 * state_address_11[9];
          component_sum_4 = weighted_sum_22 + scaled_value_7;
          scaled_value_9 = weighted_sum_20 * state_address_11[12];
          scaled_value_10 = weighted_sum_20 * state_address_11[13];
          weighted_sum_23 = (float)((float)(weighted_sum_21 * source_float_7) + source_component_y) + (float)(weighted_sum_19 * state_address_11[10]);
          weighted_sum_24 = *(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161474];
          state_address_13 = (float)((float)((float)(*(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161470] * source_float_6) + scaled_value_5) + scaled_value_8) + scaled_value_9;
          record_byte_offset[1] = component_sum_4;
          scaled_value_11 = weighted_sum_24 * state_address_11[8];
          component_sum_5 = weighted_sum_23 + scaled_value_10;
          weighted_sum_25 = *(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161475];
          record_byte_offset[2] = state_address_13;
          scaled_value_12 = weighted_sum_25 * state_address_11[11];
          record_byte_offset[3] = component_sum_5;
          weighted_sum_26 = *(float *)&dword_140404A6C[3 * record_byte_offset_2 + 335161473];
          weighted_sum_27 = (float)((float)(weighted_sum_26 * source_float_6) + scaled_value_5) + (float)(weighted_sum_24 * state_address_11[9]);
          record_byte_offset[4] = (float)((float)((float)(weighted_sum_26 * source_float_5) + product_difference_4) + scaled_value_11) + scaled_value_12;
          scaled_value_13 = weighted_sum_25 * state_address_11[12];
          record_byte_offset_2 += 4;
          scaled_value_14 = weighted_sum_24 * state_address_11[10];
          scaled_value_15 = weighted_sum_25 * state_address_11[13];
          component_sum_6 = weighted_sum_27 + scaled_value_13;
          weighted_sum_28 = *(float *)&dword_140404A6C[scaled_index_11 + 335161477];
          weighted_sum_29 = *(float *)&dword_140404A6C[scaled_index_11 + 335161478];
          record_byte_offset[5] = component_sum_6;
          scaled_value_16 = weighted_sum_28 * state_address_11[8];
          record_byte_offset[6] = (float)((float)((float)(weighted_sum_26 * source_float_7) + source_component_y) + scaled_value_14) + scaled_value_15;
          weighted_sum_30 = *(float *)&dword_140404A6C[scaled_index_11 + 335161476];
          saved_weighted_sum = weighted_sum_30;
          scaled_value_17 = weighted_sum_30 * source_float_5;
          *(float *)&position = (float)(product_difference_4 + (float)(weighted_sum_30 * source_float_5)) + scaled_value_16;
          weighted_sum_31 = (float)((float)(weighted_sum_30 * source_float_7) + source_component_y) + (float)(weighted_sum_28 * state_address_11[10]);
          weighted_sum_32 = (float)((float)(saved_weighted_sum * source_float_6) + scaled_value_5) + (float)(weighted_sum_28 * state_address_11[9]);
          weighted_sum_33 = (float)(weighted_sum_29 * state_address_11[11]) + scaled_value_16;
          *(float *)&float_word_2 = weighted_sum_31;
          unused_written_slot_5 = weighted_sum_32;
          record_byte_offset[7] = weighted_sum_33 + (float)(product_difference_4 + scaled_value_17);
          weighted_sum_34 = (float)(weighted_sum_29 * state_address_11[12]) + weighted_sum_32;
          weighted_sum_35 = (float)(weighted_sum_29 * state_address_11[13]) + weighted_sum_31;
          record_byte_offset[8] = weighted_sum_34;
          record_byte_offset[9] = weighted_sum_35;
          record_byte_offset += 12;
          --void_3;
        }
        while ( void_3 );
      }
      if ( scaled_index_9 < remaining_count_5 )
      {
        source_float_5_2 = state_address_11[5];
        product_difference_5 = *(state_address_11 - 1);
        source_float_6_2 = state_address_11[6];
        void_3 = (__int64)&callee_output_word_2[3 * scaled_index_9];
        scaled_value_18 = *state_address_11;
        source_float_7_2 = state_address_11[7];
        source_component_y_2 = state_address_11[1];
        element_index_2 = scaled_index_9 + 15024 * element_index_2;
        remaining_count_5 -= scaled_index_9;
        do
        {
          scaled_index_12 = 3 * element_index_2;
          weighted_sum_36 = *(float *)&dword_140404A6C[3 * element_index_2++ + 335161468];
          weighted_sum_37 = *(float *)&dword_140404A6C[scaled_index_12 + 335161467];
          weighted_sum_38 = *(float *)&dword_140404A6C[scaled_index_12 + 335161469];
          scaled_value_19 = weighted_sum_36 * state_address_11[8];
          saved_weighted_sum_2 = weighted_sum_37;
          scaled_value_20 = weighted_sum_37 * source_float_5_2;
          *(float *)&position = (float)(product_difference_5 + (float)(weighted_sum_37 * source_float_5_2)) + scaled_value_19;
          weighted_sum_39 = (float)((float)(weighted_sum_37 * source_float_7_2) + source_component_y_2) + (float)(weighted_sum_36 * state_address_11[10]);
          weighted_sum_40 = (float)((float)(saved_weighted_sum_2 * source_float_6_2) + scaled_value_18) + (float)(weighted_sum_36 * state_address_11[9]);
          weighted_sum_41 = (float)(weighted_sum_38 * state_address_11[11]) + scaled_value_19;
          *(float *)&float_word_2 = weighted_sum_39;
          unused_written_slot_5 = weighted_sum_40;
          *(float *)(void_3 - 8) = weighted_sum_41 + (float)(product_difference_5 + scaled_value_20);
          weighted_sum_42 = (float)(weighted_sum_38 * state_address_11[12]) + weighted_sum_40;
          weighted_sum_43 = (float)(weighted_sum_38 * state_address_11[13]) + weighted_sum_39;
          *(float *)(void_3 - 4) = weighted_sum_42;
          *(float *)void_3 = weighted_sum_43;
          void_3 += 12;
          --remaining_count_5;
        }
        while ( remaining_count_5 );
      }
      iteration_count_7 = 0;
      if ( (int)dword_140404A6C[scaled_index_10 + 335164539] > 0 )
      {
        state_address_14 = &dword_140404A6C[scaled_index_10 + 335164543];
        do
        {
          if ( *(state_address_14 - 2) == 4 )
          {
            sr_renderer_batch_vertex3fv(&callee_output_word[3 * *(state_address_14 - 1)], element_index_2, remaining_count_5);
            sr_renderer_batch_vertex3fv(&callee_output_word[3 * *state_address_14], unrecovered_register_value_7, unrecovered_register_value_8);
            sr_renderer_batch_vertex3fv(&callee_output_word[3 * *state_address_14], unrecovered_register_value_9, unrecovered_register_value_10);
            sr_renderer_batch_vertex3fv(&callee_output_word[3 * state_address_14[1]], unrecovered_register_value_11, unrecovered_register_value_12);
            sr_renderer_batch_vertex3fv(&callee_output_word[3 * state_address_14[1]], unrecovered_register_value_13, unrecovered_register_value_14);
            sr_renderer_batch_vertex3fv(&callee_output_word[3 * state_address_14[2]], unrecovered_register_value_15, unrecovered_register_value_16);
            sr_renderer_batch_vertex3fv(&callee_output_word[3 * state_address_14[2]], unrecovered_register_value_17, unrecovered_register_value_18);
            sr_renderer_batch_vertex3fv(&callee_output_word[3 * *(state_address_14 - 1)], unrecovered_register_value_19, unrecovered_register_value_20);
          }
          ++iteration_count_7;
          state_address_14 += 6;
        }
        while ( iteration_count_7 < (int)dword_140404A6C[scaled_index_10 + 335164539] );
      }
    }
    state_address_11 += 5210;
  }
  while ( (__int64)state_address_11 < (__int64)&g_15FD06230 );
  sr_renderer_batch_flush(void_3, element_index_2, remaining_count_5);
  state_address_15 = &g_15F2D924C;
  do
  {
    if ( *(state_address_15 - 19) )
    {
      iteration_count_8 = 0;
      if ( (int)state_address_15[3645] > 0 )
      {
        weighted_sum_44 = (float *)(state_address_15 + 3667);
        do
        {
          loaded_word_3 = *((unsigned int *)weighted_sum_44 - 2);
          *(_QWORD *)&angle = *((unsigned int *)weighted_sum_44 - 3);
          unused_written_slot_5 = *(weighted_sum_44 - 1);
          loaded_word_4 = *(_OWORD *)(state_address_15 - 2);
          position = loaded_word_3;
          scaled_value_21 = *weighted_sum_44;
          axis = loaded_word_4;
          loaded_word_5 = *(_OWORD *)(state_address_15 + 2);
          *(float *)&float_word_2 = scaled_value_21;
          cached_xmmword_140278d30 = loaded_word_5;
          weighted_sum_47 = *((float *)state_address_15 + 6);
          sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis + 3, angle);
          sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container((unsigned __int64)*((_DWORD *)weighted_sum_44 - 4)));
          if ( physics_points_no_gravity )
          {
            loaded_word_6 = *((int *)weighted_sum_44 - 21);
            state_address_16 = &dword_140404A6C[47 * loaded_word_6 + 18215724];
            state_address_17 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 188 * loaded_word_6 + 77076216);
          }
          else
          {
            state_address_16 = (unsigned int *)&axis;
            state_address_17 = &position;
          }
          sub_14007E9D0(state_address_17, state_address_16, COERCE_DOUBLE((unsigned __int64)*((_DWORD *)weighted_sum_44 - 8)), 0.125);
          ++iteration_count_8;
          weighted_sum_44 += 43;
        }
        while ( iteration_count_8 < (int)state_address_15[3645] );
      }
    }
    state_address_15 += 5210;
  }
  while ( (__int64)state_address_15 < (__int64)&g_15FD0624C );
  g_1AD299450 = xmmword_140279550;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  if ( g_16B165F68 )
  {
    if ( g_16B2A2220 != -1 )
    {
      scaled_index_13 = 383LL * (int)g_16B2A2220;
      iteration_count_9 = 0;
      if ( (int)dword_140404A6C[scaled_index_13 + 132400671] > 0 )
      {
        running_total_2 = 0;
        while ( 1 )
        {
          scaled_index_14 = scaled_index_13 * 4 + running_total_2 * 4;
          table_value = dword_140404A6C[scaled_index_13 + 132400681 + running_total_2];
          g_1AD299450 = xmmword_1402794E0;
          if ( table_value == -1 )
            goto LABEL_87;
          if ( table_value == 1 )
            break;
LABEL_88:
          masked_bits_3 = 34LL
               * (int)dword_140404A6C[396 * *(unsigned int *)((char *)&g_15FD162EC + scaled_index_14) + 225426056];
          table_value_2 = dword_140404A6C[masked_bits_3 + 225391235];
          position = dword_140404A6C[masked_bits_3 + 225391233];
          weighted_sum_45 = *(float *)&dword_140404A6C[masked_bits_3 + 225391234];
          LODWORD(float_word_2) = table_value_2;
          unused_written_slot_5 = weighted_sum_45 + 4.0;
          sr_renderer_batch_vertex3fv(&position, scaled_index_14, unrecovered_register_value_22);
          scaled_index_15 = 34LL
               * (int)dword_140404A6C[396 * dword_140404A6C[383 * (int)g_16B2A2220 + 132400672 + running_total_2]
                                    + 225426057];
          table_value_3 = dword_140404A6C[scaled_index_15 + 225391235];
          position = dword_140404A6C[scaled_index_15 + 225391233];
          weighted_sum_46 = *(float *)&dword_140404A6C[scaled_index_15 + 225391234];
          LODWORD(float_word_2) = table_value_3;
          unused_written_slot_5 = weighted_sum_46 + 4.0;
          sr_renderer_batch_vertex3fv(&position, unrecovered_register_value_23, unrecovered_register_value_24);
          ++iteration_count_9;
          scaled_index_13 = 383LL * (int)g_16B2A2220;
          running_total_2 += 5;
          if ( iteration_count_9 >= (int)dword_140404A6C[scaled_index_13 + 132400671] )
            goto LABEL_89;
        }
        *(unsigned int *)&g_1AD299450 = 0;
LABEL_87:
        g_1AD299458 = 1065353216;
        goto LABEL_88;
      }
    }
LABEL_89:
    state_word = g_175FF3464;
    iteration_count_10 = 0;
    if ( (int)g_175FF3464 > 0 )
    {
      state_address_18 = &g_175FF34A0;
      do
      {
        iteration_count_11 = 0;
        if ( (int)*state_address_18 > 0 )
        {
          do
          {
            g_1AD299450 = xmmword_140279660;
            scaled_index_16 = 1584LL * iteration_count_10 + 28LL * iteration_count_11;
            sr_renderer_batch_vertex3fv((unsigned int *)((char *)&g_175FF34A8 + scaled_index_16), unrecovered_register_value_21, unrecovered_register_value_22);
            sr_renderer_batch_vertex3fv((unsigned int *)((char *)&g_175FF34B4 + scaled_index_16), unrecovered_register_value_25, unrecovered_register_value_26);
            ++iteration_count_11;
          }
          while ( iteration_count_11 < (int)*state_address_18 );
          state_word = g_175FF3464;
        }
        ++iteration_count_10;
        state_address_18 += 396;
      }
      while ( iteration_count_10 < state_word );
    }
    state_address_19 = &g_1B4287C84;
    g_1AD299450 = xmmword_140279550;
    do
    {
      if ( *(state_address_19 - 1) && !*state_address_19 )
      {
        table_value_4 = (int)state_address_19[5];
        g_1AD299450 = xmmword_140279550;
        sr_renderer_batch_vertex3fv(&dword_140404A6C[60 * table_value_4 + 73007026], unrecovered_register_value_21, unrecovered_register_value_22);
        sr_renderer_batch_vertex3fv(&dword_140404A6C[60 * state_address_19[6] + 73007026], unrecovered_register_value_27, unrecovered_register_value_28);
      }
      state_address_19 += 61;
    }
    while ( (__int64)state_address_19 < (__int64)&g_1B4657C84 );
    if ( (int)game_unknown_16b165f70 > 0 )
    {
      state_address_20 = &g_16B165F94;
      do
      {
        scaled_index_17 = *(state_address_20 - 1);
        *(unsigned int *)&g_1AD299450 = *(state_address_20 - 2);
        loaded_word_7 = *state_address_20;
        g_1AD299454 = scaled_index_17;
        g_1AD299458 = loaded_word_7;
        g_1AD29945C = 1065353216;
        sr_renderer_batch_vertex3fv((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * iteration_count + 722886516), unrecovered_register_value_21, unrecovered_register_value_22);
        sr_renderer_batch_vertex3fv((unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * iteration_count++ + 722886528), unrecovered_register_value_29, unrecovered_register_value_30);
        state_address_20 += 9;
      }
      while ( iteration_count < (int)game_unknown_16b165f70 );
    }
  }
  sr_renderer_batch_flush(scaled_index_13 * 4, unrecovered_register_value_21, unrecovered_register_value_22);
  state_address_21 = &g_1449816E4;
  remaining_count_6 = 0x2000;
  state_address_22 = &g_1449816F8;
  do
  {
    if ( *(state_address_21 - 1) && *state_address_21 == 1 )
      sub_14007E010(
        state_address_22,
        state_address_22 + 9,
        *((float *)state_address_21 + 42),
        *((float *)state_address_21 + 43),
        *((float *)state_address_21 + 44),
        0,
        0x3F800000u,
        0);
    state_address_22 += 47;
    state_address_21 += 47;
    --remaining_count_6;
  }
  while ( remaining_count_6 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef position
#undef unused_written_slot_5
#undef float_word_2
#undef packed_word_bits
#undef saved_void_2
#undef axis
#undef cached_xmmword_140278d30
#undef weighted_sum_47
#undef callee_output_word
#undef callee_output_word_2
#undef unused_frame_slot_3216
