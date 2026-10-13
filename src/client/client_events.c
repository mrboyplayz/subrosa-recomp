#include "shared_client.h"


//----- (0000000140051230) ----------------------------------------------------
void            sub_140051230(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // eax
  __int64 v6; // r10

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[308307070];
    v5 = dword_140404A6C[283831474];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v5;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v6) = *a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v6) = a2[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v6) = a2[2];
    *(unsigned int *)((char *)&dword_140404A6C[297756290] + v6) = *a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756291] + v6) = a3[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v6) = a3[2];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1;
    dword_140404A6C[308307070] = v4 + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a4;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400512D0) ----------------------------------------------------
void            sub_1400512D0(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r11d
  __int64 v6; // r10
  unsigned int v7; // xmm0_4

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = dword_140404A6C[308307070];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v6) = *a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v6) = a3[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v6) = a3[2];
    if ( a4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v6) = *a4;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v6) = a4[1];
      v7 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v6) = 0;
      v7 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v6) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a2;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051480) ----------------------------------------------------
__int64            sub_140051480(unsigned int a1,      __m128i *a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/event_player.c (event_message), checked against the original
     executable (tools/native-compare/t_chat.c). No caller uses the result. */
  extern void event_message(int kind, const char *text, int speaker, int volume);
  event_message((int)a1, (const char *)a2, (int)a3, (int)a4);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051560) ----------------------------------------------------
void            sub_140051560(int a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // eax
  __int64 v6; // r10
  unsigned int v7; // r11d

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[283831474];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v7 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 18;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v5;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v6) = a5;
    dword_140404A6C[308307070] = v7;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400515E0) ----------------------------------------------------
__int64            sub_1400515E0(unsigned int a1, unsigned int *a2, float a3, float a4)
{
  extern void event_sound(int sound, const float position[3], float volume, float pitch);
  event_sound((int)a1, (const float *)(void *)a2, a3, a4);
  return 0;
}

//----- (0000000140051650) ----------------------------------------------------
__int64            sub_140051650(unsigned int a1, unsigned int a2, float a3, float a4)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 19;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v5) = a2;
    *(float *)((char *)&dword_140404A6C[297756297] + v5) = a3;
    *(float *)((char *)&dword_140404A6C[297756298] + v5) = a4;
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400516B0) ----------------------------------------------------
void            sub_1400516B0(int a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // eax
  __int64 v7; // r10
  unsigned int v8; // r11d

  if ( dword_140404A6C[456202453] )
  {
    v6 = dword_140404A6C[283831474];
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v8 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 15;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v7) = a6;
    dword_140404A6C[308307070] = v8;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051730) ----------------------------------------------------
void            sub_140051730(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  unsigned int v9; // xmm0_4
  unsigned int v10; // r11d
  __int64 v11; // r10
  unsigned int v12; // xmm1_4

  if ( dword_140404A6C[456202453] )
  {
    v8 = dword_140404A6C[283831474];
    v9 = 0;
    v10 = dword_140404A6C[308307070];
    v11 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v11) = 16;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v11) = v8;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v11) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v11) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v11) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v11) = a6;
    if ( a7 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v11) = *a7;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v11) = a7[1];
      v12 = a7[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v11) = 0;
      v12 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v11) = v12;
    if ( a8 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v11) = *a8;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v11) = a8[1];
      v9 = a8[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v11) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v11) = v9;
    dword_140404A6C[308307070] = v10 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051940) ----------------------------------------------------
