#include "shared_client.h"
#include "../engine/disk.h"

//----- (00000001400802F0) ----------------------------------------------------
void            sub_1400802F0(int a1)
{
  __int64 player_record_offset;
  int iteration_count;
  unsigned int *state_address;
  __int64 table_value;
  __int64 scaled_index;
  __int64 table_value_2;
  __int64 scaled_index_2;

  player_record_offset = 3597LL * a1;
  if ( !dword_140404A6C[player_record_offset + 71859139] )
  {
    sub_1400F3B30(a1);
    sub_14011AF80(a1, dword_140404A6C[player_record_offset + 71856288]);
    if ( (unsigned int)a1 <= 0xFF )
      sub_14011AF80(a1, dword_140404A6C[player_record_offset + 71856288]);
    iteration_count = 0;
    state_address = &g_183EBFDC4;
    do
    {
      if ( *state_address == a1 )
      {
        if ( game_type == 4 )
          sub_140194C10(iteration_count);
        *state_address = -1;
        state_address[5654] = 0;
      }
      ++iteration_count;
      state_address += 5873;
    }
    while ( iteration_count < 6 );
    table_value = (int)dword_140404A6C[player_record_offset + 71856268];
    if ( (_DWORD)table_value != -1 )
    {
      scaled_index = 28 * table_value;
      dword_140404A6C[scaled_index + 134050374] = dword_140404A6C[player_record_offset + 71856272];
      dword_140404A6C[scaled_index + 134050375] = dword_140404A6C[player_record_offset + 71856275];
      dword_140404A6C[scaled_index + 134050376] = dword_140404A6C[player_record_offset + 71856276];
      dword_140404A6C[scaled_index + 134050377] = dword_140404A6C[player_record_offset + 71856291];
    }
  }
  table_value_2 = (int)dword_140404A6C[player_record_offset + 71856292];
  if ( (_DWORD)table_value_2 != -1 )
  {
    scaled_index_2 = 7166 * table_value_2;
    if ( dword_140404A6C[7166 * table_value_2 + 280651305] == a1 )
    {
      dword_140404A6C[scaled_index_2 + 280651306] = dword_140404A6C[player_record_offset + 71856268];
      dword_140404A6C[scaled_index_2 + 280651305] = -1;
    }
  }
  dword_140404A6C[player_record_offset + 71856253] = 0;
  sr_event_player_update(a1);
}

//----- (00000001400805E0) ----------------------------------------------------
__int64            sub_1400805E0(int a1)
{
  __int64 input_value;
  __int64 result;

  input_value = a1;
  result = closesocket_sr((int)dword_140404A6C[input_value + 289301078]);
  dword_140404A6C[input_value + 289301070] = 0;
  return result;
}

//----- (0000000140080720) ----------------------------------------------------
__int64            sub_140080720(int a1, int a2, __int64 a3)
{
  unsigned int element_index;
  __int64 record_word_offset;
  int table_value;
  unsigned int *i;
  unsigned int *state_address;
  __int64 integer_difference;
  int loaded_word;
  int loaded_word_2;

  element_index = 1;
  record_word_offset = 2570LL * a1;
  table_value = dword_140404A6C[record_word_offset + 275753047];
  if ( table_value <= 1 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[record_word_offset + 275753055]; ; i += 4 )
  {
    if ( *i == a2 )
    {
      state_address = &dword_140404A6C[4 * element_index + 275753048 + record_word_offset];
      integer_difference = a3 - (_QWORD)state_address;
      do
      {
        loaded_word = *((unsigned __int8 *)state_address + integer_difference);
        loaded_word_2 = *(unsigned __int8 *)state_address - loaded_word;
        if ( loaded_word_2 )
          break;
        state_address = (unsigned int *)((char *)state_address + 1);
      }
      while ( loaded_word );
      if ( !loaded_word_2 )
        break;
    }
    if ( (int)++element_index >= table_value )
      return 0xFFFFFFFFLL;
  }
  return element_index;
}

//----- (0000000140080820) ----------------------------------------------------
__int64            sub_140080820(int a1, int a2, __int64 a3)
{
  __int64 integer_sum;
  __int64 record_word_offset;
  int table_value;
  unsigned int *i;
  unsigned int *state_address;
  __int64 integer_difference;
  int loaded_word;
  int loaded_word_2;

  integer_sum = 0;
  record_word_offset = 2570LL * a1;
  table_value = dword_140404A6C[record_word_offset + 275754072];
  if ( table_value <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[record_word_offset + 275754078]; ; i += 6 )
  {
    if ( *i == a2 )
    {
      state_address = &dword_140404A6C[6 * integer_sum + 275754074 + record_word_offset];
      integer_difference = a3 - (_QWORD)state_address;
      do
      {
        loaded_word = *((unsigned __int8 *)state_address + integer_difference);
        loaded_word_2 = *(unsigned __int8 *)state_address - loaded_word;
        if ( loaded_word_2 )
          break;
        state_address = (unsigned int *)((char *)state_address + 1);
      }
      while ( loaded_word );
      if ( !loaded_word_2 )
        break;
    }
    integer_sum = (unsigned int)(integer_sum + 1);
    if ( (int)integer_sum >= table_value )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)integer_sum;
}

//----- (00000001400808E0) ----------------------------------------------------
__int64 sub_1400808E0()
{
  int iteration_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  unsigned int state_word;
  unsigned int *state_address_3;
  int i;
  __m128i vector_result;
  int element_index;
  unsigned int *state_address_4;
  __m128i vector_result_2;
  unsigned int loaded_word;
  int iteration_count_2;
  unsigned int *buffer_cursor;
  __m128i vector_result_3;
  __m128i converted_vector;
  char *text;
  __int64 remaining_count;
  __m128i converted_vector_2;
  int element_index_2;
  unsigned int *state_address_5;
  int element_index_3;
  unsigned int *state_address_6;
  unsigned int *converted_vector_3;
  __m128i converted_vector_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400808E0[224];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400808E0 + 0)) /* [rsp+0h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_1400808E0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400808E0 + 40)) /* [rsp+28h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400808E0 + 48)) /* [rsp+30h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1400808E0 + 56)) /* [rsp+38h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1400808E0 + 64)) /* [rsp+40h] */
#define weighted_sum (*(double (*))(void *)(sr_frame_1400808E0 + 72)) /* [rsp+48h] */
#define unused_written_slot_5 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 80)) /* [rsp+50h] */
#define unused_written_slot_6 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 88)) /* [rsp+58h] */
#define unused_written_slot_7 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 96)) /* [rsp+60h] */
#define unused_written_slot_8 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 104)) /* [rsp+68h] */
#define unused_written_slot_9 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 112)) /* [rsp+70h] */
#define unused_written_slot_10 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 120)) /* [rsp+78h] */
#define unused_written_slot_11 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 128)) /* [rsp+80h] */
#define text_2 (*(char (*)[64])(void *)(sr_frame_1400808E0 + 144)) /* [rsp+90h] */
#define unused_frame_slot_208 (*(__int64 (*))(void *)(sr_frame_1400808E0 + 208)) /* [rsp+D0h] */

  renderer_current_font = 2;
  iteration_count = 0;
  state_address = &g_151623978;
  g_16B27E19C = 0;
  state_address_2 = &g_151623978;
  do
  {
    if ( *(state_address_2 - 2886) && !*state_address_2 )
      g_16B27E19C = ++iteration_count;
    if ( state_address_2[711] && !state_address_2[3597] )
      g_16B27E19C = ++iteration_count;
    if ( state_address_2[4308] && !state_address_2[7194] )
      g_16B27E19C = ++iteration_count;
    if ( state_address_2[7905] && !state_address_2[10791] )
      g_16B27E19C = ++iteration_count;
    state_address_2 += 14388;
  }
  while ( (__int64)state_address_2 < (__int64)&g_1519A6D78 );
  state_word = g_16B165F64;
  if ( (int)g_16B165F64 > 0 )
  {
    crt_sprintf(text_2, "%.2f", g_16B27E090);
    sr_text_draw_recovered(text_2, 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43FA0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080A37 */;
    crt_sprintf(text_2, "%.2f", *(unsigned int *)&frame_duration_average);
    sr_text_draw_recovered(text_2, 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44010000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080AA1 */;
    unused_written_slot_11 = g_16B27ECE0;
    unused_written_slot_10 = g_16B27ECDC;
    unused_written_slot_9 = g_16B27ECD8;
    unused_written_slot_8 = g_16B27ECD4;
    unused_written_slot_7 = g_16B27ECD0;
    unused_written_slot_6 = g_16B27ECCC;
    unused_written_slot_5 = g_16B27ECC8;
    sr_text_draw_recovered("Toggle:/i /i /i /i /i /i /i /i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44050000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B27ECFC, g_16B27ECC8, g_16B27ECCC, g_16B27ECD0, g_16B27ECD4, g_16B27ECD8, g_16B27ECDC, g_16B27ECE0}) /* 0x140080B39 */;
    LODWORD(weighted_sum) = g_183E93528;
    unused_written_slot_4 = 1065353216;
    unused_written_slot_3 = 1065353216;
    unused_written_slot_2 = 1065353216;
    unused_written_slot = 1065353216;
    packed_word_bits = 0;
    sr_text_draw_recovered("Cheat:/i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_183E93528}) /* 0x140080B88 */;
    state_address_3 = &g_189C1DC80;
    for ( i = 0; i < 8; ++i )
    {
      LODWORD(weighted_sum) = *state_address_3;
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      vector_result = _mm_castps_si128(_mm_set_ss((float)i));
      unused_written_slot_2 = 1065353216;
      *(float *)SR_VEC_LANES(128, vector_result, i32) = (float)(*(float *)SR_VEC_LANES(128, vector_result, i32) * 16.0) + 320.0;
      unused_written_slot = 1065353216;
      LODWORD(packed_word_bits) = 2;
      sr_text_draw_recovered("V:/i", 1020.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(vector_result))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080C02 */;
      state_address_3 += 96401;
    }
    state_word = g_16B165F64;
  }
  if ( state_word == 1 )
  {
    element_index = 0;
    if ( (int)g_16B27EDC4 <= 0 )
      goto LABEL_54;
    state_address_4 = &g_16B27EDC8;
    do
    {
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      vector_result_2 = _mm_castps_si128(_mm_set_ss((float)element_index));
      unused_written_slot = 1065353216;
      *(float *)SR_VEC_LANES(128, vector_result_2, i32) = (float)(*(float *)SR_VEC_LANES(128, vector_result_2, i32) * 16.0) + 32.0;
      LODWORD(packed_word_bits) = 32;
      sr_text_draw_recovered((char *)&dword_140404A6C[35 * element_index + 179955930], 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(vector_result_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080CC8 */;
      loaded_word = *state_address_4;
      if ( !*state_address_4 )
      {
        LODWORD(weighted_sum) = state_address_4[1];
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 32;
        sr_text_draw_recovered("/i", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(vector_result_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080D1A */;
        loaded_word = *state_address_4;
      }
      if ( loaded_word == 1 )
      {
        weighted_sum = *((float *)state_address_4 + 2);
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 32;
        sr_text_draw_recovered("/f", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(vector_result_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080D74 */;
      }
      ++element_index;
      state_address_4 += 35;
    }
    while ( element_index < (int)g_16B27EDC4 );
    state_word = g_16B165F64;
  }
  if ( state_word == 2 )
  {
    iteration_count_2 = 0;
    buffer_cursor = &g_16B27E1A0;
    do
    {
      LODWORD(weighted_sum) = *buffer_cursor;
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      vector_result_3 = _mm_castps_si128(_mm_set_ss((float)iteration_count_2));
      unused_written_slot_2 = 1065353216;
      *(float *)SR_VEC_LANES(128, vector_result_3, i32) = (float)(*(float *)SR_VEC_LANES(128, vector_result_3, i32) * 16.0) + 192.0;
      unused_written_slot = 1065353216;
      LODWORD(packed_word_bits) = 32;
      sr_text_draw_recovered("/i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(vector_result_3))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080E01 */;
      ++iteration_count_2;
      ++buffer_cursor;
    }
    while ( iteration_count_2 < 16 );
    converted_vector = _mm_cvtsi32_si128((int)(0x42800000u));
    text = (char *)&g_151620C64;
    remaining_count = 256;
    do
    {
      if ( *(state_address - 2886) && !*state_address )
      {
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        packed_word_bits = 0;
        sr_text_draw_recovered(text, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080E75 */;
        *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 16.0;
      }
      text += 14388;
      state_address += 3597;
      --remaining_count;
    }
    while ( remaining_count );
    state_word = g_16B165F64;
  }
  if ( state_word - 3 <= 1 )
  {
    converted_vector_2 = _mm_cvtsi32_si128((int)(0x43000000u));
    if ( state_word == 3 )
    {
      element_index_2 = 64;
      if ( (int)g_16B097E04 <= 64 )
        goto LABEL_54;
      state_address_5 = &g_16B161D94;
      do
      {
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 32;
        sr_text_draw_recovered((char *)&dword_140404A6C[22 * element_index_2 + 179662645], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080F43 */;
        LODWORD(weighted_sum) = *(state_address_5 - 1);
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 32;
        sr_text_draw_recovered("/u", 164.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080F8F */;
        LODWORD(weighted_sum) = *state_address_5;
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 32;
        sr_text_draw_recovered("/u", 324.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080FDA */;
        element_index_3 = g_16B097E04;
        *(float *)SR_VEC_LANES(128, converted_vector_2, i32) = *(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 16.0;
        ++element_index_2;
        state_address_5 += 22;
      }
      while ( element_index_2 < (int)g_16B097E04 );
      state_word = g_16B165F64;
    }
    else
    {
      element_index_3 = g_16B097E04;
    }
    if ( state_word == 4 )
    {
      if ( element_index_3 >= (int)g_16B097E00 )
        goto LABEL_54;
      state_address_6 = &dword_140404A6C[22 * element_index_3 + 179662666];
      do
      {
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 32;
        sr_text_draw_recovered((char *)&dword_140404A6C[22 * element_index_3 + 179662645], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081073 */;
        LODWORD(weighted_sum) = *(state_address_6 - 1);
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 32;
        sr_text_draw_recovered("/u", 164.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400810BF */;
        LODWORD(weighted_sum) = *state_address_6;
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 1065353216;
        LODWORD(packed_word_bits) = 32;
        sr_text_draw_recovered("/u", 324.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008110A */;
        ++element_index_3;
        *(float *)SR_VEC_LANES(128, converted_vector_2, i32) = *(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 16.0;
        state_address_6 += 22;
      }
      while ( element_index_3 < (int)g_16B097E00 );
      state_word = g_16B165F64;
    }
  }
  if ( state_word == 5 )
  {
    converted_vector_3 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u)));
    if ( game_connected )
    {
      LODWORD(weighted_sum) = item_link_peer_count;
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 1065353216;
      packed_word_bits = 0;
      sr_text_draw_recovered("Numofconnections:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(converted_vector_3)), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){item_link_peer_count}) /* 0x140081190 */;
      converted_vector_4 = _mm_cvtsi32_si128((int)(0x43340000u));
    }
    else
    {
      sr_text_draw_recovered("Roundnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(converted_vector_3)), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){game_unknown_183ebfcc8}) /* 0x1400811D1 */;
      LODWORD(weighted_sum) = game_unknown_1a4d2dce4;
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 1065353216;
      packed_word_bits = 0;
      sr_text_draw_recovered("ClientRoundnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43340000u))))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){game_unknown_1a4d2dce4}) /* 0x140081221 */;
      converted_vector_4 = _mm_cvtsi32_si128((int)(0x43480000u));
    }
    sr_text_draw_recovered("Packetsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1AD04ADCC}) /* 0x140081276 */;
    *(float *)SR_VEC_LANES(128, converted_vector_4, i32) = *(float *)SR_VEC_LANES(128, converted_vector_4, i32) + 20.0;
    sr_text_draw_recovered("MaxPacketsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1AD04ADD0}) /* 0x1400812C7 */;
    *(float *)SR_VEC_LANES(128, converted_vector_4, i32) = *(float *)SR_VEC_LANES(128, converted_vector_4, i32) + 20.0;
    sr_text_draw_recovered("Numofevents:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){world_event_count}) /* 0x140081318 */;
    *(float *)SR_VEC_LANES(128, converted_vector_4, i32) = *(float *)SR_VEC_LANES(128, converted_vector_4, i32) + 20.0;
    sr_text_draw_recovered("objpacketsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B27E3A0}) /* 0x140081369 */;
    *(float *)SR_VEC_LANES(128, converted_vector_4, i32) = *(float *)SR_VEC_LANES(128, converted_vector_4, i32) + 20.0;
    sr_text_draw_recovered("conn0bytes:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1A8E3DA3C}) /* 0x1400813BA */;
    *(float *)SR_VEC_LANES(128, converted_vector_4, i32) = *(float *)SR_VEC_LANES(128, converted_vector_4, i32) + 20.0;
    sr_text_draw_recovered("players:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B27E19C}) /* 0x14008140B */;
    *(float *)SR_VEC_LANES(128, converted_vector_4, i32) = *(float *)SR_VEC_LANES(128, converted_vector_4, i32) + 20.0;
    LODWORD(weighted_sum) = local_player;
    unused_written_slot_4 = 1065353216;
    unused_written_slot_3 = 1065353216;
    unused_written_slot_2 = 1065353216;
    unused_written_slot = 1065353216;
    packed_word_bits = 0;
    sr_text_draw_recovered("playernum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){local_player}) /* 0x14008145C */;
  }
LABEL_54:
  renderer_current_font = 0;
  return 0; /* the function has no caller */
}

#undef unused_frame_slot_0
#undef packed_word_bits
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef weighted_sum
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef unused_written_slot_8
#undef unused_written_slot_9
#undef unused_written_slot_10
#undef unused_written_slot_11
#undef text_2
#undef unused_frame_slot_208

//----- (00000001400814D0) ----------------------------------------------------
__int64            sub_1400814D0(int a1, int a2)
{
  __int64 input_value;
  __int64 player_record_offset;
  char *text;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400814D0[1120];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400814D0 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_1400814D0 + 32)) /* [rsp+20h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400814D0 + 40)) /* [rsp+28h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1400814D0 + 48)) /* [rsp+30h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1400814D0 + 56)) /* [rsp+38h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_1400814D0 + 64)) /* [rsp+40h] */
#define unused_written_slot_6 (*(unsigned int (*))(void *)(sr_frame_1400814D0 + 72)) /* [rsp+48h] */
#define text_2 (*(char (*)[1024])(void *)(sr_frame_1400814D0 + 80)) /* [rsp+50h] */
#define unused_frame_slot_1104 (*(__int64 (*))(void *)(sr_frame_1400814D0 + 1104)) /* [rsp+450h] */

  if ( a1 != -1 )
  {
    input_value = a2;
    if ( a2 != -1 )
    {
      unused_written_slot_5 = 1065353216;
      unused_written_slot_4 = 0;
      player_record_offset = 3597LL * a1;
      unused_written_slot_3 = 0;
      unused_written_slot_2 = 0;
      unused_written_slot = 0;
      sr_text_draw_recovered((char *)&dword_140404A6C[player_record_offset + 71856254], 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42400000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081599 */;
      crt_sprintf(text_2, "%03d-%04d", dword_140404A6C[player_record_offset + 71856265] / 0x2710, dword_140404A6C[player_record_offset + 71856265] % 0x2710);
      unused_written_slot_5 = 1065353216;
      unused_written_slot_4 = 0;
      unused_written_slot_3 = 0;
      unused_written_slot_2 = 0;
      unused_written_slot = 0;
      sr_text_draw_recovered(text_2, 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008160F */;
      unused_written_slot_6 = dword_140404A6C[player_record_offset + 71856275];
      unused_written_slot_5 = 1065353216;
      unused_written_slot_4 = 0;
      unused_written_slot_3 = 0;
      unused_written_slot_2 = 0;
      unused_written_slot = 0;
      sr_text_draw_recovered("Corporate rating: /i", 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A00000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081663 */;
      if ( (unsigned int)input_value <= 5 )
      {
        text = off_1402B2890[input_value];
        unused_written_slot_5 = 1065353216;
        unused_written_slot_4 = 0;
        unused_written_slot_3 = 0;
        unused_written_slot_2 = 0;
        unused_written_slot = 0;
        sr_text_draw_recovered(text, 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42E00000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400816B5 */;
        unused_written_slot_6 = dword_140404A6C[player_record_offset + 71856273];
        unused_written_slot_5 = 1065353216;
        unused_written_slot_4 = 0;
        unused_written_slot_3 = 0;
        unused_written_slot_2 = 0;
        unused_written_slot = 0;
        sr_text_draw_recovered("$/I", 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081709 */;
        unused_written_slot_6 = dword_140404A6C[player_record_offset + 71856274];
        unused_written_slot_5 = 1065353216;
        unused_written_slot_4 = 0;
        unused_written_slot_3 = 0;
        unused_written_slot_2 = 0;
        unused_written_slot = 0;
        sr_text_draw_recovered("Budget: $/I", 680.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081761 */;
      }
    }
    return 0; /* the function has no caller */
  }
  return result;
}

#undef unused_frame_slot_0
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef text_2
#undef unused_frame_slot_1104

//----- (0000000140081B60) ----------------------------------------------------
void            sub_140081B60(int a1)
{
  __int64 record_word_offset;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  int iteration_count;
  __int128 cached_xmmword_140279690;
  unsigned int *record_byte_offset;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 void_2;

  record_word_offset = 32901LL * a1;
  if ( !dword_140404A6C[record_word_offset + 299853693] || g_183EBFAA4 == 3 )
  {
    glBindTexture(3553, renderer_white_texture);
    iteration_count = 0;
    g_1AD059440 = 2;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    if ( dword_140404A6C[record_word_offset + 299853693] )
      cached_xmmword_140279690 = xmmword_140279690;
    else
      cached_xmmword_140279690 = xmmword_140279700;
    g_1AD299450 = cached_xmmword_140279690;
    record_byte_offset = &g_189BFFC70;
    {
      /* 0x140081BF4..0x140081C88: x = i + 16 (768 when g_183EBFAA4 == 3), y = sample / 256 + 64
         (288), z = 0; the samples are shorts 16 bytes apart (0x140081C44 reads the one before rdi, 0x140081C65
         the one at rdi). The C had lost all three arguments of both calls. */
      float sr_x0 = 16.0f, sr_y0 = 64.0f;
      if ( g_183EBFAA4 == 3 )
      {
        sr_x0 = 768.0f;
        sr_y0 = 288.0f;
      }
      do
      {
        sr_renderer_batch_vertex3f((float)iteration_count + sr_x0, (float)*((__int16 *)record_byte_offset - 8) * 0.00390625f + sr_y0, 0.0f);
        ++iteration_count;
        sr_renderer_batch_vertex3f((float)iteration_count + sr_x0, (float)*(__int16 *)record_byte_offset * 0.00390625f + sr_y0, 0.0f);
        record_byte_offset += 4;
      }
      while ( iteration_count < 239 );
    }
    sr_renderer_batch_flush(void_2, unrecovered_register_value, unrecovered_register_value_2);
  }
}

//----- (0000000140081CC0) ----------------------------------------------------
__m128            sub_140081CC0(__int64 a1, float *a2, float a3, float a4, float a5)
{
  __int128 limited_value;
  float scaled_value;
  float weighted_sum;
  float squared_value;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;

  limited_value = *(unsigned int *)(a1 + 4);
  scaled_value = *(float *)a1;
  weighted_sum = *(float *)(a1 + 8);
  squared_value = (float)((float)(scaled_value * scaled_value) + (float)(*(float *)&limited_value * *(float *)&limited_value)) + (float)(weighted_sum * weighted_sum);
  square_root = fsqrt(squared_value);
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    limited_value = 0;
    scaled_ratio_2 = 0.0;
  }
  else
  {
    scaled_ratio = scaled_value * (float)(1.0 / square_root);
    *(float *)&limited_value = *(float *)&limited_value * (float)(1.0 / square_root);
    scaled_ratio_2 = weighted_sum * (float)(1.0 / square_root);
  }
  *(float *)&limited_value = fminf(
                    fmaxf(
                      (float)((float)((float)((float)((float)((float)((float)(*(float *)&limited_value * a2[1]) + (float)(scaled_ratio * *a2))
                                                            + (float)(scaled_ratio_2 * a2[2]))
                                                    * a3)
                                            * a4)
                                    * -0.75)
                            * squared_value)
                    / a5,
                      square_root * -0.125),
                    square_root * 0.125);
  return (__m128)limited_value;
}

//----- (0000000140084950) ----------------------------------------------------
void sub_140084950()
{
  if ( !g_189F0EEA4 )
  {
    sr_CSDrawText("Place Building", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    sr_text_draw_recovered((char *)&dword_140404A6C[22 * g_189F0EF4C + 225368653], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084A4B */;
    if ( g_189F0EF44 != -1 )
    {
      sr_text_draw_recovered((char *)&dword_140404A6C[24 * g_189F0EF44 + 225171851], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43DC0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084AAC */;
      sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43E40000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084B0F */;
    }
  }
  if ( g_189F0EEA4 == 1 )
  {
    sr_text_draw_recovered("Select Area", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084B61 */;
    sr_text_draw_recovered("sectors:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1726DA088}) /* 0x140084BAD */;
    sr_text_draw_recovered("type:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF60}) /* 0x140084BFD */;
    sr_text_draw_recovered("x:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43800000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF10}) /* 0x140084C4D */;
    sr_text_draw_recovered("y:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF14}) /* 0x140084C9D */;
    sr_text_draw_recovered("z:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43900000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF18}) /* 0x140084CED */;
  }
  if ( g_189F0EEA4 == 2 )
  {
    sr_text_draw_recovered("Street", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084D3F */;
    sr_text_draw_recovered("intersectionnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF54}) /* 0x140084D8B */;
    sr_text_draw_recovered("streetnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF5C}) /* 0x140084DDB */;
  }
  if ( g_189F0EEA4 == 3 )
  {
    sr_text_draw_recovered("Mission", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084E2D */;
    sr_text_draw_recovered("numofguards:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1B4277C40}) /* 0x140084E79 */;
  }
}

//----- (0000000140084EB0) ----------------------------------------------------
__int64 sub_140084EB0()
{
  unsigned int cached_game_state;
  __m128i converted_vector;
  char *literal_text;
  char *literal_text_2;
  unsigned int *converted_vector_2;
  signed int state_word;
  signed int iteration_count;
  signed int integer_difference;
  unsigned int *state_address;
  char *destination_text;
  bool comparison_result;
  char *destination_text_2;
  char *literal_text_3;
  unsigned int *converted_vector_3;
  signed int state_word_2;
  signed int iteration_count_2;
  signed int integer_difference_2;
  unsigned int *state_address_2;
  char *destination_text_3;
  char *destination_text_4;
  char *literal_text_4;
  signed int state_word_3;
  signed int iteration_count_3;
  signed int integer_difference_3;
  unsigned int *state_address_3;
  char *destination_text_5;
  char *destination_text_6;
  unsigned int integer_sum;
  unsigned int *state_address_4;
  int iteration_count_4;
  unsigned int *state_address_5;
  int i;
  __int64 loaded_word;
  int state_word_4;
  float selected_scalar;
  __int64 scaled_index;
  __m128i saved_converted_vector;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140084EB0[1136];
#define callee_output_word (*(_BYTE (*)[32])(void *)(sr_frame_140084EB0 + 0)) /* [rsp+0h] */
#define float_word (*(int (*))(void *)(sr_frame_140084EB0 + 32)) /* [rsp+20h] */
#define scaled_value (*(float (*))(void *)(sr_frame_140084EB0 + 40)) /* [rsp+28h] */
#define scaled_value_2 (*(float (*))(void *)(sr_frame_140084EB0 + 48)) /* [rsp+30h] */
#define frame_word_at_56 (*(int (*))(void *)(sr_frame_140084EB0 + 56)) /* [rsp+38h] */
#define selection_code (*(int (*))(void *)(sr_frame_140084EB0 + 64)) /* [rsp+40h] */
#define selection_code_2 (*(int (*))(void *)(sr_frame_140084EB0 + 72)) /* [rsp+48h] */
#define selection_code_3 (*(int (*))(void *)(sr_frame_140084EB0 + 80)) /* [rsp+50h] */
#define text (*(char (*)[1024])(void *)(sr_frame_140084EB0 + 96)) /* [rsp+60h] */
#define unused_frame_slot_1120 (*(__int64 (*))(void *)(sr_frame_140084EB0 + 1120)) /* [rsp+460h] */

  cached_game_state = game_state;
  converted_vector = _mm_cvtsi32_si128((int)(0x43000000u));
  if ( game_state == 3 )
  {
    if ( (int)g_183EBFDB0 <= 0 )
    {
      literal_text = "Eliminator Wins!";
      if ( g_183F7A320 != 1 )
        literal_text = "Eliminators Wins!";
    }
    else
    {
      literal_text = "Humans Win!";
    }
    scaled_value = 1.0;
    float_word = 32;
    sr_text_draw_recovered(literal_text, 256.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 32.0, 32u, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084FE7 */;
    selection_code = 1065353216;
    literal_text_2 = "The Eliminator";
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    converted_vector_2 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u)));
    if ( g_183F7A320 != 1 )
      literal_text_2 = "The Eliminators";
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered(literal_text_2, 4.0, sr_text_bits_float((unsigned)(uintptr_t)(converted_vector_2)), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085040 */;
    state_word = g_183F7A320;
    text[0] = 0;
    iteration_count = 0;
    if ( (int)g_183F7A320 > 0 )
    {
      integer_difference = g_183F7A320 - 1;
      state_address = &g_183F7A328;
      do
      {
        destination_text = &callee_output_word[95];
        do
          comparison_result = *++destination_text == 0;
        while ( !comparison_result );
        strcpy(destination_text, (     char *)&dword_140404A6C[3597 * *state_address + 71856254]);
        if ( iteration_count < integer_difference )
        {
          destination_text_2 = &callee_output_word[95];
          do
            comparison_result = *++destination_text_2 == 0;
          while ( !comparison_result );
          strcpy(destination_text_2, ", ");
        }
        ++iteration_count;
        state_address += 9;
      }
      while ( iteration_count < state_word );
    }
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered(text, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43140000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085131 */;
    selection_code = 1065353216;
    literal_text_3 = "The Savior";
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    converted_vector_3 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x433C0000u)));
    if ( g_183F7A320 != 1 )
      literal_text_3 = "The Saviors";
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered(literal_text_3, 4.0, sr_text_bits_float((unsigned)(uintptr_t)(converted_vector_3)), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008518A */;
    state_word_2 = g_183F7A320;
    iteration_count_2 = 0;
    text[0] = 0;
    if ( (int)g_183F7A320 > 0 )
    {
      integer_difference_2 = g_183F7A320 - 1;
      state_address_2 = &g_183F7A324;
      do
      {
        destination_text_3 = &callee_output_word[95];
        do
          comparison_result = *++destination_text_3 == 0;
        while ( !comparison_result );
        strcpy(destination_text_3, (     char *)&dword_140404A6C[3597 * *state_address_2 + 71856254]);
        if ( iteration_count_2 < integer_difference_2 )
        {
          destination_text_4 = &callee_output_word[95];
          do
            comparison_result = *++destination_text_4 == 0;
          while ( !comparison_result );
          strcpy(destination_text_4, ", ");
        }
        ++iteration_count_2;
        state_address_2 += 9;
      }
      while ( iteration_count_2 < state_word_2 );
    }
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered(text, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43500000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008526D */;
    literal_text_4 = "The Protector";
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    if ( g_183F7A320 != 1 )
      literal_text_4 = "The Protectors";
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered(literal_text_4, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43780000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400852CA */;
    state_word_3 = g_183F7A320;
    iteration_count_3 = 0;
    text[0] = 0;
    if ( (int)g_183F7A320 > 0 )
    {
      integer_difference_3 = g_183F7A320 - 1;
      state_address_3 = &g_183F7A32C;
      do
      {
        destination_text_5 = &callee_output_word[95];
        do
          comparison_result = *++destination_text_5 == 0;
        while ( !comparison_result );
        strcpy(destination_text_5, (     char *)&dword_140404A6C[3597 * *state_address_3 + 71856254]);
        if ( iteration_count_3 < integer_difference_3 )
        {
          destination_text_6 = &callee_output_word[95];
          do
            comparison_result = *++destination_text_6 == 0;
          while ( !comparison_result );
          strcpy(destination_text_6, ", ");
        }
        ++iteration_count_3;
        state_address_3 += 9;
      }
      while ( iteration_count_3 < state_word_3 );
    }
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered(text, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43860000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400853B1 */;
    cached_game_state = game_state;
  }
  if ( cached_game_state == 1 )
  {
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    renderer_current_font = 2;
    float_word = 32;
    sr_text_draw_recovered("THE ELIMINATOR", 256.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 32.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085416 */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("It is the present, the year 1985.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008545D */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("A robot from the year 2019 has been sent back in time", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400854A8 */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("to eliminate the future resistance leader.  The future people", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400854F3 */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("also sent someone back to stop the robot.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42F80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008553E */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("The Eliminator", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43240000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085592 */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("You must kill the future resistance leader.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x433C0000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400855D9 */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("A red box will appear in the HUD showing their last known location.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43500000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085620 */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("The Protector", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43780000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008566B */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("You must stop The Eliminator, the only way to destroy it is with grenades.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400856B6 */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("Civilian//The Savior", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439C0000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085701 */;
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 0.75;
    scaled_value = 0.75;
    float_word = 32;
    sr_text_draw_recovered("Your goal is to survive, one of you is the future savior of mankind.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43A80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008574C */;
    integer_sum = 0;
    state_address_4 = &g_151623978;
    g_192E8EC40 = 0;
    iteration_count_4 = 0;
    state_address_5 = &g_192E8EC44;
    do
    {
      if ( *(state_address_4 - 2886) && !*state_address_4 )
      {
        dword_140404A6C[2 * integer_sum + 346695798] = iteration_count_4;
        integer_sum = ++g_192E8EC40;
      }
      ++iteration_count_4;
      state_address_4 += 3597;
    }
    while ( iteration_count_4 < 256 );
    selection_code = 1065353216;
    frame_word_at_56 = 1065353216;
    scaled_value_2 = 1.0;
    scaled_value = 1.0;
    float_word = 96;
    sr_text_draw_recovered("The Players", 776.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42C40000u))))), 17.5, 96u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400857F9 */;
    for ( i = 0; i < (int)g_192E8EC40; state_address_5 += 2 )
    {
      loaded_word = *state_address_5;
      if ( (unsigned int)loaded_word > 0xFF )
        loaded_word = 0;
      if ( game_state != 2 && (_DWORD)loaded_word != local_player )
      {
        selection_code_3 = 1065353216;
        selection_code_2 = 1065353216;
        selection_code = 1065353216;
        frame_word_at_56 = 1065353216;
        scaled_value_2 = 0.0;
        scaled_value = 24.0;
        float_word = 1103101952;
        if ( dword_140404A6C[loaded_word + 284023074] )
          state_word_4 = g_192E8F44C;
        else
          state_word_4 = dword_140404A6C[3597 * (unsigned int)loaded_word + 71856270]
              ? g_192E8F448
              : g_192E8F444;
        sr_CSDrawAtlasEntry(0, state_word_4, 752.0, *(float *)SR_VEC_LANES(128, converted_vector, i32), *(float *)&float_word, scaled_value, SLOBYTE(scaled_value_2), frame_word_at_56, selection_code, selection_code_2, selection_code_3);
        if ( g_183F7C750 )
        {
          if ( !g_192E8F450
            && g_183F7C6C0 >= 752.0
            && g_183F7C6C0 < 776.0
            && g_183F7C6C4 >= *(float *)SR_VEC_LANES(128, converted_vector, i32)
            && g_183F7C6C4 < (float)(*(float *)SR_VEC_LANES(128, converted_vector, i32) + 24.0) )
          {
            dword_140404A6C[loaded_word + 284023074] ^= 1u;
          }
        }
      }
      selected_scalar = 1.0;
      if ( game_state == 1 && !dword_140404A6C[3597 * (unsigned int)loaded_word + 71856271] )
        selected_scalar = 0.5;
      selection_code = 1065353216;
      frame_word_at_56 = LODWORD(selected_scalar);
      scaled_index = 3597LL * (unsigned int)loaded_word;
      scaled_value_2 = selected_scalar * 0.75;
      scaled_value = selected_scalar * 0.75;
      float_word = 96;
      sr_CSDrawText(
        (char *)&dword_140404A6C[scaled_index + 71856254],
        776.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector),
        17.5);
      crt_sprintf(
        text,
        "%03d-%04d",
        dword_140404A6C[scaled_index + 71856265] / 0x2710,
        dword_140404A6C[scaled_index + 71856265] % 0x2710);
      selection_code = 1065353216;
      saved_converted_vector = converted_vector;
      *(float *)SR_VEC_LANES(128, saved_converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 18.0;
      frame_word_at_56 = LODWORD(selected_scalar);
      scaled_value_2 = selected_scalar * 0.75;
      scaled_value = selected_scalar * 0.75;
      float_word = 96;
      sr_CSDrawText(text, 776.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(saved_converted_vector), 10.0);
      ++i;
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 24.0;
    }
  }
  renderer_current_font = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}

#undef callee_output_word
#undef float_word
#undef scaled_value
#undef scaled_value_2
#undef frame_word_at_56
#undef selection_code
#undef selection_code_2
#undef selection_code_3
#undef text
#undef unused_frame_slot_1120

//----- (0000000140088C00) ----------------------------------------------------
void sub_140088C00()
{
  __int64 scaled_index;
  __m128i converted_vector;
  unsigned int *buffer_cursor;
  unsigned int *state_address;
  char *state_address_2;
  __int64 remaining_count;
  int state_word;

  sr_text_draw_recovered("Spectating", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44000000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088C8D */;
  if ( g_183F79DE4 != -1 )
  {
    scaled_index = (int)dword_140404A6C[7166 * g_183F79DE4 + 280651305];
    if ( (_DWORD)scaled_index != -1 )
      sr_CSDrawText(
        (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 14388 * scaled_index + 291638372),
        512.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44040000u))),
        20.0);
  }
  sr_text_draw_recovered("Press Space to switch player", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088D9C */;
  sr_text_draw_recovered("Press 1 for freecam", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440D0000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088DE6 */;
  converted_vector = _mm_cvtsi32_si128((int)(0x42800000u));
  buffer_cursor = &g_183F7AEF4;
  state_address = &g_151623978;
  state_address_2 = (char *)&g_151620C64;
  remaining_count = 256;
  do
  {
    if ( *(state_address - 2886) && !*state_address && *(state_address - 2847) == -1 )
    {
      sr_CSDrawText(state_address_2, 772.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector), 20.0);
      if ( *buffer_cursor )
      {
        state_word = g_192E8F44C;
      }
      else if ( *(state_address - 2869) )
      {
        state_word = g_192E8F448;
      }
      else
      {
        state_word = g_192E8F444;
      }
      sr_CSDrawAtlasEntry(0, state_word, 752.0, *(float *)SR_VEC_LANES(128, converted_vector, i32), 20.0, 20.0, 0, 1065353216, 1065353216, 1065353216, 1065353216);
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 20.0;
    }
    state_address_2 += 14388;
    ++buffer_cursor;
    state_address += 3597;
    --remaining_count;
  }
  while ( remaining_count );
}

//----- (0000000140088F80) ----------------------------------------------------
double sub_140088F80()
{
  __m128i si128;
       __m128i *state_address;
  __m128i loaded_vector;
  __m128i vector_result;
  __m128i vector_result_2;
  __m128i vector_result_3;
  __m128i loaded_vector_2;
  __m128i vector_result_4;
  __m128i vector_result_5;
  double result;

  sr_CSDrawText("Ping:", 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))), 16.0);
  sr_text_draw_recovered("/i", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1A6F9E138}) /* 0x14008903F */;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279150);
  state_address = (     __m128i *)&g_1A6F9E154;
  loaded_vector = _mm_load_si128((     __m128i *)&xmmword_1402799B0);
  vector_result = _mm_cvtsi64_si128((long long)(0));
  vector_result_2 = _mm_cvtsi64_si128((long long)(0));
  do
  {
    vector_result_3 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_loadu_si128(state_address - 1), _mm_cvtsi32_si128((int)(0LL))), loaded_vector);
    vector_result = _mm_or_si128(_mm_and_si128(_mm_add_epi32(si128, vector_result), vector_result_3), _mm_andnot_si128(vector_result_3, vector_result));
    loaded_vector_2 = _mm_loadu_si128(state_address);
    state_address += 2;
    vector_result_4 = _mm_andnot_si128(_mm_cmpeq_epi32(loaded_vector_2, _mm_cvtsi32_si128((int)(0LL))), loaded_vector);
    vector_result_2 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(si128, vector_result_2), vector_result_4), _mm_andnot_si128(vector_result_4, vector_result_2));
  }
  while ( (__int64)state_address < (__int64)&g_1A6F9E554 );
  vector_result_5 = _mm_add_epi32(vector_result_2, vector_result);
  sr_text_draw_recovered("Packetloss:", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008912C */;
  sr_text_draw_recovered("/i%", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140089183 */;
  *(_QWORD *)&result = SR_VEC_READ_LANES(128, _mm_srli_si128(_mm_add_epi32(vector_result_5, _mm_srli_si128(vector_result_5, 8)), 4), u64)[0];
  return result;
}

//----- (0000000140089430) ----------------------------------------------------
void sub_140089430()
{
  __int64 unused_local;
  int iteration_count;
  __int64 element_index;
  __m128i converted_vector;
  __m128i converted_vector_2;
  float scaled_value;
  float component_sum;
  int scaled_index;
  float combined_products;
  int saved_combined_products;
  float component_sum_2;
  unsigned int *converted_integer;
  char *literal_text;
  float text_x;
  int integer_sum;
  unsigned int *state_address;
  __m128i saved_converted_vector;
  unsigned int record_byte_offset;
  __int64 scaled_index_2;
  int scaled_index_3;
  __int64 table_value;
  int table_value_2;
  __int64 table_value_3;
  int table_value_4;
  __int64 table_value_5;
  int table_value_6;
  __int64 table_value_7;
  int table_value_8;
  __int64 table_value_9;
  int table_value_10;
  __int64 table_value_11;
  int table_value_12;
  __int64 table_value_13;
  int table_value_14;
  int record_byte_offset_2;
  __int64 record_byte_offset_3;
  __m128i si128;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  __m128i converted_vector_5;
  unsigned int *buffer_cursor;
  _DWORD *running_total;
  __int64 remaining_count;
  int scaled_index_4;
  int iteration_count_2;
  unsigned int *buffer_cursor_2;
  unsigned int scaled_index_5;
  __int64 scaled_index_6;
  __int64 table_value_15;
  int scaled_index_7;

  glBindTexture(3553, renderer_white_texture);
  sr_renderer_draw_textured_rect(sr_export_float_lane_container(0x40000000), sr_export_float_lane_container(1123811328), 0x447F0000 /* native XMM2 width 1020.0f */, 480.0, 0, 0, 0, 0, 1056964608);
  if ( game_type == 3 )
  {
    iteration_count = 0;
    element_index = 0;
    converted_vector = _mm_cvtsi32_si128((int)(0x43000000u));
    converted_vector_2 = _mm_cvtsi32_si128((int)(0x42D00000u));
    do
    {
      scaled_value = (float)iteration_count * 252.0;
      if ( (unsigned int)iteration_count >= 3 )
      {
        sr_CSDrawText(Parameters, scaled_value + 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2), 24.0);
      }
      else
      {
        component_sum = scaled_value + 8.0;
        sr_CSDrawText(off_1402B2890[element_index], scaled_value + 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2), 24.0);
        if ( game_state == 3 && (scaled_index = dword_140404A6C[6 * element_index + 335047065]) != 0 )
        {
          combined_products = (float)((float)((float)((int)dword_140404A6C[6 * element_index + 335047064] / 10) * 100.0) / (float)scaled_index) - 100.0;
          if ( combined_products <= 0.0 )
          {
            if ( combined_products < 0.0 )
              combined_products = combined_products - 0.5;
          }
          else
          {
            combined_products = combined_products + 0.5;
          }
          saved_combined_products = (int)combined_products;
          component_sum_2 = component_sum + 228.0;
          converted_integer = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2);
          if ( saved_combined_products < -50 )
          {
            literal_text = "$/i(Split)";
          }
          else
          {
            literal_text = "$/i(+/i%)";
            if ( saved_combined_products <= 0 )
              literal_text = "$/i(/i%)";
          }
        }
        else
        {
          component_sum_2 = component_sum + 228.0;
          converted_integer = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2);
          literal_text = "$/i";
        }
        sr_CSDrawText(literal_text, component_sum_2, converted_integer, 24.0);
        converted_vector = _mm_cvtsi32_si128((int)(0x43000000u));
      }
      text_x = scaled_value + 4.0;
      if ( !game_state )
        sr_text_draw_recovered("/i.", text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2))), 24.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008982D */;
      integer_sum = 0;
      state_address = &g_151623978;
      g_192E8EC40 = 0;
      saved_converted_vector = converted_vector;
      record_byte_offset = 2;
      do
      {
        if ( *(state_address - 2886) )
        {
          if ( !*state_address )
          {
            scaled_index_2 = (int)*(state_address - 2853);
            if ( (_DWORD)scaled_index_2 == iteration_count || element_index == 3 && (_DWORD)scaled_index_2 == 17 )
            {
              scaled_index_3 = *(state_address - 2867);
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset - 2;
              if ( (_DWORD)scaled_index_2 == -1 )
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_3;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * scaled_index_2 + 335047064] * 0.1)
                                                                                                 * (float)(int)*(state_address - 2851))
                                                                                         + (float)scaled_index_3);
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[711] )
        {
          if ( !state_address[3597] )
          {
            table_value = (int)state_address[744];
            if ( (_DWORD)table_value == iteration_count || element_index == 3 && (_DWORD)table_value == 17 )
            {
              table_value_2 = state_address[730];
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset - 1;
              if ( (_DWORD)table_value == -1 )
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = table_value_2;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value + 335047064] * 0.1)
                                                                                                 * (float)(int)state_address[746])
                                                                                         + (float)table_value_2);
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[4308] )
        {
          if ( !state_address[7194] )
          {
            table_value_3 = (int)state_address[4341];
            if ( (_DWORD)table_value_3 == iteration_count || element_index == 3 && (_DWORD)table_value_3 == 17 )
            {
              table_value_4 = state_address[4327];
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset;
              if ( (_DWORD)table_value_3 == -1 )
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = table_value_4;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_3 + 335047064] * 0.1)
                                                                                                 * (float)(int)state_address[4343])
                                                                                         + (float)table_value_4);
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[7905] )
        {
          if ( !state_address[10791] )
          {
            table_value_5 = (int)state_address[7938];
            if ( (_DWORD)table_value_5 == iteration_count || element_index == 3 && (_DWORD)table_value_5 == 17 )
            {
              table_value_6 = state_address[7924];
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 1;
              if ( (_DWORD)table_value_5 == -1 )
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = table_value_6;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_5 + 335047064] * 0.1)
                                                                                                 * (float)(int)state_address[7940])
                                                                                         + (float)table_value_6);
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[11502] )
        {
          if ( !state_address[14388] )
          {
            table_value_7 = (int)state_address[11535];
            if ( (_DWORD)table_value_7 == iteration_count || element_index == 3 && (_DWORD)table_value_7 == 17 )
            {
              table_value_8 = state_address[11521];
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 2;
              if ( (_DWORD)table_value_7 == -1 )
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = table_value_8;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_7 + 335047064] * 0.1)
                                                                                                 * (float)(int)state_address[11537])
                                                                                         + (float)table_value_8);
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[15099] )
        {
          if ( !state_address[17985] )
          {
            table_value_9 = (int)state_address[15132];
            if ( (_DWORD)table_value_9 == iteration_count || element_index == 3 && (_DWORD)table_value_9 == 17 )
            {
              table_value_10 = state_address[15118];
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 3;
              if ( (_DWORD)table_value_9 == -1 )
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = table_value_10;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_9 + 335047064] * 0.1)
                                                                                                 * (float)(int)state_address[15134])
                                                                                         + (float)table_value_10);
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[18696] )
        {
          if ( !state_address[21582] )
          {
            table_value_11 = (int)state_address[18729];
            if ( (_DWORD)table_value_11 == iteration_count || element_index == 3 && (_DWORD)table_value_11 == 17 )
            {
              table_value_12 = state_address[18715];
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 4;
              if ( (_DWORD)table_value_11 == -1 )
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = table_value_12;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_11 + 335047064] * 0.1)
                                                                                                 * (float)(int)state_address[18731])
                                                                                         + (float)table_value_12);
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[22293] )
        {
          if ( !state_address[25179] )
          {
            table_value_13 = (int)state_address[22326];
            if ( (_DWORD)table_value_13 == iteration_count || element_index == 3 && (_DWORD)table_value_13 == 17 )
            {
              table_value_14 = state_address[22312];
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 5;
              if ( (_DWORD)table_value_13 == -1 )
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = table_value_14;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_13 + 335047064] * 0.1)
                                                                                                 * (float)(int)state_address[22328])
                                                                                         + (float)table_value_14);
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        record_byte_offset += 8;
        state_address += 28776;
      }
      while ( (int)(record_byte_offset - 2) < 256 );
      renderer_sort_count = integer_sum;
      record_byte_offset_2 = 0;
      record_byte_offset_3 = 0;
      if ( integer_sum >= 8 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
        do
        {
          record_byte_offset_2 += 8;
          converted_vector_3 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695813]);
          converted_vector_4 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695811]);
          converted_vector_5 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695807]);
          *(__m128i_u *)&dword_140404A6C[record_byte_offset_3 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695805]))));
          *(__m128i_u *)&dword_140404A6C[record_byte_offset_3 + 437192786] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                converted_vector_5,
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695809])),
                                                              _mm_unpacklo_epi32(converted_vector_4, converted_vector_3)));
          record_byte_offset_3 += 8;
        }
        while ( record_byte_offset_3 < integer_sum - (integer_sum & 7) );
      }
      if ( record_byte_offset_2 < integer_sum )
      {
        buffer_cursor = &dword_140404A6C[record_byte_offset_3 + 437192782];
        running_total = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * record_byte_offset_3 + 1390996552);
        remaining_count = (unsigned int)(integer_sum - record_byte_offset_2);
        do
        {
          ++buffer_cursor;
          scaled_index_4 = -1879048193 - *running_total;
          running_total += 2;
          *(buffer_cursor - 1) = scaled_index_4;
          --remaining_count;
        }
        while ( remaining_count );
      }
      sr_renderer_sort();
      iteration_count_2 = 0;
      if ( integer_sum > 0 )
      {
        buffer_cursor_2 = &g_1A85C6BA4;
        do
        {
          scaled_index_5 = dword_140404A6C[2 * *buffer_cursor_2 + 346695798];
          if ( scaled_index_5 > 0xFF )
            scaled_index_5 = 0;
          scaled_index_6 = 3597LL * scaled_index_5;
          sr_CSDrawText(
            (char *)&dword_140404A6C[scaled_index_6 + 71856254],
            text_x,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(saved_converted_vector),
            24.0);
          table_value_15 = (int)dword_140404A6C[scaled_index_6 + 71856286];
          scaled_index_7 = dword_140404A6C[scaled_index_6 + 71856272];
          if ( (_DWORD)table_value_15 != -1 )
            scaled_index_7 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_15 + 335047064] * 0.1)
                                     * (float)(int)dword_140404A6C[scaled_index_6 + 71856288])
                             + (float)scaled_index_7);
          dword_140404A6C[scaled_index_6 + 71856278] = scaled_index_7;
          sr_text_draw_recovered("$/I", text_x + 240.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(saved_converted_vector))), 24.0, 34u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A01C */;
          ++iteration_count_2;
          *(float *)SR_VEC_LANES(128, saved_converted_vector, i32) = *(float *)SR_VEC_LANES(128, saved_converted_vector, i32) + 24.0;
          ++buffer_cursor_2;
        }
        while ( iteration_count_2 < (int)g_192E8EC40 );
        converted_vector = _mm_cvtsi32_si128((int)(0x43000000u));
      }
      converted_vector_2 = _mm_cvtsi32_si128((int)(0x42D00000u));
      ++iteration_count;
      ++element_index;
    }
    while ( iteration_count < 4 );
  }
}

