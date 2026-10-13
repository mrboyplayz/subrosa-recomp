#include "shared_client.h"


//----- (000000014003C6F0) ----------------------------------------------------
__int64            sub_14003C6F0(_BYTE *a1)
{
  int v1; // edx
  unsigned int v2; // r11d
  int v3; // r9d
  _BYTE *v4; // r8

  v1 = dword_140404A6C[293250413];
  v2 = 0;
  v3 = 0;
  if ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] )
  {
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 != *((_BYTE *)&dword_140404A6C[293250415] + v1) )
        break;
      ++v3;
      ++v1;
      ++v4;
    }
    while ( v1 < (int)dword_140404A6C[293250414] );
  }
  LOBYTE(v2) = a1[v3] == 0;
  return v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848D4: using guessed type unsigned int;
// 151A848D8: using guessed type unsigned int;
// 151A848DC: using guessed type unsigned int;
// 151A848E0: using guessed type unsigned int;
// 151A848E8: using guessed type unsigned int;
// 151A848F0: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (000000014006C870) ----------------------------------------------------
__int64            sub_14006C870(_BYTE *a1)
{
  int v1; // edx
  unsigned int v2; // r11d
  int v3; // r9d
  _BYTE *v4; // r8

  v1 = dword_140404A6C[129454557];
  v2 = 0;
  v3 = 0;
  if ( (int)dword_140404A6C[129454557] < (int)dword_140404A6C[129454558] )
  {
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 != *((_BYTE *)&dword_140404A6C[129454559] + v1) )
        break;
      ++v3;
      ++v1;
      ++v4;
    }
    while ( v1 < (int)dword_140404A6C[129454558] );
  }
  LOBYTE(v2) = a1[v3] == 0;
  return v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;

