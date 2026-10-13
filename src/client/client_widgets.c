#include "shared_client.h"


//----- (000000014006F380) ----------------------------------------------------
__int64            sub_14006F380(unsigned __int8 *a1)
{
  unsigned int v2; // eax
  signed int v3; // eax
  signed int v4; // esi
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // esi
  int v9; // [rsp+68h] [rbp+10h]

  v2 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v3 = sub_140070380(
         v2,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v6 = 122LL * v3;
  dword_140404A6C[70087065] = v3;
  dword_140404A6C[v6 + 70087115] = 0;
  sub_14006F120((__int64)&dword_140404A6C[v6 + 70087151], (char *)a1);
  v7 = 0;
  if ( !dword_140404A6C[70317817] && dword_140404A6C[70317856] && v4 == dword_140404A6C[70087109] )
    dword_140404A6C[v6 + 70087215] = 1;
  if ( dword_140404A6C[v6 + 70087215] )
  {
    v8 = sub_140071C20("Test4", 64.0, 64.0, 320.0, 0x43A00000u, 1095761920, 768);
    if ( (unsigned int)sr_DrawMenuButton("ADD 10") )
    {
      v7 = 10;
      dword_140404A6C[v6 + 70087215] = 0;
    }
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 512.0;
    if ( (unsigned int)sr_DrawMenuButton("ADD 11") )
    {
      v7 = 11;
      dword_140404A6C[v6 + 70087215] = 0;
    }
    sub_140077230();
  }
  else
  {
    v8 = v9;
  }
  if ( v8 == -1 || dword_140404A6C[70087103] != v8 )
    dword_140404A6C[v6 + 70087215] = 0;
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (000000014006FD10) ----------------------------------------------------
__int64            sub_14006FD10(unsigned __int8 *a1)
{
  unsigned int v2; // eax
  signed int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rbx

  v2 = sub_14006C670(a1, (dword_140404A6C[70087064] << 16) + (dword_140404A6C[70087046] << 8));
  v3 = sub_140070380(
         v2,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v6 = 122LL * v3;
  dword_140404A6C[70087065] = v3;
  dword_140404A6C[v6 + 70087115] = 13;
  sub_14006F120((__int64)&dword_140404A6C[v6 + 70087151], (char *)a1);
  if ( !dword_140404A6C[70317817]
    && dword_140404A6C[70317856]
    && v4 == dword_140404A6C[70087109]
    && v4 == dword_140404A6C[70087106] )
  {
    dword_140404A6C[v6 + 70087215] ^= 1u;
  }
  if ( dword_140404A6C[v6 + 70087215] )
  {
    dword_140404A6C[70087064] = v4;
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + 16.0;
    if ( (int)dword_140404A6C[70087047] < 16 )
    {
      dword_140404A6C[dword_140404A6C[70087047] + 70087048] = v4;
      ++dword_140404A6C[70087047];
    }
  }
  return dword_140404A6C[v6 + 70087215];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61088: using guessed type unsigned int;
// 150F610CC: using guessed type unsigned int;
// 150F610D0: using guessed type unsigned int;

//----- (000000014006FEB0) ----------------------------------------------------
__int64            sub_14006FEB0(unsigned __int8 *a1, __int64 a2, float a3, float a4)
{
  unsigned int v6; // eax
  signed int v7; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 result; // rax
  double v11; // xmm2_8

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v9 = 122LL * v7;
  dword_140404A6C[70087065] = v7;
  *(float *)&dword_140404A6C[v9 + 70087219] = a3;
  *(float *)&dword_140404A6C[v9 + 70087220] = a4;
  dword_140404A6C[v9 + 70087115] = 4;
  *(_QWORD *)&dword_140404A6C[v9 + 70087217] = a2;
  dword_140404A6C[70318068] = 24;
  result = sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  if ( v8 == dword_140404A6C[70087106] )
  {
    *(_QWORD *)&v11 = dword_140404A6C[468760126];
    *(float *)&v11 = *(float *)&dword_140404A6C[468760126] - *(float *)&dword_140404A6C[v9 + 70087135];
    return sub_140075A40(v8, *(float *)&dword_140404A6C[468760125] - *(float *)&dword_140404A6C[v9 + 70087134], v11);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;
// 151042A3C: using guessed type unsigned int;

//----- (0000000140070200) ----------------------------------------------------
__int64            sub_140070200(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  signed int v7; // eax
  int v8; // edi
  __int64 v9; // rbx
  double v10; // xmm2_8

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v9 = 122LL * v7;
  dword_140404A6C[70087065] = v7;
  dword_140404A6C[v9 + 70087115] = 3;
  *(_QWORD *)&dword_140404A6C[v9 + 70087215] = a2;
  dword_140404A6C[70318068] = a3;
  sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  if ( v8 != dword_140404A6C[70087106] )
    return 0;
  *(_QWORD *)&v10 = dword_140404A6C[468760126];
  *(float *)&v10 = *(float *)&dword_140404A6C[468760126] - *(float *)&dword_140404A6C[v9 + 70087135];
  return sub_140075A40(v8, *(float *)&dword_140404A6C[468760125] - *(float *)&dword_140404A6C[v9 + 70087134], v10);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;
// 151042A3C: using guessed type unsigned int;

//----- (0000000140070380) ----------------------------------------------------
// Immediate-mode widget allocator/layout helper. Reuses/allows up to 1024 widget slots, records local/screen rects, style/parent, and advances cursor by size + 4.
__int64            sub_140070380(unsigned int a1, float a2, float a3, float a4, unsigned int a5, unsigned int a6)
{
  char v6; // di
  float v7; // xmm6_4
  float v8; // xmm7_4
  signed int v9; // ebx
  signed int v10; // r8d
  unsigned int *v11; // rax
  int v13; // esi
  int i; // edx
  int v15; // ecx
  unsigned int *v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx

  v6 = dword_140404A6C[70087075];
  v7 = a2;
  v8 = a3;
  v9 = -1;
  v10 = (dword_140404A6C[70087075] >> 8) & 1;
  dword_140404A6C[70087075] = 0;
  v11 = &dword_140404A6C[70087114];
  v13 = 0;
  for ( i = 0; i < 1024; ++i )
  {
    v15 = *(v11 - 1);
    if ( v15 > v10 && v15 < 3 && *v11 == a1 )
    {
      v9 = i;
      v13 = *(v11 - 1);
    }
    v11 += 122;
  }
  if ( v9 == -1 )
  {
    v9 = 0;
    v16 = &dword_140404A6C[70087113];
    while ( *v16 )
    {
      ++v9;
      v16 += 122;
      if ( (__int64)v16 >= (__int64)&dword_140404A6C[70212041] )
        return 0xFFFFFFFFLL;
    }
    if ( v9 == -1 )
      return 0xFFFFFFFFLL;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[122 * v9 + 70087113]), 0, 0x1E8u);
  }
  if ( (v6 & 1) != 0 )
  {
    v7 = a2 + (float)(a4 * -0.5);
  }
  else if ( (v6 & 2) != 0 )
  {
    v7 = a2 - a4;
  }
  if ( (v6 & 4) != 0 )
  {
    v8 = a3 + (float)(*(float *)&a5 * -0.5);
  }
  else if ( (v6 & 8) != 0 )
  {
    v8 = a3 - *(float *)&a5;
  }
  v18 = 122LL * v9;
  dword_140404A6C[v18 + 70087113] = 3;
  dword_140404A6C[v18 + 70087114] = a1;
  dword_140404A6C[v18 + 70087118] = 1;
  dword_140404A6C[v18 + 70087123] = dword_140404A6C[70087066];
  dword_140404A6C[v18 + 70087122] = dword_140404A6C[70087046];
  *(float *)&dword_140404A6C[v18 + 70087125] = v7;
  *(float *)&dword_140404A6C[v18 + 70087126] = v8;
  *(float *)&dword_140404A6C[v18 + 70087127] = a4;
  dword_140404A6C[v18 + 70087128] = a5;
  *(float *)&dword_140404A6C[v18 + 70087134] = v7;
  *(float *)&dword_140404A6C[v18 + 70087135] = v8;
  *(float *)&dword_140404A6C[v18 + 70087136] = a4;
  dword_140404A6C[v18 + 70087137] = a5;
  if ( dword_140404A6C[70087046] != -1 )
  {
    *(float *)&dword_140404A6C[v18 + 70087134] = v7
                                               + *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290981];
    *(float *)&dword_140404A6C[v18 + 70087135] = (float)(*(float *)&dword_140404A6C[98 * dword_140404A6C[70087046]
                                                                                  + 70290982]
                                                       - *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046]
                                                                                  + 70290905])
                                               + v8;
  }
  v19 = 122LL * v9;
  dword_140404A6C[v19 + 70087129] = dword_140404A6C[70087087];
  dword_140404A6C[v19 + 70087130] = dword_140404A6C[70087088];
  dword_140404A6C[v19 + 70087131] = dword_140404A6C[70087089];
  dword_140404A6C[v19 + 70087132] = dword_140404A6C[70087090];
  dword_140404A6C[v18 + 70087133] = a6;
  if ( dword_140404A6C[70087073] )
  {
    dword_140404A6C[70087106] = v9;
    dword_140404A6C[70087073] = 0;
  }
  if ( dword_140404A6C[70087076] )
  {
    dword_140404A6C[v18 + 70087119] = 1;
    dword_140404A6C[70087076] = 0;
  }
  else
  {
    dword_140404A6C[v18 + 70087119] = 0;
  }
  if ( dword_140404A6C[70087074] )
  {
    dword_140404A6C[v18 + 70087120] = dword_140404A6C[70087074];
    if ( dword_140404A6C[70087074] - 1 <= 0x1FE
      && (dword_140404A6C[dword_140404A6C[70087074] + 70317269] == -1
       || dword_140404A6C[70087046] == dword_140404A6C[70087103]) )
    {
      dword_140404A6C[dword_140404A6C[70087074] + 70317269] = v9;
    }
  }
  else
  {
    dword_140404A6C[v18 + 70087120] = 0;
  }
  dword_140404A6C[70087074] = 0;
  dword_140404A6C[v18 + 70087124] = dword_140404A6C[70087077];
  dword_140404A6C[70087077] = 0;
  if ( *(_QWORD *)&dword_140404A6C[70087081] )
  {
    dword_140404A6C[v18 + 70087146] = dword_140404A6C[70087079];
    dword_140404A6C[v18 + 70087147] = dword_140404A6C[70087080];
    *(_QWORD *)&dword_140404A6C[v18 + 70087149] = *(_QWORD *)&dword_140404A6C[70087081];
  }
  *(_QWORD *)&dword_140404A6C[70087081] = 0;
  *(_QWORD *)&dword_140404A6C[v19 + 70087138] = -1;
  *(_QWORD *)&dword_140404A6C[v19 + 70087140] = -1;
  *(_QWORD *)&dword_140404A6C[v19 + 70087142] = -1;
  if ( dword_140404A6C[70326263] )
  {
    v20 = dword_140404A6C[70326520];
    if ( (int)dword_140404A6C[70326520] < 16 )
    {
      v21 = dword_140404A6C[70326521];
      if ( (int)dword_140404A6C[70326521] >= 16 )
        goto LABEL_43;
      dword_140404A6C[16 * dword_140404A6C[70326521] + 70326264 + dword_140404A6C[70326520]] = v9;
      v20 = dword_140404A6C[70326520];
    }
    v21 = dword_140404A6C[70326521];
LABEL_43:
    if ( dword_140404A6C[70087083] )
    {
      dword_140404A6C[70326520] = 0;
      dword_140404A6C[70326521] = v21 + 1;
    }
    else
    {
      dword_140404A6C[70326520] = v20 + 1;
    }
  }
  if ( dword_140404A6C[70087078] )
  {
    v22 = dword_140404A6C[70087111];
    if ( v13 <= 1 )
      v22 = v9;
    dword_140404A6C[70087111] = v22;
  }
  dword_140404A6C[70087078] = 0;
  return (unsigned int)v9;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61084: using guessed type unsigned int;
// 150F610D4: using guessed type unsigned int;
// 150F610F0: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F610F8: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 150F61100: using guessed type unsigned int;
// 150F61104: using guessed type unsigned int;
// 150F61108: using guessed type unsigned int;
// 150F6110C: using guessed type unsigned int;
// 150F61110: using guessed type unsigned int;
// 150F61128: using guessed type unsigned int;
// 150F6112C: using guessed type unsigned int;
// 150F61130: using guessed type unsigned int;
// 150F61134: using guessed type unsigned int;
// 150F61174: using guessed type unsigned int;
// 150F61188: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;

//----- (00000001400707C0) ----------------------------------------------------
__int64            sub_1400707C0(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v12; // ebp
  signed int v13; // eax
  float v14; // xmm2_4
  signed int v15; // esi
  __int64 v16; // rdi
  int v17; // eax
  unsigned int *v18; // rbx
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // r8d
  int v32; // eax
  signed int v33; // r8d
  signed int *v34; // rcx

  v12 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v13 = sub_140070380(
          v12,
          *(float *)&dword_140404A6C[70087067],
          *(float *)&dword_140404A6C[70087068],
          a2,
          LODWORD(a3),
          dword_140404A6C[70087071]);
  v14 = a3 + 4.0;
  v15 = v13;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + v14;
  }
  else
  {
    *(float *)&dword_140404A6C[70087086] = a3 + 4.0;
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + (float)(a2 + 4.0);
  }
  v16 = 122LL * v13;
  dword_140404A6C[70087065] = v13;
  dword_140404A6C[v16 + 70087215] = a6;
  *(_QWORD *)&dword_140404A6C[v16 + 70087225] = (uint64)(uintptr_t)(a7);
  dword_140404A6C[v16 + 70087115] = 8;
  dword_140404A6C[v16 + 70087222] = *a7;
  *(_QWORD *)&dword_140404A6C[v16 + 70087217] = a8;
  dword_140404A6C[v16 + 70087219] = a9;
  dword_140404A6C[v16 + 70087220] = a10;
  dword_140404A6C[v16 + 70087230] = 0;
  *(float *)&dword_140404A6C[v16 + 70087228] = a4;
  v17 = (int)(float)(a2 / a4);
  dword_140404A6C[v16 + 70087229] = a5;
  if ( v17 < 1 )
    v17 = 1;
  dword_140404A6C[v16 + 70087227] = v17;
  sub_14006F120((__int64)&dword_140404A6C[v16 + 70087151], (char *)a1);
  v18 = &dword_140404A6C[v16 + 70087232];
  v19 = (float)((int)(dword_140404A6C[v16 + 70087227] + a10 - 1) / (int)dword_140404A6C[v16 + 70087227])
      * (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229]);
  if ( v19 <= a3 )
  {
    *v18 = 0;
    dword_140404A6C[v16 + 70087234] = 0;
  }
  else
  {
    v20 = v19 - a3;
    v21 = (float)(a3 * a3) / v19;
    v22 = *(float *)&dword_140404A6C[v16 + 70087125] + *(float *)&dword_140404A6C[v16 + 70087127];
    *(float *)&dword_140404A6C[v16 + 70087234] = v20;
    sub_140070FF0(
      v12,
      v22 - 16.0,
      *(float *)&dword_140404A6C[v16 + 70087126],
      16.0,
      LODWORD(a3),
      COERCE_UNSIGNED_INT(fmaxf(v21, 16.0)),
      (float *)&dword_140404A6C[v16 + 70087232],
      0.0,
      v20);
  }
  if ( v15 != dword_140404A6C[70087109] )
    goto LABEL_28;
  v23 = *(float *)v18;
  v24 = *(float *)&dword_140404A6C[468760126] - *(float *)&dword_140404A6C[v16 + 70087135];
  v25 = *(float *)&dword_140404A6C[468760125] - *(float *)&dword_140404A6C[v16 + 70087134];
  v26 = (float)(int)dword_140404A6C[137297772];
  dword_140404A6C[137297772] = 0;
  v27 = v23 - (float)(v26 * 16.0);
  if ( v27 < 0.0 )
    v27 = 0.0;
  v28 = *(float *)&dword_140404A6C[v16 + 70087234];
  *(float *)v18 = v27;
  if ( v27 > v28 )
  {
    *(float *)v18 = v28;
    v27 = v28;
  }
  v29 = 0;
  if ( (int)(float)(v25
                  / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087228])) >= 0 )
    v29 = (int)(float)(v25
                     / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087228]));
  v30 = dword_140404A6C[v16 + 70087227];
  v31 = v30 - 1;
  if ( v29 <= (int)(v30 - 1) )
    v31 = v29;
  v32 = 0;
  if ( (int)(float)((float)(v27 + v24)
                  / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229])) >= 0 )
    v32 = (int)(float)((float)(v27 + v24)
                     / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229]));
  v33 = v30 * v32 + v31;
  if ( v33 > (int)(dword_140404A6C[v16 + 70087220] - 1) )
  {
LABEL_28:
    dword_140404A6C[v16 + 70087223] = -1;
    return 0;
  }
  dword_140404A6C[v16 + 70087223] = v33;
  if ( v33 == -1 || dword_140404A6C[70317817] || !dword_140404A6C[70317856] || v15 != dword_140404A6C[70087106] )
    return 0;
  v34 = *(signed int **)&dword_140404A6C[v16 + 70087225];
  dword_140404A6C[v16 + 70087222] = v33;
  if ( v34 )
    *v34 = v33;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;

//----- (00000001400711D0) ----------------------------------------------------
__int64            sub_1400711D0(unsigned __int8 *a1, float *a2, float a3, float a4, float a5)
{
  unsigned int v8; // eax
  signed int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __m128 v12; // xmm2
  __m128d v13; // xmm1
  int v14; // ecx
  float v15; // xmm2_4

  v8 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v9 = sub_140070380(
         v8,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v10 = v9;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v11 = 122LL * v9;
  dword_140404A6C[70087065] = v9;
  dword_140404A6C[v11 + 70087115] = 12;
  sub_14006F120((__int64)&dword_140404A6C[v11 + 70087151], (char *)a1);
  *(float *)&dword_140404A6C[v11 + 70087219] = a5;
  *(float *)&dword_140404A6C[v11 + 70087217] = a3;
  *(float *)&dword_140404A6C[v11 + 70087218] = a4;
  *(_QWORD *)&dword_140404A6C[v11 + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[v11 + 70087220] = 1098907648;
  if ( v10 == dword_140404A6C[70087106] )
  {
    if ( dword_140404A6C[70317817] )
    {
      v12 = ((__m128)_mm_cvtsi64_si128((long long)(((__m128)_mm_cvtsi32_si128((int)(dword_140404A6C)))[468760125])));
      SR_VEC_LANES(128, v12, f32)[0] = (float)((float)((float)(*(float *)&dword_140404A6C[468760125]
                                              - *(float *)&dword_140404A6C[v11 + 70087134])
                                      - 8.0)
                              / (float)(*(float *)&dword_140404A6C[v11 + 70087127] - 16.0))
                      * fmaxf(a4 - a3, 0.0);
      if ( LOBYTE(dword_140404A6C[70317069]) && a5 != 0.0 )
      {
        SR_VEC_LANES(128, v12, f32)[0] = (float)(SR_VEC_LANES(128, v12, f32)[0] / a5) + 0.5;
        v13 = _mm_cvtps_pd(v12);
        v14 = (int)SR_VEC_LANES(128, v13, f64)[0];
        if ( (double)v14 != SR_VEC_LANES(128, v13, f64)[0] )
          SR_VEC_LANES(128, v13, f64)[0] = (double)(v14 - (_mm_movemask_pd(_mm_unpacklo_pd(v13, v13)) & 1));
        SR_VEC_LANES(128, v12, f32)[0] = SR_VEC_LANES(128, v13, f64)[0] * a5;
      }
      v15 = fmaxf(SR_VEC_LANES(128, v12, f32)[0] + a3, a3);
      if ( v15 > a4 )
        v15 = a4;
      *a2 = v15;
    }
    else
    {
      dword_140404A6C[v11 + 70087116] = 0;
    }
  }
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (0000000140071640) ----------------------------------------------------
void            sub_140071640(char *a1)
{
  char *v2; // rdx
  unsigned int *v3; // rcx
  char v4; // al

  if ( (int)dword_140404A6C[70212041] < 1024 )
  {
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212043] = dword_140404A6C[70087046];
    v2 = a1;
    v3 = &dword_140404A6C[77 * dword_140404A6C[70212041] + 70212055];
    do
    {
      v4 = *v2++;
      *(_BYTE *)v3 = v4;
      v3 = (unsigned int *)((char *)v3 + 1);
    }
    while ( v4 );
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212042] = dword_140404A6C[70087066];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212044] = dword_140404A6C[70087067];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212045] = dword_140404A6C[70087068];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212050] = dword_140404A6C[70087071];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = dword_140404A6C[70087067];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = dword_140404A6C[70087068];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212053] = dword_140404A6C[70087071];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212054] = dword_140404A6C[70087071];
    if ( dword_140404A6C[70087046] != -1 )
    {
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290981]
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051];
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = (float)(*(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290982]
                                                                                    - *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290905])
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052];
    }
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212046] = dword_140404A6C[70087087];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212047] = dword_140404A6C[70087088];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212048] = dword_140404A6C[70087089];
    dword_140404A6C[77 * dword_140404A6C[70212041]++ + 70212049] = dword_140404A6C[70087090];
    if ( dword_140404A6C[70087083] )
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                           + (float)(*(float *)&dword_140404A6C[70087071] + 4.0);
    else
      *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                           + (float)(sub_14006F060(
                                                       dword_140404A6C[70087066],
                                                       a1,
                                                       *(float *)&dword_140404A6C[70087071])
                                                   + 4.0);
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (0000000140071AA0) ----------------------------------------------------
__int64            sub_140071AA0(unsigned __int8 *a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v6; // eax
  signed int v7; // eax
  signed int v8; // edi
  __int64 v9; // rbx

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
  if ( v7 == -1 )
    return 0;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v9 = 122LL * v7;
  dword_140404A6C[70087065] = v7;
  dword_140404A6C[v9 + 70087115] = 1;
  sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  *(_QWORD *)&dword_140404A6C[v9 + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[v9 + 70087217] = a3;
  if ( dword_140404A6C[70317817]
    || !dword_140404A6C[70317856]
    || v8 != dword_140404A6C[70087109]
    || v8 != dword_140404A6C[70087106] )
  {
    return 0;
  }
  *a2 ^= a3;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (00000001400745F0) ----------------------------------------------------
__int64            sub_1400745F0(unsigned int a1)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v4 = 0; // native width set below
  __int64 v5 = 0; // native width set below
  double v6; // xmm1_8
  float v7; // xmm3_4
  __int64 v8 = 0; // native width set below
  __int64 v9 = 0; // native width set below
  double v10; // xmm0_8
  __int64 v11 = 0; // native width set below
  __int64 v12 = 0; // native width set below
  int v13; // xmm0_4
  float v14; // xmm1_4
  __m128i v15; // xmm2
  unsigned int *v16; // rbx
  int i; // edi
  double v18; // xmm2_8
  double v19; // xmm1_8
  signed int v20; // eax
  signed int v21; // edi
  unsigned int *v22; // rbx
  int v23; // xmm1_4
  float v24; // xmm3_4
  __m128i v25; // xmm2
  int v26; // xmm0_4
  int v27; // xmm1_4
  float v28; // xmm1_4
  unsigned int *v29; // rcx
  int j; // edx
  __int64 k; // rbx
  __int64 v32; // rcx
  signed int v33; // eax
  __int64 v34; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400745F0[1120];
#define v36 (*(__int64 (*))(void *)(sr_frame_1400745F0 + 0)) /* [rsp+0h] */
#define v37 (*(int (*))(void *)(sr_frame_1400745F0 + 32)) /* [rsp+20h] */
#define v38 (*(int (*))(void *)(sr_frame_1400745F0 + 40)) /* [rsp+28h] */
#define v39 (*(int (*))(void *)(sr_frame_1400745F0 + 48)) /* [rsp+30h] */
#define v40 (*(int (*))(void *)(sr_frame_1400745F0 + 56)) /* [rsp+38h] */
#define v41 (*(int (*))(void *)(sr_frame_1400745F0 + 64)) /* [rsp+40h] */
#define v42 (*(_DWORD (*)[256])(void *)(sr_frame_1400745F0 + 80)) /* [rsp+50h] */
#define v43 (*(__int64 (*))(void *)(sr_frame_1400745F0 + 1104)) /* [rsp+450h] */

  if ( a1 <= 0xFF )
  {
    v2 = 98LL * (int)a1;
    v4=dword_140404A6C[v2+70290975];
    v5=dword_140404A6C[v2+70290975];
    v8=dword_140404A6C[v2+70290975];
    v9=dword_140404A6C[v2+70290900];
    v11=dword_140404A6C[v2+70290900];
    v12=dword_140404A6C[v2+70290979];
    if ( (unsigned int)sub_140075460(
                         *(float *)&dword_140404A6C[v2 + 70290973],
                         *(float *)&dword_140404A6C[v2 + 70290974],
                         *(float *)&dword_140404A6C[v2 + 70290975],
                         *(float *)&dword_140404A6C[v2 + 70290976]) )
    {
      qword_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777086]);
      v3 = 0;
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v4,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        dword_140404A6C[70087091],
        dword_140404A6C[70087092],
        dword_140404A6C[70087093],
        dword_140404A6C[70087094]);
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v5,
        *(float *)&dword_140404A6C[v2 + 70290900],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      *(_QWORD *)&v6 = dword_140404A6C[v2 + 70290976];
      v7 = *(float *)&dword_140404A6C[v2 + 70290900];
      *(float *)&v6 = (float)(*(float *)&v6 + *(float *)&dword_140404A6C[v2 + 70290974]) - v7;
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        v6,
        v8,
        v7,
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v9,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      *(_QWORD *)&v10 = dword_140404A6C[v2 + 70290973];
      *(float *)&v10 = (float)(*(float *)&v10 + *(float *)&dword_140404A6C[v2 + 70290975])
                     - *(float *)&dword_140404A6C[v2 + 70290900];
      sub_14006D660(
        v10,
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v11,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      if ( !dword_140404A6C[v2 + 70290972] )
      {
        v13 = 1056964608;
        if ( a1 == dword_140404A6C[70087104] )
          v13 = 1059061760;
        sub_14006D660(
          COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290977]),
          COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290978]),
          v12,
          *(float *)&dword_140404A6C[v2 + 70290980],
          0,
          v13,
          v13,
          v13,
          1065353216);
        v14 = *(float *)&dword_140404A6C[v2 + 70290977] + *(float *)&dword_140404A6C[v2 + 70290900];
        v15 = _mm_cvtsi32_si128((int)dword_140404A6C[v2+70290978]);
        *(float *)SR_VEC_LANES(128, v15, i32) = *(float *)SR_VEC_LANES(128, v15, i32) + 4.0;
        v41 = 1065353216;
        v40 = 1065353216;
        v39 = 1065353216;
        v38 = 1065353216;
        v37 = 64;
        sr_text_draw_recovered((char *)&dword_140404A6C[v2 + 70290908], v14 + 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v15))), *(float *)&dword_140404A6C[70087071], 64, sr_text_bits_float(v38), sr_text_bits_float(v39), sr_text_bits_float(v40), sr_text_bits_float(v41), NULL);
      }
      sub_140075340();
      if ( (unsigned int)sub_140075460(
                           *(float *)&dword_140404A6C[v2 + 70290981],
                           *(float *)&dword_140404A6C[v2 + 70290982],
                           *(float *)&dword_140404A6C[v2 + 70290983],
                           *(float *)&dword_140404A6C[v2 + 70290984]) )
      {
        v16 = &dword_140404A6C[70087122];
        for ( i = 0; i < 1024; ++i )
        {
          if ( *(v16 - 9) == 3 && *v16 == a1 && *(v16 - 4) )
          {
            *(_QWORD *)&v18 = v16[13];
            *(_QWORD *)&v19 = v16[12];
            dword_140404A6C[438291413] = v16[1];
            sub_140073430(i, v19, v18);
          }
          v16 += 122;
        }
        v20 = dword_140404A6C[70212041];
        v21 = 0;
        if ( (int)dword_140404A6C[70212041] > 0 )
        {
          v22 = &dword_140404A6C[70212049];
          do
          {
            if ( *(v22 - 6) == a1 )
            {
              v23 = *(v22 - 1);
              v24 = *((float *)v22 + 1);
              v25 = _mm_cvtsi32_si128((int)(v22[3]));
              v41 = *v22;
              v26 = *(v22 - 2);
              v40 = v23;
              v27 = *(v22 - 3);
              v39 = v26;
              v38 = v27;
              v28 = *((float *)v22 + 2);
              v37 = 64;
              sr_text_draw_recovered((char *)&dword_140404A6C[77 * v21 + 70212055], v28, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v25))), v24, 64, sr_text_bits_float(v38), sr_text_bits_float(v39), sr_text_bits_float(v40), sr_text_bits_float(v41), NULL);
              v20 = dword_140404A6C[70212041];
            }
            ++v21;
            v22 += 77;
          }
          while ( v21 < v20 );
        }
        v29 = &dword_140404A6C[70290893];
        for ( j = 0; j < 256; ++j )
        {
          if ( *(v29 - 2) == 3 && *v29 == a1 )
          {
            ++v3;
            v42[v29[2]] = j;
          }
          v29 += 98;
        }
        for ( k = v3 - 1; k >= 0; --k )
        {
          v32 = (int)v42[k];
          if ( dword_140404A6C[98 * v32 + 70290891] == 3 )
            sub_1400745F0(v32);
        }
        if ( (int)dword_140404A6C[70317864] <= 0
          || (v33 = dword_140404A6C[70317864] - 1, dword_140404A6C[70317864] = v33, v33 <= 0) )
        {
          (*(void (           **)(__int64))&dword_140404A6C[18215101])(3089);
        }
        else
        {
          v34 = 2LL * v33;
          dword_140404A6C[70318060] = dword_140404A6C[2 * v34 + 70317861];
          dword_140404A6C[70318062] = dword_140404A6C[2 * v34 + 70317863];
          dword_140404A6C[70318061] = dword_140404A6C[2 * v34 + 70317862];
          dword_140404A6C[70318063] = dword_140404A6C[2 * v34 + 70317864];
          sub_14007B7E0(
            *(float *)&dword_140404A6C[70318060],
            *(float *)&dword_140404A6C[70318061],
            *(float *)&dword_140404A6C[70318062],
            *(float *)&dword_140404A6C[70318063]);
        }
      }
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43