// 140089DCC: conditional instruction was optimized away because ebx.4>=8
// 140089DC6: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF

//----- (000000014008A110) ----------------------------------------------------
__int64 sub_14008A110()
{
  unsigned int state_word;
  char *table_value;
  int selection_flag;
  int state_word_2;
  __int64 selection_flag_2;
  int float_word;
  int float_word_2;
  int float_word_3;
  char *literal_text;
  bool comparison_result;
  __m128i converted_vector;
  int iteration_count;
  __int64 element_index;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float text_x;
  char *text;
  int scaled_index;
  float combined_products;
       char *literal_text_2;
  __m128i converted_vector_2;
  int integer_sum;
  unsigned int record_byte_offset;
  unsigned int *state_address;
  __int64 scaled_index_2;
  int scaled_index_3;
  __int64 table_value_2;
  int scaled_index_4;
  __int64 table_value_3;
  int scaled_index_5;
  __int64 table_value_4;
  int scaled_index_6;
  __int64 table_value_5;
  int scaled_index_7;
  __int64 table_value_6;
  int scaled_index_8;
  __int64 table_value_7;
  int scaled_index_9;
  __int64 table_value_8;
  int scaled_index_10;
  int record_byte_offset_2;
  __int64 record_byte_offset_3;
  __m128i si128;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  __m128i converted_vector_5;
  unsigned int *buffer_cursor;
  _DWORD *running_total;
  __int64 remaining_count;
  int scaled_index_11;
  int iteration_count_2;
  unsigned int *buffer_cursor_2;
  float component_sum;
  __int64 scaled_index_12;
  int state_word_3;
  float selected_scalar;
  __int64 scaled_index_13;
  __m128i saved_converted_vector;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008A110[640];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14008A110 + 0)) /* [rsp+0h] */