//----- (000000014006E4C0) ----------------------------------------------------
_BOOL8            sub_14006E4C0(_BYTE *a1)
{
  signed int v1; // ebx
  signed int i; // esi
  __int64 v4; // rax

  v1 = dword_140404A6C[129454557];
  for ( i = dword_140404A6C[129454558]; v1 < i; dword_140404A6C[129454557] = ++v1 )
  {
    if ( (unsigned int)sub_14006C870(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  dword_140404A6C[129454557] = v4 + v1;
  return (int)v4 + v1 < i;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;
// 15F1D91E4: using guessed type unsigned int;

//----- (0000000140091DF0) ----------------------------------------------------
_BOOL8            sub_140091DF0(_BYTE *a1)
{
  signed int v1; // ebx
  signed int i; // esi
  __int64 v4; // rax

  v1 = dword_140404A6C[293250413];
  for ( i = dword_140404A6C[293250414]; v1 < i; dword_140404A6C[293250413] = ++v1 )
  {
    if ( (unsigned int)sub_14003C6F0(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  dword_140404A6C[293250413] = v4 + v1;
  return (int)v4 + v1 < i;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;

//----- (000000014009E950) ----------------------------------------------------
float            sub_14009E950(__int64 a1, __int64 a2, double a3)
{
  int i; // ecx
  char v4; // dl
  int v5; // r9d
  __int64 v6; // rdx
  char v7; // cl
  float v9; // [rsp+30h] [rbp+8h]

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( v4 != 47 && v4 > 44 && v4 < 58 )
      break;
  }
  v5 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v6 = 0;
    do
    {
      if ( v6 >= 255 )
        break;
      v7 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v7 - 48) > 9u && (unsigned __int8)(v7 - 45) > 1u )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v6) = v7;
      ++v5;
      ++v6;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v5) = 0;
  sub_14015B070((__int64)&dword_140404A6C[293512559], "%f", a3);
  return v9;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (00000001400A3D70) ----------------------------------------------------
__int64 sub_1400A3D70()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v1 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v3) = v4;
      ++v2;
      ++v3;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v2) = 0;
  sub_14015B070((__int64)&dword_140404A6C[293512559], "%d", &v6);
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (00000001400EA7C0) ----------------------------------------------------
void            sub_1400EA7C0(int a1)
{
  int v1; // r10d
  signed int i; // edx
  __int64 v3; // r8
  int v4; // ecx
  char v5; // r9
  unsigned int v6; // eax
  signed int v7; // r10d
  __int64 v8; // r8
  signed int v9; // ecx
  char v10; // r9
  unsigned int v11; // eax
  signed int v12; // r10d
  __int64 v13; // r8
  signed int v14; // eax
  char v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx

  if ( a1 )
  {
    v16 = sub_14020B8D8("debugconfig.txt", "wb");
    v17 = v16;
    if ( v16 )
    {
      sub_1400920F0(v16, "%s%d\r\n", "startposition0=", dword_140404A6C[179992048]);
      sub_1400920F0(v17, "%s%d\r\n", "startposition1=", dword_140404A6C[179992049]);
      sub_1400920F0(v17, "%s%d\r\n", "startposition2=", dword_140404A6C[179992050]);
      sub_14020B9E8(v17);
    }
  }
  else
  {
    dword_140404A6C[179992048] = 1508;
    dword_140404A6C[179992049] = 62;
    dword_140404A6C[179992050] = 1472;
    sub_1400ED940("debugconfig.txt");
    v1 = dword_140404A6C[293250413];
    for ( i = dword_140404A6C[293250414]; v1 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v1 )
    {
      v3 = 0;
      if ( v1 < (int)dword_140404A6C[293250414] )
      {
        v4 = v1;
        do
        {
          v5 = sr_mem_140273b60[v3];
          if ( !v5 )
            break;
          if ( v5 != *((_BYTE *)&dword_140404A6C[293250415] + v4) )
            break;
          ++v4;
          ++v3;
        }
        while ( v4 < (int)dword_140404A6C[293250414] );
      }
      if ( !sr_mem_140273b60[v3] )
        break;
    }
    dword_140404A6C[293250413] = v1 + 15;
    if ( v1 + 15 < (int)dword_140404A6C[293250414] )
    {
      v6 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[179992048] = v6;
    }
    v7 = 0;
    for ( dword_140404A6C[293250413] = 0; v7 < i; dword_140404A6C[293250413] = ++v7 )
    {
      v8 = 0;
      if ( v7 < i )
      {
        v9 = v7;
        do
        {
          v10 = sr_mem_140273b70[v8];
          if ( !v10 )
            break;
          if ( v10 != *((_BYTE *)&dword_140404A6C[293250415] + v9) )
            break;
          ++v9;
          ++v8;
        }
        while ( v9 < i );
      }
      if ( !sr_mem_140273b70[v8] )
        break;
    }
    dword_140404A6C[293250413] = v7 + 15;
    if ( v7 + 15 < i )
    {
      v11 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[179992049] = v11;
    }
    v12 = 0;
    for ( dword_140404A6C[293250413] = 0; v12 < i; dword_140404A6C[293250413] = ++v12 )
    {
      v13 = 0;
      if ( v12 < i )
      {
        v14 = v12;
        do
        {
          v15 = sr_mem_140273b80[v13];
          if ( !v15 )
            break;
          if ( v15 != *((_BYTE *)&dword_140404A6C[293250415] + v14) )
            break;
          ++v14;
          ++v13;
        }
        while ( v14 < i );
      }
      if ( !sr_mem_140273b80[v13] )
        break;
    }
    dword_140404A6C[293250413] = v12 + 15;
    if ( v12 + 15 < i )
      dword_140404A6C[179992050] = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A222C: using guessed type unsigned int;
// 16B2A2230: using guessed type unsigned int;
// 16B2A2234: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;

//----- (00000001400EC410) ----------------------------------------------------
double            sub_1400EC410(int a1)
{
  __m128i si128; // xmm0
  int v3; // r10d
  signed int v4; // edx
  __int64 i; // rbx
  __int64 v6; // r8
  int v7; // ecx
  char v8; // r9
  unsigned int v9; // eax
  signed int v10; // r10d
  __int64 v11; // r8
  signed int v12; // ecx
  char v13; // r9
  unsigned int v14; // eax
  signed int v15; // r10d
  __int64 v16; // r8
  signed int v17; // ecx
  char v18; // r9
  unsigned int v19; // eax
  signed int v20; // r10d
  __int64 v21; // r8
  signed int v22; // ecx
  char v23; // r9
  unsigned int v24; // eax
  signed int v25; // r10d
  __int64 v26; // r8
  signed int v27; // eax
  char v28; // r9
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // eax

  if ( a1 )
  {
    v30 = sub_14020B8D8("config_round.txt", "wb");
    i = v30;
    if ( !v30 )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(v30, "%s%d\r\n", "roundtime=", dword_140404A6C[284022480]);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", dword_140404A6C[284022481]);
    sub_1400920F0(i, "%s%d\r\n", "weekly=", dword_140404A6C[284022482]);
    sub_1400920F0(i, "%s%d\r\n", "bonusratio=", dword_140404A6C[284022483]);
    sub_1400920F0(i, "%s%d\r\n", "teamdamage=", dword_140404A6C[284022484]);
    v29 = dword_140404A6C[284022484];
  }
  else
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140278EC0);
    *(__m128i *)&dword_140404A6C[284022480] = si128;
    dword_140404A6C[284022484] = 50;
    sub_1400ED940("config_round.txt");
    v3 = dword_140404A6C[293250413];
    v4 = dword_140404A6C[293250414];
    for ( i = 0; v3 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v3 )
    {
      v6 = 0;
      if ( v3 < (int)dword_140404A6C[293250414] )
      {
        v7 = v3;
        do
        {
          v8 = sr_mem_140276c18[v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&dword_140404A6C[293250415] + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)dword_140404A6C[293250414] );
      }
      if ( !sr_mem_140276c18[v6] )
        break;
    }
    dword_140404A6C[293250413] = v3 + 10;
    if ( v3 + 10 < (int)dword_140404A6C[293250414] )
    {
      v9 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022480] = v9;
    }
    v10 = 0;
    for ( dword_140404A6C[293250413] = 0; v10 < v4; dword_140404A6C[293250413] = ++v10 )
    {
      v11 = 0;
      if ( v10 < v4 )
      {
        v12 = v10;
        do
        {
          v13 = sr_mem_140276e60[v11];
          if ( !v13 )
            break;
          if ( v13 != *((_BYTE *)&dword_140404A6C[293250415] + v12) )
            break;
          ++v12;
          ++v11;
        }
        while ( v12 < v4 );
      }
      if ( !sr_mem_140276e60[v11] )
        break;
    }
    dword_140404A6C[293250413] = v10 + 10;
    if ( v10 + 10 < v4 )
    {
      v14 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022481] = v14;
    }
    v15 = 0;
    for ( dword_140404A6C[293250413] = 0; v15 < v4; dword_140404A6C[293250413] = ++v15 )
    {
      v16 = 0;
      if ( v15 < v4 )
      {
        v17 = v15;
        do
        {
          v18 = sr_mem_140276eb8[v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&dword_140404A6C[293250415] + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !sr_mem_140276eb8[v16] )
        break;
    }
    dword_140404A6C[293250413] = v15 + 7;
    if ( v15 + 7 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022482] = v19;
    }
    v20 = 0;
    for ( dword_140404A6C[293250413] = 0; v20 < v4; dword_140404A6C[293250413] = ++v20 )
    {
      v21 = 0;
      if ( v20 < v4 )
      {
        v22 = v20;
        do
        {
          v23 = sr_mem_140276ec0[v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&dword_140404A6C[293250415] + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !sr_mem_140276ec0[v21] )
        break;
    }
    dword_140404A6C[293250413] = v20 + 11;
    if ( v20 + 11 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022483] = v24;
    }
    v25 = 0;
    for ( dword_140404A6C[293250413] = 0; v25 < v4; dword_140404A6C[293250413] = ++v25 )
    {
      v26 = 0;
      if ( v25 < v4 )
      {
        v27 = v25;
        do
        {
          v28 = sr_mem_140276ed0[v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&dword_140404A6C[293250415] + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !sr_mem_140276ed0[v26] )
        break;
    }
    dword_140404A6C[293250413] = v25 + 11;
    if ( v25 + 11 >= v4 )
      v29 = dword_140404A6C[284022484];
    else
      v29 = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  if ( (int)dword_140404A6C[284022480] >= 1 )
  {
    v31 = dword_140404A6C[284022480];
    if ( (int)dword_140404A6C[284022480] > 60 )
      v31 = 60;
    dword_140404A6C[284022480] = v31;
  }
  else
  {
    dword_140404A6C[284022480] = 1;
  }
  if ( v29 >= 0 )
  {
    if ( v29 > 200 )
      v29 = 200;
    dword_140404A6C[284022484] = v29;
  }
  else
  {
    dword_140404A6C[284022484] = 0;
  }
  if ( a1 )
    sub_14020B9E8(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

// 1400EC7D0: variable 'si128' is possibly undefined
// 140278EC0: using guessed type __int128 xmmword_140278EC0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7A5AC: using guessed type unsigned int;
// 183F7A5B0: using guessed type unsigned int;
// 183F7A5B4: using guessed type unsigned int;
// 183F7A5B8: using guessed type unsigned int;
// 183F7A5BC: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;

//----- (00000001400EC7E0) ----------------------------------------------------
double            sub_1400EC7E0(int a1)
{
  __m128i si128; // xmm0
  int v3; // r10d
  signed int v4; // edx
  __int64 i; // rbx
  __int64 v6; // r8
  int v7; // ecx
  char v8; // r9
  unsigned int v9; // eax
  signed int v10; // r10d
  __int64 v11; // r8
  signed int v12; // ecx
  char v13; // r9
  unsigned int v14; // eax
  signed int v15; // r10d
  __int64 v16; // r8
  signed int v17; // ecx
  char v18; // r9
  unsigned int v19; // eax
  signed int v20; // r10d
  __int64 v21; // r8
  signed int v22; // ecx
  char v23; // r9
  unsigned int v24; // eax
  signed int v25; // r10d
  __int64 v26; // r8
  signed int v27; // ecx
  char v28; // r9
  unsigned int v29; // eax
  signed int v30; // r10d
  __int64 v31; // r8
  signed int v32; // eax
  char v33; // r9
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // eax

  if ( a1 )
  {
    v34 = sub_14020B8D8("config_versus.txt", "wb");
    i = v34;
    if ( !v34 )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(v34, "%s%d\r\n", "allowrespawn=", dword_140404A6C[284022499]);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", dword_140404A6C[284022500]);
    sub_1400920F0(i, "%s%d\r\n", "roundtime=", dword_140404A6C[284022501]);
    sub_1400920F0(i, "%s%d\r\n", "movedelay=", dword_140404A6C[284022502]);
    sub_1400920F0(i, "%s%d\r\n", "bonusratio=", dword_140404A6C[284022503]);
    sub_1400920F0(i, "%s%d\r\n", "teamdamage=", dword_140404A6C[284022504]);
  }
  else
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140278E10);
    strcpy((char *)&dword_140404A6C[284022506], "versus");
    *(_QWORD *)&dword_140404A6C[284022522] = 0x32737573726576LL;
    _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[284022499], si128);
    dword_140404A6C[284022503] = 1;
    dword_140404A6C[284022504] = 50;
    sub_1400ED940("config_versus.txt");
    v3 = dword_140404A6C[293250413];
    v4 = dword_140404A6C[293250414];
    for ( i = 0; v3 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v3 )
    {
      v6 = 0;
      if ( v3 < (int)dword_140404A6C[293250414] )
      {
        v7 = v3;
        do
        {
          v8 = sr_mem_140276ef8[v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&dword_140404A6C[293250415] + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)dword_140404A6C[293250414] );
      }
      if ( !sr_mem_140276ef8[v6] )
        break;
    }
    dword_140404A6C[293250413] = v3 + 13;
    if ( v3 + 13 < (int)dword_140404A6C[293250414] )
    {
      v9 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022499] = v9;
    }
    v10 = 0;
    for ( dword_140404A6C[293250413] = 0; v10 < v4; dword_140404A6C[293250413] = ++v10 )
    {
      v11 = 0;
      if ( v10 < v4 )
      {
        v12 = v10;
        do
        {
          v13 = sr_mem_140276e60[v11];
          if ( !v13 )
            break;
          if ( v13 != *((_BYTE *)&dword_140404A6C[293250415] + v12) )
            break;
          ++v12;
          ++v11;
        }
        while ( v12 < v4 );
      }
      if ( !sr_mem_140276e60[v11] )
        break;
    }
    dword_140404A6C[293250413] = v10 + 10;
    if ( v10 + 10 < v4 )
    {
      v14 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022500] = v14;
    }
    v15 = 0;
    for ( dword_140404A6C[293250413] = 0; v15 < v4; dword_140404A6C[293250413] = ++v15 )
    {
      v16 = 0;
      if ( v15 < v4 )
      {
        v17 = v15;
        do
        {
          v18 = sr_mem_140276c18[v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&dword_140404A6C[293250415] + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !sr_mem_140276c18[v16] )
        break;
    }
    dword_140404A6C[293250413] = v15 + 10;
    if ( v15 + 10 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022501] = v19;
    }
    v20 = 0;
    for ( dword_140404A6C[293250413] = 0; v20 < v4; dword_140404A6C[293250413] = ++v20 )
    {
      v21 = 0;
      if ( v20 < v4 )
      {
        v22 = v20;
        do
        {
          v23 = sr_mem_140276f08[v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&dword_140404A6C[293250415] + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !sr_mem_140276f08[v21] )
        break;
    }
    dword_140404A6C[293250413] = v20 + 10;
    if ( v20 + 10 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022502] = v24;
    }
    v25 = 0;
    for ( dword_140404A6C[293250413] = 0; v25 < v4; dword_140404A6C[293250413] = ++v25 )
    {
      v26 = 0;
      if ( v25 < v4 )
      {
        v27 = v25;
        do
        {
          v28 = sr_mem_140276ec0[v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&dword_140404A6C[293250415] + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !sr_mem_140276ec0[v26] )
        break;
    }
    dword_140404A6C[293250413] = v25 + 11;
    if ( v25 + 11 < v4 )
    {
      v29 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022503] = v29;
    }
    v30 = 0;
    for ( dword_140404A6C[293250413] = 0; v30 < v4; dword_140404A6C[293250413] = ++v30 )
    {
      v31 = 0;
      if ( v30 < v4 )
      {
        v32 = v30;
        do
        {
          v33 = sr_mem_140276ed0[v31];
          if ( !v33 )
            break;
          if ( v33 != *((_BYTE *)&dword_140404A6C[293250415] + v32) )
            break;
          ++v32;
          ++v31;
        }
        while ( v32 < v4 );
      }
      if ( !sr_mem_140276ed0[v31] )
        break;
    }
    dword_140404A6C[293250413] = v30 + 11;
    if ( v30 + 11 < v4 )
      dword_140404A6C[284022504] = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  sub_14010E0D0((char *)&dword_140404A6C[284022506], "map01=", 30, i, a1);
  sub_14010E0D0((char *)&dword_140404A6C[284022522], "map02=", 30, i, a1);
  sub_14010E0D0((char *)&dword_140404A6C[284022538], "map03=", 30, i, a1);
  sub_14010E0D0((char *)&dword_140404A6C[284022554], "map04=", 30, i, a1);
  sub_14010E0D0((char *)&dword_140404A6C[284022570], "map05=", 30, i, a1);
  sub_14010E0D0((char *)&dword_140404A6C[284022586], "map06=", 30, i, a1);
  sub_14010E0D0((char *)&dword_140404A6C[284022602], "map07=", 30, i, a1);
  sub_14010E0D0((char *)&dword_140404A6C[284022618], "map08=", 30, i, a1);
  v35 = dword_140404A6C[284022501];
  if ( (int)dword_140404A6C[284022501] >= 1 )
  {
    if ( (int)dword_140404A6C[284022501] > 60 )
      v35 = 60;
    dword_140404A6C[284022501] = v35;
  }
  else
  {
    dword_140404A6C[284022501] = 1;
  }
  v36 = dword_140404A6C[284022504];
  if ( (dword_140404A6C[284022504] & 0x80000000) == 0 )
  {
    if ( (int)dword_140404A6C[284022504] > 200 )
      v36 = 200;
    dword_140404A6C[284022504] = v36;
  }
  else
  {
    dword_140404A6C[284022504] = 0;
  }
  if ( a1 )
    sub_14020B9E8(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

// 1400ECD5F: variable 'si128' is possibly undefined
// 140278E10: using guessed type __int128 xmmword_140278E10;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7A5F8: using guessed type unsigned int;
// 183F7A5FC: using guessed type unsigned int;
// 183F7A600: using guessed type unsigned int;
// 183F7A604: using guessed type unsigned int;
// 183F7A608: using guessed type unsigned int;
// 183F7A60C: using guessed type unsigned int;
// 183F7A654: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;

//----- (00000001400ECD70) ----------------------------------------------------
double            sub_1400ECD70(int a1)
{
  __m128i si128; // xmm0
  int v3; // r10d
  signed int v4; // edx
  __int64 i; // rbx
  __int64 v6; // r8
  int v7; // ecx
  char v8; // r9
  unsigned int v9; // eax
  signed int v10; // r10d
  __int64 v11; // r8
  signed int v12; // ecx
  char v13; // r9
  unsigned int v14; // eax
  signed int v15; // r10d
  __int64 v16; // r8
  signed int v17; // ecx
  char v18; // r9
  unsigned int v19; // eax
  signed int v20; // r10d
  __int64 v21; // r8
  signed int v22; // ecx
  char v23; // r9
  unsigned int v24; // eax
  signed int v25; // r10d
  __int64 v26; // r8
  signed int v27; // ecx
  char v28; // r9
  unsigned int v29; // eax
  signed int v30; // r10d
  __int64 v31; // r8
  signed int v32; // ecx
  char v33; // r9
  unsigned int v34; // eax
  signed int v35; // r10d
  __int64 v36; // r8
  signed int v37; // ecx
  char v38; // r9
  unsigned int v39; // eax
  signed int v40; // r10d
  __int64 v41; // r8
  signed int v42; // ecx
  char v43; // r9
  unsigned int v44; // eax
  signed int v45; // r10d
  __int64 v46; // r8
  signed int v47; // ecx
  char v48; // r9
  unsigned int v49; // eax
  signed int v50; // r10d
  __int64 v51; // r8
  signed int v52; // ecx
  char v53; // r9
  unsigned int v54; // eax
  signed int v55; // r10d
  __int64 v56; // r8
  signed int v57; // ecx
  char v58; // r9
  unsigned int v59; // eax
  signed int v60; // r10d
  __int64 v61; // r8
  signed int v62; // ecx
  char v63; // r9
  unsigned int v64; // eax
  signed int v65; // r10d
  __int64 v66; // r8
  signed int v67; // ecx
  char v68; // r9
  unsigned int v69; // eax
  signed int v70; // r10d
  __int64 v71; // r8
  signed int v72; // eax
  char v73; // r9
  __int64 v74; // rax
  unsigned int v75; // eax
  unsigned int v76; // eax

  if ( a1 )
  {
    v74 = sub_14020B8D8("config_world.txt", "wb");
    i = v74;
    if ( !v74 )
      return *(double *)SR_VEC_LANES(128, si128, i64);
    sub_1400920F0(v74, "%s%d\r\n", "traffic=", dword_140404A6C[284022485]);
    sub_1400920F0(i, "%s%d\r\n", "crimecivciv=", dword_140404A6C[284022486]);
    sub_1400920F0(i, "%s%d\r\n", "crimecivteam=", dword_140404A6C[284022487]);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamciv=", dword_140404A6C[284022488]);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamteam=", dword_140404A6C[284022489]);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamteaminbase=", dword_140404A6C[284022490]);
    sub_1400920F0(i, "%s%d\r\n", "crimevscriminal=", dword_140404A6C[284022491]);
    sub_1400920F0(i, "%s%d\r\n", "crimenobuy=", dword_140404A6C[284022492]);
    sub_1400920F0(i, "%s%d\r\n", "crimenospawn=", dword_140404A6C[284022493]);
    sub_1400920F0(i, "%s%d\r\n", "crimekick=", dword_140404A6C[284022494]);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", dword_140404A6C[284022495]);
    sub_1400920F0(i, "%s%d\r\n", "mincash=", dword_140404A6C[284022496]);
    sub_1400920F0(i, "%s%d\r\n", "showjoinexit=", dword_140404A6C[284022497]);
    sub_1400920F0(i, "%s%d\r\n", "respawnteam=", dword_140404A6C[284022498]);
  }
  else
  {
    _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[284022485], _mm_load_si128((     __m128i *)&xmmword_1402790F0));
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279190);
    _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[284022493], si128);
    *(_QWORD *)&dword_140404A6C[284022497] = 1;
    _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[284022489], _mm_load_si128((     __m128i *)&xmmword_140279180));
    sub_1400ED940("config_world.txt");
    v3 = dword_140404A6C[293250413];
    v4 = dword_140404A6C[293250414];
    for ( i = 0; v3 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v3 )
    {
      v6 = 0;
      if ( v3 < (int)dword_140404A6C[293250414] )
      {
        v7 = v3;
        do
        {
          v8 = sr_mem_140276db0[v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&dword_140404A6C[293250415] + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)dword_140404A6C[293250414] );
      }
      if ( !sr_mem_140276db0[v6] )
        break;
    }
    dword_140404A6C[293250413] = v3 + 8;
    if ( v3 + 8 < (int)dword_140404A6C[293250414] )
    {
      v9 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022485] = v9;
    }
    v10 = 0;
    for ( dword_140404A6C[293250413] = 0; v10 < v4; dword_140404A6C[293250413] = ++v10 )
    {
      v11 = 0;
      if ( v10 < v4 )
      {
        v12 = v10;
        do
        {
          v13 = sr_mem_140276dc0[v11];
          if ( !v13 )
            break;
          if ( v13 != *((_BYTE *)&dword_140404A6C[293250415] + v12) )
            break;
          ++v12;
          ++v11;
        }
        while ( v12 < v4 );
      }
      if ( !sr_mem_140276dc0[v11] )
        break;
    }
    dword_140404A6C[293250413] = v10 + 12;
    if ( v10 + 12 < v4 )
    {
      v14 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022486] = v14;
    }
    v15 = 0;
    for ( dword_140404A6C[293250413] = 0; v15 < v4; dword_140404A6C[293250413] = ++v15 )
    {
      v16 = 0;
      if ( v15 < v4 )
      {
        v17 = v15;
        do
        {
          v18 = sr_mem_140276dd0[v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&dword_140404A6C[293250415] + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !sr_mem_140276dd0[v16] )
        break;
    }
    dword_140404A6C[293250413] = v15 + 13;
    if ( v15 + 13 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022487] = v19;
    }
    v20 = 0;
    for ( dword_140404A6C[293250413] = 0; v20 < v4; dword_140404A6C[293250413] = ++v20 )
    {
      v21 = 0;
      if ( v20 < v4 )
      {
        v22 = v20;
        do
        {
          v23 = sr_mem_140276de0[v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&dword_140404A6C[293250415] + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !sr_mem_140276de0[v21] )
        break;
    }
    dword_140404A6C[293250413] = v20 + 13;
    if ( v20 + 13 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022488] = v24;
    }
    v25 = 0;
    for ( dword_140404A6C[293250413] = 0; v25 < v4; dword_140404A6C[293250413] = ++v25 )
    {
      v26 = 0;
      if ( v25 < v4 )
      {
        v27 = v25;
        do
        {
          v28 = sr_mem_140276df0[v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&dword_140404A6C[293250415] + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !sr_mem_140276df0[v26] )
        break;
    }
    dword_140404A6C[293250413] = v25 + 14;
    if ( v25 + 14 < v4 )
    {
      v29 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022489] = v29;
    }
    v30 = 0;
    for ( dword_140404A6C[293250413] = 0; v30 < v4; dword_140404A6C[293250413] = ++v30 )
    {
      v31 = 0;
      if ( v30 < v4 )
      {
        v32 = v30;
        do
        {
          v33 = sr_mem_140276e00[v31];
          if ( !v33 )
            break;
          if ( v33 != *((_BYTE *)&dword_140404A6C[293250415] + v32) )
            break;
          ++v32;
          ++v31;
        }
        while ( v32 < v4 );
      }
      if ( !sr_mem_140276e00[v31] )
        break;
    }
    dword_140404A6C[293250413] = v30 + 20;
    if ( v30 + 20 < v4 )
    {
      v34 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022490] = v34;
    }
    v35 = 0;
    for ( dword_140404A6C[293250413] = 0; v35 < v4; dword_140404A6C[293250413] = ++v35 )
    {
      v36 = 0;
      if ( v35 < v4 )
      {
        v37 = v35;
        do
        {
          v38 = sr_mem_140276e18[v36];
          if ( !v38 )
            break;
          if ( v38 != *((_BYTE *)&dword_140404A6C[293250415] + v37) )
            break;
          ++v37;
          ++v36;
        }
        while ( v37 < v4 );
      }
      if ( !sr_mem_140276e18[v36] )
        break;
    }
    dword_140404A6C[293250413] = v35 + 16;
    if ( v35 + 16 < v4 )
    {
      v39 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022491] = v39;
    }
    v40 = 0;
    for ( dword_140404A6C[293250413] = 0; v40 < v4; dword_140404A6C[293250413] = ++v40 )
    {
      v41 = 0;
      if ( v40 < v4 )
      {
        v42 = v40;
        do
        {
          v43 = sr_mem_140276e30[v41];
          if ( !v43 )
            break;
          if ( v43 != *((_BYTE *)&dword_140404A6C[293250415] + v42) )
            break;
          ++v42;
          ++v41;
        }
        while ( v42 < v4 );
      }
      if ( !sr_mem_140276e30[v41] )
        break;
    }
    dword_140404A6C[293250413] = v40 + 11;
    if ( v40 + 11 < v4 )
    {
      v44 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022492] = v44;
    }
    v45 = 0;
    for ( dword_140404A6C[293250413] = 0; v45 < v4; dword_140404A6C[293250413] = ++v45 )
    {
      v46 = 0;
      if ( v45 < v4 )
      {
        v47 = v45;
        do
        {
          v48 = sr_mem_140276e40[v46];
          if ( !v48 )
            break;
          if ( v48 != *((_BYTE *)&dword_140404A6C[293250415] + v47) )
            break;
          ++v47;
          ++v46;
        }
        while ( v47 < v4 );
      }
      if ( !sr_mem_140276e40[v46] )
        break;
    }
    dword_140404A6C[293250413] = v45 + 13;
    if ( v45 + 13 < v4 )
    {
      v49 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022493] = v49;
    }
    v50 = 0;
    for ( dword_140404A6C[293250413] = 0; v50 < v4; dword_140404A6C[293250413] = ++v50 )
    {
      v51 = 0;
      if ( v50 < v4 )
      {
        v52 = v50;
        do
        {
          v53 = sr_mem_140276e50[v51];
          if ( !v53 )
            break;
          if ( v53 != *((_BYTE *)&dword_140404A6C[293250415] + v52) )
            break;
          ++v52;
          ++v51;
        }
        while ( v52 < v4 );
      }
      if ( !sr_mem_140276e50[v51] )
        break;
    }
    dword_140404A6C[293250413] = v50 + 10;
    if ( v50 + 10 < v4 )
    {
      v54 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022494] = v54;
    }
    v55 = 0;
    for ( dword_140404A6C[293250413] = 0; v55 < v4; dword_140404A6C[293250413] = ++v55 )
    {
      v56 = 0;
      if ( v55 < v4 )
      {
        v57 = v55;
        do
        {
          v58 = sr_mem_140276e60[v56];
          if ( !v58 )
            break;
          if ( v58 != *((_BYTE *)&dword_140404A6C[293250415] + v57) )
            break;
          ++v57;
          ++v56;
        }
        while ( v57 < v4 );
      }
      if ( !sr_mem_140276e60[v56] )
        break;
    }
    dword_140404A6C[293250413] = v55 + 10;
    if ( v55 + 10 < v4 )
    {
      v59 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022495] = v59;
    }
    v60 = 0;
    for ( dword_140404A6C[293250413] = 0; v60 < v4; dword_140404A6C[293250413] = ++v60 )
    {
      v61 = 0;
      if ( v60 < v4 )
      {
        v62 = v60;
        do
        {
          v63 = sr_mem_140276e70[v61];
          if ( !v63 )
            break;
          if ( v63 != *((_BYTE *)&dword_140404A6C[293250415] + v62) )
            break;
          ++v62;
          ++v61;
        }
        while ( v62 < v4 );
      }
      if ( !sr_mem_140276e70[v61] )
        break;
    }
    dword_140404A6C[293250413] = v60 + 8;
    if ( v60 + 8 < v4 )
    {
      v64 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022496] = v64;
    }
    v65 = 0;
    for ( dword_140404A6C[293250413] = 0; v65 < v4; dword_140404A6C[293250413] = ++v65 )
    {
      v66 = 0;
      if ( v65 < v4 )
      {
        v67 = v65;
        do
        {
          v68 = sr_mem_140276e80[v66];
          if ( !v68 )
            break;
          if ( v68 != *((_BYTE *)&dword_140404A6C[293250415] + v67) )
            break;
          ++v67;
          ++v66;
        }
        while ( v67 < v4 );
      }
      if ( !sr_mem_140276e80[v66] )
        break;
    }
    dword_140404A6C[293250413] = v65 + 13;
    if ( v65 + 13 < v4 )
    {
      v69 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022497] = v69;
    }
    v70 = 0;
    for ( dword_140404A6C[293250413] = 0; v70 < v4; dword_140404A6C[293250413] = ++v70 )
    {
      v71 = 0;
      if ( v70 < v4 )
      {
        v72 = v70;
        do
        {
          v73 = sr_mem_140276e90[v71];
          if ( !v73 )
            break;
          if ( v73 != *((_BYTE *)&dword_140404A6C[293250415] + v72) )
            break;
          ++v72;
          ++v71;
        }
        while ( v72 < v4 );
      }
      if ( !sr_mem_140276e90[v71] )
        break;
    }
    dword_140404A6C[293250413] = v70 + 12;
    if ( v70 + 12 < v4 )
      dword_140404A6C[284022498] = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  if ( (dword_140404A6C[284022485] & 0x80000000) == 0 )
  {
    v75 = dword_140404A6C[284022485];
    if ( (int)dword_140404A6C[284022485] > 512 )
      v75 = 512;
    dword_140404A6C[284022485] = v75;
  }
  else
  {
    dword_140404A6C[284022485] = 0;
  }
  v76 = dword_140404A6C[284022494];
  if ( (int)dword_140404A6C[284022494] < 1 )
    v76 = 1;
  dword_140404A6C[284022494] = v76;
  if ( a1 )
    sub_14020B9E8(i);
  return *(double *)SR_VEC_LANES(128, si128, i64);
}