// 140074706: variable 'v4' is possibly undefined
// 14007475F: variable 'v5' is possibly undefined
// 1400747B6: variable 'v8' is possibly undefined
// 1400747FF: variable 'v9' is possibly undefined
// 140074856: variable 'v11' is possibly undefined
// 1400748CD: variable 'v12' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 150FDB190: using guessed type unsigned int;
// 15104270C: using guessed type unsigned int;
// 151042A1C: using guessed type unsigned int;
// 151042A20: using guessed type unsigned int;
// 151042A24: using guessed type unsigned int;
// 151042A28: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140074E50) ----------------------------------------------------
void sub_140074E50()
{
  int v0; // edi
  __int64 v1; // rbp
  unsigned int *v2; // r14
  unsigned int *v3; // r15
  int v4; // esi
  int *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  unsigned int *v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int *v19; // rax
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _DWORD *v25; // rcx
  unsigned int *v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int *v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rcx
  unsigned int *v38; // rcx
  unsigned int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 i; // rax
  unsigned int *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  _DWORD *v46; // rcx

  v0 = 0;
  dword_140404A6C[70326263] = 0;
  v1 = 0;
  v2 = &dword_140404A6C[70326264];
  v3 = &dword_140404A6C[70326249];
  do
  {
    v4 = 0;
    v5 = (int *)v3;
    v6 = 2;
    do
    {
      v7 = v5[15];
      if ( (_DWORD)v7 == -1 )
        goto LABEL_30;
      v8 = v5[16];
      if ( v8 == -1 )
      {
        if ( v4 <= 0 )
          goto LABEL_9;
        dword_140404A6C[122 * v7 + 70087141] = *v2;
        v9 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v7 + 70087141] = v8;
        v9 = v5[16];
      }
      dword_140404A6C[122 * v9 + 70087140] = v7;
LABEL_9:
      v10 = v6 - 2;
      v11 = v6 - 2;
      if ( v6 - 2 > 0 )
      {
        v12 = v5 + 31;
        do
        {
          if ( *v12 != -1 )
            break;
          --v11;
          --v12;
        }
        while ( v11 > 0 );
      }
      v13 = &dword_140404A6C[v1 + 70087029 + v11];
      v14 = v13[239251];
      if ( v14 == -1 )
      {
        if ( !v0 )
          goto LABEL_30;
        v17 = v6 - 2;
        if ( v10 > 0 )
        {
          do
          {
            if ( dword_140404A6C[v17 + 70326264] != -1 )
              break;
            --v17;
          }
          while ( v17 > 0 );
        }
        v15 = 122 * v7;
        dword_140404A6C[122 * v7 + 70087139] = dword_140404A6C[v17 + 70326264];
        v18 = (int)dword_140404A6C[v17 + 70326264];
        if ( dword_140404A6C[122 * v18 + 70087138] == -1 )
          dword_140404A6C[122 * v18 + 70087138] = v7;
LABEL_24:
        if ( dword_140404A6C[v15 + 70087138] == -1 )
        {
          if ( v10 > 0 )
          {
            v19 = v5 - 1;
            do
            {
              if ( *v19 != -1 )
                break;
              --v10;
              --v19;
            }
            while ( v10 > 0 );
          }
          dword_140404A6C[v15 + 70087138] = dword_140404A6C[v10 + 70326248 + v1];
        }
        goto LABEL_30;
      }
      v15 = 122 * v7;
      dword_140404A6C[122 * v7 + 70087139] = v14;
      v16 = (int)v13[239251];
      if ( dword_140404A6C[122 * v16 + 70087138] == -1 )
        dword_140404A6C[122 * v16 + 70087138] = v7;
      if ( v0 )
        goto LABEL_24;
LABEL_30:
      v20 = v5[16];
      if ( (_DWORD)v20 == -1 )
        goto LABEL_57;
      v21 = v5[17];
      if ( v21 == -1 )
      {
        if ( v4 + 1 <= 0 )
          goto LABEL_36;
        dword_140404A6C[122 * v20 + 70087141] = *v2;
        v22 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v20 + 70087141] = v21;
        v22 = v5[17];
      }
      dword_140404A6C[122 * v22 + 70087140] = v20;
LABEL_36:
      v23 = v6 - 1;
      v24 = v6 - 1;
      if ( v6 - 1 > 0 )
      {
        v25 = v5 + 32;
        do
        {
          if ( *v25 != -1 )
            break;
          --v24;
          --v25;
        }
        while ( v24 > 0 );
      }
      v26 = &dword_140404A6C[v1 + 70087029 + v24];
      v27 = v26[239251];
      if ( v27 == -1 )
      {
        if ( !v0 )
          goto LABEL_57;
        v30 = v6 - 1;
        if ( v23 > 0 )
        {
          do
          {
            if ( dword_140404A6C[v30 + 70326264] != -1 )
              break;
            --v30;
          }
          while ( v30 > 0 );
        }
        v28 = 122 * v20;
        dword_140404A6C[122 * v20 + 70087139] = dword_140404A6C[v30 + 70326264];
        v31 = (int)dword_140404A6C[v30 + 70326264];
        if ( dword_140404A6C[122 * v31 + 70087138] == -1 )
          dword_140404A6C[122 * v31 + 70087138] = v20;
LABEL_51:
        if ( dword_140404A6C[v28 + 70087138] == -1 )
        {
          if ( v23 > 0 )
          {
            v32 = v5;
            do
            {
              if ( *v32 != -1 )
                break;
              --v23;
              --v32;
            }
            while ( v23 > 0 );
          }
          dword_140404A6C[v28 + 70087138] = dword_140404A6C[v23 + 70326248 + v1];
        }
        goto LABEL_57;
      }
      v28 = 122 * v20;
      dword_140404A6C[122 * v20 + 70087139] = v27;
      v29 = (int)v26[239251];
      if ( dword_140404A6C[122 * v29 + 70087138] == -1 )
        dword_140404A6C[122 * v29 + 70087138] = v20;
      if ( v0 )
        goto LABEL_51;
LABEL_57:
      v33 = v5[17];
      if ( (_DWORD)v33 == -1 )
        goto LABEL_84;
      v34 = v5[18];
      if ( v34 == -1 )
      {
        if ( v4 + 2 <= 0 )
          goto LABEL_63;
        dword_140404A6C[122 * v33 + 70087141] = *v2;
        v35 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v33 + 70087141] = v34;
        v35 = v5[18];
      }
      dword_140404A6C[122 * v35 + 70087140] = v33;
LABEL_63:
      v36 = v6;
      if ( v6 > 0 )
      {
        v37 = v5 + 33;
        do
        {
          if ( *v37 != -1 )
            break;
          --v36;
          --v37;
        }
        while ( v36 > 0 );
      }
      v38 = &dword_140404A6C[v1 + 70087029 + v36];
      v39 = v38[239251];
      if ( v39 == -1 )
      {
        if ( !v0 )
          goto LABEL_84;
        for ( i = v6; i > 0; --i )
        {
          if ( dword_140404A6C[i + 70326264] != -1 )
            break;
        }
        v43 = &dword_140404A6C[i + 70087029];
        v40 = 122 * v33;
        dword_140404A6C[122 * v33 + 70087139] = v43[239235];
        v44 = (int)v43[239235];
        if ( dword_140404A6C[122 * v44 + 70087138] == -1 )
          dword_140404A6C[122 * v44 + 70087138] = v33;
LABEL_78:
        if ( dword_140404A6C[v40 + 70087138] == -1 )
        {
          v45 = v6;
          if ( v6 > 0 )
          {
            v46 = v5 + 1;
            do
            {
              if ( *v46 != -1 )
                break;
              --v45;
              --v46;
            }
            while ( v45 > 0 );
          }
          dword_140404A6C[v40 + 70087138] = dword_140404A6C[v1 + 70326248 + v45];
        }
        goto LABEL_84;
      }
      v40 = 122 * v33;
      dword_140404A6C[122 * v33 + 70087139] = v39;
      v41 = (int)v38[239251];
      if ( dword_140404A6C[122 * v41 + 70087138] == -1 )
        dword_140404A6C[122 * v41 + 70087138] = v33;
      if ( v0 )
        goto LABEL_78;
LABEL_84:
      v4 += 3;
      v5 += 3;
      v6 += 3;
    }
    while ( v4 < 15 );
    ++v0;
    v1 += 16;
    v3 += 16;
    v2 += 16;
  }
  while ( v0 < 15 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15104AA48: using guessed type unsigned int;

//----- (0000000140075650) ----------------------------------------------------
_WORD *sub_140075650()
{
  unsigned int *v0; // rax
  unsigned int *v1; // rax
  _WORD *result; // rax

  v0 = &dword_140404A6C[70087116];
  do
  {
    *(v0 - 3) = 0;
    *v0 = 0;
    v0 += 122;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[70212044] );
  dword_140404A6C[70212041] = 0;
  v1 = &dword_140404A6C[70290891];
  dword_140404A6C[70290890] = 0;
  do
  {
    *v1 = 0;
    v1 += 98;
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[70315979] );
  result = sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[70317269]), 0xFFu, 0x800u);
  *(_OWORD *)&dword_140404A6C[70087067] = xmmword_1402797D0;
  dword_140404A6C[70087046] = -1;
  dword_140404A6C[70087071] = 1095761920;
  dword_140404A6C[70087072] = 1082130432;
  *(_OWORD *)&dword_140404A6C[70087091] = xmmword_140279480;
  dword_140404A6C[70087029] = 0;
  *(_OWORD *)&dword_140404A6C[70087095] = xmmword_140279670;
  dword_140404A6C[70087064] = -1;
  *(_OWORD *)&dword_140404A6C[70087099] = xmmword_140279680;
  dword_140404A6C[70087047] = 0;
  dword_140404A6C[70087083] = 1;
  *(_OWORD *)&dword_140404A6C[70087087] = xmmword_140279700;
  dword_140404A6C[70087074] = 0;
  dword_140404A6C[70087103] = -1;
  *(_QWORD *)&dword_140404A6C[70087106] = -1;
  dword_140404A6C[70087111] = -1;
  return result;
}

// 140279480: using guessed type __int128 xmmword_140279480;
// 140279670: using guessed type __int128 xmmword_140279670;
// 140279680: using guessed type __int128 xmmword_140279680;
// 140279700: using guessed type __int128 xmmword_140279700;
// 1402797D0: using guessed type __int128 xmmword_1402797D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61040: using guessed type int[];
// 150F61084: using guessed type unsigned int;
// 150F61088: using guessed type unsigned int;
// 150F610CC: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610E8: using guessed type unsigned int;
// 150F610EC: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F61128: using guessed type unsigned int;
// 150F61138: using guessed type unsigned int;
// 150F61148: using guessed type unsigned int;
// 150F61158: using guessed type unsigned int;
// 150F61168: using guessed type unsigned int;
// 150F61174: using guessed type unsigned int;
// 150F61188: using guessed type unsigned int;
// 150FDB190: using guessed type unsigned int;
// 151028194: using guessed type unsigned int;

//----- (00000001400764B0) ----------------------------------------------------
void            sub_1400764B0(char *a1, float a2, float a3, float a4, char a5)
{
  char *v5; // rbx
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  unsigned int *v9; // rcx
  char v10; // al

  v5 = a1;
  v6 = a3;
  v7 = a2;
  if ( (int)dword_140404A6C[70212041] < 1024 )
  {
    v8 = sub_14006F060(dword_140404A6C[70087066], a1, a4);
    if ( (a5 & 1) != 0 )
    {
      v7 = a2 + (float)(v8 * -0.5);
    }
    else if ( (a5 & 2) != 0 )
    {
      v7 = a2 - v8;
    }
    if ( (a5 & 4) != 0 )
    {
      v6 = a3 + (float)(a4 * -0.5);
    }
    else if ( (a5 & 8) != 0 )
    {
      v6 = a3 - a4;
    }
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212043] = dword_140404A6C[70087046];
    v9 = &dword_140404A6C[77 * dword_140404A6C[70212041] + 70212055];
    do
    {
      v10 = *v5++;
      *(_BYTE *)v9 = v10;
      v9 = (unsigned int *)((char *)v9 + 1);
    }
    while ( v10 );
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212042] = dword_140404A6C[70087066];
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212044] = v7;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212045] = v6;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212050] = a4;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = v7;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = v6;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212053] = a4;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212054] = a4;
    if ( dword_140404A6C[70087046] != -1 )
    {
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290981]
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051];
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = (float)(*(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290982]
                                                                                    - *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290905])
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052];
    }
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212046] = dword_140404A6C[70087087];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212047] = dword_140404A6C[70087088];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212048] = dword_140404A6C[70087089];
    dword_140404A6C[77 * dword_140404A6C[70212041]++ + 70212049] = dword_140404A6C[70087090];
  }
}

