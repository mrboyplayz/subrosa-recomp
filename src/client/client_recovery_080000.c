#include "shared_client.h"

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140080070) ----------------------------------------------------
void            sub_140080070(int a1)
{
  unsigned int v2; // ebp
  __int64 v3; // r14
  signed int v4; // eax
  __int64 v5; // rdi
  unsigned int *v6; // rsi
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  unsigned int *v10; // rdx
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // r10
  unsigned int *v14; // rdx
  signed int v15; // ecx
  __int64 v16; // r9
  unsigned int *v17; // rax
  int v18; // eax
  __int64 v19; // r11
  unsigned int *v20; // r10
  __int64 v21; // r9
  signed int v22; // ecx
  unsigned int *v23; // rdx
  __int64 v24; // rax
  unsigned int *v25; // rax

  if ( a1 >= 0 )
  {
    v2 = dword_140404A6C[73990061];
    if ( a1 < (int)dword_140404A6C[73990061] )
    {
      v3 = 60LL * a1;
      v4 = dword_140404A6C[v3 + 73007041] - 1;
      v5 = v4;
      if ( v4 >= 0 )
      {
        v6 = &dword_140404A6C[60 * a1 + 73007042 + v4];
        do
        {
          sub_14007F370(*v6);
          --v5;
          --v6;
        }
        while ( v5 >= 0 );
      }
      v7 = v2 - 1;
      dword_140404A6C[73990061] = v2 - 1;
      if ( a1 != v2 - 1 )
      {
        v8 = &dword_140404A6C[v3 + 73007021];
        v9 = &dword_140404A6C[60 * v7 + 73007021];
        *(_OWORD *)v8 = *(_OWORD *)v9;
        *((_OWORD *)v8 + 1) = *((_OWORD *)v9 + 1);
        *((_OWORD *)v8 + 2) = *((_OWORD *)v9 + 2);
        *((_OWORD *)v8 + 3) = *((_OWORD *)v9 + 3);
        *((_OWORD *)v8 + 4) = *((_OWORD *)v9 + 4);
        *((_OWORD *)v8 + 5) = *((_OWORD *)v9 + 5);
        *((_OWORD *)v8 + 6) = *((_OWORD *)v9 + 6);
        v10 = &dword_140404A6C[v3 + 73007053];
        v11 = *((_OWORD *)v9 + 7);
        v9 += 32;
        *((_OWORD *)v10 - 1) = v11;
        *(_OWORD *)v10 = *(_OWORD *)v9;
        *((_OWORD *)v10 + 1) = *((_OWORD *)v9 + 1);
        *((_OWORD *)v10 + 2) = *((_OWORD *)v9 + 2);
        *((_OWORD *)v10 + 3) = *((_OWORD *)v9 + 3);
        *((_OWORD *)v10 + 4) = *((_OWORD *)v9 + 4);
        *((_OWORD *)v10 + 5) = *((_OWORD *)v9 + 5);
        *((_OWORD *)v10 + 6) = *((_OWORD *)v9 + 6);
        v12 = dword_140404A6C[v3 + 73007041];
        if ( v12 > 0 )
        {
          v13 = (unsigned int)v12;
          v14 = &dword_140404A6C[v3 + 73007042];
          do
          {
            v15 = 0;
            v16 = 61LL * (int)*v14;
            if ( (int)dword_140404A6C[v16 + 486149258] > 0 )
            {
              v17 = &dword_140404A6C[v16 + 486149259];
              do
              {
                if ( *v17 == v7 )
                  *v17 = a1;
                ++v15;
                ++v17;
              }
              while ( v15 < (int)dword_140404A6C[v16 + 486149258] );
            }
            ++v14;
            --v13;
          }
          while ( v13 );
        }
        v18 = dword_140404A6C[v3 + 73007074];
        if ( v18 > 0 )
        {
          v19 = (unsigned int)v18;
          v20 = &dword_140404A6C[v3 + 73007075];
          do
          {
            v21 = (int)*v20;
            v22 = 0;
            v23 = &dword_140404A6C[5210 * v21 + 129716768];
            if ( (int)*v23 > 0 )
            {
              v24 = 5210 * v21;
              do
              {
                if ( dword_140404A6C[v24 + 129716769] == v7 )
                  dword_140404A6C[v24 + 129716769] = a1;
                ++v22;
                ++v24;
              }
              while ( v22 < (int)*v23 );
            }
            ++v20;
            --v19;
          }
          while ( v19 );
        }
        v25 = &dword_140404A6C[280651312];
        do
        {
          if ( *(v25 - 9) && *v25 == v7 )
            *v25 = a1;
          if ( v25[7157] && v25[7166] == v7 )
            v25[7166] = a1;
          if ( v25[14323] && v25[14332] == v7 )
            v25[14332] = a1;
          if ( v25[21489] )
          {
            if ( v25[21498] == v7 )
              v25[21498] = a1;
          }
          v25 += 28664;
        }
        while ( (__int64)v25 < (__int64)&dword_140404A6C[282485808] );
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E44920: using guessed type unsigned int;

//----- (00000001400802F0) ----------------------------------------------------
void            sub_1400802F0(int a1)
{
  __int64 v2; // r14
  int v3; // edi
  unsigned int *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = 3597LL * a1;
  if ( !dword_140404A6C[v2 + 71859139] )
  {
    sub_1400F3B30(a1);
    sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    if ( (unsigned int)a1 <= 0xFF )
      sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    v3 = 0;
    v4 = &dword_140404A6C[283831510];
    do
    {
      if ( *v4 == a1 )
      {
        if ( dword_140404A6C[283831312] == 4 )
          sub_140194C10(v3);
        *v4 = -1;
        v4[5654] = 0;
      }
      ++v3;
      v4 += 5873;
    }
    while ( v3 < 6 );
    v5 = (int)dword_140404A6C[v2 + 71856268];
    if ( (_DWORD)v5 != -1 )
    {
      v6 = 28 * v5;
      dword_140404A6C[v6 + 134050374] = dword_140404A6C[v2 + 71856272];
      dword_140404A6C[v6 + 134050375] = dword_140404A6C[v2 + 71856275];
      dword_140404A6C[v6 + 134050376] = dword_140404A6C[v2 + 71856276];
      dword_140404A6C[v6 + 134050377] = dword_140404A6C[v2 + 71856291];
    }
  }
  v7 = (int)dword_140404A6C[v2 + 71856292];
  if ( (_DWORD)v7 != -1 )
  {
    v8 = 7166 * v7;
    if ( dword_140404A6C[7166 * v7 + 280651305] == a1 )
    {
      dword_140404A6C[v8 + 280651306] = dword_140404A6C[v2 + 71856268];
      dword_140404A6C[v8 + 280651305] = -1;
    }
  }
  dword_140404A6C[v2 + 71856253] = 0;
  sub_140051DC0(a1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400805E0) ----------------------------------------------------
__int64            sub_1400805E0(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1;
  result = closesocket_sr((int)dword_140404A6C[v1 + 289301078]);
  dword_140404A6C[v1 + 289301070] = 0;
  return result;
}

// 140198FD7: using guessed type __int64 __fastcall closesocket(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140080690) ----------------------------------------------------
__int64            sub_140080690(int a1, unsigned int a2, char *a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int *v7; // rax
  char v8; // cl

  v4 = 2570LL * a1;
  v5 = (int)dword_140404A6C[v4 + 275754072];
  if ( (int)v5 >= 256 )
    return 0xFFFFFFFFLL;
  dword_140404A6C[6 * v5 + 275754073 + v4] = a4;
  v7 = &dword_140404A6C[6 * (int)dword_140404A6C[v4 + 275754072] + 275754074 + v4];
  do
  {
    v8 = *a3++;
    *(_BYTE *)v7 = v8;
    v7 = (unsigned int *)((char *)v7 + 1);
  }
  while ( v8 );
  dword_140404A6C[6 * (int)dword_140404A6C[v4 + 275754072] + 275754078 + v4] = a2;
  result = dword_140404A6C[v4 + 275754072];
  dword_140404A6C[v4 + 275754072] = result + 1;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140080720) ----------------------------------------------------
__int64            sub_140080720(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdi
  int v7; // r11d
  unsigned int *i; // r10
  unsigned int *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  v3 = 1;
  v4 = 2570LL * a1;
  v7 = dword_140404A6C[v4 + 275753047];
  if ( v7 <= 1 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[v4 + 275753055]; ; i += 4 )
  {
    if ( *i == a2 )
    {
      v9 = &dword_140404A6C[4 * v3 + 275753048 + v4];
      v10 = a3 - (_QWORD)v9;
      do
      {
        v11 = *((unsigned __int8 *)v9 + v10);
        v12 = *(unsigned __int8 *)v9 - v11;
        if ( v12 )
          break;
        v9 = (unsigned int *)((char *)v9 + 1);
      }
      while ( v11 );
      if ( !v12 )
        break;
    }
    if ( (int)++v3 >= v7 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140080820) ----------------------------------------------------
__int64            sub_140080820(int a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  int v7; // r11d
  unsigned int *i; // r10
  unsigned int *v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  v3 = 0;
  v4 = 2570LL * a1;
  v7 = dword_140404A6C[v4 + 275754072];
  if ( v7 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = &dword_140404A6C[v4 + 275754078]; ; i += 6 )
  {
    if ( *i == a2 )
    {
      v9 = &dword_140404A6C[6 * v3 + 275754074 + v4];
      v10 = a3 - (_QWORD)v9;
      do
      {
        v11 = *((unsigned __int8 *)v9 + v10);
        v12 = *(unsigned __int8 *)v9 - v11;
        if ( v12 )
          break;
        v9 = (unsigned int *)((char *)v9 + 1);
      }
      while ( v11 );
      if ( !v12 )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (int)v3 >= v7 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v3;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400808E0) ----------------------------------------------------
__int64 sub_1400808E0()
{
  int v0; // eax
  unsigned int *v1; // rsi
  unsigned int *v2; // rcx
  unsigned int v3; // ecx
  unsigned int *v4; // rdi
  int i; // ebx
  __m128i v6; // xmm2
  int v7; // edi
  unsigned int *v8; // rbx
  __m128i v9; // xmm8
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int *v12; // rdi
  __m128i v13; // xmm2
  __m128i v14; // xmm8
  char *v15; // rbx
  __int64 v16; // rdi
  __m128i v17; // xmm8
  int v18; // esi
  unsigned int *v19; // rdi
  int v20; // ebx
  unsigned int *v21; // rdi
  unsigned int *v22; // r8
  __m128i v23; // xmm8
  __int64 v25; // [rsp+0h] [rbp-148h] BYREF
  __int64 v26; // [rsp+20h] [rbp-128h]
  int v27; // [rsp+28h] [rbp-120h]
  int v28; // [rsp+30h] [rbp-118h]
  int v29; // [rsp+38h] [rbp-110h]
  int v30; // [rsp+40h] [rbp-108h]
  double v31; // [rsp+48h] [rbp-100h]
  unsigned int v32; // [rsp+50h] [rbp-F8h]
  unsigned int v33; // [rsp+58h] [rbp-F0h]
  unsigned int v34; // [rsp+60h] [rbp-E8h]
  unsigned int v35; // [rsp+68h] [rbp-E0h]
  unsigned int v36; // [rsp+70h] [rbp-D8h]
  unsigned int v37; // [rsp+78h] [rbp-D0h]
  unsigned int v38; // [rsp+80h] [rbp-C8h]
  char v39[64]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-78h]

  dword_140404A6C[438291413] = 2;
  v0 = 0;
  v1 = &dword_140404A6C[71859139];
  dword_140404A6C[179955148] = 0;
  v2 = &dword_140404A6C[71859139];
  do
  {
    if ( *(v2 - 2886) && !*v2 )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[711] && !v2[3597] )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[4308] && !v2[7194] )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[7905] && !v2[10791] )
      dword_140404A6C[179955148] = ++v0;
    v2 += 14388;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[72779971] );
  v3 = dword_140404A6C[179668286];
  if ( (int)dword_140404A6C[179668286] > 0 )
  {
    sub_140158AB0(v39, "%.2f", dword_140404A6C[179955081]);
    sr_CSDrawText(v39, 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43FA0000u))), 16.0);
    sub_140158AB0(v39, "%.2f", dword_140404A6C[179955147]);
    sr_CSDrawText(v39, 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44010000u))), 16.0);
    v38 = dword_140404A6C[179955869];
    v37 = dword_140404A6C[179955868];
    v36 = dword_140404A6C[179955867];
    v35 = dword_140404A6C[179955866];
    v34 = dword_140404A6C[179955865];
    v33 = dword_140404A6C[179955864];
    v32 = dword_140404A6C[179955863];
    sr_CSDrawText(
      "Toggle:/i /i /i /i /i /i /i /i",
      0.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44050000u))),
      16.0);
    LODWORD(v31) = dword_140404A6C[283785903];
    v30 = 1065353216;
    v29 = 1065353216;
    v28 = 1065353216;
    v27 = 1065353216;
    v26 = 0;
    sr_CSDrawText("Cheat:/i", 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))), 16.0);
    v4 = &dword_140404A6C[308307077];
    for ( i = 0; i < 8; ++i )
    {
      LODWORD(v31) = *v4;
      v30 = 1065353216;
      v29 = 1065353216;
      v6 = _mm_castps_si128(_mm_set_ss((float)i));
      v28 = 1065353216;
      *(float *)SR_VEC_LANES(128, v6, i32) = (float)(*(float *)SR_VEC_LANES(128, v6, i32) * 16.0) + 320.0;
      v27 = 1065353216;
      LODWORD(v26) = 2;
      sr_CSDrawText("V:/i", 1020.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v6), 16.0);
      v4 += 96401;
    }
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 == 1 )
  {
    v7 = 0;
    if ( (int)dword_140404A6C[179955926] <= 0 )
      goto LABEL_54;
    v8 = &dword_140404A6C[179955927];
    do
    {
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v9 = _mm_castps_si128(_mm_set_ss((float)v7));
      v27 = 1065353216;
      *(float *)SR_VEC_LANES(128, v9, i32) = (float)(*(float *)SR_VEC_LANES(128, v9, i32) * 16.0) + 32.0;
      LODWORD(v26) = 32;
      sr_CSDrawText(
        (char *)&dword_140404A6C[35 * v7 + 179955930],
        0.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9),
        16.0);
      v10 = *v8;
      if ( !*v8 )
      {
        LODWORD(v31) = v8[1];
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_CSDrawText("/i", 192.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9), 16.0);
        v10 = *v8;
      }
      if ( v10 == 1 )
      {
        v31 = *((float *)v8 + 2);
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_CSDrawText("/f", 192.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9), 16.0);
      }
      ++v7;
      v8 += 35;
    }
    while ( v7 < (int)dword_140404A6C[179955926] );
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 == 2 )
  {
    v11 = 0;
    v12 = &dword_140404A6C[179955149];
    do
    {
      LODWORD(v31) = *v12;
      v30 = 1065353216;
      v29 = 1065353216;
      v13 = _mm_castps_si128(_mm_set_ss((float)v11));
      v28 = 1065353216;
      *(float *)SR_VEC_LANES(128, v13, i32) = (float)(*(float *)SR_VEC_LANES(128, v13, i32) * 16.0) + 192.0;
      v27 = 1065353216;
      LODWORD(v26) = 32;
      sr_CSDrawText("/i", 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v13), 16.0);
      ++v11;
      ++v12;
    }
    while ( v11 < 16 );
    v14 = _mm_cvtsi32_si128((int)(0x42800000u));
    v15 = (char *)&dword_140404A6C[71856254];
    v16 = 256;
    do
    {
      if ( *(v1 - 2886) && !*v1 )
      {
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        v26 = 0;
        sr_CSDrawText(v15, 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v14), 16.0);
        *(float *)SR_VEC_LANES(128, v14, i32) = *(float *)SR_VEC_LANES(128, v14, i32) + 16.0;
      }
      v15 += 14388;
      v1 += 3597;
      --v16;
    }
    while ( v16 );
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 - 3 <= 1 )
  {
    v17 = _mm_cvtsi32_si128((int)(0x43000000u));
    if ( v3 == 3 )
    {
      v18 = 64;
      if ( (int)dword_140404A6C[179457254] <= 64 )
        goto LABEL_54;
      v19 = &dword_140404A6C[179664074];
      do
      {
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_CSDrawText(
          (char *)&dword_140404A6C[22 * v18 + 179662645],
          4.0,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17),
          16.0);
        LODWORD(v31) = *(v19 - 1);
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_CSDrawText("/u", 164.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17), 16.0);
        LODWORD(v31) = *v19;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_CSDrawText("/u", 324.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17), 16.0);
        v20 = dword_140404A6C[179457254];
        *(float *)SR_VEC_LANES(128, v17, i32) = *(float *)SR_VEC_LANES(128, v17, i32) + 16.0;
        ++v18;
        v19 += 22;
      }
      while ( v18 < (int)dword_140404A6C[179457254] );
      v3 = dword_140404A6C[179668286];
    }
    else
    {
      v20 = dword_140404A6C[179457254];
    }
    if ( v3 == 4 )
    {
      if ( v20 >= (int)dword_140404A6C[179457253] )
        goto LABEL_54;
      v21 = &dword_140404A6C[22 * v20 + 179662666];
      do
      {
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_CSDrawText(
          (char *)&dword_140404A6C[22 * v20 + 179662645],
          4.0,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17),
          16.0);
        LODWORD(v31) = *(v21 - 1);
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_CSDrawText("/u", 164.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17), 16.0);
        LODWORD(v31) = *v21;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_CSDrawText("/u", 324.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17), 16.0);
        ++v20;
        *(float *)SR_VEC_LANES(128, v17, i32) = *(float *)SR_VEC_LANES(128, v17, i32) + 16.0;
        v21 += 22;
      }
      while ( v20 < (int)dword_140404A6C[179457253] );
      v3 = dword_140404A6C[179668286];
    }
  }
  if ( v3 == 5 )
  {
    v22 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u)));
    if ( dword_140404A6C[456202453] )
    {
      LODWORD(v31) = dword_140404A6C[456202445];
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v27 = 1065353216;
      v26 = 0;
      sr_CSDrawText("Numofconnections:/i", 4.0, v22, 20.0);
      v23 = _mm_cvtsi32_si128((int)(0x43340000u));
    }
    else
    {
      sr_CSDrawText("Roundnum:/i", 4.0, v22, 20.0);
      LODWORD(v31) = dword_140404A6C[421831838];
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v27 = 1065353216;
      v26 = 0;
      sr_CSDrawText(
        "ClientRoundnum:/i",
        4.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43340000u))),
        20.0);
      v23 = _mm_cvtsi32_si128((int)(0x43480000u));
    }
    sr_CSDrawText("Packetsize:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23), 20.0);
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_CSDrawText("MaxPacketsize:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23), 20.0);
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_CSDrawText("Numofevents:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23), 20.0);
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_CSDrawText("objpacketsize:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23), 20.0);
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_CSDrawText("conn0bytes:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23), 20.0);
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_CSDrawText("players:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23), 20.0);
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    LODWORD(v31) = dword_140404A6C[284024501];
    v30 = 1065353216;
    v29 = 1065353216;
    v28 = 1065353216;
    v27 = 1065353216;
    v26 = 0;
    sr_CSDrawText("playernum:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23), 20.0);
  }
LABEL_54:
  dword_140404A6C[438291413] = 0;
  return sub_1401F8B20((unsigned __int64)&v25 ^ v40);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B097E04: using guessed type unsigned int;
// 16B165F64: using guessed type unsigned int;
// 16B27E19C: using guessed type unsigned int;
// 16B27ECC8: using guessed type unsigned int;
// 16B27ECCC: using guessed type unsigned int;
// 16B27ECD0: using guessed type unsigned int;
// 16B27ECD4: using guessed type unsigned int;
// 16B27ECD8: using guessed type unsigned int;
// 16B27ECDC: using guessed type unsigned int;
// 16B27ECE0: using guessed type unsigned int;
// 183E93528: using guessed type unsigned int;
// 183F7C540: using guessed type unsigned int;
// 1A4D2DCE4: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1AD04ADA0: using guessed type unsigned int;

//----- (00000001400814D0) ----------------------------------------------------
__int64            sub_1400814D0(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char *v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-4B8h] BYREF
  __int64 v7; // [rsp+20h] [rbp-498h]
  int v8; // [rsp+28h] [rbp-490h]
  int v9; // [rsp+30h] [rbp-488h]
  int v10; // [rsp+38h] [rbp-480h]
  int v11; // [rsp+40h] [rbp-478h]
  unsigned int v12; // [rsp+48h] [rbp-470h]
  char v13[1024]; // [rsp+50h] [rbp-468h] BYREF
  __int64 v14; // [rsp+450h] [rbp-68h]

  if ( a1 != -1 )
  {
    v2 = a2;
    if ( a2 != -1 )
    {
      v11 = 1065353216;
      v10 = 0;
      v3 = 3597LL * a1;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sr_CSDrawText(
        (char *)&dword_140404A6C[v3 + 71856254],
        520.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42400000u))),
        16.0);
      sub_140158AB0(v13, "%03d-%04d", dword_140404A6C[v3 + 71856265] / 0x2710, dword_140404A6C[v3 + 71856265] % 0x2710);
      v11 = 1065353216;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sr_CSDrawText(v13, 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))), 16.0);
      v12 = dword_140404A6C[v3 + 71856275];
      v11 = 1065353216;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sr_CSDrawText(
        "Corporate rating: /i",
        520.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A00000u))),
        16.0);
      if ( (unsigned int)v2 <= 5 )
      {
        v4 = off_1402B2890[v2];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_CSDrawText(v4, 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42E00000u))), 16.0);
        v12 = dword_140404A6C[v3 + 71856273];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_CSDrawText("$/I", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))), 16.0);
        v12 = dword_140404A6C[v3 + 71856274];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_CSDrawText("Budget: $/I", 680.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))), 16.0);
      }
    }
    return sub_1401F8B20((unsigned __int64)&v6 ^ v14);
  }
  return result;
}

// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400817C0) ----------------------------------------------------
__int64 sub_1400817C0()
{
  __int64 v0; // r8
  signed int v1; // eax
  double v2; // xmm6_8
  float v3; // xmm9_4
  float v4; // xmm8_4
  signed int v5; // edi
  unsigned int *v6; // rbx
  int v7; // ebp
  int v8; // esi
  int v9; // r14d
  signed int v10; // r15d
  int *v11; // r12
  signed int v12; // r13d
  int v13; // ecx
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  double v17; // xmm0_8
  __int64 v18; // r8
  signed int v20; // [rsp+120h] [rbp+8h]
  int v21; // [rsp+128h] [rbp+10h]

  qword_140404050(3553, dword_140404A6C[451221642]);
  v1 = dword_140404A6C[315570519];
  *(_QWORD *)&v2 = 1115684864;
  v3 = 384.0;
  v4 = 512.0 / (float)(int)dword_140404A6C[315570519];
  if ( (int)dword_140404A6C[315570520] > 0 )
    v3 = 384.0 / (float)(int)dword_140404A6C[315570520];
  v5 = 0;
  v20 = 0;
  if ( (int)dword_140404A6C[315570519] > 0 )
  {
    v6 = &dword_140404A6C[315570524];
    v7 = 57;
    v8 = 0;
    v9 = 0;
    v21 = 0;
    do
    {
      v10 = 0;
      if ( (int)*(v6 - 1) > 0 )
      {
        v11 = (int *)v6;
        v12 = v5;
        do
        {
          v13 = 15731 * (v5 ^ (v5 << 13)) * (v5 ^ (v5 << 13)) + 789221;
          v14 = 15731 * (((v9 + v10) << 13) ^ (v9 + v10)) * (((v9 + v10) << 13) ^ (v9 + v10)) + 789221;
          v15 = (float)((v14 * v14 - 771171059) & 0x7FFFFFFF);
          v16 = (v12 ^ (v12 << 13)) * (v12 ^ (v12 << 13));
          sub_14006CFF0(
            v2,
            sr_export_float_lane_container((unsigned __int64)COERCE_UNSIGNED_INT(512.0 - (float)((float)*v11 * v3))),
            v0,
            (float)v11[1] * v3,
            8,
            COERCE_INT((float)(0.5 - (float)((float)((v13 * v13 - 771171059) & 0x7FFFFFFF) * 4.6566129e-10)) + 0.5),
            COERCE_INT((float)(0.5 - (float)(v15 * 4.6566129e-10)) + 0.5),
            COERCE_INT(
              (float)(0.5
                    - (float)((float)(((15731 * v16 + 789221) * (15731 * v16 + 789221) - 771171059) & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 0.5),
            1065353216);
          ++v10;
          v5 += v8 + 57;
          v9 += v8;
          v12 += v7;
          v11 += 3;
        }
        while ( v10 < (int)*(v6 - 1) );
        v1 = dword_140404A6C[315570519];
        v5 = v20;
        v9 = v21;
      }
      ++v5;
      *(float *)&v2 = *(float *)&v2 + v4;
      v9 += 57;
      v20 = v5;
      v7 += 1684013;
      v21 = v9;
      v8 += 54323;
      v6 += 3074;
    }
    while ( v5 < v1 );
  }
  sub_14006CFF0(sr_export_float_lane_container(1115684864), sr_export_float_lane_container(1140850688), v0, 384.0, 8, 1065353216, 0, 0, 1065353216);
  *(_QWORD *)&v17 = COERCE_UNSIGNED_INT((float)(int)dword_140404A6C[315570519]);
  *(float *)&v17 = (float)(*(float *)&v17 * v4) + 64.0;
  return sub_14006CFF0(v17, sr_export_float_lane_container(1140850688), v18, 384.0, 8, 1065353216, 0, 0, 1065353216);
}

// 1400819EF: variable 'v0' is possibly undefined
// 140081B24: variable 'v18' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18B7D2FC8: using guessed type unsigned int;

//----- (0000000140081B60) ----------------------------------------------------
void            sub_140081B60(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int128 v5; // xmm0
  unsigned int *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  v1 = 32901LL * a1;
  if ( !dword_140404A6C[v1 + 299853693] || dword_140404A6C[283831310] == 3 )
  {
    qword_140404050(3553, dword_140404A6C[451221642]);
    v4 = 0;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    if ( dword_140404A6C[v1 + 299853693] )
      v5 = xmmword_140279690;
    else
      v5 = xmmword_140279700;
    *(_OWORD *)&dword_140404A6C[456807033] = v5;
    v6 = &dword_140404A6C[308276353];
    do
    {
      sub_14007D420(8 * v4++, v2, v3);
      sub_14007D420(v8, v7, v9);
      v6 += 4;
    }
    while ( v4 < 239 );
    sub_14006E0D0(v10, v2, v3);
  }
}

// 140081C60: variable 'v2' is possibly undefined
// 140081C60: variable 'v3' is possibly undefined
// 140081C88: variable 'v8' is possibly undefined
// 140081C88: variable 'v7' is possibly undefined
// 140081C88: variable 'v9' is possibly undefined
// 140081C99: variable 'v10' is possibly undefined
// 140279690: using guessed type __int128 xmmword_140279690;
// 140279700: using guessed type __int128 xmmword_140279700;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (0000000140081CC0) ----------------------------------------------------
__m128            sub_140081CC0(__int64 a1, float *a2, float a3, float a4, float a5)
{
  __int128 v5; // xmm4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm6_4

  v5 = *(unsigned int *)(a1 + 4);
  v6 = *(float *)a1;
  v7 = *(float *)(a1 + 8);
  v9 = (float)((float)(v6 * v6) + (float)(*(float *)&v5 * *(float *)&v5)) + (float)(v7 * v7);
  v10 = fsqrt(v9);
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v5 = 0;
    v12 = 0.0;
  }
  else
  {
    v11 = v6 * (float)(1.0 / v10);
    *(float *)&v5 = *(float *)&v5 * (float)(1.0 / v10);
    v12 = v7 * (float)(1.0 / v10);
  }
  *(float *)&v5 = fminf(
                    fmaxf(
                      (float)((float)((float)((float)((float)((float)((float)(*(float *)&v5 * a2[1]) + (float)(v11 * *a2))
                                                            + (float)(v12 * a2[2]))
                                                    * a3)
                                            * a4)
                                    * -0.75)
                            * v9)
                    / a5,
                      v10 * -0.125),
                    v10 * 0.125);
  return (__m128)v5;
}


//----- (0000000140081DA0) ----------------------------------------------------
void            sub_140081DA0(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rdx
  float v9; // xmm9_4
  __int64 v10; // rdx
  __int64 v11; // r8
  __m128 v12; // xmm0
  double v13; // xmm6_8
  __int64 v14; // rbx
  double v15; // xmm8_8
  double v16; // xmm7_8
  double v17; // xmm2_8
  unsigned int v18; // xmm1_4
  __int64 v19; // rdx
  __m128 v20; // xmm0
  unsigned int v21; // xmm1_4
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-68h] BYREF
  __int32 v26; // [rsp+24h] [rbp-64h]
  int v27; // [rsp+28h] [rbp-60h]

  *(float *)&dword_140404A6C[456807033] = a4;
  dword_140404A6C[456807034] = a5;
  v9 = 0.0;
  dword_140404A6C[456807035] = a6;
  dword_140404A6C[456807036] = a7;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  v12 = _mm_castpd_ps(sub_1401F8A50(0.0, v7, a3));
  v13 = *(float *)&a3;
  v27 = 0;
  v14 = 64;
  v15 = a2;
  v16 = a1;
  v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * *(float *)&a3;
  *(float *)&v18 = *(double *)SR_VEC_LANES(128, v12, u64) * v13 + v16;
  SR_VEC_LANES(128, v12, f32)[0] = v15 - v17;
  v25 = v18;
  v26 = SR_VEC_LANES(128, v12, i32)[0];
  do
  {
    sub_14007D520(&v25, v10, v11);
    v9 = v9 + 0.098174773;
    v20 = _mm_castpd_ps(sub_1401F8A50(v9, v19, v17));
    *(float *)&v21 = *(double *)SR_VEC_LANES(128, v20, u64) * v13 + v16;
    v25 = v21;
    SR_VEC_LANES(128, v20, f32)[0] = v15 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v20, (__m128d)v20, 1), f64)[0] * v13;
    v26 = SR_VEC_LANES(128, v20, i32)[0];
    sub_14007D520(&v25, v22, v23);
    --v14;
  }
  while ( v14 );
  sub_14006E0D0(v24, v10, v11);
}

// 140081E32: variable 'v7' is possibly undefined
// 140081E95: variable 'v10' is possibly undefined
// 140081E95: variable 'v11' is possibly undefined
// 140081EAA: variable 'v19' is possibly undefined
// 140081EE7: variable 'v22' is possibly undefined
// 140081EE7: variable 'v23' is possibly undefined
// 140081F16: variable 'v24' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (0000000140081F20) ----------------------------------------------------
void            sub_140081F20(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  float v8; // xmm6_4
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __m128 v12; // xmm0
  double v13; // xmm9_8
  __int64 v14; // rbx
  double v15; // xmm2_8
  float v16; // xmm7_4
  float v17; // xmm8_4
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __m128 v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  float v25; // [rsp+20h] [rbp-A8h] BYREF
  float v26; // [rsp+24h] [rbp-A4h]
  int v27; // [rsp+28h] [rbp-A0h]

  qword_140404050(3553, dword_140404A6C[451221642]);
  dword_140404A6C[456807036] = a7;
  *(float *)&dword_140404A6C[456807033] = a4;
  dword_140404A6C[456807034] = a5;
  v8 = 0.0;
  dword_140404A6C[456807035] = a6;
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  v27 = 0;
  v12 = _mm_castpd_ps(sub_1401F8A50(0.0, v9, a3));
  v13 = *(float *)&a3;
  v14 = 64;
  v15 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v12, (__m128d)v12, 1), f64)[0] * *(float *)&a3;
  v16 = *(double *)SR_VEC_LANES(128, v12, u64) * v13 + a1;
  v17 = a2 - v15;
  do
  {
    v25 = a1;
    v26 = a2;
    sub_14007D520((unsigned int *)&v25, v10, v11);
    v25 = v16;
    v26 = v17;
    sub_14007D520((unsigned int *)&v25, v18, v19);
    v8 = v8 + 0.098174773;
    v21 = _mm_castpd_ps(sub_1401F8A50(v8, v20, v15));
    v16 = *(double *)SR_VEC_LANES(128, v21, u64) * v13 + a1;
    v25 = v16;
    v17 = a2 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0] * v13;
    v26 = v17;
    sub_14007D520((unsigned int *)&v25, v22, v23);
    --v14;
  }
  while ( v14 );
  sub_14006E0D0(v24, v10, v11);
}

// 140081FD7: variable 'v9' is possibly undefined
// 140082046: variable 'v10' is possibly undefined
// 140082046: variable 'v11' is possibly undefined
// 14008205D: variable 'v18' is possibly undefined
// 14008205D: variable 'v19' is possibly undefined
// 140082071: variable 'v20' is possibly undefined
// 1400820B7: variable 'v22' is possibly undefined
// 1400820B7: variable 'v23' is possibly undefined
// 140082100: variable 'v24' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (0000000140082110) ----------------------------------------------------
__int64            sub_140082110(__int64 a1, __int64 a2, double a3, float a4)
{
  __m128 v4; // xmm7
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __m128d v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __m128 v24; // xmm7
  __m128d v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx

  qword_140404050(3553, dword_140404A6C[451221642]);
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  v4 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402792F0;
  sub_1401F8A50(0.0, v5, a3);
  v9 = 64;
  v10 = 64;
  do
  {
    sub_14007D420(v7, v6, v8);
    sub_14007D420(v12, v11, v13);
    v14 = _mm_cvtps_pd(v4);
    SR_VEC_LANES(128, v14, f64)[0] = SR_VEC_LANES(128, v14, f64)[0] + 0.0981747704246875;
    v4 = _mm_cvtpd_ps(v14);
    sub_1401F8A50(SR_VEC_LANES(128, v4, f32)[0], v15, 0.0);
    sub_14007D420(v17, v16, v18);
    --v10;
  }
  while ( v10 );
  sub_14006E0D0(v7, v6, v8);
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215065])(v20, v19);
  v24 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279490;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  do
  {
    sub_14007D420(v22, v21, v23);
    v25 = _mm_cvtps_pd(v24);
    SR_VEC_LANES(128, v25, f64)[0] = SR_VEC_LANES(128, v25, f64)[0] + 0.0981747704246875;
    v24 = _mm_cvtpd_ps(v25);
    sub_1401F8A50(SR_VEC_LANES(128, v24, f32)[0], v26, 0.0);
    sub_14007D420(v28, v27, v29);
    --v9;
  }
  while ( v9 );
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796B0;
  sub_14007D420(v22, v21, v23);
  sub_1401F8A50(a4, v30, 0.0);
  sub_14007D420(v32, v31, v33);
  sub_14006E0D0(v35, v34, v36);
  return (*(__int64 (           **)(__int64, __int64))&dword_140404A6C[18215065])(v38, v37);
}

// 1400821B2: variable 'v5' is possibly undefined
// 14008222B: variable 'v7' is possibly undefined
// 14008222B: variable 'v6' is possibly undefined
// 14008222B: variable 'v8' is possibly undefined
// 14008223B: variable 'v12' is possibly undefined
// 14008223B: variable 'v11' is possibly undefined
// 14008223B: variable 'v13' is possibly undefined
// 14008224F: variable 'v15' is possibly undefined
// 14008228E: variable 'v17' is possibly undefined
// 14008228E: variable 'v16' is possibly undefined
// 14008228E: variable 'v18' is possibly undefined
// 1400822A6: variable 'v20' is possibly undefined
// 1400822A6: variable 'v19' is possibly undefined
// 1400822FB: variable 'v22' is possibly undefined
// 1400822FB: variable 'v21' is possibly undefined
// 1400822FB: variable 'v23' is possibly undefined
// 14008230F: variable 'v26' is possibly undefined
// 14008234E: variable 'v28' is possibly undefined
// 14008234E: variable 'v27' is possibly undefined
// 14008234E: variable 'v29' is possibly undefined
// 140082388: variable 'v30' is possibly undefined
// 1400823B6: variable 'v32' is possibly undefined
// 1400823B6: variable 'v31' is possibly undefined
// 1400823B6: variable 'v33' is possibly undefined
// 1400823BB: variable 'v35' is possibly undefined
// 1400823BB: variable 'v34' is possibly undefined
// 1400823BB: variable 'v36' is possibly undefined
// 14008240C: variable 'v38' is possibly undefined
// 14008240C: variable 'v37' is possibly undefined
// 1402792F0: using guessed type __int128 xmmword_1402792F0;
// 140279490: using guessed type __int128 xmmword_140279490;
// 1402796B0: using guessed type __int128 xmmword_1402796B0;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CD0: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD);
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (0000000140082420) ----------------------------------------------------
__int64 sub_140082420()
{
  __int64 v0; // rbx
  __int64 v1; // r8
  unsigned int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // eax
  float v7; // xmm8_4
  __int64 v8; // rax
  __m128i v9; // xmm8
  unsigned int i; // ebx
  __int64 v11; // rcx
  int v12; // eax
  char *v13; // rcx
  char *v14; // rdx
  float v15; // xmm0_4
  char v16; // al
  __int64 v17; // rbx
  __m128i v18; // xmm8
  __int64 v19; // rax
  __int64 v20; // rdi
  char *v21; // rcx
  int v22; // edi
  unsigned int *v23; // rbx
  __int64 v24; // rsi
  int v25; // eax
  unsigned int *v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __m128i v30; // xmm6
  unsigned int *v31; // r8
  __int64 v32; // rcx
  __m128i v33; // xmm6
  unsigned int *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __m128i v37; // xmm6
  unsigned int *v38; // r8
  __int64 v39; // rcx
  __m128i v40; // xmm2
  __m128i v41; // xmm6
  char *v42; // rcx
  __int64 v43; // rcx
  char *v44; // rcx
  unsigned int *v45; // r8
  float v46; // xmm8_4
  __m128i v47; // xmm6
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rcx
  int v51; // ecx
  char *v52; // rcx
  int v53; // edx
  int v54; // r9d
  int v55; // r8d
  bool v56; // zf
  __m128i v57; // xmm10
  unsigned int j; // edi
  __int64 v59; // rdx
  unsigned int v60; // r8d
  int v61; // eax
  int v62; // xmm6_4
  float v63; // xmm8_4
  signed int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  signed int v68; // eax
  unsigned int *v69; // rcx
  signed __int64 v70; // rdx
  char v71; // al
  __int64 v73; // [rsp+0h] [rbp-558h] BYREF
  __int64 v74; // [rsp+20h] [rbp-538h]
  int v75; // [rsp+28h] [rbp-530h]
  int v76; // [rsp+30h] [rbp-528h]
  int v77; // [rsp+38h] [rbp-520h]
  int v78; // [rsp+40h] [rbp-518h]
  unsigned int *v79; // [rsp+48h] [rbp-510h]
  unsigned int *v80; // [rsp+50h] [rbp-508h]
  int v81; // [rsp+58h] [rbp-500h]
  int v82; // [rsp+60h] [rbp-4F8h]
  __int64 v83; // [rsp+70h] [rbp-4E8h]
  char v84[1024]; // [rsp+80h] [rbp-4D8h] BYREF
  __int64 v85; // [rsp+480h] [rbp-D8h]

  v0 = (int)dword_140404A6C[284024501];
  if ( dword_140404A6C[284024501] == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  if ( dword_140404A6C[283831312] == 7 )
  {
    if ( dword_140404A6C[283831448] != 2
      || (int)dword_140404A6C[283831451] >= (signed int)(60 * dword_140404A6C[284022502]) )
    {
      goto LABEL_13;
    }
    LODWORD(v79) = dword_140404A6C[284022502] - (signed int)dword_140404A6C[283831451] / 60;
    v78 = 1065353216;
    v77 = 1065353216;
    v76 = 1065353216;
    v75 = 1065353216;
    LODWORD(v74) = 33;
    sr_CSDrawText("Start in /i", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 24.0);
  }
  if ( dword_140404A6C[283831312] == 6 && dword_140404A6C[283831448] == 2 && dword_140404A6C[284024376] )
  {
    qword_140404050(3553, dword_140404A6C[451221642]);
    sub_14006CFF0(
      0.0,
      0.0,
      v1,
      576.0,
      0,
      1031798784,
      1031798784,
      1031798784,
      COERCE_INT(1.0 - (float)((float)(int)dword_140404A6C[283831450] * 0.0033333334)));
    v2 = dword_140404A6C[284024376];
    if ( dword_140404A6C[284024376] == 1 )
    {
      v78 = 1065353216;
      v77 = 1065353216;
      v76 = 1065353216;
      v75 = 1065353216;
      LODWORD(v74) = 1;
      sr_CSDrawText("Success", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43A00000u))), 40.0);
      v2 = dword_140404A6C[284024376];
    }
    if ( v2 == 2 )
    {
      v78 = 1065353216;
      v77 = 1065353216;
      v76 = 1065353216;
      v75 = 1065353216;
      LODWORD(v74) = 1;
      sr_CSDrawText("Failed", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43A00000u))), 40.0);
    }
  }
LABEL_13:
  v3 = 14388 * v0;
  v83 = 14388 * v0;
  if ( dword_140404A6C[3597 * v0 + 71856342] == 2 || dword_140404A6C[283831448] == 3 )
  {
    qword_140404050(3553, dword_140404A6C[451221642]);
    sub_14006CFF0(0.0, 0.0, v4, 576.0, 0, 1031798784, 1031798784, 1031798784, 1065353216);
  }
  if ( dword_140404A6C[284021985] )
  {
    if ( dword_140404A6C[283831312] == 5 && dword_140404A6C[283831448] != 2 )
      goto LABEL_34;
    qword_140404050(3553, dword_140404A6C[451221642]);
    sub_14006CFF0(
      sr_export_float_lane_container(1140850688),
      sr_export_float_lane_container(1107296256),
      v5,
      512.0,
      0,
      1061158912,
      1061158912,
      1061158912,
      1065353216);
  }
  if ( dword_140404A6C[283831312] != 5 )
    goto LABEL_43;
  if ( dword_140404A6C[283831448] == 2 && (int)dword_140404A6C[283831451] < 600 && dword_140404A6C[284024501] != -1 )
  {
    v6 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286];
    if ( v6 != -1 && v6 < 3 )
    {
      v7 = fminf((float)(600 - dword_140404A6C[283831451]) * 0.0055555557, 1.0);
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          v78 = LODWORD(v7);
          v77 = 0;
          v76 = 0;
          v75 = 1061158912;
          LODWORD(v74) = 33;
          sr_CSDrawText(
            "You are the Eliminator",
            512.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))),
            32.0);
        }
        else if ( v6 == 2 )
        {
          v78 = LODWORD(v7);
          v77 = 1065353216;
          v76 = 1061158912;
          v75 = 1061158912;
          LODWORD(v74) = 33;
          sr_CSDrawText(
            "You are the Protector",
            512.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))),
            32.0);
          v8 = dword_140404A6C[284022462];
          if ( dword_140404A6C[284022462] > 0xFF )
            v8 = 0;
          v79 = &dword_140404A6C[3597 * v8 + 71856254];
          v78 = LODWORD(v7);
          v77 = 1065353216;
          v76 = 1061158912;
          v75 = 1061158912;
          LODWORD(v74) = 33;
          sr_CSDrawText(
            "The Savior is /s",
            512.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43980000u))),
            32.0);
        }
      }
      else
      {
        v78 = LODWORD(v7);
        v77 = 1061158912;
        v76 = 1061158912;
        v75 = 1061158912;
        LODWORD(v74) = 33;
        sr_CSDrawText(
          "You are a Civilian",
          512.0,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))),
          32.0);
      }
    }
  }
LABEL_34:
  v9 = _mm_cvtsi32_si128((int)(0x42A00000u));
  if ( dword_140404A6C[283831448] == 2 )
  {
    for ( i = (unsigned __int8)(LOBYTE(dword_140404A6C[346706173]) + 1);
          i != LOBYTE(dword_140404A6C[346706173]);
          i = (unsigned __int8)(i + 1) )
    {
      v11 = 38LL * i;
      if ( dword_140404A6C[v11 + 346696445] == 3 )
      {
        v12 = dword_140404A6C[v11 + 346696447];
        if ( v12 > 0 && (int)dword_140404A6C[v11 + 346696448] > 0 )
        {
          v13 = (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v11 * 4 + 1390999160);
          v14 = (char *)((char *)&dword_140404A6C[18601357] - v13);
          v15 = (float)v12 * 0.0049999999;
          do
          {
            v16 = *v13;
            v14[(_QWORD)v13] = *v13;
            ++v13;
          }
          while ( v16 );
          v78 = LODWORD(v15);
          v77 = 1065353216;
          v76 = 1061158912;
          v75 = 1061158912;
          LODWORD(v74) = 97;
          sr_CSDrawText(
            (char *)&dword_140404A6C[18601357],
            512.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9),
            24.0);
          *(float *)SR_VEC_LANES(128, v9, i32) = *(float *)SR_VEC_LANES(128, v9, i32) + 24.0;
        }
      }
    }
  }
LABEL_43:
  if ( dword_140404A6C[283831312] - 3 > 2
    || !dword_140404A6C[284021985]
    || dword_140404A6C[283831312] == 5 && dword_140404A6C[283831448] != 2 )
  {
    goto LABEL_105;
  }
  if ( dword_140404A6C[284024501] == -1 )
    goto LABEL_105;
  v17 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286];
  if ( (_DWORD)v17 == -1 )
    goto LABEL_105;
  v18 = _mm_cvtsi32_si128((int)(0x42A00000u));
  if ( dword_140404A6C[283831312] != 5 )
    goto LABEL_58;
  switch ( (_DWORD)v17 )
  {
    case 0:
      v78 = 1065353216;
      v77 = 0;
      v76 = 0;
      v75 = 0;
      v74 = 0;
      sr_CSDrawText(
        "You are a Civilian",
        520.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A00000u))),
        16.0);
      v18 = _mm_cvtsi32_si128((int)(0x42E00000u));
LABEL_58:
      if ( dword_140404A6C[283831312] == 4 && dword_140404A6C[284024501] != -1 )
      {
        v78 = 1065353216;
        v77 = 0;
        v20 = 3597LL * (int)dword_140404A6C[284024501];
        v76 = 0;
        v75 = 0;
        v74 = 0;
        sr_CSDrawText(
          (char *)&dword_140404A6C[v20 + 71856254],
          520.0,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42400000u))),
          16.0);
        sub_140158AB0(
          v84,
          "%03d-%04d",
          dword_140404A6C[v20 + 71856265] / 0x2710,
          dword_140404A6C[v20 + 71856265] % 0x2710);
        v78 = 1065353216;
        v77 = 0;
        v76 = 0;
        v75 = 0;
        v74 = 0;
        sr_CSDrawText(v84, 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))), 16.0);
        LODWORD(v79) = dword_140404A6C[v20 + 71856275];
        v78 = 1065353216;
        v77 = 0;
        v76 = 0;
        v75 = 0;
        v74 = 0;
        sr_CSDrawText(
          "Corporate rating: /i",
          520.0,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A00000u))),
          16.0);
        if ( (unsigned int)v17 <= 5 )
        {
          v21 = off_1402B2890[v17];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(v21, 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42E00000u))), 16.0);
          LODWORD(v79) = dword_140404A6C[v20 + 71856273];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText("$/I", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))), 16.0);
          LODWORD(v79) = dword_140404A6C[v20 + 71856274];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "Budget: $/I",
            680.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))),
            16.0);
        }
      }
      break;
    case 1:
      v78 = 1065353216;
      v77 = 0;
      v76 = 0;
      v75 = 0;
      v74 = 0;
      sr_CSDrawText(
        "You are the Eliminator",
        520.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A00000u))),
        16.0);
      v18 = _mm_cvtsi32_si128((int)(0x42E00000u));
      goto LABEL_58;
    case 2:
      v78 = 1065353216;
      v77 = 0;
      v76 = 0;
      v75 = 0;
      v74 = 0;
      sr_CSDrawText(
        "You are the Protector",
        520.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A00000u))),
        16.0);
      v19 = dword_140404A6C[284022462];
      if ( dword_140404A6C[284022462] > 0xFF )
        v19 = 0;
      v79 = &dword_140404A6C[3597 * v19 + 71856254];
      v78 = 1065353216;
      v77 = 0;
      v76 = 0;
      v75 = 0;
      v74 = 0;
      sr_CSDrawText(
        "The Savior is /s",
        520.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42E00000u))),
        16.0);
      v18 = _mm_cvtsi32_si128((int)(0x43100000u));
      goto LABEL_58;
  }
  if ( dword_140404A6C[283831312] == 3 && (unsigned int)v17 <= 2 )
  {
    *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
    v79 = (unsigned int *)off_1402B2890[v17];
    sr_CSDrawText("/s", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
    v78 = 1065353216;
    *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 32.0;
    v77 = 0;
    v76 = 0;
    v75 = 0;
    v74 = 0;
    sr_CSDrawText("Missions:", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
    *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 32.0;
    v22 = 0;
    v23 = &dword_140404A6C[5873 * v17 + 283831606];
    v24 = 16;
    do
    {
      if ( *(v23 - 18) )
      {
        v25 = *(v23 - 15);
        if ( !v25 )
        {
          sr_CSDrawText("Acquisition:", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          sr_CSDrawText(
            "We have received reports that Megacorp has disks containing",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v78 = 1065353216;
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "information that will be beneficial to one of our subsidiaries.",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v26 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18);
          if ( *v23 == -1 )
          {
            v78 = 1065353216;
            v77 = 0;
            v76 = 0;
            v75 = 0;
            v74 = 0;
            sr_CSDrawText("We do not know where the disk is located.", 520.0, v26, 16.0);
            *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          }
          else
          {
            v79 = &dword_140404A6C[1268 * *(v23 - 3) + 278521297];
            v78 = 1065353216;
            v77 = 0;
            v76 = 0;
            v75 = 0;
            v74 = 0;
            sr_CSDrawText("The /s is in a building near the", 520.0, v26, 16.0);
            v27 = (int)*v23;
            *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
            v28 = (int)dword_140404A6C[14019 * v27 + 225641321];
            if ( (_DWORD)v28 != -1 )
            {
              v29 = (int)dword_140404A6C[14019 * v27 + 225641322];
              if ( (_DWORD)v29 != -1 )
              {
                v80 = &dword_140404A6C[396 * v29 + 225426047];
                v79 = &dword_140404A6C[396 * v28 + 225426047];
                v78 = 1065353216;
                v77 = 0;
                v76 = 0;
                v75 = 0;
                v74 = 0;
                sr_CSDrawText(
                  "/s and /s intersection",
                  520.0,
                  (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
                  16.0);
              }
            }
          }
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          LODWORD(v79) = *(v23 - 2);
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "Value:               $/i Bonus",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          LODWORD(v79) = (int)(float)((float)(int)(*(v23 - 2) + 1) * 0.0024999999);
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "Estimated stock increase:         /i%",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v25 = *(v23 - 15);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
        }
        if ( v25 == 1 )
        {
          sr_CSDrawText("Acquisition:", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          sr_CSDrawText(
            "We have received reports that Megacorp has disks containing",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v78 = 1065353216;
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "information that will be beneficial to one of our subsidiaries.",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v79 = &dword_140404A6C[1268 * *(v23 - 3) + 278521297];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "The /s is in a town car driving around the city.",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          LODWORD(v79) = *(v23 - 2);
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "Value:               $/i Bonus",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v25 = *(v23 - 15);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
        }
        if ( v25 == 2 )
        {
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText("Transaction:", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
          v56 = *v23 == -1;
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v30 = v18;
          *(float *)SR_VEC_LANES(128, v30, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v31 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18);
          v74 = 0;
          if ( v56 )
          {
            sr_CSDrawText("We have acquired a disk that has information that can be", 520.0, v31, 16.0);
            v78 = 1065353216;
            v77 = 0;
            v76 = 0;
            v18 = v30;
            v75 = 0;
            v74 = 0;
            sr_CSDrawText(
              "traded for money with another corporation.",
              520.0,
              (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v30),
              16.0);
            *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v30, i32) + 16.0;
          }
          else
          {
            sr_CSDrawText("One of our agents has acquired a disk that has information", 520.0, v31, 16.0);
            v78 = 1065353216;
            v77 = 0;
            v76 = 0;
            v18 = v30;
            v75 = 0;
            v74 = 0;
            sr_CSDrawText(
              "wanted by another corporation.  The disk is in a briefcase.",
              520.0,
              (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v30),
              16.0);
            *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v30, i32) + 16.0;
            v79 = &dword_140404A6C[19 * *v23 + 487148759];
            v78 = 1065353216;
            v77 = 0;
            v76 = 0;
            v75 = 0;
            v74 = 0;
            sr_CSDrawText("Dead drop location: /s", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
            *(float *)SR_VEC_LANES(128, v18, i32) = (float)(*(float *)SR_VEC_LANES(128, v30, i32) + 16.0) + 32.0;
          }
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "Negotiate the best terms and execute the deal.",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v32 = 1268LL * (int)*(v23 - 3);
          LODWORD(v80) = *(v23 - 2);
          v79 = &dword_140404A6C[v32 + 278521297];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "/s value:               $/i Bonus",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v25 = *(v23 - 15);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
        }
        if ( v25 == 3 || v25 == 4 )
        {
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText("Transaction:", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v79 = (unsigned int *)off_1402B2890[*(v23 - 11)];
          sr_CSDrawText(
            "We have received reports that /s has acquired a disk",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v78 = 1065353216;
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "containing information that will be beneficial to one of our",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v56 = *(v23 - 15) == 3;
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v33 = v18;
          *(float *)SR_VEC_LANES(128, v33, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v34 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18);
          v74 = 0;
          if ( v56 )
          {
            sr_CSDrawText("subsidiaries.  Negotiate the best terms and execute the deal.", 520.0, v34, 16.0);
            LODWORD(v79) = v23[1];
            v78 = 1065353216;
            v77 = 0;
            v76 = 0;
            v18 = v33;
            v75 = 0;
            v74 = 0;
            sr_CSDrawText(
              "You have been provided with $/i.",
              520.0,
              (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v33),
              16.0);
            *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v33, i32) + 16.0;
          }
          else
          {
            sr_CSDrawText("subsidiaries.  Acquire the disk by any means neccessary.", 520.0, v34, 16.0);
            v18 = v33;
          }
          v35 = 1268LL * (int)*(v23 - 3);
          LODWORD(v80) = *(v23 - 2);
          v79 = &dword_140404A6C[v35 + 278521297];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "/s value:               $/i Bonus",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v25 = *(v23 - 15);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
        }
        if ( v25 == 7 )
        {
          sr_CSDrawText("Double Disk:", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
          v78 = 1065353216;
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "We have acquired a disk that contains some of the data",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v79 = (unsigned int *)off_1402B2890[*(v23 - 11)];
          sr_CSDrawText("that /s is seeking.", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
          v78 = 1065353216;
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 32.0;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "Negotiate the best terms and execute the deal.",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v36 = 1268LL * (int)*(v23 - 3);
          LODWORD(v80) = *(v23 - 2);
          v79 = &dword_140404A6C[v36 + 278521297];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "/ss value:               $/i Bonus",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v25 = *(v23 - 15);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
        }
        if ( v25 == 8 || v25 == 9 )
        {
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText("Double Disk:", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v79 = (unsigned int *)off_1402B2890[*(v23 - 11)];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "We have received reports that /s and",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v79 = (unsigned int *)off_1402B2890[*(v23 - 10)];
          sr_CSDrawText(
            "/s have each acquired a disk containing",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          sr_CSDrawText(
            "part of the data for a new technology we need.",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "We require both disks, one alone is worthless.",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 32.0;
          v78 = 1065353216;
          v37 = v18;
          *(float *)SR_VEC_LANES(128, v37, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v56 = *(v23 - 15) == 8;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          v38 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18);
          if ( v56 )
          {
            sr_CSDrawText("Negotiate the best terms and execute the deal.", 520.0, v38, 16.0);
            LODWORD(v79) = v23[1];
            v78 = 1065353216;
            v77 = 0;
            v76 = 0;
            v18 = v37;
            v75 = 0;
            v74 = 0;
            sr_CSDrawText(
              "You have been provided with $/i.",
              520.0,
              (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v37),
              16.0);
            *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v37, i32) + 16.0;
          }
          else
          {
            sr_CSDrawText("Acquire the disks by any means neccessary.", 520.0, v38, 16.0);
            v18 = v37;
          }
          v39 = 1268LL * (int)*(v23 - 3);
          LODWORD(v80) = *(v23 - 2);
          v79 = &dword_140404A6C[v39 + 278521297];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "/ss value:               $/i Bonus",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v25 = *(v23 - 15);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
        }
        if ( (unsigned int)(v25 - 5) <= 1 )
        {
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText("Three-way Deal:", 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18), 16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v79 = (unsigned int *)off_1402B2890[*(v23 - 11)];
          sr_CSDrawText(
            "We have received reports that /s has acquired a disk",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          v78 = 1065353216;
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "containing information that will be beneficial to one of our",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          v41 = v18;
          v40 = v18;
          *(float *)SR_VEC_LANES(128, v41, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
          if ( *(v23 - 15) == 5 )
          {
            v78 = 1065353216;
            v77 = 0;
            v76 = 0;
            v75 = 0;
            v74 = 0;
            sr_CSDrawText(
              "subsidiaries.  We have a disk to trade with another",
              520.0,
              (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
              16.0);
            v18 = v41;
            v42 = "corporation.  Execute the deal.";
            *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v41, i32) + 16.0;
            v40 = v41;
          }
          else
          {
            v18 = v41;
            v42 = "subsidiaries.  Acquire the disk by any means neccessary.";
          }
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(v42, 520.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v40), 16.0);
          v43 = 1268LL * (int)*(v23 - 3);
          LODWORD(v80) = *(v23 - 2);
          v79 = &dword_140404A6C[v43 + 278521297];
          v78 = 1065353216;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          sr_CSDrawText(
            "/s value:               $/i Bonus",
            520.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18),
            16.0);
          *(float *)SR_VEC_LANES(128, v18, i32) = *(float *)SR_VEC_LANES(128, v18, i32) + 16.0;
        }
        ++v22;
      }
      v23 += 279;
      --v24;
    }
    while ( v24 );
    v3 = v83;
    if ( !v22 )
    {
      v44 = "Lunch break";
      v78 = 1065353216;
      v77 = 0;
      v76 = 0;
      v75 = 0;
      v45 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v18);
      v74 = 0;
      if ( dword_140404A6C[179992853] - 2592000 > 0x34BBF )
        v44 = "No current missions";
      sr_CSDrawText(v44, 520.0, v45, 16.0);
    }
  }
LABEL_105:
  v46 = 1020.0;
  v47 = _mm_cvtsi32_si128((int)(0x40800000u));
  if ( dword_140404A6C[283831312] == 4 )
  {
    v48 = (signed int)dword_140404A6C[179992853] / 3600 / 60 % -12;
    if ( !v48 )
      v48 = 12;
    v49 = (signed int)dword_140404A6C[179992853] / 3600 % 60;
    v81 = v49 % 10;
    LODWORD(v80) = v49 / 10 % 6;
    LODWORD(v79) = v48;
    v78 = 1065353216;
    v77 = 1065353216;
    v76 = 1065353216;
    v75 = 1065353216;
    LODWORD(v74) = 2;
    sr_CSDrawText("/i:/i/i", 1020.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    LODWORD(v79) = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856272];
    v78 = 1065353216;
    v77 = 1065353216;
    v76 = 1065353216;
    v75 = 1065353216;
    v74 = 0;
    sr_CSDrawText("$/I", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    if ( (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856276] > 0 )
    {
      LODWORD(v79) = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856276];
      v78 = 1065353216;
      v77 = 0;
      v76 = 0;
      v75 = 1065353216;
      v74 = 0;
      sr_CSDrawText(
        "Wanted Level:/i",
        768.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))),
        24.0);
    }
    v46 = 512.0;
    v47 = _mm_cvtsi32_si128((int)(0x43A80000u));
    v50 = 3597LL * (int)dword_140404A6C[284024501];
    if ( dword_140404A6C[v50 + 71856342] == 1 )
    {
      v51 = dword_140404A6C[v50 + 71856291];
      if ( v51 > 0 )
      {
        LODWORD(v79) = v51 / 60;
        v78 = 1065353216;
        v77 = 1065353216;
        v76 = 1065353216;
        v75 = 1065353216;
        LODWORD(v74) = 1;
        sr_CSDrawText(
          "Respawn in /i",
          512.0,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43A80000u))),
          24.0);
      }
    }
  }
  if ( dword_140404A6C[283831312] == 2 )
  {
    if ( dword_140404A6C[283831448] == 1 )
    {
      v81 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      LODWORD(v80) = (signed int)dword_140404A6C[283831450] / 60 / 10 % 6;
      LODWORD(v79) = (signed int)dword_140404A6C[283831450] / 60 / 60;
      v78 = 1065353216;
      v77 = 1065353216;
      v76 = 1065353216;
      v75 = 1065353216;
      LODWORD(v74) = 2;
      sr_CSDrawText("Start: /i:/i/i", v46, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v47), 24.0);
    }
    else
    {
      if ( dword_140404A6C[283831448] != 2 )
        goto LABEL_133;
      if ( (int)dword_140404A6C[284022086] <= 0 )
      {
        v78 = 1065353216;
        v77 = 1065353216;
        v76 = 1065353216;
        v75 = 1065353216;
        LODWORD(v74) = 2;
        sr_CSDrawText("Get Ready", v46, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v47), 24.0);
      }
      else
      {
        v82 = (signed int)dword_140404A6C[284022086] / 6 % 10;
        v81 = (signed int)dword_140404A6C[284022086] / 60 % 10;
        LODWORD(v80) = (signed int)dword_140404A6C[284022086] / 60 / 10 % 6;
        LODWORD(v79) = (signed int)dword_140404A6C[284022086] / 60 / 60;
        v78 = 1065353216;
        v77 = 1065353216;
        v76 = 1065353216;
        v75 = 1065353216;
        LODWORD(v74) = 2;
        sr_CSDrawText("/i:/i/i./i", v46, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v47), 24.0);
      }
    }
  }
  if ( ((dword_140404A6C[283831312] - 3) & 0xFFFFFFF9) != 0 || dword_140404A6C[283831312] == 9 )
    goto LABEL_133;
  dword_140404A6C[438291413] = 1;
  switch ( dword_140404A6C[283831448] )
  {
    case 0u:
      v81 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      v52 = "Start: /i:/i/i";
      LODWORD(v80) = (signed int)dword_140404A6C[283831450] / 60 / 10 % 6;
      v53 = (unsigned __int64)(2290649225LL * ((signed int)dword_140404A6C[283831450] / 60)) >> 32;
LABEL_131:
      LODWORD(v79) = ((unsigned int)v53 >> 31) + (v53 >> 5);
      v78 = 1065353216;
      v77 = 1065353216;
      v76 = 1065353216;
      v75 = 1065353216;
      LODWORD(v74) = 2;
      sr_CSDrawText(v52, v46, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v47), 24.0);
      break;
    case 1u:
      v54 = (signed int)dword_140404A6C[283831450] / 60;
      v55 = (signed int)dword_140404A6C[283831450] / 60 / 10;
      v81 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      v52 = "Start: /i:/i/i";
LABEL_130:
      LODWORD(v80) = v55 % 6;
      v53 = (unsigned __int64)(2290649225LL * v54) >> 32;
      goto LABEL_131;
    case 2u:
      v54 = (signed int)dword_140404A6C[283831450] / 60;
      v55 = (signed int)dword_140404A6C[283831450] / 60 / 10;
      v81 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      v52 = "/i:/i/i";
      goto LABEL_130;
    case 3u:
      v54 = (signed int)dword_140404A6C[283831450] / 60;
      v55 = (signed int)dword_140404A6C[283831450] / 60 / 10;
      v81 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      v52 = "Restart: /i:/i/i";
      goto LABEL_130;
  }
  dword_140404A6C[438291413] = 0;
LABEL_133:
  if ( dword_140404A6C[283831448] == 1 )
    v56 = *(unsigned int *)((char *)&dword_140404A6C[71856342] + v3) == 2;
  else
    v56 = dword_140404A6C[283831448] == 3;
  if ( v56
    || ((dword_140404A6C[283831312] - 3) & 0xFFFFFFFB) == 0
    && !dword_140404A6C[280648133]
    && HIBYTE(dword_140404A6C[284024767]) )
  {
    if ( dword_140404A6C[283831312] == 5 )
    {
      sub_140084EB0();
    }
    else if ( dword_140404A6C[283831312] == 7 )
    {
      sub_14008B050();
    }
    else
    {
      sub_14008A110();
    }
  }
  v57 = _mm_cvtsi32_si128((int)(0x43C80000u));
  dword_140404A6C[438291413] = 2;
  for ( j = (unsigned __int8)(LOBYTE(dword_140404A6C[346706173]) + 1);
        j != LOBYTE(dword_140404A6C[346706173]);
        j = (unsigned __int8)(j + 1) )
  {
    v59 = 38LL * j;
    v60 = dword_140404A6C[v59 + 346696445];
    if ( (v60 & 0xFFFFFFF9) == 0 && v60 != 2 )
    {
      v61 = dword_140404A6C[v59 + 346696447];
      if ( v61 > 0 && (int)dword_140404A6C[v59 + 346696448] > 0 )
      {
        v62 = 1065353216;
        v63 = (float)v61 * 0.0049999999;
        if ( v60 == 6 )
        {
          if ( dword_140404A6C[284024501] == dword_140404A6C[v59 + 346696449] )
          {
            v64 = -1;
            goto LABEL_167;
          }
        }
        else if ( dword_140404A6C[283831448] == 3
               || dword_140404A6C[284024501] == -1
               || (v66 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292], (_DWORD)v66 == -1)
               || (int)dword_140404A6C[7166 * v66 + 280651318] <= 0
               || dword_140404A6C[v59 + 346696449] == -1 )
        {
          v64 = -1;
          if ( v60 == 1 )
          {
            v67 = (int)dword_140404A6C[v59 + 346696449];
            if ( (_DWORD)v67 != -1 )
              v64 = dword_140404A6C[7166 * v67 + 280651305];
LABEL_167:
            v65 = v64;
            if ( v64 != -1 )
            {
LABEL_168:
              if ( v60 != 6 )
              {
                sub_140158AB0(
                  &dword_140404A6C[18601357],
                  "%s: %s",
                  (     char *)&dword_140404A6C[3597 * v65 + 71856254],
                  (     char *)&dword_140404A6C[v59 + 346696451]);
LABEL_172:
                if ( dword_140404A6C[38 * j + 346696445] == 6 )
                  v62 = 0;
                v78 = LODWORD(v63);
                v77 = v62;
                v76 = v62;
                v75 = 1065353216;
                LODWORD(v74) = 96;
                sr_CSDrawText(
                  (char *)&dword_140404A6C[18601357],
                  4.0,
                  (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v57),
                  20.0);
                *(float *)SR_VEC_LANES(128, v57, i32) = *(float *)SR_VEC_LANES(128, v57, i32) + 20.0;
                continue;
              }
            }
LABEL_170:
            v69 = &dword_140404A6C[v59 + 346696451];
            v70 = (char *)&dword_140404A6C[18601357] - (char *)&dword_140404A6C[v59 + 346696451];
            do
            {
              v71 = *(_BYTE *)v69;
              *((_BYTE *)v69 + v70) = *(_BYTE *)v69;
              v69 = (unsigned int *)((char *)v69 + 1);
            }
            while ( v71 );
            goto LABEL_172;
          }
          if ( v60 )
            goto LABEL_167;
          v68 = dword_140404A6C[v59 + 346696449];
          if ( v68 == -1 )
            goto LABEL_170;
          v65 = v68;
          if ( !dword_140404A6C[v68 + 284023074] )
            goto LABEL_168;
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14008475A: conditional instruction was optimized away because r8d.4 is in (==1|==6)
// 140082600: variable 'v1' is possibly undefined
// 140082721: variable 'v4' is possibly undefined
// 1400827B5: variable 'v5' is possibly undefined
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183F7C34C: using guessed type unsigned int;
// 192E98E60: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140084950) ----------------------------------------------------
void sub_140084950()
{
  if ( !dword_140404A6C[309078286] )
  {
    sr_CSDrawText("Place Building", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    sr_CSDrawText(
      (char *)&dword_140404A6C[22 * dword_140404A6C[309078328] + 225368653],
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))),
      20.0);
    if ( dword_140404A6C[309078326] != -1 )
    {
      sr_CSDrawText(
        (char *)&dword_140404A6C[24 * dword_140404A6C[309078326] + 225171851],
        4.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43DC0000u))),
        16.0);
      sr_CSDrawText("/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43E40000u))), 16.0);
    }
  }
  if ( dword_140404A6C[309078286] == 1 )
  {
    sr_CSDrawText("Select Area", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    sr_CSDrawText("sectors:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))), 16.0);
    sr_CSDrawText("type:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))), 16.0);
    sr_CSDrawText("x:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43800000u))), 16.0);
    sr_CSDrawText("y:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))), 16.0);
    sr_CSDrawText("z:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43900000u))), 16.0);
  }
  if ( dword_140404A6C[309078286] == 2 )
  {
    sr_CSDrawText("Street", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    sr_CSDrawText(
      "intersectionnum:/i",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))),
      16.0);
    sr_CSDrawText("streetnum:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))), 16.0);
  }
  if ( dword_140404A6C[309078286] == 3 )
  {
    sr_CSDrawText("Mission", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    sr_CSDrawText("numofguards:/i", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))), 16.0);
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140084EB0) ----------------------------------------------------
__int64 sub_140084EB0()
{
  unsigned int v0; // eax
  __m128i v1; // xmm9
  char *v2; // rcx
  char *v3; // rcx
  unsigned int *v4; // r8
  signed int v5; // r11d
  signed int v6; // r9d
  signed int v7; // ebx
  unsigned int *v8; // r10
  char *v9; // rcx
  bool v10; // zf
  char *v11; // rax
  char *v12; // rcx
  unsigned int *v13; // r8
  signed int v14; // r11d
  signed int v15; // r9d
  signed int v16; // ebx
  unsigned int *v17; // r10
  char *v18; // rcx
  char *v19; // rax
  char *v20; // rcx
  signed int v21; // r11d
  signed int v22; // r9d
  signed int v23; // ebx
  unsigned int *v24; // r10
  char *v25; // rcx
  char *v26; // rax
  unsigned int v27; // eax
  unsigned int *v28; // rcx
  int v29; // edx
  unsigned int *v30; // rsi
  int i; // ebp
  __int64 v32; // rbx
  int v33; // edx
  float v34; // xmm10_4
  __int64 v35; // rbx
  __m128i v36; // xmm2
  _BYTE v38[32]; // [rsp+0h] [rbp-528h] BYREF
  int v39; // [rsp+20h] [rbp-508h]
  float v40; // [rsp+28h] [rbp-500h]
  float v41; // [rsp+30h] [rbp-4F8h]
  int v42; // [rsp+38h] [rbp-4F0h]
  int v43; // [rsp+40h] [rbp-4E8h]
  int v44; // [rsp+48h] [rbp-4E0h]
  int v45; // [rsp+50h] [rbp-4D8h]
  char v46[1024]; // [rsp+60h] [rbp-4C8h] BYREF
  __int64 v47; // [rsp+460h] [rbp-C8h]

  v0 = dword_140404A6C[283831448];
  v1 = _mm_cvtsi32_si128((int)(0x43000000u));
  if ( dword_140404A6C[283831448] == 3 )
  {
    if ( (int)dword_140404A6C[283831505] <= 0 )
    {
      v2 = "Eliminator Wins!";
      if ( dword_140404A6C[284022317] != 1 )
        v2 = "Eliminators Wins!";
    }
    else
    {
      v2 = "Humans Win!";
    }
    v40 = 1.0;
    v39 = 32;
    sr_CSDrawText(v2, 256.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))), 32.0);
    v43 = 1065353216;
    v3 = "The Eliminator";
    v42 = 1065353216;
    v41 = 0.75;
    v4 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u)));
    if ( dword_140404A6C[284022317] != 1 )
      v3 = "The Eliminators";
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(v3, 4.0, v4, 20.0);
    v5 = dword_140404A6C[284022317];
    v46[0] = 0;
    v6 = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v7 = dword_140404A6C[284022317] - 1;
      v8 = &dword_140404A6C[284022319];
      do
      {
        v9 = &v38[95];
        do
          v10 = *++v9 == 0;
        while ( !v10 );
        strcpy(v9, (     char *)&dword_140404A6C[3597 * *v8 + 71856254]);
        if ( v6 < v7 )
        {
          v11 = &v38[95];
          do
            v10 = *++v11 == 0;
          while ( !v10 );
          strcpy(v11, ", ");
        }
        ++v6;
        v8 += 9;
      }
      while ( v6 < v5 );
    }
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(v46, 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43140000u))), 20.0);
    v43 = 1065353216;
    v12 = "The Savior";
    v42 = 1065353216;
    v41 = 0.75;
    v13 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x433C0000u)));
    if ( dword_140404A6C[284022317] != 1 )
      v12 = "The Saviors";
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(v12, 4.0, v13, 20.0);
    v14 = dword_140404A6C[284022317];
    v15 = 0;
    v46[0] = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v16 = dword_140404A6C[284022317] - 1;
      v17 = &dword_140404A6C[284022318];
      do
      {
        v18 = &v38[95];
        do
          v10 = *++v18 == 0;
        while ( !v10 );
        strcpy(v18, (     char *)&dword_140404A6C[3597 * *v17 + 71856254]);
        if ( v15 < v16 )
        {
          v19 = &v38[95];
          do
            v10 = *++v19 == 0;
          while ( !v10 );
          strcpy(v19, ", ");
        }
        ++v15;
        v17 += 9;
      }
      while ( v15 < v14 );
    }
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(v46, 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43500000u))), 20.0);
    v20 = "The Protector";
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    if ( dword_140404A6C[284022317] != 1 )
      v20 = "The Protectors";
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(v20, 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43780000u))), 20.0);
    v21 = dword_140404A6C[284022317];
    v22 = 0;
    v46[0] = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v23 = dword_140404A6C[284022317] - 1;
      v24 = &dword_140404A6C[284022320];
      do
      {
        v25 = &v38[95];
        do
          v10 = *++v25 == 0;
        while ( !v10 );
        strcpy(v25, (     char *)&dword_140404A6C[3597 * *v24 + 71856254]);
        if ( v22 < v23 )
        {
          v26 = &v38[95];
          do
            v10 = *++v26 == 0;
          while ( !v10 );
          strcpy(v26, ", ");
        }
        ++v22;
        v24 += 9;
      }
      while ( v22 < v21 );
    }
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(v46, 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43860000u))), 20.0);
    v0 = dword_140404A6C[283831448];
  }
  if ( v0 == 1 )
  {
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    dword_140404A6C[438291413] = 2;
    v39 = 32;
    sr_CSDrawText("THE ELIMINATOR", 256.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 32.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "It is the present, the year 1985.",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))),
      20.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "A robot from the year 2019 has been sent back in time",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A80000u))),
      20.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "to eliminate the future resistance leader.  The future people",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))),
      20.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "also sent someone back to stop the robot.",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42F80000u))),
      20.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText("The Eliminator", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43240000u))), 24.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "You must kill the future resistance leader.",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x433C0000u))),
      20.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "A red box will appear in the HUD showing their last known location.",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43500000u))),
      20.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText("The Protector", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43780000u))), 24.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "You must stop The Eliminator, the only way to destroy it is with grenades.",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))),
      20.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "Civilian//The Savior",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439C0000u))),
      24.0);
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_CSDrawText(
      "Your goal is to survive, one of you is the future savior of mankind.",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43A80000u))),
      20.0);
    v27 = 0;
    v28 = &dword_140404A6C[71859139];
    dword_140404A6C[346695797] = 0;
    v29 = 0;
    v30 = &dword_140404A6C[346695798];
    do
    {
      if ( *(v28 - 2886) && !*v28 )
      {
        dword_140404A6C[2 * v27 + 346695798] = v29;
        v27 = ++dword_140404A6C[346695797];
      }
      ++v29;
      v28 += 3597;
    }
    while ( v29 < 256 );
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 1.0;
    v40 = 1.0;
    v39 = 96;
    sr_CSDrawText("The Players", 776.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42C40000u))), 17.5);
    for ( i = 0; i < (int)dword_140404A6C[346695797]; v30 += 2 )
    {
      v32 = *v30;
      if ( (unsigned int)v32 > 0xFF )
        v32 = 0;
      if ( dword_140404A6C[283831448] != 2 && (_DWORD)v32 != dword_140404A6C[284024501] )
      {
        v45 = 1065353216;
        v44 = 1065353216;
        v43 = 1065353216;
        v42 = 1065353216;
        v41 = 0.0;
        v40 = 24.0;
        v39 = 1103101952;
        if ( dword_140404A6C[v32 + 284023074] )
          v33 = dword_140404A6C[346696312];
        else
          v33 = dword_140404A6C[3597 * (unsigned int)v32 + 71856270]
              ? dword_140404A6C[346696311]
              : dword_140404A6C[346696310];
        sr_CSDrawAtlasEntry(0, v33, 752.0, *(float *)SR_VEC_LANES(128, v1, i32), *(float *)&v39, v40, SLOBYTE(v41), v42, v43, v44, v45);
        if ( dword_140404A6C[284024633] )
        {
          if ( !dword_140404A6C[346696313]
            && *(float *)&dword_140404A6C[284024597] >= 752.0
            && *(float *)&dword_140404A6C[284024597] < 776.0
            && *(float *)&dword_140404A6C[284024598] >= *(float *)SR_VEC_LANES(128, v1, i32)
            && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)SR_VEC_LANES(128, v1, i32) + 24.0) )
          {
            dword_140404A6C[v32 + 284023074] ^= 1u;
          }
        }
      }
      v34 = 1.0;
      if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v32 + 71856271] )
        v34 = 0.5;
      v43 = 1065353216;
      v42 = LODWORD(v34);
      v35 = 3597LL * (unsigned int)v32;
      v41 = v34 * 0.75;
      v40 = v34 * 0.75;
      v39 = 96;
      sr_CSDrawText(
        (char *)&dword_140404A6C[v35 + 71856254],
        776.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v1),
        17.5);
      sub_140158AB0(
        v46,
        "%03d-%04d",
        dword_140404A6C[v35 + 71856265] / 0x2710,
        dword_140404A6C[v35 + 71856265] % 0x2710);
      v43 = 1065353216;
      v36 = v1;
      *(float *)SR_VEC_LANES(128, v36, i32) = *(float *)SR_VEC_LANES(128, v1, i32) + 18.0;
      v42 = LODWORD(v34);
      v41 = v34 * 0.75;
      v40 = v34 * 0.75;
      v39 = 96;
      sr_CSDrawText(v46, 776.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v36), 10.0);
      ++i;
      *(float *)SR_VEC_LANES(128, v1, i32) = *(float *)SR_VEC_LANES(128, v1, i32) + 24.0;
    }
  }
  dword_140404A6C[438291413] = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCCC: using guessed type unsigned int;
// 183F7A320: using guessed type unsigned int;
// 192E8EC40: using guessed type unsigned int;
// 192E8F444: using guessed type unsigned int;
// 192E8F448: using guessed type unsigned int;
// 192E8F44C: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140085AA0) ----------------------------------------------------
__int64 sub_140085AA0()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __m128i v2; // xmm7
  __int64 v3; // rbx
  __int64 v4; // rsi
  bool v5; // cc
  __m128i v6; // xmm10
  unsigned int *v7; // r8
  int v8; // eax
  unsigned int v9; // eax
  char *v10; // rcx
  __int64 v12; // [rsp+0h] [rbp-2B8h] BYREF
  int v13; // [rsp+20h] [rbp-298h]
  int v14; // [rsp+28h] [rbp-290h]
  int v15; // [rsp+30h] [rbp-288h]
  int v16; // [rsp+38h] [rbp-280h]
  int v17; // [rsp+40h] [rbp-278h]
  char v18[512]; // [rsp+50h] [rbp-268h] BYREF
  __int64 v19; // [rsp+250h] [rbp-68h]

  if ( dword_140404A6C[284024501] == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v0 = 3597LL * (int)dword_140404A6C[284024501];
  v1 = (int)dword_140404A6C[v0 + 71856292];
  if ( dword_140404A6C[280649838] )
    return 0; /* compatibility result discarded by all reviewed callers */
  v17 = 1065353216;
  v16 = 1065353216;
  v15 = 1065353216;
  v14 = 1065353216;
  v13 = 32;
  sr_CSDrawText(
    "Press F1 to toggle help",
    4.0,
    (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42C00000u))),
    20.0);
  v2 = _mm_cvtsi32_si128((int)(0x43080000u));
  if ( (_DWORD)v1 == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v3 = 7166 * v1;
  if ( (int)dword_140404A6C[v3 + 280658149] > 0
    && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v3 + 280658150] + 278845898] + 278521289] )
  {
    v17 = 1065353216;
    v16 = 1065353216;
    v15 = 1065353216;
    v14 = 1065353216;
    v13 = 32;
    sr_CSDrawText(
      "Press F to swap your weapon to your right hand",
      4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43080000u))),
      20.0);
    v2 = _mm_cvtsi32_si128((int)(0x431C0000u));
  }
  if ( (int)dword_140404A6C[v3 + 280658139] > 0 )
  {
    v4 = 1760LL * (int)dword_140404A6C[v3 + 280658140];
    if ( dword_140404A6C[v4 + 278845898] == 13 )
    {
      sr_CSDrawText("Press R to arm grenade", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2), 20.0);
      v17 = 1065353216;
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
      v16 = 1065353216;
      v15 = 1065353216;
      v14 = 1065353216;
      v13 = 32;
      sr_CSDrawText(
        "Hold Q, move mouse up and release Q to throw",
        4.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2),
        20.0);
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
    }
    if ( dword_140404A6C[1268 * dword_140404A6C[v4 + 278845898] + 278521289] )
    {
      if ( (int)dword_140404A6C[v3 + 280658149] <= 0 )
      {
        v8 = (int)dword_140404A6C[v0 + 71857715] >> 8;
        if ( !v8 || v8 == 3 )
        {
          v17 = 1065353216;
          v16 = 1065353216;
          v15 = 1065353216;
          v14 = 1065353216;
          v13 = 32;
          sr_CSDrawText(
            "Press 2-5 to put a magazine in your left hand",
            4.0,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2),
            20.0);
          *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
        }
      }
      else if ( dword_140404A6C[1760 * dword_140404A6C[v3 + 280658150] + 278845898] - 1 == dword_140404A6C[v4 + 278845898] )
      {
        v5 = (dword_140404A6C[v0 + 71857724] & 0x80000000) != 0 || (dword_140404A6C[v0 + 71857724] & 0xFFFFFF00) == 0;
        v6 = v2;
        v17 = 1065353216;
        v16 = 1065353216;
        v15 = 1065353216;
        v14 = 1065353216;
        v13 = 32;
        v7 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2);
        if ( v5 )
          sr_CSDrawText("Press Q to drop empty magazine", 4.0, v7, 20.0);
        else
          sr_CSDrawText("Press R to load magazine", 4.0, v7, 20.0);
        *(float *)SR_VEC_LANES(128, v6, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
        v2 = v6;
      }
    }
    v9 = dword_140404A6C[v4 + 278845898];
    if ( v9 == 15 )
    {
      sub_140158AB0(v18, "%s to open briefcase", off_1402B29C0[0]);
      v17 = 1065353216;
      v16 = 1065353216;
      v15 = 1065353216;
      v14 = 1065353216;
      v13 = 32;
      sr_CSDrawText(v18, 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2), 20.0);
      v9 = dword_140404A6C[v4 + 278845898];
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
    }
    if ( v9 == 16 )
    {
      sub_140158AB0(v18, "%s to close briefcase", off_1402B29C0[0]);
      v17 = 1065353216;
      v16 = 1065353216;
      v15 = 1065353216;
      v14 = 1065353216;
      v13 = 32;
      sr_CSDrawText(v18, 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2), 20.0);
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
      if ( (int)dword_140404A6C[v3 + 280658149] <= 0 )
      {
        if ( (dword_140404A6C[v0 + 71857715] & 0xFFFFFF00) != 0x100 )
          goto LABEL_28;
        v10 = "Press R to unload item from briefcase";
      }
      else
      {
        v10 = "Press R to load item into briefcase";
      }
      v17 = 1065353216;
      v16 = 1065353216;
      v15 = 1065353216;
      v14 = 1065353216;
      v13 = 32;
      sr_CSDrawText(v10, 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2), 20.0);
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
    }
  }
LABEL_28:
  if ( *(float *)&dword_140404A6C[v3 + 280651456] < 0.69999999 )
  {
    v17 = 1065353216;
    v16 = 1065353216;
    v15 = 1065353216;
    v14 = 1065353216;
    v13 = 32;
    sr_CSDrawText("Hold CTRL to stand up", 4.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2), 20.0);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140086228: variable 'v10' is possibly undefined
// 140086266: variable 'v11' is possibly undefined
// 1400862F4: variable 'v13' is possibly undefined
// 1400862F4: variable 'v12' is possibly undefined
// 1400862F4: variable 'v14' is possibly undefined
// 14008630F: variable 'v16' is possibly undefined
// 14008630F: variable 'v15' is possibly undefined
// 14008630F: variable 'v17' is possibly undefined
// 14008631F: variable 'v19' is possibly undefined
// 14008631F: variable 'v18' is possibly undefined
// 14008631F: variable 'v20' is possibly undefined
// 140086332: variable 'v22' is possibly undefined
// 140086332: variable 'v21' is possibly undefined
// 140086332: variable 'v23' is possibly undefined
// 14008635A: variable 'v24' is possibly undefined
// 14008636D: variable 'v26' is possibly undefined
// 14008636D: variable 'v25' is possibly undefined
// 14008636D: variable 'v27' is possibly undefined
// 1400863B1: variable 'v29' is possibly undefined
// 1400863B1: variable 'v28' is possibly undefined
// 1400863B1: variable 'v30' is possibly undefined
// 1400863CD: variable 'v32' is possibly undefined
// 1400863CD: variable 'v31' is possibly undefined
// 1400863CD: variable 'v33' is possibly undefined
// 1400863E7: variable 'v34' is possibly undefined
// 140086425: variable 'v36' is possibly undefined
// 140086425: variable 'v35' is possibly undefined
// 140086425: variable 'v37' is possibly undefined
// 140086433: variable 'v39' is possibly undefined
// 140086433: variable 'v38' is possibly undefined
// 140086433: variable 'v40' is possibly undefined
// 14008644D: variable 'v41' is possibly undefined
// 140086489: variable 'v43' is possibly undefined
// 140086489: variable 'v42' is possibly undefined
// 140086489: variable 'v44' is possibly undefined
// 14008648E: variable 'v46' is possibly undefined
// 14008648E: variable 'v45' is possibly undefined
// 14008648E: variable 'v47' is possibly undefined
// 140086A21: variable 'v59' is possibly undefined
// 140086A7A: variable 'v60' is possibly undefined
// 140086AEB: variable 'v63' is possibly undefined
// 140086EFD: variable 'v71' is possibly undefined
// 140086F4B: variable 'v72' is possibly undefined
// 140086FF0: variable 'v65' is possibly undefined
// 140086FF0: variable 'v64' is possibly undefined
// 140087036: variable 'v74' is possibly undefined
// 140087036: variable 'v73' is possibly undefined
// 1400870A6: variable 'v75' is possibly undefined
// 1400870E7: variable 'v76' is possibly undefined
// 140087128: variable 'v77' is possibly undefined
// 140087165: variable 'v78' is possibly undefined
// 1400873C8: variable 'v82' is possibly undefined
// 140087453: variable 'v83' is possibly undefined
// 140087453: variable 'v84' is possibly undefined
// 14008746A: variable 'v89' is possibly undefined
// 14008746A: variable 'v90' is possibly undefined
// 14008747E: variable 'v91' is possibly undefined
// 1400874C7: variable 'v93' is possibly undefined
// 1400874C7: variable 'v94' is possibly undefined
// 1400874D6: variable 'v95' is possibly undefined
// 1400875AA: variable 'v97' is possibly undefined
// 1400875AA: variable 'v96' is possibly undefined
// 1400875AA: variable 'v98' is possibly undefined
// 1400875E2: variable 'v100' is possibly undefined
// 1400875E2: variable 'v99' is possibly undefined
// 1400875E2: variable 'v101' is possibly undefined
// 1400875E7: variable 'v103' is possibly undefined
// 1400875E7: variable 'v102' is possibly undefined
// 1400875E7: variable 'v104' is possibly undefined
// 140087683: variable 'v106' is possibly undefined
// 140087683: variable 'v105' is possibly undefined
// 140087683: variable 'v107' is possibly undefined
// 140087699: variable 'v109' is possibly undefined
// 140087699: variable 'v108' is possibly undefined
// 140087699: variable 'v110' is possibly undefined
// 1400876AF: variable 'v112' is possibly undefined
// 1400876AF: variable 'v111' is possibly undefined
// 1400876AF: variable 'v113' is possibly undefined
// 1400876C4: variable 'v115' is possibly undefined
// 1400876C4: variable 'v114' is possibly undefined
// 1400876C4: variable 'v116' is possibly undefined
// 1400876D9: variable 'v118' is possibly undefined
// 1400876D9: variable 'v117' is possibly undefined
// 1400876D9: variable 'v119' is possibly undefined
// 1400876EF: variable 'v121' is possibly undefined
// 1400876EF: variable 'v120' is possibly undefined
// 1400876EF: variable 'v122' is possibly undefined
// 140087705: variable 'v124' is possibly undefined
// 140087705: variable 'v123' is possibly undefined
// 140087705: variable 'v125' is possibly undefined
// 14008771A: variable 'v127' is possibly undefined
// 14008771A: variable 'v126' is possibly undefined
// 14008771A: variable 'v128' is possibly undefined
// 14008771F: variable 'v130' is possibly undefined
// 14008771F: variable 'v129' is possibly undefined
// 14008771F: variable 'v131' is possibly undefined
// 14008778C: variable 'v132' is possibly undefined
// 140279410: using guessed type __int128 xmmword_140279410;
// 140279430: using guessed type __int128 xmmword_140279430;
// 140279460: using guessed type __int128 xmmword_140279460;
// 140279470: using guessed type __int128 xmmword_140279470;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399EF70: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (0000000140087810) ----------------------------------------------------
__int64            sub_140087810(int a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  signed int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // ecx
  float v9; // xmm0_4
  int v10; // xmm1_4
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // eax
  char v14; // dl
  __int64 v15; // rdx
  float v16; // xmm0_4
  float v17; // xmm2_4
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int *v20; // r14
  __int64 v21; // r15
  unsigned int *v22; // rbp
  __int64 v23; // xmm9_8
  __m128i v24; // xmm7
  double v25; // xmm8_8
  __int64 v26; // r8
  signed int v27; // esi
  int *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // r8
  float v31; // xmm0_4
  float v32; // xmm1_4
  int v33; // edx
  char *v34; // rcx
  unsigned int *v35; // r8
  unsigned __int64 v36; // rbp
  __int64 v37; // r12
  _BYTE *v38; // r14
  __int64 v39; // r13
  float *v40; // r15
  int v41; // edi
  unsigned int *v42; // rsi
  float v43; // xmm9_4
  __int64 v44; // rbx
  double v45; // xmm7_8
  double v46; // xmm10_8
  __m128i v47; // xmm8
  __int64 v48; // r8
  __m128i v49; // xmm2
  float v50; // xmm3_4
  signed int v51; // edi
  __int64 v52; // rbx
  __int64 v53; // rdx
  int v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  __int64 v58; // [rsp+0h] [rbp-1B8h] BYREF
  int v59; // [rsp+20h] [rbp-198h]
  int v60; // [rsp+28h] [rbp-190h]
  int v61; // [rsp+30h] [rbp-188h]
  int v62; // [rsp+38h] [rbp-180h]
  int v63; // [rsp+40h] [rbp-178h]
  int v64; // [rsp+48h] [rbp-170h]
  int v65; // [rsp+50h] [rbp-168h]
  _BOOL8 v66; // [rsp+60h] [rbp-158h]
  unsigned __int64 v67; // [rsp+68h] [rbp-150h]
  __int64 v68; // [rsp+70h] [rbp-148h]
  __int64 v69; // [rsp+78h] [rbp-140h]
  __int64 v70; // [rsp+80h] [rbp-138h]
  int v71; // [rsp+90h] [rbp-128h]
  _QWORD v72[2]; // [rsp+94h] [rbp-124h] BYREF
  char v73; // [rsp+A4h] [rbp-114h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-E8h]

  v2 = 7166LL * a2;
  v3 = a1;
  v4 = -1;
  if ( (int)dword_140404A6C[v2 + 280658139] > 0 )
    v4 = dword_140404A6C[v2 + 280658140];
  v66 = 0;
  v68 = 1;
  if ( v4 != -1 )
  {
    v5 = 1760LL * v4;
    v6 = dword_140404A6C[v5 + 278845898];
    if ( v6 == 25 || (v66 = 0, v6 == 33) )
      v66 = dword_140404A6C[v5 + 278846052] == 1;
  }
  v7 = 0;
  v8 = -2;
  do
  {
    if ( (unsigned __int64)v7 >= 2 )
    {
      v10 = 1141374976;
      v9 = (float)((float)v8 * 140.0) + 212.0;
    }
    else
    {
      v9 = 608.0;
      if ( v7 == 1 )
        v9 = 416.0;
      v10 = 1140195328;
    }
    *((float *)&v71 + 2 * v7) = v9;
    ++v8;
    LODWORD(v72[v7++]) = v10;
  }
  while ( v7 < 7 );
  v11 = dword_140404A6C[v2 + 280658335];
  dword_140404A6C[438291413] = 1;
  if ( v11 - 1 <= 1 )
  {
    v12 = (int)dword_140404A6C[v2 + 280658338];
    if ( v11 == 2 )
    {
      v13 = dword_140404A6C[v2 + 280658339] + 2;
      v14 = v13;
      if ( dword_140404A6C[3597 * v3 + 71857714 + 9 * v12] )
      {
        v14 = dword_140404A6C[v2 + 280658338];
        LOBYTE(v12) = v13;
      }
    }
    else
    {
      v14 = dword_140404A6C[v2 + 280658338];
      LOBYTE(v12) = v12 ^ 1;
    }
    v15 = v14 & 7;
    v16 = *((float *)&v71 + 2 * v15);
    v17 = *(float *)&v72[v15];
    v18 = 14388 * v3 + 36 * v15;
    if ( *(int *)((char *)&dword_140404A6C[71857714] + v18) > 0 )
    {
      v19 = (int)dword_140404A6C[*((unsigned __int8 *)&dword_140404A6C[71857715] + v18) + 282486849];
      if ( (_DWORD)v19 != -1 )
        sr_CSDrawAtlasEntry(
          0,
          v19,
          (float)((float)(*((float *)&v71 + 2 * (v12 & 7)) - v16)
                * (float)((float)(int)dword_140404A6C[v2 + 280658337] * 0.0099999998))
        + v16,
          (float)((float)(*(float *)&v72[v12 & 7] - v17)
                * (float)((float)(int)dword_140404A6C[v2 + 280658337] * 0.0099999998))
        + v17,
          (float)(int)dword_140404A6C[12 * v19 + 433435868] * 0.5,
          (float)(int)dword_140404A6C[12 * v19 + 433435869] * 0.5,
          9,
          1065353216,
          1065353216,
          1065353216,
          1065353216);
    }
  }
  v20 = (unsigned int *)v72;
  v21 = 2;
  v70 = v3;
  v67 = 14388 * v3;
  v22 = &dword_140404A6C[3597 * v3 + 71857714];
  do
  {
    v23 = *(v20 - 1);
    v24 = _mm_cvtsi32_si128((int)(*v20));
    qword_140404050(3553, dword_140404A6C[451221642]);
    HIDWORD(v25) = HIDWORD(v23);
    *(float *)&v25 = *(float *)&v23 + 8.0;
    sub_14006CFF0(v25, *(double *)SR_VEC_LANES(128, v24, i64), v26, 32.0, 9, 0, 0, 0, 1048576000);
    v27 = 0;
    if ( (int)*v22 > 0 )
    {
      v28 = (int *)(v22 + 1);
      do
      {
        v29 = (unsigned __int8)*v28;
        v30 = (int)dword_140404A6C[v29 + 282486849];
        if ( (_DWORD)v30 != -1 )
        {
          v31 = (float)(int)dword_140404A6C[12 * v30 + 433435868] * 0.5;
          v32 = (float)(int)dword_140404A6C[12 * v30 + 433435869] * 0.5;
          if ( (_DWORD)v29 == 13 && (*v28 < 0 || (*v28 & 0xFFFFFF00) == 0) )
          {
            v65 = 1065353216;
            v64 = 0;
            v63 = 0;
          }
          else
          {
            v65 = 1065353216;
            v64 = 1065353216;
            v63 = 1065353216;
          }
          sr_CSDrawAtlasEntry(0, v30, *(float *)&v25, *(float *)SR_VEC_LANES(128, v24, i32), v31, v32, 9, 1065353216, v63, v64, v65);
        }
        v33 = *v28 >> 8;
        if ( (int)dword_140404A6C[1268 * v29 + 278521294] <= 0 )
        {
          if ( v33 > 0 && (_DWORD)v29 != 16 )
          {
            v63 = 1065353216;
            v34 = "+magazine";
            v62 = 1065353216;
            v61 = 1065353216;
            v60 = 1065353216;
            v59 = 8;
            v35 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v24);
            if ( v33 != 1 )
              v34 = "+empty magazine";
            sr_CSDrawText(v34, *(float *)&v25, v35, 8.0);
          }
        }
        else
        {
          v64 = *v28 >> 8;
          v63 = 1065353216;
          v62 = 1065353216;
          v61 = 1065353216;
          v60 = 1065353216;
          v59 = 8;
          sr_CSDrawText("/i", *(float *)&v23 + 16.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v24), 8.0);
        }
        ++v27;
        ++v28;
      }
      while ( v27 < (int)*v22 );
    }
    v20 += 2;
    v22 += 9;
    --v21;
  }
  while ( v21 );
  v36 = v67;
  v37 = 18;
  v38 = (char *)&dword_140404A6C[284024772] + 2;
  v39 = 5;
  v40 = (float *)&v73;
  v69 = 5;
  v41 = 1;
  v42 = &dword_140404A6C[v67 / 4 + 71857732];
  do
  {
    v43 = *(v40 - 1);
    v44 = 2;
    *(_QWORD *)&v45 = *(unsigned int *)v40;
    *(_QWORD *)&v46 = LODWORD(v43);
    *(float *)&v46 = v43 + 8.0;
    v47 = _mm_cvtsi32_si128((int)(*(unsigned int *)v40));
    do
    {
      qword_140404050(3553, dword_140404A6C[451221642]);
      sub_14006CFF0(v46, v45, v48, 32.0, 9, 0, 0, 0, 1048576000);
      *(float *)&v45 = *(float *)&v45 + 32.0;
      --v44;
    }
    while ( v44 );
    v49 = v47;
    if ( *(unsigned int *)((char *)&dword_140404A6C[71856337] + v36) == v41 + 2 )
      v50 = 24.0;
    else
      v50 = 12.0;
    v64 = v41;
    v63 = 1065353216;
    v62 = 1065353216;
    v61 = 1065353216;
    v60 = 1065353216;
    v59 = 8;
    *(float *)SR_VEC_LANES(128, v49, i32) = *(float *)SR_VEC_LANES(128, v47, i32) - 32.0;
    sr_CSDrawText("/i", v43, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v49), v50);
    v51 = 0;
    v52 = 0;
    if ( (int)*v42 > 0 )
    {
      do
      {
        v53 = (int)dword_140404A6C[LOBYTE(dword_140404A6C[3597 * v70 + 71857715 + v52 + v37]) + 282486849];
        if ( (_DWORD)v53 != -1 )
        {
          v54 = 1065353216;
          v55 = (float)(int)dword_140404A6C[12 * v53 + 433435868] * 0.5;
          v56 = (float)(int)dword_140404A6C[12 * v53 + 433435869] * 0.5;
          if ( !v52 && *v38 && !v66 )
          {
            v54 = 0;
            v55 = v55 * 1.125;
            v56 = v56 * 1.125;
          }
          sr_CSDrawAtlasEntry(0, v53, *(float *)&v46, *(float *)SR_VEC_LANES(128, v47, i32), v55, v56, 9, v54, 1065353216, v54, 1065353216);
        }
        ++v51;
        *(float *)SR_VEC_LANES(128, v47, i32) = *(float *)SR_VEC_LANES(128, v47, i32) + 32.0;
        ++v52;
      }
      while ( v51 < (int)*v42 );
      v39 = v69;
      v36 = v67;
    }
    v40 += 2;
    v41 = v68 + 1;
    v37 += 9;
    v42 += 9;
    v68 = (unsigned int)(v68 + 1);
    ++v38;
    v69 = --v39;
  }
  while ( v39 );
  dword_140404A6C[438291413] = 2;
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140087B8C: variable 'v26' is possibly undefined
// 140087DE8: variable 'v48' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140088000) ----------------------------------------------------
void            sub_140088000(
        float a1,
        __int64 a2,
        __int64 a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  float v8; // xmm1_4
  double v9; // xmm2_8
  float v11; // xmm9_4
  __int64 v12; // rdx
  __m128 v13; // xmm0
  unsigned int v14; // xmm1_4
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // [rsp+20h] [rbp-58h] BYREF
  float v21; // [rsp+24h] [rbp-54h]
  int v22; // [rsp+28h] [rbp-50h]

  dword_140404A6C[456807033] = a5;
  v11 = v8;
  dword_140404A6C[456807034] = a6;
  v21 = v8;
  v22 = 0;
  dword_140404A6C[456807035] = a7;
  dword_140404A6C[456807036] = a8;
  v20 = LODWORD(a1);
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D520(&v20, a2, a3);
  v13 = _mm_castpd_ps(sub_1401F8A50(a4, v12, v9));
  *(float *)&v14 = *(double *)SR_VEC_LANES(128, v13, u64) * *(float *)&v9 + a1;
  v21 = v11 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v13, (__m128d)v13, 1), f64)[0] * *(float *)&v9;
  v20 = v14;
  sub_14007D520(&v20, v15, v16);
  sub_14006E0D0(v18, v17, v19);
}

// 140088044: variable 'v8' is possibly undefined
// 1400880B0: variable 'v12' is possibly undefined
// 1400880B0: variable 'v9' is possibly undefined
// 140088100: variable 'v15' is possibly undefined
// 140088100: variable 'v16' is possibly undefined
// 14008811F: variable 'v18' is possibly undefined
// 14008811F: variable 'v17' is possibly undefined
// 14008811F: variable 'v19' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (0000000140088130) ----------------------------------------------------
double            sub_140088130(int a1)
{
  int v1; // r12d
  int v2; // r14d
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // r8d
  unsigned int *v6; // rdx
  __int64 v7; // rax
  float v8; // xmm12_4
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int *v14; // rsi
  float *v15; // rbp
  unsigned int *v16; // rbx
  int v17; // r15d
  unsigned int *v18; // rdi
  float v19; // xmm6_4
  float v20; // xmm7_4
  int v21; // ebx
  float v22; // xmm6_4
  float v23; // xmm7_4
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int *v26; // rbx
  __int64 v27; // rax
  float v28; // xmm7_4
  float v29; // xmm6_4
  int v30; // edi
  float *v31; // rbx
  float v32; // xmm7_4
  float v33; // xmm6_4
  signed int v34; // edx
  signed int v35; // edi
  unsigned int *v36; // rbx
  unsigned int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rcx
  float v40; // xmm1_4
  float v41; // xmm1_4
  __m128i v42; // xmm2
  __m128i v43; // xmm0
  unsigned int *v44; // rbx
  int v45; // eax
  float v46; // xmm6_4
  __m128i v47; // xmm7
  double result; // xmm0_8
  int v49; // [rsp+50h] [rbp-108h] BYREF
  __int64 v50; // [rsp+54h] [rbp-104h]
  __int64 v51; // [rsp+60h] [rbp-F8h] BYREF
  int v52; // [rsp+68h] [rbp-F0h]
  unsigned int v53; // [rsp+6Ch] [rbp-ECh]
  int v54; // [rsp+70h] [rbp-E8h]
  unsigned int v55; // [rsp+74h] [rbp-E4h]
  __int64 v56; // [rsp+78h] [rbp-E0h]
  int v57; // [rsp+80h] [rbp-D8h]

  v1 = a1;
  v51 = 1065353216;
  v52 = 0;
  v56 = 0;
  v57 = 1065353216;
  v54 = -1082130432;
  v50 = 1124073472;
  v53 = 0x80000000;
  v55 = 0x80000000;
  v49 = 1124073472;
  if ( !dword_140404A6C[284024893] )
  {
    v49 = 1123024896;
    LODWORD(v50) = 1123024896;
  }
  v2 = 0;
  v3 = 256;
  if ( dword_140404A6C[284021985] )
  {
    v4 = 0;
    v5 = 512;
  }
  else
  {
    v4 = 768;
    v5 = 256;
  }
  sub_14007A2C0(v4, 0, v5, v5, 128.0, 128.0, 512.0);
  sub_14007BE20((float *)&v49, (unsigned int *)&v51);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  v6 = &dword_140404A6C[71856286];
  dword_140404A6C[283831506] = 0;
  dword_140404A6C[283837379] = 0;
  dword_140404A6C[283843252] = 0;
  dword_140404A6C[283849125] = 0;
  dword_140404A6C[283854998] = 0;
  dword_140404A6C[283860871] = 0;
  dword_140404A6C[283866744] = 0;
  dword_140404A6C[283872617] = 0;
  do
  {
    if ( *(v6 - 33) )
    {
      v7 = (int)*v6;
      if ( (unsigned int)v7 <= 5 )
        ++dword_140404A6C[5873 * v7 + 283831506];
    }
    v6 += 3597;
    --v3;
  }
  while ( v3 );
  v8 = 0.25;
  if ( !dword_140404A6C[284024893] )
    v8 = 0.125;
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830700] + 284024944]);
  sub_14006CFF0(0.0, 0.0, v9, 256.0, 0, 1065353216, 1065353216, 1065353216, 1061158912);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2848);
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215065])(v11, v10);
  v13 = dword_140404A6C[283831312];
  v14 = (unsigned int *)dword_1402B2834;
  v15 = (float *)&dword_140404A6C[283831485];
  if ( dword_140404A6C[283831312] == 4 )
  {
    v16 = (unsigned int *)dword_1402B2834;
    v17 = 0;
    v18 = &dword_140404A6C[283831485];
    do
    {
      v19 = (float)((float)((float)(*((float *)v18 + 3) + *(float *)v18) * 0.5) - *(float *)&dword_140404A6C[282486846])
          * v8;
      v20 = (float)((float)((float)(*((float *)v18 + 5) + *((float *)v18 + 2)) * 0.5)
                  - *(float *)&dword_140404A6C[282486848])
          * v8;
      qword_140404050(3553, dword_140404A6C[451221642]);
      if ( dword_140404A6C[283831312] == 4 )
      {
        sub_140081DA0(v19, v20, sr_export_float_lane_container(1098907648), *((float *)v16 - 1), *v16, v16[1], 0x3F800000u);
        if ( dword_140404A6C[284024501] != -1 && v17 == dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] )
          sub_140081DA0(v19, v20, sr_export_float_lane_container(1090519040), *((float *)v16 - 1), *v16, v16[1], 0x3F800000u);
        if ( (int)v18[21] > 0 )
          sub_140081DA0(v19, v20, sr_export_float_lane_container(1094713344), *((float *)v16 - 1), *v16, v16[1], 0x3F800000u);
      }
      else
      {
        sub_140081DA0(v19, v20, sr_export_float_lane_container(1098907648), 1.0, 0x3F800000u, 0x3F800000u, 0x3F800000u);
      }
      ++v17;
      v18 += 5873;
      v16 += 3;
    }
    while ( (__int64)v18 < (__int64)&dword_140404A6C[283866723] );
    v13 = dword_140404A6C[283831312];
    v1 = a1;
  }
  if ( (((_DWORD)v13 - 3) & 0xFFFFFFFD) == 0 )
  {
    v21 = 0;
    do
    {
      v22 = (float)((float)((float)(v15[3] + *v15) * 0.5) - *(float *)&dword_140404A6C[282486846]) * 0.25;
      v23 = (float)((float)((float)(v15[5] + v15[2]) * 0.5) - *(float *)&dword_140404A6C[282486848]) * 0.25;
      qword_140404050(3553, dword_140404A6C[451221642]);
      if ( dword_140404A6C[283831312] == 3 )
      {
        sub_140081DA0(v22, v23, sr_export_float_lane_container(1098907648), *((float *)v14 - 1), *v14, v14[1], 0x3F800000u);
        if ( dword_140404A6C[284024501] != -1 && v21 == dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] )
          sub_140081DA0(v22, v23, sr_export_float_lane_container(1096810496), *((float *)v14 - 1), *v14, v14[1], 0x3F800000u);
      }
      else
      {
        sub_140081DA0(v22, v23, sr_export_float_lane_container(1098907648), 1.0, 0x3F800000u, 0x3F800000u, 0x3F800000u);
      }
      ++v21;
      v15 += 5873;
      v14 += 3;
    }
    while ( (__int64)v15 < (__int64)&dword_140404A6C[283849104] );
    v13 = dword_140404A6C[283831312];
  }
  if ( (_DWORD)v13 != 3 )
    goto LABEL_43;
  if ( dword_140404A6C[284024501] != -1 )
  {
    v13 = 14388LL * (int)dword_140404A6C[284024501];
    v24 = *(int *)((char *)&dword_140404A6C[71856286] + v13);
    if ( (_DWORD)v24 != -1 )
    {
      v25 = 16;
      v26 = &dword_140404A6C[5873 * v24 + 283831591];
      do
      {
        if ( *(v26 - 3) )
        {
          if ( *v26 == 2 )
          {
            v27 = (int)v26[15];
            if ( (_DWORD)v27 != -1 )
            {
              v28 = *(float *)&dword_140404A6C[19 * v27 + 487148756] - *(float *)&dword_140404A6C[282486846];
              v29 = *(float *)&dword_140404A6C[19 * v27 + 487148758] - *(float *)&dword_140404A6C[282486848];
              qword_140404050(3553, dword_140404A6C[451221642]);
              sub_140081DA0(v28 * 0.25, v29 * 0.25, sr_export_float_lane_container(1090519040), 0.0, 0x3F800000u, 0, 0x3F800000u);
            }
          }
        }
        v26 += 279;
        --v25;
      }
      while ( v25 );
      v13 = dword_140404A6C[283831312];
LABEL_43:
      if ( (_DWORD)v13 == 5 )
      {
        v30 = 0;
        if ( (int)dword_140404A6C[487148755] > 0 )
        {
          v31 = (float *)&dword_140404A6C[487148758];
          do
          {
            v32 = *(v31 - 2) - *(float *)&dword_140404A6C[282486846];
            v33 = *v31 - *(float *)&dword_140404A6C[282486848];
            qword_140404050(3553, dword_140404A6C[451221642]);
            sub_140081DA0(
              v32 * 0.25,
              v33 * 0.25,
              sr_export_float_lane_container(1090519040),
              0.75,
              0x3F400000u,
              0x3F400000u,
              0x3F800000u);
            ++v30;
            v31 += 19;
          }
          while ( v30 < (int)dword_140404A6C[487148755] );
        }
      }
    }
  }
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215065])(v13, v12);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2848);
  if ( dword_140404A6C[284024893] )
    goto LABEL_67;
  v34 = dword_140404A6C[225426046];
  v35 = 0;
  if ( (int)dword_140404A6C[225426046] <= 0 )
  {
LABEL_60:
    if ( (int)dword_140404A6C[225641186] > 0 )
    {
      v44 = &dword_140404A6C[225641222];
      do
      {
        v47 = _mm_cvtsi32_si128((int)(v44[2]));
        v45 = *(v44 - 19);
        v46 = (float)((float)((float)(*((float *)v44 - 3) + *(float *)v44) * 0.5) - *(float *)&dword_140404A6C[282486846])
            * v8;
        *(float *)SR_VEC_LANES(128, v47, i32) = (float)((float)((float)(*(float *)SR_VEC_LANES(128, v47, i32) + *((float *)v44 - 1)) * 0.5)
                                        - *(float *)&dword_140404A6C[282486848])
                                * v8;
        if ( v45 == 1 )
        {
          sr_CSDrawText(off_1402B2890[v44[103]], v46, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v47), 6.0);
          v45 = *(v44 - 19);
        }
        if ( v45 == 6 )
          sr_CSDrawText("$", v46, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v47), 9.0);
        ++v2;
        v44 += 14019;
      }
      while ( v2 < (int)dword_140404A6C[225641186] );
    }
    goto LABEL_67;
  }
  v36 = &dword_140404A6C[225426056];
  do
  {
    v37 = v36[2];
    if ( v37 )
    {
      if ( v37 == 1 && dword_140404A6C[34 * *v36 + 225391232] - 320 > 3 )
        goto LABEL_58;
    }
    else if ( dword_140404A6C[34 * *v36 + 225391238] != -1 )
    {
      goto LABEL_58;
    }
    v38 = 34LL * (int)v36[1];
    v39 = 34LL * (int)*v36;
    v40 = (float)(int)(dword_140404A6C[v39 + 225391230] + dword_140404A6C[v38 + 225391230]);
    v42 = _mm_castps_si128(_mm_set_ss((float)(int)(dword_140404A6C[v39 + 225391232] + dword_140404A6C[v38 + 225391232])));
    v41 = (float)((float)(v40 + v40) - *(float *)&dword_140404A6C[282486846]) * v8;
    *(float *)SR_VEC_LANES(128, v42, i32) = (float)((float)(*(float *)SR_VEC_LANES(128, v42, i32) + *(float *)SR_VEC_LANES(128, v42, i32))
                                    - *(float *)&dword_140404A6C[282486848])
                            * v8;
    if ( v37 == 1 )
    {
      v43 = _mm_castps_si128(_mm_set_ss((float)(((int)(dword_140404A6C[v39 + 225391230] - 256) / 56) & 1)));
      *(float *)SR_VEC_LANES(128, v43, i32) = (float)(*(float *)SR_VEC_LANES(128, v43, i32) * 16.0) + *(float *)SR_VEC_LANES(128, v42, i32);
      v42 = v43;
    }
    sr_CSDrawText(
      (char *)&dword_140404A6C[396 * v35 + 225426047],
      v41,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v42),
      6.0);
    v34 = dword_140404A6C[225426046];
LABEL_58:
    ++v35;
    v36 += 396;
  }
  while ( v35 < v34 );
  if ( !dword_140404A6C[284024893] )
    goto LABEL_60;
LABEL_67:
  if ( v1 != -1 )
    sub_1400891B0(
      (float)(*(float *)&dword_140404A6C[7166 * v1 + 280651335] - *(float *)&dword_140404A6C[282486846]) * v8,
      (float)(*(float *)&dword_140404A6C[7166 * v1 + 280651337] - *(float *)&dword_140404A6C[282486848]) * v8,
      sr_export_float_lane_container(1082130432),
      1.0,
      0x3F800000u,
      0x3F800000u,
      0x3F400000u,
      *(float *)&dword_140404A6C[7166 * v1 + 280651341]);
  result = sub_14007BB00();
  if ( dword_140404A6C[284021985] )
    sr_CSDrawText("Press C to toggle map", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))), 20.0);
  return result;
}

// 140088379: variable 'v9' is possibly undefined
// 140088391: variable 'v11' is possibly undefined
// 140088391: variable 'v10' is possibly undefined
// 1400887DE: variable 'v13' is possibly undefined
// 1400887DE: variable 'v12' is possibly undefined
// 1402B2834: using guessed type int dword_1402B2834[];
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CD0: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 175FF3464: using guessed type unsigned int;
// 183EBFDB4: using guessed type unsigned int;
// 183EC5978: using guessed type unsigned int;
// 183ECB53C: using guessed type unsigned int;
// 183ED1100: using guessed type unsigned int;
// 183ED6CC4: using guessed type unsigned int;
// 183EDC888: using guessed type unsigned int;
// 183EE244C: using guessed type unsigned int;
// 183EE8010: using guessed type unsigned int;

//----- (0000000140088C00) ----------------------------------------------------
void sub_140088C00()
{
  __int64 v0; // rax
  __m128i v1; // xmm8
  unsigned int *v2; // rdi
  unsigned int *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rbp
  int v6; // edx

  sr_CSDrawText("Spectating", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44000000u))), 16.0);
  if ( dword_140404A6C[284021982] != -1 )
  {
    v0 = (int)dword_140404A6C[7166 * dword_140404A6C[284021982] + 280651305];
    if ( (_DWORD)v0 != -1 )
      sr_CSDrawText(
        (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 14388 * v0 + 291638372),
        512.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44040000u))),
        20.0);
  }
  sr_CSDrawText(
    "Press Space to switch player",
    512.0,
    (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))),
    16.0);
  sr_CSDrawText(
    "Press 1 for freecam",
    512.0,
    (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440D0000u))),
    16.0);
  v1 = _mm_cvtsi32_si128((int)(0x42800000u));
  v2 = &dword_140404A6C[284023074];
  v3 = &dword_140404A6C[71859139];
  v4 = (char *)&dword_140404A6C[71856254];
  v5 = 256;
  do
  {
    if ( *(v3 - 2886) && !*v3 && *(v3 - 2847) == -1 )
    {
      sr_CSDrawText(v4, 772.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v1), 20.0);
      if ( *v2 )
      {
        v6 = dword_140404A6C[346696312];
      }
      else if ( *(v3 - 2869) )
      {
        v6 = dword_140404A6C[346696311];
      }
      else
      {
        v6 = dword_140404A6C[346696310];
      }
      sr_CSDrawAtlasEntry(0, v6, 752.0, *(float *)SR_VEC_LANES(128, v1, i32), 20.0, 20.0, 0, 1065353216, 1065353216, 1065353216, 1065353216);
      *(float *)SR_VEC_LANES(128, v1, i32) = *(float *)SR_VEC_LANES(128, v1, i32) + 20.0;
    }
    v4 += 14388;
    ++v2;
    v3 += 3597;
    --v5;
  }
  while ( v5 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192E8F444: using guessed type unsigned int;
// 192E8F448: using guessed type unsigned int;
// 192E8F44C: using guessed type unsigned int;

//----- (0000000140088F80) ----------------------------------------------------
double sub_140088F80()
{
  __m128i si128; // xmm5
       __m128i *v1; // rax
  __m128i v2; // xmm6
  __m128i v3; // xmm3
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  double result; // xmm0_8

  sr_CSDrawText("Ping:", 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))), 16.0);
  sr_CSDrawText("/i", 112.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))), 16.0);
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279150);
  v1 = (     __m128i *)&dword_140404A6C[430859706];
  v2 = _mm_load_si128((     __m128i *)&xmmword_1402799B0);
  v3 = _mm_cvtsi64_si128((long long)(0));
  v4 = _mm_cvtsi64_si128((long long)(0));
  do
  {
    v5 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_loadu_si128(v1 - 1), _mm_cvtsi32_si128((int)(0LL))), v2);
    v3 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(si128, v3), v5), _mm_andnot_si128(v5, v3));
    v6 = _mm_loadu_si128(v1);
    v1 += 2;
    v7 = _mm_andnot_si128(_mm_cmpeq_epi32(v6, _mm_cvtsi32_si128((int)(0LL))), v2);
    v4 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(si128, v4), v7), _mm_andnot_si128(v7, v4));
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[430859962] );
  v8 = _mm_add_epi32(v4, v3);
  sr_CSDrawText("Packetloss:", 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))), 16.0);
  sr_CSDrawText("/i%", 112.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))), 16.0);
  *(_QWORD *)&result = SR_VEC_READ_LANES(128, _mm_srli_si128(_mm_add_epi32(v8, _mm_srli_si128(v8, 8)), 4), u64)[0];
  return result;
}

// 140279150: using guessed type __int128 xmmword_140279150;
// 1402799B0: using guessed type __int128 xmmword_1402799B0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400891B0) ----------------------------------------------------
void            sub_1400891B0(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        float a8)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  signed int v12; // ebx
  signed int v14; // edi
  double v15; // xmm9_8
  double v16; // xmm11_8
  double v17; // xmm12_8
  __m128i v18; // xmm0
  float v19; // xmm6_4
  __int64 v20; // rdx
  __m128 v21; // xmm0
  double v22; // xmm2_8
  unsigned int v23; // xmm1_4
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __m128i v27; // xmm0
  float v28; // xmm6_4
  __m128 v29; // xmm0
  unsigned int v30; // xmm1_4
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // [rsp+20h] [rbp-B8h] BYREF
  __int32 v35; // [rsp+24h] [rbp-B4h]
  int v36; // [rsp+28h] [rbp-B0h]

  qword_140404050(3553, dword_140404A6C[451221642]);
  v12 = 0;
  v14 = 63;
  v15 = *(float *)&a3;
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  *(float *)&dword_140404A6C[456807033] = a4;
  dword_140404A6C[456807034] = a5;
  dword_140404A6C[456807035] = a6;
  dword_140404A6C[456807036] = a7;
  v36 = 0;
  v16 = a1;
  v17 = a2;
  do
  {
    if ( v12 >= 32 )
      v18 = _mm_cvtsi32_si128(v14 + 1);
    else
      v18 = _mm_cvtsi32_si128(v12);
    v34 = LODWORD(a1);
    v35 = LODWORD(a2);
    v19 = 1.75 - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v18), f32)[0] * 0.25);
    sub_14007D520(&v34, v10, v11);
    v21 = _mm_castpd_ps(sub_1401F8A50(a8, v20, a3));
    v22 = fmaxf(v19, 1.0);
    *(float *)&v23 = *(double *)SR_VEC_LANES(128, v21, u64) * v15 * v22 + v16;
    SR_VEC_LANES(128, v21, f32)[0] = v17 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0] * v15 * v22;
    v34 = v23;
    v35 = SR_VEC_LANES(128, v21, i32)[0];
    sub_14007D520(&v34, v24, v25);
    a8 = a8 + 0.098174773;
    if ( ++v12 >= 32 )
      v27 = _mm_cvtsi32_si128(v14);
    else
      v27 = _mm_cvtsi32_si128(v12);
    v28 = 1.75 - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v27), f32)[0] * 0.25);
    v29 = _mm_castpd_ps(sub_1401F8A50(a8, v26, v22));
    a3 = fmaxf(v28, 1.0);
    *(float *)&v30 = *(double *)SR_VEC_LANES(128, v29, u64) * v15 * a3 + v16;
    SR_VEC_LANES(128, v29, f32)[0] = v17 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v29, (__m128d)v29, 1), f64)[0] * v15 * a3;
    v34 = v30;
    v35 = SR_VEC_LANES(128, v29, i32)[0];
    sub_14007D520(&v34, v31, v32);
    --v14;
  }
  while ( v14 > -1 );
  sub_14006E0D0(v33, v10, v11);
}

// 1400892E4: variable 'v10' is possibly undefined
// 1400892E4: variable 'v11' is possibly undefined
// 1400892F4: variable 'v20' is possibly undefined
// 140089348: variable 'v24' is possibly undefined
// 140089348: variable 'v25' is possibly undefined
// 140089381: variable 'v26' is possibly undefined
// 1400893D5: variable 'v31' is possibly undefined
// 1400893D5: variable 'v32' is possibly undefined
// 140089429: variable 'v33' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (0000000140089430) ----------------------------------------------------
void sub_140089430()
{
  __int64 v0; // r8
  int v1; // ebp
  __int64 v2; // r14
  __m128i v3; // xmm6
  __m128i v4; // xmm9
  float v5; // xmm14_4
  float v6; // xmm6_4
  int v7; // r8d
  float v8; // xmm1_4
  int v9; // eax
  float v10; // xmm1_4
  unsigned int *v11; // r8
  char *v12; // rcx
  float v13; // xmm14_4
  int v14; // ebx
  unsigned int *v15; // rdx
  __m128i v16; // xmm9
  unsigned int v17; // r9d
  __int64 v18; // r8
  int v19; // r10d
  __int64 v20; // r8
  int v21; // r10d
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // r8
  int v25; // r10d
  __int64 v26; // r8
  int v27; // r10d
  __int64 v28; // r8
  int v29; // r10d
  __int64 v30; // r8
  int v31; // r10d
  __int64 v32; // r8
  int v33; // r10d
  int v34; // r8d
  __int64 v35; // rdx
  __m128i si128; // xmm4
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  unsigned int *v40; // rcx
  _DWORD *v41; // rdx
  __int64 v42; // r8
  int v43; // eax
  int v44; // esi
  unsigned int *v45; // rdi
  unsigned int v46; // ecx
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // edx

  qword_140404050(3553, dword_140404A6C[451221642]);
  sub_14006CFF0(sr_export_float_lane_container(0x40000000), sr_export_float_lane_container(1123811328), v0, 480.0, 0, 0, 0, 0, 1056964608);
  if ( dword_140404A6C[283831312] == 3 )
  {
    v1 = 0;
    v2 = 0;
    v3 = _mm_cvtsi32_si128((int)(0x43000000u));
    v4 = _mm_cvtsi32_si128((int)(0x42D00000u));
    do
    {
      v5 = (float)v1 * 252.0;
      if ( (unsigned int)v1 >= 3 )
      {
        sr_CSDrawText(Parameters, v5 + 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4), 24.0);
      }
      else
      {
        v6 = v5 + 8.0;
        sr_CSDrawText(off_1402B2890[v2], v5 + 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4), 24.0);
        if ( dword_140404A6C[283831448] == 3 && (v7 = dword_140404A6C[6 * v2 + 335047065]) != 0 )
        {
          v8 = (float)((float)((float)((int)dword_140404A6C[6 * v2 + 335047064] / 10) * 100.0) / (float)v7) - 100.0;
          if ( v8 <= 0.0 )
          {
            if ( v8 < 0.0 )
              v8 = v8 - 0.5;
          }
          else
          {
            v8 = v8 + 0.5;
          }
          v9 = (int)v8;
          v10 = v6 + 228.0;
          v11 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4);
          if ( v9 < -50 )
          {
            v12 = "$/i(Split)";
          }
          else
          {
            v12 = "$/i(+/i%)";
            if ( v9 <= 0 )
              v12 = "$/i(/i%)";
          }
        }
        else
        {
          v10 = v6 + 228.0;
          v11 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4);
          v12 = "$/i";
        }
        sr_CSDrawText(v12, v10, v11, 24.0);
        v3 = _mm_cvtsi32_si128((int)(0x43000000u));
      }
      v13 = v5 + 4.0;
      if ( !dword_140404A6C[283831448] )
        sr_CSDrawText("/i.", v13, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4), 24.0);
      v14 = 0;
      v15 = &dword_140404A6C[71859139];
      dword_140404A6C[346695797] = 0;
      v16 = v3;
      v17 = 2;
      do
      {
        if ( *(v15 - 2886) )
        {
          if ( !*v15 )
          {
            v18 = (int)*(v15 - 2853);
            if ( (_DWORD)v18 == v1 || v2 == 3 && (_DWORD)v18 == 17 )
            {
              v19 = *(v15 - 2867);
              dword_140404A6C[2 * v14 + 346695798] = v17 - 2;
              if ( (_DWORD)v18 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v19;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v18 + 335047064] * 0.1)
                                                                                                 * (float)(int)*(v15 - 2851))
                                                                                         + (float)v19);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[711] )
        {
          if ( !v15[3597] )
          {
            v20 = (int)v15[744];
            if ( (_DWORD)v20 == v1 || v2 == 3 && (_DWORD)v20 == 17 )
            {
              v21 = v15[730];
              dword_140404A6C[2 * v14 + 346695798] = v17 - 1;
              if ( (_DWORD)v20 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v21;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v20 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[746])
                                                                                         + (float)v21);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[4308] )
        {
          if ( !v15[7194] )
          {
            v22 = (int)v15[4341];
            if ( (_DWORD)v22 == v1 || v2 == 3 && (_DWORD)v22 == 17 )
            {
              v23 = v15[4327];
              dword_140404A6C[2 * v14 + 346695798] = v17;
              if ( (_DWORD)v22 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v23;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v22 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[4343])
                                                                                         + (float)v23);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[7905] )
        {
          if ( !v15[10791] )
          {
            v24 = (int)v15[7938];
            if ( (_DWORD)v24 == v1 || v2 == 3 && (_DWORD)v24 == 17 )
            {
              v25 = v15[7924];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 1;
              if ( (_DWORD)v24 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v25;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v24 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[7940])
                                                                                         + (float)v25);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[11502] )
        {
          if ( !v15[14388] )
          {
            v26 = (int)v15[11535];
            if ( (_DWORD)v26 == v1 || v2 == 3 && (_DWORD)v26 == 17 )
            {
              v27 = v15[11521];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 2;
              if ( (_DWORD)v26 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v27;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v26 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[11537])
                                                                                         + (float)v27);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[15099] )
        {
          if ( !v15[17985] )
          {
            v28 = (int)v15[15132];
            if ( (_DWORD)v28 == v1 || v2 == 3 && (_DWORD)v28 == 17 )
            {
              v29 = v15[15118];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 3;
              if ( (_DWORD)v28 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v29;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v28 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[15134])
                                                                                         + (float)v29);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[18696] )
        {
          if ( !v15[21582] )
          {
            v30 = (int)v15[18729];
            if ( (_DWORD)v30 == v1 || v2 == 3 && (_DWORD)v30 == 17 )
            {
              v31 = v15[18715];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 4;
              if ( (_DWORD)v30 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v31;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v30 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[18731])
                                                                                         + (float)v31);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[22293] )
        {
          if ( !v15[25179] )
          {
            v32 = (int)v15[22326];
            if ( (_DWORD)v32 == v1 || v2 == 3 && (_DWORD)v32 == 17 )
            {
              v33 = v15[22312];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 5;
              if ( (_DWORD)v32 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v33;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v32 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[22328])
                                                                                         + (float)v33);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        v17 += 8;
        v15 += 28776;
      }
      while ( (int)(v17 - 2) < 256 );
      dword_140404A6C[436668493] = v14;
      v34 = 0;
      v35 = 0;
      if ( v14 >= 8 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
        do
        {
          v34 += 8;
          v37 = _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695813]);
          v38 = _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695811]);
          v39 = _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695807]);
          *(__m128i *)&dword_140404A6C[v35 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695805]))));
          *(__m128i *)&dword_140404A6C[v35 + 437192786] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                v39,
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695809])),
                                                              _mm_unpacklo_epi32(v38, v37)));
          v35 += 8;
        }
        while ( v35 < v14 - (v14 & 7) );
      }
      if ( v34 < v14 )
      {
        v40 = &dword_140404A6C[v35 + 437192782];
        v41 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * v35 + 1390996552);
        v42 = (unsigned int)(v14 - v34);
        do
        {
          ++v40;
          v43 = -1879048193 - *v41;
          v41 += 2;
          *(v40 - 1) = v43;
          --v42;
        }
        while ( v42 );
      }
      sub_14007D710();
      v44 = 0;
      if ( v14 > 0 )
      {
        v45 = &dword_140404A6C[436668494];
        do
        {
          v46 = dword_140404A6C[2 * *v45 + 346695798];
          if ( v46 > 0xFF )
            v46 = 0;
          v47 = 3597LL * v46;
          sr_CSDrawText(
            (char *)&dword_140404A6C[v47 + 71856254],
            v13,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16),
            24.0);
          v48 = (int)dword_140404A6C[v47 + 71856286];
          v49 = dword_140404A6C[v47 + 71856272];
          if ( (_DWORD)v48 != -1 )
            v49 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v48 + 335047064] * 0.1)
                                     * (float)(int)dword_140404A6C[v47 + 71856288])
                             + (float)v49);
          dword_140404A6C[v47 + 71856278] = v49;
          sr_CSDrawText("$/I", v13 + 240.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16), 24.0);
          ++v44;
          *(float *)SR_VEC_LANES(128, v16, i32) = *(float *)SR_VEC_LANES(128, v16, i32) + 24.0;
          ++v45;
        }
        while ( v44 < (int)dword_140404A6C[346695797] );
        v3 = _mm_cvtsi32_si128((int)(0x43000000u));
      }
      v4 = _mm_cvtsi32_si128((int)(0x42D00000u));
      ++v1;
      ++v2;
    }
    while ( v1 < 4 );
  }
}

// 140089DCC: conditional instruction was optimized away because ebx.4>=8
// 140089DC6: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF
// 14008949D: variable 'v0' is possibly undefined
// 140279890: using guessed type __int128 xmmword_140279890;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192E8EC40: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;

//----- (000000014008A110) ----------------------------------------------------
__int64 sub_14008A110()
{
  unsigned int v0; // eax
  char *v1; // rcx
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm2_4
  char *v8; // rcx
  bool v9; // zf
  __m128i v10; // xmm4
  int v11; // ebp
  __int64 v12; // rsi
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm14_4
  char *v17; // rcx
  int v18; // r9d
  float v19; // xmm1_4
       char *v20; // rdx
  __m128i v21; // xmm15
  int v22; // ebx
  unsigned int v23; // r9d
  unsigned int *v24; // rdx
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // r8
  int v32; // ecx
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // r8
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rdx
  __m128i si128; // xmm4
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  unsigned int *v47; // rcx
  _DWORD *v48; // rdx
  __int64 v49; // r8
  int v50; // eax
  int v51; // r14d
  unsigned int *v52; // rdi
  float v53; // xmm10_4
  __int64 v54; // rbx
  int v55; // edx
  float v56; // xmm0_4
  __int64 v57; // rbx
  __m128i v58; // xmm2
  __int64 v60; // [rsp+0h] [rbp-348h] BYREF
  int v61; // [rsp+20h] [rbp-328h]
  float v62; // [rsp+28h] [rbp-320h]
  float v63; // [rsp+30h] [rbp-318h]
  float v64; // [rsp+38h] [rbp-310h]
  int v65; // [rsp+40h] [rbp-308h]
  int v66; // [rsp+48h] [rbp-300h]
  int v67; // [rsp+50h] [rbp-2F8h]
  float v68; // [rsp+60h] [rbp-2E8h]
  float v69; // [rsp+64h] [rbp-2E4h]
  float v70; // [rsp+68h] [rbp-2E0h]
  char v71[512]; // [rsp+70h] [rbp-2D8h] BYREF
  __int64 v72; // [rsp+270h] [rbp-D8h]

  if ( dword_140404A6C[283831441] != 1 )
    goto LABEL_16;
  v0 = dword_140404A6C[283831446];
  if ( (int)dword_140404A6C[283831446] >= 7 )
  {
LABEL_5:
    if ( dword_140404A6C[283831448] != 3 || v0 != 5 )
      goto LABEL_16;
    v2 = 0;
    v3 = dword_140404A6C[335047064];
    v4 = 0;
    if ( (int)dword_140404A6C[335047070] > (int)dword_140404A6C[335047064] )
    {
      v2 = 1;
      v3 = dword_140404A6C[335047070];
      v4 = 1;
    }
    if ( (int)dword_140404A6C[335047076] > v3 )
    {
      v5 = dword_1402B2848;
      v6 = dword_1402B284C;
      v7 = dword_1402B2850;
LABEL_14:
      v8 = "OXS Wins!";
      goto LABEL_15;
    }
    v5 = dword_1402B2830[3 * v4];
    v6 = dword_1402B2834[3 * v4];
    v7 = dword_1402B2838[3 * v4];
    if ( v2 )
    {
      v9 = v2 == 1;
      v8 = "Monsota Wins!";
      if ( !v9 )
        goto LABEL_14;
    }
    else
    {
      v8 = "Goldmen Wins!";
    }
LABEL_15:
    v65 = 1065353216;
    v64 = *(float *)&v7;
    v63 = *(float *)&v6;
    v62 = *(float *)&v5;
    v61 = 33;
    sr_CSDrawText(v8, 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 30.0);
    goto LABEL_16;
  }
  v1 = off_1402B2920[dword_140404A6C[283831446]];
  v65 = 1065353216;
  v64 = 1.0;
  v63 = 1.0;
  v62 = 1.0;
  v61 = 32;
  sr_CSDrawText(v1, 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 20.0);
  if ( dword_140404A6C[283831441] == 1 )
  {
    v0 = dword_140404A6C[283831446];
    goto LABEL_5;
  }
LABEL_16:
  v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
  v11 = 0;
  v12 = 0;
  do
  {
    if ( (unsigned int)v11 >= 3 )
    {
      v13 = 1.0;
      v14 = 1.0;
      v15 = 1.0;
      goto LABEL_21;
    }
    v13 = *(float *)&dword_1402B2830[3 * v12];
    v14 = *(float *)&dword_1402B2834[3 * v12];
    v15 = *(float *)&dword_1402B2838[3 * v12];
    v68 = v13;
    v70 = v14;
    v69 = v15;
    if ( v11 == 2 )
    {
      v13 = v13 * 1.5;
      v14 = v14 * 1.5;
      v15 = v15 * 1.5;
LABEL_21:
      v69 = v15;
      v70 = v14;
      v68 = v13;
    }
    v16 = (float)((float)v11 * 248.0) + 8.0;
    if ( dword_140404A6C[283831312] == 3 && (unsigned int)v11 < 3 )
    {
      v17 = off_1402B2890[v12];
      v65 = 1065353216;
      v64 = v15;
      v63 = v14;
      v62 = v13;
      v61 = 96;
      sr_CSDrawText(v17, v16, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10), 20.0);
      if ( dword_140404A6C[283831448] == 3 && (v18 = dword_140404A6C[6 * v12 + 335047065]) != 0 )
      {
        v19 = (float)((float)((float)((int)dword_140404A6C[6 * v12 + 335047064] / 10) * 100.0) / (float)v18) - 100.0;
        if ( v19 <= 0.0 )
        {
          if ( v19 < 0.0 )
            v19 = v19 - 0.5;
        }
        else
        {
          v19 = v19 + 0.5;
        }
        if ( (int)v19 < -50 )
        {
          sub_140158AB0(v71, "$%d(Split)");
        }
        else
        {
          v20 = "$%d(+%d%%)";
          if ( (int)v19 <= 0 )
            v20 = "$%d(%d%%)";
          sub_140158AB0(v71, v20);
        }
      }
      else
      {
        sub_140158AB0(v71, "$%d");
      }
      v65 = 1065353216;
      v64 = v15;
      v63 = v14;
      v62 = v13;
      v61 = 34;
      sr_CSDrawText(v71, v16 + 240.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))), 17.5);
      if ( dword_140404A6C[283831448] == 3 )
      {
        v66 = dword_140404A6C[5873 * v12 + 283831505];
        v65 = 1065353216;
        v64 = v15;
        v63 = v14;
        v62 = v13;
        v61 = 32;
        sr_CSDrawText("Bonus:$/i", v16, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))), 17.5);
      }
    }
    v21 = _mm_cvtsi32_si128((int)(0x43000000u));
    v22 = 0;
    dword_140404A6C[346695797] = 0;
    v23 = 2;
    v24 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v24 - 2886) )
      {
        if ( !*v24 )
        {
          v25 = (int)*(v24 - 2853);
          if ( (_DWORD)v25 == v11 || v12 == 3 && (_DWORD)v25 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 - 2;
            if ( (_DWORD)v25 == -1 || (int)v25 >= 6 )
              v26 = *(v24 - 2867);
            else
              v26 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v25 + 335047064] * 0.1)
                                       * (float)(int)*(v24 - 2851))
                               + (float)(int)*(v24 - 2867));
            *(v24 - 2861) = v26;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v26;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[711] )
      {
        if ( !v24[3597] )
        {
          v27 = (int)v24[744];
          if ( (_DWORD)v27 == v11 || v12 == 3 && (_DWORD)v27 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 - 1;
            if ( (_DWORD)v27 == -1 || (int)v27 >= 6 )
              v28 = v24[730];
            else
              v28 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v27 + 335047064] * 0.1)
                                       * (float)(int)v24[746])
                               + (float)(int)v24[730]);
            v24[736] = v28;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v28;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[4308] )
      {
        if ( !v24[7194] )
        {
          v29 = (int)v24[4341];
          if ( (_DWORD)v29 == v11 || v12 == 3 && (_DWORD)v29 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23;
            if ( (_DWORD)v29 == -1 || (int)v29 >= 6 )
              v30 = v24[4327];
            else
              v30 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v29 + 335047064] * 0.1)
                                       * (float)(int)v24[4343])
                               + (float)(int)v24[4327]);
            v24[4333] = v30;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v30;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[7905] )
      {
        if ( !v24[10791] )
        {
          v31 = (int)v24[7938];
          if ( (_DWORD)v31 == v11 || v12 == 3 && (_DWORD)v31 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 1;
            if ( (_DWORD)v31 == -1 || (int)v31 >= 6 )
              v32 = v24[7924];
            else
              v32 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v31 + 335047064] * 0.1)
                                       * (float)(int)v24[7940])
                               + (float)(int)v24[7924]);
            v24[7930] = v32;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v32;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[11502] )
      {
        if ( !v24[14388] )
        {
          v33 = (int)v24[11535];
          if ( (_DWORD)v33 == v11 || v12 == 3 && (_DWORD)v33 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 2;
            if ( (_DWORD)v33 == -1 || (int)v33 >= 6 )
              v34 = v24[11521];
            else
              v34 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v33 + 335047064] * 0.1)
                                       * (float)(int)v24[11537])
                               + (float)(int)v24[11521]);
            v24[11527] = v34;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v34;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[15099] )
      {
        if ( !v24[17985] )
        {
          v35 = (int)v24[15132];
          if ( (_DWORD)v35 == v11 || v12 == 3 && (_DWORD)v35 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 3;
            if ( (_DWORD)v35 == -1 || (int)v35 >= 6 )
              v36 = v24[15118];
            else
              v36 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v35 + 335047064] * 0.1)
                                       * (float)(int)v24[15134])
                               + (float)(int)v24[15118]);
            v24[15124] = v36;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v36;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[18696] )
      {
        if ( !v24[21582] )
        {
          v37 = (int)v24[18729];
          if ( (_DWORD)v37 == v11 || v12 == 3 && (_DWORD)v37 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 4;
            if ( (_DWORD)v37 == -1 || (int)v37 >= 6 )
              v38 = v24[18715];
            else
              v38 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v37 + 335047064] * 0.1)
                                       * (float)(int)v24[18731])
                               + (float)(int)v24[18715]);
            v24[18721] = v38;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v38;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[22293] )
      {
        if ( !v24[25179] )
        {
          v39 = (int)v24[22326];
          if ( (_DWORD)v39 == v11 || v12 == 3 && (_DWORD)v39 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 5;
            if ( (_DWORD)v39 == -1 || (int)v39 >= 6 )
              v40 = v24[22312];
            else
              v40 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v39 + 335047064] * 0.1)
                                       * (float)(int)v24[22328])
                               + (float)(int)v24[22312]);
            v24[22318] = v40;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v40;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      v23 += 8;
      v24 += 28776;
    }
    while ( (int)(v23 - 2) < 256 );
    dword_140404A6C[436668493] = v22;
    v41 = 0;
    v42 = 0;
    if ( v22 >= 8 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
      do
      {
        v41 += 8;
        v44 = _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695813]);
        v45 = _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695811]);
        v46 = _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695807]);
        *(__m128i *)&dword_140404A6C[v42 + 437192782] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695799]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695801])),
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695803]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695805]))));
        *(__m128i *)&dword_140404A6C[v42 + 437192786] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              v46,
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695809])),
                                                            _mm_unpacklo_epi32(v45, v44)));
        v42 += 8;
      }
      while ( v42 < v22 - (v22 & 7) );
    }
    if ( v41 < v22 )
    {
      v47 = &dword_140404A6C[v42 + 437192782];
      v48 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * v42 + 1390996552);
      v49 = (unsigned int)(v22 - v41);
      do
      {
        ++v47;
        v50 = -1879048193 - *v48;
        v48 += 2;
        *(v47 - 1) = v50;
        --v49;
      }
      while ( v49 );
    }
    sub_14007D710();
    dword_140404A6C[438291413] = 2;
    v51 = 0;
    if ( v22 > 0 )
    {
      v52 = &dword_140404A6C[436668494];
      v53 = v16 + 24.0;
      do
      {
        v54 = dword_140404A6C[2 * *v52 + 346695798];
        if ( (unsigned int)v54 > 0xFF )
          v54 = 0;
        if ( dword_140404A6C[283831448] != 2 )
        {
          v67 = 1065353216;
          v66 = 1065353216;
          v65 = 1065353216;
          v64 = 1.0;
          v63 = 0.0;
          v62 = 24.0;
          v61 = 1103101952;
          if ( dword_140404A6C[v54 + 284023074] )
            v55 = dword_140404A6C[346696312];
          else
            v55 = dword_140404A6C[3597 * (unsigned int)v54 + 71856270]
                ? dword_140404A6C[346696311]
                : dword_140404A6C[346696310];
          sr_CSDrawAtlasEntry(
            0,
            v55,
            v16,
            *(float *)SR_VEC_LANES(128, v21, i32),
            *(float *)&v61,
            v62,
            SLOBYTE(v63),
            SLODWORD(v64),
            v65,
            v66,
            v67);
          if ( (_DWORD)v54 != dword_140404A6C[284024501]
            && dword_140404A6C[284024633]
            && !dword_140404A6C[346696313]
            && *(float *)&dword_140404A6C[284024597] >= v16
            && *(float *)&dword_140404A6C[284024597] < v53
            && *(float *)&dword_140404A6C[284024598] >= *(float *)SR_VEC_LANES(128, v21, i32)
            && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)SR_VEC_LANES(128, v21, i32) + 24.0) )
          {
            sub_140117820(v54);
          }
        }
        v56 = 1.0;
        if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v54 + 71856271] )
          v56 = 0.5;
        v65 = 1065353216;
        v57 = 3597LL * (unsigned int)v54;
        v64 = v15 * v56;
        v63 = v14 * v56;
        v62 = v68 * v56;
        v61 = 96;
        sr_CSDrawText(
          (char *)&dword_140404A6C[v57 + 71856254],
          v53,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v21),
          17.5);
        sub_140158AB0(
          v71,
          "%03d-%04d",
          dword_140404A6C[v57 + 71856265] / 0x2710,
          dword_140404A6C[v57 + 71856265] % 0x2710);
        v65 = 1065353216;
        v58 = v21;
        *(float *)SR_VEC_LANES(128, v58, i32) = *(float *)SR_VEC_LANES(128, v21, i32) + 18.0;
        v62 = v68 * v56;
        v61 = 96;
        sr_CSDrawText(v71, v53, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v58), 10.0);
        v15 = v69;
        v14 = v70;
        v66 = dword_140404A6C[v57 + 71856278];
        v65 = 1065353216;
        v64 = v69;
        v63 = v70;
        v62 = v68;
        v61 = 34;
        sr_CSDrawText("$/I", v16 + 240.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v21), 17.5);
        ++v51;
        *(float *)SR_VEC_LANES(128, v21, i32) = *(float *)SR_VEC_LANES(128, v21, i32) + 24.0;
        ++v52;
      }
      while ( v51 < (int)dword_140404A6C[346695797] );
    }
    ++v11;
    ++v12;
    v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
    dword_140404A6C[438291413] = 0;
  }
  while ( v11 < 4 );
  dword_140404A6C[346696313] = dword_140404A6C[284024633];
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14008ABBF: conditional instruction was optimized away because ebx.4>=8
// 14008ABB9: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF
// 140279890: using guessed type __int128 xmmword_140279890;
// 1402B2830: using guessed type int dword_1402B2830[];
// 1402B2834: using guessed type int dword_1402B2834[];
// 1402B2838: using guessed type int dword_1402B2838[];
// 1402B2848: using guessed type int dword_1402B2848;
// 1402B284C: using guessed type int dword_1402B284C;
// 1402B2850: using guessed type int dword_1402B2850;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 1402B2920: using guessed type char *off_1402B2920[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCC4: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;
// 19021F0CC: using guessed type unsigned int;
// 19021F0E4: using guessed type unsigned int;
// 192E8EC40: using guessed type unsigned int;
// 192E8F444: using guessed type unsigned int;
// 192E8F448: using guessed type unsigned int;
// 192E8F44C: using guessed type unsigned int;
// 192E8F450: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (000000014008B050) ----------------------------------------------------
__int64 sub_14008B050()
{
  unsigned int v0; // eax
  char *v1; // rcx
  unsigned int v2; // eax
  unsigned int v3; // ecx
  __int64 v4; // rax
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm3_4
  char *v8; // rcx
  int v9; // esi
  __m128i v10; // xmm2
  __int64 v11; // r14
  float v12; // xmm13_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  char *v15; // rcx
  __m128i v16; // xmm15
  unsigned int *v17; // rdx
  int v18; // ebx
  unsigned int v19; // r9d
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // r8
  int v27; // ecx
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // r8
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rdx
  __m128i si128; // xmm4
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  __m128i v41; // xmm3
  unsigned int *v42; // rcx
  _DWORD *v43; // rdx
  __int64 v44; // r8
  int v45; // eax
  int v46; // r15d
  float v47; // xmm12_4
  unsigned int *v48; // rbp
  float v49; // xmm10_4
  __int64 v50; // rbx
  int v51; // edx
  float v52; // xmm0_4
  __int64 v53; // rbx
  __m128i v54; // xmm2
  __int64 v56; // [rsp+0h] [rbp-348h] BYREF
  int v57; // [rsp+20h] [rbp-328h]
  float v58; // [rsp+28h] [rbp-320h]
  float v59; // [rsp+30h] [rbp-318h]
  float v60; // [rsp+38h] [rbp-310h]
  int v61; // [rsp+40h] [rbp-308h]
  int v62; // [rsp+48h] [rbp-300h]
  int v63; // [rsp+50h] [rbp-2F8h]
  int v64; // [rsp+60h] [rbp-2E8h]
  float v65; // [rsp+64h] [rbp-2E4h]
  float v66; // [rsp+68h] [rbp-2E0h]
  char v67[512]; // [rsp+70h] [rbp-2D8h] BYREF
  __int64 v68; // [rsp+270h] [rbp-D8h]

  v0 = dword_140404A6C[283831446];
  if ( (int)dword_140404A6C[283831446] < 7 )
  {
    v1 = off_1402B2920[dword_140404A6C[283831446]];
    v61 = 1065353216;
    v60 = 1.0;
    v59 = 1.0;
    v58 = 1.0;
    v57 = 32;
    sr_CSDrawText(v1, 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 20.0);
    v0 = dword_140404A6C[283831446];
  }
  if ( dword_140404A6C[283831448] == 3 && v0 == 5 )
  {
    if ( (int)dword_140404A6C[284023018] <= (int)dword_140404A6C[284023019] )
    {
      if ( (int)dword_140404A6C[284023018] >= (int)dword_140404A6C[284023019] )
      {
        *(float *)&v5 = 1.0;
        *(float *)&v6 = 1.0;
        *(float *)&v7 = 1.0;
        v8 = "Tie";
LABEL_13:
        v61 = 1065353216;
        v60 = *(float *)&v7;
        v59 = *(float *)&v6;
        v58 = *(float *)&v5;
        v57 = 33;
        sr_CSDrawText(v8, 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 30.0);
        goto LABEL_14;
      }
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    v3 = v2;
    v4 = 3LL * v2;
    v5 = dword_1402B2830[v4];
    v6 = dword_1402B2834[v4];
    v7 = dword_1402B2838[v4];
    if ( v3 )
      v8 = "Monsota Wins!";
    else
      v8 = "Goldmen Wins!";
    goto LABEL_13;
  }
LABEL_14:
  v9 = 0;
  v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
  v11 = 0;
  do
  {
    if ( v9 != 2 )
    {
      v12 = (float)((float)v9 * 248.0) + 8.0;
      if ( (unsigned int)v9 >= 3 )
      {
        *(float *)&v64 = 1.0;
        v13 = 1.0;
        v65 = 1.0;
        v14 = 1.0;
      }
      else
      {
        v13 = *(float *)&dword_1402B2834[3 * v11];
        v14 = *(float *)&dword_1402B2838[3 * v11];
        v64 = dword_1402B2830[3 * v11];
        v66 = v13;
        v65 = v14;
        v15 = off_1402B2890[v11];
        v61 = 1065353216;
        v60 = v14;
        v59 = v13;
        v58 = *(float *)&v64;
        v57 = 96;
        sr_CSDrawText(v15, v12, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10), 20.0);
        if ( dword_140404A6C[283831448] == 3 )
        {
          v62 = dword_140404A6C[5873 * v11 + 283831505];
          v61 = 1065353216;
          v60 = v14;
          v59 = v13;
          v58 = *(float *)&v64;
          v57 = 32;
          sr_CSDrawText("Bonus:$/i", v12, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))), 17.5);
        }
        v62 = dword_140404A6C[v11 + 284023018];
        v61 = 1065353216;
        v60 = v14;
        v59 = v13;
        v58 = *(float *)&v64;
        v57 = 32;
        sr_CSDrawText("Total:$/i", v12, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42F80000u))), 17.5);
        v65 = v14;
      }
      v66 = v13;
      v16 = _mm_cvtsi32_si128((int)(0x43180000u));
      v17 = &dword_140404A6C[71859139];
      v18 = 0;
      v19 = 2;
      dword_140404A6C[346695797] = 0;
      do
      {
        if ( *(v17 - 2886) )
        {
          if ( !*v17 )
          {
            v20 = (int)*(v17 - 2853);
            if ( (_DWORD)v20 == v9 || v11 == 3 && (_DWORD)v20 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 - 2;
              if ( (_DWORD)v20 == -1 || (int)v20 >= 6 )
                v21 = *(v17 - 2867);
              else
                v21 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v20 + 335047064] * 0.1)
                                         * (float)(int)*(v17 - 2851))
                                 + (float)(int)*(v17 - 2867));
              *(v17 - 2861) = v21;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v21;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[711] )
        {
          if ( !v17[3597] )
          {
            v22 = (int)v17[744];
            if ( (_DWORD)v22 == v9 || v11 == 3 && (_DWORD)v22 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 - 1;
              if ( (_DWORD)v22 == -1 || (int)v22 >= 6 )
                v23 = v17[730];
              else
                v23 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v22 + 335047064] * 0.1)
                                         * (float)(int)v17[746])
                                 + (float)(int)v17[730]);
              v17[736] = v23;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v23;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[4308] )
        {
          if ( !v17[7194] )
          {
            v24 = (int)v17[4341];
            if ( (_DWORD)v24 == v9 || v11 == 3 && (_DWORD)v24 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19;
              if ( (_DWORD)v24 == -1 || (int)v24 >= 6 )
                v25 = v17[4327];
              else
                v25 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v24 + 335047064] * 0.1)
                                         * (float)(int)v17[4343])
                                 + (float)(int)v17[4327]);
              v17[4333] = v25;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v25;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[7905] )
        {
          if ( !v17[10791] )
          {
            v26 = (int)v17[7938];
            if ( (_DWORD)v26 == v9 || v11 == 3 && (_DWORD)v26 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 1;
              if ( (_DWORD)v26 == -1 || (int)v26 >= 6 )
                v27 = v17[7924];
              else
                v27 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v26 + 335047064] * 0.1)
                                         * (float)(int)v17[7940])
                                 + (float)(int)v17[7924]);
              v17[7930] = v27;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v27;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[11502] )
        {
          if ( !v17[14388] )
          {
            v28 = (int)v17[11535];
            if ( (_DWORD)v28 == v9 || v11 == 3 && (_DWORD)v28 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 2;
              if ( (_DWORD)v28 == -1 || (int)v28 >= 6 )
                v29 = v17[11521];
              else
                v29 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v28 + 335047064] * 0.1)
                                         * (float)(int)v17[11537])
                                 + (float)(int)v17[11521]);
              v17[11527] = v29;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v29;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[15099] )
        {
          if ( !v17[17985] )
          {
            v30 = (int)v17[15132];
            if ( (_DWORD)v30 == v9 || v11 == 3 && (_DWORD)v30 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 3;
              if ( (_DWORD)v30 == -1 || (int)v30 >= 6 )
                v31 = v17[15118];
              else
                v31 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v30 + 335047064] * 0.1)
                                         * (float)(int)v17[15134])
                                 + (float)(int)v17[15118]);
              v17[15124] = v31;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v31;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[18696] )
        {
          if ( !v17[21582] )
          {
            v32 = (int)v17[18729];
            if ( (_DWORD)v32 == v9 || v11 == 3 && (_DWORD)v32 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 4;
              if ( (_DWORD)v32 == -1 || (int)v32 >= 6 )
                v33 = v17[18715];
              else
                v33 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v32 + 335047064] * 0.1)
                                         * (float)(int)v17[18731])
                                 + (float)(int)v17[18715]);
              v17[18721] = v33;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v33;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[22293] )
        {
          if ( !v17[25179] )
          {
            v34 = (int)v17[22326];
            if ( (_DWORD)v34 == v9 || v11 == 3 && (_DWORD)v34 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 5;
              if ( (_DWORD)v34 == -1 || (int)v34 >= 6 )
                v35 = v17[22312];
              else
                v35 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v34 + 335047064] * 0.1)
                                         * (float)(int)v17[22328])
                                 + (float)(int)v17[22312]);
              v17[22318] = v35;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v35;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        v19 += 8;
        v17 += 28776;
      }
      while ( (int)(v19 - 2) < 256 );
      dword_140404A6C[436668493] = v18;
      v36 = 0;
      v37 = 0;
      if ( v18 >= 8 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
        do
        {
          v36 += 8;
          v39 = _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695813]);
          v40 = _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695811]);
          v41 = _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695807]);
          *(__m128i *)&dword_140404A6C[v37 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695805]))));
          *(__m128i *)&dword_140404A6C[v37 + 437192786] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                v41,
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695809])),
                                                              _mm_unpacklo_epi32(v40, v39)));
          v37 += 8;
        }
        while ( v37 < v18 - (v18 & 7) );
      }
      if ( v36 < v18 )
      {
        v42 = &dword_140404A6C[v37 + 437192782];
        v43 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * v37 + 1390996552);
        v44 = (unsigned int)(v18 - v36);
        do
        {
          ++v42;
          v45 = -1879048193 - *v43;
          v43 += 2;
          *(v42 - 1) = v45;
          --v44;
        }
        while ( v44 );
      }
      sub_14007D710();
      dword_140404A6C[438291413] = 2;
      v46 = 0;
      if ( v18 > 0 )
      {
        v47 = *(float *)&v64;
        v48 = &dword_140404A6C[436668494];
        v49 = v12 + 24.0;
        do
        {
          v50 = dword_140404A6C[2 * *v48 + 346695798];
          if ( (unsigned int)v50 > 0xFF )
            v50 = 0;
          if ( dword_140404A6C[283831448] != 2 )
          {
            v63 = 1065353216;
            v62 = 1065353216;
            v61 = 1065353216;
            v60 = 1.0;
            v59 = 0.0;
            v58 = 24.0;
            v57 = 1103101952;
            if ( dword_140404A6C[v50 + 284023074] )
              v51 = dword_140404A6C[346696312];
            else
              v51 = dword_140404A6C[3597 * (unsigned int)v50 + 71856270]
                  ? dword_140404A6C[346696311]
                  : dword_140404A6C[346696310];
            sr_CSDrawAtlasEntry(
              0,
              v51,
              v12,
              *(float *)SR_VEC_LANES(128, v16, i32),
              *(float *)&v57,
              v58,
              SLOBYTE(v59),
              SLODWORD(v60),
              v61,
              v62,
              v63);
            if ( (_DWORD)v50 != dword_140404A6C[284024501]
              && dword_140404A6C[284024633]
              && !dword_140404A6C[346696313]
              && *(float *)&dword_140404A6C[284024597] >= v12
              && *(float *)&dword_140404A6C[284024597] < v49
              && *(float *)&dword_140404A6C[284024598] >= *(float *)SR_VEC_LANES(128, v16, i32)
              && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)SR_VEC_LANES(128, v16, i32) + 24.0) )
            {
              dword_140404A6C[v50 + 284023074] ^= 1u;
            }
          }
          v52 = 1.0;
          if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v50 + 71856271] )
            v52 = 0.5;
          v61 = 1065353216;
          v53 = 3597LL * (unsigned int)v50;
          v60 = v14 * v52;
          v59 = v13 * v52;
          v58 = v47 * v52;
          v57 = 96;
          sr_CSDrawText(
            (char *)&dword_140404A6C[v53 + 71856254],
            v49,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16),
            17.5);
          sub_140158AB0(
            v67,
            "%03d-%04d",
            dword_140404A6C[v53 + 71856265] / 0x2710,
            dword_140404A6C[v53 + 71856265] % 0x2710);
          v61 = 1065353216;
          v54 = v16;
          *(float *)SR_VEC_LANES(128, v54, i32) = *(float *)SR_VEC_LANES(128, v16, i32) + 18.0;
          v58 = v47 * v52;
          v57 = 96;
          sr_CSDrawText(v67, v49, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v54), 10.0);
          v14 = v65;
          v13 = v66;
          v62 = dword_140404A6C[v53 + 71856278];
          v61 = 1065353216;
          v60 = v65;
          v59 = v66;
          v58 = v47;
          v57 = 34;
          sr_CSDrawText("$/I", v12 + 240.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16), 17.5);
          ++v46;
          *(float *)SR_VEC_LANES(128, v16, i32) = *(float *)SR_VEC_LANES(128, v16, i32) + 24.0;
          ++v48;
        }
        while ( v46 < (int)dword_140404A6C[346695797] );
      }
      v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
      dword_140404A6C[438291413] = 0;
    }
    ++v9;
    ++v11;
  }
  while ( v9 < 4 );
  dword_140404A6C[346696313] = dword_140404A6C[284024633];
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14008B1AD: conditional instruction was optimized away because ecx.4==1
// 14008B2A0: conditional instruction was optimized away because esi.4<2u
// 14008B9EF: conditional instruction was optimized away because ebx.4>=8
// 14008B9E9: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF
// 140279890: using guessed type __int128 xmmword_140279890;
// 1402B2830: using guessed type int dword_1402B2830[];
// 1402B2834: using guessed type int dword_1402B2834[];
// 1402B2838: using guessed type int dword_1402B2838[];
// 1402B2890: using guessed type char *off_1402B2890[17];
// 1402B2920: using guessed type char *off_1402B2920[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCC4: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;
// 192E8EC40: using guessed type unsigned int;
// 192E8F444: using guessed type unsigned int;
// 192E8F448: using guessed type unsigned int;
// 192E8F44C: using guessed type unsigned int;
// 192E8F450: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (000000014008BE70) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_14008BE70(__int64 a1, double a2, double a3, double a4)
{
  __m128i v5; // xmm9
  __int128 v6; // xmm7
  __int64 v7; // rdi
  char *v8; // r8
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // rdx
  char v12; // cl
  char v13; // cl
  char v14; // cl
  char v15; // cl

  v5 = *(__m128i *)&a3;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( !*(_BYTE *)(v7 + a1) )
      break;
    v8 = (char *)&dword_140404A6C[18601421] - v7 - a1;
    v9 = 0;
    v10 = (char *)(v7 + a1 + 2);
    v11 = (char *)&dword_140404A6C[18601421] + -v7 - a1 + 1;
    do
    {
      v12 = *(v10 - 2);
      if ( !v12 || v12 == 10 )
        break;
      v10[(_QWORD)v8 - 2] = v12;
      v13 = *(v10 - 1);
      if ( !v13 || v13 == 10 )
      {
        ++v9;
        break;
      }
      v10[(_QWORD)v11 - 2] = v13;
      v14 = *v10;
      if ( !*v10 || v14 == 10 )
      {
        v9 += 2;
        break;
      }
      v10[(_QWORD)v8] = v14;
      v15 = v10[1];
      if ( !v15 || v15 == 10 )
      {
        v9 += 3;
        break;
      }
      v10[(_QWORD)v11] = v15;
      v9 += 4;
      v10 += 4;
    }
    while ( v9 < 1024 );
    if ( (unsigned __int64)v9 >= 0x400 )
      sub_1401F8694();
    *((_BYTE *)&dword_140404A6C[18601421] + v9) = 0;
    if ( *(_BYTE *)(v9 + v7 + a1) == 10 )
      ++v9;
    sr_CSDrawText(
      (char *)&dword_140404A6C[18601421],
      *(float *)&a2,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v5),
      *(float *)&a4);
    v7 += v9;
    *(float *)SR_VEC_LANES(128, v5, i32) = *(float *)SR_VEC_LANES(128, v5, i32) + *(float *)&a4;
    *(float *)&v6 = *(float *)&v6 + *(float *)&a4;
  }
  while ( v7 < 1024 );
  return (__m128)v6;
}

// 14008BE70: inconsistent variable size for 'xmm2_8.8'
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008C030) ----------------------------------------------------
void sub_14008C030()
{
  int v0; // ebp
  unsigned int *v1; // rsi
  __int64 i; // r14
  int v3; // eax
  signed int v4; // ebx
  __int64 j; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // xmm0_8
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdi

  v0 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v1 = &dword_140404A6C[225654128];
    for ( i = 0; ; i += 4673 )
    {
      if ( *(v1 - 12925) == 3 )
      {
        v3 = *v1;
        v4 = 0;
        for ( j = 0; v4 < (int)*v1; v3 = *v1 )
        {
          if ( (rand() & 7) != 0 )
          {
            ++v4;
            ++j;
          }
          else
          {
            v6 = (int)*v1;
            *v1 = v6 - 1;
            v7 = 3 * (i + v6);
            v8 = *(_QWORD *)&dword_140404A6C[3 * i + 225654126 + 3 * v6];
            v9 = 3 * (i + j);
            *(_QWORD *)&dword_140404A6C[v9 + 225654129] = v8;
            dword_140404A6C[v9 + 225654131] = dword_140404A6C[v7 + 225654128];
          }
        }
        if ( v3 < 8 )
          break;
      }
LABEL_24:
      ++v0;
      v1 += 14019;
      if ( v0 >= (int)dword_140404A6C[225641186] )
        return;
    }
    while ( 1 )
    {
      v10 = rand() & 0xF;
      if ( v10 < 2 )
        break;
      if ( v10 >= 6 )
      {
        if ( v10 < 0xA )
        {
          v11 = 15;
          goto LABEL_22;
        }
        if ( v10 < 0xD )
        {
          v11 = 9;
          goto LABEL_22;
        }
        if ( v10 < 0xF )
        {
          v11 = 6;
          goto LABEL_22;
        }
        LODWORD(v11) = 4;
        v12 = 4;
        if ( (rand() & 0xF) == 0 )
        {
          v11 = 5;
          goto LABEL_22;
        }
      }
      else
      {
        LODWORD(v11) = 0;
        v12 = 0;
      }
LABEL_23:
      dword_140404A6C[3 * i + 225654129 + 3 * (int)*v1] = v11;
      dword_140404A6C[3 * i + 225654130 + 3 * (int)*v1] = dword_140404A6C[24944 * v12 + 346707730];
      dword_140404A6C[3 * i + 225654131 + 3 * (int)(*v1)++] = rand() % 6;
      if ( (int)*v1 >= 8 )
        goto LABEL_24;
    }
    v11 = 7;
LABEL_22:
    v12 = v11;
    goto LABEL_23;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008C1F0) ----------------------------------------------------
void sub_14008C1F0()
{
  unsigned int *v0; // rsi
  unsigned int *v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi

  v0 = &dword_140404A6C[335047158];
  v1 = &dword_140404A6C[335047158];
  do
  {
    if ( *v1 )
    {
      if ( (rand() & 7) == 0 )
        *v1 = 0;
    }
    v1 += 4;
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[335047190] );
  do
  {
    if ( *v0 )
      goto LABEL_21;
    v2 = rand() & 0xF;
    if ( v2 < 2 )
    {
      v3 = 7;
LABEL_19:
      v4 = v3;
      goto LABEL_20;
    }
    if ( v2 >= 6 )
    {
      if ( v2 < 0xA )
      {
        v3 = 15;
        goto LABEL_19;
      }
      if ( v2 < 0xD )
      {
        v3 = 9;
        goto LABEL_19;
      }
      if ( v2 < 0xF )
      {
        v3 = 6;
        goto LABEL_19;
      }
      LODWORD(v3) = 4;
      v4 = 4;
      if ( (rand() & 0xF) == 0 )
      {
        v3 = 5;
        goto LABEL_19;
      }
    }
    else
    {
      LODWORD(v3) = 0;
      v4 = 0;
    }
LABEL_20:
    *v0 = 1;
    v0[1] = v3;
    v0[3] = dword_140404A6C[24944 * v4 + 346707730];
    v0[2] = rand() % 6;
LABEL_21:
    v0 += 4;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[335047190] );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008C310) ----------------------------------------------------
unsigned int *sub_14008C310()
{
  unsigned int *result; // rax
  signed int v1; // ecx
  signed int v2; // r8d
  unsigned int v3; // r10d
  __int64 v4; // r9
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // r12d
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // r11d
  __int64 v23; // rdx
  __int64 v24; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned int *)&retaddr;
  v1 = dword_140404A6C[225641186];
  v2 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v3 = dword_140404A6C[278539038];
    v4 = 0;
    v5 = dword_140404A6C[278536502];
    v6 = dword_140404A6C[278532698];
    v7 = dword_140404A6C[278533966];
    v8 = dword_140404A6C[278535234];
    v9 = dword_140404A6C[278526358];
    v10 = dword_140404A6C[278525090];
    result = &dword_140404A6C[225654128];
    v11 = dword_140404A6C[278531430];
    v12 = dword_140404A6C[278530162];
    do
    {
      if ( *(result - 12925) == 8 )
      {
        *result = 0;
        result[1] = 11;
        dword_140404A6C[3 * v4 + 225654130] = v8;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v13 = (int)*result;
        *result = v13 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v13] = 12;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v5;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v14 = (int)*result;
        *result = v14 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v14] = 7;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v12;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v15 = (int)*result;
        *result = v15 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v15] = 8;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v11;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v16 = (int)*result;
        *result = v16 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v16] = 1;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = dword_140404A6C[278522554];
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v17 = (int)*result;
        *result = v17 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v17] = 2;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = dword_140404A6C[278523822];
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v18 = (int)*result;
        *result = v18 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v18] = 3;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v10;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v19 = (int)*result;
        *result = v19 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v19] = 4;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v9;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v20 = (int)*result;
        *result = v20 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v20] = 9;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v6;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v21 = (int)*result;
        *result = v21 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v21] = 10;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v7;
        v22 = dword_140404A6C[278537770];
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v23 = (int)*result;
        *result = v23 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v23] = 14;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v3;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v24 = (int)*result;
        *result = v24 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v24] = 13;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v22;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)(*result)++] = 0;
        v1 = dword_140404A6C[225641186];
      }
      ++v2;
      v4 += 4673;
      result += 14019;
    }
    while ( v2 < v1 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1760C55F4: using guessed type unsigned int;
// 182A7F554: using guessed type unsigned int;
// 182A80924: using guessed type unsigned int;
// 182A81CF4: using guessed type unsigned int;
// 182A830C4: using guessed type unsigned int;
// 182A86C34: using guessed type unsigned int;
// 182A88004: using guessed type unsigned int;
// 182A893D4: using guessed type unsigned int;
// 182A8A7A4: using guessed type unsigned int;
// 182A8BB74: using guessed type unsigned int;
// 182A8CF44: using guessed type unsigned int;
// 182A8E314: using guessed type unsigned int;
// 182A8F6E4: using guessed type unsigned int;

//----- (000000014008C810) ----------------------------------------------------
__int64 sub_14008C810()
{
  float *v0; // r10
  unsigned int *v1; // rdi
  int i; // r9d
  int v3; // r11d
  int *v4; // rcx
  __int64 v5; // rbx
  float v6; // xmm2_4
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // xmm2_4
  unsigned int *v12; // rdx
  __int64 result; // rax
  int j; // r10d
  __int64 v15; // r11
  int v16; // r8d
  int *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rbx
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  __int64 v24; // rbx
  unsigned int *v25; // r9
  unsigned __int64 v26; // rdx
  unsigned int *v27; // rdi
  __int64 v28; // r11
  unsigned int *v29; // r10
  int v30; // r8d
  __int64 v31; // r8

  v0 = (float *)&dword_140404A6C[335047062];
  v1 = &dword_140404A6C[283831508];
  for ( i = 0; i < 3; ++i )
  {
    v3 = *v1;
    v4 = (int *)&dword_140404A6C[71856271];
    v5 = 64;
    v6 = (float)((float)(int)*v1 * 0.0099999998) - 0.5;
    do
    {
      if ( *(v4 - 18) && *v4 > 0 && v4[15] == i )
      {
        v7 = v3 / 2;
        if ( v6 >= 1.0 && v4[18] )
          v7 = (int)(float)((float)((float)((float)v4[17] * *v0) * (float)(v6 * 0.001)) + (float)v7);
        v4[1] += 150 + v7;
      }
      if ( v4[3579] && v4[3597] > 0 && v4[3612] == i )
      {
        v8 = v3 / 2;
        if ( v6 >= 1.0 && v4[3615] )
          v8 = (int)(float)((float)((float)((float)v4[3614] * *v0) * (float)(v6 * 0.001)) + (float)v8);
        v4[3598] += 150 + v8;
      }
      if ( v4[7176] && v4[7194] > 0 && v4[7209] == i )
      {
        v9 = v3 / 2;
        if ( v6 >= 1.0 && v4[7212] )
          v9 = (int)(float)((float)((float)((float)v4[7211] * *v0) * (float)(v6 * 0.001)) + (float)v9);
        v4[7195] += 150 + v9;
      }
      if ( v4[10773] && v4[10791] > 0 && v4[10806] == i )
      {
        v10 = v3 / 2;
        if ( v6 >= 1.0 && v4[10809] )
          v10 = (int)(float)((float)((float)((float)v4[10808] * *v0) * (float)(v6 * 0.001)) + (float)v10);
        v4[10792] += 150 + v10;
      }
      v4 += 14388;
      --v5;
    }
    while ( v5 );
    v11 = (float)((float)(v6 * 0.0049999999) + 1.0) * *v0;
    if ( v11 >= 10.0 )
    {
      *v0 = v11;
      if ( v11 >= 500.0 )
      {
        v12 = &dword_140404A6C[71856288];
        *v0 = v11 * 0.2;
        do
        {
          if ( *(v12 - 35) && *(v12 - 2) == i )
            *v12 *= 5;
          v12 += 3597;
        }
        while ( (__int64)v12 < (__int64)&dword_140404A6C[72777120] );
      }
    }
    else
    {
      *v0 = 10.0;
    }
    v1 += 5873;
    v0 += 6;
  }
  result = (__int64)&dword_140404A6C[71856289];
  do
  {
    if ( *(_DWORD *)(result - 144) )
      *(_DWORD *)result = 0;
    if ( *(_DWORD *)(result + 14244) )
      *(_DWORD *)(result + 14388) = 0;
    result += 28776;
  }
  while ( result < (__int64)&dword_140404A6C[72777121] );
  for ( j = 0; j < 3; ++j )
  {
    v15 = -1;
    v16 = 1000;
    v17 = (int *)&dword_140404A6C[71856271];
    v18 = 2;
    v19 = 64;
    do
    {
      if ( *(v17 - 18) )
      {
        if ( *v17 > 0 )
        {
          result = v17[15];
          if ( (_DWORD)result == j )
          {
            v20 = (float)((float)v17[17] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)v17[1];
            if ( (float)v16 < v20 )
            {
              v15 = v18 - 2;
              v16 = (int)v20;
            }
          }
        }
      }
      if ( v17[3579] )
      {
        if ( v17[3597] > 0 )
        {
          result = v17[3612];
          if ( (_DWORD)result == j )
          {
            v21 = (float)((float)v17[3614] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)v17[3598];
            if ( (float)v16 < v21 )
            {
              v15 = v18 - 1;
              v16 = (int)v21;
            }
          }
        }
      }
      if ( v17[7176] )
      {
        if ( v17[7194] > 0 )
        {
          result = v17[7209];
          if ( (_DWORD)result == j )
          {
            v22 = (float)((float)v17[7211] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)v17[7195];
            if ( (float)v16 < v22 )
            {
              v15 = v18;
              v16 = (int)v22;
            }
          }
        }
      }
      if ( v17[10773] )
      {
        if ( v17[10791] > 0 )
        {
          result = v17[10806];
          if ( (_DWORD)result == j )
          {
            v23 = (float)((float)v17[10808] * *(float *)&dword_140404A6C[6 * result + 335047062]) + (float)v17[10792];
            if ( (float)v16 < v23 )
            {
              v15 = v18 + 1;
              v16 = (int)v23;
            }
          }
        }
      }
      v18 += 4;
      v17 += 14388;
      --v19;
    }
    while ( v19 );
    if ( v15 != -1 )
    {
      result = 14388 * v15;
      dword_140404A6C[3597 * v15 + 71856289] = 1;
    }
  }
  v24 = 0;
  v25 = &dword_140404A6C[71856292];
  do
  {
    if ( *(v25 - 39) )
    {
      result = (int)*v25;
      if ( (_DWORD)result != -1 )
      {
        v26 = 0;
        v27 = &dword_140404A6C[7166 * result + 280658140];
        while ( 1 )
        {
          v28 = (int)*(v27 - 1);
          v25[v26 + 1494] = 0;
          if ( v28 > 0 )
            break;
LABEL_87:
          v26 += 25LL;
          v27 += 10;
          if ( (__int64)v26 >= 175 )
            goto LABEL_88;
        }
        v29 = v27;
        while ( 1 )
        {
          result = (int)*v29;
          v30 = dword_140404A6C[1760 * result + 278845898];
          if ( v30 > 14 )
          {
            if ( v30 != 27 )
              goto LABEL_86;
            result = (int)dword_140404A6C[1760 * result + 278846053];
            if ( (_DWORD)result == -1 )
              goto LABEL_86;
            v31 = 5210 * result;
            if ( (int)dword_140404A6C[5210 * result + 129716712] <= 0 )
              goto LABEL_86;
            dword_140404A6C[3 * v24 + 71857787 + 3 * (int)v25[v26 + 1494] + v26] = 27;
            dword_140404A6C[3 * v24 + 71857788 + 3 * (int)v25[v26 + 1494] + v26] = dword_140404A6C[v31 + 129716710];
            result = dword_140404A6C[v31 + 129716715];
            dword_140404A6C[3 * v24 + 71857789 + 3 * (int)v25[v26 + 1494] + v26] = result;
          }
          else
          {
            result = 3 * (v24 + (int)v25[v26 + 1494]);
            dword_140404A6C[3 * v24 + 71857787 + 3 * (int)v25[v26 + 1494] + v26] = v30;
          }
          ++v25[v26 + 1494];
LABEL_86:
          ++v29;
          if ( !--v28 )
            goto LABEL_87;
        }
      }
    }
LABEL_88:
    v25 += 3597;
    v24 += 1199;
  }
  while ( (__int64)v25 < (__int64)&dword_140404A6C[72777124] );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008CEB0) ----------------------------------------------------
__int64            sub_14008CEB0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float v7; // xmm4_4
  float v8; // xmm10_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm11_4
  float v13; // xmm4_4
  float v14; // xmm10_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm13_4
  float v19; // xmm14_4
  float v20; // xmm12_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v25; // xmm5_4
  float v26; // xmm3_4
  float v27; // xmm6_4

  v7 = a4[1];
  v8 = a4[2];
  v9 = *a5 - *a4;
  v10 = a5[1] - v7;
  v11 = a5[2] - v8;
  v12 = *a4 - *a6;
  v13 = v7 - a6[1];
  v14 = v8 - a6[2];
  v15 = *a7 - *a6;
  v16 = a7[1] - a6[1];
  v17 = a7[2] - a6[2];
  v18 = (float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17);
  v19 = (float)((float)(v13 * v16) + (float)(v12 * v15)) + (float)(v14 * v17);
  v20 = (float)((float)(v16 * v10) + (float)(v15 * v9)) + (float)(v17 * v11);
  v21 = (float)((float)((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11)) * v18) - (float)(v20 * v20);
  if ( v21 == 0.0 )
    return 0;
  v22 = (float)((float)(v20 * v19)
              - (float)((float)((float)((float)(v13 * v10) + (float)(v12 * v9)) + (float)(v14 * v11)) * v18))
      / v21;
  if ( v22 < 0.0 )
    return 0;
  if ( v22 > 1.0 )
    return 0;
  v23 = (float)((float)(v22 * v20) + v19) / v18;
  if ( v23 < 0.0 || v23 > 1.0 )
    return 0;
  *a1 = (float)(v9 * v22) + *a4;
  a1[1] = (float)(v10 * v22) + a4[1];
  a1[2] = (float)(v11 * v22) + a4[2];
  v25 = (float)(v15 * v23) + *a6;
  *a2 = v25;
  v26 = (float)(v16 * v23) + a6[1];
  a2[1] = v26;
  v27 = (float)(v17 * v23) + a6[2];
  a2[2] = v27;
  *a3 = fsqrt(
          (float)((float)((float)(v26 - a1[1]) * (float)(v26 - a1[1])) + (float)((float)(v25 - *a1) * (float)(v25 - *a1)))
        + (float)((float)(v27 - a1[2]) * (float)(v27 - a1[2])));
  return 1;
}


//----- (000000014008D150) ----------------------------------------------------
__int64            sub_14008D150(int a1, float *a2, float *a3)
{
  __int64 v5; // r11
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  int v9; // esi
  int v10; // r9d
  int v11; // r10d
  int v12; // edx
  __int64 v13; // rdx
  int v14; // eax
  __int64 result; // rax

  v5 = 24LL * a1;
  v6 = dword_140404A6C[v5 + 225171871];
  v7 = dword_140404A6C[v5 + 225171872];
  v8 = dword_140404A6C[v5 + 225171870];
  v9 = dword_140404A6C[v5 + 225171873];
  v10 = v6 - 1;
  v11 = v7 - 1;
  if ( v8 == 1 )
  {
    v12 = v7 - 1;
  }
  else
  {
    v12 = 0;
    if ( v8 == 2 )
    {
LABEL_7:
      v13 = dword_140404A6C[v5 + 225171870];
      do
      {
        v14 = v6;
        v6 = v7;
        v7 = v14;
        --v13;
      }
      while ( v13 );
      goto LABEL_9;
    }
  }
  v11 = v6 - 1;
  v10 = 0;
  if ( v8 != 3 )
  {
    v11 = 0;
    v10 = v12;
  }
  if ( v8 > 0 )
    goto LABEL_7;
LABEL_9:
  *a2 = (float)(int)(dword_140404A6C[v5 + 225171867] - v10) * 4.0;
  a2[1] = (float)(int)dword_140404A6C[v5 + 225171868] * 4.0;
  result = dword_140404A6C[v5 + 225171869] - v11;
  a2[2] = (float)(int)result * 4.0;
  *a3 = (float)v6 * 4.0;
  a3[2] = (float)v7 * 4.0;
  a3[1] = (float)v9 * 4.0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008D280) ----------------------------------------------------
void            sub_14008D280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8

  dword_140404A6C[456807033] = a5;
  dword_140404A6C[456807034] = a6;
  dword_140404A6C[456807035] = a7;
  dword_140404A6C[456807036] = 1065353216;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(a1, a2, a3);
  sub_14007D420(v8, v7, v9);
  sub_14007D420(v11, v10, v12);
  sub_14007D420(v14, v13, v15);
  sub_14007D420(v17, v16, v18);
  sub_14007D420(v20, v19, v21);
  sub_14007D420(v23, v22, v24);
  sub_14007D420(v26, v25, v27);
  sub_14007D420(v29, v28, v30);
  sub_14007D420(v32, v31, v33);
  sub_14007D420(v35, v34, v36);
  sub_14007D420(v38, v37, v39);
  sub_14007D420(v41, v40, v42);
  sub_14007D420(v44, v43, v45);
  sub_14007D420(v47, v46, v48);
  sub_14007D420(v50, v49, v51);
  sub_14007D420(v53, v52, v54);
  sub_14007D420(v56, v55, v57);
  sub_14007D420(v59, v58, v60);
  sub_14007D420(v62, v61, v63);
  sub_14007D420(v65, v64, v66);
  sub_14007D420(v68, v67, v69);
  sub_14007D420(v71, v70, v72);
  sub_14007D420(v74, v73, v75);
  sub_14006E0D0(v77, v76, v78);
}

// 14008D328: variable 'v8' is possibly undefined
// 14008D328: variable 'v7' is possibly undefined
// 14008D328: variable 'v9' is possibly undefined
// 14008D33E: variable 'v11' is possibly undefined
// 14008D33E: variable 'v10' is possibly undefined
// 14008D33E: variable 'v12' is possibly undefined
// 14008D357: variable 'v14' is possibly undefined
// 14008D357: variable 'v13' is possibly undefined
// 14008D357: variable 'v15' is possibly undefined
// 14008D370: variable 'v17' is possibly undefined
// 14008D370: variable 'v16' is possibly undefined
// 14008D370: variable 'v18' is possibly undefined
// 14008D386: variable 'v20' is possibly undefined
// 14008D386: variable 'v19' is possibly undefined
// 14008D386: variable 'v21' is possibly undefined
// 14008D39C: variable 'v23' is possibly undefined
// 14008D39C: variable 'v22' is possibly undefined
// 14008D39C: variable 'v24' is possibly undefined
// 14008D3AF: variable 'v26' is possibly undefined
// 14008D3AF: variable 'v25' is possibly undefined
// 14008D3AF: variable 'v27' is possibly undefined
// 14008D3C2: variable 'v29' is possibly undefined
// 14008D3C2: variable 'v28' is possibly undefined
// 14008D3C2: variable 'v30' is possibly undefined
// 14008D3D9: variable 'v32' is possibly undefined
// 14008D3D9: variable 'v31' is possibly undefined
// 14008D3D9: variable 'v33' is possibly undefined
// 14008D3EF: variable 'v35' is possibly undefined
// 14008D3EF: variable 'v34' is possibly undefined
// 14008D3EF: variable 'v36' is possibly undefined
// 14008D409: variable 'v38' is possibly undefined
// 14008D409: variable 'v37' is possibly undefined
// 14008D409: variable 'v39' is possibly undefined
// 14008D422: variable 'v41' is possibly undefined
// 14008D422: variable 'v40' is possibly undefined
// 14008D422: variable 'v42' is possibly undefined
// 14008D43F: variable 'v44' is possibly undefined
// 14008D43F: variable 'v43' is possibly undefined
// 14008D43F: variable 'v45' is possibly undefined
// 14008D455: variable 'v47' is possibly undefined
// 14008D455: variable 'v46' is possibly undefined
// 14008D455: variable 'v48' is possibly undefined
// 14008D46F: variable 'v50' is possibly undefined
// 14008D46F: variable 'v49' is possibly undefined
// 14008D46F: variable 'v51' is possibly undefined
// 14008D486: variable 'v53' is possibly undefined
// 14008D486: variable 'v52' is possibly undefined
// 14008D486: variable 'v54' is possibly undefined
// 14008D4A0: variable 'v56' is possibly undefined
// 14008D4A0: variable 'v55' is possibly undefined
// 14008D4A0: variable 'v57' is possibly undefined
// 14008D4BA: variable 'v59' is possibly undefined
// 14008D4BA: variable 'v58' is possibly undefined
// 14008D4BA: variable 'v60' is possibly undefined
// 14008D4D7: variable 'v62' is possibly undefined
// 14008D4D7: variable 'v61' is possibly undefined
// 14008D4D7: variable 'v63' is possibly undefined
// 14008D4F4: variable 'v65' is possibly undefined
// 14008D4F4: variable 'v64' is possibly undefined
// 14008D4F4: variable 'v66' is possibly undefined
// 14008D50E: variable 'v68' is possibly undefined
// 14008D50E: variable 'v67' is possibly undefined
// 14008D50E: variable 'v69' is possibly undefined
// 14008D528: variable 'v71' is possibly undefined
// 14008D528: variable 'v70' is possibly undefined
// 14008D528: variable 'v72' is possibly undefined
// 14008D540: variable 'v74' is possibly undefined
// 14008D540: variable 'v73' is possibly undefined
// 14008D540: variable 'v75' is possibly undefined
// 14008D55A: variable 'v77' is possibly undefined
// 14008D55A: variable 'v76' is possibly undefined
// 14008D55A: variable 'v78' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (000000014008D560) ----------------------------------------------------
void            sub_14008D560(__int64 a1, __int64 a2, __int64 a3, float a4, unsigned int a5)
{
  unsigned int v5; // xmm2_4
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8

  dword_140404A6C[456807033] = v5;
  dword_140404A6C[456807036] = 1065353216;
  *(float *)&dword_140404A6C[456807034] = a4;
  dword_140404A6C[456807035] = a5;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(a1, a2, a3);
  sub_14007D420(v7, v6, v8);
  sub_14007D420(v10, v9, v11);
  sub_14007D420(v13, v12, v14);
  sub_14007D420(v16, v15, v17);
  sub_14007D420(v19, v18, v20);
  sub_14007D420(v22, v21, v23);
  sub_14007D420(v25, v24, v26);
  sub_14007D420(v28, v27, v29);
  sub_14007D420(v31, v30, v32);
  sub_14007D420(v34, v33, v35);
  sub_14007D420(v37, v36, v38);
  sub_14007D420(v40, v39, v41);
  sub_14007D420(v43, v42, v44);
  sub_14007D420(v46, v45, v47);
  sub_14007D420(v49, v48, v50);
  sub_14007D420(v52, v51, v53);
  sub_14007D420(v55, v54, v56);
  sub_14007D420(v58, v57, v59);
  sub_14007D420(v61, v60, v62);
  sub_14007D420(v64, v63, v65);
  sub_14007D420(v67, v66, v68);
  sub_14007D420(v70, v69, v71);
  sub_14007D420(v73, v72, v74);
  sub_14006E0D0(v76, v75, v77);
}

// 14008D56F: variable 'v5' is possibly undefined
// 14008D5E1: variable 'v7' is possibly undefined
// 14008D5E1: variable 'v6' is possibly undefined
// 14008D5E1: variable 'v8' is possibly undefined
// 14008D5F7: variable 'v10' is possibly undefined
// 14008D5F7: variable 'v9' is possibly undefined
// 14008D5F7: variable 'v11' is possibly undefined
// 14008D610: variable 'v13' is possibly undefined
// 14008D610: variable 'v12' is possibly undefined
// 14008D610: variable 'v14' is possibly undefined
// 14008D629: variable 'v16' is possibly undefined
// 14008D629: variable 'v15' is possibly undefined
// 14008D629: variable 'v17' is possibly undefined
// 14008D63F: variable 'v19' is possibly undefined
// 14008D63F: variable 'v18' is possibly undefined
// 14008D63F: variable 'v20' is possibly undefined
// 14008D655: variable 'v22' is possibly undefined
// 14008D655: variable 'v21' is possibly undefined
// 14008D655: variable 'v23' is possibly undefined
// 14008D668: variable 'v25' is possibly undefined
// 14008D668: variable 'v24' is possibly undefined
// 14008D668: variable 'v26' is possibly undefined
// 14008D67B: variable 'v28' is possibly undefined
// 14008D67B: variable 'v27' is possibly undefined
// 14008D67B: variable 'v29' is possibly undefined
// 14008D691: variable 'v31' is possibly undefined
// 14008D691: variable 'v30' is possibly undefined
// 14008D691: variable 'v32' is possibly undefined
// 14008D6A7: variable 'v34' is possibly undefined
// 14008D6A7: variable 'v33' is possibly undefined
// 14008D6A7: variable 'v35' is possibly undefined
// 14008D6C0: variable 'v37' is possibly undefined
// 14008D6C0: variable 'v36' is possibly undefined
// 14008D6C0: variable 'v38' is possibly undefined
// 14008D6D9: variable 'v40' is possibly undefined
// 14008D6D9: variable 'v39' is possibly undefined
// 14008D6D9: variable 'v41' is possibly undefined
// 14008D6F5: variable 'v43' is possibly undefined
// 14008D6F5: variable 'v42' is possibly undefined
// 14008D6F5: variable 'v44' is possibly undefined
// 14008D70B: variable 'v46' is possibly undefined
// 14008D70B: variable 'v45' is possibly undefined
// 14008D70B: variable 'v47' is possibly undefined
// 14008D724: variable 'v49' is possibly undefined
// 14008D724: variable 'v48' is possibly undefined
// 14008D724: variable 'v50' is possibly undefined
// 14008D73A: variable 'v52' is possibly undefined
// 14008D73A: variable 'v51' is possibly undefined
// 14008D73A: variable 'v53' is possibly undefined
// 14008D753: variable 'v55' is possibly undefined
// 14008D753: variable 'v54' is possibly undefined
// 14008D753: variable 'v56' is possibly undefined
// 14008D76C: variable 'v58' is possibly undefined
// 14008D76C: variable 'v57' is possibly undefined
// 14008D76C: variable 'v59' is possibly undefined
// 14008D788: variable 'v61' is possibly undefined
// 14008D788: variable 'v60' is possibly undefined
// 14008D788: variable 'v62' is possibly undefined
// 14008D7A4: variable 'v64' is possibly undefined
// 14008D7A4: variable 'v63' is possibly undefined
// 14008D7A4: variable 'v65' is possibly undefined
// 14008D7BD: variable 'v67' is possibly undefined
// 14008D7BD: variable 'v66' is possibly undefined
// 14008D7BD: variable 'v68' is possibly undefined
// 14008D7D6: variable 'v70' is possibly undefined
// 14008D7D6: variable 'v69' is possibly undefined
// 14008D7D6: variable 'v71' is possibly undefined
// 14008D7EC: variable 'v73' is possibly undefined
// 14008D7EC: variable 'v72' is possibly undefined
// 14008D7EC: variable 'v74' is possibly undefined
// 14008D7FB: variable 'v76' is possibly undefined
// 14008D7FB: variable 'v75' is possibly undefined
// 14008D7FB: variable 'v77' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (000000014008D800) ----------------------------------------------------
__int64 sub_14008D800()
{
  int v0; // r14d
  int v1; // ebx
  float v2; // xmm7_4
  float v3; // xmm8_4
  float v4; // xmm9_4
  float v5; // xmm10_4
  int v6; // esi
  int v7; // r13d
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int n; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  int ii; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  int i; // ebx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  int j; // ebx
  __int64 v39; // rdx
  __int64 v40; // r8
  int k; // ebx
  __int64 v42; // rdx
  __int64 v43; // r8
  int m; // ebx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r11
  unsigned int v53; // r10d
  __int64 v54; // rdx
  unsigned int v55; // ecx
  unsigned int v56; // eax
  signed int v57; // eax
  __int64 v58; // r9
  int v59; // edi
  unsigned int *v60; // rbx
  float v61; // xmm1_4
  float v62; // xmm0_4
  __int64 v63; // r8
  __int64 v64; // rdx
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // r10d
  __int64 v68; // r9
  unsigned int v69; // eax
  float v70; // xmm0_4
  int v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // edi
  int v75; // ebx
  int v76; // edi
  unsigned int *v77; // rbx
  double v78; // xmm2_8
  float v79; // xmm1_4
  float v80; // xmm0_4
  int v81; // esi
  unsigned int *v82; // rdi
  __int128 v83; // xmm0
  __int64 v84; // rax
  __int64 v85; // r8
  int v86; // r10d
  __int64 v87; // rdx
  int v88; // r9d
  int v89; // r11d
  float v90; // xmm2_4
  float v91; // xmm3_4
  float v92; // xmm4_4
  float v93; // xmm8_4
  float v94; // xmm13_4
  float v95; // xmm10_4
  float v96; // xmm11_4
  unsigned int v97; // xmm10_4
  float v98; // xmm12_4
  __int64 v99; // rdx
  __int64 v100; // r8
  float v101; // xmm9_4
  float v102; // xmm10_4
  signed int v103; // ebx
  float v104; // xmm14_4
  float v105; // xmm1_4
  float v106; // xmm15_4
  float v107; // xmm6_4
  float v108; // xmm8_4
  float v109; // xmm13_4
  float v110; // xmm7_4
  __int64 v111; // rdx
  __int64 v112; // r8
  float v113; // xmm11_4
  float v114; // xmm9_4
  float v115; // xmm12_4
  float v116; // xmm10_4
  signed int v117; // ebx
  float v118; // xmm13_4
  float v119; // xmm8_4
  __int64 v120; // rdx
  __int64 v121; // r8
  int *v122; // rbx
  float v123; // xmm1_4
  float v124; // xmm0_4
  _DWORD v126[10]; // [rsp+0h] [rbp-100h] BYREF
  float v127; // [rsp+40h] [rbp-C0h] BYREF
  float v128; // [rsp+44h] [rbp-BCh]
  float v129; // [rsp+48h] [rbp-B8h]
  float v130; // [rsp+50h] [rbp-B0h]
  float v131; // [rsp+58h] [rbp-A8h] BYREF
  float v132; // [rsp+5Ch] [rbp-A4h]
  float v133; // [rsp+60h] [rbp-A0h]
  float v134; // [rsp+68h] [rbp-98h]
  float v135; // [rsp+6Ch] [rbp-94h]
  float v136; // [rsp+70h] [rbp-90h]
  float v137; // [rsp+74h] [rbp-8Ch]
  float v138; // [rsp+78h] [rbp-88h]
  float v139; // [rsp+7Ch] [rbp-84h]
  float v140; // [rsp+80h] [rbp-80h]
  unsigned int v141; // [rsp+84h] [rbp-7Ch]
  unsigned int v142[4]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v143[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v144; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v145; // [rsp+B8h] [rbp-48h]
  float v146; // [rsp+C8h] [rbp-38h]
  __int64 v147; // [rsp+D0h] [rbp-30h]

  v0 = 0;
  if ( *(float *)&dword_140404A6C[309078303] == 0.0 )
  {
    v3 = 0.0;
    v2 = 256.0;
    if ( *(float *)&dword_140404A6C[309078305] == 0.0 )
    {
      v1 = 1;
      v4 = 0.0;
      v5 = 256.0;
    }
    else
    {
      v1 = 2;
      v4 = 256.0;
      v5 = 0.0;
    }
  }
  else
  {
    v1 = 0;
    v2 = 0.0;
    v3 = 256.0;
    v4 = 256.0;
    v5 = 0.0;
  }
  v6 = (int)(float)(*(float *)&dword_140404A6C[309078300] * 0.25);
  v7 = (int)(float)(*(float *)&dword_140404A6C[309078302] * 0.25);
  v8 = (int)(float)(*(float *)&dword_140404A6C[309078301] * 0.25);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  qword_140404050(3553, dword_140404A6C[451221642]);
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279420;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  v127 = *(float *)&dword_140404A6C[309078300] - v2;
  dword_140404A6C[456217208] = 9;
  v128 = *(float *)&dword_140404A6C[309078301] + v4;
  v129 = (float)(*(float *)&dword_140404A6C[309078302] - v3) + v5;
  sub_14007D520((unsigned int *)&v127, v9, v10);
  v127 = *(float *)&dword_140404A6C[309078300] + v2;
  v128 = *(float *)&dword_140404A6C[309078301] + v4;
  v129 = (float)(*(float *)&dword_140404A6C[309078302] + v3) + v5;
  sub_14007D520((unsigned int *)&v127, v11, v12);
  v127 = *(float *)&dword_140404A6C[309078300] + v2;
  v128 = *(float *)&dword_140404A6C[309078301] - v4;
  v129 = (float)(*(float *)&dword_140404A6C[309078302] + v3) - v5;
  sub_14007D520((unsigned int *)&v127, v13, v14);
  v127 = *(float *)&dword_140404A6C[309078300] - v2;
  v128 = *(float *)&dword_140404A6C[309078301] - v4;
  v129 = (float)(*(float *)&dword_140404A6C[309078302] - v3) - v5;
  sub_14007D520((unsigned int *)&v127, v15, v16);
  sub_14006E0D0(v18, v17, v19);
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v127 = 0.0;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
      v128 = *(float *)&dword_140404A6C[309078301];
      v129 = *(float *)&dword_140404A6C[309078302] - 256.0;
      sub_14007D520((unsigned int *)&v127, v20, v22);
      v128 = *(float *)&dword_140404A6C[309078301];
      v129 = *(float *)&dword_140404A6C[309078302] + 256.0;
      sub_14007D520((unsigned int *)&v127, v29, v30);
      for ( i = v6 - 64; i < v6 + 64; ++i )
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
        if ( (i & 3) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
        if ( (i & 7) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
        if ( !(_BYTE)i )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
        v129 = *(float *)&dword_140404A6C[309078302] - 256.0;
        v127 = (float)i * 4.0;
        v128 = *(float *)&dword_140404A6C[309078301];
        sub_14007D520((unsigned int *)&v127, v31, v32);
        v128 = *(float *)&dword_140404A6C[309078301];
        v129 = *(float *)&dword_140404A6C[309078302] + 256.0;
        sub_14007D520((unsigned int *)&v127, v34, v35);
      }
      v129 = 0.0;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
      v128 = *(float *)&dword_140404A6C[309078301];
      v127 = *(float *)&dword_140404A6C[309078300] - 256.0;
      sub_14007D520((unsigned int *)&v127, v31, v32);
      v127 = *(float *)&dword_140404A6C[309078300] + 256.0;
      v128 = *(float *)&dword_140404A6C[309078301];
      sub_14007D520((unsigned int *)&v127, v36, v37);
      for ( j = v7 - 64; j < v7 + 64; ++j )
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
        if ( (j & 3) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
        if ( (j & 7) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
        if ( !(_BYTE)j )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
        v127 = *(float *)&dword_140404A6C[309078300] - 256.0;
        v128 = *(float *)&dword_140404A6C[309078301];
        v129 = (float)j * 4.0;
        sub_14007D520((unsigned int *)&v127, v20, v22);
        v127 = *(float *)&dword_140404A6C[309078300] + 256.0;
        v128 = *(float *)&dword_140404A6C[309078301];
        sub_14007D520((unsigned int *)&v127, v39, v40);
      }
    }
    else
    {
      for ( k = v6 - 64; k < v6 + 64; ++k )
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
        if ( (k & 3) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
        if ( (k & 7) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
        if ( !(_BYTE)k )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
        v128 = *(float *)&dword_140404A6C[309078301] - 256.0;
        v127 = (float)k * 4.0;
        v129 = *(float *)&dword_140404A6C[309078302];
        sub_14007D520((unsigned int *)&v127, v20, v22);
        v128 = *(float *)&dword_140404A6C[309078301] + 256.0;
        v129 = *(float *)&dword_140404A6C[309078302];
        sub_14007D520((unsigned int *)&v127, v42, v43);
      }
      for ( m = v8 - 64; m < v8 + 64; ++m )
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
        if ( (m & 3) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
        if ( (m & 7) == 0 )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
        if ( !(_BYTE)m )
          *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
        v127 = *(float *)&dword_140404A6C[309078300] - 256.0;
        v129 = *(float *)&dword_140404A6C[309078302];
        v128 = (float)m * 4.0;
        sub_14007D520((unsigned int *)&v127, v20, v22);
        v127 = *(float *)&dword_140404A6C[309078300] + 256.0;
        v129 = *(float *)&dword_140404A6C[309078302];
        sub_14007D520((unsigned int *)&v127, v45, v46);
      }
    }
  }
  else
  {
    for ( n = v8 - 64; n < v8 + 64; ++n )
    {
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
      if ( (n & 3) == 0 )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
      if ( (n & 7) == 0 )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
      if ( !(_BYTE)n )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
      v127 = *(float *)&dword_140404A6C[309078300];
      v129 = *(float *)&dword_140404A6C[309078302] - 256.0;
      v128 = (float)n * 4.0;
      sub_14007D520((unsigned int *)&v127, v20, v22);
      v127 = *(float *)&dword_140404A6C[309078300];
      v129 = *(float *)&dword_140404A6C[309078302] + 256.0;
      sub_14007D520((unsigned int *)&v127, v24, v25);
    }
    for ( ii = v7 - 64; ii < v7 + 64; ++ii )
    {
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279320;
      if ( (ii & 3) == 0 )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279340;
      if ( (ii & 7) == 0 )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
      if ( !(_BYTE)ii )
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796A0;
      v127 = *(float *)&dword_140404A6C[309078300];
      v128 = *(float *)&dword_140404A6C[309078301] - 256.0;
      v129 = (float)ii * 4.0;
      sub_14007D520((unsigned int *)&v127, v20, v22);
      v127 = *(float *)&dword_140404A6C[309078300];
      v128 = *(float *)&dword_140404A6C[309078301] + 256.0;
      sub_14007D520((unsigned int *)&v127, v27, v28);
    }
  }
  sub_14006E0D0(v21, v20, v22);
  if ( dword_140404A6C[309078286] )
    goto LABEL_81;
  v127 = (float)(int)dword_140404A6C[309078306] * 4.0;
  v128 = (float)(int)dword_140404A6C[309078307] * 4.0;
  v129 = (float)(int)dword_140404A6C[309078308] * 4.0;
  sub_14008D560((__int64)&v127, v47, v49, 1.0, 0x3F800000u);
  v51 = 0;
  v52 = 22LL * (int)dword_140404A6C[309078328];
  v53 = 0;
  v54 = dword_140404A6C[v52 + 225368670] - dword_140404A6C[v52 + 225368674];
  v55 = dword_140404A6C[v52 + 225368669] - dword_140404A6C[v52 + 225368672];
  if ( dword_140404A6C[309078329] == 1 )
    v51 = (unsigned int)(v54 - 1);
  if ( dword_140404A6C[309078329] == 2 )
  {
    v51 = v55 - 1;
    v53 = v54 - 1;
  }
  else if ( dword_140404A6C[309078329] == 3 )
  {
    v51 = 0;
    v53 = v55 - 1;
  }
  else if ( (int)dword_140404A6C[309078329] <= 0 )
  {
    goto LABEL_68;
  }
  v50 = dword_140404A6C[309078329];
  do
  {
    v56 = v55;
    v55 = v54;
    v54 = v56;
    --v50;
  }
  while ( v50 );
LABEL_68:
  v57 = dword_140404A6C[309078307] - dword_140404A6C[v52 + 225368673];
  v127 = (float)(dword_140404A6C[309078306] - (unsigned int)v51) * 4.0;
  v128 = (float)v57 * 4.0;
  v129 = (float)(int)(dword_140404A6C[309078308] - v53) * 4.0;
  sub_14008D280((__int64)&v127, v54, v50, v51, 0x3F800000u, 0x3F800000u, 0);
  if ( !dword_140404A6C[309078286] )
  {
    v59 = 0;
    if ( (int)dword_140404A6C[225171849] > 0 )
    {
      v60 = &dword_140404A6C[225171872];
      while ( 1 )
      {
        v61 = (float)(int)*(v60 - 4);
        v127 = (float)(int)*(v60 - 5) * 4.0;
        v62 = (float)(int)*(v60 - 3);
        v128 = v61 * 4.0;
        v129 = v62 * 4.0;
        sub_14008D280((__int64)&v127, v47, v49, v58, 0x3F800000u, 0, 0x3F800000u);
        v64 = *v60;
        v65 = *(v60 - 2);
        v66 = *(v60 - 1);
        v67 = v64 - 1;
        if ( v65 == 2 )
          break;
        v68 = v67;
        if ( v65 != 1 )
          v68 = 0;
        if ( v65 == 3 )
        {
          v68 = 0;
          v67 = v66 - 1;
LABEL_78:
          v63 = *(v60 - 2);
          do
          {
            v69 = v66;
            v66 = v64;
            v64 = v69;
            --v63;
          }
          while ( v63 );
          goto LABEL_80;
        }
        v67 = 0;
        if ( v65 > 0 )
          goto LABEL_78;
LABEL_80:
        v70 = (float)(int)(*(v60 - 5) - v68);
        v71 = *(v60 - 3) - v67;
        v128 = (float)(int)*(v60 - 4) * 4.0;
        v127 = v70 * 4.0;
        v129 = (float)v71 * 4.0;
        sub_14008D280((__int64)&v127, v64, v63, v68, 0x3F800000u, 0x3F800000u, 0x3F800000u);
        ++v59;
        v60 += 24;
        if ( v59 >= (int)dword_140404A6C[225171849] )
          goto LABEL_81;
      }
      v68 = v66 - 1;
      goto LABEL_78;
    }
    goto LABEL_120;
  }
LABEL_81:
  if ( dword_140404A6C[309078286] == 1 )
  {
    v72 = dword_140404A6C[309078317];
    v47 = dword_140404A6C[309078320];
    if ( (int)dword_140404A6C[309078317] > (int)dword_140404A6C[309078320] )
      goto LABEL_120;
    v48 = dword_140404A6C[309078321];
    v73 = dword_140404A6C[309078319];
    do
    {
      v74 = dword_140404A6C[309078318];
      if ( (int)dword_140404A6C[309078318] <= (int)v48 )
      {
        do
        {
          v75 = dword_140404A6C[309078316];
          if ( (int)dword_140404A6C[309078316] <= v73 )
          {
            v128 = (float)((float)v72 * 4.0) - 0.125;
            v129 = (float)((float)v74 * 4.0) - 0.125;
            do
            {
              v127 = (float)((float)v75 * 4.0) - 0.125;
              sub_14008D560((__int64)&v127, v47, v49, 1.0, 0x3F800000u);
              v73 = dword_140404A6C[309078319];
              ++v75;
            }
            while ( v75 <= (int)dword_140404A6C[309078319] );
            v48 = dword_140404A6C[309078321];
          }
          ++v74;
        }
        while ( v74 <= (int)v48 );
        v47 = dword_140404A6C[309078320];
      }
      ++v72;
    }
    while ( v72 <= (int)v47 );
  }
  if ( dword_140404A6C[309078286] == 3 )
  {
    v127 = (float)((float)(int)dword_140404A6C[309078306] * 4.0) - 0.125;
    v128 = (float)((float)(int)dword_140404A6C[309078307] * 4.0) - 0.125;
    v129 = (float)((float)(int)dword_140404A6C[309078308] * 4.0) - 0.125;
    sub_14008D560((__int64)&v127, v47, v49, 1.0, 0x3F800000u);
    v76 = 0;
    if ( (int)dword_140404A6C[486132853] > 0 )
    {
      v77 = &dword_140404A6C[486132856];
      do
      {
        v126[8] = 1065353216;
        ((void (*)(unsigned,float,float,float,float))unk_140404468)(2,0x1.8000000000000p+0f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.0000000000000p+0f);
        sub_140125670(&dword_140404A6C[4 * v76 + 486132854], 0.5, 2);
        *(_QWORD *)&v78 = v77[1];
        v146 = 1.0;
        v144 = xmmword_140278D30;
        v145 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v144, (float *)&v144 + 3, v78);
        v79 = *((float *)v77 - 1) - *((float *)&v145 + 3);
        v127 = *((float *)v77 - 2) - *((float *)&v145 + 2);
        v80 = *(float *)v77;
        v128 = v79;
        v129 = v80 - v146;
        sub_140125670((unsigned int *)&v127, 0.5, 2);
        ++v76;
        v77 += 4;
      }
      while ( v76 < (int)dword_140404A6C[486132853] );
    }
  }
  if ( dword_140404A6C[309078286] == 2 )
  {
    v81 = 0;
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796D0;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    if ( (int)dword_140404A6C[193074052] > 0 )
    {
      v82 = &dword_140404A6C[193074056];
      do
      {
        if ( v81 == dword_140404A6C[309078332] )
          v83 = xmmword_140279700;
        else
          v83 = xmmword_1402796D0;
        v84 = (int)*(v82 - 2);
        *(_OWORD *)&dword_140404A6C[456807033] = v83;
        v85 = dword_140404A6C[3 * v84 + 193070982];
        v86 = dword_140404A6C[3 * v84 + 193070980];
        v87 = 3LL * (int)*(v82 - 3);
        v88 = dword_140404A6C[3 * *(v82 - 3) + 193070982];
        v89 = dword_140404A6C[3 * *(v82 - 3) + 193070980];
        v90 = (float)(v88 - v85);
        v91 = (float)(v86 - v89);
        v92 = fsqrt((float)(v91 * v91) + (float)(v90 * v90));
        if ( v92 == 0.0 )
        {
          v135 = 0.0;
          v94 = 0.0;
          v93 = 0.0;
        }
        else
        {
          v93 = (float)(1.0 / v92) * v91;
          v94 = (float)(1.0 / v92) * v90;
          v135 = v94;
        }
        v95 = (float)(int)dword_140404A6C[v87 + 193070981];
        v136 = (float)v86 * 4.0;
        *(float *)v143 = v136;
        v96 = (float)v89 * 4.0;
        *(float *)&v97 = (float)(v95 * 4.0) + 0.25;
        v98 = (float)v88 * 4.0;
        v137 = (float)((float)(int)dword_140404A6C[3 * v84 + 193070981] * 4.0) + 0.25;
        *(float *)&v143[1] = v137;
        v134 = v93;
        *(float *)v142 = v96;
        v141 = v97;
        v138 = (float)(int)v85 * 4.0;
        *(float *)&v143[2] = v138;
        v142[1] = v97;
        *(float *)&v142[2] = v98;
        sub_14007D520(v142, v87, v85);
        sub_14007D520(v143, v99, v100);
        v101 = v94 + v94;
        v128 = *(float *)&v97;
        v132 = v137;
        v102 = v93 + v93;
        v103 = 0;
        v104 = v96 - (float)(v94 + v94);
        v105 = v138 - (float)(v93 + v93);
        v106 = v98 - (float)(v93 + v93);
        v139 = v136 - (float)(v94 + v94);
        v127 = v104;
        v131 = v139;
        v140 = v105;
        v129 = v106;
        v133 = v105;
        if ( (int)*v82 > 0 )
        {
          v107 = v136 - (float)(v94 + v94);
          v130 = v93;
          v108 = v93 * 4.0;
          v109 = v94 * 4.0;
          v110 = v105;
          do
          {
            sub_14007D520((unsigned int *)&v127, v47, v49);
            sub_14007D520((unsigned int *)&v131, v111, v112);
            v104 = v104 - v109;
            ++v103;
            v106 = v106 - v108;
            v107 = v107 - v109;
            v110 = v110 - v108;
            v127 = v104;
            v129 = v106;
            v131 = v107;
            v133 = v110;
          }
          while ( v103 < (int)*v82 );
          v93 = v134;
          v94 = v135;
        }
        v113 = v96 + v101;
        v114 = v101 + v136;
        v115 = v98 + v102;
        v128 = *(float *)&v141;
        v116 = v102 + v138;
        v117 = 0;
        v127 = v113;
        v131 = v114;
        v129 = v115;
        v133 = v116;
        v132 = v137;
        if ( (int)v82[1] > 0 )
        {
          v118 = v94 * 4.0;
          v119 = v93 * 4.0;
          do
          {
            sub_14007D520((unsigned int *)&v127, v47, v49);
            sub_14007D520((unsigned int *)&v131, v120, v121);
            v113 = v113 + v118;
            ++v117;
            v115 = v115 + v119;
            v114 = v114 + v118;
            v116 = v116 + v119;
            v127 = v113;
            v129 = v115;
            v131 = v114;
            v133 = v116;
          }
          while ( v117 < (int)v82[1] );
        }
        ++v81;
        v82 += 13;
      }
      while ( v81 < (int)dword_140404A6C[193074052] );
    }
    sub_14006E0D0(v48, v47, v49);
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279550;
    v127 = (float)(int)dword_140404A6C[309078306] * 4.0;
    v128 = (float)(int)dword_140404A6C[309078307] * 4.0;
    v129 = (float)(int)dword_140404A6C[309078308] * 4.0;
    sub_140125670((unsigned int *)&v127, 1.0, 2);
    if ( (int)dword_140404A6C[193070979] > 0 )
    {
      v122 = (int *)&dword_140404A6C[193070981];
      do
      {
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279690;
        if ( v0 == dword_140404A6C[309078330] )
        {
          dword_140404A6C[456807033] = 1065353216;
          dword_140404A6C[456807034] = 1065353216;
          dword_140404A6C[456807035] = 1065353216;
        }
        if ( v0 == dword_140404A6C[309078331] )
        {
          dword_140404A6C[456807033] = 1065353216;
          dword_140404A6C[456807034] = 1061158912;
          dword_140404A6C[456807035] = 1061158912;
        }
        v123 = (float)*v122;
        v127 = (float)*(v122 - 1) * 4.0;
        v124 = (float)v122[1];
        v128 = v123 * 4.0;
        v129 = v124 * 4.0;
        sub_140125670((unsigned int *)&v127, 1.0, 2);
        ++v0;
        v122 += 3;
      }
      while ( v0 < (int)dword_140404A6C[193070979] );
    }
  }
LABEL_120:
  LOBYTE(v48) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v48);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14008DEAD: conditional instruction was optimized away because ebx.4==2
// 14008D996: variable 'v9' is possibly undefined
// 14008D996: variable 'v10' is possibly undefined
// 14008D9DD: variable 'v11' is possibly undefined
// 14008D9DD: variable 'v12' is possibly undefined
// 14008DA24: variable 'v13' is possibly undefined
// 14008DA24: variable 'v14' is possibly undefined
// 14008DA6B: variable 'v15' is possibly undefined
// 14008DA6B: variable 'v16' is possibly undefined
// 14008DA70: variable 'v18' is possibly undefined
// 14008DA70: variable 'v17' is possibly undefined
// 14008DA70: variable 'v19' is possibly undefined
// 14008DB2C: variable 'v20' is possibly undefined
// 14008DB2C: variable 'v22' is possibly undefined
// 14008DB56: variable 'v24' is possibly undefined
// 14008DB56: variable 'v25' is possibly undefined
// 14008DC26: variable 'v27' is possibly undefined
// 14008DC26: variable 'v28' is possibly undefined
// 14008DCA5: variable 'v29' is possibly undefined
// 14008DCA5: variable 'v30' is possibly undefined
// 14008DD3C: variable 'v31' is possibly undefined
// 14008DD3C: variable 'v32' is possibly undefined
// 14008DD66: variable 'v34' is possibly undefined
// 14008DD66: variable 'v35' is possibly undefined
// 14008DDD7: variable 'v36' is possibly undefined
// 14008DDD7: variable 'v37' is possibly undefined
// 14008DE96: variable 'v39' is possibly undefined
// 14008DE96: variable 'v40' is possibly undefined
// 14008DF67: variable 'v42' is possibly undefined
// 14008DF67: variable 'v43' is possibly undefined
// 14008E036: variable 'v45' is possibly undefined
// 14008E036: variable 'v46' is possibly undefined
// 14008E045: variable 'v21' is possibly undefined
// 14008E0C1: variable 'v47' is possibly undefined
// 14008E0C1: variable 'v49' is possibly undefined
// 14008E1CE: variable 'v50' is possibly undefined
// 14008E257: variable 'v58' is possibly undefined
// 14008E325: variable 'v63' is possibly undefined
// 14008E744: variable 'v99' is possibly undefined
// 14008E744: variable 'v100' is possibly undefined
// 14008E7F3: variable 'v111' is possibly undefined
// 14008E7F3: variable 'v112' is possibly undefined
// 14008E8BF: variable 'v120' is possibly undefined
// 14008E8BF: variable 'v121' is possibly undefined
// 14008E935: variable 'v48' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279320: using guessed type __int128 xmmword_140279320;
// 140279340: using guessed type __int128 xmmword_140279340;
// 140279420: using guessed type __int128 xmmword_140279420;
// 140279430: using guessed type __int128 xmmword_140279430;
// 140279550: using guessed type __int128 xmmword_140279550;
// 140279690: using guessed type __int128 xmmword_140279690;
// 1402796A0: using guessed type __int128 xmmword_1402796A0;
// 1402796D0: using guessed type __int128 xmmword_1402796D0;
// 140279700: using guessed type __int128 xmmword_140279700;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404468: using guessed type double (__fastcall *unk_140404468)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 189F0EEDC: using guessed type unsigned int;
// 189F0EEE0: using guessed type unsigned int;
// 189F0EEE4: using guessed type unsigned int;
// 189F0EF1C: using guessed type unsigned int;
// 189F0EF20: using guessed type unsigned int;
// 189F0EF24: using guessed type unsigned int;
// 189F0EF28: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;

//----- (000000014008EAD0) ----------------------------------------------------
__int64            sub_14008EAD0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 argp; // [rsp+30h] [rbp+8h] BYREF

  LOWORD(dword_140404A6C[289301091]) = dword_140404A6C[73991093];
  v1 = a1;
  dword_140404A6C[v1 + 289301078] = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[289301086]) = 2;
  dword_140404A6C[289301087] = 0;
  HIWORD(dword_140404A6C[289301086]) = htons_sr(LOWORD(dword_140404A6C[289301091]));
  dword_140404A6C[289301090] = 16;
  v2 = (int)dword_140404A6C[v1 + 289301078];
  LODWORD(argp) = 1;
  result = ioctlsocket_sr(v2, 2147772030LL, &argp);
  dword_140404A6C[v1 + 289301070] = 1;
  return result;
}

// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E45940: using guessed type unsigned int;
// 18539D3F8: using guessed type unsigned int;

//----- (000000014008EB80) ----------------------------------------------------
__int64            sub_14008EB80(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 argp; // [rsp+30h] [rbp+8h] BYREF

  LOWORD(dword_140404A6C[289301091]) = dword_140404A6C[73991093];
  v1 = a1;
  dword_140404A6C[v1 + 289301078] = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[289301086]) = 2;
  dword_140404A6C[289301087] = 0;
  HIWORD(dword_140404A6C[289301086]) = htons_sr(LOWORD(dword_140404A6C[289301091]));
  dword_140404A6C[289301090] = 16;
  result = bind_sr((int)dword_140404A6C[v1 + 289301078], &dword_140404A6C[289301086], 16);
  if ( !(_DWORD)result )
  {
    v3 = (int)dword_140404A6C[v1 + 289301078];
    LODWORD(argp) = 1;
    result = ioctlsocket_sr(v3, 2147772030LL, &argp);
    dword_140404A6C[v1 + 289301070] = 1;
  }
  return result;
}

// 140198FD1: using guessed type __int64 __fastcall bind(_QWORD, _QWORD, _QWORD);
// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E45940: using guessed type unsigned int;
// 18539D3F8: using guessed type unsigned int;

//----- (000000014008EC40) ----------------------------------------------------
float            sub_14008EC40(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v7; // xmm3_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // [rsp+30h] [rbp+8h]

  v7 = 1.0 - a2;
  if ( a1 == 1 )
    return (float)(v7 * a3) + (float)(a2 * a6);
  v9 = a2 * a6;
  v10 = v7 * a3;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a4 + a4) * v7) + v9) * a2) + (float)(v10 * v7);
  if ( a1 == 3 )
    return (float)((float)((float)((float)(v7 * v7) * (float)(a4 * 3.0))
                         + (float)((float)((float)((float)(a5 * 3.0) * v7) + v9) * a2))
                 * a2)
         + (float)((float)(v10 * v7) * v7);
  return v11;
}


//----- (000000014008ED50) ----------------------------------------------------
unsigned __int64            sub_14008ED50(int a1)
{
  __int64 v1; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned int *v4; // rdx

  v1 = 39LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 290382647], 6);
  sub_140115D90(&dword_140404A6C[v1 + 290382648], 28);
  result = dword_140404A6C[v1 + 290382647];
  if ( !(_DWORD)result )
  {
    sub_140115D90(&dword_140404A6C[v1 + 290382649], 12);
    sub_140115D90(&dword_140404A6C[v1 + 290382650], 6);
    sub_140115D90(&dword_140404A6C[v1 + 290382651], 7);
    result = dword_140404A6C[289301092];
    v3 = (int)dword_140404A6C[v1 + 290382651];
    if ( (int)dword_140404A6C[289301092] >= 0x10000 )
      return result;
    if ( (int)dword_140404A6C[289301093] > 0 )
    {
      LODWORD(result) = ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
    }
    v4 = &dword_140404A6C[290382652];
    goto LABEL_14;
  }
  if ( (_DWORD)result == 1 )
  {
    sub_140115D90(&dword_140404A6C[v1 + 290382649], 12);
    sub_140115D90(&dword_140404A6C[v1 + 290382650], 5);
    sub_140115D90(&dword_140404A6C[v1 + 290382651], 7);
    v3 = (int)dword_140404A6C[v1 + 290382651];
    result = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        LODWORD(result) = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      sub_1401FC920(
        (__m128i *)((char *)&dword_140404A6C[289301094] + (int)result),
        (     __m128i *)&dword_140404A6C[v1 + 290382652],
        v3);
      result = (unsigned int)(v3 + dword_140404A6C[289301092]);
      dword_140404A6C[289301092] = result;
      if ( (int)result < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          LODWORD(result) = result + 1;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = result;
        }
        v4 = &dword_140404A6C[290382668];
LABEL_14:
        result = (unsigned __int64)sub_1401FC920(
                                     (__m128i *)((char *)&dword_140404A6C[289301094] + (int)result),
                                     (     __m128i *)&v4[v1],
                                     v3);
        dword_140404A6C[289301092] += v3;
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (000000014008EF00) ----------------------------------------------------
__int64            sub_14008EF00(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  sub_140115AE0(&v7, 6);
  sub_140115AE0(&v8, 28);
  v2 = v7;
  result = v8;
  v4 = 39 * v1;
  if ( dword_140404A6C[39 * v1 + 290382645] && v8 <= dword_140404A6C[v4 + 290382648] )
  {
    LODWORD(v1) = 0x4000;
  }
  else
  {
    dword_140404A6C[v4 + 290382647] = v7;
    dword_140404A6C[v4 + 290382648] = result;
    *(_QWORD *)&dword_140404A6C[v4 + 290382645] = 1;
  }
  if ( !v2 )
  {
    v5 = 39LL * (int)v1;
    sub_140115AE0(&dword_140404A6C[v5 + 290382649], 12);
    sub_140115AE0(&dword_140404A6C[v5 + 290382650], 6);
    sub_140115AE0(&dword_140404A6C[v5 + 290382651], 7);
    result = sub_14007ADF0((__m128i *)&dword_140404A6C[v5 + 290382652], 1, dword_140404A6C[v5 + 290382651]);
  }
  if ( v2 == 1 )
  {
    v6 = 39LL * (int)v1;
    sub_140115AE0(&dword_140404A6C[v6 + 290382649], 12);
    sub_140115AE0(&dword_140404A6C[v6 + 290382650], 5);
    sub_140115AE0(&dword_140404A6C[v6 + 290382651], 7);
    sub_14007ADF0((__m128i *)&dword_140404A6C[v6 + 290382652], 1, dword_140404A6C[v6 + 290382651]);
    return sub_14007ADF0((__m128i *)&dword_140404A6C[v6 + 290382668], 1, dword_140404A6C[v6 + 290382651]);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008F050) ----------------------------------------------------
void sub_14008F050()
{
  unsigned int *v0; // rbx
       __m128i *v1; // r14
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi

  v0 = &dword_140404A6C[290382649];
  v1 = (     __m128i *)&dword_140404A6C[290382652];
  v2 = 0x4000;
  do
  {
    if ( *(v0 - 4) && !*(v0 - 3) )
    {
      v3 = *(v0 - 2);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v5 = v0[2];
          if ( v5 > 63 )
          {
            v5 = 63;
            v0[2] = 63;
          }
          v6 = (int)*v0;
          v7 = v5;
          v8 = (110 * v6 + (int)v0[1]) << 6;
          sub_1401FC920((__m128i *)((char *)&dword_140404A6C[278846114] + v8), v1, v5);
          *((_BYTE *)&dword_140404A6C[278846114] + v8 + v7) = 0;
          sub_1401FC920((__m128i *)((char *)&dword_140404A6C[278846626] + v8), v1 + 4, v7);
          dword_140404A6C[1760 * v6 + 278846101] = 0;
        }
      }
      else
      {
        v4 = 1760LL * (int)*v0;
        sub_1401FC920((__m128i *)((char *)&dword_140404A6C[v4 + 278846111] + (int)(v0[1] << 6)), v1, (int)v0[2]);
        HIBYTE(dword_140404A6C[v4 + 278846366]) = 0;
        dword_140404A6C[v4 + 278846101] = 0;
      }
      *(v0 - 3) = 1;
    }
    v1 = (     __m128i *)((char *)v1 + 156);
    v0 += 39;
    --v2;
  }
  while ( v2 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008F1B0) ----------------------------------------------------
void            sub_14008F1B0()
{
  signed int v0; // edi
  unsigned int v1; // esi
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // xmm2_4
  float v7; // eax
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r10
  __int64 v16; // rbx
  float *v17; // r9
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v21; // rbx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // edx
  int v35; // ecx
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // eax
  signed int v39; // r10d
  unsigned int *v40; // r9
  signed int v41; // r10d
  unsigned int *v42; // r9
  signed int v43; // r10d
  __int64 v44; // r8
  unsigned int *v45; // r9
  __int64 v46; // rcx
  unsigned int v47; // xmm1_4
  int v48; // edx
  unsigned int v49; // r9d
  __int64 v50; // r8
  bool v51; // zf
  int v52; // edx
  __int64 v53; // rcx
  unsigned int v54; // r8d
  __int64 v55; // rcx
  int v56; // edx
  __int64 v57; // r8
  int v58; // ecx
  int v59; // ecx
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  int v62; // ecx
  unsigned int v63; // ecx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  int v68; // ecx
  unsigned int v69; // eax
  __int64 v70; // r9
  int v71; // edx
  unsigned int v72; // eax
  unsigned int v73; // r9d
  unsigned int *v74; // rax
  int v75; // r11d
  __int64 v76; // r9
  int v77; // ecx
  int v78; // edx
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rbx
  int v82; // ecx
  unsigned int v83; // eax
  int v84; // ecx
  int v85; // eax
  char v86; // al
  __int64 v87; // rcx
  float *v88; // rbx
  char v89; // al
  __int64 v90; // rbx
  __int64 v91; // rax
  float v92; // xmm0_4
  unsigned int v93; // xmm1_4
  float v94; // xmm0_4
  float *v95; // rbx
  char v96; // al
  __int64 v97; // rbx
  char v98; // al
  __int64 v99; // rdx
  float v100; // xmm2_4
  unsigned int v101; // eax
  unsigned int v102; // xmm0_4
  unsigned int v103; // xmm1_4
  __int64 v104; // rcx
  float *v105; // rbx
  char v106; // al
  __int64 v107; // rbx
  char v108; // al
  __int64 v109; // rdx
  unsigned int v110; // xmm2_4
  unsigned int v111; // eax
  unsigned int v112; // xmm0_4
  unsigned int v113; // xmm1_4
  __int64 v114; // rcx
  __int64 v115; // rbx
  char v116; // al
  __int64 v117; // rdx
  float v118; // xmm2_4
  unsigned int v119; // eax
  unsigned int v120; // xmm0_4
  unsigned int v121; // xmm1_4
  __int64 v122; // rcx
  __int64 v123; // rbx
  int v124; // esi
  int v125; // r14d
  unsigned int v126; // r13d
  unsigned int v127; // r15d
  unsigned int v128; // r12d
  unsigned int v129; // esi
  unsigned int v130; // r14d
  int v131; // esi
  int v132; // r14d
  unsigned int v133; // eax
  unsigned int v134; // r13d
  unsigned int v135; // r8d
  int v136; // esi
  int v137; // r14d
  unsigned int v138; // eax
  signed int v139; // r12d
  unsigned int v140; // r15d
  unsigned int *v141; // rax
  unsigned int v142; // ebx
  unsigned __int8 v143; // al
  __int64 v144; // rcx
  __int64 v145; // r10
  __int64 v146; // r8
  signed int v147; // ecx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  int v152; // ecx
  char *v153; // rcx
  signed __int64 v154; // rdx
  char v155; // al
  __int64 v156; // rax
  float *v157; // [rsp+40h] [rbp-C8h]
  float v158; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v159; // [rsp+4Ch] [rbp-BCh]
  unsigned int v160; // [rsp+50h] [rbp-B8h]
  _OWORD v161[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v162; // [rsp+78h] [rbp-90h]
  unsigned int v163; // [rsp+168h] [rbp+60h]
  unsigned int v164; // [rsp+170h] [rbp+68h]

  v0 = dword_140404A6C[308307069];
  if ( dword_140404A6C[308307069] != dword_140404A6C[308307070] )
  {
    v1 = dword_140404A6C[283831474];
    v163 = dword_140404A6C[283831474];
    if ( dword_140404A6C[19065870] )
    {
      if ( (int)dword_140404A6C[283831474] < (int)dword_140404A6C[19065877] )
        v1 = dword_140404A6C[19065877];
      v163 = v1;
    }
    while ( 1 )
    {
      if ( dword_140404A6C[32 * (__int64)v0 + 297756285] == 20 )
      {
        v2 = 128;
        do
        {
          sub_1400A56B0(&v158, 0.06666667, 0.33333334);
          v3 = rand();
          v0 = dword_140404A6C[308307069];
          v4 = (int)dword_140404A6C[308307069];
          v5 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + ((__int64)(int)dword_140404A6C[308307069] << 7) + 1195238504;
          *(float *)&v6 = (float)((float)(v3 & 0x1F) * 0.00024414062) + 0.015625;
          if ( (int)dword_140404A6C[433435845] < 0x4000 )
          {
            v7 = *(float *)v5;
            v8 = LODWORD(v158);
            v9 = v159;
            v10 = 37LL * (int)dword_140404A6C[433435845]++;
            dword_140404A6C[v10 + 432826949] = 2;
            *(float *)&dword_140404A6C[v10 + 432826952] = v7;
            dword_140404A6C[v10 + 432826953] = *(_DWORD *)(v5 + 4);
            dword_140404A6C[v10 + 432826954] = *(_DWORD *)(v5 + 8);
            dword_140404A6C[v10 + 432826955] = v8;
            dword_140404A6C[v10 + 432826957] = v160;
            dword_140404A6C[v10 + 432826956] = v9;
            dword_140404A6C[v10 + 432826950] = 60;
            dword_140404A6C[v10 + 432826984] = v6;
            dword_140404A6C[v10 + 432826985] = v6;
            dword_140404A6C[v10 + 432826951] = 993158992;
            dword_140404A6C[v10 + 432826983] = 1064933786;
          }
          --v2;
        }
        while ( v2 );
        if ( v1 - dword_140404A6C[32 * v4 + 297756286] < 0x64 )
        {
          sub_14005ED40(dword_140404A6C[283786016], (float *)v5, 0, 1.0, 1.0);
          v0 = dword_140404A6C[308307069];
        }
      }
      v11 = (__int64)v0 << 7;
      if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v11) == 9
        && v1 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v11) < 0x64 )
      {
        sub_14005ED40(
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v11),
          (float *)((char *)&dword_140404A6C[297756287] + v11),
          0,
          *(float *)((char *)&dword_140404A6C[297756297] + v11),
          *(float *)((char *)&dword_140404A6C[297756298] + v11));
        v0 = dword_140404A6C[308307069];
      }
      v12 = (__int64)v0 << 7;
      if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v12) == 19
        && v1 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v12) < 0x64 )
      {
        v13 = *(int *)((char *)&dword_140404A6C[297756294] + v12);
        if ( dword_140404A6C[1760 * v13 + 278845893] )
        {
          v14 = sub_14005ED40(
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v12),
                  (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 7040 * v13 + 1119597020),
                  (__int64)&dword_140404A6C[1760 * v13 + 278845925],
                  *(float *)((char *)&dword_140404A6C[297756297] + v12),
                  *(float *)((char *)&dword_140404A6C[297756298] + v12));
          v0 = dword_140404A6C[308307069];
          dword_140404A6C[8 * v14 + 70423352] = v13;
        }
      }
      v15 = (__int64)v0 << 7;
      if ( !*(unsigned int *)((char *)&dword_140404A6C[297756285] + v15) )
      {
        v16 = *(int *)((char *)&dword_140404A6C[297756294] + v15);
        if ( !dword_140404A6C[456202453] )
          sub_14004E8A0(
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v15),
            (unsigned int *)((char *)&dword_140404A6C[297756287] + v15),
            (float *)((char *)&dword_140404A6C[297756290] + v15),
            0);
        sub_1400A56B0(&v158, 0.016666668, 0.0);
        v17 = (float *)&dword_140404A6C[1760 * v16 + 278845934];
        v18 = (float)((float)(v17[1] * 0.025) + *(float *)&v159)
            + (float)(*(float *)&dword_140404A6C[1760 * v16 + 278845938] * 0.025);
        v19 = *(float *)&dword_140404A6C[1760 * v16 + 278845939] * 0.025;
        v158 = (float)((float)((float)(*v17 * 0.025) + v158)
                     + (float)(*(float *)&dword_140404A6C[1760 * v16 + 278845937] * 0.025))
             + *(float *)&dword_140404A6C[1760 * v16 + 278845925];
        v20 = v17[2];
        *(float *)&v159 = v18 + *(float *)&dword_140404A6C[1760 * v16 + 278845926];
        *(float *)&v160 = (float)((float)((float)(v20 * 0.025) + *(float *)&v160) + v19)
                        + *(float *)&dword_140404A6C[1760 * v16 + 278845927];
        sub_14005F150(
          0,
          &dword_140404A6C[32 * (__int64)(int)dword_140404A6C[308307069] + 297756287],
          (unsigned int *)&v158,
          v17);
        v0 = dword_140404A6C[308307069];
        v21 = (__int64)(int)dword_140404A6C[308307069] << 7;
        if ( v1 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v21) < 0x64 )
        {
          if ( dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[297756294] + v21) + 278845898] - 1 > 0xA )
            v22 = dword_140404A6C[283785936];
          else
            v22 = dword_140404A6C[16
                                * dword_140404A6C[1760
                                                * dword_140404A6C[32 * (__int64)(int)dword_140404A6C[308307069]
                                                                + 297756294]
                                                + 278845898]
                                + 283786035
                                + rand() % 6];
          sub_14005ED40(v22, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v21 + 1195238504), 0, 1.0, 1.0);
          v0 = dword_140404A6C[308307069];
        }
        v15 = (__int64)v0 << 7;
        dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15) + 278845979] = 4;
      }
      if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v15) == 4 )
      {
        v23 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
        v24 = *(int *)((char *)&dword_140404A6C[297756293] + v15);
        switch ( v23 )
        {
          case 4:
            if ( !dword_140404A6C[456202453] )
              dword_140404A6C[5210 * v24 + 129717235 + 16 * (__int64)*(int *)((char *)&dword_140404A6C[297756295] + v15)] = 0;
            break;
          case 5:
            if ( !dword_140404A6C[456202453] )
              dword_140404A6C[5210 * v24 + 129717235 + 16 * (__int64)*(int *)((char *)&dword_140404A6C[297756295] + v15)] = 8;
            break;
          case 6:
            if ( !dword_140404A6C[456202453] )
              dword_140404A6C[5210 * v24 + 129719268 + *(int *)((char *)&dword_140404A6C[297756295] + v15)] = 0;
            break;
          case 0:
            if ( !dword_140404A6C[456202453] )
            {
              v25 = *(int *)((char *)&dword_140404A6C[297756295] + v15);
              if ( dword_140404A6C[24944 * dword_140404A6C[5210 * v24 + 129716710] + 346707717] )
                dword_140404A6C[5210 * v24 + 129719268 + v25] = 1;
              else
                dword_140404A6C[5210 * v24 + 129717235 + 16 * v25] = 0;
            }
            if ( dword_140404A6C[5210 * v24 + 129716710] != 13 )
            {
              sub_140067970(
                v24,
                *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15),
                (float *)((char *)&dword_140404A6C[297756287] + v15),
                (float *)((char *)&dword_140404A6C[297756290] + v15));
              v26 = rand();
              v0 = dword_140404A6C[308307069];
              v27 = (__int64)(int)dword_140404A6C[308307069] << 7;
              if ( v1 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v27) < 0x64 )
              {
                sub_14005ED40(
                  dword_140404A6C[283785979],
                  (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v27 + 1195238504),
                  0,
                  1.0,
                  (float)((float)v26 * 0.001953125) + 0.75);
                v0 = dword_140404A6C[308307069];
              }
            }
            break;
        }
        v15 = (__int64)v0 << 7;
        v28 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
        if ( v28 == 1 )
        {
          if ( !dword_140404A6C[456202453] )
          {
            v29 = 172LL * *(int *)((char *)&dword_140404A6C[297756295] + v15) + 20840 * v24;
            *(unsigned int *)((char *)&dword_140404A6C[129720377] + v29) |= 1u;
            *(float *)((char *)&dword_140404A6C[129720387] + v29) = *(float *)((char *)&dword_140404A6C[129720387] + v29)
                                                                  * 0.75;
          }
        }
        else if ( v28 == 2 )
        {
          if ( !dword_140404A6C[456202453] )
            dword_140404A6C[5210 * v24 + 129716712] = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15);
        }
        else if ( v28 == 3 && !dword_140404A6C[456202453] )
        {
          v30 = (int)dword_140404A6C[5210 * v24 + 129720183];
          if ( (_DWORD)v30 != -1 )
            dword_140404A6C[383 * v30 + 132400639] = -1;
          dword_140404A6C[5210 * v24 + 129716709] = 0;
        }
      }
      v31 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v15);
      if ( v31 == 21 )
      {
        v32 = *(int *)((char *)&dword_140404A6C[297756293] + v15);
        if ( (unsigned int)v32 <= 0xFF && (_DWORD)v32 == dword_140404A6C[284024501] )
        {
          v33 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
          if ( v33 )
          {
            if ( v33 == 1 )
            {
              v47 = *(unsigned int *)((char *)&dword_140404A6C[297756288] + v15);
              dword_140404A6C[284022465] = *(unsigned int *)((char *)&dword_140404A6C[297756287] + v15);
              dword_140404A6C[284022467] = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v15);
              dword_140404A6C[284022466] = v47;
            }
            else if ( v33 == 2 )
            {
              v48 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v15);
              v49 = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15) & 7;
              v50 = 9LL * v49;
              dword_140404A6C[v50 + 284022318] = (unsigned __int8)v48;
              v51 = dword_140404A6C[456202453] == 0;
              dword_140404A6C[v50 + 284022320] = (unsigned __int8)(v48 >> 20);
              dword_140404A6C[v50 + 284022319] = (unsigned __int8)(v48 >> 10);
              if ( v51 && (int)dword_140404A6C[284022317] < (int)(v49 + 1) )
                dword_140404A6C[284022317] = v49 + 1;
              goto LABEL_140;
            }
          }
          else
          {
            v34 = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15);
            dword_140404A6C[3597 * v32 + 71856286] = v34;
            if ( v34 == 2 )
            {
              v35 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v15);
              dword_140404A6C[284022462] = (unsigned __int8)v35;
              dword_140404A6C[284022463] = (unsigned __int8)(v35 >> 10);
            }
          }
        }
      }
      if ( !dword_140404A6C[456202453] )
      {
        switch ( v31 )
        {
          case 3:
            v36 = *(int *)((char *)&dword_140404A6C[297756294] + v15);
            v37 = 5210LL * *(int *)((char *)&dword_140404A6C[297756293] + v15);
            v38 = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15);
            v39 = 0;
            dword_140404A6C[v37 + 129716709] = 1;
            dword_140404A6C[v37 + 129716712] = 100;
            dword_140404A6C[v37 + 129716710] = v36;
            dword_140404A6C[v37 + 129716715] = v38;
            if ( (int)dword_140404A6C[24944 * v36 + 346709019] > 0 )
            {
              v40 = &dword_140404A6C[v37 + 129717235];
              do
              {
                *v40 = 100;
                v40 += 16;
                v36 = (int)dword_140404A6C[v37 + 129716710];
                ++v39;
              }
              while ( v39 < (int)dword_140404A6C[24944 * v36 + 346709019] );
            }
            v41 = 0;
            if ( (int)dword_140404A6C[45072 * (int)v36 + 335200382] > 0 )
            {
              v42 = &dword_140404A6C[v37 + 129719268];
              do
              {
                *v42++ = 0;
                v36 = (int)dword_140404A6C[v37 + 129716710];
                ++v41;
              }
              while ( v41 < (int)dword_140404A6C[45072 * v36 + 335200382] );
            }
            v43 = 0;
            if ( (int)dword_140404A6C[24944 * (int)v36 + 346731811] > 0 )
            {
              v44 = 0;
              v45 = &dword_140404A6C[v37 + 129720387];
              do
              {
                v45 += 43;
                ++v43;
                *(v45 - 53) = dword_140404A6C[24944 * (int)dword_140404A6C[v37 + 129716710] + 346731828 + v44];
                v46 = v44 * 4 + 99776LL * (int)dword_140404A6C[v37 + 129716710];
                v44 += 20;
                *(v45 - 43) = *(unsigned int *)((char *)&dword_140404A6C[346731818] + v46);
              }
              while ( v43 < (int)dword_140404A6C[24944 * dword_140404A6C[v37 + 129716710] + 346731811] );
            }
            dword_140404A6C[v37 + 129721910] = -1;
            dword_140404A6C[v37 + 129721914] = -1;
            goto LABEL_140;
          case 5:
            v52 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v15);
            v53 = 1760LL * (v52 & 0x3FF);
            v54 = dword_140404A6C[v53 + 278845893];
            dword_140404A6C[v53 + 278845893] = (v52 >> 10) & 1;
            if ( ((v52 >> 10) & 1) != 0 && !v54 )
            {
              *(_QWORD *)&dword_140404A6C[v53 + 278845916] = 0;
              dword_140404A6C[v53 + 278845918] = 0;
              *(_QWORD *)&dword_140404A6C[v53 + 278846103] = 0;
              dword_140404A6C[v53 + 278846105] = 0;
              *(_QWORD *)&dword_140404A6C[v53 + 278846108] = 0;
              dword_140404A6C[v53 + 278846110] = 0;
            }
            dword_140404A6C[v53 + 278845902] = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
            dword_140404A6C[v53 + 278845903] = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15);
            dword_140404A6C[v53 + 278845904] = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v15);
            dword_140404A6C[v53 + 278845898] = (v52 >> 11) & 0x3F;
            goto LABEL_140;
          case 6:
            v55 = 1760LL * (*(unsigned int *)((char *)&dword_140404A6C[297756293] + v15) & 0x3FF);
            dword_140404A6C[v55 + 278846052] = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
            dword_140404A6C[v55 + 278845983] = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15);
            dword_140404A6C[v55 + 278846051] = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v15);
            goto LABEL_140;
          case 7:
            v56 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v15);
            v57 = 3597LL * (unsigned __int8)v56;
            v58 = (v56 >> 9) & 1;
            dword_140404A6C[v57 + 71856253] = v58;
            if ( v58 )
            {
              v59 = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15);
              v60 = *(_OWORD *)((char *)&dword_140404A6C[297756301] + v15);
              v61 = *(_OWORD *)((char *)&dword_140404A6C[297756305] + v15);
              dword_140404A6C[v57 + 71859139] = (v56 >> 8) & 1;
              dword_140404A6C[v57 + 71856292] = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
              dword_140404A6C[v57 + 71856286] = (v56 >> 10) - 1;
              dword_140404A6C[v57 + 71859816] = v59 & 1;
              dword_140404A6C[v57 + 71859825] = (v59 >> 1) & 0xF;
              dword_140404A6C[v57 + 71859817] = (v59 >> 6) & 7;
              dword_140404A6C[v57 + 71859819] = (v59 >> 9) & 0xF;
              v62 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v15);
              dword_140404A6C[v57 + 71859820] = v62 & 7;
              dword_140404A6C[v57 + 71859818] = (v62 >> 3) & 0xF;
              dword_140404A6C[v57 + 71859821] = (v62 >> 7) & 0x1F;
              dword_140404A6C[v57 + 71859822] = (v62 >> 12) & 0xF;
              dword_140404A6C[v57 + 71859823] = (v62 >> 16) & 0xF;
              dword_140404A6C[v57 + 71859826] = (v62 >> 20) & 0xF;
              dword_140404A6C[v57 + 71859768] = 1027604480;
              dword_140404A6C[v57 + 71859769] = 1027604480;
              dword_140404A6C[v57 + 71859770] = -1105618534;
              dword_140404A6C[v57 + 71859774] = -1119879168;
              dword_140404A6C[v57 + 71859775] = 1027604480;
              dword_140404A6C[v57 + 71859776] = -1105618534;
              dword_140404A6C[v57 + 71859771] = 1065353216;
              dword_140404A6C[v57 + 71859772] = 1065353216;
              dword_140404A6C[v57 + 71859773] = 1065353216;
              dword_140404A6C[v57 + 71859777] = 1065353216;
              dword_140404A6C[v57 + 71859778] = 1065353216;
              dword_140404A6C[v57 + 71859779] = 1065353216;
              *(_OWORD *)&dword_140404A6C[v57 + 71856254] = v60;
              *(_OWORD *)&dword_140404A6C[v57 + 71856258] = v61;
              HIBYTE(dword_140404A6C[v57 + 71856261]) = 0;
            }
            goto LABEL_140;
          case 17:
            v63 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
            v64 = *(int *)((char *)&dword_140404A6C[297756293] + v15);
            v65 = *(int *)((char *)&dword_140404A6C[297756295] + v15);
            v66 = 7166 * v64;
            dword_140404A6C[7166 * v64 + 280651303] = v63;
            if ( v63 )
            {
              dword_140404A6C[v66 + 280651305] = v65;
              if ( (_DWORD)v65 != -1 )
              {
                dword_140404A6C[3597 * v65 + 71856292] = v64;
                dword_140404A6C[v66 + 280658247] = dword_140404A6C[3597 * v65 + 71859768];
                dword_140404A6C[v66 + 280658248] = dword_140404A6C[3597 * v65 + 71859769];
                dword_140404A6C[v66 + 280658249] = dword_140404A6C[3597 * v65 + 71859770];
                dword_140404A6C[v66 + 280658250] = dword_140404A6C[3597 * v65 + 71859771];
                dword_140404A6C[v66 + 280658251] = dword_140404A6C[3597 * v65 + 71859772];
                dword_140404A6C[v66 + 280658252] = dword_140404A6C[3597 * v65 + 71859773];
                dword_140404A6C[v66 + 280658253] = dword_140404A6C[3597 * v65 + 71859774];
                dword_140404A6C[v66 + 280658254] = dword_140404A6C[3597 * v65 + 71859775];
                dword_140404A6C[v66 + 280658255] = dword_140404A6C[3597 * v65 + 71859776];
                dword_140404A6C[v66 + 280658256] = dword_140404A6C[3597 * v65 + 71859777];
                dword_140404A6C[v66 + 280658257] = dword_140404A6C[3597 * v65 + 71859778];
                dword_140404A6C[v66 + 280658258] = dword_140404A6C[3597 * v65 + 71859779];
              }
            }
            else if ( (_DWORD)v65 != -1 )
            {
              dword_140404A6C[3597 * v65 + 71856292] = -1;
            }
            goto LABEL_140;
          case 8:
            v67 = *(int *)((char *)&dword_140404A6C[297756293] + v15);
            v68 = 0;
            v69 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
            v70 = 3597 * v67;
            dword_140404A6C[v67 + 284023074] = 0;
            v71 = dword_140404A6C[284023330];
            dword_140404A6C[v70 + 71856272] = v69;
            dword_140404A6C[v70 + 71856288] = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15);
            v72 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v15);
            dword_140404A6C[v70 + 71856265] = v72;
            if ( v71 > 0 )
            {
              v73 = v72;
              v74 = &dword_140404A6C[284023331];
              do
              {
                if ( v73 == *v74 )
                {
                  dword_140404A6C[v67 + 284023074] = 1;
                  v71 = dword_140404A6C[284023330];
                }
                ++v68;
                ++v74;
              }
              while ( v68 < v71 );
            }
            goto LABEL_140;
          case 12:
            v75 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v15);
            v76 = 23492LL * ((v75 >> 4) & 0xF) + 1116LL * ((v75 >> 1) & 7);
            *(unsigned int *)((char *)&dword_140404A6C[283831588] + v76) = v75 & 1;
            if ( (v75 & 1) != 0 )
            {
              v77 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
              v78 = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v15);
              *(unsigned int *)((char *)&dword_140404A6C[283831591] + v76) = (v75 >> 8) & 0xF;
              *(unsigned int *)((char *)&dword_140404A6C[283831603] + v76) = BYTE2(v75);
              *(unsigned int *)((char *)&dword_140404A6C[283831595] + v76) = v77 & 0xF;
              *(unsigned int *)((char *)&dword_140404A6C[283831596] + v76) = (v77 >> 4) & 0xF;
              *(unsigned int *)((char *)&dword_140404A6C[283831604] + v76) = v77 >> 8;
              *(unsigned int *)((char *)&dword_140404A6C[283831606] + v76) = HIWORD(v78) - 1;
              *(unsigned int *)((char *)&dword_140404A6C[283831607] + v76) = *(unsigned int *)((char *)&dword_140404A6C[297756296]
                                                                                             + v15);
              *(unsigned int *)((char *)&dword_140404A6C[283831605] + v76) = 60 * (unsigned __int16)v78;
            }
            goto LABEL_140;
          case 22:
            v79 = 5873LL * (*(unsigned int *)((char *)&dword_140404A6C[297756293] + v15) & 0xF);
            v80 = 279LL * ((*(int *)((char *)&dword_140404A6C[297756293] + v15) >> 8) & 0xF);
            dword_140404A6C[v80 + 283831588 + v79] = 1;
            v81 = v79 * 4 + v80 * 4 + (int)(*(unsigned int *)((char *)&dword_140404A6C[297756294] + v15) << 6);
            sub_1401FC920(
              (__m128i *)((char *)&dword_140404A6C[283831611] + v81),
              (     __m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v15 + 1195238560),
              *(int *)((char *)&dword_140404A6C[297756295] + v15));
            *((_BYTE *)&dword_140404A6C[283831627] + v81) = 0;
            goto LABEL_140;
          case 13:
            v82 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v15);
            v83 = (unsigned __int16)v82;
            dword_140404A6C[335047070] = v82 >> 16;
            v84 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
            dword_140404A6C[335047064] = v83;
            dword_140404A6C[335047076] = (unsigned __int16)v84;
            dword_140404A6C[335047088] = *(unsigned __int16 *)((char *)&dword_140404A6C[297756295] + v15);
            dword_140404A6C[335047082] = v84 >> 16;
            goto LABEL_140;
        }
      }
      if ( v31 == 1 )
      {
        v85 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15);
        if ( v85 )
        {
          switch ( v85 )
          {
            case 1:
              if ( v1 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v15) < 0x64 )
              {
                v95 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v15 + 1195238504);
                v96 = rand();
                sub_14005ED40(dword_140404A6C[(v96 & 1) + 283785967], v95, 0, 1.0, 1.0);
              }
              v97 = 16;
              do
              {
                sub_1400A56B0(&v158, 0.033333335, 0.0083333338);
                v98 = rand();
                v0 = dword_140404A6C[308307069];
                v99 = (__int64)(int)dword_140404A6C[308307069] << 7;
                v100 = (float)(v98 & 0x3F);
                if ( (int)dword_140404A6C[433435845] < 0x4000 )
                {
                  v101 = *(unsigned int *)((char *)&dword_140404A6C[297756287] + v99);
                  v102 = LODWORD(v158);
                  v103 = v159;
                  v104 = 37LL * (int)dword_140404A6C[433435845]++;
                  dword_140404A6C[v104 + 432826949] = 1;
                  dword_140404A6C[v104 + 432826952] = v101;
                  dword_140404A6C[v104 + 432826953] = *(unsigned int *)((char *)&dword_140404A6C[297756288] + v99);
                  dword_140404A6C[v104 + 432826954] = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v99);
                  dword_140404A6C[v104 + 432826955] = v102;
                  dword_140404A6C[v104 + 432826957] = v160;
                  dword_140404A6C[v104 + 432826956] = v103;
                  dword_140404A6C[v104 + 432826950] = 0xFFFF;
                  *(float *)&dword_140404A6C[v104 + 432826984] = (float)(v100 * 0.00024414062) + 0.015625;
                  *(float *)&dword_140404A6C[v104 + 432826985] = (float)(v100 * 0.00048828125) + 0.03125;
                  dword_140404A6C[v104 + 432826951] = 993158992;
                  dword_140404A6C[v104 + 432826983] = 1065311273;
                }
                --v97;
              }
              while ( v97 );
              break;
            case 2:
              if ( v1 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v15) < 0x64 )
              {
                v105 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v15 + 1195238504);
                v106 = rand();
                sub_14005ED40(dword_140404A6C[(v106 & 1) + 283785971], v105, 0, 1.0, 1.0);
              }
              v107 = 8;
              do
              {
                sub_1400A56B0(&v158, 0.033333335, 0.0083333338);
                v108 = rand();
                v0 = dword_140404A6C[308307069];
                v109 = (__int64)(int)dword_140404A6C[308307069] << 7;
                *(float *)&v110 = (float)((float)(v108 & 0x1F) * 0.00024414062) + 0.015625;
                if ( (int)dword_140404A6C[433435845] < 0x4000 )
                {
                  v111 = *(unsigned int *)((char *)&dword_140404A6C[297756287] + v109);
                  v112 = LODWORD(v158);
                  v113 = v159;
                  v114 = 37LL * (int)dword_140404A6C[433435845]++;
                  dword_140404A6C[v114 + 432826949] = 2;
                  dword_140404A6C[v114 + 432826952] = v111;
                  dword_140404A6C[v114 + 432826953] = *(unsigned int *)((char *)&dword_140404A6C[297756288] + v109);
                  dword_140404A6C[v114 + 432826954] = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v109);
                  dword_140404A6C[v114 + 432826955] = v112;
                  dword_140404A6C[v114 + 432826957] = v160;
                  dword_140404A6C[v114 + 432826956] = v113;
                  dword_140404A6C[v114 + 432826950] = 60;
                  dword_140404A6C[v114 + 432826984] = v110;
                  dword_140404A6C[v114 + 432826985] = v110;
                  dword_140404A6C[v114 + 432826951] = 993158992;
                  dword_140404A6C[v114 + 432826983] = 1064933786;
                }
                --v107;
              }
              while ( v107 );
              break;
            case 3:
              v115 = 4;
              do
              {
                sub_1400A56B0(&v158, 0.033333335, 0.0083333338);
                v116 = rand();
                v0 = dword_140404A6C[308307069];
                v117 = (__int64)(int)dword_140404A6C[308307069] << 7;
                v118 = (float)(v116 & 0x3F);
                if ( (int)dword_140404A6C[433435845] < 0x4000 )
                {
                  v119 = *(unsigned int *)((char *)&dword_140404A6C[297756287] + v117);
                  v120 = LODWORD(v158);
                  v121 = v159;
                  v122 = 37LL * (int)dword_140404A6C[433435845]++;
                  dword_140404A6C[v122 + 432826949] = 1;
                  dword_140404A6C[v122 + 432826952] = v119;
                  dword_140404A6C[v122 + 432826953] = *(unsigned int *)((char *)&dword_140404A6C[297756288] + v117);
                  dword_140404A6C[v122 + 432826954] = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v117);
                  dword_140404A6C[v122 + 432826955] = v120;
                  dword_140404A6C[v122 + 432826957] = v160;
                  dword_140404A6C[v122 + 432826956] = v121;
                  dword_140404A6C[v122 + 432826950] = 0xFFFF;
                  *(float *)&dword_140404A6C[v122 + 432826984] = (float)(v118 * 0.00024414062) + 0.015625;
                  *(float *)&dword_140404A6C[v122 + 432826985] = (float)(v118 * 0.00048828125) + 0.03125;
                  dword_140404A6C[v122 + 432826951] = 993158992;
                  dword_140404A6C[v122 + 432826983] = 1065311273;
                }
                --v115;
              }
              while ( v115 );
              break;
          }
        }
        else
        {
          v86 = rand();
          sub_14005EE40(
            0,
            &dword_140404A6C[32 * (__int64)v0 + 297756287],
            (float *)&dword_140404A6C[32 * (__int64)v0 + 297756290],
            (float)((float)(v86 & 0x1F) * 0.0009765625) + 0.03125);
          v87 = (__int64)(int)dword_140404A6C[308307069] << 7;
          if ( v1 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v87) < 0x64 )
          {
            v88 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v87 + 1195238504);
            v89 = rand();
            sub_14005ED40(dword_140404A6C[(v89 & 7) + 283785947], v88, 0, 1.0, 1.0);
          }
          v90 = 3;
          do
          {
            sub_1400A56B0(&v158, 0.050000001, 0.0);
            v91 = (__int64)(int)dword_140404A6C[308307069] << 7;
            v162 = 1065353216;
            v92 = *(float *)((char *)&dword_140404A6C[297756291] + v91) * 0.016666668;
            v158 = v158 + (float)(*(float *)((char *)&dword_140404A6C[297756290] + v91) * 0.016666668);
            *(float *)&v93 = *(float *)&v159 + v92;
            v94 = *(float *)((char *)&dword_140404A6C[297756292] + v91) * 0.016666668;
            v159 = v93;
            v161[0] = xmmword_140278D30;
            v161[1] = xmmword_140278D30;
            *(float *)&v160 = *(float *)&v160 + v94;
            sub_14005F150(1u, (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v91 + 1195238504), (unsigned int *)&v158, (float *)v161);
            --v90;
          }
          while ( v90 );
          v0 = dword_140404A6C[308307069];
        }
      }
LABEL_140:
      v123 = (__int64)v0 << 7;
      if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v123) == 15 )
      {
        v124 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v123);
        v125 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v123);
        v126 = *(unsigned int *)((char *)&dword_140404A6C[297756295] + v123);
        v127 = (unsigned __int16)v124;
        v128 = (unsigned __int16)v125;
        v129 = v124 >> 16;
        v130 = v125 >> 16;
        if ( !dword_140404A6C[456202453] )
        {
          if ( !*(unsigned int *)((char *)&dword_140404A6C[297756296] + v123) )
          {
            sub_140016C80(v127, v129, v128, v130, *(unsigned int *)((char *)&dword_140404A6C[297756295] + v123));
            v0 = dword_140404A6C[308307069];
          }
          v123 = (__int64)v0 << 7;
          if ( *(unsigned int *)((char *)&dword_140404A6C[297756296] + v123) == 1 )
            sub_140017110(v127, v129, v128, v130, v126);
        }
      }
      if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v123) == 16 )
      {
        v131 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v123);
        v132 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v123);
        v133 = (unsigned __int16)v132;
        v134 = (unsigned __int16)v131;
        v135 = (unsigned __int16)v132;
        v136 = v131 >> 16;
        v137 = v132 >> 16;
        v164 = v133;
        v138 = sub_140016450(v134, v136, v135, v137);
        v139 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v123);
        v140 = v138;
        if ( (v138 & 0xE0000000) == 0x80000000 )
        {
          if ( v139 == -1 )
          {
            v142 = v164;
          }
          else
          {
            v157 = (float *)((char *)&dword_140404A6C[297756290] + v123);
            v141 = (unsigned int *)((char *)&dword_140404A6C[297756287] + v123);
            v142 = v164;
            sub_1400689A0(v134, v136, v164, v137, v140, v139, v141, v157);
            v143 = rand();
            v0 = dword_140404A6C[308307069];
            v144 = (__int64)(int)dword_140404A6C[308307069] << 7;
            if ( v163 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v144) < 0x64 )
            {
              sub_14005ED40(
                dword_140404A6C[283785979],
                (float *)((char *)&dword_140404A6C[297756287] + v144),
                0,
                1.0,
                (float)((float)v143 * 0.001953125) + 0.75);
              v0 = dword_140404A6C[308307069];
            }
            v140 |= 0x10000 << v139;
            sub_140016AF0(v134, v136, v164, v137, v139);
          }
          if ( !dword_140404A6C[456202453] )
            sub_140016E30(v134, v136, v142, v137, v140);
        }
      }
      v145 = (__int64)v0 << 7;
      if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v145) == 18 && !dword_140404A6C[456202453] )
      {
        sub_140016F60(
          (unsigned __int16)*(unsigned int *)((char *)&dword_140404A6C[297756293] + v145),
          *(int *)((char *)&dword_140404A6C[297756293] + v145) >> 16,
          (unsigned __int16)*(unsigned int *)((char *)&dword_140404A6C[297756294] + v145),
          *(int *)((char *)&dword_140404A6C[297756294] + v145) >> 16,
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v145));
        v0 = dword_140404A6C[308307069];
      }
      v1 = v163;
      v146 = (__int64)v0 << 7;
      if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v146) != 2
        || v163 - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v146) >= 0x64
        && ((*(unsigned int *)((char *)&dword_140404A6C[297756294] + v146) - 3) & 0xFFFFFFFD) != 0 )
      {
        goto LABEL_176;
      }
      v147 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v146);
      if ( v147 >= 3 )
        goto LABEL_166;
      if ( v147
        || (v148 = *(int *)((char *)&dword_140404A6C[297756295] + v146), (_DWORD)v148 == -1)
        || !dword_140404A6C[v148 + 284023074] )
      {
        sub_1400588F0(
          v147,
          (char *)&dword_140404A6C[297756301] + v146,
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v146),
          *(unsigned int *)((char *)&dword_140404A6C[297756296] + v146));
        v0 = dword_140404A6C[308307069];
LABEL_166:
        v149 = (__int64)v0 << 7;
        if ( *(unsigned int *)((char *)&dword_140404A6C[297756294] + v149) == 3 )
        {
          sub_1400588F0(
            3u,
            (char *)&dword_140404A6C[297756301] + v149,
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v149),
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v149));
          v0 = dword_140404A6C[308307069];
        }
        v150 = (__int64)v0 << 7;
        if ( *(unsigned int *)((char *)&dword_140404A6C[297756294] + v150) == 4 )
        {
          sub_1400588F0(
            4u,
            (char *)&dword_140404A6C[297756301] + v150,
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v150),
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v150));
          v0 = dword_140404A6C[308307069];
        }
        v151 = (__int64)v0 << 7;
        v152 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v151);
        if ( v152 == 5 )
        {
          v153 = (char *)&dword_140404A6C[297756301] + v151;
          v154 = (char *)&dword_140404A6C[283831457] - ((char *)&dword_140404A6C[297756301] + v151);
          do
          {
            v155 = *v153;
            v153[v154] = *v153;
            ++v153;
          }
          while ( v155 );
          HIBYTE(dword_140404A6C[283831460]) = 0;
          dword_140404A6C[283785902] = 0;
        }
        else if ( v152 == 6 )
        {
          sub_1400588F0(
            6u,
            (char *)&dword_140404A6C[297756301] + v151,
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v151),
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v151));
          v0 = dword_140404A6C[308307069];
        }
      }
LABEL_176:
      v156 = (__int64)v0 << 7;
      if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v156) == 10 )
      {
        sub_140023A20(
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v156),
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v156));
        v0 = dword_140404A6C[308307069];
      }
      dword_140404A6C[308307069] = v0 + 1;
      HIWORD(dword_140404A6C[308307069]) = 0;
      v0 = dword_140404A6C[308307069];
      if ( dword_140404A6C[308307069] == dword_140404A6C[308307070] )
      {
        dword_140404A6C[284023073] = dword_140404A6C[308307069];
        return;
      }
    }
  }
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAC0: using guessed type unsigned int;
// 183E93524: using guessed type unsigned int;
// 183E935AC: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183F7A570: using guessed type unsigned int;
// 183F7A574: using guessed type unsigned int;
// 183F7A578: using guessed type unsigned int;
// 183F7AEF0: using guessed type unsigned int;
// 183F7B2F4: using guessed type unsigned int;
// 189C1DC60: using guessed type unsigned int;
// 19021F0CC: using guessed type unsigned int;
// 1A7971D80: using guessed type unsigned int;

//----- (0000000140090D00) ----------------------------------------------------
__int64            sub_140090D00(FILE *Stream, int a2)
{
  int v5; // ebx
  int v6; // esi
  unsigned int *v7; // rcx
  int v8; // eax
  unsigned int *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbp
  char *v12; // rcx
  char *v13; // rbx
  signed int v14; // ebx
  __int64 v15; // rsi
  unsigned int *v16; // rcx
  char *v17; // rcx
  signed int v18; // r15d
  int *v19; // rsi
  char *v20; // rcx
  int v21; // ebx
  __int64 v22; // rbp
  unsigned int *v23; // rcx
  int Buffer; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+70h] [rbp+18h]
  __int64 v26; // [rsp+78h] [rbp+20h]

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160802395], 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160802395]), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160802395] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 160802396];
      if ( a2 )
        sub_14020CE0C((__int64)v7, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[160802395] );
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[160803932], 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160803932]), 4, 1, (FILE *)(uintptr_t)(Stream));
  v8 = 0;
  v25 = 0;
  if ( (int)dword_140404A6C[160803932] > 0 )
  {
    v9 = &dword_140404A6C[160804449];
    do
    {
      v10 = v8;
      v11 = 26648LL * v8;
      v26 = v11;
      v12 = (char *)&dword_140404A6C[160803933] + v11;
      v13 = (char *)&dword_140404A6C[160292949] + v11;
      if ( a2 )
      {
        sub_14020CE0C((__int64)v12, 4, 3, (__int64)Stream);
        sub_14020CE0C((__int64)(v13 + 2043948), 4, 1, (__int64)Stream);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v12), 4, 3, (FILE *)(uintptr_t)(Stream));
        fread_sr((void *)(uintptr_t)(v13 + 2043948), 4, 1, (FILE *)(uintptr_t)(Stream));
      }
      v14 = 0;
      if ( (int)*(v9 - 513) > 0 )
      {
        v15 = 6662 * v10;
        do
        {
          v16 = &dword_140404A6C[v15 + 160803937 + v14];
          if ( a2 )
            sub_14020CE0C((__int64)v16, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v16), 4, 1, (FILE *)(uintptr_t)(Stream));
          ++v14;
        }
        while ( v14 < (int)*(v9 - 513) );
      }
      v17 = (char *)&dword_140404A6C[160804449] + v11;
      if ( a2 )
        sub_14020CE0C((__int64)v17, 4, 1, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v17), 4, 1, (FILE *)(uintptr_t)(Stream));
      v18 = 0;
      if ( (int)*v9 > 0 )
      {
        v19 = (int *)(v9 + 2);
        do
        {
          v20 = (char *)&dword_140404A6C[9 * v18 + 160804451] + v11;
          if ( a2 )
            sub_14020CE0C((__int64)v20, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v20), 4, 1, (FILE *)(uintptr_t)(Stream));
          v21 = 0;
          if ( *v19 > 0 )
          {
            v22 = 9LL * v18 + 6662LL * v25;
            do
            {
              v23 = &dword_140404A6C[v22 + 160804452 + v21];
              if ( a2 )
                sub_14020CE0C((__int64)v23, 4, 1, (__int64)Stream);
              else
                fread_sr((void *)(uintptr_t)(v23), 4, 1, (FILE *)(uintptr_t)(Stream));
              ++v21;
            }
            while ( v21 < *v19 );
            v11 = v26;
          }
          ++v18;
          v19 += 9;
        }
        while ( v18 < (int)*v9 );
      }
      v9 += 6662;
      v8 = ++v25;
    }
    while ( v25 < (int)dword_140404A6C[160803932] );
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140091020) ----------------------------------------------------
__int64            sub_140091020(__int64 a1, int a2)
{
  int v5; // ebx
  int v6; // esi
  unsigned int *v7; // rcx
  int v8; // r12d
  unsigned int *v9; // rbp
  unsigned int *v10; // rcx
  signed int v11; // ebx
  __int64 v12; // r15
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  int Buffer; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  unsigned __int64 v17; // [rsp+78h] [rbp+20h]

  Buffer = 2;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160507480], 4, 1, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160507481], 4, 1, a1);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer != 2 )
      return 0;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(a1));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(a1));
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160507481] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 160507482];
      if ( a2 )
      {
        sub_14020CE0C((__int64)v7, 4, 3, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v5 + 160556634], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v5 + 160556634]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[160507481] );
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[160573018], 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(a1));
  v8 = 0;
  v16 = 0;
  if ( (int)dword_140404A6C[160573018] > 0 )
  {
    v9 = &dword_140404A6C[160573019];
    do
    {
      v10 = &dword_140404A6C[14 * v8 + 160573019];
      v17 = 56LL * v8;
      if ( a2 )
        sub_14020CE0C((__int64)v10, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v10), 4, 1, (FILE *)(uintptr_t)(a1));
      v11 = 0;
      if ( (int)*v9 > 0 )
      {
        v12 = 7LL * v8;
        do
        {
          v13 = &dword_140404A6C[14 * v8 + 160573020 + v11];
          if ( a2 )
          {
            sub_14020CE0C((__int64)v13, 4, 1, a1);
            sub_14020CE0C((__int64)&dword_140404A6C[2 * v12 + 160573024 + 2 * v11], 4, 2, a1);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v13), 4, 1, (FILE *)(uintptr_t)(a1));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * v12 + 160573024 + 2 * v11]), 4, 2, (FILE *)(uintptr_t)(a1));
          }
          ++v11;
        }
        while ( v11 < (int)*v9 );
        v8 = v16;
      }
      v14 = &dword_140404A6C[v17 / 4 + 160573032];
      if ( a2 )
        sub_14020CE0C((__int64)v14, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v14), 4, 1, (FILE *)(uintptr_t)(a1));
      ++v8;
      v9 += 14;
      v16 = v8;
    }
    while ( v8 < (int)dword_140404A6C[160573018] );
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140091310) ----------------------------------------------------
__int64            sub_140091310(FILE *Stream, int a2)
{
  int v4; // ebp
  int i; // esi
  __int64 v6; // r14
  unsigned int *v7; // rcx
  unsigned int *v8; // r12
  int v9; // esi
  unsigned int *v10; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160292949], 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160292949]), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  v4 = 0;
  for ( i = 0; i < (int)dword_140404A6C[160292949]; ++i )
  {
    v6 = 6LL * i;
    v7 = &dword_140404A6C[v6 + 160292950];
    v8 = &dword_140404A6C[v6 + 160292949];
    if ( a2 )
    {
      sub_14020CE0C((__int64)v7, 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)(v8 + 2), 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)&dword_140404A6C[v6 + 160292952], 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)&dword_140404A6C[v6 + 160292953], 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)&dword_140404A6C[v6 + 160292954], 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)&dword_140404A6C[v6 + 160292955], 4, 1, (__int64)Stream);
    }
    else
    {
      fread_sr((void *)(uintptr_t)(v7), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(v8 + 2), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 160292952]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 160292953]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 160292954]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 160292955]), 4, 1, (FILE *)(uintptr_t)(Stream));
    }
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[160294486], 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160294486]), 4, 1, (FILE *)(uintptr_t)(Stream));
  if ( (int)dword_140404A6C[160294486] > 0 )
  {
    v9 = 0;
    do
    {
      v10 = &dword_140404A6C[v9 + 160294487];
      if ( a2 )
        sub_14020CE0C((__int64)v10, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v10), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v4;
      v9 += 3;
    }
    while ( v4 < (int)dword_140404A6C[160294486] );
  }
  if ( a2 )
  {
    sub_14020CE0C((__int64)&dword_140404A6C[160343639], 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160343640], 4, 3 * dword_140404A6C[160343639], (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160392792], 4, (int)dword_140404A6C[160343639], (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160409176], 4, 6 * dword_140404A6C[160343639], (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160343639]), 4, 1, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160343640]), 4, 3 * dword_140404A6C[160343639], (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160392792]), 4, (int)dword_140404A6C[160343639], (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160409176]), 4, 6 * dword_140404A6C[160343639], (FILE *)(uintptr_t)(Stream));
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140091660) ----------------------------------------------------
__int64            sub_140091660(__int64 a1, int a2)
{
  int v5; // ebp
  unsigned int *v6; // rdi
  __int64 v7; // r14
  unsigned int *v8; // rcx
  signed int i; // ebx
  unsigned int *v10; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160857235], 4, 1, a1);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857235]), 4, 1, (FILE *)(uintptr_t)(a1));
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160857235] > 0 )
  {
    v6 = &dword_140404A6C[160857236];
    do
    {
      v7 = 13LL * v5;
      v8 = &dword_140404A6C[v7 + 160857236];
      if ( a2 )
        sub_14020CE0C((__int64)v8, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v8), 4, 1, (FILE *)(uintptr_t)(a1));
      for ( i = 0; i < (int)*v6; ++i )
      {
        v10 = &dword_140404A6C[3 * i + 160857237 + v7];
        if ( a2 )
          sub_14020CE0C((__int64)v10, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(v10), 4, 3, (FILE *)(uintptr_t)(a1));
      }
      ++v5;
      v6 += 13;
    }
    while ( v5 < (int)dword_140404A6C[160857235] );
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400917C0) ----------------------------------------------------
__int64            sub_1400917C0(__int64 a1, int a2)
{
  int Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160857229], 4, 3, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160857232], 4, 3, a1);
    return 1;
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857229]), 4, 3, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857232]), 4, 3, (FILE *)(uintptr_t)(a1));
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140091880) ----------------------------------------------------
__int64 sub_140091880()
{
  int v0; // ebp
       char *v1; // rdi
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+24h] [rbp-34h] BYREF
       char *v20; // [rsp+28h] [rbp-30h]
  _QWORD v21[5]; // [rsp+30h] [rbp-28h]

  v0 = 0;
  v21[0] = (uint64)(uintptr_t)("OpenGL ES-CL ");
  v1 = "OpenGL ES-CM ";
  v20 = "OpenGL ES-CM ";
  v21[1] = (uint64)(uintptr_t)("OpenGL ES ");
  v21[2] = 0;
  v2 = qword_140302FA8(7938);
  if ( !v2 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( v1[v4] );
    if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v2), (const char *)(uintptr_t)(v1), v4) )
      break;
    v1 = (     char *)v21[v3++];
    if ( !v1 )
      goto LABEL_9;
  }
  v2 += v4;
LABEL_9:
  sub_14015B0D0(v2, "%d.%d", (__int64)(uintptr_t)&v18, (__int64)(uintptr_t)&v19);
  dword_140404A68 = v18;
  dword_140404A6C[0] = v19;
  dword_140404A6C[18215115] = v18;
  dword_140404A6C[18215116] = v19;
  if ( v18 == 1 )
  {
    if ( v19 >= 0 )
    {
LABEL_11:
      v5 = 1;
      goto LABEL_12;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_11;
  }
  v5 = 0;
LABEL_12:
  dword_140404A6C[18215057] = v5;
  if ( v18 == 1 )
  {
    if ( v19 >= 1 )
    {
LABEL_14:
      v6 = 1;
      goto LABEL_15;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_14;
  }
  v6 = 0;
LABEL_15:
  dword_140302FF0 = v6;
  if ( v18 == 1 )
  {
    if ( v19 >= 2 )
    {
LABEL_17:
      v7 = 1;
      goto LABEL_18;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_17;
  }
  v7 = 0;
LABEL_18:
  dword_140302FF4 = v7;
  if ( v18 == 1 )
  {
    if ( v19 >= 3 )
    {
LABEL_20:
      v8 = 1;
      goto LABEL_21;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_20;
  }
  v8 = 0;
LABEL_21:
  unk_140404090 = v8;
  if ( v18 == 1 )
  {
    if ( v19 >= 4 )
    {
LABEL_23:
      v9 = 1;
      goto LABEL_24;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_23;
  }
  v9 = 0;
LABEL_24:
  unk_140404094 = v9;
  if ( v18 == 1 )
  {
    if ( v19 >= 5 )
    {
LABEL_26:
      v10 = 1;
      goto LABEL_27;
    }
  }
  else if ( v18 > 1 )
  {
    goto LABEL_26;
  }
  v10 = 0;
LABEL_27:
  unk_140404128 = v10;
  if ( v18 == 2 )
  {
    if ( v19 >= 0 )
    {
LABEL_29:
      v11 = 1;
      goto LABEL_30;
    }
  }
  else if ( v18 > 2 )
  {
    goto LABEL_29;
  }
  v11 = 0;
LABEL_30:
  unk_14040412C = v11;
  if ( v18 == 2 )
  {
    if ( v19 >= 1 )
    {
LABEL_32:
      v12 = 1;
      goto LABEL_33;
    }
  }
  else if ( v18 > 2 )
  {
    goto LABEL_32;
  }
  v12 = 0;
LABEL_33:
  unk_1404044B0 = v12;
  if ( v18 == 3 )
  {
    if ( v19 >= 0 )
    {
LABEL_35:
      v13 = 1;
      goto LABEL_36;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_35;
  }
  v13 = 0;
LABEL_36:
  unk_1404044B4 = v13;
  if ( v18 == 3 )
  {
    if ( v19 >= 1 )
    {
LABEL_38:
      v14 = 1;
      goto LABEL_39;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_38;
  }
  v14 = 0;
LABEL_39:
  unk_140404788 = v14;
  if ( v18 == 3 )
  {
    if ( v19 >= 2 )
    {
LABEL_41:
      v15 = 1;
      goto LABEL_42;
    }
  }
  else if ( v18 > 3 )
  {
    goto LABEL_41;
  }
  v15 = 0;
LABEL_42:
  unk_14040478C = v15;
  if ( v18 == 3 )
  {
    if ( v19 < 3 )
      goto LABEL_69;
    goto LABEL_68;
  }
  if ( v18 > 3 )
LABEL_68:
    v0 = 1;
LABEL_69:
  unk_140404888 = v0;
  if ( v18 > 3 || v18 >= 3 && v19 >= 3 )
  {
    dword_140404A6C[18215115] = 3;
    dword_140404A6C[18215116] = 3;
  }
  return (unsigned int)v18;
}

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 140302FF0: using guessed type int dword_140302FF0;
// 140302FF4: using guessed type int dword_140302FF4;
// 140404A68: using guessed type int dword_140404A68;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CB0: using guessed type unsigned int;
// 144980D98: using guessed type unsigned int;
// 144980D9C: using guessed type unsigned int;

//----- (0000000140091BA0) ----------------------------------------------------
__int64 sub_140091BA0()
{
  __int64 v0; // rax
  int v1; // edi
       __m128i *v2; // rsi
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
       __m128i *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v11; // rbp
  __m128i *v12; // rax
  __m128i *v13; // rdi
       __m128i *v14; // rax
       __m128i *v15; // rcx
  int v16; // eax
  int v17; // esi
       char **v18; // r14
  int v19; // esi
  __int64 v20; // rdi

  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    v0 = qword_140302FA8(7939);
    v1 = dword_140404A6C[18215119];
    v2 = (     __m128i *)v0;
    v3 = *(char **)&dword_140404A6C[18215121];
    *(_QWORD *)&dword_140404A6C[18215117] = v0;
    goto LABEL_16;
  }
  dword_140404A6C[18215119] = 0;
  qword_140302FA0(33309, &dword_140404A6C[18215119]);
  v1 = dword_140404A6C[18215119];
  if ( (int)dword_140404A6C[18215119] <= 0 )
  {
    v3 = *(char **)&dword_140404A6C[18215121];
  }
  else
  {
    v4 = j__realloc_base_sr(*(_QWORD *)&dword_140404A6C[18215121], 8LL * (int)dword_140404A6C[18215119]);
    v3 = (char *)v4;
    if ( !v4 )
      return 0;
    v1 = dword_140404A6C[18215119];
    *(_QWORD *)&dword_140404A6C[18215121] = v4;
  }
  if ( !v3 )
    return 0;
  v6 = 0;
  if ( v1 )
  {
    do
    {
      v7 = unk_1404046B0(7939, (unsigned int)v6);
      v8 = (     __m128i *)v7;
      v9 = -1;
      while ( *(_BYTE *)(v7 + v9++ + 1) != 0 )
        ;
      v11 = v9 + 1;
      v12 = (__m128i *)sr_path_malloc(v9 + 1);
      v13 = v12;
      if ( v12 )
        sub_1401FC920(v12, v8, v11);
      v3 = *(char **)&dword_140404A6C[18215121];
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[18215121] + 8 * v6) = (uint64)(uintptr_t)(v13);
      v6 = (unsigned int)(v6 + 1);
      v1 = dword_140404A6C[18215119];
    }
    while ( (unsigned int)v6 < dword_140404A6C[18215119] );
  }
  v2 = *(     __m128i **)&dword_140404A6C[18215117];
LABEL_16:
  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    if ( v2 )
    {
      v14 = sub_1401FC614(v2, (     __m128i *)"GL_ARB_clip_control");
      if ( v14 )
      {
        while ( 1 )
        {
          v15 = (     __m128i *)((char *)v14 + 19);
          if ( (v14 == v2 || SR_VEC_LANES(128, v14[-1], i8)[15] == 32) && (SR_VEC_PTR_LANES(128, v15, i8)[0] & 0xDF) == 0 )
            break;
          v2 = (     __m128i *)((char *)v14 + 19);
          v14 = sub_1401FC614(v15, (     __m128i *)"GL_ARB_clip_control");
          if ( !v14 )
            goto LABEL_23;
        }
        v1 = dword_140404A6C[18215119];
        v16 = 1;
        v3 = *(char **)&dword_140404A6C[18215121];
      }
      else
      {
LABEL_23:
        v1 = dword_140404A6C[18215119];
        v16 = 0;
        v3 = *(char **)&dword_140404A6C[18215121];
      }
    }
    else
    {
      v16 = 0;
    }
LABEL_34:
    unk_14040488C = v16;
    if ( v3 )
    {
      v19 = 0;
      if ( v1 > 0 )
      {
        v20 = 0;
        do
        {
          free(*(void **)&v3[v20]);
          v3 = *(char **)&dword_140404A6C[18215121];
          v20 += 8;
          ++v19;
        }
        while ( v19 < (int)dword_140404A6C[18215119] );
      }
      free(v3);
      *(_QWORD *)&dword_140404A6C[18215121] = 0;
    }
    return 1;
  }
  if ( v3 )
  {
    v17 = 0;
    if ( v1 <= 0 )
    {
LABEL_33:
      v16 = 0;
    }
    else
    {
      v18 = (     char **)v3;
      while ( !*v18 || strcmp_sr(*v18, "GL_ARB_clip_control") )
      {
        ++v17;
        ++v18;
        if ( v17 >= v1 )
          goto LABEL_33;
      }
      v16 = 1;
    }
    goto LABEL_34;
  }
  unk_14040488C = 0;
  return 1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140302FA0: using guessed type __int64 (__fastcall *qword_140302FA0)(_QWORD, _QWORD);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 1404046B0: using guessed type __int64 (__fastcall *unk_1404046B0)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DA0: using guessed type unsigned int;
// 144980DA8: using guessed type unsigned int;

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

//----- (0000000140091E60) ----------------------------------------------------
unsigned __int64            sub_140091E60(int a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  unsigned int *v3; // r8
  char i; // cl
  __int64 v5; // rdx
  _BYTE *v6; // rax
  __int64 v7; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rcx

  v1 = 3597LL * a1;
  if ( LOBYTE(dword_140404A6C[v1 + 71856254]) == 47 )
    LOBYTE(dword_140404A6C[v1 + 71856254]) = 32;
  if ( BYTE1(dword_140404A6C[v1 + 71856254]) == 47 )
    BYTE1(dword_140404A6C[v1 + 71856254]) = 32;
  if ( BYTE2(dword_140404A6C[v1 + 71856254]) == 47 )
    BYTE2(dword_140404A6C[v1 + 71856254]) = 32;
  if ( HIBYTE(dword_140404A6C[v1 + 71856254]) == 47 )
    HIBYTE(dword_140404A6C[v1 + 71856254]) = 32;
  if ( LOBYTE(dword_140404A6C[v1 + 71856255]) == 47 )
    LOBYTE(dword_140404A6C[v1 + 71856255]) = 32;
  if ( BYTE1(dword_140404A6C[v1 + 71856255]) == 47 )
    BYTE1(dword_140404A6C[v1 + 71856255]) = 32;
  if ( BYTE2(dword_140404A6C[v1 + 71856255]) == 47 )
    BYTE2(dword_140404A6C[v1 + 71856255]) = 32;
  if ( HIBYTE(dword_140404A6C[v1 + 71856255]) == 47 )
    HIBYTE(dword_140404A6C[v1 + 71856255]) = 32;
  if ( LOBYTE(dword_140404A6C[v1 + 71856256]) == 47 )
    LOBYTE(dword_140404A6C[v1 + 71856256]) = 32;
  if ( BYTE1(dword_140404A6C[v1 + 71856256]) == 47 )
    BYTE1(dword_140404A6C[v1 + 71856256]) = 32;
  if ( BYTE2(dword_140404A6C[v1 + 71856256]) == 47 )
    BYTE2(dword_140404A6C[v1 + 71856256]) = 32;
  if ( HIBYTE(dword_140404A6C[v1 + 71856256]) == 47 )
    HIBYTE(dword_140404A6C[v1 + 71856256]) = 32;
  if ( LOBYTE(dword_140404A6C[v1 + 71856257]) == 47 )
    LOBYTE(dword_140404A6C[v1 + 71856257]) = 32;
  if ( BYTE1(dword_140404A6C[v1 + 71856257]) == 47 )
    BYTE1(dword_140404A6C[v1 + 71856257]) = 32;
  if ( BYTE2(dword_140404A6C[v1 + 71856257]) == 47 )
    BYTE2(dword_140404A6C[v1 + 71856257]) = 32;
  if ( HIBYTE(dword_140404A6C[v1 + 71856257]) == 47 )
    HIBYTE(dword_140404A6C[v1 + 71856257]) = 32;
  if ( LOBYTE(dword_140404A6C[v1 + 71856258]) == 47 )
    LOBYTE(dword_140404A6C[v1 + 71856258]) = 32;
  if ( BYTE1(dword_140404A6C[v1 + 71856258]) == 47 )
    BYTE1(dword_140404A6C[v1 + 71856258]) = 32;
  if ( BYTE2(dword_140404A6C[v1 + 71856258]) == 47 )
    BYTE2(dword_140404A6C[v1 + 71856258]) = 32;
  if ( HIBYTE(dword_140404A6C[v1 + 71856258]) == 47 )
    HIBYTE(dword_140404A6C[v1 + 71856258]) = 32;
  if ( LOBYTE(dword_140404A6C[v1 + 71856259]) == 47 )
    LOBYTE(dword_140404A6C[v1 + 71856259]) = 32;
  if ( BYTE1(dword_140404A6C[v1 + 71856259]) == 47 )
    BYTE1(dword_140404A6C[v1 + 71856259]) = 32;
  if ( BYTE2(dword_140404A6C[v1 + 71856259]) == 47 )
    BYTE2(dword_140404A6C[v1 + 71856259]) = 32;
  if ( HIBYTE(dword_140404A6C[v1 + 71856259]) == 47 )
    HIBYTE(dword_140404A6C[v1 + 71856259]) = 32;
  if ( LOBYTE(dword_140404A6C[v1 + 71856260]) == 47 )
    LOBYTE(dword_140404A6C[v1 + 71856260]) = 32;
  if ( BYTE1(dword_140404A6C[v1 + 71856260]) == 47 )
    BYTE1(dword_140404A6C[v1 + 71856260]) = 32;
  if ( BYTE2(dword_140404A6C[v1 + 71856260]) == 47 )
    BYTE2(dword_140404A6C[v1 + 71856260]) = 32;
  if ( HIBYTE(dword_140404A6C[v1 + 71856260]) == 47 )
    HIBYTE(dword_140404A6C[v1 + 71856260]) = 32;
  if ( LOBYTE(dword_140404A6C[v1 + 71856261]) == 47 )
    LOBYTE(dword_140404A6C[v1 + 71856261]) = 32;
  if ( BYTE1(dword_140404A6C[v1 + 71856261]) == 47 )
    BYTE1(dword_140404A6C[v1 + 71856261]) = 32;
  if ( BYTE2(dword_140404A6C[v1 + 71856261]) == 47 )
    BYTE2(dword_140404A6C[v1 + 71856261]) = 32;
  v2 = 3597LL * a1;
  v3 = &dword_140404A6C[v2 + 71856253];
  HIBYTE(dword_140404A6C[v2 + 71856261]) = 0;
  for ( i = dword_140404A6C[v2 + 71856254]; i == 32; i = *((_BYTE *)v3 + 4) )
  {
    v5 = 0;
    v6 = v3 + 1;
    do
    {
      if ( !i )
        break;
      i = v6[1];
      ++v5;
      *v6++ = i;
    }
    while ( v5 < 31 );
  }
  v7 = -1;
  do
    ++v7;
  while ( *((_BYTE *)v3 + v7 + 4) );
  result = (unsigned int)(v7 - 1);
  v9 = (int)result;
  if ( (result & 0x80000000) == 0LL )
  {
    result = (unsigned __int64)&dword_140404A6C[71856254] + (int)result + v2 * 4;
    do
    {
      if ( *(_BYTE *)result != 32 )
        break;
      *(_BYTE *)result-- = 0;
      --v9;
    }
    while ( v9 >= 0 );
  }
  if ( !*((_BYTE *)v3 + 4) )
  {
    strcpy((char *)v3 + 4, "Noname");
    result = 0;
  }
  HIBYTE(dword_140404A6C[v2 + 71856261]) = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400920F0) ----------------------------------------------------
__int64 sub_1400920F0(__int64 a1,      char *a2, ...)
{
  __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*v4, a1, (__int64)a2, 0, (__int64)va);
}


//----- (0000000140092140) ----------------------------------------------------
__int64            sub_140092140(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 result; // rax
  unsigned int *v6; // rcx
  unsigned int *v7; // rcx
  unsigned int *v8; // rcx
  unsigned int *v9; // rcx

  result = (int)dword_140404A6C[284550610];
  if ( (int)dword_140404A6C[284550610] < 4096 )
  {
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554707] = a1;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554708] = a1;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554711] = *a2;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554712] = a2[1];
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554713] = a2[2];
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554714] = a2[3];
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554710] = a3;
    v6 = &dword_140404A6C[30 * dword_140404A6C[284550610] + 284554715];
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    v7 = &dword_140404A6C[30 * dword_140404A6C[284550610] + 284554718];
    *v7 = *a5;
    v7[1] = a5[1];
    v7[2] = a5[2];
    v8 = &dword_140404A6C[30 * dword_140404A6C[284550610] + 284554721];
    *v8 = a5[3];
    v8[1] = a5[4];
    v8[2] = a5[5];
    v9 = &dword_140404A6C[30 * dword_140404A6C[284550610] + 284554724];
    *v9 = a5[6];
    v9[1] = a5[7];
    v9[2] = a5[8];
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554727] = 1065353216;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554728] = 1065353216;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554729] = 1065353216;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554730] = 1065353216;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554731] = 1065353216;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554732] = 1065353216;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554733] = 0;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554734] = 0;
    dword_140404A6C[30 * dword_140404A6C[284550610] + 284554735] = 0;
    result = (int)dword_140404A6C[284550610];
    dword_140404A6C[30 * dword_140404A6C[284550610]++ + 284554736] = 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18417E1B4: using guessed type unsigned int;

//----- (0000000140092370) ----------------------------------------------------
__int64 sub_140092370()
{
  float v0; // xmm10_4
  float v1; // xmm9_4
  __m128 v2; // xmm7
  float v3; // xmm6_4
  float v4; // xmm8_4
  __int64 v5; // rdx
  float v6; // xmm0_4
  double v7; // xmm2_8
  float v8; // xmm7_4
  __m128 v9; // xmm0
  double v10; // xmm3_8
  double v11; // xmm7_8
  double v12; // xmm10_8
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned int *v15; // rax
  unsigned int *v16; // rax
  signed int v17; // r14d
  __int64 result; // rax
  __int64 v19; // rdi
  int v20; // ecx
  unsigned int v21; // esi
  float v22; // xmm11_4
  __int64 v23; // rbp
  unsigned int v24; // xmm10_4
  unsigned int v25; // xmm7_4
  unsigned int v26; // xmm12_4
  unsigned int v27; // eax
  float v28; // xmm10_4
  float v29; // xmm7_4
  float v30; // xmm12_4
  float v31; // xmm9_4
  float v32; // xmm13_4
  float v33; // xmm6_4
  float v34; // xmm6_4
  float v35; // xmm8_4
  unsigned int *v36; // rbx
  unsigned int *v37; // rdx
  __int64 v38; // rax
  __m128d v39; // xmm1
  __int64 v40; // rdx
  float v41; // xmm3_4
  double v42; // xmm2_8
  float v43; // xmm7_4
  __m128 v44; // xmm0
  double v45; // xmm4_8
  double v46; // xmm1_8
  __m128d v47; // xmm0
  double v48; // xmm3_8
  __m128i v49; // xmm7
  __m128i v50; // xmm0
  double v51; // xmm10_8
  __m128i v52; // xmm0
  __int64 v53; // r8
  int v54; // xmm0_4
  unsigned int v55; // eax
  float v56; // [rsp+130h] [rbp+8h]

  if ( dword_140404A6C[283831312] == 5
    && dword_140404A6C[284024501] != -1
    && dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] - 1 <= 1
    && *(float *)&dword_140404A6C[284022465] != 0.0 )
  {
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
    v2 = ((__m128)_mm_cvtsi64_si128((long long)(((__m128)_mm_cvtsi32_si128((int)(dword_140404A6C)))[284024509])));
    v0 = *(float *)&dword_140404A6C[284024514];
    v1 = (float)((float)(*(float *)&dword_140404A6C[284024506]
                       * (float)(*(float *)&dword_140404A6C[284022466] - *(float *)&dword_140404A6C[284024503]))
               + (float)(*(float *)&dword_140404A6C[284024505]
                       * (float)(*(float *)&dword_140404A6C[284022465] - *(float *)&dword_140404A6C[284024502])))
       + (float)(*(float *)&dword_140404A6C[284024507]
               * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504]));
    SR_VEC_LANES(128, v2, f32)[0] = (float)((float)(*(float *)&dword_140404A6C[284024509]
                                   * (float)(*(float *)&dword_140404A6C[284022466]
                                           - *(float *)&dword_140404A6C[284024503]))
                           + (float)(*(float *)&dword_140404A6C[284024508]
                                   * (float)(*(float *)&dword_140404A6C[284022465]
                                           - *(float *)&dword_140404A6C[284024502])))
                   + (float)(*(float *)&dword_140404A6C[284024510]
                           * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504]));
    v3 = -(float)((float)((float)(*(float *)&dword_140404A6C[284024512]
                                * (float)(*(float *)&dword_140404A6C[284022466] - *(float *)&dword_140404A6C[284024503]))
                        + (float)(*(float *)&dword_140404A6C[284024511]
                                * (float)(*(float *)&dword_140404A6C[284022465] - *(float *)&dword_140404A6C[284024502])))
                + (float)(*(float *)&dword_140404A6C[284024513]
                        * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504])));
    v4 = fmaxf(
           fminf(
             (float)(192.0
                   / (float)((float)(fsqrt(
                                       (float)((float)((float)(*(float *)&dword_140404A6C[284022466]
                                                             - *(float *)&dword_140404A6C[284024503])
                                                     * (float)(*(float *)&dword_140404A6C[284022466]
                                                             - *(float *)&dword_140404A6C[284024503]))
                                             + (float)((float)(*(float *)&dword_140404A6C[284022465]
                                                             - *(float *)&dword_140404A6C[284024502])
                                                     * (float)(*(float *)&dword_140404A6C[284022465]
                                                             - *(float *)&dword_140404A6C[284024502])))
                                     + (float)((float)(*(float *)&dword_140404A6C[284022467]
                                                     - *(float *)&dword_140404A6C[284024504])
                                             * (float)(*(float *)&dword_140404A6C[284022467]
                                                     - *(float *)&dword_140404A6C[284024504])))
                                   * 0.0625)
                           * *(float *)&dword_140404A6C[284024514]))
           + 4.0,
             192.0),
           8.0);
    if ( v3 < 1.0 )
      v3 = 1.0;
    v6 = sub_14023F704(SR_VEC_LANES(128, v2, f32)[0], v1);
    SR_VEC_LANES(128, v2, f32)[0] = (float)(SR_VEC_LANES(128, v2, f32)[0] * SR_VEC_LANES(128, v2, f32)[0]) + (float)(v1 * v1);
    v7 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v2)), f64)[0] * 512.0;
    v8 = v7;
    if ( v3 > 1.0 )
      v8 = v8 / (float)(v3 * v0);
    v9 = _mm_castpd_ps(sub_1401F8A50(v6, v5, v7));
    HIDWORD(v12) = 0;
    v10 = fminf(512.0 - (float)(v4 * 0.5), v8);
    v11 = 288.0 - *(double *)SR_VEC_LANES(128, v9, u64) * v10;
    *(float *)&v12 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v9, (__m128d)v9, 1), f64)[0] * v10 + 512.0;
    if ( *(float *)&v11 >= 24.0 )
    {
      if ( *(float *)&v11 > 552.0 )
        *(_QWORD *)&v11 = 1141506048;
    }
    else
    {
      *(_QWORD *)&v11 = 1103101952;
    }
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283831238] + 284024944]);
    v14 = dword_140404A6C[284024501];
    if ( dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] == 1 )
    {
      sub_14006CFF0(v12, v11, v13, v4, 133, 1065353216, 0, 0, 1061158912);
      v14 = dword_140404A6C[284024501];
    }
    if ( dword_140404A6C[3597 * v14 + 71856286] == 2 )
      sub_14006CFF0(v12, v11, v13, v4, 133, 0, 1065353216, 0, 1061158912);
  }
  dword_140404A6C[438291413] = 2;
  v15 = &dword_140404A6C[280658298];
  do
  {
    *v15 = 0;
    v15 += 7166;
  }
  while ( (__int64)v15 < (__int64)&dword_140404A6C[282492794] );
  v16 = &dword_140404A6C[278846060];
  do
  {
    *v16 = 0;
    v16 += 1760;
  }
  while ( (__int64)v16 < (__int64)&dword_140404A6C[280648300] );
  v17 = dword_140404A6C[346706173];
  for ( result = dword_140404A6C[346706173] + 1;
        v17 != (unsigned __int8)(LOBYTE(dword_140404A6C[346706173]) + 1);
        result = dword_140404A6C[346706173] + 1 )
  {
    v19 = 38LL * v17;
    v20 = dword_140404A6C[v19 + 346696447];
    if ( v20 > 0 && (int)dword_140404A6C[v19 + 346696448] > 0 )
    {
      v21 = dword_140404A6C[v19 + 346696445];
      if ( v21 - 1 <= 1 )
      {
        v22 = (float)v20 * 0.0049999999;
        if ( dword_140404A6C[v19 + 346696449] != -1 )
        {
          v23 = (int)dword_140404A6C[v19 + 346696449];
          if ( v21 == 1 )
          {
            v24 = dword_140404A6C[344 * v23 + 284956407];
            v25 = dword_140404A6C[344 * v23 + 284956408];
            v26 = dword_140404A6C[344 * v23 + 284956409];
          }
          else
          {
            v24 = dword_140404A6C[13 * v23 + 285083825];
            v25 = dword_140404A6C[13 * v23 + 285083826];
            v26 = dword_140404A6C[13 * v23 + 285083827];
          }
          v27 = dword_140404A6C[v19 + 346696450];
          v28 = (float)((float)(*(float *)&dword_140404A6C[284024508] * 0.5) + *(float *)&v24)
              - *(float *)&dword_140404A6C[284024502];
          v29 = (float)((float)(*(float *)&dword_140404A6C[284024509] * 0.5) + *(float *)&v25)
              - *(float *)&dword_140404A6C[284024503];
          v56 = (float)((float)(*(float *)&dword_140404A6C[284024510] * 0.5) + *(float *)&v26)
              - *(float *)&dword_140404A6C[284024504];
          v30 = (float)((float)(v29 * *(float *)&dword_140404A6C[284024506])
                      + (float)(v28 * *(float *)&dword_140404A6C[284024505]))
              + (float)(v56 * *(float *)&dword_140404A6C[284024507]);
          v31 = (float)((float)(v29 * *(float *)&dword_140404A6C[284024509])
                      + (float)(v28 * *(float *)&dword_140404A6C[284024508]))
              + (float)(v56 * *(float *)&dword_140404A6C[284024510]);
          v32 = -(float)((float)((float)(v29 * *(float *)&dword_140404A6C[284024512])
                               + (float)(v28 * *(float *)&dword_140404A6C[284024511]))
                       + (float)(v56 * *(float *)&dword_140404A6C[284024513]));
          v33 = 256.0 / fsqrt((float)((float)(v28 * v28) + (float)(v29 * v29)) + (float)(v56 * v56));
          if ( v27 )
          {
            if ( v27 == 2 )
              v33 = v33 + v33;
          }
          else
          {
            v33 = v33 * 0.25;
          }
          if ( v21 == 2 )
            v33 = v33 * 0.125;
          v34 = fminf(v33, 32.0);
          if ( v34 > 4.0 )
          {
            if ( v34 < 8.0 )
              v22 = v22 * (float)((float)(v34 - 4.0) * 0.25);
            v35 = 0.0;
            v36 = &dword_140404A6C[v19 + 346696451];
            if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] && *(_BYTE *)v36 )
            {
              v37 = &dword_140404A6C[v19 + 346696451];
              do
              {
                if ( (char *)v37 - (char *)v36 >= 0xFFFF )
                  break;
                v38 = *(char *)v37;
                v37 = (unsigned int *)((char *)v37 + 1);
                v35 = v35
                    + (float)(v34 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v38]);
              }
              while ( *(_BYTE *)v37 );
            }
            v39 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
            v41 = sub_14023F704(v31, v30);
            SR_VEC_LANES(128, v39, f64)[0] = (float)((float)(v31 * v31) + (float)(v30 * v30));
            v42 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v39), f64)[0] * 512.0;
            v43 = v42;
            if ( v32 <= 1.0 )
            {
              if ( v32 < -1.0 )
                v43 = v43 * (float)(-1.0 / (float)(v32 * *(float *)&dword_140404A6C[284024514]));
            }
            else
            {
              v43 = v43 / (float)(v32 * *(float *)&dword_140404A6C[284024514]);
            }
            v44 = _mm_castpd_ps(sub_1401F8A50(v41, v40, v42));
            v45 = *(double *)SR_VEC_LANES(128, v44, u64);
            v46 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v44, (__m128d)v44, 1), f64)[0];
            v47 = ((__m128d)_mm_cvtsi64_si128((long long)(0x4072000000000000uLL)));
            v48 = fminf(512.0 - (float)(v35 * 0.5), v43);
            SR_VEC_LANES(128, v47, f64)[0] = 288.0 - v45 * v48;
            HIDWORD(v51) = 0;
            v49 = (__m128i)_mm_cvtpd_ps(v47);
            v50 = _mm_cvtsi32_si128((int)(0x41C00000u));
            *(float *)&v51 = v46 * v48 + 512.0;
            if ( *(float *)SR_VEC_LANES(128, v49, i32) < 24.0 || (v50 = _mm_cvtsi32_si128((int)(0x440A0000u)), *(float *)SR_VEC_LANES(128, v49, i32) > 552.0) )
              v49 = v50;
            if ( v21 == 1 )
              v52 = _mm_cvtsi32_si128(dword_140404A6C[7166 * v23 + 280658298]);
            else
              v52 = _mm_cvtsi32_si128(dword_140404A6C[1760 * v23 + 278846060]);
            *(float *)SR_VEC_LANES(128, v49, i32) = *(float *)SR_VEC_LANES(128, v49, i32) - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v52), f32)[0] * v34);
            qword_140404050(3553, dword_140404A6C[451221642]);
            v54 = 1061158912;
            if ( v32 > -0.125 )
              v54 = 1065353216;
            sub_14006CFF0(v51, *(double *)SR_VEC_LANES(128, v49, i64), v53, v34 * 0.875, 5, v54, v54, v54, COERCE_INT(v22 * 0.75));
            sr_CSDrawText(
              (char *)&dword_140404A6C[v19 + 346696451],
              *(float *)&v51,
              (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v49),
              v34);
            v55 = dword_140404A6C[v19 + 346696445];
            if ( v55 == 1 )
            {
              ++dword_140404A6C[7166 * dword_140404A6C[v19 + 346696449] + 280658298];
            }
            else if ( v55 == 2 )
            {
              ++dword_140404A6C[1760 * dword_140404A6C[v19 + 346696449] + 278846060];
            }
          }
        }
      }
    }
    v17 = (unsigned __int8)(v17 - 1);
  }
  return result;
}

// 140092850: conditional instruction was optimized away because esi.4==2
// 140092B9D: conditional instruction was optimized away because esi.4==2
// 1400925BB: variable 'v5' is possibly undefined
// 14009269A: variable 'v13' is possibly undefined
// 140092B10: variable 'v40' is possibly undefined
// 140092C29: variable 'v53' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 183F7C540: using guessed type unsigned int;
// 183F7C574: using guessed type unsigned int;
// 192E98E60: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140092D70) ----------------------------------------------------
__int64 sub_140092D70()
{
  unsigned int *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // r11
  float v4; // xmm7_4
  int v5; // eax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int16 *v9; // r10
  unsigned __int64 v10; // r8
  float v11; // xmm2_4
  float v12; // xmm0_4
  __m128i v13; // xmm1
  int v14; // eax
  __int64 v15; // rcx
  __int16 *v16; // r8
  int v17; // eax
  float *v18; // rax
  float *v19; // r8
  __int64 v20; // r10
  unsigned int v21; // xmm3_4
  unsigned int v22; // xmm2_4
  unsigned int v23; // xmm4_4
  signed __int64 v24; // rcx
  float v25; // xmm7_4
  float v26; // xmm3_4
  __int64 v27; // rdx
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  __int64 v31; // r8
  _DWORD v33[21]; // [rsp+0h] [rbp-188h] BYREF
  _DWORD v34[11]; // [rsp+54h] [rbp-134h] BYREF
  __int128 v35; // [rsp+80h] [rbp-108h]
  _OWORD v36[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-B8h]

  v0 = &dword_140404A6C[308307081];
  v1 = 0;
  v2 = 8;
  do
  {
    if ( *(v0 - 4) )
    {
      v3 = (int)*v0;
      if ( (_DWORD)v3 != -1 )
      {
        v4 = 0.0;
        v5 = v0[30731] - 1;
        if ( !v0[30731] )
          v5 = 63;
        v6 = 960 * v5;
        v7 = v6;
        v8 = v6 + 960;
        if ( v6 < v8 )
        {
          if ( v8 - v6 < 4 )
            goto LABEL_11;
          v9 = (__int16 *)&dword_140404A6C[v6 / 2u + 308307091 + v1] + 1;
          v10 = ((unsigned __int64)(v8 - v6 - 4) >> 2) + 1;
          v7 = v6 + 4 * v10;
          do
          {
            v11 = (float)abs16(v9[2]);
            v12 = (float)abs16(v9[1]);
            v13 = _mm_cvtsi32_si128(abs16(*(v9 - 1)));
            v14 = *v9;
            v9 += 4;
            v4 = v4
               + (float)((float)((float)(v11 * 0.0009765625) + (float)(v12 * 0.0009765625))
                       + (float)((float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v13), f32)[0] * 0.0009765625)
                               + (float)((float)(int)abs32(v14) * 0.0009765625)));
            --v10;
          }
          while ( v10 );
          if ( v7 < v8 )
          {
LABEL_11:
            v15 = v8 - v7;
            v16 = (__int16 *)&dword_140404A6C[308307091] + v7 + v1 * 2;
            do
            {
              v17 = *v16++;
              v4 = v4 + (float)((float)(int)abs32(v17) * 0.0009765625);
              --v15;
            }
            while ( v15 );
          }
        }
        v18 = (float *)v36;
        *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
        v19 = (float *)v34;
        dword_140404A6C[431564532] = 1065353216;
        v20 = 4;
        *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
        *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
        v34[2] = 0;
        v33[20] = dword_140404A6C[284024505];
        v21 = dword_140404A6C[344 * v3 + 284956344];
        *(float *)&v22 = *(float *)&dword_140404A6C[344 * v3 + 284956345] + 1.125;
        v23 = dword_140404A6C[344 * v3 + 284956346];
        v34[0] = dword_140404A6C[284024506];
        v24 = (char *)&dword_140404A6C[431564521] - (char *)v36;
        v34[1] = dword_140404A6C[284024507];
        v34[3] = dword_140404A6C[284024508];
        v34[4] = dword_140404A6C[284024509];
        v34[5] = dword_140404A6C[284024510];
        v34[6] = 0;
        v34[7] = dword_140404A6C[284024511];
        v34[8] = dword_140404A6C[284024512];
        v25 = fmaxf(v4 * 0.0010416667, 0.25);
        dword_140404A6C[431564530] = v22;
        dword_140404A6C[431564529] = v21;
        dword_140404A6C[431564531] = v23;
        v34[9] = dword_140404A6C[284024513];
        v34[10] = 0;
        v35 = xmmword_140279490;
        do
        {
          v26 = *(v19 - 1);
          v27 = 4;
          v28 = *v19;
          v29 = v19[1];
          v30 = v19[2];
          do
          {
            *v18 = (float)((float)(v30 * *(float *)((char *)v18 + v24 + 32))
                         + (float)(v29 * *(float *)((char *)v18 + v24 + 16)))
                 + (float)((float)(v26 * *(float *)((char *)v18 + v24 - 16))
                         + (float)(v28 * *(float *)((char *)v18 + v24)));
            ++v18;
            --v27;
          }
          while ( v27 );
          v19 += 4;
          v24 -= 16LL;
          --v20;
        }
        while ( v20 );
        *(_OWORD *)&dword_140404A6C[431564517] = v36[0];
        *(_OWORD *)&dword_140404A6C[431564521] = v36[1];
        *(_OWORD *)&dword_140404A6C[431564525] = v36[2];
        *(_OWORD *)&dword_140404A6C[431564529] = v36[3];
        sub_14007A0E0(
          &dword_140404A6C[431564533],
          (__int64)&dword_140404A6C[431564517],
          (__int64)&dword_140404A6C[431564501]);
        sub_14007A0E0(
          &dword_140404A6C[431564565],
          (__int64)&dword_140404A6C[431564533],
          (__int64)&dword_140404A6C[431564485]);
        qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830701] + 284024944]);
        sub_14006CFF0(0.0, 0.0, v31, 0.1640625, 133, 1065353216, 1065353216, 1065353216, COERCE_INT(v25 * 0.75));
        *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
        *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
        *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
        *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
        sub_14007A0E0(
          &dword_140404A6C[431564533],
          (__int64)&dword_140404A6C[431564517],
          (__int64)&dword_140404A6C[431564501]);
        sub_14007A0E0(
          &dword_140404A6C[431564565],
          (__int64)&dword_140404A6C[431564533],
          (__int64)&dword_140404A6C[431564485]);
      }
    }
    v0 += 96401;
    v1 += 96401;
    --v2;
  }
  while ( v2 );
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 1400931E1: variable 'v31' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7C550: using guessed type unsigned int;
// 183F7C554: using guessed type unsigned int;
// 183F7C558: using guessed type unsigned int;
// 183F7C55C: using guessed type unsigned int;
// 183F7C560: using guessed type unsigned int;
// 183F7C564: using guessed type unsigned int;
// 183F7C568: using guessed type unsigned int;
// 183F7C56C: using guessed type unsigned int;
// 183F7C570: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A724E634: using guessed type unsigned int;
// 1A724E638: using guessed type unsigned int;
// 1A724E63C: using guessed type unsigned int;

//----- (00000001400932D0) ----------------------------------------------------
_UNKNOWN **           sub_1400932D0()
{
  int v0; // edi
  int v1; // ebx
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // eax
  float v5; // xmm4_4
  signed int v6; // r8d
  float v7; // xmm3_4
  int v8; // eax
  double v9; // xmm6_8
  char v10; // cl
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned int *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  unsigned __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  float v23; // xmm2_4
  __int64 v24; // rcx
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  unsigned int v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  unsigned int v36; // xmm0_4
  float v37; // xmm1_4
  unsigned int v38; // xmm0_4
  float v39; // xmm1_4
  unsigned int v40; // xmm0_4
  float v41; // xmm1_4
  unsigned int v42; // xmm0_4
  unsigned __int64 v43; // r15
  float *v44; // rbx
  unsigned __int64 v45; // r12
  __int64 v46; // rdi
  __int64 v47; // r15
  float *v48; // rbx
  float *v49; // rdi
  __int64 v50; // rbp
  float v51; // xmm5_4
  float v52; // xmm4_4
  __int64 v53; // rcx
  float v54; // xmm1_4
  float v55; // xmm3_4
  __int64 v56; // rax
  float v57; // xmm2_4
  float v58; // xmm0_4
  float v59; // xmm5_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm3_4
  float v63; // xmm4_4
  float v64; // xmm3_4
  float v65; // xmm5_4
  float v66; // xmm4_4
  float v67; // xmm2_4
  float v68; // xmm0_4
  float v69; // xmm3_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm5_4
  unsigned int *v73; // rbx
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rbp
  __int64 v77; // rcx
  float v78; // xmm1_4
  float v79; // xmm3_4
  float v80; // xmm2_4
  __int64 v81; // rax
  unsigned int v82; // xmm0_4
  float v83; // xmm1_4
  unsigned int v84; // xmm0_4
  __int64 v85; // rdx
  __int64 v86; // rcx
  float v87; // xmm1_4
  unsigned int v88; // xmm0_4
  float v89; // xmm1_4
  __int64 v90; // rcx
  float v91; // xmm0_4
  __int64 v92; // rdx
  unsigned int v93; // xmm0_4
  float v94; // xmm1_4
  unsigned int v95; // xmm0_4
  float v96; // xmm1_4
  __int64 v97; // rdx
  __int64 v98; // rcx
  float v99; // xmm1_4
  unsigned int v100; // xmm0_4
  float v101; // xmm1_4
  float v102; // xmm0_4
  __int64 v103; // rdx
  __int64 v104; // rcx
  unsigned int v105; // xmm0_4
  float v106; // xmm1_4
  unsigned int v107; // xmm0_4
  float v108; // xmm1_4
  __int64 v109; // r14
  unsigned int *v110; // rdi
  __int64 v111; // rbx
  __int64 v112; // rsi
  float *v113; // rax
  __int64 v114; // rcx
  unsigned int v115; // xmm1_4
  float v116; // xmm0_4
  float v117; // xmm2_4
  float v118; // xmm4_4
  float v119; // xmm1_4
  unsigned int v120; // xmm0_4
  __int64 v122; // [rsp+A0h] [rbp+8h]
  unsigned int *v123; // [rsp+A8h] [rbp+10h]
  __int64 v124; // [rsp+B0h] [rbp+18h]
  __int64 v125; // [rsp+B8h] [rbp+20h]

  v0 = 16;
  if ( dword_140404A6C[283831481] )
    v0 = 100;
  v1 = sub_140198F9B() - dword_140404A6C[421846189];
  v2 = sub_140198F9B();
  v3 = 4 * v0;
  dword_140404A6C[421846189] = v2;
  v4 = 0;
  if ( v1 >= 0 )
    v4 = v1;
  v5 = (float)v0;
  if ( v4 <= v3 )
    v3 = v4;
  v6 = v3 + dword_140404A6C[421846190];
  v7 = (float)(v0 * dword_140404A6C[283831474]);
  if ( (float)(v3 + dword_140404A6C[421846190]) > (float)(v7 - (float)(v5 * 0.125)) )
    v6 -= (unsigned int)v0 >> 3;
  if ( (float)v6 < (float)(v7 - (float)((float)(*(float *)&dword_140404A6C[421846191] + 0.125) * v5)) )
    v6 += (unsigned int)v0 >> 4;
  if ( v6 > (signed int)(v0 * dword_140404A6C[283831474]) )
    v6 = v0 * dword_140404A6C[283831474];
  dword_140404A6C[421846190] = v6;
  if ( v6 < (signed int)(v0 * (dword_140404A6C[283831474] - 20)) )
  {
    v6 = (int)(float)(v7 - (float)(v5 * 20.0));
    dword_140404A6C[421846190] = v6;
  }
  if ( dword_140404A6C[19065870] && v6 < (signed int)(v0 * (dword_140404A6C[283831474] - 1)) )
  {
    v6 = (int)(float)(v7 - v5);
    dword_140404A6C[421846190] = v6;
  }
  v8 = v6 / v0;
  if ( v6 / v0 > (int)dword_140404A6C[283831474] )
    v8 = dword_140404A6C[283831474];
  *(_QWORD *)&v9 = COERCE_UNSIGNED_INT((float)(v6 - v0 * v8));
  *(float *)&v9 = fmaxf(*(float *)&v9 / v5, 0.0);
  if ( *(float *)&v9 > 1.0 )
    *(_QWORD *)&v9 = 1065353216;
  v10 = v8 + 1;
  v11 = v8 & 0x3F;
  v12 = v10 & 0x3F;
  if ( !dword_140404A6C[73991654] || dword_140404A6C[179668287] )
  {
    *(_QWORD *)&v9 = 1065353216;
    v12 = dword_140404A6C[283831474] & 0x3F;
    v11 = v12;
  }
  v13 = v11;
  v14 = 0;
  v15 = v12;
  v16 = &dword_140404A6C[280651303];
  v17 = 256;
  v123 = &dword_140404A6C[280651303];
  v18 = 0;
  v124 = 256;
  v122 = v13;
  v19 = (unsigned int)v13;
  v125 = v15;
  do
  {
    if ( *v16 )
    {
      v20 = 563328 * v19;
      v21 = 140832 * v15;
      v22 = 563328 * v19 + v18 * 4;
      v23 = *(float *)((char *)&dword_140404A6C[421846196] + v22);
      v24 = 563328 * v15 + v18 * 4;
      v25 = *(float *)((char *)&dword_140404A6C[421846196] + v24);
      if ( (float)(v23 - v25) >= 3.14159265359 )
        v25 = v25 + 6.28318530718;
      if ( (float)(v25 - v23) >= 3.14159265359 )
        v23 = v23 + 6.28318530718;
      v26 = v25 - v23;
      v27 = *(float *)((char *)&dword_140404A6C[421846198] + v22);
      v28 = v27;
      *(float *)&dword_140404A6C[v18 + 284956337] = (float)(v26 * *(float *)&v9)
                                                  + *(float *)((char *)&dword_140404A6C[421846196] + v22);
      v29 = *(float *)((char *)&dword_140404A6C[421846198] + v24);
      if ( (float)(v27 - v29) >= 3.14159265359 )
        v29 = v29 + 6.28318530718;
      if ( (float)(v29 - v27) >= 3.14159265359 )
        v27 = v27 + 6.28318530718;
      v30 = *(float *)((char *)&dword_140404A6C[421846200] + v24);
      v31 = v29 - v27;
      v32 = *(float *)((char *)&dword_140404A6C[421846204] + v22);
      *(float *)&v33 = (float)(v31 * *(float *)&v9) + v28;
      v34 = *(float *)((char *)&dword_140404A6C[421846205] + v22);
      dword_140404A6C[v18 + 284956339] = v33;
      v35 = *(float *)((char *)&dword_140404A6C[421846201] + v22);
      *(float *)&dword_140404A6C[v18 + 284956341] = (float)((float)(v30
                                                                  - *(float *)((char *)&dword_140404A6C[421846200] + v22))
                                                          * *(float *)&v9)
                                                  + *(float *)((char *)&dword_140404A6C[421846200] + v22);
      *(float *)&v36 = (float)((float)(*(float *)((char *)&dword_140404A6C[421846201] + v24) - v35) * *(float *)&v9)
                     + v35;
      v37 = *(float *)((char *)&dword_140404A6C[421846202] + v22);
      dword_140404A6C[v18 + 284956342] = v36;
      *(float *)&v38 = (float)((float)(*(float *)((char *)&dword_140404A6C[421846202] + v24) - v37) * *(float *)&v9)
                     + v37;
      v39 = *(float *)((char *)&dword_140404A6C[421846203] + v22);
      dword_140404A6C[v18 + 284956343] = v38;
      *(float *)&v40 = (float)((float)(*(float *)((char *)&dword_140404A6C[421846203] + v24) - v39) * *(float *)&v9)
                     + v39;
      v41 = *(float *)((char *)&dword_140404A6C[421846204] + v24);
      dword_140404A6C[v18 + 284956344] = v40;
      *(float *)&v42 = (float)((float)(*(float *)((char *)&dword_140404A6C[421846205] + v24) - v34) * *(float *)&v9)
                     + v34;
      *(float *)&dword_140404A6C[v18 + 284956345] = (float)((float)(v41 - v32) * *(float *)&v9) + v32;
      dword_140404A6C[v18 + 284956346] = v42;
      sub_1400C2F90(
        (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v14 * 4 + 1144038744),
        (float *)&dword_140404A6C[v20 / 4 + 421846206 + v14],
        (float *)&dword_140404A6C[v21 + 421846206 + v14],
        v9);
      v43 = v21 * 4 - v20;
      v44 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v20 + v14 * 4 + 1691598300);
      v45 = (char *)&dword_140404A6C[284956377] - (char *)&dword_140404A6C[421846236] - v20;
      v46 = 15;
      do
      {
        sub_1400C2F90((float *)((char *)v44 + v45), v44, (float *)((char *)v44 + v43), v9);
        v44 += 21;
        --v46;
      }
      while ( v46 );
      v47 = 15;
      v48 = (float *)&dword_140404A6C[v18 + 284956366];
      v49 = (float *)&dword_140404A6C[282486075];
      v50 = (((intptr_t)dword_140404A6C - 0x404a6cLL) + 84LL) + v14 * 4 + 1144038744;
      do
      {
        v51 = *(v49 - 1);
        v52 = *v49;
        v53 = 21LL * *((int *)v49 - 5);
        v54 = *v49;
        v55 = *v49;
        v56 = v18 * 4 + v53 * 4;
        v57 = (float)(v51 * *(float *)&dword_140404A6C[v18 + 284956347 + v53])
            + *(float *)&dword_140404A6C[v18 + 284956344 + v53];
        *(v48 - 1) = v57;
        v58 = (float)(v51 * *(float *)((char *)&dword_140404A6C[284956348] + v56))
            + *(float *)((char *)&dword_140404A6C[284956345] + v56);
        *v48 = v58;
        v59 = (float)(v51 * *(float *)((char *)&dword_140404A6C[284956349] + v56))
            + *(float *)((char *)&dword_140404A6C[284956346] + v56);
        v48[1] = v59;
        v60 = (float)(v54 * *(float *)&dword_140404A6C[v18 + 284956350 + v53]) + v57;
        v61 = v49[1];
        *(v48 - 1) = v60;
        v62 = (float)(v55 * *(float *)&dword_140404A6C[v18 + 284956351 + v53]) + v58;
        *v48 = v62;
        v63 = (float)(v52 * *(float *)&dword_140404A6C[v18 + 284956352 + v53]) + v59;
        v48[1] = v63;
        *(v48 - 1) = (float)(v61 * *(float *)&dword_140404A6C[v18 + 284956353 + v53]) + v60;
        *v48 = (float)(v61 * *(float *)&dword_140404A6C[v18 + 284956354 + v53]) + v62;
        v48[1] = (float)(v61 * *(float *)&dword_140404A6C[v18 + 284956355 + v53]) + v63;
        sub_14007A010(v50, v50 + 36, (__int64)&dword_140404A6C[v53 + 284956347 + v14]);
        v64 = *(v49 - 4) - *(v49 - 1);
        v65 = *(v49 - 3) - *v49;
        v66 = *(v49 - 2) - v49[1];
        v67 = (float)(v64 * v48[2]) + *(v48 - 1);
        *(v48 - 1) = v67;
        v68 = (float)(v64 * v48[3]) + *v48;
        *v48 = v68;
        v69 = (float)(v64 * v48[4]) + v48[1];
        v48[1] = v69;
        v70 = (float)(v65 * v48[5]) + v67;
        *(v48 - 1) = v70;
        v71 = (float)(v65 * v48[6]) + v68;
        *v48 = v71;
        v72 = (float)(v65 * v48[7]) + v69;
        v48[1] = v72;
        *(v48 - 1) = (float)(v66 * v48[8]) + v70;
        *v48 = (float)(v66 * v48[9]) + v71;
        v50 += 84;
        v49 += 25;
        v48[1] = (float)(v66 * v48[10]) + v72;
        v48 += 21;
        --v47;
      }
      while ( v47 );
      v16 = v123;
      v17 = v124;
      v19 = v122;
      v15 = v125;
    }
    v16 += 7166;
    v14 += 344;
    v18 += 344;
    v123 = v16;
    v124 = --v17;
  }
  while ( v17 );
  v73 = &dword_140404A6C[129716709];
  v74 = 0;
  v75 = 0;
  v76 = 512;
  do
  {
    if ( *v73 )
    {
      v77 = 563328 * v122 + v75 * 4;
      v78 = *(float *)((char *)&dword_140404A6C[421934260] + v77);
      v79 = *(float *)((char *)&dword_140404A6C[421934262] + v77);
      v80 = *(float *)((char *)&dword_140404A6C[421934261] + v77);
      dword_140404A6C[v75 + 285044400] = *(unsigned int *)((char *)&dword_140404A6C[421934259] + v77);
      v81 = 563328 * v15 + v75 * 4;
      *(float *)&v82 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934260] + v81) - v78) * *(float *)&v9)
                     + v78;
      v83 = *(float *)((char *)&dword_140404A6C[421934261] + v81);
      dword_140404A6C[v75 + 285044401] = v82;
      *(float *)&v84 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934262] + v81) - v79) * *(float *)&v9)
                     + v79;
      *(float *)&dword_140404A6C[v75 + 285044402] = (float)((float)(v83 - v80) * *(float *)&v9) + v80;
      dword_140404A6C[v75 + 285044403] = v84;
      sub_1400C2F90(
        (float *)&dword_140404A6C[v74 + 285044404],
        (float *)&dword_140404A6C[140832 * v122 + 421934263 + v74],
        (float *)&dword_140404A6C[140832 * v15 + 421934263 + v74],
        v9);
      v85 = v75 * 4 + 563328 * v15;
      v86 = v75 * 4 + 563328 * v122;
      v87 = *(float *)((char *)&dword_140404A6C[421934273] + v86);
      *(float *)&dword_140404A6C[v75 + 285044413] = (float)(*(float *)&v9
                                                          * *(float *)((char *)&dword_140404A6C[421934275] + v85))
                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v86);
      *(float *)&v88 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934273] + v85) - v87) * *(float *)&v9)
                     + v87;
      v89 = *(float *)((char *)&dword_140404A6C[421934274] + v86);
      v90 = v75 * 4 + 16 * (35208 * v122 + 1);
      dword_140404A6C[v75 + 285044414] = v88;
      v91 = *(float *)((char *)&dword_140404A6C[421934274] + v85);
      v92 = v75 * 4 + 16 * (35208 * v15 + 1);
      *(float *)&v93 = (float)((float)(v91 - v89) * *(float *)&v9) + v89;
      v94 = *(float *)((char *)&dword_140404A6C[421934273] + v90);
      dword_140404A6C[v75 + 285044415] = v93;
      *(float *)&dword_140404A6C[v75 + 285044417] = (float)(*(float *)&v9
                                                          * *(float *)((char *)&dword_140404A6C[421934275] + v92))
                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v90);
      *(float *)&v95 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934273] + v92) - v94) * *(float *)&v9)
                     + v94;
      v96 = *(float *)((char *)&dword_140404A6C[421934274] + v90);
      dword_140404A6C[v75 + 285044418] = v95;
      *(float *)&dword_140404A6C[v75 + 285044419] = (float)((float)(*(float *)((char *)&dword_140404A6C[421934274] + v92)
                                                                  - v96)
                                                          * *(float *)&v9)
                                                  + v96;
      v97 = v75 * 4 + 16 * (35208 * v15 + 2);
      v98 = v75 * 4 + 16 * (35208 * v122 + 2);
      v99 = *(float *)((char *)&dword_140404A6C[421934273] + v98);
      *(float *)&dword_140404A6C[v75 + 285044421] = (float)(*(float *)&v9
                                                          * *(float *)((char *)&dword_140404A6C[421934275] + v97))
                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v98);
      *(float *)&v100 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934273] + v97) - v99) * *(float *)&v9)
                      + v99;
      v101 = *(float *)((char *)&dword_140404A6C[421934274] + v98);
      dword_140404A6C[v75 + 285044422] = v100;
      v102 = *(float *)((char *)&dword_140404A6C[421934274] + v97);
      v103 = v75 * 4 + 16 * (35208 * v15 + 3);
      v104 = v75 * 4 + 16 * (35208 * v122 + 3);
      *(float *)&v105 = (float)((float)(v102 - v101) * *(float *)&v9) + v101;
      v106 = *(float *)((char *)&dword_140404A6C[421934273] + v104);
      dword_140404A6C[v75 + 285044423] = v105;
      *(float *)&dword_140404A6C[v75 + 285044425] = (float)(*(float *)&v9
                                                          * *(float *)((char *)&dword_140404A6C[421934275] + v103))
                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v104);
      *(float *)&v107 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934273] + v103) - v106) * *(float *)&v9)
                      + v106;
      v108 = *(float *)((char *)&dword_140404A6C[421934274] + v104);
      dword_140404A6C[v75 + 285044426] = v107;
      *(float *)&dword_140404A6C[v75 + 285044427] = (float)((float)(*(float *)((char *)&dword_140404A6C[421934274] + v103)
                                                                  - v108)
                                                          * *(float *)&v9)
                                                  + v108;
    }
    v74 += 77;
    v73 += 5210;
    v75 += 77;
    --v76;
  }
  while ( v76 );
  v109 = 0;
  v110 = &dword_140404A6C[278845893];
  v111 = 0;
  v112 = 1024;
  do
  {
    if ( *v110 )
    {
      v113 = (float *)&dword_140404A6C[140832 * v122 + 421973684 + v109];
      v114 = v109 * 4 + 563328 * v15;
      *(float *)&v115 = (float)((float)(*(float *)((char *)&dword_140404A6C[421973685] + v114) - v113[1]) * *(float *)&v9)
                      + v113[1];
      *(float *)&dword_140404A6C[v109 + 285083825] = (float)((float)(*(float *)((char *)&dword_140404A6C[421973684]
                                                                              + v114)
                                                                   - *v113)
                                                           * *(float *)&v9)
                                                   + *v113;
      v116 = *(float *)((char *)&dword_140404A6C[421973686] + v114) - v113[2];
      dword_140404A6C[v109 + 285083826] = v115;
      *(float *)&dword_140404A6C[v109 + 285083827] = (float)(v116 * *(float *)&v9) + v113[2];
      sub_1400C2F90(
        (float *)&dword_140404A6C[v111 + 285083828],
        (float *)&dword_140404A6C[140832 * v122 + 421973687 + v111],
        (float *)&dword_140404A6C[140832 * v15 + 421973687 + v111],
        v9);
    }
    v111 += 13;
    v110 += 1760;
    v109 += 13;
    --v112;
  }
  while ( v112 );
  v117 = *(float *)&dword_140404A6C[140832 * v122 + 421986997];
  v118 = *(float *)&dword_140404A6C[140832 * v122 + 421986998];
  v119 = *(float *)&dword_140404A6C[140832 * v15 + 421986997];
  *(float *)&dword_140404A6C[284024520] = (float)((float)(*(float *)&dword_140404A6C[140832 * v15 + 421986996]
                                                        - *(float *)&dword_140404A6C[140832 * v122 + 421986996])
                                                * *(float *)&v9)
                                        + *(float *)&dword_140404A6C[140832 * v122 + 421986996];
  *(float *)&v120 = (float)((float)(*(float *)&dword_140404A6C[140832 * v15 + 421986998] - v118) * *(float *)&v9) + v118;
  *(float *)&dword_140404A6C[284024521] = (float)((float)(v119 - v117) * *(float *)&v9) + v117;
  dword_140404A6C[284024522] = v120;
  return sub_1400C2F90(
           (float *)&dword_140404A6C[284024526],
           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 563328 * v122 + 1692161364),
           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 563328 * v15 + 1692161364),
           v9);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 183F7C594: using guessed type unsigned int;
// 1A4D3BD20: using guessed type unsigned int;
// 1A4D3BD24: using guessed type unsigned int;

//----- (0000000140093E60) ----------------------------------------------------
__int64 sub_140093E60()
{
  int i; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // xmm2_8
  float *v6; // rdx
  float *v7; // rax
  float *v8; // r8
  signed __int64 v9; // rcx
  __int64 v10; // r10
  float v11; // xmm3_4
  __int64 v12; // rdx
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  int j; // ebx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v20; // [rsp+8h] [rbp-100h] BYREF
  _Alignas(16) unsigned sr_cube_rotation[12];
  float sr_cube_light[3];
  _Alignas(16) unsigned sr_cube_translation[16];
  _OWORD v32[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-10h]

  qword_140302F58(515);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790136] + 283791765]);
  for ( i = 0; i < 6; ++i )
  {
    unk_140404718(
      36160,
      36064,
      (unsigned int)(i + 34069),
      dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944],
      0);
    (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0.375f,0.375f,0.375f,0.0f);
    (*(void (           **)(__int64))&dword_140404A6C[18215095])(0xFFFFFFFFLL);
    (*(void (           **)(_QWORD))&dword_140404A6C[18215091])(0);
    (*(void (           **)(__int64))&dword_140404A6C[18215087])(17664);
    (*(void (           **)(_QWORD))&dword_140404A6C[18215095])(0);
    sr_cube_rotation[8] = 1065353216;
    (*(__int128 *)(void *)sr_cube_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_cube_rotation+4)) = xmmword_140278D30;
    switch ( i )
    {
      case 0:
        v5 = 1070141403;
LABEL_12:
        v6 = (float *)&(*(__int128 *)(void *)sr_cube_rotation) + 3;
        goto LABEL_13;
      case 1:
        v5 = 3217625051LL;
        goto LABEL_12;
      case 2:
        sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_cube_rotation), (float *)&(*(__int128 *)(void *)sr_cube_rotation), sr_export_float_lane_container(1070141403));
        break;
      case 3:
        v5 = 3217625051LL;
        v6 = (float *)&(*(__int128 *)(void *)sr_cube_rotation);
LABEL_13:
        sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_cube_rotation), v6, *(double *)&v5);
        break;
      case 5:
        v5 = 1078530011;
        goto LABEL_12;
    }
    qword_140302FE8(0, 0, 512, 512);
    *(_OWORD *)&dword_140404A6C[431564489] = xmmword_140278D80;
    *(_QWORD *)&dword_140404A6C[431564493] = 0;
    *(_OWORD *)&dword_140404A6C[431564485] = xmmword_140278D30;
    dword_140404A6C[431564496] = -1082130432;
    *(_QWORD *)&dword_140404A6C[431564497] = 0;
    dword_140404A6C[431564532] = 1065353216;
    *(_OWORD *)&dword_140404A6C[431564500] = xmmword_140278D80;
    *(float *)&dword_140404A6C[431564495] = (float)(*(float *)&dword_140404A6C[284545216]
                                                  + *(float *)&dword_140404A6C[284545217])
                                          * (float)(-1.0
                                                  / (float)(*(float *)&dword_140404A6C[284545217]
                                                          - *(float *)&dword_140404A6C[284545216]));
    *(_OWORD *)&dword_140404A6C[431564504] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564512] = 0;
    *(_OWORD *)&dword_140404A6C[431564508] = xmmword_140279490;
    *(_OWORD *)&dword_140404A6C[431564520] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564516] = xmmword_140278D90;
    *(_OWORD *)&dword_140404A6C[431564528] = 0;
    *(float *)&dword_140404A6C[431564499] = (float)((float)(*(float *)&dword_140404A6C[284545217] * -2.0)
                                                  * *(float *)&dword_140404A6C[284545216])
                                          / (float)(*(float *)&dword_140404A6C[284545217]
                                                  - *(float *)&dword_140404A6C[284545216]);
    *(_OWORD *)&dword_140404A6C[431564524] = xmmword_140279490;
    sub_140105840(
      &dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564517],
      (__int64)&dword_140404A6C[431564501]);
    sub_140105840(
      &dword_140404A6C[431564549],
      (__int64)&dword_140404A6C[431564501],
      (__int64)&dword_140404A6C[431564485]);
    sub_140105840(
      &dword_140404A6C[431564565],
      (__int64)&dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564485]);
    dword_140404A6C[431564501] = (*(__int128 *)(void *)sr_cube_rotation);
    dword_140404A6C[431564509] = DWORD2((*(__int128 *)(void *)sr_cube_rotation));
    dword_140404A6C[431564506] = (*(__int128 *)(void *)(sr_cube_rotation+4));
    dword_140404A6C[431564505] = DWORD1((*(__int128 *)(void *)sr_cube_rotation));
    dword_140404A6C[431564503] = DWORD2((*(__int128 *)(void *)(sr_cube_rotation+4)));
    dword_140404A6C[431564502] = HIDWORD((*(__int128 *)(void *)sr_cube_rotation));
    dword_140404A6C[431564511] = sr_cube_rotation[8];
    dword_140404A6C[431564510] = DWORD1((*(__int128 *)(void *)(sr_cube_rotation+4)));
    ((_OWORD *)(void *)sr_cube_translation)[0] = xmmword_140278D30;
    dword_140404A6C[431564507] = HIDWORD((*(__int128 *)(void *)(sr_cube_rotation+4)));
    *(_QWORD *)&dword_140404A6C[431564513] = 0;
    dword_140404A6C[431564515] = 0;
    dword_140404A6C[431564504] = 0;
    dword_140404A6C[431564508] = 0;
    dword_140404A6C[431564512] = 0;
    dword_140404A6C[431564516] = 1065353216;
    v7 = (float *)v32;
    v8 = (float *)((_OWORD *)(void *)sr_cube_translation) + 1;
    ((_OWORD *)(void *)sr_cube_translation)[1] = xmmword_140278D80;
    v9 = (char *)&dword_140404A6C[431564505] - (char *)v32;
    v10 = 4;
    ((_OWORD *)(void *)sr_cube_translation)[2] = xmmword_140278E20;
    sr_cube_translation[12] = dword_140404A6C[284024502] ^ 0x80000000;
    (*(float *)&sr_cube_translation[13]) = -*(float *)&dword_140404A6C[284024503];
    (*(float *)&sr_cube_translation[14]) = -*(float *)&dword_140404A6C[284024504];
    sr_cube_translation[15] = 1065353216;
    do
    {
      v11 = *(v8 - 1);
      v12 = 4;
      v13 = *v8;
      v14 = v8[1];
      v15 = v8[2];
      do
      {
        *v7 = (float)((float)(v15 * *(float *)((char *)v7 + v9 + 32)) + (float)(v14 * *(float *)((char *)v7 + v9 + 16)))
            + (float)((float)(v13 * *(float *)((char *)v7 + v9)) + (float)(v11 * *(float *)((char *)v7 + v9 - 16)));
        ++v7;
        --v12;
      }
      while ( v12 );
      v8 += 4;
      v9 -= 16LL;
      --v10;
    }
    while ( v10 );
    *(_OWORD *)&dword_140404A6C[431564501] = v32[0];
    *(_OWORD *)&dword_140404A6C[431564505] = v32[1];
    *(_OWORD *)&dword_140404A6C[431564509] = v32[2];
    *(_OWORD *)&dword_140404A6C[431564513] = v32[3];
    *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
    *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
    sub_14007A0E0(
      &dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564517],
      (__int64)&dword_140404A6C[431564501]);
    sub_14007A0E0(
      &dword_140404A6C[431564549],
      (__int64)&dword_140404A6C[431564501],
      (__int64)&dword_140404A6C[431564485]);
    sub_14007A0E0(
      &dword_140404A6C[431564565],
      (__int64)&dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564485]);
    qword_1404042E0(dword_140404A6C[71738165]);
    qword_140404338(dword_140404A6C[71738170], 1, &dword_140404A6C[284550403]);
    sr_cube_light[0] = *(float *)&dword_140404A6C[284545205] * 0.5;
    sr_cube_light[1] = *(float *)&dword_140404A6C[284545206] * 0.5;
    sr_cube_light[2] = *(float *)&dword_140404A6C[284545207] * 0.5;
    qword_140404338(dword_140404A6C[71738171], 1, &sr_cube_light[0]);
    sr_cube_light[0] = *(float *)&dword_140404A6C[284545209] * 0.5;
    sr_cube_light[1] = *(float *)&dword_140404A6C[284545210] * 0.5;
    sr_cube_light[2] = *(float *)&dword_140404A6C[284545211] * 0.5;
    qword_140404338(dword_140404A6C[71738172], 1, &sr_cube_light[0]);
    qword_140404378(dword_140404A6C[71738174], 1, 0, &dword_140404A6C[431564565]);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830714] + 284024944]);
    unk_140404098(33985);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830715] + 284024944]);
    unk_140404098(33986);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830717] + 284024944]);
    unk_140404098(33988);
    qword_140404050(3553, dword_140404A6C[451221642]);
    unk_140404098(33987);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830718] + 284024944]);
    qword_140404238(0);
    for ( j = 0; j < 64; ++j )
      sub_1400D2B90(j);
    qword_140404230(0);
    unk_140404098(33984);
    qword_1404042E0(0);
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(32823);
  }
  unk_1404046F0(36160, 0);
  qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  sub_14001B6A0();
  v17 = dword_140404A6C[73991626];
  if ( dword_140404A6C[73991626] )
  {
    qword_140302F58(518);
    v17 = dword_140404A6C[73991626];
  }
  if ( unk_14040488C && unk_140404A60 )
  {
    v18 = 37727;
    if ( !v17 )
      v18 = 37726;
    unk_140404A60(36001, v18);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140093F9C: variable 'v2' is possibly undefined
// 140093F9C: variable 'v1' is possibly undefined
// 140093F9C: variable 'v3' is possibly undefined
// 140093F9C: variable 'v4' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278D90: using guessed type __int128 xmmword_140278D90;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302F58: using guessed type double (__fastcall *qword_140302F58)(_QWORD);
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A60: using guessed type __int64 (__fastcall *unk_140404A60)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D38: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D48: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 151E46194: using guessed type unsigned int;
// 1A724E580: using guessed type unsigned int;
// 1A724E590: using guessed type unsigned int;
// 1A724E5A0: using guessed type unsigned int;
// 1A724E5AC: using guessed type unsigned int;
// 1A724E5B0: using guessed type unsigned int;
// 1A724E5BC: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5C4: using guessed type unsigned int;
// 1A724E5C8: using guessed type unsigned int;
// 1A724E5CC: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5D4: using guessed type unsigned int;
// 1A724E5D8: using guessed type unsigned int;
// 1A724E5DC: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5E4: using guessed type unsigned int;
// 1A724E5E8: using guessed type unsigned int;
// 1A724E5EC: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E5F8: using guessed type unsigned int;
// 1A724E5FC: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E60C: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E61C: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A724E63C: using guessed type unsigned int;

//----- (0000000140094690) ----------------------------------------------------
__int64 sub_140094690()
{
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2884);
  return (*(__int64 (           **)(__int64))&dword_140404A6C[18215103])(2929);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (00000001400946D0) ----------------------------------------------------
double sub_1400946D0()
{
  __int64 v0; // r8
  __int64 v1; // r8
  signed int v2; // eax
  int v3; // r14d
  signed int v4; // r12d
  unsigned int *v5; // r15
  __int64 v6; // rbp
  unsigned int *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // eax
  unsigned int *v15; // rbx
  int v16; // esi
  unsigned int *v17; // rdi
  int v18; // r10d
  int v19; // r10d

  sub_14011C950();
  qword_1404042E0(dword_140404A6C[71738225]);
  qword_140404378(dword_140404A6C[71738230], 1, 0, &dword_140404A6C[431564517]);
  qword_140404378(dword_140404A6C[71738231], 1, 0, &dword_140404A6C[431564565]);
  qword_140404378(dword_140404A6C[71738234], 1, 0, &dword_140404A6C[431564485]);
  qword_140404378(dword_140404A6C[71738235], 1, 0, &dword_140404A6C[431564501]);
  qword_140404338(dword_140404A6C[71738232], 1, &dword_140404A6C[284550403]);
  ((void (*)(int,float))unk_1404042E8)((int)dword_140404A6C[71738233],0x1.0000000000000p+5f);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791462] + 283793813], v0);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791467] + 283793813], v1);
  qword_140404238(0);
  v2 = dword_140404A6C[70074733];
  v3 = 0;
  v4 = 0;
  if ( (int)dword_140404A6C[70074733] > 0 )
  {
    v5 = &dword_140404A6C[70074734];
    do
    {
      if ( !dword_140404A6C[312324428] && !dword_140404A6C[328554868] )
      {
        v6 = 4;
        v7 = &dword_140404A6C[6930 * *v5 + 83200503];
        do
        {
          if ( v7[780] )
          {
            v8 = (int)*v7;
            if ( (int)v8 >= 0 )
            {
              v9 = 3 * v8;
              v10 = (int)*v7;
              if ( dword_140404A6C[6 * v8 + 312226123] != -1 )
              {
                ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[309078348+3074*((int64_t)(int32_t)dword_140404A6C[6*v8+312226123])+3*((int64_t)(int32_t)dword_140404A6C[(6*v8+312226123)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[6*v8+312226123])*dword_140404A6C[309078344])));
                if ( dword_140404A6C[2 * v9 + 328456563] != -1 )
                  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*dword_140404A6C[8969*v10+73991665]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[325308788+3074*((int64_t)(int32_t)dword_140404A6C[2*v9+328456563])+3*((int64_t)(int32_t)dword_140404A6C[(2*v9+328456563)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[2*v9+328456563])*dword_140404A6C[325308784])));
              }
            }
          }
          ++v7;
          --v6;
        }
        while ( v6 );
        v2 = dword_140404A6C[70074733];
      }
      ++v4;
      ++v5;
    }
    while ( v4 < v2 );
  }
  qword_140404230(0);
  qword_140404170(34963, 0, v11);
  qword_140404170(34962, 0, v12);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(32823);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  if ( !dword_140404A6C[179668287] )
  {
    v14 = dword_140404A6C[284550610];
    v15 = &dword_140404A6C[284554707];
    v16 = 0;
    if ( (int)dword_140404A6C[284550610] > 0 )
    {
      v17 = &dword_140404A6C[284554707];
      do
      {
        if ( (v17[3] & 1) != 0 )
        {
          v18 = *v17;
          if ( (int)*v17 >= (int)dword_140404A6C[283827286] && v18 <= (int)dword_140404A6C[283827541] )
          {
            sub_140124FE0(
              v18,
              v17[1],
              &dword_140404A6C[30 * v16 + 284554715],
              (__int64)&dword_140404A6C[30 * v16 + 284554718]);
            v14 = dword_140404A6C[284550610];
          }
        }
        ++v16;
        v17 += 30;
      }
      while ( v16 < v14 );
      if ( v14 > 0 )
      {
        do
        {
          if ( (v15[3] & 1) != 0 )
          {
            v19 = *v15;
            if ( (int)*v15 < (int)dword_140404A6C[283827286] || v19 > (int)dword_140404A6C[283827541] )
            {
              sub_140124FE0(
                v19,
                v15[1],
                &dword_140404A6C[30 * v3 + 284554715],
                (__int64)&dword_140404A6C[30 * v3 + 284554718]);
              v14 = dword_140404A6C[284550610];
            }
          }
          ++v3;
          v15 += 30;
        }
        while ( v3 < v14 );
      }
    }
    qword_140404170(34962, 0, v13);
  }
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(32823);
  return qword_1404042E0(0);
}

// 140095195: variable 'v53' is possibly undefined
// 140095195: variable 'v52' is possibly undefined
// 140095195: variable 'v54' is possibly undefined
// 140095195: variable 'v55' is possibly undefined
// 14009529F: variable 'v57' is possibly undefined
// 140095423: variable 'v58' is possibly undefined
// 140095457: variable 'v59' is possibly undefined
// 140095495: variable 'v60' is possibly undefined
// 1400957BF: variable 'v87' is possibly undefined
// 1400957BF: variable 'v88' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278DE0: using guessed type __int128 xmmword_140278DE0;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140278E30: using guessed type __int128 xmmword_140278E30;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279830: using guessed type __int128 xmmword_140279830;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404340: using guessed type __int64 (__fastcall *unk_140404340)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404043C8: using guessed type __int64 (__fastcall *unk_1404043C8)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D38: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D40: using guessed type __int64 (*)(void);
// 144980D48: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 16D482820: using guessed type unsigned int;
// 16D482828: using guessed type unsigned int;
// 183F7C550: using guessed type unsigned int;
// 183F7C554: using guessed type unsigned int;
// 183F7C558: using guessed type unsigned int;
// 183F7C55C: using guessed type unsigned int;
// 183F7C560: using guessed type unsigned int;
// 183F7C564: using guessed type unsigned int;
// 183F7C568: using guessed type unsigned int;
// 183F7C56C: using guessed type unsigned int;
// 183F7C570: using guessed type unsigned int;
// 1873DE440: using guessed type unsigned int;
// 18AB70FAC: using guessed type unsigned int;
// 18B7D2FCC: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5C4: using guessed type unsigned int;
// 1A724E5C8: using guessed type unsigned int;
// 1A724E5CC: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5D4: using guessed type unsigned int;
// 1A724E5D8: using guessed type unsigned int;
// 1A724E5DC: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5E4: using guessed type unsigned int;
// 1A724E5E8: using guessed type unsigned int;
// 1A724E5EC: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E5F8: using guessed type unsigned int;
// 1A724E5FC: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A724E638: using guessed type unsigned int;
// 1A724E63C: using guessed type unsigned int;
// 1A724E640: using guessed type unsigned int;
// 1A724E650: using guessed type unsigned int;
// 1A724E660: using guessed type unsigned int;
// 1A724E670: using guessed type unsigned int;
// 1A724E680: using guessed type unsigned int;
// 1A724E690: using guessed type unsigned int;
// 1A724E6A0: using guessed type unsigned int;
// 1A724E6B0: using guessed type unsigned int;
// 1A724E6C0: using guessed type unsigned int;
// 1A724E6D0: using guessed type unsigned int;
// 1A724E6E0: using guessed type unsigned int;
// 1A724E6F0: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD059450: using guessed type unsigned int;
// 1AD059454: using guessed type unsigned int;
// 1AD059458: using guessed type unsigned int;
// 1AD05945C: using guessed type unsigned int;
// 1AD05946C: using guessed type unsigned int;
// 1AD059470: using guessed type unsigned int;
// 1AD059474: using guessed type unsigned int;
// 1AD059484: using guessed type unsigned int;
// 1AD059488: using guessed type unsigned int;
// 1AD059498: using guessed type unsigned int;
// 1AD05949C: using guessed type unsigned int;
// 1AD0594A0: using guessed type unsigned int;

//----- (0000000140095800) ----------------------------------------------------
unsigned __int64            sub_140095800(_BYTE *a1, __int64 a2, unsigned __int64 a3, FILE *a4)
{
  _BYTE *v6; // rsi
  int i; // ebx
  int v8; // ebx
  _BYTE *v9; // r14
  char v10; // al
  int v11; // ecx
  int v12; // ebx
  _BYTE *v13; // r14
  char v14; // al
  int v15; // ecx

  v6 = a1;
  switch ( a2 )
  {
    case 1LL:
      for ( i = 0; i < a3; ++v6 )
      {
        ++i;
        *v6 = sub_14020BB2C(a4);
      }
      break;
    case 2LL:
      v8 = 0;
      if ( a3 )
      {
        v9 = a1 + 1;
        do
        {
          *v9 = sub_14020BB2C(a4);
          v10 = sub_14020BB2C(a4);
          v11 = 2 * v8++;
          v9 += 2;
          v6[v11] = v10;
        }
        while ( v8 < a3 );
      }
      break;
    case 4LL:
      v12 = 0;
      if ( a3 )
      {
        v13 = a1 + 2;
        do
        {
          v13[1] = sub_14020BB2C(a4);
          *v13 = sub_14020BB2C(a4);
          *(v13 - 1) = sub_14020BB2C(a4);
          v14 = sub_14020BB2C(a4);
          v15 = 4 * v12++;
          v13 += 4;
          v6[v15] = v14;
        }
        while ( v12 < a3 );
      }
      break;
  }
  return a3;
}

// 14020BB2C: using guessed type __int64 __fastcall sub_14020BB2C(FILE *Stream);

//----- (0000000140095910) ----------------------------------------------------
void sub_140095910()
{
  char *v0; // rcx
  int v1; // ebx
  __int64 v2; // rdi

  v0 = *(char **)&dword_140404A6C[18215121];
  if ( *(_QWORD *)&dword_140404A6C[18215121] )
  {
    v1 = 0;
    if ( (int)dword_140404A6C[18215119] > 0 )
    {
      v2 = 0;
      do
      {
        free(*(void **)&v0[v2]);
        v0 = *(char **)&dword_140404A6C[18215121];
        v2 += 8;
        ++v1;
      }
      while ( v1 < (int)dword_140404A6C[18215119] );
    }
    free(v0);
    *(_QWORD *)&dword_140404A6C[18215121] = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400959E0) ----------------------------------------------------
unsigned __int64            sub_1400959E0(char *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char *v6; // rsi
  int i; // ebx
  int v8; // ebx
  char *v9; // r14
  int v10; // ebx
  char *v11; // r14

  v6 = a1;
  switch ( a2 )
  {
    case 1LL:
      for ( i = 0; i < a3; ++v6 )
      {
        sub_14020BCA8(*v6, a4);
        ++i;
      }
      break;
    case 2LL:
      v8 = 0;
      if ( a3 )
      {
        v9 = a1 + 1;
        do
        {
          sub_14020BCA8(*v9, a4);
          sub_14020BCA8(v6[2 * v8++], a4);
          v9 += 2;
        }
        while ( v8 < a3 );
      }
      break;
    case 4LL:
      v10 = 0;
      if ( a3 )
      {
        v11 = a1 + 2;
        do
        {
          sub_14020BCA8(v11[1], a4);
          sub_14020BCA8(*v11, a4);
          sub_14020BCA8(*(v11 - 1), a4);
          sub_14020BCA8(v6[4 * v10++], a4);
          v11 += 4;
        }
        while ( v10 < a3 );
      }
      break;
  }
  return a3;
}


//----- (0000000140095B00) ----------------------------------------------------
__int64 sub_140095B00()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int *v2; // rax
  __int64 v3; // r8
  int v4; // edi
  __int64 v5; // rbx
  unsigned int *v6; // rdx
  char v7; // al
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // ecx
  char v11; // al
  int v12; // eax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // eax
  bool v16; // cc
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 result; // rax

  *(_QWORD *)&dword_140404A6C[284024381] = 0x4280000044BC8000LL;
  dword_140404A6C[284024383] = 1153368064;
  dword_140404A6C[284024534] = 1065353216;
  *(_OWORD *)&dword_140404A6C[284024526] = xmmword_140278D30;
  dword_140404A6C[283831478] = 1;
  *(_OWORD *)&dword_140404A6C[284024530] = xmmword_140278D30;
  dword_140404A6C[284021982] = -1;
  dword_140404A6C[283785910] = 1;
  dword_140404A6C[346706173] = 0;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[346696445]), 0, 0x9800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[282487105]), 0, 0x4184u);
  v0 = (__int64)&dword_140404A6C[421781437];
  v1 = (__int64)&dword_140404A6C[71856362];
  v2 = &dword_140404A6C[421783997];
  v3 = 16;
  do
  {
    *(_QWORD *)v2 = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 + 1) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 + 2) = 0xFFFFFFFEFFFFFFFEuLL;
    v2 += 16;
    *((_QWORD *)v2 - 5) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 - 4) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 - 3) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 - 2) = 0xFFFFFFFEFFFFFFFEuLL;
    *((_QWORD *)v2 - 1) = 0xFFFFFFFEFFFFFFFEuLL;
    --v3;
  }
  while ( v3 );
  do
  {
    *(_DWORD *)(v1 - 436) = 0;
    *(_QWORD *)v1 = 0;
    v1 += 14388;
    *(_DWORD *)v0 = -2;
    v0 += 20;
  }
  while ( v1 < (__int64)&dword_140404A6C[72777194] );
  if ( dword_140404A6C[456202453] )
  {
    if ( dword_140404A6C[283831312] == 3 )
      dword_140404A6C[283831441] = dword_140404A6C[284022482] != 0;
    sub_140050C80(&dword_140404A6C[284024493], &dword_140404A6C[284024494], dword_140404A6C[284023066]);
    v4 = sub_14005CCF0();
    v5 = 3597LL * v4;
    v6 = &dword_140404A6C[73991096];
    do
    {
      v7 = *(_BYTE *)v6;
      *((_BYTE *)v6 + (_QWORD)&dword_140404A6C[71856254] + 14388LL * v4 - (_QWORD)&dword_140404A6C[73991096]) = *(_BYTE *)v6;
      v6 = (unsigned int *)((char *)v6 + 1);
    }
    while ( v7 );
    dword_140404A6C[v5 + 71859816] = dword_140404A6C[73991647];
    dword_140404A6C[v5 + 71859825] = dword_140404A6C[73991648];
    dword_140404A6C[v5 + 71859817] = dword_140404A6C[73991649];
    dword_140404A6C[v5 + 71859818] = dword_140404A6C[73991650];
    dword_140404A6C[v5 + 71859819] = dword_140404A6C[73991651];
    dword_140404A6C[v5 + 71859820] = dword_140404A6C[73991652];
    sub_140091E60(v4);
    v8 = dword_140404A6C[283831312] - 2;
    dword_140404A6C[v5 + 71856266] = 1;
    if ( v8 <= 5 )
    {
      v9 = 0;
      v10 = dword_140404A6C[134050334];
      *(_QWORD *)&dword_140404A6C[456202737] = *(_QWORD *)&dword_140404A6C[278384727];
      dword_140404A6C[456202736] = dword_140404A6C[134050337];
      dword_140404A6C[456202733] = 1;
      dword_140404A6C[456202735] = dword_140404A6C[134050334];
      dword_140404A6C[456202739] = 1234;
      do
      {
        v11 = *((_BYTE *)&dword_140404A6C[73991096] + v9);
        *((_BYTE *)&dword_140404A6C[456202740] + v9++) = v11;
      }
      while ( v11 );
      dword_140404A6C[v5 + 71856262] = dword_140404A6C[284024493];
      dword_140404A6C[v5 + 71856263] = dword_140404A6C[284024494];
      v12 = sub_14004D750(v10, 1234);
      dword_140404A6C[v5 + 71856268] = v12;
      if ( v12 < 0 )
      {
        v12 = 0;
        dword_140404A6C[v5 + 71856268] = 0;
      }
      v0 = dword_140404A6C[283831312];
      v1 = 112LL * (unsigned int)v12;
      v13 = *(_OWORD *)((char *)&dword_140404A6C[134050365] + v1);
      dword_140404A6C[v5 + 71856264] = *(unsigned int *)((char *)&dword_140404A6C[134050361] + v1);
      v14 = *(_OWORD *)((char *)&dword_140404A6C[134050369] + v1);
      dword_140404A6C[v5 + 71856265] = *(unsigned int *)((char *)&dword_140404A6C[134050362] + v1);
      v15 = dword_140404A6C[134050358];
      v16 = (signed int)dword_140404A6C[134050358] < 1;
      *(_OWORD *)&dword_140404A6C[v5 + 71856254] = v13;
      if ( v16 )
        v15 = 1;
      dword_140404A6C[134050358] = v15;
      *(_OWORD *)&dword_140404A6C[v5 + 71856258] = v14;
      if ( v4 != -1 && (unsigned int)(v0 - 3) <= 1 )
      {
        dword_140404A6C[v5 + 71856272] = *(unsigned int *)((char *)&dword_140404A6C[134050374] + v1);
        v17 = *(unsigned int *)((char *)&dword_140404A6C[134050375] + v1);
        if ( v17 < 0 )
        {
          v17 = 0;
          *(unsigned int *)((char *)&dword_140404A6C[134050375] + v1) = 0;
        }
        dword_140404A6C[v5 + 71856275] = v17;
        dword_140404A6C[v5 + 71856276] = *(unsigned int *)((char *)&dword_140404A6C[134050376] + v1);
        dword_140404A6C[v5 + 71856291] = *(unsigned int *)((char *)&dword_140404A6C[134050377] + v1);
      }
      if ( (int)dword_140404A6C[v5 + 71856272] < 1000 )
        dword_140404A6C[v5 + 71856272] = 1000;
      if ( (_DWORD)v0 == 7 )
      {
        v18 = dword_140404A6C[284022500];
      }
      else
      {
        if ( (_DWORD)v0 != 3 || dword_140404A6C[283831441] != 1 )
          goto LABEL_29;
        v18 = dword_140404A6C[284022481];
      }
      dword_140404A6C[v5 + 71856272] = v18;
LABEL_29:
      dword_140404A6C[v5 + 71856286] = 17;
    }
  }
  if ( dword_140404A6C[19065870] )
  {
    dword_140404A6C[19065873] = 0;
    sub_140127300();
  }
  dword_140404A6C[19065878] = 1;
  sr_ResetGame(v1, v0, v3);
  dword_140404A6C[283831444] = 0;
  *(float *)&dword_140404A6C[284024388] = *(float *)&dword_140404A6C[179992855] + 32.0;
  dword_140404A6C[284024390] = dword_140404A6C[179992857];
  *(float *)&dword_140404A6C[284024389] = *(float *)&dword_140404A6C[179992856] + 16.0;
  dword_140404A6C[283831311] = 0;
  dword_140404A6C[280649838] = 0;
  dword_140404A6C[284024392] = 0;
  dword_140404A6C[284024391] = -1077342245;
  dword_140404A6C[280649842] = -1;
  if ( dword_140404A6C[284024501] != -1
    && dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292] == -1
    && (dword_140404A6C[283831448] == 1 || dword_140404A6C[283831312] == 4) )
  {
    dword_140404A6C[280649838] = 1;
  }
  result = sub_140198F0B(1, v19, v20);
  dword_140404A6C[283831484] = 1;
  dword_140404A6C[283831309] = 1;
  return result;
}

// 140095EDE: variable 'v1' is possibly undefined
// 140095EDE: variable 'v0' is possibly undefined
// 140095EDE: variable 'v3' is possibly undefined
// 140095F98: variable 'v19' is possibly undefined
// 140095F98: variable 'v20' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAB0: using guessed type unsigned int;
// 144CBFAC4: using guessed type unsigned int;
// 151E461E8: using guessed type unsigned int;
// 151E461EC: using guessed type unsigned int;
// 151E461F0: using guessed type unsigned int;
// 151E461F4: using guessed type unsigned int;
// 151E461F8: using guessed type unsigned int;
// 151E461FC: using guessed type unsigned int;
// 1603612E4: using guessed type unsigned int;
// 1603612F0: using guessed type unsigned int;
// 160361344: using guessed type unsigned int;
// 16B2A2ED0: using guessed type unsigned int;
// 1829F8BC8: using guessed type unsigned int;
// 18329CC24: using guessed type unsigned int;
// 18329CC34: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;
// 183EBFAA0: using guessed type unsigned int;
// 183EBFAA8: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCBC: using guessed type unsigned int;
// 183EBFD44: using guessed type unsigned int;
// 183EBFD5C: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F7A5B0: using guessed type unsigned int;
// 183F7A5FC: using guessed type unsigned int;
// 183F7C360: using guessed type __int64[];
// 183F7C368: using guessed type int[];
// 183F7C384: using guessed type unsigned int;
// 183F7C388: using guessed type unsigned int;
// 183F7C38C: using guessed type unsigned int;
// 183F7C520: using guessed type unsigned int;
// 183F7C524: using guessed type unsigned int;
// 183F7C5A4: using guessed type unsigned int;
// 183F7C5B4: using guessed type unsigned int;
// 183F7C5C4: using guessed type unsigned int;
// 192E98E60: using guessed type unsigned int;
// 1AD04B220: using guessed type unsigned int;
// 1AD04B228: using guessed type unsigned int;
// 1AD04B22C: using guessed type unsigned int;
// 1AD04B230: using guessed type unsigned int;
// 1AD04B238: using guessed type unsigned int;

//----- (0000000140095FC0) ----------------------------------------------------
void            sub_140095FC0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int *v4; // rdi
  unsigned int *v5; // rax
  unsigned int *v6; // rax

  if ( dword_140404A6C[283831309] )
  {
    dword_140404A6C[283831309] = 0;
    *(_QWORD *)&dword_140404A6C[456202717] = 0;
    dword_140404A6C[283831484] = 0;
    sub_140198F0B(0, a2, a3);
    if ( dword_140404A6C[456202453] )
    {
      v3 = 0;
      v4 = &dword_140404A6C[71856253];
      do
      {
        if ( *v4 )
          sub_1400802F0(v3);
        ++v3;
        v4 += 3597;
      }
      while ( v3 < 256 );
    }
    else if ( !dword_140404A6C[19065870] )
    {
      dword_140404A6C[289301094] = dword_1402B2658;
      *(_QWORD *)&dword_140404A6C[289301092] = 5;
      LOBYTE(dword_140404A6C[289301095]) = 7;
      sub_140130350(dword_140404A6C[456202714], dword_140404A6C[456202715], *(__int64 *)&dword_140404A6C[456202717]);
    }
    v5 = &dword_140404A6C[129716709];
    do
    {
      *v5 = 0;
      v5 += 5210;
    }
    while ( (__int64)v5 < (__int64)&dword_140404A6C[132384229] );
    v6 = &dword_140404A6C[606418];
    do
    {
      if ( *(v6 - 278721) && !*(v6 - 278720) )
        *(v6 - 278720) = 1;
      if ( *(v6 - 1) && !*v6 )
        *v6 = 1;
      if ( v6[278719] && !v6[278720] )
        v6[278720] = 1;
      if ( v6[557439] && !v6[557440] )
        v6[557440] = 1;
      if ( v6[836159] && !v6[836160] )
        v6[836160] = 1;
      if ( v6[1114879] && !v6[1114880] )
        v6[1114880] = 1;
      if ( v6[1393599] && !v6[1393600] )
        v6[1393600] = 1;
      if ( v6[1672319] && !v6[1672320] )
        v6[1672320] = 1;
      if ( v6[1951039] && !v6[1951040] )
        v6[1951040] = 1;
      if ( v6[2229759] && !v6[2229760] )
        v6[2229760] = 1;
      if ( v6[2508479] && !v6[2508480] )
        v6[2508480] = 1;
      if ( v6[2787199] && !v6[2787200] )
        v6[2787200] = 1;
      if ( v6[3065919] && !v6[3065920] )
        v6[3065920] = 1;
      if ( v6[3344639] && !v6[3344640] )
        v6[3344640] = 1;
      if ( v6[3623359] && !v6[3623360] )
        v6[3623360] = 1;
      if ( v6[3902079] && !v6[3902080] )
        v6[3902080] = 1;
      if ( v6[4180799] && !v6[4180800] )
        v6[4180800] = 1;
      if ( v6[4459519] && !v6[4459520] )
        v6[4459520] = 1;
      if ( v6[4738239] && !v6[4738240] )
        v6[4738240] = 1;
      if ( v6[5016959] && !v6[5016960] )
        v6[5016960] = 1;
      if ( v6[5295679] && !v6[5295680] )
        v6[5295680] = 1;
      if ( v6[5574399] && !v6[5574400] )
        v6[5574400] = 1;
      if ( v6[5853119] && !v6[5853120] )
        v6[5853120] = 1;
      if ( v6[6131839] && !v6[6131840] )
        v6[6131840] = 1;
      if ( v6[6410559] && !v6[6410560] )
        v6[6410560] = 1;
      if ( v6[6689279] && !v6[6689280] )
        v6[6689280] = 1;
      if ( v6[6967999] && !v6[6968000] )
        v6[6968000] = 1;
      if ( v6[7246719] && !v6[7246720] )
        v6[7246720] = 1;
      if ( v6[7525439] && !v6[7525440] )
        v6[7525440] = 1;
      if ( v6[7804159] && !v6[7804160] )
        v6[7804160] = 1;
      if ( v6[8082879] && !v6[8082880] )
        v6[8082880] = 1;
      if ( v6[8361599] )
      {
        if ( !v6[8361600] )
          v6[8361600] = 1;
      }
      v6 += 8919040;
    }
    while ( (__int64)v6 < (__int64)&dword_140404A6C[18444498] );
  }
}

// 14009701D: conditional instruction was optimized away because ecx.4<1
// 140096515: variable 'v2' is possibly undefined
// 140096515: variable 'v1' is possibly undefined
// 140096515: variable 'v3' is possibly undefined
// 140096515: variable 'v4' is possibly undefined
// 14009659A: variable 'v6' is possibly undefined
// 14009659A: variable 'v5' is possibly undefined
// 140096655: variable 'v8' is possibly undefined
// 140096655: variable 'v7' is possibly undefined
// 140096655: variable 'v9' is possibly undefined
// 140096655: variable 'v10' is possibly undefined
// 140096D75: variable 'v25' is possibly undefined
// 140097FA7: variable 'v123' is possibly undefined
// 140097FA7: variable 'v122' is possibly undefined
// 140097FA7: variable 'v124' is possibly undefined
// 140097FA7: variable 'v125' is possibly undefined
// 140098203: variable 'v132' is possibly undefined
// 140098621: variable 'v147' is possibly undefined
// 140098621: variable 'v148' is possibly undefined
// 14009864A: variable 'v153' is possibly undefined
// 14009864A: variable 'v152' is possibly undefined
// 14009864A: variable 'v154' is possibly undefined
// 14009865B: variable 'v155' is possibly undefined
// 140098D31: variable 'v169' is possibly undefined
// 140098D50: variable 'v170' is possibly undefined
// 140098D85: variable 'v172' is possibly undefined
// 140098DA4: variable 'v173' is possibly undefined
// 140098DF5: variable 'v175' is possibly undefined
// 140098E14: variable 'v176' is possibly undefined
// 140098E6D: variable 'v179' is possibly undefined
// 140098E8D: variable 'v180' is possibly undefined
// 140098EC1: variable 'v183' is possibly undefined
// 140098EC1: variable 'v182' is possibly undefined
// 140098EC1: variable 'v184' is possibly undefined
// 140098EC1: variable 'v185' is possibly undefined
// 140099037: variable 'v18' is possibly undefined
// 140099037: variable 'v17' is possibly undefined
// 140099037: variable 'v19' is possibly undefined
// 140198FD7: using guessed type __int64 __fastcall closesocket(_QWORD);
// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279150: using guessed type __int128 xmmword_140279150;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279690: using guessed type __int128 xmmword_140279690;
// 140279700: using guessed type __int128 xmmword_140279700;
// 140279710: using guessed type __int128 xmmword_140279710;
// 140279810: using guessed type __int128 xmmword_140279810;
// 1402799B0: using guessed type __int128 xmmword_1402799B0;
// 1402B231C: using guessed type int dword_1402B231C;
// 1402B23DC: using guessed type int dword_1402B23DC;
// 1402B2810: using guessed type char (*off_1402B2810)[7];
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404740: using guessed type __int64 (__fastcall *unk_140404740)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144CBFAA4: using guessed type unsigned int;
// 144CBFAC4: using guessed type unsigned int;
// 150F610D4: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F0: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 151E461DC: using guessed type unsigned int;
// 1602E12E0: using guessed type unsigned int;
// 160FC47D8: using guessed type unsigned int;
// 160FC47E8: using guessed type unsigned int;
// 160FC47EC: using guessed type unsigned int;
// 160FC4820: using guessed type unsigned int;
// 16B15FF2C: using guessed type unsigned int;
// 16B15FF3C: using guessed type unsigned int;
// 16B27DF88: using guessed type unsigned int;
// 16B27E08C: using guessed type unsigned int;
// 16B27E090: using guessed type unsigned int;
// 16E486848: using guessed type unsigned int;
// 16E486864: using guessed type unsigned int;
// 16E486868: using guessed type unsigned int;
// 16E48686C: using guessed type unsigned int;
// 175FD13A0: using guessed type unsigned int;
// 175FD13B0: using guessed type unsigned int;
// 175FD13C0: using guessed type unsigned int;
// 175FD13D0: using guessed type unsigned int;
// 175FD13E0: using guessed type unsigned int;
// 175FD13E4: using guessed type unsigned int;
// 182A7D55C: using guessed type unsigned int;
// 182A7D560: using guessed type unsigned int;
// 18329C1E4: using guessed type unsigned int;
// 183E93540: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;
// 183E93548: using guessed type unsigned int;
// 183E9354C: using guessed type unsigned int;
// 183EBFAA0: using guessed type unsigned int;
// 183EBFAA4: using guessed type unsigned int;
// 183EBFAA8: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCC8: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F79DE8: using guessed type unsigned int;
// 183F7AEDC: using guessed type unsigned int;
// 183F7C360: using guessed type __int64[];
// 183F7C368: using guessed type int[];
// 183F7C37C: using guessed type unsigned int;
// 183F7C380: using guessed type unsigned int;
// 183F7C384: using guessed type unsigned int;
// 183F7C540: using guessed type unsigned int;
// 183F7C544: using guessed type unsigned int;
// 183F7C548: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 183F7C550: using guessed type unsigned int;
// 183F7C554: using guessed type unsigned int;
// 183F7C558: using guessed type unsigned int;
// 183F7C55C: using guessed type unsigned int;
// 183F7C560: using guessed type unsigned int;
// 183F7C564: using guessed type unsigned int;
// 183F7C568: using guessed type unsigned int;
// 183F7C56C: using guessed type unsigned int;
// 183F7C570: using guessed type unsigned int;
// 183F7C574: using guessed type unsigned int;
// 183F7C578: using guessed type unsigned int;
// 183F7C57C: using guessed type unsigned int;
// 183F7C580: using guessed type unsigned int;
// 183F7C5A4: using guessed type unsigned int;
// 183F7C5A8: using guessed type unsigned int;
// 183F7C5AC: using guessed type unsigned int;
// 183F7C5B0: using guessed type unsigned int;
// 183F7C5B4: using guessed type unsigned int;
// 183F7C5B8: using guessed type unsigned int;
// 183F7C5C0: using guessed type unsigned int;
// 183F7CB80: using guessed type unsigned int;
// 18402CC00: using guessed type unsigned int;
// 18539D3A0: using guessed type unsigned int;
// 18539D3A8: using guessed type unsigned int;
// 1A4D2DD04: using guessed type unsigned int;
// 1A6F9E138: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1ABC2D9DC: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04B1D4: using guessed type unsigned int;
// 1AD04B1E0: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (00000001400990A0) ----------------------------------------------------
double            sub_1400990A0(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // ebp
  int v8; // esi
  signed int v10; // edx
  __int64 v11; // r14
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  int v14; // ecx
  int v15; // edx
  int v16; // r8d
  bool v17; // cc
  unsigned int v18; // eax
  bool v19; // cc
  unsigned int v20; // edi
  int v21; // ecx
  __int64 v22; // r12
  unsigned int v23; // r13d
  unsigned int v24; // edi
  unsigned int v25; // esi
  unsigned int v26; // r15d
  signed int v27; // eax
  int v28; // r14d
  unsigned int v29; // r15d
  int v30; // edi
  int v31; // ebp
  float v32; // xmm8_4
  float v33; // xmm7_4
  int v34; // esi
  int v35; // ecx
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  int v42; // ecx
  int v43; // eax

  v7 = dword_140404A6C[293250409];
  v8 = 128;
  v10 = 128;
  v11 = a1;
  dword_140404A6C[468765293] = 128;
  v12 = -117;
  dword_140404A6C[468765294] = 128;
  do
  {
    if ( v8 <= 0 )
      goto LABEL_49;
    v13 = -5;
    do
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      if ( (unsigned int)(a2 - 1) <= 1 || (unsigned int)(a2 - 6) <= 1 )
      {
        v14 = 255;
        v15 = 32;
        switch ( a2 )
        {
          case 1:
            if ( v12 + 112 <= 5 )
              v16 = 255;
            goto LABEL_44;
          case 2:
            if ( v12 <= 5 )
              v16 = 255;
            goto LABEL_44;
          case 6:
            if ( v13 <= 5 )
              v16 = 255;
            goto LABEL_44;
        }
      }
      if ( a2 == 7 )
      {
        if ( v13 - 112 <= 5 )
          v16 = 255;
        goto LABEL_44;
      }
      if ( (unsigned int)(a2 - 4) <= 1 || (unsigned int)(a2 - 9) <= 1 )
      {
        v14 = 255;
        v15 = 255;
        switch ( a2 )
        {
          case 4:
            v17 = v12 + 112 <= 5;
LABEL_22:
            if ( !v17 )
              goto LABEL_44;
            v18 = v13 - 27;
LABEL_24:
            v19 = v18 <= 0x3F;
LABEL_25:
            if ( v19 )
              v16 = 255;
            goto LABEL_44;
          case 5:
            v17 = v12 <= 5;
            goto LABEL_22;
          case 9:
            if ( v13 > 5 )
              goto LABEL_44;
            v18 = v12 + 85;
            goto LABEL_24;
        }
      }
      switch ( a2 )
      {
        case 10:
          if ( v13 - 112 > 5 )
            break;
          v18 = v12 + 85;
          goto LABEL_24;
        case 3:
          v16 = 255;
          v14 = 255;
          v15 = 255;
          if ( v12 + 101 > 0xF )
            v16 = 0;
          v19 = v12 + 21 <= 0xF;
          goto LABEL_25;
        case 8:
          v16 = 255;
          v14 = 255;
          v15 = 255;
          if ( v13 - 11 > 0xF )
            v16 = 0;
          if ( v13 - 91 <= 0xF )
            v16 = 255;
          break;
      }
LABEL_44:
      v20 = v13 + 5;
      if ( v7 )
        v21 = v16 + (v15 << 8) + 16842752 * v14;
      else
        v21 = (v16 << 24) + v14 + (v15 << 16) + (v14 << 8);
      ++v13;
      dword_140404A6C[v20 + v8 * (v12 + 117) + 468765295] = v21;
      v8 = dword_140404A6C[468765293];
    }
    while ( (int)(v13 + 5) < (int)dword_140404A6C[468765293] );
    v10 = dword_140404A6C[468765294];
LABEL_49:
    ++v12;
  }
  while ( (int)(v12 + 117) < v10 );
  v22 = 2 * v11;
  qword_140404050(35866, dword_140404A6C[44 * dword_140404A6C[4 * v11 + 283827816] + 284024944]);
  v23 = a7;
  v24 = 9728;
  v25 = a5;
  v26 = a4;
  if ( !a2 )
  {
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10242, a4);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10243, a5);
    (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(35866, 10240, 9728);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10241, a7);
    unk_140404078(35866, 0, 6408, dword_140404A6C[468765293], dword_140404A6C[468765294], 11, 0, 6408, 5121, 0);
  }
  unk_140404080(
    35866,
    0,
    0,
    0,
    a2,
    dword_140404A6C[468765293],
    dword_140404A6C[468765294],
    1,
    6408,
    5121,
    &dword_140404A6C[468765295]);
  unk_140404738(35866);
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215073])(35866, 34046);
  v27 = dword_140404A6C[468765294];
  v28 = 0;
  if ( (int)dword_140404A6C[468765294] > 0 )
  {
    v29 = dword_140404A6C[293250409];
    v30 = dword_140404A6C[468765293];
    do
    {
      v31 = 0;
      if ( v30 > 0 )
      {
        v32 = (float)v28;
        v33 = (float)v28;
        do
        {
          v34 = 0;
          v35 = 0;
          if ( a2 == 1 || a2 == 2 )
          {
            v36 = (float)v31;
            v34 = 128;
            v37 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v31, v32, 1023), f32)[0];
            v33 = (float)v28;
            v35 = (int)(float)((float)(v37 + v37) + 130.0);
          }
          else
          {
            v36 = (float)v31;
          }
          if ( (unsigned int)(a2 - 6) <= 1 )
          {
            v34 = 128;
            v38 = SR_VEC_READ_LANES(128, sub_1400384F0(v36, v32, 1023), f32)[0];
            v35 = (int)(float)((float)(v38 + v38) + 130.0);
          }
          if ( (unsigned int)(a2 - 4) <= 1 )
          {
            v34 = 128;
            v39 = SR_VEC_READ_LANES(128, sub_1400384F0(v36, v33, 1023), f32)[0];
            v35 = (int)(float)((float)(v39 + v39) + 130.0);
          }
          if ( (unsigned int)(a2 - 9) <= 1 )
          {
            v34 = 128;
            v40 = SR_VEC_READ_LANES(128, sub_1400384F0(v36, v33, 1023), f32)[0];
            v35 = (int)(float)((float)(v40 + v40) + 130.0);
          }
          if ( a2 == 3 || a2 == 8 )
          {
            v34 = 128;
            v41 = SR_VEC_READ_LANES(128, sub_1400384F0(v36, v33, 1023), f32)[0];
            v35 = (int)(float)((float)(v41 + v41) + 130.0);
          }
          else
          {
            v33 = (float)v28;
          }
          if ( v29 )
          {
            v42 = v35 << 16;
            v34 <<= 24;
          }
          else
          {
            v42 = v35 << 8;
          }
          v43 = v28 * v30 + v31++;
          dword_140404A6C[v43 + 468765295] = v34 + v42;
          v30 = dword_140404A6C[468765293];
        }
        while ( v31 < (int)dword_140404A6C[468765293] );
        v27 = dword_140404A6C[468765294];
      }
      ++v28;
    }
    while ( v28 < v27 );
    v23 = a7;
    v24 = a6;
    v25 = a5;
    v26 = a4;
  }
  qword_140404050(35866, dword_140404A6C[44 * dword_140404A6C[2 * v22 + 283827817] + 284024944]);
  if ( !a2 )
  {
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10242, v26);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10243, v25);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10240, v24);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10241, v23);
    unk_140404078(35866, 0, 6408, dword_140404A6C[468765293], dword_140404A6C[468765294], 11, 0, 6408, 5121, 0);
  }
  unk_140404080(
    35866,
    0,
    0,
    0,
    a2,
    dword_140404A6C[468765293],
    dword_140404A6C[468765294],
    1,
    6408,
    5121,
    &dword_140404A6C[468765295]);
  unk_140404738(35866);
  return (*(double (           **)(__int64, __int64))&dword_140404A6C[18215073])(35866, 34046);
}

// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404078: using guessed type double (__fastcall *unk_140404078)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404080: using guessed type __int64 (__fastcall *unk_140404080)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (0000000140099730) ----------------------------------------------------
double            sub_140099730(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // r13
  int v8; // r12d
  int v9; // r15d
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // rcx
  unsigned int v13; // r12d
  int i; // esi
  int v15; // edi
  int v16; // r15d
  int v17; // ebp
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  float v21; // xmm10_4
  float v22; // xmm9_4
  float v23; // xmm8_4
  float v24; // xmm0_4
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  signed int v32; // r10d
  signed int j; // r9d
  __int64 v34; // r8
  signed int v35; // eax
  double result; // xmm0_8
  signed int v37; // r10d
  signed int v38; // r8d
  __int64 v39; // rdi
  int v40; // ecx
  unsigned int v41; // r9d
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  signed int v46; // r10d
  signed int k; // r9d
  __int64 v48; // r8
  signed int v49; // eax
  int v50; // [rsp+140h] [rbp+8h]

  v7 = 2LL * a1;
  v8 = a2;
  v9 = dword_140404A6C[4 * a1 + 283827814];
  v50 = v9;
  if ( a1 == 1 )
  {
    v12 = 44LL * (int)dword_140404A6C[283827818];
    v10 = dword_140404A6C[v12 + 284024933];
    v11 = dword_140404A6C[v12 + 284024934];
    dword_140404A6C[468765293] = v10;
    dword_140404A6C[468765294] = v11;
    if ( v11 <= 0 )
      goto LABEL_17;
  }
  else
  {
    v10 = 128;
    dword_140404A6C[468765293] = 128;
    v11 = 128;
    dword_140404A6C[468765294] = 128;
  }
  v13 = dword_140404A6C[293250409];
  for ( i = 0; i < v11; ++i )
  {
    v15 = 0;
    if ( v10 > 0 )
    {
      v16 = 16;
      v17 = 16;
      if ( a1 != 2 )
      {
        v16 = 0;
        v17 = 255;
      }
      do
      {
        v18 = v17;
        v19 = v17;
        v20 = v16;
        if ( !a1 )
        {
          v21 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v15 * 0.5, (float)i * 0.25, 31), f32)[0];
          v22 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v15 * 0.25, (float)i * 0.125, 15), f32)[0];
          v23 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v15, (float)i * 0.5, 63), f32)[0];
          v24 = SR_VEC_READ_LANES(128, sub_1400384F0((float)((float)v15 + (float)v15) + 1235.0, (float)i + 123.0, 127), f32)[0];
          v19 = (int)(float)((float)((float)((float)(v21 + v22) + (float)(v23 + v24)) * 1.75) + 167.0);
          v18 = (int)(float)((float)((float)((float)(v24 + v24) + v23) + (float)(v22 + v23))
                           + (float)((float)(v21 + v21) + (float)(v22 + 168.0)));
          v20 = v18;
        }
        if ( v13 )
        {
          v27 = (v18 << 24) + 32;
          v25 = v20 << 16;
          v26 = v19 << 8;
        }
        else
        {
          v25 = v20 << 8;
          v26 = v19 << 16;
          v27 = v18 + 0x20000000;
        }
        v28 = v25 + v27 + v26;
        v29 = v15 + i * v10;
        ++v15;
        dword_140404A6C[v29 + 468765295] = v28;
        v10 = dword_140404A6C[468765293];
      }
      while ( v15 < (int)dword_140404A6C[468765293] );
      v11 = dword_140404A6C[468765294];
    }
  }
  v9 = v50;
  v8 = a2;
LABEL_17:
  v30 = 44LL * v9;
  dword_140404A6C[v30 + 284024933] = v10;
  dword_140404A6C[v30 + 284024938] = a3;
  dword_140404A6C[v30 + 284024939] = a4;
  dword_140404A6C[v30 + 284024934] = v11;
  dword_140404A6C[v30 + 284024935] = 1;
  dword_140404A6C[v30 + 284024936] = 6408;
  dword_140404A6C[v30 + 284024937] = 6408;
  dword_140404A6C[v30 + 284024943] = 0;
  dword_140404A6C[v30 + 284024940] = a5;
  dword_140404A6C[v30 + 284024941] = a6;
  free(*(void **)&dword_140404A6C[v30 + 284024945]);
  v31 = sr_path_malloc((int)(4 * dword_140404A6C[v30 + 284024933] * dword_140404A6C[v30 + 284024934]));
  v32 = 0;
  for ( *(_QWORD *)&dword_140404A6C[v30 + 284024945] = v31; v32 < (int)dword_140404A6C[v30 + 284024934]; ++v32 )
  {
    for ( j = 0;
          j < (int)dword_140404A6C[v30 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v30 + 284024945] + 4LL * v35) = dword_140404A6C[v34 + 468765295] )
    {
      v34 = j + v32 * dword_140404A6C[468765293];
      v35 = j + dword_140404A6C[v30 + 284024933] * v32;
      ++j;
    }
  }
  if ( v8 )
    sub_14009A370(v9);
  sub_14014D3E0(v9, 1);
  result = (*(double (           **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  if ( a1 == 1 )
  {
    v37 = dword_140404A6C[468765294];
    v38 = 0;
    v39 = (int)dword_140404A6C[2 * v7 + 283827815];
    v40 = dword_140404A6C[468765293];
    if ( (int)dword_140404A6C[468765294] > 0 )
    {
      v41 = dword_140404A6C[293250409];
      do
      {
        v42 = 0;
        if ( v40 > 0 )
        {
          do
          {
            v43 = v42 + v38 * v40;
            if ( v41 )
              dword_140404A6C[v43 + 468765295] = -16711904;
            else
              dword_140404A6C[v43 + 468765295] = 553582847;
            v40 = dword_140404A6C[468765293];
            ++v42;
          }
          while ( v42 < (int)dword_140404A6C[468765293] );
          v37 = dword_140404A6C[468765294];
        }
        ++v38;
      }
      while ( v38 < v37 );
    }
    v44 = 44 * v39;
    dword_140404A6C[v44 + 284024938] = a3;
    dword_140404A6C[v44 + 284024939] = a4;
    dword_140404A6C[v44 + 284024933] = v40;
    dword_140404A6C[v44 + 284024934] = v37;
    dword_140404A6C[v44 + 284024935] = 1;
    dword_140404A6C[v44 + 284024936] = 6408;
    dword_140404A6C[v44 + 284024937] = 6408;
    dword_140404A6C[v44 + 284024943] = 0;
    dword_140404A6C[v44 + 284024940] = a5;
    dword_140404A6C[v44 + 284024941] = a6;
    free(*(void **)&dword_140404A6C[44 * v39 + 284024945]);
    v45 = sr_path_malloc((int)(4 * dword_140404A6C[v44 + 284024933] * dword_140404A6C[v44 + 284024934]));
    v46 = 0;
    *(_QWORD *)&dword_140404A6C[v44 + 284024945] = v45;
    if ( (int)dword_140404A6C[44 * v39 + 284024934] > 0 )
    {
      do
      {
        for ( k = 0;
              k < (int)dword_140404A6C[v44 + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v44 + 284024945] + 4LL * v49) = dword_140404A6C[v48 + 468765295] )
        {
          v48 = k + v46 * dword_140404A6C[468765293];
          v49 = k + dword_140404A6C[v44 + 284024933] * v46;
          ++k;
        }
        ++v46;
      }
      while ( v46 < (int)dword_140404A6C[v44 + 284024934] );
    }
    if ( v8 )
      sub_14009A370(v39);
    sub_14014D3E0(v39, 1);
    return (*(double (           **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  }
  else if ( a1 )
  {
    if ( a1 == 2 )
      sub_140138590(dword_140404A6C[2 * v7 + 283827815], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 224, 32, 0, 0);
  }
  else
  {
    sub_140138590(dword_140404A6C[2 * v7 + 283827815], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 96, 192, 0, 0);
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (0000000140099DD0) ----------------------------------------------------
double            sub_140099DD0(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6; // edi
  unsigned int v8; // ebx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // r15
  signed int v12; // eax
  __int64 v13; // r14
  float v14; // xmm3_4
  __int64 v15; // r8
  unsigned int *v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // rax
  double v19; // xmm9_8
  double v20; // xmm11_8
  float v21; // xmm12_4
  __int64 v22; // r8
  __int64 v23; // r8

  v6 = 0;
  v8 = a3;
  v9 = a2;
  v10 = 0;
  v11 = 2LL * a1;
  do
  {
    if ( v10 )
      v12 = dword_140404A6C[2 * v11 + 283827815];
    else
      v12 = dword_140404A6C[2 * v11 + 283827814];
    v13 = 44LL * v12;
    dword_140404A6C[468765293] = 128;
    dword_140404A6C[468765294] = 128;
    qword_140404050(35866, dword_140404A6C[v13 + 284024944]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10242, v8);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10243, a4);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10240, a5);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10241, a6);
    unk_140404078(
      35866,
      0,
      6408,
      dword_140404A6C[468765293],
      dword_140404A6C[468765294],
      dword_140404A6C[421769141],
      0,
      6408,
      5121,
      0);
    unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
    qword_140302FE8(0, 0, dword_140404A6C[468765293], dword_140404A6C[468765294]);
    v14 = (float)(int)dword_140404A6C[468765293];
    dword_140404A6C[431564495] = -1082130432;
    dword_140404A6C[431564496] = 0;
    *(_OWORD *)&dword_140404A6C[431564486] = 0;
    *(_OWORD *)&dword_140404A6C[431564491] = 0;
    *(float *)&dword_140404A6C[431564485] = (float)(1.0 / v14) + (float)(1.0 / v14);
    *(float *)&dword_140404A6C[431564497] = -(float)((float)(1.0 / v14) * v14);
    *(_OWORD *)&dword_140404A6C[431564503] = xmmword_140279490;
    *(float *)&dword_140404A6C[431564490] = (float)(1.0 / (float)(int)dword_140404A6C[468765294])
                                          + (float)(1.0 / (float)(int)dword_140404A6C[468765294]);
    *(_OWORD *)&dword_140404A6C[431564499] = xmmword_140278E70;
    *(_OWORD *)&dword_140404A6C[431564507] = 0;
    *(_OWORD *)&dword_140404A6C[431564511] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564515] = xmmword_140278E60;
    *(float *)&dword_140404A6C[431564498] = -(float)((float)(1.0 / (float)(int)dword_140404A6C[468765294])
                                                   * (float)(int)dword_140404A6C[468765294]);
    *(_OWORD *)&dword_140404A6C[431564519] = xmmword_140279490;
    dword_140404A6C[431564531] = 0;
    dword_140404A6C[431564532] = 1065353216;
    *(_OWORD *)&dword_140404A6C[431564527] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564523] = 0;
    sub_14007A0E0(
      &dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564517],
      (__int64)&dword_140404A6C[431564501]);
    sub_14007A0E0(
      &dword_140404A6C[431564549],
      (__int64)&dword_140404A6C[431564501],
      (__int64)&dword_140404A6C[431564485]);
    sub_14007A0E0(
      &dword_140404A6C[431564565],
      (__int64)&dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564485]);
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
    (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
    (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
    (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,1);
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
    if ( (int)dword_140404A6C[421769141] > 0 )
    {
      v16 = &dword_140404A6C[421769143];
      do
      {
        unk_140404750(36160, 36064, dword_140404A6C[v13 + 284024944], 0, v6);
        if ( v10 )
          v17 = dword_140404A6C[4 * *(v16 - 1) + 283827815];
        else
          v17 = dword_140404A6C[4 * *(v16 - 1) + 283827814];
        v18 = 768LL * (int)v16[1] + 12352LL * (int)*v16;
        *(_QWORD *)&v19 = *(unsigned int *)((char *)&dword_140404A6C[451023990] + v18);
        *(_QWORD *)&v20 = *(unsigned int *)((char *)&dword_140404A6C[451023992] + v18);
        *(float *)&v19 = *(float *)&v19 * 128.0;
        *(float *)&v20 = *(float *)&v20 * 128.0;
        v21 = *(float *)((char *)&dword_140404A6C[451023993] + v18) * 128.0;
        (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,1);
        qword_140404050(3553, dword_140404A6C[44 * v17 + 284024944]);
        sub_14006CFF0(0.0, 0.0, v22, 128.0, 128, 1065353216, 1065353216, 1065353216, 1065353216);
        if ( !v10 )
        {
          (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(0,0,0,1);
          qword_140404050(3553, dword_140404A6C[451221642]);
          sub_14006CFF0(v19, v20, v23, v21, 128, 0, 0, 0, 1065353216);
        }
        ++v6;
        v16 += 3;
      }
      while ( v6 < (int)dword_140404A6C[421769141] );
      v9 = a2;
      v8 = a3;
    }
    LOBYTE(v15) = 1;
    (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
    qword_140404050(35866, dword_140404A6C[v13 + 284024944]);
    if ( v9 )
      unk_140404738(35866);
    (*(void (           **)(__int64, __int64))&dword_140404A6C[18215073])(35866, 34046);
    ++v10;
    v6 = 0;
  }
  while ( v10 < 2 );
  return unk_1404046F0(36160, 0);
}

// 14009A230: variable 'v22' is possibly undefined
// 14009A28B: variable 'v23' is possibly undefined
// 14009A2C5: variable 'v15' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278E60: using guessed type __int128 xmmword_140278E60;
// 140278E70: using guessed type __int128 xmmword_140278E70;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404078: using guessed type double (__fastcall *unk_140404078)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404750: using guessed type __int64 (__fastcall *unk_140404750)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E5A8: using guessed type unsigned int;
// 1A724E5AC: using guessed type unsigned int;
// 1A724E5B8: using guessed type unsigned int;
// 1A724E5C8: using guessed type unsigned int;
// 1A724E5E8: using guessed type unsigned int;
// 1A724E5F8: using guessed type unsigned int;
// 1A724E608: using guessed type unsigned int;
// 1A724E628: using guessed type unsigned int;
// 1A724E638: using guessed type unsigned int;
// 1A724E63C: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009A370) ----------------------------------------------------
__int64            sub_14009A370(int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // r8d
  int *v4; // rbx
  int v5; // ebp
  int v6; // ecx
  int *v7; // rdi
  void **v8; // rsi
  int v9; // r13d
  int v10; // r9d
  int v11; // r15d
  int v12; // r12d
  int v13; // r14d
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // edi
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rdx
  int *v28; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+80h] [rbp+8h]
  void **v30; // [rsp+88h] [rbp+10h]
  unsigned int *v31; // [rsp+98h] [rbp+20h]

  v1 = 44LL * a1;
  result = dword_140404A6C[v1 + 284024936] - 6407;
  if ( (unsigned int)result <= 1 )
  {
    v3 = dword_140404A6C[v1 + 284024933];
    v4 = (int *)&dword_140404A6C[v1 + 284024933];
    v5 = 1;
    v31 = &dword_140404A6C[v1 + 284024933];
    v6 = 1;
    v29 = 1;
    if ( (v3 & 0xFFFFFFFE) != 0 )
    {
      do
        result = (unsigned int)(v3 >> ++v6);
      while ( (_DWORD)result );
      v29 = v6;
    }
    dword_140404A6C[v1 + 284024935] = v6;
    if ( v6 > 1 )
    {
      v7 = (int *)&dword_140404A6C[v1 + 284024934];
      v8 = (void **)&dword_140404A6C[v1 + 284024947];
      v28 = v7;
      v30 = v8;
      do
      {
        free(*v8);
        *v8 = (void *)sr_path_malloc(4 * (*v4 >> v5) * (*v7 >> v5));
        v9 = 0;
        result = (unsigned int)(*v7 >> v5);
        if ( (int)result > 0 )
        {
          v10 = *v4;
          v11 = 0;
          do
          {
            v12 = 0;
            if ( v10 >> v5 > 0 )
            {
              v13 = 0;
              do
              {
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v18 = 0;
                v19 = *(__int64 *)((uintptr_t)v8
                                 + (uintptr_t)&dword_140404A6C[284024933]
                                 - (uintptr_t)&dword_140404A6C[284024947]
                                 + 48);
                do
                {
                  v20 = (v11 + v18++) * (v10 >> (v5 - 1));
                  v21 = v13 + v20;
                  v22 = *(_DWORD *)(v19 + 4 * v21);
                  v23 = (unsigned __int8)v22 + v14;
                  v24 = HIBYTE(v22) + v17;
                  v25 = *(_DWORD *)(v19 + 4 * v21 + 4);
                  v14 = (unsigned __int8)v25 + v23;
                  v15 += BYTE1(v25) + (unsigned __int8)BYTE1(*(_DWORD *)(v19 + 4 * v21));
                  v17 = HIBYTE(v25) + v24;
                  v16 += BYTE2(v25) + (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 4 * v21));
                }
                while ( v18 < 2 );
                v8 = v30;
                v13 += 2;
                v26 = (v16 >> 2) + (v17 >> 2 << 8);
                v4 = (int *)v31;
                v27 = v12 + v9 * (v10 >> v5);
                ++v12;
                *((_DWORD *)*v30 + v27) = (v14 >> 2) + (((v15 >> 2) + (v26 << 8)) << 8);
                v10 = *v31;
              }
              while ( v12 < (int)*v31 >> v5 );
              v7 = v28;
            }
            result = (unsigned int)(*v7 >> v5);
            ++v9;
            v11 += 2;
          }
          while ( v9 < (int)result );
        }
        ++v8;
        ++v5;
        v30 = v8;
      }
      while ( v5 < v29 );
    }
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014009A5F0) ----------------------------------------------------
void            sub_14009A5F0(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6; // r11d
  int v7; // esi
  __int64 v8; // r14
  int v9; // xmm8_4
  int v10; // xmm9_4
  int v11; // xmm10_4
  int v12; // r10d
  unsigned int v13; // r11d
  int v14; // r15d
  signed int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // r9d
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // r9d
  int v23; // edx
  int v24; // r8d
  int v25; // r13d
  int v26; // edi
  int v27; // esi
  int v28; // ebp
  int v29; // ecx
  int v30; // edx
  int v31; // r8d
  int v32; // eax
  float v33; // xmm6_4
  float v34; // xmm0_4
  int v35; // r8d
  signed int v36; // r9d
  int v37; // r8d
  int v38; // r8d
  float v39; // xmm0_4
  bool v40; // cf
  float v41; // xmm0_4
  __int64 v42; // rbx
  __int64 v43; // rax
  signed int v44; // r10d
  signed int i; // r9d
  __int64 v46; // r8
  signed int v47; // eax
  int v48; // [rsp+110h] [rbp+8h]

  v6 = dword_140404A6C[283829878];
  v7 = a2;
  v8 = a1;
  if ( a1 == dword_140404A6C[283829877] )
  {
    v9 = dword_1402B2830[0];
    v10 = dword_1402B2834[0];
    v11 = dword_1402B2838[0];
  }
  else if ( a1 == dword_140404A6C[283829878] )
  {
    v9 = dword_1402B283C;
    v10 = dword_1402B2840;
    v11 = dword_1402B2844;
  }
  else if ( a1 == dword_140404A6C[283829879] )
  {
    v9 = dword_1402B2848;
    v10 = dword_1402B284C;
    v11 = dword_1402B2850;
  }
  else
  {
    v9 = a2;
    v10 = a2;
    v11 = a2;
  }
  if ( a1 == dword_140404A6C[283830649] || a1 == dword_140404A6C[283830650] || a1 == dword_140404A6C[283830651] )
  {
    *(float *)&v9 = *(float *)&dword_1402B2848 * 0.5;
    *(float *)&v10 = *(float *)&dword_1402B284C * 0.5;
    *(float *)&v11 = *(float *)&dword_1402B2850 * 0.5;
  }
  else if ( a1 >= (int)dword_140404A6C[283830652] && a1 <= (int)dword_140404A6C[283830656] )
  {
    *(float *)&v9 = 0.125;
    *(float *)&v11 = 0.375;
    *(float *)&v10 = 0.125;
  }
  v12 = 0;
  if ( a1 != dword_140404A6C[283830649] )
  {
    v21 = dword_140404A6C[283830695];
    v14 = 128;
    v22 = dword_140404A6C[283830690];
    v15 = 128;
    v23 = dword_140404A6C[283830660];
    v24 = dword_140404A6C[283830658];
    dword_140404A6C[468765293] = 128;
    dword_140404A6C[468765294] = 128;
    v48 = 0;
    while ( 1 )
    {
      v25 = 0;
      if ( v14 > 0 )
        break;
LABEL_160:
      v48 = ++v12;
      if ( v12 >= v15 )
      {
        v7 = a2;
        goto LABEL_162;
      }
    }
    while ( 1 )
    {
      v26 = 0;
      v27 = 255;
      v28 = 255;
      v29 = 32;
      if ( (int)v8 < v24 || (int)v8 > v23 )
        goto LABEL_63;
      if ( (unsigned int)(v25 - 40) > 0x2F )
        break;
      if ( (unsigned int)(v12 - 84) <= 0x17 && (_DWORD)v8 == v24 )
      {
        v29 = 255;
LABEL_61:
        v26 = 32;
        goto LABEL_62;
      }
      if ( (unsigned int)(v12 - 52) <= 0x17 && (_DWORD)v8 == dword_140404A6C[283830659] )
      {
        v26 = 255;
        v29 = 255;
      }
      else
      {
        if ( (unsigned int)(v12 - 20) > 0x17 || (_DWORD)v8 != v23 )
          break;
        v27 = 32;
        v26 = 255;
        v29 = 255;
      }
LABEL_62:
      v21 = dword_140404A6C[283830695];
      v28 = 32;
LABEL_63:
      if ( (int)v8 >= v22 && (int)v8 <= v21 )
      {
        if ( (_DWORD)v8 == v22 )
        {
          v27 = 32;
          v26 = 32;
          v28 = 32;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830691] )
        {
          v27 = 32;
          v26 = 80;
          v28 = 32;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830692] )
        {
          v27 = 32;
          v26 = 32;
          v28 = 128;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830693] )
        {
          v27 = 192;
          v26 = 192;
          v28 = 192;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830694] )
        {
          v27 = 247;
          v28 = 25;
          v26 = 181;
        }
        if ( (_DWORD)v8 == v21 )
        {
          v26 = 16;
          v27 = 64;
          v28 = 16;
        }
        v29 = 32;
        if ( v12 >= 88
          && (unsigned int)(v25 - 32) <= 0x3F
          && ((unsigned int)(v12 - 92) > 0x1B || (unsigned int)(v25 - 40) > 0xF) )
        {
          v27 = 96;
          v29 = 192;
          v26 = 96;
          v28 = 96;
        }
      }
      if ( (_DWORD)v8 == dword_140404A6C[283829874] )
      {
        v27 = 16;
        v29 = 32;
        v28 = 16;
        v26 = 64;
      }
      if ( (_DWORD)v8 == dword_140404A6C[283830696] )
      {
        if ( v25 >= 64 )
        {
          v27 = 32;
          v26 = 32;
          v28 = 32;
          v29 = 32;
        }
        else
        {
          v27 = 128;
          v26 = 120;
          v28 = 112;
          v29 = 1;
        }
      }
      if ( (_DWORD)v8 == dword_140404A6C[283830698] )
      {
        if ( v25 >= 64 )
        {
          v27 = 64;
          v29 = 32;
          v26 = 24;
          v28 = 12;
        }
        else
        {
          v27 = 16;
          v29 = 192;
          v26 = 16;
          v28 = 16;
        }
      }
      if ( (_DWORD)v8 == dword_140404A6C[283830699] )
      {
        v27 = 160;
        v28 = 32;
        v29 = 192;
        v26 = 96;
      }
      if ( (_DWORD)v8 == dword_140404A6C[283830689] )
      {
        v30 = 192;
        v31 = 112;
        v32 = 110;
        if ( (float)((float)((float)((float)v12 - 64.0) * (float)((float)v12 - 64.0))
                   + (float)((float)((float)v25 - 64.0) * (float)((float)v25 - 64.0))) >= 2304.0 )
        {
          v32 = 32;
          v30 = 4;
          v31 = 32;
        }
        v26 = v32;
        v27 = v32;
        v28 = v31;
        v29 = v30;
        if ( v12 >= 120 && v12 < 124 && v25 >= 56 && v25 < 72 )
        {
          v28 = 64;
          v29 = 4;
          v26 = 64;
          v27 = 64;
        }
      }
      if ( (_DWORD)v8 == dword_140404A6C[283829875] )
      {
        v29 = 0;
        v27 = 255;
        v26 = 255;
        v28 = 255;
        if ( (float)((float)((float)(64 - v12) * (float)(64 - v12)) + (float)((float)(64 - v25) * (float)(64 - v25))) < 2304.0 )
          v29 = 192;
      }
      if ( (_DWORD)v8 == dword_140404A6C[283829876] )
      {
        v27 = 255;
        v26 = 255;
        v28 = 255;
        v33 = fsqrt((float)((float)(64 - v12) * (float)(64 - v12)) + (float)((float)(64 - v25) * (float)(64 - v25)));
        v34 = SR_VEC_READ_LANES(128, sub_1400384F0((float)v25 * 0.0625, (float)v12 * 0.0625, -1), f32)[0];
        v29 = 0;
        v12 = v48;
        v6 = dword_140404A6C[283829878];
        if ( (float)((float)(v34 * 6.0) + 48.0) > v33 )
          v29 = 192;
      }
      if ( (int)v8 >= (int)dword_140404A6C[283830649] && (int)v8 <= (int)dword_140404A6C[283830656] )
      {
        v26 = 16;
        v27 = 128;
        if ( (_DWORD)v8 != dword_140404A6C[283830650] )
        {
          v26 = 32;
          v27 = 32;
        }
        v28 = v26;
        if ( (_DWORD)v8 == dword_140404A6C[283830651] )
        {
          v27 = 32;
          v26 = 32;
          v28 = 96;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830652] )
        {
          v27 = 128;
          v26 = 128;
          v28 = 128;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830653] )
        {
          v27 = 224;
          v26 = 224;
          v28 = 224;
        }
        if ( (_DWORD)v8 == dword_140404A6C[283830654] )
        {
          v27 = 219;
          v26 = 192;
          v28 = 89;
        }
        if ( v25 >= 64 )
        {
          v27 = 64;
          v26 = 64;
          v28 = 64;
        }
        v29 = 128;
      }
      if ( (int)v8 >= (int)dword_140404A6C[283829877] && (int)v8 <= (int)dword_140404A6C[283829880] )
      {
        v29 = 32;
        if ( v25 >= 64 )
        {
          if ( v12 >= 64 )
          {
            if ( v12 >= 96 )
            {
              v27 = 56;
              v26 = 64;
              v28 = 253;
              v39 = (float)((float)(111.5 - (float)v12) * (float)(111.5 - (float)v12))
                  + (float)((float)(79.5 - (float)v25) * (float)(79.5 - (float)v25));
              v40 = v39 < 36.0;
              v41 = fsqrt(v39);
              if ( !v40 )
              {
                v27 = 253;
                v26 = 253;
              }
              if ( v41 < 3.5 )
              {
                v28 = 64;
                v26 = 64;
                v27 = 64;
              }
            }
            else
            {
              v26 = 128;
              v28 = 32;
              v27 = 160;
            }
          }
          else
          {
            v28 = 159;
            v26 = 180;
            v27 = 253;
          }
        }
        else
        {
          v28 = 96;
          v26 = 96;
          v27 = 96;
          if ( (int)v8 <= v6 && (unsigned int)(v12 - 96) <= 3 && (unsigned int)(v25 - 42) <= 5 )
          {
            v29 = 192;
            v28 = (int)(float)(*(float *)&v11 * 255.0);
            v26 = (int)(float)(*(float *)&v10 * 255.0);
            v27 = (int)(float)(*(float *)&v9 * 255.0);
          }
          v35 = (v12 - 80) >> 2;
          v36 = abs32(v25 - 32);
          if ( v36 < v35 || (int)abs32(v25 - 31) < v35 )
          {
            v29 = 0;
            v28 = 192;
            v26 = 192;
            v27 = 192;
            if ( (_DWORD)v8 == dword_140404A6C[283829879] )
            {
              if ( v12 < 126 && (unsigned int)(v25 - 31) <= 1 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
              if ( v12 < 124 && (unsigned int)(v25 - 30) <= 3 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
            }
            if ( (int)v8 <= v6 && v12 < 126 )
            {
              v37 = (v12 - 112) >> 1;
              if ( v36 < v37 || (int)abs32(v25 - 31) < v37 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
              v38 = (120 - v12) >> 2;
              if ( v36 < v38 || (int)abs32(v25 - 31) < v38 )
              {
                v29 = 192;
                v28 = (int)(float)(*(float *)&v11 * 255.0);
                v26 = (int)(float)(*(float *)&v10 * 255.0);
                v27 = (int)(float)(*(float *)&v9 * 255.0);
              }
            }
          }
        }
      }
      if ( dword_140404A6C[293250409] )
        dword_140404A6C[v12 * v14 + 468765295 + v25] = (v28 << 8) + v29 + (v26 << 16) + (v27 << 24);
      else
        dword_140404A6C[v12 * v14 + 468765295 + v25] = (v29 << 24) + v27 + (v28 << 16) + (v26 << 8);
      v14 = dword_140404A6C[468765293];
      ++v25;
      v23 = dword_140404A6C[283830660];
      v24 = dword_140404A6C[283830658];
      v21 = dword_140404A6C[283830695];
      v22 = dword_140404A6C[283830690];
      if ( v25 >= (int)dword_140404A6C[468765293] )
      {
        v15 = dword_140404A6C[468765294];
        goto LABEL_160;
      }
    }
    v27 = 32;
    goto LABEL_61;
  }
  v13 = dword_140404A6C[293250409];
  v14 = 16;
  v15 = 16;
  dword_140404A6C[468765293] = 16;
  dword_140404A6C[468765294] = 16;
  do
  {
    v16 = 0;
    if ( v14 <= 0 )
      goto LABEL_44;
    do
    {
      if ( v12 == 15 )
      {
        if ( v16 < 8 )
        {
LABEL_34:
          v17 = 32;
          v19 = 32;
          v20 = 32;
          v18 = 32;
          if ( v12 != 1 )
            goto LABEL_39;
          v17 = 255;
          v19 = 255;
          v20 = 255;
          if ( v16 != 1 )
            goto LABEL_39;
          v17 = 192;
          v18 = 192;
LABEL_37:
          v19 = 16;
        }
        else
        {
          v17 = 96;
          v18 = 32;
          v19 = 96;
        }
LABEL_38:
        v20 = v19;
        goto LABEL_39;
      }
      if ( v12 )
        goto LABEL_34;
      v17 = 32;
      v19 = 32;
      v20 = 32;
      v18 = 192;
      switch ( v16 )
      {
        case 1:
          v17 = 128;
          goto LABEL_37;
        case 2:
          v20 = 96;
          break;
        case 3:
          v17 = 128;
          v19 = 128;
          goto LABEL_38;
        case 4:
          v17 = 224;
          v19 = 224;
          goto LABEL_38;
        case 5:
          v17 = 219;
          v20 = 89;
          v19 = 192;
          break;
        case 6:
          v17 = 0;
          v19 = 0;
          v20 = 0;
          break;
      }
LABEL_39:
      if ( v13 )
        dword_140404A6C[v16 + 468765295 + v12 * v14] = (v20 << 8) + v18 + (v19 << 16) + (v17 << 24);
      else
        dword_140404A6C[v16 + 468765295 + v12 * v14] = (v18 << 24) + v17 + (v20 << 16) + (v19 << 8);
      v14 = dword_140404A6C[468765293];
      ++v16;
    }
    while ( v16 < (int)dword_140404A6C[468765293] );
    v15 = dword_140404A6C[468765294];
LABEL_44:
    ++v12;
  }
  while ( v12 < v15 );
LABEL_162:
  v42 = 44 * v8;
  dword_140404A6C[v42 + 284024938] = a3;
  dword_140404A6C[v42 + 284024939] = a4;
  dword_140404A6C[v42 + 284024940] = a5;
  dword_140404A6C[v42 + 284024941] = a6;
  dword_140404A6C[v42 + 284024933] = v14;
  dword_140404A6C[v42 + 284024934] = v15;
  dword_140404A6C[v42 + 284024935] = 1;
  dword_140404A6C[v42 + 284024936] = 6408;
  dword_140404A6C[v42 + 284024937] = 6408;
  dword_140404A6C[v42 + 284024943] = 0;
  free(*(void **)&dword_140404A6C[44 * v8 + 284024945]);
  v43 = sr_path_malloc((int)(4 * dword_140404A6C[v42 + 284024933] * dword_140404A6C[v42 + 284024934]));
  v44 = 0;
  *(_QWORD *)&dword_140404A6C[v42 + 284024945] = v43;
  if ( (int)dword_140404A6C[44 * v8 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v42 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v42 + 284024945] + 4LL * v47) = dword_140404A6C[v46 + 468765295] )
      {
        v46 = i + v44 * dword_140404A6C[468765293];
        v47 = i + dword_140404A6C[v42 + 284024933] * v44;
        ++i;
      }
      ++v44;
    }
    while ( v44 < (int)dword_140404A6C[v42 + 284024934] );
  }
  if ( v7 )
    sub_14009A370(v8);
  sub_14014D3E0(v8, 1);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 1402B2830: using guessed type int dword_1402B2830[];
// 1402B2834: using guessed type int dword_1402B2834[];
// 1402B2838: using guessed type int dword_1402B2838[];
// 1402B283C: using guessed type int dword_1402B283C;
// 1402B2840: using guessed type int dword_1402B2840;
// 1402B2844: using guessed type int dword_1402B2844;
// 1402B2848: using guessed type int dword_1402B2848;
// 1402B284C: using guessed type int dword_1402B284C;
// 1402B2850: using guessed type int dword_1402B2850;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBE444: using guessed type unsigned int;
// 183EBF074: using guessed type unsigned int;
// 183EBF07C: using guessed type unsigned int;
// 183EBF0F4: using guessed type unsigned int;
// 183EBF108: using guessed type unsigned int;
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009B1A0) ----------------------------------------------------
void               sub_14009B1A0(int a1)
{
  BOOL *v1; // rdi
  int v2; // ebp
  __int64 v3; // r14
  int v4; // esi
  float v5; // xmm6_4
  BOOL v6; // ebx
  double v7; // xmm1_8
  __int64 v8; // rdi
  char *v9; // r11
  unsigned int i; // r9d
  char *v11; // r10
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r8d
  int v15; // ebx
  bool v16; // zf
  signed int j; // r10d
  signed int k; // r9d
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v22; // [rsp+0h] [rbp-4C8h] BYREF
  _DWORD v23[256]; // [rsp+20h] [rbp-4A8h] BYREF
  __int64 v24; // [rsp+420h] [rbp-A8h]

  v1 = v23;
  v2 = 0;
  v3 = a1;
  do
  {
    v4 = 0;
    v5 = (float)v2 - 7.5;
    do
    {
      v6 = (float)((float)((float)((float)v4 - 7.5) * (float)((float)v4 - 7.5)) + (float)(v5 * v5)) <= 36.0;
      *v1 = v6;
      v7 = sub_14023F704(v5, (float)v4 - 5.0);
      if ( v7 > -0.5890486225480862 )
      {
        if ( v7 < 0.5890486225480862 )
          v6 = 0;
        *v1 = v6;
      }
      ++v4;
      ++v1;
    }
    while ( v4 < 16 );
    ++v2;
  }
  while ( v2 < 16 );
  v8 = 44 * v3;
  dword_140404A6C[468765293] = 128;
  dword_140404A6C[468765294] = 128;
  dword_140404A6C[v8 + 284024933] = 128;
  dword_140404A6C[v8 + 284024934] = 128;
  dword_140404A6C[v8 + 284024935] = 1;
  dword_140404A6C[v8 + 284024936] = 6408;
  dword_140404A6C[v8 + 284024937] = 6408;
  dword_140404A6C[v8 + 284024943] = 0;
  dword_140404A6C[v8 + 284024938] = 10497;
  dword_140404A6C[v8 + 284024939] = 10497;
  dword_140404A6C[v8 + 284024940] = 9728;
  dword_140404A6C[v8 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v8 + 284024945] = sr_path_malloc((int)(4
                                                                   * dword_140404A6C[v8 + 284024933]
                                                                   * dword_140404A6C[v8 + 284024934]));
  v9 = (char *)&unk_1402B2410;
  for ( i = 0; (int)i < 256; ++i )
  {
    v11 = v9;
    v12 = 8;
    v13 = 8 * (i >> 4);
    v14 = 8 * (i & 0xF);
    v15 = -8 * (i >> 4);
    do
    {
      dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 < (__int64)dword_1402B2550 )
      {
        if ( *v11 < 0 )
          dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x40) == 0;
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x20) == 0;
        dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x10) == 0;
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 8) == 0;
        dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 4) == 0;
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 2) == 0;
        dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 1) == 0;
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_50;
      }
      if ( (__int64)v9 < (__int64)byte_1402B2570 && v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
      }
      else
      {
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)byte_1402B2570 )
          goto LABEL_33;
      }
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 1 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_34;
      }
LABEL_33:
      dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)byte_1402B2570 )
        goto LABEL_36;
LABEL_34:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 2 + 8 * (i & 1)] )
      {
LABEL_36:
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)byte_1402B2570 )
          goto LABEL_39;
        goto LABEL_37;
      }
      dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
LABEL_37:
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 3 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_40;
      }
LABEL_39:
      dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)byte_1402B2570 )
        goto LABEL_42;
LABEL_40:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 4 + 8 * (i & 1)] )
      {
LABEL_42:
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)byte_1402B2570 )
          goto LABEL_45;
        goto LABEL_43;
      }
      dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
LABEL_43:
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 5 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_46;
      }
LABEL_45:
      dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)byte_1402B2570 )
        goto LABEL_48;
LABEL_46:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 6 + 8 * (i & 1)] )
      {
LABEL_48:
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)byte_1402B2570 )
          goto LABEL_52;
        goto LABEL_49;
      }
      dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
LABEL_49:
      v16 = v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 7 + 8 * (i & 1)] == 0;
LABEL_50:
      if ( !v16 )
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = -1;
LABEL_52:
      ++v13;
      ++v11;
      --v12;
    }
    while ( v12 );
    v9 += 8;
  }
  for ( j = 0; j < (int)dword_140404A6C[v8 + 284024934]; ++j )
  {
    for ( k = 0;
          k < (int)dword_140404A6C[v8 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v8 + 284024945] + 4LL * v20) = dword_140404A6C[v19 + 468765295] )
    {
      v19 = k + j * dword_140404A6C[468765293];
      v20 = k + j * dword_140404A6C[v8 + 284024933];
      ++k;
    }
  }
  sub_14014D3E0(v3, 0);
  return; /* native cookie verifies compiler stack layout, not atlas data */
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 1402B2550: using guessed type int dword_1402B2550[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009B9F0) ----------------------------------------------------
double            sub_14009B9F0(int a1)
{
  unsigned int v1; // r14d
  int v2; // ebx
  __int64 v3; // rax
  signed int v4; // ecx
  int v5; // esi
  __int64 v6; // r15
  int v7; // edi
  float v8; // xmm10_4
  unsigned int v9; // ebp
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm7_4
  float v14; // xmm7_4
  float v15; // xmm7_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rax
  signed int v29; // r10d
  signed int i; // r9d
  __int64 v31; // r8
  signed int v32; // eax

  v1 = dword_140404A6C[293250409];
  v2 = 128;
  v3 = a1;
  v4 = 128;
  v5 = 0;
  v6 = (int)dword_140404A6C[4 * v3 + 283827814];
  dword_140404A6C[468765293] = 128;
  dword_140404A6C[468765294] = 128;
  do
  {
    v7 = 0;
    if ( v2 > 0 )
    {
      v8 = (float)v5 * 0.25;
      v9 = abs32(32 - (v5 & 0x3F));
      v10 = v8 * 0.5;
      do
      {
        v11 = (float)v7 * 0.25;
        v12 = fabs(SR_VEC_READ_LANES(128, sub_1400384F0(v11 * 0.5, v10, 15), f32)[0]) * 0.5;
        v13 = v12 + fabs(SR_VEC_READ_LANES(128, sub_1400384F0(v11, v8, 31), f32)[0]);
        v14 = v13 + (float)(fabs(SR_VEC_READ_LANES(128, sub_1400384F0((float)v7 * 0.0625, v8 * 0.25, 7), f32)[0]) * 0.25);
        v15 = v14 + (float)(fabs(SR_VEC_READ_LANES(128, sub_1400384F0((float)v7 * 0.03125, v8 * 0.125, 3), f32)[0]) * 0.125);
        v16 = sin((float)((float)(0.015625 / v15) + (float)(0.015625 / v15)) * 3.14159265359) * 32.0;
        if ( (int)(v9 + abs32(32 - (v7 & 0x3F))) >= 32 )
        {
          v20 = v16 * 0.25;
          v17 = (float)(v16 * 0.125) + 56.0;
          v21 = v20;
          v19 = v20 + 48.0;
          v18 = v21 + 64.0;
        }
        else
        {
          v17 = v16 + 112.0;
          v18 = v17;
          v19 = v17;
        }
        v22 = (int)v19;
        v23 = (int)v17;
        v24 = (int)v18;
        if ( v1 )
          v25 = (v23 << 16) + (v24 << 24) + (v22 << 8) + 32;
        else
          v25 = v24 + (v23 << 8) + 0x20000000 + (v22 << 16);
        v10 = v8 * 0.5;
        v26 = v7 + v5 * v2;
        ++v7;
        dword_140404A6C[v26 + 468765295] = v25;
        v2 = dword_140404A6C[468765293];
      }
      while ( v7 < (int)dword_140404A6C[468765293] );
      v4 = dword_140404A6C[468765294];
    }
    ++v5;
  }
  while ( v5 < v4 );
  v27 = 44 * v6;
  dword_140404A6C[v27 + 284024933] = v2;
  dword_140404A6C[v27 + 284024934] = v4;
  dword_140404A6C[v27 + 284024935] = 1;
  dword_140404A6C[v27 + 284024936] = 6408;
  dword_140404A6C[v27 + 284024937] = 6408;
  dword_140404A6C[v27 + 284024943] = 0;
  dword_140404A6C[v27 + 284024938] = 10497;
  dword_140404A6C[v27 + 284024939] = 10497;
  dword_140404A6C[v27 + 284024940] = 9729;
  dword_140404A6C[v27 + 284024941] = 9987;
  free(*(void **)&dword_140404A6C[44 * v6 + 284024945]);
  v28 = sr_path_malloc((int)(4 * dword_140404A6C[v27 + 284024933] * dword_140404A6C[v27 + 284024934]));
  v29 = 0;
  *(_QWORD *)&dword_140404A6C[v27 + 284024945] = v28;
  if ( (int)dword_140404A6C[44 * v6 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v27 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v27 + 284024945] + 4LL * v32) = dword_140404A6C[v31 + 468765295] )
      {
        v31 = i + v29 * dword_140404A6C[468765293];
        v32 = i + v29 * dword_140404A6C[v27 + 284024933];
        ++i;
      }
      ++v29;
    }
    while ( v29 < (int)dword_140404A6C[v27 + 284024934] );
  }
  sub_14009A370(v6);
  sub_14014D3E0(v6, 1);
  return (*(double (           **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009BE40) ----------------------------------------------------
void            sub_14009BE40(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6; // r10d
  __int64 v7; // rbp
  unsigned int v9; // r9d
  signed int v10; // edi
  signed int i; // r11d
  int v13; // eax
  int v14; // r10d
  __int64 v15; // rcx
  unsigned int *v16; // rsi
  unsigned int *v17; // rbx
  void **v18; // rdi
  __int64 v19; // rax
  signed int v20; // r10d
  signed int j; // r9d
  __int64 v22; // r8
  signed int v23; // eax

  v6 = 128;
  v7 = a1;
  dword_140404A6C[468765293] = 128;
  v9 = dword_140404A6C[293250409];
  v10 = 128;
  dword_140404A6C[468765294] = 128;
  for ( i = 0; i < v10; ++i )
  {
    v13 = 0;
    if ( v6 > 0 )
    {
      do
      {
        v14 = v13 + i * v6;
        if ( v9 )
          dword_140404A6C[v14 + 468765295] = -16711904;
        else
          dword_140404A6C[v14 + 468765295] = 553582847;
        v6 = dword_140404A6C[468765293];
        ++v13;
      }
      while ( v13 < (int)dword_140404A6C[468765293] );
      v10 = dword_140404A6C[468765294];
    }
  }
  if ( v9 )
  {
    dword_140404A6C[468765295] = 1612720160;
    dword_140404A6C[468765296] = -425767648;
  }
  else
  {
    dword_140404A6C[468765295] = 539500640;
    dword_140404A6C[468765296] = 541958118;
  }
  v15 = 44LL * a1;
  v16 = &dword_140404A6C[44 * v7 + 284024934];
  v17 = &dword_140404A6C[44 * v7 + 284024933];
  dword_140404A6C[v15 + 284024940] = a5;
  *v16 = v10;
  v18 = (void **)&dword_140404A6C[44 * v7 + 284024945];
  *v17 = v6;
  dword_140404A6C[v15 + 284024935] = 1;
  dword_140404A6C[v15 + 284024936] = 6408;
  dword_140404A6C[v15 + 284024937] = 6408;
  dword_140404A6C[v15 + 284024943] = 0;
  dword_140404A6C[v15 + 284024938] = a3;
  dword_140404A6C[v15 + 284024939] = a4;
  dword_140404A6C[v15 + 284024941] = a6;
  free(*v18);
  v19 = sr_path_malloc((int)(4 * *v17 * *v16));
  v20 = 0;
  for ( *v18 = (void *)v19; v20 < (int)*v16; ++v20 )
  {
    for ( j = 0; j < (int)*v17; *((_DWORD *)*v18 + v23) = dword_140404A6C[v22 + 468765295] )
    {
      v22 = j + v20 * dword_140404A6C[468765293];
      v23 = j + *v17 * v20;
      ++j;
    }
  }
  if ( a2 )
    sub_14009A370(v7);
  sub_14014D3E0(v7, 1);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE010: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;
// 1B0037428: using guessed type int[];
// 1B003742C: using guessed type unsigned int;

//----- (000000014009C040) ----------------------------------------------------
double            sub_14009C040(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbp
  __int64 v5; // rdi
  float v6; // xmm10_4
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r8
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // ecx
  unsigned int v33; // xmm8_4
  unsigned int v34; // xmm9_4
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // rcx
  float v47; // [rsp+40h] [rbp-98h] BYREF
  int v48; // [rsp+44h] [rbp-94h]

  v2 = 0;
  v4 = a1;
  v5 = 44LL * a2;
  dword_140404A6C[468765293] = 512;
  dword_140404A6C[468765294] = 512;
  dword_140404A6C[v5 + 284024933] = 512;
  dword_140404A6C[v5 + 284024934] = 512;
  dword_140404A6C[v5 + 284024935] = 1;
  dword_140404A6C[v5 + 284024936] = 6408;
  dword_140404A6C[v5 + 284024937] = 6408;
  dword_140404A6C[v5 + 284024943] = 0;
  dword_140404A6C[v5 + 284024938] = 10497;
  dword_140404A6C[v5 + 284024939] = 10497;
  dword_140404A6C[v5 + 284024940] = 9729;
  dword_140404A6C[v5 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v5 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v5 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[v5 + 284024944], 0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  sub_14007A2C0(0, 0, 512, 512, 512.0, 512.0, 512.0);
  dword_140404A6C[438291414] = 1140850688;
  dword_140404A6C[438291415] = 1140850688;
  qword_140302FE8(0, 0, 512, 512);
  v6 = 0.0;
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,1);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])(v8, v7, v9, v10);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(0x4000);
  qword_140404050(3553, dword_140404A6C[451221642]);
  *(_OWORD *)&dword_140404A6C[456807033] = 0;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(v12, v11, v13);
  sub_14007D420(v15, v14, v16);
  sub_14007D420(v18, v17, v19);
  sub_14007D420(v21, v20, v22);
  sub_14006E0D0(v24, v23, v25);
  LOBYTE(v26) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  v27 = dword_140404A6C[438291413];
  dword_140404A6C[438291413] = 3;
  if ( (_DWORD)v4 != -1 )
  {
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283831303] + 284024944]);
    dword_140404A6C[456217205] = 1;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    do
    {
      if ( v2 >= 1000 )
        break;
      v31 = (unsigned __int8)aHelloWorld[v2];
      v32 = 39;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279700;
      if ( (unsigned __int8)(v31 - 65) <= 0x19u )
        v32 = v31 - 52;
      v48 = 1107296256;
      v6 = v6 + 16.0;
      *(float *)&v33 = (float)(v32 >> 4) * 0.0625;
      v47 = v6;
      *(float *)&v34 = (float)(v32 & 0xF) * 0.0625;
      dword_140404A6C[456807037] = v34;
      *(float *)&dword_140404A6C[456807038] = *(float *)&v33 + 0.0625;
      sub_14007D320((unsigned int *)&v47, v31, v30);
      *(float *)&dword_140404A6C[456807038] = *(float *)&v33 + 0.0625;
      v47 = v6 + 16.0;
      *(float *)&dword_140404A6C[456807037] = *(float *)&v34 + 0.0625;
      sub_14007D320((unsigned int *)&v47, v35, v36);
      *(float *)&dword_140404A6C[456807037] = *(float *)&v34 + 0.0625;
      dword_140404A6C[456807038] = v33;
      v48 = 1098907648;
      sub_14007D320((unsigned int *)&v47, v37, v38);
      v47 = v6;
      dword_140404A6C[456807037] = v34;
      dword_140404A6C[456807038] = v33;
      sub_14007D320((unsigned int *)&v47, v39, v40);
      ++v2;
    }
    while ( aHelloWorld[v2] );
    sub_14006E0D0(v29, v28, v30);
    sub_140187860(40, v41, v42, 16.0);
    sub_140187860(40, 7040 * v4, v43, 16.0);
  }
  unk_1404046F0(36160, 0);
  dword_140404A6C[438291413] = v27;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v44) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1141899264;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v45) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v45);
  return (*(double (           **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
}

// 14009C31D: variable 'v8' is possibly undefined
// 14009C31D: variable 'v7' is possibly undefined
// 14009C31D: variable 'v9' is possibly undefined
// 14009C31D: variable 'v10' is possibly undefined
// 14009C374: variable 'v12' is possibly undefined
// 14009C374: variable 'v11' is possibly undefined
// 14009C374: variable 'v13' is possibly undefined
// 14009C382: variable 'v15' is possibly undefined
// 14009C382: variable 'v14' is possibly undefined
// 14009C382: variable 'v16' is possibly undefined
// 14009C390: variable 'v18' is possibly undefined
// 14009C390: variable 'v17' is possibly undefined
// 14009C390: variable 'v19' is possibly undefined
// 14009C39E: variable 'v21' is possibly undefined
// 14009C39E: variable 'v20' is possibly undefined
// 14009C39E: variable 'v22' is possibly undefined
// 14009C3A3: variable 'v24' is possibly undefined
// 14009C3A3: variable 'v23' is possibly undefined
// 14009C3A3: variable 'v25' is possibly undefined
// 14009C3B5: variable 'v26' is possibly undefined
// 14009C4DA: variable 'v30' is possibly undefined
// 14009C50C: variable 'v35' is possibly undefined
// 14009C50C: variable 'v36' is possibly undefined
// 14009C52F: variable 'v37' is possibly undefined
// 14009C52F: variable 'v38' is possibly undefined
// 14009C552: variable 'v39' is possibly undefined
// 14009C552: variable 'v40' is possibly undefined
// 14009C569: variable 'v29' is possibly undefined
// 14009C569: variable 'v28' is possibly undefined
// 14009C583: variable 'v41' is possibly undefined
// 14009C583: variable 'v42' is possibly undefined
// 14009C5BA: variable 'v43' is possibly undefined
// 14009C602: variable 'v44' is possibly undefined
// 14009C635: variable 'v45' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279700: using guessed type __int128 xmmword_140279700;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009C680) ----------------------------------------------------
__int64            sub_14009C680(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edi
  unsigned int *v13; // rbx
  unsigned int v14; // xmm1_4
  unsigned int v15; // xmm0_4
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r8
  unsigned int v41; // r14d
  float v42; // xmm6_4
  __int64 v43; // r8
  __int64 v44; // rdi
  __int64 v45; // rbp
  __int64 v46; // rsi
  int v47; // ebx
  int v48; // ecx
  unsigned int v49; // eax
  __m128i v50; // xmm2
  __int64 v51; // r8
  __int64 v52; // rcx
  _DWORD v54[20]; // [rsp+0h] [rbp-4F8h] BYREF
  __int16 v55[512]; // [rsp+50h] [rbp-4A8h] BYREF
  __int64 v56; // [rsp+450h] [rbp-A8h]

  v3 = 44LL * a2;
  v4 = a1;
  dword_140404A6C[468765293] = 512;
  dword_140404A6C[468765294] = 512;
  dword_140404A6C[v3 + 284024933] = 512;
  dword_140404A6C[v3 + 284024934] = 512;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  sub_14007A2C0(0, 0, 512, 512, 512.0, 512.0, 512.0);
  dword_140404A6C[438291414] = 1140850688;
  dword_140404A6C[438291415] = 1140850688;
  qword_140302FE8(0, 0, 512, 512);
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,1);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])(v6, v5, v7, v8);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(0x4000);
  qword_140404050(3553, dword_140404A6C[451221642]);
  v12 = 0;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  v13 = &dword_140404A6C[159842359];
  do
  {
    v14 = *v13;
    dword_140404A6C[456807033] = *(v13 - 1);
    v15 = v13[1];
    dword_140404A6C[456807034] = v14;
    dword_140404A6C[456807035] = v15;
    dword_140404A6C[456807036] = 0;
    sub_14007D420(v10, v9, v11);
    sub_14007D420(v17, v16, v18);
    sub_14007D420(v20, v19, v21);
    sub_14007D420(v23, v22, v24);
    ++v12;
    v13 += 6;
  }
  while ( v12 < (int)dword_140404A6C[159842357] );
  sub_14006E0D0(v10, v9, v11);
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(v26, v25, v27);
  sub_14007D420(v29, v28, v30);
  sub_14007D420(v32, v31, v33);
  sub_14007D420(v35, v34, v36);
  sub_14006E0D0(v38, v37, v39);
  LOBYTE(v40) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  v41 = dword_140404A6C[438291413];
  v42 = 16.0;
  dword_140404A6C[438291413] = 3;
  if ( (_DWORD)v4 != -1 )
  {
    qword_140404050(3553, dword_140404A6C[72787862]);
    v44 = 23;
    v45 = 1760 * v4;
    v46 = 110 * v4;
    v47 = dword_140404A6C[v45 + 278846112];
    do
    {
      sub_140187C70(
        (__int64)&dword_140404A6C[16 * (v46 + v47) + 278846114],
        (__int64)&dword_140404A6C[16 * (v46 + v47) + 278846626],
        v43,
        v42,
        16.0);
      v42 = v42 + 16.0;
      v47 = ((_BYTE)v47 + 1) & 0x1F;
      --v44;
    }
    while ( v44 );
    v48 = dword_140404A6C[v45 + 278846113];
    if ( v48 != -1 )
    {
      v54[16] = 1065353216;
      v49 = (v48 >> 6) - dword_140404A6C[v45 + 278846112];
      v54[14] = 1065353216;
      v54[12] = 1065353216;
      v55[0] = 127;
      v50 = _mm_castps_si128(_mm_set_ss((float)(v49 & 0x1F)));
      v54[10] = 1065353216;
      v54[8] = 64;
      *(float *)SR_VEC_LANES(128, v50, i32) = (float)(*(float *)SR_VEC_LANES(128, v50, i32) + 1.0) * 16.0;
      sr_CSDrawText(
        (char *)v55,
        (float)((float)(v48 & 0x3F) + 1.0) * 8.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v50),
        16.0);
    }
  }
  unk_1404046F0(36160, 0);
  dword_140404A6C[438291413] = v41;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v51) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1141899264;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v52) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v52);
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  return 0; /* native stack-cookie check is non-returning only on corruption */
}

// 14009C983: variable 'v6' is possibly undefined
// 14009C983: variable 'v5' is possibly undefined
// 14009C983: variable 'v7' is possibly undefined
// 14009C983: variable 'v8' is possibly undefined
// 14009CA36: variable 'v10' is possibly undefined
// 14009CA36: variable 'v9' is possibly undefined
// 14009CA36: variable 'v11' is possibly undefined
// 14009CA50: variable 'v17' is possibly undefined
// 14009CA50: variable 'v16' is possibly undefined
// 14009CA50: variable 'v18' is possibly undefined
// 14009CA60: variable 'v20' is possibly undefined
// 14009CA60: variable 'v19' is possibly undefined
// 14009CA60: variable 'v21' is possibly undefined
// 14009CA70: variable 'v23' is possibly undefined
// 14009CA70: variable 'v22' is possibly undefined
// 14009CA70: variable 'v24' is possibly undefined
// 14009CAD0: variable 'v26' is possibly undefined
// 14009CAD0: variable 'v25' is possibly undefined
// 14009CAD0: variable 'v27' is possibly undefined
// 14009CAE0: variable 'v29' is possibly undefined
// 14009CAE0: variable 'v28' is possibly undefined
// 14009CAE0: variable 'v30' is possibly undefined
// 14009CAF1: variable 'v32' is possibly undefined
// 14009CAF1: variable 'v31' is possibly undefined
// 14009CAF1: variable 'v33' is possibly undefined
// 14009CB02: variable 'v35' is possibly undefined
// 14009CB02: variable 'v34' is possibly undefined
// 14009CB02: variable 'v36' is possibly undefined
// 14009CB07: variable 'v38' is possibly undefined
// 14009CB07: variable 'v37' is possibly undefined
// 14009CB07: variable 'v39' is possibly undefined
// 14009CB1A: variable 'v40' is possibly undefined
// 14009CBBB: variable 'v43' is possibly undefined
// 14009CC85: variable 'v51' is possibly undefined
// 14009CCB8: variable 'v52' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009CD10) ----------------------------------------------------
__int64            sub_14009CD10(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  int v10; // r14d
  __m128i v11; // xmm6
  __int64 v12; // rbp
  __int64 v13; // rsi
  int v14; // edi
  __int64 i; // rbx
  unsigned __int8 v16; // cl
  int v17; // edx
  char v18; // cl
  __int64 v19; // r8
  __int64 v20; // rcx
  _DWORD v22[20]; // [rsp+0h] [rbp-4D8h] BYREF
  unsigned __int8 v23[1024]; // [rsp+50h] [rbp-488h] BYREF
  __int64 v24; // [rsp+450h] [rbp-88h]

  v3 = 44LL * a2;
  v4 = a1;
  dword_140404A6C[468765293] = 1024;
  dword_140404A6C[468765294] = 1024;
  dword_140404A6C[v3 + 284024933] = 1024;
  dword_140404A6C[v3 + 284024934] = 1024;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  sub_14007A2C0(0, 0, 1024, 1024, 1024.0, 1024.0, 1024.0);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1149239296;
  qword_140302FE8(0, 0, 1024, 1024);
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])(v6, v5, v7, v8);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(0x4000);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  v9 = dword_140404A6C[438291413];
  v10 = 0;
  v11 = _mm_cvtsi32_si128((int)(0x41800000u));
  v12 = 0;
  v13 = 1760 * v4;
  dword_140404A6C[438291413] = 3;
  do
  {
    if ( !*((_BYTE *)&dword_140404A6C[v13 + 278846111] + v12) )
      break;
    v14 = 0;
    for ( i = 0; i < 1024; ++i )
    {
      v16 = v23[(_QWORD)&dword_140404A6C[278846111] + v12 + v13 * 4 - (_QWORD)v23 + i];
      if ( !v16 )
        break;
      if ( v16 == 10 )
        break;
      v23[i] = v16;
      ++v14;
    }
    if ( (unsigned __int64)i >= 0x400 )
      sub_1401F8694();
    v22[16] = 1065353216;
    v22[14] = 0;
    v22[12] = 0;
    v22[10] = 0;
    v23[i] = 0;
    v22[8] = 64;
    sr_CSDrawText((char *)v23, 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v11), 32.0);
    v12 += i;
    v17 = v14 + v10;
    v18 = *((_BYTE *)&dword_140404A6C[v13 + 278846111] + v12);
    if ( v18 )
    {
      *(float *)SR_VEC_LANES(128, v11, i32) = *(float *)SR_VEC_LANES(128, v11, i32) + 32.0;
      if ( v18 == 10 )
        ++v12;
    }
    v10 = v17 + 1;
    if ( v18 != 10 )
      v10 = v17;
  }
  while ( v12 < 1024 );
  unk_1404046F0(36160, 0);
  dword_140404A6C[438291413] = v9;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v19) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  dword_140404A6C[438291415] = 1141899264;
  dword_140404A6C[438291414] = 1149239296;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v20) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v20);
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14009D008: variable 'v6' is possibly undefined
// 14009D008: variable 'v5' is possibly undefined
// 14009D008: variable 'v7' is possibly undefined
// 14009D008: variable 'v8' is possibly undefined
// 14009D173: variable 'v19' is possibly undefined
// 14009D1A0: variable 'v20' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009D210) ----------------------------------------------------
__int64            sub_14009D210(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  __m128i v10; // xmm6
  int v11; // r14d
  __int64 v12; // rbp
  __int64 v13; // rsi
  char v14; // r8
  int v15; // edi
  __int64 i; // rbx
  unsigned __int8 v17; // cl
  int v18; // edx
  char v19; // cl
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v23; // [rsp+0h] [rbp-4D8h] BYREF
  int v24; // [rsp+20h] [rbp-4B8h]
  int v25; // [rsp+28h] [rbp-4B0h]
  int v26; // [rsp+30h] [rbp-4A8h]
  int v27; // [rsp+38h] [rbp-4A0h]
  int v28; // [rsp+40h] [rbp-498h]
  unsigned __int8 v29[1024]; // [rsp+50h] [rbp-488h] BYREF
  __int64 v30; // [rsp+450h] [rbp-88h]

  v3 = 44LL * a2;
  v4 = a1;
  dword_140404A6C[468765293] = 1024;
  dword_140404A6C[468765294] = 1024;
  dword_140404A6C[v3 + 284024933] = 1024;
  dword_140404A6C[v3 + 284024934] = 1024;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  sub_14007A2C0(0, 0, 1024, 1024, 1024.0, 1024.0, 1024.0);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1149239296;
  qword_140302FE8(0, 0, 1024, 1024);
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])(v6, v5, v7, v8);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(0x4000);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  v9 = dword_140404A6C[438291413];
  v28 = 1065353216;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  dword_140404A6C[438291413] = 2;
  v24 = 65;
  sr_CSDrawText("The Readme", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 48.0);
  v10 = _mm_cvtsi32_si128((int)(0x42C00000u));
  v11 = 0;
  v12 = 0;
  v13 = 1760 * v4;
  do
  {
    v14 = *((_BYTE *)&dword_140404A6C[v13 + 278846111] + v12);
    if ( !v14 )
      break;
    v15 = 0;
    for ( i = 0; i < 1024; ++i )
    {
      v17 = v29[(_QWORD)&dword_140404A6C[278846111] + v12 + v13 * 4 - (_QWORD)v29 + i];
      if ( !v17 )
        break;
      if ( v17 == 10 )
        break;
      v29[i] = v17;
      ++v15;
    }
    if ( i <= 0 )
    {
      *(float *)SR_VEC_LANES(128, v10, i32) = *(float *)SR_VEC_LANES(128, v10, i32) + 32.0;
      if ( v14 == 10 )
      {
        ++v11;
        ++v12;
      }
    }
    else
    {
      if ( (unsigned __int64)i >= 0x400 )
        sub_1401F8694();
      v28 = 1065353216;
      v27 = 0;
      v26 = 0;
      v25 = 0;
      v29[i] = 0;
      v24 = 64;
      sr_CSDrawText((char *)v29, 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10), 32.0);
      v12 += i;
      v18 = v15 + v11;
      v19 = *((_BYTE *)&dword_140404A6C[v13 + 278846111] + v12);
      if ( v19 )
      {
        *(float *)SR_VEC_LANES(128, v10, i32) = *(float *)SR_VEC_LANES(128, v10, i32) + 32.0;
        if ( v19 == 10 )
          ++v12;
      }
      v11 = v18 + 1;
      if ( v19 != 10 )
        v11 = v18;
    }
  }
  while ( v12 < 1024 );
  unk_1404046F0(36160, 0);
  dword_140404A6C[438291413] = v9;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v20) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  dword_140404A6C[438291415] = 1141899264;
  dword_140404A6C[438291414] = 1149239296;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v21) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v21);
  (*(void (           **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14009D50A: variable 'v6' is possibly undefined
// 14009D50A: variable 'v5' is possibly undefined
// 14009D50A: variable 'v7' is possibly undefined
// 14009D50A: variable 'v8' is possibly undefined
// 14009D6F2: variable 'v20' is possibly undefined
// 14009D71F: variable 'v21' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009D7A0) ----------------------------------------------------
double            sub_14009D7A0(int a1)
{
  int v1; // edx
  signed int v2; // r8d
  signed int v3; // edi
  __int64 v4; // rsi
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  double result; // xmm0_8
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  signed int v14; // r11d
  signed int i; // r10d
  __int64 v16; // r9
  signed int v17; // eax
  float v18[2]; // [rsp+20h] [rbp-48h] BYREF
  float v19; // [rsp+28h] [rbp-40h]

  v1 = 64;
  v2 = 8;
  v3 = 0;
  v4 = a1;
  dword_140404A6C[468765293] = 64;
  dword_140404A6C[468765294] = 8;
  do
  {
    v5 = 0;
    if ( v1 > 0 )
    {
      do
      {
        sub_1400A56B0(v18, 0.0, 1.0);
        v6 = (int)(float)((float)(v18[0] * 127.0) + 128.0);
        *(_QWORD *)&result = LODWORD(v19);
        v7 = (int)(float)((float)(v18[1] * 127.0) + 128.0);
        *(float *)&result = (float)(v19 * 127.0) + 128.0;
        v9 = (int)*(float *)&result;
        if ( dword_140404A6C[293250409] )
          v10 = (v7 << 16) + (v9 << 8) + (v6 << 24) + 255;
        else
          v10 = (v7 << 8) - 0x1000000 + (v9 << 16) + v6;
        v11 = v5 + v3 * dword_140404A6C[468765293];
        ++v5;
        dword_140404A6C[v11 + 468765295] = v10;
        v1 = dword_140404A6C[468765293];
      }
      while ( v5 < (int)dword_140404A6C[468765293] );
      v2 = dword_140404A6C[468765294];
    }
    ++v3;
  }
  while ( v3 < v2 );
  v12 = 44 * v4;
  dword_140404A6C[v12 + 284024933] = v1;
  dword_140404A6C[v12 + 284024934] = v2;
  dword_140404A6C[v12 + 284024935] = 1;
  dword_140404A6C[v12 + 284024936] = 6408;
  dword_140404A6C[v12 + 284024937] = 6408;
  dword_140404A6C[v12 + 284024943] = 0;
  dword_140404A6C[v12 + 284024938] = 10497;
  dword_140404A6C[v12 + 284024939] = 10497;
  dword_140404A6C[v12 + 284024940] = 9728;
  dword_140404A6C[v12 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * v4 + 284024945]);
  v13 = sr_path_malloc((int)(4 * dword_140404A6C[v12 + 284024933] * dword_140404A6C[v12 + 284024934]));
  v14 = 0;
  *(_QWORD *)&dword_140404A6C[v12 + 284024945] = v13;
  if ( (int)dword_140404A6C[44 * v4 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[v12 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v12 + 284024945] + 4LL * v17) = dword_140404A6C[v16 + 468765295] )
      {
        v16 = i + v14 * dword_140404A6C[468765293];
        v17 = i + dword_140404A6C[v12 + 284024933] * v14;
        ++i;
      }
      ++v14;
    }
    while ( v14 < (int)dword_140404A6C[v12 + 284024934] );
  }
  sub_14014D3E0(v4, 1);
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009DA10) ----------------------------------------------------
double            sub_14009DA10(int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int v10; // ebx
  char *v11; // rcx
  __m128i v12; // xmm2
  __int64 v13; // r8
  __int64 v14; // rcx

  v3 = 44LL * a1;
  v4 = a2;
  dword_140404A6C[468765293] = 256;
  dword_140404A6C[468765294] = 64;
  dword_140404A6C[v3 + 284024933] = 256;
  dword_140404A6C[v3 + 284024934] = 64;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9987;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a1, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  sub_14007A2C0(
    0,
    0,
    dword_140404A6C[468765293],
    dword_140404A6C[468765294],
    (float)(int)dword_140404A6C[468765293],
    (float)(int)dword_140404A6C[468765294],
    (float)(int)dword_140404A6C[468765294]);
  *(float *)&dword_140404A6C[438291414] = (float)(int)dword_140404A6C[468765293];
  *(float *)&dword_140404A6C[438291415] = (float)(int)dword_140404A6C[468765294];
  qword_140302FE8(0, 0, dword_140404A6C[468765293], dword_140404A6C[468765294]);
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,1);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])(v6, v5, v7, v8);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(0x4000);
  LOBYTE(v9) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  v10 = dword_140404A6C[438291413];
  v11 = (char *)off_1402B2C00[v4];
  v12 = _mm_castps_si128(_mm_set_ss((float)(int)dword_140404A6C[468765294]));
  dword_140404A6C[438291413] = dword_140404A6C[278520159];
  *(float *)SR_VEC_LANES(128, v12, i32) = *(float *)SR_VEC_LANES(128, v12, i32) * 0.5;
  sr_CSDrawText(
    v11,
    (float)(int)dword_140404A6C[468765293] * 0.5,
    (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v12),
    52.0);
  unk_1404046F0(36160, 0);
  qword_140404050(3553, dword_140404A6C[v3 + 284024944]);
  unk_140404738(3553);
  dword_140404A6C[438291413] = v10;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v13) = 1;
  (*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])(1,1,1,0);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1141899264;
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v14) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v14);
  return (*(double (           **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
}

// 14009DD09: variable 'v6' is possibly undefined
// 14009DD09: variable 'v5' is possibly undefined
// 14009DD09: variable 'v7' is possibly undefined
// 14009DD09: variable 'v8' is possibly undefined
// 14009DD27: variable 'v9' is possibly undefined
// 14009DDFC: variable 'v13' is possibly undefined
// 14009DE2F: variable 'v14' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 1402B2C00: using guessed type __int64 off_1402B2C00[17];
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144980D50: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 182A7CFE8: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (000000014009DE70) ----------------------------------------------------
__int64 sub_14009DE70()
{
  return (unsigned int)sub_14009DE80() >> 1;
}


//----- (000000014009DE80) ----------------------------------------------------
__int64 sub_14009DE80()
{
  int v0; // edx
  unsigned int *v1; // r8
  unsigned int *v2; // rdx

  v0 = dword_14030186C;
  if ( dword_14030186C >= 624 )
  {
    if ( dword_14030186C == 625 )
      sub_1400C2D50(0x1571u);
    v1 = &dword_140404A6C[18600733];
    v2 = &dword_140404A6C[18600960];
    do
    {
      *v1 = v1[397] ^ ((*v1 ^ (*v1 ^ v1[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v1[1] & 1];
      ++v1;
    }
    while ( (__int64)v1 < (__int64)&dword_140404A6C[18600960] );
    do
    {
      *v2 = *(v2 - 227) ^ ((*v2 ^ (*v2 ^ v2[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v2[1] & 1];
      ++v2;
    }
    while ( (__int64)v2 < (__int64)&dword_140404A6C[18601356] );
    dword_140404A6C[18601356] = dword_140404A6C[18601129]
                              ^ ((dword_140404A6C[18601356]
                                ^ (dword_140404A6C[18601356]
                                 ^ dword_140404A6C[18600733])
                                & 0x7FFFFFFF) >> 1)
                              ^ dword_140301E08[dword_140404A6C[18600733] & 1];
    v0 = 0;
  }
  dword_14030186C = v0 + 1;
  return (((((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
          ^ (dword_140404A6C[v0 + 18600733] >> 11)
          ^ dword_140404A6C[v0 + 18600733])
         & 0xFFFFDF8C) << 15)
       ^ ((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
       ^ (dword_140404A6C[v0 + 18600733] >> 11)
       ^ dword_140404A6C[v0 + 18600733]
       ^ (((((((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
            ^ (dword_140404A6C[v0 + 18600733] >> 11)
            ^ dword_140404A6C[v0 + 18600733])
           & 0xFFFFDF8C) << 15)
         ^ ((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
         ^ (dword_140404A6C[v0 + 18600733] >> 11)
         ^ dword_140404A6C[v0 + 18600733]) >> 18);
}

// 14030186C: using guessed type int dword_14030186C;
// 140301E08: using guessed type int dword_140301E08[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  signed int v0; // ebx

  v0 = (unsigned int)sub_14009DE80() >> 5;
  return ((double)((unsigned int)sub_14009DE80() >> 6) + (double)v0 * 67108864.0) * 1.110223024625157e-16;
}


//----- (000000014009E070) ----------------------------------------------------
__int64 sub_14009E070()
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
       __m128i *v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v9; // rbp
  __m128i *v10; // rax
  __m128i *v11; // rsi

  if ( (int)dword_140404A6C[18215115] < 3 )
  {
    *(_QWORD *)&dword_140404A6C[18215117] = qword_140302FA8(7939);
    return 1;
  }
  v1 = 0;
  dword_140404A6C[18215119] = 0;
  qword_140302FA0(33309, &dword_140404A6C[18215119]);
  v2 = dword_140404A6C[18215119];
  v3 = *(_QWORD *)&dword_140404A6C[18215121];
  if ( (int)dword_140404A6C[18215119] > 0 )
  {
    v4 = j__realloc_base_sr(*(_QWORD *)&dword_140404A6C[18215121], 8LL * (int)dword_140404A6C[18215119]);
    v3 = v4;
    if ( !v4 )
      return 0;
    *(_QWORD *)&dword_140404A6C[18215121] = v4;
    v2 = dword_140404A6C[18215119];
  }
  if ( !v3 )
    return 0;
  if ( v2 )
  {
    do
    {
      v5 = unk_1404046B0(7939, (unsigned int)v1);
      v6 = (     __m128i *)v5;
      v7 = -1;
      while ( *(_BYTE *)(v5 + v7++ + 1) != 0 )
        ;
      v9 = v7 + 1;
      v10 = (__m128i *)sr_path_malloc(v7 + 1);
      v11 = v10;
      if ( v10 )
        sub_1401FC920(v10, v6, v9);
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[18215121] + 8 * v1) = (uint64)(uintptr_t)(v11);
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < dword_140404A6C[18215119] );
  }
  return 1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 14023AD00: using guessed type __int64 __fastcall j__realloc_base(_QWORD, _QWORD);
// 140302FA0: using guessed type __int64 (__fastcall *qword_140302FA0)(_QWORD, _QWORD);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 1404046B0: using guessed type __int64 (__fastcall *unk_1404046B0)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DA0: using guessed type unsigned int;
// 144980DA8: using guessed type unsigned int;

//----- (000000014009E190) ----------------------------------------------------
__int64            sub_14009E190(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)&dword_140404A6C[18215111];
  if ( !*(_QWORD *)&dword_140404A6C[18215111] )
    return 0;
  if ( *(_QWORD *)&dword_140404A6C[18215113] )
  {
    result = (*(__int64 (           **)(__int64))&dword_140404A6C[18215113])(a1);
    if ( result )
      return result;
    v2 = *(_QWORD *)&dword_140404A6C[18215111];
  }
  return ((__int64 (           *)(__int64, __int64))GetProcAddress)(v2, a1);
}

// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D90: using guessed type __int64 (__fastcall *)(_QWORD);

//----- (000000014009E210) ----------------------------------------------------
void               sub_14009E210(int a1)
{
  __int64 v1; // rbx
  int v2; // r15d
  __int64 v3; // r14
  int v4; // ebx
  signed int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  signed int v9; // r10d
  unsigned int v10; // edi
  __int64 v11; // r8
  signed int v12; // r9d
  signed int v13; // edx
  unsigned int v14; // eax
  BOOL v15; // ecx
  unsigned int *v16; // rdx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned int v22; // eax
  _DWORD v24[12]; // [rsp+0h] [rbp-F68h] BYREF
  _WORD v25[1920]; // [rsp+30h] [rbp-F38h] BYREF
  __int64 v26; // [rsp+F30h] [rbp-38h]

  v1 = a1;
  v2 = 0;
  if ( (int)sub_140069580() >= 960 )
  {
    v3 = v1;
    v4 = dword_140404A6C[196623];
    while ( 1 )
    {
      if ( v2 >= 16 )
        return; /* original state-only voice queue exit */
      if ( dword_140404A6C[196619] )
      {
        v5 = dword_140404A6C[196622] - v4 + 0x40000;
        if ( (signed int)(dword_140404A6C[196622] - v4) >= -131072 )
          v5 = dword_140404A6C[196622] - v4;
        v6 = 0;
        if ( v5 > 960 )
          v5 = 960;
        if ( v5 > 0 )
        {
          do
          {
            v7 = v4;
            v4 = (v4 + 1) & 0x3FFFF;
            v25[v6++] = *((_WORD *)&dword_140404A6C[196624] + v7);
            dword_140404A6C[196623] = v4;
          }
          while ( v6 < v5 );
        }
      }
      else
      {
        v5 = 960;
      }
      v8 = v5 + dword_140404A6C[70326606];
      dword_140404A6C[70326606] = v8;
      if ( v8 >= 61440 )
        dword_140404A6C[70326606] = v8 - 61440;
      if ( v5 == 960 )
        break;
LABEL_46:
      ++v2;
      if ( (int)sub_140069580() < 960 )
        return; /* original state-only voice queue exit */
    }
    v9 = dword_140404A6C[73991636];
    v10 = 1;
    v11 = 0;
    v12 = -dword_140404A6C[73991636];
    do
    {
      v13 = (__int16)v25[v11];
      v14 = 0;
      if ( v13 >= v12 )
        v14 = v10;
      v10 = v14;
      if ( v13 > v9 )
        v10 = 0;
      *(_WORD *)((char *)&dword_140404A6C[308276349] + v11 * 2) = *(_WORD *)((char *)&dword_140404A6C[308276829]
                                                                           + v11 * 2);
      *(_WORD *)((char *)&dword_140404A6C[308276829] + v11 * 2) = v13;
      ++v11;
    }
    while ( v11 < 960 );
    if ( dword_140404A6C[73991638] )
    {
      v15 = 0;
      if ( (int)dword_140404A6C[73991639] > 0 && !dword_140404A6C[280648133] )
        v15 = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[73991639]) != 0;
      if ( (int)dword_140404A6C[73991640] > 0 && (dword_140404A6C[73991640] & dword_140404A6C[284024635]) != 0 )
      {
        dword_140404A6C[32901 * v3 + 299853694] = 0;
      }
      else
      {
        v16 = &dword_140404A6C[32901 * v3 + 299853694];
        if ( !v15 )
        {
          v17 = *v16;
          v10 = 0;
          if ( v17 < 64 )
            dword_140404A6C[32901 * v3 + 299853694] = ++v17;
          if ( v17 >= 24 )
            v10 = 1;
          goto LABEL_41;
        }
        *v16 = 0;
      }
    }
    else if ( v10 )
    {
      v18 = dword_140404A6C[32901 * v3 + 299853694];
      if ( v18 < 64 )
        dword_140404A6C[32901 * v3 + 299853694] = ++v18;
      if ( v18 >= 16 )
        goto LABEL_41;
    }
    else
    {
      dword_140404A6C[32901 * v3 + 299853694] = 0;
    }
    v10 = 0;
LABEL_41:
    v19 = 32901 * v3;
    v24[8] = 2048;
    v20 = (int)dword_140404A6C[32901 * v3 + 299853696];
    dword_140404A6C[32901 * v3 + 299853762 + v20] = sub_1401E0CC0(
                                                      *(int **)&dword_140404A6C[299853437],
                                                      (__int64)v25,
                                                      960,
                                                      (__m128i *)&dword_140404A6C[32901 * v3 + 299853826 + 512 * v20],
                                                      2048);
    if ( v10 )
      dword_140404A6C[v19 + 299853762 + (int)dword_140404A6C[32901 * v3 + 299853696]] = 0;
    v21 = (int)dword_140404A6C[32901 * v3 + 299853696];
    if ( (dword_140404A6C[v19 + 299853762 + v21] & 0x80000000) != 0 )
    {
      dword_140404A6C[v19 + 299853762 + v21] = 0;
      LODWORD(v21) = dword_140404A6C[32901 * v3 + 299853696];
    }
    v22 = dword_140404A6C[283785910];
    v4 = dword_140404A6C[196623];
    dword_140404A6C[v19 + 299853698 + (int)v21] = dword_140404A6C[283785910];
    dword_140404A6C[32901 * v3 + 299853695] = v22;
    LOBYTE(v22) = dword_140404A6C[32901 * v3 + 299853696] + 1;
    dword_140404A6C[32901 * v3 + 299853693] = v10;
    dword_140404A6C[32901 * v3 + 299853696] = v22 & 0x3F;
    goto LABEL_46;
  }
  return; /* original state-only voice queue exit */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1404C4AA8: using guessed type unsigned int;
// 15104AFA4: using guessed type unsigned int;
// 151E461BC: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;

//----- (000000014009E590) ----------------------------------------------------
int sub_14009E590()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rcx
  __int64 Frequency; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&dword_140404A6C[278520503] = 1000000000;
  LODWORD(v0) = QueryPerformanceFrequency((LARGE_INTEGER *)&Frequency);
  v1 = *(_QWORD *)&dword_140404A6C[278520503];
  if ( (_DWORD)v0 )
    v1 = Frequency;
  *(_QWORD *)&dword_140404A6C[278520503] = v1;
  if ( v1 )
  {
    if ( v1 < 0 )
    {
      v0 = v1 & 1 | ((unsigned __int64)v1 >> 1);
      *(double *)&dword_140404A6C[278520505] = 1000.0 / ((double)(int)v0 + (double)(int)v0);
    }
    else
    {
      *(double *)&dword_140404A6C[278520505] = 1000.0 / (double)(int)v1;
    }
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[278520505] = 0;
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 182A7D548: using guessed type unsigned int;
// 182A7D550: using guessed type unsigned int;

//----- (000000014009E7D0) ----------------------------------------------------
void            sub_14009E7D0(float *a1, __int64 a2)
{
  float v4; // xmm6_4
  double v5; // xmm2_8
  __int64 v6; // rdx
  __m128 v7; // xmm0

  v4 = sub_14023F704(*(float *)(a2 + 4), *(float *)(a2 + 16));
  *a1 = v4;
  *(_QWORD *)&v5 = *(unsigned int *)(a2 + 24);
  *(float *)&v5 = (float)(*(float *)&v5 * *(float *)&v5) + (float)(*(float *)(a2 + 32) * *(float *)(a2 + 32));
  a1[1] = sub_14023F704(-*(float *)(a2 + 28), fsqrt(*(float *)&v5));
  v7 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(v4)), v6, v5);
  *(float *)&v5 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v7, v7, 1), f32)[0];
  a1[2] = sub_14023F704(
            (float)(SR_VEC_LANES(128, v7, f32)[0] * *(float *)(a2 + 20)) - (float)(*(float *)&v5 * *(float *)(a2 + 8)),
            (float)(*(float *)&v5 * *(float *)a2) - (float)(SR_VEC_LANES(128, v7, f32)[0] * *(float *)(a2 + 12)));
}

// 14009E835: variable 'v6' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014009E880) ----------------------------------------------------
__int64            sub_14009E880(float *a1, float *a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  double v6; // xmm0_8
  float v7; // xmm2_4
  double v8; // xmm0_8
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  float v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  float v14[2]; // [rsp+38h] [rbp-20h] BYREF
  float v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+48h] [rbp-10h]

  v3 = a2[6];
  v4 = a2[4];
  v5 = a2[7];
  v11 = *(_OWORD *)a2;
  *(_QWORD *)&v6 = *((unsigned int *)a2 + 5);
  v14[0] = v3;
  v7 = a2[8];
  v13 = LODWORD(v6);
  v12 = v4;
  v14[1] = v5;
  v15 = v7;
  *(float *)&v6 = sub_14023F704(*(float *)&v6, v4);
  *a1 = *(float *)&v6;
  sub_14007B2A0((__int64)&v11, (float *)&v11, v6);
  *(_QWORD *)&v8 = HIDWORD(v11) ^ 0x8000000080000000uLL;
  *(float *)&v8 = sub_14023F704(*(float *)&v8, v12);
  a1[2] = *(float *)&v8;
  sub_14007B2A0((__int64)&v11, v14, v8);
  a1[1] = sub_14023F704(v14[0], v15);
  return sub_1401F8B20((unsigned __int64)&v10 ^ v16);
}

// 140279870: using guessed type __int128 xmmword_140279870;

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

//----- (000000014009EA20) ----------------------------------------------------
void            sub_14009EA20(int a1, int a2)
{
  signed int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // eax

  if ( a2 != -1 )
  {
    v2 = -1;
    v3 = a1;
    v4 = 7166LL * a2;
    if ( (int)dword_140404A6C[v4 + 280658139] > 0 )
      v2 = dword_140404A6C[v4 + 280658140];
    v5 = 0;
    if ( !dword_140404A6C[280648133] )
      v5 = BYTE1(dword_140404A6C[284024821]) != 0;
    if ( !dword_140404A6C[73991653] )
    {
      v5 = 3;
      if ( BYTE1(dword_140404A6C[284024821]) )
        v5 = 2;
    }
    if ( !dword_140404A6C[280648133] )
    {
      if ( !BYTE1(dword_140404A6C[284024770]) && BYTE1(dword_140404A6C[284024642]) )
        sub_140116B00(v3, 1u, v5, v5 ^ 1);
      if ( LOBYTE(dword_140404A6C[284024767]) && !LOBYTE(dword_140404A6C[284024639]) )
        sub_140116B00(v3, 8u, v5, v5 ^ 1);
      if ( v2 == -1
        || (v6 = 1760LL * v2, ((dword_140404A6C[v6 + 278845898] - 25) & 0xFFFFFFF7) != 0)
        || dword_140404A6C[v6 + 278846052] != 1 )
      {
        if ( !BYTE2(dword_140404A6C[284024772]) && BYTE2(dword_140404A6C[284024644]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !HIBYTE(dword_140404A6C[284024772]) && HIBYTE(dword_140404A6C[284024644]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 4;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !LOBYTE(dword_140404A6C[284024773]) && LOBYTE(dword_140404A6C[284024645]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 5;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !BYTE1(dword_140404A6C[284024773]) && BYTE1(dword_140404A6C[284024645]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 6;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !BYTE2(dword_140404A6C[284024773]) && BYTE2(dword_140404A6C[284024645]) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 7;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
      }
      v7 = dword_140404A6C[280649843];
      if ( dword_140404A6C[280649843] )
      {
        if ( dword_140404A6C[284024634] )
        {
          if ( !dword_140404A6C[284024594] )
            v7 = 0;
          dword_140404A6C[280649843] = v7;
        }
      }
      else if ( dword_140404A6C[280649844] )
      {
        dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
        dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
        dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
        dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = -1;
        dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
      }
      if ( dword_140404A6C[280649840] || v7 )
      {
        v8 = dword_140404A6C[280649847];
      }
      else
      {
        if ( !dword_140404A6C[284024633] )
        {
LABEL_49:
          dword_140404A6C[280649847] = 0;
          return;
        }
        v8 = dword_140404A6C[280649847];
        if ( !dword_140404A6C[284024593] )
          v8 = 1;
        dword_140404A6C[280649847] = v8;
      }
      if ( !dword_140404A6C[284024633] )
        goto LABEL_49;
      if ( v8 )
        dword_140404A6C[3597 * v3 + 71856325] |= 1u;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18329CC38: using guessed type unsigned int;
// 18329CC48: using guessed type unsigned int;

//----- (000000014009F050) ----------------------------------------------------
__int64            sub_14009F050(int a1, __int64 a2, double a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r8d
  unsigned int v10; // r10d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  int v27; // r8d
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  unsigned int *v31; // rcx
  int v32; // eax
  unsigned int v33; // r11d
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // esi
  int v37; // ebx
  char v38; // r12
  __int64 v39; // rcx
  float v40; // xmm1_4
  float v41; // xmm0_4
  __int64 v42; // rcx
  float v43; // xmm1_4
  float v44; // xmm0_4
  char v45; // r13
  unsigned __int8 v46; // al
  unsigned int v47; // ecx
  int v48; // r8d
  char v49; // al
  __int64 v50; // r14
  int v51; // r8d
  unsigned int v52; // edx
  char v53; // al
  unsigned int v54; // r10d
  unsigned int v55; // ebx
  unsigned int v56; // eax
  unsigned __int8 v57; // al
  unsigned int v58; // ecx
  __int64 v59; // rdx
  char v60; // al
  unsigned __int8 v61; // al
  unsigned int v62; // ecx
  int v63; // r8d
  __int64 v64; // rdx
  char v65; // al
  __int64 v66; // rdx
  char v67; // r9
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  unsigned int v72; // eax
  __int64 v74; // [rsp+0h] [rbp-60h] BYREF
  int v75; // [rsp+20h] [rbp-40h]
  int v76; // [rsp+24h] [rbp-3Ch]
  __int64 v77; // [rsp+28h] [rbp-38h]
  __int128 v78; // [rsp+30h] [rbp-30h] BYREF
  __int128 v79; // [rsp+40h] [rbp-20h]
  float v80; // [rsp+50h] [rbp-10h]
  __int64 v81; // [rsp+58h] [rbp-8h]

  v3 = 0;
  v4 = a1;
  v75 = a1;
  dword_140404A6C[438291413] = 2;
  if ( dword_140404A6C[283831311] == 1 )
  {
    dword_140404A6C[280649838] = 1;
    v5 = 1;
    dword_140404A6C[283831484] = 0;
  }
  else
  {
    dword_140404A6C[283831484] = 1;
    v5 = 0;
    if ( !dword_140404A6C[283831311] && a1 != -1 && dword_140404A6C[280649838] )
      sub_140118B70(a1);
  }
  sub_14003A0F0();
  dword_140404A6C[284024595] = dword_140404A6C[284024635];
  *(_OWORD *)&dword_140404A6C[284024557] = *(_OWORD *)&dword_140404A6C[284024597];
  *(_OWORD *)&dword_140404A6C[284024561] = *(_OWORD *)&dword_140404A6C[284024601];
  *(_OWORD *)&dword_140404A6C[284024565] = *(_OWORD *)&dword_140404A6C[284024605];
  *(_OWORD *)&dword_140404A6C[284024569] = *(_OWORD *)&dword_140404A6C[284024609];
  *(_OWORD *)&dword_140404A6C[284024573] = *(_OWORD *)&dword_140404A6C[284024613];
  *(_OWORD *)&dword_140404A6C[284024577] = *(_OWORD *)&dword_140404A6C[284024617];
  *(_OWORD *)&dword_140404A6C[284024581] = *(_OWORD *)&dword_140404A6C[284024621];
  *(_OWORD *)&dword_140404A6C[284024585] = *(_OWORD *)&dword_140404A6C[284024625];
  *(_OWORD *)&dword_140404A6C[284024589] = *(_OWORD *)&dword_140404A6C[284024629];
  *(_QWORD *)&dword_140404A6C[284024593] = *(_QWORD *)&dword_140404A6C[284024633];
  dword_140404A6C[284024635] = sr_menu_relative_mouse(&v76, (int *)&v77);
  dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
  dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
  *(float *)&dword_140404A6C[284024599] = (float)v76;
  *(float *)&dword_140404A6C[284024600] = (float)(int)v77;
  dword_140404A6C[284024597] = 1140850688;
  dword_140404A6C[284024598] = 1134559232;
  sub_140198E40();
  if ( BYTE1(dword_140404A6C[284024775]) )
  {
    BYTE1(dword_140404A6C[284024775]) = 0;
    sub_140095FC0(v7, v6, v8);
  }
  v9 = dword_140404A6C[468760166];
  v10 = dword_140404A6C[468760165];
  v11 = 0;
  for ( dword_140404A6C[280649848] = 0; v9 != v10; dword_140404A6C[468760166] = v9 )
  {
    if ( v11 < 32 )
    {
      dword_140404A6C[5 * v11 + 280649849] = dword_140404A6C[5 * v9 + 468760167];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649852] = dword_140404A6C[5 * v9 + 468760169];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649851] = dword_140404A6C[5 * v9 + 468760168];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649853] = dword_140404A6C[5 * v9 + 468760170];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649850] = dword_140404A6C[5 * v9 + 468760171];
      v11 = ++dword_140404A6C[280649848];
    }
    v9 = ((_WORD)v9 + 1) & 0x3FF;
  }
  if ( (_DWORD)v4 != -1 )
  {
    v12 = (int)dword_140404A6C[3597 * v4 + 71856292];
    if ( (_DWORD)v12 != -1 )
    {
      v13 = 7166 * v12;
      if ( (int)dword_140404A6C[7166 * v12 + 280651318] > 0 && (int)dword_140404A6C[v13 + 280658139] > 0 )
      {
        v14 = (int)dword_140404A6C[v13 + 280658140];
        if ( (_DWORD)v14 != -1 && dword_140404A6C[1760 * v14 + 278845898] == 39 )
        {
          sub_1400A1640(v4, v14);
          v11 = dword_140404A6C[280649848];
        }
      }
    }
  }
  v15 = 2;
  v16 = (__int64)&dword_140404A6C[284024765];
  v17 = &dword_140404A6C[284024637];
  do
  {
    v17 += 32;
    v18 = *(_OWORD *)v16;
    v19 = *(_OWORD *)(v16 + 16);
    v16 += 128;
    *((_OWORD *)v17 - 8) = v18;
    v20 = *(_OWORD *)(v16 - 96);
    *((_OWORD *)v17 - 7) = v19;
    v21 = *(_OWORD *)(v16 - 80);
    *((_OWORD *)v17 - 6) = v20;
    v22 = *(_OWORD *)(v16 - 64);
    *((_OWORD *)v17 - 5) = v21;
    v23 = *(_OWORD *)(v16 - 48);
    *((_OWORD *)v17 - 4) = v22;
    v24 = *(_OWORD *)(v16 - 32);
    *((_OWORD *)v17 - 3) = v23;
    v25 = *(_OWORD *)(v16 - 16);
    *((_OWORD *)v17 - 2) = v24;
    *((_OWORD *)v17 - 1) = v25;
    --v15;
  }
  while ( v15 );
  v26 = *(unsigned __int16 *)(v16 + 64);
  v27 = 0;
  v28 = *(_OWORD *)(v16 + 16);
  *(_OWORD *)v17 = *(_OWORD *)v16;
  v29 = *(_OWORD *)(v16 + 32);
  *((_OWORD *)v17 + 1) = v28;
  v30 = *(_OWORD *)(v16 + 48);
  *((_OWORD *)v17 + 2) = v29;
  *((_OWORD *)v17 + 3) = v30;
  *((_WORD *)v17 + 32) = v26;
  *((_BYTE *)v17 + 66) = *(_BYTE *)(v16 + 66);
  if ( v11 > 0 )
  {
    v31 = &dword_140404A6C[280649851];
    do
    {
      if ( !*(v31 - 1) )
      {
        v16 = (int)*v31;
        if ( (unsigned int)(v16 - 1) <= 0xFE )
        {
          v32 = *(v31 - 2);
          if ( v32 )
          {
            if ( v32 == 1 )
              *((_BYTE *)&dword_140404A6C[284024765] + v16) = 0;
          }
          else
          {
            *((_BYTE *)&dword_140404A6C[284024765] + v16) = 1;
          }
        }
      }
      ++v27;
      v31 += 5;
    }
    while ( v27 < v11 );
  }
  if ( dword_140404A6C[309078285] )
    sub_1400387E0();
  if ( dword_140404A6C[283831311] || !v5 )
  {
    v33 = dword_140404A6C[280649838];
    if ( dword_140404A6C[280649838] )
    {
      dword_140404A6C[280649840] = 1;
      goto LABEL_39;
    }
  }
  else
  {
    v33 = 0;
    dword_140404A6C[280649838] = 0;
  }
  v34 = dword_140404A6C[280649840];
  if ( !dword_140404A6C[284024633] )
    v34 = 0;
  dword_140404A6C[280649840] = v34;
LABEL_39:
  dword_140404A6C[280649839] = v33;
  if ( !dword_140404A6C[283785909] && LOBYTE(dword_140404A6C[284024775]) && !LOBYTE(dword_140404A6C[284024647]) )
  {
    LOBYTE(dword_140404A6C[283785913]) = 0;
    dword_140404A6C[283785909] = 1;
  }
  if ( dword_140404A6C[19065870] )
  {
    if ( HIBYTE(dword_140404A6C[284024769]) && !HIBYTE(dword_140404A6C[284024641]) )
      dword_140404A6C[283831479] ^= 1u;
    if ( BYTE2(dword_140404A6C[284024769]) )
    {
      v35 = dword_140404A6C[283831480];
      if ( !BYTE2(dword_140404A6C[284024641]) )
        v35 = 1;
      dword_140404A6C[283831480] = v35;
    }
    if ( LOBYTE(dword_140404A6C[284024768]) && !LOBYTE(dword_140404A6C[284024640]) )
      dword_140404A6C[283831481] ^= 1u;
    v36 = dword_140404A6C[284021982];
    if ( BYTE1(dword_140404A6C[284024778]) )
      v36 = -1;
    dword_140404A6C[284021982] = v36;
    if ( BYTE2(dword_140404A6C[284024772]) )
    {
      v37 = 1;
      dword_140404A6C[284021982] = -1;
      dword_140404A6C[19065878] = 1;
      v36 = -1;
    }
    else
    {
      v37 = dword_140404A6C[19065878];
    }
    v38 = BYTE1(dword_140404A6C[284024821]);
    if ( HIBYTE(dword_140404A6C[284024772]) )
    {
      v37 = 2;
      dword_140404A6C[19065878] = 2;
      if ( BYTE1(dword_140404A6C[284024821]) )
      {
        dword_140404A6C[284024395] = dword_140404A6C[284024388];
        dword_140404A6C[284024396] = dword_140404A6C[284024389];
        dword_140404A6C[284024397] = dword_140404A6C[284024390];
        v78 = xmmword_140278D30;
        v80 = 1.0;
        v79 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v78, (float *)&v78 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
        sub_14007B2A0((__int64)&v78, (float *)&v78, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
        *(_QWORD *)&a3 = dword_140404A6C[284024393];
        v37 = dword_140404A6C[19065878];
        v36 = dword_140404A6C[284021982];
        v38 = BYTE1(dword_140404A6C[284024821]);
        v39 = 7LL * (int)dword_140404A6C[19065878];
        v40 = *((float *)&v79 + 3) * *(float *)&dword_140404A6C[284024393];
        *(float *)&dword_140404A6C[v39 + 284024381] = (float)(*((float *)&v79 + 2)
                                                            * *(float *)&dword_140404A6C[284024393])
                                                    + *(float *)&dword_140404A6C[v39 + 284024381];
        v41 = v80 * *(float *)&a3;
        *(float *)&dword_140404A6C[v39 + 284024382] = v40 + *(float *)&dword_140404A6C[v39 + 284024382];
        *(float *)&dword_140404A6C[v39 + 284024383] = v41 + *(float *)&dword_140404A6C[v39 + 284024383];
        dword_140404A6C[v39 + 284024384] = dword_140404A6C[284024391];
        dword_140404A6C[v39 + 284024385] = dword_140404A6C[284024392];
      }
    }
    if ( LOBYTE(dword_140404A6C[284024773]) )
    {
      v37 = 3;
      dword_140404A6C[19065878] = 3;
      if ( v38 )
      {
        dword_140404A6C[284024402] = dword_140404A6C[284024388];
        dword_140404A6C[284024403] = dword_140404A6C[284024389];
        dword_140404A6C[284024404] = dword_140404A6C[284024390];
        v78 = xmmword_140278D30;
        v80 = 1.0;
        v79 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v78, (float *)&v78 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
        sub_14007B2A0((__int64)&v78, (float *)&v78, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
        *(_QWORD *)&a3 = dword_140404A6C[284024393];
        v37 = dword_140404A6C[19065878];
        v36 = dword_140404A6C[284021982];
        v38 = BYTE1(dword_140404A6C[284024821]);
        v42 = 7LL * (int)dword_140404A6C[19065878];
        v43 = *((float *)&v79 + 3) * *(float *)&dword_140404A6C[284024393];
        *(float *)&dword_140404A6C[v42 + 284024381] = (float)(*((float *)&v79 + 2)
                                                            * *(float *)&dword_140404A6C[284024393])
                                                    + *(float *)&dword_140404A6C[v42 + 284024381];
        v44 = v80 * *(float *)&a3;
        *(float *)&dword_140404A6C[v42 + 284024382] = v43 + *(float *)&dword_140404A6C[v42 + 284024382];
        *(float *)&dword_140404A6C[v42 + 284024383] = v44 + *(float *)&dword_140404A6C[v42 + 284024383];
        dword_140404A6C[v42 + 284024384] = dword_140404A6C[284024391];
        dword_140404A6C[v42 + 284024385] = dword_140404A6C[284024392];
      }
    }
    v45 = dword_140404A6C[284024648];
    if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
    {
      v46 = v36;
      if ( v36 >= 0 )
      {
        LOBYTE(v47) = v36 + 1;
        if ( v38 )
          LOBYTE(v47) = v36 - 1;
      }
      else
      {
        LOBYTE(v47) = 0;
        v46 = -1;
      }
      v47 = (unsigned __int8)v47;
      v48 = v46;
      while ( 1 )
      {
        v16 = 28664LL * v47;
        if ( *(unsigned int *)((char *)&dword_140404A6C[280651303] + v16) )
        {
          if ( *(int *)((char *)&dword_140404A6C[280651318] + v16) > 0
            && *(unsigned int *)((char *)&dword_140404A6C[280658438] + v16) <= 2 )
          {
            break;
          }
        }
        v49 = 1;
        if ( v38 )
          v49 = -1;
        v47 = (unsigned __int8)(v47 + v49);
        if ( v47 == v48 )
          goto LABEL_82;
      }
      v36 = v47;
      dword_140404A6C[284021982] = v47;
    }
LABEL_82:
    if ( v37 == 1 )
    {
      sub_140105180(1, v16, a3);
    }
    else
    {
      sub_140105470(v37, v16, a3);
      if ( v36 != -1 )
        sub_14002EDF0(v37, (__int64)&dword_140404A6C[7166 * v36 + 280651335]);
    }
    v33 = dword_140404A6C[280649838];
  }
  else
  {
    v36 = dword_140404A6C[284021982];
    v38 = BYTE1(dword_140404A6C[284024821]);
    v45 = dword_140404A6C[284024648];
  }
  if ( (_DWORD)v4 != -1 && !dword_140404A6C[309078285] )
  {
    v77 = v4;
    v50 = 3597 * v4;
    v51 = dword_140404A6C[v50 + 71856345];
    if ( v51 >= 0 )
    {
      v52 = dword_140404A6C[v50 + 71856342];
      dword_140404A6C[21 * (int)dword_140404A6C[v50 + 71856362] + 71856367 + v50] = 0;
      dword_140404A6C[21 * (int)dword_140404A6C[v50 + 71856362] + 71856368 + v50] = v52;
      dword_140404A6C[21 * (int)dword_140404A6C[v50 + 71856362] + 71856369 + v50] = v51;
      *(_OWORD *)&dword_140404A6C[21 * (int)dword_140404A6C[v50 + 71856362] + 71856372 + v50] = *(_OWORD *)&dword_140404A6C[v50 + 71856346];
      v53 = dword_140404A6C[v50 + 71856362] + 1;
      dword_140404A6C[v50 + 71856345] = -1;
      dword_140404A6C[v50 + 71856362] = v53 & 0x3F;
      LOBYTE(dword_140404A6C[v50 + 71856346]) = 0;
      if ( dword_140404A6C[v50 + 71856342] - 14 <= 5 )
        dword_140404A6C[v50 + 71857986] = 0;
      dword_140404A6C[v50 + 71857986] = 0;
    }
    v54 = dword_140404A6C[283831312];
    v55 = dword_140404A6C[280648133];
    if ( dword_140404A6C[283831312] == 4 && dword_140404A6C[v50 + 71856266] )
    {
      if ( dword_140404A6C[v50 + 71856342] == 1
        && HIBYTE(dword_140404A6C[284024774])
        && !HIBYTE(dword_140404A6C[284024646]) )
      {
        v56 = dword_140404A6C[284021984] ^ 1;
        dword_140404A6C[284021984] ^= 1u;
      }
      else
      {
        v56 = dword_140404A6C[284021984];
      }
      if ( v56 )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
          v36 = -1;
        dword_140404A6C[284021982] = v36;
        if ( LOBYTE(dword_140404A6C[284024776]) )
        {
          if ( !v45 )
          {
            if ( v36 >= 0 )
            {
              v57 = v36 + 1;
              if ( v38 )
                v57 = v36 - 1;
            }
            else
            {
              v57 = 0;
              LOBYTE(v36) = -1;
            }
            v58 = v57;
            while ( 1 )
            {
              v59 = 7166LL * v58;
              if ( dword_140404A6C[v59 + 280651303] )
              {
                if ( (int)dword_140404A6C[v59 + 280651318] > 0 )
                  break;
              }
              v60 = 1;
              if ( v38 )
                v60 = -1;
              v58 = (unsigned __int8)(v58 + v60);
              if ( v58 == (unsigned __int8)v36 )
                goto LABEL_140;
            }
            dword_140404A6C[284021982] = v58;
          }
        }
      }
    }
    else
    {
      dword_140404A6C[284021984] = 0;
      if ( (dword_140404A6C[283831312] == 3 || dword_140404A6C[283831312] - 5 <= 2)
        && !dword_140404A6C[284021983]
        && !dword_140404A6C[280648133] )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
          v36 = -1;
        if ( LOBYTE(dword_140404A6C[284024776]) && !v45 )
        {
          v61 = v36;
          if ( v36 >= 0 )
          {
            LOBYTE(v62) = v36 + 1;
            if ( v38 )
              LOBYTE(v62) = v36 - 1;
          }
          else
          {
            LOBYTE(v62) = 0;
            v61 = -1;
          }
          v62 = (unsigned __int8)v62;
          v63 = v61;
          while ( 1 )
          {
            v64 = 7166LL * v62;
            if ( dword_140404A6C[v64 + 280651303] )
            {
              if ( (int)dword_140404A6C[v64 + 280651318] > 0 && dword_140404A6C[v64 + 280658438] <= 2 )
                break;
            }
            v65 = 1;
            if ( v38 )
              v65 = -1;
            v62 = (unsigned __int8)(v62 + v65);
            if ( v62 == v63 )
              goto LABEL_137;
          }
          v36 = v62;
        }
LABEL_137:
        if ( dword_140404A6C[283831448] != 2 )
          v36 = -1;
        dword_140404A6C[284021982] = v36;
      }
    }
LABEL_140:
    v66 = dword_140404A6C[280649843];
    dword_140404A6C[280649844] = dword_140404A6C[280649843];
    *(_QWORD *)&dword_140404A6C[280649845] = 0;
    v67 = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[280651037]);
    if ( !v67 )
      v66 = 0;
    dword_140404A6C[280649843] = v66;
    if ( !dword_140404A6C[280648133] )
    {
      dword_140404A6C[280649846] = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[280651039]) != 0;
      if ( !v67 || *((_BYTE *)&dword_140404A6C[284024637] + (int)dword_140404A6C[280651037]) )
      {
        if ( !(_DWORD)v66 )
          dword_140404A6C[280649845] = dword_140404A6C[284024634] != 0;
      }
      else
      {
        dword_140404A6C[280649843] = 1;
      }
    }
    v68 = (int)dword_140404A6C[v50 + 71856292];
    dword_140404A6C[v50 + 71856339] = 0;
    if ( (_DWORD)v68 != -1 )
    {
      v66 = 28664 * v68;
      if ( (int)dword_140404A6C[7166 * v68 + 280651318] > 0 )
      {
        v69 = *(int *)((char *)&dword_140404A6C[280651313] + v66);
        dword_140404A6C[v50 + 71856339] = 1;
        if ( (_DWORD)v69 != -1 )
        {
          if ( dword_140404A6C[24944 * dword_140404A6C[5210 * v69 + 129716710] + 346707719] == 1
            || *(unsigned int *)((char *)&dword_140404A6C[280651314] + v66) )
          {
            dword_140404A6C[v50 + 71856339] = 2;
          }
          else
          {
            dword_140404A6C[v50 + 71856339] = 3;
          }
        }
        goto LABEL_175;
      }
    }
    v70 = v77;
    v71 = 3597 * v77;
    *(_QWORD *)&dword_140404A6C[v71 + 71856293] = 0;
    *(_QWORD *)&dword_140404A6C[v71 + 71856295] = 0;
    dword_140404A6C[v50 + 71856325] = 0;
    *(_QWORD *)&dword_140404A6C[v50 + 71856331] = 0;
    if ( v54 == 3 || v54 - 5 <= 2 || v54 == 4 && dword_140404A6C[v50 + 71856266] )
    {
      if ( !v33 )
      {
        sub_140105180(1, v66, a3);
        goto LABEL_164;
      }
    }
    else if ( !v33 )
    {
LABEL_164:
      if ( !v55 )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
        {
          v3 = 64;
          dword_140404A6C[v50 + 71856325] = 64;
        }
        if ( HIBYTE(dword_140404A6C[284024772]) )
        {
          v3 |= 0x80u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( LOBYTE(dword_140404A6C[284024773]) )
        {
          v3 |= 0x100u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( BYTE1(dword_140404A6C[284024773]) )
        {
          v3 |= 0x200u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( BYTE1(dword_140404A6C[284024770]) )
          dword_140404A6C[3597 * v70 + 71856325] = v3 | 0x1000;
      }
    }
LABEL_175:
    v72 = dword_140404A6C[v50 + 71856339];
    switch ( v72 )
    {
      case 1u:
        sub_1400A21B0(v75);
        break;
      case 2u:
        sub_1400A0EB0(v75);
        break;
      case 3u:
        sub_1400A1D20(v75);
        break;
    }
    dword_140404A6C[v50 + 71856340] = dword_140404A6C[v50 + 71856339];
  }
  return sub_1401F8B20((unsigned __int64)&v74 ^ v81);
}

// 14009F41D: conditional instruction was optimized away because rdx.8 is in (1..FF)
// 14009F1ED: variable 'v7' is possibly undefined
// 14009F1ED: variable 'v6' is possibly undefined
// 14009F1ED: variable 'v8' is possibly undefined
// 14009F874: variable 'v16' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAC4: using guessed type unsigned int;
// 18329B180: using guessed type unsigned int;
// 18329CC24: using guessed type unsigned int;
// 18329CC28: using guessed type unsigned int;
// 18329CC2C: using guessed type unsigned int;
// 18329CC38: using guessed type unsigned int;
// 18329CC3C: using guessed type unsigned int;
// 18329CC40: using guessed type unsigned int;
// 18329CC4C: using guessed type unsigned int;
// 183E93540: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFD4C: using guessed type unsigned int;
// 183EBFD5C: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F79DEC: using guessed type unsigned int;
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
// 183F7C620: using guessed type unsigned int;
// 183F7C630: using guessed type unsigned int;
// 183F7C640: using guessed type unsigned int;
// 183F7C650: using guessed type unsigned int;
// 183F7C660: using guessed type unsigned int;
// 183F7C670: using guessed type unsigned int;
// 183F7C680: using guessed type unsigned int;
// 183F7C690: using guessed type unsigned int;
// 183F7C6A0: using guessed type unsigned int;
// 183F7C6B0: using guessed type unsigned int;
// 183F7C6B8: using guessed type unsigned int;
// 183F7C6C0: using guessed type unsigned int;
// 183F7C6C4: using guessed type unsigned int;
// 183F7C6D0: using guessed type unsigned int;
// 183F7C6E0: using guessed type unsigned int;
// 183F7C6F0: using guessed type unsigned int;
// 183F7C700: using guessed type unsigned int;
// 183F7C710: using guessed type unsigned int;
// 183F7C720: using guessed type unsigned int;
// 183F7C730: using guessed type unsigned int;
// 183F7C740: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;
// 183F7C758: using guessed type unsigned int;
// 183F7C78C: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1B0032400: using guessed type int[];
// 1B0032404: using guessed type unsigned int;

//----- (000000014009FE00) ----------------------------------------------------
// Candidate gameplay/menu mouse-camera state handler: uses SDL relative mouse mode/state and menu actions.
__int64            gameplay_mouse_camera_state_candidate(int a1, __int64 a2, double a3)
{
  __int64 v3; // r14
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  signed int i; // ebx
  int v9; // esi
  unsigned int *v10; // rdi
  unsigned int *v11; // rbx
  unsigned int v12; // eax
  unsigned int *v13; // rcx
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // ebp
  float v22; // xmm6_4
  int v23; // esi
  float v24; // xmm7_4
  unsigned int *v25; // rdi
  int *v26; // rbx
       char *v27; // r8
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int *v30; // rbx
       char *v31; // rsi
  int v32; // edi
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // r10
  __int64 v36; // r9
  int v37; // r8d
  int v38; // r9d
  unsigned int v39; // r10d
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int *v44; // rcx
  __int64 v45; // rdx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rax
  __int64 v55; // r8
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rbx
  int v62; // r8d
  unsigned int v63; // edx
  char v64; // al
  unsigned int v65; // edx
  char v66; // r9
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // eax
  __int64 v74; // [rsp+0h] [rbp-2E8h] BYREF
  int v75; // [rsp+50h] [rbp-298h]
  int v76; // [rsp+54h] [rbp-294h]
  int v77; // [rsp+58h] [rbp-290h] BYREF
  int v78; // [rsp+5Ch] [rbp-28Ch] BYREF
  unsigned __int8 v79[512]; // [rsp+60h] [rbp-288h] BYREF
  __int64 v80; // [rsp+260h] [rbp-88h]

  v3 = a1;
  sub_14003A0F0();
  if ( dword_140404A6C[283831310] == 3 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v4 = dword_140404A6C[283831311];
  if ( !dword_140404A6C[283831311] && (_DWORD)v3 != -1 )
  {
    sub_140118B70(v3);
    v4 = dword_140404A6C[283831311];
  }
  v77 = 0;
  v78 = 0;
  if ( v4 != 1 )
    goto LABEL_73;
  dword_140404A6C[280649838] = 1;
  switch ( dword_140404A6C[283831444] )
  {
    case 0u:
      *(_OWORD *)&dword_140404A6C[70087067] = xmmword_140279800;
      dword_140404A6C[70087074] = 41;
      if ( (unsigned int)sr_DrawMenuButton("Return to Game") )
      {
        dword_140404A6C[283831311] = 0;
        dword_140404A6C[280649838] = 0;
        sub_140198F0B(1, v5, v6);
        dword_140404A6C[283831484] = 1;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
      if ( dword_140404A6C[456202453] )
      {
        if ( dword_140404A6C[73991608] )
        {
          if ( dword_140404A6C[278384725] )
          {
            dword_140404A6C[70087074] = 12;
            if ( (unsigned int)sr_DrawMenuButton("Invite") )
            {
              v7 = sub_1401988C0(4u);
              dword_140404A6C[278384988] = v7;
              for ( i = 0; i < (int)dword_140404A6C[278384988]; ++i )
              {
                sub_140198820(
                  (__int64 *)&dword_140404A6C[132LL * i + 278384989],
                  (__int64)&dword_140404A6C[132 * i + 278384992],
                  i,
                  4u);
                v7 = dword_140404A6C[278384988];
              }
              v9 = 0;
              if ( v7 > 0 )
              {
                v10 = &dword_140404A6C[280650009];
                v11 = &dword_140404A6C[278384991];
                do
                {
                  *v11 = sub_140198A10(*((_QWORD *)v11 - 1));
                  v11 += 132;
                  ++v9;
                  *v10++ = 0;
                }
                while ( v9 < (int)dword_140404A6C[278384988] );
              }
              dword_140404A6C[283831444] = 1;
            }
          }
        }
      }
      dword_140404A6C[70087074] = 16;
      if ( (_DWORD)v3 != -1 && (unsigned int)sr_DrawMenuButton("Mute Player") )
      {
        v12 = 0;
        v13 = &dword_140404A6C[71859139];
        dword_140404A6C[280649318] = 0;
        v14 = 0;
        v15 = 0;
        do
        {
          if ( *(v13 - 2886) && !*v13 && v15 != v3 )
          {
            dword_140404A6C[v12 + 280649319] = v14;
            v12 = ++dword_140404A6C[280649318];
          }
          ++v14;
          ++v15;
          v13 += 3597;
        }
        while ( v14 < 256 );
        dword_140404A6C[283831444] = 3;
      }
      if ( dword_140404A6C[284024501] != -1 )
      {
        if ( dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856266] )
        {
          dword_140404A6C[70087074] = 4;
          if ( (unsigned int)sr_DrawMenuButton("Admin") )
          {
            dword_140404A6C[438886365] = -1;
            dword_140404A6C[283831444] = 2;
          }
        }
      }
      dword_140404A6C[70087074] = 18;
      if ( (unsigned int)sr_DrawMenuButton("Options") )
      {
        dword_140404A6C[283831310] = 3;
        dword_140404A6C[280649838] = 1;
      }
      dword_140404A6C[70087074] = 8;
      if ( (unsigned int)sr_DrawMenuButton("Exit Game") )
      {
        sub_140095FC0(v17, v16, v18);
        dword_140404A6C[283831310] = 0;
      }
      goto LABEL_67;
    case 1u:
      *(_OWORD *)&dword_140404A6C[70087067] = xmmword_1402797F0;
      dword_140404A6C[70087074] = 41;
      v19 = sr_DrawMenuButton("Back");
      v20 = dword_140404A6C[283831444];
      v21 = 0;
      if ( v19 )
        v20 = 0;
      v22 = 128.0;
      v23 = 0;
      v24 = 64.0;
      dword_140404A6C[283831444] = v20;
      dword_140404A6C[70087069] = 1128267776;
      dword_140404A6C[70087070] = 1105199104;
      if ( (int)dword_140404A6C[278384988] > 0 )
      {
        v25 = &dword_140404A6C[280650009];
        v26 = (int *)&dword_140404A6C[278384991];
        do
        {
          *(float *)&dword_140404A6C[70087067] = v22;
          *(float *)&dword_140404A6C[70087068] = v24;
          if ( *v26 > 0 )
          {
            v27 = (     char *)&dword_140404A6C[132 * v23 + 278384992];
            if ( *v25 )
            {
              sub_140158AB0(v79, "Invited %s", v27);
              dword_140404A6C[70087076] = 1;
            }
            else
            {
              sub_140158AB0(v79, "%s", v27);
            }
            sr_DrawMenuButtonSelectable(v79, (int *)&dword_140404A6C[280649842], v23);
            ++v21;
            v22 = v22 + 192.0;
            if ( (v21 & 3) == 0 )
            {
              v22 = 128.0;
              v24 = v24 + 28.0;
            }
          }
          ++v23;
          v26 += 132;
          ++v25;
        }
        while ( v23 < (int)dword_140404A6C[278384988] );
      }
      if ( dword_140404A6C[280649842] != -1 )
      {
        sub_140198C10(*(_QWORD *)&dword_140404A6C[132 * dword_140404A6C[280649842] + 278384989]);
        dword_140404A6C[dword_140404A6C[280649842] + 280650009] = 1;
        dword_140404A6C[280649842] = -1;
      }
LABEL_67:
      v35 = (int)dword_140404A6C[284024501];
      v36 = (int)dword_140404A6C[438886365];
      if ( v77 && dword_140404A6C[438886365] != -1 )
      {
        dword_140404A6C[283831444] = 0;
        dword_140404A6C[3597 * dword_140404A6C[284024501]
                      + 71856367
                      + 21 * dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856362]] = 4;
        dword_140404A6C[3597 * v35 + 71856368 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = dword_140404A6C[20 * v36 + 438881247];
        dword_140404A6C[3597 * v35 + 71856369 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = dword_140404A6C[438886366];
        dword_140404A6C[3597 * v35 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v35 + 71856362] + 1) & 0x3F;
      }
      if ( v78 && (_DWORD)v36 != -1 )
      {
        dword_140404A6C[283831444] = 0;
        dword_140404A6C[3597 * v35 + 71856367 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = 5;
        dword_140404A6C[3597 * v35 + 71856368 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = dword_140404A6C[20 * v36 + 438881247];
        dword_140404A6C[3597 * v35 + 71856369 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = dword_140404A6C[438886367];
        dword_140404A6C[3597 * v35 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v35 + 71856362] + 1) & 0x3F;
      }
LABEL_73:
      if ( !dword_140404A6C[280649838] )
      {
        dword_140404A6C[284024595] = dword_140404A6C[284024635];
        *(_OWORD *)&dword_140404A6C[284024557] = *(_OWORD *)&dword_140404A6C[284024597];
        *(_OWORD *)&dword_140404A6C[284024561] = *(_OWORD *)&dword_140404A6C[284024601];
        *(_OWORD *)&dword_140404A6C[284024565] = *(_OWORD *)&dword_140404A6C[284024605];
        *(_OWORD *)&dword_140404A6C[284024569] = *(_OWORD *)&dword_140404A6C[284024609];
        *(_OWORD *)&dword_140404A6C[284024573] = *(_OWORD *)&dword_140404A6C[284024613];
        *(_OWORD *)&dword_140404A6C[284024577] = *(_OWORD *)&dword_140404A6C[284024617];
        *(_OWORD *)&dword_140404A6C[284024581] = *(_OWORD *)&dword_140404A6C[284024621];
        *(_OWORD *)&dword_140404A6C[284024585] = *(_OWORD *)&dword_140404A6C[284024625];
        *(_OWORD *)&dword_140404A6C[284024589] = *(_OWORD *)&dword_140404A6C[284024629];
        *(_QWORD *)&dword_140404A6C[284024593] = *(_QWORD *)&dword_140404A6C[284024633];
        dword_140404A6C[284024635] = sr_menu_relative_mouse(&v75, &v76);
        dword_140404A6C[284024597] = 1140850688;
        dword_140404A6C[284024598] = 1134559232;
        dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
        dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
        *(float *)&dword_140404A6C[284024599] = (float)v75;
        *(float *)&dword_140404A6C[284024600] = (float)v76;
        if ( dword_140404A6C[280649839] )
        {
          dword_140404A6C[284024635] = sr_menu_relative_mouse(&v76, &v75);
          dword_140404A6C[284024597] = 1140850688;
          dword_140404A6C[284024598] = 1134559232;
          dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
          dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
          *(float *)&dword_140404A6C[284024599] = (float)v76;
          *(float *)&dword_140404A6C[284024600] = (float)v75;
        }
      }
      break;
    case 2u:
      *(_OWORD *)&dword_140404A6C[70087067] = xmmword_1402797F0;
      dword_140404A6C[70087074] = 41;
      v28 = sr_DrawMenuButton("Back");
      v29 = dword_140404A6C[283831444];
      if ( v28 )
        v29 = 0;
      dword_140404A6C[283831444] = v29;
      dword_140404A6C[70087069] = 1128267776;
      dword_140404A6C[70087070] = 1105199104;
      if ( dword_140404A6C[438886365] == -1 )
      {
        v30 = &dword_140404A6C[438881264];
        v31 = (     char *)&dword_140404A6C[438881248];
        dword_140404A6C[70087067] = 1124073472;
        v32 = 0;
        dword_140404A6C[70087068] = 1115684864;
        do
        {
          if ( *(v30 - 19) )
          {
            sub_140158AB0(v79, "%s %03d-%04d", v31, *v30 / 0x2710, *v30 % 0x2710);
            sr_DrawMenuButtonSelectable(v79, (int *)&dword_140404A6C[438886365], v32);
          }
          ++v32;
          v31 += 80;
          v30 += 20;
        }
        while ( v32 < 256 );
      }
      else
      {
        dword_140404A6C[70087067] = 1107296256;
        dword_140404A6C[70087068] = 1124073472;
        sr_DrawMenuTextBox("Time", (__int64)&dword_140404A6C[438886366], 0, 0x5F5E100u);
        dword_140404A6C[70087067] = 1134559232;
        dword_140404A6C[70087068] = 1124073472;
        sub_140158AB0(v79, "Ban %s", (     char *)&dword_140404A6C[20 * dword_140404A6C[438886365] + 438881248]);
        sr_DrawMenuButtonSelectable(v79, &v77, 1);
        dword_140404A6C[70087067] = 1107296256;
        dword_140404A6C[70087068] = 1127219200;
        sr_DrawMenuTextBox("Rating", (__int64)&dword_140404A6C[438886367], 0, 0x2710u);
        dword_140404A6C[70087067] = 1134559232;
        dword_140404A6C[70087068] = 1127219200;
        sub_140158AB0(v79, "Set Rating %s", (     char *)&dword_140404A6C[20 * dword_140404A6C[438886365] + 438881248]);
        sr_DrawMenuButtonSelectable(v79, &v78, 1);
      }
      goto LABEL_67;
    case 3u:
      *(_OWORD *)&dword_140404A6C[70087067] = xmmword_1402797E0;
      dword_140404A6C[70087074] = 41;
      v33 = sr_DrawMenuButton("Back");
      v34 = dword_140404A6C[283831444];
      if ( v33 )
        v34 = 0;
      *(_QWORD *)&a3 = 1136656384;
      *(_QWORD *)&dword_140404A6C[70087081] = (uintptr_t)sub_1400FE870;
      dword_140404A6C[70087068] = 1115684864;
      dword_140404A6C[70087070] = 1105199104;
      dword_140404A6C[283831444] = v34;
      dword_140404A6C[70087069] = 1128267776;
      dword_140404A6C[70087067] = 1128267776;
      *(_QWORD *)&dword_140404A6C[70087079] = 0;
      if ( (unsigned int)sub_1400707C0(
                           "mutelist",
                           640.0,
                           384.0,
                           160.0,
                           0x42400000u,
                           0,
                           &dword_140404A6C[280649317],
                           0,
                           0,
                           dword_140404A6C[280649318])
        && (dword_140404A6C[280649317] & 0x80000000) == 0
        && (int)dword_140404A6C[280649317] < (int)dword_140404A6C[280649318] )
      {
        sub_140117820(dword_140404A6C[dword_140404A6C[280649317] + 280649319]);
      }
      goto LABEL_67;
  }
  v37 = dword_140404A6C[468760166];
  v38 = 0;
  v39 = dword_140404A6C[468760165];
  dword_140404A6C[280649839] = dword_140404A6C[280649838];
  for ( dword_140404A6C[280649848] = 0; v37 != v39; dword_140404A6C[468760166] = v37 )
  {
    if ( v38 < 32 )
    {
      dword_140404A6C[5 * v38 + 280649849] = dword_140404A6C[5 * v37 + 468760167];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649852] = dword_140404A6C[5 * v37 + 468760169];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649851] = dword_140404A6C[5 * v37 + 468760168];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649853] = dword_140404A6C[5 * v37 + 468760170];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649850] = dword_140404A6C[5 * v37 + 468760171];
      v38 = ++dword_140404A6C[280649848];
    }
    v37 = ((_WORD)v37 + 1) & 0x3FF;
  }
  if ( (_DWORD)v3 != -1 )
  {
    v40 = (int)dword_140404A6C[3597 * v3 + 71856292];
    if ( (_DWORD)v40 != -1 )
    {
      v41 = 7166 * v40;
      if ( (int)dword_140404A6C[v41 + 280651318] > 0 && (int)dword_140404A6C[v41 + 280658139] > 0 )
      {
        v42 = (int)dword_140404A6C[v41 + 280658140];
        if ( (_DWORD)v42 != -1 && dword_140404A6C[1760 * v42 + 278845898] == 39 )
        {
          sub_1400A1640(v3, v42);
          v38 = dword_140404A6C[280649848];
        }
      }
    }
  }
  v43 = 2;
  v44 = &dword_140404A6C[284024637];
  v45 = (__int64)&dword_140404A6C[284024765];
  do
  {
    v44 += 32;
    v46 = *(_OWORD *)v45;
    v47 = *(_OWORD *)(v45 + 16);
    v45 += 128;
    *((_OWORD *)v44 - 8) = v46;
    v48 = *(_OWORD *)(v45 - 96);
    *((_OWORD *)v44 - 7) = v47;
    v49 = *(_OWORD *)(v45 - 80);
    *((_OWORD *)v44 - 6) = v48;
    v50 = *(_OWORD *)(v45 - 64);
    *((_OWORD *)v44 - 5) = v49;
    v51 = *(_OWORD *)(v45 - 48);
    *((_OWORD *)v44 - 4) = v50;
    v52 = *(_OWORD *)(v45 - 32);
    *((_OWORD *)v44 - 3) = v51;
    v53 = *(_OWORD *)(v45 - 16);
    *((_OWORD *)v44 - 2) = v52;
    *((_OWORD *)v44 - 1) = v53;
    --v43;
  }
  while ( v43 );
  v54 = *(unsigned __int16 *)(v45 + 64);
  v55 = 0;
  v56 = *(_OWORD *)(v45 + 16);
  *(_OWORD *)v44 = *(_OWORD *)v45;
  v57 = *(_OWORD *)(v45 + 32);
  *((_OWORD *)v44 + 1) = v56;
  v58 = *(_OWORD *)(v45 + 48);
  *((_OWORD *)v44 + 2) = v57;
  *((_OWORD *)v44 + 3) = v58;
  *((_WORD *)v44 + 32) = v54;
  *((_BYTE *)v44 + 66) = *(_BYTE *)(v45 + 66);
  if ( v38 > 0 )
  {
    v44 = &dword_140404A6C[280649851];
    do
    {
      if ( !*(v44 - 1) )
      {
        v45 = (int)*v44;
        if ( (unsigned int)(v45 - 1) <= 0xFE )
        {
          v59 = *(v44 - 2);
          if ( v59 )
          {
            if ( v59 == 1 )
              *((_BYTE *)&dword_140404A6C[284024765] + v45) = 0;
          }
          else
          {
            *((_BYTE *)&dword_140404A6C[284024765] + v45) = 1;
          }
        }
      }
      v55 = (unsigned int)(v55 + 1);
      v44 += 5;
    }
    while ( (int)v55 < v38 );
  }
  if ( BYTE1(dword_140404A6C[284024775]) )
  {
    BYTE1(dword_140404A6C[284024775]) = 0;
    dword_140404A6C[283831311] = 1;
    dword_140404A6C[280649838] = 1;
    dword_140404A6C[283831484] = 0;
    sub_140198F0B(0, v45, v55);
  }
  if ( dword_140404A6C[19065870] )
    sub_1400A3970((__int64)v44, v45, a3);
  if ( (_DWORD)v3 != -1 )
  {
    sub_1400A3770(v3);
    if ( !dword_140404A6C[283785909] )
    {
      if ( LOBYTE(dword_140404A6C[284024775]) && !LOBYTE(dword_140404A6C[284024647]) )
      {
        LOBYTE(dword_140404A6C[283785913]) = 0;
        dword_140404A6C[283785909] = 1;
      }
      if ( HIBYTE(dword_140404A6C[284024770]) && !HIBYTE(dword_140404A6C[284024642]) )
      {
        v60 = dword_140404A6C[283785910] + 1;
        if ( (signed int)(dword_140404A6C[283785910] + 1) > 2 )
          v60 = 0;
        dword_140404A6C[283785910] = v60;
      }
    }
    v61 = 3597 * v3;
    v62 = dword_140404A6C[3597 * v3 + 71856345];
    if ( v62 >= 0 )
    {
      v63 = dword_140404A6C[v61 + 71856342];
      dword_140404A6C[21 * (int)dword_140404A6C[v61 + 71856362] + 71856367 + v61] = 0;
      dword_140404A6C[21 * (int)dword_140404A6C[v61 + 71856362] + 71856368 + v61] = v63;
      dword_140404A6C[21 * (int)dword_140404A6C[v61 + 71856362] + 71856369 + v61] = v62;
      *(_OWORD *)&dword_140404A6C[21 * (int)dword_140404A6C[v61 + 71856362] + 71856372 + v61] = *(_OWORD *)&dword_140404A6C[v61 + 71856346];
      v64 = dword_140404A6C[v61 + 71856362] + 1;
      dword_140404A6C[v61 + 71856345] = -1;
      dword_140404A6C[v61 + 71856362] = v64 & 0x3F;
      LOBYTE(dword_140404A6C[v61 + 71856346]) = 0;
      if ( dword_140404A6C[v61 + 71856342] - 14 <= 5 && SLOBYTE(dword_140404A6C[v61 + 71856345]) < 0 )
        dword_140404A6C[v61 + 71857986] = 0;
      if ( (dword_140404A6C[v61 + 71856345] & 0x1000000) != 0 )
        dword_140404A6C[v61 + 71857986] = 0;
    }
    if ( HIBYTE(dword_140404A6C[284024775]) )
    {
      if ( !HIBYTE(dword_140404A6C[284024647]) )
      {
        if ( dword_140404A6C[280649838] || (dword_140404A6C[280649838] = 1, !dword_140404A6C[v61 + 71856342]) )
          dword_140404A6C[280649838] = 0;
      }
    }
    if ( BYTE2(dword_140404A6C[284024766]) && !BYTE2(dword_140404A6C[284024638]) )
      dword_140404A6C[284021985] ^= 1u;
    if ( LOBYTE(dword_140404A6C[284024769]) && !LOBYTE(dword_140404A6C[284024641]) )
      dword_140404A6C[284021986] ^= 1u;
    v65 = dword_140404A6C[280649843];
    dword_140404A6C[280649844] = dword_140404A6C[280649843];
    *(_QWORD *)&dword_140404A6C[280649845] = 0;
    v66 = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[280651037]);
    if ( !v66 )
      v65 = 0;
    dword_140404A6C[280649843] = v65;
    if ( !dword_140404A6C[280648133] )
    {
      dword_140404A6C[280649846] = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[280651039]) != 0;
      if ( !v66 || *((_BYTE *)&dword_140404A6C[284024637] + (int)dword_140404A6C[280651037]) )
      {
        if ( !v65 )
          dword_140404A6C[280649845] = dword_140404A6C[284024634] != 0;
      }
      else
      {
        dword_140404A6C[280649843] = 1;
      }
    }
    v67 = (int)dword_140404A6C[v61 + 71856292];
    dword_140404A6C[v61 + 71856339] = 0;
    if ( (_DWORD)v67 == -1 || (v68 = 7166 * v67, (int)dword_140404A6C[7166 * v67 + 280651318] <= 0) )
    {
      v70 = dword_140404A6C[283831312];
      v71 = 3597 * v3;
      *(_QWORD *)&dword_140404A6C[v71 + 71856293] = 0;
      *(_QWORD *)&dword_140404A6C[v71 + 71856295] = 0;
      dword_140404A6C[v61 + 71856325] = 0;
      *(_QWORD *)&dword_140404A6C[v61 + 71856331] = 0;
      if ( ((_DWORD)v70 == 3 || (unsigned int)(v70 - 5) <= 2 || (_DWORD)v70 == 4 && dword_140404A6C[v61 + 71856266])
        && !dword_140404A6C[280649838] )
      {
        sub_140105180(1, v70, a3);
      }
    }
    else
    {
      v69 = (int)dword_140404A6C[v68 + 280651313];
      dword_140404A6C[v61 + 71856339] = 1;
      if ( (_DWORD)v69 != -1 )
      {
        if ( dword_140404A6C[24944 * dword_140404A6C[5210 * v69 + 129716710] + 346707719] == 1
          || dword_140404A6C[v68 + 280651314] )
        {
          dword_140404A6C[v61 + 71856339] = 2;
        }
        else
        {
          dword_140404A6C[v61 + 71856339] = 3;
        }
      }
    }
    v72 = dword_140404A6C[v61 + 71856339];
    switch ( v72 )
    {
      case 1u:
        sub_1400A21B0(v3);
        break;
      case 2u:
        sub_1400A0EB0(v3);
        break;
      case 3u:
        sub_1400A1D20(v3);
        break;
    }
    dword_140404A6C[v61 + 71856340] = dword_140404A6C[v61 + 71856339];
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