__int64            sub_140051940(unsigned int a1)
{
  /* src/engine/events.c */
  extern void event_update_item_info(int item);
  event_update_item_info((int)a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400519F0) ----------------------------------------------------
void            sub_1400519F0(int a1, int a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // r11d
  __int64 v5; // r9
  unsigned int v6; // r8d
  unsigned int v7; // eax
  int v8; // ecx

  if ( dword_140404A6C[456202453] )
  {
    v2 = dword_140404A6C[283831474];
    v3 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v4 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 12;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = v2;
    dword_140404A6C[308307070] = v4;
    v5 = 1116LL * a2 + 23492LL * a1;
    v6 = (*(unsigned int *)((char *)&dword_140404A6C[283831606] + v5) + 1) << 16;
    v7 = *(unsigned int *)((char *)&dword_140404A6C[283831595] + v5)
       + 16
       * (*(unsigned int *)((char *)&dword_140404A6C[283831596] + v5)
        + 16 * *(unsigned int *)((char *)&dword_140404A6C[283831604] + v5));
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = *(unsigned int *)((char *)&dword_140404A6C[283831588]
                                                                                  + v5)
                                                                + 2
                                                                * (a2
                                                                 + 8
                                                                 * (a1
                                                                  + 16
                                                                  * (*(unsigned int *)((char *)&dword_140404A6C[283831591]
                                                                                     + v5)
                                                                   + (*(unsigned int *)((char *)&dword_140404A6C[283831603]
                                                                                      + v5) << 8))));
    v8 = *(unsigned int *)((char *)&dword_140404A6C[283831605] + v5);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v3) = v8 / 60 + v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v3) = *(unsigned int *)((char *)&dword_140404A6C[283831607]
                                                                                  + v5);
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051B00) ----------------------------------------------------
void            sub_140051B00(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  signed int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // r9

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = 64;
    v6 = (int)dword_140404A6C[308307070];
    if ( a4 <= 64 )
      v5 = a4;
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 22;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1 + (a2 << 8);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = v5;
    sub_1401FC920(
      (__m128i *)&dword_140404A6C[32 * v6 + 297756301],
      (     __m128i *)((char *)&dword_140404A6C[5873 * a1 + 283831611 + 279 * a2] + (int)(a3 << 6)),
      v5);
    dword_140404A6C[308307070] = v6 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (0000000140051BD0) ----------------------------------------------------
void            sub_140051BD0(int a1, int a2)
{
  __int64 v2; // rax
  unsigned int *v3; // r8
  int v4; // eax
  signed int v5; // r9d
  unsigned int v6; // r11d
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  if ( dword_140404A6C[456202453] )
  {
    v2 = -1;
    v3 = &dword_140404A6C[5873 * a1 + 283831611 + 279 * a2];
    do
      ++v2;
    while ( *((_BYTE *)v3 + v2) );
    v4 = ((int)v2 + 1) >> 6;
    v5 = 0;
    if ( v4 >= 0 )
    {
      v6 = dword_140404A6C[283831474];
      v7 = (a2 << 8) + a1;
      do
      {
        v8 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        v9 = *(_OWORD *)v3;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 22;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v6;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v8) = v7;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v8) = v5++;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v8) = 64;
        v10 = *((_OWORD *)v3 + 1);
        v3 += 16;
        *(_OWORD *)((char *)&dword_140404A6C[297756301] + v8) = v9;
        v11 = *((_OWORD *)v3 - 2);
        *(_OWORD *)((char *)&dword_140404A6C[297756305] + v8) = v10;
        v12 = *((_OWORD *)v3 - 1);
        *(_OWORD *)((char *)&dword_140404A6C[297756309] + v8) = v11;
        *(_OWORD *)((char *)&dword_140404A6C[297756313] + v8) = v12;
      }
      while ( v5 <= v4 );
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051CF0) ----------------------------------------------------
void            sub_140051CF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // xmm0_4
  unsigned int v7; // eax
  __int64 v8; // r10
  unsigned int v9; // xmm1_4

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[308307070];
    v6 = 0;
    v7 = dword_140404A6C[283831474];
    v8 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 4;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v8) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v8) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v8) = a3;
    if ( a4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v8) = *a4;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v8) = a4[1];
      v9 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v8) = 0;
      v9 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v8) = v9;
    if ( a5 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v8) = *a5;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v8) = a5[1];
      v6 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v8) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v8) = v6;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051DC0) ----------------------------------------------------