//----- (0000000140076770) ----------------------------------------------------
__int64            sub_140076770(char a1)
{
  unsigned int *v1; // rdx
  unsigned int *v2; // r8
  __int64 v3; // rax
  __int64 v5; // r14
  __int128 v6; // xmm1
  unsigned int v7; // r10d
  int j; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int i; // ecx
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // ebp
  int v15; // esi
  unsigned int v16; // xmm3_4
  unsigned int v17; // xmm2_4
  signed int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // edi
  int v21; // r9d
  __int64 v22; // r10
  int v23; // edx
  unsigned int *v24; // rcx
  __int64 v25; // r11
  unsigned __int64 v26; // r10
  unsigned int *v27; // r8
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm0_4
  __int64 v31; // rcx
  float v32; // xmm0_4
  float v33; // xmm0_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm0_4
  unsigned int v43; // edx
  unsigned int *v44; // rax
  int v45; // ecx
  signed int v46; // r8d
  int v47; // edx
  __int64 v48; // r11
  unsigned int *v49; // rcx
  signed int v50; // r9d
  unsigned int v51; // r10d
  __int64 v52; // rcx
  unsigned int *v53; // rcx
  int v54; // edx
  __int64 v55; // rbx
  __int64 v56; // rax
  float *v57; // rax
  int v58; // edx
  unsigned int v59; // r10d
  signed int v60; // ecx
  float v61; // xmm0_4
  __int64 v62; // rcx
  unsigned int v63; // r8d
  __int64 v64; // r9
  int v65; // edx
  __int64 v66; // r10
  unsigned int *v67; // rcx
  int v68; // eax
  unsigned int *v69; // rcx
  int v70; // eax
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140076770[16];
#define v72 (*(int (*))(void *)(sr_frame_140076770 + 0)) /* [rsp+60h] */
#define v73 (*(int (*))(void *)(sr_frame_140076770 + 8)) /* [rsp+68h] */

  v1 = &dword_140404A6C[70317141];
  dword_140404A6C[70087108] = dword_140404A6C[70087106];
  v2 = &dword_140404A6C[70317013];
  v3 = 2;
  v5 = 128;
  do
  {
    *(_OWORD *)v1 = *(_OWORD *)v2;
    *((_OWORD *)v1 + 1) = *((_OWORD *)v2 + 1);
    *((_OWORD *)v1 + 2) = *((_OWORD *)v2 + 2);
    *((_OWORD *)v1 + 3) = *((_OWORD *)v2 + 3);
    *((_OWORD *)v1 + 4) = *((_OWORD *)v2 + 4);
    *((_OWORD *)v1 + 5) = *((_OWORD *)v2 + 5);
    *((_OWORD *)v1 + 6) = *((_OWORD *)v2 + 6);
    v1 += 32;
    v6 = *((_OWORD *)v2 + 7);
    v2 += 32;
    *((_OWORD *)v1 - 1) = v6;
    --v3;
  }
  while ( v3 );
  v7 = dword_140404A6C[468760165];
  *(_OWORD *)v1 = *(_OWORD *)v2;
  *((_OWORD *)v1 + 1) = *((_OWORD *)v2 + 1);
  *((_OWORD *)v1 + 2) = *((_OWORD *)v2 + 2);
  *((_OWORD *)v1 + 3) = *((_OWORD *)v2 + 3);
  *((_WORD *)v1 + 32) = *((_WORD *)v2 + 32);
  *((_BYTE *)v1 + 66) = *((_BYTE *)v2 + 66);
  if ( (a1 & 2) != 0 )
  {
    if ( !dword_140404A6C[70318064] )
    {
      for ( i = dword_140404A6C[70087110]; i != v7; dword_140404A6C[70087110] = i )
      {
        if ( !dword_140404A6C[5 * i + 468760167] )
        {
          v12 = (int)dword_140404A6C[dword_140404A6C[5 * i + 468760168] + 70317269];
          if ( (_DWORD)v12 != -1 )
          {
            dword_140404A6C[122 * v12 + 70087121] = 1;
            LOWORD(i) = dword_140404A6C[70087110];
          }
        }
        i = ((_WORD)i + 1) & 0x3FF;
      }
    }
  }
  else if ( !dword_140404A6C[70318064] )
  {
    for ( j = dword_140404A6C[468760166]; j != v7; dword_140404A6C[468760166] = j )
    {
      v9 = dword_140404A6C[5 * j + 468760167];
      if ( v9 == 1 )
      {
        v10 = (int)dword_140404A6C[dword_140404A6C[5 * j + 468760168] + 70317269];
        if ( (_DWORD)v10 != -1 )
          dword_140404A6C[122 * v10 + 70087121] = 1;
        *((_BYTE *)&dword_140404A6C[70317013] + (int)dword_140404A6C[5 * j + 468760168]) = 0;
      }
      if ( !v9 )
        *((_BYTE *)&dword_140404A6C[70317013] + (int)dword_140404A6C[5 * j + 468760168]) = 1;
      j = ((_WORD)j + 1) & 0x3FF;
    }
  }
  dword_140404A6C[70087110] = v7;
  dword_140404A6C[70317858] = dword_140404A6C[70317819];
  *(_OWORD *)&dword_140404A6C[70317820] = *(_OWORD *)&dword_140404A6C[70317781];
  *(_OWORD *)&dword_140404A6C[70317824] = *(_OWORD *)&dword_140404A6C[70317785];
  *(_OWORD *)&dword_140404A6C[70317828] = *(_OWORD *)&dword_140404A6C[70317789];
  *(_OWORD *)&dword_140404A6C[70317832] = *(_OWORD *)&dword_140404A6C[70317793];
  *(_OWORD *)&dword_140404A6C[70317836] = *(_OWORD *)&dword_140404A6C[70317797];
  *(_OWORD *)&dword_140404A6C[70317840] = *(_OWORD *)&dword_140404A6C[70317801];
  *(_OWORD *)&dword_140404A6C[70317844] = *(_OWORD *)&dword_140404A6C[70317805];
  *(_OWORD *)&dword_140404A6C[70317848] = *(_OWORD *)&dword_140404A6C[70317809];
  *(_QWORD *)&dword_140404A6C[70317856] = *(_QWORD *)&dword_140404A6C[70317817];
  *(_OWORD *)&dword_140404A6C[70317852] = *(_OWORD *)&dword_140404A6C[70317813];
  if ( (a1 & 1) != 0 )
  {
    v13 = dword_140404A6C[468760163];
    v15 = dword_140404A6C[468760162];
    v14 = dword_140404A6C[468760161];
    v17 = dword_140404A6C[468760126];
    v16 = dword_140404A6C[468760125];
  }
  else
  {
    v13 = sr_ui_mouse_state(&v72, &v73);
    v14 = v13 & 1;
    v15 = ((unsigned __int8)v13 >> 2) & 1;
    dword_140404A6C[468760163] = v13;
    dword_140404A6C[468760161] = v14;
    dword_140404A6C[468760162] = v15;
    *(float *)&v16 = (float)((float)v72 * *(float *)&dword_140404A6C[438291414])
                   / (float)(int)dword_140404A6C[137297755];
    dword_140404A6C[468760125] = v16;
    *(float *)&v17 = (float)((float)v73 * *(float *)&dword_140404A6C[438291415])
                   / (float)(int)dword_140404A6C[137297756];
    dword_140404A6C[468760126] = v17;
  }
  v18 = dword_140404A6C[70087103];
  dword_140404A6C[70317819] = v13;
  dword_140404A6C[70087046] = -1;
  dword_140404A6C[70087029] = 0;
  dword_140404A6C[70087064] = -1;
  dword_140404A6C[70087047] = 0;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1082130432;
  dword_140404A6C[70087083] = 1;
  *(_OWORD *)&dword_140404A6C[70317781] = *(_OWORD *)&dword_140404A6C[468760125];
  *(_OWORD *)&dword_140404A6C[70317785] = *(_OWORD *)&dword_140404A6C[468760129];
  *(_OWORD *)&dword_140404A6C[70317789] = *(_OWORD *)&dword_140404A6C[468760133];
  *(_OWORD *)&dword_140404A6C[70317793] = *(_OWORD *)&dword_140404A6C[468760137];
  *(_OWORD *)&dword_140404A6C[70317797] = *(_OWORD *)&dword_140404A6C[468760141];
  *(_OWORD *)&dword_140404A6C[70317801] = *(_OWORD *)&dword_140404A6C[468760145];
  *(_OWORD *)&dword_140404A6C[70317805] = *(_OWORD *)&dword_140404A6C[468760149];
  *(_OWORD *)&dword_140404A6C[70317809] = *(_OWORD *)&dword_140404A6C[468760153];
  *(_QWORD *)&dword_140404A6C[70317817] = *(_QWORD *)&dword_140404A6C[468760161];
  *(_OWORD *)&dword_140404A6C[70317813] = *(_OWORD *)&dword_140404A6C[468760157];
  if ( dword_140404A6C[70087103] != -1 )
  {
    v19 = 98LL * (int)dword_140404A6C[70087103];
    if ( (int)dword_140404A6C[v19 + 70290891] < 3 )
    {
      v18 = dword_140404A6C[v19 + 70290894];
      dword_140404A6C[70087103] = v18;
    }
  }
  v20 = -1;
  do
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = &dword_140404A6C[70290893];
    do
    {
      if ( *(v24 - 2) == 3 && *v24 == v20 )
      {
        ++v22;
        dword_140404A6C[v24[2] + 18215381] = v23;
      }
      ++v23;
      v24 += 98;
    }
    while ( v23 < 256 );
    v25 = v22 - 1;
    if ( v22 - 1 < 0 )
      break;
    if ( v22 < 4 )
      goto LABEL_163;
    v26 = (unsigned __int64)v22 >> 2;
    v27 = &dword_140404A6C[v25 + 18215379];
    v25 -= 4 * v26;
    do
    {
      v28 = 98LL * (int)v27[2];
      if ( dword_140404A6C[v28 + 70290891] == 3 )
      {
        v29 = *(float *)&dword_140404A6C[v28 + 70290973];
        if ( *(float *)&v16 >= v29 && *(float *)&v16 < (float)(v29 + *(float *)&dword_140404A6C[v28 + 70290975]) )
        {
          v30 = *(float *)&dword_140404A6C[v28 + 70290974];
          if ( *(float *)&v17 >= v30 && *(float *)&v17 < (float)(v30 + *(float *)&dword_140404A6C[v28 + 70290976]) )
          {
            v20 = v27[2];
            v21 = 1;
          }
        }
      }
      v31 = 98LL * (int)v27[1];
      if ( dword_140404A6C[v31 + 70290891] == 3 )
      {
        v32 = *(float *)&dword_140404A6C[v31 + 70290973];
        if ( *(float *)&v16 >= v32 && *(float *)&v16 < (float)(v32 + *(float *)&dword_140404A6C[v31 + 70290975]) )
        {
          v33 = *(float *)&dword_140404A6C[v31 + 70290974];
          if ( *(float *)&v17 >= v33 && *(float *)&v17 < (float)(v33 + *(float *)&dword_140404A6C[v31 + 70290976]) )
          {
            v20 = v27[1];
            v21 = 1;
          }
        }
      }
      v34 = 98LL * (int)*v27;
      if ( dword_140404A6C[v34 + 70290891] == 3 )
      {
        v35 = *(float *)&dword_140404A6C[v34 + 70290973];
        if ( *(float *)&v16 >= v35 && *(float *)&v16 < (float)(v35 + *(float *)&dword_140404A6C[v34 + 70290975]) )
        {
          v36 = *(float *)&dword_140404A6C[v34 + 70290974];
          if ( *(float *)&v17 >= v36 && *(float *)&v17 < (float)(v36 + *(float *)&dword_140404A6C[v34 + 70290976]) )
          {
            v20 = *v27;
            v21 = 1;
          }
        }
      }
      v37 = 98LL * (int)*(v27 - 1);
      if ( dword_140404A6C[v37 + 70290891] == 3 )
      {
        v38 = *(float *)&dword_140404A6C[v37 + 70290973];
        if ( *(float *)&v16 >= v38 && *(float *)&v16 < (float)(v38 + *(float *)&dword_140404A6C[v37 + 70290975]) )
        {
          v39 = *(float *)&dword_140404A6C[v37 + 70290974];
          if ( *(float *)&v17 >= v39 && *(float *)&v17 < (float)(v39 + *(float *)&dword_140404A6C[v37 + 70290976]) )
          {
            v20 = *(v27 - 1);
            v21 = 1;
          }
        }
      }
      v27 -= 4;
      --v26;
    }
    while ( v26 );
    if ( v25 >= 0 )
    {
LABEL_163:
      do
      {
        v40 = 98LL * (int)dword_140404A6C[v25 + 18215381];
        if ( dword_140404A6C[v40 + 70290891] == 3 )
        {
          v41 = *(float *)&dword_140404A6C[v40 + 70290973];
          if ( *(float *)&v16 >= v41 && *(float *)&v16 < (float)(v41 + *(float *)&dword_140404A6C[v40 + 70290975]) )
          {
            v42 = *(float *)&dword_140404A6C[v40 + 70290974];
            if ( *(float *)&v17 >= v42 && *(float *)&v17 < (float)(v42 + *(float *)&dword_140404A6C[v40 + 70290976]) )
            {
              v20 = dword_140404A6C[v25 + 18215381];
              v21 = 1;
            }
          }
        }
        --v25;
      }
      while ( v25 >= 0 );
    }
  }
  while ( v21 );
  v43 = dword_140404A6C[70087107];
  if ( dword_140404A6C[70315979] == 3 )
    v20 = dword_140404A6C[70315981];
  dword_140404A6C[70087105] = v20;
  if ( dword_140404A6C[70087107] != -1 )
  {
    if ( dword_140404A6C[122 * dword_140404A6C[70087107] + 70087113] != 3 )
      v43 = -1;
    dword_140404A6C[70087107] = v43;
  }
  if ( v14 && !dword_140404A6C[70317856] || v15 && !dword_140404A6C[70317857] )
  {
    v18 = v20;
    v44 = &dword_140404A6C[70087115];
    dword_140404A6C[70087103] = v20;
    v45 = 0;
    v46 = v20;
    do
    {
      if ( *(v44 - 2) == 3 && *v44 == 6 )
      {
        if ( v44[7] == v20 )
          v43 = v45;
        dword_140404A6C[70087107] = v43;
      }
      ++v45;
      v44 += 122;
    }
    while ( v45 < 1024 );
    if ( v20 != -1 )
    {
      do
      {
        v47 = 0;
        v48 = 98LL * v46;
        v49 = &dword_140404A6C[70290895];
        v50 = dword_140404A6C[v48 + 70290895];
        v51 = dword_140404A6C[v48 + 70290893];
        do
        {
          if ( (int)*(v49 - 4) >= 2 && v47 != v46 && *(v49 - 2) == v51 && (int)*v49 < v50 )
            ++*v49;
          ++v47;
          v49 += 98;
        }
        while ( v47 < 256 );
        v46 = dword_140404A6C[v48 + 70290893];
        dword_140404A6C[v48 + 70290895] = 0;
      }
      while ( v46 != -1 );
      v18 = dword_140404A6C[70087103];
    }
  }
  dword_140404A6C[70087104] = v18;
  if ( v18 != -1 )
  {
    v52 = 98LL * v18;
    if ( dword_140404A6C[v52 + 70290972] )
      dword_140404A6C[70087104] = dword_140404A6C[v52 + 70290894];
  }
  dword_140404A6C[70087109] = -1;
  v53 = &dword_140404A6C[70317269];
  v54 = 0;
  v55 = 512;
  do
  {
    v56 = (int)*v53;
    if ( (_DWORD)v56 != -1
      && ((int)dword_140404A6C[122 * v56 + 70087113] < 3 || dword_140404A6C[122 * v56 + 70087120] != v54) )
    {
      *v53 = -1;
    }
    ++v54;
    ++v53;
  }
  while ( v54 < 512 );
  v57 = (float *)&dword_140404A6C[70087135];
  v58 = 0;
  v59 = dword_140404A6C[70087109];
  v60 = dword_140404A6C[70087106];
  do
  {
    if ( *((_DWORD *)v57 - 22) == 3 && *((_DWORD *)v57 - 13) == v20 )
    {
      if ( *((_DWORD *)v57 - 17) )
      {
        v61 = *(v57 - 1);
        if ( *(float *)&dword_140404A6C[70317781] >= v61
          && *(float *)&dword_140404A6C[70317781] < (float)(v61 + v57[1])
          && *(float *)&dword_140404A6C[70317782] >= *v57
          && *(float *)&dword_140404A6C[70317782] < (float)(*v57 + v57[2])
          && (!dword_140404A6C[70317817] || !dword_140404A6C[70317856] || v60 == v58) )
        {
          dword_140404A6C[70087109] = v58;
          v59 = v58;
          if ( dword_140404A6C[70317817] )
          {
            if ( !dword_140404A6C[70317856] )
              v60 = v58;
            dword_140404A6C[70087106] = v60;
          }
        }
      }
    }
    ++v58;
    v57 += 122;
  }
  while ( v58 < 1024 );
  if ( v59 != -1 )
  {
LABEL_126:
    if ( dword_140404A6C[70317817] )
      goto LABEL_132;
    goto LABEL_127;
  }
  if ( dword_140404A6C[70317817] )
  {
    if ( !dword_140404A6C[70317856] )
      v60 = -1;
    dword_140404A6C[70087106] = v60;
    goto LABEL_126;
  }
LABEL_127:
  *(_QWORD *)&dword_140404A6C[70317860] = -1;
  if ( v60 != -1 && !dword_140404A6C[70317856] )
  {
    v62 = 122LL * v60;
    if ( (int)dword_140404A6C[v62 + 70087113] < 3 || dword_140404A6C[v62 + 70087115] - 3 > 2 )
      dword_140404A6C[70087106] = -1;
  }
LABEL_132:
  v63 = dword_140404A6C[70087111];
  if ( dword_140404A6C[70087111] != -1 )
  {
    v64 = 0;
    v65 = 1;
    v66 = 4;
    do
    {
      if ( (dword_140404A6C[70326261] & v65) == v65 && (dword_140404A6C[70326262] & v65) != v65 )
      {
        if ( dword_140404A6C[122 * (int)v63 + 70087138 + v64] != -1 )
          v63 = dword_140404A6C[122 * (int)v63 + 70087138 + v64];
        dword_140404A6C[70087111] = v63;
      }
      v65 = __ROL4__(v65, 1);
      ++v64;
      --v66;
    }
    while ( v66 );
    if ( (int)dword_140404A6C[122 * v63 + 70087113] < 3 )
      v63 = -1;
    dword_140404A6C[70087111] = v63;
  }
  dword_140404A6C[70087112] = 0;
  if ( (dword_140404A6C[70326261] & 0x10) != 0 )
    dword_140404A6C[70087112] = (dword_140404A6C[70326262] & 0x10) == 0;
  dword_140404A6C[70326262] = dword_140404A6C[70326261];
  v67 = &dword_140404A6C[70290989];
  do
  {
    v68 = *(v67 - 98);
    if ( v68 > 1 )
      *(v67 - 98) = v68 - 1;
    if ( (int)*v67 > 1 )
      --*v67;
    v67 += 196;
    --v5;
  }
  while ( v5 );
  v69 = &dword_140404A6C[70087235];
  do
  {
    v70 = *(v69 - 122);
    if ( v70 > 1 )
      *(v69 - 122) = v70 - 1;
    if ( (int)*v69 > 1 )
      --*v69;
    v69 += 244;
    --v55;
  }
  while ( v55 );
  if ( (int)dword_140404A6C[70315979] > 0 )
    --dword_140404A6C[70315979];
  result = dword_140404A6C[70316496];
  dword_140404A6C[70318064] = 0;
  if ( (int)dword_140404A6C[70316496] > 0 )
    return --dword_140404A6C[70316496];
  return result;
}
#undef v72
#undef v73

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61040: using guessed type int[];
// 150F61084: using guessed type unsigned int;
// 150F61088: using guessed type unsigned int;
// 150F610CC: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F61168: using guessed type unsigned int;
// 150F6116C: using guessed type unsigned int;
// 150F61170: using guessed type unsigned int;
// 150F61174: using guessed type unsigned int;
// 150F61178: using guessed type unsigned int;
// 150F6117C: using guessed type unsigned int;
// 150F61180: using guessed type unsigned int;
// 150F61184: using guessed type unsigned int;
// 150F61188: using guessed type unsigned int;
// 150F6118C: using guessed type unsigned int;
// 151040998: using guessed type unsigned int;
// 1510409A0: using guessed type unsigned int;
// 1510411AC: using guessed type unsigned int;
// 1510425C0: using guessed type unsigned int;
// 1510425D0: using guessed type unsigned int;
// 1510425E0: using guessed type unsigned int;
// 1510425F0: using guessed type unsigned int;
// 151042600: using guessed type unsigned int;
// 151042610: using guessed type unsigned int;
// 151042620: using guessed type unsigned int;
// 151042630: using guessed type unsigned int;
// 151042640: using guessed type unsigned int;
// 151042650: using guessed type unsigned int;
// 151042658: using guessed type unsigned int;
// 15104265C: using guessed type unsigned int;
// 15104266C: using guessed type unsigned int;
// 15104267C: using guessed type unsigned int;
// 15104268C: using guessed type unsigned int;
// 15104269C: using guessed type unsigned int;
// 1510426AC: using guessed type unsigned int;
// 1510426BC: using guessed type unsigned int;
// 1510426CC: using guessed type unsigned int;
// 1510426DC: using guessed type unsigned int;
// 1510426EC: using guessed type unsigned int;
// 1510426F4: using guessed type unsigned int;
// 1510426FC: using guessed type unsigned int;
// 151042A2C: using guessed type unsigned int;
// 15104AA40: using guessed type unsigned int;
// 15104AA44: using guessed type unsigned int;
// 1B0032360: using guessed type unsigned int;
// 1B0032364: using guessed type unsigned int;
// 1B0032370: using guessed type unsigned int;
// 1B0032380: using guessed type unsigned int;
// 1B0032390: using guessed type unsigned int;
// 1B00323A0: using guessed type unsigned int;
// 1B00323B0: using guessed type unsigned int;
// 1B00323C0: using guessed type unsigned int;
// 1B00323D0: using guessed type unsigned int;
// 1B00323E0: using guessed type unsigned int;
// 1B00323F0: using guessed type unsigned int;
// 1B00323F4: using guessed type unsigned int;
// 1B00323F8: using guessed type unsigned int;
// 1B0032400: using guessed type int[];
// 1B0032404: using guessed type unsigned int;

//----- (0000000140077230) ----------------------------------------------------
__int64 sub_140077230()
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  __int64 v3; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  unsigned int v6; // xmm0_4
  __int64 v7; // rsi
  float v8; // xmm0_4
  float v9; // xmm1_4
  unsigned int *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm8_4
  float v13; // xmm4_4
  unsigned int *v14; // rbx
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm1_4
  bool v18; // zf
  unsigned int v19; // eax
  unsigned int v20; // eax
  signed int v21; // eax

  if ( !dword_140404A6C[70087029] )
  {
    dword_140404A6C[70087046] = -1;
    return 1;
  }
  v1 = (int)dword_140404A6C[70087046];
  if ( dword_140404A6C[70087046] == -1 )
    return 1;
  v2 = 0;
  if ( dword_140404A6C[70087105] == dword_140404A6C[70087046] )
  {
    v3 = 98LL * (int)dword_140404A6C[70087046];
    v4 = (float)(int)dword_140404A6C[137297772];
    dword_140404A6C[137297772] = 0;
    v5 = *(float *)&dword_140404A6C[v3 + 70290905] - (float)(v4 * 16.0);
    if ( v5 < 0.0 )
      v5 = 0.0;
    v6 = dword_140404A6C[v3 + 70290907];
    *(float *)&dword_140404A6C[v3 + 70290905] = v5;
    if ( v5 > *(float *)&v6 )
      dword_140404A6C[v3 + 70290905] = v6;
  }
  v7 = 98 * v1;
  v8 = 0.0;
  v9 = 0.0;
  v10 = &dword_140404A6C[70087122];
  v11 = 256;
  v12 = *(float *)&dword_140404A6C[98 * v1 + 70290983];
  v13 = *(float *)&dword_140404A6C[98 * v1 + 70290984];
  do
  {
    if ( *(v10 - 9) == 3 && *v10 == (_DWORD)v1 )
    {
      if ( *(v10 - 4) )
      {
        v8 = fmaxf(*((float *)v10 + 5) + *((float *)v10 + 3), v8);
        if ( v9 < (float)(*((float *)v10 + 6) + *((float *)v10 + 4)) )
          v9 = *((float *)v10 + 6) + *((float *)v10 + 4);
      }
    }
    if ( v10[113] == 3 && v10[122] == (_DWORD)v1 )
    {
      if ( v10[118] )
      {
        v8 = fmaxf(*((float *)v10 + 127) + *((float *)v10 + 125), v8);
        if ( v9 < (float)(*((float *)v10 + 128) + *((float *)v10 + 126)) )
          v9 = *((float *)v10 + 128) + *((float *)v10 + 126);
      }
    }
    if ( v10[235] == 3 && v10[244] == (_DWORD)v1 )
    {
      if ( v10[240] )
      {
        v8 = fmaxf(*((float *)v10 + 249) + *((float *)v10 + 247), v8);
        if ( v9 < (float)(*((float *)v10 + 250) + *((float *)v10 + 248)) )
          v9 = *((float *)v10 + 250) + *((float *)v10 + 248);
      }
    }
    if ( v10[357] == 3 && v10[366] == (_DWORD)v1 )
    {
      if ( v10[362] )
      {
        v8 = fmaxf(*((float *)v10 + 371) + *((float *)v10 + 369), v8);
        if ( v9 < (float)(*((float *)v10 + 372) + *((float *)v10 + 370)) )
          v9 = *((float *)v10 + 372) + *((float *)v10 + 370);
      }
    }
    v10 += 488;
    --v11;
  }
  while ( v11 );
  v14 = &dword_140404A6C[v7 + 70290905];
  if ( v9 <= v13 )
  {
    *v14 = 0;
    v15 = 0.0;
  }
  else
  {
    v15 = v9 - v13;
    sub_140070FF0(
      dword_140404A6C[v7 + 70290892],
      v12 - 16.0,
      *(float *)&dword_140404A6C[v7 + 70290905],
      16.0,
      COERCE_UNSIGNED_INT(v13 - 16.0f),
      COERCE_UNSIGNED_INT(fmaxf((float)(v13 * (float)(v13 - 16.0)) / v9, 16.0)),
      (float *)&dword_140404A6C[v7 + 70290905],
      0.0,
      v9 - v13);
  }
  *(float *)&dword_140404A6C[v7 + 70290907] = v15;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v16 = v12 - 16.0;
  dword_140404A6C[70087069] = 1098907648;
  dword_140404A6C[70087070] = 1098907648;
  v17 = *(float *)v14 - 16.0;
  if ( (int)dword_140404A6C[70317929] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317929] + 70317930] = dword_140404A6C[70087067];
    dword_140404A6C[2 * dword_140404A6C[70317929]++ + 70317931] = dword_140404A6C[70087068];
  }
  *(float *)&dword_140404A6C[70087067] = v16;
  *(float *)&dword_140404A6C[70087068] = v17;
  v18 = (unsigned int)sr_DrawMenuButton("X") == 0;
  v19 = dword_140404A6C[70317929];
  if ( !v18 )
    v2 = 1;
  if ( (int)dword_140404A6C[70317929] > 0 )
  {
    --dword_140404A6C[70317929];
    dword_140404A6C[70087067] = dword_140404A6C[2 * (v19 - 1) + 70317930];
    dword_140404A6C[70087068] = dword_140404A6C[2 * (v19 - 1) + 70317931];
  }
  v20 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v20 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v20 - 1) + 70317964];
  }
  v21 = dword_140404A6C[70087029] - 1;
  dword_140404A6C[70087029] = v21;
  if ( v21 <= 0 )
    dword_140404A6C[70087046] = -1;
  else
    dword_140404A6C[70087046] = dword_140404A6C[v21 + 70087029];
  return v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61040: using guessed type int[];
// 150F61084: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042810: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;

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
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009FE00[624];
#define v74 (*(__int64 (*))(void *)(sr_frame_14009FE00 + 0)) /* [rsp+0h] */
#define v75 (*(int (*))(void *)(sr_frame_14009FE00 + 80)) /* [rsp+50h] */
#define v76 (*(int (*))(void *)(sr_frame_14009FE00 + 84)) /* [rsp+54h] */
#define v77 (*(int (*))(void *)(sr_frame_14009FE00 + 88)) /* [rsp+58h] */
#define v78 (*(int (*))(void *)(sr_frame_14009FE00 + 92)) /* [rsp+5Ch] */
#define v79 (*(unsigned __int8 (*)[512])(void *)(sr_frame_14009FE00 + 96)) /* [rsp+60h] */
#define v80 (*(__int64 (*))(void *)(sr_frame_14009FE00 + 608)) /* [rsp+260h] */

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
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
//----- (00000001400FCFF0) ----------------------------------------------------
__int64 sub_1400FCFF0()
{
  int v0; // eax
  unsigned int v1; // ecx
  float v2; // xmm2_4
  float v3; // xmm1_4
  unsigned int *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  char v9; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FCFF0[16];
#define v10 (*(int (*))(void *)(sr_frame_1400FCFF0 + 0)) /* [rsp+30h] */
#define v11 (*(int (*))(void *)(sr_frame_1400FCFF0 + 8)) /* [rsp+38h] */

  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1101004800;
  dword_140404A6C[70087074] = 41;
  v0 = sr_DrawMenuButton("Back");
  v1 = dword_140404A6C[283831310];
  v2 = *(float *)&dword_140404A6C[70087068] + 32.0;
  if ( v0 )
    v1 = 0;
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[283831310] = v1;
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  *(float *)&dword_140404A6C[70087085] = v2;
  dword_140404A6C[70087084] = dword_140404A6C[70087067];
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087083] = 0;
  sr_DrawMenuButtonSelectable("World Mode", (int *)&dword_140404A6C[73991632], 4);
  sr_DrawMenuButtonSelectable("Round Mode", (int *)&dword_140404A6C[73991632], 3);
  sr_DrawMenuButtonSelectable("Eliminator Mode", (int *)&dword_140404A6C[73991632], 5);
  if ( dword_140404A6C[70087083] )
  {
    v3 = *(float *)&dword_140404A6C[70087068];
  }
  else
  {
    v3 = *(float *)&dword_140404A6C[70087086] + *(float *)&dword_140404A6C[70087085];
    dword_140404A6C[70087067] = dword_140404A6C[70087084];
    if ( dword_140404A6C[70326263] )
    {
      ++dword_140404A6C[70326521];
      dword_140404A6C[70326520] = 0;
    }
  }
  dword_140404A6C[70087083] = 1;
  *(float *)&dword_140404A6C[70087068] = v3 + 16.0;
  sr_DrawMenuTextBox("Max Players", (__int64)&dword_140404A6C[73991631], 1u, 0x20u);
  if ( dword_140404A6C[73991632] == 3 )
  {
    v4 = &dword_140404A6C[284022480];
  }
  else
  {
    v4 = &dword_140404A6C[284022501];
    if ( dword_140404A6C[73991632] != 7 )
      v4 = &dword_140404A6C[73991633];
  }
  sr_DrawMenuTextBox("Round Length", (__int64)v4, 1u, 0x1Eu);
  sub_140070200("Server Name", (__int64)&dword_140404A6C[73991224], 0x18u);
  dword_140404A6C[70087074] = 22;
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  result = sr_DrawMenuButton("Start");
  if ( SR_DEBUG_AUTOSTART_MODE() && SR_DEBUG_AUTOSTART(SR_DEBUG_AUTOSTART_MODE() == 3 ? "round" : "world") )
  {
    dword_140404A6C[73991632] = SR_DEBUG_AUTOSTART_MODE();
    result = 1;
  }
  if ( (_DWORD)result )
  {
    sub_140198F0B(1, v6, v7);
    dword_140404A6C[284024635] = sr_menu_relative_mouse(&v10, &v11);
    dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
    dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
    v8 = 0;
    dword_140404A6C[283831312] = dword_140404A6C[73991632];
    *(float *)&dword_140404A6C[284024599] = (float)v10;
    *(float *)&dword_140404A6C[284024600] = (float)v11;
    dword_140404A6C[284024597] = 1140850688;
    dword_140404A6C[284024598] = 1134559232;
    do
    {
      v9 = *((_BYTE *)&dword_140404A6C[73991224] + v8);
      *((_BYTE *)&dword_140404A6C[456202458] + v8++) = v9;
    }
    while ( v9 );
    dword_140404A6C[456202722] = dword_140404A6C[73991631];
    dword_140404A6C[283831452] = 3600;
    dword_140404A6C[283831473] = 1260;
    dword_140404A6C[283831447] = 0;
    dword_140404A6C[456202453] = 1;
    dword_140404A6C[283831453] = 3600 * dword_140404A6C[73991633];
    *(_QWORD *)&dword_140404A6C[73991608] = 1;
    return sub_140095B00();
  }
  return result;
}
#undef v10
#undef v11

