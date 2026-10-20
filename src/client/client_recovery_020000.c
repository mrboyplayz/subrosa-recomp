#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"

//----- (0000000140020000) ----------------------------------------------------
unsigned int *sub_140020000()
{
  unsigned int *result;
  int iteration_count;
  unsigned int *state_address;
  int iteration_count_2;
  unsigned int *buffer_cursor;
  int iteration_count_3;
  __int64 remaining_count;
  int iteration_count_4;
  __int64 remaining_count_2;
  _UNKNOWN *retaddr;

  result = (unsigned int *)&retaddr;
  iteration_count = 0;
  if ( (int)g_1726DA088 > 0 )
  {
    state_address = &g_1726DA094;
    do
    {
      iteration_count_2 = 0;
      buffer_cursor = state_address + 2562;
      do
      {
        iteration_count_3 = 0;
        remaining_count = 8;
        do
        {
          iteration_count_4 = 0;
          remaining_count_2 = 8;
          do
          {
            if ( *buffer_cursor )
            {
              sub_1400D4FC0(0, iteration_count_4 + 8 * *(state_address - 1), iteration_count_2 + 8 * *state_address, iteration_count_3 + 8 * state_address[1], *buffer_cursor);
              result = sub_14003FA40(iteration_count_4 + 8 * *(state_address - 1), iteration_count_3 + 8 * state_address[1], (float)(int)(iteration_count_2 + 8 * *state_address) * 4.0);
            }
            ++iteration_count_4;
            ++buffer_cursor;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          ++iteration_count_3;
          --remaining_count;
        }
        while ( remaining_count );
        ++iteration_count_2;
      }
      while ( iteration_count_2 < 8 );
      ++iteration_count;
      state_address += 3588;
    }
    while ( iteration_count < (int)g_1726DA088 );
  }
  return result;
}

//----- (0000000140020130) ----------------------------------------------------
__int64            sub_140020130(int a1)
{
  __int64 record_word_offset;
  unsigned int table_value;
  unsigned int table_value_2;
  int iteration_count;
  unsigned int table_value_3;
  int table_value_4;
  int i;
  unsigned int table_value_5;
  bool comparison_result;
  int integer_sum;
  unsigned int integer_sum_2;
  unsigned int integer_sum_3;
  int table_value_6;
  unsigned int table_value_7;
  int iteration_count_2;
  unsigned int integer_difference;
  unsigned int table_value_8;
  int j;
  int integer_sum_4;
  unsigned int table_value_9;
  int iteration_count_3;
  int iteration_count_4;
  unsigned int integer_difference_2;
  unsigned int table_value_10;
  unsigned int table_value_11;
  unsigned int table_value_12;
  int shifted_bits;
  unsigned int y;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140020130[80];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140020130 + 0)) /* [rsp+0h] */
#define selection_code (*(__int64 (*))(void *)(sr_frame_140020130 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_140020130 + 56)) /* [rsp+38h] */
#define unused_frame_slot_64 (*(__int64 (*))(void *)(sr_frame_140020130 + 64)) /* [rsp+40h] */

  record_word_offset = 34LL * a1;
  selection_code = 0x1000100010001LL;
  unused_written_slot = 0x1000100010001LL;
  table_value = dword_140404A6C[record_word_offset + 225391232];
  table_value_2 = dword_140404A6C[record_word_offset + 225391241];
  iteration_count = table_value - dword_140404A6C[record_word_offset + 225391243];
  if ( iteration_count < (int)(table_value_2 + table_value) )
  {
    table_value_3 = dword_140404A6C[record_word_offset + 225391230];
    table_value_4 = table_value_3 + dword_140404A6C[record_word_offset + 225391240];
    do
    {
      for ( i = table_value_3 - dword_140404A6C[record_word_offset + 225391242]; i < table_value_4; table_value_4 = table_value_3 + dword_140404A6C[record_word_offset + 225391240] )
      {
        sub_14000F830(0, i++, dword_140404A6C[record_word_offset + 225391231], iteration_count, 0x40000000u, &selection_code);
        table_value_3 = dword_140404A6C[record_word_offset + 225391230];
      }
      table_value_2 = dword_140404A6C[record_word_offset + 225391241];
      ++iteration_count;
      table_value = dword_140404A6C[record_word_offset + 225391232];
    }
    while ( iteration_count < (int)(table_value_2 + table_value) );
  }
  table_value_5 = dword_140404A6C[record_word_offset + 225391238];
  comparison_result = dword_140404A6C[record_word_offset + 225391236] == -1;
  selection_code = 0;
  unused_written_slot = 0;
  integer_sum = !comparison_result + 1;
  if ( dword_140404A6C[record_word_offset + 225391237] == -1 )
    integer_sum = !comparison_result;
  integer_sum_2 = integer_sum + 1;
  if ( table_value_5 == -1 )
    integer_sum_2 = integer_sum;
  integer_sum_3 = integer_sum_2 + 1;
  if ( dword_140404A6C[record_word_offset + 225391239] == -1 )
    integer_sum_3 = integer_sum_2;
  if ( dword_140404A6C[record_word_offset + 225391236] == -1 )
  {
    table_value_6 = dword_140404A6C[record_word_offset + 225391230] + dword_140404A6C[record_word_offset + 225391240];
    table_value_7 = dword_140404A6C[record_word_offset + 225391231];
    iteration_count_2 = table_value - dword_140404A6C[record_word_offset + 225391243] - 1;
    if ( iteration_count_2 < (int)(table_value_2 + table_value + 1) )
    {
      do
      {
        sub_14000F830(0, table_value_6, table_value_7 + 1, iteration_count_2, g_14500A748 | 0x80000000, &selection_code);
        table_value = dword_140404A6C[record_word_offset + 225391232];
        ++iteration_count_2;
        table_value_2 = dword_140404A6C[record_word_offset + 225391241];
      }
      while ( iteration_count_2 < (int)(table_value_2 + table_value + 1) );
      table_value_5 = dword_140404A6C[record_word_offset + 225391238];
    }
  }
  if ( table_value_5 == -1 )
  {
    integer_difference = dword_140404A6C[record_word_offset + 225391230] - dword_140404A6C[record_word_offset + 225391240];
    table_value_8 = dword_140404A6C[record_word_offset + 225391231];
    for ( j = table_value - dword_140404A6C[record_word_offset + 225391243] - 1; j < (int)(table_value_2 + table_value + 1); table_value_2 = dword_140404A6C[record_word_offset + 225391241] )
    {
      sub_14000F830(0, integer_difference - 1, table_value_8 + 1, j, g_14500A748 | 0x80000000, &selection_code);
      table_value = dword_140404A6C[record_word_offset + 225391232];
      ++j;
    }
  }
  if ( dword_140404A6C[record_word_offset + 225391237] == -1 )
  {
    integer_sum_4 = table_value_2 + table_value;
    table_value_9 = dword_140404A6C[record_word_offset + 225391231];
    iteration_count_3 = dword_140404A6C[record_word_offset + 225391230] - dword_140404A6C[record_word_offset + 225391242] - 1;
    if ( iteration_count_3 < (int)(dword_140404A6C[record_word_offset + 225391240] + dword_140404A6C[record_word_offset + 225391230] + 1) )
    {
      do
        sub_14000F830(0, iteration_count_3++, table_value_9 + 1, integer_sum_4, g_14500A748 | 0x80000000, &selection_code);
      while ( iteration_count_3 < (int)(dword_140404A6C[record_word_offset + 225391230] + dword_140404A6C[record_word_offset + 225391240] + 1) );
    }
  }
  if ( dword_140404A6C[record_word_offset + 225391239] == -1 )
  {
    iteration_count_4 = dword_140404A6C[record_word_offset + 225391230] - dword_140404A6C[record_word_offset + 225391242] - 1;
    integer_difference_2 = dword_140404A6C[record_word_offset + 225391232] - dword_140404A6C[record_word_offset + 225391243];
    table_value_10 = dword_140404A6C[record_word_offset + 225391231];
    if ( iteration_count_4 < (int)(dword_140404A6C[record_word_offset + 225391240] + dword_140404A6C[record_word_offset + 225391230] + 1) )
    {
      do
        sub_14000F830(0, iteration_count_4++, table_value_10 + 1, integer_difference_2 - 1, g_14500A748 | 0x80000000, &selection_code);
      while ( iteration_count_4 < (int)(dword_140404A6C[record_word_offset + 225391230] + dword_140404A6C[record_word_offset + 225391240] + 1) );
    }
  }
  if ( integer_sum_3 > 2 )
  {
    table_value_11 = dword_140404A6C[record_word_offset + 225391230];
    table_value_12 = dword_140404A6C[record_word_offset + 225391232];
    shifted_bits = a1 << 12;
    y = dword_140404A6C[record_word_offset + 225391231] + 1;
    if ( dword_140404A6C[record_word_offset + 225391238] != -1 )
      sr_world_set_block_unknown_4808(0, table_value_11 + dword_140404A6C[record_word_offset + 225391240], y, table_value_12 + dword_140404A6C[record_word_offset + 225391241], shifted_bits | 1);
    if ( dword_140404A6C[record_word_offset + 225391236] != -1 )
      sr_world_set_block_unknown_4808(
        0,
        table_value_11 - dword_140404A6C[record_word_offset + 225391240] - 1,
        y,
        table_value_12 - dword_140404A6C[record_word_offset + 225391241] - 1,
        shifted_bits | 0x801);
    if ( dword_140404A6C[record_word_offset + 225391239] != -1 )
      sr_world_set_block_unknown_4808(
        0,
        table_value_11 - dword_140404A6C[record_word_offset + 225391240] - 1,
        y,
        table_value_12 + dword_140404A6C[record_word_offset + 225391241],
        shifted_bits | 0x1000401);
    if ( dword_140404A6C[record_word_offset + 225391237] != -1 )
      sr_world_set_block_unknown_4808(
        0,
        table_value_11 + dword_140404A6C[record_word_offset + 225391240],
        y,
        table_value_12 - dword_140404A6C[record_word_offset + 225391241] - 1,
        shifted_bits | 0x1000C01);
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef selection_code
#undef unused_written_slot
#undef unused_frame_slot_64

//----- (0000000140023A20) ----------------------------------------------------
void            sub_140023A20(int a1, int a2)
{
  __int64 remaining_count;
  unsigned int *record_byte_offset;
  unsigned int x;
  unsigned int y;
  unsigned int z;
  unsigned int shifted_bits;

  remaining_count = 2;
  record_byte_offset = &dword_140404A6C[5873 * a1 + 283831581];
  do
  {
    x = *(record_byte_offset - 1);
    y = *record_byte_offset;
    z = record_byte_offset[1];
    if ( a2 )
      shifted_bits = 0;
    else
      shifted_bits = (record_byte_offset[2] << 10) | 6;
    sr_world_set_block_unknown_4808(0, x, y, z, shifted_bits);
    sr_world_mark_block_record(0, x, y, z);
    record_byte_offset += 4;
    --remaining_count;
  }
  while ( remaining_count );
}

//----- (0000000140027D00) ----------------------------------------------------
__int64 sub_140027D00()
{
  int state_word;
  int iteration_count;
  int state_word_2;
  int state_word_3;
  __int64 record_byte_offset;
  int iteration_count_2;
  __int64 element_index;
  int iteration_count_3;
  unsigned int *state_address;
  __int128 loaded_word;
  unsigned int saved_state_word;
  int iteration_count_4;
  unsigned int iteration_count_5;
  unsigned int iteration_count_6;
  __int64 shifted_bits;
  unsigned int *state_address_2;
  int iteration_count_7;
  unsigned int state_word_4;
  unsigned int state_word_5;
  __int64 record_byte_offset_2;
  __int64 running_total;
  int element_index_2;
  __int64 element_index_3;
  int iteration_count_8;
  __int64 record_byte_offset_3;
  unsigned int *state_address_3;
  int option_flags;
  int scaled_index;
  __int64 scaled_index_2;
  int option_flags_2;
  int scaled_index_3;
  __int64 scaled_index_4;
  __int64 integer_difference;
  unsigned int table_value;
  __int64 scaled_index_5;
  __int64 packed_word_bits;
  __int64 scaled_index_6;
  int saved_iteration_count;

  state_word = g_1AE1C9500;
  iteration_count = 0;
  state_word_2 = g_1AE1C94FC;
  state_word_3 = g_1AE1C94F8;
  if ( (int)g_1AE1C9500 > 0 )
  {
    record_byte_offset = 0;
    do
    {
      iteration_count_2 = 0;
      element_index = 0;
      if ( state_word_2 >= 0 )
      {
        do
        {
          iteration_count_3 = 0;
          if ( state_word_3 >= 0 )
          {
            state_address = &dword_140404A6C[960 * record_byte_offset + 464720760 + 960 * element_index];
            do
            {
              loaded_word = *(_OWORD *)(state_address - 3932367);
              ++iteration_count_3;
              state_address += 15;
              *(_OWORD *)(state_address - 15) = loaded_word;
              *(_OWORD *)(state_address - 11) = *(_OWORD *)(state_address - 3932378);
              *(_OWORD *)(state_address - 7) = *(_OWORD *)(state_address - 3932374);
              *(_QWORD *)(state_address - 3) = *((_QWORD *)state_address - 1966185);
              *(state_address - 1) = *(state_address - 3932368);
              state_word_3 = g_1AE1C94F8;
            }
            while ( iteration_count_3 <= (int)g_1AE1C94F8 );
            state_word_2 = g_1AE1C94FC;
          }
          ++iteration_count_2;
          ++element_index;
        }
        while ( iteration_count_2 <= state_word_2 );
        state_word = g_1AE1C9500;
      }
      ++iteration_count;
      record_byte_offset += 64;
    }
    while ( iteration_count < state_word );
  }
  saved_state_word = state_word_3;
  if ( state_word_3 < (unsigned int)state_word_2 )
    saved_state_word = state_word_2;
  iteration_count_4 = 0;
  if ( state_word > 0 )
  {
    do
    {
      iteration_count_5 = 0;
      do
      {
        iteration_count_6 = 0;
        do
        {
          shifted_bits = ((((__int64)iteration_count_4 << 6) + (int)iteration_count_5) << 6) + (int)iteration_count_6++;
          state_address_2 = &dword_140404A6C[15 * shifted_bits + 460788393];
          *(_OWORD *)state_address_2 = 0;
          *((_OWORD *)state_address_2 + 1) = 0;
          *((_OWORD *)state_address_2 + 2) = 0;
          *((_QWORD *)state_address_2 + 6) = 0;
          state_address_2[14] = 0;
        }
        while ( iteration_count_6 <= saved_state_word );
        ++iteration_count_5;
      }
      while ( iteration_count_5 <= saved_state_word );
      state_word = g_1AE1C9500;
      ++iteration_count_4;
    }
    while ( iteration_count_4 < (int)g_1AE1C9500 );
    state_word_2 = g_1AE1C94FC;
    state_word_3 = g_1AE1C94F8;
  }
  iteration_count_7 = 0;
  g_1AFFC985C = *(_QWORD *)&g_1AF0C9520;
  g_1AFFC9874 = g_1AF0C9538;
  g_1AFFC988C = g_1AF0C9550;
  g_1AFFC98A4 = g_1AF0C9568;
  g_1AFFC98BC = g_1AF0C9580;
  g_1AFFC98D4 = g_1AF0C9598;
  g_1AFFC98EC = g_1AF0C95B0;
  g_1AFFC9904 = g_1AF0C95C8;
  g_1AFFC991C = g_1AF0C95E0;
  g_1AFFC9934 = g_1AF0C95F8;
  g_1AFFC994C = g_1AF0C9610;
  g_1AFFC9964 = g_1AF0C9628;
  g_1AFFC997C = g_1AF0C9640;
  g_1AFFC9994 = g_1AF0C9658;
  g_1AFFC99AC = g_1AF0C9670;
  g_1AFFC99C4 = g_1AF0C9688;
  saved_iteration_count = 0;
  *(_OWORD *)&g_1AFFC984C = *(_OWORD *)&g_1AF0C9510;
  *(_OWORD *)&g_1AFFC9864 = *(_OWORD *)&g_1AF0C9528;
  *(_OWORD *)&g_1AFFC987C = *(_OWORD *)&g_1AF0C9540;
  *(_OWORD *)&g_1AFFC9894 = *(_OWORD *)&g_1AF0C9558;
  *(_OWORD *)&g_1AFFC98AC = *(_OWORD *)&g_1AF0C9570;
  *(_OWORD *)&g_1AFFC98C4 = *(_OWORD *)&g_1AF0C9588;
  *(_OWORD *)&g_1AFFC98DC = *(_OWORD *)&g_1AF0C95A0;
  *(_OWORD *)&g_1AFFC98F4 = *(_OWORD *)&g_1AF0C95B8;
  *(_OWORD *)&g_1AFFC990C = *(_OWORD *)&g_1AF0C95D0;
  *(_OWORD *)&g_1AFFC9924 = *(_OWORD *)&g_1AF0C95E8;
  *(_OWORD *)&g_1AFFC993C = *(_OWORD *)&g_1AF0C9600;
  *(_OWORD *)&g_1AFFC9954 = *(_OWORD *)&g_1AF0C9618;
  *(_OWORD *)&g_1AFFC996C = *(_OWORD *)&g_1AF0C9630;
  *(_OWORD *)&g_1AFFC9984 = *(_OWORD *)&g_1AF0C9648;
  *(_OWORD *)&g_1AFFC999C = *(_OWORD *)&g_1AF0C9660;
  *(_OWORD *)&g_1AFFC99B4 = *(_OWORD *)&g_1AF0C9678;
  if ( state_word > 0 )
  {
    state_word_4 = g_14500A708;
    state_word_5 = g_14500A704;
    record_byte_offset_2 = 0;
    running_total = 0;
    do
    {
      element_index_2 = 0;
      element_index_3 = 0;
      if ( state_word_2 >= 0 )
      {
        do
        {
          iteration_count_8 = 0;
          if ( state_word_3 >= 0 )
          {
            record_byte_offset_3 = running_total;
            state_address_3 = &dword_140404A6C[960 * record_byte_offset_2 + 464720766 + 960 * element_index_3];
            do
            {
              if ( element_index_2 < state_word_2 )
              {
                option_flags = *(state_address_3 - 5);
                scaled_index = state_word_2 - element_index_2 - 1;
                if ( (option_flags & 0xE0000000) == 0x80000000 )
                {
                  option_flags = (unsigned __int16)option_flags;
                  scaled_index = state_word_2 - element_index_2 - dword_140404A6C[58 * (unsigned __int16)option_flags + 20074647];
                  if ( (unsigned __int16)option_flags >= state_word_5 && (unsigned __int16)option_flags < state_word_4 )
                  {
                    option_flags = (unsigned __int16)option_flags + 1;
                    if ( (option_flags & 3) == 0 )
                      option_flags -= 4;
                  }
                  option_flags |= 0x80000000;
                }
                scaled_index_2 = 15 * (record_byte_offset_3 + scaled_index);
                if ( !dword_140404A6C[scaled_index_2 + 460788394] )
                {
                  dword_140404A6C[scaled_index_2 + 460788394] = option_flags;
                  LOWORD(dword_140404A6C[scaled_index_2 + 460788399]) = *(_WORD *)state_address_3;
                  HIWORD(dword_140404A6C[scaled_index_2 + 460788400]) = *((_WORD *)state_address_3 + 2);
                  LOWORD(dword_140404A6C[scaled_index_2 + 460788401]) = *((_WORD *)state_address_3 + 3);
                  HIWORD(dword_140404A6C[scaled_index_2 + 460788399]) = *((_WORD *)state_address_3 + 4);
                  LOWORD(dword_140404A6C[scaled_index_2 + 460788400]) = *((_WORD *)state_address_3 + 1);
                  HIWORD(dword_140404A6C[scaled_index_2 + 460788401]) = *((_WORD *)state_address_3 + 5);
                  LOWORD(dword_140404A6C[scaled_index_2 + 460788402]) = *((_WORD *)state_address_3 + 6);
                  HIWORD(dword_140404A6C[scaled_index_2 + 460788402]) = *((_WORD *)state_address_3 + 7);
                  state_word_2 = g_1AE1C94FC;
                }
                option_flags_2 = *(state_address_3 - 4);
                scaled_index_3 = state_word_2 - element_index_2 - 1;
                if ( (option_flags_2 & 0xE0000000) == 0x80000000 )
                {
                  option_flags_2 = (unsigned __int16)option_flags_2;
                  scaled_index_3 = state_word_2 - element_index_2 - dword_140404A6C[58 * (unsigned __int16)option_flags_2 + 20074647];
                  if ( (unsigned __int16)option_flags_2 >= state_word_5 && (unsigned __int16)option_flags_2 < state_word_4 )
                  {
                    option_flags_2 = (unsigned __int16)option_flags_2 + 1;
                    if ( (option_flags_2 & 3) == 0 )
                      option_flags_2 -= 4;
                  }
                  option_flags_2 |= 0x80000000;
                }
                scaled_index_4 = 15 * (record_byte_offset_3 + scaled_index_3);
                if ( !dword_140404A6C[scaled_index_4 + 460788395] )
                {
                  dword_140404A6C[scaled_index_4 + 460788395] = option_flags_2;
                  LOWORD(dword_140404A6C[scaled_index_4 + 460788403]) = *((_WORD *)state_address_3 + 8);
                  HIWORD(dword_140404A6C[scaled_index_4 + 460788404]) = *((_WORD *)state_address_3 + 10);
                  LOWORD(dword_140404A6C[scaled_index_4 + 460788405]) = *((_WORD *)state_address_3 + 11);
                  HIWORD(dword_140404A6C[scaled_index_4 + 460788403]) = *((_WORD *)state_address_3 + 12);
                  LOWORD(dword_140404A6C[scaled_index_4 + 460788404]) = *((_WORD *)state_address_3 + 9);
                  HIWORD(dword_140404A6C[scaled_index_4 + 460788405]) = *((_WORD *)state_address_3 + 13);
                  LOWORD(dword_140404A6C[scaled_index_4 + 460788406]) = *((_WORD *)state_address_3 + 14);
                  HIWORD(dword_140404A6C[scaled_index_4 + 460788406]) = *((_WORD *)state_address_3 + 15);
                  state_word_2 = g_1AE1C94FC;
                }
                if ( (option_flags_2 & 0xE0000000) == 0x80000000 )
                {
                  integer_difference = record_byte_offset_3 + state_word_2 - element_index_2;
                  if ( !dword_140404A6C[15 * integer_difference + 460788380] )
                  {
                    dword_140404A6C[15 * integer_difference + 460788380] = -1073741824;
                    state_word_2 = g_1AE1C94FC;
                  }
                }
                dword_140404A6C[15 * record_byte_offset_3 + 460788378 + 15 * (state_word_2 - element_index_2)] = *(state_address_3 - 6);
                dword_140404A6C[15 * record_byte_offset_3 + 460788381 + 15 * (g_1AE1C94FC - element_index_2)] = *(state_address_3 - 2);
                dword_140404A6C[15 * record_byte_offset_3 + 460788383 + 15 * (g_1AE1C94FC - element_index_2)] = *(state_address_3 - 1);
                table_value = state_address_3[8];
                scaled_index_5 = 15 * (record_byte_offset_3 + g_1AE1C94FC - element_index_2);
                if ( table_value )
                {
                  dword_140404A6C[scaled_index_5 + 460788392] = table_value;
                  dword_140404A6C[15 * record_byte_offset_3 + 460788392 + 15 * (g_1AE1C94FC - element_index_2)] &= 0xFCFFFFFF;
                  dword_140404A6C[15 * record_byte_offset_3 + 460788392 + 15 * (g_1AE1C94FC - element_index_2)] |= ((table_value & 0xFF000000) + 0x1000000) & 0x3000000;
                }
                else
                {
                  dword_140404A6C[scaled_index_5 + 460788392] = 0;
                }
                state_word_2 = g_1AE1C94FC;
              }
              ++iteration_count_8;
              packed_word_bits = record_byte_offset_3 + state_word_2 - element_index_2;
              record_byte_offset_3 += 64;
              scaled_index_6 = 15 * packed_word_bits;
              LODWORD(packed_word_bits) = *(state_address_3 - 3);
              state_address_3 += 15;
              dword_140404A6C[scaled_index_6 + 460788397] = packed_word_bits;
              state_word_3 = g_1AE1C94F8;
              state_word_2 = g_1AE1C94FC;
            }
            while ( iteration_count_8 <= (int)g_1AE1C94F8 );
          }
          ++element_index_2;
          ++element_index_3;
        }
        while ( element_index_2 <= state_word_2 );
        state_word = g_1AE1C9500;
        iteration_count_7 = saved_iteration_count;
      }
      ++iteration_count_7;
      running_total += 4096;
      record_byte_offset_2 += 64;
      saved_iteration_count = iteration_count_7;
    }
    while ( iteration_count_7 < state_word );
  }
  g_1AF0C951C = g_1AFFC9860;
  g_1AF0C9510 = state_word_2 - g_1AFFC9854 - g_1AFFC9860;
  g_1AF0C9518 = g_1AFFC984C;
  g_1AF0C9524 = g_1AFFC9858;
  g_1AF0C9534 = g_1AFFC9878;
  g_1AF0C9528 = state_word_2 - g_1AFFC986C - g_1AFFC9878;
  g_1AF0C9530 = g_1AFFC9864;
  g_1AF0C953C = g_1AFFC9870;
  g_1AF0C954C = g_1AFFC9890;
  g_1AF0C9540 = state_word_2 - g_1AFFC9890 - g_1AFFC9884;
  g_1AF0C9548 = g_1AFFC987C;
  g_1AF0C9554 = g_1AFFC9888;
  g_1AF0C9564 = g_1AFFC98A8;
  g_1AF0C9558 = state_word_2 - g_1AFFC98A8 - g_1AFFC989C;
  g_1AF0C9560 = g_1AFFC9894;
  g_1AF0C956C = g_1AFFC98A0;
  g_1AF0C957C = g_1AFFC98C0;
  g_1AF0C9570 = state_word_2 - g_1AFFC98C0 - g_1AFFC98B4;
  g_1AF0C9578 = g_1AFFC98AC;
  g_1AF0C9584 = g_1AFFC98B8;
  g_1AF0C9594 = g_1AFFC98D8;
  g_1AF0C9588 = state_word_2 - g_1AFFC98D8 - g_1AFFC98CC;
  g_1AF0C9590 = g_1AFFC98C4;
  g_1AF0C959C = g_1AFFC98D0;
  g_1AF0C95AC = g_1AFFC98F0;
  g_1AF0C95A0 = state_word_2 - g_1AFFC98F0 - g_1AFFC98E4;
  g_1AF0C95A8 = g_1AFFC98DC;
  g_1AF0C95B4 = g_1AFFC98E8;
  g_1AF0C95C4 = g_1AFFC9908;
  g_1AF0C95B8 = state_word_2 - g_1AFFC9908 - g_1AFFC98FC;
  g_1AF0C95C0 = g_1AFFC98F4;
  g_1AF0C95CC = g_1AFFC9900;
  g_1AF0C95DC = g_1AFFC9920;
  g_1AE1C94F8 = state_word_2;
  g_1AF0C95D0 = state_word_2 - g_1AFFC9920 - g_1AFFC9914;
  g_1AF0C95D8 = g_1AFFC990C;
  g_1AF0C95E4 = g_1AFFC9918;
  g_1AF0C95F4 = g_1AFFC9938;
  g_1AF0C95E8 = state_word_2 - g_1AFFC9938 - g_1AFFC992C;
  g_1AF0C95F0 = g_1AFFC9924;
  g_1AF0C95FC = g_1AFFC9930;
  g_1AF0C960C = g_1AFFC9950;
  g_1AF0C9600 = state_word_2 - g_1AFFC9950 - g_1AFFC9944;
  g_1AF0C9608 = g_1AFFC993C;
  g_1AF0C9614 = g_1AFFC9948;
  g_1AF0C9624 = g_1AFFC9968;
  g_1AF0C9618 = state_word_2 - g_1AFFC9968 - g_1AFFC995C;
  g_1AF0C9620 = g_1AFFC9954;
  g_1AF0C962C = g_1AFFC9960;
  g_1AF0C963C = g_1AFFC9980;
  g_1AF0C9630 = state_word_2 - g_1AFFC9980 - g_1AFFC9974;
  g_1AF0C9638 = g_1AFFC996C;
  g_1AF0C9644 = g_1AFFC9978;
  g_1AF0C9654 = g_1AFFC9998;
  g_1AF0C9648 = state_word_2 - g_1AFFC998C - g_1AFFC9998;
  g_1AF0C9650 = g_1AFFC9984;
  g_1AF0C965C = g_1AFFC9990;
  g_1AF0C966C = g_1AFFC99B0;
  g_1AF0C9660 = state_word_2 - g_1AFFC99A4 - g_1AFFC99B0;
  g_1AF0C9668 = g_1AFFC999C;
  g_1AF0C9674 = g_1AFFC99A8;
  g_1AF0C9684 = g_1AFFC99C8;
  g_1AF0C9678 = state_word_2 - g_1AFFC99BC - g_1AFFC99C8;
  g_1AF0C9680 = g_1AFFC99B4;
  g_1AF0C968C = g_1AFFC99C0;
  g_1AE1C94FC = state_word_3;
  return g_1AFFC99C0;
}

//----- (000000014002B9C0) ----------------------------------------------------
__int64 sub_14002B9C0()
{
  int part;
  __int64 integer_sum;
  unsigned int cached_game_connected;
  unsigned int float_word;
  unsigned int masked_bits;
  unsigned int bit_mask;
  unsigned int masked_bits_2;
  unsigned int masked_bits_3;
  unsigned int masked_bits_4;
  __int64 scaled_index;
  float *state_address;
  __int64 scaled_index_2;
  float source_component_y;
  float scaled_value;
  float source_component_z;
  float squared_value;
  float square_root;
  float combined_products;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_value_2;
  float scaled_value_3;
  float weighted_sum;
  __int64 scaled_index_3;
  float weighted_sum_2;
  int state_address_2;
  int saved_part;
  float weighted_sum_3;
  float selected_scalar;
  float weighted_sum_4;
  bool comparison_result;
  __int64 integer_difference;
  float weighted_sum_5;
  float weighted_sum_6;
  int scaled_index_4;
  int scaled_index_5;
  int scaled_index_6;
  float weighted_sum_7;
  int saved_weighted_sum;
  int saved_weighted_sum_2;
  unsigned int *state_address_3;
  __int64 scaled_index_7;
  unsigned int *state_address_4;
  int iteration_count;
  __int64 iteration_count_2;
  __int64 scaled_index_8;
  __int64 remaining_count;
  float *state_address_5;
  int *running_total;
  float *state_address_6;
  __int64 loaded_word;
  unsigned int *mesh;
  unsigned int z;
  int world_block_gone_at_result;
  unsigned int cached_item_hit_block;
  int bit_mask_2;
  int item_break_block_part_result;
  __int64 scaled_index_9;
  unsigned int cached_game_tick;
  unsigned int layer;
  unsigned int state_word;
  unsigned int y;
  unsigned int x;
  unsigned int cached_world_event_count;
  unsigned int loword_result;
  __int64 shifted_bits;
  unsigned int loaded_word_2;
  unsigned int loaded_word_3;
  float scaled_value_4;
  __int64 shifted_bits_2;
  int square_root_2;
  __int64 shifted_bits_3;
  __int64 masked_bits_5;
  int scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  int saved_square_root;
  signed int saved_state_word;
  float scaled_value_5;
  float weighted_sum_8;
  float source_component_y_2;
  float source_component_z_2;
  __int64 scaled_index_13;
  float limited_value;
  __int64 masked_bits_6;
  float weighted_sum_9;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  signed int cached_iteration_count;
  __int64 saved_state_word_2;
  float source_component_y_3;
  float scaled_value_6;
  float source_component_z_3;
  int saved_square_root_2;
  int square_root_3;
  __int64 scaled_index_14;
  __int64 shifted_bits_4;
  float weighted_sum_10;
  unsigned int cached_world_event_count_2;
  __int64 shifted_bits_5;
  __int64 shifted_bits_6;
  int *running_total_2;
  __int64 remaining_count_2;
  __int64 loaded_word_4;
  unsigned int cached_world_effect_count;
  unsigned int masked_bits_7;
  unsigned int masked_bits_8;
  __int64 scaled_index_15;
  unsigned int *state_address_7;
  unsigned int table_value;
  unsigned int table_value_2;
  unsigned int loaded_word_5;
  unsigned int cached_world_event_count_3;
  __int64 shifted_bits_7;
  __int64 scaled_index_16;
  int masked_bits_9;
  float source_component_y_4;
  int saved_square_root_3;
  float scaled_value_7;
  float source_component_z_4;
  int square_root_4;
  int integer_difference_2;
  unsigned int cached_world_event_count_4;
  __int64 shifted_bits_8;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002B9C0[16960];
#define cached_callee_output_word (*(int (*))(void *)(sr_frame_14002B9C0 + 0)) /* [rsp+10h] */
#define iteration_count_3 (*(int (*))(void *)(sr_frame_14002B9C0 + 4)) /* [rsp+14h] */
#define state_word_2 (*(signed int (*))(void *)(sr_frame_14002B9C0 + 8)) /* [rsp+18h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_14002B9C0 + 12)) /* [rsp+1Ch] */
#define saved_loaded_word (*(int (*))(void *)(sr_frame_14002B9C0 + 16)) /* [rsp+20h] */
#define saved_iteration_count_2 (*(__int64 (*))(void *)(sr_frame_14002B9C0 + 24)) /* [rsp+28h] */
#define state_word_3 (*(signed int (*))(void *)(sr_frame_14002B9C0 + 32)) /* [rsp+30h] */
#define state_word_4 (*(unsigned int (*))(void *)(sr_frame_14002B9C0 + 36)) /* [rsp+34h] */
#define cached_scaled_index (*(__int64 (*))(void *)(sr_frame_14002B9C0 + 40)) /* [rsp+38h] */
#define saved_state_address (*(float * (*))(void *)(sr_frame_14002B9C0 + 48)) /* [rsp+40h] */
#define iteration_count_4 (*(__int64 (*))(void *)(sr_frame_14002B9C0 + 56)) /* [rsp+48h] */
#define scratch_buffer (*(_DWORD (*)[2156])(void *)(sr_frame_14002B9C0 + 72)) /* [rsp+58h] */
#define frame_float_at_8696 (*(float (*))(void *)(sr_frame_14002B9C0 + 8696)) /* [rsp+2208h] */
#define callee_output_word (*(unsigned int (*))(void *)(sr_frame_14002B9C0 + 8712)) /* [rsp+2218h] */
#define scratch_buffer_2 (*(_BYTE (*)[2056])(void *)(sr_frame_14002B9C0 + 8720)) /* [rsp+2220h] */
#define minimum (*(int (*)[4])(void *)(sr_frame_14002B9C0 + 10776)) /* [rsp+2A28h] */
#define maximum (*(int (*)[4])(void *)(sr_frame_14002B9C0 + 10792)) /* [rsp+2A38h] */
#define scratch_buffer_3 (*(_BYTE (*)[6144])(void *)(sr_frame_14002B9C0 + 10808)) /* [rsp+2A48h] */
#define unused_frame_slot_16952 (*(__int64 (*))(void *)(sr_frame_14002B9C0 + 16952)) /* [rsp+4248h] */

  part = 0;
  iteration_count_3 = 0;
  if ( (int)world_bullet_count > 0 )
  {
    integer_sum = 0;
    cached_game_connected = game_connected;
    state_word_4 = cached_callee_output_word;
    state_word_3 = cached_callee_output_word;
    cached_callee_output_word = callee_output_word;
    float_word = callee_output_word;
    masked_bits = callee_output_word;
    bit_mask = callee_output_word;
    masked_bits_2 = callee_output_word;
    masked_bits_3 = callee_output_word;
    masked_bits_4 = callee_output_word;
    iteration_count_4 = 0;
    state_word_2 = callee_output_word;
    while ( 1 )
    {
      scaled_index = 92 * integer_sum;
      state_address = (float *)&dword_140404A6C[23 * integer_sum + 437914592];
      cached_scaled_index = scaled_index;
      saved_state_address = state_address;
      scaled_index_2 = (int)dword_140404A6C[23 * integer_sum + 437914581];
      *(unsigned int *)((char *)&g_1A8A879E0 + scaled_index) = dword_140404A6C[23 * integer_sum + 437914586];
      *(unsigned int *)((char *)&g_1A8A879E4 + scaled_index) = dword_140404A6C[23 * integer_sum + 437914587];
      *(unsigned int *)((char *)&g_1A8A879E8 + scaled_index) = dword_140404A6C[23 * integer_sum + 437914588];
      *(float *)((char *)&g_1A8A879F0 + scaled_index) = *(float *)&dword_140404A6C[23 * integer_sum + 437914593]
                                                           - *(float *)&dword_140404A6C[23 * integer_sum + 437914585];
      source_component_y = state_address[1];
      scaled_value = *state_address;
      source_component_z = state_address[2];
      squared_value = (float)((float)(scaled_value * scaled_value) + (float)(source_component_y * source_component_y)) + (float)(source_component_z * source_component_z);
      square_root = fsqrt(squared_value);
      combined_products = -(float)(squared_value * *(float *)&dword_140404A6C[6 * scaled_index_2 + 437914198]);
      if ( square_root == 0.0 )
      {
        scaled_ratio_2 = 0.0;
        scaled_value_2 = 0.0;
        scaled_value_3 = 0.0;
      }
      else
      {
        scaled_ratio = 1.0 / square_root;
        scaled_ratio_2 = (float)(1.0 / square_root) * scaled_value;
        scaled_value_2 = scaled_ratio * source_component_y;
        scaled_value_3 = scaled_ratio * source_component_z;
      }
      weighted_sum = (float)(scaled_ratio_2 * combined_products) + scaled_value;
      scaled_index_3 = 23 * integer_sum;
      state_address[2] = (float)(scaled_value_3 * combined_products) + source_component_z;
      *state_address = weighted_sum;
      state_address[1] = (float)(scaled_value_2 * combined_products) + source_component_y;
      *(float *)((char *)&g_1A8A879D4 + scaled_index) = weighted_sum + *(float *)((char *)&g_1A8A879D4 + scaled_index);
      *(float *)((char *)&g_1A8A879D8 + scaled_index) = *(float *)((char *)&g_1A8A879F0 + scaled_index)
                                                           + *(float *)((char *)&g_1A8A879D8 + scaled_index);
      *(float *)((char *)&g_1A8A879DC + scaled_index) = *(float *)((char *)&g_1A8A879F4 + scaled_index)
                                                           + *(float *)((char *)&g_1A8A879DC + scaled_index);
      weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_3 + 437914586];
      state_address_2 = (int)(float)(*(float *)&dword_140404A6C[scaled_index_3 + 437914589] * 0.25);
      if ( weighted_sum_2 >= *(float *)&dword_140404A6C[scaled_index_3 + 437914589] )
      {
        minimum[0] = (int)(float)(*(float *)&dword_140404A6C[scaled_index_3 + 437914589] * 0.25);
        state_address_2 = (int)(float)(weighted_sum_2 * 0.25);
      }
      else
      {
        minimum[0] = (int)(float)(weighted_sum_2 * 0.25);
      }
      saved_part = -1;
      weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index_3 + 437914587];
      selected_scalar = 1.0;
      weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_3 + 437914590];
      comparison_result = weighted_sum_4 <= weighted_sum_3;
      integer_difference = -1;
      maximum[0] = state_address_2;
      saved_iteration_count = -1;
      saved_iteration_count_2 = -1;
      saved_loaded_word = -1;
      weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_3 + 437914588];
      weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_3 + 437914591];
      scaled_index_4 = (int)(float)(weighted_sum_3 * 0.25);
      scaled_index_5 = (int)(float)(weighted_sum_4 * 0.25);
      scaled_index_6 = scaled_index_4;
      if ( weighted_sum_4 <= weighted_sum_3 )
        scaled_index_6 = (int)(float)(weighted_sum_4 * 0.25);
      weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_3 + 437914588] * 0.25;
      if ( comparison_result )
        scaled_index_5 = scaled_index_4;
      minimum[1] = scaled_index_6;
      maximum[1] = scaled_index_5;
      saved_weighted_sum = (int)weighted_sum_7;
      saved_weighted_sum_2 = (int)(float)(weighted_sum_6 * 0.25);
      if ( weighted_sum_6 <= weighted_sum_5 )
      {
        saved_weighted_sum = (int)(float)(weighted_sum_6 * 0.25);
        saved_weighted_sum_2 = (int)weighted_sum_7;
      }
      maximum[2] = saved_weighted_sum_2;
      minimum[2] = saved_weighted_sum;
      if ( cached_game_connected )
      {
        state_address_3 = &g_18329E310;
        do
        {
          if ( *(state_address_3 - 2) )
          {
            if ( sub_1400DB060(
                   part,
                   (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * iteration_count_3 + 1755871712),
                   (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * iteration_count_3 + 1755871700),
                   0.0)
              && selected_scalar > (world_unknown_151a84898) )
            {
              scaled_index_7 = (int)*state_address_3;
              if ( ((_DWORD)scaled_index_7 != *(unsigned int *)((char *)&g_1A8A879C8 + scaled_index)
                 || g_151A848B4 == 7
                 || (int)g_151A848B4 <= 4
                 || (int)g_151A848B4 >= 10)
                && ((_DWORD)scaled_index_7 == -1 || !dword_140404A6C[3597 * scaled_index_7 + 71856277]) )
              {
                float_word = g_151A84880;
                saved_part = part;
                masked_bits = *(unsigned int *)&ragdoll_unknown_height;
                selected_scalar = (world_unknown_151a84898);
                bit_mask = g_151A84888;
                masked_bits_2 = *(unsigned int *)&g_151A8488C;
                masked_bits_3 = *(unsigned int *)&g_151A84890;
                masked_bits_4 = *(unsigned int *)&g_151A84894;
                state_word_2 = g_151A848B4;
              }
            }
          }
          ++part;
          state_address_3 += 7166;
        }
        while ( part < 256 );
        state_address = saved_state_address;
        state_address_4 = &g_15F2D9200;
        iteration_count = 0;
        iteration_count_2 = 0;
        do
        {
          if ( *state_address_4
            && (unsigned int)sub_1400DC940(
                               iteration_count,
                               (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * iteration_count_3 + 1755871712),
                               (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * iteration_count_3 + 1755871700),
                               1)
            && selected_scalar > (world_unknown_151a84898) )
          {
            saved_part = -1;
            float_word = g_151A84880;
            selected_scalar = (world_unknown_151a84898);
            masked_bits = *(unsigned int *)&ragdoll_unknown_height;
            bit_mask = g_151A84888;
            masked_bits_2 = *(unsigned int *)&g_151A8488C;
            masked_bits_3 = *(unsigned int *)&g_151A84890;
            masked_bits_4 = *(unsigned int *)&g_151A84894;
            state_word_4 = g_151A848AC;
            state_word_3 = g_151A848B0;
            state_word_2 = g_151A848B4;
            saved_iteration_count = iteration_count;
            saved_iteration_count_2 = iteration_count_2;
          }
          ++iteration_count;
          ++iteration_count_2;
          state_address_4 += 5210;
        }
        while ( iteration_count < 512 );
        sr_world_grid_query_items((int *)&callee_output_word, minimum, maximum);
        scaled_index = cached_scaled_index;
        cached_callee_output_word = callee_output_word;
        if ( (int)callee_output_word > 0 )
        {
          scaled_index_8 = 23LL * iteration_count_3;
          remaining_count = callee_output_word;
          state_address_5 = (float *)&dword_140404A6C[scaled_index_8 + 437914586];
          running_total = (int *)scratch_buffer_2;
          state_address_6 = (float *)&dword_140404A6C[scaled_index_8 + 437914589];
          do
          {
            loaded_word = *running_total;
            mesh = &dword_140404A6C[1268 * dword_140404A6C[1760 * loaded_word + 278845898] + 278522247];
            sr_collision_place_mesh(
              (__int64)scratch_buffer_3,
              (__int64)mesh,
              (float *)&dword_140404A6C[1760 * loaded_word + 278845916],
              (float *)&dword_140404A6C[1760 * loaded_word + 278845934]);
            if ( sub_1400DA960((__int64)scratch_buffer, (__int64)mesh, (__int64)scratch_buffer_3, state_address_6, state_address_5) && selected_scalar > frame_float_at_8696 )
            {
              float_word = scratch_buffer[0];
              saved_part = -1;
              masked_bits = scratch_buffer[1];
              selected_scalar = frame_float_at_8696;
              bit_mask = scratch_buffer[2152];
              masked_bits_2 = scratch_buffer[2153];
              masked_bits_3 = scratch_buffer[2154];
              masked_bits_4 = scratch_buffer[2155];
              saved_iteration_count = -1;
              saved_iteration_count_2 = -1;
              saved_loaded_word = loaded_word;
            }
            running_total += 2;
            --remaining_count;
          }
          while ( remaining_count );
          scaled_index = cached_scaled_index;
          state_address = saved_state_address;
        }
        integer_difference = saved_iteration_count_2;
        part = 0;
      }
      if ( (unsigned int)sub_1400DC050(
                           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * iteration_count_3 + 1755871712),
                           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 92LL * iteration_count_3 + 1755871700),
                           1)
        && selected_scalar > (world_unknown_151a84898) )
      {
        break;
      }
      cached_game_connected = game_connected;
      cached_game_tick = game_tick;