#define float_word_4 (*(int (*))(void *)(sr_frame_14008A110 + 32)) /* [rsp+20h] */
#define scaled_value_4 (*(float (*))(void *)(sr_frame_14008A110 + 40)) /* [rsp+28h] */
#define scaled_value_5 (*(float (*))(void *)(sr_frame_14008A110 + 48)) /* [rsp+30h] */
#define scaled_value_6 (*(float (*))(void *)(sr_frame_14008A110 + 56)) /* [rsp+38h] */
#define selection_code (*(int (*))(void *)(sr_frame_14008A110 + 64)) /* [rsp+40h] */
#define scaled_index_14 (*(int (*))(void *)(sr_frame_14008A110 + 72)) /* [rsp+48h] */
#define selection_code_2 (*(int (*))(void *)(sr_frame_14008A110 + 80)) /* [rsp+50h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_14008A110 + 96)) /* [rsp+60h] */
#define saved_scaled_value_2 (*(float (*))(void *)(sr_frame_14008A110 + 100)) /* [rsp+64h] */
#define saved_scaled_value_3 (*(float (*))(void *)(sr_frame_14008A110 + 104)) /* [rsp+68h] */
#define text_2 (*(char (*)[512])(void *)(sr_frame_14008A110 + 112)) /* [rsp+70h] */
#define unused_frame_slot_624 (*(__int64 (*))(void *)(sr_frame_14008A110 + 624)) /* [rsp+270h] */

  if ( g_183EBFCB0 != 1 )
    goto LABEL_16;
  state_word = g_183EBFCC4;
  if ( (int)g_183EBFCC4 >= 7 )
  {
LABEL_5:
    if ( game_state != 3 || state_word != 5 )
      goto LABEL_16;
    selection_flag = 0;
    state_word_2 = g_19021F0CC;
    selection_flag_2 = 0;
    if ( (int)g_19021F0E4 > (int)g_19021F0CC )
    {
      selection_flag = 1;
      state_word_2 = g_19021F0E4;
      selection_flag_2 = 1;
    }
    if ( (int)g_19021F0FC > state_word_2 )
    {
      float_word = dword_1402B2848;
      float_word_2 = dword_1402B284C;
      float_word_3 = dword_1402B2850;
LABEL_14:
      literal_text = "OXS Wins!";
      goto LABEL_15;
    }
    float_word = dword_1402B2830[3 * selection_flag_2];
    float_word_2 = dword_1402B2834[3 * selection_flag_2];
    float_word_3 = dword_1402B2838[3 * selection_flag_2];
    if ( selection_flag )
    {
      comparison_result = selection_flag == 1;
      literal_text = "Monsota Wins!";
      if ( !comparison_result )
        goto LABEL_14;
    }
    else
    {
      literal_text = "Goldmen Wins!";
    }
LABEL_15:
    selection_code = 1065353216;
    scaled_value_6 = *(float *)&float_word_3;
    scaled_value_5 = *(float *)&float_word_2;
    scaled_value_4 = *(float *)&float_word;
    float_word_4 = 33;
    sr_text_draw_recovered(literal_text, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 30.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A207 */;
    goto LABEL_16;
  }
  table_value = off_1402B2920[g_183EBFCC4];
  selection_code = 1065353216;
  scaled_value_6 = 1.0;
  scaled_value_5 = 1.0;
  scaled_value_4 = 1.0;
  float_word_4 = 32;
  sr_CSDrawText(table_value, 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 20.0);
  if ( g_183EBFCB0 == 1 )
  {
    state_word = g_183EBFCC4;
    goto LABEL_5;
  }
LABEL_16:
  converted_vector = _mm_cvtsi32_si128((int)(0x42A00000u));
  iteration_count = 0;
  element_index = 0;
  do
  {
    if ( (unsigned int)iteration_count >= 3 )
    {
      scaled_value = 1.0;
      scaled_value_2 = 1.0;
      scaled_value_3 = 1.0;
      goto LABEL_21;
    }
    scaled_value = *(float *)&dword_1402B2830[3 * element_index];
    scaled_value_2 = *(float *)&dword_1402B2834[3 * element_index];
    scaled_value_3 = *(float *)&dword_1402B2838[3 * element_index];
    saved_scaled_value = scaled_value;
    saved_scaled_value_3 = scaled_value_2;
    saved_scaled_value_2 = scaled_value_3;
    if ( iteration_count == 2 )
    {
      scaled_value = scaled_value * 1.5;
      scaled_value_2 = scaled_value_2 * 1.5;
      scaled_value_3 = scaled_value_3 * 1.5;
LABEL_21:
      saved_scaled_value_2 = scaled_value_3;
      saved_scaled_value_3 = scaled_value_2;
      saved_scaled_value = scaled_value;
    }
    text_x = (float)((float)iteration_count * 248.0) + 8.0;
    if ( game_type == 3 && (unsigned int)iteration_count < 3 )
    {
      text = off_1402B2890[element_index];
      selection_code = 1065353216;
      scaled_value_6 = scaled_value_3;
      scaled_value_5 = scaled_value_2;
      scaled_value_4 = scaled_value;
      float_word_4 = 96;
      sr_text_draw_recovered(text, text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 20.0, 96u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A441 */;
      if ( game_state == 3 && (scaled_index = dword_140404A6C[6 * element_index + 335047065]) != 0 )
      {
        combined_products = (float)((float)((float)((int)dword_140404A6C[6 * element_index + 335047064] / 10) * 100.0) / (float)scaled_index) - 100.0;
        if ( combined_products <= 0.0 )
        {
          if ( combined_products < 0.0 )
            combined_products = combined_products - 0.5;
        }
        else
        {
          combined_products = combined_products + 0.5;
        }
        if ( (int)combined_products < -50 )
        {
          crt_sprintf(text_2, "$%d(Split)");
        }
        else
        {
          literal_text_2 = "$%d(+%d%%)";
          if ( (int)combined_products <= 0 )
            literal_text_2 = "$%d(%d%%)";
          crt_sprintf(text_2, literal_text_2);
        }
      }
      else
      {
        crt_sprintf(text_2, "$%d");
      }
      selection_code = 1065353216;
      scaled_value_6 = scaled_value_3;
      scaled_value_5 = scaled_value_2;
      scaled_value_4 = scaled_value;
      float_word_4 = 34;
      sr_text_draw_recovered(text_2, text_x + 240.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 17.5, 34u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A56B */;
      if ( game_state == 3 )
      {
        scaled_index_14 = dword_140404A6C[5873 * element_index + 283831505];
        selection_code = 1065353216;
        scaled_value_6 = scaled_value_3;
        scaled_value_5 = scaled_value_2;
        scaled_value_4 = scaled_value;
        float_word_4 = 32;
        sr_text_draw_recovered("Bonus:$/i", text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 17.5, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A5CF */;
      }
    }
    converted_vector_2 = _mm_cvtsi32_si128((int)(0x43000000u));
    integer_sum = 0;
    g_192E8EC40 = 0;
    record_byte_offset = 2;
    state_address = &g_151623978;
    do
    {
      if ( *(state_address - 2886) )
      {
        if ( !*state_address )
        {
          scaled_index_2 = (int)*(state_address - 2853);
          if ( (_DWORD)scaled_index_2 == iteration_count || element_index == 3 && (_DWORD)scaled_index_2 == 17 )
          {
            dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset - 2;
            if ( (_DWORD)scaled_index_2 == -1 || (int)scaled_index_2 >= 6 )
              scaled_index_3 = *(state_address - 2867);
            else
              scaled_index_3 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * scaled_index_2 + 335047064] * 0.1)
                                       * (float)(int)*(state_address - 2851))
                               + (float)(int)*(state_address - 2867));
            *(state_address - 2861) = scaled_index_3;
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_3;
            integer_sum = ++g_192E8EC40;
          }
        }
      }
      if ( state_address[711] )
      {
        if ( !state_address[3597] )
        {
          table_value_2 = (int)state_address[744];
          if ( (_DWORD)table_value_2 == iteration_count || element_index == 3 && (_DWORD)table_value_2 == 17 )
          {
            dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset - 1;
            if ( (_DWORD)table_value_2 == -1 || (int)table_value_2 >= 6 )
              scaled_index_4 = state_address[730];
            else
              scaled_index_4 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_2 + 335047064] * 0.1)
                                       * (float)(int)state_address[746])
                               + (float)(int)state_address[730]);
            state_address[736] = scaled_index_4;
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_4;
            integer_sum = ++g_192E8EC40;
          }
        }
      }
      if ( state_address[4308] )
      {
        if ( !state_address[7194] )
        {
          table_value_3 = (int)state_address[4341];
          if ( (_DWORD)table_value_3 == iteration_count || element_index == 3 && (_DWORD)table_value_3 == 17 )
          {
            dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset;
            if ( (_DWORD)table_value_3 == -1 || (int)table_value_3 >= 6 )
              scaled_index_5 = state_address[4327];
            else
              scaled_index_5 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_3 + 335047064] * 0.1)
                                       * (float)(int)state_address[4343])
                               + (float)(int)state_address[4327]);
            state_address[4333] = scaled_index_5;
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_5;
            integer_sum = ++g_192E8EC40;
          }
        }
      }
      if ( state_address[7905] )
      {
        if ( !state_address[10791] )
        {
          table_value_4 = (int)state_address[7938];
          if ( (_DWORD)table_value_4 == iteration_count || element_index == 3 && (_DWORD)table_value_4 == 17 )
          {
            dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 1;
            if ( (_DWORD)table_value_4 == -1 || (int)table_value_4 >= 6 )
              scaled_index_6 = state_address[7924];
            else
              scaled_index_6 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_4 + 335047064] * 0.1)
                                       * (float)(int)state_address[7940])
                               + (float)(int)state_address[7924]);
            state_address[7930] = scaled_index_6;
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_6;
            integer_sum = ++g_192E8EC40;
          }
        }
      }
      if ( state_address[11502] )
      {
        if ( !state_address[14388] )
        {
          table_value_5 = (int)state_address[11535];
          if ( (_DWORD)table_value_5 == iteration_count || element_index == 3 && (_DWORD)table_value_5 == 17 )
          {
            dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 2;
            if ( (_DWORD)table_value_5 == -1 || (int)table_value_5 >= 6 )
              scaled_index_7 = state_address[11521];
            else
              scaled_index_7 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_5 + 335047064] * 0.1)
                                       * (float)(int)state_address[11537])
                               + (float)(int)state_address[11521]);
            state_address[11527] = scaled_index_7;
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_7;
            integer_sum = ++g_192E8EC40;
          }
        }
      }
      if ( state_address[15099] )
      {
        if ( !state_address[17985] )
        {
          table_value_6 = (int)state_address[15132];
          if ( (_DWORD)table_value_6 == iteration_count || element_index == 3 && (_DWORD)table_value_6 == 17 )
          {
            dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 3;
            if ( (_DWORD)table_value_6 == -1 || (int)table_value_6 >= 6 )
              scaled_index_8 = state_address[15118];
            else
              scaled_index_8 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_6 + 335047064] * 0.1)
                                       * (float)(int)state_address[15134])
                               + (float)(int)state_address[15118]);
            state_address[15124] = scaled_index_8;
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_8;
            integer_sum = ++g_192E8EC40;
          }
        }
      }
      if ( state_address[18696] )
      {
        if ( !state_address[21582] )
        {
          table_value_7 = (int)state_address[18729];
          if ( (_DWORD)table_value_7 == iteration_count || element_index == 3 && (_DWORD)table_value_7 == 17 )
          {
            dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 4;
            if ( (_DWORD)table_value_7 == -1 || (int)table_value_7 >= 6 )
              scaled_index_9 = state_address[18715];
            else
              scaled_index_9 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_7 + 335047064] * 0.1)
                                       * (float)(int)state_address[18731])
                               + (float)(int)state_address[18715]);
            state_address[18721] = scaled_index_9;
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_9;
            integer_sum = ++g_192E8EC40;
          }
        }
      }
      if ( state_address[22293] )
      {
        if ( !state_address[25179] )
        {
          table_value_8 = (int)state_address[22326];
          if ( (_DWORD)table_value_8 == iteration_count || element_index == 3 && (_DWORD)table_value_8 == 17 )
          {
            dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 5;
            if ( (_DWORD)table_value_8 == -1 || (int)table_value_8 >= 6 )
              scaled_index_10 = state_address[22312];
            else
              scaled_index_10 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_8 + 335047064] * 0.1)
                                       * (float)(int)state_address[22328])
                               + (float)(int)state_address[22312]);
            state_address[22318] = scaled_index_10;
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_10;
            integer_sum = ++g_192E8EC40;
          }
        }
      }
      record_byte_offset += 8;
      state_address += 28776;
    }
    while ( (int)(record_byte_offset - 2) < 256 );
    renderer_sort_count = integer_sum;
    record_byte_offset_2 = 0;
    record_byte_offset_3 = 0;
    if ( integer_sum >= 8 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
      do
      {
        record_byte_offset_2 += 8;
        converted_vector_3 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695813]);
        converted_vector_4 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695811]);
        converted_vector_5 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695807]);
        *(__m128i_u *)&dword_140404A6C[record_byte_offset_3 + 437192782] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695799]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695801])),
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695803]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695805]))));
        *(__m128i_u *)&dword_140404A6C[record_byte_offset_3 + 437192786] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              converted_vector_5,
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695809])),
                                                            _mm_unpacklo_epi32(converted_vector_4, converted_vector_3)));
        record_byte_offset_3 += 8;
      }
      while ( record_byte_offset_3 < integer_sum - (integer_sum & 7) );
    }
    if ( record_byte_offset_2 < integer_sum )
    {
      buffer_cursor = &dword_140404A6C[record_byte_offset_3 + 437192782];
      running_total = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * record_byte_offset_3 + 1390996552);
      remaining_count = (unsigned int)(integer_sum - record_byte_offset_2);
      do
      {
        ++buffer_cursor;
        scaled_index_11 = -1879048193 - *running_total;
        running_total += 2;
        *(buffer_cursor - 1) = scaled_index_11;
        --remaining_count;
      }
      while ( remaining_count );
    }
    sr_renderer_sort();
    renderer_current_font = 2;
    iteration_count_2 = 0;
    if ( integer_sum > 0 )
    {
      buffer_cursor_2 = &g_1A85C6BA4;
      component_sum = text_x + 24.0;
      do
      {
        scaled_index_12 = dword_140404A6C[2 * *buffer_cursor_2 + 346695798];
        if ( (unsigned int)scaled_index_12 > 0xFF )
          scaled_index_12 = 0;
        if ( game_state != 2 )
        {
          selection_code_2 = 1065353216;
          scaled_index_14 = 1065353216;
          selection_code = 1065353216;
          scaled_value_6 = 1.0;
          scaled_value_5 = 0.0;
          scaled_value_4 = 24.0;
          float_word_4 = 1103101952;
          if ( dword_140404A6C[scaled_index_12 + 284023074] )
            state_word_3 = g_192E8F44C;
          else
            state_word_3 = dword_140404A6C[3597 * (unsigned int)scaled_index_12 + 71856270]
                ? g_192E8F448
                : g_192E8F444;
          sr_CSDrawAtlasEntry(
            0,
            state_word_3,
            text_x,
            *(float *)SR_VEC_LANES(128, converted_vector_2, i32),
            *(float *)&float_word_4,
            scaled_value_4,
            SLOBYTE(scaled_value_5),
            SLODWORD(scaled_value_6),
            selection_code,
            scaled_index_14,
            selection_code_2);
          if ( (_DWORD)scaled_index_12 != local_player
            && g_183F7C750
            && !g_192E8F450
            && g_183F7C6C0 >= text_x
            && g_183F7C6C0 < component_sum
            && g_183F7C6C4 >= *(float *)SR_VEC_LANES(128, converted_vector_2, i32)
            && g_183F7C6C4 < (float)(*(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 24.0) )
          {
            sub_140117820(scaled_index_12);
          }
        }
        selected_scalar = 1.0;
        if ( game_state == 1 && !dword_140404A6C[3597 * (unsigned int)scaled_index_12 + 71856271] )
          selected_scalar = 0.5;
        selection_code = 1065353216;
        scaled_index_13 = 3597LL * (unsigned int)scaled_index_12;
        scaled_value_6 = scaled_value_3 * selected_scalar;
        scaled_value_5 = scaled_value_2 * selected_scalar;
        scaled_value_4 = saved_scaled_value * selected_scalar;
        float_word_4 = 96;
        sr_CSDrawText(
          (char *)&dword_140404A6C[scaled_index_13 + 71856254],
          component_sum,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2),
          17.5);
        crt_sprintf(
          text_2,
          "%03d-%04d",
          dword_140404A6C[scaled_index_13 + 71856265] / 0x2710,
          dword_140404A6C[scaled_index_13 + 71856265] % 0x2710);
        selection_code = 1065353216;
        saved_converted_vector = converted_vector_2;
        *(float *)SR_VEC_LANES(128, saved_converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 18.0;
        scaled_value_4 = saved_scaled_value * selected_scalar;
        float_word_4 = 96;
        sr_CSDrawText(text_2, component_sum, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(saved_converted_vector), 10.0);
        scaled_value_3 = saved_scaled_value_2;
        scaled_value_2 = saved_scaled_value_3;
        scaled_index_14 = dword_140404A6C[scaled_index_13 + 71856278];
        selection_code = 1065353216;
        scaled_value_6 = saved_scaled_value_2;
        scaled_value_5 = saved_scaled_value_3;
        scaled_value_4 = saved_scaled_value;
        float_word_4 = 34;
        sr_CSDrawText("$/I", text_x + 240.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2), 17.5);
        ++iteration_count_2;
        *(float *)SR_VEC_LANES(128, converted_vector_2, i32) = *(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 24.0;
        ++buffer_cursor_2;
      }
      while ( iteration_count_2 < (int)g_192E8EC40 );
    }
    ++iteration_count;
    ++element_index;
    converted_vector = _mm_cvtsi32_si128((int)(0x42A00000u));
    renderer_current_font = 0;
  }
  while ( iteration_count < 4 );
  g_192E8F450 = g_183F7C750;
  return 0; /* compatibility result discarded by all reviewed callers */
}

#undef unused_frame_slot_0
#undef float_word_4
#undef scaled_value_4
#undef scaled_value_5
#undef scaled_value_6
#undef selection_code
#undef scaled_index_14
#undef selection_code_2
#undef saved_scaled_value
#undef saved_scaled_value_2
#undef saved_scaled_value_3
#undef text_2
#undef unused_frame_slot_624

// 14008ABBF: conditional instruction was optimized away because ebx.4>=8
// 14008ABB9: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF

//----- (000000014008B050) ----------------------------------------------------
__int64 sub_14008B050()
{
  unsigned int state_word;
  char *text;
  unsigned int selection_flag;
  unsigned int cached_selection_flag;
  __int64 scaled_index;
  int float_word;
  int float_word_2;
  int float_word_3;
  char *literal_text;
  int iteration_count;
  __m128i converted_vector;
  __int64 element_index;
  float weighted_sum;
  float scaled_value;
  float scaled_value_2;
  char *table_value;
  __m128i converted_vector_2;
  unsigned int *state_address;
  int integer_sum;
  unsigned int record_byte_offset;
  __int64 scaled_index_2;
  int scaled_index_3;
  __int64 table_value_2;
  int scaled_index_4;
  __int64 table_value_3;
  int scaled_index_5;
  __int64 table_value_4;
  int scaled_index_6;
  __int64 table_value_5;
  int scaled_index_7;
  __int64 table_value_6;
  int scaled_index_8;
  __int64 table_value_7;
  int scaled_index_9;
  __int64 table_value_8;
  int scaled_index_10;
  int record_byte_offset_2;
  __int64 record_byte_offset_3;
  __m128i si128;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  __m128i converted_vector_5;
  unsigned int *buffer_cursor;
  _DWORD *running_total;
  __int64 remaining_count;
  int scaled_index_11;
  int iteration_count_2;
  float scaled_value_3;
  unsigned int *buffer_cursor_2;
  float component_sum;
  __int64 scaled_index_12;
  int state_word_2;
  float selected_scalar;
  __int64 scaled_index_13;
  __m128i saved_converted_vector;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008B050[640];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14008B050 + 0)) /* [rsp+0h] */
#define float_word_4 (*(int (*))(void *)(sr_frame_14008B050 + 32)) /* [rsp+20h] */
#define scaled_value_4 (*(float (*))(void *)(sr_frame_14008B050 + 40)) /* [rsp+28h] */
#define scaled_value_5 (*(float (*))(void *)(sr_frame_14008B050 + 48)) /* [rsp+30h] */
#define scaled_value_6 (*(float (*))(void *)(sr_frame_14008B050 + 56)) /* [rsp+38h] */
#define selection_code (*(int (*))(void *)(sr_frame_14008B050 + 64)) /* [rsp+40h] */
#define scaled_index_14 (*(int (*))(void *)(sr_frame_14008B050 + 72)) /* [rsp+48h] */
#define selection_code_2 (*(int (*))(void *)(sr_frame_14008B050 + 80)) /* [rsp+50h] */
#define float_word_5 (*(int (*))(void *)(sr_frame_14008B050 + 96)) /* [rsp+60h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_14008B050 + 100)) /* [rsp+64h] */
#define saved_scaled_value_2 (*(float (*))(void *)(sr_frame_14008B050 + 104)) /* [rsp+68h] */
#define scratch_buffer (*(char (*)[512])(void *)(sr_frame_14008B050 + 112)) /* [rsp+70h] */
#define unused_frame_slot_624 (*(__int64 (*))(void *)(sr_frame_14008B050 + 624)) /* [rsp+270h] */

  state_word = g_183EBFCC4;
  if ( (int)g_183EBFCC4 < 7 )
  {
    text = off_1402B2920[g_183EBFCC4];
    selection_code = 1065353216;
    scaled_value_6 = 1.0;
    scaled_value_5 = 1.0;
    scaled_value_4 = 1.0;
    float_word_4 = 32;
    sr_text_draw_recovered(text, 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 20.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008B13B */;
    state_word = g_183EBFCC4;
  }
  if ( game_state == 3 && state_word == 5 )
  {
    if ( (int)g_183F7AE14 <= (int)g_183F7AE18 )
    {
      if ( (int)g_183F7AE14 >= (int)g_183F7AE18 )
      {
        *(float *)&float_word = 1.0;
        *(float *)&float_word_2 = 1.0;
        *(float *)&float_word_3 = 1.0;
        literal_text = "Tie";
LABEL_13:
        selection_code = 1065353216;
        scaled_value_6 = *(float *)&float_word_3;
        scaled_value_5 = *(float *)&float_word_2;
        scaled_value_4 = *(float *)&float_word;
        float_word_4 = 33;
        sr_text_draw_recovered(literal_text, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 30.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008B20D */;
        goto LABEL_14;
      }
      selection_flag = 1;
    }
    else
    {
      selection_flag = 0;
    }
    cached_selection_flag = selection_flag;
    scaled_index = 3LL * selection_flag;
    float_word = dword_1402B2830[scaled_index];
    float_word_2 = dword_1402B2834[scaled_index];
    float_word_3 = dword_1402B2838[scaled_index];
    if ( cached_selection_flag )
      literal_text = "Monsota Wins!";
    else
      literal_text = "Goldmen Wins!";
    goto LABEL_13;
  }
LABEL_14:
  iteration_count = 0;
  converted_vector = _mm_cvtsi32_si128((int)(0x42A00000u));
  element_index = 0;
  do
  {
    if ( iteration_count != 2 )
    {
      weighted_sum = (float)((float)iteration_count * 248.0) + 8.0;
      if ( (unsigned int)iteration_count >= 3 )
      {
        *(float *)&float_word_5 = 1.0;
        scaled_value = 1.0;
        saved_scaled_value = 1.0;
        scaled_value_2 = 1.0;
      }
      else
      {
        scaled_value = *(float *)&dword_1402B2834[3 * element_index];
        scaled_value_2 = *(float *)&dword_1402B2838[3 * element_index];
        float_word_5 = dword_1402B2830[3 * element_index];
        saved_scaled_value_2 = scaled_value;
        saved_scaled_value = scaled_value_2;
        table_value = off_1402B2890[element_index];
        selection_code = 1065353216;
        scaled_value_6 = scaled_value_2;
        scaled_value_5 = scaled_value;
        scaled_value_4 = *(float *)&float_word_5;
        float_word_4 = 96;
        sr_CSDrawText(table_value, weighted_sum, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector), 20.0);
        if ( game_state == 3 )
        {
          scaled_index_14 = dword_140404A6C[5873 * element_index + 283831505];
          selection_code = 1065353216;
          scaled_value_6 = scaled_value_2;
          scaled_value_5 = scaled_value;
          scaled_value_4 = *(float *)&float_word_5;
          float_word_4 = 32;
          sr_CSDrawText("Bonus:$/i", weighted_sum, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))), 17.5);
        }
        scaled_index_14 = dword_140404A6C[element_index + 284023018];
        selection_code = 1065353216;
        scaled_value_6 = scaled_value_2;
        scaled_value_5 = scaled_value;
        scaled_value_4 = *(float *)&float_word_5;
        float_word_4 = 32;
        sr_CSDrawText("Total:$/i", weighted_sum, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42F80000u))), 17.5);
        saved_scaled_value = scaled_value_2;
      }
      saved_scaled_value_2 = scaled_value;
      converted_vector_2 = _mm_cvtsi32_si128((int)(0x43180000u));
      state_address = &g_151623978;
      integer_sum = 0;
      record_byte_offset = 2;
      g_192E8EC40 = 0;
      do
      {
        if ( *(state_address - 2886) )
        {
          if ( !*state_address )
          {
            scaled_index_2 = (int)*(state_address - 2853);
            if ( (_DWORD)scaled_index_2 == iteration_count || element_index == 3 && (_DWORD)scaled_index_2 == 7 )
            {
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset - 2;
              if ( (_DWORD)scaled_index_2 == -1 || (int)scaled_index_2 >= 6 )
                scaled_index_3 = *(state_address - 2867);
              else
                scaled_index_3 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * scaled_index_2 + 335047064] * 0.1)
                                         * (float)(int)*(state_address - 2851))
                                 + (float)(int)*(state_address - 2867));
              *(state_address - 2861) = scaled_index_3;
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_3;
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[711] )
        {
          if ( !state_address[3597] )
          {
            table_value_2 = (int)state_address[744];
            if ( (_DWORD)table_value_2 == iteration_count || element_index == 3 && (_DWORD)table_value_2 == 7 )
            {
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset - 1;
              if ( (_DWORD)table_value_2 == -1 || (int)table_value_2 >= 6 )
                scaled_index_4 = state_address[730];
              else
                scaled_index_4 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_2 + 335047064] * 0.1)
                                         * (float)(int)state_address[746])
                                 + (float)(int)state_address[730]);
              state_address[736] = scaled_index_4;
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_4;
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[4308] )
        {
          if ( !state_address[7194] )
          {
            table_value_3 = (int)state_address[4341];
            if ( (_DWORD)table_value_3 == iteration_count || element_index == 3 && (_DWORD)table_value_3 == 7 )
            {
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset;
              if ( (_DWORD)table_value_3 == -1 || (int)table_value_3 >= 6 )
                scaled_index_5 = state_address[4327];
              else
                scaled_index_5 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_3 + 335047064] * 0.1)
                                         * (float)(int)state_address[4343])
                                 + (float)(int)state_address[4327]);
              state_address[4333] = scaled_index_5;
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_5;
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[7905] )
        {
          if ( !state_address[10791] )
          {
            table_value_4 = (int)state_address[7938];
            if ( (_DWORD)table_value_4 == iteration_count || element_index == 3 && (_DWORD)table_value_4 == 7 )
            {
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 1;
              if ( (_DWORD)table_value_4 == -1 || (int)table_value_4 >= 6 )
                scaled_index_6 = state_address[7924];
              else
                scaled_index_6 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_4 + 335047064] * 0.1)
                                         * (float)(int)state_address[7940])
                                 + (float)(int)state_address[7924]);
              state_address[7930] = scaled_index_6;
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_6;
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[11502] )
        {
          if ( !state_address[14388] )
          {
            table_value_5 = (int)state_address[11535];
            if ( (_DWORD)table_value_5 == iteration_count || element_index == 3 && (_DWORD)table_value_5 == 7 )
            {
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 2;
              if ( (_DWORD)table_value_5 == -1 || (int)table_value_5 >= 6 )
                scaled_index_7 = state_address[11521];
              else
                scaled_index_7 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_5 + 335047064] * 0.1)
                                         * (float)(int)state_address[11537])
                                 + (float)(int)state_address[11521]);
              state_address[11527] = scaled_index_7;
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_7;
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[15099] )
        {
          if ( !state_address[17985] )
          {
            table_value_6 = (int)state_address[15132];
            if ( (_DWORD)table_value_6 == iteration_count || element_index == 3 && (_DWORD)table_value_6 == 7 )
            {
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 3;
              if ( (_DWORD)table_value_6 == -1 || (int)table_value_6 >= 6 )
                scaled_index_8 = state_address[15118];
              else
                scaled_index_8 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_6 + 335047064] * 0.1)
                                         * (float)(int)state_address[15134])
                                 + (float)(int)state_address[15118]);
              state_address[15124] = scaled_index_8;
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_8;
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[18696] )
        {
          if ( !state_address[21582] )
          {
            table_value_7 = (int)state_address[18729];
            if ( (_DWORD)table_value_7 == iteration_count || element_index == 3 && (_DWORD)table_value_7 == 7 )
            {
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 4;
              if ( (_DWORD)table_value_7 == -1 || (int)table_value_7 >= 6 )
                scaled_index_9 = state_address[18715];
              else
                scaled_index_9 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_7 + 335047064] * 0.1)
                                         * (float)(int)state_address[18731])
                                 + (float)(int)state_address[18715]);
              state_address[18721] = scaled_index_9;
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_9;
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        if ( state_address[22293] )
        {
          if ( !state_address[25179] )
          {
            table_value_8 = (int)state_address[22326];
            if ( (_DWORD)table_value_8 == iteration_count || element_index == 3 && (_DWORD)table_value_8 == 7 )
            {
              dword_140404A6C[2 * integer_sum + 346695798] = record_byte_offset + 5;
              if ( (_DWORD)table_value_8 == -1 || (int)table_value_8 >= 6 )
                scaled_index_10 = state_address[22312];
              else
                scaled_index_10 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * table_value_8 + 335047064] * 0.1)
                                         * (float)(int)state_address[22328])
                                 + (float)(int)state_address[22312]);
              state_address[22318] = scaled_index_10;
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = scaled_index_10;
              integer_sum = ++g_192E8EC40;
            }
          }
        }
        record_byte_offset += 8;
        state_address += 28776;
      }
      while ( (int)(record_byte_offset - 2) < 256 );
      renderer_sort_count = integer_sum;
      record_byte_offset_2 = 0;
      record_byte_offset_3 = 0;
      if ( integer_sum >= 8 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
        do
        {
          record_byte_offset_2 += 8;
          converted_vector_3 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695813]);
          converted_vector_4 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695811]);
          converted_vector_5 = _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695807]);
          *(__m128i_u *)&dword_140404A6C[record_byte_offset_3 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695805]))));
          *(__m128i_u *)&dword_140404A6C[record_byte_offset_3 + 437192786] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                converted_vector_5,
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * record_byte_offset_3 + 346695809])),
                                                              _mm_unpacklo_epi32(converted_vector_4, converted_vector_3)));
          record_byte_offset_3 += 8;
        }
        while ( record_byte_offset_3 < integer_sum - (integer_sum & 7) );
      }
      if ( record_byte_offset_2 < integer_sum )
      {
        buffer_cursor = &dword_140404A6C[record_byte_offset_3 + 437192782];
        running_total = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * record_byte_offset_3 + 1390996552);
        remaining_count = (unsigned int)(integer_sum - record_byte_offset_2);
        do
        {
          ++buffer_cursor;
          scaled_index_11 = -1879048193 - *running_total;
          running_total += 2;
          *(buffer_cursor - 1) = scaled_index_11;
          --remaining_count;
        }
        while ( remaining_count );
      }
      sr_renderer_sort();
      renderer_current_font = 2;
      iteration_count_2 = 0;
      if ( integer_sum > 0 )
      {
        scaled_value_3 = *(float *)&float_word_5;
        buffer_cursor_2 = &g_1A85C6BA4;
        component_sum = weighted_sum + 24.0;
        do
        {
          scaled_index_12 = dword_140404A6C[2 * *buffer_cursor_2 + 346695798];
          if ( (unsigned int)scaled_index_12 > 0xFF )
            scaled_index_12 = 0;
          if ( game_state != 2 )
          {
            selection_code_2 = 1065353216;
            scaled_index_14 = 1065353216;
            selection_code = 1065353216;
            scaled_value_6 = 1.0;
            scaled_value_5 = 0.0;
            scaled_value_4 = 24.0;
            float_word_4 = 1103101952;
            if ( dword_140404A6C[scaled_index_12 + 284023074] )
              state_word_2 = g_192E8F44C;
            else
              state_word_2 = dword_140404A6C[3597 * (unsigned int)scaled_index_12 + 71856270]
                  ? g_192E8F448
                  : g_192E8F444;
            sr_CSDrawAtlasEntry(
              0,
              state_word_2,
              weighted_sum,
              *(float *)SR_VEC_LANES(128, converted_vector_2, i32),
              *(float *)&float_word_4,
              scaled_value_4,
              SLOBYTE(scaled_value_5),
              SLODWORD(scaled_value_6),
              selection_code,
              scaled_index_14,
              selection_code_2);
            if ( (_DWORD)scaled_index_12 != local_player
              && g_183F7C750
              && !g_192E8F450
              && g_183F7C6C0 >= weighted_sum
              && g_183F7C6C0 < component_sum
              && g_183F7C6C4 >= *(float *)SR_VEC_LANES(128, converted_vector_2, i32)
              && g_183F7C6C4 < (float)(*(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 24.0) )
            {
              dword_140404A6C[scaled_index_12 + 284023074] ^= 1u;
            }
          }
          selected_scalar = 1.0;
          if ( game_state == 1 && !dword_140404A6C[3597 * (unsigned int)scaled_index_12 + 71856271] )
            selected_scalar = 0.5;
          selection_code = 1065353216;
          scaled_index_13 = 3597LL * (unsigned int)scaled_index_12;
          scaled_value_6 = scaled_value_2 * selected_scalar;
          scaled_value_5 = scaled_value * selected_scalar;
          scaled_value_4 = scaled_value_3 * selected_scalar;
          float_word_4 = 96;
          sr_CSDrawText(
            (char *)&dword_140404A6C[scaled_index_13 + 71856254],
            component_sum,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2),
            17.5);
          crt_sprintf(
            scratch_buffer,
            "%03d-%04d",
            dword_140404A6C[scaled_index_13 + 71856265] / 0x2710,
            dword_140404A6C[scaled_index_13 + 71856265] % 0x2710);
          selection_code = 1065353216;
          saved_converted_vector = converted_vector_2;
          *(float *)SR_VEC_LANES(128, saved_converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 18.0;
          scaled_value_4 = scaled_value_3 * selected_scalar;
          float_word_4 = 96;
          sr_CSDrawText(scratch_buffer, component_sum, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(saved_converted_vector), 10.0);
          scaled_value_2 = saved_scaled_value;
          scaled_value = saved_scaled_value_2;
          scaled_index_14 = dword_140404A6C[scaled_index_13 + 71856278];
          selection_code = 1065353216;
          scaled_value_6 = saved_scaled_value;
          scaled_value_5 = saved_scaled_value_2;
          scaled_value_4 = scaled_value_3;
          float_word_4 = 34;
          sr_CSDrawText("$/I", weighted_sum + 240.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_2), 17.5);
          ++iteration_count_2;
          *(float *)SR_VEC_LANES(128, converted_vector_2, i32) = *(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 24.0;
          ++buffer_cursor_2;
        }
        while ( iteration_count_2 < (int)g_192E8EC40 );
      }
      converted_vector = _mm_cvtsi32_si128((int)(0x42A00000u));
      renderer_current_font = 0;
    }
    ++iteration_count;
    ++element_index;
  }
  while ( iteration_count < 4 );
  g_192E8F450 = g_183F7C750;
  return 0; /* compatibility result discarded by all reviewed callers */
}

#undef unused_frame_slot_0
#undef float_word_4
#undef scaled_value_4
#undef scaled_value_5
#undef scaled_value_6
#undef selection_code
#undef scaled_index_14
#undef selection_code_2
#undef float_word_5
#undef saved_scaled_value
#undef saved_scaled_value_2
#undef scratch_buffer
#undef unused_frame_slot_624

// 14008B1AD: conditional instruction was optimized away because ecx.4==1
// 14008B2A0: conditional instruction was optimized away because esi.4<2u
// 14008B9EF: conditional instruction was optimized away because ebx.4>=8
// 14008B9E9: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF

//----- (000000014008BE70) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_14008BE70(__int64 a1, double a2, double a3, double a4)
{
  __m128i masked_bits;
  __int128 masked_bits_2;
  __int64 running_total;
  char *state_address;
  __int64 record_byte_offset;
  char *record_byte_offset_2;
  char *state_address_2;
  char scaled_index;
  char scaled_index_2;
  char input_byte;
  char table_value;

  masked_bits = *(__m128i_u *)&a3;
  masked_bits_2 = 0;
  running_total = 0;
  do
  {
    if ( !*(_BYTE *)(running_total + a1) )
      break;
    state_address = (char *)&g_144AFA1A0 - running_total - a1;
    record_byte_offset = 0;
    record_byte_offset_2 = (char *)(running_total + a1 + 2);
    state_address_2 = (char *)&g_144AFA1A0 + -running_total - a1 + 1;
    do
    {
      scaled_index = *(record_byte_offset_2 - 2);
      if ( !scaled_index || scaled_index == 10 )
        break;
      record_byte_offset_2[(_QWORD)state_address - 2] = scaled_index;
      scaled_index_2 = *(record_byte_offset_2 - 1);
      if ( !scaled_index_2 || scaled_index_2 == 10 )
      {
        ++record_byte_offset;
        break;
      }
      record_byte_offset_2[(_QWORD)state_address_2 - 2] = scaled_index_2;
      input_byte = *record_byte_offset_2;
      if ( !*record_byte_offset_2 || input_byte == 10 )
      {
        record_byte_offset += 2;
        break;
      }
      record_byte_offset_2[(_QWORD)state_address] = input_byte;
      table_value = record_byte_offset_2[1];
      if ( !table_value || table_value == 10 )
      {
        record_byte_offset += 3;
        break;
      }
      record_byte_offset_2[(_QWORD)state_address_2] = table_value;
      record_byte_offset += 4;
      record_byte_offset_2 += 4;
    }
    while ( record_byte_offset < 1024 );
    if ( (unsigned __int64)record_byte_offset >= 0x400 )
      sub_1401F8694();
    *((_BYTE *)&g_144AFA1A0 + record_byte_offset) = 0;
    if ( *(_BYTE *)(record_byte_offset + running_total + a1) == 10 )
      ++record_byte_offset;
    sr_text_draw_recovered((char *)&g_144AFA1A0, *(float *)&a2, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(masked_bits))), *(float *)&a4, 64u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008BFC1 */;
    running_total += record_byte_offset;
    *(float *)SR_VEC_LANES(128, masked_bits, i32) = *(float *)SR_VEC_LANES(128, masked_bits, i32) + *(float *)&a4;
    *(float *)&masked_bits_2 = *(float *)&masked_bits_2 + *(float *)&a4;
  }
  while ( running_total < 1024 );
  return (__m128)masked_bits_2;
}