// 1400FD1FC: variable 'v6' is possibly undefined
// 1400FD1FC: variable 'v7' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F6111C: using guessed type unsigned int;
// 150F61120: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;
// 151E4614C: using guessed type unsigned int;
// 151E461A8: using guessed type unsigned int;
// 151E461AC: using guessed type unsigned int;
// 183EBFAA4: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCC8: using guessed type unsigned int;
// 183EBFCDC: using guessed type unsigned int;
// 183EBFD30: using guessed type unsigned int;
// 183F7C6C0: using guessed type unsigned int;
// 183F7C6C4: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04B1F4: using guessed type unsigned int;

//----- (00000001400FD300) ----------------------------------------------------
void sub_1400FD300()
{
  int v0; // eax
  unsigned int v1; // ecx
  int v2; // esi
  int v3; // edi
  int v4; // r8d
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // rbx
  char v14; // r14
  signed int v15; // eax
  signed int v16; // ebx
  int v17; // ebp
  int v18; // r15d
  int v19; // edx
  signed int v20; // r10d
  int v21; // r8d
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // rsi
  unsigned int *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  signed int v29; // ecx
  __int64 v30; // rbx
  signed int v31; // ecx
  signed int v32; // r8d
  int v33; // edx
  __int64 v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rdi
  signed int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  unsigned int *v42; // rcx
  _DWORD *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ecx
  int v47; // ecx
  unsigned int *v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FD300[576];
#define v52 (*(__int64 (*))(void *)(sr_frame_1400FD300 + 0)) /* [rsp+0h] */
#define v53 (*(char (*))(void *)(sr_frame_1400FD300 + 32)) /* [rsp+20h] */
#define v54 (*(int (*))(void *)(sr_frame_1400FD300 + 36)) /* [rsp+24h] */
#define v55 (*(unsigned __int8 (*)[512])(void *)(sr_frame_1400FD300 + 48)) /* [rsp+30h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_1400FD300 + 560)) /* [rsp+230h] */

  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1101004800;
  dword_140404A6C[70087074] = 41;
  v0 = sr_DrawMenuButton("Back");
  v1 = dword_140404A6C[283831310];
  v2 = dword_140404A6C[179662127];
  v3 = 0;
  dword_140404A6C[70087069] = 1146880000;
  if ( v0 )
    v1 = 0;
  dword_140404A6C[283831310] = v1;
  dword_140404A6C[70087070] = 1105199104;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1113587712;
  do
  {
    v4 = v3 + 16 * v2;
    if ( v4 < (int)dword_140404A6C[179662117] )
    {
      sub_140158AB0(v55, "Server %d", v4);
      v5 = dword_140404A6C[70087076];
      dword_140404A6C[70087080] = 0;
      dword_140404A6C[70087079] = v3 + 16 * dword_140404A6C[179662127];
      *(_QWORD *)&dword_140404A6C[70087081] = (uintptr_t)sub_1400CFC80;
      if ( dword_140404A6C[368 * dword_140404A6C[179662127] + 179473701 + 23 * v3] != dword_1402B231C )
        v5 = 1;
      dword_140404A6C[70087076] = v5;
      if ( (unsigned int)sr_DrawMenuButton(v55) )
      {
        v6 = sub_140198F9B();
        v2 = dword_140404A6C[179662127];
        dword_140404A6C[179662126] = v6 + 200;
        dword_140404A6C[179662129] = v3 + 16 * dword_140404A6C[179662127];
        v7 = 23LL * (v3 + 16 * dword_140404A6C[179662127]);
        v8 = dword_140404A6C[v7 + 179473723];
        v9 = dword_140404A6C[v7 + 179473712];
        dword_140404A6C[456202714] = dword_140404A6C[v7 + 179473713];
        LOWORD(dword_140404A6C[456202715]) = dword_140404A6C[v7 + 179473714];
        dword_140404A6C[456202719] = dword_140404A6C[v7 + 179473715];
        LOWORD(dword_140404A6C[456202720]) = dword_140404A6C[v7 + 179473716];
        dword_140404A6C[179662130] = v8;
        dword_140404A6C[284023066] = v9;
        sub_140050C80(&dword_140404A6C[284024493], &dword_140404A6C[284024494], v9);
        dword_140404A6C[283831310] = 2;
        *(_OWORD *)&dword_140404A6C[179662133] = 0;
        dword_140404A6C[179662132] = v8 == 0;
        *(_OWORD *)&dword_140404A6C[179662137] = 0;
        *(_OWORD *)&dword_140404A6C[179662141] = 0;
        *(_OWORD *)&dword_140404A6C[179662145] = 0;
      }
      else
      {
        v2 = dword_140404A6C[179662127];
      }
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + -2.0;
    }
    ++v3;
  }
  while ( v3 < 16 );
  dword_140404A6C[70087069] = 1124073472;
  dword_140404A6C[70087067] = 1146945536;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[70087068] = 1113587712;
  if ( v2 > 0 )
  {
    dword_140404A6C[70087074] = 75;
    v10 = sr_DrawMenuButton("Page Up");
    v2 = dword_140404A6C[179662127];
    if ( v10 )
      v2 = --dword_140404A6C[179662127];
  }
  dword_140404A6C[70087068] = 1140850688;
  if ( 16 * (v2 + 1) < (int)dword_140404A6C[179662117] )
  {
    dword_140404A6C[70087074] = 78;
    if ( (unsigned int)sr_DrawMenuButton("Page Down") )
      ++dword_140404A6C[179662127];
  }
  if ( dword_140404A6C[283831310] == 1 )
  {
    if ( !dword_140404A6C[179662131] )
      dword_140404A6C[179662131] = dword_140404A6C[179668277] == 2;
    if ( (unsigned int)sub_140198F9B() - dword_140404A6C[179662126] <= 0xA )
    {
      v14 = v53;
    }
    else
    {
      v11 = sub_140198F9B();
      dword_140404A6C[179662126] = v11;
      v12 = dword_140404A6C[179473694];
      if ( (int)dword_140404A6C[179473694] <= 0 )
      {
        v14 = v53;
      }
      else
      {
        v13 = (int)dword_140404A6C[179662128];
        if ( (int)dword_140404A6C[179662128] >= (int)dword_140404A6C[179473694] )
        {
          v14 = v53;
        }
        else
        {
          strcpy((char *)&dword_140404A6C[289301094], "7DFP");
          v14 = 0;
          *(_QWORD *)&dword_140404A6C[289301092] = 5;
          sub_140115D90(&dword_1402B231C, 8);
          v15 = dword_140404A6C[289301092];
          if ( (int)dword_140404A6C[289301092] < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              v15 = dword_140404A6C[289301092] + 1;
              dword_140404A6C[289301093] = 0;
              ++dword_140404A6C[289301092];
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = v11;
            dword_140404A6C[289301092] += 4;
          }
          sub_140130350(dword_140404A6C[2 * v13 + 179457309], dword_140404A6C[2 * v13 + 179457310], 0);
          v12 = dword_140404A6C[179473694];
          LODWORD(v13) = dword_140404A6C[179662128];
        }
        v16 = v13 + 1;
        if ( v16 >= (int)(v12 + 10) )
          v16 = 0;
        dword_140404A6C[179662128] = v16;
      }
      if ( dword_140404A6C[179662131] == 1 && dword_140404A6C[280649181] )
      {
        dword_140404A6C[289301094] = dword_1402B2658;
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        LOBYTE(dword_140404A6C[289301095]) = 74;
        sub_140130350(dword_140404A6C[280649181], dword_140404A6C[280649182], 0);
      }
    }
    if ( dword_140404A6C[179668277] == 2 && (int)sub_14011C760() > 0 )
    {
      v17 = v54;
      v18 = v54;
      do
      {
        v19 = dword_140404A6C[289317484];
        v20 = dword_140404A6C[289317483];
        if ( (int)dword_140404A6C[289317484] >= 0x10000
          || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
        {
          v21 = dword_140404A6C[289317485];
        }
        else
        {
          v21 = dword_140404A6C[289317485];
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v19 = ++dword_140404A6C[289317484];
            v21 = 0;
            dword_140404A6C[289317485] = 0;
          }
          v22 = v19++;
          v14 = *((_BYTE *)&dword_140404A6C[289317486] + v22);
          dword_140404A6C[289317484] = v19;
        }
        if ( v14 == 1 )
        {
          v23 = 0;
          v24 = 0;
          if ( (int)dword_140404A6C[179662117] <= 0 )
          {
LABEL_53:
            v26 = ntohl_sr(dword_140404A6C[289301087]);
            v27 = HIWORD(dword_140404A6C[289301086]);
            v28 = 23LL * (int)dword_140404A6C[179662117];
            dword_140404A6C[v28 + 179473713] = v26;
            LOWORD(dword_140404A6C[v28 + 179473714]) = ntohs_sr(v27);
            sub_140115AE0(&dword_140404A6C[v28 + 179473701], 8);
            v29 = dword_140404A6C[289317484];
            if ( (int)dword_140404A6C[289317484] < 0x10000
              && (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
            {
              if ( (int)dword_140404A6C[289317485] > 0 )
              {
                v29 = dword_140404A6C[289317484] + 1;
                dword_140404A6C[289317485] = 0;
                ++dword_140404A6C[289317484];
              }
              dword_140404A6C[v28 + 179473720] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v29);
              dword_140404A6C[289317484] = v29 + 4;
            }
            v30 = 23LL * (int)dword_140404A6C[179662117];
            dword_140404A6C[v30 + 179473720] = sub_140198F9B() - dword_140404A6C[v30 + 179473720];
            sub_140115AE0(&dword_140404A6C[v30 + 179473721], 4);
            sub_140115AE0(&dword_140404A6C[v30 + 179473717], 8);
            sub_140115AE0(&dword_140404A6C[v30 + 179473719], 8);
            v31 = dword_140404A6C[289317484];
            v32 = dword_140404A6C[289317483];
            if ( (int)dword_140404A6C[289317484] >= 0x10000
              || (signed int)(dword_140404A6C[289317484] + 32) > (int)dword_140404A6C[289317483] )
            {
              v33 = dword_140404A6C[289317485];
            }
            else
            {
              v33 = dword_140404A6C[289317485];
              if ( (int)dword_140404A6C[289317485] > 0 )
              {
                v31 = dword_140404A6C[289317484] + 1;
                v33 = 0;
                ++dword_140404A6C[289317484];
                dword_140404A6C[289317485] = 0;
              }
              v34 = v31;
              v31 += 32;
              v35 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v34);
              v36 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v34);
              dword_140404A6C[289317484] = v31;
              *(_OWORD *)&dword_140404A6C[v30 + 179473704] = v35;
              *(_OWORD *)&dword_140404A6C[v30 + 179473708] = v36;
            }
            if ( v31 < 0x10000 && v31 + 4 <= v32 )
            {
              if ( v33 > 0 )
              {
                ++v31;
                v33 = 0;
                dword_140404A6C[289317484] = v31;
                dword_140404A6C[289317485] = 0;
              }
              v39 = v31;
              v31 += 4;
              dword_140404A6C[v30 + 179473712] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v39);
              dword_140404A6C[289317484] = v31;
            }
            if ( (int)dword_140404A6C[v30 + 179473701] >= 27 && v31 < 0x10000 )
            {
              if ( v31 + 4 <= v32 )
              {
                if ( v33 > 0 )
                {
                  ++v31;
                  v33 = 0;
                  dword_140404A6C[289317484] = v31;
                  dword_140404A6C[289317485] = 0;
                }
                v40 = v31;
                v31 += 4;
                dword_140404A6C[v30 + 179473715] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v40);
                dword_140404A6C[289317484] = v31;
              }
              if ( v31 < 0x10000 && v31 + 2 <= v32 )
              {
                if ( v33 > 0 )
                {
                  ++v31;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v31;
                }
                LOWORD(dword_140404A6C[v30 + 179473716]) = *(_WORD *)((char *)&dword_140404A6C[289317486] + v31);
                dword_140404A6C[289317484] = v31 + 2;
              }
            }
            v41 = dword_140404A6C[v30 + 179473701];
            if ( v41 >= 30 )
            {
              sub_140115AE0(&dword_140404A6C[v30 + 179473723], 1);
              v41 = dword_140404A6C[v30 + 179473701];
            }
            v42 = &dword_140404A6C[v30 + 179473702];
            v43 = &dword_140404A6C[v30 + 179473703];
            if ( v41 < 34 )
            {
              ++dword_140404A6C[179662117];
              *v42 = 0;
              *v43 = 0;
            }
            else
            {
              sub_140115AE0(v42, 8);
              sub_140115AE0(v43, 8);
              ++dword_140404A6C[179662117];
            }
          }
          else
          {
            v25 = &dword_140404A6C[179473714];
            while ( *(v25 - 1) != (unsigned int)ntohl_sr(dword_140404A6C[289301087])
                 || *(_WORD *)v25 != (unsigned __int16)ntohs_sr(HIWORD(dword_140404A6C[289301086])) )
            {
              ++v23;
              ++v24;
              v25 += 23;
              if ( v23 >= (int)dword_140404A6C[179662117] )
                goto LABEL_53;
            }
            v37 = 23LL * v23;
            sub_140115AE0(&dword_140404A6C[v37 + 179473701], 8);
            v38 = dword_140404A6C[289317484];
            if ( (int)dword_140404A6C[289317484] < 0x10000
              && (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
            {
              if ( (int)dword_140404A6C[289317485] > 0 )
              {
                v38 = dword_140404A6C[289317484] + 1;
                dword_140404A6C[289317485] = 0;
                ++dword_140404A6C[289317484];
              }
              dword_140404A6C[v37 + 179473720] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v38);
              dword_140404A6C[289317484] = v38 + 4;
            }
            dword_140404A6C[23 * v24 + 179473720] = sub_140198F9B() - dword_140404A6C[23 * v24 + 179473720];
            sub_140115AE0(&dword_140404A6C[v37 + 179473721], 4);
            sub_140115AE0(&dword_140404A6C[v37 + 179473717], 8);
            sub_140115AE0(&dword_140404A6C[v37 + 179473719], 8);
          }
        }
        else if ( v14 == 74 )
        {
          dword_140404A6C[179662131] = 2;
          if ( v19 < 0x10000 )
          {
            if ( v19 + 4 <= (int)dword_140404A6C[289317483] )
            {
              if ( v21 > 0 )
              {
                ++v19;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v19;
                v21 = 0;
              }
              v44 = v19;
              v19 += 4;
              v17 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v44);
              dword_140404A6C[289317484] = v19;
            }
            if ( v19 < 0x10000 && v19 + 4 <= (int)dword_140404A6C[289317483] )
            {
              if ( v21 > 0 )
              {
                ++v19;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v19;
                v21 = 0;
              }
              v45 = v19;
              v19 += 4;
              v18 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v45);
              dword_140404A6C[289317484] = v19;
            }
          }
          v46 = v17 + dword_140404A6C[179473693];
          if ( (signed int)(v17 + dword_140404A6C[179473693]) > 0x2000 )
            v46 = 0x2000;
          dword_140404A6C[179473694] = v46;
          v47 = v18;
          if ( v18 < v18 + 128 )
          {
            v48 = &dword_140404A6C[2 * v18 + 179457310];
            do
            {
              if ( v47 < v17 && v47 < 0x2000 && v19 < 0x10000 )
              {
                if ( v19 + 4 <= v20 )
                {
                  if ( v21 > 0 )
                  {
                    ++v19;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v19;
                    v21 = 0;
                  }
                  v49 = v19;
                  v19 += 4;
                  *(v48 - 1) = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v49);
                  dword_140404A6C[289317484] = v19;
                }
                if ( v19 < 0x10000 && v19 + 2 <= v20 )
                {
                  if ( v21 > 0 )
                  {
                    ++v19;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v19;
                    v21 = 0;
                  }
                  v50 = v19;
                  v19 += 2;
                  *(_WORD *)v48 = *(_WORD *)((char *)&dword_140404A6C[289317486] + v50);
                  dword_140404A6C[289317484] = v19;
                }
              }
              ++v47;
              v48 += 2;
            }
            while ( v47 < v18 + 128 );
          }
        }
      }
      while ( (int)sub_14011C760() > 0 );
    }
  }
  return;
}
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56

// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140199007: using guessed type __int64 __fastcall ntohs(_QWORD);
// 1402B231C: using guessed type int dword_1402B231C;
// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 150F6110C: using guessed type unsigned int;
// 150F61110: using guessed type unsigned int;
// 16B0A7EE4: using guessed type unsigned int;
// 16B15FF00: using guessed type unsigned int;
// 16B15FF24: using guessed type unsigned int;
// 16B15FF28: using guessed type unsigned int;
// 16B15FF2C: using guessed type unsigned int;
// 16B15FF34: using guessed type unsigned int;
// 16B15FF38: using guessed type unsigned int;
// 183EBFAA4: using guessed type unsigned int;
// 183F7AED4: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;
// 1AD04B1D4: using guessed type unsigned int;
// 1AD04B1D8: using guessed type unsigned int;
// 1AD04B1E8: using guessed type unsigned int;
// 1AD04B1EC: using guessed type unsigned int;

//----- (00000001400FE760) ----------------------------------------------------
void sub_1400FE760()
{
  int v0; // eax
  unsigned int v1; // ecx

  *(_OWORD *)&dword_140404A6C[70087067] = xmmword_1402797E0;
  dword_140404A6C[70087074] = 41;
  v0 = sr_DrawMenuButton("Back");
  v1 = dword_140404A6C[283831444];
  if ( v0 )
    v1 = 0;
  *(_QWORD *)&dword_140404A6C[70087081] = (uintptr_t)sub_1400FE870;
  dword_140404A6C[70087068] = 1115684864;
  dword_140404A6C[70087070] = 1105199104;
  dword_140404A6C[283831444] = v1;
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
}

// 1402797E0: using guessed type __int128 xmmword_1402797E0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F61108: using guessed type unsigned int;
// 150F61110: using guessed type unsigned int;
// 183EBFCBC: using guessed type unsigned int;