// 1400ED678: variable 'si128' is possibly undefined
// 1402790F0: using guessed type __int128 xmmword_1402790F0;
// 140279180: using guessed type __int128 xmmword_140279180;
// 140279190: using guessed type __int128 xmmword_140279190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7A5C0: using guessed type unsigned int;
// 183F7A5C4: using guessed type unsigned int;
// 183F7A5C8: using guessed type unsigned int;
// 183F7A5CC: using guessed type unsigned int;
// 183F7A5D0: using guessed type unsigned int;
// 183F7A5D4: using guessed type unsigned int;
// 183F7A5D8: using guessed type unsigned int;
// 183F7A5DC: using guessed type unsigned int;
// 183F7A5E0: using guessed type unsigned int;
// 183F7A5E4: using guessed type unsigned int;
// 183F7A5E8: using guessed type unsigned int;
// 183F7A5EC: using guessed type unsigned int;
// 183F7A5F0: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;

//----- (00000001400ED690) ----------------------------------------------------
__int64            sub_1400ED690(char *a1)
{
  char *v2; // rax
  FILE *v4; // rsi
  int v5; // edi
  FILE *v6; // rax
  int v7; // eax
  unsigned int *v8; // rbx
  unsigned __int64 v9; // rbx
  __m128i *v10; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400ED690[560];
#define v12 (*(__int64 (*))(void *)(sr_frame_1400ED690 + 0)) /* [rsp+0h] */
#define v13 (*(char (*)[512])(void *)(sr_frame_1400ED690 + 32)) /* [rsp+20h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1400ED690 + 544)) /* [rsp+220h] */

  sub_140158AB0(v13, "%s\r\n", a1);
  v2 = (char *)&dword_140404A6C[71741524] + 3;
  while ( *++v2 != 0 )
    ;
  v4 = (FILE *)strcpy(v2, v13);
  v5 = 0;
  v6 = (FILE *)sub_14020B8D8(a1, "rb");
  if ( v6 )
  {
    v7 = sub_14020BB2C(v6);
    if ( v7 != -1 )
    {
      v8 = &dword_140404A6C[71823477];
      do
      {
        *(_BYTE *)v8 = v7;
        v8 = (unsigned int *)((char *)v8 + 1);
        ++v5;
        v7 = sub_14020BB2C(v4);
      }
      while ( v7 != -1 );
    }
    if ( (unsigned __int64)v5 >= 0x20000 )
      sub_1401F8694();
    *((_BYTE *)&dword_140404A6C[71823477] + v5) = 0;
    sub_14020B9E8((__int64)v4);
    v9 = v5 + 1;
    v10 = (__m128i *)sr_path_malloc(v9);
    sub_1401FC920(v10, (     __m128i *)&dword_140404A6C[71823477], v9);
  }
  return 0; /* the function has no caller */
}
#undef v12
#undef v13
#undef v14

