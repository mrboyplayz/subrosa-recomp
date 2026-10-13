#include "shared_client.h"

//----- (000000014006F380) ----------------------------------------------------
__int64            sub_14006F380(unsigned __int8 *a1)
{
  unsigned int v2;
  signed int v3;
  signed int v4;
  __int64 v6;
  unsigned int v7;
  int v8;
  int v9;

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

//----- (000000014006FD10) ----------------------------------------------------
__int64            sub_14006FD10(unsigned __int8 *a1)
{
  unsigned int v2;
  signed int v3;
  unsigned int v4;
  __int64 v6;

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

//----- (000000014006FEB0) ----------------------------------------------------
__int64            sub_14006FEB0(unsigned __int8 *a1, __int64 a2, float a3, float a4)
{
  unsigned int v6;
  signed int v7;
  int v8;
  __int64 v9;
  __int64 result;
  double v11;

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

//----- (0000000140070200) ----------------------------------------------------
__int64            sub_140070200(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6;
  signed int v7;
  int v8;
  __int64 v9;
  double v10;

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

//----- (0000000140070380) ----------------------------------------------------
// Immediate-mode widget allocator/layout helper. Reuses/allows up to 1024 widget slots, records local/screen rects, style/parent, and advances cursor by size + 4.
__int64            sub_140070380(unsigned int a1, float a2, float a3, float a4, unsigned int a5, unsigned int a6)
{
  char v6;
  float v7;
  float v8;
  signed int v9;
  signed int v10;
  unsigned int *v11;
  int v13;
  int i;
  int v15;
  unsigned int *v16;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;

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
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[122 * v9 + 70087113]), 0, 0x1E8u);
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
  unsigned int v12;
  signed int v13;
  float v14;
  signed int v15;
  __int64 v16;
  int v17;
  unsigned int *v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  int v29;
  unsigned int v30;
  int v31;
  int v32;
  signed int v33;
  signed int *v34;

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

//----- (00000001400711D0) ----------------------------------------------------
__int64            sub_1400711D0(unsigned __int8 *a1, float *a2, float a3, float a4, float a5)
{
  unsigned int v8;
  signed int v9;
  unsigned int v10;
  __int64 v11;
  __m128 v12;
  __m128d v13;
  int v14;
  float v15;

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
      v12 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)dword_140404A6C[468760125]))  /* lane 0 = that word (was the array address, indexed as a vector) */;
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

//----- (0000000140071640) ----------------------------------------------------
void            sub_140071640(char *a1)
{
  char *v2;
  unsigned int *v3;
  char v4;

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

//----- (0000000140071AA0) ----------------------------------------------------
__int64            sub_140071AA0(unsigned __int8 *a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v6;
  signed int v7;
  signed int v8;
  __int64 v9;

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

//----- (00000001400745F0) ----------------------------------------------------
__int64            sub_1400745F0(unsigned int a1)
{
  __int64 v2;
  int v3;
  __int64 v4 = 0; // native width set below
  __int64 v5 = 0; // native width set below
  double v6;
  float v7;
  __int64 v8 = 0; // native width set below
  __int64 v9 = 0; // native width set below
  double v10;
  __int64 v11 = 0; // native width set below
  __int64 v12 = 0; // native width set below
  int v13;
  float v14;
  __m128i v15;
  unsigned int *v16;
  int i;
  double v18;
  double v19;
  signed int v20;
  signed int v21;
  unsigned int *v22;
  int v23;
  float v24;
  __m128i v25;
  int v26;
  int v27;
  float v28;
  unsigned int *v29;
  int j;
  __int64 k;
  __int64 v32;
  signed int v33;
  __int64 v34;
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
      qword_140404050(3553, dword_140404A6C[3592 * renderer_current_font + 72777086]);
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
            renderer_current_font = v16[1];
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

//----- (0000000140074E50) ----------------------------------------------------
void sub_140074E50()
{
  int v0;
  __int64 v1;
  unsigned int *v2;
  unsigned int *v3;
  int v4;
  int *v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD *v12;
  unsigned int *v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int *v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _DWORD *v25;
  unsigned int *v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int *v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  _DWORD *v37;
  unsigned int *v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 i;
  unsigned int *v43;
  __int64 v44;
  __int64 v45;
  _DWORD *v46;

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

//----- (0000000140075650) ----------------------------------------------------
_WORD *sub_140075650()
{
  unsigned int *v0;
  unsigned int *v1;
  _WORD *result;

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
  result = crt_memset((void *)(uintptr_t)(&dword_140404A6C[70317269]), 0xFFu, 0x800u);
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

//----- (00000001400764B0) ----------------------------------------------------
void            sub_1400764B0(char *a1, float a2, float a3, float a4, char a5)
{
  char *v5;
  float v6;
  float v7;
  float v8;
  unsigned int *v9;
  char v10;

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
  unsigned int *v1;
  unsigned int *v2;
  __int64 v3;
  __int64 v5;
  __int128 v6;
  unsigned int v7;
  int j;
  unsigned int v9;
  __int64 v10;
  int i;
  __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  signed int v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  int v23;
  unsigned int *v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned int *v27;
  __int64 v28;
  float v29;
  float v30;
  __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  __int64 v37;
  float v38;
  float v39;
  __int64 v40;
  float v41;
  float v42;
  unsigned int v43;
  unsigned int *v44;
  int v45;
  signed int v46;
  int v47;
  __int64 v48;
  unsigned int *v49;
  signed int v50;
  unsigned int v51;
  __int64 v52;
  unsigned int *v53;
  int v54;
  __int64 v55;
  __int64 v56;
  float *v57;
  int v58;
  unsigned int v59;
  signed int v60;
  float v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  int v65;
  __int64 v66;
  unsigned int *v67;
  int v68;
  unsigned int *v69;
  int v70;
  __int64 result;
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
    *(float *)&v16 = (float)((float)v72 * renderer_canvas_width)
                   / (float)(int)dword_140404A6C[137297755];
    dword_140404A6C[468760125] = v16;
    *(float *)&v17 = (float)((float)v73 * renderer_canvas_height)
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

//----- (0000000140077230) ----------------------------------------------------
__int64 sub_140077230()
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  float v4;
  float v5;
  unsigned int v6;
  __int64 v7;
  float v8;
  float v9;
  unsigned int *v10;
  __int64 v11;
  float v12;
  float v13;
  unsigned int *v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  unsigned int v19;
  unsigned int v20;
  signed int v21;

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

//----- (000000014009FE00) ----------------------------------------------------
// Candidate gameplay/menu mouse-camera state handler: uses SDL relative mouse mode/state and menu actions.
__int64            gameplay_mouse_camera_state_candidate(int a1, __int64 a2, double a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  signed int i;
  int v9;
  unsigned int *v10;
  unsigned int *v11;
  unsigned int v12;
  unsigned int *v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  int v21;
  float v22;
  int v23;
  float v24;
  unsigned int *v25;
  int *v26;
       char *v27;
  int v28;
  unsigned int v29;
  unsigned int *v30;
       char *v31;
  int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int *v44;
  __int64 v45;
  __int128 v46;
  __int128 v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  __int64 v54;
  __int64 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  int v59;
  unsigned int v60;
  __int64 v61;
  int v62;
  unsigned int v63;
  char v64;
  unsigned int v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
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
      if ( game_connected )
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
      if ( local_player != -1 )
      {
        if ( dword_140404A6C[3597 * local_player + 71856266] )
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
              crt_sprintf(v79, "Invited %s", v27);
              dword_140404A6C[70087076] = 1;
            }
            else
            {
              crt_sprintf(v79, "%s", v27);
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
      v35 = (int)local_player;
      v36 = (int)dword_140404A6C[438886365];
      if ( v77 && dword_140404A6C[438886365] != -1 )
      {
        dword_140404A6C[283831444] = 0;
        dword_140404A6C[3597 * local_player
                      + 71856367
                      + 21 * dword_140404A6C[3597 * local_player + 71856362]] = 4;
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
            crt_sprintf(v79, "%s %03d-%04d", v31, *v30 / 0x2710, *v30 % 0x2710);
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
        crt_sprintf(v79, "Ban %s", (     char *)&dword_140404A6C[20 * dword_140404A6C[438886365] + 438881248]);
        sr_DrawMenuButtonSelectable(v79, &v77, 1);
        dword_140404A6C[70087067] = 1107296256;
        dword_140404A6C[70087068] = 1127219200;
        sr_DrawMenuTextBox("Rating", (__int64)&dword_140404A6C[438886367], 0, 0x2710u);
        dword_140404A6C[70087067] = 1134559232;
        dword_140404A6C[70087068] = 1127219200;
        crt_sprintf(v79, "Set Rating %s", (     char *)&dword_140404A6C[20 * dword_140404A6C[438886365] + 438881248]);
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
  if ( replay_active )
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
      v70 = game_type;
      v71 = 3597 * v3;
      *(_QWORD *)&dword_140404A6C[v71 + 71856293] = 0;
      *(_QWORD *)&dword_140404A6C[v71 + 71856295] = 0;
      dword_140404A6C[v61 + 71856325] = 0;
      *(_QWORD *)&dword_140404A6C[v61 + 71856331] = 0;
      if ( ((_DWORD)v70 == 0 && game_connected || (_DWORD)v70 == 3 || (unsigned int)(v70 - 5) <= 2 || (_DWORD)v70 == 4 && dword_140404A6C[v61 + 71856266])
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
  int v0;
  unsigned int v1;
  float v2;
  float v3;
  unsigned int *v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
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
    game_type = dword_140404A6C[73991632];
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
    game_unknown_183ebfcc8 = 0;
    game_connected = 1;
    dword_140404A6C[283831453] = 3600 * dword_140404A6C[73991633];
    *(_QWORD *)&dword_140404A6C[73991608] = 1;
    return sub_140095B00();
  }
  return result;
}
#undef v10
#undef v11

//----- (00000001400FD300) ----------------------------------------------------
void sub_1400FD300()
{
  int v0;
  unsigned int v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  char v14;
  signed int v15;
  signed int v16;
  int v17;
  int v18;
  int v19;
  signed int v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned int *v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  signed int v29;
  __int64 v30;
  signed int v31;
  signed int v32;
  int v33;
  __int64 v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  signed int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  unsigned int *v42;
  _DWORD *v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  int v47;
  unsigned int *v48;
  __int64 v49;
  __int64 v50;
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
      crt_sprintf(v55, "Server %d", v4);
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

//----- (00000001400FE760) ----------------------------------------------------
void sub_1400FE760()
{
  int v0;
  unsigned int v1;

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

//----- (0000000140118B70) ----------------------------------------------------
void            sub_140118B70(int a1)
{
  extern int practice_death_menu(void);
  if (practice_death_menu()) return;
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  bool v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int *v9;
  char *v10;
  __int64 v11;
  __int64 v12;
  int *v13;
  unsigned int v14;
  unsigned int *v15;
  unsigned int v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int v19;

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
        if ( game_type == 4 )
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

//----- (0000000140119050) ----------------------------------------------------
__int64            sub_140119050(int a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int *v3;
  int v4;
  char *v5;
  __int64 result;

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

//----- (0000000140119220) ----------------------------------------------------
__int64            sub_140119220(int a1)
{
  unsigned int v1;
  unsigned int v2;
  signed int v3;
  __int64 v4;
  signed int v5;
  unsigned int v6;
  unsigned int v7;
  float v8;
  unsigned int v9;
  signed int v10;
  unsigned int *v11;
  unsigned int *v12;
  unsigned __int8 *v13;
  char v14;
  unsigned int v15;
  int v16;
  int *v17;
  unsigned int *v18;
  unsigned __int8 *v19;
  char v20;
  unsigned int v21;
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
  if ( game_type != 7 )
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
    crt_sprintf(v24, "$%d", dword_140404A6C[278535234]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm", (int *)&dword_140404A6C[v4 + 71856345], 0);
    crt_sprintf(v24, "$%d", dword_140404A6C[278530162]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5", (int *)&dword_140404A6C[v4 + 71856345], 1);
    crt_sprintf(v24, "$%d", dword_140404A6C[278522554]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47", (int *)&dword_140404A6C[v4 + 71856345], 2);
    crt_sprintf(v24, "$%d", dword_140404A6C[278525090]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16", (int *)&dword_140404A6C[v4 + 71856345], 3);
    crt_sprintf(v24, "$%d", dword_140404A6C[278532698]);
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
    crt_sprintf(v24, "$%d", dword_140404A6C[278536502]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm Magazine", (int *)&dword_140404A6C[v4 + 71856345], 0);
    crt_sprintf(v24, "$%d", dword_140404A6C[278531430]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 1);
    crt_sprintf(v24, "$%d", dword_140404A6C[278523822]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 2);
    crt_sprintf(v24, "$%d", dword_140404A6C[278526358]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 3);
    crt_sprintf(v24, "$%d", dword_140404A6C[278533966]);
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
    crt_sprintf(v24, "$%d", dword_140404A6C[278539038]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Bandage", (int *)&dword_140404A6C[v4 + 71856345], 0);
    crt_sprintf(v24, "$%d", dword_140404A6C[278540306]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Briefcase", (int *)&dword_140404A6C[v4 + 71856345], 7);
    crt_sprintf(v24, "$%d", dword_140404A6C[278537770]);
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
        crt_sprintf(v24, "$%d", *v11);
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

//----- (0000000140119F70) ----------------------------------------------------
__int64            sub_140119F70(int a1)
{
  char v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  int v7;
  int *v8;
  int v9;
  unsigned int *v10;
  unsigned __int8 *v11;
  char v12;
  signed int v13;
  int *v14;
  int v15;
  unsigned int *v16;
  unsigned __int8 *v17;
  char v18;
  unsigned int v19;
  unsigned int v20;
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

//----- (000000014011A330) ----------------------------------------------------
void            sub_14011A330(int a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  signed int v6;
  __int64 v7;
  __int64 v8;
  char *v9;
  char *v10;
  char v11;
  _WORD *v12;
  char *v13;
  unsigned int v14;
  int *v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  bool v21;
  unsigned int *v22;
  char *v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  int *v28;
  char *v29;
  unsigned int v30;
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
            crt_sprintf(v35, "$%d", dword_140404A6C[14019 * v4 + 225654130 + 3 * v7]);
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
          crt_sprintf(v35, "$%d", dword_140404A6C[3 * v18 + 225654130]);
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
            crt_sprintf(v35, "$%d", dword_140404A6C[14019 * v4 + 225654130 + 3 * v7]);
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
            crt_sprintf(v35, "$%d", dword_140404A6C[3 * v25 + 225654130]);
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

//----- (000000014011AA20) ----------------------------------------------------
__int64            sub_14011AA20(int a1)
{
  int *v1;
  __int64 result;

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

//----- (000000014011AB60) ----------------------------------------------------
void            sub_14011AB60(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int *v4;
  unsigned int v5;
  int v6;
  char *v7;
  unsigned int v8;
  unsigned int v9;

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

//----- (000000014011ACC0) ----------------------------------------------------
__int64            sub_14011ACC0(int a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  char *v5;
  signed int v6;
  __int64 result;

  v1 = a1;
  if ( game_type == 2 || game_type == 5 )
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
        if ( game_type == 7 )
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