// 14008BE70: inconsistent variable size for 'xmm2_8.8'

//----- (000000014008C030) ----------------------------------------------------
void sub_14008C030()
{
  int iteration_count;
  unsigned int *state_address;
  __int64 i;
  int loaded_word;
  signed int iteration_count_2;
  __int64 j;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 masked_bits;
  __int64 scaled_index_3;
  unsigned int rand_result;
  __int64 packed_word_bits;
  __int64 saved_packed_word_bits;

  iteration_count = 0;
  if ( (int)item_block_region_count > 0 )
  {
    state_address = &g_1760D202C;
    for ( i = 0; ; i += 4673 )
    {
      if ( *(state_address - 12925) == 3 )
      {
        loaded_word = *state_address;
        iteration_count_2 = 0;
        for ( j = 0; iteration_count_2 < (int)*state_address; loaded_word = *state_address )
        {
          if ( (rand() & 7) != 0 )
          {
            ++iteration_count_2;
            ++j;
          }
          else
          {
            scaled_index = (int)*state_address;
            *state_address = scaled_index - 1;
            scaled_index_2 = 3 * (i + scaled_index);
            masked_bits = *(_QWORD *)&dword_140404A6C[3 * i + 225654126 + 3 * scaled_index];
            scaled_index_3 = 3 * (i + j);
            *(_QWORD *)&dword_140404A6C[scaled_index_3 + 225654129] = masked_bits;
            dword_140404A6C[scaled_index_3 + 225654131] = dword_140404A6C[scaled_index_2 + 225654128];
          }
        }
        if ( loaded_word < 8 )
          break;
      }
LABEL_24:
      ++iteration_count;
      state_address += 14019;
      if ( iteration_count >= (int)item_block_region_count )
        return;
    }
    while ( 1 )
    {
      rand_result = rand() & 0xF;
      if ( rand_result < 2 )
        break;
      if ( rand_result >= 6 )
      {
        if ( rand_result < 0xA )
        {
          packed_word_bits = 15;
          goto LABEL_22;
        }
        if ( rand_result < 0xD )
        {
          packed_word_bits = 9;
          goto LABEL_22;
        }
        if ( rand_result < 0xF )
        {
          packed_word_bits = 6;
          goto LABEL_22;
        }
        LODWORD(packed_word_bits) = 4;
        saved_packed_word_bits = 4;
        if ( (rand() & 0xF) == 0 )
        {
          packed_word_bits = 5;
          goto LABEL_22;
        }
      }
      else
      {
        LODWORD(packed_word_bits) = 0;
        saved_packed_word_bits = 0;
      }
LABEL_23:
      dword_140404A6C[3 * i + 225654129 + 3 * (int)*state_address] = packed_word_bits;
      dword_140404A6C[3 * i + 225654130 + 3 * (int)*state_address] = dword_140404A6C[24944 * saved_packed_word_bits + 346707730];
      dword_140404A6C[3 * i + 225654131 + 3 * (int)(*state_address)++] = rand() % 6;
      if ( (int)*state_address >= 8 )
        goto LABEL_24;
    }
    packed_word_bits = 7;
LABEL_22:
    saved_packed_word_bits = packed_word_bits;
    goto LABEL_23;
  }
}

//----- (000000014008C1F0) ----------------------------------------------------
void sub_14008C1F0()
{
  unsigned int *record_byte_offset;
  unsigned int *record_byte_offset_2;
  unsigned int rand_result;
  __int64 packed_word_bits;
  __int64 saved_packed_word_bits;

  record_byte_offset = &g_19021F244;
  record_byte_offset_2 = &g_19021F244;
  do
  {
    if ( *record_byte_offset_2 )
    {
      if ( (rand() & 7) == 0 )
        *record_byte_offset_2 = 0;
    }
    record_byte_offset_2 += 4;
  }
  while ( (__int64)record_byte_offset_2 < (__int64)&g_19021F2C4 );
  do
  {
    if ( *record_byte_offset )
      goto LABEL_21;
    rand_result = rand() & 0xF;
    if ( rand_result < 2 )
    {
      packed_word_bits = 7;
LABEL_19:
      saved_packed_word_bits = packed_word_bits;
      goto LABEL_20;
    }
    if ( rand_result >= 6 )
    {
      if ( rand_result < 0xA )
      {
        packed_word_bits = 15;
        goto LABEL_19;
      }
      if ( rand_result < 0xD )
      {
        packed_word_bits = 9;
        goto LABEL_19;
      }
      if ( rand_result < 0xF )
      {
        packed_word_bits = 6;
        goto LABEL_19;
      }
      LODWORD(packed_word_bits) = 4;
      saved_packed_word_bits = 4;
      if ( (rand() & 0xF) == 0 )
      {
        packed_word_bits = 5;
        goto LABEL_19;
      }
    }
    else
    {
      LODWORD(packed_word_bits) = 0;
      saved_packed_word_bits = 0;
    }
LABEL_20:
    *record_byte_offset = 1;
    record_byte_offset[1] = packed_word_bits;
    record_byte_offset[3] = dword_140404A6C[24944 * saved_packed_word_bits + 346707730];
    record_byte_offset[2] = rand() % 6;
LABEL_21:
    record_byte_offset += 4;
  }
  while ( (__int64)record_byte_offset < (__int64)&g_19021F2C4 );
}

//----- (000000014008C310) ----------------------------------------------------
unsigned int *sub_14008C310()
{
  unsigned int *result;
  signed int cached_item_block_region_count;
  signed int iteration_count;
  unsigned int state_word;
  __int64 running_total;
  unsigned int state_word_2;
  unsigned int state_word_3;
  unsigned int state_word_4;
  unsigned int state_word_5;
  unsigned int state_word_6;
  unsigned int state_word_7;
  unsigned int state_word_8;
  unsigned int state_word_9;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  unsigned int state_word_10;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  _UNKNOWN *retaddr;

  result = (unsigned int *)&retaddr;
  cached_item_block_region_count = item_block_region_count;
  iteration_count = 0;
  if ( (int)item_block_region_count > 0 )
  {
    state_word = g_182A8F6E4;
    running_total = 0;
    state_word_2 = g_182A8CF44;
    state_word_3 = g_182A893D4;
    state_word_4 = g_182A8A7A4;
    state_word_5 = g_182A8BB74;
    state_word_6 = g_182A830C4;
    state_word_7 = g_182A81CF4;
    result = &g_1760D202C;
    state_word_8 = g_182A88004;
    state_word_9 = g_182A86C34;
    do
    {
      if ( *(result - 12925) == 8 )
      {
        *result = 0;
        result[1] = 11;
        dword_140404A6C[3 * running_total + 225654130] = state_word_5;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index = (int)*result;
        *result = scaled_index + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index] = 12;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word_2;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_2 = (int)*result;
        *result = scaled_index_2 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_2] = 7;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word_9;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_3 = (int)*result;
        *result = scaled_index_3 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_3] = 8;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word_8;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_4 = (int)*result;
        *result = scaled_index_4 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_4] = 1;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = g_182A7F554;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_5 = (int)*result;
        *result = scaled_index_5 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_5] = 2;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = g_182A80924;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_6 = (int)*result;
        *result = scaled_index_6 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_6] = 3;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word_7;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_7 = (int)*result;
        *result = scaled_index_7 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_7] = 4;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word_6;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_8 = (int)*result;
        *result = scaled_index_8 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_8] = 9;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word_3;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_9 = (int)*result;
        *result = scaled_index_9 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_9] = 10;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word_4;
        state_word_10 = g_182A8E314;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_10 = (int)*result;
        *result = scaled_index_10 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_10] = 14;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)*result] = 0;
        scaled_index_11 = (int)*result;
        *result = scaled_index_11 + 1;
        dword_140404A6C[3 * running_total + 225654132 + 3 * scaled_index_11] = 13;
        dword_140404A6C[3 * running_total + 225654130 + 3 * (int)*result] = state_word_10;
        dword_140404A6C[3 * running_total + 225654131 + 3 * (int)(*result)++] = 0;
        cached_item_block_region_count = item_block_region_count;
      }
      ++iteration_count;
      running_total += 4673;
      result += 14019;
    }
    while ( iteration_count < cached_item_block_region_count );
  }
  return result;
}

//----- (000000014008C810) ----------------------------------------------------
__int64 sub_14008C810()
{
  float *state_address;
  unsigned int *state_address_2;
  int i;
  int loaded_word;
  int *state_address_3;
  __int64 remaining_count;
  float product_difference;
  int integer_quotient;
  int integer_quotient_2;
  int integer_quotient_3;
  int integer_quotient_4;
  float weighted_sum;
  unsigned int *state_address_4;
  __int64 result;
  int j;
  __int64 saved_record_byte_offset;
  int saved_weighted_sum;
  int *state_address_5;
  __int64 record_byte_offset;
  __int64 remaining_count_2;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  __int64 running_total;
  unsigned int *buffer_cursor;
  unsigned __int64 running_total_2;
  unsigned int *state_address_6;
  __int64 remaining_count_3;
  unsigned int *buffer_cursor_2;
  int scaled_index;
  __int64 scaled_index_2;

  state_address = (float *)&g_19021F0C4;
  state_address_2 = &g_183EBFDBC;
  for ( i = 0; i < 3; ++i )
  {
    loaded_word = *state_address_2;
    state_address_3 = (int *)&g_151620CA8;
    remaining_count = 64;
    product_difference = (float)((float)(int)*state_address_2 * 0.0099999998) - 0.5;
    do
    {
      if ( *(state_address_3 - 18) && *state_address_3 > 0 && state_address_3[15] == i )
      {
        integer_quotient = loaded_word / 2;
        if ( product_difference >= 1.0 && state_address_3[18] )
          integer_quotient = (int)(float)((float)((float)((float)state_address_3[17] * *state_address) * (float)(product_difference * 0.001)) + (float)integer_quotient);
        state_address_3[1] += 150 + integer_quotient;
      }
      if ( state_address_3[3579] && state_address_3[3597] > 0 && state_address_3[3612] == i )
      {
        integer_quotient_2 = loaded_word / 2;
        if ( product_difference >= 1.0 && state_address_3[3615] )
          integer_quotient_2 = (int)(float)((float)((float)((float)state_address_3[3614] * *state_address) * (float)(product_difference * 0.001)) + (float)integer_quotient_2);
        state_address_3[3598] += 150 + integer_quotient_2;
      }
      if ( state_address_3[7176] && state_address_3[7194] > 0 && state_address_3[7209] == i )
      {
        integer_quotient_3 = loaded_word / 2;
        if ( product_difference >= 1.0 && state_address_3[7212] )
          integer_quotient_3 = (int)(float)((float)((float)((float)state_address_3[7211] * *state_address) * (float)(product_difference * 0.001)) + (float)integer_quotient_3);
        state_address_3[7195] += 150 + integer_quotient_3;
      }
      if ( state_address_3[10773] && state_address_3[10791] > 0 && state_address_3[10806] == i )
      {
        integer_quotient_4 = loaded_word / 2;
        if ( product_difference >= 1.0 && state_address_3[10809] )
          integer_quotient_4 = (int)(float)((float)((float)((float)state_address_3[10808] * *state_address) * (float)(product_difference * 0.001)) + (float)integer_quotient_4);
        state_address_3[10792] += 150 + integer_quotient_4;
      }
      state_address_3 += 14388;
      --remaining_count;
    }
    while ( remaining_count );
    weighted_sum = (float)((float)(product_difference * 0.0049999999) + 1.0) * *state_address;
    if ( weighted_sum >= 10.0 )
    {
      *state_address = weighted_sum;
      if ( weighted_sum >= 500.0 )
      {
        state_address_4 = &g_151620CEC;
        *state_address = weighted_sum * 0.2;
        do
        {
          if ( *(state_address_4 - 35) && *(state_address_4 - 2) == i )
            *state_address_4 *= 5;
          state_address_4 += 3597;
        }
        while ( (__int64)state_address_4 < (__int64)&g_1519A40EC );
      }
    }
    else
    {
      *state_address = 10.0;
    }
    state_address_2 += 5873;
    state_address += 6;
  }
  result = (__int64)&g_151620CF0;
  do
  {
    if ( *(_DWORD *)(result - 144) )
      *(_DWORD *)result = 0;
    if ( *(_DWORD *)(result + 14244) )
      *(_DWORD *)(result + 14388) = 0;
    result += 28776;
  }
  while ( result < (__int64)&g_1519A40F0 );
  for ( j = 0; j < 3; ++j )
  {
    saved_record_byte_offset = -1;
    saved_weighted_sum = 1000;
    state_address_5 = (int *)&g_151620CA8;
    record_byte_offset = 2;
    remaining_count_2 = 64;
    do
    {
      if ( *(state_address_5 - 18) )
      {
        if ( *state_address_5 > 0 )
        {
          result = state_address_5[15];
          if ( (_DWORD)result == j )
          {
            weighted_sum_2 = (float)((float)state_address_5[17] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)state_address_5[1];
            if ( (float)saved_weighted_sum < weighted_sum_2 )
            {
              saved_record_byte_offset = record_byte_offset - 2;
              saved_weighted_sum = (int)weighted_sum_2;
            }
          }
        }
      }
      if ( state_address_5[3579] )
      {
        if ( state_address_5[3597] > 0 )
        {
          result = state_address_5[3612];
          if ( (_DWORD)result == j )
          {
            weighted_sum_3 = (float)((float)state_address_5[3614] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)state_address_5[3598];
            if ( (float)saved_weighted_sum < weighted_sum_3 )
            {
              saved_record_byte_offset = record_byte_offset - 1;
              saved_weighted_sum = (int)weighted_sum_3;
            }
          }
        }
      }
      if ( state_address_5[7176] )
      {
        if ( state_address_5[7194] > 0 )
        {
          result = state_address_5[7209];
          if ( (_DWORD)result == j )
          {
            weighted_sum_4 = (float)((float)state_address_5[7211] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)state_address_5[7195];
            if ( (float)saved_weighted_sum < weighted_sum_4 )
            {
              saved_record_byte_offset = record_byte_offset;
              saved_weighted_sum = (int)weighted_sum_4;
            }
          }
        }
      }
      if ( state_address_5[10773] )
      {
        if ( state_address_5[10791] > 0 )
        {
          result = state_address_5[10806];
          if ( (_DWORD)result == j )
          {
            weighted_sum_5 = (float)((float)state_address_5[10808] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)state_address_5[10792];
            if ( (float)saved_weighted_sum < weighted_sum_5 )
            {
              saved_record_byte_offset = record_byte_offset + 1;
              saved_weighted_sum = (int)weighted_sum_5;
            }
          }
        }
      }
      record_byte_offset += 4;
      state_address_5 += 14388;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    if ( saved_record_byte_offset != -1 )
    {
      result = 14388 * saved_record_byte_offset;
      dword_140404A6C[3597 * saved_record_byte_offset + 71856289] = 1;
    }
  }
  running_total = 0;
  buffer_cursor = &g_151620CFC;
  do
  {
    if ( *(buffer_cursor - 39) )
    {
      result = (int)*buffer_cursor;
      if ( (_DWORD)result != -1 )
      {
        running_total_2 = 0;
        state_address_6 = &dword_140404A6C[7166 * result + 280658140];
        while ( 1 )
        {
          remaining_count_3 = (int)*(state_address_6 - 1);
          buffer_cursor[running_total_2 + 1494] = 0;
          if ( remaining_count_3 > 0 )
            break;
LABEL_87:
          running_total_2 += 25LL;
          state_address_6 += 10;
          if ( (__int64)running_total_2 >= 175 )
            goto LABEL_88;
        }
        buffer_cursor_2 = state_address_6;
        while ( 1 )
        {
          result = (int)*buffer_cursor_2;
          scaled_index = dword_140404A6C[1760 * result + 278845898];
          if ( scaled_index > 14 )
          {
            if ( scaled_index != 27 )
              goto LABEL_86;
            result = (int)dword_140404A6C[1760 * result + 278846053];
            if ( (_DWORD)result == -1 )
              goto LABEL_86;
            scaled_index_2 = 5210 * result;
            if ( (int)dword_140404A6C[5210 * result + 129716712] <= 0 )
              goto LABEL_86;
            dword_140404A6C[3 * running_total + 71857787 + 3 * (int)buffer_cursor[running_total_2 + 1494] + running_total_2] = 27;
            dword_140404A6C[3 * running_total + 71857788 + 3 * (int)buffer_cursor[running_total_2 + 1494] + running_total_2] = dword_140404A6C[scaled_index_2 + 129716710];
            result = dword_140404A6C[scaled_index_2 + 129716715];
            dword_140404A6C[3 * running_total + 71857789 + 3 * (int)buffer_cursor[running_total_2 + 1494] + running_total_2] = result;
          }
          else
          {
            result = 3 * (running_total + (int)buffer_cursor[running_total_2 + 1494]);
            dword_140404A6C[3 * running_total + 71857787 + 3 * (int)buffer_cursor[running_total_2 + 1494] + running_total_2] = scaled_index;
          }
          ++buffer_cursor[running_total_2 + 1494];
LABEL_86:
          ++buffer_cursor_2;
          if ( !--remaining_count_3 )
            goto LABEL_87;
        }
      }
    }
LABEL_88:
    buffer_cursor += 3597;
    running_total += 1199;
  }
  while ( (__int64)buffer_cursor < (__int64)&g_1519A40FC );
  return result;
}

//----- (000000014008D150) ----------------------------------------------------
__int64            sub_14008D150(int a1, float *a2, float *a3)
{
  __int64 record_word_offset;
  int table_value;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 remaining_count;
  int cached_table_value;
  __int64 result;

  record_word_offset = 24LL * a1;
  table_value = dword_140404A6C[record_word_offset + 225171871];
  table_value_2 = dword_140404A6C[record_word_offset + 225171872];
  table_value_3 = dword_140404A6C[record_word_offset + 225171870];
  table_value_4 = dword_140404A6C[record_word_offset + 225171873];
  integer_difference = table_value - 1;
  integer_difference_2 = table_value_2 - 1;
  if ( table_value_3 == 1 )
  {
    integer_difference_3 = table_value_2 - 1;
  }
  else
  {
    integer_difference_3 = 0;
    if ( table_value_3 == 2 )
    {
LABEL_7:
      remaining_count = dword_140404A6C[record_word_offset + 225171870];
      do
      {
        cached_table_value = table_value;
        table_value = table_value_2;
        table_value_2 = cached_table_value;
        --remaining_count;
      }
      while ( remaining_count );
      goto LABEL_9;
    }
  }
  integer_difference_2 = table_value - 1;
  integer_difference = 0;
  if ( table_value_3 != 3 )
  {
    integer_difference_2 = 0;
    integer_difference = integer_difference_3;
  }
  if ( table_value_3 > 0 )
    goto LABEL_7;
LABEL_9:
  *a2 = (float)(int)(dword_140404A6C[record_word_offset + 225171867] - integer_difference) * 4.0;
  a2[1] = (float)(int)dword_140404A6C[record_word_offset + 225171868] * 4.0;
  result = dword_140404A6C[record_word_offset + 225171869] - integer_difference_2;
  a2[2] = (float)(int)result * 4.0;
  *a3 = (float)table_value * 4.0;
  a3[2] = (float)table_value_2 * 4.0;
  a3[1] = (float)table_value_4 * 4.0;
  return result;
}

//----- (000000014008EC40) ----------------------------------------------------
float            sub_14008EC40(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float component_delta;
  float scaled_value;
  float scaled_value_2;
  float unused_local;

  component_delta = 1.0 - a2;
  if ( a1 == 1 )
    return (float)(component_delta * a3) + (float)(a2 * a6);
  scaled_value = a2 * a6;
  scaled_value_2 = component_delta * a3;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a4 + a4) * component_delta) + scaled_value) * a2) + (float)(scaled_value_2 * component_delta);
  if ( a1 == 3 )
    return (float)((float)((float)((float)(component_delta * component_delta) * (float)(a4 * 3.0))
                         + (float)((float)((float)((float)(a5 * 3.0) * component_delta) + scaled_value) * a2))
                 * a2)
         + (float)((float)(scaled_value_2 * component_delta) * component_delta);
  return unused_local;
}

//----- (000000014008ED50) ----------------------------------------------------
unsigned __int64            sub_14008ED50(int a1)
{
  __int64 record_word_offset;
  unsigned __int64 result;
  unsigned __int64 byte_count;
  unsigned int *state_address;

  record_word_offset = 39LL * a1;
  sr_net_write_bits(&dword_140404A6C[record_word_offset + 290382647], 6);
  sr_net_write_bits(&dword_140404A6C[record_word_offset + 290382648], 28);
  result = dword_140404A6C[record_word_offset + 290382647];
  if ( !(_DWORD)result )
  {
    sr_net_write_bits(&dword_140404A6C[record_word_offset + 290382649], 12);
    sr_net_write_bits(&dword_140404A6C[record_word_offset + 290382650], 6);
    sr_net_write_bits(&dword_140404A6C[record_word_offset + 290382651], 7);
    result = packet_out_byte;
    byte_count = (int)dword_140404A6C[record_word_offset + 290382651];
    if ( (int)packet_out_byte >= 0x10000 )
      return result;
    if ( (int)packet_out_bit > 0 )
    {
      LODWORD(result) = ++packet_out_byte;
      packet_out_bit = 0;
    }
    state_address = &g_1857BD75C;
    goto LABEL_14;
  }
  if ( (_DWORD)result == 1 )
  {
    sr_net_write_bits(&dword_140404A6C[record_word_offset + 290382649], 12);
    sr_net_write_bits(&dword_140404A6C[record_word_offset + 290382650], 5);
    sr_net_write_bits(&dword_140404A6C[record_word_offset + 290382651], 7);
    byte_count = (int)dword_140404A6C[record_word_offset + 290382651];
    result = packet_out_byte;
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        LODWORD(result) = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      crt_memcpy(
        (__m128i *)((char *)&packet_out_data + (int)result),
        (     __m128i *)&dword_140404A6C[record_word_offset + 290382652],
        byte_count);
      result = (unsigned int)(byte_count + packet_out_byte);
      packet_out_byte = result;
      if ( (int)result < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          LODWORD(result) = result + 1;
          packet_out_bit = 0;
          packet_out_byte = result;
        }
        state_address = &g_1857BD79C;
LABEL_14:
        result = (unsigned __int64)crt_memcpy(
                                     (__m128i *)((char *)&packet_out_data + (int)result),
                                     (     __m128i *)&state_address[record_word_offset],
                                     byte_count);
        packet_out_byte += byte_count;
      }
    }
  }
  return result;
}

//----- (000000014008EF00) ----------------------------------------------------
__int64            sub_14008EF00(int a1)
{
  __int64 packed_word_bits;
  unsigned int saved_decoded_value;
  __int64 result;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008EF00[16];
#define decoded_value (*(unsigned int (*))(void *)(sr_frame_14008EF00 + 0)) /* [rsp+40h] */
#define decoded_value_2 (*(unsigned int (*))(void *)(sr_frame_14008EF00 + 8)) /* [rsp+48h] */

  packed_word_bits = a1;
  sr_net_read_bits(&decoded_value, 6);
  sr_net_read_bits(&decoded_value_2, 28);
  saved_decoded_value = decoded_value;
  result = decoded_value_2;
  scaled_index = 39 * packed_word_bits;
  if ( dword_140404A6C[39 * packed_word_bits + 290382645] && decoded_value_2 <= dword_140404A6C[scaled_index + 290382648] )
  {
    LODWORD(packed_word_bits) = 0x4000;
  }
  else
  {
    dword_140404A6C[scaled_index + 290382647] = decoded_value;
    dword_140404A6C[scaled_index + 290382648] = result;
    *(_QWORD *)&dword_140404A6C[scaled_index + 290382645] = 1;
  }
  if ( !saved_decoded_value )
  {
    scaled_index_2 = 39LL * (int)packed_word_bits;
    sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 290382649], 12);
    sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 290382650], 6);
    sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 290382651], 7);
    result = sr_net_read_bytes((__m128i *)&dword_140404A6C[scaled_index_2 + 290382652], 1, dword_140404A6C[scaled_index_2 + 290382651]);
  }
  if ( saved_decoded_value == 1 )
  {
    scaled_index_3 = 39LL * (int)packed_word_bits;
    sr_net_read_bits(&dword_140404A6C[scaled_index_3 + 290382649], 12);
    sr_net_read_bits(&dword_140404A6C[scaled_index_3 + 290382650], 5);
    sr_net_read_bits(&dword_140404A6C[scaled_index_3 + 290382651], 7);
    sr_net_read_bytes((__m128i *)&dword_140404A6C[scaled_index_3 + 290382652], 1, dword_140404A6C[scaled_index_3 + 290382651]);
    return sr_net_read_bytes((__m128i *)&dword_140404A6C[scaled_index_3 + 290382668], 1, dword_140404A6C[scaled_index_3 + 290382651]);
  }
  return result;
}

#undef decoded_value
#undef decoded_value_2

//----- (0000000140090D00) ----------------------------------------------------
__int64            sub_140090D00(FILE *Stream, int a2)
{
  int iteration_count;
  int running_total;
  unsigned int *destination_buffer;
  int integer_sum;
  unsigned int *state_address;
  __int64 cached_integer_sum;
  __int64 scaled_index;
  char *destination_buffer_2;
  char *state_address_2;
  signed int element_index;
  __int64 scaled_index_2;
  unsigned int *destination_buffer_3;
  char *destination_buffer_4;
  signed int element_index_2;
  int *running_total_2;
  char *destination_buffer_5;
  int element_index_3;
  __int64 scaled_index_3;
  unsigned int *destination_buffer_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140090D00[32];
#define Buffer (*(int (*))(void *)(sr_frame_140090D00 + 0)) /* [rsp+68h] */
#define iteration_count_2 (*(int (*))(void *)(sr_frame_140090D00 + 8)) /* [rsp+70h] */
#define cached_scaled_index (*(__int64 (*))(void *)(sr_frame_140090D00 + 16)) /* [rsp+78h] */

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, (__int64)Stream);
    crt_fread((__int64)&g_16696E3D8, 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&g_16696E3D8), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  iteration_count = 0;
  if ( (int)g_16696E3D8 > 0 )
  {
    running_total = 0;
    do
    {
      destination_buffer = &dword_140404A6C[running_total + 160802396];
      if ( a2 )
        crt_fread((__int64)destination_buffer, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++iteration_count;
      running_total += 3;
    }
    while ( iteration_count < (int)g_16696E3D8 );
  }
  if ( a2 )
    crt_fread((__int64)&g_16696FBDC, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&g_16696FBDC), 4, 1, (FILE *)(uintptr_t)(Stream));
  integer_sum = 0;
  iteration_count_2 = 0;
  if ( (int)g_16696FBDC > 0 )
  {
    state_address = &g_1669703F0;
    do
    {
      cached_integer_sum = integer_sum;
      scaled_index = 26648LL * integer_sum;
      cached_scaled_index = scaled_index;
      destination_buffer_2 = (char *)&g_16696FBE0 + scaled_index;
      state_address_2 = (char *)&g_16677CBC0 + scaled_index;
      if ( a2 )
      {
        crt_fread((__int64)destination_buffer_2, 4, 3, (__int64)Stream);
        crt_fread((__int64)(state_address_2 + 2043948), 4, 1, (__int64)Stream);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 3, (FILE *)(uintptr_t)(Stream));
        fread_sr((void *)(uintptr_t)(state_address_2 + 2043948), 4, 1, (FILE *)(uintptr_t)(Stream));
      }
      element_index = 0;
      if ( (int)*(state_address - 513) > 0 )
      {
        scaled_index_2 = 6662 * cached_integer_sum;
        do
        {
          destination_buffer_3 = &dword_140404A6C[scaled_index_2 + 160803937 + element_index];
          if ( a2 )
            crt_fread((__int64)destination_buffer_3, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(destination_buffer_3), 4, 1, (FILE *)(uintptr_t)(Stream));
          ++element_index;
        }
        while ( element_index < (int)*(state_address - 513) );
      }
      destination_buffer_4 = (char *)&g_1669703F0 + scaled_index;
      if ( a2 )
        crt_fread((__int64)destination_buffer_4, 4, 1, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer_4), 4, 1, (FILE *)(uintptr_t)(Stream));
      element_index_2 = 0;
      if ( (int)*state_address > 0 )
      {
        running_total_2 = (int *)(state_address + 2);
        do
        {
          destination_buffer_5 = (char *)&dword_140404A6C[9 * element_index_2 + 160804451] + scaled_index;
          if ( a2 )
            crt_fread((__int64)destination_buffer_5, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(destination_buffer_5), 4, 1, (FILE *)(uintptr_t)(Stream));
          element_index_3 = 0;
          if ( *running_total_2 > 0 )
          {
            scaled_index_3 = 9LL * element_index_2 + 6662LL * iteration_count_2;
            do
            {
              destination_buffer_6 = &dword_140404A6C[scaled_index_3 + 160804452 + element_index_3];
              if ( a2 )
                crt_fread((__int64)destination_buffer_6, 4, 1, (__int64)Stream);
              else
                fread_sr((void *)(uintptr_t)(destination_buffer_6), 4, 1, (FILE *)(uintptr_t)(Stream));
              ++element_index_3;
            }
            while ( element_index_3 < *running_total_2 );
            scaled_index = cached_scaled_index;
          }
          ++element_index_2;
          running_total_2 += 9;
        }
        while ( element_index_2 < (int)*state_address );
      }
      state_address += 6662;
      integer_sum = ++iteration_count_2;
    }
    while ( iteration_count_2 < (int)g_16696FBDC );
  }
  return 1;
}

#undef Buffer
#undef iteration_count_2
#undef cached_scaled_index