LABEL_68:
      if ( cached_game_connected )
      {
        if ( saved_part == -1 )
        {
          saved_state_word = state_word_2;
        }
        else
        {
          square_root_2 = (int)(float)((float)((float)(fsqrt(
                                               (float)((float)(*state_address * *state_address) + (float)(state_address[1] * state_address[1]))
                                             + (float)(state_address[2] * state_address[2]))
                                           * 330.0)
                                   * *(float *)((char *)&g_1A8A879CC + scaled_index))
                           - 2.0);
          if ( square_root_2 > 0 )
          {
            shifted_bits_3 = (__int64)(int)world_event_count++ << 7;
            HIWORD(world_event_count) = 0;
            *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3) = 1;
            *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_3) = cached_game_tick;
            *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_3) = float_word;
            *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_3) = masked_bits;
            *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_3) = bit_mask;
            *(unsigned int *)((char *)&g_1873DE474 + shifted_bits_3) = masked_bits_2;
            *(unsigned int *)((char *)&g_1873DE478 + shifted_bits_3) = masked_bits_3;
            *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_3) = masked_bits_4;
            *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_3) = 0;
            *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_3) = 1;
          }
          else
          {
            square_root_2 = 0;
          }
          if ( state_word_2 == 3 )
          {
            if ( square_root_2 < 25 )
            {
              if ( square_root_2 < 10 )
                square_root_2 *= 2;
              else
                square_root_2 *= 3;
            }
            else
            {
              square_root_2 *= 4;
            }
          }
          masked_bits_5 = *(int *)((char *)&g_1A8A879C8 + scaled_index);
          if ( (_DWORD)masked_bits_5 != -1 )
          {
            scaled_index_10 = dword_140404A6C[7166 * saved_part + 280651305];
            if ( scaled_index_10 != -1 )
              sub_140116D80(masked_bits_5, scaled_index_10, square_root_2);
          }
          if ( game_type != 5 && (_DWORD)masked_bits_5 != -1 )
          {
            scaled_index_11 = (int)dword_140404A6C[7166 * saved_part + 280651305];
            if ( (_DWORD)scaled_index_11 != -1
              && (_DWORD)masked_bits_5 != (_DWORD)scaled_index_11
              && dword_140404A6C[3597 * masked_bits_5 + 71856286] == dword_140404A6C[3597 * scaled_index_11 + 71856286] )
            {
              sub_14011B7F0(masked_bits_5, square_root_2);
            }
          }
          scaled_index_12 = 7166LL * saved_part;
          if ( dword_140404A6C[scaled_index_12 + 280651319] && (int)dword_140404A6C[scaled_index_12 + 280651320] > 0 )
            square_root_2 = 0;
          saved_square_root = square_root_2;
          saved_state_word = state_word_2;
          sub_1400A9760(saved_part, state_word_2, 0, saved_square_root);
          scaled_value_5 = *state_address;
          weighted_sum_8 = *(float *)((char *)&g_1A8A879CC + scaled_index);
          source_component_y_2 = state_address[1];
          source_component_z_2 = state_address[2];
          cached_game_connected = game_connected;
          scaled_index_13 = scaled_index_12 * 4 + 312LL * state_word_2;
          cached_game_tick = game_tick;
          limited_value = fmaxf(*(float *)((char *)&g_18329E5AC + scaled_index_13), 6.0);
          masked_bits_6 = 47LL * *(int *)((char *)&g_18329E528 + scaled_index_13);
          *(unsigned int *)((char *)&g_1A8A879C4 + scaled_index) = 0;
          weighted_sum_9 = (float)(weighted_sum_8 / (float)((float)(limited_value * 0.5) + weighted_sum_8)) * 3.0;
          *(float *)&dword_140404A6C[masked_bits_6 + 18215718] = (float)(weighted_sum_9 * scaled_value_5) + *(float *)&dword_140404A6C[masked_bits_6 + 18215718];
          *(float *)&dword_140404A6C[masked_bits_6 + 18215719] = (float)(weighted_sum_9 * source_component_y_2) + *(float *)&dword_140404A6C[masked_bits_6 + 18215719];
          *(float *)&dword_140404A6C[masked_bits_6 + 18215720] = (float)(weighted_sum_9 * source_component_z_2) + *(float *)&dword_140404A6C[masked_bits_6 + 18215720];
          combined_products_2 = *(float *)&bit_mask - *(float *)&dword_140404A6C[masked_bits_6 + 18215717];
          combined_products_3 = *(float *)&float_word - *(float *)&dword_140404A6C[masked_bits_6 + 18215715];
          combined_products_4 = *(float *)&masked_bits - *(float *)&dword_140404A6C[masked_bits_6 + 18215716];
          *(float *)&dword_140404A6C[masked_bits_6 + 18215733] = (float)((float)((float)(combined_products_2 * source_component_y_2) - (float)(combined_products_4 * source_component_z_2)) * weighted_sum_9)
                                                     + *(float *)&dword_140404A6C[masked_bits_6 + 18215733];
          *(float *)&dword_140404A6C[masked_bits_6 + 18215734] = (float)((float)((float)(combined_products_3 * source_component_z_2) - (float)(combined_products_2 * scaled_value_5)) * weighted_sum_9)
                                                     + *(float *)&dword_140404A6C[masked_bits_6 + 18215734];
          *(float *)&dword_140404A6C[masked_bits_6 + 18215735] = (float)((float)((float)(combined_products_4 * scaled_value_5) - (float)(combined_products_3 * source_component_y_2)) * weighted_sum_9)
                                                     + *(float *)&dword_140404A6C[masked_bits_6 + 18215735];
        }
        cached_iteration_count = saved_iteration_count;
        if ( saved_iteration_count != -1 )
        {
          saved_state_word_2 = state_word_3;
          if ( state_word_3 == -1 )
          {
            scaled_index_16 = 20840 * integer_difference + 172LL * saved_state_word;
            masked_bits_9 = *(unsigned int *)((char *)&g_15F2DCB54 + scaled_index_16);
            if ( masked_bits_9 > 0 )
            {
              source_component_y_4 = state_address[1];
              saved_square_root_3 = 0;
              scaled_value_7 = *state_address;
              source_component_z_4 = state_address[2];
              square_root_4 = (int)(float)((float)((float)(fsqrt(
                                                    (float)((float)(scaled_value_7 * scaled_value_7) + (float)(source_component_y_4 * source_component_y_4))
                                                  + (float)(source_component_z_4 * source_component_z_4))
                                                * 90.0)
                                        * *(float *)((char *)&g_1A8A879CC + scaled_index))
                                - 2.0);
              if ( square_root_4 > 0 )
                saved_square_root_3 = square_root_4;
              integer_difference_2 = masked_bits_9 - saved_square_root_3;
              *(unsigned int *)((char *)&g_15F2DCB54 + scaled_index_16) = integer_difference_2;
              if ( integer_difference_2 <= 0 )
              {
                *(unsigned int *)((char *)&g_15F2DCB4C + scaled_index_16) = 1;
                *(unsigned int *)((char *)&g_15F2DCB50 + scaled_index_16) |= 1u;
                *(float *)((char *)&g_15F2DCB78 + scaled_index_16) = *(float *)((char *)&g_15F2DCB78
                                                                                  + scaled_index_16)
                                                                       * 0.75;
                if ( cached_game_connected )
                {
                  cached_world_event_count_4 = world_event_count;
                  shifted_bits_8 = (__int64)(int)world_event_count << 7;
                  *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_8) = 4;
                  *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_8) = cached_game_tick;
                  *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_8) = cached_iteration_count;
                  *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_8) = 1;
                  *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_8) = saved_state_word;
                  *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_8) = float_word;
                  *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_8) = masked_bits;
                  *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_8) = bit_mask;
                  if ( !state_address )
                  {
                    source_component_z_4 = 0.0;
                    source_component_y_4 = 0.0;
                    scaled_value_7 = 0.0;
                  }
                  *(float *)((char *)&g_1873DE474 + shifted_bits_8) = scaled_value_7;
                  *(float *)((char *)&g_1873DE478 + shifted_bits_8) = source_component_y_4;
                  *(float *)((char *)&g_1873DE47C + shifted_bits_8) = source_component_z_4;
                  world_event_count = cached_world_event_count_4 + 1;
                  HIWORD(world_event_count) = 0;
                }
              }
            }
          }
          else
          {
            source_component_y_3 = state_address[1];
            scaled_value_6 = *state_address;
            source_component_z_3 = state_address[2];
            saved_square_root_2 = 0;
            square_root_3 = (int)(float)((float)((float)(fsqrt((float)((float)(scaled_value_6 * scaled_value_6) + (float)(source_component_y_3 * source_component_y_3)) + (float)(source_component_z_3 * source_component_z_3))
                                             * 90.0)
                                     * *(float *)((char *)&g_1A8A879CC + scaled_index))
                             - 2.0);
            if ( square_root_3 > 0 )
              saved_square_root_2 = square_root_3;
            scaled_index_14 = (int)dword_140404A6C[5210 * integer_difference + 129716710];
            if ( !dword_140404A6C[24944 * scaled_index_14 + 346707717] )
            {
              shifted_bits_4 = 20840 * integer_difference + ((__int64)state_word_3 << 6);
              if ( *(unsigned int *)((char *)&g_15F2D9A34 + shifted_bits_4) == 1 )
              {
                weighted_sum_10 = *(float *)((char *)&g_15F2D9A30 + shifted_bits_4);
                if ( weighted_sum_10 < 8.0 )
                  *(unsigned int *)((char *)&g_15F2D9A38 + shifted_bits_4) = (int)(float)((float)*(int *)((char *)&g_15F2D9A38 + shifted_bits_4)
                                                                                            - (float)(8.0 - weighted_sum_10));
                if ( *(int *)((char *)&g_15F2D9A38 + shifted_bits_4) <= 0 )
                {
                  if ( cached_game_connected )
                  {
                    cached_world_event_count_2 = world_event_count;
                    shifted_bits_5 = (__int64)(int)world_event_count << 7;
                    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_5) = 4;
                    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_5) = cached_game_tick;
                    *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_5) = cached_iteration_count;
                    *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_5) = 0;
                    *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_5) = saved_state_word_2;
                    *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_5) = float_word;
                    *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_5) = masked_bits;
                    *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_5) = bit_mask;
                    if ( !state_address )
                    {
                      source_component_z_3 = 0.0;
                      source_component_y_3 = 0.0;
                      scaled_value_6 = 0.0;
                    }
                    *(float *)((char *)&g_1873DE474 + shifted_bits_5) = scaled_value_6;
                    *(float *)((char *)&g_1873DE478 + shifted_bits_5) = source_component_y_3;
                    *(float *)((char *)&g_1873DE47C + shifted_bits_5) = source_component_z_3;
                    world_event_count = cached_world_event_count_2 + 1;
                    HIWORD(world_event_count) = 0;
                  }
                  *(unsigned int *)((char *)&g_15F2D9A38 + shifted_bits_4) = 0;
                }
                goto LABEL_111;
              }
              if ( cached_game_connected )
              {
                shifted_bits_6 = (__int64)(int)world_event_count++ << 7;
                goto LABEL_109;
              }
              goto LABEL_110;
            }
            if ( (_DWORD)scaled_index_14 == 13 )
              goto LABEL_111;
            if ( state_word_4 != 1 )
            {
              if ( cached_game_connected )
              {
                shifted_bits_6 = (__int64)(int)world_event_count++ << 7;
LABEL_109:
                *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_6) = 1;
                *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_6) = cached_game_tick;
                *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_6) = float_word;
                *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_6) = masked_bits;
                *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_6) = bit_mask;
                *(unsigned int *)((char *)&g_1873DE474 + shifted_bits_6) = masked_bits_2;
                *(unsigned int *)((char *)&g_1873DE478 + shifted_bits_6) = masked_bits_3;
                *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_6) = masked_bits_4;
                *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_6) = 0;
                *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_6) = 2;
                HIWORD(world_event_count) = 0;
              }
LABEL_110:
              sub_14000B650(cached_iteration_count, saved_square_root_2);
              cached_game_connected = game_connected;
              goto LABEL_111;
            }
            if ( cached_game_connected )
            {
              cached_world_event_count_3 = world_event_count;
              shifted_bits_7 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_7) = 4;
              *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_7) = cached_game_tick;
              *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_7) = cached_iteration_count;
              *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_7) = 0;
              *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_7) = saved_state_word_2;
              *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_7) = float_word;
              *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_7) = masked_bits;
              *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_7) = bit_mask;
              if ( !state_address )
              {
                source_component_z_3 = 0.0;
                source_component_y_3 = 0.0;
                scaled_value_6 = 0.0;
              }
              *(float *)((char *)&g_1873DE474 + shifted_bits_7) = scaled_value_6;
              *(float *)((char *)&g_1873DE478 + shifted_bits_7) = source_component_y_3;
              *(float *)((char *)&g_1873DE47C + shifted_bits_7) = source_component_z_3;
              world_event_count = cached_world_event_count_3 + 1;
              HIWORD(world_event_count) = 0;
            }
            dword_140404A6C[5210 * integer_difference + 129719268 + saved_state_word_2] = 1;
          }
