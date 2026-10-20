#include "shared_client.h"

//----- (00000001400A3970) ----------------------------------------------------
__int64            sub_1400A3970(__int64 a1, __int64 a2, double a3)
{
  unsigned int cached_game_single_step;
  int state_word;
  int state_word_2;
  char byte1_result;
  __int64 scaled_index;
  float weighted_sum;
  float scaled_value;
  __int64 scaled_index_2;
  float weighted_sum_2;
  float scaled_value_2;
  unsigned __int8 saved_state_word;
  unsigned int integer_sum;
  int cached_state_word;
  char integer_difference;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3970[80];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400A3970 + 0)) /* [rsp+0h] */
#define axis (*(__int128 (*))(void *)(sr_frame_1400A3970 + 32)) /* [rsp+20h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_1400A3970 + 48)) /* [rsp+30h] */
#define frame_float_at_64 (*(float (*))(void *)(sr_frame_1400A3970 + 64)) /* [rsp+40h] */
#define unused_frame_slot_72 (*(__int64 (*))(void *)(sr_frame_1400A3970 + 72)) /* [rsp+48h] */

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
  state_word = g_183F79DE4;
  if ( BYTE1(g_183F7C994) )
    state_word = -1;
  g_183F79DE4 = state_word;
  if ( BYTE2(g_183F7C97C) )
  {
    state_word = -1;
    g_144CBFAC4 = 1;
    g_183F79DE4 = -1;
    state_word_2 = 1;
  }
  else
  {
    state_word_2 = g_144CBFAC4;
  }
  byte1_result = BYTE1(g_183F7CA40);
  if ( HIBYTE(g_183F7C97C) )
  {
    state_word_2 = 2;
    g_144CBFAC4 = 2;
    if ( BYTE1(g_183F7CA40) )
    {
      g_183F7C398 = g_183F7C37C;
      g_183F7C39C = g_183F7C380;
      g_183F7C3A0 = g_183F7C384;
      axis = xmmword_140278D30;
      frame_float_at_64 = 1.0;
      cached_xmmword_140278d30 = xmmword_140278D30;
      sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis + 3, sr_export_float_lane_container((unsigned __int64)g_183F7C388));
      sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
      *(_QWORD *)&a3 = *(unsigned int *)&g_183F7C390;
      state_word_2 = g_144CBFAC4;
      byte1_result = BYTE1(g_183F7CA40);
      state_word = g_183F79DE4;
      scaled_index = 7LL * (int)g_144CBFAC4;
      weighted_sum = *((float *)&cached_xmmword_140278d30 + 3) * g_183F7C390;
      *(float *)&dword_140404A6C[scaled_index + 284024381] = (float)(*((float *)&cached_xmmword_140278d30 + 2) * g_183F7C390)
                                                 + *(float *)&dword_140404A6C[scaled_index + 284024381];
      scaled_value = frame_float_at_64 * *(float *)&a3;
      *(float *)&dword_140404A6C[scaled_index + 284024382] = weighted_sum + *(float *)&dword_140404A6C[scaled_index + 284024382];
      *(float *)&dword_140404A6C[scaled_index + 284024383] = scaled_value + *(float *)&dword_140404A6C[scaled_index + 284024383];
      dword_140404A6C[scaled_index + 284024384] = g_183F7C388;
      dword_140404A6C[scaled_index + 284024385] = g_183F7C38C;
    }
  }
  if ( LOBYTE(g_183F7C980) )
  {
    state_word_2 = 3;
    g_144CBFAC4 = 3;
    if ( byte1_result )
    {
      g_183F7C3B4 = g_183F7C37C;
      g_183F7C3B8 = g_183F7C380;
      g_183F7C3BC = g_183F7C384;
      axis = xmmword_140278D30;
      frame_float_at_64 = 1.0;
      cached_xmmword_140278d30 = xmmword_140278D30;
      sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis + 3, sr_export_float_lane_container((unsigned __int64)g_183F7C388));
      sr_math_mat3_rotate_rows((__int64)&axis, (float *)&axis, sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
      *(_QWORD *)&a3 = *(unsigned int *)&g_183F7C390;
      state_word_2 = g_144CBFAC4;
      byte1_result = BYTE1(g_183F7CA40);
      state_word = g_183F79DE4;
      scaled_index_2 = 7LL * (int)g_144CBFAC4;
      weighted_sum_2 = *((float *)&cached_xmmword_140278d30 + 3) * g_183F7C390;
      *(float *)&dword_140404A6C[scaled_index_2 + 284024381] = (float)(*((float *)&cached_xmmword_140278d30 + 2) * g_183F7C390)
                                                  + *(float *)&dword_140404A6C[scaled_index_2 + 284024381];
      scaled_value_2 = frame_float_at_64 * *(float *)&a3;
      *(float *)&dword_140404A6C[scaled_index_2 + 284024382] = weighted_sum_2 + *(float *)&dword_140404A6C[scaled_index_2 + 284024382];
      *(float *)&dword_140404A6C[scaled_index_2 + 284024383] = scaled_value_2 + *(float *)&dword_140404A6C[scaled_index_2 + 284024383];
      dword_140404A6C[scaled_index_2 + 284024384] = g_183F7C388;
      dword_140404A6C[scaled_index_2 + 284024385] = g_183F7C38C;
    }
  }
  if ( LOBYTE(g_183F7C98C) && !LOBYTE(g_183F7C78C) )
  {
    saved_state_word = state_word;
    if ( state_word >= 0 )
    {
      LOBYTE(integer_sum) = state_word + 1;
      if ( byte1_result )
        LOBYTE(integer_sum) = state_word - 1;
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
      a2 = 7166LL * integer_sum;
      if ( dword_140404A6C[a2 + 280651303] )
      {
        if ( (int)dword_140404A6C[a2 + 280651318] > 0 && dword_140404A6C[a2 + 280658438] <= 2 )
          break;
      }
      integer_difference = 1;
      if ( byte1_result )
        integer_difference = -1;
      integer_sum = (unsigned __int8)(integer_sum + integer_difference);
      if ( integer_sum == cached_state_word )
        goto LABEL_37;
    }
    state_word = integer_sum;
    g_183F79DE4 = integer_sum;
  }