//----- (0000000140091020) ----------------------------------------------------
__int64            sub_140091020(__int64 a1, int a2)
{
  int element_index;
  int running_total;
  unsigned int *destination_buffer;
  int element_index_2;
  unsigned int *state_address;
  unsigned int *destination_buffer_2;
  signed int element_index_3;
  __int64 scaled_index;
  unsigned int *destination_buffer_3;
  unsigned int *destination_buffer_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140091020[32];
#define Buffer (*(int (*))(void *)(sr_frame_140091020 + 0)) /* [rsp+68h] */
#define saved_element_index (*(int (*))(void *)(sr_frame_140091020 + 8)) /* [rsp+70h] */
#define scaled_index_2 (*(unsigned __int64 (*))(void *)(sr_frame_140091020 + 16)) /* [rsp+78h] */

  Buffer = 2;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, a1);
    crt_fread((__int64)&g_16684E3CC, 4, 1, a1);
    crt_fread((__int64)&g_16684E3D0, 4, 1, a1);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer != 2 )
      return 0;
    fread_sr((void *)(uintptr_t)(&g_16684E3CC), 4, 1, (FILE *)(uintptr_t)(a1));
    fread_sr((void *)(uintptr_t)(&g_16684E3D0), 4, 1, (FILE *)(uintptr_t)(a1));
  }
  element_index = 0;
  if ( (int)g_16684E3D0 > 0 )
  {
    running_total = 0;
    do
    {
      destination_buffer = &dword_140404A6C[running_total + 160507482];
      if ( a2 )
      {
        crt_fread((__int64)destination_buffer, 4, 3, a1);
        crt_fread((__int64)&dword_140404A6C[element_index + 160556634], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(destination_buffer), 4, 3, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[element_index + 160556634]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      ++element_index;
      running_total += 3;
    }
    while ( element_index < (int)g_16684E3D0 );
  }
  if ( a2 )
    crt_fread((__int64)&g_16688E3D4, 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&g_16688E3D4), 4, 1, (FILE *)(uintptr_t)(a1));
  element_index_2 = 0;
  saved_element_index = 0;
  if ( (int)g_16688E3D4 > 0 )
  {
    state_address = &g_16688E3D8;
    do
    {
      destination_buffer_2 = &dword_140404A6C[14 * element_index_2 + 160573019];
      scaled_index_2 = 56LL * element_index_2;
      if ( a2 )
        crt_fread((__int64)destination_buffer_2, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 1, (FILE *)(uintptr_t)(a1));
      element_index_3 = 0;
      if ( (int)*state_address > 0 )
      {
        scaled_index = 7LL * element_index_2;
        do
        {
          destination_buffer_3 = &dword_140404A6C[14 * element_index_2 + 160573020 + element_index_3];
          if ( a2 )
          {
            crt_fread((__int64)destination_buffer_3, 4, 1, a1);
            crt_fread((__int64)&dword_140404A6C[2 * scaled_index + 160573024 + 2 * element_index_3], 4, 2, a1);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(destination_buffer_3), 4, 1, (FILE *)(uintptr_t)(a1));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * scaled_index + 160573024 + 2 * element_index_3]), 4, 2, (FILE *)(uintptr_t)(a1));
          }
          ++element_index_3;
        }
        while ( element_index_3 < (int)*state_address );
        element_index_2 = saved_element_index;
      }
      destination_buffer_4 = &dword_140404A6C[scaled_index_2 / 4 + 160573032];
      if ( a2 )
        crt_fread((__int64)destination_buffer_4, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer_4), 4, 1, (FILE *)(uintptr_t)(a1));
      ++element_index_2;
      state_address += 14;
      saved_element_index = element_index_2;
    }
    while ( element_index_2 < (int)g_16688E3D4 );
  }
  return 1;
}

#undef Buffer
#undef saved_element_index
#undef scaled_index_2

//----- (0000000140091310) ----------------------------------------------------
__int64            sub_140091310(FILE *Stream, int a2)
{
  int iteration_count;
  int i;
  __int64 scaled_index;
  unsigned int *destination_buffer;
  unsigned int *state_address;
  int running_total;
  unsigned int *destination_buffer_2;
  int Buffer;

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, (__int64)Stream);
    crt_fread((__int64)&g_16677CBC0, 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&g_16677CBC0), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  iteration_count = 0;
  for ( i = 0; i < (int)g_16677CBC0; ++i )
  {
    scaled_index = 6LL * i;
    destination_buffer = &dword_140404A6C[scaled_index + 160292950];
    state_address = &dword_140404A6C[scaled_index + 160292949];
    if ( a2 )
    {
      crt_fread((__int64)destination_buffer, 4, 1, (__int64)Stream);
      crt_fread((__int64)(state_address + 2), 4, 1, (__int64)Stream);
      crt_fread((__int64)&dword_140404A6C[scaled_index + 160292952], 4, 1, (__int64)Stream);
      crt_fread((__int64)&dword_140404A6C[scaled_index + 160292953], 4, 1, (__int64)Stream);
      crt_fread((__int64)&dword_140404A6C[scaled_index + 160292954], 4, 1, (__int64)Stream);
      crt_fread((__int64)&dword_140404A6C[scaled_index + 160292955], 4, 1, (__int64)Stream);
    }
    else
    {
      fread_sr((void *)(uintptr_t)(destination_buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(state_address + 2), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 160292952]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 160292953]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 160292954]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 160292955]), 4, 1, (FILE *)(uintptr_t)(Stream));
    }
  }
  if ( a2 )
    crt_fread((__int64)&g_16677E3C4, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&g_16677E3C4), 4, 1, (FILE *)(uintptr_t)(Stream));
  if ( (int)g_16677E3C4 > 0 )
  {
    running_total = 0;
    do
    {
      destination_buffer_2 = &dword_140404A6C[running_total + 160294487];
      if ( a2 )
        crt_fread((__int64)destination_buffer_2, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++iteration_count;
      running_total += 3;
    }
    while ( iteration_count < (int)g_16677E3C4 );
  }
  if ( a2 )
  {
    crt_fread((__int64)&g_1667AE3C8, 4, 1, (__int64)Stream);
    crt_fread((__int64)&g_1667AE3CC, 4, 3 * g_1667AE3C8, (__int64)Stream);
    crt_fread((__int64)&g_1667DE3CC, 4, (int)g_1667AE3C8, (__int64)Stream);
    crt_fread((__int64)&g_1667EE3CC, 4, 6 * g_1667AE3C8, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&g_1667AE3C8), 4, 1, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&g_1667AE3CC), 4, 3 * g_1667AE3C8, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&g_1667DE3CC), 4, (int)g_1667AE3C8, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&g_1667EE3CC), 4, 6 * g_1667AE3C8, (FILE *)(uintptr_t)(Stream));
  }
  return 1;
}

//----- (0000000140091660) ----------------------------------------------------
__int64            sub_140091660(__int64 a1, int a2)
{
  int iteration_count;
  unsigned int *state_address;
  __int64 scaled_index;
  unsigned int *destination_buffer;
  signed int i;
  unsigned int *destination_buffer_2;
  int Buffer;

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, a1);
    crt_fread((__int64)&g_1669A3CB8, 4, 1, a1);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&g_1669A3CB8), 4, 1, (FILE *)(uintptr_t)(a1));
  }
  iteration_count = 0;
  if ( (int)g_1669A3CB8 > 0 )
  {
    state_address = &g_1669A3CBC;
    do
    {
      scaled_index = 13LL * iteration_count;
      destination_buffer = &dword_140404A6C[scaled_index + 160857236];
      if ( a2 )
        crt_fread((__int64)destination_buffer, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer), 4, 1, (FILE *)(uintptr_t)(a1));
      for ( i = 0; i < (int)*state_address; ++i )
      {
        destination_buffer_2 = &dword_140404A6C[3 * i + 160857237 + scaled_index];
        if ( a2 )
          crt_fread((__int64)destination_buffer_2, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 3, (FILE *)(uintptr_t)(a1));
      }
      ++iteration_count;
      state_address += 13;
    }
    while ( iteration_count < (int)g_1669A3CB8 );
  }
  return 1;
}

//----- (00000001400917C0) ----------------------------------------------------
__int64            sub_1400917C0(__int64 a1, int a2)
{
  int Buffer;

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, a1);
    crt_fread((__int64)(unsigned int *)&g_1669A3CA0, 4, 3, a1);
    crt_fread((__int64)&g_1669A3CAC, 4, 3, a1);
    return 1;
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)((unsigned int *)&g_1669A3CA0), 4, 3, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_1669A3CAC), 4, 3, (FILE *)(uintptr_t)(a1));
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

//----- (0000000140091880) ----------------------------------------------------
__int64 sub_140091880()
{
  int selection_flag;
       char *literal_text;
  __int64 graphics_query_result;
  __int64 element_index;
  __int64 element_index_2;
  unsigned int selection_flag_2;
  int selection_flag_3;
  int selection_flag_4;
  int selection_flag_5;
  int selection_flag_6;
  int selection_flag_7;
  int selection_flag_8;
  int selection_flag_9;
  int selection_flag_10;
  int selection_flag_11;
  int selection_flag_12;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140091880[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140091880 + 0)) /* [rsp+0h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_140091880 + 32)) /* [rsp+20h] */
#define callee_output_word_2 (*(int (*))(void *)(sr_frame_140091880 + 36)) /* [rsp+24h] */
#define unused_written_slot (*(char * (*))(void *)(sr_frame_140091880 + 40)) /* [rsp+28h] */
#define scratch_buffer (*(_QWORD (*)[5])(void *)(sr_frame_140091880 + 48)) /* [rsp+30h] */

  selection_flag = 0;
  scratch_buffer[0] = (uint64)(uintptr_t)("OpenGL ES-CL ");
  literal_text = "OpenGL ES-CM ";
  unused_written_slot = "OpenGL ES-CM ";
  scratch_buffer[1] = (uint64)(uintptr_t)("OpenGL ES ");
  scratch_buffer[2] = 0;
  graphics_query_result = glGetString(7938);
  if ( !graphics_query_result )
    return 0;
  element_index = 0;
  while ( 1 )
  {
    element_index_2 = -1;
    do
      ++element_index_2;
    while ( literal_text[element_index_2] );
    if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(graphics_query_result), (const char *)(uintptr_t)(literal_text), element_index_2) )
      break;
    literal_text = (     char *)scratch_buffer[element_index++];
    if ( !literal_text )
      goto LABEL_9;
  }
  graphics_query_result += element_index_2;
LABEL_9:
  crt_sscanf_s(graphics_query_result, "%d.%d", (__int64)(uintptr_t)&callee_output_word, (__int64)(uintptr_t)&callee_output_word_2);
  dword_140404A68 = callee_output_word;
  g_140404A6C = callee_output_word_2;
  g_144980D98 = callee_output_word;
  g_144980D9C = callee_output_word_2;
  if ( callee_output_word == 1 )
  {
    if ( callee_output_word_2 >= 0 )
    {
LABEL_11:
      selection_flag_2 = 1;
      goto LABEL_12;
    }
  }
  else if ( callee_output_word > 1 )
  {
    goto LABEL_11;
  }
  selection_flag_2 = 0;
LABEL_12:
  g_144980CB0 = selection_flag_2;
  if ( callee_output_word == 1 )
  {
    if ( callee_output_word_2 >= 1 )
    {
LABEL_14:
      selection_flag_3 = 1;
      goto LABEL_15;
    }
  }
  else if ( callee_output_word > 1 )
  {
    goto LABEL_14;
  }
  selection_flag_3 = 0;
LABEL_15:
  dword_140302FF0 = selection_flag_3;
  if ( callee_output_word == 1 )
  {
    if ( callee_output_word_2 >= 2 )
    {
LABEL_17:
      selection_flag_4 = 1;
      goto LABEL_18;
    }
  }
  else if ( callee_output_word > 1 )
  {
    goto LABEL_17;
  }
  selection_flag_4 = 0;
LABEL_18:
  dword_140302FF4 = selection_flag_4;
  if ( callee_output_word == 1 )
  {
    if ( callee_output_word_2 >= 3 )
    {
LABEL_20:
      selection_flag_5 = 1;
      goto LABEL_21;
    }
  }
  else if ( callee_output_word > 1 )
  {
    goto LABEL_20;
  }
  selection_flag_5 = 0;
LABEL_21:
  unk_140404090 = selection_flag_5;
  if ( callee_output_word == 1 )
  {
    if ( callee_output_word_2 >= 4 )
    {
LABEL_23:
      selection_flag_6 = 1;
      goto LABEL_24;
    }
  }
  else if ( callee_output_word > 1 )
  {
    goto LABEL_23;
  }
  selection_flag_6 = 0;
LABEL_24:
  unk_140404094 = selection_flag_6;
  if ( callee_output_word == 1 )
  {
    if ( callee_output_word_2 >= 5 )
    {
LABEL_26:
      selection_flag_7 = 1;
      goto LABEL_27;
    }
  }
  else if ( callee_output_word > 1 )
  {
    goto LABEL_26;
  }
  selection_flag_7 = 0;
LABEL_27:
  unk_140404128 = selection_flag_7;
  if ( callee_output_word == 2 )
  {
    if ( callee_output_word_2 >= 0 )
    {
LABEL_29:
      selection_flag_8 = 1;
      goto LABEL_30;
    }
  }
  else if ( callee_output_word > 2 )
  {
    goto LABEL_29;
  }
  selection_flag_8 = 0;
LABEL_30:
  unk_14040412C = selection_flag_8;
  if ( callee_output_word == 2 )
  {
    if ( callee_output_word_2 >= 1 )
    {
LABEL_32:
      selection_flag_9 = 1;
      goto LABEL_33;
    }
  }
  else if ( callee_output_word > 2 )
  {
    goto LABEL_32;
  }
  selection_flag_9 = 0;
LABEL_33:
  unk_1404044B0 = selection_flag_9;
  if ( callee_output_word == 3 )
  {
    if ( callee_output_word_2 >= 0 )
    {
LABEL_35:
      selection_flag_10 = 1;
      goto LABEL_36;
    }
  }
  else if ( callee_output_word > 3 )
  {
    goto LABEL_35;
  }
  selection_flag_10 = 0;
LABEL_36:
  unk_1404044B4 = selection_flag_10;
  if ( callee_output_word == 3 )
  {
    if ( callee_output_word_2 >= 1 )
    {
LABEL_38:
      selection_flag_11 = 1;
      goto LABEL_39;
    }
  }
  else if ( callee_output_word > 3 )
  {
    goto LABEL_38;
  }
  selection_flag_11 = 0;
LABEL_39:
  unk_140404788 = selection_flag_11;
  if ( callee_output_word == 3 )
  {
    if ( callee_output_word_2 >= 2 )
    {
LABEL_41:
      selection_flag_12 = 1;
      goto LABEL_42;
    }
  }
  else if ( callee_output_word > 3 )
  {
    goto LABEL_41;
  }
  selection_flag_12 = 0;
LABEL_42:
  unk_14040478C = selection_flag_12;
  if ( callee_output_word == 3 )
  {
    if ( callee_output_word_2 < 3 )
      goto LABEL_69;
    goto LABEL_68;
  }
  if ( callee_output_word > 3 )
LABEL_68:
    selection_flag = 1;
LABEL_69:
  unk_140404888 = selection_flag;
  if ( callee_output_word > 3 || callee_output_word >= 3 && callee_output_word_2 >= 3 )
  {
    g_144980D98 = 3;
    g_144980D9C = 3;
  }
  return (unsigned int)callee_output_word;
}

#undef unused_frame_slot_0
#undef callee_output_word
#undef callee_output_word_2
#undef unused_written_slot
#undef scratch_buffer

//----- (0000000140091BA0) ----------------------------------------------------
__int64 sub_140091BA0()
{
  __int64 graphics_query_result;
  int state_word;
       __m128i *saved_graphics_query_result;
  char *allocation_buffer;
  __int64 call_result;
  __int64 integer_sum;
  __int64 graphics_query_result_2;
       __m128i *source_buffer;
  __int64 iteration_count;
  unsigned __int64 byte_count;
  __m128i *allocated_buffer;
  __m128i *saved_allocated_buffer;
       __m128i *returned_pointer;
       __m128i *packed_vector;
  int selection_flag;
  int iteration_count_2;
       char **text_cursor;
  int iteration_count_3;
  __int64 record_byte_offset;

  if ( (int)g_144980D98 < 3 )
  {
    graphics_query_result = glGetString(7939);
    state_word = g_144980DA8;
    saved_graphics_query_result = (     __m128i *)graphics_query_result;
    allocation_buffer = *(char **)&g_144980DB0;
    g_144980DA0 = graphics_query_result;
    goto LABEL_16;
  }
  g_144980DA8 = 0;
  glGetIntegerv(33309, &g_144980DA8);
  state_word = g_144980DA8;
  if ( (int)g_144980DA8 <= 0 )
  {
    allocation_buffer = *(char **)&g_144980DB0;
  }
  else
  {
    call_result = j__realloc_base_sr(g_144980DB0, 8LL * (int)g_144980DA8);
    allocation_buffer = (char *)call_result;
    if ( !call_result )
      return 0;
    state_word = g_144980DA8;
    g_144980DB0 = call_result;
  }
  if ( !allocation_buffer )
    return 0;
  integer_sum = 0;
  if ( state_word )
  {
    do
    {
      graphics_query_result_2 = glGetStringi(7939, (unsigned int)integer_sum);
      source_buffer = (     __m128i *)graphics_query_result_2;
      iteration_count = -1;
      while ( *(_BYTE *)(graphics_query_result_2 + iteration_count++ + 1) != 0 )
        ;
      byte_count = iteration_count + 1;
      allocated_buffer = (__m128i *)sr_path_malloc(iteration_count + 1);
      saved_allocated_buffer = allocated_buffer;
      if ( allocated_buffer )
        crt_memcpy(allocated_buffer, source_buffer, byte_count);
      allocation_buffer = *(char **)&g_144980DB0;
      *(_QWORD *)(g_144980DB0 + 8 * integer_sum) = (uint64)(uintptr_t)(saved_allocated_buffer);
      integer_sum = (unsigned int)(integer_sum + 1);
      state_word = g_144980DA8;
    }
    while ( (unsigned int)integer_sum < g_144980DA8 );
  }
  saved_graphics_query_result = *(     __m128i **)(unsigned int *)&g_144980DA0;
LABEL_16:
  if ( (int)g_144980D98 < 3 )
  {
    if ( saved_graphics_query_result )
    {
      returned_pointer = sub_1401FC614(saved_graphics_query_result, (     __m128i *)"GL_ARB_clip_control");
      if ( returned_pointer )
      {
        while ( 1 )
        {
          packed_vector = (     __m128i *)((char *)returned_pointer + 19);
          if ( (returned_pointer == saved_graphics_query_result || SR_VEC_LANES(128, returned_pointer[-1], i8)[15] == 32) && (SR_VEC_PTR_LANES(128, packed_vector, i8)[0] & 0xDF) == 0 )
            break;
          saved_graphics_query_result = (     __m128i *)((char *)returned_pointer + 19);
          returned_pointer = sub_1401FC614(packed_vector, (     __m128i *)"GL_ARB_clip_control");
          if ( !returned_pointer )
            goto LABEL_23;
        }
        state_word = g_144980DA8;
        selection_flag = 1;
        allocation_buffer = *(char **)&g_144980DB0;
      }
      else
      {
LABEL_23:
        state_word = g_144980DA8;
        selection_flag = 0;
        allocation_buffer = *(char **)&g_144980DB0;
      }
    }
    else
    {
      selection_flag = 0;
    }
LABEL_34:
    unk_14040488C = selection_flag;
    if ( allocation_buffer )
    {
      iteration_count_3 = 0;
      if ( state_word > 0 )
      {
        record_byte_offset = 0;
        do
        {
          free(*(void **)&allocation_buffer[record_byte_offset]);
          allocation_buffer = *(char **)&g_144980DB0;
          record_byte_offset += 8;
          ++iteration_count_3;
        }
        while ( iteration_count_3 < (int)g_144980DA8 );
      }
      free(allocation_buffer);
      g_144980DB0 = 0;
    }
    return 1;
  }
  if ( allocation_buffer )
  {
    iteration_count_2 = 0;
    if ( state_word <= 0 )
    {
LABEL_33:
      selection_flag = 0;
    }
    else
    {
      text_cursor = (     char **)allocation_buffer;
      while ( !*text_cursor || strcmp_sr(*text_cursor, "GL_ARB_clip_control") )
      {
        ++iteration_count_2;
        ++text_cursor;
        if ( iteration_count_2 >= state_word )
          goto LABEL_33;
      }
      selection_flag = 1;
    }
    goto LABEL_34;
  }
  unk_14040488C = 0;
  return 1;
}

//----- (0000000140091DF0) ----------------------------------------------------
_BOOL8            sub_140091DF0(_BYTE *a1)
{
  signed int iteration_count;
  signed int i;
  __int64 element_index;

  iteration_count = g_1862AE020;
  for ( i = g_1862AE024; iteration_count < i; g_1862AE020 = ++iteration_count )
  {
    if ( (unsigned int)sub_14003C6F0(a1) )
      break;
  }
  element_index = -1;
  do
    ++element_index;
  while ( a1[element_index] );
  g_1862AE020 = element_index + iteration_count;
  return (int)element_index + iteration_count < i;
}

//----- (0000000140091E60) ----------------------------------------------------
unsigned __int64            sub_140091E60(int a1)
{
  __int64 player_record_offset;
  __int64 player_record_offset_2;
  unsigned int *state_address;
  char i;
  __int64 iteration_count;
  _BYTE *buffer_cursor;
  __int64 iteration_count_2;
  unsigned __int64 result;
  __int64 remaining_count;

  player_record_offset = 3597LL * a1;
  if ( LOBYTE(dword_140404A6C[player_record_offset + 71856254]) == 47 )
    LOBYTE(dword_140404A6C[player_record_offset + 71856254]) = 32;
  if ( BYTE1(dword_140404A6C[player_record_offset + 71856254]) == 47 )
    BYTE1(dword_140404A6C[player_record_offset + 71856254]) = 32;
  if ( BYTE2(dword_140404A6C[player_record_offset + 71856254]) == 47 )
    BYTE2(dword_140404A6C[player_record_offset + 71856254]) = 32;
  if ( HIBYTE(dword_140404A6C[player_record_offset + 71856254]) == 47 )
    HIBYTE(dword_140404A6C[player_record_offset + 71856254]) = 32;
  if ( LOBYTE(dword_140404A6C[player_record_offset + 71856255]) == 47 )
    LOBYTE(dword_140404A6C[player_record_offset + 71856255]) = 32;
  if ( BYTE1(dword_140404A6C[player_record_offset + 71856255]) == 47 )
    BYTE1(dword_140404A6C[player_record_offset + 71856255]) = 32;
  if ( BYTE2(dword_140404A6C[player_record_offset + 71856255]) == 47 )
    BYTE2(dword_140404A6C[player_record_offset + 71856255]) = 32;
  if ( HIBYTE(dword_140404A6C[player_record_offset + 71856255]) == 47 )
    HIBYTE(dword_140404A6C[player_record_offset + 71856255]) = 32;
  if ( LOBYTE(dword_140404A6C[player_record_offset + 71856256]) == 47 )
    LOBYTE(dword_140404A6C[player_record_offset + 71856256]) = 32;
  if ( BYTE1(dword_140404A6C[player_record_offset + 71856256]) == 47 )
    BYTE1(dword_140404A6C[player_record_offset + 71856256]) = 32;
  if ( BYTE2(dword_140404A6C[player_record_offset + 71856256]) == 47 )
    BYTE2(dword_140404A6C[player_record_offset + 71856256]) = 32;
  if ( HIBYTE(dword_140404A6C[player_record_offset + 71856256]) == 47 )
    HIBYTE(dword_140404A6C[player_record_offset + 71856256]) = 32;
  if ( LOBYTE(dword_140404A6C[player_record_offset + 71856257]) == 47 )
    LOBYTE(dword_140404A6C[player_record_offset + 71856257]) = 32;
  if ( BYTE1(dword_140404A6C[player_record_offset + 71856257]) == 47 )
    BYTE1(dword_140404A6C[player_record_offset + 71856257]) = 32;
  if ( BYTE2(dword_140404A6C[player_record_offset + 71856257]) == 47 )
    BYTE2(dword_140404A6C[player_record_offset + 71856257]) = 32;
  if ( HIBYTE(dword_140404A6C[player_record_offset + 71856257]) == 47 )
    HIBYTE(dword_140404A6C[player_record_offset + 71856257]) = 32;
  if ( LOBYTE(dword_140404A6C[player_record_offset + 71856258]) == 47 )
    LOBYTE(dword_140404A6C[player_record_offset + 71856258]) = 32;
  if ( BYTE1(dword_140404A6C[player_record_offset + 71856258]) == 47 )
    BYTE1(dword_140404A6C[player_record_offset + 71856258]) = 32;
  if ( BYTE2(dword_140404A6C[player_record_offset + 71856258]) == 47 )
    BYTE2(dword_140404A6C[player_record_offset + 71856258]) = 32;
  if ( HIBYTE(dword_140404A6C[player_record_offset + 71856258]) == 47 )
    HIBYTE(dword_140404A6C[player_record_offset + 71856258]) = 32;
  if ( LOBYTE(dword_140404A6C[player_record_offset + 71856259]) == 47 )
    LOBYTE(dword_140404A6C[player_record_offset + 71856259]) = 32;
  if ( BYTE1(dword_140404A6C[player_record_offset + 71856259]) == 47 )
    BYTE1(dword_140404A6C[player_record_offset + 71856259]) = 32;
  if ( BYTE2(dword_140404A6C[player_record_offset + 71856259]) == 47 )
    BYTE2(dword_140404A6C[player_record_offset + 71856259]) = 32;
  if ( HIBYTE(dword_140404A6C[player_record_offset + 71856259]) == 47 )
    HIBYTE(dword_140404A6C[player_record_offset + 71856259]) = 32;
  if ( LOBYTE(dword_140404A6C[player_record_offset + 71856260]) == 47 )
    LOBYTE(dword_140404A6C[player_record_offset + 71856260]) = 32;
  if ( BYTE1(dword_140404A6C[player_record_offset + 71856260]) == 47 )
    BYTE1(dword_140404A6C[player_record_offset + 71856260]) = 32;
  if ( BYTE2(dword_140404A6C[player_record_offset + 71856260]) == 47 )
    BYTE2(dword_140404A6C[player_record_offset + 71856260]) = 32;
  if ( HIBYTE(dword_140404A6C[player_record_offset + 71856260]) == 47 )
    HIBYTE(dword_140404A6C[player_record_offset + 71856260]) = 32;
  if ( LOBYTE(dword_140404A6C[player_record_offset + 71856261]) == 47 )
    LOBYTE(dword_140404A6C[player_record_offset + 71856261]) = 32;
  if ( BYTE1(dword_140404A6C[player_record_offset + 71856261]) == 47 )
    BYTE1(dword_140404A6C[player_record_offset + 71856261]) = 32;
  if ( BYTE2(dword_140404A6C[player_record_offset + 71856261]) == 47 )
    BYTE2(dword_140404A6C[player_record_offset + 71856261]) = 32;
  player_record_offset_2 = 3597LL * a1;
  state_address = &dword_140404A6C[player_record_offset_2 + 71856253];
  HIBYTE(dword_140404A6C[player_record_offset_2 + 71856261]) = 0;
  for ( i = dword_140404A6C[player_record_offset_2 + 71856254]; i == 32; i = *((_BYTE *)state_address + 4) )
  {
    iteration_count = 0;
    buffer_cursor = state_address + 1;
    do
    {
      if ( !i )
        break;
      i = buffer_cursor[1];
      ++iteration_count;
      *buffer_cursor++ = i;
    }
    while ( iteration_count < 31 );
  }
  iteration_count_2 = -1;
  do
    ++iteration_count_2;
  while ( *((_BYTE *)state_address + iteration_count_2 + 4) );
  result = (unsigned int)(iteration_count_2 - 1);
  remaining_count = (int)result;
  if ( (result & 0x80000000) == 0LL )
  {
    result = (unsigned __int64)&g_151620C64 + (int)result + player_record_offset_2 * 4;
    do
    {
      if ( *(_BYTE *)result != 32 )
        break;
      *(_BYTE *)result-- = 0;
      --remaining_count;
    }
    while ( remaining_count >= 0 );
  }
  if ( !*((_BYTE *)state_address + 4) )
  {
    strcpy((char *)state_address + 4, "Noname");
    result = 0;
  }
  HIBYTE(dword_140404A6C[player_record_offset_2 + 71856261]) = 0;
  return result;
}

//----- (00000001400920F0) ----------------------------------------------------
__int64 sub_1400920F0(__int64 a1,      char *a2, ...)
{
  __int64 *returned_pointer;
  va_list va;

  va_start(va, a2);
  returned_pointer = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*returned_pointer, a1, (__int64)a2, 0, (__int64)va);
}