//----- (0000000140118B70) ----------------------------------------------------
void            sub_140118B70(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ecx
  __int64 v3; // rdi
  unsigned int v4; // edx
  bool v5; // cc
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // r8d
  int *v9; // rdx
  char *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  int *v13; // rdi
  unsigned int v14; // eax
  unsigned int *v15; // rbx
  unsigned int v16; // eax
  unsigned int *v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax

  v1 = a1;
  v2 = dword_140404A6C[280649838];
  v3 = 3597 * v1;
  v4 = dword_140404A6C[3597 * v1 + 71856342];
  if ( v4 - 1 <= 1 )
    v2 = 1;
  dword_140404A6C[280649838] = v2;
  if ( !v4 )
  {
    dword_140404A6C[280649838] = 0;
    return;
  }
  if ( v2 )
  {
    if ( v4 == 1 )
    {
      sub_1400755F0(240.0, 32.0);
      v5 = dword_140404A6C[v3 + 71856286] <= 5;
      dword_140404A6C[70087067] = 1136918528;
      dword_140404A6C[70087068] = 1134034944;
      if ( v5 )
      {
        v6 = dword_140404A6C[70087076];
        if ( (int)dword_140404A6C[v3 + 71856291] > 0 )
          v6 = 1;
        dword_140404A6C[70087076] = v6;
        if ( (unsigned int)sr_DrawMenuButton("Respawn at Base") )
          dword_140404A6C[v3 + 71856345] = 2;
      }
      v7 = dword_140404A6C[70087076];
      v5 = (int)dword_140404A6C[v3 + 71856291] <= 0;
      dword_140404A6C[70087074] = 30;
      if ( !v5 )
        v7 = 1;
      dword_140404A6C[70087076] = v7;
      if ( (unsigned int)sr_DrawMenuButton("Enter City") )
        dword_140404A6C[v3 + 71856345] = 1;
      sub_1400753C0();
      v4 = dword_140404A6C[v3 + 71856342];
    }
    if ( v4 >= 0xE )
    {
      if ( v4 <= 0x1A )
      {
        if ( dword_140404A6C[283831312] == 4 )
          sub_140119F70(v1);
        else
          sub_140119220(v1);
      }
      return;
    }
    switch ( v4 )
    {
      case 2u:
        sub_14011ACC0(v1);
        return;
      case 9u:
        dword_140404A6C[70087067] = 1082130432;
        dword_140404A6C[70087068] = 1124073472;
        if ( (int)dword_140404A6C[70317962] < 16 )
        {
          dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
          dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
        }
        dword_140404A6C[70087069] = 1132199936;
        dword_140404A6C[70087070] = 1107296256;
        sr_DrawMenuButtonSelectable("Buy", (int *)&dword_140404A6C[v3 + 71856345], 1);
        sr_DrawMenuButtonSelectable("Sell", (int *)&dword_140404A6C[v3 + 71856345], 2);
        v8 = 0;
        v9 = (int *)&dword_140404A6C[280649838];
        v10 = "Done";
LABEL_53:
        *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
LABEL_54:
        sr_DrawMenuButtonSelectable((unsigned __int8 *)v10, v9, v8);
        v18 = dword_140404A6C[70317962];
        if ( (int)dword_140404A6C[70317962] > 0 )
        {
          --dword_140404A6C[70317962];
          v19 = v18 - 1;
          dword_140404A6C[70087069] = dword_140404A6C[2 * v19 + 70317963];
          dword_140404A6C[70087070] = dword_140404A6C[2 * v19 + 70317964];
        }
        return;
      case 0xAu:
        sub_14011A330(v1);
        return;
    }
    if ( v4 != 11 )
    {
      if ( v4 - 12 > 1 )
        return;
      dword_140404A6C[70087067] = 1082130432;
      dword_140404A6C[70087068] = 1124073472;
      if ( (int)dword_140404A6C[70317962] < 16 )
      {
        dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
        dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
      }
      v15 = &dword_140404A6C[v3 + 71856345];
      dword_140404A6C[70087069] = 1132199936;
      dword_140404A6C[70087070] = 1107296256;
      sr_DrawMenuButtonSelectable("Deposit", (int *)&dword_140404A6C[v3 + 71856345], 7);
      sr_DrawMenuButtonSelectable("Withdrawl $5", (int *)&dword_140404A6C[v3 + 71856345], 1);
      sr_DrawMenuButtonSelectable("Withdrawl $10", (int *)&dword_140404A6C[v3 + 71856345], 2);
      sr_DrawMenuButtonSelectable("Withdrawl $20", (int *)&dword_140404A6C[v3 + 71856345], 3);
      sr_DrawMenuButtonSelectable("Withdrawl $50", (int *)&dword_140404A6C[v3 + 71856345], 4);
      sr_DrawMenuButtonSelectable("Withdrawl $100", (int *)&dword_140404A6C[v3 + 71856345], 5);
      sr_DrawMenuButtonSelectable("Withdrawl $1000", (int *)&dword_140404A6C[v3 + 71856345], 6);
      v16 = dword_140404A6C[v3 + 71856342];
      v17 = &dword_140404A6C[280649838];
      if ( v16 == 12 )
        v17 = v15;
      v8 = 0;
      if ( v16 == 12 )
        v8 = 16;
      v10 = "Done";
      if ( v16 == 12 )
        v10 = "Back";
      v9 = (int *)v17;
      goto LABEL_53;
    }
    if ( (_DWORD)v1 == -1 )
      return;
    v11 = (int)dword_140404A6C[v3 + 71856343];
    if ( (_DWORD)v11 == -1 )
      return;
    dword_140404A6C[70087067] = 1082130432;
    dword_140404A6C[70087068] = 1124073472;
    sub_1400755F0(252.0, 32.0);
    v12 = 14019 * v11;
    v13 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 291638736);
    v14 = dword_140404A6C[v12 + 225641203];
    if ( v14 == 3 )
    {
      sr_DrawMenuButtonSelectable("Sell Car", v13, 1);
      v14 = dword_140404A6C[v12 + 225641203];
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
      if ( v14 == 3 )
        goto LABEL_38;
    }
    else
    {
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
    }
    v13 = (int *)&dword_140404A6C[280649838];
LABEL_38:
    v8 = 0;
    if ( v14 == 3 )
      v8 = 16;
    v10 = "Done";
    if ( v14 == 3 )
      v10 = "Back";
    v9 = v13;
    goto LABEL_54;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 18329CC24: using guessed type unsigned int;

//----- (0000000140119050) ----------------------------------------------------
__int64            sub_140119050(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int *v3; // rdx
  int v4; // r8d
  char *v5; // rcx
  __int64 result; // rax

  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v1 = 3597LL * a1;
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1107296256;
  sr_DrawMenuButtonSelectable("Deposit", (int *)&dword_140404A6C[v1 + 71856345], 7);
  sr_DrawMenuButtonSelectable("Withdrawl $5", (int *)&dword_140404A6C[v1 + 71856345], 1);
  sr_DrawMenuButtonSelectable("Withdrawl $10", (int *)&dword_140404A6C[v1 + 71856345], 2);
  sr_DrawMenuButtonSelectable("Withdrawl $20", (int *)&dword_140404A6C[v1 + 71856345], 3);
  sr_DrawMenuButtonSelectable("Withdrawl $50", (int *)&dword_140404A6C[v1 + 71856345], 4);
  sr_DrawMenuButtonSelectable("Withdrawl $100", (int *)&dword_140404A6C[v1 + 71856345], 5);
  sr_DrawMenuButtonSelectable("Withdrawl $1000", (int *)&dword_140404A6C[v1 + 71856345], 6);
  v2 = dword_140404A6C[v1 + 71856342];
  v3 = &dword_140404A6C[280649838];
  if ( v2 == 12 )
    v3 = &dword_140404A6C[v1 + 71856345];
  v4 = 0;
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  if ( v2 == 12 )
    v4 = 16;
  v5 = "Done";
  if ( v2 == 12 )
    v5 = "Back";
  sr_DrawMenuButtonSelectable((unsigned __int8 *)v5, (int *)v3, v4);
  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (0000000140119220) ----------------------------------------------------
__int64            sub_140119220(int a1)
{
  unsigned int v1; // xmm2_4
  unsigned int v2; // xmm3_4
  signed int v3; // edi
  __int64 v4; // rbx
  signed int v5; // ecx
  unsigned int v6; // xmm1_4
  unsigned int v7; // xmm8_4
  float v8; // xmm6_4
  unsigned int v9; // eax
  signed int v10; // r14d
  unsigned int *v11; // r15
  unsigned int *v12; // rcx
  unsigned __int8 *v13; // rdx
  char v14; // al
  unsigned int v15; // ecx
  int v16; // r8d
  int *v17; // r14
  unsigned int *v18; // rcx
  unsigned __int8 *v19; // rdx
  char v20; // al
  unsigned int v21; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140119220[1088];
#define v23 (*(__int64 (*))(void *)(sr_frame_140119220 + 0)) /* [rsp+8h] */
#define v24 (*(char (*)[512])(void *)(sr_frame_140119220 + 48)) /* [rsp+38h] */
#define v25 (*(unsigned __int8 (*)[512])(void *)(sr_frame_140119220 + 560)) /* [rsp+238h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140119220 + 1072)) /* [rsp+438h] */

  v1 = 1082130432;
  v2 = 1115684864;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1115684864;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
    v2 = dword_140404A6C[70087068];
    v1 = dword_140404A6C[70087067];
  }
  v3 = 0;
  v4 = 3597LL * a1;
  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[70087084] = v1;
  dword_140404A6C[70087085] = v2;
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087083] = 0;
  sr_DrawMenuButtonSelectable("Weapons", (int *)&dword_140404A6C[v4 + 71856345], 128);
  sr_DrawMenuButtonSelectable("Ammo", (int *)&dword_140404A6C[v4 + 71856345], 129);
  sr_DrawMenuButtonSelectable("Equipment", (int *)&dword_140404A6C[v4 + 71856345], 130);
  if ( dword_140404A6C[283831312] != 7 )
  {
    sr_DrawMenuButtonSelectable("Vehicles", (int *)&dword_140404A6C[v4 + 71856345], 131);
    sr_DrawMenuButtonSelectable("Stocks", (int *)&dword_140404A6C[v4 + 71856345], 132);
  }
  if ( dword_140404A6C[v4 + 71856289] )
    sr_DrawMenuButtonSelectable("Manager", (int *)&dword_140404A6C[v4 + 71856345], 133);
  if ( !dword_140404A6C[70087083] )
  {
    dword_140404A6C[70087067] = dword_140404A6C[70087084];
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087086] + *(float *)&dword_140404A6C[70087085];
    if ( dword_140404A6C[70326263] )
    {
      ++dword_140404A6C[70326521];
      dword_140404A6C[70326520] = 0;
    }
  }
  v5 = dword_140404A6C[70317962];
  dword_140404A6C[70087083] = 1;
  if ( (int)dword_140404A6C[70317962] <= 0 )
  {
    v6 = dword_140404A6C[70087069];
  }
  else
  {
    v5 = dword_140404A6C[70317962] - 1;
    dword_140404A6C[70317962] = v5;
    v6 = dword_140404A6C[2 * v5 + 70317963];
    dword_140404A6C[70087069] = v6;
    dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
  }
  v7 = 1107296256;
  v8 = 128.0;
  dword_140404A6C[70087067] = 1107296256;
  dword_140404A6C[70087068] = 1124073472;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = v6;
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v5 = ++dword_140404A6C[70317962];
  }
  v9 = dword_140404A6C[v4 + 71856342];
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1109393408;
  if ( v9 == 14 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278535234]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278530162]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278522554]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278525090]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16", (int *)&dword_140404A6C[v4 + 71856345], 3);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278532698]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Uzi", (int *)&dword_140404A6C[v4 + 71856345], 4);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 15 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278536502]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm Magazine", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278531430]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278523822]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278526358]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 3);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278533966]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Uzi Magazine", (int *)&dword_140404A6C[v4 + 71856345], 4);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 16 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278539038]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Bandage", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278540306]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Briefcase", (int *)&dword_140404A6C[v4 + 71856345], 7);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278537770]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Grenade", (int *)&dword_140404A6C[v4 + 71856345], 6);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 17 )
  {
    v10 = 0;
    if ( (int)dword_140404A6C[v4 + 71857986] > 0 )
    {
      v11 = &dword_140404A6C[v4 + 71858004];
      do
      {
        if ( v10 == 4 )
        {
          v7 = 1140850688;
          v8 = 128.0;
        }
        dword_140404A6C[70087067] = v7;
        *(float *)&dword_140404A6C[70087068] = v8;
        v12 = &dword_140404A6C[18 * v10 + 71857988 + v4];
        v13 = (unsigned __int8 *)(v25 - (unsigned __int8 *)v12);
        do
        {
          v14 = *(_BYTE *)v12;
          *((_BYTE *)v12 + (_QWORD)v13) = *(_BYTE *)v12;
          v12 = (unsigned int *)((char *)v12 + 1);
        }
        while ( v14 );
        sub_140158AB0(v24, "$%d", *v11);
        sub_1400764B0(
          v24,
          (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
          (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
          12.0,
          10);
        v15 = dword_140404A6C[70087076];
        v16 = *(v11 - 17);
        if ( (int)*v11 > (int)dword_140404A6C[v4 + 71856272] )
          v15 = 1;
        dword_140404A6C[70087076] = v15;
        sr_DrawMenuButtonSelectable(v25, (int *)&dword_140404A6C[v4 + 71856345], v16);
        ++v10;
        v8 = v8 + 44.0;
        v11 += 18;
      }
      while ( v10 < (int)dword_140404A6C[v4 + 71857986] );
      v9 = dword_140404A6C[v4 + 71856342];
      v5 = dword_140404A6C[70317962];
    }
  }
  if ( v9 == 18 )
  {
    dword_140404A6C[70087067] = v7;
    *(float *)&dword_140404A6C[70087068] = v8;
    sr_DrawMenuButtonSelectable("Buy 1 Share", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sr_DrawMenuButtonSelectable("Buy 10 Shares", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sr_DrawMenuButtonSelectable("Buy 100 Shares", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sr_DrawMenuButtonSelectable("Buy 1000 Shares", (int *)&dword_140404A6C[v4 + 71856345], 3);
    dword_140404A6C[70087067] = 1140850688;
    dword_140404A6C[70087068] = 1124073472;
    v7 = 1140850688;
    v8 = 128.0;
    sr_DrawMenuButtonSelectable("Sell 1 Share", (int *)&dword_140404A6C[v4 + 71856345], 4);
    sr_DrawMenuButtonSelectable("Sell 10 Shares", (int *)&dword_140404A6C[v4 + 71856345], 5);
    sr_DrawMenuButtonSelectable("Sell 100 Shares", (int *)&dword_140404A6C[v4 + 71856345], 6);
    sr_DrawMenuButtonSelectable("Sell 1000 Shares", (int *)&dword_140404A6C[v4 + 71856345], 7);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 != 19 )
    goto LABEL_47;
  dword_140404A6C[70087067] = v7;
  *(float *)&dword_140404A6C[70087068] = v8;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v5 = ++dword_140404A6C[70317962];
  }
  dword_140404A6C[70087070] = 1102053376;
  dword_140404A6C[70087069] = 1132199936;
  if ( (int)dword_140404A6C[v4 + 71857986] > 0 )
  {
    v17 = (int *)&dword_140404A6C[v4 + 71857987];
    do
    {
      if ( v3 == 10 )
      {
        dword_140404A6C[70087067] = 1140850688;
        dword_140404A6C[70087068] = 1124073472;
      }
      v18 = &dword_140404A6C[18 * v3 + 71857988 + v4];
      v19 = (unsigned __int8 *)(v25 - (unsigned __int8 *)v18);
      do
      {
        v20 = *(_BYTE *)v18;
        *((_BYTE *)v18 + (_QWORD)v19) = *(_BYTE *)v18;
        v18 = (unsigned int *)((char *)v18 + 1);
      }
      while ( v20 );
      sr_DrawMenuButtonSelectable(v25, (int *)&dword_140404A6C[v4 + 71856345], *v17);
      ++v3;
      v17 += 18;
    }
    while ( v3 < (int)dword_140404A6C[v4 + 71857986] );
    v5 = dword_140404A6C[70317962];
  }
  if ( v5 > 0 )
  {
    dword_140404A6C[70317962] = --v5;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v5 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
LABEL_47:
    if ( v5 > 0 )
    {
      dword_140404A6C[70317962] = --v5;
      dword_140404A6C[70087069] = dword_140404A6C[2 * v5 + 70317963];
      dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
    }
  }
  dword_140404A6C[70087068] = 1138491392;
  dword_140404A6C[70087067] = 1107296256;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1109393408;
  sr_DrawMenuButtonSelectable("Done", (int *)&dword_140404A6C[280649838], 0);
  v21 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v21 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v21 - 1) + 70317964];
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v23
#undef v24
#undef v25
#undef v26

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F6111C: using guessed type unsigned int;
// 150F61120: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;

//----- (0000000140119F70) ----------------------------------------------------
__int64            sub_140119F70(int a1)
{
  char v1; // bp
  __int64 v2; // rdx
  int v3; // ecx
  unsigned int v4; // xmm1_4
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // edx
  int *v8; // rsi
  int v9; // r8d
  unsigned int *v10; // rcx
  unsigned __int8 *v11; // rdx
  char v12; // al
  signed int v13; // ebx
  int *v14; // rsi
  int v15; // r8d
  unsigned int *v16; // rcx
  unsigned __int8 *v17; // rdx
  char v18; // al
  unsigned int v19; // eax
  unsigned int v20; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140119F70[560];
#define v22 (*(__int64 (*))(void *)(sr_frame_140119F70 + 0)) /* [rsp+0h] */
#define v23 (*(unsigned __int8 (*)[512])(void *)(sr_frame_140119F70 + 32)) /* [rsp+20h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140119F70 + 544)) /* [rsp+220h] */

  v1 = 0;
  v2 = a1;
  v3 = dword_140404A6C[70317962];
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087067] = 1098907648;
  dword_140404A6C[70087068] = 1115684864;
  dword_140404A6C[70087084] = 1098907648;
  dword_140404A6C[70087085] = 1115684864;
  dword_140404A6C[70087083] = 0;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v3 = ++dword_140404A6C[70317962];
  }
  v4 = 1126170624;
  v5 = 0;
  v6 = 3597 * v2;
  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1103101952;
  v7 = dword_140404A6C[3597 * v2 + 71857986];
  if ( v7 > 0 )
  {
    v8 = (int *)&dword_140404A6C[v6 + 71857987];
    do
    {
      v9 = *v8;
      if ( (*v8 & 0x1000000) != 0 )
      {
        v10 = &dword_140404A6C[18 * v5 + 71857988 + v6];
        v11 = (unsigned __int8 *)(v23 - (unsigned __int8 *)v10);
        do
        {
          v12 = *(_BYTE *)v10;
          *((_BYTE *)v10 + (_QWORD)v11) = *(_BYTE *)v10;
          v10 = (unsigned int *)((char *)v10 + 1);
        }
        while ( v12 );
        sr_DrawMenuButtonSelectable(v23, (int *)&dword_140404A6C[v6 + 71856345], v9);
      }
      v7 = dword_140404A6C[v6 + 71857986];
      ++v5;
      v8 += 18;
    }
    while ( v5 < v7 );
    v3 = dword_140404A6C[70317962];
    v4 = dword_140404A6C[70087069];
  }
  if ( v3 > 0 )
  {
    dword_140404A6C[70317962] = --v3;
    v4 = dword_140404A6C[2 * v3 + 70317963];
    dword_140404A6C[70087069] = v4;
    dword_140404A6C[70087070] = dword_140404A6C[2 * v3 + 70317964];
  }
  if ( !dword_140404A6C[70087083] && dword_140404A6C[70326263] )
  {
    ++dword_140404A6C[70326521];
    dword_140404A6C[70326520] = 0;
  }
  dword_140404A6C[70087067] = 1098907648;
  dword_140404A6C[70087083] = 1;
  dword_140404A6C[70087068] = 1124073472;
  if ( v3 < 16 )
  {
    dword_140404A6C[2 * v3 + 70317963] = v4;
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v13 = 0;
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1108344832;
  if ( v7 > 0 )
  {
    v14 = (int *)&dword_140404A6C[v6 + 71857987];
    do
    {
      v15 = *v14;
      if ( (*v14 & 0x1000000) == 0 )
      {
        v16 = &dword_140404A6C[18 * v13 + 71857988 + v6];
        v17 = (unsigned __int8 *)(v23 - (unsigned __int8 *)v16);
        do
        {
          v18 = *(_BYTE *)v16;
          *((_BYTE *)v16 + (_QWORD)v17) = *(_BYTE *)v16;
          v16 = (unsigned int *)((char *)v16 + 1);
        }
        while ( v18 );
        v19 = dword_140404A6C[70087076];
        if ( (v15 & 0x100) != 0 )
          v19 = 1;
        dword_140404A6C[70087076] = v19;
        sr_DrawMenuButtonSelectable(v23, (int *)&dword_140404A6C[v6 + 71856345], v15);
        if ( (v1 & 7) == 7 )
        {
          dword_140404A6C[70087068] = 1124073472;
          *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + 284.0;
        }
        ++v1;
      }
      ++v13;
      v14 += 18;
    }
    while ( v13 < (int)dword_140404A6C[v6 + 71857986] );
  }
  dword_140404A6C[70087068] = 1139802112;
  dword_140404A6C[70087067] = 1098907648;
  sr_DrawMenuButtonSelectable("Done", (int *)&dword_140404A6C[280649838], 0);
  v20 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v20 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v20 - 1) + 70317964];
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v22
#undef v23
#undef v24

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F6111C: using guessed type unsigned int;
// 150F61120: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;

//----- (000000014011A330) ----------------------------------------------------
void            sub_14011A330(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // r8d
  __int64 v4; // r13
  __int64 v5; // r15
  signed int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rax
  char *v9; // rcx
  char *v10; // rdx
  char v11; // al
  _WORD *v12; // rcx
  char *v13; // rcx
  unsigned int v14; // ecx
  int *v15; // r14
  unsigned int v16; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int *v22; // rbx
  char *v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // ecx
  int *v28; // rdx
  char *v29; // rcx
  unsigned int v30; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011A330[1088];
#define v31 (*(__int64 (*))(void *)(sr_frame_14011A330 + 0)) /* [rsp+8h] */
#define v32 (*(__int64 (*))(void *)(sr_frame_14011A330 + 40)) /* [rsp+30h] */
#define v33 (*(__int64 (*))(void *)(sr_frame_14011A330 + 48)) /* [rsp+38h] */
#define v34 (*(char (*)[504])(void *)(sr_frame_14011A330 + 56)) /* [rsp+40h] */
#define v35 (*(char (*)[512])(void *)(sr_frame_14011A330 + 560)) /* [rsp+238h] */
#define v36 (*(__int64 (*))(void *)(sr_frame_14011A330 + 1072)) /* [rsp+438h] */

  if ( a1 != -1 )
  {
    v1 = 3597LL * a1;
    v2 = (int)dword_140404A6C[v1 + 71856343];
    if ( (_DWORD)v2 != -1 )
    {
      dword_140404A6C[70087067] = 1082130432;
      dword_140404A6C[70087068] = 1115684864;
      sub_1400755F0(252.0, 28.0);
      v3 = 0;
      v4 = v2;
      v5 = 14019 * v2;
      v6 = 0;
      if ( (int)dword_140404A6C[14019 * v2 + 225654128] > 0 )
      {
        v7 = 0;
        while ( 1 )
        {
          if ( dword_140404A6C[v5 + 225641203] == 3 )
          {
            LOBYTE(v33) = 0;
            v8 = (int)dword_140404A6C[14019 * v4 + 225654131 + 3 * v7];
            if ( (int)v8 < 6 )
            {
              v9 = off_1402B23E0[v8];
              v10 = (char *)((char *)&v33 - v9);
              do
              {
                v11 = *v9;
                v10[(_QWORD)v9] = *v9;
                ++v9;
              }
              while ( v11 );
            }
            v12 = (_WORD *)((char *)&v32 + 7);
            do
            {
              v21 = *((_BYTE *)v12 + 1) == 0;
              v12 = (_WORD *)((char *)v12 + 1);
            }
            while ( !v21 );
            *v12 = 32;
            v13 = (char *)&v32 + 7;
            do
              v21 = *++v13 == 0;
            while ( !v21 );
            strcpy(
              v13,
              (     char *)&dword_140404A6C[24944 * dword_140404A6C[14019 * v4 + 225654129 + 3 * v7] + 346707722]);
            sub_140158AB0(v35, "$%d", dword_140404A6C[14019 * v4 + 225654130 + 3 * v7]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v14 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[14019 * v4 + 225654130 + 3 * v7] )
              v14 = 1;
            v15 = (int *)&dword_140404A6C[v1 + 71856345];
            dword_140404A6C[70087076] = v14;
            sr_DrawMenuButtonSelectable((unsigned __int8 *)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
          }
          else
          {
            v15 = (int *)&dword_140404A6C[v1 + 71856345];
          }
          v16 = dword_140404A6C[v5 + 225641203];
          if ( v16 != 5 )
            goto LABEL_44;
          if ( v6 )
          {
            switch ( v6 )
            {
              case 1:
                v17 = 0x7469755320646552LL;
                v34[0] = 0;
                break;
              case 2:
                v17 = 0x7553206574696857LL;
                strcpy(v34, "it");
                break;
              case 3:
                v17 = 0x6563616C6B63654ELL;
                v34[0] = 0;
                break;
              case 4:
                v17 = 0x63654E2068736143LL;
                strcpy(v34, "klace");
                break;
              default:
                goto LABEL_29;
            }
          }
          else
          {
            v17 = 0x6975532065756C42LL;
            strcpy(v34, "t");
          }
          v33 = v17;
LABEL_29:
          v18 = v7 + 4673 * v4;
          v19 = 3 * v18;
          sub_140158AB0(v35, "$%d", dword_140404A6C[3 * v18 + 225654130]);
          sub_1400764B0(
            v35,
            (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
            (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
            12.0,
            10);
          v20 = dword_140404A6C[70087076];
          if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[v19 + 225654130] )
            v20 = 1;
          dword_140404A6C[70087076] = v20;
          switch ( v6 )
          {
            case 0:
              v21 = dword_140404A6C[v1 + 71859822] == 3;
              goto LABEL_41;
            case 1:
              v21 = dword_140404A6C[v1 + 71859822] == 8;
              goto LABEL_41;
            case 2:
              v21 = dword_140404A6C[v1 + 71859822] == 7;
              goto LABEL_41;
            case 3:
              v21 = dword_140404A6C[v1 + 71859826] == 1;
              goto LABEL_41;
            case 4:
              v21 = dword_140404A6C[v1 + 71859826] == 2;
LABEL_41:
              if ( v21 )
                dword_140404A6C[70087076] = 1;
              break;
          }
          v15 = (int *)&dword_140404A6C[v1 + 71856345];
          sr_DrawMenuButtonSelectable((unsigned __int8 *)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
          v16 = dword_140404A6C[v5 + 225641203];
LABEL_44:
          v22 = (unsigned int *)v15;
          if ( v16 == 8 )
          {
            LOBYTE(v33) = 0;
            v23 = (char *)&v32 + 7;
            do
              v21 = *++v23 == 0;
            while ( !v21 );
            strcpy(
              v23,
              (     char *)&dword_140404A6C[1268 * dword_140404A6C[14019 * v4 + 225654129 + 3 * v7] + 278521297]);
            sub_140158AB0(v35, "$%d", dword_140404A6C[14019 * v4 + 225654130 + 3 * v7]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v24 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[14019 * v4 + 225654130 + 3 * v7] )
              v24 = 1;
            v22 = &dword_140404A6C[v1 + 71856345];
            dword_140404A6C[70087076] = v24;
            sr_DrawMenuButtonSelectable((unsigned __int8 *)&v33, (int *)&dword_140404A6C[v1 + 71856345], v6 + 1);
            v16 = dword_140404A6C[v5 + 225641203];
          }
          if ( v16 == 9 )
          {
            v25 = v7 + 4673 * v4;
            v26 = 3 * v25;
            sub_140158AB0(v35, "$%d", dword_140404A6C[3 * v25 + 225654130]);
            sub_1400764B0(
              v35,
              (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
              (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
              12.0,
              10);
            v27 = dword_140404A6C[70087076];
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[v26 + 225654130] )
              v27 = 1;
            dword_140404A6C[70087076] = v27;
            sr_DrawMenuButtonSelectable("Burger", v15, v6 + 1);
            v22 = (unsigned int *)v15;
          }
          ++v6;
          ++v7;
          if ( v6 >= (int)dword_140404A6C[v5 + 225654128] )
          {
            v3 = 0;
            goto LABEL_57;
          }
        }
      }
      v22 = &dword_140404A6C[v1 + 71856345];
LABEL_57:
      v28 = (int *)&dword_140404A6C[280649838];
      if ( dword_140404A6C[v5 + 225641203] == 3 )
      {
        v28 = (int *)v22;
        v3 = 16;
      }
      v29 = "Done";
      if ( dword_140404A6C[v5 + 225641203] == 3 )
        v29 = "Back";
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 28.0;
      sr_DrawMenuButtonSelectable((unsigned __int8 *)v29, v28, v3);
      v30 = dword_140404A6C[70317962];
      if ( (int)dword_140404A6C[70317962] > 0 )
      {
        --dword_140404A6C[70317962];
        dword_140404A6C[70087069] = dword_140404A6C[2 * (v30 - 1) + 70317963];
        dword_140404A6C[70087070] = dword_140404A6C[2 * (v30 - 1) + 70317964];
      }
    }
  }
}
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36

// 1402B23E0: using guessed type char *off_1402B23E0[6];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (000000014011AA20) ----------------------------------------------------
__int64            sub_14011AA20(int a1)
{
  int *v1; // rbx
  __int64 result; // rax

  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1107296256;
  v1 = (int *)&dword_140404A6C[3597 * a1 + 71856345];
  sr_DrawMenuButtonSelectable("Buy", v1, 1);
  sr_DrawMenuButtonSelectable("Sell", v1, 2);
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  sr_DrawMenuButtonSelectable("Done", (int *)&dword_140404A6C[280649838], 0);
  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (000000014011AB60) ----------------------------------------------------
void            sub_14011AB60(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdi
  int *v4; // rbx
  unsigned int v5; // eax
  int v6; // r8d
  char *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax

  if ( a1 == -1 )
    return;
  v1 = 3597LL * a1;
  v2 = (int)dword_140404A6C[v1 + 71856343];
  if ( (_DWORD)v2 == -1 )
    return;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  sub_1400755F0(252.0, 32.0);
  v3 = 14019 * v2;
  v4 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 * 4 + 291638736);
  v5 = dword_140404A6C[v3 + 225641203];
  if ( v5 == 3 )
  {
    sr_DrawMenuButtonSelectable("Sell Car", v4, 1);
    v5 = dword_140404A6C[v3 + 225641203];
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
    if ( v5 == 3 )
      goto LABEL_8;
  }
  else
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  }
  v4 = (int *)&dword_140404A6C[280649838];
LABEL_8:
  v6 = 0;
  if ( v5 == 3 )
    v6 = 16;
  v7 = "Done";
  if ( v5 == 3 )
    v7 = "Back";
  sr_DrawMenuButtonSelectable((unsigned __int8 *)v7, v4, v6);
  v8 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    v9 = v8 - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v9 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v9 + 70317964];
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (000000014011ACC0) ----------------------------------------------------
__int64            sub_14011ACC0(int a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // rdi
  int v4; // r8d
  char *v5; // rcx
  signed int v6; // ecx
  __int64 result; // rax

  v1 = a1;
  if ( dword_140404A6C[283831312] == 2 || dword_140404A6C[283831312] == 5 )
  {
    v6 = dword_140404A6C[70317962];
    goto LABEL_22;
  }
  dword_140404A6C[70087084] = dword_140404A6C[70087067];
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087085] = dword_140404A6C[70087068];
  dword_140404A6C[70087083] = 0;
  sub_1400755F0(248.0, 32.0);
  v2 = 0;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1119879168;
  v3 = 3597 * v1;
  do
  {
    if ( dword_140404A6C[v3 + 71856286] != 17 )
      goto LABEL_12;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        dword_140404A6C[70087074] = 31;
        v4 = 2;
        v5 = "Join Monsota";
      }
      else
      {
        if ( dword_140404A6C[283831312] == 7 )
          goto LABEL_12;
        dword_140404A6C[70087074] = v2 + 30;
        v4 = v2 + 1;
        v5 = "Join OXS";
      }
    }
    else
    {
      dword_140404A6C[70087074] = 30;
      v4 = 1;
      v5 = "Join Goldmen";
    }
    sr_DrawMenuButtonSelectable((unsigned __int8 *)v5, (int *)&dword_140404A6C[v3 + 71856345], v4);
LABEL_12:
    ++v2;
  }
  while ( v2 < 3 );
  if ( dword_140404A6C[v3 + 71856286] != 17 )
  {
    dword_140404A6C[70087067] = 1144717312;
    dword_140404A6C[70087074] = 33;
    sr_DrawMenuButtonSelectable("Observer", (int *)&dword_140404A6C[v3 + 71856345], 4);
  }
  v6 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    v6 = dword_140404A6C[70317962] - 1;
    dword_140404A6C[70317962] = v6;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v6 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v6 + 70317964];
  }
  if ( !dword_140404A6C[70087083] && dword_140404A6C[70326263] )
  {
    ++dword_140404A6C[70326521];
    dword_140404A6C[70326520] = 0;
  }
  dword_140404A6C[70087083] = 1;