LABEL_111:
          *(unsigned int *)((char *)&g_1A8A879C4 + scaled_index) = 0;
        }
        if ( saved_loaded_word != -1 )
        {
          if ( dword_140404A6C[1760 * saved_loaded_word + 278845898] == 45 )
            dword_140404A6C[1760 * saved_loaded_word + 278845971] = 0;
          if ( cached_callee_output_word > 0 )
          {
            running_total_2 = (int *)scratch_buffer_2;
            remaining_count_2 = (unsigned int)cached_callee_output_word;
            do
            {
              loaded_word_4 = *running_total_2;
              running_total_2 += 2;
              *(_QWORD *)&dword_140404A6C[1760 * loaded_word_4 + 278845895] = 0;
              --remaining_count_2;
            }
            while ( remaining_count_2 );
          }
          *(unsigned int *)((char *)&g_1A8A879C4 + scaled_index) = 0;
        }
        part = 0;
      }
      cached_world_effect_count = world_effect_count;
      masked_bits_7 = dword_140404A6C[6 * *(unsigned int *)((char *)&g_1A8A879C0 + scaled_index) + 437914199];
      if ( (int)world_effect_count < 0x4000 )
      {
        masked_bits_8 = *(unsigned int *)((char *)&g_1A8A879D4 + scaled_index);
        scaled_index_15 = 37LL * (int)world_effect_count;
        dword_140404A6C[scaled_index_15 + 432826949] = 5;
        dword_140404A6C[scaled_index_15 + 432826952] = masked_bits_8;
        dword_140404A6C[scaled_index_15 + 432826953] = *(unsigned int *)((char *)&g_1A8A879D8 + scaled_index);
        dword_140404A6C[scaled_index_15 + 432826954] = *(unsigned int *)((char *)&g_1A8A879DC + scaled_index);
        state_address_7 = (unsigned int *)((char *)&g_1A8A879E0 + scaled_index);
        if ( (char *)&g_1A8A879E0 + scaled_index )
        {
          table_value = state_address_7[2];
          table_value_2 = state_address_7[1];
          loaded_word_5 = *state_address_7;
        }
        else
        {
          table_value = 0;
          table_value_2 = 0;
          loaded_word_5 = 0;
        }
        dword_140404A6C[scaled_index_15 + 432826955] = loaded_word_5;
        dword_140404A6C[scaled_index_15 + 432826956] = table_value_2;
        dword_140404A6C[scaled_index_15 + 432826957] = table_value;
        *(_QWORD *)&dword_140404A6C[scaled_index_15 + 432826950] = 3;
        dword_140404A6C[scaled_index_15 + 432826984] = masked_bits_7;
        dword_140404A6C[scaled_index_15 + 432826985] = masked_bits_7;
        dword_140404A6C[scaled_index_15 + 432826983] = 1063256064;
        world_effect_count = cached_world_effect_count + 1;
      }
      integer_sum = iteration_count_4 + 1;
      ++iteration_count_3;
      ++iteration_count_4;
      if ( iteration_count_3 >= (int)world_bullet_count )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    cached_game_connected = game_connected;
    saved_part = -1;
    float_word = g_151A84880;
    masked_bits = *(unsigned int *)&ragdoll_unknown_height;
    bit_mask = g_151A84888;
    masked_bits_2 = *(unsigned int *)&g_151A8488C;
    masked_bits_3 = *(unsigned int *)&g_151A84890;
    masked_bits_4 = *(unsigned int *)&g_151A84894;
    saved_iteration_count = -1;
    saved_loaded_word = -1;
    saved_iteration_count_2 = -1;
    if ( game_connected )
    {
      z = g_151A848E0;
      if ( item_hit_block_part == -1 )
      {
        layer = item_hit_layer;
        state_word = g_151A848F0;
        y = g_151A848DC;
        x = g_151A848D8;
        if ( item_hit_layer > 3
          || (g_151A848D8 & 0x80000000) != 0
          || (g_151A848F0 & 0xE0000000) != 0x80000000
          || (g_151A848F4 & 0x10000) == 0 )
        {
          cached_game_tick = game_tick;
          part = 0;
          shifted_bits_2 = (__int64)(int)world_event_count++ << 7;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_2) = 1;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_2) = cached_game_tick;
          *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_2) = float_word;
          *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_2) = masked_bits;
          *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_2) = bit_mask;
          *(unsigned int *)((char *)&g_1873DE474 + shifted_bits_2) = masked_bits_2;
          *(unsigned int *)((char *)&g_1873DE478 + shifted_bits_2) = masked_bits_3;
          *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_2) = masked_bits_4;
          *(_QWORD *)((char *)&g_1873DE480 + shifted_bits_2) = 0;
          goto LABEL_57;
        }
        cached_world_event_count = world_event_count;
        cached_game_tick = game_tick;
        loword_result = LOWORD(g_151A848F4);
        shifted_bits = (__int64)(int)world_event_count << 7;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 16;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = layer + (x << 16);
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = y + (z << 16);
        *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = state_word;
        *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = loword_result;
        *(unsigned int *)((char *)&g_1873DE468 + shifted_bits) = float_word;
        *(unsigned int *)((char *)&g_1873DE46C + shifted_bits) = masked_bits;
        *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = bit_mask;
        if ( state_address )
        {
          loaded_word_2 = *((_DWORD *)state_address + 2);
          loaded_word_3 = *((_DWORD *)state_address + 1);
          scaled_value_4 = *state_address;
        }
        else
        {
          loaded_word_2 = 0;
          loaded_word_3 = 0;
          scaled_value_4 = 0.0;
        }
        *(float *)((char *)&g_1873DE474 + shifted_bits) = scaled_value_4;
        *(unsigned int *)((char *)&g_1873DE478 + shifted_bits) = loaded_word_3;
        *(unsigned int *)((char *)&g_1873DE47C + shifted_bits) = loaded_word_2;
        world_event_count = cached_world_event_count + 1;
        HIWORD(world_event_count) = 0;
        sr_world_set_block_unknown_3008(layer, x, y, z, state_word | (0x10000 << loword_result));
        scaled_index = cached_scaled_index;
LABEL_56:
        part = 0;
LABEL_57:
        integer_difference = saved_iteration_count_2;
        *(unsigned int *)((char *)&g_1A8A879D4 + scaled_index) = float_word;
        *(unsigned int *)((char *)&g_1A8A879D8 + scaled_index) = masked_bits;
        *(unsigned int *)((char *)&g_1A8A879DC + scaled_index) = bit_mask;
        *(unsigned int *)((char *)&g_1A8A879C4 + scaled_index) = 0;
        goto LABEL_68;
      }
      world_block_gone_at_result = sr_world_block_gone_at(
              item_hit_layer,
              g_151A848D8,
              g_151A848DC,
              g_151A848E0);
      cached_item_hit_block = item_hit_block;
      bit_mask_2 = world_block_gone_at_result;
      if ( (int)dword_140404A6C[948 * item_hit_block + 272299416] > 0 )
      {
        do
        {
          if ( !_bittest(&bit_mask_2, part) )
          {
            item_break_block_part_result = sr_item_break_block_part(
                    cached_item_hit_block + (item_hit_block_turn << 24),
                    part,
                    item_hit_layer,
                    g_151A848D8,
                    g_151A848DC,
                    g_151A848E0);
            if ( item_break_block_part_result != -1 && part == item_hit_block_part )
            {
              scaled_index_9 = 1760LL * item_break_block_part_result;
              if ( dword_140404A6C[scaled_index_9 + 278845898] == 45 )
                dword_140404A6C[scaled_index_9 + 278845971] = 0;
            }
            cached_item_hit_block = item_hit_block;
          }
          ++part;
        }
        while ( part < (int)dword_140404A6C[948 * cached_item_hit_block + 272299416] );
        cached_game_connected = game_connected;
      }
    }
    cached_game_tick = game_tick;
    goto LABEL_56;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef cached_callee_output_word
#undef iteration_count_3
#undef state_word_2
#undef saved_iteration_count
#undef saved_loaded_word
#undef saved_iteration_count_2
#undef state_word_3
#undef state_word_4
#undef cached_scaled_index
#undef saved_state_address
#undef iteration_count_4
#undef scratch_buffer
#undef frame_float_at_8696
#undef callee_output_word
#undef scratch_buffer_2
#undef minimum
#undef maximum
#undef scratch_buffer_3
#undef unused_frame_slot_16952

//----- (000000014002D050) ----------------------------------------------------
float            sub_14002D050(float *a1, float *a2, float *a3)
{
  float reordered_vector;
  float float_lane_2;
  float float_lane_0;
  float float_lane_1;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float product_difference;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  double acos_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002D050[32];
#define quaternion (*(float (*))(void *)(sr_frame_14002D050 + 0)) /* [rsp+20h] */
#define frame_float_at_4 (*(float (*))(void *)(sr_frame_14002D050 + 4)) /* [rsp+24h] */
#define frame_float_at_8 (*(float (*))(void *)(sr_frame_14002D050 + 8)) /* [rsp+28h] */
#define frame_float_at_12 (*(float (*))(void *)(sr_frame_14002D050 + 12)) /* [rsp+2Ch] */
#define xor_vector (*(__m128 (*))(void *)(sr_frame_14002D050 + 16)) /* [rsp+30h] */

  sr_math_quat_from_mat3(&quaternion, a2);
  sr_math_quat_from_mat3(SR_VEC_LANES(128, xor_vector, f32), a3);
  reordered_vector = SR_VEC_LANES(128, xor_vector, f32)[3];
  float_lane_2 = SR_VEC_LANES(128, xor_vector, f32)[2];
  float_lane_0 = SR_VEC_LANES(128, xor_vector, f32)[0];
  float_lane_1 = SR_VEC_LANES(128, xor_vector, f32)[1];
  if ( (float)((float)((float)(frame_float_at_12 * SR_VEC_LANES(128, xor_vector, f32)[3]) + (float)(frame_float_at_8 * SR_VEC_LANES(128, xor_vector, f32)[2]))
             + (float)((float)(quaternion * SR_VEC_LANES(128, xor_vector, f32)[0]) + (float)(frame_float_at_4 * SR_VEC_LANES(128, xor_vector, f32)[1]))) < 0.0 )
  {
    xor_vector = _mm_xor_ps(xor_vector, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    float_lane_2 = SR_VEC_LANES(128, xor_vector, f32)[2];
    float_lane_1 = SR_VEC_LANES(128, xor_vector, f32)[1];
    float_lane_0 = SR_VEC_LANES(128, xor_vector, f32)[0];
    reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_ps(xor_vector, xor_vector, 255), f32)[0];
  }
  component_delta = -float_lane_1;
  component_delta_2 = -float_lane_0;
  component_delta_3 = -float_lane_2;
  combined_products = (float)((float)((float)(component_delta_2 * frame_float_at_12) + (float)(reordered_vector * quaternion)) + (float)(component_delta * frame_float_at_8)) - (float)(component_delta_3 * frame_float_at_4);
  combined_products_2 = (float)((float)((float)(reordered_vector * frame_float_at_4) - (float)(component_delta_2 * frame_float_at_8)) + (float)(component_delta * frame_float_at_12)) + (float)(component_delta_3 * quaternion);
  combined_products_3 = (float)((float)((float)(component_delta_2 * frame_float_at_4) + (float)(reordered_vector * frame_float_at_8)) - (float)(component_delta * quaternion)) + (float)(component_delta_3 * frame_float_at_12);
  product_difference = (float)((float)((float)(frame_float_at_12 * reordered_vector) - (float)(component_delta_2 * quaternion)) - (float)(component_delta * frame_float_at_4)) - (float)(component_delta_3 * frame_float_at_8);
  square_root = fsqrt((float)((float)(combined_products_2 * combined_products_2) + (float)(combined_products * combined_products)) + (float)(combined_products_3 * combined_products_3));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
  }
  else
  {
    scaled_ratio = combined_products_3 * (float)(1.0 / square_root);
    scaled_ratio_2 = combined_products_2 * (float)(1.0 / square_root);
    scaled_ratio_3 = combined_products * (float)(1.0 / square_root);
  }
  *a1 = scaled_ratio_3;
  a1[1] = scaled_ratio_2;
  a1[2] = scaled_ratio;
  acos_result = acos(fminf(fmaxf(product_difference, -1.0), 1.0));
  return acos_result + acos_result;
}
#undef quaternion
#undef frame_float_at_4
#undef frame_float_at_8
#undef frame_float_at_12
#undef xor_vector

//----- (000000014002E730) ----------------------------------------------------
__int64            sub_14002E730(__int64 a1, int a2, __int64 a3, float *a4)
{
  __int64 input_value;
  __int64 result;
  signed __int64 running_total;
  signed int cached_integer_sum;
  __int64 input_value_2;
  __int64 iteration_count;
  float *weighted_sum;
  __int64 remaining_count;
  __int64 iteration_count_2;
  __int64 remaining_count_2;
  float *running_total_2;
  __int64 iteration_count_3;
  __int64 remaining_count_3;
  float *running_total_3;
  float product_difference;
  float *running_total_4;
  float scaled_value;
  float product_difference_2;
  __int64 remaining_count_4;
  float source_component_y;
  float product_difference_3;
  float component_delta;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float product_difference_7;
  float product_difference_8;
  float product_difference_9;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float product_difference_10;
  float component_delta_2;
  int integer_sum;
  __int64 iteration_count_4;
  __int64 remaining_count_5;
  float *weighted_sum_2;
  float combined_products;
  __int64 iteration_count_5;
  float *weighted_sum_3;
  __int64 integer_sum_2;
  __int64 iteration_count_6;
  float *running_total_5;
  __int64 integer_sum_3;
  __int64 iteration_count_7;
  float *running_total_6;
  float source_component_y_2;
  float scaled_value_2;
  float component_delta_3;
  float product_difference_11;
  float product_difference_12;
  float product_difference_13;
  float product_difference_14;
  float product_difference_15;
  float product_difference_16;
  float product_difference_17;
  float product_difference_18;
  float product_difference_19;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float product_difference_20;
  float product_difference_21;
  float product_difference_22;
  __int64 iteration_count_8;
  __m128 converted_vector;
  __m128 vector_result;
  __m128 vector_result_2;
  __m128 loaded_vector;
  __m128 converted_vector_2;
  unsigned __int64 remaining_count_6;
  __m128 reordered_vector;
  __m128 loaded_vector_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002E730[256];
#define reordered_vector_2 (*(__m128i (*))(void *)(sr_frame_14002E730 + 0)) /* [rsp+10h] */
#define input_value_3 (*(signed int (*))(void *)(sr_frame_14002E730 + 248)) /* [rsp+108h] */

  input_value_3 = a2;
  input_value = a1;
  result = a3;
  running_total = 0;
  cached_integer_sum = 0;
  input_value_2 = a2;
  if ( a2 > 0 )
  {
    iteration_count = 1;
    weighted_sum = (float *)(result + 4);
    remaining_count = a2;
    do
    {
      if ( iteration_count < input_value_2 )
      {
        iteration_count_2 = iteration_count + 1;
        remaining_count_2 = input_value_2 - iteration_count;
        running_total_2 = weighted_sum + 3;
        do
        {
          if ( iteration_count_2 < input_value_2 )
          {
            iteration_count_3 = iteration_count_2 + 1;
            remaining_count_3 = input_value_2 - iteration_count_2;
            running_total_3 = running_total_2 + 3;
            do
            {
              if ( iteration_count_3 < input_value_2 )
              {
                product_difference = *(running_total_2 - 1);
                running_total_4 = running_total_3 + 4;
                scaled_value = *running_total_2;
                product_difference_2 = *(running_total_3 - 1) - product_difference;
                remaining_count_4 = input_value_2 - iteration_count_3;
                source_component_y = running_total_2[1];
                product_difference_3 = *running_total_3 - *running_total_2;
                component_delta = running_total_3[1] - source_component_y;
                product_difference_4 = *(weighted_sum - 1) - product_difference;
                do
                {
                  product_difference_5 = *(running_total_4 - 2) - product_difference;
                  product_difference_6 = *(running_total_4 - 1) - scaled_value;
                  product_difference_7 = (float)(component_delta * product_difference_6) - (float)((float)(*running_total_4 - source_component_y) * product_difference_3);
                  product_difference_8 = (float)((float)(*running_total_4 - source_component_y) * product_difference_2) - (float)(product_difference_5 * component_delta);
                  product_difference_9 = (float)(product_difference_5 * product_difference_3) - (float)(product_difference_2 * product_difference_6);
                  square_root = fsqrt((float)((float)(product_difference_8 * product_difference_8) + (float)(product_difference_7 * product_difference_7)) + (float)(product_difference_9 * product_difference_9));
                  if ( square_root == 0.0 )
                  {
                    scaled_ratio = 0.0;
                    scaled_ratio_2 = 0.0;
                    scaled_ratio_3 = 0.0;
                  }
                  else
                  {
                    scaled_ratio = product_difference_7 * (float)(1.0 / square_root);
                    scaled_ratio_2 = product_difference_8 * (float)(1.0 / square_root);
                    scaled_ratio_3 = product_difference_9 * (float)(1.0 / square_root);
                  }
                  product_difference_10 = *weighted_sum - scaled_value;
                  component_delta_2 = weighted_sum[1] - source_component_y;
                  if ( (float)((float)((float)(scaled_ratio * product_difference_4) + (float)(product_difference_10 * scaled_ratio_2)) + (float)(scaled_ratio_3 * component_delta_2)) < 0.0 )
                  {
                    scaled_ratio = -scaled_ratio;
                    scaled_ratio_2 = -scaled_ratio_2;
                    scaled_ratio_3 = -scaled_ratio_3;
                  }
                  product_difference = *(running_total_2 - 1);
                  integer_sum = cached_integer_sum + 1;
                  if ( fabs((float)((float)(scaled_ratio * product_difference_4) + (float)(product_difference_10 * scaled_ratio_2)) + (float)(scaled_ratio_3 * component_delta_2)) < 0.000015258789 )
                    integer_sum = cached_integer_sum;
                  running_total_4 += 3;
                  cached_integer_sum = integer_sum;
                  --remaining_count_4;
                }
                while ( remaining_count_4 );
              }
              running_total_3 += 3;
              ++iteration_count_3;
              --remaining_count_3;
            }
            while ( remaining_count_3 );
          }
          ++iteration_count_2;
          running_total_2 += 3;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      ++iteration_count;
      weighted_sum += 3;
      --remaining_count;
    }
    while ( remaining_count );
    input_value = a1;
    running_total = 0;
    result = a3;
    a2 = input_value_3;
  }
  reordered_vector_2 = _mm_shuffle_epi32(_mm_cvtsi32_si128(cached_integer_sum), 0);
  if ( a2 <= 0 )
  {
    LODWORD(iteration_count_8) = 0;
  }
  else
  {
    iteration_count_4 = 0;
    remaining_count_5 = (unsigned int)a2;
    weighted_sum_2 = (float *)(result + 8);
    do
    {
      *(_DWORD *)(input_value + 4 * iteration_count_4) = 0;
      combined_products = 0.0;
      iteration_count_5 = 0;
      if ( input_value_2 > 0 )
      {
        weighted_sum_3 = (float *)(result + 4);
        do
        {
          integer_sum_2 = iteration_count_5 + 1;
          iteration_count_6 = iteration_count_5 + 1;
          if ( iteration_count_5 + 1 < input_value_2 )
          {
            running_total_5 = weighted_sum_3 + 3;
            do
            {
              integer_sum_3 = iteration_count_6 + 1;
              iteration_count_7 = iteration_count_6 + 1;
              if ( iteration_count_6 + 1 < input_value_2 )
              {
                running_total_6 = running_total_5 + 4;
                do
                {
                  if ( iteration_count_5 != iteration_count_4 && iteration_count_6 != iteration_count_4 && iteration_count_7 != iteration_count_4 )
                  {
                    source_component_y_2 = weighted_sum_3[1];
                    scaled_value_2 = *weighted_sum_3;
                    component_delta_3 = running_total_5[1] - source_component_y_2;
                    product_difference_11 = *running_total_6 - source_component_y_2;
                    product_difference_12 = *running_total_5 - *weighted_sum_3;
                    product_difference_13 = *(weighted_sum_3 - 1);
                    product_difference_14 = *(running_total_6 - 1) - *weighted_sum_3;
                    product_difference_15 = *(running_total_5 - 1) - product_difference_13;
                    product_difference_16 = (float)(component_delta_3 * product_difference_14) - (float)(product_difference_11 * product_difference_12);
                    product_difference_17 = *(running_total_6 - 2) - product_difference_13;
                    product_difference_18 = (float)(product_difference_17 * product_difference_12) - (float)(product_difference_15 * product_difference_14);
                    product_difference_19 = (float)(product_difference_11 * product_difference_15) - (float)(product_difference_17 * component_delta_3);
                    square_root_2 = fsqrt((float)((float)(product_difference_19 * product_difference_19) + (float)(product_difference_16 * product_difference_16)) + (float)(product_difference_18 * product_difference_18));
                    if ( square_root_2 == 0.0 )
                    {
                      scaled_ratio_4 = 0.0;
                      scaled_ratio_5 = 0.0;
                      scaled_ratio_6 = 0.0;
                    }
                    else
                    {
                      scaled_ratio_4 = product_difference_16 * (float)(1.0 / square_root_2);
                      scaled_ratio_5 = product_difference_19 * (float)(1.0 / square_root_2);
                      scaled_ratio_6 = product_difference_18 * (float)(1.0 / square_root_2);
                    }
                    product_difference_20 = *(weighted_sum_2 - 2) - product_difference_13;
                    product_difference_21 = *(weighted_sum_2 - 1) - scaled_value_2;
                    product_difference_22 = *weighted_sum_2 - source_component_y_2;
                    if ( (float)((float)((float)(scaled_ratio_5 * product_difference_21) + (float)(scaled_ratio_4 * product_difference_20)) + (float)(scaled_ratio_6 * product_difference_22)) < 0.0 )
                    {
                      scaled_ratio_4 = -scaled_ratio_4;
                      scaled_ratio_5 = -scaled_ratio_5;
                      scaled_ratio_6 = -scaled_ratio_6;
                    }
                    if ( fabs((float)((float)(scaled_ratio_5 * product_difference_21) + (float)(scaled_ratio_4 * product_difference_20)) + (float)(scaled_ratio_6 * product_difference_22)) >= 0.000015258789 )
                    {
                      combined_products = combined_products
                          + (float)((float)((float)((float)((float)(a4[1] - scaled_value_2) * scaled_ratio_5)
                                                  + (float)((float)(*a4 - product_difference_13) * scaled_ratio_4))
                                          + (float)((float)(a4[2] - source_component_y_2) * scaled_ratio_6))
                                  / (float)((float)((float)(scaled_ratio_5 * product_difference_21) + (float)(scaled_ratio_4 * product_difference_20)) + (float)(scaled_ratio_6 * product_difference_22)));
                      *(float *)(input_value + 4 * iteration_count_4) = combined_products;
                    }
                  }
                  ++iteration_count_7;
                  running_total_6 += 3;
                }
                while ( iteration_count_7 < input_value_2 );
              }
              running_total_5 += 3;
              ++iteration_count_6;
            }
            while ( integer_sum_3 < input_value_2 );
          }
          weighted_sum_3 += 3;
          ++iteration_count_5;
        }
        while ( integer_sum_2 < input_value_2 );
        result = a3;
        running_total = 0;
      }
      ++iteration_count_4;
      weighted_sum_2 += 3;
      --remaining_count_5;
    }
    while ( remaining_count_5 );
    result = input_value_3;
    LODWORD(iteration_count_8) = 0;
    if ( (unsigned int)input_value_3 >= 0x10 )
    {
      converted_vector = _mm_cvtepi32_ps(reordered_vector_2);
      result = input_value + 32;
      vector_result = _mm_rcp_ps(converted_vector);
      vector_result_2 = _mm_sub_ps(_mm_add_ps(vector_result, vector_result), _mm_mul_ps(_mm_mul_ps(vector_result, vector_result), converted_vector));
      do
      {
        loaded_vector = _mm_loadu_ps((const float *)(const void *)((result - 32)));
        result += 64;
        LODWORD(iteration_count_8) = iteration_count_8 + 16;
        running_total += 16LL;
        _mm_storeu_ps((float *)(void *)((result - 96)), _mm_mul_ps(vector_result_2, loaded_vector));
        _mm_storeu_ps((float *)(void *)((result - 80)), _mm_mul_ps(vector_result_2, _mm_loadu_ps((const float *)(const void *)((result - 80)))));
        _mm_storeu_ps((float *)(void *)((result - 64)), _mm_mul_ps(vector_result_2, _mm_loadu_ps((const float *)(const void *)((result - 64)))));
        _mm_storeu_ps((float *)(void *)((result - 48)), _mm_mul_ps(_mm_loadu_ps((const float *)(const void *)((result - 48))), vector_result_2));
      }
      while ( running_total < (__int64)(input_value_3 & 0xFFFFFFFFFFFFFFF0uLL) );
    }
  }
  iteration_count_8 = (int)iteration_count_8;
  if ( (int)iteration_count_8 < input_value_2 )
  {
    result = input_value_2 - (int)iteration_count_8;
    if ( result < 4 )
      goto LABEL_57;
    converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(0x3F800000u)));
    result = input_value + 4LL * (int)iteration_count_8 + 8;
    remaining_count_6 = ((unsigned __int64)(input_value_2 - (int)iteration_count_8 - 4) >> 2) + 1;
    SR_VEC_LANES(128, converted_vector_2, f32)[0] = 1.0 / (float)cached_integer_sum;
    iteration_count_8 = (int)iteration_count_8 + 4 * remaining_count_6;
    reordered_vector = _mm_shuffle_ps(converted_vector_2, converted_vector_2, 0);
    do
    {
      loaded_vector_2 = _mm_loadu_ps((const float *)(const void *)((result - 8)));
      result += 16;
      _mm_storeu_ps((float *)(void *)((result - 24)), _mm_mul_ps(loaded_vector_2, reordered_vector));
      --remaining_count_6;
    }
    while ( remaining_count_6 );
    if ( iteration_count_8 < input_value_2 )
    {
LABEL_57:
      do
      {
        *(float *)(input_value + 4 * iteration_count_8) = (float)(1.0 / (float)cached_integer_sum) * *(float *)(input_value + 4 * iteration_count_8);
        ++iteration_count_8;
      }
      while ( iteration_count_8 < input_value_2 );
    }
  }
  return result;
}
#undef reordered_vector_2
#undef input_value_3

//----- (000000014002EDF0) ----------------------------------------------------
void            sub_14002EDF0(int a1, __int64 a2)
{
  __m128 vector_result;
  __int64 record_word_offset;
  float combined_products;
  float component_delta;
  double vector_result_2;
  float weighted_sum;
  float saved_vector_result;
  float state_address;
  float component_delta_2;
  float component_delta_3;
  float weighted_sum_2;
  unsigned int masked_bits;
  float component_delta_4;
  float component_delta_5;
  unsigned int masked_bits_2;

  vector_result = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a2 + 8))));
  record_word_offset = 7LL * a1;
  SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] - *(float *)&dword_140404A6C[record_word_offset + 284024383];
  combined_products = *(float *)a2 - *(float *)&dword_140404A6C[record_word_offset + 284024381];
  component_delta = sub_14023F704(combined_products, -SR_VEC_LANES(128, vector_result, f32)[0]);
  SR_VEC_LANES(128, vector_result, f32)[0] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] * SR_VEC_LANES(128, vector_result, f32)[0]) + (float)(combined_products * combined_products);
  vector_result_2 = sub_14023EDE4(
         (float)(*(float *)&dword_140404A6C[record_word_offset + 284024382] - *(float *)(a2 + 4)),
         SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(vector_result)), f64)[0]);
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 284024384];
  saved_vector_result = vector_result_2;
  state_address = (float)(1.0 - *(float *)&dword_140404A6C[record_word_offset + 284024386]) * 0.04908738521234375;
  if ( (float)(weighted_sum - component_delta) >= 3.14159265359 )
    component_delta = component_delta + 6.2831855;
  if ( (float)(component_delta - weighted_sum) >= 3.14159265359 )
    weighted_sum = weighted_sum + 6.2831855;
  component_delta_2 = component_delta - weighted_sum;
  if ( component_delta_2 >= (float)-state_address )
  {
    if ( component_delta_2 <= state_address )
      component_delta_3 = 0.0;
    else
      component_delta_3 = component_delta_2 - state_address;
  }
  else
  {
    component_delta_3 = component_delta_2 + state_address;
  }
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 284024385];
  *(float *)&masked_bits = (float)(component_delta_3 * 0.125) + *(float *)&dword_140404A6C[record_word_offset + 284024384];
  dword_140404A6C[record_word_offset + 284024384] = masked_bits;
  if ( (float)(weighted_sum_2 - saved_vector_result) >= 3.14159265359 )
    saved_vector_result = saved_vector_result + 6.2831855;
  if ( (float)(saved_vector_result - weighted_sum_2) >= 3.14159265359 )
    weighted_sum_2 = weighted_sum_2 + 6.2831855;
  component_delta_4 = saved_vector_result - weighted_sum_2;
  if ( component_delta_4 >= (float)-state_address )
  {
    if ( component_delta_4 <= state_address )
      component_delta_5 = 0.0;
    else
      component_delta_5 = component_delta_4 - state_address;
  }
  else
  {
    component_delta_5 = component_delta_4 + state_address;
  }
  *(float *)&dword_140404A6C[record_word_offset + 284024385] = (float)(component_delta_5 * 0.125) + *(float *)&dword_140404A6C[record_word_offset + 284024385];
  if ( *(float *)&masked_bits < -3.14159265359 )
  {
    *(float *)&masked_bits_2 = *(float *)&masked_bits + 6.28318530718;
    dword_140404A6C[record_word_offset + 284024384] = masked_bits_2;
    masked_bits = masked_bits_2;
  }
  if ( *(float *)&masked_bits > 3.14159265359 )
    *(float *)&dword_140404A6C[record_word_offset + 284024384] = *(float *)&masked_bits - 6.28318530718;
}

//----- (0000000140030590) ----------------------------------------------------
__int64            sub_140030590(int a1)
{
  __int64 packed_word_bits;
  __int64 record_word_offset;
  __int64 record_word_offset_2;
  unsigned int float_word;
  unsigned int *state_address;
  float *state_address_2;
  __int64 float_word_2;
  unsigned __int64 float_word_3;
  __int64 remaining_count;
  unsigned __int64 saved_float_word;
  unsigned __int64 scaled_index;
  float *state_address_3;
  float product_difference;
  float scaled_value;
  __int64 loaded_word;
  float scaled_value_2;
  float scaled_value_3;
  __int64 scaled_index_2;
  float state_address_4;
  float state_address_5;
  float state_address_6;
  float state_address_7;
  float source_component_y;
  float state_address_8;
  float state_address_9;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float combined_products;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  __int64 cached_packed_word_bits;
  __int64 matrix;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  float weighted_sum_6;
  __int64 scaled_index_5;
  float weighted_sum_7;
  double angle;
  double float_word_4;
  double scaled_value_4;
  double component_delta;
  __int128 masked_bits;
  float scaled_value_5;
  float weighted_sum_8;
  float weighted_sum_9;
  float *axis;
  __int64 scaled_index_6;
  double angle_2;
  double angle_3;
  double angle_4;
  float weighted_sum_10;
  float weighted_sum_11;
  float scaled_ratio;
  float reordered_vector;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float component_delta_2;
  float combined_products_5;
  float combined_products_6;
  float combined_products_7;
  float combined_products_8;
  float combined_products_9;
  float combined_products_10;
  float square_root;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float scaled_ratio_4;
  double acos_result;
  float component_sum;
  float weighted_sum_15;
  float weighted_sum_16;
  float squared_length;
  float weighted_sum_17;
  float scaled_value_6;
  double square_root_2;
  float weighted_sum_18;
  float weighted_sum_19;
  float absolute_value;
  float weighted_sum_20;
  float scaled_value_7;
  double angle_5;
  __int64 scaled_index_7;
  double angle_6;
  double angle_7;
  __int64 scaled_index_8;
  double angle_8;
  float reordered_vector_2;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float component_delta_3;
  float component_delta_4;
  float component_delta_5;
  float combined_products_11;
  float combined_products_12;
  float combined_products_13;
  float combined_products_14;
  float square_root_3;
  float scaled_ratio_5;
  float scaled_ratio_6;
  double acos_result_2;
  float component_sum_2;
  float scaled_value_8;
  float scaled_value_9;
  float scaled_value_10;
  float square_root_4;
  _Alignas(16) unsigned sr_snapshot_quaternions[8];
  _Alignas(8) unsigned sr_snapshot_axis[3];
  _Alignas(16) unsigned sr_snapshot_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140030590[160];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_140030590 + 8)) /* [rsp+8h] */