LABEL_37:
  if ( state_word_2 == 1 )
  {
    sub_140105180(1, a2 * 4, a3);
  }
  else
  {
    sub_140105470(state_word_2, a2 * 4, a3);
    if ( state_word != -1 )
      sub_14002EDF0(state_word_2, (__int64)&dword_140404A6C[7166 * state_word + 280651335]);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef axis
#undef cached_xmmword_140278d30
#undef frame_float_at_64
#undef unused_frame_slot_72

//----- (0000000140127300) ----------------------------------------------------
void sub_140127300()
{
  unsigned int cached_replay_position;
  int cached_packet_in_length;
  unsigned int integer_sum;
  char cached_packet_in_data;
  signed int cached_packet_in_byte;
  __int64 saved_cached_packet_in_byte;
  __int128 masked_bits;
  unsigned int integer_sum_2;
  __int64 remaining_count;
  unsigned int *record_byte_offset;
  unsigned int integer_sum_3;
  unsigned int integer_sum_4;
  _DWORD *record_pointer;
  unsigned int integer_sum_5;
  int decoded_value;

  cached_replay_position = replay_position;
  if ( (int)replay_position < (int)replay_length )
  {
    if ( replay_position + 0x10000 >= g_144CBFAA0 )
    {
      cached_packet_in_length = packet_in_length;
    }
    else
    {
      crt_memcpy(
        (__m128i *)&packet_in_data,
        (     __m128i *)(g_144CBFAB8 + (int)replay_position),
        0x10000u);
      cached_packet_in_length = 0x10000;
      packet_in_length = 0x10000;
    }
    integer_sum = 0;
    *(_QWORD *)&packet_in_byte = 0;
    if ( cached_packet_in_length < 1 )
    {
      cached_packet_in_data = decoded_value;
    }
    else
    {
      cached_packet_in_data = packet_in_data;
      packet_in_byte = 1;
    }
    if ( cached_packet_in_data == 6 )
    {
      sr_net_read_bits(&game_type, 4);
      cached_packet_in_byte = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000
        && (signed int)(packet_in_byte + 32) <= (int)packet_in_length )
      {
        if ( (int)packet_in_bit > 0 )
        {
          cached_packet_in_byte = packet_in_byte + 1;
          packet_in_bit = 0;
          ++packet_in_byte;
        }
        saved_cached_packet_in_byte = cached_packet_in_byte;
        cached_packet_in_byte += 32;
        masked_bits = *(_OWORD *)((char *)&g_1853AD434 + saved_cached_packet_in_byte);
        g_183EBFAB0 = *(_OWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte);
        g_183EBFAC0 = masked_bits;
      }
      integer_sum_2 = cached_packet_in_byte + 1;
      replay_position = integer_sum_2 + cached_replay_position;
      packet_in_byte = integer_sum_2;
    }
    else
    {
      ++game_tick;
      sr_net_read_bits(&game_state, 4);
      sr_net_read_bits(&g_183EBFCD4, 24);
      sr_net_read_bits(&game_day_time, 30);
      sub_14018F1B0();
      sr_net_read_bits(&decoded_value, 16);
      sr_net_read_bits(&world_event_count, 16);
      if ( decoded_value > 0 )
      {
        remaining_count = (unsigned int)decoded_value;
        do
        {
          sub_14018DBF0(world_event_count);
          ++world_event_count;
          HIWORD(world_event_count) = 0;
          --remaining_count;
        }
        while ( remaining_count );
      }
      record_byte_offset = &g_1A4D2DD24;
      replay_position += ++packet_in_byte;
      do
      {
        integer_sum_3 = integer_sum + 1;
        if ( !*(record_byte_offset - 4) )
          integer_sum_3 = integer_sum;
        integer_sum_4 = integer_sum_3 + 1;
        if ( !*record_byte_offset )
          integer_sum_4 = integer_sum_3;
        record_pointer = record_byte_offset + 8;
        integer_sum_5 = integer_sum_4 + 1;
        if ( !record_byte_offset[4] )
          integer_sum_5 = integer_sum_4;
        record_byte_offset += 16;
        integer_sum = integer_sum_5 + 1;
        if ( !*record_pointer )
          integer_sum = integer_sum_5;
      }
      while ( (__int64)record_byte_offset < (__int64)&g_1A4D31D24 );
      replay_unknown_144cbfac8 = integer_sum;
    }
  }
}