//----- (0000000140092370) ----------------------------------------------------
__int64 sub_140092370()
{
  float state_scalar;
  float float_word;
  __m128 vector_result;
  float combined_products;
  float square_root;
  __int64 float_word_2;
  float call_result;
  double vector_result_2;
  float saved_vector_result;
  __m128 vector_result_3;
  double limited_value;
  double y;
  double reordered_vector;
  __int64 unused_local;
  unsigned int cached_local_player;
  unsigned int *state_address;
  unsigned int *state_address_2;
  signed int state_word;
  __int64 result;
  __int64 scaled_index;
  int table_value;
  unsigned int table_value_2;
  float product_difference;
  __int64 table_value_3;
  unsigned int float_word_3;
  unsigned int float_word_4;
  unsigned int float_word_5;
  unsigned int table_value_4;
  float combined_products_2;
  float combined_products_3;
  float weighted_sum;
  float weighted_sum_2;
  float combined_products_4;
  float square_root_2;
  float limited_value_2;
  float weighted_sum_3;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  __int64 loaded_word;
  __m128d converted_vector;
  __int64 unrecovered_register_value;
  float call_result_2;
  double vector_result_4;
  float saved_vector_result_2;
  __m128 vector_result_5;
  double scaled_value;
  double reordered_vector_2;
  __m128d converted_vector_2;
  double limited_value_3;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  double x;
  __m128i converted_vector_5;
  __int64 unused_local_2;
  int red;
  unsigned int table_value_5;
  float combined_products_5;

  if ( game_type == 5
    && local_player != -1
    && dword_140404A6C[3597 * local_player + 71856286] - 1 <= 1
    && g_183F7A570 != 0.0 )
  {
    glDisable(2929);
    vector_result = _mm_castsi128_ps(_mm_cvtsi32_si128((int)*(unsigned int *)&g_183F7C560))  /* lane 0 = that word (was the array address, indexed as a vector) */;
    state_scalar = g_183F7C574;
    float_word = (float)((float)(g_183F7C554
                       * (float)(g_183F7A574 - g_183F7C548))
               + (float)(g_183F7C550
                       * (float)(g_183F7A570 - g_183F7C544)))
       + (float)(g_183F7C558
               * (float)(g_183F7A578 - g_183F7C54C));
    SR_VEC_LANES(128, vector_result, f32)[0] = (float)((float)(g_183F7C560
                                   * (float)(g_183F7A574
                                           - g_183F7C548))
                           + (float)(g_183F7C55C
                                   * (float)(g_183F7A570
                                           - g_183F7C544)))
                   + (float)(g_183F7C564
                           * (float)(g_183F7A578 - g_183F7C54C));
    combined_products = -(float)((float)((float)(g_183F7C56C
                                * (float)(g_183F7A574 - g_183F7C548))
                        + (float)(g_183F7C568
                                * (float)(g_183F7A570 - g_183F7C544)))
                + (float)(g_183F7C570
                        * (float)(g_183F7A578 - g_183F7C54C)));
    square_root = fmaxf(
           fminf(
             (float)(192.0
                   / (float)((float)(fsqrt(
                                       (float)((float)((float)(g_183F7A574
                                                             - g_183F7C548)
                                                     * (float)(g_183F7A574
                                                             - g_183F7C548))
                                             + (float)((float)(g_183F7A570
                                                             - g_183F7C544)
                                                     * (float)(g_183F7A570
                                                             - g_183F7C544)))
                                     + (float)((float)(g_183F7A578
                                                     - g_183F7C54C)
                                             * (float)(g_183F7A578
                                                     - g_183F7C54C)))
                                   * 0.0625)
                           * g_183F7C574))
           + 4.0,
             192.0),
           8.0);
    if ( combined_products < 1.0 )
      combined_products = 1.0;
    call_result = sub_14023F704(SR_VEC_LANES(128, vector_result, f32)[0], float_word);
    SR_VEC_LANES(128, vector_result, f32)[0] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] * SR_VEC_LANES(128, vector_result, f32)[0]) + (float)(float_word * float_word);
    vector_result_2 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(vector_result)), f64)[0] * 512.0;
    saved_vector_result = vector_result_2;
    if ( combined_products > 1.0 )
      saved_vector_result = saved_vector_result / (float)(combined_products * state_scalar);
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(call_result, float_word_2, vector_result_2));
    HIDWORD(reordered_vector) = 0;
    limited_value = fminf(512.0 - (float)(square_root * 0.5), saved_vector_result);
    y = 288.0 - *(double *)SR_VEC_LANES(128, vector_result_3, u64) * limited_value;
    *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * limited_value + 512.0;
    if ( *(float *)&y >= 24.0 )
    {
      if ( *(float *)&y > 552.0 )
        *(_QWORD *)&y = 1141506048;
    }
    else
    {
      *(_QWORD *)&y = 1103101952;
    }
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF984 + 284024944]);
    cached_local_player = local_player;
    if ( dword_140404A6C[3597 * local_player + 71856286] == 1 )
    {
      sr_renderer_draw_textured_rect(reordered_vector, y, COERCE_UNSIGNED_INT((float)(square_root)) /* native XMM2 width = XMM8, same as the height */, square_root, 133, 1065353216, 0, 0, 1061158912);
      cached_local_player = local_player;
    }
    if ( dword_140404A6C[3597 * cached_local_player + 71856286] == 2 )
      sr_renderer_draw_textured_rect(reordered_vector, y, COERCE_UNSIGNED_INT((float)(square_root)) /* native XMM2 width = XMM8, same as the height */, square_root, 133, 0, 1065353216, 0, 1061158912);
  }
  renderer_current_font = 2;
  state_address = &g_1832A5054;
  do
  {
    *state_address = 0;
    state_address += 7166;
  }
  while ( (__int64)state_address < (__int64)&g_1839A4854 );
  state_address_2 = &g_182BBB41C;
  do
  {
    *state_address_2 = 0;
    state_address_2 += 1760;
  }
  while ( (__int64)state_address_2 < (__int64)&g_18329B41C );
  state_word = g_192E98E60;
  for ( result = g_192E98E60 + 1;
        state_word != (unsigned __int8)(LOBYTE(g_192E98E60) + 1);
        result = g_192E98E60 + 1 )
  {
    scaled_index = 38LL * state_word;
    table_value = dword_140404A6C[scaled_index + 346696447];
    if ( table_value > 0 && (int)dword_140404A6C[scaled_index + 346696448] > 0 )
    {
      table_value_2 = dword_140404A6C[scaled_index + 346696445];
      if ( table_value_2 - 1 <= 1 )
      {
        product_difference = (float)table_value * 0.0049999999;
        if ( dword_140404A6C[scaled_index + 346696449] != -1 )
        {
          table_value_3 = (int)dword_140404A6C[scaled_index + 346696449];
          if ( table_value_2 == 1 )
          {
            float_word_3 = dword_140404A6C[344 * table_value_3 + 284956407];
            float_word_4 = dword_140404A6C[344 * table_value_3 + 284956408];
            float_word_5 = dword_140404A6C[344 * table_value_3 + 284956409];
          }
          else
          {
            float_word_3 = dword_140404A6C[13 * table_value_3 + 285083825];
            float_word_4 = dword_140404A6C[13 * table_value_3 + 285083826];
            float_word_5 = dword_140404A6C[13 * table_value_3 + 285083827];
          }
          table_value_4 = dword_140404A6C[scaled_index + 346696450];
          combined_products_2 = (float)((float)(g_183F7C55C * 0.5) + *(float *)&float_word_3)
              - g_183F7C544;
          combined_products_3 = (float)((float)(g_183F7C560 * 0.5) + *(float *)&float_word_4)
              - g_183F7C548;
          combined_products_5 = (float)((float)(g_183F7C564 * 0.5) + *(float *)&float_word_5)
              - g_183F7C54C;
          weighted_sum = (float)((float)(combined_products_3 * g_183F7C554)
                      + (float)(combined_products_2 * g_183F7C550))
              + (float)(combined_products_5 * g_183F7C558);
          weighted_sum_2 = (float)((float)(combined_products_3 * g_183F7C560)
                      + (float)(combined_products_2 * g_183F7C55C))
              + (float)(combined_products_5 * g_183F7C564);
          combined_products_4 = -(float)((float)((float)(combined_products_3 * g_183F7C56C)
                               + (float)(combined_products_2 * g_183F7C568))
                       + (float)(combined_products_5 * g_183F7C570));
          square_root_2 = 256.0 / fsqrt((float)((float)(combined_products_2 * combined_products_2) + (float)(combined_products_3 * combined_products_3)) + (float)(combined_products_5 * combined_products_5));
          if ( table_value_4 )
          {
            if ( table_value_4 == 2 )
              square_root_2 = square_root_2 + square_root_2;
          }
          else
          {
            square_root_2 = square_root_2 * 0.25;
          }
          if ( table_value_2 == 2 )
            square_root_2 = square_root_2 * 0.125;
          limited_value_2 = fminf(square_root_2, 32.0);
          if ( limited_value_2 > 4.0 )
          {
            if ( limited_value_2 < 8.0 )
              product_difference = product_difference * (float)((float)(limited_value_2 - 4.0) * 0.25);
            weighted_sum_3 = 0.0;
            state_address_3 = &dword_140404A6C[scaled_index + 346696451];
            if ( dword_140404A6C[3592 * renderer_current_font + 72777085] && *(_BYTE *)state_address_3 )
            {
              state_address_4 = &dword_140404A6C[scaled_index + 346696451];
              do
              {
                if ( (char *)state_address_4 - (char *)state_address_3 >= 0xFFFF )
                  break;
                loaded_word = *(char *)state_address_4;
                state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
                weighted_sum_3 = weighted_sum_3
                    + (float)(limited_value_2 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + loaded_word]);
              }
              while ( *(_BYTE *)state_address_4 );
            }
            converted_vector = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
            call_result_2 = sub_14023F704(weighted_sum_2, weighted_sum);
            SR_VEC_LANES(128, converted_vector, f64)[0] = (float)((float)(weighted_sum_2 * weighted_sum_2) + (float)(weighted_sum * weighted_sum));
            vector_result_4 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(converted_vector), f64)[0] * 512.0;
            saved_vector_result_2 = vector_result_4;
            if ( combined_products_4 <= 1.0 )
            {
              if ( combined_products_4 < -1.0 )
                saved_vector_result_2 = saved_vector_result_2 * (float)(-1.0 / (float)(combined_products_4 * g_183F7C574));
            }
            else
            {
              saved_vector_result_2 = saved_vector_result_2 / (float)(combined_products_4 * g_183F7C574);
            }
            vector_result_5 = _mm_castpd_ps(sub_1401F8A50(call_result_2, unrecovered_register_value, vector_result_4));
            scaled_value = *(double *)SR_VEC_LANES(128, vector_result_5, u64);
            reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_5, (__m128d)vector_result_5, 1), f64)[0];
            converted_vector_2 = ((__m128d)_mm_cvtsi64_si128((long long)(0x4072000000000000uLL)));
            limited_value_3 = fminf(512.0 - (float)(weighted_sum_3 * 0.5), saved_vector_result_2);
            SR_VEC_LANES(128, converted_vector_2, f64)[0] = 288.0 - scaled_value * limited_value_3;
            HIDWORD(x) = 0;
            converted_vector_3 = (__m128i)_mm_cvtpd_ps(converted_vector_2);
            converted_vector_4 = _mm_cvtsi32_si128((int)(0x41C00000u));
            *(float *)&x = reordered_vector_2 * limited_value_3 + 512.0;
            if ( *(float *)SR_VEC_LANES(128, converted_vector_3, i32) < 24.0 || (converted_vector_4 = _mm_cvtsi32_si128((int)(0x440A0000u)), *(float *)SR_VEC_LANES(128, converted_vector_3, i32) > 552.0) )
              converted_vector_3 = converted_vector_4;
            if ( table_value_2 == 1 )
              converted_vector_5 = _mm_cvtsi32_si128(dword_140404A6C[7166 * table_value_3 + 280658298]);
            else
              converted_vector_5 = _mm_cvtsi32_si128(dword_140404A6C[1760 * table_value_3 + 278846060]);
            *(float *)SR_VEC_LANES(128, converted_vector_3, i32) = *(float *)SR_VEC_LANES(128, converted_vector_3, i32) - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_5), f32)[0] * limited_value_2);
            glBindTexture(3553, renderer_white_texture);
            red = 1061158912;
            if ( combined_products_4 > -0.125 )
              red = 1065353216;
            /* 0x140092C29: width = the text width summed at 0x140092A7F (v35) + 4.0 (0x140092BE0, xmm2 at 0x140092C04);
               the C had passed an undefined local */
            sr_renderer_draw_textured_rect(x, *(double *)SR_VEC_LANES(128, converted_vector_3, i64), sr_text_float_bits(weighted_sum_3 + 4.0f), limited_value_2 * 0.875, 5, red, red, red, COERCE_INT(product_difference * 0.75f));
            sr_CSDrawText(
              (char *)&dword_140404A6C[scaled_index + 346696451],
              *(float *)&x,
              (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_3),
              limited_value_2);
            table_value_5 = dword_140404A6C[scaled_index + 346696445];
            if ( table_value_5 == 1 )
            {
              ++dword_140404A6C[7166 * dword_140404A6C[scaled_index + 346696449] + 280658298];
            }
            else if ( table_value_5 == 2 )
            {
              ++dword_140404A6C[1760 * dword_140404A6C[scaled_index + 346696449] + 278846060];
            }
          }
        }
      }
    }
    state_word = (unsigned __int8)(state_word - 1);
  }
  return result;
}

// 140092850: conditional instruction was optimized away because esi.4==2
// 140092B9D: conditional instruction was optimized away because esi.4==2

//----- (0000000140094690) ----------------------------------------------------
__int64 sub_140094690()
{
  glDisable(2884);
  glDisable(2929);
  glEnable(2884);
  return (*(__int64 (           **)(__int64))(unsigned int *)&glEnable)(2929);
}

//----- (00000001400946D0) ----------------------------------------------------
double sub_1400946D0()
{
  __int64 unused_local;
  __int64 unused_local_2;
  signed int state_word;
  int element_index;
  signed int iteration_count;
  unsigned int *buffer_cursor;
  __int64 remaining_count;
  unsigned int *buffer_cursor_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 unused_local_5;
  int state_word_2;
  unsigned int *state_address;
  int element_index_2;
  unsigned int *state_address_2;
  int loaded_word;
  int loaded_word_2;

  sub_14011C950();
  glUseProgram(shadow_program);
  glUniformMatrix4fv(shadow_u_modelmatrix, 1, 0, (unsigned int *)&g_1A724E600);
  glUniformMatrix4fv(shadow_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniformMatrix4fv(shadow_u_projectionmatrix, 1, 0, (unsigned int *)&g_1A724E580);
  glUniformMatrix4fv(shadow_u_viewmatrix, 1, 0, (unsigned int *)&g_1A724E5C0);
  glUniform3fv(shadow_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniform1f((int)shadow_u_shadowlength,0x1.0000000000000p+5f);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C04 + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C18 + 283793813]);
  glEnableVertexAttribArray(0);
  state_word = g_150F55020;
  element_index = 0;
  iteration_count = 0;
  if ( (int)g_150F55020 > 0 )
  {
    buffer_cursor = &g_150F55024;
    do
    {
      if ( !g_18AB70F9C && !g_18E95B03C )
      {
        remaining_count = 4;
        buffer_cursor_2 = &dword_140404A6C[6930 * *buffer_cursor + 83200503];
        do
        {
          if ( buffer_cursor_2[780] )
          {
            scaled_index = (int)*buffer_cursor_2;
            if ( (int)scaled_index >= 0 )
            {
              scaled_index_2 = 3 * scaled_index;
              scaled_index_3 = (int)*buffer_cursor_2;
              if ( dword_140404A6C[6 * scaled_index + 312226123] != -1 )
              {
                glVertexAttribPointer(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[309078348+3074*((int64_t)(int32_t)dword_140404A6C[6*scaled_index+312226123])+3*((int64_t)(int32_t)dword_140404A6C[(6*scaled_index+312226123)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[6*scaled_index+312226123])*g_189F0EF8C)));
                if ( dword_140404A6C[2 * scaled_index_2 + 328456563] != -1 )
                  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*dword_140404A6C[8969*scaled_index_3+73991665]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[325308788+3074*((int64_t)(int32_t)dword_140404A6C[2*scaled_index_2+328456563])+3*((int64_t)(int32_t)dword_140404A6C[(2*scaled_index_2+328456563)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[2*scaled_index_2+328456563])*g_18DCF902C)));
              }
            }
          }
          ++buffer_cursor_2;
          --remaining_count;
        }
        while ( remaining_count );
        state_word = g_150F55020;
      }
      ++iteration_count;
      ++buffer_cursor;
    }
    while ( iteration_count < state_word );
  }
  glDisableVertexAttribArray(0);
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  glDisable(32823);
  glEnable(3042);
  if ( !g_16B165F68 )
  {
    state_word_2 = g_18417E1B4;
    state_address = &g_1841821B8;
    element_index_2 = 0;
    if ( (int)g_18417E1B4 > 0 )
    {
      state_address_2 = &g_1841821B8;
      do
      {
        if ( (state_address_2[3] & 1) != 0 )
        {
          loaded_word = *state_address_2;
          if ( (int)*state_address_2 >= (int)g_183EBBBC4 && loaded_word <= (int)g_183EBBFC0 )
          {
            sub_140124FE0(
              loaded_word,
              state_address_2[1],
              &dword_140404A6C[30 * element_index_2 + 284554715],
              (__int64)&dword_140404A6C[30 * element_index_2 + 284554718]);
            state_word_2 = g_18417E1B4;
          }
        }
        ++element_index_2;
        state_address_2 += 30;
      }
      while ( element_index_2 < state_word_2 );
      if ( state_word_2 > 0 )
      {
        do
        {
          if ( (state_address[3] & 1) != 0 )
          {
            loaded_word_2 = *state_address;
            if ( (int)*state_address < (int)g_183EBBBC4 || loaded_word_2 > (int)g_183EBBFC0 )
            {
              sub_140124FE0(
                loaded_word_2,
                state_address[1],
                &dword_140404A6C[30 * element_index + 284554715],
                (__int64)&dword_140404A6C[30 * element_index + 284554718]);
              state_word_2 = g_18417E1B4;
            }
          }
          ++element_index;
          state_address += 30;
        }
        while ( element_index < state_word_2 );
      }
    }
    glBindBuffer(34962, 0);
  }
  glDisable(32823);
  return ((double (*)(_QWORD))glUseProgram)(0);
}

//----- (0000000140095800) ----------------------------------------------------
unsigned __int64            sub_140095800(_BYTE *a1, __int64 a2, unsigned __int64 a3, FILE *a4)
{
  _BYTE *buffer_cursor;
  int i;
  int iteration_count;
  _BYTE *running_total;
  char call_result;
  int scaled_index;
  int iteration_count_2;
  _BYTE *record_byte_offset;
  char call_result_2;
  int scaled_index_2;

  buffer_cursor = a1;
  switch ( a2 )
  {
    case 1LL:
      for ( i = 0; i < a3; ++buffer_cursor )
      {
        ++i;
        *buffer_cursor = sub_14020BB2C(a4);
      }
      break;
    case 2LL:
      iteration_count = 0;
      if ( a3 )
      {
        running_total = a1 + 1;
        do
        {
          *running_total = sub_14020BB2C(a4);
          call_result = sub_14020BB2C(a4);
          scaled_index = 2 * iteration_count++;
          running_total += 2;
          buffer_cursor[scaled_index] = call_result;
        }
        while ( iteration_count < a3 );
      }
      break;
    case 4LL:
      iteration_count_2 = 0;
      if ( a3 )
      {
        record_byte_offset = a1 + 2;
        do
        {
          record_byte_offset[1] = sub_14020BB2C(a4);
          *record_byte_offset = sub_14020BB2C(a4);
          *(record_byte_offset - 1) = sub_14020BB2C(a4);
          call_result_2 = sub_14020BB2C(a4);
          scaled_index_2 = 4 * iteration_count_2++;
          record_byte_offset += 4;
          buffer_cursor[scaled_index_2] = call_result_2;
        }
        while ( iteration_count_2 < a3 );
      }
      break;
  }
  return a3;
}

//----- (0000000140095910) ----------------------------------------------------
void sub_140095910()
{
  char *allocation_buffer;
  int iteration_count;
  __int64 record_byte_offset;

  allocation_buffer = *(char **)&g_144980DB0;
  if ( g_144980DB0 )
  {
    iteration_count = 0;
    if ( (int)g_144980DA8 > 0 )
    {
      record_byte_offset = 0;
      do
      {
        free(*(void **)&allocation_buffer[record_byte_offset]);
        allocation_buffer = *(char **)&g_144980DB0;
        record_byte_offset += 8;
        ++iteration_count;
      }
      while ( iteration_count < (int)g_144980DA8 );
    }
    free(allocation_buffer);
    g_144980DB0 = 0;
  }
}

//----- (00000001400959E0) ----------------------------------------------------
unsigned __int64            sub_1400959E0(char *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char *text_cursor;
  int i;
  int element_index;
  char *running_total;
  int element_index_2;
  char *record_byte_offset;

  text_cursor = a1;
  switch ( a2 )
  {
    case 1LL:
      for ( i = 0; i < a3; ++text_cursor )
      {
        sub_14020BCA8(*text_cursor, a4);
        ++i;
      }
      break;
    case 2LL:
      element_index = 0;
      if ( a3 )
      {
        running_total = a1 + 1;
        do
        {
          sub_14020BCA8(*running_total, a4);
          sub_14020BCA8(text_cursor[2 * element_index++], a4);
          running_total += 2;
        }
        while ( element_index < a3 );
      }
      break;
    case 4LL:
      element_index_2 = 0;
      if ( a3 )
      {
        record_byte_offset = a1 + 2;
        do
        {
          sub_14020BCA8(record_byte_offset[1], a4);
          sub_14020BCA8(*record_byte_offset, a4);
          sub_14020BCA8(*(record_byte_offset - 1), a4);
          sub_14020BCA8(text_cursor[4 * element_index_2++], a4);
          record_byte_offset += 4;
        }
        while ( element_index_2 < a3 );
      }
      break;
  }
  return a3;
}

//----- (0000000140095FC0) ----------------------------------------------------
void            sub_140095FC0(__int64 a1, __int64 a2, __int64 a3)
{
  int iteration_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  unsigned int *state_address_3;

  if ( g_183EBFAA0 )
  {
    g_183EBFAA0 = 0;
    g_1AD04B1E0 = 0;
    g_183EBFD5C = 0;
    sub_140198F0B(0, a2, a3);
    if ( game_connected )
    {
      iteration_count = 0;
      state_address = &g_151620C60;
      do
      {
        if ( *state_address )
          sub_1400802F0(iteration_count);
        ++iteration_count;
        state_address += 3597;
      }
      while ( iteration_count < 256 );
    }
    else if ( !replay_active )
    {
      packet_out_data = dword_1402B2658;
      *(_QWORD *)&packet_out_byte = 5;
      LOBYTE(g_18539D408) = 7;
      sub_140130350(g_1AD04B1D4, g_1AD04B1D8, *(__int64 *)&g_1AD04B1E0);
    }
    state_address_2 = &g_15F2D9200;
    do
    {
      *state_address_2 = 0;
      state_address_2 += 5210;
    }
    while ( (__int64)state_address_2 < (__int64)&g_15FD06200 );
    state_address_3 = &g_140654DB4;
    do
    {
      if ( *(state_address_3 - 278721) && !*(state_address_3 - 278720) )
        *(state_address_3 - 278720) = 1;
      if ( *(state_address_3 - 1) && !*state_address_3 )
        *state_address_3 = 1;
      if ( state_address_3[278719] && !state_address_3[278720] )
        state_address_3[278720] = 1;
      if ( state_address_3[557439] && !state_address_3[557440] )
        state_address_3[557440] = 1;
      if ( state_address_3[836159] && !state_address_3[836160] )
        state_address_3[836160] = 1;
      if ( state_address_3[1114879] && !state_address_3[1114880] )
        state_address_3[1114880] = 1;
      if ( state_address_3[1393599] && !state_address_3[1393600] )
        state_address_3[1393600] = 1;
      if ( state_address_3[1672319] && !state_address_3[1672320] )
        state_address_3[1672320] = 1;
      if ( state_address_3[1951039] && !state_address_3[1951040] )
        state_address_3[1951040] = 1;
      if ( state_address_3[2229759] && !state_address_3[2229760] )
        state_address_3[2229760] = 1;
      if ( state_address_3[2508479] && !state_address_3[2508480] )
        state_address_3[2508480] = 1;
      if ( state_address_3[2787199] && !state_address_3[2787200] )
        state_address_3[2787200] = 1;
      if ( state_address_3[3065919] && !state_address_3[3065920] )
        state_address_3[3065920] = 1;
      if ( state_address_3[3344639] && !state_address_3[3344640] )
        state_address_3[3344640] = 1;
      if ( state_address_3[3623359] && !state_address_3[3623360] )
        state_address_3[3623360] = 1;
      if ( state_address_3[3902079] && !state_address_3[3902080] )
        state_address_3[3902080] = 1;
      if ( state_address_3[4180799] && !state_address_3[4180800] )
        state_address_3[4180800] = 1;
      if ( state_address_3[4459519] && !state_address_3[4459520] )
        state_address_3[4459520] = 1;
      if ( state_address_3[4738239] && !state_address_3[4738240] )
        state_address_3[4738240] = 1;
      if ( state_address_3[5016959] && !state_address_3[5016960] )
        state_address_3[5016960] = 1;
      if ( state_address_3[5295679] && !state_address_3[5295680] )
        state_address_3[5295680] = 1;
      if ( state_address_3[5574399] && !state_address_3[5574400] )
        state_address_3[5574400] = 1;
      if ( state_address_3[5853119] && !state_address_3[5853120] )
        state_address_3[5853120] = 1;
      if ( state_address_3[6131839] && !state_address_3[6131840] )
        state_address_3[6131840] = 1;
      if ( state_address_3[6410559] && !state_address_3[6410560] )
        state_address_3[6410560] = 1;
      if ( state_address_3[6689279] && !state_address_3[6689280] )
        state_address_3[6689280] = 1;
      if ( state_address_3[6967999] && !state_address_3[6968000] )
        state_address_3[6968000] = 1;
      if ( state_address_3[7246719] && !state_address_3[7246720] )
        state_address_3[7246720] = 1;
      if ( state_address_3[7525439] && !state_address_3[7525440] )
        state_address_3[7525440] = 1;
      if ( state_address_3[7804159] && !state_address_3[7804160] )
        state_address_3[7804160] = 1;
      if ( state_address_3[8082879] && !state_address_3[8082880] )
        state_address_3[8082880] = 1;
      if ( state_address_3[8361599] )
      {
        if ( !state_address_3[8361600] )
          state_address_3[8361600] = 1;
      }
      state_address_3 += 8919040;
    }
    while ( (__int64)state_address_3 < (__int64)&g_144A60DB4 );
  }
}

// 14009701D: conditional instruction was optimized away because ecx.4<1

//----- (000000014009A370) ----------------------------------------------------
__int64            sub_14009A370(int a1)
{
  __int64 record_word_offset;
  __int64 result;
  int table_value;
  int *state_address;
  int iteration_count;
  int iteration_count_2;
  int *state_address_2;
  void **allocated_buffer;
  int iteration_count_3;
  int loaded_word;
  int running_total;
  int iteration_count_4;
  int running_total_2;
  unsigned int integer_sum;
  unsigned int running_total_3;
  unsigned int running_total_4;
  unsigned int hibyte_result;
  int iteration_count_5;
  __int64 masked_bits;
  int shifted_bits;
  __int64 integer_sum_2;
  unsigned int loaded_word_2;
  unsigned int integer_sum_3;
  unsigned int hibyte_result_2;
  unsigned int loaded_word_3;
  int shifted_bits_2;
  __int64 shifted_bits_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009A370[128];
#define saved_state_address (*(int * (*))(void *)(sr_frame_14009A370 + 0)) /* [rsp+20h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_14009A370 + 96)) /* [rsp+80h] */
#define saved_allocated_buffer (*(void ** (*))(void *)(sr_frame_14009A370 + 104)) /* [rsp+88h] */
#define state_address_3 (*(unsigned int * (*))(void *)(sr_frame_14009A370 + 120)) /* [rsp+98h] */

  record_word_offset = 44LL * a1;
  result = dword_140404A6C[record_word_offset + 284024936] - 6407;
  if ( (unsigned int)result <= 1 )
  {
    table_value = dword_140404A6C[record_word_offset + 284024933];
    state_address = (int *)&dword_140404A6C[record_word_offset + 284024933];
    iteration_count = 1;
    state_address_3 = &dword_140404A6C[record_word_offset + 284024933];
    iteration_count_2 = 1;
    saved_iteration_count = 1;
    if ( (table_value & 0xFFFFFFFE) != 0 )
    {
      do
        result = (unsigned int)(table_value >> ++iteration_count_2);
      while ( (_DWORD)result );
      saved_iteration_count = iteration_count_2;
    }
    dword_140404A6C[record_word_offset + 284024935] = iteration_count_2;
    if ( iteration_count_2 > 1 )
    {
      state_address_2 = (int *)&dword_140404A6C[record_word_offset + 284024934];
      allocated_buffer = (void **)&dword_140404A6C[record_word_offset + 284024947];
      saved_state_address = state_address_2;
      saved_allocated_buffer = allocated_buffer;
      do
      {
        free(*allocated_buffer);
        *allocated_buffer = (void *)sr_path_malloc(4 * (*state_address >> iteration_count) * (*state_address_2 >> iteration_count));
        iteration_count_3 = 0;
        result = (unsigned int)(*state_address_2 >> iteration_count);
        if ( (int)result > 0 )
        {
          loaded_word = *state_address;
          running_total = 0;
          do
          {
            iteration_count_4 = 0;
            if ( loaded_word >> iteration_count > 0 )
            {
              running_total_2 = 0;
              do
              {
                integer_sum = 0;
                running_total_3 = 0;
                running_total_4 = 0;
                hibyte_result = 0;
                iteration_count_5 = 0;
                masked_bits = *(__int64 *)((uintptr_t)allocated_buffer
                                 + (uintptr_t)&g_183F7CC00
                                 - (uintptr_t)&g_183F7CC38
                                 + 48);
                do
                {
                  shifted_bits = (running_total + iteration_count_5++) * (loaded_word >> (iteration_count - 1));
                  integer_sum_2 = running_total_2 + shifted_bits;
                  loaded_word_2 = *(_DWORD *)(masked_bits + 4 * integer_sum_2);
                  integer_sum_3 = (unsigned __int8)loaded_word_2 + integer_sum;
                  hibyte_result_2 = HIBYTE(loaded_word_2) + hibyte_result;
                  loaded_word_3 = *(_DWORD *)(masked_bits + 4 * integer_sum_2 + 4);
                  integer_sum = (unsigned __int8)loaded_word_3 + integer_sum_3;
                  running_total_3 += BYTE1(loaded_word_3) + (unsigned __int8)BYTE1(*(_DWORD *)(masked_bits + 4 * integer_sum_2));
                  hibyte_result = HIBYTE(loaded_word_3) + hibyte_result_2;
                  running_total_4 += BYTE2(loaded_word_3) + (unsigned __int8)BYTE2(*(_DWORD *)(masked_bits + 4 * integer_sum_2));
                }
                while ( iteration_count_5 < 2 );
                allocated_buffer = saved_allocated_buffer;
                running_total_2 += 2;
                shifted_bits_2 = (running_total_4 >> 2) + (hibyte_result >> 2 << 8);
                state_address = (int *)state_address_3;
                shifted_bits_3 = iteration_count_4 + iteration_count_3 * (loaded_word >> iteration_count);
                ++iteration_count_4;
                *((_DWORD *)*saved_allocated_buffer + shifted_bits_3) = (integer_sum >> 2) + (((running_total_3 >> 2) + (shifted_bits_2 << 8)) << 8);
                loaded_word = *state_address_3;
              }
              while ( iteration_count_4 < (int)*state_address_3 >> iteration_count );
              state_address_2 = saved_state_address;
            }
            result = (unsigned int)(*state_address_2 >> iteration_count);
            ++iteration_count_3;
            running_total += 2;
          }
          while ( iteration_count_3 < (int)result );
        }
        ++allocated_buffer;
        ++iteration_count;
        saved_allocated_buffer = allocated_buffer;
      }
      while ( iteration_count < saved_iteration_count );
    }
  }
  return result;
}

#undef saved_state_address
#undef saved_iteration_count
#undef saved_allocated_buffer
#undef state_address_3

//----- (000000014009B1A0) ----------------------------------------------------
void               sub_14009B1A0(int a1)
{
  BOOL *buffer_cursor;
  int iteration_count;
  __int64 input_value;
  int iteration_count_2;
  float component_delta;
  BOOL comparison_result;
  double component_delta_2;
  __int64 scaled_index;
  char *record_byte_offset;
  unsigned int i;
  char *text_cursor;
  __int64 remaining_count;
  int element_index;
  int masked_bits;
  int shifted_bits;
  bool comparison_result_2;
  signed int j;
  signed int k;
  __int64 scaled_index_2;
  signed int scaled_index_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009B1A0[1072];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14009B1A0 + 0)) /* [rsp+0h] */