LABEL_22:
  dword_140404A6C[70087067] = 1146028032;
  dword_140404A6C[70087068] = 1107296256;
  if ( v6 < 16 )
  {
    dword_140404A6C[2 * v6 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087070] = 1107296256;
  dword_140404A6C[70087074] = 21;
  sr_DrawMenuButtonSelectable("Ready", (int *)&dword_140404A6C[3597 * v1 + 71856345], 5);
  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F6111C: using guessed type unsigned int;
// 150F61120: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;


//----- (000000014006C670) ----------------------------------------------------
// CRC32-style UI label ID helper. Lazily builds 256-entry table with polynomial 0xEDB88320 and returns bitwise-not final CRC.
__int64            sub_14006C670(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 *v2; // r9
  int v3; // r10d
  unsigned int *v4; // r11
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int8 v10; // r8
  __int64 v11; // rax

  v2 = a1;
  if ( !dword_140404A6C[18215125] )
  {
    v3 = 0;
    v4 = &dword_140404A6C[18215125];
    do
    {
      ++v4;
      v5 = (unsigned int)v3 >> 1;
      v6 = -(v3++ & 1) & 0xEDB88320;
      v7 = v5 ^ v6;
      LOBYTE(v5) = v7;
      v7 >>= 1;
      v8 = ((((v7 ^ -(v5 & 1) & 0xEDB88320) >> 1) ^ -(((unsigned __int8)v7 ^ -(v5 & 1) & 0x20) & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)((v7 ^ -(v5 & 1) & 0xEDB88320) >> 1)
            ^ -(((unsigned __int8)v7 ^ -(v5 & 1) & 0x20) & 1)
            & 0x20)
           & 1)
         & 0xEDB88320;
      v9 = (((v8 >> 1) ^ -(v8 & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)(v8 >> 1) ^ -(v8 & 1) & 0x20) & 1)
         & 0xEDB88320;
      *(v4 - 1) = (((v9 >> 1) ^ -(v9 & 1) & 0xEDB88320) >> 1)
                ^ -(((unsigned __int8)(v9 >> 1) ^ -(v9 & 1) & 0x20) & 1)
                & 0xEDB88320;
    }
    while ( v3 < 256 );
  }
  v10 = *a1;
  if ( *a1 )
  {
    do
    {
      ++v2;
      v11 = v10;
      v10 = *v2;
      a2 = (a2 >> 8) ^ dword_140404A6C[(v11 ^ (unsigned __int8)a2) + 18215125];
    }
    while ( *v2 );
  }
  return ~a2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006F750) ----------------------------------------------------
__int64            sub_14006F750(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // eax

  v10 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + 6 + (dword_140404A6C[70087064] << 16));
  v11 = (int)sub_140070380(v10, a2, a3, a4, a5, dword_140404A6C[70087071]);
  v12 = 122 * v11;
  dword_140404A6C[v12 + 70087215] = a7;
  dword_140404A6C[v12 + 70087146] = a7;
  *(_QWORD *)&dword_140404A6C[v12 + 70087217] = a8;
  dword_140404A6C[v12 + 70087115] = 6;
  *(_QWORD *)&dword_140404A6C[v12 + 70087149] = a9;
  sub_14006F120((__int64)&dword_140404A6C[122 * v11 + 70087151], (char *)a1);
  v13 = dword_140404A6C[70087107];
  if ( dword_140404A6C[70087107] == -1 )
    v13 = v11;
  dword_140404A6C[70087107] = v13;
  (*(void (           **)(_QWORD, __int64))&dword_140404A6C[v12 + 70087217])(dword_140404A6C[v12 + 70087215], 1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F61108: using guessed type unsigned int;
// 150F6110C: using guessed type unsigned int;
// 150F61110: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 151042810: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;

//----- (0000000140070B90) ----------------------------------------------------
__int64 sub_140070B90()
{
  dword_140404A6C[70326263] = 1;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[70326264]), 0xFFu, 0x400u);
  *(_QWORD *)&dword_140404A6C[70326520] = 0;
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15104AA48: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;

//----- (0000000140070BD0) ----------------------------------------------------
__int64            sub_140070BD0(int a1, unsigned int a2,      char *a3,      char *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rbx
  char *v9; // rdx
  unsigned int *v10; // rcx
  char v11; // al
  int v12; // eax
  char *v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rdx
  char v17; // al
  unsigned int v18; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140070BD0[1424];
#define v20 (*(__int64 (*))(void *)(sr_frame_140070BD0 + 0)) /* [rsp+0h] */
#define v21 (*(_BYTE (*)[36])(void *)(sr_frame_140070BD0 + 80)) /* [rsp+50h] */
#define v22 (*(char (*))(void *)(sr_frame_140070BD0 + 116)) /* [rsp+74h] */
#define v23 (*(int (*))(void *)(sr_frame_140070BD0 + 384)) /* [rsp+180h] */
#define v24 (*(char (*))(void *)(sr_frame_140070BD0 + 388)) /* [rsp+184h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140070BD0 + 1408)) /* [rsp+580h] */

  v4 = 517LL * a1;
  if ( (int)dword_140404A6C[v4 + 70315979] <= 1 && a2 <= 1 )
  {
    sub_140158AB0(&v23, "%s/%s", a3, a4);
    v6 = sub_14023A198(&v23, (__int64)v21);
    v7 = 0;
    v8 = v6;
    dword_140404A6C[133657101] = 0;
    if ( (_DWORD)v6 != -1 )
    {
      do
      {
        if ( v7 >= 1024 )
          break;
        if ( (v21[0] & 0x10) == 0 )
        {
          v9 = &v22;
          v10 = &dword_140404A6C[32 * (__int64)v7 + 133657102];
          do
          {
            v11 = *v9++;
            *(_BYTE *)v10 = v11;
            v10 = (unsigned int *)((char *)v10 + 1);
          }
          while ( v11 );
          ++dword_140404A6C[133657101];
        }
        v12 = sub_14023A5C4(v8, (__int64)v21);
        v7 = dword_140404A6C[133657101];
      }
      while ( v12 != -1 );
    }
    LOBYTE(dword_140404A6C[32 * (__int64)v7 + 133657102]) = 0;
    sub_140239CCC(v8);
    sub_14023AE00(
      (unsigned __int64)&dword_140404A6C[133657102],
      (int)dword_140404A6C[133657101],
      0x80u,
      (int (           *)(unsigned __int64, _BYTE *))sub_14006C980);
    LOBYTE(dword_140404A6C[v4 + 70315984]) = 0;
    LOBYTE(dword_140404A6C[v4 + 70316240]) = 0;
    *(_QWORD *)&dword_140404A6C[v4 + 70315982] = -1;
  }
  dword_140404A6C[v4 + 70315979] = 3;
  dword_140404A6C[v4 + 70315980] = a2;
  if ( a2 <= 1 )
  {
    v13 = "Open File";
    if ( a2 )
      v13 = "Save File";
    dword_140404A6C[v4 + 70315981] = sub_140071C20(
                                       (unsigned __int8 *)v13,
                                       (float)(*(float *)&dword_140404A6C[438291414] * 0.5) - 256.0,
                                       (float)(*(float *)&dword_140404A6C[438291415] * 0.5) - 160.0,
                                       512.0,
                                       0x43A00000u,
                                       1095761920,
                                       256);
    sub_1400707C0(
      "Files",
      256.0,
      128.0,
      256.0,
      0x41A00000u,
      1u,
      &dword_140404A6C[v4 + 70315982],
      (__int64)&dword_140404A6C[133657102],
      0x80u,
      dword_140404A6C[133657101]);
    v14 = (int)dword_140404A6C[v4 + 70315982];
    if ( (_DWORD)v14 != dword_140404A6C[v4 + 70315983] && (int)v14 >= 0 && (int)v14 < (int)dword_140404A6C[133657101] )
    {
      v15 = &dword_140404A6C[32 * v14 + 133657102];
      v16 = &dword_140404A6C[v4 + 70315984];
      do
      {
        v17 = *(_BYTE *)v15;
        v15 = (unsigned int *)((char *)v15 + 1);
        *(_BYTE *)v16 = v17;
        v16 = (unsigned int *)((char *)v16 + 1);
      }
      while ( v17 );
    }
    sub_140070200("Filename", (__int64)&dword_140404A6C[v4 + 70315984], 0x100u);
    dword_140404A6C[70087067] = 1134690304;
    dword_140404A6C[70087068] = 1082130432;
    if ( (int)dword_140404A6C[70317962] < 16 )
    {
      dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
      dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
    }
    dword_140404A6C[70087070] = 1103101952;
    dword_140404A6C[70087069] = 1124073472;
    if ( a2 )
      v23 = 1702256979;
    else
      v23 = 1852141647;
    v24 = 0;
    if ( (unsigned int)sr_DrawMenuButton((unsigned __int8 *)&v23) )
      sub_140158AB0(&dword_140404A6C[v4 + 70316240], "%s", (     char *)&dword_140404A6C[v4 + 70315984]);
    dword_140404A6C[70087074] = 41;
    sr_DrawMenuButton("Cancel");
    v18 = dword_140404A6C[70317962];
    if ( (int)dword_140404A6C[70317962] > 0 )
    {
      --dword_140404A6C[70317962];
      dword_140404A6C[70087069] = dword_140404A6C[2 * (v18 - 1) + 70317963];
      dword_140404A6C[70087070] = dword_140404A6C[2 * (v18 - 1) + 70317964];
    }
  }
  dword_140404A6C[v4 + 70315983] = dword_140404A6C[v4 + 70315982];
  sub_140077230();
  return 0; /* the function has no caller */
}
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 1601E12A0: using guessed type unsigned int;

//----- (0000000140070FF0) ----------------------------------------------------
__int64            sub_140070FF0(
        int a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        float *a7,
        float a8,
        float a9)
{
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
  float v12; // xmm1_4

  v9 = sub_14006C670("Scrollbar", a1 + (dword_140404A6C[70087064] << 16) + (dword_140404A6C[70087046] << 8));
  v10 = sub_140070380(v9, a2, a3, a4, a5, 0);
  v11 = 122LL * (int)v10;
  *(float *)&dword_140404A6C[v11 + 70087220] = a8;
  *(float *)&dword_140404A6C[v11 + 70087221] = a9;
  dword_140404A6C[v11 + 70087219] = a6;
  dword_140404A6C[v11 + 70087115] = 7;
  *(_QWORD *)&dword_140404A6C[v11 + 70087217] = (uint64)(uintptr_t)(a7);
  if ( dword_140404A6C[70317817] || (dword_140404A6C[v11 + 70087215] = 0, dword_140404A6C[70317817]) )
  {
    if ( !dword_140404A6C[70317856] )
    {
      if ( v10 != dword_140404A6C[70087109] )
        goto LABEL_12;
      dword_140404A6C[v11 + 70087215] = 1;
    }
  }
  if ( v10 == dword_140404A6C[70087109] )
  {
    v12 = *a7 - (float)((float)(int)dword_140404A6C[137297772] * 16.0);
    if ( v12 < a8 )
      v12 = a8;
    if ( v12 > a9 )
      v12 = a9;
    *a7 = v12;
  }
LABEL_12:
  if ( dword_140404A6C[v11 + 70087215] )
    **(float **)&dword_140404A6C[v11 + 70087217] = fminf(
                                                     fmaxf(
                                                       (float)((float)((float)(*(float *)&dword_140404A6C[468760126]
                                                                             - *(float *)&dword_140404A6C[v11 + 70087135])
                                                                     - (float)(*(float *)&dword_140404A6C[v11 + 70087219]
                                                                             * 0.5))
                                                             / (float)(*(float *)&dword_140404A6C[v11 + 70087128]
                                                                     - *(float *)&dword_140404A6C[v11 + 70087219]))
                                                     * (float)(*(float *)&dword_140404A6C[v11 + 70087221]
                                                             - *(float *)&dword_140404A6C[v11 + 70087220]),
                                                       *(float *)&dword_140404A6C[v11 + 70087220]),
                                                     *(float *)&dword_140404A6C[v11 + 70087221]);
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140071C20) ----------------------------------------------------
__int64            sub_140071C20(unsigned __int8 *a1, float a2, float a3, float a4, float a5, int a6, __int16 a7)
{
  __int64 v7; // r15
  float v8; // xmm6_4
  float v9; // xmm7_4
  unsigned __int8 *v10; // rdi
  unsigned int v11; // r12d
  unsigned int *v12; // rdx
  int v13; // r8d
  signed int v14; // ebx
  BOOL v15; // edx
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned int *v18; // rax
  __int64 v20; // rsi
  char *v21; // rcx
  unsigned __int8 v22; // al
  int v23; // edx
  _BYTE *v24; // rcx
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int *v28; // rcx
  __int64 v29; // r9
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  unsigned int v34; // xmm5_4
  unsigned int v35; // xmm7_4
  float v36; // xmm4_4
  unsigned int v37; // xmm1_4
  float v38; // xmm6_4
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // xmm0_4
  unsigned int v42; // xmm0_4
  float v43; // xmm5_4
  float v44; // xmm5_4
  float v45; // xmm7_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  float v48; // xmm2_4

  v7 = (int)dword_140404A6C[70087046];
  v8 = a2;
  v9 = a3;
  v10 = a1;
  v11 = sub_14006C670(a1, 1u);
  v12 = &dword_140404A6C[70290892];
  v13 = 0;
  v14 = -1;
  do
  {
    if ( *(v12 - 1) - 1 <= 1 && *v12 == v11 )
      v14 = v13;
    ++v13;
    v12 += 98;
  }
  while ( v13 < 256 );
  v15 = 0;
  if ( v14 == -1 )
  {
    v14 = 0;
    v18 = &dword_140404A6C[70290891];
    while ( *v18 )
    {
      ++v14;
      v18 += 98;
      if ( (__int64)v18 >= (__int64)&dword_140404A6C[70315979] )
        return 0xFFFFFFFFLL;
    }
    if ( v14 == -1 )
      return 0xFFFFFFFFLL;
    v16 = v14;
    v17 = v14;
    goto LABEL_18;
  }
  if ( (a7 & 0x100) != 0 )
    v15 = dword_140404A6C[98 * v14 + 70290891] == 1;
  v16 = v14;
  v17 = v14;
  if ( v15 )
  {
LABEL_18:
    if ( (a7 & 1) != 0 )
    {
      v8 = a2 + (float)(a4 * -0.5);
    }
    else if ( (a7 & 2) != 0 )
    {
      v8 = a2 - a4;
    }
    if ( (a7 & 4) != 0 )
    {
      v9 = a3 + (float)(a5 * -0.5);
    }
    else if ( (a7 & 8) != 0 )
    {
      v9 = a3 - a5;
    }
    v20 = 98 * v17;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[98 * v17 + 70290891]), 0, 0x188u);
    *(float *)&dword_140404A6C[v20 + 70290899] = a5;
    *(float *)&dword_140404A6C[v20 + 70290896] = v8;
    *(float *)&dword_140404A6C[v20 + 70290897] = v9;
    *(float *)&dword_140404A6C[v20 + 70290898] = a4;
    dword_140404A6C[v20 + 70290901] = 1101004800;
    if ( (a7 & 0x200) != 0 )
    {
      dword_140404A6C[v20 + 70290901] = 0;
      dword_140404A6C[v20 + 70290972] = 1;
    }
    dword_140404A6C[v20 + 70290900] = 0x40000000;
    v21 = (char *)&dword_140404A6C[70087029] + v20 * 4 - (_QWORD)v10;
    do
    {
      v22 = *v10;
      v10[(_QWORD)v21 + 815516] = *v10;
      ++v10;
    }
    while ( v22 );
    v23 = 0;
    v24 = (char *)&dword_140404A6C[v20 + 70290908] + 1;
    do
    {
      v25 = *(v24 - 1);
      if ( !v25 || v25 == 35 && *v24 == 35 )
        break;
      ++v24;
      ++v23;
    }
    while ( (intptr_t)((uintptr_t)(v24) - (uintptr_t)(((char *)&dword_140404A6C[v20 + 70290908] + 1))) < 255 );
    *((_BYTE *)&dword_140404A6C[v20 + 70290908] + v23) = 0;
  }
  v26 = 98 * v17;
  if ( (int)dword_140404A6C[98 * v17 + 70290891] <= 1 )
  {
    v27 = 0;
    v28 = &dword_140404A6C[70290895];
    v29 = 256;
    do
    {
      if ( (int)*(v28 - 4) >= 2 && v27 != v16 && *(v28 - 2) == (_DWORD)v7 && (int)*v28 < 256 )
        ++*v28;
      ++v27;
      v28 += 98;
      --v29;
    }
    while ( v29 );
    dword_140404A6C[v26 + 70290895] = 0;
    dword_140404A6C[v26 + 70290894] = dword_140404A6C[70087103];
    dword_140404A6C[70087103] = v14;
  }
  dword_140404A6C[v26 + 70290891] = 3;
  dword_140404A6C[v26 + 70290892] = v11;
  dword_140404A6C[v26 + 70290893] = v7;
  if ( dword_140404A6C[70317860] == v14 )
  {
    if ( dword_140404A6C[70317859] )
    {
      if ( dword_140404A6C[70317859] == 1 )
      {
        v32 = (float)(*(float *)&dword_140404A6C[70317781] - *(float *)&dword_140404A6C[70317862])
            - *(float *)&dword_140404A6C[v26 + 70290973];
        *(float *)&dword_140404A6C[v26 + 70290898] = v32;
        v33 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[70317863];
        *(float *)&dword_140404A6C[v26 + 70290898] = fmaxf(v32, 64.0);
        *(float *)&dword_140404A6C[v26 + 70290899] = fmaxf(v33 - *(float *)&dword_140404A6C[v26 + 70290974], 64.0);
      }
    }
    else
    {
      v30 = *(float *)&dword_140404A6C[70317781] - *(float *)&dword_140404A6C[70317862];
      *(float *)&dword_140404A6C[v26 + 70290896] = *(float *)&dword_140404A6C[70317781]
                                                 - *(float *)&dword_140404A6C[70317862];
      v31 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[70317863];
      *(float *)&dword_140404A6C[v26 + 70290896] = fmaxf(v30, 4.0);
      *(float *)&dword_140404A6C[v26 + 70290897] = fmaxf(v31, 4.0);
    }
  }
  v34 = dword_140404A6C[v26 + 70290896];
  v35 = dword_140404A6C[v26 + 70290897];
  if ( (_DWORD)v7 != -1 )
  {
    *(float *)&v34 = *(float *)&v34 + *(float *)&dword_140404A6C[98 * v7 + 70290981];
    *(float *)&v35 = (float)(*(float *)&dword_140404A6C[98 * v7 + 70290982]
                           - *(float *)&dword_140404A6C[98 * v7 + 70290905])
                   + *(float *)&v35;
  }
  v36 = *(float *)&dword_140404A6C[v26 + 70290900];
  v37 = dword_140404A6C[v26 + 70290901];
  v38 = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290973] = v34;
  v39 = dword_140404A6C[v26 + 70290898];
  dword_140404A6C[v26 + 70290974] = v35;
  dword_140404A6C[v26 + 70290975] = v39;
  v40 = dword_140404A6C[v26 + 70290899];
  *(float *)&dword_140404A6C[v26 + 70290977] = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290976] = v40;
  *(float *)&v41 = *(float *)&dword_140404A6C[v26 + 70290898] - (float)(v36 + v36);
  *(float *)&dword_140404A6C[v26 + 70290978] = *(float *)&v35 + v36;
  dword_140404A6C[v26 + 70290980] = v37;
  *(float *)&dword_140404A6C[v26 + 70290981] = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290979] = v41;
  *(float *)&v42 = *(float *)&dword_140404A6C[v26 + 70290898] - (float)(v36 + v36);
  *(float *)&dword_140404A6C[v26 + 70290982] = (float)(*(float *)&v35 + v36) + *(float *)&v37;
  dword_140404A6C[v26 + 70290983] = v42;
  *(float *)&dword_140404A6C[v26 + 70290984] = (float)(*(float *)&dword_140404A6C[v26 + 70290899] - (float)(v36 + v36))
                                             - *(float *)&v37;
  v43 = (float)(*(float *)&v34 + *(float *)&dword_140404A6C[v26 + 70290898]) - 16.0;
  *(float *)&dword_140404A6C[v26 + 70290987] = v36 + 16.0;
  v44 = v43 - v36;
  *(float *)&dword_140404A6C[v26 + 70290985] = v44;
  v45 = *(float *)&v35 + *(float *)&dword_140404A6C[v26 + 70290899];
  *(float *)&dword_140404A6C[v26 + 70290988] = v36 + 16.0;
  v46 = (float)(v45 - 16.0) - v36;
  *(float *)&dword_140404A6C[v26 + 70290986] = v46;
  if ( dword_140404A6C[70087105] != v14 || !dword_140404A6C[70317817] || dword_140404A6C[70317856] )
    goto LABEL_66;
  if ( *(float *)&dword_140404A6C[70317781] >= v38
    && *(float *)&dword_140404A6C[70317781] < (float)(v38 + *(float *)&dword_140404A6C[v26 + 70290979]) )
  {
    v47 = *(float *)&dword_140404A6C[v26 + 70290978];
    if ( *(float *)&dword_140404A6C[70317782] >= v47
      && *(float *)&dword_140404A6C[70317782] < (float)(v47 + *(float *)&dword_140404A6C[v26 + 70290980]) )
    {
      dword_140404A6C[70317859] = 0;
      dword_140404A6C[70317860] = v14;
      *(float *)&dword_140404A6C[70317862] = *(float *)&dword_140404A6C[70317781]
                                           - *(float *)&dword_140404A6C[v26 + 70290896];
      v48 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[v26 + 70290897];
LABEL_65:
      *(float *)&dword_140404A6C[70317863] = v48;
      goto LABEL_66;
    }
  }
  if ( *(float *)&dword_140404A6C[70317781] >= v44
    && *(float *)&dword_140404A6C[70317781] < (float)(v44 + *(float *)&dword_140404A6C[v26 + 70290987])
    && *(float *)&dword_140404A6C[70317782] >= v46
    && *(float *)&dword_140404A6C[70317782] < (float)(v46 + *(float *)&dword_140404A6C[v26 + 70290988]) )
  {
    dword_140404A6C[70317859] = 1;
    dword_140404A6C[70317860] = v14;
    *(float *)&dword_140404A6C[70317862] = *(float *)&dword_140404A6C[70317781]
                                         - (float)(*(float *)&dword_140404A6C[v26 + 70290985]
                                                 + *(float *)&dword_140404A6C[v26 + 70290987]);
    v48 = *(float *)&dword_140404A6C[70317782]
        - (float)(*(float *)&dword_140404A6C[v26 + 70290988] + *(float *)&dword_140404A6C[v26 + 70290986]);
    goto LABEL_65;
  }