// 14020BB2C: using guessed type __int64 __fastcall sub_14020BB2C(FILE *Stream);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400ED7D0) ----------------------------------------------------
void sub_1400ED7D0()
{
  int i; // r10d
  __int64 v1; // rdx
  int v2; // eax
  char v3; // r8
  int v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  sub_1400ED940("serversteamban.txt");
  for ( dword_140404A6C[134967863] = 0; ; ++dword_140404A6C[134967863] )
  {
    for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
    {
      v1 = 0;
      if ( i < (int)dword_140404A6C[293250414] )
      {
        v2 = i;
        do
        {
          v3 = aSteamban[v1];
          if ( !v3 )
            break;
          if ( v3 != *((_BYTE *)&dword_140404A6C[293250415] + v2) )
            break;
          ++v2;
          ++v1;
        }
        while ( v2 < (int)dword_140404A6C[293250414] );
      }
      if ( !aSteamban[v1] )
        break;
    }
    v4 = i + 9;
    dword_140404A6C[293250413] = i + 9;
    if ( i + 9 >= (int)dword_140404A6C[293250414] )
      break;
    do
    {
      v5 = *((_BYTE *)&dword_140404A6C[293250415] + v4);
      if ( (unsigned __int8)(v5 - 48) <= 9u )
        break;
      if ( v5 == 45 )
        break;
      dword_140404A6C[293250413] = ++v4;
    }
    while ( v4 < (int)dword_140404A6C[293250414] );
    v6 = 0;
    if ( v4 < (int)dword_140404A6C[293250414] )
    {
      do
      {
        if ( v6 >= 255 )
          break;
        v7 = *((_BYTE *)&dword_140404A6C[293250415] + v4);
        if ( (unsigned __int8)(v7 - 48) > 9u && v7 != 45 )
          break;
        *((_BYTE *)&dword_140404A6C[293512559] + v6++) = v7;
        v4 = ++dword_140404A6C[293250413];
      }
      while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
    }
    *((_BYTE *)&dword_140404A6C[293512559] + v6) = 0;
    sub_14015B070((__int64)&dword_140404A6C[293512559], "%I64u", &v8);
    *(_QWORD *)&dword_140404A6C[2 * dword_140404A6C[134967863] + 134967865] = v8;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1606E1348: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;

//----- (00000001400ED940) ----------------------------------------------------
void            sub_1400ED940(char *a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  int i; // eax

  dword_140404A6C[293250414] = 0;
  v1 = (FILE *)sub_14020B8D8(a1, "rb");
  v2 = v1;
  if ( v1 )
  {
    for ( i = sub_14020BB2C(v1); i != -1; i = sub_14020BB2C(v2) )
      *((_BYTE *)&dword_140404A6C[293250415] + (int)dword_140404A6C[293250414]++) = i;
    *((_BYTE *)&dword_140404A6C[293250415] + (int)dword_140404A6C[293250414]) = 0;
    sub_14020B9E8((__int64)v2);
  }
  dword_140404A6C[293250413] = 0;
}

// 14020BB2C: using guessed type __int64 __fastcall sub_14020BB2C(FILE *Stream);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;

//----- (00000001401063E0) ----------------------------------------------------
unsigned int *sub_1401063E0()
{
  signed int v0; // r9d
  signed int v1; // ecx
  signed int v2; // eax
  unsigned int *v3; // r10
  __int64 v4; // rdx
  char v5; // r8
  char v6; // dl
  int v7; // esi
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edi
  __m128i si128; // xmm4
  __int64 v12; // rcx
  unsigned int *v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm3
  unsigned int *v24; // rdx
  unsigned int *v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  int v28; // r14d
  unsigned int *result; // rax
  unsigned int *v30; // rbp
  char *v31; // rcx
  bool v32; // zf
  unsigned int *v33; // rdx
  unsigned int *v34; // rcx
  char v35; // al
  int v36; // ebx
  int v37; // r10d
  __int64 v38; // rdx
       char *v39; // r9
  char *v40; // rdx

  sub_1400ED940("readme.txt");
  v0 = dword_140404A6C[293250414];
  v1 = dword_140404A6C[293250413];
  v2 = 0;
  dword_140404A6C[283720109] = 0;
  do
  {
    if ( v1 >= v0 )
      break;
    v3 = &dword_140404A6C[64 * (__int64)v2 + 283720110];
    v4 = 0;
    do
    {
      if ( v4 >= 123 )
        break;
      v5 = *((_BYTE *)&dword_140404A6C[293250415] + v1);
      if ( v5 == 13 )
        break;
      if ( v5 == 10 )
        break;
      ++v1;
      *((_BYTE *)v3 + v4++) = v5;
      dword_140404A6C[293250413] = v1;
    }
    while ( v1 < v0 );
    for ( *((_BYTE *)v3 + v4) = 0; v1 < v0; dword_140404A6C[293250413] = ++v1 )
    {
      v6 = *((_BYTE *)&dword_140404A6C[293250415] + v1);
      if ( v6 != 13 && v6 != 10 )
        break;
    }
    v2 = dword_140404A6C[283720109] + 1;
    dword_140404A6C[283720109] = v2;
  }
  while ( v2 < 1022 );
  v7 = dword_140404A6C[134050358];
  v8 = 0;
  dword_140404A6C[436668493] = dword_140404A6C[134050358];
  LOBYTE(dword_140404A6C[64 * (__int64)v2 + 283720110]) = 0;
  v9 = (__int64)(int)++dword_140404A6C[283720109] << 8;
  *(_QWORD *)((char *)&dword_140404A6C[283720110] + v9) = 0x6C20303120706F54LL;
  *(unsigned int *)((char *)&dword_140404A6C[283720112] + v9) = 7631721;
  v10 = ++dword_140404A6C[283720109];
  if ( v7 >= 8 )
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
    v12 = 0;
    v13 = &dword_140404A6C[134050430];
    do
    {
      v14 = _mm_cvtsi32_si128(v13[28]);
      v8 += 8;
      v15 = _mm_cvtsi32_si128(*(v13 - 28));
      v16 = _mm_cvtsi32_si128(*v13);
      v17 = _mm_cvtsi32_si128(*(v13 - 56));
      v13 += 224;
      v18 = _mm_unpacklo_epi32(v16, v14);
      v19 = _mm_cvtsi32_si128(*(v13 - 84));
      v20 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v17, v15), v18);
      v21 = _mm_cvtsi32_si128(*(v13 - 112));
      v22 = _mm_sub_epi32(si128, v20);
      v23 = _mm_cvtsi32_si128(*(v13 - 168));
      *(__m128i *)&dword_140404A6C[v12 + 437192782] = v22;
      *(__m128i *)&dword_140404A6C[v12 + 437192786] = _mm_sub_epi32(
                                                        si128,
                                                        _mm_unpacklo_epi64(
                                                          _mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(*(v13 - 140))),
                                                          _mm_unpacklo_epi32(v21, v19)));
      v12 += 8;
    }
    while ( v12 < v7 - (v7 & 7) );
  }
  if ( v8 < v7 )
  {
    v24 = &dword_140404A6C[v8 + 437192782];
    v25 = &dword_140404A6C[28 * v8 + 134050374];
    v26 = (unsigned int)(v7 - v8);
    do
    {
      ++v24;
      v27 = -1879048193 - *v25;
      v25 += 28;
      *(v24 - 1) = v27;
      --v26;
    }
    while ( v26 );
  }
  sub_14007D710();
  v28 = 0;
  result = &dword_140404A6C[436668504];
  v30 = &dword_140404A6C[436668494];
  do
  {
    if ( v28 < v7 )
    {
      sub_140158AB0(
        &dword_140404A6C[18601677],
        "%d. %s   $",
        v28 + 1,
        (     char *)&dword_140404A6C[28 * *v30 + 134050365]);
      sub_140158B10(&dword_140404A6C[18601805], dword_140404A6C[28 * *v30 + 134050374]);
      v31 = (char *)&dword_140404A6C[18601676] + 3;
      do
        v32 = *++v31 == 0;
      while ( !v32 );
      strcpy(v31, (     char *)&dword_140404A6C[18601805]);
      v33 = &dword_140404A6C[18601677];
      v34 = &dword_140404A6C[64 * (__int64)(int)dword_140404A6C[283720109] + 283720110];
      do
      {
        v35 = *(_BYTE *)v33;
        v33 = (unsigned int *)((char *)v33 + 1);
        *(_BYTE *)v34 = v35;
        v34 = (unsigned int *)((char *)v34 + 1);
      }
      while ( v35 );
      result = &dword_140404A6C[436668504];
      v7 = dword_140404A6C[134050358];
      v10 = ++dword_140404A6C[283720109];
    }
    ++v28;
    ++v30;
  }
  while ( (__int64)v30 < (__int64)&dword_140404A6C[436668504] );
  v36 = 0;
  LOBYTE(dword_140404A6C[283785646]) = 0;
  v37 = 0;
  if ( v10 > 0 )
  {
    result = nullptr;
    do
    {
      v38 = -1;
      v39 = (     char *)&dword_140404A6C[64 * (__int64)v37 + 283720110];
      do
        ++v38;
      while ( v39[v38] );
      if ( (unsigned __int64)(v36 + v38) < 0x3FE )
      {
        v40 = (char *)&dword_140404A6C[283785645] + 3;
        do
          v32 = *++v40 == 0;
        while ( !v32 );
        strcpy(v40, v39);
        for ( ; (__int64)result < 1022; result = (unsigned int *)((char *)result + 1) )
        {
          if ( !*((_BYTE *)&dword_140404A6C[283785646] + (_QWORD)result) )
            break;
          ++v36;
        }
        *((_BYTE *)&dword_140404A6C[283785646] + (_QWORD)result) = 10;
        ++v36;
        result = (unsigned int *)((char *)result + 1);
        *((_BYTE *)&dword_140404A6C[283785646] + (_QWORD)result) = 0;
        v10 = dword_140404A6C[283720109];
      }
      ++v37;
    }
    while ( v37 < v10 );
  }
  return result;
}

