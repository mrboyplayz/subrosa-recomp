#include "shared_client.h"


//----- (00000001400A3970) ----------------------------------------------------
__int64            sub_1400A3970(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // eax
  int v4; // ebx
  int v5; // edi
  char v6; // r8
  __int64 v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  float v12; // xmm0_4
  unsigned __int8 v13; // al
  unsigned int v14; // ecx
  int v15; // r9d
  char v16; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3970[80];
#define v18 (*(__int64 (*))(void *)(sr_frame_1400A3970 + 0)) /* [rsp+0h] */
#define v19 (*(__int128 (*))(void *)(sr_frame_1400A3970 + 32)) /* [rsp+20h] */
#define v20 (*(__int128 (*))(void *)(sr_frame_1400A3970 + 48)) /* [rsp+30h] */
#define v21 (*(float (*))(void *)(sr_frame_1400A3970 + 64)) /* [rsp+40h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_1400A3970 + 72)) /* [rsp+48h] */

  if ( HIBYTE(dword_140404A6C[284024769]) && !HIBYTE(dword_140404A6C[284024641]) )
    dword_140404A6C[283831479] ^= 1u;
  if ( BYTE2(dword_140404A6C[284024769]) )
  {
    v3 = dword_140404A6C[283831480];
    if ( !BYTE2(dword_140404A6C[284024641]) )
      v3 = 1;
    dword_140404A6C[283831480] = v3;
  }
  if ( LOBYTE(dword_140404A6C[284024768]) && !LOBYTE(dword_140404A6C[284024640]) )
    dword_140404A6C[283831481] ^= 1u;
  v4 = dword_140404A6C[284021982];
  if ( BYTE1(dword_140404A6C[284024778]) )
    v4 = -1;
  dword_140404A6C[284021982] = v4;
  if ( BYTE2(dword_140404A6C[284024772]) )
  {
    v4 = -1;
    dword_140404A6C[19065878] = 1;
    dword_140404A6C[284021982] = -1;
    v5 = 1;
  }
  else
  {
    v5 = dword_140404A6C[19065878];
  }
  v6 = BYTE1(dword_140404A6C[284024821]);
  if ( HIBYTE(dword_140404A6C[284024772]) )
  {
    v5 = 2;
    dword_140404A6C[19065878] = 2;
    if ( BYTE1(dword_140404A6C[284024821]) )
    {
      dword_140404A6C[284024395] = dword_140404A6C[284024388];
      dword_140404A6C[284024396] = dword_140404A6C[284024389];
      dword_140404A6C[284024397] = dword_140404A6C[284024390];
      v19 = xmmword_140278D30;
      v21 = 1.0;
      v20 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v19, (float *)&v19 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
      sub_14007B2A0((__int64)&v19, (float *)&v19, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
      *(_QWORD *)&a3 = dword_140404A6C[284024393];
      v5 = dword_140404A6C[19065878];
      v6 = BYTE1(dword_140404A6C[284024821]);
      v4 = dword_140404A6C[284021982];
      v7 = 7LL * (int)dword_140404A6C[19065878];
      v8 = *((float *)&v20 + 3) * *(float *)&dword_140404A6C[284024393];
      *(float *)&dword_140404A6C[v7 + 284024381] = (float)(*((float *)&v20 + 2) * *(float *)&dword_140404A6C[284024393])
                                                 + *(float *)&dword_140404A6C[v7 + 284024381];
      v9 = v21 * *(float *)&a3;
      *(float *)&dword_140404A6C[v7 + 284024382] = v8 + *(float *)&dword_140404A6C[v7 + 284024382];
      *(float *)&dword_140404A6C[v7 + 284024383] = v9 + *(float *)&dword_140404A6C[v7 + 284024383];
      dword_140404A6C[v7 + 284024384] = dword_140404A6C[284024391];
      dword_140404A6C[v7 + 284024385] = dword_140404A6C[284024392];
    }
  }
  if ( LOBYTE(dword_140404A6C[284024773]) )
  {
    v5 = 3;
    dword_140404A6C[19065878] = 3;
    if ( v6 )
    {
      dword_140404A6C[284024402] = dword_140404A6C[284024388];
      dword_140404A6C[284024403] = dword_140404A6C[284024389];
      dword_140404A6C[284024404] = dword_140404A6C[284024390];
      v19 = xmmword_140278D30;
      v21 = 1.0;
      v20 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v19, (float *)&v19 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
      sub_14007B2A0((__int64)&v19, (float *)&v19, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
      *(_QWORD *)&a3 = dword_140404A6C[284024393];
      v5 = dword_140404A6C[19065878];
      v6 = BYTE1(dword_140404A6C[284024821]);
      v4 = dword_140404A6C[284021982];
      v10 = 7LL * (int)dword_140404A6C[19065878];
      v11 = *((float *)&v20 + 3) * *(float *)&dword_140404A6C[284024393];
      *(float *)&dword_140404A6C[v10 + 284024381] = (float)(*((float *)&v20 + 2) * *(float *)&dword_140404A6C[284024393])
                                                  + *(float *)&dword_140404A6C[v10 + 284024381];
      v12 = v21 * *(float *)&a3;
      *(float *)&dword_140404A6C[v10 + 284024382] = v11 + *(float *)&dword_140404A6C[v10 + 284024382];
      *(float *)&dword_140404A6C[v10 + 284024383] = v12 + *(float *)&dword_140404A6C[v10 + 284024383];
      dword_140404A6C[v10 + 284024384] = dword_140404A6C[284024391];
      dword_140404A6C[v10 + 284024385] = dword_140404A6C[284024392];
    }
  }
  if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
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
    dword_140404A6C[284021982] = v14;
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

// 1400A3D1A: variable 'a2' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAC4: using guessed type unsigned int;
// 183EBFD4C: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F7C37C: using guessed type unsigned int;
// 183F7C380: using guessed type unsigned int;
// 183F7C384: using guessed type unsigned int;
// 183F7C388: using guessed type unsigned int;
// 183F7C38C: using guessed type unsigned int;
// 183F7C398: using guessed type unsigned int;
// 183F7C39C: using guessed type unsigned int;
// 183F7C3A0: using guessed type unsigned int;
// 183F7C3B4: using guessed type unsigned int;
// 183F7C3B8: using guessed type unsigned int;
// 183F7C3BC: using guessed type unsigned int;

//----- (0000000140127300) ----------------------------------------------------
void sub_140127300()
{
  unsigned int v0; // edi
  int v1; // eax
  unsigned int v2; // ebx
  char v3; // al
  signed int v4; // ecx
  __int64 v5; // rax
  __int128 v6; // xmm1
  unsigned int v7; // ecx
  __int64 v8; // rdi
  unsigned int *v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // ecx
  _DWORD *v12; // rax
  unsigned int v13; // edx
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140404A6C[19065873];
  if ( (int)dword_140404A6C[19065873] < (int)dword_140404A6C[19065874] )
  {
    if ( dword_140404A6C[19065873] + 0x10000 >= dword_140404A6C[19065869] )
    {
      v1 = dword_140404A6C[289317483];
    }
    else
    {
      sub_1401FC920(
        (__m128i *)&dword_140404A6C[289317486],
        (     __m128i *)(*(_QWORD *)&dword_140404A6C[19065875] + (int)dword_140404A6C[19065873]),
        0x10000u);
      v1 = 0x10000;
      dword_140404A6C[289317483] = 0x10000;
    }
    v2 = 0;
    *(_QWORD *)&dword_140404A6C[289317484] = 0;
    if ( v1 < 1 )
    {
      v3 = v14;
    }
    else
    {
      v3 = dword_140404A6C[289317486];
      dword_140404A6C[289317484] = 1;
    }
    if ( v3 == 6 )
    {
      sub_140115AE0(&dword_140404A6C[283831312], 4);
      v4 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000
        && (signed int)(dword_140404A6C[289317484] + 32) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v4 = dword_140404A6C[289317484] + 1;
          dword_140404A6C[289317485] = 0;
          ++dword_140404A6C[289317484];
        }
        v5 = v4;
        v4 += 32;
        v6 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v5);
        *(_OWORD *)&dword_140404A6C[283831313] = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v5);
        *(_OWORD *)&dword_140404A6C[283831317] = v6;
      }
      v7 = v4 + 1;
      dword_140404A6C[19065873] = v7 + v0;
      dword_140404A6C[289317484] = v7;
    }
    else
    {
      ++dword_140404A6C[283831474];
      sub_140115AE0(&dword_140404A6C[283831448], 4);
      sub_140115AE0(&dword_140404A6C[283831450], 24);
      sub_140115AE0(&dword_140404A6C[179992853], 30);
      sub_14018F1B0();
      sub_140115AE0(&v14, 16);
      sub_140115AE0(&dword_140404A6C[308307070], 16);
      if ( v14 > 0 )
      {
        v8 = (unsigned int)v14;
        do
        {
          sub_14018DBF0(dword_140404A6C[308307070]);
          ++dword_140404A6C[308307070];
          HIWORD(dword_140404A6C[308307070]) = 0;
          --v8;
        }
        while ( v8 );
      }
      v9 = &dword_140404A6C[421831854];
      dword_140404A6C[19065873] += ++dword_140404A6C[289317484];
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
      while ( (__int64)v9 < (__int64)&dword_140404A6C[421835950] );
      dword_140404A6C[19065879] = v2;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAB0: using guessed type unsigned int;
// 144CBFAC8: using guessed type unsigned int;
// 183EBFAB0: using guessed type unsigned int;
// 183EBFAC0: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140127630) ----------------------------------------------------
__int64 sub_140127630()
{
  unsigned int v0; // ebx
  signed int v1; // eax
  __int128 v2; // xmm1
  unsigned int v3; // eax
  int v4; // edi
  signed int v5; // r8d
  __int64 v6; // rbx
  signed int v7; // eax
  char v8; // r9
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  signed int v11; // r8d
  __int64 result; // rax

  v0 = dword_140404A6C[19065873];
  if ( !dword_140404A6C[19065873] )
  {
    *(_QWORD *)&dword_140404A6C[289301092] = 1;
    LOBYTE(dword_140404A6C[289301094]) = 6;
    sub_140115D90(&dword_140404A6C[283831312], 4);
    v1 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v1 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v2 = *(_OWORD *)&dword_140404A6C[283831317];
      *(_OWORD *)((char *)&dword_140404A6C[289301094] + v1) = *(_OWORD *)&dword_140404A6C[283831313];
      *(_OWORD *)((char *)&dword_140404A6C[289301098] + v1) = v2;
      v1 = dword_140404A6C[289301092] + 32;
    }
    v3 = v1 + 1;
    dword_140404A6C[289301092] = v3;
    if ( v3 < dword_140404A6C[19065869] )
    {
      sub_1401FC920(
        *(__m128i **)&dword_140404A6C[19065875],
        (     __m128i *)&dword_140404A6C[289301094],
        (int)v3);
      v0 = dword_140404A6C[289301092] + dword_140404A6C[19065873];
      dword_140404A6C[19065873] += dword_140404A6C[289301092];
    }
    dword_140404A6C[19065874] = v0;
  }
  *(_QWORD *)&dword_140404A6C[289301092] = 1;
  LOBYTE(dword_140404A6C[289301094]) = 5;
  sub_140115D90(&dword_140404A6C[283831448], 4);
  sub_140115D90(&dword_140404A6C[283831450], 24);
  sub_140115D90(&dword_140404A6C[179992853], 30);
  *(_QWORD *)&dword_140404A6C[450962141] = 0;
  dword_140404A6C[450962143] = 0;
  sub_140110D00(255, -1);
  dword_140404A6C[450929546] = dword_140404A6C[456202728];
  sub_140106160(255);
  v4 = dword_140404A6C[19065872];
  v5 = 16;
  dword_140404A6C[450976488] = dword_140404A6C[450976486];
  v6 = dword_140404A6C[308307070] - dword_140404A6C[19065872] + 0x10000;
  v7 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[308307070] >= (int)dword_140404A6C[19065872] )
    v6 = dword_140404A6C[308307070] - dword_140404A6C[19065872];
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v8 = dword_140404A6C[289301093];
    v9 = (unsigned __int16)v6;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v7) &= ~(((1 << v5) - 1) << v8);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v9 << SLOBYTE(dword_140404A6C[289301093]);
      v10 = 8 - dword_140404A6C[289301093];
      if ( v5 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v5 == v10 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_19;
      }
      v5 -= v10;
      v7 = dword_140404A6C[289301092] + 1;
      v9 >>= v10;
      ++dword_140404A6C[289301092];
      v8 = 0;
      if ( v5 <= 0 )
        goto LABEL_19;
    }
    dword_140404A6C[289301093] += v5;
  }