#define saved_packed_word_bits (*(int (*))(void *)(sr_frame_140030590 + 96)) /* [rsp+60h] */
#define unused_frame_slot_144 (*(__int128 (*))(void *)(sr_frame_140030590 + 144)) /* [rsp+90h] */

  LODWORD(packed_word_bits) = -1;
  record_word_offset = 140832LL * (((_BYTE)a1 - 1) & 0x3F);
  record_word_offset_2 = 140832LL * a1;
  float_word = dword_140404A6C[record_word_offset + 421986995];
  state_address = &dword_140404A6C[record_word_offset_2 + 421987002];
  (*(unsigned **)(void *)sr_snapshot_axis) = &dword_140404A6C[record_word_offset_2 + 421987002];
  dword_140404A6C[record_word_offset_2 + 421986995] = float_word;
  dword_140404A6C[record_word_offset_2 + 421986996] = dword_140404A6C[record_word_offset + 421986996];
  dword_140404A6C[record_word_offset_2 + 421986997] = dword_140404A6C[record_word_offset + 421986997];
  dword_140404A6C[record_word_offset_2 + 421986998] = dword_140404A6C[record_word_offset + 421986998];
  dword_140404A6C[record_word_offset_2 + 421986999] = dword_140404A6C[record_word_offset + 421986999];
  dword_140404A6C[record_word_offset_2 + 421987000] = dword_140404A6C[record_word_offset + 421987000];
  dword_140404A6C[record_word_offset_2 + 421987001] = dword_140404A6C[record_word_offset + 421987001];
  *state_address = dword_140404A6C[record_word_offset + 421987002];
  state_address[1] = dword_140404A6C[record_word_offset + 421987003];
  state_address[2] = dword_140404A6C[record_word_offset + 421987004];
  dword_140404A6C[record_word_offset_2 + 421987005] = dword_140404A6C[record_word_offset + 421987005];
  dword_140404A6C[record_word_offset_2 + 421987006] = dword_140404A6C[record_word_offset + 421987006];
  dword_140404A6C[record_word_offset_2 + 421987007] = dword_140404A6C[record_word_offset + 421987007];
  dword_140404A6C[record_word_offset_2 + 421987008] = dword_140404A6C[record_word_offset + 421987008];
  dword_140404A6C[record_word_offset_2 + 421987009] = dword_140404A6C[record_word_offset + 421987009];
  dword_140404A6C[record_word_offset_2 + 421987010] = dword_140404A6C[record_word_offset + 421987010];
  dword_140404A6C[record_word_offset_2 + 421987011] = dword_140404A6C[record_word_offset + 421987011];
  dword_140404A6C[record_word_offset_2 + 421987012] = dword_140404A6C[record_word_offset + 421987012];
  dword_140404A6C[record_word_offset_2 + 421987013] = dword_140404A6C[record_word_offset + 421987013];
  if ( local_player == -1 )
    goto LABEL_40;
  packed_word_bits = (int)dword_140404A6C[3597 * local_player + 71856292];
  saved_packed_word_bits = packed_word_bits;
  if ( (_DWORD)packed_word_bits == -1 )
    goto LABEL_40;
  state_address_2 = (float *)(unsigned int *)&g_18399DF58;
  float_word_2 = 21;
  float_word_3 = 1376 * packed_word_bits;
  remaining_count = 15;
  saved_float_word = float_word_3;
  scaled_index = float_word_3 + record_word_offset_2 * 4;
  state_address_3 = (float *)&dword_140404A6C[float_word_3 / 4 + 421846225 + record_word_offset_2];
  do
  {
    product_difference = *(state_address_2 - 1);
    scaled_value = *state_address_2;
    loaded_word = 21LL * *((int *)state_address_2 - 5);
    scaled_value_2 = *state_address_2;
    scaled_value_3 = *state_address_2;
    scaled_index_2 = record_word_offset_2 * 4 + loaded_word * 4 + saved_float_word;
    state_address_4 = (float)(product_difference * *(float *)((char *)&g_1A4D3BD64 + scaled_index_2))
        + *(float *)((char *)&g_1A4D3BD58 + scaled_index_2);
    *(state_address_3 - 1) = state_address_4;
    state_address_5 = (float)(product_difference * *(float *)((char *)&g_1A4D3BD68 + scaled_index_2))
        + *(float *)((char *)&g_1A4D3BD5C + scaled_index_2);
    *state_address_3 = state_address_5;
    state_address_6 = (float)(product_difference * *(float *)((char *)&g_1A4D3BD6C + scaled_index_2))
        + *(float *)((char *)&g_1A4D3BD60 + scaled_index_2);
    state_address_3[1] = state_address_6;
    state_address_7 = (float)(scaled_value_2 * *(float *)((char *)&g_1A4D3BD70 + scaled_index_2)) + state_address_4;
    source_component_y = state_address_2[1];
    *(state_address_3 - 1) = state_address_7;
    state_address_8 = (float)(scaled_value_3 * *(float *)((char *)&g_1A4D3BD74 + scaled_index_2)) + state_address_5;
    *state_address_3 = state_address_8;
    state_address_9 = (float)(scaled_value * *(float *)((char *)&g_1A4D3BD78 + scaled_index_2)) + state_address_6;
    state_address_3[1] = state_address_9;
    *(state_address_3 - 1) = (float)(source_component_y * *(float *)((char *)&g_1A4D3BD7C + scaled_index_2)) + state_address_7;
    *state_address_3 = (float)(source_component_y * *(float *)((char *)&g_1A4D3BD80 + scaled_index_2)) + state_address_8;
    state_address_3[1] = (float)(source_component_y * *(float *)((char *)&g_1A4D3BD84 + scaled_index_2)) + state_address_9;
    sr_math_mat3_multiply(
      (__int64)&dword_140404A6C[float_word_2 + 421846206] + scaled_index,
      (__int64)&dword_140404A6C[float_word_2 + 421846215] + scaled_index,
      (__int64)&dword_140404A6C[loaded_word + 421846206] + scaled_index);
    product_difference_2 = *(state_address_2 - 4) - *(state_address_2 - 1);
    product_difference_3 = *(state_address_2 - 3) - *state_address_2;
    product_difference_4 = *(state_address_2 - 2) - state_address_2[1];
    combined_products = (float)(product_difference_2 * state_address_3[2]) + *(state_address_3 - 1);
    *(state_address_3 - 1) = combined_products;
    weighted_sum = (float)(product_difference_2 * state_address_3[3]) + *state_address_3;
    *state_address_3 = weighted_sum;
    weighted_sum_2 = (float)(product_difference_2 * state_address_3[4]) + state_address_3[1];
    state_address_3[1] = weighted_sum_2;
    weighted_sum_3 = (float)(product_difference_3 * state_address_3[5]) + combined_products;
    *(state_address_3 - 1) = weighted_sum_3;
    weighted_sum_4 = (float)(product_difference_3 * state_address_3[6]) + weighted_sum;
    *state_address_3 = weighted_sum_4;
    weighted_sum_5 = (float)(product_difference_3 * state_address_3[7]) + weighted_sum_2;
    state_address_3[1] = weighted_sum_5;
    *(state_address_3 - 1) = (float)(product_difference_4 * state_address_3[8]) + weighted_sum_3;
    float_word_2 += 21;
    state_address_2 += 25;
    *state_address_3 = (float)(product_difference_4 * state_address_3[9]) + weighted_sum_4;
    state_address_3[1] = (float)(product_difference_4 * state_address_3[10]) + weighted_sum_5;
    state_address_3 += 21;
    --remaining_count;
  }
  while ( remaining_count );
  LODWORD(packed_word_bits) = saved_packed_word_bits;
  cached_packed_word_bits = saved_packed_word_bits;
  matrix = (__int64)(*(unsigned **)(void *)sr_snapshot_axis);
  if ( saved_packed_word_bits != g_183F7C588 )
  {
    scaled_index_3 = record_word_offset_2 * 4 + 1376LL * saved_packed_word_bits;
    dword_140404A6C[record_word_offset_2 + 421986996] = *(unsigned int *)((char *)&g_1A4D3BE54 + scaled_index_3);
    dword_140404A6C[record_word_offset_2 + 421986997] = *(unsigned int *)((char *)&g_1A4D3BE58 + scaled_index_3);
    dword_140404A6C[record_word_offset_2 + 421986998] = *(unsigned int *)((char *)&g_1A4D3BE5C + scaled_index_3);
    *(_QWORD *)&dword_140404A6C[record_word_offset_2 + 421987011] = 0;
    dword_140404A6C[record_word_offset_2 + 421987013] = 0;
    *(_QWORD *)&dword_140404A6C[record_word_offset_2 + 421986999] = 0;
    dword_140404A6C[record_word_offset_2 + 421987001] = 0;
    *(_DWORD *)matrix = *(unsigned int *)((char *)&g_1A4D3BE60 + scaled_index_3);
    *(_DWORD *)(matrix + 4) = *(unsigned int *)((char *)&g_1A4D3BE64 + scaled_index_3);
    *(_DWORD *)(matrix + 8) = *(unsigned int *)((char *)&g_1A4D3BE68 + scaled_index_3);
    dword_140404A6C[record_word_offset_2 + 421987005] = *(unsigned int *)((char *)&g_1A4D3BE6C + scaled_index_3);
    dword_140404A6C[record_word_offset_2 + 421987006] = *(unsigned int *)((char *)&g_1A4D3BE70 + scaled_index_3);
    dword_140404A6C[record_word_offset_2 + 421987007] = *(unsigned int *)((char *)&g_1A4D3BE74 + scaled_index_3);
    dword_140404A6C[record_word_offset_2 + 421987008] = *(unsigned int *)((char *)&g_1A4D3BE78 + scaled_index_3);
    dword_140404A6C[record_word_offset_2 + 421987009] = *(unsigned int *)((char *)&g_1A4D3BE7C + scaled_index_3);
    dword_140404A6C[record_word_offset_2 + 421987010] = *(unsigned int *)((char *)&g_1A4D3BE80 + scaled_index_3);
  }
  scaled_index_4 = 3597LL * (int)local_player;
  weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_4 + 71856301];
  scaled_index_5 = record_word_offset_2 * 4 + 1376 * cached_packed_word_bits;
  weighted_sum_7 = *(float *)((char *)&g_1A4D3BD44 + scaled_index_5);
  if ( (float)(weighted_sum_6 - weighted_sum_7) >= 3.14159265359 )
    weighted_sum_7 = weighted_sum_7 + 6.28318530718;
  if ( (float)(weighted_sum_7 - weighted_sum_6) >= 3.14159265359 )
    weighted_sum_6 = weighted_sum_6 + 6.28318530718;
  *(_QWORD *)&angle = dword_140404A6C[scaled_index_4 + 71856297];
  HIDWORD(float_word_4) = HIDWORD(angle);
  *(float *)&float_word_4 = *(float *)&angle - (float)(weighted_sum_7 - weighted_sum_6);
  scaled_value_4 = *(float *)&float_word_4;
  if ( *(float *)&float_word_4 < -3.14159265359 )
  {
    component_delta = scaled_value_4 + 6.28318530718;
LABEL_15:
    float_word_4 = component_delta;
    goto LABEL_16;
  }
  if ( scaled_value_4 > 3.14159265359 )
  {
    component_delta = scaled_value_4 - 6.28318530718;
    goto LABEL_15;
  }
LABEL_16:
  masked_bits = *(_OWORD *)((char *)&g_1A4D3BE70 + scaled_index_5);
  scaled_value_5 = *(float *)matrix;
  (*(__int128 *)(void *)sr_snapshot_rotation) = *(_OWORD *)((char *)&g_1A4D3BE60 + scaled_index_5);
  sr_snapshot_rotation[8] = *(unsigned int *)((char *)&g_1A4D3BE80 + scaled_index_5);
  weighted_sum_8 = *(float *)(matrix + 8) * *(float *)(matrix + 8);
  (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = masked_bits;
  if ( fsqrt((float)((float)(scaled_value_5 * scaled_value_5) + (float)(*(float *)(matrix + 4) * *(float *)(matrix + 4))) + weighted_sum_8) < 0.5 )
  {
    (*(__int128 *)(void *)sr_snapshot_rotation) = xmmword_140278D30;
    sr_snapshot_rotation[8] = 1065353216;
    *(_QWORD *)matrix = 1065353216;
    (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = xmmword_140278D30;
    *(_QWORD *)(matrix + 8) = 0;
    *(_QWORD *)(matrix + 16) = 1065353216;
    *(_QWORD *)(matrix + 24) = 0;
    *(_DWORD *)(matrix + 32) = 1065353216;
  }
  weighted_sum_9 = *(float *)((char *)&g_1A4D3BD4C + scaled_index_5);
  axis = (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3;
  scaled_index_6 = 7166 * cached_packed_word_bits;
  if ( dword_140404A6C[scaled_index_6 + 280651313] == -1 )
  {
    HIDWORD(angle_2) = HIDWORD(float_word_4);
    *(float *)&angle_2 = *(float *)&float_word_4 - weighted_sum_9;
  }
  else
  {
    *(float *)&angle = (float)(*(float *)&angle - weighted_sum_9) * 0.5;
    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, angle);
    *(_QWORD *)&angle_3 = dword_140404A6C[3597 * local_player + 71856298];
    *(float *)&angle_3 = (float)(*(float *)&angle_3 - *(float *)((char *)&g_1A4D3BD50 + scaled_index_5)) * 0.5;
    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), angle_3);
    *(_QWORD *)&angle_4 = dword_140404A6C[3597 * local_player + 71856297];
    *(float *)&angle_4 = (float)(*(float *)&angle_4 - *(float *)((char *)&g_1A4D3BD4C + scaled_index_5)) * 0.5;
    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, angle_4);
    axis = (float *)&(*(__int128 *)(void *)sr_snapshot_rotation);
    *(_QWORD *)&angle_2 = dword_140404A6C[3597 * local_player + 71856298];
    *(float *)&angle_2 = (float)(*(float *)&angle_2 - *(float *)((char *)&g_1A4D3BD50 + scaled_index_5)) * 0.5;
  }
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), axis, angle_2);
  weighted_sum_10 = *(float *)((char *)&g_1A4D3BE58 + scaled_index_5);
  weighted_sum_11 = *(float *)((char *)&g_1A4D3BE5C + scaled_index_5);
  *(float *)&dword_140404A6C[record_word_offset_2 + 421986996] = (float)((float)(*(float *)((char *)&g_1A4D3BE54 + scaled_index_5)
                                                             - *(float *)&dword_140404A6C[record_word_offset_2 + 421986996])
                                                     * 0.5)
                                             + *(float *)&dword_140404A6C[record_word_offset_2 + 421986996];
  *(float *)&dword_140404A6C[record_word_offset_2 + 421986997] = (float)((float)(weighted_sum_10 - *(float *)&dword_140404A6C[record_word_offset_2 + 421986997]) * 0.5)
                                             + *(float *)&dword_140404A6C[record_word_offset_2 + 421986997];
  *(float *)&dword_140404A6C[record_word_offset_2 + 421986998] = (float)((float)(weighted_sum_11 - *(float *)&dword_140404A6C[record_word_offset_2 + 421986998]) * 0.5)
                                             + *(float *)&dword_140404A6C[record_word_offset_2 + 421986998];
  sr_math_quat_from_mat3(&(*(float *)(void *)(sr_snapshot_quaternions+0)), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation));
  sr_math_quat_from_mat3((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], (float *)matrix);
  scaled_ratio = 0.0;
  reordered_vector = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1);
  weighted_sum_12 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
  weighted_sum_13 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
  weighted_sum_14 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
  if ( (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1))
                     + (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2]))
             + (float)((float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1]) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1)))) < 0.0 )
  {
    *(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = _mm_xor_ps(*(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    weighted_sum_12 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
    weighted_sum_14 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
    weighted_sum_13 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
    reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], *(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], 255), f32)[0];
  }
  *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = -weighted_sum_13;
  *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1) = -weighted_sum_14;
  *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] = -weighted_sum_12;
  combined_products_2 = (float)((float)((float)(reordered_vector * (*(float *)(void *)(sr_snapshot_quaternions+0))) + (float)((float)-weighted_sum_13 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1)))
              + (float)((float)-weighted_sum_14 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))))
      - (float)((float)-weighted_sum_12 * (*(float *)(void *)(sr_snapshot_quaternions+1)));
  combined_products_3 = (float)((float)(reordered_vector * (*(float *)(void *)(sr_snapshot_quaternions+1))) - (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * (float)-weighted_sum_13))
      + (float)((float)-weighted_sum_14 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1));
  combined_products_4 = *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * (float)-weighted_sum_12;
  component_delta_2 = -weighted_sum_14;
  combined_products_5 = (float)-weighted_sum_14 * (*(float *)(void *)(sr_snapshot_quaternions+1));
  combined_products_6 = combined_products_3 + (float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * (float)-weighted_sum_12);
  combined_products_7 = (float)(reordered_vector * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * (float)-weighted_sum_13);
  (*(float *)(void *)(sr_snapshot_quaternions+1)) = combined_products_6;
  combined_products_8 = (float)(combined_products_7 - (float)(component_delta_2 * (*(float *)(void *)(sr_snapshot_quaternions+0)))) + (float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * (float)-weighted_sum_12);
  combined_products_9 = (*(float *)(void *)(sr_snapshot_quaternions+0)) * (float)-weighted_sum_13;
  (*(float *)(void *)(sr_snapshot_quaternions+0)) = combined_products_2;
  *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) = combined_products_8;
  combined_products_10 = (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * reordered_vector) - combined_products_9) - combined_products_5) - combined_products_4;
  *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) = combined_products_10;
  square_root = fsqrt((float)((float)(combined_products_6 * combined_products_6) + (float)(combined_products_2 * combined_products_2)) + (float)(combined_products_8 * combined_products_8));
  if ( square_root == 0.0 )
  {
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
    scaled_ratio_4 = 0.0;
  }
  else
  {
    scaled_ratio_2 = (float)(1.0 / square_root) * combined_products_2;
    scaled_ratio_3 = (float)(1.0 / square_root) * combined_products_6;
    scaled_ratio_4 = (float)(1.0 / square_root) * combined_products_8;
  }
  acos_result = acos(fminf(fmaxf(combined_products_10, -1.0), 1.0));
  HIDWORD(square_root_2) = 0;
  component_sum = acos_result + acos_result;
  weighted_sum_15 = (float)((float)(scaled_ratio_2 * component_sum) * 0.125) + *(float *)&dword_140404A6C[record_word_offset_2 + 421987011];
  *(float *)&dword_140404A6C[record_word_offset_2 + 421987012] = (float)((float)(scaled_ratio_3 * component_sum) * 0.125)
                                             + *(float *)&dword_140404A6C[record_word_offset_2 + 421987012];
  *(float *)&dword_140404A6C[record_word_offset_2 + 421987013] = (float)((float)(scaled_ratio_4 * component_sum) * 0.125)
                                             + *(float *)&dword_140404A6C[record_word_offset_2 + 421987013];
  *(float *)&dword_140404A6C[record_word_offset_2 + 421987011] = weighted_sum_15 * 0.5;
  weighted_sum_16 = *(float *)&dword_140404A6C[record_word_offset_2 + 421987012] * 0.5;
  squared_length = (float)(*(float *)&dword_140404A6C[record_word_offset_2 + 421987012] * *(float *)&dword_140404A6C[record_word_offset_2 + 421987012])
      + (float)(weighted_sum_15 * weighted_sum_15);
  *(float *)&dword_140404A6C[record_word_offset_2 + 421987012] = weighted_sum_16;
  weighted_sum_17 = *(float *)&dword_140404A6C[record_word_offset_2 + 421987013];
  *(float *)&acos_result = weighted_sum_17 * weighted_sum_17;
  scaled_value_6 = weighted_sum_17 * 0.5;
  *(float *)&dword_140404A6C[record_word_offset_2 + 421987013] = scaled_value_6;
  *(float *)&square_root_2 = fsqrt((float)(squared_length + *(float *)&acos_result) * 0.25);
  if ( *(float *)&square_root_2 > 0.000015258789 )
  {
    *(float *)&(*(unsigned **)(void *)sr_snapshot_axis) = (float)(1.0 / *(float *)&square_root_2) * (float)(weighted_sum_15 * 0.5);
    *((float *)&(*(unsigned **)(void *)sr_snapshot_axis) + 1) = (float)(1.0 / *(float *)&square_root_2) * weighted_sum_16;
    (*(float *)(void *)(sr_snapshot_axis+2)) = (float)(1.0 / *(float *)&square_root_2) * scaled_value_6;
    sr_math_mat3_rotate_rows(matrix, (float *)&(*(unsigned **)(void *)sr_snapshot_axis), square_root_2);
  }
  if ( dword_140404A6C[scaled_index_6 + 280651313] == -1 )
  {
    weighted_sum_18 = *(float *)((char *)&g_1A4D3BD54 + scaled_index_5);
    if ( weighted_sum_18 > 0.0 )
    {
      weighted_sum_19 = *(float *)&dword_140404A6C[record_word_offset_2 + 421987006];
      if ( weighted_sum_19 <= 0.0 )
        absolute_value = 0.0;
      else
        absolute_value = fabs((float)(weighted_sum_19 * weighted_sum_19) * weighted_sum_19);
      weighted_sum_20 = *(float *)&float_word_4 + *(float *)((char *)&g_1A4D3BD3C + scaled_index_5);
      scaled_value_7 = absolute_value * weighted_sum_18;
      (*(__int128 *)(void *)sr_snapshot_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = xmmword_140278D30;
      sr_snapshot_rotation[8] = 1065353216;
      *(_QWORD *)&angle_5 = dword_140404A6C[3597 * local_player + 71856299];
      *(float *)&angle_5 = (float)(*(float *)&angle_5 * 0.5) + weighted_sum_20;
      sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, angle_5);
      scaled_index_7 = 3597LL * (int)local_player;
      *(_QWORD *)&angle_6 = dword_140404A6C[scaled_index_7 + 71856300];
      *(float *)&angle_6 = (float)(*(float *)&angle_6 * 0.75) + (float)(*(float *)&dword_140404A6C[scaled_index_7 + 71856298] * 0.5);
      sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), angle_6);
      *(_QWORD *)&angle_7 = dword_140404A6C[3597 * local_player + 71856299];
      *(float *)&angle_7 = *(float *)&angle_7 * 0.5;
      sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, angle_7);
      scaled_index_8 = 3597LL * (int)local_player;
      *(_QWORD *)&angle_8 = dword_140404A6C[scaled_index_8 + 71856300];
      *(float *)&angle_8 = (float)(*(float *)&angle_8 * 0.25) + (float)(*(float *)&dword_140404A6C[scaled_index_8 + 71856298] * 0.5);
      sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), angle_8);
      sr_math_quat_from_mat3(&(*(float *)(void *)(sr_snapshot_quaternions+0)), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation));
      sr_math_quat_from_mat3((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], (float *)matrix);
      reordered_vector_2 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1);
      weighted_sum_21 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
      weighted_sum_22 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
      weighted_sum_23 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
      if ( (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1))
                         + (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2]))
                 + (float)((float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1]) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1)))) < 0.0 )
      {
        *(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = _mm_xor_ps(*(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        weighted_sum_21 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
        weighted_sum_23 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
        weighted_sum_22 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
        reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], *(__m128_u *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], 255), f32)[0];
      }
      component_delta_3 = -weighted_sum_22;
      component_delta_4 = -weighted_sum_23;
      component_delta_5 = -weighted_sum_21;
      combined_products_11 = (float)((float)((float)(reordered_vector_2 * (*(float *)(void *)(sr_snapshot_quaternions+0))) + (float)(component_delta_3 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1))) + (float)(component_delta_4 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))))
           - (float)(component_delta_5 * (*(float *)(void *)(sr_snapshot_quaternions+1)));
      combined_products_12 = (float)((float)((float)(reordered_vector_2 * (*(float *)(void *)(sr_snapshot_quaternions+1))) - (float)(component_delta_3 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)))) + (float)(component_delta_4 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1)))
           + (float)(component_delta_5 * (*(float *)(void *)(sr_snapshot_quaternions+0)));
      combined_products_13 = (float)((float)((float)(reordered_vector_2 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))) + (float)(component_delta_3 * (*(float *)(void *)(sr_snapshot_quaternions+1)))) - (float)(component_delta_4 * (*(float *)(void *)(sr_snapshot_quaternions+0))))
           + (float)(component_delta_5 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1));
      combined_products_14 = (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * reordered_vector_2) - (float)(component_delta_3 * (*(float *)(void *)(sr_snapshot_quaternions+0)))) - (float)(component_delta_4 * (*(float *)(void *)(sr_snapshot_quaternions+1))))
           - (float)(component_delta_5 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)));
      square_root_3 = fsqrt((float)((float)(combined_products_12 * combined_products_12) + (float)(combined_products_11 * combined_products_11)) + (float)(combined_products_13 * combined_products_13));
      if ( square_root_3 == 0.0 )
      {
        scaled_ratio_5 = 0.0;
        scaled_ratio_6 = 0.0;
      }
      else
      {
        scaled_ratio = (float)(1.0 / square_root_3) * combined_products_11;
        scaled_ratio_5 = (float)(1.0 / square_root_3) * combined_products_12;
        scaled_ratio_6 = (float)(1.0 / square_root_3) * combined_products_13;
      }
      acos_result_2 = acos(fminf(fmaxf(combined_products_14, -1.0), 1.0));
      component_sum_2 = acos_result_2 + acos_result_2;
      scaled_value_8 = (float)(component_sum_2 * scaled_ratio) * (float)(scaled_value_7 * 0.5);
      scaled_value_9 = (float)(component_sum_2 * scaled_ratio_5) * (float)(scaled_value_7 * 0.5);
      scaled_value_10 = (float)(component_sum_2 * scaled_ratio_6) * (float)(scaled_value_7 * 0.5);
      square_root_4 = fsqrt((float)((float)(scaled_value_9 * scaled_value_9) + (float)(scaled_value_8 * scaled_value_8)) + (float)(scaled_value_10 * scaled_value_10));
      if ( square_root_4 > 0.000015258789 )
      {
        *((float *)&(*(unsigned **)(void *)sr_snapshot_axis) + 1) = (float)(1.0 / square_root_4) * scaled_value_9;
        *(float *)&(*(unsigned **)(void *)sr_snapshot_axis) = (float)(1.0 / square_root_4) * scaled_value_8;
        (*(float *)(void *)(sr_snapshot_axis+2)) = (float)(1.0 / square_root_4) * scaled_value_10;
        sr_math_mat3_rotate_rows(matrix, (float *)&(*(unsigned **)(void *)sr_snapshot_axis), sr_export_float_lane_container(COERCE_UNSIGNED_INT(_mm_cvtss_f32(_mm_cvtpd_ps(
        _mm_min_sd(_mm_max_sd(_mm_set_sd(scaled_value_7 * -0.39269908169875), _mm_set_sd(square_root_4)),
                   _mm_set_sd(scaled_value_7 * 0.39269908169875)))))));
      }
    }
  }
LABEL_40:
  g_183F7C588 = packed_word_bits;
  dword_140404A6C[record_word_offset_2 + 421986995] = packed_word_bits;
  return 0; /* both native callers discard EAX */
}
#undef unused_frame_slot_8
#undef saved_packed_word_bits
#undef unused_frame_slot_144

//----- (0000000140033610) ----------------------------------------------------
_BOOL8            sub_140033610(float *a1, int *a2, float *a3, float *a4, int a5)
{
  int iteration_count;
  int *record_byte_offset;
  int input_value;
  float product_difference;
  float scaled_value;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  int table_value;
  int table_value_2;
  int table_value_3;
  float saved_distance;
  float source_component_y;
  float source_component_z;
  int saved_normal;
  int cached_table_value;
  int cached_table_value_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033610[192];
#define radius (*(__int64 (*))(void *)(sr_frame_140033610 + 0)) /* [rsp+30h] */
#define normal (*(int (*))(void *)(sr_frame_140033610 + 40)) /* [rsp+58h] */
#define cached_table_value_3 (*(int (*))(void *)(sr_frame_140033610 + 44)) /* [rsp+5Ch] */
#define cached_table_value_4 (*(int (*))(void *)(sr_frame_140033610 + 48)) /* [rsp+60h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140033610 + 56)) /* [rsp+68h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_140033610 + 72)) /* [rsp+78h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_140033610 + 88)) /* [rsp+88h] */
#define point (*(float (*)[16])(void *)(sr_frame_140033610 + 104)) /* [rsp+98h] */
#define distance (*(float (*))(void *)(sr_frame_140033610 + 184)) /* [rsp+E8h] */

  iteration_count = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  record_byte_offset = a2 + 3;
  input_value = a5;
  do
  {
    product_difference = *((float *)record_byte_offset - 1);
    LODWORD(float_buffer_3[0]) = *(record_byte_offset - 2);
    scaled_value = *(float *)record_byte_offset;
    float_buffer_3[1] = product_difference;
    weighted_sum = *((float *)record_byte_offset + 1);
    float_buffer_3[2] = scaled_value;
    weighted_sum_2 = *((float *)record_byte_offset + 2);
    float_buffer_2[0] = weighted_sum;
    weighted_sum_3 = *((float *)record_byte_offset + 3);
    float_buffer_2[1] = weighted_sum_2;
    weighted_sum_4 = *((float *)record_byte_offset + 4);
    float_buffer_2[2] = weighted_sum_3;
    weighted_sum_5 = *((float *)record_byte_offset + 5);
    float_buffer[0] = weighted_sum_4;
    weighted_sum_6 = *((float *)record_byte_offset + 6);
    float_buffer[1] = weighted_sum_5;
    table_value = record_byte_offset[7];
    float_buffer[2] = weighted_sum_6;
    table_value_2 = record_byte_offset[8];
    normal = table_value;
    table_value_3 = record_byte_offset[9];
    LODWORD(radius) = input_value;
    cached_table_value_3 = table_value_2;
    cached_table_value_4 = table_value_3;
    if ( (unsigned int)sr_collision_sphere_triangle(point, (float *)&normal, &distance, a3, a4, radius, float_buffer_3, float_buffer_2, float_buffer) )
    {
      saved_distance = distance;
      if ( distance < a1[7] )
      {
        source_component_y = point[1];
        *a1 = point[0];
        source_component_z = point[2];
        a1[1] = source_component_y;
        saved_normal = normal;
        a1[2] = source_component_z;
        cached_table_value = cached_table_value_3;
        *((_DWORD *)a1 + 3) = saved_normal;
        cached_table_value_2 = cached_table_value_4;
        *((_DWORD *)a1 + 4) = cached_table_value;
        *((_DWORD *)a1 + 5) = cached_table_value_2;
        a1[7] = saved_distance;
      }
    }
    ++iteration_count;
    record_byte_offset += 12;
  }
  while ( iteration_count < *a2 );
  return a1[7] < 65536.0;
}
#undef radius
#undef normal
#undef cached_table_value_3
#undef cached_table_value_4
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef point
#undef distance