// 14010653D: conditional instruction was optimized away because esi.4>=8
// 140106537: mask 0x80000007 is shortened because esi.4 <= 0x7FFFFFFF
// 140279890: using guessed type __int128 xmmword_140279890;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160361344: using guessed type unsigned int;
// 183E53120: using guessed type unsigned int;
// 183E93124: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;

//----- (000000014010E080) ----------------------------------------------------
__int64            sub_14010E080(_DWORD *a1, char *a2, __int64 a3, int a4)
{
  __int64 result; // rax

  if ( a4 )
    return sub_1400920F0(a3, "%s%d\r\n", a2, *a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    result = sub_1400A3D70();
    *a1 = result;
  }
  dword_140404A6C[293250413] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (000000014010E0D0) ----------------------------------------------------
__int64            sub_14010E0D0(char *a1, char *a2, int a3, __int64 a4, int a5)
{
  __int64 result; // rax
  signed int v8; // eax
  int v9; // edx
  char *v10; // r8
  char v11; // cl

  if ( a5 )
    return sub_1400920F0(a4, "%s%s\r\n", a2, a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    v8 = dword_140404A6C[293250413];
    v9 = 0;
    if ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] )
    {
      v10 = a1;
      do
      {
        if ( v9 >= a3 - 1 )
          break;
        v11 = *((_BYTE *)&dword_140404A6C[293250415] + v8);
        if ( v11 == 13 )
          break;
        if ( v11 == 10 )
          break;
        *v10 = v11;
        ++v9;
        ++v10;
        v8 = ++dword_140404A6C[293250413];
      }
      while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
    }
    result = v9;
    a1[v9] = 0;
  }
  dword_140404A6C[293250413] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (0000000140115360) ----------------------------------------------------
__int64 sub_140115360()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v1 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v3) = v4;
      ++v2;
      ++v3;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v2) = 0;
  return sub_1400A5400((__int64)&dword_140404A6C[293512559]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

//----- (0000000140115410) ----------------------------------------------------
__int64 sub_140115410()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
  {
    v1 = *((_BYTE *)&dword_140404A6C[293250415] + i);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < (int)dword_140404A6C[293250414] )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&dword_140404A6C[293250415] + i);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&dword_140404A6C[293512559] + v3) = v4;
      ++v2;
      ++v3;
      i = ++dword_140404A6C[293250413];
    }
    while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
  }
  *((_BYTE *)&dword_140404A6C[293512559] + v2) = 0;
  sub_14015B070((__int64)&dword_140404A6C[293512559], "%I64u", &v6);
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE020: using guessed type unsigned int;