//----- (0000000140127630) ----------------------------------------------------
__int64 sub_140127630()
{
  unsigned int cached_replay_position;
  signed int cached_packet_out_byte;
  __int128 state_word;
  unsigned int byte_count;
  int state_word_2;
  signed int remaining_amount;
  __int64 remaining_count;
  signed int cached_packet_out_byte_2;
  char cached_packet_out_bit;
  unsigned int remaining_bits;
  unsigned int integer_difference;
  signed int byte_count_2;
  __int64 result;

  cached_replay_position = replay_position;
  if ( !replay_position )
  {
    *(_QWORD *)&packet_out_byte = 1;
    LOBYTE(packet_out_data) = 6;
    sr_net_write_bits(&game_type, 4);
    cached_packet_out_byte = packet_out_byte;
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        cached_packet_out_byte = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      state_word = g_183EBFAC0;
      *(_OWORD *)((char *)&packet_out_data + cached_packet_out_byte) = g_183EBFAB0;
      *(_OWORD *)((char *)&g_18539D414 + cached_packet_out_byte) = state_word;
      cached_packet_out_byte = packet_out_byte + 32;
    }
    byte_count = cached_packet_out_byte + 1;
    packet_out_byte = byte_count;
    if ( byte_count < g_144CBFAA0 )
    {
      crt_memcpy(
        *(__m128i **)&g_144CBFAB8,
        (     __m128i *)&packet_out_data,
        (int)byte_count);
      cached_replay_position = packet_out_byte + replay_position;
      replay_position += packet_out_byte;
    }
    replay_length = cached_replay_position;
  }
  *(_QWORD *)&packet_out_byte = 1;
  LOBYTE(packet_out_data) = 5;
  sr_net_write_bits(&game_state, 4);
  sr_net_write_bits(&g_183EBFCD4, 24);
  sr_net_write_bits(&game_day_time, 30);
  g_1ABC4D5E0 = 0;
  g_1ABC4D5E8 = 0;
  sub_140110D00(255, -1);
  g_1ABC2D894 = g_1AD04B20C;
  sub_140106160(255);
  state_word_2 = g_144CBFAAC;
  remaining_amount = 16;
  g_1ABC5B60C = g_1ABC5B604;
  remaining_count = world_event_count - g_144CBFAAC + 0x10000;
  cached_packet_out_byte_2 = packet_out_byte;
  if ( (int)world_event_count >= (int)g_144CBFAAC )
    remaining_count = world_event_count - g_144CBFAAC;
  if ( (int)packet_out_byte < 0x10000 )
  {
    cached_packet_out_bit = packet_out_bit;
    remaining_bits = (unsigned __int16)remaining_count;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + cached_packet_out_byte_2) &= ~(((1 << remaining_amount) - 1) << cached_packet_out_bit);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits << SLOBYTE(packet_out_bit);
      integer_difference = 8 - packet_out_bit;
      if ( remaining_amount < 8 - packet_out_bit )
        break;
      packet_out_bit = 0;
      if ( remaining_amount == integer_difference )
      {
        ++packet_out_byte;
        goto LABEL_19;
      }
      remaining_amount -= integer_difference;
      cached_packet_out_byte_2 = packet_out_byte + 1;
      remaining_bits >>= integer_difference;
      ++packet_out_byte;
      cached_packet_out_bit = 0;
      if ( remaining_amount <= 0 )
        goto LABEL_19;
    }
    packet_out_bit += remaining_amount;
  }
LABEL_19:
  sr_net_write_bits(&g_144CBFAAC, 16);
  if ( (int)remaining_count > 0 )
  {
    while ( 1 )
    {
      sub_14010EFF0(state_word_2, 255);
      ++g_144CBFAAC;
      HIWORD(g_144CBFAAC) = 0;
      if ( !--remaining_count )
        break;
      state_word_2 = g_144CBFAAC;
    }
  }
  byte_count_2 = packet_out_byte + 1;
  packet_out_byte = byte_count_2;
  result = byte_count_2 + replay_position;
  if ( (unsigned int)result >= g_144CBFAA0 )
  {
    replay_length = replay_position;
  }
  else
  {
    crt_memcpy(
      (__m128i *)(g_144CBFAB8 + (int)replay_position),
      (     __m128i *)&packet_out_data,
      byte_count_2);
    result = packet_out_byte + replay_position;
    replay_position = result;
    replay_length = result;
  }
  return result;
}