//----- (0000000140033B50) ----------------------------------------------------
__int64            sub_140033B50(float *a1, __int64 a2, float *a3, float *a4)
{
  float *from;
  float *to;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033B50[6272];
#define placed (*(_BYTE (*)[6144])(void *)(sr_frame_140033B50 + 0)) /* [rsp+10h] */
#define unused_frame_slot_6144 (*(__int64 (*))(void *)(sr_frame_140033B50 + 6144)) /* [rsp+1810h] */
#define record_pointer (*(float * (*))(void *)(sr_frame_140033B50 + 6240)) /* [rsp+1870h] */
#define record_pointer_2 (*(float * (*))(void *)(sr_frame_140033B50 + 6248)) /* [rsp+1878h] */
#define radius (*(int (*))(void *)(sr_frame_140033B50 + 6256)) /* [rsp+1880h] */

  from = record_pointer;
  to = record_pointer_2;
  sr_collision_place_mesh((__int64)placed, a2, a3, a4);
  return sr_collision_capsule_placed_mesh(a1, a2, (__int64)placed, from, to, radius); /* 0x140033BB6: the result of this call is still in rax at the exit */
}
#undef placed
#undef unused_frame_slot_6144
#undef record_pointer
#undef record_pointer_2
#undef radius

//----- (0000000140034370) ----------------------------------------------------
_BOOL8            sub_140034370(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  int bit_mask;
  int *record_byte_offset;
  int *running_total;
  float scaled_value;
  signed int iteration_count;
  float scaled_value_2;
  float source_component_y;
  float source_component_z;
  __int64 scaled_index;
  __int64 loaded_word;
  float state_address;
  float weighted_sum;
  __int64 scaled_index_2;
  __int64 table_value;
  float state_address_2;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 scaled_index_3;
  __int64 table_value_2;
  float state_address_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  int scaled_index_4;
  float weighted_sum_7;
  int input_value;
  int table_value_3;
  int table_value_4;
  int table_value_5;
  int table_value_6;
  int collision_sphere_triangle_result;
  int input_value_2;
  int table_value_7;
  int table_value_8;
  int table_value_9;
  int table_value_10;
  unsigned sr_swept_cell_hit_normal[3];
  unsigned sr_swept_cell_hit_point[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140034370[304];
#define radius (*(__int64 (*))(void *)(sr_frame_140034370 + 0)) /* [rsp+30h] */
#define radius_2 (*(__int64 (*))(void *)(sr_frame_140034370 + 0)) /* [rsp+30h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140034370 + 72)) /* [rsp+78h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_140034370 + 88)) /* [rsp+88h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_140034370 + 104)) /* [rsp+98h] */
#define float_buffer_4 (*(float (*)[24])(void *)(sr_frame_140034370 + 120)) /* [rsp+A8h] */
#define from (*(float * (*))(void *)(sr_frame_140034370 + 288)) /* [rsp+150h] */

  from = a4;
  bit_mask = a8;
  record_byte_offset = dword_1402B3664;
  running_total = dword_1402B3558;
  scaled_value = *(float *)&a9;
  iteration_count = 0;
  *a3 = 65536.0;
  scaled_value_2 = (float)*a7;
  source_component_y = (float)a7[1];
  source_component_z = (float)a7[2];
  do
  {
    if ( ((((64 << iteration_count) & bit_mask) != 0) & _bittest(&bit_mask, iteration_count)) != 0 )
    {
      scaled_index = 3LL * *(record_byte_offset - 1);
      loaded_word = *record_byte_offset;
      state_address = (float)(source_component_y + *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 1) + 1]) * scaled_value;
      float_buffer_2[0] = (float)(scaled_value_2 + *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 1)]) * scaled_value;
      weighted_sum = source_component_z + *(float *)&dword_1402B34F0[scaled_index + 2];
      scaled_index_2 = 3 * loaded_word;
      float_buffer_2[1] = state_address;
      table_value = record_byte_offset[1];
      state_address_2 = (float)(source_component_y + *(float *)&dword_1402B34F0[scaled_index_2 + 1]) * scaled_value;
      float_buffer_2[2] = weighted_sum * scaled_value;
      weighted_sum_2 = scaled_value_2 + *(float *)&dword_1402B34F0[scaled_index_2];
      float_buffer_3[1] = state_address_2;
      float_buffer_3[0] = weighted_sum_2 * scaled_value;
      weighted_sum_3 = source_component_z + *(float *)&dword_1402B34F0[scaled_index_2 + 2];
      scaled_index_3 = 3 * table_value;
      table_value_2 = record_byte_offset[2];
      state_address_3 = (float)(source_component_y + *(float *)&dword_1402B34F0[scaled_index_3 + 1]) * scaled_value;
      float_buffer_3[2] = weighted_sum_3 * scaled_value;
      weighted_sum_4 = scaled_value_2 + *(float *)&dword_1402B34F0[scaled_index_3];
      float_buffer[1] = state_address_3;
      float_buffer[0] = weighted_sum_4 * scaled_value;
      weighted_sum_5 = source_component_y + *(float *)&dword_1402B34F0[3 * table_value_2 + 1];
      float_buffer[2] = (float)(source_component_z + *(float *)&dword_1402B34F0[scaled_index_3 + 2]) * scaled_value;
      weighted_sum_6 = scaled_value_2 + *(float *)&dword_1402B34F0[3 * table_value_2];
      LODWORD(radius) = a6;
      float_buffer_4[1] = weighted_sum_5 * scaled_value;
      scaled_index_4 = *(running_total - 1);
      float_buffer_4[0] = weighted_sum_6 * scaled_value;
      weighted_sum_7 = source_component_z + *(float *)&dword_1402B34F0[3 * table_value_2 + 2];
      sr_swept_cell_hit_normal[1] = scaled_index_4;
      float_buffer_4[2] = weighted_sum_7 * scaled_value;
      sr_swept_cell_hit_normal[0] = *(running_total - 2);
      sr_swept_cell_hit_normal[2] = *running_total;
      if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_cell_hit_point[0], (float *)&sr_swept_cell_hit_normal[0], (float *)&a9, a4, a5, radius, float_buffer_2, float_buffer_3, float_buffer) )
      {
        input_value = a9;
        if ( *(float *)&a9 < *a3 )
        {
          table_value_3 = sr_swept_cell_hit_point[1];
          *a1 = sr_swept_cell_hit_point[0];
          table_value_4 = sr_swept_cell_hit_point[2];
          a1[1] = table_value_3;
          table_value_5 = sr_swept_cell_hit_normal[0];
          a1[2] = table_value_4;
          table_value_6 = sr_swept_cell_hit_normal[1];
          *a2 = table_value_5;
          a2[2] = sr_swept_cell_hit_normal[2];
          a2[1] = table_value_6;
          *(_DWORD *)a3 = input_value;
        }
      }
      LODWORD(radius_2) = a6;
      collision_sphere_triangle_result = sr_collision_sphere_triangle((float *)&sr_swept_cell_hit_point[0], (float *)&sr_swept_cell_hit_normal[0], (float *)&a9, from, a5, radius_2, float_buffer_2, float_buffer, float_buffer_4);
      a4 = from;
      if ( collision_sphere_triangle_result )
      {
        input_value_2 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          table_value_7 = sr_swept_cell_hit_point[1];
          *a1 = sr_swept_cell_hit_point[0];
          table_value_8 = sr_swept_cell_hit_point[2];
          a1[1] = table_value_7;
          table_value_9 = sr_swept_cell_hit_normal[0];
          a1[2] = table_value_8;
          table_value_10 = sr_swept_cell_hit_normal[1];
          *a2 = table_value_9;
          a2[2] = sr_swept_cell_hit_normal[2];
          a2[1] = table_value_10;
          *(_DWORD *)a3 = input_value_2;
        }
      }
    }
    ++iteration_count;
    record_byte_offset += 4;
    running_total += 3;
  }
  while ( iteration_count < 6 );
  return *a3 < 65536.0;
}
#undef radius
#undef radius_2
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef from

//----- (00000001400346F0) ----------------------------------------------------
__int64            sub_1400346F0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10)
{
  float *input_cursor;
  float *input_cursor_2;
  float *input_cursor_3;
  float source_component_y;
  float source_component_z;
  float combined_products;
  float combined_products_2;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float component_sum;
  float component_sum_2;
  float component_delta;
  float component_sum_3;
  float component_sum_4;
  float component_delta_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400346F0[16];
#define to (*(float (*))(void *)(sr_frame_1400346F0 + 0)) /* [rsp+40h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400346F0 + 4)) /* [rsp+44h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400346F0 + 8)) /* [rsp+48h] */

  input_cursor = a9;
  input_cursor_2 = a8;
  input_cursor_3 = a7;
  sr_math_triangle_normal(a2, a7, a8, a9);
  source_component_y = a2[1];
  source_component_z = a2[2];
  combined_products = (float)((float)((float)(a4[1] - input_cursor_3[1]) * source_component_y) + (float)((float)(*a4 - *input_cursor_3) * *a2))
      + (float)((float)(a4[2] - input_cursor_3[2]) * source_component_z);
  combined_products_2 = (float)((float)((float)(a5[1] - input_cursor_3[1]) * source_component_y) + (float)((float)(*a5 - *input_cursor_3) * *a2))
      + (float)((float)(a5[2] - input_cursor_3[2]) * source_component_z);
  if ( combined_products >= a6 && combined_products_2 >= a6 )
    return 0;
  if ( combined_products >= 0.0 )
  {
    if ( combined_products > 0.0 && combined_products_2 > 0.0 )
    {
      product_difference = *a2 * (float)(a6 * -1.125);
      product_difference_2 = source_component_y * (float)(a6 * -1.125);
      product_difference_3 = source_component_z * (float)(a6 * -1.125);
      if ( combined_products >= combined_products_2 )
      {
        component_sum_3 = product_difference_2 + a5[1];
        component_sum_4 = product_difference_3 + a5[2];
        to = product_difference + *a5;
        unused_written_slot = component_sum_3;
        unused_written_slot_2 = component_sum_4;
        if ( !sr_collision_line_triangle(a1, a2, &a6, a5, &to, input_cursor_3, input_cursor_2, input_cursor)
          && !sr_collision_line_triangle(a1, a2, &a6, a5, &to, input_cursor_3, input_cursor, a10) )
        {
          return 0;
        }
        component_delta_2 = a1[2] - a5[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a5[1]) * (float)(a1[1] - a5[1]))
                      + (float)((float)(*a1 - *a5) * (float)(*a1 - *a5)))
              + (float)(component_delta_2 * component_delta_2));
      }
      else
      {
        component_sum = product_difference_2 + a4[1];
        component_sum_2 = product_difference_3 + a4[2];
        to = product_difference + *a4;
        unused_written_slot = component_sum;
        unused_written_slot_2 = component_sum_2;
        if ( !sr_collision_line_triangle(a1, a2, &a6, a4, &to, input_cursor_3, input_cursor_2, input_cursor)
          && !sr_collision_line_triangle(a1, a2, &a6, a4, &to, input_cursor_3, input_cursor, a10) )
        {
          return 0;
        }
        component_delta = a1[2] - a4[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                      + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
              + (float)(component_delta * component_delta));
      }
      return 1;
    }
  }
  else if ( combined_products_2 < 0.0 )
  {
    return 0;
  }
  if ( !sr_collision_line_triangle(a1, a2, &a6, a4, a5, input_cursor_3, input_cursor_2, input_cursor)
    && !sr_collision_line_triangle(a1, a2, &a6, a4, a5, input_cursor_3, input_cursor, a10)
    && !sr_collision_line_triangle(a1, a2, &a6, a5, a4, input_cursor_3, input_cursor_2, input_cursor)
    && !sr_collision_line_triangle(a1, a2, &a6, a5, a4, input_cursor_3, input_cursor, a10) )
  {
    return 0;
  }
  *a3 = 0.0;
  return 1;
}
#undef to
#undef unused_written_slot
#undef unused_written_slot_2

//----- (0000000140034AE0) ----------------------------------------------------
_BOOL8            sub_140034AE0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        float a9)
{
  float scaled_value;
  float input_value;
  signed int iteration_count;
  unsigned int hiword_result;
  __m128i converted_vector;
  __int64 record_word_offset;
  float weighted_sum;
  float scaled_value_2;
  float converted_vector_2;
  __int64 integer_sum;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 loaded_word;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  __int64 packed_word_bits;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  __int64 packed_word_bits_2;
  float product_difference;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float product_difference_2;
  __int64 scaled_index;
  float product_difference_3;
  float weighted_sum_11;
  float weighted_sum_12;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float weighted_sum_13;
  float product_difference_7;
  float product_difference_8;
  float product_difference_9;
  float square_root;
  float input_value_2;
  int table_value;
  int table_value_2;
  int loaded_word_2;
  int loaded_word_3;
  float input_value_3;
  int table_value_3;
  int table_value_4;
  int loaded_word_4;
  int loaded_word_5;
  signed int iteration_count_2;
  int rol4_result;
  __int64 record_byte_offset;
  float saved_weighted_sum;
  float saved_weighted_sum_2;
  __int64 masked_bits_3;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float scaled_value_3;
  float weighted_sum_24;
  float component_delta;
  float scaled_value_4;
  float product_difference_10;
  float scaled_value_5;
  float product_difference_11;
  float product_difference_12;
  float product_difference_13;
  float product_difference_14;
  float product_difference_15;
  float product_difference_16;
  float product_difference_17;
  float square_root_2;
  float input_value_4;
  int table_value_5;
  int table_value_6;
  int loaded_word_6;
  int loaded_word_7;
  float input_value_5;
  int table_value_7;
  int table_value_8;
  int loaded_word_8;
  int loaded_word_9;
  __int64 masked_bits_4;
  float weighted_sum_25;
  float weighted_sum_26;
  float weighted_sum_27;
  float weighted_sum_28;
  float weighted_sum_29;
  float weighted_sum_30;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  float weighted_sum_34;
  float scaled_value_6;
  float weighted_sum_35;
  float component_delta_2;
  float scaled_value_7;
  float product_difference_18;
  float scaled_value_8;
  float product_difference_19;
  float product_difference_20;
  float product_difference_21;
  float product_difference_22;
  float product_difference_23;
  float product_difference_24;
  float product_difference_25;
  float square_root_3;
  float input_value_6;
  int table_value_9;
  int table_value_10;
  int loaded_word_10;
  int loaded_word_11;
  int collision_sphere_triangle_result;
  float input_value_7;
  int table_value_11;
  int table_value_12;
  int loaded_word_12;
  int loaded_word_13;
  _Alignas(8) unsigned sr_swept_mesh_hit_normal[3];
  unsigned sr_swept_mesh_hit_point[3];
  float sr_swept_mesh_vertex_c[3];
  float sr_swept_mesh_vertex_a[3];
  float sr_swept_mesh_vertex_b[3];
  float sr_swept_mesh_vertex_d[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140034AE0[432];
#define radius (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define radius_2 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define radius_3 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define radius_4 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define radius_5 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define record_byte_offset_2 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 40)) /* [rsp+50h] */
#define hiword_result_2 (*(unsigned int (*))(void *)(sr_frame_140034AE0 + 376)) /* [rsp+1A0h] */
#define scaled_index_2 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 408)) /* [rsp+1C0h] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_140034AE0 + 416)) /* [rsp+1C8h] */

  scaled_value = 65536.0;
  input_value = a9;
  iteration_count = 0;
  *a3 = 65536.0;
  hiword_result = HIWORD(a8);
  converted_vector = _mm_cvtsi32_si128(*(_DWORD *)(a7 + 4));
  record_word_offset = 58LL * (unsigned __int16)a8;
  weighted_sum = (float)*(int *)(a7 + 8);
  hiword_result_2 = HIWORD(a8);
  scaled_value_2 = (float)*(int *)a7;
  scaled_index_2 = record_word_offset * 4;
  saved_weighted_sum_3 = weighted_sum;
  converted_vector_2 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0];
  if ( (int)dword_140404A6C[record_word_offset + 20074623] > 0 )
  {
    integer_sum = 0;
    record_byte_offset_2 = 0;
    do
    {
      masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074615];
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074631];
      loaded_word = 3 * *(_DWORD *)(integer_sum + masked_bits_2);
      weighted_sum_2 = weighted_sum + *(float *)(masked_bits + 4 * loaded_word + 8);
      weighted_sum_3 = scaled_value_2 + *(float *)(masked_bits + 4 * loaded_word);
      weighted_sum_4 = (float)(converted_vector_2 + *(float *)(masked_bits + 4 * loaded_word + 4)) * input_value;
      packed_word_bits = 3 * *(_DWORD *)(integer_sum + masked_bits_2 + 4);
      sr_swept_mesh_vertex_a[2] = weighted_sum_2 * input_value;
      weighted_sum_5 = scaled_value_2 + *(float *)(masked_bits + 4 * packed_word_bits);
      weighted_sum_6 = converted_vector_2 + *(float *)(masked_bits + 4 * packed_word_bits + 4);
      weighted_sum_7 = weighted_sum + *(float *)(masked_bits + 4 * packed_word_bits + 8);
      LODWORD(packed_word_bits) = *(_DWORD *)(integer_sum + masked_bits_2 + 8);
      sr_swept_mesh_vertex_a[0] = weighted_sum_3 * input_value;
      packed_word_bits_2 = 3 * (int)packed_word_bits;
      sr_swept_mesh_vertex_b[0] = weighted_sum_5 * input_value;
      product_difference = (float)(weighted_sum_5 * input_value) - (float)(weighted_sum_3 * input_value);
      weighted_sum_8 = weighted_sum + *(float *)(masked_bits + 4 * packed_word_bits_2 + 8);
      weighted_sum_9 = scaled_value_2 + *(float *)(masked_bits + 4 * packed_word_bits_2);
      weighted_sum_10 = converted_vector_2 + *(float *)(masked_bits + 4 * packed_word_bits_2 + 4);
      LODWORD(packed_word_bits_2) = *(_DWORD *)(integer_sum + masked_bits_2 + 12);
      sr_swept_mesh_vertex_b[1] = weighted_sum_6 * input_value;
      product_difference_2 = (float)(weighted_sum_6 * input_value) - weighted_sum_4;
      scaled_index = 3 * (int)packed_word_bits_2;
      sr_swept_mesh_vertex_c[2] = weighted_sum_8 * input_value;
      product_difference_3 = (float)(weighted_sum_8 * input_value) - (float)(weighted_sum_2 * input_value);
      weighted_sum_11 = scaled_value_2 + *(float *)(masked_bits + 4 * scaled_index);
      weighted_sum_12 = converted_vector_2 + *(float *)(masked_bits + 4 * scaled_index + 4);
      sr_swept_mesh_vertex_c[1] = weighted_sum_10 * input_value;
      product_difference_4 = (float)(weighted_sum_10 * input_value) - weighted_sum_4;
      sr_swept_mesh_vertex_c[0] = weighted_sum_9 * input_value;
      product_difference_5 = (float)(weighted_sum_9 * input_value) - (float)(weighted_sum_3 * input_value);
      sr_swept_mesh_vertex_b[2] = weighted_sum_7 * input_value;
      product_difference_6 = (float)(weighted_sum_7 * input_value) - (float)(weighted_sum_2 * input_value);
      sr_swept_mesh_vertex_d[0] = weighted_sum_11 * input_value;
      weighted_sum_13 = (float)(saved_weighted_sum_3 + *(float *)(masked_bits + 4 * scaled_index + 8)) * input_value;
      sr_swept_mesh_vertex_a[1] = weighted_sum_4;
      sr_swept_mesh_vertex_d[1] = weighted_sum_12 * input_value;
      sr_swept_mesh_vertex_d[2] = weighted_sum_13;
      product_difference_7 = (float)(product_difference_4 * product_difference_6) - (float)(product_difference_3 * product_difference_2);
      product_difference_8 = (float)(product_difference_3 * product_difference) - (float)(product_difference_5 * product_difference_6);
      product_difference_9 = (float)(product_difference_5 * product_difference_2) - (float)(product_difference_4 * product_difference);
      square_root = fsqrt((float)((float)(product_difference_8 * product_difference_8) + (float)(product_difference_7 * product_difference_7)) + (float)(product_difference_9 * product_difference_9));
      if ( square_root == 0.0 )
      {
        (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
        (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
      }
      else
      {
        *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / square_root) * product_difference_7;
        *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / square_root) * product_difference_8;
        (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / square_root) * product_difference_9;
      }
      LODWORD(radius) = a6;
      if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, radius, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
      {
        input_value_2 = a9;
        if ( a9 < *a3 )
        {
          table_value = sr_swept_mesh_hit_point[1];
          *a1 = sr_swept_mesh_hit_point[0];
          table_value_2 = sr_swept_mesh_hit_point[2];
          a1[1] = table_value;
          loaded_word_2 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
          a1[2] = table_value_2;
          loaded_word_3 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
          *(_DWORD *)a2 = loaded_word_2;
          *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
          *(_DWORD *)(a2 + 4) = loaded_word_3;
          *a3 = input_value_2;
          g_151A848F4 = iteration_count;
        }
      }
      LODWORD(radius_2) = a6;
      if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, radius_2, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]) )
      {
        input_value_3 = a9;
        if ( a9 < *a3 )
        {
          table_value_3 = sr_swept_mesh_hit_point[1];
          *a1 = sr_swept_mesh_hit_point[0];
          table_value_4 = sr_swept_mesh_hit_point[2];
          a1[1] = table_value_3;
          loaded_word_4 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
          a1[2] = table_value_4;
          loaded_word_5 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
          *(_DWORD *)a2 = loaded_word_4;
          *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
          *(_DWORD *)(a2 + 4) = loaded_word_5;
          *a3 = input_value_3;
          g_151A848F4 = iteration_count;
        }
      }
      weighted_sum = saved_weighted_sum_3;
      integer_sum = record_byte_offset_2 + 16;
      ++iteration_count;
      record_byte_offset_2 += 16;
    }
    while ( iteration_count < (int)dword_140404A6C[record_word_offset + 20074623] );
    scaled_value = *a3;
    LOWORD(hiword_result) = hiword_result_2;
  }
  iteration_count_2 = 0;
  if ( (int)dword_140404A6C[record_word_offset + 20074651] > 0 )
  {
    rol4_result = 1;
    record_byte_offset = 0;
    do
    {
      if ( ((unsigned __int16)hiword_result & (unsigned __int16)rol4_result & 0x3FF) == 0 )
      {
        saved_weighted_sum = weighted_sum;
        saved_weighted_sum_2 = weighted_sum;
        masked_bits_3 = *(_QWORD *)((char *)&g_145098CE0 + scaled_index_2);
        weighted_sum_14 = weighted_sum + *(float *)(record_byte_offset + masked_bits_3 + 32);
        weighted_sum_15 = scaled_value_2 + *(float *)(record_byte_offset + masked_bits_3 + 24);
        weighted_sum_16 = converted_vector_2 + *(float *)(record_byte_offset + masked_bits_3 + 4);
        weighted_sum_17 = converted_vector_2 + *(float *)(record_byte_offset + masked_bits_3 + 40);
        weighted_sum_18 = converted_vector_2 + *(float *)(record_byte_offset + masked_bits_3 + 16);
        weighted_sum_19 = saved_weighted_sum_2 + *(float *)(record_byte_offset + masked_bits_3 + 20);
        weighted_sum_20 = scaled_value_2 + *(float *)(record_byte_offset + masked_bits_3 + 12);
        weighted_sum_21 = saved_weighted_sum + *(float *)(record_byte_offset + masked_bits_3 + 8);
        weighted_sum_22 = scaled_value_2 + *(float *)(record_byte_offset + masked_bits_3);
        weighted_sum_23 = (float)(converted_vector_2 + *(float *)(record_byte_offset + masked_bits_3 + 28)) * input_value;
        sr_swept_mesh_vertex_d[0] = (float)(scaled_value_2 + *(float *)(record_byte_offset + masked_bits_3 + 36)) * input_value;
        scaled_value_3 = weighted_sum_16 * input_value;
        weighted_sum_24 = (float)(saved_weighted_sum_3 + *(float *)(record_byte_offset + masked_bits_3 + 44)) * input_value;
        sr_swept_mesh_vertex_c[1] = weighted_sum_23;
        component_delta = weighted_sum_23 - scaled_value_3;
        sr_swept_mesh_vertex_d[2] = weighted_sum_24;
        scaled_value_4 = weighted_sum_21 * input_value;
        sr_swept_mesh_vertex_c[2] = weighted_sum_14 * input_value;
        product_difference_10 = (float)(weighted_sum_14 * input_value) - scaled_value_4;
        scaled_value_5 = weighted_sum_22 * input_value;
        sr_swept_mesh_vertex_a[1] = scaled_value_3;
        sr_swept_mesh_vertex_c[0] = weighted_sum_15 * input_value;
        sr_swept_mesh_vertex_d[1] = weighted_sum_17 * input_value;
        sr_swept_mesh_vertex_b[1] = weighted_sum_18 * input_value;
        product_difference_11 = (float)(weighted_sum_18 * input_value) - scaled_value_3;
        sr_swept_mesh_vertex_b[2] = weighted_sum_19 * input_value;
        product_difference_12 = (float)(weighted_sum_19 * input_value) - scaled_value_4;
        sr_swept_mesh_vertex_b[0] = weighted_sum_20 * input_value;
        product_difference_13 = (float)(weighted_sum_20 * input_value) - scaled_value_5;
        sr_swept_mesh_vertex_a[0] = scaled_value_5;
        sr_swept_mesh_vertex_a[2] = scaled_value_4;
        product_difference_14 = (float)(component_delta * product_difference_12) - (float)(product_difference_10 * product_difference_11);
        product_difference_15 = (float)(weighted_sum_15 * input_value) - scaled_value_5;
        product_difference_16 = (float)(product_difference_15 * product_difference_11) - (float)(component_delta * product_difference_13);
        product_difference_17 = (float)(product_difference_10 * product_difference_13) - (float)(product_difference_15 * product_difference_12);
        square_root_2 = fsqrt((float)((float)(product_difference_17 * product_difference_17) + (float)(product_difference_14 * product_difference_14)) + (float)(product_difference_16 * product_difference_16));
        if ( square_root_2 == 0.0 )
        {
          (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
        }
        else
        {
          *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / square_root_2) * product_difference_14;
          *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / square_root_2) * product_difference_17;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / square_root_2) * product_difference_16;
        }
        LODWORD(radius) = a6;
        if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, radius, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
        {
          input_value_4 = a9;
          if ( a9 < *a3 )
          {
            table_value_5 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            table_value_6 = sr_swept_mesh_hit_point[2];
            a1[1] = table_value_5;
            loaded_word_6 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = table_value_6;
            loaded_word_7 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = loaded_word_6;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = loaded_word_7;
            *a3 = input_value_4;
            g_151A848F4 = iteration_count_2 | 0x10000;
          }
        }
        LODWORD(radius_3) = a6;
        if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, radius_3, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]) )
        {
          input_value_5 = a9;
          if ( a9 < *a3 )
          {
            table_value_7 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            table_value_8 = sr_swept_mesh_hit_point[2];
            a1[1] = table_value_7;
            loaded_word_8 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = table_value_8;
            loaded_word_9 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = loaded_word_8;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = loaded_word_9;
            *a3 = input_value_5;
            g_151A848F4 = iteration_count_2 | 0x10000;
          }
        }
        masked_bits_4 = *(_QWORD *)((char *)&g_145098CE0 + scaled_index_2);
        weighted_sum_25 = saved_weighted_sum_3 + *(float *)(record_byte_offset + masked_bits_4 + 20);
        weighted_sum_26 = scaled_value_2 + *(float *)(record_byte_offset + masked_bits_4 + 12);
        weighted_sum_27 = converted_vector_2 + *(float *)(record_byte_offset + masked_bits_4 + 40);
        weighted_sum_28 = converted_vector_2 + *(float *)(record_byte_offset + masked_bits_4 + 4);
        weighted_sum_29 = converted_vector_2 + *(float *)(record_byte_offset + masked_bits_4 + 28);
        weighted_sum_30 = saved_weighted_sum_3 + *(float *)(record_byte_offset + masked_bits_4 + 32);
        weighted_sum_31 = scaled_value_2 + *(float *)(record_byte_offset + masked_bits_4 + 24);
        weighted_sum_32 = saved_weighted_sum_3 + *(float *)(record_byte_offset + masked_bits_4 + 44);
        weighted_sum_33 = scaled_value_2 + *(float *)(record_byte_offset + masked_bits_4 + 36);
        weighted_sum_34 = (float)(converted_vector_2 + *(float *)(record_byte_offset + masked_bits_4 + 16)) * input_value;
        sr_swept_mesh_vertex_d[0] = (float)(scaled_value_2 + *(float *)(record_byte_offset + masked_bits_4)) * input_value;
        scaled_value_6 = weighted_sum_27 * input_value;
        weighted_sum_35 = (float)(saved_weighted_sum_3 + *(float *)(record_byte_offset + masked_bits_4 + 8)) * input_value;
        sr_swept_mesh_vertex_c[1] = weighted_sum_34;
        component_delta_2 = weighted_sum_34 - scaled_value_6;
        sr_swept_mesh_vertex_d[2] = weighted_sum_35;
        scaled_value_7 = weighted_sum_32 * input_value;
        sr_swept_mesh_vertex_c[2] = weighted_sum_25 * input_value;
        product_difference_18 = (float)(weighted_sum_25 * input_value) - scaled_value_7;
        scaled_value_8 = weighted_sum_33 * input_value;
        sr_swept_mesh_vertex_a[1] = scaled_value_6;
        sr_swept_mesh_vertex_c[0] = weighted_sum_26 * input_value;
        sr_swept_mesh_vertex_d[1] = weighted_sum_28 * input_value;
        sr_swept_mesh_vertex_b[1] = weighted_sum_29 * input_value;
        product_difference_19 = (float)(weighted_sum_29 * input_value) - scaled_value_6;
        sr_swept_mesh_vertex_b[2] = weighted_sum_30 * input_value;
        product_difference_20 = (float)(weighted_sum_30 * input_value) - scaled_value_7;
        sr_swept_mesh_vertex_b[0] = weighted_sum_31 * input_value;
        product_difference_21 = (float)(weighted_sum_31 * input_value) - scaled_value_8;
        sr_swept_mesh_vertex_a[0] = scaled_value_8;
        sr_swept_mesh_vertex_a[2] = scaled_value_7;
        product_difference_22 = (float)(component_delta_2 * product_difference_20) - (float)(product_difference_18 * product_difference_19);
        product_difference_23 = (float)(weighted_sum_26 * input_value) - scaled_value_8;
        product_difference_24 = (float)(product_difference_23 * product_difference_19) - (float)(component_delta_2 * product_difference_21);
        product_difference_25 = (float)(product_difference_18 * product_difference_21) - (float)(product_difference_23 * product_difference_20);
        square_root_3 = fsqrt((float)((float)(product_difference_25 * product_difference_25) + (float)(product_difference_22 * product_difference_22)) + (float)(product_difference_24 * product_difference_24));
        if ( square_root_3 == 0.0 )
        {
          (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
        }
        else
        {
          *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / square_root_3) * product_difference_22;
          *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / square_root_3) * product_difference_25;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / square_root_3) * product_difference_24;
        }
        LODWORD(radius_4) = a6;
        if ( (unsigned int)sr_collision_sphere_triangle((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, radius_4, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
        {
          input_value_6 = a9;
          if ( a9 < *a3 )
          {
            table_value_9 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            table_value_10 = sr_swept_mesh_hit_point[2];
            a1[1] = table_value_9;
            loaded_word_10 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = table_value_10;
            loaded_word_11 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = loaded_word_10;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = loaded_word_11;
            *a3 = input_value_6;
            g_151A848F4 = iteration_count_2 | 0x10000;
          }
        }
        LODWORD(radius_5) = a6;
        collision_sphere_triangle_result = sr_collision_sphere_triangle((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, radius_5, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]);
        LOWORD(hiword_result) = hiword_result_2;
        if ( collision_sphere_triangle_result )
        {
          input_value_7 = a9;
          if ( a9 < *a3 )
          {
            table_value_11 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            table_value_12 = sr_swept_mesh_hit_point[2];
            a1[1] = table_value_11;
            loaded_word_12 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = table_value_12;
            loaded_word_13 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = loaded_word_12;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = loaded_word_13;
            *a3 = input_value_7;
            g_151A848F4 = iteration_count_2 | 0x10000;
          }
        }
      }
      ++iteration_count_2;
      weighted_sum = saved_weighted_sum_3;
      record_byte_offset += 48;
      rol4_result = __ROL4__(rol4_result, 1);
    }
    while ( iteration_count_2 < *(int *)((char *)&g_145098CD8 + scaled_index_2) );
    scaled_value = *a3;
  }
  return scaled_value < 65536.0;
}
#undef radius
#undef radius_2
#undef radius_3
#undef radius_4
#undef radius_5
#undef record_byte_offset_2
#undef hiword_result_2
#undef scaled_index_2
#undef saved_weighted_sum_3