void            sub_140051DC0(int a1)
{
  /* Clean implementation: src/engine/event_player.c, checked against the original executable
     (tools/native-compare/t_playerteam.c). */
  extern void event_update_player(int player);
  event_update_player(a1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051F50) ----------------------------------------------------
__int64            sub_140051F50(signed int a1)
{
  /* Clean implementation: src/engine/event_player.c, checked against the original executable
     (tools/native-compare/t_playerteam.c). No caller uses the result. */
  extern void event_update_player_finance(int player);
  event_update_player_finance(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051FF0) ----------------------------------------------------
void            sub_140051FF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // eax
  __int64 v7; // r10
  unsigned int v8; // xmm0_4

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[308307070];
    v6 = dword_140404A6C[283831474];
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 21;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v7) = a4;
    if ( a5 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v7) = *a5;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v7) = a5[1];
      v8 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v7) = 0;
      v8 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v7) = v8;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140052090) ----------------------------------------------------
__int64 sub_140052090()
{
  float v0; // xmm1_4
  unsigned int v1; // edx
  float v2; // xmm0_4
  __int64 v3; // rcx
  unsigned int v4; // r11d
  int v5; // r8d
  unsigned int v6; // r9d
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v0 = *(float *)&dword_140404A6C[335047074];
    v1 = dword_140404A6C[308307070] + 1;
    v2 = *(float *)&dword_140404A6C[335047062] * 10.0;
    v3 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 13;
    dword_140404A6C[308307070] = v1;
    dword_140404A6C[335047064] = (int)v2;
    dword_140404A6C[335047076] = (int)(float)(v0 * 10.0);
    dword_140404A6C[335047070] = (int)(float)(*(float *)&dword_140404A6C[335047068] * 10.0);
    v4 = (int)v2 + (dword_140404A6C[335047070] << 16);
    v5 = (int)(float)(*(float *)&dword_140404A6C[335047086] * 10.0);
    dword_140404A6C[335047082] = (int)(float)(*(float *)&dword_140404A6C[335047080] * 10.0);
    v6 = dword_140404A6C[335047076] + (dword_140404A6C[335047082] << 16);
    dword_140404A6C[335047088] = v5;
    dword_140404A6C[335047094] = (int)(float)(*(float *)&dword_140404A6C[335047092] * 10.0);
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = dword_140404A6C[283831474];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v3) = v5;
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 19021F0F4: using guessed type unsigned int;
// 19021F12C: using guessed type unsigned int;

//----- (00000001400F52D0) ----------------------------------------------------
__int64            sub_1400F52D0(unsigned int a1)
{
  int v1; // r14d
  __int64 v2; // rbx
  unsigned int v3; // ebp
  unsigned int v4; // eax
  __int64 v5; // rsi
  signed int v6; // ecx
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F52D0[304];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400F52D0 + 0)) /* [rsp+0h] */
#define Src (*(__m128i (*)[16])(void *)(sr_frame_1400F52D0 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1400F52D0 + 288)) /* [rsp+120h] */

  if ( a1 <= 0xFF )
  {
    v1 = (signed int)dword_140404A6C[284022316] / 3;
    sub_140158AB0(Src, "%s has died", (     char *)&dword_140404A6C[3597 * a1 + 71856254]);
    if ( dword_140404A6C[456202453] )
    {
      v2 = -1;
      do
        ++v2;
      while ( SR_VEC_LANES(128, Src[0], i8)[v2] );
      v3 = dword_140404A6C[308307070];
      if ( (int)v2 > 63 )
        LODWORD(v2) = 63;
      v4 = dword_140404A6C[283831474];
      v5 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
      sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v5), Src, (int)v2);
      *((_BYTE *)&dword_140404A6C[297756301] + v5 + (int)v2) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = v2;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v5) = 3;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v5) = -1;
      dword_140404A6C[308307070] = v3 + 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v5) = 0;
      HIWORD(dword_140404A6C[308307070]) = 0;
    }
    v6 = dword_140404A6C[283831450];
    if ( (int)dword_140404A6C[283831450] <= 50400 )
    {
      if ( v1 > 0 )
        v6 = 18000 / v1 + dword_140404A6C[283831450];
      if ( v6 > 50400 )
        v6 = 50400;
      dword_140404A6C[283831450] = v6;
    }
    return 0; /* the function has no caller */
  }
  return result;
}
#undef v8
#undef Src
#undef v10

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCD4: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

