#include "shared_client.h"

//----- (00000001400A3970) ----------------------------------------------------
__int64            sub_1400A3970(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3;
  int v4;
  int v5;
  char v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  unsigned __int8 v13;
  unsigned int v14;
  int v15;
  char v16;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3970[80];
#define v18 (*(__int64 (*))(void *)(sr_frame_1400A3970 + 0)) /* [rsp+0h] */
#define v19 (*(__int128 (*))(void *)(sr_frame_1400A3970 + 32)) /* [rsp+20h] */
#define v20 (*(__int128 (*))(void *)(sr_frame_1400A3970 + 48)) /* [rsp+30h] */
#define v21 (*(float (*))(void *)(sr_frame_1400A3970 + 64)) /* [rsp+40h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_1400A3970 + 72)) /* [rsp+48h] */

  if ( HIBYTE(g_183F7C970) && !HIBYTE(g_183F7C770) )
    game_paused ^= 1u;
  if ( BYTE2(g_183F7C970) )
  {
    v3 = game_single_step;
    if ( !BYTE2(g_183F7C770) )
      v3 = 1;
    game_single_step = v3;
  }
  if ( LOBYTE(g_183F7C96C) && !LOBYTE(g_183F7C76C) )
    frame_slow_pacing ^= 1u;
  v4 = g_183F79DE4;
  if ( BYTE1(g_183F7C994) )
    v4 = -1;
  g_183F79DE4 = v4;
  if ( BYTE2(g_183F7C97C) )
  {
    v4 = -1;
    g_144CBFAC4 = 1;
    g_183F79DE4 = -1;
    v5 = 1;
  }
  else
  {
    v5 = g_144CBFAC4;
  }
  v6 = BYTE1(g_183F7CA40);
  if ( HIBYTE(g_183F7C97C) )
  {
    v5 = 2;
    g_144CBFAC4 = 2;
    if ( BYTE1(g_183F7CA40) )
    {
      g_183F7C398 = g_183F7C37C;
      g_183F7C39C = g_183F7C380;
      g_183F7C3A0 = g_183F7C384;
      v19 = xmmword_140278D30;
      v21 = 1.0;
      v20 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v19, (float *)&v19 + 3, sr_export_float_lane_container((unsigned __int64)g_183F7C388));
      sub_14007B2A0((__int64)&v19, (float *)&v19, sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
      *(_QWORD *)&a3 = *(unsigned int *)&g_183F7C390;
      v5 = g_144CBFAC4;
      v6 = BYTE1(g_183F7CA40);
      v4 = g_183F79DE4;
      v7 = 7LL * (int)g_144CBFAC4;
      v8 = *((float *)&v20 + 3) * g_183F7C390;
      *(float *)&dword_140404A6C[v7 + 284024381] = (float)(*((float *)&v20 + 2) * g_183F7C390)
                                                 + *(float *)&dword_140404A6C[v7 + 284024381];
      v9 = v21 * *(float *)&a3;
      *(float *)&dword_140404A6C[v7 + 284024382] = v8 + *(float *)&dword_140404A6C[v7 + 284024382];
      *(float *)&dword_140404A6C[v7 + 284024383] = v9 + *(float *)&dword_140404A6C[v7 + 284024383];
      dword_140404A6C[v7 + 284024384] = g_183F7C388;
      dword_140404A6C[v7 + 284024385] = g_183F7C38C;
    }
  }
  if ( LOBYTE(g_183F7C980) )
  {
    v5 = 3;
    g_144CBFAC4 = 3;
    if ( v6 )
    {
      g_183F7C3B4 = g_183F7C37C;
      g_183F7C3B8 = g_183F7C380;
      g_183F7C3BC = g_183F7C384;
      v19 = xmmword_140278D30;
      v21 = 1.0;
      v20 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v19, (float *)&v19 + 3, sr_export_float_lane_container((unsigned __int64)g_183F7C388));
      sub_14007B2A0((__int64)&v19, (float *)&v19, sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
      *(_QWORD *)&a3 = *(unsigned int *)&g_183F7C390;
      v5 = g_144CBFAC4;
      v6 = BYTE1(g_183F7CA40);
      v4 = g_183F79DE4;
      v10 = 7LL * (int)g_144CBFAC4;
      v11 = *((float *)&v20 + 3) * g_183F7C390;
      *(float *)&dword_140404A6C[v10 + 284024381] = (float)(*((float *)&v20 + 2) * g_183F7C390)
                                                  + *(float *)&dword_140404A6C[v10 + 284024381];
      v12 = v21 * *(float *)&a3;
      *(float *)&dword_140404A6C[v10 + 284024382] = v11 + *(float *)&dword_140404A6C[v10 + 284024382];
      *(float *)&dword_140404A6C[v10 + 284024383] = v12 + *(float *)&dword_140404A6C[v10 + 284024383];
      dword_140404A6C[v10 + 284024384] = g_183F7C388;
      dword_140404A6C[v10 + 284024385] = g_183F7C38C;
    }
  }
  if ( LOBYTE(g_183F7C98C) && !LOBYTE(g_183F7C78C) )
  {
    v13 = v4;
    if ( v4 >= 0 )
    {
      LOBYTE(v14) = v4 + 1;
      if ( v6 )
        LOBYTE(v14) = v4 - 1;
    }
    else
    {
      LOBYTE(v14) = 0;
      v13 = -1;
    }
    v14 = (unsigned __int8)v14;
    v15 = v13;
    while ( 1 )
    {
      a2 = 7166LL * v14;
      if ( dword_140404A6C[a2 + 280651303] )
      {
        if ( (int)dword_140404A6C[a2 + 280651318] > 0 && dword_140404A6C[a2 + 280658438] <= 2 )
          break;
      }
      v16 = 1;
      if ( v6 )
        v16 = -1;
      v14 = (unsigned __int8)(v14 + v16);
      if ( v14 == v15 )
        goto LABEL_37;
    }
    v4 = v14;
    g_183F79DE4 = v14;
  }
LABEL_37:
  if ( v5 == 1 )
  {
    sub_140105180(1, a2 * 4, a3);
  }
  else
  {
    sub_140105470(v5, a2 * 4, a3);
    if ( v4 != -1 )
      sub_14002EDF0(v5, (__int64)&dword_140404A6C[7166 * v4 + 280651335]);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22

//----- (0000000140127300) ----------------------------------------------------
void sub_140127300()
{
  unsigned int v0;
  int v1;
  unsigned int v2;
  char v3;
  signed int v4;
  __int64 v5;
  __int128 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int *v9;
  unsigned int v10;
  unsigned int v11;
  _DWORD *v12;
  unsigned int v13;
  int v14;

  v0 = replay_position;
  if ( (int)replay_position < (int)replay_length )
  {
    if ( replay_position + 0x10000 >= g_144CBFAA0 )
    {
      v1 = packet_in_length;
    }
    else
    {
      crt_memcpy(
        (__m128i *)&packet_in_data,
        (     __m128i *)(g_144CBFAB8 + (int)replay_position),
        0x10000u);
      v1 = 0x10000;
      packet_in_length = 0x10000;
    }
    v2 = 0;
    *(_QWORD *)&packet_in_byte = 0;
    if ( v1 < 1 )
    {
      v3 = v14;
    }
    else
    {
      v3 = packet_in_data;
      packet_in_byte = 1;
    }
    if ( v3 == 6 )
    {
      sub_140115AE0(&game_type, 4);
      v4 = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000
        && (signed int)(packet_in_byte + 32) <= (int)packet_in_length )
      {
        if ( (int)packet_in_bit > 0 )
        {
          v4 = packet_in_byte + 1;
          packet_in_bit = 0;
          ++packet_in_byte;
        }
        v5 = v4;
        v4 += 32;
        v6 = *(_OWORD *)((char *)&g_1853AD434 + v5);
        g_183EBFAB0 = *(_OWORD *)((char *)&packet_in_data + v5);
        g_183EBFAC0 = v6;
      }
      v7 = v4 + 1;
      replay_position = v7 + v0;
      packet_in_byte = v7;
    }
    else
    {
      ++game_tick;
      sub_140115AE0(&game_state, 4);
      sub_140115AE0(&g_183EBFCD4, 24);
      sub_140115AE0(&game_day_time, 30);
      sub_14018F1B0();
      sub_140115AE0(&v14, 16);
      sub_140115AE0(&world_event_count, 16);
      if ( v14 > 0 )
      {
        v8 = (unsigned int)v14;
        do
        {
          sub_14018DBF0(world_event_count);
          ++world_event_count;
          HIWORD(world_event_count) = 0;
          --v8;
        }
        while ( v8 );
      }
      v9 = &g_1A4D2DD24;
      replay_position += ++packet_in_byte;
      do
      {
        v10 = v2 + 1;
        if ( !*(v9 - 4) )
          v10 = v2;
        v11 = v10 + 1;
        if ( !*v9 )
          v11 = v10;
        v12 = v9 + 8;
        v13 = v11 + 1;
        if ( !v9[4] )
          v13 = v11;
        v9 += 16;
        v2 = v13 + 1;
        if ( !*v12 )
          v2 = v13;
      }
      while ( (__int64)v9 < (__int64)&g_1A4D31D24 );
      replay_unknown_144cbfac8 = v2;
    }
  }
}

//----- (0000000140127630) ----------------------------------------------------
__int64 sub_140127630()
{
  unsigned int v0;
  signed int v1;
  __int128 v2;
  unsigned int v3;
  int v4;
  signed int v5;
  __int64 v6;
  signed int v7;
  char v8;
  unsigned int v9;
  unsigned int v10;
  signed int v11;
  __int64 result;

  v0 = replay_position;
  if ( !replay_position )
  {
    *(_QWORD *)&packet_out_byte = 1;
    LOBYTE(packet_out_data) = 6;
    sub_140115D90(&game_type, 4);
    v1 = packet_out_byte;
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        v1 = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      v2 = g_183EBFAC0;
      *(_OWORD *)((char *)&packet_out_data + v1) = g_183EBFAB0;
      *(_OWORD *)((char *)&g_18539D414 + v1) = v2;
      v1 = packet_out_byte + 32;
    }
    v3 = v1 + 1;
    packet_out_byte = v3;
    if ( v3 < g_144CBFAA0 )
    {
      crt_memcpy(
        *(__m128i **)&g_144CBFAB8,
        (     __m128i *)&packet_out_data,
        (int)v3);
      v0 = packet_out_byte + replay_position;
      replay_position += packet_out_byte;
    }
    replay_length = v0;
  }
  *(_QWORD *)&packet_out_byte = 1;
  LOBYTE(packet_out_data) = 5;
  sub_140115D90(&game_state, 4);
  sub_140115D90(&g_183EBFCD4, 24);
  sub_140115D90(&game_day_time, 30);
  g_1ABC4D5E0 = 0;
  g_1ABC4D5E8 = 0;
  sub_140110D00(255, -1);
  g_1ABC2D894 = g_1AD04B20C;
  sub_140106160(255);
  v4 = g_144CBFAAC;
  v5 = 16;
  g_1ABC5B60C = g_1ABC5B604;
  v6 = world_event_count - g_144CBFAAC + 0x10000;
  v7 = packet_out_byte;
  if ( (int)world_event_count >= (int)g_144CBFAAC )
    v6 = world_event_count - g_144CBFAAC;
  if ( (int)packet_out_byte < 0x10000 )
  {
    v8 = packet_out_bit;
    v9 = (unsigned __int16)v6;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + v7) &= ~(((1 << v5) - 1) << v8);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v9 << SLOBYTE(packet_out_bit);
      v10 = 8 - packet_out_bit;
      if ( v5 < 8 - packet_out_bit )
        break;
      packet_out_bit = 0;
      if ( v5 == v10 )
      {
        ++packet_out_byte;
        goto LABEL_19;
      }
      v5 -= v10;
      v7 = packet_out_byte + 1;
      v9 >>= v10;
      ++packet_out_byte;
      v8 = 0;
      if ( v5 <= 0 )
        goto LABEL_19;
    }
    packet_out_bit += v5;
  }
LABEL_19:
  sub_140115D90(&g_144CBFAAC, 16);
  if ( (int)v6 > 0 )
  {
    while ( 1 )
    {
      sub_14010EFF0(v4, 255);
      ++g_144CBFAAC;
      HIWORD(g_144CBFAAC) = 0;
      if ( !--v6 )
        break;
      v4 = g_144CBFAAC;
    }
  }
  v11 = packet_out_byte + 1;
  packet_out_byte = v11;
  result = v11 + replay_position;
  if ( (unsigned int)result >= g_144CBFAA0 )
  {
    replay_length = replay_position;
  }
  else
  {
    crt_memcpy(
      (__m128i *)(g_144CBFAB8 + (int)replay_position),
      (     __m128i *)&packet_out_data,
      v11);
    result = packet_out_byte + replay_position;
    replay_position = result;
    replay_length = result;
  }
  return result;
}