LABEL_66:
  dword_140404A6C[70087046] = v14;
  if ( (int)dword_140404A6C[70087029] < 16 )
  {
    dword_140404A6C[dword_140404A6C[70087029] + 70087030] = v14;
    ++dword_140404A6C[70087029];
  }
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1082130432;
  return (unsigned int)v14;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61040: using guessed type int[];
// 150F61084: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F61168: using guessed type unsigned int;
// 1510426F8: using guessed type unsigned int;
// 1510426FC: using guessed type unsigned int;
// 151042708: using guessed type unsigned int;

//----- (00000001400722C0) ----------------------------------------------------
__int64 sub_1400722C0()
{
  signed int v0; // r11d
  unsigned __int64 v1; // r9
  int v2; // ebp
  signed int v3; // ebx
  unsigned int v4; // r14d
  signed int v5; // edx
  __int64 v6; // rax
  unsigned int *v7; // r8
  signed int v8; // r10d
  unsigned int *v9; // rsi
  unsigned int *v10; // rdi
  signed int v11; // eax
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 result; // rax

  v0 = dword_140404A6C[70318066];
  v1 = -1;
  v2 = 0;
  v3 = dword_140404A6C[70318066];
  v4 = 0;
  v5 = 0;
  v6 = -1;
  do
    ++v6;
  while ( *((_BYTE *)&dword_140404A6C[70318069] + v6) );
  v7 = &dword_140404A6C[70322165];
  if ( v6 )
  {
    v8 = dword_140404A6C[70318065];
    v9 = &dword_140404A6C[70318069];
    v10 = &dword_140404A6C[70322165];
    do
    {
      if ( v5 < v8 )
      {
        if ( v5 < v0 )
          goto LABEL_13;
      }
      else if ( v5 < v0 )
      {
        goto LABEL_10;
      }
      if ( v5 < v8 )
      {
LABEL_10:
        v11 = v5;
        v4 = 1;
        if ( v3 <= v5 )
          v11 = v3;
        v3 = v11;
        goto LABEL_14;
      }
LABEL_13:
      ++v2;
      *(_BYTE *)v10 = *(_BYTE *)v9;
      v10 = (unsigned int *)((char *)v10 + 1);
      v0 = dword_140404A6C[70318066];
      v8 = dword_140404A6C[70318065];
LABEL_14:
      ++v5;
      v12 = -1;
      v9 = (unsigned int *)((char *)v9 + 1);
      do
        ++v12;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v12) );
    }
    while ( v5 < v12 );
  }
  *((_BYTE *)&dword_140404A6C[70322165] + v2) = 0;
  do
  {
    v13 = *(_BYTE *)v7;
    *((_BYTE *)v7 - 0x4000) = *(_BYTE *)v7;
    v7 = (unsigned int *)((char *)v7 + 1);
  }
  while ( v13 );
  dword_140404A6C[70318066] = v3;
  do
    ++v1;
  while ( *((_BYTE *)&dword_140404A6C[70318069] + v1) );
  result = v4;
  if ( v3 > v1 )
    v3 = v1;
  dword_140404A6C[70318066] = v3;
  dword_140404A6C[70318065] = v3;
  return result;
}

// 14007272C: variable 'v26' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150FDB190: using guessed type unsigned int;
// 15104270C: using guessed type unsigned int;
// 151042A1C: using guessed type unsigned int;
// 151042A24: using guessed type unsigned int;
// 151042A28: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;

//----- (0000000140072760) ----------------------------------------------------
double sub_140072760(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned background=1059061760,inner=0;
  unsigned flags=a1==dword_140404A6C[70087109];
  if(flags)inner=1056964608;
  if(a1==dword_140404A6C[70087111]){background=1063256064;inner=1056964608;}
  if(dword_140404A6C[index+70087119]){background=1048576000;inner=0;flags|=8;}
  if(dword_140404A6C[index+70087115]==2 && **(_DWORD **)&dword_140404A6C[index+70087215]==dword_140404A6C[index+70087217]){inner=1052770304;flags|=4;}
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,flags);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,background,background,background,1065353216);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,inner,inner,inner,1065353216);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width*0.5f,y+height*0.5f,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* callers ignore the legacy export result; native returns void */
}


//----- (00000001400729D0) ----------------------------------------------------
double            sub_1400729D0(int a1, double a2, float a3)
{
  __int64 v3; // rbx
  double result; // xmm0_8
  void (           *v5)(_QWORD, _QWORD); // rax

  v3 = 122LL * a1;
  result = a2;
  if ( (unsigned int)sub_140075460(
                       *(float *)&a2,
                       a3,
                       *(float *)&dword_140404A6C[v3 + 70087127],
                       *(float *)&dword_140404A6C[v3 + 70087128]) )
  {
    v5 = *(void (           **)(_QWORD, _QWORD))&dword_140404A6C[v3 + 70087149];
    if ( v5 )
      v5(dword_140404A6C[v3 + 70087146], dword_140404A6C[v3 + 70087147]);
    sub_140075340();
    return sub_14007BB00();
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140072A90) ----------------------------------------------------
double            sub_140072A90(int a1, double a2, double a3)
{
  double v3 = a3; // xmm2_8: y arrives in xmm2 (0x140072ACD movaps xmm9, xmm2); Hex-Rays had lost it
  int v4; // xmm0_4
  float v5; // xmm9_4
  __int64 v6; // rbx
  unsigned int v7; // edi
  void (           *v8)(_QWORD, _QWORD); // rax
  double result; // xmm0_8
  __m128i v10; // xmm2
  __m128i v11; // xmm2
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140072A90[32];
#define v12 (*(int (*))(void *)(sr_frame_140072A90 + 0)) /* [rsp+28h] */
#define v13 (*(int (*))(void *)(sr_frame_140072A90 + 8)) /* [rsp+30h] */
#define v14 (*(int (*))(void *)(sr_frame_140072A90 + 16)) /* [rsp+38h] */

  v4 = 1056964608;
  v5 = *(float *)&v3;
  v6 = 122LL * a1;
  v7 = **(_DWORD **)&dword_140404A6C[v6 + 70087223];
  if ( a1 == dword_140404A6C[70087109] )
    v4 = 1061158912;
  v8 = *(void (           **)(_QWORD, _QWORD))&dword_140404A6C[v6 + 70087149];
  if ( v8 )
  {
    /* 0x140072B0D..0x140072B36: the row callback also takes x (xmm2), y (xmm3), the width and height
       ([rsp+20h], [rsp+28h]) and whether this widget has the focus ([rsp+30h], edx from 0x140072AF2);
       the C had passed only the first two. */
    ((void (*)(int, unsigned int, float, float, float, float, unsigned int))v8)(
      dword_140404A6C[v6 + 70087146],
      v7,
      *(float *)&a2,
      *(float *)&v3,
      *(float *)&dword_140404A6C[v6 + 70087127],
      *(float *)&dword_140404A6C[v6 + 70087128],
      a1 == dword_140404A6C[70087109]);
    return sub_14007BB00();
  }
  else
  {
    v14 = v4;
    v13 = v4;
    v12 = v4;
    result = a2;
    /* 0x140072B78: width from [rbx+rsi+188h] (0x140072B42), not the third argument */
    sub_14006D660(a2, v3, dword_140404A6C[v6 + 70087127], *(float *)&dword_140404A6C[v6 + 70087128], 0, v12, v13, v14, 1056964608);
    if ( v7 != -1 )
    {
      v10 = _mm_cvtsi32_si128(dword_140404A6C[v6 + 70087128]); /* 0x140072B8A: the height */
      *(float *)SR_VEC_LANES(128, v10, i32) = (float)(*(float *)SR_VEC_LANES(128, v10, i32) * 0.5) + v5;
      sr_text_draw_recovered((char *)(*(_QWORD *)&dword_140404A6C[v6 + 70087217] + (int)(v7 * dword_140404A6C[v6 + 70087219])), (float)(*(float *)&dword_140404A6C[v6 + 70087127] * 0.5) + *(float *)&a2, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10))), 13.0, 69u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140072BFA */;
    }
    v11 = _mm_cvtsi32_si128(dword_140404A6C[v6 + 70087128]); /* 0x140072C08: the height */
    *(float *)SR_VEC_LANES(128, v11, i32) = (float)(*(float *)SR_VEC_LANES(128, v11, i32) * 0.5) + v5;
    sr_text_draw_recovered((char *)&dword_140404A6C[v6 + 70087151], (float)(*(float *)&a2 + *(float *)&dword_140404A6C[v6 + 70087127]) + 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v11))), *(float *)&dword_140404A6C[v6 + 70087133], 4u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140072C67 */;
  }
  return result;
}
#undef v12
#undef v13
#undef v14

// 140072ACD: variable 'v3' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140072CA0) ----------------------------------------------------
double sub_140072CA0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==dword_140404A6C[70087109];
  float inner=selected?0.25f:0.0f;
  if(dword_140404A6C[index+70087215])
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}


//----- (0000000140072F90) ----------------------------------------------------
__int64 sub_140072F90(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128],size=*(float *)&dword_140404A6C[index+70087133];
  unsigned background=dword_140404A6C[index+70087116]?0x3ee00000:a1==dword_140404A6C[70087109]?0x3ea00000:0x3e400000;
  sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,background,background,background,0x3f000000);
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  unsigned focused=a1==dword_140404A6C[70087106];
  char *value=focused?(char *)&dword_140404A6C[70318069]:*(char **)&dword_140404A6C[index+70087215];
  if(dword_140404A6C[index+70087124]){
    char masked[512];size_t n=strlen(value);if(n>31)n=31;memset(masked,'*',n);masked[n]=0;
    sr_text_draw_recovered(masked,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  }else if(!focused&&dword_140404A6C[index+70087115]==4){
    double formatted=(double)**(float **)&dword_140404A6C[index+70087217];uint64 arguments[1];memcpy(arguments,&formatted,8);
    sr_text_draw_recovered("/f",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else if(!focused&&dword_140404A6C[index+70087115]==5){
    uint64 arguments[1]={**(unsigned **)&dword_140404A6C[index+70087217]};
    sr_text_draw_recovered("/i",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else sr_text_draw_recovered(value,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  if(focused){
    float cursor=sub_140074CE0(a1,(int)dword_140404A6C[70318066])+x;
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(cursor)),sr_export_float_lane_container(sr_text_float_bits(middle+size*0.25f)),sr_text_float_bits(size*0.5f),4.0f,0,0x3f800000,0x3f800000,0x3f800000,0x3f000000);
    int first=(int)dword_140404A6C[70318066],last=(int)dword_140404A6C[70318065];
    if(first!=last){
      if(first>last){int temporary=first;first=last;last=temporary;}
      float start=sub_140074CE0(a1,first),span=sub_140074CE0(a1,last)-start;
      sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+start)),a3,sr_text_float_bits(span),height,0,0x3f800000,0x3f800000,0x3f800000,0x3e800000);
    }
  }
  return 0; /* legacy result ignored; native routine returns void */
}


//----- (0000000140073430) ----------------------------------------------------
double sub_140073430(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  unsigned kind=dword_140404A6C[index+70087115],selected=a1==dword_140404A6C[70087109];
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if((kind&0xfffffffdu)==0)return sub_140072760(a1,a2,a3);
  if(kind==1)return sub_1400742F0(a1,a2,a3);
  if(kind-3u<=2u){sub_140072F90(a1,a2,a3);return 0.0;}
  switch(kind){
    case 6:
      if(sub_140075460(x,y,width,height)){
        if(callback)((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,0);
        sub_140075340();sub_14007BB00();
      }break;
    case 7:{
      unsigned color=selected||dword_140404A6C[index+70087116]?0x3ec00000:0x3e800000;
      sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
      float low=*(float *)&dword_140404A6C[index+70087220],high=*(float *)&dword_140404A6C[index+70087221];
      float knob=*(float *)&dword_140404A6C[index+70087219],value=**(float **)&dword_140404A6C[index+70087217];
      float at=((value-low)*(height-knob))/(high-low)+y;
      sub_14006D660(a2,sr_export_float_lane_container(sr_text_float_bits(at)),sr_text_float_bits(width),knob,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
      break;}
    case 8:return sub_140073860(a1,a2,a3);
    case 10:{
      int value=**(int **)&dword_140404A6C[index+70087223];
      if(callback){
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],(unsigned)value,x,y,width,height,selected);
        sub_14007BB00();
      }else{
        unsigned color=selected?0x3f400000:0x3f000000;
        sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f000000);
        if(value!=-1)sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)value*dword_140404A6C[index+70087219])),width*0.5f+x,height*0.5f+y,13.0f,69,1.0f,1.0f,1.0f,1.0f,NULL);
        sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
      }break;}
    case 11:return sub_140074040(a1,a2,a3);
    case 12:return sub_140073D90(a1,a2,a3);
    case 13:return sub_140072CA0(a1,a2,a3);
  }
  return 0.0; /* legacy result ignored; native dispatch returns void */
}


//----- (0000000140073860) ----------------------------------------------------
double sub_140073860(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(sub_140075460(x,y,width,height)){
    sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,0x3e000000,0x3e000000,0x3e000000,0x3f000000);
    float gap=*(float *)&dword_140404A6C[index+70087230];
    float cell_width=*(float *)&dword_140404A6C[index+70087228],cell_height=*(float *)&dword_140404A6C[index+70087229];
    float cx=gap*0.5f+x,cy=(gap*0.5f+y)-*(float *)&dword_140404A6C[index+70087232];int column=0;
    for(int item=0;item<(int)dword_140404A6C[index+70087220];item++){
      void *callback=*(void **)&dword_140404A6C[index+70087149];
      if(callback){
        unsigned flags=(dword_140404A6C[index+70087223]==item?1:0)|(dword_140404A6C[index+70087222]==item?4:0);
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],item,cx,cy,cell_width,cell_height,flags);
      }else{
        if(dword_140404A6C[index+70087222]==item || dword_140404A6C[index+70087223]==item){
          unsigned color=dword_140404A6C[index+70087222]==item?0x3f400000:0x3f200000;
          sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(cx)),sr_export_float_lane_container(sr_text_float_bits(cy)),sr_text_float_bits(cell_width),cell_height,0,color,color,color,0x3f000000);
        }
        sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)item*dword_140404A6C[index+70087219])),cx+4.0f,cy+3.5f,13.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
      }
      if(++column<(int)dword_140404A6C[index+70087227])cx+=cell_width+gap;
      else{column=0;cx=gap*0.5f+x;cy+=gap+cell_height;}
    }
    int depth=(int)dword_140404A6C[70317864];
    if(depth<=0 || --depth<=0){if(dword_140404A6C[70317864]>0)dword_140404A6C[70317864]=depth;((void (*)(unsigned))(uintptr_t)*(uint64 *)&dword_140404A6C[18215101])(3089);}
    else{
      dword_140404A6C[70317864]=depth;__int64 i=4LL*depth;
      dword_140404A6C[70318060]=dword_140404A6C[i+70317861];dword_140404A6C[70318061]=dword_140404A6C[i+70317862];
      dword_140404A6C[70318062]=dword_140404A6C[i+70317863];dword_140404A6C[70318063]=dword_140404A6C[i+70317864];
      sub_14007B7E0(*(float *)&dword_140404A6C[70318060],*(float *)&dword_140404A6C[70318061],*(float *)&dword_140404A6C[70318062],*(float *)&dword_140404A6C[70318063]);
    }
    sub_14007BB00();
  }
  return 0.0; /* legacy result ignored; native returns void */
}


//----- (0000000140073C40) ----------------------------------------------------
__int64            sub_140073C40(int a1, double a2, double a3)
{
  double v3 = a3; // xmm2_8: y arrives in xmm2 (0x140073C6C movaps xmm7, xmm2); Hex-Rays had lost it
  int v4; // xmm0_4
  __int64 v5; // rbx
  float v6; // xmm3_4
  double v7; // xmm4_8
  __int64 v8; // r8

  v4 = 1048576000;
  if ( a1 == dword_140404A6C[70087109] || dword_140404A6C[122 * a1 + 70087116] )
    v4 = 1052770304;
  v5 = 122LL * a1;
  /* 0x140073CDF: width from [rbx+rsi+188h] (0x140073CD6), not the third argument */
  sub_14006D660(a2, v3, dword_140404A6C[v5 + 70087127], *(float *)&dword_140404A6C[v5 + 70087128], 0, v4, v4, v4, 1065353216);
  v6 = *(float *)&dword_140404A6C[v5 + 70087219];
  *(_QWORD *)&v7 = **(unsigned int **)&dword_140404A6C[v5 + 70087217];
  *(float *)&v7 = (float)((float)((float)(*(float *)&v7 - *(float *)&dword_140404A6C[v5 + 70087220])
                                * (float)(*(float *)&dword_140404A6C[v5 + 70087128] - v6))
                        / (float)(*(float *)&dword_140404A6C[v5 + 70087221] - *(float *)&dword_140404A6C[v5 + 70087220]))
                + *(float *)&v3;
  return sub_14006D660(a2, v7, 0x41800000 /* native XMM2 width 16.0f */, v6, 0, 1056964608, 1056964608, 1056964608, 1065353216);
}

// 140073CDF: variable 'v3' is possibly undefined
// 140073D63: variable 'v8' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140073D90) ----------------------------------------------------
double sub_140073D90(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==dword_140404A6C[70087109]||dword_140404A6C[index+70087116]?70087099:70087095;
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
  float low=*(float *)&dword_140404A6C[index+70087217],high=*(float *)&dword_140404A6C[index+70087218];
  float value=**(float **)&dword_140404A6C[index+70087215];
  /* MAXSS/MINSS return their second operand for unordered inputs. */
  float clamped=value>low?value:low;clamped=clamped<high?clamped:high;
  float at=((clamped-low)*(width-knob))/(high-low)+x;
  double formatted=(double)value;uint64 arguments[1];memcpy(arguments,&formatted,8);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("/f",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}


//----- (0000000140074040) ----------------------------------------------------
double sub_140074040(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==dword_140404A6C[70087109]||dword_140404A6C[index+70087116]?70087099:70087095;
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
  int low=(int)dword_140404A6C[index+70087217],high=(int)dword_140404A6C[index+70087218];
  int value=**(int **)&dword_140404A6C[index+70087215];
  int clamped=value<low?low:value;clamped=clamped>high?high:clamped;
  float at=((float)(int)((unsigned)clamped-(unsigned)low)*(width-knob))/(float)(int)((unsigned)high-(unsigned)low)+x;
  uint64 arguments[1]={(unsigned)value};
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("/i",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}


//----- (00000001400742F0) ----------------------------------------------------
double sub_1400742F0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==dword_140404A6C[70087109];
  float inner=selected?0.25f:0.0f;
  unsigned bits=dword_140404A6C[index+70087217];
  if((bits & **(unsigned **)&dword_140404A6C[index+70087215])==bits)
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}


//----- (0000000140074C50) ----------------------------------------------------
__int64            sub_140074C50(int a1, float a2)
{
  int v2; // edx
  float v3; // xmm2_4
  unsigned int *v4; // r8

  v2 = 0;
  v3 = 0.0;
  if ( LOBYTE(dword_140404A6C[70318069]) )
  {
    v4 = &dword_140404A6C[70318069];
    do
    {
      if ( v2 >= (int)dword_140404A6C[70318068] )
        break;
      v3 = v3
         + (float)(*(float *)&dword_140404A6C[3592 * dword_140404A6C[122 * a1 + 70087123]
                                            + 72777093
                                            + *(unsigned __int8 *)v4]
                 * *(float *)&dword_140404A6C[122 * a1 + 70087133]);
      if ( a2 < v3 )
        break;
      v4 = (unsigned int *)((char *)v4 + 1);
      ++v2;
    }
    while ( *(_BYTE *)v4 );
  }
  return (unsigned int)v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140074CE0) ----------------------------------------------------
float            sub_140074CE0(int a1, int a2)
{
  int v2; // r8d
  double v3; // xmm1_8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 i; // rdx
  __int64 v7; // rax
  float v8; // xmm2_4

  v2 = 0;
  v3 = 0.0;
  if ( a2 <= 0 )
    return 0.0f; /* 0x140074D9E: xorps xmm0, xmm0 */
  v4 = 122LL * a1;
  v5 = a2;
  for ( i = 0; i < v5; ++i )
  {
    v7 = *((unsigned __int8 *)&dword_140404A6C[70318069] + i);
    if ( !(_BYTE)v7 || v2 >= (int)dword_140404A6C[70318068] )
      break;
    v8 = dword_140404A6C[v4 + 70087124]
       ? *(float *)&dword_140404A6C[3592 * dword_140404A6C[122 * a1 + 70087123] + 72777135]
       : *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[122 * a1 + 70087123] + 72777093 + v7];
    ++v2;
    *(float *)&v3 = *(float *)&v3 + (float)(*(float *)&dword_140404A6C[v4 + 70087133] * v8);
  }
  return *(float *)&v3; /* 0x140074D7F: addss xmm1, xmm0 */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140075340) ----------------------------------------------------