#define callee_output_word (*(_DWORD (*)[256])(void *)(sr_frame_14009B1A0 + 32)) /* [rsp+20h] */
#define unused_frame_slot_1056 (*(__int64 (*))(void *)(sr_frame_14009B1A0 + 1056)) /* [rsp+420h] */

  buffer_cursor = callee_output_word;
  iteration_count = 0;
  input_value = a1;
  do
  {
    iteration_count_2 = 0;
    component_delta = (float)iteration_count - 7.5;
    do
    {
      comparison_result = (float)((float)((float)((float)iteration_count_2 - 7.5) * (float)((float)iteration_count_2 - 7.5)) + (float)(component_delta * component_delta)) <= 36.0;
      *buffer_cursor = comparison_result;
      component_delta_2 = sub_14023F704(component_delta, (float)iteration_count_2 - 5.0);
      if ( component_delta_2 > -0.5890486225480862 )
      {
        if ( component_delta_2 < 0.5890486225480862 )
          comparison_result = 0;
        *buffer_cursor = comparison_result;
      }
      ++iteration_count_2;
      ++buffer_cursor;
    }
    while ( iteration_count_2 < 16 );
    ++iteration_count;
  }
  while ( iteration_count < 16 );
  scaled_index = 44 * input_value;
  g_1B0037420 = 128;
  g_1B0037424 = 128;
  dword_140404A6C[scaled_index + 284024933] = 128;
  dword_140404A6C[scaled_index + 284024934] = 128;
  dword_140404A6C[scaled_index + 284024935] = 1;
  dword_140404A6C[scaled_index + 284024936] = 6408;
  dword_140404A6C[scaled_index + 284024937] = 6408;
  dword_140404A6C[scaled_index + 284024943] = 0;
  dword_140404A6C[scaled_index + 284024938] = 10497;
  dword_140404A6C[scaled_index + 284024939] = 10497;
  dword_140404A6C[scaled_index + 284024940] = 9728;
  dword_140404A6C[scaled_index + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * input_value + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index + 284024945] = sr_path_malloc((int)(4
                                                                   * dword_140404A6C[scaled_index + 284024933]
                                                                   * dword_140404A6C[scaled_index + 284024934]));
  record_byte_offset = (char *)&unk_1402B2410;
  for ( i = 0; (int)i < 256; ++i )
  {
    text_cursor = record_byte_offset;
    remaining_count = 8;
    element_index = 8 * (i >> 4);
    masked_bits = 8 * (i & 0xF);
    shifted_bits = -8 * (i >> 4);
    do
    {
      dword_140404A6C[masked_bits + 468765295 + g_1B0037420 * element_index] = 0;
      if ( (__int64)record_byte_offset < (__int64)((char *)&unk_1402B2410 + 0x140) /* 0x1402B2550, the end of the 8x8 font */ )
      {
        if ( *text_cursor < 0 )
          dword_140404A6C[masked_bits + 468765295 + g_1B0037420 * element_index] = -1;
        comparison_result_2 = (*text_cursor & 0x40) == 0;
        dword_140404A6C[masked_bits + 468765296 + g_1B0037420 * element_index] = 0;
        if ( !comparison_result_2 )
          dword_140404A6C[masked_bits + 468765296 + g_1B0037420 * element_index] = -1;
        comparison_result_2 = (*text_cursor & 0x20) == 0;
        dword_140404A6C[masked_bits + 468765297 + g_1B0037420 * element_index] = 0;
        if ( !comparison_result_2 )
          dword_140404A6C[masked_bits + 468765297 + g_1B0037420 * element_index] = -1;
        comparison_result_2 = (*text_cursor & 0x10) == 0;
        dword_140404A6C[masked_bits + 468765298 + g_1B0037420 * element_index] = 0;
        if ( !comparison_result_2 )
          dword_140404A6C[masked_bits + 468765298 + g_1B0037420 * element_index] = -1;
        comparison_result_2 = (*text_cursor & 8) == 0;
        dword_140404A6C[masked_bits + 468765299 + g_1B0037420 * element_index] = 0;
        if ( !comparison_result_2 )
          dword_140404A6C[masked_bits + 468765299 + g_1B0037420 * element_index] = -1;
        comparison_result_2 = (*text_cursor & 4) == 0;
        dword_140404A6C[masked_bits + 468765300 + g_1B0037420 * element_index] = 0;
        if ( !comparison_result_2 )
          dword_140404A6C[masked_bits + 468765300 + g_1B0037420 * element_index] = -1;
        comparison_result_2 = (*text_cursor & 2) == 0;
        dword_140404A6C[masked_bits + 468765301 + g_1B0037420 * element_index] = 0;
        if ( !comparison_result_2 )
          dword_140404A6C[masked_bits + 468765301 + g_1B0037420 * element_index] = -1;
        comparison_result_2 = (*text_cursor & 1) == 0;
        dword_140404A6C[masked_bits + 468765302 + g_1B0037420 * element_index] = 0;
        goto LABEL_50;
      }
      if ( (__int64)record_byte_offset < (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ && callee_output_word[16 * (element_index + shifted_bits + 8 * ((i >> 1) & 1)) + 8 * (i & 1)] )
      {
        dword_140404A6C[masked_bits + 468765295 + g_1B0037420 * element_index] = -1;
        dword_140404A6C[masked_bits + 468765296 + g_1B0037420 * element_index] = 0;
      }
      else
      {
        dword_140404A6C[masked_bits + 468765296 + g_1B0037420 * element_index] = 0;
        if ( (__int64)record_byte_offset >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_33;
      }
      if ( callee_output_word[16 * (element_index + shifted_bits + 8 * ((i >> 1) & 1)) + 1 + 8 * (i & 1)] )
      {
        dword_140404A6C[masked_bits + 468765296 + g_1B0037420 * element_index] = -1;
        dword_140404A6C[masked_bits + 468765297 + g_1B0037420 * element_index] = 0;
        goto LABEL_34;
      }
LABEL_33:
      dword_140404A6C[masked_bits + 468765297 + g_1B0037420 * element_index] = 0;
      if ( (__int64)record_byte_offset >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_36;
LABEL_34:
      if ( !callee_output_word[16 * (element_index + shifted_bits + 8 * ((i >> 1) & 1)) + 2 + 8 * (i & 1)] )
      {
LABEL_36:
        dword_140404A6C[masked_bits + 468765298 + g_1B0037420 * element_index] = 0;
        if ( (__int64)record_byte_offset >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_39;
        goto LABEL_37;
      }
      dword_140404A6C[masked_bits + 468765297 + g_1B0037420 * element_index] = -1;
      dword_140404A6C[masked_bits + 468765298 + g_1B0037420 * element_index] = 0;
LABEL_37:
      if ( callee_output_word[16 * (element_index + shifted_bits + 8 * ((i >> 1) & 1)) + 3 + 8 * (i & 1)] )
      {
        dword_140404A6C[masked_bits + 468765298 + g_1B0037420 * element_index] = -1;
        dword_140404A6C[masked_bits + 468765299 + g_1B0037420 * element_index] = 0;
        goto LABEL_40;
      }
LABEL_39:
      dword_140404A6C[masked_bits + 468765299 + g_1B0037420 * element_index] = 0;
      if ( (__int64)record_byte_offset >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_42;
LABEL_40:
      if ( !callee_output_word[16 * (element_index + shifted_bits + 8 * ((i >> 1) & 1)) + 4 + 8 * (i & 1)] )
      {
LABEL_42:
        dword_140404A6C[masked_bits + 468765300 + g_1B0037420 * element_index] = 0;
        if ( (__int64)record_byte_offset >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_45;
        goto LABEL_43;
      }
      dword_140404A6C[masked_bits + 468765299 + g_1B0037420 * element_index] = -1;
      dword_140404A6C[masked_bits + 468765300 + g_1B0037420 * element_index] = 0;
LABEL_43:
      if ( callee_output_word[16 * (element_index + shifted_bits + 8 * ((i >> 1) & 1)) + 5 + 8 * (i & 1)] )
      {
        dword_140404A6C[masked_bits + 468765300 + g_1B0037420 * element_index] = -1;
        dword_140404A6C[masked_bits + 468765301 + g_1B0037420 * element_index] = 0;
        goto LABEL_46;
      }
LABEL_45:
      dword_140404A6C[masked_bits + 468765301 + g_1B0037420 * element_index] = 0;
      if ( (__int64)record_byte_offset >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_48;
LABEL_46:
      if ( !callee_output_word[16 * (element_index + shifted_bits + 8 * ((i >> 1) & 1)) + 6 + 8 * (i & 1)] )
      {
LABEL_48:
        dword_140404A6C[masked_bits + 468765302 + g_1B0037420 * element_index] = 0;
        if ( (__int64)record_byte_offset >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_52;
        goto LABEL_49;
      }
      dword_140404A6C[masked_bits + 468765301 + g_1B0037420 * element_index] = -1;
      dword_140404A6C[masked_bits + 468765302 + g_1B0037420 * element_index] = 0;
LABEL_49:
      comparison_result_2 = callee_output_word[16 * (element_index + shifted_bits + 8 * ((i >> 1) & 1)) + 7 + 8 * (i & 1)] == 0;
LABEL_50:
      if ( !comparison_result_2 )
        dword_140404A6C[masked_bits + 468765302 + g_1B0037420 * element_index] = -1;
LABEL_52:
      ++element_index;
      ++text_cursor;
      --remaining_count;
    }
    while ( remaining_count );
    record_byte_offset += 8;
  }
  for ( j = 0; j < (int)dword_140404A6C[scaled_index + 284024934]; ++j )
  {
    for ( k = 0;
          k < (int)dword_140404A6C[scaled_index + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index + 284024945] + 4LL * scaled_index_3) = dword_140404A6C[scaled_index_2 + 468765295] )
    {
      scaled_index_2 = k + j * g_1B0037420;
      scaled_index_3 = k + j * dword_140404A6C[scaled_index + 284024933];
      ++k;
    }
  }
  sub_14014D3E0(input_value, 0);
  return; /* native cookie verifies compiler stack layout, not atlas data */
}

#undef unused_frame_slot_0
#undef callee_output_word
#undef unused_frame_slot_1056

//----- (000000014009B9F0) ----------------------------------------------------
double            sub_14009B9F0(int a1)
{
  unsigned int state_word;
  int state_word_2;
  __int64 input_value;
  signed int state_word_3;
  int iteration_count;
  __int64 scaled_index;
  int iteration_count_2;
  float scaled_value;
  unsigned int abs32_result;
  float scaled_value_2;
  float scaled_value_3;
  float absolute_value;
  float absolute_value_2;
  float absolute_value_3;
  float absolute_value_4;
  float sine_value;
  float weighted_sum;
  float saved_weighted_sum;
  float saved_weighted_sum_2;
  float scaled_value_4;
  float saved_scaled_value;
  int saved_component_sum;
  int saved_weighted_sum_3;
  int saved_component_sum_2;
  int shifted_bits;
  int scaled_index_2;
  __int64 scaled_index_3;
  __int64 allocated_buffer;
  signed int iteration_count_3;
  signed int i;
  __int64 scaled_index_4;
  signed int scaled_index_5;

  state_word = g_1862AE010;
  state_word_2 = 128;
  input_value = a1;
  state_word_3 = 128;
  iteration_count = 0;
  scaled_index = (int)dword_140404A6C[4 * input_value + 283827814];
  g_1B0037420 = 128;
  g_1B0037424 = 128;
  do
  {
    iteration_count_2 = 0;
    if ( state_word_2 > 0 )
    {
      scaled_value = (float)iteration_count * 0.25;
      abs32_result = abs32(32 - (iteration_count & 0x3F));
      scaled_value_2 = scaled_value * 0.5;
      do
      {
        scaled_value_3 = (float)iteration_count_2 * 0.25;
        absolute_value = fabs(SR_VEC_READ_LANES(128, sub_1400384F0(scaled_value_3 * 0.5, scaled_value_2, 15), f32)[0]) * 0.5;
        absolute_value_2 = absolute_value + fabs(SR_VEC_READ_LANES(128, sub_1400384F0(scaled_value_3, scaled_value, 31), f32)[0]);
        absolute_value_3 = absolute_value_2 + (float)(fabs(SR_VEC_READ_LANES(128, sub_1400384F0((float)iteration_count_2 * 0.0625, scaled_value * 0.25, 7), f32)[0]) * 0.25);
        absolute_value_4 = absolute_value_3 + (float)(fabs(SR_VEC_READ_LANES(128, sub_1400384F0((float)iteration_count_2 * 0.03125, scaled_value * 0.125, 3), f32)[0]) * 0.125);
        sine_value = sin((float)((float)(0.015625 / absolute_value_4) + (float)(0.015625 / absolute_value_4)) * 3.14159265359) * 32.0;
        if ( (int)(abs32_result + abs32(32 - (iteration_count_2 & 0x3F))) >= 32 )
        {
          scaled_value_4 = sine_value * 0.25;
          weighted_sum = (float)(sine_value * 0.125) + 56.0;
          saved_scaled_value = scaled_value_4;
          saved_weighted_sum_2 = scaled_value_4 + 48.0;
          saved_weighted_sum = saved_scaled_value + 64.0;
        }
        else
        {
          weighted_sum = sine_value + 112.0;
          saved_weighted_sum = weighted_sum;
          saved_weighted_sum_2 = weighted_sum;
        }
        saved_component_sum = (int)saved_weighted_sum_2;
        saved_weighted_sum_3 = (int)weighted_sum;
        saved_component_sum_2 = (int)saved_weighted_sum;
        if ( state_word )
          shifted_bits = (saved_weighted_sum_3 << 16) + (saved_component_sum_2 << 24) + (saved_component_sum << 8) + 32;
        else
          shifted_bits = saved_component_sum_2 + (saved_weighted_sum_3 << 8) + 0x20000000 + (saved_component_sum << 16);
        scaled_value_2 = scaled_value * 0.5;
        scaled_index_2 = iteration_count_2 + iteration_count * state_word_2;
        ++iteration_count_2;
        dword_140404A6C[scaled_index_2 + 468765295] = shifted_bits;
        state_word_2 = g_1B0037420;
      }
      while ( iteration_count_2 < (int)g_1B0037420 );
      state_word_3 = g_1B0037424;
    }
    ++iteration_count;
  }
  while ( iteration_count < state_word_3 );
  scaled_index_3 = 44 * scaled_index;
  dword_140404A6C[scaled_index_3 + 284024933] = state_word_2;
  dword_140404A6C[scaled_index_3 + 284024934] = state_word_3;
  dword_140404A6C[scaled_index_3 + 284024935] = 1;
  dword_140404A6C[scaled_index_3 + 284024936] = 6408;
  dword_140404A6C[scaled_index_3 + 284024937] = 6408;
  dword_140404A6C[scaled_index_3 + 284024943] = 0;
  dword_140404A6C[scaled_index_3 + 284024938] = 10497;
  dword_140404A6C[scaled_index_3 + 284024939] = 10497;
  dword_140404A6C[scaled_index_3 + 284024940] = 9729;
  dword_140404A6C[scaled_index_3 + 284024941] = 9987;
  free(*(void **)&dword_140404A6C[44 * scaled_index + 284024945]);
  allocated_buffer = sr_path_malloc((int)(4 * dword_140404A6C[scaled_index_3 + 284024933] * dword_140404A6C[scaled_index_3 + 284024934]));
  iteration_count_3 = 0;
  *(_QWORD *)&dword_140404A6C[scaled_index_3 + 284024945] = allocated_buffer;
  if ( (int)dword_140404A6C[44 * scaled_index + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[scaled_index_3 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_3 + 284024945] + 4LL * scaled_index_5) = dword_140404A6C[scaled_index_4 + 468765295] )
      {
        scaled_index_4 = i + iteration_count_3 * g_1B0037420;
        scaled_index_5 = i + iteration_count_3 * dword_140404A6C[scaled_index_3 + 284024933];
        ++i;
      }
      ++iteration_count_3;
    }
    while ( iteration_count_3 < (int)dword_140404A6C[scaled_index_3 + 284024934] );
  }
  sub_14009A370(scaled_index);
  sub_14014D3E0(scaled_index, 1);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
}

//----- (000000014009BE40) ----------------------------------------------------
void            sub_14009BE40(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int state_word;
  __int64 input_value;
  unsigned int state_word_2;
  signed int state_word_3;
  signed int i;
  int iteration_count;
  int scaled_index;
  __int64 record_word_offset;
  unsigned int *state_address;
  unsigned int *state_address_2;
  void **saved_allocated_buffer;
  __int64 allocated_buffer;
  signed int iteration_count_2;
  signed int j;
  __int64 scaled_index_2;
  signed int scaled_index_3;

  state_word = 128;
  input_value = a1;
  g_1B0037420 = 128;
  state_word_2 = g_1862AE010;
  state_word_3 = 128;
  g_1B0037424 = 128;
  for ( i = 0; i < state_word_3; ++i )
  {
    iteration_count = 0;
    if ( state_word > 0 )
    {
      do
      {
        scaled_index = iteration_count + i * state_word;
        if ( state_word_2 )
          dword_140404A6C[scaled_index + 468765295] = -16711904;
        else
          dword_140404A6C[scaled_index + 468765295] = 553582847;
        state_word = g_1B0037420;
        ++iteration_count;
      }
      while ( iteration_count < (int)g_1B0037420 );
      state_word_3 = g_1B0037424;
    }
  }
  if ( state_word_2 )
  {
    g_1B0037428 = 1612720160;
    g_1B003742C = -425767648;
  }
  else
  {
    g_1B0037428 = 539500640;
    g_1B003742C = 541958118;
  }
  record_word_offset = 44LL * a1;
  state_address = &dword_140404A6C[44 * input_value + 284024934];
  state_address_2 = &dword_140404A6C[44 * input_value + 284024933];
  dword_140404A6C[record_word_offset + 284024940] = a5;
  *state_address = state_word_3;
  saved_allocated_buffer = (void **)&dword_140404A6C[44 * input_value + 284024945];
  *state_address_2 = state_word;
  dword_140404A6C[record_word_offset + 284024935] = 1;
  dword_140404A6C[record_word_offset + 284024936] = 6408;
  dword_140404A6C[record_word_offset + 284024937] = 6408;
  dword_140404A6C[record_word_offset + 284024943] = 0;
  dword_140404A6C[record_word_offset + 284024938] = a3;
  dword_140404A6C[record_word_offset + 284024939] = a4;
  dword_140404A6C[record_word_offset + 284024941] = a6;
  free(*saved_allocated_buffer);
  allocated_buffer = sr_path_malloc((int)(4 * *state_address_2 * *state_address));
  iteration_count_2 = 0;
  for ( *saved_allocated_buffer = (void *)allocated_buffer; iteration_count_2 < (int)*state_address; ++iteration_count_2 )
  {
    for ( j = 0; j < (int)*state_address_2; *((_DWORD *)*saved_allocated_buffer + scaled_index_3) = dword_140404A6C[scaled_index_2 + 468765295] )
    {
      scaled_index_2 = j + iteration_count_2 * g_1B0037420;
      scaled_index_3 = j + *state_address_2 * iteration_count_2;
      ++j;
    }
  }
  if ( a2 )
    sub_14009A370(input_value);
  sub_14014D3E0(input_value, 1);
}

//----- (000000014009D7A0) ----------------------------------------------------
double            sub_14009D7A0(int a1)
{
  int state_word;
  signed int state_word_2;
  signed int iteration_count;
  __int64 input_value;
  int iteration_count_2;
  int scaled_index;
  int scaled_index_2;
  double result;
  int masked_bits;
  int shifted_bits;
  unsigned int scaled_index_3;
  __int64 scaled_index_4;
  __int64 allocated_buffer;
  signed int iteration_count_3;
  signed int i;
  __int64 scaled_index_5;
  signed int scaled_index_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009D7A0[16];
#define float_buffer (*(float (*)[2])(void *)(sr_frame_14009D7A0 + 0)) /* [rsp+20h] */
#define frame_float_at_8 (*(float (*))(void *)(sr_frame_14009D7A0 + 8)) /* [rsp+28h] */

  state_word = 64;
  state_word_2 = 8;
  iteration_count = 0;
  input_value = a1;
  g_1B0037420 = 64;
  g_1B0037424 = 8;
  do
  {
    iteration_count_2 = 0;
    if ( state_word > 0 )
    {
      do
      {
        sr_human_random_direction(float_buffer, 0.0, 1.0);
        scaled_index = (int)(float)((float)(float_buffer[0] * 127.0) + 128.0);
        *(_QWORD *)&result = LODWORD(frame_float_at_8);
        scaled_index_2 = (int)(float)((float)(float_buffer[1] * 127.0) + 128.0);
        *(float *)&result = (float)(frame_float_at_8 * 127.0) + 128.0;
        masked_bits = (int)*(float *)&result;
        if ( g_1862AE010 )
          shifted_bits = (scaled_index_2 << 16) + (masked_bits << 8) + (scaled_index << 24) + 255;
        else
          shifted_bits = (scaled_index_2 << 8) - 0x1000000 + (masked_bits << 16) + scaled_index;
        scaled_index_3 = iteration_count_2 + iteration_count * g_1B0037420;
        ++iteration_count_2;
        dword_140404A6C[scaled_index_3 + 468765295] = shifted_bits;
        state_word = g_1B0037420;
      }
      while ( iteration_count_2 < (int)g_1B0037420 );
      state_word_2 = g_1B0037424;
    }
    ++iteration_count;
  }
  while ( iteration_count < state_word_2 );
  scaled_index_4 = 44 * input_value;
  dword_140404A6C[scaled_index_4 + 284024933] = state_word;
  dword_140404A6C[scaled_index_4 + 284024934] = state_word_2;
  dword_140404A6C[scaled_index_4 + 284024935] = 1;
  dword_140404A6C[scaled_index_4 + 284024936] = 6408;
  dword_140404A6C[scaled_index_4 + 284024937] = 6408;
  dword_140404A6C[scaled_index_4 + 284024943] = 0;
  dword_140404A6C[scaled_index_4 + 284024938] = 10497;
  dword_140404A6C[scaled_index_4 + 284024939] = 10497;
  dword_140404A6C[scaled_index_4 + 284024940] = 9728;
  dword_140404A6C[scaled_index_4 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * input_value + 284024945]);
  allocated_buffer = sr_path_malloc((int)(4 * dword_140404A6C[scaled_index_4 + 284024933] * dword_140404A6C[scaled_index_4 + 284024934]));
  iteration_count_3 = 0;
  *(_QWORD *)&dword_140404A6C[scaled_index_4 + 284024945] = allocated_buffer;
  if ( (int)dword_140404A6C[44 * input_value + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[scaled_index_4 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_4 + 284024945] + 4LL * scaled_index_6) = dword_140404A6C[scaled_index_5 + 468765295] )
      {
        scaled_index_5 = i + iteration_count_3 * g_1B0037420;
        scaled_index_6 = i + dword_140404A6C[scaled_index_4 + 284024933] * iteration_count_3;
        ++i;
      }
      ++iteration_count_3;
    }
    while ( iteration_count_3 < (int)dword_140404A6C[scaled_index_4 + 284024934] );
  }
  sub_14014D3E0(input_value, 1);
  return result;
}

#undef float_buffer
#undef frame_float_at_8

//----- (000000014009DE70) ----------------------------------------------------
__int64 sub_14009DE70()
{
  return (unsigned int)sub_14009DE80() >> 1;
}

//----- (000000014009DFB0) ----------------------------------------------------
double sub_14009DFB0()
{
  return (double)(int)sub_14009DE80() * 2.328306437080797e-10;
}

//----- (000000014009DFD0) ----------------------------------------------------
double sub_14009DFD0()
{
  return (double)(int)sub_14009DE80() * 2.328306436538696e-10;
}

//----- (000000014009DFF0) ----------------------------------------------------
double sub_14009DFF0()
{
  return ((double)(int)sub_14009DE80() + 0.5) * 2.328306436538696e-10;
}

//----- (000000014009E020) ----------------------------------------------------
double sub_14009E020()
{
  signed int shifted_bits;

  shifted_bits = (unsigned int)sub_14009DE80() >> 5;
  return ((double)((unsigned int)sub_14009DE80() >> 6) + (double)shifted_bits * 67108864.0) * 1.110223024625157e-16;
}

//----- (000000014009E070) ----------------------------------------------------
__int64 sub_14009E070()
{
  __int64 integer_sum;
  unsigned int state_word;
  __int64 state_word_2;
  __int64 call_result;
  __int64 graphics_query_result;
       __m128i *source_buffer;
  __int64 iteration_count;
  unsigned __int64 byte_count;
  __m128i *allocated_buffer;
  __m128i *saved_allocated_buffer;

  if ( (int)g_144980D98 < 3 )
  {
    g_144980DA0 = glGetString(7939);
    return 1;
  }
  integer_sum = 0;
  g_144980DA8 = 0;
  glGetIntegerv(33309, &g_144980DA8);
  state_word = g_144980DA8;
  state_word_2 = g_144980DB0;
  if ( (int)g_144980DA8 > 0 )
  {
    call_result = j__realloc_base_sr(g_144980DB0, 8LL * (int)g_144980DA8);
    state_word_2 = call_result;
    if ( !call_result )
      return 0;
    g_144980DB0 = call_result;
    state_word = g_144980DA8;
  }
  if ( !state_word_2 )
    return 0;
  if ( state_word )
  {
    do
    {
      graphics_query_result = glGetStringi(7939, (unsigned int)integer_sum);
      source_buffer = (     __m128i *)graphics_query_result;
      iteration_count = -1;
      while ( *(_BYTE *)(graphics_query_result + iteration_count++ + 1) != 0 )
        ;
      byte_count = iteration_count + 1;
      allocated_buffer = (__m128i *)sr_path_malloc(iteration_count + 1);
      saved_allocated_buffer = allocated_buffer;
      if ( allocated_buffer )
        crt_memcpy(allocated_buffer, source_buffer, byte_count);
      *(_QWORD *)(g_144980DB0 + 8 * integer_sum) = (uint64)(uintptr_t)(saved_allocated_buffer);
      integer_sum = (unsigned int)(integer_sum + 1);
    }
    while ( (unsigned int)integer_sum < g_144980DA8 );
  }
  return 1;
}

//----- (000000014009E190) ----------------------------------------------------
__int64            sub_14009E190(__int64 a1)
{
  __int64 state_word;
  __int64 result;

  state_word = g_144980D88;
  if ( !g_144980D88 )
    return 0;
  if ( g_144980D90 )
  {
    result = (*(__int64 (           **)(__int64))(unsigned int *)&g_144980D90)(a1);
    if ( result )
      return result;
    state_word = g_144980D88;
  }
  return ((__int64 (           *)(__int64, __int64))GetProcAddress)(state_word, a1);
}

// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored

//----- (000000014009E590) ----------------------------------------------------
int sub_14009E590()
{
  unsigned __int64 shifted_bits;
  __int64 cached_frequency;
  __int64 Frequency;

  g_182A7D548 = 1000000000;
  LODWORD(shifted_bits) = QueryPerformanceFrequency((LARGE_INTEGER *)&Frequency);
  cached_frequency = g_182A7D548;
  if ( (_DWORD)shifted_bits )
    cached_frequency = Frequency;
  g_182A7D548 = cached_frequency;
  if ( cached_frequency )
  {
    if ( cached_frequency < 0 )
    {
      shifted_bits = cached_frequency & 1 | ((unsigned __int64)cached_frequency >> 1);
      *(double *)&g_182A7D550 = 1000.0 / ((double)(long long)shifted_bits + (double)(long long)shifted_bits);
    }
    else
    {
      *(double *)&g_182A7D550 = 1000.0 / (double)(long long)cached_frequency;
    }
  }
  else
  {
    g_182A7D550 = 0;
  }
  return shifted_bits;
}

//----- (000000014009E7D0) ----------------------------------------------------
void            sub_14009E7D0(float *a1, __int64 a2)
{
  float weighted_sum;
  double reordered_vector;
  __int64 unrecovered_register_value;
  __m128 call_result;

  weighted_sum = sub_14023F704(*(float *)(a2 + 4), *(float *)(a2 + 16));
  *a1 = weighted_sum;
  *(_QWORD *)&reordered_vector = *(unsigned int *)(a2 + 24);
  *(float *)&reordered_vector = (float)(*(float *)&reordered_vector * *(float *)&reordered_vector) + (float)(*(float *)(a2 + 32) * *(float *)(a2 + 32));
  a1[1] = sub_14023F704(-*(float *)(a2 + 28), fsqrt(*(float *)&reordered_vector));
  call_result = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(weighted_sum)), unrecovered_register_value, reordered_vector);
  *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result, call_result, 1), f32)[0];
  a1[2] = sub_14023F704(
            (float)(SR_VEC_LANES(128, call_result, f32)[0] * *(float *)(a2 + 20)) - (float)(*(float *)&reordered_vector * *(float *)(a2 + 8)),
            (float)(*(float *)&reordered_vector * *(float *)a2) - (float)(SR_VEC_LANES(128, call_result, f32)[0] * *(float *)(a2 + 12)));
}

//----- (000000014009E880) ----------------------------------------------------
__int64            sub_14009E880(float *a1, float *a2)
{
  float source_float_6;
  float source_float_4;
  float source_float_7;
  double angle;
  float source_float_8;
  double angle_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009E880[80];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14009E880 + 0)) /* [rsp+0h] */
#define axis (*(__int128 (*))(void *)(sr_frame_14009E880 + 32)) /* [rsp+20h] */
#define frame_float_at_48 (*(float (*))(void *)(sr_frame_14009E880 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14009E880 + 52)) /* [rsp+34h] */
#define axis_2 (*(float (*)[2])(void *)(sr_frame_14009E880 + 56)) /* [rsp+38h] */
#define frame_float_at_64 (*(float (*))(void *)(sr_frame_14009E880 + 64)) /* [rsp+40h] */
#define unused_frame_slot_72 (*(__int64 (*))(void *)(sr_frame_14009E880 + 72)) /* [rsp+48h] */

  source_float_6 = a2[6];
  source_float_4 = a2[4];
  source_float_7 = a2[7];
  axis = *(_OWORD *)a2;
  *(_QWORD *)&angle = *((unsigned int *)a2 + 5);
  axis_2[0] = source_float_6;
  source_float_8 = a2[8];
  unused_written_slot = LODWORD(angle);
  frame_float_at_48 = source_float_4;
  axis_2[1] = source_float_7;
  frame_float_at_64 = source_float_8;
  *(float *)&angle = sub_14023F704(*(float *)&angle, source_float_4);
  *a1 = *(float *)&angle;
  sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, angle);
  *(_QWORD *)&angle_2 = HIDWORD(axis) ^ 0x8000000080000000uLL;
  *(float *)&angle_2 = sub_14023F704(*(float *)&angle_2, frame_float_at_48);
  a1[2] = *(float *)&angle_2;
  sr_math_mat3_rotate_rows((__int64)&axis, axis_2, angle_2);
  a1[1] = sub_14023F704(axis_2[0], frame_float_at_64);
  return 0; /* the function has no caller */
}

#undef unused_frame_slot_0
#undef axis
#undef frame_float_at_48
#undef unused_written_slot
#undef axis_2
#undef frame_float_at_64
#undef unused_frame_slot_72