LABEL_19:
  sub_140115D90(&dword_140404A6C[19065872], 16);
  if ( (int)v6 > 0 )
  {
    while ( 1 )
    {
      sub_14010EFF0(v4, 255);
      ++dword_140404A6C[19065872];
      HIWORD(dword_140404A6C[19065872]) = 0;
      if ( !--v6 )
        break;
      v4 = dword_140404A6C[19065872];
    }
  }
  v11 = dword_140404A6C[289301092] + 1;
  dword_140404A6C[289301092] = v11;
  result = v11 + dword_140404A6C[19065873];
  if ( (unsigned int)result >= dword_140404A6C[19065869] )
  {
    dword_140404A6C[19065874] = dword_140404A6C[19065873];
  }
  else
  {
    sub_1401FC920(
      (__m128i *)(*(_QWORD *)&dword_140404A6C[19065875] + (int)dword_140404A6C[19065873]),
      (     __m128i *)&dword_140404A6C[289301094],
      v11);
    result = dword_140404A6C[289301092] + dword_140404A6C[19065873];
    dword_140404A6C[19065873] = result;
    dword_140404A6C[19065874] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAAC: using guessed type unsigned int;
// 144CBFAB0: using guessed type unsigned int;
// 144CBFAB4: using guessed type unsigned int;
// 183EBFAB0: using guessed type unsigned int;
// 183EBFAC0: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 1ABC2D894: using guessed type unsigned int;
// 1ABC4D5E0: using guessed type unsigned int;
// 1ABC4D5E8: using guessed type unsigned int;
// 1ABC5B604: using guessed type unsigned int;
// 1ABC5B60C: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