double sub_140075340()
{
  signed int v0; // eax
  __int64 v1; // rax
  double result; // xmm0_8

  if ( (int)dword_140404A6C[70317864] <= 0 )
    return (*(double (           **)(__int64))&dword_140404A6C[18215101])(3089);
  v0 = dword_140404A6C[70317864] - 1;
  dword_140404A6C[70317864] = v0;
  if ( v0 <= 0 )
    return (*(double (           **)(__int64))&dword_140404A6C[18215101])(3089);
  v1 = 2LL * v0;
  dword_140404A6C[70318060] = dword_140404A6C[2 * v1 + 70317861];
  *(_QWORD *)&result = dword_140404A6C[70318060];
  dword_140404A6C[70318062] = dword_140404A6C[2 * v1 + 70317863];
  dword_140404A6C[70318061] = dword_140404A6C[2 * v1 + 70317862];
  dword_140404A6C[70318063] = dword_140404A6C[2 * v1 + 70317864];
  sub_14007B7E0(
    *(float *)&dword_140404A6C[70318060],
    *(float *)&dword_140404A6C[70318061],
    *(float *)&dword_140404A6C[70318062],
    *(float *)&dword_140404A6C[70318063]);
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 15104270C: using guessed type unsigned int;
// 151042A1C: using guessed type unsigned int;
// 151042A20: using guessed type unsigned int;
// 151042A24: using guessed type unsigned int;
// 151042A28: using guessed type unsigned int;

//----- (00000001400753C0) ----------------------------------------------------
__int64 sub_1400753C0()
{
  __int64 result; // rax

  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (0000000140075460) ----------------------------------------------------
__int64            sub_140075460(float a1, float a2, float a3, float a4)
{
  unsigned int v6; // xmm4_4
  float v7; // xmm5_4
  unsigned int v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  unsigned int v14; // xmm4_4
  unsigned int v15; // xmm2_4

  if ( dword_140404A6C[70317864] )
  {
    v8 = dword_140404A6C[70318063];
    v6 = dword_140404A6C[70318062];
    v9 = *(float *)&dword_140404A6C[70318061];
    v7 = *(float *)&dword_140404A6C[70318060];
  }
  else
  {
    v6 = dword_140404A6C[438291414];
    v7 = 0.0;
    v8 = dword_140404A6C[438291415];
    v9 = 0.0;
    dword_140404A6C[70318060] = 0;
    dword_140404A6C[70318061] = 0;
    dword_140404A6C[70318062] = dword_140404A6C[438291414];
    dword_140404A6C[70318063] = dword_140404A6C[438291415];
  }
  v10 = fmaxf(v7, a1);
  v11 = fminf(*(float *)&v6 + v7, a1 + a3);
  v12 = fmaxf(v9, a2);
  v13 = fminf(*(float *)&v8 + v9, a2 + a4);
  if ( v10 > v11 || v12 > v13 )
    return 0;
  *(float *)&dword_140404A6C[70318060] = v10;
  *(float *)&dword_140404A6C[70318061] = v12;
  *(float *)&v14 = v11 - v10;
  *(float *)&v15 = v13 - v12;
  dword_140404A6C[70318062] = v14;
  dword_140404A6C[70318063] = v15;
  *(float *)&dword_140404A6C[4 * dword_140404A6C[70317864] + 70317865] = v10;
  dword_140404A6C[4 * dword_140404A6C[70317864] + 70317867] = v14;
  *(float *)&dword_140404A6C[4 * dword_140404A6C[70317864] + 70317866] = v12;
  dword_140404A6C[4 * dword_140404A6C[70317864] + 70317868] = v15;
  if ( ++dword_140404A6C[70317864] == 1 )
    (*(void (           **)(__int64))&dword_140404A6C[18215103])(3089);
  sub_14007B7E0(
    *(float *)&dword_140404A6C[70318060],
    *(float *)&dword_140404A6C[70318061],
    *(float *)&dword_140404A6C[70318062],
    *(float *)&dword_140404A6C[70318063]);
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 15104270C: using guessed type unsigned int;
// 151042A1C: using guessed type unsigned int;
// 151042A20: using guessed type unsigned int;
// 151042A24: using guessed type unsigned int;
// 151042A28: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;

//----- (00000001400755F0) ----------------------------------------------------
__int64            sub_1400755F0(float a1, float a2)
{
  __int64 result; // rax

  result = (int)dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    result = (int)dword_140404A6C[70317962];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  *(float *)&dword_140404A6C[70087070] = a2;
  *(float *)&dword_140404A6C[70087069] = a1;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (0000000140075930) ----------------------------------------------------
signed int *           sub_140075930(int a1, float a2)
{
  __int64 v2; // r11
  signed int v3; // r10d
  signed int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  signed int *result; // rax

  v2 = 122LL * a1;
  v3 = dword_140404A6C[v2 + 70087218];
  v4 = dword_140404A6C[v2 + 70087217];
  v5 = (int)(float)((float)((float)((float)(a2 - (float)(*(float *)&dword_140404A6C[v2 + 70087220] * 0.5))
                                  / (float)(*(float *)&dword_140404A6C[v2 + 70087127]
                                          - *(float *)&dword_140404A6C[v2 + 70087220]))
                          * fmaxf((float)(v3 - v4), 1.0))
                  + 0.5);
  if ( LOBYTE(dword_140404A6C[70317069]) )
  {
    v6 = dword_140404A6C[v2 + 70087219];
    if ( v6 )
      v5 = (v6 >> 1) + v5 - ((v6 >> 1) + v5) % v6;
  }
  if ( v4 + v5 >= v4 )
    v4 += v5;
  result = *(signed int **)&dword_140404A6C[v2 + 70087215];
  if ( v4 <= v3 )
    v3 = v4;
  *result = v3;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140075A40) ----------------------------------------------------
__int64            sub_140075A40(int a1, float a2, double a3)
{
  unsigned int v3; // ebp
  double v4; // xmm6_8
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  char *v9; // rcx
  unsigned int *v10; // rdx
  char v11; // al
  unsigned __int64 v12; // rsi
  signed int v13; // r8d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // edi
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // edi
  unsigned __int64 v21; // rcx
  signed int v22; // edx
  int v23; // r8d
  _BYTE *v24; // r9
  char *v25; // rdx
  char v26; // cl
  unsigned int v27; // r8d
  char *v28; // rdx
  char v29; // cl
  __int64 v30; // rdi
  unsigned int v31; // eax
  float *v32; // rcx
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 result; // rax
  signed int *v36; // rax
  signed int v37; // ecx
  signed int v38; // ecx
  _BYTE *v39; // rcx
  char v40; // al

  v3 = 0;
  v4 = a3;
  v5 = a1;
  dword_140404A6C[70318064] = 1;
  if ( dword_140404A6C[70087108] == a1 )
  {
    if ( dword_140404A6C[70317817] )
    {
      if ( dword_140404A6C[70317856] )
      {
        v16 = dword_140404A6C[70318065];
      }
      else
      {
        v16 = sub_140074C50(a1, a2);
        dword_140404A6C[70318065] = v16;
      }
      v17 = sub_140074C50(v5, a2);
      dword_140404A6C[70318066] = v17;
    }
    else
    {
      v17 = dword_140404A6C[70318066];
      v16 = dword_140404A6C[70318065];
    }
    v7 = &dword_140404A6C[70318069];
    if ( v16 < 0 )
      v16 = 0;
    v18 = -1;
    dword_140404A6C[70318065] = v16;
    do
      ++v18;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v18) );
    if ( v16 > v18 )
      v16 = v18;
    dword_140404A6C[70318065] = v16;
    v19 = -1;
    if ( v17 < 0 )
      v17 = 0;
    dword_140404A6C[70318066] = v17;
    do
      ++v19;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v19) );
    if ( v17 > v19 )
      v17 = v19;
    dword_140404A6C[70318066] = v17;
    v20 = sub_140075FE0();
    if ( v20 != -1 )
    {
      while ( v20 != 11 && v20 != 1 )
      {
        if ( v20 < 32 )
        {
          if ( v20 == 9 )
          {
            if ( !(unsigned int)sub_1400722C0() )
            {
              v25 = (char *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066];
              if ( *v25 )
              {
                do
                {
                  v26 = v25[1];
                  *v25++ = v26;
                }
                while ( v26 );
              }
            }
          }
          else if ( v20 == 10 && !(unsigned int)sub_1400722C0() )
          {
            v27 = dword_140404A6C[70318066];
            if ( (int)dword_140404A6C[70318066] > 0 )
            {
              v28 = (char *)&dword_140404A6C[70318068] + dword_140404A6C[70318066] + 3;
              if ( *v28 )
              {
                do
                {
                  v29 = v28[1];
                  *v28++ = v29;
                }
                while ( v29 );
                v27 = dword_140404A6C[70318066];
              }
              dword_140404A6C[70318066] = v27 - 1;
              dword_140404A6C[70318065] = v27 - 1;
            }
          }
        }
        else
        {
          sub_1400722C0();
          v21 = -1;
          do
            ++v21;
          while ( *((_BYTE *)&dword_140404A6C[70318069] + v21) );
          if ( v21 < (int)dword_140404A6C[70318068] )
          {
            v22 = dword_140404A6C[70318066];
            if ( (int)dword_140404A6C[70318066] < 0x2000 )
            {
              if ( dword_140404A6C[70318067] )
              {
                if ( !*((_BYTE *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066]) )
                {
                  *((_BYTE *)&dword_140404A6C[70318069] + dword_140404A6C[70318066] + 1) = 0;
                  v22 = dword_140404A6C[70318066];
                }
              }
              else
              {
                v23 = v21 + 1;
                if ( (int)v21 + 1 > (int)dword_140404A6C[70318066] )
                {
                  v24 = (char *)&dword_140404A6C[70318069] + v23;
                  do
                  {
                    --v23;
                    *v24 = *(v24 - 1);
                    --v24;
                    v22 = dword_140404A6C[70318066];
                  }
                  while ( v23 > (int)dword_140404A6C[70318066] );
                }
              }
              *((_BYTE *)&dword_140404A6C[70318069] + v22) = v20;
              dword_140404A6C[70318065] = ++dword_140404A6C[70318066];
            }
          }
        }
        v20 = sub_140075FE0();
        if ( v20 == -1 )
          goto LABEL_75;
      }
      dword_140404A6C[70087106] = -1;
      v3 = 1;
      if ( v20 != 11 )
        v3 = -1;
    }
  }
  else
  {
    v6 = 122LL * a1;
    v7 = &dword_140404A6C[70318069];
    v8 = dword_140404A6C[122 * v5 + 70087115];
    if ( v8 == 4 )
    {
      a3 = **(float **)&dword_140404A6C[v6 + 70087217];
      sub_140158AB0(&dword_140404A6C[70318069], "%.3f", a3);
    }
    else if ( v8 == 5 )
    {
      sub_140158AB0(&dword_140404A6C[70318069], "%d", **(_DWORD **)&dword_140404A6C[v6 + 70087217]);
    }
    else
    {
      v9 = *(char **)&dword_140404A6C[v6 + 70087215];
      v10 = &dword_140404A6C[70318069];
      do
      {
        v11 = *v9++;
        *(_BYTE *)v10 = v11;
        v10 = (unsigned int *)((char *)v10 + 1);
      }
      while ( v11 );
    }
    v12 = -1;
    if ( !dword_140404A6C[70317817] || dword_140404A6C[70317856] )
    {
      v13 = 0;
      dword_140404A6C[70318065] = 0;
      v14 = -1;
      do
        ++v14;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v14) );
      dword_140404A6C[70318066] = v14;
    }
    else
    {
      a3 = v4;
      dword_140404A6C[70318065] = sub_140074C50(v5, a2);
      v13 = dword_140404A6C[70318065];
      dword_140404A6C[70318066] = dword_140404A6C[70318065];
      LODWORD(v14) = dword_140404A6C[70318065];
      if ( (dword_140404A6C[70318065] & 0x80000000) != 0 )
      {
        v13 = 0;
        dword_140404A6C[70318065] = 0;
      }
    }
    v15 = -1;
    do
      ++v15;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v15) );
    if ( v13 > v15 )
      v13 = v15;
    dword_140404A6C[70318065] = v13;
    if ( (int)v14 < 0 )
      LODWORD(v14) = 0;
    dword_140404A6C[70318066] = v14;
    do
      ++v12;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v12) );
    if ( (int)v14 > v12 )
      dword_140404A6C[70318066] = v12;
  }
LABEL_75:
  v30 = 122 * v5;
  v31 = dword_140404A6C[122 * v5 + 70087115];
  if ( v31 == 4 )
  {
    sub_14015B070((__int64)&dword_140404A6C[70318069], "%f", a3);
    v32 = *(float **)&dword_140404A6C[v30 + 70087217];
    v33 = *(float *)&dword_140404A6C[v30 + 70087219];
    if ( v33 > *v32 )
    {
      *v32 = v33;
      v32 = *(float **)&dword_140404A6C[v30 + 70087217];
    }
    v34 = *(float *)&dword_140404A6C[v30 + 70087220];
    result = v3;
    if ( v34 < *v32 )
      *v32 = v34;
  }
  else
  {
    if ( v31 == 5 )
    {
      sub_14015B070((__int64)&dword_140404A6C[70318069], "%d", *(_QWORD *)&dword_140404A6C[v30 + 70087217]);
      v36 = *(signed int **)&dword_140404A6C[v30 + 70087217];
      v37 = dword_140404A6C[v30 + 70087219];
      if ( *v36 < v37 )
      {
        *v36 = v37;
        v36 = *(signed int **)&dword_140404A6C[v30 + 70087217];
      }
      v38 = dword_140404A6C[v30 + 70087220];
      if ( *v36 > v38 )
      {
        *v36 = v38;
        return v3;
      }
    }
    else
    {
      v39 = *(_BYTE **)&dword_140404A6C[v30 + 70087215];
      do
      {
        v40 = *(_BYTE *)v7;
        v7 = (unsigned int *)((char *)v7 + 1);
        *v39++ = v40;
      }
      while ( v40 );
    }
    return v3;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61174: using guessed type unsigned int;
// 151042A2C: using guessed type unsigned int;
// 151042A30: using guessed type unsigned int;
// 151042A34: using guessed type unsigned int;

//----- (0000000140075FE0) ----------------------------------------------------
int sub_140075FE0()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  int v2; // r10d
  int v3; // r8d
  int v4; // r11d
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned __int64 v11; // rdx
  int v12; // ecx

  v0 = dword_140404A6C[70318067];
  LODWORD(v1) = dword_140404A6C[70318066];
  v2 = 0;
  v3 = dword_140404A6C[70318065];
  v4 = dword_140404A6C[468760166];
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v5 = -1;
            if ( v3 < 0 )
              v3 = 0;
            dword_140404A6C[70318065] = v3;
            do
              ++v5;
            while ( *((_BYTE *)&dword_140404A6C[70318069] + v5) );
            if ( v3 > v5 )
              v3 = v5;
            dword_140404A6C[70318065] = v3;
            v6 = -1;
            if ( (int)v1 < 0 )
              LODWORD(v1) = 0;
            dword_140404A6C[70318066] = v1;
            do
              ++v6;
            while ( *((_BYTE *)&dword_140404A6C[70318069] + v6) );
            if ( (int)v1 > v6 )
              LODWORD(v1) = v6;
            dword_140404A6C[70318066] = v1;
            if ( v4 == dword_140404A6C[468760165] )
              return -1;
            v7 = v4;
            v4 = ((_WORD)v4 + 1) & 0x3FF;
            v8 = 5 * v7;
            dword_140404A6C[468760166] = v4;
            if ( !dword_140404A6C[5 * v7 + 468760167] )
            {
              v9 = dword_140404A6C[v8 + 468760168];
              v10 = dword_140404A6C[v8 + 468760170] & 3;
              if ( v9 == 76 )
                return 9;
              if ( v9 == 42 )
                return 10;
              if ( v9 != 225 )
                break;
            }
          }
          switch ( v9 )
          {
            case '(':
              return 11;
            case ')':
              return 1;
            case '+':
              LOBYTE(v2) = v10 != 0;
              return v2 + 12;
          }
          if ( v9 != 73 )
            break;
          v0 ^= 1u;
          dword_140404A6C[70318067] = v0;
        }
        if ( v9 != 74 )
          break;
        LODWORD(v1) = 0;
        dword_140404A6C[70318066] = 0;
        if ( !v10 )
          v3 = 0;
      }
      if ( v9 == 77 )
      {
        v1 = -1;
        do
          ++v1;
        while ( *((_BYTE *)&dword_140404A6C[70318069] + v1) );
        goto LABEL_39;
      }
      if ( v9 != 80 )
        break;
      if ( (int)v1 > 0 )
      {
        LODWORD(v1) = v1 - 1;
LABEL_39:
        dword_140404A6C[70318066] = v1;
      }
LABEL_40:
      if ( !v10 )
        v3 = v1;
    }
    if ( v9 == 79 )
    {
      v11 = -1;
      do
        ++v11;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v11) );
      if ( (int)v1 >= v11 )
        goto LABEL_40;
      LODWORD(v1) = v1 + 1;
      goto LABEL_39;
    }
    v12 = dword_140404A6C[v8 + 468760169];
  }
  while ( v12 < 32 || v12 > 122 );
  if ( v10 )
  {
    if ( (unsigned int)(v12 - 97) <= 0x19 )
      return toupper(v12);
    switch ( v12 )
    {
      case '0':
        return 41;
      case '1':
        return 33;
      case '2':
        return 64;
      case '3':
        return 35;
      case '4':
        return 36;
      case '5':
        return 37;
      case '6':
        return 94;
      case '7':
        return 38;
      case '8':
        return 42;
      case '9':
        return 40;
      case '-':
        return 95;
      case '=':
        return 43;
      case '/':
        return 63;
      case ',':
        return 60;
      case '.':
        return 62;
      case ';':
        return 58;
      case '\'':
        return 34;
    }
  }
  return v12;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151042A30: using guessed type unsigned int;
// 151042A34: using guessed type unsigned int;
// 151042A38: using guessed type unsigned int;
// 1B0032404: using guessed type unsigned int;

//----- (0000000140076320) ----------------------------------------------------
void            sub_140076320(__int64 a1, int a2)
{
  char v2; // bl
  unsigned __int64 v3; // rcx
  signed int v4; // edx
  int v5; // r8d
  _BYTE *v6; // r9
  char *v7; // rdx
  char v8; // cl
  unsigned int v9; // r8d
  char *v10; // rdx
  char v11; // cl

  v2 = a2;
  if ( a2 < 32 )
  {
    if ( a2 == 9 )
    {
      if ( !(unsigned int)sub_1400722C0() )
      {
        v7 = (char *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066];
        if ( *v7 )
        {
          do
          {
            v8 = v7[1];
            *v7++ = v8;
          }
          while ( v8 );
        }
      }
    }
    else if ( a2 == 10 && !(unsigned int)sub_1400722C0() )
    {
      v9 = dword_140404A6C[70318066];
      if ( (int)dword_140404A6C[70318066] > 0 )
      {
        v10 = (char *)&dword_140404A6C[70318068] + dword_140404A6C[70318066] + 3;
        if ( *v10 )
        {
          do
          {
            v11 = v10[1];
            *v10++ = v11;
          }
          while ( v11 );
          v9 = dword_140404A6C[70318066];
        }
        dword_140404A6C[70318066] = v9 - 1;
        dword_140404A6C[70318065] = v9 - 1;
      }
    }
  }
  else
  {
    sub_1400722C0();
    v3 = -1;
    do
      ++v3;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v3) );
    if ( v3 < (int)dword_140404A6C[70318068] )
    {
      v4 = dword_140404A6C[70318066];
      if ( (int)dword_140404A6C[70318066] < 0x2000 )
      {
        if ( dword_140404A6C[70318067] )
        {
          if ( !*((_BYTE *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066]) )
          {
            *((_BYTE *)&dword_140404A6C[70318069] + dword_140404A6C[70318066] + 1) = 0;
            v4 = dword_140404A6C[70318066];
          }
        }
        else
        {
          v5 = v3 + 1;
          if ( (int)v3 + 1 > (int)dword_140404A6C[70318066] )
          {
            v6 = (char *)&dword_140404A6C[70318069] + v5;
            do
            {
              --v5;
              *v6 = *(v6 - 1);
              --v6;
              v4 = dword_140404A6C[70318066];
            }
            while ( v5 > (int)dword_140404A6C[70318066] );
          }
        }
        *((_BYTE *)&dword_140404A6C[70318069] + v4) = v2;
        dword_140404A6C[70318065] = ++dword_140404A6C[70318066];
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151042A30: using guessed type unsigned int;
// 151042A34: using guessed type unsigned int;

//----- (00000001400A74D0) ----------------------------------------------------
__int64            sub_1400A74D0(int a1, float a2, float a3)
{
  float v3; // xmm0_4
  int v4; // r11d
  __int64 v6; // r8
  float v7; // xmm3_4
  unsigned int v8; // xmm0_4
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // r9d
  signed int v12; // r9d
  signed int *v14; // rax

  v3 = (float)(int)dword_140404A6C[137297772];
  v4 = 0;
  dword_140404A6C[137297772] = 0;
  v6 = 122LL * a1;
  v7 = *(float *)&dword_140404A6C[v6 + 70087232] - (float)(v3 * 16.0);
  if ( v7 < 0.0 )
    v7 = 0.0;
  v8 = dword_140404A6C[v6 + 70087234];
  *(float *)&dword_140404A6C[v6 + 70087232] = v7;
  if ( v7 > *(float *)&v8 )
  {
    dword_140404A6C[v6 + 70087232] = v8;
    v7 = *(float *)&v8;
  }
  v9 = 0;
  if ( (int)(float)(a2 / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087228])) >= 0 )
    v9 = (int)(float)(a2 / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087228]));
  v10 = dword_140404A6C[v6 + 70087227];
  v11 = v10 - 1;
  if ( v9 <= (int)(v10 - 1) )
    v11 = v9;
  if ( (int)(float)((float)(v7 + a3)
                  / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087229])) >= 0 )
    v4 = (int)(float)((float)(v7 + a3)
                    / (float)(*(float *)&dword_140404A6C[v6 + 70087230] + *(float *)&dword_140404A6C[v6 + 70087229]));
  v12 = v10 * v4 + v11;
  if ( v12 > (int)(dword_140404A6C[v6 + 70087220] - 1) )
  {
    dword_140404A6C[v6 + 70087223] = -1;
    return 0;
  }
  dword_140404A6C[v6 + 70087223] = v12;
  if ( v12 == -1 || dword_140404A6C[70317817] || !dword_140404A6C[70317856] || a1 != dword_140404A6C[70087106] )
    return 0;
  v14 = *(signed int **)&dword_140404A6C[v6 + 70087225];
  dword_140404A6C[v6 + 70087222] = v12;
  if ( v14 )
    *v14 = v12;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC481C: using guessed type unsigned int;

//----- (00000001400E3960) ----------------------------------------------------
__int64            sub_1400E3960(_BYTE *a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  char *v7; // rdx
  unsigned int *v8; // rcx
  char v9; // al
  char *v10; // rdx
  unsigned int *v11; // rax
  char v12; // cl
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E3960[352];
#define v14 (*(__int64 (*))(void *)(sr_frame_1400E3960 + 0)) /* [rsp+0h] */
#define v15 (*(_BYTE (*)[36])(void *)(sr_frame_1400E3960 + 32)) /* [rsp+20h] */
#define v16 (*(_BYTE (*)[268])(void *)(sr_frame_1400E3960 + 68)) /* [rsp+44h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_1400E3960 + 336)) /* [rsp+150h] */

  v4 = 16385LL * a2;
  v5 = sub_14023A198(a1, (__int64)v15);
  dword_140404A6C[v4 + 293119325] = 0;
  if ( (_DWORD)v5 != -1 )
  {
    while ( 1 )
    {
      v6 = (int)dword_140404A6C[v4 + 293119325];
      if ( (int)v6 >= 1024 )
        goto LABEL_14;
      if ( a3 )
        break;
      if ( (v15[0] & 0x10) == 0 )
      {
        v7 = v16;
        v8 = &dword_140404A6C[16 * v6 + 293119326 + v4];
        do
        {
          v9 = *v7++;
          *(_BYTE *)v8 = v9;
          v8 = (unsigned int *)((char *)v8 + 1);
        }
        while ( v9 );
LABEL_12:
        ++dword_140404A6C[v4 + 293119325];
      }
LABEL_13:
      if ( (unsigned int)sub_14023A5C4(v5, (__int64)v15) == -1 )
        goto LABEL_14;
    }
    if ( (v15[0] & 0x10) == 0 || v16[0] == 46 )
      goto LABEL_13;
    v10 = v16;
    v11 = &dword_140404A6C[16 * v6 + 293119326 + v4];
    do
    {
      v12 = *v10++;
      *(_BYTE *)v11 = v12;
      v11 = (unsigned int *)((char *)v11 + 1);
    }
    while ( v12 );
    goto LABEL_12;
  }
LABEL_14:
  LOBYTE(dword_140404A6C[16 * (__int64)(int)dword_140404A6C[v4 + 293119325] + 293119326 + v4]) = 0;
  sub_140239CCC(v5);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[v4 + 293119326],
    (int)dword_140404A6C[v4 + 293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  return 0; /* the function has no caller */
}
#undef v14
#undef v15
#undef v16
#undef v17

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