//----- (000000014009E950) ----------------------------------------------------
float            sub_14009E950(__int64 a1, __int64 a2, double a3)
{
  int i;
  char masked_bits;
  int iteration_count;
  __int64 iteration_count_2;
  char masked_bits_2;
  float unused_local;

  for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
  {
    masked_bits = *((_BYTE *)&g_1862AE028 + i);
    if ( masked_bits != 47 && masked_bits > 44 && masked_bits < 58 )
      break;
  }
  iteration_count = 0;
  if ( i < (int)g_1862AE024 )
  {
    iteration_count_2 = 0;
    do
    {
      if ( iteration_count_2 >= 255 )
        break;
      masked_bits_2 = *((_BYTE *)&g_1862AE028 + i);
      if ( (unsigned __int8)(masked_bits_2 - 48) > 9u && (unsigned __int8)(masked_bits_2 - 45) > 1u )
        break;
      *((_BYTE *)&g_1863AE028 + iteration_count_2) = masked_bits_2;
      ++iteration_count;
      ++iteration_count_2;
      i = ++g_1862AE020;
    }
    while ( (int)g_1862AE020 < (int)g_1862AE024 );
  }
  *((_BYTE *)&g_1863AE028 + iteration_count) = 0;
  crt_sscanf((__int64)&g_1863AE028, "%f", a3);
  return unused_local;
}

//----- (000000014009EA20) ----------------------------------------------------
void            sub_14009EA20(int a1, int a2)
{
  signed int integer_difference;
  __int64 input_value;
  __int64 human_record_offset;
  unsigned int byte1_result;
  __int64 scaled_index;
  unsigned int state_word;
  unsigned int state_word_2;

  if ( a2 != -1 )
  {
    integer_difference = -1;
    input_value = a1;
    human_record_offset = 7166LL * a2;
    if ( (int)dword_140404A6C[human_record_offset + 280658139] > 0 )
      integer_difference = dword_140404A6C[human_record_offset + 280658140];
    byte1_result = 0;
    if ( !g_18329B180 )
      byte1_result = BYTE1(g_183F7CA40) != 0;
    if ( !g_151E46200 )
    {
      byte1_result = 3;
      if ( BYTE1(g_183F7CA40) )
        byte1_result = 2;
    }
    if ( !g_18329B180 )
    {
      if ( !BYTE1(g_183F7C974) && BYTE1(g_183F7C774) )
        sub_140116B00(input_value, 1u, byte1_result, byte1_result ^ 1);
      if ( LOBYTE(g_183F7C968) && !LOBYTE(g_183F7C768) )
        sub_140116B00(input_value, 8u, byte1_result, byte1_result ^ 1);
      if ( integer_difference == -1
        || (scaled_index = 1760LL * integer_difference, ((dword_140404A6C[scaled_index + 278845898] - 25) & 0xFFFFFFF7) != 0)
        || dword_140404A6C[scaled_index + 278846052] != 1 )
      {
        if ( !BYTE2(g_183F7C97C) && BYTE2(g_183F7C77C) )
        {
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 3;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 3;
          dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = byte1_result;
          dword_140404A6C[3597 * input_value + 71856370 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 0;
          dword_140404A6C[3597 * input_value + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * input_value + 71856362] + 1) & 0x3F;
        }
        if ( !HIBYTE(g_183F7C97C) && HIBYTE(g_183F7C77C) )
        {
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 3;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 4;
          dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = byte1_result;
          dword_140404A6C[3597 * input_value + 71856370 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 0;
          dword_140404A6C[3597 * input_value + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * input_value + 71856362] + 1) & 0x3F;
        }
        if ( !LOBYTE(g_183F7C980) && LOBYTE(g_183F7C780) )
        {
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 3;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 5;
          dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = byte1_result;
          dword_140404A6C[3597 * input_value + 71856370 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 0;
          dword_140404A6C[3597 * input_value + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * input_value + 71856362] + 1) & 0x3F;
        }
        if ( !BYTE1(g_183F7C980) && BYTE1(g_183F7C780) )
        {
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 3;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 6;
          dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = byte1_result;
          dword_140404A6C[3597 * input_value + 71856370 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 0;
          dword_140404A6C[3597 * input_value + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * input_value + 71856362] + 1) & 0x3F;
        }
        if ( !BYTE2(g_183F7C980) && BYTE2(g_183F7C780) )
        {
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 3;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 7;
          dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = byte1_result;
          dword_140404A6C[3597 * input_value + 71856370 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 0;
          dword_140404A6C[3597 * input_value + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * input_value + 71856362] + 1) & 0x3F;
        }
      }
      state_word = g_18329CC38;
      if ( g_18329CC38 )
      {
        if ( g_183F7C754 )
        {
          if ( !g_183F7C6B4 )
            state_word = 0;
          g_18329CC38 = state_word;
        }
      }
      else if ( g_18329CC3C )
      {
        dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 3;
        dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
        dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = byte1_result;
        dword_140404A6C[3597 * input_value + 71856370 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = -1;
        dword_140404A6C[3597 * input_value + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * input_value + 71856362] + 1) & 0x3F;
      }
      if ( g_18329CC2C || state_word )
      {
        state_word_2 = g_18329CC48;
      }
      else
      {
        if ( !g_183F7C750 )
        {
LABEL_49:
          g_18329CC48 = 0;
          return;
        }
        state_word_2 = g_18329CC48;
        if ( !g_183F7C6B0 )
          state_word_2 = 1;
        g_18329CC48 = state_word_2;
      }
      if ( !g_183F7C750 )
        goto LABEL_49;
      if ( state_word_2 )
        dword_140404A6C[3597 * input_value + 71856325] |= 1u;
    }
  }
}

//----- (000000014009F050) ----------------------------------------------------
__int64            sub_14009F050(int a1, __int64 a2, double a3)
{
  unsigned int option_flags;
  __int64 input_value;
  int selection_flag;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  int masked_bits;
  unsigned int state_word;
  int state_word_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 table_value;
  __int64 remaining_count;
  __int64 state_address;
  unsigned int *record_byte_offset;
  __int128 loaded_word;
  __int128 loaded_word_2;
  __int128 loaded_word_3;
  __int128 loaded_word_4;
  __int128 loaded_word_5;
  __int128 loaded_word_6;
  __int128 loaded_word_7;
  __int128 loaded_word_8;
  __int64 loaded_word_9;
  int iteration_count;
  __int128 loaded_word_10;
  __int128 loaded_word_11;
  __int128 loaded_word_12;
  unsigned int *state_address_2;
  int scaled_index_3;
  unsigned int state_word_3;
  unsigned int state_word_4;
  unsigned int cached_game_single_step;
  int state_word_5;
  int state_word_6;
  char byte1_result;
  __int64 scaled_index_4;
  float weighted_sum;
  float scaled_value;
  __int64 scaled_index_5;
  float weighted_sum_2;
  float scaled_value_2;
  char state_word_7;
  unsigned __int8 saved_state_word;
  unsigned int integer_sum;
  int cached_state_word;
  char integer_difference;
  __int64 scaled_index_6;
  int table_value_2;
  unsigned int table_value_3;
  char table_value_4;
  unsigned int cached_game_type;
  unsigned int state_word_8;
  unsigned int xor_value;
  unsigned __int8 integer_difference_2;
  unsigned int integer_sum_2;
  __int64 scaled_index_7;
  char integer_difference_3;
  unsigned __int8 saved_state_word_2;
  unsigned int integer_sum_3;
  int cached_state_word_2;
  __int64 scaled_index_8;
  char integer_difference_4;
  __int64 state_word_9;
  char masked_bits_2;
  __int64 table_value_5;
  __int64 masked_bits_3;
  __int64 lookup_index;
  __int64 scaled_index_9;
  unsigned int table_value_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009F050[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14009F050 + 0)) /* [rsp+0h] */
#define input_value_2 (*(int (*))(void *)(sr_frame_14009F050 + 32)) /* [rsp+20h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_14009F050 + 36)) /* [rsp+24h] */
#define callee_output_word_2 (*(__int64 (*))(void *)(sr_frame_14009F050 + 40)) /* [rsp+28h] */
#define axis (*(__int128 (*))(void *)(sr_frame_14009F050 + 48)) /* [rsp+30h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_14009F050 + 64)) /* [rsp+40h] */
#define frame_float_at_80 (*(float (*))(void *)(sr_frame_14009F050 + 80)) /* [rsp+50h] */
#define unused_frame_slot_88 (*(__int64 (*))(void *)(sr_frame_14009F050 + 88)) /* [rsp+58h] */

  option_flags = 0;
  input_value = a1;
  input_value_2 = a1;
  renderer_current_font = 2;
  if ( g_183EBFAA8 == 1 )
  {
    g_18329CC24 = 1;
    selection_flag = 1;
    g_183EBFD5C = 0;
  }
  else
  {
    g_183EBFD5C = 1;
    selection_flag = 0;
    if ( !g_183EBFAA8 && a1 != -1 && g_18329CC24 )
      sub_140118B70(a1);
  }
  sub_14003A0F0();
  g_183F7C6B8 = g_183F7C758;
  g_183F7C620 = *(_OWORD *)&g_183F7C6C0;
  g_183F7C630 = g_183F7C6D0;
  g_183F7C640 = g_183F7C6E0;
  g_183F7C650 = g_183F7C6F0;
  g_183F7C660 = g_183F7C700;
  g_183F7C670 = g_183F7C710;
  g_183F7C680 = g_183F7C720;
  g_183F7C690 = g_183F7C730;
  g_183F7C6A0 = g_183F7C740;
  *(_QWORD *)&g_183F7C6B0 = *(_QWORD *)&g_183F7C750;
  g_183F7C758 = sr_menu_relative_mouse(&callee_output_word, (int *)&callee_output_word_2);
  g_183F7C750 = g_183F7C758 & 1;
  g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
  g_183F7C6C8 = (float)callee_output_word;
  g_183F7C6CC = (float)(int)callee_output_word_2;
  *(unsigned int *)&g_183F7C6C0 = 1140850688;
  *(unsigned int *)&g_183F7C6C4 = 1134559232;
  sub_140198E40();
  if ( BYTE1(g_183F7C988) )
  {
    BYTE1(g_183F7C988) = 0;
    sub_140095FC0(unrecovered_register_value_2, unrecovered_register_value, unrecovered_register_value_3);
  }
  masked_bits = g_1B0032404;
  state_word = g_1B0032400;
  state_word_2 = 0;
  for ( g_18329CC4C = 0; masked_bits != state_word; g_1B0032404 = masked_bits )
  {
    if ( state_word_2 < 32 )
    {
      dword_140404A6C[5 * state_word_2 + 280649849] = dword_140404A6C[5 * masked_bits + 468760167];
      dword_140404A6C[5 * g_18329CC4C + 280649852] = dword_140404A6C[5 * masked_bits + 468760169];
      dword_140404A6C[5 * g_18329CC4C + 280649851] = dword_140404A6C[5 * masked_bits + 468760168];
      dword_140404A6C[5 * g_18329CC4C + 280649853] = dword_140404A6C[5 * masked_bits + 468760170];
      dword_140404A6C[5 * g_18329CC4C + 280649850] = dword_140404A6C[5 * masked_bits + 468760171];
      state_word_2 = ++g_18329CC4C;
    }
    masked_bits = ((_WORD)masked_bits + 1) & 0x3FF;
  }
  if ( (_DWORD)input_value != -1 )
  {
    scaled_index = (int)dword_140404A6C[3597 * input_value + 71856292];
    if ( (_DWORD)scaled_index != -1 )
    {
      scaled_index_2 = 7166 * scaled_index;
      if ( (int)dword_140404A6C[7166 * scaled_index + 280651318] > 0 && (int)dword_140404A6C[scaled_index_2 + 280658139] > 0 )
      {
        table_value = (int)dword_140404A6C[scaled_index_2 + 280658140];
        if ( (_DWORD)table_value != -1 && dword_140404A6C[1760 * table_value + 278845898] == 39 )
        {
          sub_1400A1640(input_value, table_value);
          state_word_2 = g_18329CC4C;
        }
      }
    }
  }
  remaining_count = 2;
  state_address = (__int64)&g_183F7C960;
  record_byte_offset = &g_183F7C760;
  do
  {
    record_byte_offset += 32;
    loaded_word = *(_OWORD *)state_address;
    loaded_word_2 = *(_OWORD *)(state_address + 16);
    state_address += 128;
    *((_OWORD *)record_byte_offset - 8) = loaded_word;
    loaded_word_3 = *(_OWORD *)(state_address - 96);
    *((_OWORD *)record_byte_offset - 7) = loaded_word_2;
    loaded_word_4 = *(_OWORD *)(state_address - 80);
    *((_OWORD *)record_byte_offset - 6) = loaded_word_3;
    loaded_word_5 = *(_OWORD *)(state_address - 64);
    *((_OWORD *)record_byte_offset - 5) = loaded_word_4;
    loaded_word_6 = *(_OWORD *)(state_address - 48);
    *((_OWORD *)record_byte_offset - 4) = loaded_word_5;
    loaded_word_7 = *(_OWORD *)(state_address - 32);
    *((_OWORD *)record_byte_offset - 3) = loaded_word_6;
    loaded_word_8 = *(_OWORD *)(state_address - 16);
    *((_OWORD *)record_byte_offset - 2) = loaded_word_7;
    *((_OWORD *)record_byte_offset - 1) = loaded_word_8;
    --remaining_count;
  }
  while ( remaining_count );
  loaded_word_9 = *(unsigned __int16 *)(state_address + 64);
  iteration_count = 0;
  loaded_word_10 = *(_OWORD *)(state_address + 16);
  *(_OWORD *)record_byte_offset = *(_OWORD *)state_address;
  loaded_word_11 = *(_OWORD *)(state_address + 32);
  *((_OWORD *)record_byte_offset + 1) = loaded_word_10;
  loaded_word_12 = *(_OWORD *)(state_address + 48);
  *((_OWORD *)record_byte_offset + 2) = loaded_word_11;
  *((_OWORD *)record_byte_offset + 3) = loaded_word_12;
  *((_WORD *)record_byte_offset + 32) = loaded_word_9;
  *((_BYTE *)record_byte_offset + 66) = *(_BYTE *)(state_address + 66);
  if ( state_word_2 > 0 )
  {
    state_address_2 = &g_18329CC58;
    do
    {
      if ( !*(state_address_2 - 1) )
      {
        state_address = (int)*state_address_2;
        if ( (unsigned int)(state_address - 1) <= 0xFE )
        {
          scaled_index_3 = *(state_address_2 - 2);
          if ( scaled_index_3 )
          {
            if ( scaled_index_3 == 1 )
              *((_BYTE *)&g_183F7C960 + state_address) = 0;
          }
          else
          {
            *((_BYTE *)&g_183F7C960 + state_address) = 1;
          }
        }
      }
      ++iteration_count;
      state_address_2 += 5;
    }
    while ( iteration_count < state_word_2 );
  }
  if ( game_unknown_189f0eea0 )
    sub_1400387E0();
  if ( g_183EBFAA8 || !selection_flag )
  {
    state_word_3 = g_18329CC24;
    if ( g_18329CC24 )
    {
      g_18329CC2C = 1;
      goto LABEL_39;
    }
  }
  else
  {
    state_word_3 = 0;
    g_18329CC24 = 0;
  }
  state_word_4 = g_18329CC2C;
  if ( !g_183F7C750 )
    state_word_4 = 0;
  g_18329CC2C = state_word_4;
LABEL_39:
  g_18329CC28 = state_word_3;
  if ( !g_183E93540 && LOBYTE(g_183F7C988) && !LOBYTE(g_183F7C788) )
  {
    LOBYTE(g_183E93550) = 0;
    g_183E93540 = 1;
  }
  if ( replay_active )
  {
    if ( HIBYTE(g_183F7C970) && !HIBYTE(g_183F7C770) )
      game_paused ^= 1u;
    if ( BYTE2(g_183F7C970) )
    {
      cached_game_single_step = game_single_step;
      if ( !BYTE2(g_183F7C770) )
        cached_game_single_step = 1;
      game_single_step = cached_game_single_step;
    }
    if ( LOBYTE(g_183F7C96C) && !LOBYTE(g_183F7C76C) )
      frame_slow_pacing ^= 1u;
    state_word_5 = g_183F79DE4;
    if ( BYTE1(g_183F7C994) )
      state_word_5 = -1;
    g_183F79DE4 = state_word_5;
    if ( BYTE2(g_183F7C97C) )
    {
      state_word_6 = 1;
      g_183F79DE4 = -1;
      g_144CBFAC4 = 1;
      state_word_5 = -1;
    }
    else
    {
      state_word_6 = g_144CBFAC4;
    }
    byte1_result = BYTE1(g_183F7CA40);
    if ( HIBYTE(g_183F7C97C) )
    {
      state_word_6 = 2;
      g_144CBFAC4 = 2;
      if ( BYTE1(g_183F7CA40) )
      {
        g_183F7C398 = g_183F7C37C;
        g_183F7C39C = g_183F7C380;
        g_183F7C3A0 = g_183F7C384;
        axis = xmmword_140278D30;
        frame_float_at_80 = 1.0;
        cached_xmmword_140278d30 = xmmword_140278D30;
        sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis + 3, sr_export_float_lane_container((unsigned __int64)g_183F7C388));
        sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
        *(_QWORD *)&a3 = *(unsigned int *)&g_183F7C390;
        state_word_6 = g_144CBFAC4;
        state_word_5 = g_183F79DE4;
        byte1_result = BYTE1(g_183F7CA40);
        scaled_index_4 = 7LL * (int)g_144CBFAC4;
        weighted_sum = *((float *)&cached_xmmword_140278d30 + 3) * g_183F7C390;
        *(float *)&dword_140404A6C[scaled_index_4 + 284024381] = (float)(*((float *)&cached_xmmword_140278d30 + 2)
                                                            * g_183F7C390)
                                                    + *(float *)&dword_140404A6C[scaled_index_4 + 284024381];
        scaled_value = frame_float_at_80 * *(float *)&a3;
        *(float *)&dword_140404A6C[scaled_index_4 + 284024382] = weighted_sum + *(float *)&dword_140404A6C[scaled_index_4 + 284024382];
        *(float *)&dword_140404A6C[scaled_index_4 + 284024383] = scaled_value + *(float *)&dword_140404A6C[scaled_index_4 + 284024383];
        dword_140404A6C[scaled_index_4 + 284024384] = g_183F7C388;
        dword_140404A6C[scaled_index_4 + 284024385] = g_183F7C38C;
      }
    }
    if ( LOBYTE(g_183F7C980) )
    {
      state_word_6 = 3;
      g_144CBFAC4 = 3;
      if ( byte1_result )
      {
        g_183F7C3B4 = g_183F7C37C;
        g_183F7C3B8 = g_183F7C380;
        g_183F7C3BC = g_183F7C384;
        axis = xmmword_140278D30;
        frame_float_at_80 = 1.0;
        cached_xmmword_140278d30 = xmmword_140278D30;
        sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis + 3, sr_export_float_lane_container((unsigned __int64)g_183F7C388));
        sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
        *(_QWORD *)&a3 = *(unsigned int *)&g_183F7C390;
        state_word_6 = g_144CBFAC4;
        state_word_5 = g_183F79DE4;
        byte1_result = BYTE1(g_183F7CA40);
        scaled_index_5 = 7LL * (int)g_144CBFAC4;
        weighted_sum_2 = *((float *)&cached_xmmword_140278d30 + 3) * g_183F7C390;
        *(float *)&dword_140404A6C[scaled_index_5 + 284024381] = (float)(*((float *)&cached_xmmword_140278d30 + 2)
                                                            * g_183F7C390)
                                                    + *(float *)&dword_140404A6C[scaled_index_5 + 284024381];
        scaled_value_2 = frame_float_at_80 * *(float *)&a3;
        *(float *)&dword_140404A6C[scaled_index_5 + 284024382] = weighted_sum_2 + *(float *)&dword_140404A6C[scaled_index_5 + 284024382];
        *(float *)&dword_140404A6C[scaled_index_5 + 284024383] = scaled_value_2 + *(float *)&dword_140404A6C[scaled_index_5 + 284024383];
        dword_140404A6C[scaled_index_5 + 284024384] = g_183F7C388;
        dword_140404A6C[scaled_index_5 + 284024385] = g_183F7C38C;
      }
    }
    state_word_7 = g_183F7C78C;
    if ( LOBYTE(g_183F7C98C) && !LOBYTE(g_183F7C78C) )
    {
      saved_state_word = state_word_5;
      if ( state_word_5 >= 0 )
      {
        LOBYTE(integer_sum) = state_word_5 + 1;
        if ( byte1_result )
          LOBYTE(integer_sum) = state_word_5 - 1;
      }
      else
      {
        LOBYTE(integer_sum) = 0;
        saved_state_word = -1;
      }
      integer_sum = (unsigned __int8)integer_sum;
      cached_state_word = saved_state_word;
      while ( 1 )
      {
        state_address = 28664LL * integer_sum;
        if ( *(unsigned int *)((char *)&g_18329E308 + state_address) )
        {
          if ( *(int *)((char *)&g_18329E344 + state_address) > 0
            && *(unsigned int *)((char *)&g_1832A5284 + state_address) <= 2 )
          {
            break;
          }
        }
        integer_difference = 1;
        if ( byte1_result )
          integer_difference = -1;
        integer_sum = (unsigned __int8)(integer_sum + integer_difference);
        if ( integer_sum == cached_state_word )
          goto LABEL_82;
      }
      state_word_5 = integer_sum;
      g_183F79DE4 = integer_sum;
    }
LABEL_82:
    if ( state_word_6 == 1 )
    {
      sub_140105180(1, state_address, a3);
    }
    else
    {
      sub_140105470(state_word_6, state_address, a3);
      if ( state_word_5 != -1 )
        sub_14002EDF0(state_word_6, (__int64)&dword_140404A6C[7166 * state_word_5 + 280651335]);
    }
    state_word_3 = g_18329CC24;
  }
  else
  {
    state_word_5 = g_183F79DE4;
    byte1_result = BYTE1(g_183F7CA40);
    state_word_7 = g_183F7C78C;
  }
  if ( (_DWORD)input_value != -1 && !game_unknown_189f0eea0 )
  {
    callee_output_word_2 = input_value;
    scaled_index_6 = 3597 * input_value;
    table_value_2 = dword_140404A6C[scaled_index_6 + 71856345];
    if ( table_value_2 >= 0 )
    {
      table_value_3 = dword_140404A6C[scaled_index_6 + 71856342];
      dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_6 + 71856362] + 71856367 + scaled_index_6] = 0;
      dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_6 + 71856362] + 71856368 + scaled_index_6] = table_value_3;
      dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_6 + 71856362] + 71856369 + scaled_index_6] = table_value_2;
      *(_OWORD *)&dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_6 + 71856362] + 71856372 + scaled_index_6] = *(_OWORD *)&dword_140404A6C[scaled_index_6 + 71856346];
      table_value_4 = dword_140404A6C[scaled_index_6 + 71856362] + 1;
      dword_140404A6C[scaled_index_6 + 71856345] = -1;
      dword_140404A6C[scaled_index_6 + 71856362] = table_value_4 & 0x3F;
      LOBYTE(dword_140404A6C[scaled_index_6 + 71856346]) = 0;
      if ( dword_140404A6C[scaled_index_6 + 71856342] - 14 <= 5 )
        dword_140404A6C[scaled_index_6 + 71857986] = 0;
      dword_140404A6C[scaled_index_6 + 71857986] = 0;
    }
    cached_game_type = game_type;
    state_word_8 = g_18329B180;
    if ( game_type == 4 && dword_140404A6C[scaled_index_6 + 71856266] )
    {
      if ( dword_140404A6C[scaled_index_6 + 71856342] == 1
        && HIBYTE(g_183F7C984)
        && !HIBYTE(g_183F7C784) )
      {
        xor_value = g_183F79DEC ^ 1;
        g_183F79DEC ^= 1u;
      }
      else
      {
        xor_value = g_183F79DEC;
      }
      if ( xor_value )
      {
        if ( BYTE2(g_183F7C97C) )
          state_word_5 = -1;
        g_183F79DE4 = state_word_5;
        if ( LOBYTE(g_183F7C98C) )
        {
          if ( !state_word_7 )
          {
            if ( state_word_5 >= 0 )
            {
              integer_difference_2 = state_word_5 + 1;
              if ( byte1_result )
                integer_difference_2 = state_word_5 - 1;
            }
            else
            {
              integer_difference_2 = 0;
              LOBYTE(state_word_5) = -1;
            }
            integer_sum_2 = integer_difference_2;
            while ( 1 )
            {
              scaled_index_7 = 7166LL * integer_sum_2;
              if ( dword_140404A6C[scaled_index_7 + 280651303] )
              {
                if ( (int)dword_140404A6C[scaled_index_7 + 280651318] > 0 )
                  break;
              }
              integer_difference_3 = 1;
              if ( byte1_result )
                integer_difference_3 = -1;
              integer_sum_2 = (unsigned __int8)(integer_sum_2 + integer_difference_3);
              if ( integer_sum_2 == (unsigned __int8)state_word_5 )
                goto LABEL_140;
            }
            g_183F79DE4 = integer_sum_2;
          }
        }
      }
    }
    else
    {
      g_183F79DEC = 0;
      if ( (game_type == 3 || game_type - 5 <= 2)
        && !g_183F79DE8
        && !g_18329B180 )
      {
        if ( BYTE2(g_183F7C97C) )
          state_word_5 = -1;
        if ( LOBYTE(g_183F7C98C) && !state_word_7 )
        {
          saved_state_word_2 = state_word_5;
          if ( state_word_5 >= 0 )
          {
            LOBYTE(integer_sum_3) = state_word_5 + 1;
            if ( byte1_result )
              LOBYTE(integer_sum_3) = state_word_5 - 1;
          }
          else
          {
            LOBYTE(integer_sum_3) = 0;
            saved_state_word_2 = -1;
          }
          integer_sum_3 = (unsigned __int8)integer_sum_3;
          cached_state_word_2 = saved_state_word_2;
          while ( 1 )
          {
            scaled_index_8 = 7166LL * integer_sum_3;
            if ( dword_140404A6C[scaled_index_8 + 280651303] )
            {
              if ( (int)dword_140404A6C[scaled_index_8 + 280651318] > 0 && dword_140404A6C[scaled_index_8 + 280658438] <= 2 )
                break;
            }
            integer_difference_4 = 1;
            if ( byte1_result )
              integer_difference_4 = -1;
            integer_sum_3 = (unsigned __int8)(integer_sum_3 + integer_difference_4);
            if ( integer_sum_3 == cached_state_word_2 )
              goto LABEL_137;
          }
          state_word_5 = integer_sum_3;
        }
LABEL_137:
        if ( game_state != 2 )
          state_word_5 = -1;
        g_183F79DE4 = state_word_5;
      }
    }
LABEL_140:
    state_word_9 = g_18329CC38;
    g_18329CC3C = g_18329CC38;
    *(_QWORD *)&g_18329CC40 = 0;
    masked_bits_2 = *((_BYTE *)&g_183F7C960 + (int)g_18329DEE0);
    if ( !masked_bits_2 )
      state_word_9 = 0;
    g_18329CC38 = state_word_9;
    if ( !g_18329B180 )
    {
      g_18329CC44 = *((_BYTE *)&g_183F7C960 + (int)g_18329DEE8) != 0;
      if ( !masked_bits_2 || *((_BYTE *)&g_183F7C760 + (int)g_18329DEE0) )
      {
        if ( !(_DWORD)state_word_9 )
          g_18329CC40 = g_183F7C754 != 0;
      }
      else
      {
        g_18329CC38 = 1;
      }
    }
    table_value_5 = (int)dword_140404A6C[scaled_index_6 + 71856292];
    dword_140404A6C[scaled_index_6 + 71856339] = 0;
    if ( (_DWORD)table_value_5 != -1 )
    {
      state_word_9 = 28664 * table_value_5;
      if ( (int)dword_140404A6C[7166 * table_value_5 + 280651318] > 0 )
      {
        masked_bits_3 = *(int *)((char *)&g_18329E330 + state_word_9);
        dword_140404A6C[scaled_index_6 + 71856339] = 1;
        if ( (_DWORD)masked_bits_3 != -1 )
        {
          if ( dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_3 + 129716710] + 346707719] == 1
            || *(unsigned int *)((char *)&g_18329E334 + state_word_9) )
          {
            dword_140404A6C[scaled_index_6 + 71856339] = 2;
          }
          else
          {
            dword_140404A6C[scaled_index_6 + 71856339] = 3;
          }
        }
        goto LABEL_175;
      }
    }
    lookup_index = callee_output_word_2;
    scaled_index_9 = 3597 * callee_output_word_2;
    *(_QWORD *)&dword_140404A6C[scaled_index_9 + 71856293] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_9 + 71856295] = 0;
    dword_140404A6C[scaled_index_6 + 71856325] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_6 + 71856331] = 0;
    if ( cached_game_type == 3 || cached_game_type - 5 <= 2 || cached_game_type == 4 && dword_140404A6C[scaled_index_6 + 71856266] )
    {
      if ( !state_word_3 )
      {
        sub_140105180(1, state_word_9, a3);
        goto LABEL_164;
      }
    }
    else if ( !state_word_3 )
    {
LABEL_164:
      if ( !state_word_8 )
      {
        if ( BYTE2(g_183F7C97C) )
        {
          option_flags = 64;
          dword_140404A6C[scaled_index_6 + 71856325] = 64;
        }
        if ( HIBYTE(g_183F7C97C) )
        {
          option_flags |= 0x80u;
          dword_140404A6C[scaled_index_6 + 71856325] = option_flags;
        }
        if ( LOBYTE(g_183F7C980) )
        {
          option_flags |= 0x100u;
          dword_140404A6C[scaled_index_6 + 71856325] = option_flags;
        }
        if ( BYTE1(g_183F7C980) )
        {
          option_flags |= 0x200u;
          dword_140404A6C[scaled_index_6 + 71856325] = option_flags;
        }
        if ( BYTE1(g_183F7C974) )
          dword_140404A6C[3597 * lookup_index + 71856325] = option_flags | 0x1000;
      }
    }
LABEL_175:
    table_value_6 = dword_140404A6C[scaled_index_6 + 71856339];
    switch ( table_value_6 )
    {
      case 1u:
        sub_1400A21B0(input_value_2);
        break;
      case 2u:
        sub_1400A0EB0(input_value_2);
        break;
      case 3u:
        sub_1400A1D20(input_value_2);
        break;
    }
    dword_140404A6C[scaled_index_6 + 71856340] = dword_140404A6C[scaled_index_6 + 71856339];
  }
  return 0; /* the function has no caller */
}

#undef unused_frame_slot_0
#undef input_value_2
#undef callee_output_word
#undef callee_output_word_2
#undef axis
#undef cached_xmmword_140278d30
#undef frame_float_at_80
#undef unused_frame_slot_88

// 14009F41D: conditional instruction was optimized away because rdx.8 is in (1..FF)