//----- (0000000140038130) ----------------------------------------------------
__int64            sub_140038130(int a1, int a2, int a3, int a4)
{
  __int64 integer_sum;

  integer_sum = (int)world_grid_block_count++;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[2 * a1 + 421506981]
            + 4LL
            * (int)(a2 + dword_140404A6C[263004 * a1 + 111579650] * (a4 + a3 * dword_140404A6C[263004 * a1 + 111579652]))) = integer_sum;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[512 * integer_sum + 421506990]), 0xFFu, 0x800u);
  return (unsigned int)integer_sum;
}

//----- (0000000140038480) ----------------------------------------------------
float            sub_140038480(float a1, float a2, float a3)
{
  float cosine_value;

  cosine_value = (1.0 - cos(a3 * 3.14159265359)) * 0.5;
  return (float)((float)(1.0 - cosine_value) * a1) + (float)(a2 * cosine_value);
}

//----- (00000001400384F0) ----------------------------------------------------
__m128            sub_1400384F0(float a1, float a2, int a3)
{
  int input_value;
  int input_value_2;
  int masked_bits;
  int shifted_bits;
  int scaled_index;
  int shifted_bits_2;
  int record_word_offset;
  int scaled_index_2;
  int shifted_bits_3;
  int shifted_bits_4;
  float cosine_value;
  double cosine_value_2;
  __int128 state_address;
  float product_difference;

  input_value = (int)a1;
  input_value_2 = (int)a2;
  masked_bits = a3 & ((int)a1 + 1);
  shifted_bits = ((57 * input_value_2 + input_value) << 13) ^ (57 * input_value_2 + input_value);
  scaled_index = 15731 * shifted_bits * shifted_bits;
  shifted_bits_2 = ((masked_bits + 57 * input_value_2) << 13) ^ (masked_bits + 57 * input_value_2);
  record_word_offset = 57 * (a3 & ((int)a2 + 1));
  scaled_index_2 = 15731 * shifted_bits_2 * shifted_bits_2 + 789221;
  shifted_bits_3 = 15731 * (((record_word_offset + input_value) << 13) ^ (record_word_offset + input_value)) * (((record_word_offset + input_value) << 13) ^ (record_word_offset + input_value)) + 789221;
  shifted_bits_4 = 15731 * (((record_word_offset + masked_bits) << 13) ^ (record_word_offset + masked_bits)) * (((record_word_offset + masked_bits) << 13) ^ (record_word_offset + masked_bits)) + 789221;
  cosine_value = (1.0 - cos((float)(a1 - (float)(int)a1) * 3.14159265359)) * 0.5;
  cosine_value_2 = cos((float)(a2 - (float)(int)a2) * 3.14159265359);
  state_address = 0x3F800000u;
  product_difference = (1.0 - cosine_value_2) * 0.5;
  *(float *)&state_address = (float)((float)((float)((float)(1.0
                                                 - (float)((float)((scaled_index_2 * scaled_index_2 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * cosine_value)
                                 + (float)((float)(1.0
                                                 - (float)((float)(((scaled_index + 789221) * (scaled_index + 789221) - 771171059)
                                                                 & 0x7FFFFFFF)
                                                         * 9.3132257e-10))
                                         * (float)(1.0 - cosine_value)))
                         * (float)(1.0 - product_difference))
                 + (float)((float)((float)((float)(1.0
                                                 - (float)((float)((shifted_bits_3 * shifted_bits_3 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * (float)(1.0 - cosine_value))
                                 + (float)((float)(1.0
                                                 - (float)((float)((shifted_bits_4 * shifted_bits_4 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * cosine_value))
                         * product_difference);
  return (__m128)state_address;
}

//----- (00000001400387E0) ----------------------------------------------------
__int64 sub_1400387E0()
{
  int masked_bits;
  int masked_bits_2;
  int masked_bits_3;
  float component_delta;
  float component_delta_2;
  unsigned int state_word;
  signed int saved_iteration_count;
  __int64 state_word_2;
  float state_address;
  double absolute_value;
  float scaled_value;
  float state_address_2;
  double absolute_value_2;
  bool comparison_result;
  int iteration_count;
  int state_word_3;
  signed int saved_iteration_count_2;
  float scaled_value_2;
  int iteration_count_2;
  unsigned int *record_byte_offset;
  int saved_loaded_word;
  int loaded_word;
  int scaled_index;
  int integer_difference;
  int scaled_index_2;
  int scaled_index_3;
  __int64 remaining_count;
  int cached_loaded_word;
  __m128i converted_vector;
  int scaled_index_4;
  __m128i converted_vector_2;
  __int64 scaled_index_5;
  unsigned int state_word_4;
  unsigned int state_word_5;
  signed int integer_difference_2;
  int integer_difference_3;
  int state_word_6;
  signed int state_word_7;
  signed int state_word_8;
  int state_word_9;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  unsigned int saved_iteration_count_3;
  int iteration_count_3;
  unsigned int *state_address_3;
  signed int state_word_10;
  signed int state_word_11;
  int state_word_12;
  int iteration_count_4;
  unsigned int state_word_13;
  unsigned int state_word_14;
  int iteration_count_5;
  signed int state_word_15;
  int iteration_count_6;
  unsigned int saved_state_word;
  int iteration_count_7;
  int iteration_count_8;
  int element_index;
  int shifted_bits_4;
  int saved_iteration_count_4;
  __int64 saved_iteration_count_5;
  int iteration_count_9;
  __int64 iteration_count_10;
  unsigned int *state_address_4;
  int masked_bits_4;
  __int64 iteration_count_11;
  unsigned int *record_byte_offset_2;
  __int64 iteration_count_12;
  unsigned int *record_byte_offset_3;
  __int64 iteration_count_13;
  unsigned int *buffer_cursor;
  float combined_products;
  float state_address_5;
  float scaled_ratio;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  int iteration_count_14;
  int state_word_16;
  int scaled_index_6;
  int scaled_index_7;
  int scaled_index_8;
  unsigned int *state_address_6;
  unsigned int *state_address_7;
  int state_word_17;
  __int64 scaled_index_9;
  __int64 state_word_18;
  signed int state_word_19;
  signed int iteration_count_15;
  __int64 iteration_count_16;
  unsigned int *state_address_8;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  int iteration_count_17;
  unsigned int *state_address_9;
  unsigned int *state_address_10;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __m128i converted_vector_3;
  unsigned int state_word_20;
  unsigned int state_word_21;
  unsigned int state_word_22;
  unsigned int state_word_23;
  unsigned int state_word_24;
  unsigned int state_word_25;
  int scaled_index_15;
  int scaled_index_16;
  int scaled_index_17;
  __int64 scaled_index_18;
  char *text_cursor;
  unsigned int *state_address_11;
  char input_byte;
  unsigned int *record_byte_offset_4;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400387E0[160];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400387E0 + 0)) /* [rsp+8h] */
#define state_address_12 (*(float * (*))(void *)(sr_frame_1400387E0 + 32)) /* [rsp+28h] */
#define state_address_13 (*(float * (*))(void *)(sr_frame_1400387E0 + 40)) /* [rsp+30h] */
#define unused_written_slot (*(float * (*))(void *)(sr_frame_1400387E0 + 48)) /* [rsp+38h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400387E0 + 56)) /* [rsp+40h] */
#define distance (*(signed int (*))(void *)(sr_frame_1400387E0 + 64)) /* [rsp+48h] */
#define state_word_26 (*(unsigned int (*))(void *)(sr_frame_1400387E0 + 68)) /* [rsp+4Ch] */
#define b1 (*(float (*))(void *)(sr_frame_1400387E0 + 72)) /* [rsp+50h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_1400387E0 + 76)) /* [rsp+54h] */
#define unused_written_slot_4 (*(float (*))(void *)(sr_frame_1400387E0 + 80)) /* [rsp+58h] */
#define b0 (*(float (*))(void *)(sr_frame_1400387E0 + 88)) /* [rsp+60h] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_1400387E0 + 92)) /* [rsp+64h] */
#define unused_written_slot_6 (*(float (*))(void *)(sr_frame_1400387E0 + 96)) /* [rsp+68h] */
#define on_a (*(float (*)[4])(void *)(sr_frame_1400387E0 + 104)) /* [rsp+70h] */
#define on_b (*(float (*)[4])(void *)(sr_frame_1400387E0 + 120)) /* [rsp+80h] */
#define combined_products_5 (*(float (*))(void *)(sr_frame_1400387E0 + 136)) /* [rsp+90h] */
#define combined_products_6 (*(float (*))(void *)(sr_frame_1400387E0 + 140)) /* [rsp+94h] */
#define combined_products_7 (*(float (*))(void *)(sr_frame_1400387E0 + 144)) /* [rsp+98h] */
#define unused_frame_slot_152 (*(__int64 (*))(void *)(sr_frame_1400387E0 + 152)) /* [rsp+A0h] */

  masked_bits = g_189F0EEF0;
  masked_bits_2 = g_189F0EEEC;
  masked_bits_3 = g_189F0EEE8;
  component_delta = (float)(g_183F7C6C0 - 512.0) + (float)(g_183F7C6C0 - 512.0);
  component_delta_2 = (float)(288.0 - g_183F7C6C4) + (float)(288.0 - g_183F7C6C4);
  combined_products_5 = (float)((float)(g_183F7C544 - (float)(g_183F7C568 * 1024.0))
               + (float)(g_183F7C550 * component_delta))
       + (float)(g_183F7C55C * component_delta_2);
  combined_products_6 = (float)((float)(g_183F7C548 - (float)(g_183F7C56C * 1024.0))
               + (float)(g_183F7C554 * component_delta))
       + (float)(g_183F7C560 * component_delta_2);
  combined_products_7 = (float)((float)(g_183F7C54C - (float)(g_183F7C570 * 1024.0))
               + (float)(g_183F7C558 * component_delta))
       + (float)(g_183F7C564 * component_delta_2);
  if ( BYTE1(g_183F7C974) )
  {
    if ( !BYTE1(g_183F7C774) )
    {
      g_189F0EEDC = g_189F0EEDC
                                            + (float)(*(float *)&g_189F0EEE8 * -4.0);
      g_189F0EEE0 = g_189F0EEE0
                                            + (float)(*(float *)&g_189F0EEEC * -4.0);
      g_189F0EEE4 = g_189F0EEE4
                                            + (float)(*(float *)&g_189F0EEF0 * -4.0);
      if ( BYTE1(g_183F7CA40) )
      {
        g_189F0EF10 = (int)(float)((float)(int)g_189F0EF10
                                                - *(float *)&g_189F0EEE8);
        g_189F0EF14 = (int)(float)((float)(int)g_189F0EF14
                                                - *(float *)&g_189F0EEEC);
        g_189F0EF18 = (int)(float)((float)(int)g_189F0EF18
                                                - *(float *)&g_189F0EEF0);
      }
    }
  }
  if ( BYTE1(g_183F7C968) )
  {
    if ( !BYTE1(g_183F7C768) )
    {
      g_189F0EEDC = g_189F0EEDC
                                            + (float)(*(float *)&g_189F0EEE8 * 4.0);
      g_189F0EEE0 = g_189F0EEE0
                                            + (float)(*(float *)&g_189F0EEEC * 4.0);
      g_189F0EEE4 = g_189F0EEE4
                                            + (float)(*(float *)&g_189F0EEF0 * 4.0);
      if ( BYTE1(g_183F7CA40) )
      {
        g_189F0EF10 = (int)(float)((float)(int)g_189F0EF10
                                                + *(float *)&g_189F0EEE8);
        g_189F0EF14 = (int)(float)((float)(int)g_189F0EF14
                                                + *(float *)&g_189F0EEEC);
        g_189F0EF18 = (int)(float)((float)(int)g_189F0EF18
                                                + *(float *)&g_189F0EEF0);
      }
    }
  }
  state_word = g_189F0EEA4;
  saved_iteration_count = -1;
  if ( g_189F0EEA4 == 2 )
  {
    if ( LOBYTE(g_183F7C98C) )
    {
      g_189F0EF54 = -1;
      g_189F0EF5C = -1;
    }
    else
    {
      state_word_2 = (int)g_189F0EF5C;
      if ( g_189F0EF5C != -1 )
      {
        if ( BYTE2(g_183F7C97C) && !BYTE2(g_183F7C77C) )
          ++dword_140404A6C[13 * g_189F0EF5C + 193074056];
        if ( HIBYTE(g_183F7C97C) && !HIBYTE(g_183F7C77C) )
          --dword_140404A6C[13 * state_word_2 + 193074056];
        if ( LOBYTE(g_183F7C980) && !LOBYTE(g_183F7C780) )
          ++dword_140404A6C[13 * state_word_2 + 193074057];
        if ( BYTE1(g_183F7C980) && !BYTE1(g_183F7C780) )
          --dword_140404A6C[13 * state_word_2 + 193074057];
      }
    }
  }
  else if ( g_189F0EEA4 == 3 )
  {
    if ( LOBYTE(g_183F7C968) && !LOBYTE(g_183F7C768) )
      g_189F0EF50 = (g_189F0EF50 + 1) & 3;
    if ( LOBYTE(g_183F7C9AC)
      && !LOBYTE(g_183F7C7AC)
      && (int)g_1B4277C40 > 0 )
    {
      --g_1B4277C40;
    }
  }
  if ( BYTE2(g_183F7C9A0) && !BYTE2(g_183F7C7A0) )
  {
    asset_save_city_sbc_candidate();
    state_word = g_189F0EEA4;
    masked_bits = g_189F0EEF0;
    masked_bits_2 = g_189F0EEEC;
    masked_bits_3 = g_189F0EEE8;
  }
  if ( HIBYTE(g_183F7C974) && !HIBYTE(g_183F7C774) )
  {
    if ( (unsigned int)sub_1400DC050((float *)(unsigned int *)&g_183F7C544, &combined_products_5, 0) )
    {
      state_address = (float)(int)(float)(*(float *)&g_151A84880 * 0.25) * 4.0;
      absolute_value = fabs(g_183F7C568);
      scaled_value = (float)(int)(float)((ragdoll_unknown_height) * 0.25) * 4.0;
      state_address_2 = (float)(int)(float)(*(float *)&g_151A84888 * 0.25) * 4.0;
      g_189F0EEDC = state_address + 2.0;
      absolute_value_2 = fabs(g_183F7C56C);
      g_189F0EEE0 = scaled_value + 2.0;
      g_189F0EEE4 = state_address_2 + 2.0;
      if ( absolute_value <= absolute_value_2 || absolute_value <= fabs(g_183F7C570) )
      {
        if ( absolute_value_2 <= fabs(g_183F7C570) )
        {
          masked_bits_3 = dword_1402F6198;
          masked_bits_2 = dword_1402F619C;
          masked_bits = dword_1402F61A0;
          comparison_result = g_183F7C570 <= 0.0;
        }
        else
        {
          masked_bits_2 = dword_1402F618C;
          masked_bits = dword_1402F6190;
          comparison_result = g_183F7C56C <= 0.0;
          masked_bits_3 = dword_1402F6188;
        }
      }
      else
      {
        masked_bits_3 = dword_1402F6178;
        masked_bits_2 = dword_1402F617C;
        masked_bits = dword_1402F6180;
        comparison_result = g_183F7C568 <= 0.0;
      }
      if ( comparison_result )
      {
        *(float *)&masked_bits_3 = -*(float *)&masked_bits_3;
        *(float *)&masked_bits_2 = -*(float *)&masked_bits_2;
        *(float *)&masked_bits = -*(float *)&masked_bits;
      }
      state_word = g_189F0EEA4;
      g_189F0EEF0 = masked_bits;
      g_189F0EEEC = masked_bits_2;
      g_189F0EEE8 = masked_bits_3;
      if ( g_189F0EEA4 == 2 )
      {
        g_189F0EEDC = (float)((float)(*(float *)&masked_bits_3 * 2.25) + state_address) + 2.0;
        g_189F0EEE4 = (float)((float)(*(float *)&masked_bits * 2.25) + state_address_2) + 2.0;
        g_189F0EEE0 = (float)((float)(*(float *)&masked_bits_2 * 2.25) + scaled_value) + 2.0;
      }
    }
    else
    {
      masked_bits = g_189F0EEF0;
      masked_bits_2 = g_189F0EEEC;
      masked_bits_3 = g_189F0EEE8;
      state_word = g_189F0EEA4;
    }
  }
  iteration_count = 0;
  g_189F0EEA8 = 0;
  if ( state_word )
  {
    state_word_3 = g_175EFB090;
    distance = g_189F0EF4C;
    state_word_5 = g_160FC481C;
    goto LABEL_83;
  }
  if ( !BYTE2(g_183F7C968) || BYTE2(g_183F7C768) )
  {
    state_word_3 = g_175EFB090;
  }
  else
  {
    state_word_3 = g_175EFB090;
    saved_iteration_count_2 = -1;
    scaled_value_2 = 1.0;
    iteration_count_2 = 0;
    g_189F0EF44 = -1;
    if ( (int)g_175EFB090 > 0 )
    {
      record_byte_offset = &g_175EFB0EC;
      while ( 1 )
      {
        saved_loaded_word = *(record_byte_offset - 1);
        loaded_word = *record_byte_offset;
        scaled_index = *(record_byte_offset - 2);
        integer_difference = saved_loaded_word - 1;
        scaled_index_2 = *record_byte_offset - 1;
        if ( scaled_index == 1 )
          break;
        scaled_index_3 = 0;
        if ( scaled_index != 2 )
          goto LABEL_58;
LABEL_61:
        remaining_count = *(record_byte_offset - 2);
        do
        {
          cached_loaded_word = saved_loaded_word;
          saved_loaded_word = loaded_word;
          loaded_word = cached_loaded_word;
          --remaining_count;
        }
        while ( remaining_count );
LABEL_63:
        converted_vector = _mm_cvtsi32_si128(*(record_byte_offset - 5) - integer_difference);
        scaled_index_4 = *(record_byte_offset - 3) - scaled_index_2;
        unused_written_slot_5 = (float)(int)*(record_byte_offset - 4) * 4.0;
        b0 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 4.0;
        unused_written_slot = &b1;
        state_address_13 = &b0;
        state_address_12 = &combined_products_5;
        unused_written_slot_6 = (float)scaled_index_4 * 4.0;
        converted_vector_2 = _mm_cvtsi32_si128(record_byte_offset[1]);
        b1 = (float)saved_loaded_word * 4.0;
        unused_written_slot_3 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0] * 4.0;
        unused_written_slot_4 = (float)loaded_word * 4.0;
        if ( sub_1400D8790(
               on_a,
               (__int64)on_b,
               (float *)&distance,
               (float *)(unsigned int *)&g_183F7C544,
               &combined_products_5,
               &b0,
               &b1)
          && scaled_value_2 > *(float *)&distance )
        {
          saved_iteration_count_2 = iteration_count_2;
          scaled_value_2 = *(float *)&distance;
          g_189F0EF44 = iteration_count_2;
        }
        else
        {
          saved_iteration_count_2 = g_189F0EF44;
        }
        state_word_3 = g_175EFB090;
        ++iteration_count_2;
        record_byte_offset += 24;
        if ( iteration_count_2 >= (int)g_175EFB090 )
        {
          masked_bits = g_189F0EEF0;
          masked_bits_2 = g_189F0EEEC;
          masked_bits_3 = g_189F0EEE8;
          state_word = g_189F0EEA4;
          goto LABEL_69;
        }
      }
      scaled_index_3 = *record_byte_offset - 1;
LABEL_58:
      scaled_index_2 = saved_loaded_word - 1;
      integer_difference = 0;
      if ( scaled_index != 3 )
      {
        scaled_index_2 = 0;
        integer_difference = scaled_index_3;
      }
      if ( scaled_index <= 0 )
        goto LABEL_63;
      goto LABEL_61;
    }
LABEL_69:
    if ( BYTE1(g_183F7CA40) && saved_iteration_count_2 != -1 )
    {
      scaled_index_5 = 24LL * saved_iteration_count_2;
      state_word_4 = dword_140404A6C[scaled_index_5 + 225171850];
      g_189F0EF50 = dword_140404A6C[scaled_index_5 + 225171870];
      goto LABEL_74;
    }
  }
  state_word_4 = g_189F0EF4C;
LABEL_74:
  if ( LOBYTE(g_183F7C968) && !LOBYTE(g_183F7C768) )
    g_189F0EF50 = (LOBYTE(g_189F0EF50) + 1) & 3;
  state_word_5 = g_160FC481C;
  integer_difference_2 = state_word_4 - g_160FC481C;
  if ( integer_difference_2 < 0 )
    integer_difference_2 = g_189F0EF48 - 1;
  if ( integer_difference_2 >= (int)g_189F0EF48 )
    integer_difference_2 = 0;
  distance = integer_difference_2;
  g_189F0EF4C = integer_difference_2;
LABEL_83:
  if ( state_word != 1 )
    goto LABEL_157;
  integer_difference_3 = g_189F0EF60 - state_word_5;
  if ( (int)(g_189F0EF60 - state_word_5) >= 0 )
  {
    if ( integer_difference_3 >= 3 )
      integer_difference_3 = 0;
  }
  else
  {
    integer_difference_3 = 2;
  }
  state_word_6 = g_189F0EF20;
  state_word_7 = g_189F0EF24;
  state_word_8 = g_189F0EF1C;
  state_word_26 = g_189F0EF20;
  g_189F0EF60 = integer_difference_3;
  if ( BYTE1(g_183F7C96C) && !BYTE1(g_183F7C76C) )
  {
    state_word_9 = g_1726DA088;
    g_175EEA08C = 1;
    shifted_bits = (int)g_189F0EF20 >> 3;
    shifted_bits_2 = (int)g_189F0EF1C >> 3;
    shifted_bits_3 = (int)g_189F0EF24 >> 3;
    saved_iteration_count_3 = -1;
    g_175EEA090 = 0x61666F73676962LL;
    iteration_count_3 = 0;
    if ( (int)g_1726DA088 <= 0 )
      goto LABEL_99;
    state_address_3 = &g_1726DA090;
    do
    {
      if ( !*(state_address_3 - 1) && *state_address_3 == shifted_bits_2 && state_address_3[1] == shifted_bits && state_address_3[2] == shifted_bits_3 )
        saved_iteration_count_3 = iteration_count_3;
      ++iteration_count_3;
      state_address_3 += 3588;
    }
    while ( iteration_count_3 < (int)g_1726DA088 );
    if ( saved_iteration_count_3 == -1 )
    {
LABEL_99:
      if ( (int)g_1726DA088 >= 4096 )
      {
LABEL_102:
        state_word_8 = g_189F0EF1C;
        goto LABEL_103;
      }
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
      state_word_7 = g_189F0EF24;
      dword_140404A6C[3588 * g_1726DA088 + 210457992] = 0;
      dword_140404A6C[3588 * g_1726DA088 + 210457993] = shifted_bits_2;
      dword_140404A6C[3588 * g_1726DA088 + 210457994] = shifted_bits;
      dword_140404A6C[3588 * g_1726DA088 + 210457995] = shifted_bits_3;
      saved_iteration_count_3 = g_1726DA088;
      state_word_9 = ++g_1726DA088;
      if ( saved_iteration_count_3 == -1 )
      {
        state_word_3 = g_175EFB090;
        goto LABEL_102;
      }
    }
    dword_140404A6C[3588 * saved_iteration_count_3 + 210461068 + 64 * (state_word_6 & 7) + 8 * (state_word_7 & 7) + (g_189F0EF1C & 7)] = 0x40000000;
    state_word_3 = g_175EFB090;
    state_word_9 = g_1726DA088;
    goto LABEL_102;
  }
  state_word_9 = g_1726DA088;
LABEL_103:
  state_word_10 = g_189F0EF30;
  state_word_11 = g_189F0EF28;
  state_word_12 = g_189F0EF2C;
  if ( LOBYTE(g_183F7C968) )
  {
    if ( !LOBYTE(g_183F7C768) )
    {
      iteration_count_4 = state_word_6;
      if ( state_word_6 <= (int)g_189F0EF2C )
      {
        state_word_13 = g_14500A75C;
        state_word_14 = g_14500A70C;
        while ( 1 )
        {
          iteration_count_5 = state_word_7;
          if ( state_word_7 > state_word_10 )
            goto LABEL_124;
          state_word_15 = g_189F0EF28;
          do
          {
            iteration_count_6 = state_word_8;
            if ( state_word_8 > state_word_15 )
              goto LABEL_122;
            do
            {
              if ( integer_difference_3 )
              {
                if ( integer_difference_3 == 1 )
                {
                  g_189F0EF64 = 65537;
                  saved_state_word = state_word_14;
                  g_189F0EF68 = 65537;
                  g_189F0EF6C = 65537;
                }
                else
                {
                  if ( integer_difference_3 != 2 )
                    goto LABEL_120;
                  g_189F0EF64 = 2;
                  saved_state_word = state_word_13;
                  g_189F0EF68 = 131074;
                  g_189F0EF6C = 131074;
                }
                state_address_13 = (float *)&g_189F0EF64;
                LODWORD(state_address_12) = saved_state_word | 0x80000000;
              }
              else
              {
                state_address_13 = (float *)&g_189F0EF64;
                LODWORD(state_address_12) = 0x40000000;
                *(_QWORD *)&g_189F0EF64 = 0;
                g_189F0EF6C = 0;
              }
              sub_1400D4C40(0, iteration_count_6, iteration_count_4, iteration_count_5, (unsigned int)state_address_12, state_address_13);
              state_word_15 = g_189F0EF28;
LABEL_120:
              ++iteration_count_6;
            }
            while ( iteration_count_6 <= state_word_15 );
            state_word_8 = g_189F0EF1C;
LABEL_122:
            ++iteration_count_5;
          }
          while ( iteration_count_5 <= (int)g_189F0EF30 );
          state_word_10 = g_189F0EF30;
          state_word_12 = g_189F0EF2C;
          state_word_7 = g_189F0EF24;
LABEL_124:
          if ( ++iteration_count_4 > state_word_12 )
          {
            state_word_3 = g_175EFB090;
            state_word_9 = g_1726DA088;
            state_word_11 = g_189F0EF28;
            break;
          }
        }
      }
    }
  }
  if ( LOBYTE(g_183F7C9AC) )
  {
    if ( !LOBYTE(g_183F7C7AC) )
    {
      iteration_count_7 = g_189F0EF20;
      if ( (int)g_189F0EF20 <= state_word_12 )
      {
        do
        {
          iteration_count_8 = state_word_7;
          if ( state_word_7 <= state_word_10 )
          {
            do
            {
              element_index = state_word_8;
              if ( state_word_8 <= state_word_11 )
              {
                shifted_bits_4 = iteration_count_7 >> 3;
                do
                {
                  saved_iteration_count_4 = -1;
                  saved_iteration_count_5 = -1;
                  iteration_count_9 = 0;
                  iteration_count_10 = 0;
                  if ( state_word_9 > 0 )
                  {
                    state_address_4 = &g_1726DA090;
                    do
                    {
                      if ( !*(state_address_4 - 1) && *state_address_4 == element_index >> 3 && state_address_4[1] == shifted_bits_4 && state_address_4[2] == iteration_count_8 >> 3 )
                      {
                        saved_iteration_count_4 = iteration_count_9;
                        saved_iteration_count_5 = iteration_count_10;
                      }
                      ++iteration_count_9;
                      ++iteration_count_10;
                      state_address_4 += 3588;
                    }
                    while ( iteration_count_9 < state_word_9 );
                    if ( saved_iteration_count_4 != -1 )
                    {
                      masked_bits_4 = (iteration_count_8 & 7) + 8 * (iteration_count_7 & 7);
                      iteration_count_11 = 0;
                      dword_140404A6C[3588 * saved_iteration_count_5 + 210457996 + 8 * masked_bits_4 + (element_index & 7)] = 0;
                      record_byte_offset_2 = &dword_140404A6C[3588 * saved_iteration_count_5 + 210457996];
LABEL_142:
                      iteration_count_12 = 0;
                      record_byte_offset_3 = record_byte_offset_2;
LABEL_143:
                      iteration_count_13 = 0;
                      buffer_cursor = record_byte_offset_3;
                      while ( !*buffer_cursor )
                      {
                        ++iteration_count_13;
                        ++buffer_cursor;
                        if ( iteration_count_13 >= 8 )
                        {
                          ++iteration_count_12;
                          record_byte_offset_3 += 8;
                          if ( iteration_count_12 < 8 )
                            goto LABEL_143;
                          ++iteration_count_11;
                          record_byte_offset_2 += 64;
                          if ( iteration_count_11 >= 8 )
                          {
                            --g_1726DA088;
                            crt_memcpy(
                              (__m128i *)&dword_140404A6C[3588 * saved_iteration_count_4 + 210457992],
                              (     __m128i *)&dword_140404A6C[3588 * g_1726DA088 + 210457992],
                              0x3810u);
                            break;
                          }
                          goto LABEL_142;
                        }
                      }
                      iteration_count_7 = state_word_26;
                      state_word_9 = g_1726DA088;
                    }
                  }
                  ++element_index;
                }
                while ( element_index <= state_word_11 );
                state_word_10 = g_189F0EF30;
                state_word_8 = g_189F0EF1C;
              }
              ++iteration_count_8;
            }
            while ( iteration_count_8 <= state_word_10 );
            state_word_12 = g_189F0EF2C;
            state_word_7 = g_189F0EF24;
          }
          state_word_26 = ++iteration_count_7;
        }
        while ( iteration_count_7 <= state_word_12 );
        state_word_3 = g_175EFB090;
      }
    }
  }
  saved_iteration_count = -1;
LABEL_157:
  if ( (float)((float)((float)((float)(g_189F0EEE0 - combined_products_6) * *(float *)&masked_bits_2)
                     + (float)((float)(g_189F0EEDC - combined_products_5) * *(float *)&masked_bits_3))
             + (float)((float)(g_189F0EEE4 - combined_products_7) * *(float *)&masked_bits)) >= 0.0 )
  {
    combined_products = (float)((float)((float)(g_189F0EEE0 - g_183F7C548)
                        * *(float *)&masked_bits_2)
                + (float)((float)(g_189F0EEDC - g_183F7C544)
                        * *(float *)&masked_bits_3))
        + (float)((float)(g_189F0EEE4 - g_183F7C54C) * *(float *)&masked_bits);
    if ( combined_products <= 0.0 )
    {
      state_address_5 = (float)((float)(*(float *)&masked_bits_3 * (float)(combined_products_5 - g_183F7C544))
                  + (float)(*(float *)&masked_bits_2 * (float)(combined_products_6 - g_183F7C548)))
          + (float)(*(float *)&masked_bits * (float)(combined_products_7 - g_183F7C54C));
      if ( state_address_5 != 0.0 )
      {
        scaled_ratio = combined_products / state_address_5;
        combined_products_2 = (float)(scaled_ratio * (float)(combined_products_5 - g_183F7C544))
            + g_183F7C544;
        on_a[0] = combined_products_2;
        combined_products_3 = (float)(scaled_ratio * (float)(combined_products_6 - g_183F7C548))
            + g_183F7C548;
        combined_products_4 = (float)(scaled_ratio * (float)(combined_products_7 - g_183F7C54C))
            + g_183F7C54C;
        on_a[1] = combined_products_3;
        on_a[2] = combined_products_4;
        switch ( g_189F0EEA4 )
        {
          case 2u:
            iteration_count_14 = 0;
            state_word_16 = g_16E486878;
            scaled_index_6 = (int)(float)((float)(combined_products_2 * 0.25) + 0.5);
            scaled_index_7 = (int)(float)((float)(combined_products_3 * 0.25) + 0.5);
            g_189F0EEF4 = scaled_index_6;
            scaled_index_8 = (int)(float)((float)(combined_products_4 * 0.25) + 0.5);
            g_189F0EEF8 = scaled_index_7;
            g_189F0EEFC = scaled_index_8;
            if ( (int)g_16E486878 <= 0 )
            {
LABEL_167:
              iteration_count_14 = -1;
            }
            else
            {
              state_address_6 = &g_16E486880;
              while ( *(state_address_6 - 1) != scaled_index_6 || *state_address_6 != scaled_index_7 || state_address_6[1] != scaled_index_8 )
              {
                ++iteration_count_14;
                state_address_6 += 3;
                if ( iteration_count_14 >= (int)g_16E486878 )
                  goto LABEL_167;
              }
            }
            state_address_7 = &g_16E489884;
            g_189F0EF58 = iteration_count_14;
            if ( g_189F0EF54 == -1 )
            {
              if ( !LOBYTE(g_183F7C97C) || LOBYTE(g_183F7C77C) )
              {
                state_word_17 = g_175FBB094;
              }
              else
              {
                *(float *)&dword_140404A6C[3 * g_175FBB094 + 225368459] = (float)scaled_index_6 * 4.0;
                *(float *)&dword_140404A6C[3 * g_175FBB094 + 225368460] = (float)((float)scaled_index_7 * 4.0) + 2.0;
                *(float *)&dword_140404A6C[3 * g_175FBB094 + 225368461] = (float)scaled_index_8 * 4.0;
                state_word_16 = g_16E486878;
                state_word_17 = ++g_175FBB094;
              }
              if ( LOBYTE(g_183F7C9AC) && !LOBYTE(g_183F7C7AC) && state_word_17 > 0 )
                g_175FBB094 = state_word_17 - 1;
            }
            else
            {
              if ( LOBYTE(g_183F7C968) )
              {
                scaled_index_9 = 3LL * (int)g_189F0EF54;
                dword_140404A6C[scaled_index_9 + 193070980] = scaled_index_6;
                dword_140404A6C[scaled_index_9 + 193070981] = scaled_index_7;
                dword_140404A6C[scaled_index_9 + 193070982] = scaled_index_8;
                state_word_16 = g_16E486878;
              }
              if ( LOBYTE(g_183F7C9AC) && !LOBYTE(g_183F7C7AC) )
              {
                state_word_18 = (int)g_189F0EF54;
                if ( (g_189F0EF54 & 0x80000000) == 0 && (int)g_189F0EF54 < state_word_16 )
                {
                  state_word_19 = g_16E48987C;
                  iteration_count_15 = 0;
                  if ( (int)g_16E48987C > 0 )
                  {
                    iteration_count_16 = 0;
                    state_address_8 = &g_16E489880;
                    do
                    {
                      if ( *state_address_8 == (_DWORD)state_word_18 || state_address_8[1] == (_DWORD)state_word_18 )
                      {
                        if ( iteration_count_16 >= 0 )
                        {
                          if ( iteration_count_15 >= state_word_19 )
                            break;
                          g_16E48987C = state_word_19 - 1;
                          scaled_index_10 = 13LL * (state_word_19 - 1);
                          *(_OWORD *)state_address_8 = *(_OWORD *)&dword_140404A6C[scaled_index_10 + 193074053];
                          *((_OWORD *)state_address_8 + 1) = *(_OWORD *)&dword_140404A6C[scaled_index_10 + 193074057];
                          *((_OWORD *)state_address_8 + 2) = *(_OWORD *)&dword_140404A6C[scaled_index_10 + 193074061];
                          state_address_8[12] = dword_140404A6C[scaled_index_10 + 193074065];
                          state_word_19 = g_16E48987C;
                        }
                      }
                      else
                      {
                        ++iteration_count_15;
                        ++iteration_count_16;
                        state_address_8 += 13;
                      }
                    }
                    while ( iteration_count_15 < state_word_19 );
                    state_word_16 = g_16E486878;
                  }
                  scaled_index_11 = 3 * state_word_18;
                  g_16E486878 = state_word_16 - 1;
                  *(_QWORD *)&dword_140404A6C[scaled_index_11 + 193070980] = *(_QWORD *)&dword_140404A6C[3 * state_word_16 + 193070977];
                  iteration_count_17 = 0;
                  dword_140404A6C[scaled_index_11 + 193070982] = dword_140404A6C[3 * state_word_16 + 193070979];
                  state_word_16 = g_16E486878;
                  if ( (int)g_16E48987C > 0 )
                  {
                    state_address_9 = &g_16E489884;
                    do
                    {
                      if ( *(state_address_9 - 1) == state_word_16 )
                      {
                        *(state_address_9 - 1) = state_word_18;
                        state_word_16 = g_16E486878;
                      }
                      if ( *state_address_9 == state_word_16 )
                      {
                        *state_address_9 = state_word_18;
                        state_word_16 = g_16E486878;
                      }
                      ++iteration_count_17;
                      state_address_9 += 13;
                    }
                    while ( iteration_count_17 < (int)g_16E48987C );
                  }
                }
                g_189F0EF54 = -1;
              }
            }
            if ( g_183F7C750 && !g_183F7C6B0 )
            {
              g_189F0EF5C = -1;
              if ( iteration_count_14 == -1 && (g_189F0EF54 != -1 || HIBYTE(g_183F7C994)) )
              {
                iteration_count_14 = 0;
                if ( state_word_16 <= 0 )
                {
LABEL_211:
                  dword_140404A6C[3 * state_word_16 + 193070980] = scaled_index_6;
                  dword_140404A6C[3 * g_16E486878 + 193070981] = scaled_index_7;
                  dword_140404A6C[3 * g_16E486878 + 193070982] = scaled_index_8;
                  iteration_count_14 = g_16E486878++;
                }
                else
                {
                  state_address_10 = &g_16E486884;
                  while ( *(state_address_10 - 2) != scaled_index_6 || *state_address_10 != scaled_index_8 )
                  {
                    ++iteration_count_14;
                    state_address_10 += 3;
                    if ( iteration_count_14 >= state_word_16 )
                      goto LABEL_211;
                  }
                }
                g_189F0EF58 = iteration_count_14;
              }
              if ( g_189F0EF54 != -1 && iteration_count_14 != -1 )
                sub_1400D4A90(g_189F0EF54, iteration_count_14);
              g_189F0EF54 = iteration_count_14;
              if ( iteration_count_14 == -1 && (int)g_16E48987C > 0 )
              {
                do
                {
                  scaled_index_12 = (int)*(state_address_7 - 1);
                  unused_written_slot_2 = 1082130432;
                  scaled_index_13 = 3 * scaled_index_12;
                  scaled_index_14 = (int)*state_address_7;
                  b0 = (float)(int)dword_140404A6C[scaled_index_13 + 193070980] * 4.0;
                  unused_written_slot_5 = (float)(int)dword_140404A6C[scaled_index_13 + 193070981] * 4.0;
                  converted_vector_3 = _mm_cvtsi32_si128(dword_140404A6C[scaled_index_13 + 193070982]);
                  unused_written_slot = &b1;
                  state_address_13 = &b0;
                  state_address_12 = &combined_products_5;
                  unused_written_slot_6 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_3), f32)[0] * 4.0;
                  b1 = (float)(int)dword_140404A6C[3 * scaled_index_14 + 193070980] * 4.0;
                  unused_written_slot_3 = (float)(int)dword_140404A6C[3 * scaled_index_14 + 193070981] * 4.0;
                  unused_written_slot_4 = (float)(int)dword_140404A6C[3 * scaled_index_14 + 193070982] * 4.0;
                  state_address_7 += 13;
                  if ( sr_collision_segment_segment(
                         on_a,
                         on_b,
                         (float *)&distance,
                         (float *)(unsigned int *)&g_183F7C544,
                         &combined_products_5,
                         &b0,
                         &b1,
                         4.0) )
                  {
                    saved_iteration_count = iteration_count;
                  }
                  ++iteration_count;
                  g_189F0EF5C = saved_iteration_count;
                }
                while ( iteration_count < (int)g_16E48987C );
              }
            }
            break;
          case 3u:
            g_189F0EEF4 = (int)(float)(combined_products_2 * 0.25);
            g_189F0EEF8 = (int)(float)(combined_products_3 * 0.25);
            g_189F0EEFC = (int)(float)(combined_products_4 * 0.25);
            if ( g_183F7C750 && !g_183F7C6B0 )
            {
              *(float *)&dword_140404A6C[4 * g_1B4277C40 + 486132854] = (float)((float)(int)(float)(combined_products_2 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * g_1B4277C40 + 486132855] = (float)((float)(int)(float)(combined_products_3 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * g_1B4277C40 + 486132856] = (float)((float)(int)(float)(combined_products_4 * 0.25)
                                                                                             * 4.0)
                                                                                     + 2.0;
              *(float *)&dword_140404A6C[4 * g_1B4277C40++ + 486132857] = (float)(int)g_189F0EF50
                                                                                       * 1.570796326795;
            }
            break;
          case 1u:
            g_189F0EEF4 = (int)(float)(combined_products_2 * 0.25);
            g_189F0EEF8 = (int)(float)(combined_products_3 * 0.25);
            g_189F0EEFC = (int)(float)(combined_products_4 * 0.25);
            if ( g_183F7C750 )
            {
              if ( !g_183F7C6B0 )
              {
                g_189F0EF04 = (int)(float)(combined_products_2 * 0.25);
                g_189F0EF08 = (int)(float)(combined_products_3 * 0.25);
                g_189F0EF0C = (int)(float)(combined_products_4 * 0.25);
              }
              g_189F0EF10 = (int)(float)(combined_products_2 * 0.25);
              g_189F0EF14 = (int)(float)(combined_products_3 * 0.25);
              g_189F0EF18 = (int)(float)(combined_products_4 * 0.25);
              g_189F0EF00 = 1;
            }
            state_word_20 = g_189F0EF10;
            state_word_21 = g_189F0EF10;
            if ( (int)g_189F0EF04 <= (int)g_189F0EF10 )
              state_word_21 = g_189F0EF04;
            else
              state_word_20 = g_189F0EF04;
            g_189F0EF28 = state_word_20;
            state_word_22 = g_189F0EF14;
            g_189F0EF1C = state_word_21;
            state_word_23 = g_189F0EF14;
            if ( (int)g_189F0EF08 <= (int)g_189F0EF14 )
              state_word_23 = g_189F0EF08;
            else
              state_word_22 = g_189F0EF08;
            g_189F0EF2C = state_word_22;
            state_word_24 = g_189F0EF18;
            g_189F0EF20 = state_word_23;
            state_word_25 = g_189F0EF18;
            if ( (int)g_189F0EF0C > (int)g_189F0EF18 )
              state_word_24 = g_189F0EF0C;
            else
              state_word_25 = g_189F0EF0C;
            g_189F0EF24 = state_word_25;
            g_189F0EF30 = state_word_24;
            break;
          case 0u:
            scaled_index_15 = (int)(float)(combined_products_2 * 0.25);
            scaled_index_16 = (int)(float)(combined_products_3 * 0.25);
            g_189F0EEF4 = scaled_index_15;
            scaled_index_17 = (int)(float)(combined_products_4 * 0.25);
            g_189F0EEF8 = scaled_index_16;
            g_189F0EEFC = scaled_index_17;
            if ( g_183F7C750 )
            {
              if ( !g_183F7C6B0
                && scaled_index_15 >= 0
                && scaled_index_15 < (signed int)(g_15ADA9274 << 6)
                && scaled_index_16 >= 0
                && scaled_index_16 < (signed int)(g_15ADA9278 << 6)
                && scaled_index_17 >= 0
                && scaled_index_17 < (signed int)(g_15ADA927C << 6) )
              {
                if ( LOBYTE(g_183F7CA40) )
                {
                  if ( state_word_3 > 0 )
                  {
                    record_byte_offset_4 = &g_175EFB0DC;
                    do
                    {
                      if ( *(record_byte_offset_4 - 1) == scaled_index_15 && *record_byte_offset_4 == scaled_index_16 && record_byte_offset_4[1] == scaled_index_17 )
                        saved_iteration_count = iteration_count;
                      ++iteration_count;
                      record_byte_offset_4 += 24;
                    }
                    while ( iteration_count < state_word_3 );
                    if ( saved_iteration_count != -1 )
                    {
                      g_175EFB090 = state_word_3 - 1;
                      scaled_index_19 = 24LL * (state_word_3 - 1);
                      scaled_index_20 = 24LL * saved_iteration_count;
                      *(_OWORD *)&dword_140404A6C[scaled_index_20 + 225171850] = *(_OWORD *)&dword_140404A6C[scaled_index_19 + 225171850];
                      *(_OWORD *)&dword_140404A6C[scaled_index_20 + 225171854] = *(_OWORD *)&dword_140404A6C[scaled_index_19 + 225171854];
                      *(_OWORD *)&dword_140404A6C[scaled_index_20 + 225171858] = *(_OWORD *)&dword_140404A6C[scaled_index_19 + 225171858];
                      *(_OWORD *)&dword_140404A6C[scaled_index_20 + 225171862] = *(_OWORD *)&dword_140404A6C[scaled_index_19 + 225171862];
                      *(_OWORD *)&dword_140404A6C[scaled_index_20 + 225171866] = *(_OWORD *)&dword_140404A6C[scaled_index_19 + 225171866];
                      *(_OWORD *)&dword_140404A6C[scaled_index_20 + 225171870] = *(_OWORD *)&dword_140404A6C[scaled_index_19 + 225171870];
                    }
                  }
                }
                else
                {
                  scaled_index_18 = 22LL * distance;
                  dword_140404A6C[24 * state_word_3 + 225171850] = distance;
                  text_cursor = (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_18 * 4 + 905687968);
                  state_address_11 = &dword_140404A6C[24 * g_175EFB090 + 225171851];
                  do
                  {
                    input_byte = *text_cursor++;
                    *(_BYTE *)state_address_11 = input_byte;
                    state_address_11 = (unsigned int *)((char *)state_address_11 + 1);
                  }
                  while ( input_byte );
                  dword_140404A6C[24 * g_175EFB090 + 225171867] = scaled_index_15;
                  dword_140404A6C[24 * g_175EFB090 + 225171868] = scaled_index_16;
                  dword_140404A6C[24 * g_175EFB090 + 225171869] = scaled_index_17;
                  dword_140404A6C[24 * g_175EFB090 + 225171870] = g_189F0EF50;
                  asset_load_building_sbb_candidate(
                    (char *)&g_1AD2C94A0,
                    (     char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_18 * 4 + 905687968),
                    1);
                  dword_140404A6C[24 * g_175EFB090 + 225171871] = dword_140404A6C[scaled_index_18 + 225368669]
                                                                               - g_1AD2C94EC;
                  dword_140404A6C[24 * g_175EFB090 + 225171873] = dword_140404A6C[scaled_index_18 + 225368671]
                                                                               - g_1AD2C94F0;
                  dword_140404A6C[24 * g_175EFB090++ + 225171872] = dword_140404A6C[scaled_index_18 + 225368670]
                                                                                 - g_1AD2C94F4;
                }
              }
            }
            break;
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef state_address_12
#undef state_address_13
#undef unused_written_slot
#undef unused_written_slot_2
#undef distance
#undef state_word_26
#undef b1
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef b0
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef on_a
#undef on_b
#undef combined_products_5
#undef combined_products_6
#undef combined_products_7
#undef unused_frame_slot_152

//----- (000000014003C6F0) ----------------------------------------------------
__int64            sub_14003C6F0(_BYTE *a1)
{
  int iteration_count;
  unsigned int selection_flag;
  int element_index;
  _BYTE *buffer_cursor;

  iteration_count = g_1862AE020;
  selection_flag = 0;
  element_index = 0;
  if ( (int)g_1862AE020 < (int)g_1862AE024 )
  {
    buffer_cursor = a1;
    do
    {
      if ( !*buffer_cursor )
        break;
      if ( *buffer_cursor != *((_BYTE *)&g_1862AE028 + iteration_count) )
        break;
      ++element_index;
      ++iteration_count;
      ++buffer_cursor;
    }
    while ( iteration_count < (int)g_1862AE024 );
  }
  LOBYTE(selection_flag) = a1[element_index] == 0;
  return selection_flag;
}

//----- (000000014003D830) ----------------------------------------------------
_BOOL8            sub_14003D830(float *a1, int *a2, float *a3, float *a4, float a5)
{
  int iteration_count;
  float *record_byte_offset;
  float input_value;
  float source_float_6;
  float product_difference;
  float scaled_value;
  float source_float_4;
  float source_float_5;
  float source_component_w;
  float source_component_z;
  float source_component_y;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  float component_delta_5;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  float square_root;
  float comparison_operand;
  float source_component_y_2;
  float source_component_z_2;
  int saved_float_word;
  int comparison_operand_2;
  float saved_scaled_ratio;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003D830[256];
#define float_word (*(__int64 (*))(void *)(sr_frame_14003D830 + 0)) /* [rsp+58h] */
#define scaled_ratio (*(float (*))(void *)(sr_frame_14003D830 + 8)) /* [rsp+60h] */
#define float_buffer (*(float (*)[3])(void *)(sr_frame_14003D830 + 16)) /* [rsp+68h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_14003D830 + 32)) /* [rsp+78h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_14003D830 + 48)) /* [rsp+88h] */
#define float_buffer_4 (*(float (*)[6])(void *)(sr_frame_14003D830 + 64)) /* [rsp+98h] */
#define frame_float_at_240 (*(float (*))(void *)(sr_frame_14003D830 + 240)) /* [rsp+148h] */

  iteration_count = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  record_byte_offset = (float *)(a2 + 3);
  input_value = a5;
  do
  {
    source_float_6 = record_byte_offset[6];
    product_difference = *(record_byte_offset - 1);
    scaled_value = *record_byte_offset;
    source_float_4 = record_byte_offset[4];
    source_float_5 = record_byte_offset[5];
    source_component_w = record_byte_offset[3];
    source_component_z = record_byte_offset[2];
    source_component_y = record_byte_offset[1];
    float_buffer_3[0] = *(record_byte_offset - 2);
    float_buffer_3[2] = scaled_value;
    float_buffer[2] = source_float_6;
    component_delta = source_float_6 - scaled_value;
    float_buffer_2[2] = source_component_w;
    component_delta_2 = source_component_w - scaled_value;
    float_buffer[0] = source_float_4;
    float_buffer[1] = source_float_5;
    component_delta_3 = source_float_5 - product_difference;
    float_buffer_3[1] = product_difference;
    float_buffer_2[1] = source_component_z;
    component_delta_4 = source_component_z - product_difference;
    float_buffer_2[0] = source_component_y;
    component_delta_5 = source_component_y - float_buffer_3[0];
    product_difference_2 = (float)(component_delta_3 * component_delta_2) - (float)(component_delta * component_delta_4);
    product_difference_3 = (float)(source_float_4 - float_buffer_3[0]) * component_delta_2;
    product_difference_4 = (float)((float)(source_float_4 - float_buffer_3[0]) * component_delta_4) - (float)(component_delta_3 * component_delta_5);
    product_difference_5 = (float)(component_delta * component_delta_5) - product_difference_3;
    square_root = fsqrt((float)((float)(product_difference_5 * product_difference_5) + (float)(product_difference_2 * product_difference_2)) + (float)(product_difference_4 * product_difference_4));
    if ( square_root == 0.0 )
    {
      float_word = 0;
      scaled_ratio = 0.0;
    }
    else
    {
      *(float *)&float_word = product_difference_2 * (float)(1.0 / square_root);
      *((float *)&float_word + 1) = product_difference_5 * (float)(1.0 / square_root);
      scaled_ratio = product_difference_4 * (float)(1.0 / square_root);
    }
    if ( sub_14003F0B0(float_buffer_4, (float *)&float_word, &frame_float_at_240, a3, a4, input_value, float_buffer_3, float_buffer_2, float_buffer) )
    {
      comparison_operand = frame_float_at_240;
      if ( frame_float_at_240 < a1[7] )
      {
        source_component_y_2 = float_buffer_4[1];
        *a1 = float_buffer_4[0];
        source_component_z_2 = float_buffer_4[2];
        a1[1] = source_component_y_2;
        saved_float_word = float_word;
        a1[2] = source_component_z_2;
        comparison_operand_2 = HIDWORD(float_word);
        *((_DWORD *)a1 + 3) = saved_float_word;
        saved_scaled_ratio = scaled_ratio;
        *((_DWORD *)a1 + 4) = comparison_operand_2;
        a1[5] = saved_scaled_ratio;
        a1[7] = comparison_operand;
      }
    }
    ++iteration_count;
    record_byte_offset += 12;
  }
  while ( iteration_count < *a2 );
  return a1[7] < 65536.0;
}
#undef float_word
#undef scaled_ratio
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef frame_float_at_240

//----- (000000014003DAE0) ----------------------------------------------------
_BOOL8            sub_14003DAE0(float *a1, __int64 a2, float *a3, float *a4, float a5)
{
  int iteration_count;
  int *record_byte_offset;
  float input_value;
  float combined_products;
  float combined_products_2;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 scaled_index_2;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float component_delta_4;
  float component_delta_5;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float comparison_operand;
  int comparison_operand_2;
  int comparison_operand_3;
  int saved_float_word;
  int comparison_operand_4;
  float saved_scaled_ratio;
  __int64 scaled_index_3;
  float weighted_sum_6;
  float weighted_sum_7;
  float comparison_operand_5;
  int comparison_operand_6;
  int comparison_operand_7;
  int saved_float_word_2;
  int comparison_operand_8;
  float saved_scaled_ratio_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003DAE0[272];
#define float_word (*(__int64 (*))(void *)(sr_frame_14003DAE0 + 0)) /* [rsp+58h] */
#define scaled_ratio (*(float (*))(void *)(sr_frame_14003DAE0 + 8)) /* [rsp+60h] */
#define float_word_2 (*(int (*))(void *)(sr_frame_14003DAE0 + 16)) /* [rsp+68h] */
#define frame_word_at_20 (*(int (*))(void *)(sr_frame_14003DAE0 + 20)) /* [rsp+6Ch] */
#define frame_word_at_24 (*(int (*))(void *)(sr_frame_14003DAE0 + 24)) /* [rsp+70h] */
#define float_buffer (*(float (*)[2])(void *)(sr_frame_14003DAE0 + 32)) /* [rsp+78h] */
#define weighted_sum_8 (*(float (*))(void *)(sr_frame_14003DAE0 + 40)) /* [rsp+80h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_14003DAE0 + 48)) /* [rsp+88h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_14003DAE0 + 64)) /* [rsp+98h] */
#define float_buffer_4 (*(float (*)[6])(void *)(sr_frame_14003DAE0 + 80)) /* [rsp+A8h] */
#define frame_float_at_256 (*(float (*))(void *)(sr_frame_14003DAE0 + 256)) /* [rsp+158h] */

  iteration_count = 0;
  a1[7] = 65536.0;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  record_byte_offset = (int *)(a2 + 32784);
  input_value = a5;
  do
  {
    combined_products = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 12);
    combined_products_2 = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 16);
    scaled_index = 2LL * *record_byte_offset;
    float_buffer_2[0] = *(float *)(a2 + 16LL * *(record_byte_offset - 1) + 8);
    float_buffer_2[2] = combined_products_2;
    float_buffer_2[1] = combined_products;
    weighted_sum = *(float *)(a2 + 8 * scaled_index + 16);
    weighted_sum_2 = *(float *)(a2 + 8 * scaled_index + 8);
    weighted_sum_3 = *(float *)(a2 + 8 * scaled_index + 12);
    scaled_index_2 = 2LL * record_byte_offset[1];
    float_buffer_3[2] = weighted_sum;
    component_delta = weighted_sum - combined_products_2;
    float_buffer_3[1] = weighted_sum_3;
    component_delta_2 = weighted_sum_3 - combined_products;
    float_buffer_3[0] = weighted_sum_2;
    component_delta_3 = weighted_sum_2 - float_buffer_2[0];
    weighted_sum_4 = *(float *)(a2 + 8 * scaled_index_2 + 8);
    weighted_sum_5 = *(float *)(a2 + 8 * scaled_index_2 + 12);
    weighted_sum_8 = *(float *)(a2 + 8 * scaled_index_2 + 16);
    float_buffer[0] = weighted_sum_4;
    component_delta_4 = weighted_sum_4 - float_buffer_2[0];
    float_buffer[1] = weighted_sum_5;
    component_delta_5 = weighted_sum_5 - combined_products;
    product_difference = (float)(component_delta_5 * component_delta) - (float)((float)(weighted_sum_8 - combined_products_2) * component_delta_2);
    product_difference_2 = (float)((float)(weighted_sum_8 - combined_products_2) * component_delta_3) - (float)(component_delta_4 * component_delta);
    product_difference_3 = (float)(component_delta_4 * component_delta_2) - (float)(component_delta_5 * component_delta_3);
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      float_word = 0;
      scaled_ratio = 0.0;
    }
    else
    {
      *(float *)&float_word = product_difference * (float)(1.0 / square_root);
      *((float *)&float_word + 1) = product_difference_2 * (float)(1.0 / square_root);
      scaled_ratio = product_difference_3 * (float)(1.0 / square_root);
    }
    if ( sub_14003F0B0((float *)&float_word_2, (float *)&float_word, &frame_float_at_256, a3, a4, input_value, float_buffer_2, float_buffer_3, float_buffer) )
    {
      comparison_operand = frame_float_at_256;
      if ( frame_float_at_256 < a1[7] )
      {
        comparison_operand_2 = frame_word_at_20;
        *(_DWORD *)a1 = float_word_2;
        comparison_operand_3 = frame_word_at_24;
        *((_DWORD *)a1 + 1) = comparison_operand_2;
        saved_float_word = float_word;
        *((_DWORD *)a1 + 2) = comparison_operand_3;
        comparison_operand_4 = HIDWORD(float_word);
        *((_DWORD *)a1 + 3) = saved_float_word;
        saved_scaled_ratio = scaled_ratio;
        *((_DWORD *)a1 + 4) = comparison_operand_4;
        a1[5] = saved_scaled_ratio;
        a1[7] = comparison_operand;
      }
    }
    if ( *(record_byte_offset - 2) == 4 )
    {
      scaled_index_3 = 2LL * record_byte_offset[2];
      weighted_sum_6 = *(float *)(a2 + 16LL * record_byte_offset[2] + 12);
      float_buffer_4[0] = *(float *)(a2 + 16LL * record_byte_offset[2] + 8);
      weighted_sum_7 = *(float *)(a2 + 8 * scaled_index_3 + 16);
      float_buffer_4[1] = weighted_sum_6;
      float_buffer_4[2] = weighted_sum_7;
      if ( sub_14003F0B0((float *)&float_word_2, (float *)&float_word, &frame_float_at_256, a3, a4, input_value, float_buffer_2, float_buffer, float_buffer_4) )
      {
        comparison_operand_5 = frame_float_at_256;
        if ( frame_float_at_256 < a1[7] )
        {
          comparison_operand_6 = frame_word_at_20;
          *(_DWORD *)a1 = float_word_2;
          comparison_operand_7 = frame_word_at_24;
          *((_DWORD *)a1 + 1) = comparison_operand_6;
          saved_float_word_2 = float_word;
          *((_DWORD *)a1 + 2) = comparison_operand_7;
          comparison_operand_8 = HIDWORD(float_word);
          *((_DWORD *)a1 + 3) = saved_float_word_2;
          saved_scaled_ratio_2 = scaled_ratio;
          *((_DWORD *)a1 + 4) = comparison_operand_8;
          a1[5] = saved_scaled_ratio_2;
          a1[7] = comparison_operand_5;
        }
      }
    }
    ++iteration_count;
    record_byte_offset += 8;
  }
  while ( iteration_count < *(_DWORD *)(a2 + 32772) );
  return a1[7] < 65536.0;
}
#undef float_word
#undef scaled_ratio
#undef float_word_2
#undef frame_word_at_20
#undef frame_word_at_24
#undef float_buffer
#undef weighted_sum_8
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef frame_float_at_256

//----- (000000014003E100) ----------------------------------------------------
_BOOL8            sub_14003E100(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  int bit_mask;
  int *record_byte_offset;
  int *running_total;
  float scaled_value;
  signed int iteration_count;
  float scaled_value_2;
  float source_component_y;
  float source_component_z;
  __int64 scaled_index;
  __int64 loaded_word;
  float state_address;
  float weighted_sum;
  __int64 scaled_index_2;
  __int64 table_value;
  float state_address_2;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 scaled_index_3;
  __int64 table_value_2;
  float state_address_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  int scaled_index_4;
  float weighted_sum_7;
  int input_value;
  int comparison_operand;
  int comparison_operand_2;
  int saved_float_word;
  int cached_scaled_index;
  int scaled_index_5;
  int loaded_word_2;
  BOOL masked_bits;
  int input_value_2;
  int comparison_operand_3;
  int comparison_operand_4;
  int saved_float_word_2;
  int cached_scaled_index_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003E100[256];
#define float_word (*(int (*))(void *)(sr_frame_14003E100 + 0)) /* [rsp+58h] */
#define cached_scaled_index_3 (*(int (*))(void *)(sr_frame_14003E100 + 4)) /* [rsp+5Ch] */
#define loaded_word_3 (*(int (*))(void *)(sr_frame_14003E100 + 8)) /* [rsp+60h] */
#define float_word_2 (*(int (*))(void *)(sr_frame_14003E100 + 16)) /* [rsp+68h] */
#define frame_word_at_20 (*(int (*))(void *)(sr_frame_14003E100 + 20)) /* [rsp+6Ch] */
#define frame_word_at_24 (*(int (*))(void *)(sr_frame_14003E100 + 24)) /* [rsp+70h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_14003E100 + 32)) /* [rsp+78h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_14003E100 + 48)) /* [rsp+88h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_14003E100 + 64)) /* [rsp+98h] */
#define float_buffer_4 (*(float (*)[24])(void *)(sr_frame_14003E100 + 80)) /* [rsp+A8h] */
#define input_cursor (*(float * (*))(void *)(sr_frame_14003E100 + 248)) /* [rsp+150h] */

  input_cursor = a4;
  bit_mask = a8;
  record_byte_offset = dword_1402B3664;
  running_total = dword_1402B3558;
  scaled_value = *(float *)&a9;
  iteration_count = 0;
  *a3 = 65536.0;
  scaled_value_2 = (float)*a7;
  source_component_y = (float)a7[1];
  source_component_z = (float)a7[2];
  do
  {
    if ( ((((64 << iteration_count) & bit_mask) != 0) & _bittest(&bit_mask, iteration_count)) != 0 )
    {
      scaled_index = 3LL * *(record_byte_offset - 1);
      loaded_word = *record_byte_offset;
      state_address = (float)(source_component_y + *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 1) + 1]) * scaled_value;
      float_buffer_2[0] = (float)(scaled_value_2 + *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 1)]) * scaled_value;
      weighted_sum = source_component_z + *(float *)&dword_1402B34F0[scaled_index + 2];
      scaled_index_2 = 3 * loaded_word;
      float_buffer_2[1] = state_address;
      table_value = record_byte_offset[1];
      state_address_2 = (float)(source_component_y + *(float *)&dword_1402B34F0[scaled_index_2 + 1]) * scaled_value;
      float_buffer_2[2] = weighted_sum * scaled_value;
      weighted_sum_2 = scaled_value_2 + *(float *)&dword_1402B34F0[scaled_index_2];
      float_buffer_3[1] = state_address_2;
      float_buffer_3[0] = weighted_sum_2 * scaled_value;
      weighted_sum_3 = source_component_z + *(float *)&dword_1402B34F0[scaled_index_2 + 2];
      scaled_index_3 = 3 * table_value;
      table_value_2 = record_byte_offset[2];
      state_address_3 = (float)(source_component_y + *(float *)&dword_1402B34F0[scaled_index_3 + 1]) * scaled_value;
      float_buffer_3[2] = weighted_sum_3 * scaled_value;
      weighted_sum_4 = scaled_value_2 + *(float *)&dword_1402B34F0[scaled_index_3];
      float_buffer[1] = state_address_3;
      float_buffer[0] = weighted_sum_4 * scaled_value;
      weighted_sum_5 = source_component_y + *(float *)&dword_1402B34F0[3 * table_value_2 + 1];
      float_buffer[2] = (float)(source_component_z + *(float *)&dword_1402B34F0[scaled_index_3 + 2]) * scaled_value;
      weighted_sum_6 = scaled_value_2 + *(float *)&dword_1402B34F0[3 * table_value_2];
      float_buffer_4[1] = weighted_sum_5 * scaled_value;
      scaled_index_4 = *(running_total - 1);
      float_buffer_4[0] = weighted_sum_6 * scaled_value;
      weighted_sum_7 = source_component_z + *(float *)&dword_1402B34F0[3 * table_value_2 + 2];
      cached_scaled_index_3 = scaled_index_4;
      float_buffer_4[2] = weighted_sum_7 * scaled_value;
      float_word = *(running_total - 2);
      loaded_word_3 = *running_total;
      if ( sub_14003F0B0((float *)&float_word_2, (float *)&float_word, (float *)&a9, a4, a5, *(float *)&a6, float_buffer_2, float_buffer_3, float_buffer) )
      {
        input_value = a9;
        if ( *(float *)&a9 < *a3 )
        {
          comparison_operand = frame_word_at_20;
          *a1 = float_word_2;
          comparison_operand_2 = frame_word_at_24;
          a1[1] = comparison_operand;
          saved_float_word = float_word;
          a1[2] = comparison_operand_2;
          cached_scaled_index = cached_scaled_index_3;
          *a2 = saved_float_word;
          a2[2] = loaded_word_3;
          a2[1] = cached_scaled_index;
          *(_DWORD *)a3 = input_value;
          g_151A848EC = iteration_count;
        }
      }
      scaled_index_5 = *(running_total - 1);
      float_word = *(running_total - 2);
      loaded_word_2 = *running_total;
      cached_scaled_index_3 = scaled_index_5;
      loaded_word_3 = loaded_word_2;
      masked_bits = sub_14003F0B0((float *)&float_word_2, (float *)&float_word, (float *)&a9, input_cursor, a5, *(float *)&a6, float_buffer_2, float_buffer, float_buffer_4);
      a4 = input_cursor;
      if ( masked_bits )
      {
        input_value_2 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          comparison_operand_3 = frame_word_at_20;
          *a1 = float_word_2;
          comparison_operand_4 = frame_word_at_24;
          a1[1] = comparison_operand_3;
          saved_float_word_2 = float_word;
          a1[2] = comparison_operand_4;
          cached_scaled_index_2 = cached_scaled_index_3;
          *a2 = saved_float_word_2;
          a2[2] = loaded_word_3;
          a2[1] = cached_scaled_index_2;
          *(_DWORD *)a3 = input_value_2;
          g_151A848EC = iteration_count;
        }
      }
    }
    ++iteration_count;
    record_byte_offset += 4;
    running_total += 3;
  }
  while ( iteration_count < 6 );
  return *a3 < 65536.0;
}
#undef float_word
#undef cached_scaled_index_3
#undef loaded_word_3
#undef float_word_2
#undef frame_word_at_20
#undef frame_word_at_24
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef input_cursor

//----- (000000014003F0B0) ----------------------------------------------------
_BOOL8            sub_14003F0B0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9)
{
  float source_component_y;
  float *to;
  float *to_2;
  float *normal;
  float scaled_value;
  float source_component_z;
  float source_component_z_2;
  float source_component_y_2;
  float product_difference;
  float scaled_value_2;
  float product_difference_2;
  float product_difference_3;
  float squared_value;
  float weighted_sum;
  float weighted_sum_2;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float product_difference_7;
  float product_difference_8;
  float product_difference_9;
  float square_root;
  float product_difference_10;
  float component_delta;
  float component_delta_2;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float weighted_sum_3;
  float weighted_sum_4;
  float input_value;
  float weighted_sum_5;
  float weighted_sum_6;
  float square_root_2;
  float source_component_y_3;
  float source_component_z_3;
  float scaled_value_3;
  float component_delta_3;
  float component_delta_4;
  float product_difference_11;
  float component_delta_5;
  float product_difference_12;
  float product_difference_13;
  float component_delta_6;
  float component_delta_7;
  float component_delta_8;
  float scaled_value_4;
  float scaled_value_5;
  float scaled_value_6;
  float product_difference_14;
  float scaled_value_7;
  float scaled_value_8;
  float product_difference_15;
  float source_component_z_4;
  float component_delta_9;
  float product_difference_16;
  float component_delta_10;
  float component_delta_11;
  float component_delta_12;
  float saved_point;
  float cached_component_delta;
  float scaled_value_9;
  float square_root_3;
  bool comparison_result;
  float saved_point_2;
  float cached_component_delta_2;
  float scaled_value_10;
  float square_root_4;
  float saved_point_3;
  float cached_component_delta_3;
  float scaled_value_11;
  float square_root_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003F0B0[32];
#define point (*(float (*))(void *)(sr_frame_14003F0B0 + 8)) /* [rsp+38h] */
#define saved_component_delta (*(float (*))(void *)(sr_frame_14003F0B0 + 12)) /* [rsp+3Ch] */
#define float_word (*(__int128 (*))(void *)(sr_frame_14003F0B0 + 16)) /* [rsp+40h] */

  *a3 = a6;
  source_component_y = a2[1];
  to = a7;
  to_2 = a8;
  normal = a5;
  scaled_value = *a5;
  source_component_z = a5[2];
  source_component_z_2 = a2[2];
  source_component_y_2 = a5[1];
  product_difference = (float)(source_component_z * source_component_y) - (float)(source_component_y_2 * source_component_z_2);
  scaled_value_2 = *a2;
  product_difference_2 = (float)(*a5 * source_component_z_2) - (float)(*a2 * source_component_z);
  product_difference_3 = (float)(*a2 * source_component_y_2) - (float)(*a5 * source_component_y);
  squared_value = (float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3);
  if ( squared_value < 0.000015258789 )
  {
    input_value = a6;
  }
  else
  {
    weighted_sum = (float)((float)(a4[1] * source_component_y_2) + (float)(*a4 * scaled_value)) + (float)(a4[2] * source_component_z);
    weighted_sum_2 = (float)((float)(source_component_y * a7[1]) + (float)(scaled_value_2 * *a7)) + (float)(source_component_z_2 * a7[2]);
    product_difference_4 = (float)(weighted_sum * scaled_value_2) - (float)(weighted_sum_2 * scaled_value);
    product_difference_5 = (float)(weighted_sum * source_component_y) - (float)(weighted_sum_2 * source_component_y_2);
    product_difference_6 = (float)(weighted_sum * source_component_z_2) - (float)(weighted_sum_2 * source_component_z);
    product_difference_7 = (float)((float)(product_difference_2 * product_difference_6) - (float)(product_difference_3 * product_difference_5)) * (float)(1.0 / squared_value);
    product_difference_8 = (float)((float)(product_difference_3 * product_difference_4) - (float)(product_difference * product_difference_6)) * (float)(1.0 / squared_value);
    product_difference_9 = *a4 - product_difference_7;
    square_root = fsqrt(squared_value);
    product_difference_10 = (float)((float)(product_difference * product_difference_5) - (float)(product_difference_2 * product_difference_4)) * (float)(1.0 / squared_value);
    component_delta = a4[2] - product_difference_10;
    component_delta_2 = a4[1] - product_difference_8;
    point = product_difference_9;
    *(float *)&float_word = component_delta;
    saved_component_delta = component_delta_2;
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
    weighted_sum_3 = (float)((float)(scaled_ratio_2 * component_delta_2) + (float)(scaled_ratio * product_difference_9)) + (float)(scaled_ratio_3 * component_delta);
    weighted_sum_4 = (float)(scaled_ratio * weighted_sum_3) + product_difference_7;
    input_value = a6;
    weighted_sum_5 = (float)(scaled_ratio_2 * weighted_sum_3) + product_difference_8;
    weighted_sum_6 = (float)(scaled_ratio_3 * weighted_sum_3) + product_difference_10;
    *a1 = weighted_sum_4;
    a1[1] = weighted_sum_5;
    a1[2] = weighted_sum_6;
    square_root_2 = fsqrt(
            (float)((float)((float)(*a4 - weighted_sum_4) * (float)(*a4 - weighted_sum_4))
                  + (float)((float)(a4[1] - weighted_sum_5) * (float)(a4[1] - weighted_sum_5)))
          + (float)((float)(a4[2] - weighted_sum_6) * (float)(a4[2] - weighted_sum_6)));
    *(float *)&a5 = square_root_2;
    if ( square_root_2 < input_value )
    {
      source_component_y_3 = to[1];
      source_component_z_3 = to[2];
      scaled_value_3 = *to;
      component_delta_3 = to_2[1] - source_component_y_3;
      component_delta_4 = to_2[2] - source_component_z_3;
      point = *to_2 - *to;
      product_difference_11 = (float)((float)((float)(weighted_sum_5 - source_component_y_3) * component_delta_4) - (float)((float)(weighted_sum_6 - source_component_z_3) * component_delta_3)) * *a2;
      saved_component_delta = component_delta_3;
      *(float *)&float_word = component_delta_4;
      if ( (float)((float)(product_difference_11
                         + (float)((float)((float)((float)(weighted_sum_6 - source_component_z_3) * point) - (float)((float)(weighted_sum_4 - scaled_value_3) * component_delta_4)) * a2[1]))
                 + (float)((float)((float)((float)(weighted_sum_4 - scaled_value_3) * component_delta_3) - (float)((float)(weighted_sum_5 - source_component_y_3) * point)) * a2[2])) < 0.0 )
      {
        input_value = a6;
      }
      else
      {
        component_delta_5 = weighted_sum_5 - to_2[1];
        product_difference_12 = weighted_sum_4 - *to_2;
        product_difference_13 = *a9 - *to_2;
        component_delta_6 = a9[1] - to_2[1];
        component_delta_7 = weighted_sum_6 - to_2[2];
        component_delta_8 = a9[2] - to_2[2];
        scaled_value_4 = component_delta_7 * product_difference_13;
        scaled_value_5 = component_delta_5 * component_delta_8;
        scaled_value_6 = component_delta_5 * product_difference_13;
        product_difference_14 = scaled_value_5 - (float)(component_delta_7 * component_delta_6);
        point = product_difference_13;
        input_value = a6;
        scaled_value_7 = product_difference_12 * component_delta_8;
        scaled_value_8 = product_difference_14 * *a2;
        product_difference_15 = (float)(product_difference_12 * component_delta_6) - scaled_value_6;
        source_component_z_4 = a2[2];
        saved_component_delta = component_delta_6;
        *(float *)&float_word = component_delta_8;
        if ( (float)((float)(scaled_value_8 + (float)((float)(scaled_value_4 - scaled_value_7) * a2[1])) + (float)(product_difference_15 * source_component_z_4)) >= 0.0 )
        {
          component_delta_9 = weighted_sum_6 - a9[2];
          product_difference_16 = weighted_sum_4 - *a9;
          component_delta_10 = source_component_y_3 - a9[1];
          component_delta_11 = source_component_z_3 - a9[2];
          component_delta_12 = weighted_sum_5 - a9[1];
          point = scaled_value_3 - *a9;
          saved_component_delta = component_delta_10;
          *(float *)&float_word = component_delta_11;
          if ( (float)((float)((float)((float)((float)(component_delta_12 * component_delta_11) - (float)(component_delta_9 * component_delta_10)) * *a2)
                             + (float)((float)((float)(component_delta_9 * point) - (float)(product_difference_16 * component_delta_11)) * a2[1]))
                     + (float)((float)((float)(product_difference_16 * component_delta_10) - (float)(component_delta_12 * point)) * source_component_z_4)) >= 0.0 )
            *a3 = square_root_2;
        }
      }
    }
  }
  if ( (unsigned int)sr_collision_segment_plane(&point, normal, (float *)&a5, to, to_2, a4) )
  {
    saved_point = point;
    cached_component_delta = saved_component_delta;
    scaled_value_9 = *(float *)&float_word;
    square_root_3 = fsqrt(
            (float)((float)((float)(a4[1] - saved_component_delta) * (float)(a4[1] - saved_component_delta))
                  + (float)((float)(*a4 - point) * (float)(*a4 - point)))
          + (float)((float)(a4[2] - *(float *)&float_word) * (float)(a4[2] - *(float *)&float_word)));
    comparison_result = square_root_3 < *a3;
    *(float *)&a5 = square_root_3;
    if ( comparison_result )
    {
      *a1 = point;
      a1[1] = cached_component_delta;
      a1[2] = scaled_value_9;
      *a2 = *a4 - saved_point;
      a2[1] = a4[1] - cached_component_delta;
      a2[2] = a4[2] - scaled_value_9;
      sr_math_vec3_normalize((__int64)a2, a2);
      *a3 = square_root_3;
    }
  }
  if ( (unsigned int)sr_collision_segment_plane(&point, normal, (float *)&a5, to_2, a9, a4) )
  {
    saved_point_2 = point;
    cached_component_delta_2 = saved_component_delta;
    scaled_value_10 = *(float *)&float_word;
    square_root_4 = fsqrt(
            (float)((float)((float)(a4[1] - saved_component_delta) * (float)(a4[1] - saved_component_delta))
                  + (float)((float)(*a4 - point) * (float)(*a4 - point)))
          + (float)((float)(a4[2] - *(float *)&float_word) * (float)(a4[2] - *(float *)&float_word)));
    comparison_result = square_root_4 < *a3;
    *(float *)&a5 = square_root_4;
    if ( comparison_result )
    {
      *a1 = point;
      a1[1] = cached_component_delta_2;
      a1[2] = scaled_value_10;
      *a2 = *a4 - saved_point_2;
      a2[1] = a4[1] - cached_component_delta_2;
      a2[2] = a4[2] - scaled_value_10;
      sr_math_vec3_normalize((__int64)a2, a2);
      *a3 = square_root_4;
    }
  }
  if ( (unsigned int)sr_collision_segment_plane(&point, normal, (float *)&a5, a9, to, a4) )
  {
    saved_point_3 = point;
    cached_component_delta_3 = saved_component_delta;
    scaled_value_11 = *(float *)&float_word;
    square_root_5 = fsqrt(
            (float)((float)((float)(a4[1] - saved_component_delta) * (float)(a4[1] - saved_component_delta))
                  + (float)((float)(*a4 - point) * (float)(*a4 - point)))
          + (float)((float)(a4[2] - *(float *)&float_word) * (float)(a4[2] - *(float *)&float_word)));
    if ( square_root_5 < *a3 )
    {
      *a1 = point;
      a1[1] = cached_component_delta_3;
      a1[2] = scaled_value_11;
      *a2 = *a4 - saved_point_3;
      a2[1] = a4[1] - cached_component_delta_3;
      a2[2] = a4[2] - scaled_value_11;
      sr_math_vec3_normalize((__int64)a2, a2);
      *a3 = square_root_5;
    }
  }
  return input_value > *a3;
}
#undef point
#undef saved_component_delta
#undef float_word

//----- (000000014003FA40) ----------------------------------------------------
unsigned int *           sub_14003FA40(int a1, int a2, float a3)
{
  __int64 shifted_bits;
  unsigned int *result;
  int integer_sum;
  int integer_sum_2;
  __int64 shifted_bits_2;

  if ( (unsigned int)a1 <= 0xFFE && (unsigned int)a2 <= 0xFFE && !g_183F7CB60 )
  {
    shifted_bits = a1 + (a2 << 12);
    result = &g_175FD1400;
    if ( a3 > *(float *)&dword_140404A6C[shifted_bits + 254388963] )
      *(float *)&dword_140404A6C[shifted_bits + 254388963] = a3;
    if ( a3 > *(float *)&dword_140404A6C[shifted_bits + 254388964] )
      *(float *)&dword_140404A6C[shifted_bits + 254388964] = a3;
    if ( a3 > *(float *)&dword_140404A6C[shifted_bits + 254393059] )
      *(float *)&dword_140404A6C[shifted_bits + 254393059] = a3;
    if ( a3 > *(float *)&dword_140404A6C[shifted_bits + 254393060] )
      *(float *)&dword_140404A6C[shifted_bits + 254393060] = a3;
    if ( a1 >= (int)g_175FD1444
      && a1 <= (int)g_175FD1450
      && a2 >= (int)g_175FD144C
      && a2 <= (int)g_175FD1458 )
    {
      integer_sum = a1 + 1024;
      integer_sum_2 = a2 + 1024;
      if ( (unsigned int)integer_sum <= 0xFFF && (unsigned int)integer_sum_2 <= 0xFFF )
      {
        shifted_bits_2 = (integer_sum >> 2) + (integer_sum_2 >> 2 << 10);
        *(_WORD *)(g_181290050 + 2 * shifted_bits_2) &= ~(1 << ((integer_sum & 3) + 4 * (a2 & 3)));
        return (unsigned int *)((integer_sum & 3) + 4 * (a2 & 3u));
      }
    }
  }
  return result;
}

//----- (000000014003FB90) ----------------------------------------------------
__int64            sub_14003FB90(int a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 record_word_offset_2;
  __int64 table_value;
  unsigned int float_word;
  float product_difference;
  __int64 table_value_2;
  float product_difference_2;
  float product_difference_3;
  float state_address;
  __int64 table_value_3;
  float product_difference_4;
  unsigned int state_address_2;
  __int64 table_value_4;
  float product_difference_5;
  float product_difference_6;
  float state_address_3;
  __int64 table_value_5;
  float product_difference_7;
  float product_difference_8;
  float state_address_4;
  __int64 table_value_6;
  float product_difference_9;
  float product_difference_10;
  float state_address_5;
  __int64 table_value_7;
  float product_difference_11;
  float product_difference_12;
  float state_address_6;
  __int64 table_value_8;
  float product_difference_13;
  float product_difference_14;
  __int64 table_value_9;
  __int64 table_value_10;
  __int64 table_value_11;
  __int64 table_value_12;
  __int64 table_value_13;
  __int64 table_value_14;
  __int64 table_value_15;
  __int64 result;

  input_value = a1;
  record_word_offset = 2310LL * a1;
  record_word_offset_2 = 770LL * a1;
  table_value = (int)dword_140404A6C[record_word_offset + 432531270];
  *(float *)&float_word = (float)((float)(*(float *)dword_1402B34F8 - 0.5) * a7) + a4;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531271 + 3 * table_value] = (float)((float)(*(float *)dword_1402B34F0 - 0.5) * a5)
                                                            + a2;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = (float)((float)(*(float *)dword_1402B34F4 - 0.5) * a6)
                                                                                             + a3;
  product_difference = *(float *)&dword_1402B34FC - 0.5;
  dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = float_word;
  table_value_2 = (int)dword_140404A6C[record_word_offset + 432531270];
  product_difference_2 = *(float *)&dword_1402B3500 - 0.5;
  dword_140404A6C[record_word_offset + 432531270] = table_value_2 + 1;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531274 + 3 * table_value_2] = (float)(product_difference * a5) + a2;
  product_difference_3 = *(float *)&dword_1402B3504 - 0.5;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = (float)(product_difference_2 * a6) + a3;
  state_address = (float)(*(float *)&dword_1402B350C - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = (float)(product_difference_3 * a7) + a4;
  table_value_3 = (int)dword_140404A6C[record_word_offset + 432531270];
  product_difference_4 = *(float *)&dword_1402B3508 - 0.5;
  dword_140404A6C[record_word_offset + 432531270] = table_value_3 + 1;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531274 + 3 * table_value_3] = (float)(product_difference_4 * a5) + a2;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = state_address + a3;
  *(float *)&state_address_2 = (float)((float)(*(float *)&dword_1402B3518 - 0.5) * a6) + a3;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = (float)((float)(*(float *)&dword_1402B3510 - 0.5) * a7)
                                                                                             + a4;
  table_value_4 = (int)dword_140404A6C[record_word_offset + 432531270];
  product_difference_5 = *(float *)&dword_1402B3514 - 0.5;
  dword_140404A6C[record_word_offset + 432531270] = table_value_4 + 1;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531274 + 3 * table_value_4] = (float)(product_difference_5 * a5) + a2;
  product_difference_6 = *(float *)&dword_1402B351C - 0.5;
  dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = state_address_2;
  state_address_3 = (float)(*(float *)&dword_1402B3524 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = (float)(product_difference_6 * a7) + a4;
  table_value_5 = (int)dword_140404A6C[record_word_offset + 432531270];
  product_difference_7 = *(float *)&dword_1402B3520 - 0.5;
  dword_140404A6C[record_word_offset + 432531270] = table_value_5 + 1;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531274 + 3 * table_value_5] = (float)(product_difference_7 * a5) + a2;
  product_difference_8 = *(float *)&dword_1402B3528 - 0.5;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = state_address_3 + a3;
  state_address_4 = (float)(*(float *)&dword_1402B3530 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = (float)(product_difference_8 * a7) + a4;
  table_value_6 = (int)dword_140404A6C[record_word_offset + 432531270];
  product_difference_9 = *(float *)&dword_1402B352C - 0.5;
  dword_140404A6C[record_word_offset + 432531270] = table_value_6 + 1;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531274 + 3 * table_value_6] = (float)(product_difference_9 * a5) + a2;
  product_difference_10 = *(float *)&dword_1402B3534 - 0.5;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = state_address_4 + a3;
  input_value *= 385;
  state_address_5 = (float)(*(float *)&dword_1402B353C - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = (float)(product_difference_10 * a7) + a4;
  table_value_7 = (int)dword_140404A6C[record_word_offset + 432531270];
  product_difference_11 = *(float *)&dword_1402B3538 - 0.5;
  dword_140404A6C[record_word_offset + 432531270] = table_value_7 + 1;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531274 + 3 * table_value_7] = (float)(product_difference_11 * a5) + a2;
  product_difference_12 = *(float *)&dword_1402B3540 - 0.5;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = state_address_5 + a3;
  state_address_6 = (float)(*(float *)&dword_1402B3548 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531273 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = (float)(product_difference_12 * a7) + a4;
  table_value_8 = (int)dword_140404A6C[record_word_offset + 432531270];
  product_difference_13 = *(float *)&dword_1402B3544 - 0.5;
  dword_140404A6C[record_word_offset + 432531270] = table_value_8 + 1;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531274 + 3 * table_value_8] = (float)(product_difference_13 * a5) + a2;
  product_difference_14 = *(float *)&dword_1402B354C - 0.5;
  *(float *)&dword_140404A6C[3 * record_word_offset_2 + 432531272 + 3 * (int)dword_140404A6C[record_word_offset + 432531270]] = state_address_6 + a3;
  table_value_9 = record_word_offset_2 + (int)dword_140404A6C[record_word_offset + 432531270];
  LODWORD(record_word_offset_2) = table_value + dword_1402B3660[0];
  *(float *)&dword_140404A6C[3 * table_value_9 + 432531273] = (float)(product_difference_14 * a7) + a4;
  table_value_10 = (int)dword_140404A6C[record_word_offset + 432532039];
  ++dword_140404A6C[record_word_offset + 432531270];
  dword_140404A6C[6 * input_value + 432532041 + 6 * table_value_10] = record_word_offset_2;
  dword_140404A6C[6 * input_value + 432532042 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B3664[0];
  dword_140404A6C[6 * input_value + 432532043 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B3668[0];
  dword_140404A6C[6 * input_value + 432532044 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B366C[0];
  LODWORD(record_word_offset_2) = table_value + dword_1402B3670;
  dword_140404A6C[6 * input_value + 432532040 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = 4;
  table_value_11 = (int)dword_140404A6C[record_word_offset + 432532039];
  dword_140404A6C[record_word_offset + 432532039] = table_value_11 + 1;
  dword_140404A6C[6 * input_value + 432532047 + 6 * table_value_11] = record_word_offset_2;
  dword_140404A6C[6 * input_value + 432532042 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B3674;
  dword_140404A6C[6 * input_value + 432532043 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B3678;
  dword_140404A6C[6 * input_value + 432532044 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B367C;
  LODWORD(record_word_offset_2) = table_value + dword_1402B3680;
  dword_140404A6C[6 * input_value + 432532040 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = 4;
  table_value_12 = (int)dword_140404A6C[record_word_offset + 432532039];
  dword_140404A6C[record_word_offset + 432532039] = table_value_12 + 1;
  dword_140404A6C[6 * input_value + 432532047 + 6 * table_value_12] = record_word_offset_2;
  dword_140404A6C[6 * input_value + 432532042 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B3684;
  dword_140404A6C[6 * input_value + 432532043 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B3688;
  dword_140404A6C[6 * input_value + 432532044 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B368C;
  LODWORD(record_word_offset_2) = table_value + dword_1402B3690;
  dword_140404A6C[6 * input_value + 432532040 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = 4;
  table_value_13 = (int)dword_140404A6C[record_word_offset + 432532039];
  dword_140404A6C[record_word_offset + 432532039] = table_value_13 + 1;
  dword_140404A6C[6 * input_value + 432532047 + 6 * table_value_13] = record_word_offset_2;
  dword_140404A6C[6 * input_value + 432532042 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B3694;
  dword_140404A6C[6 * input_value + 432532043 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B3698;
  dword_140404A6C[6 * input_value + 432532044 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B369C;
  LODWORD(record_word_offset_2) = table_value + dword_1402B36A0;
  dword_140404A6C[6 * input_value + 432532040 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = 4;
  table_value_14 = (int)dword_140404A6C[record_word_offset + 432532039];
  dword_140404A6C[record_word_offset + 432532039] = table_value_14 + 1;
  dword_140404A6C[6 * input_value + 432532047 + 6 * table_value_14] = record_word_offset_2;
  dword_140404A6C[6 * input_value + 432532042 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B36A4;
  dword_140404A6C[6 * input_value + 432532043 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B36A8;
  dword_140404A6C[6 * input_value + 432532044 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B36AC;
  LODWORD(record_word_offset_2) = table_value + dword_1402B36B0;
  dword_140404A6C[6 * input_value + 432532040 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = 4;
  table_value_15 = (int)dword_140404A6C[record_word_offset + 432532039];
  dword_140404A6C[record_word_offset + 432532039] = table_value_15 + 1;
  dword_140404A6C[6 * input_value + 432532047 + 6 * table_value_15] = record_word_offset_2;
  dword_140404A6C[6 * input_value + 432532042 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B36B4;
  dword_140404A6C[6 * input_value + 432532043 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B36B8;
  dword_140404A6C[6 * input_value + 432532044 + 6 * (int)dword_140404A6C[record_word_offset + 432532039]] = table_value + dword_1402B36BC;
  result = input_value + (int)dword_140404A6C[record_word_offset + 432532039];
  dword_140404A6C[6 * result + 432532040] = 4;
  ++dword_140404A6C[record_word_offset + 432532039];
  return result;
}
