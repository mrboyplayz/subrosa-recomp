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

  v2 = sub_14006C670(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  v3 = sub_140070380(
         v2,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  v6 = 122LL * v3;
  menu_last_widget = v3;
  dword_140404A6C[v6 + 70087115] = 0;
  sub_14006F120((__int64)&dword_140404A6C[v6 + 70087151], (char *)a1);
  v7 = 0;
  if ( !g_151042650 && g_1510426EC && v4 == g_150F61180 )
    dword_140404A6C[v6 + 70087215] = 1;
  if ( dword_140404A6C[v6 + 70087215] )
  {
    v8 = sub_140071C20("Test4", 64.0, 64.0, 320.0, 0x43A00000u, 1095761920, 768);
    if ( (unsigned int)sr_DrawMenuButton("ADD 10") )
    {
      v7 = 10;
      dword_140404A6C[v6 + 70087215] = 0;
    }
    menu_y = menu_y + 512.0;
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
  if ( v8 == -1 || g_150F61168 != v8 )
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

  v2 = sub_14006C670(a1, (g_150F610CC << 16) + (g_150F61084 << 8));
  v3 = sub_140070380(
         v2,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  v6 = 122LL * v3;
  menu_last_widget = v3;
  dword_140404A6C[v6 + 70087115] = 13;
  sub_14006F120((__int64)&dword_140404A6C[v6 + 70087151], (char *)a1);
  if ( !g_151042650
    && g_1510426EC
    && v4 == g_150F61180
    && v4 == g_150F61174 )
  {
    dword_140404A6C[v6 + 70087215] ^= 1u;
  }
  if ( dword_140404A6C[v6 + 70087215] )
  {
    g_150F610CC = v4;
    menu_x = menu_x + 16.0;
    if ( (int)g_150F61088 < 16 )
    {
      dword_140404A6C[g_150F61088 + 70087048] = v4;
      ++g_150F61088;
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

  v6 = sub_14006C670(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  v7 = sub_140070380(
         v6,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  v8 = v7;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  v9 = 122LL * v7;
  menu_last_widget = v7;
  *(float *)&dword_140404A6C[v9 + 70087219] = a3;
  *(float *)&dword_140404A6C[v9 + 70087220] = a4;
  dword_140404A6C[v9 + 70087115] = 4;
  *(_QWORD *)&dword_140404A6C[v9 + 70087217] = a2;
  g_151042A3C = 24;
  result = sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  if ( v8 == g_150F61174 )
  {
    *(_QWORD *)&v11 = g_1B0032364;
    *(float *)&v11 = *(float *)&g_1B0032364 - *(float *)&dword_140404A6C[v9 + 70087135];
    return sub_140075A40(v8, g_1B0032360 - *(float *)&dword_140404A6C[v9 + 70087134], v11);
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

  v6 = sub_14006C670(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  v7 = sub_140070380(
         v6,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  v8 = v7;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  v9 = 122LL * v7;
  menu_last_widget = v7;
  dword_140404A6C[v9 + 70087115] = 3;
  *(_QWORD *)&dword_140404A6C[v9 + 70087215] = a2;
  g_151042A3C = a3;
  sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  if ( v8 != g_150F61174 )
    return 0;
  *(_QWORD *)&v10 = g_1B0032364;
  *(float *)&v10 = *(float *)&g_1B0032364 - *(float *)&dword_140404A6C[v9 + 70087135];
  return sub_140075A40(v8, g_1B0032360 - *(float *)&dword_140404A6C[v9 + 70087134], v10);
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

  v6 = g_150F610F8;
  v7 = a2;
  v8 = a3;
  v9 = -1;
  v10 = (g_150F610F8 >> 8) & 1;
  g_150F610F8 = 0;
  v11 = &g_150F61194;
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
    v16 = &g_150F61190;
    while ( *v16 )
    {
      ++v9;
      v16 += 122;
      if ( (__int64)v16 >= (__int64)&g_150FDB190 )
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
  dword_140404A6C[v18 + 70087123] = g_150F610D4;
  dword_140404A6C[v18 + 70087122] = g_150F61084;
  *(float *)&dword_140404A6C[v18 + 70087125] = v7;
  *(float *)&dword_140404A6C[v18 + 70087126] = v8;
  *(float *)&dword_140404A6C[v18 + 70087127] = a4;
  dword_140404A6C[v18 + 70087128] = a5;
  *(float *)&dword_140404A6C[v18 + 70087134] = v7;
  *(float *)&dword_140404A6C[v18 + 70087135] = v8;
  *(float *)&dword_140404A6C[v18 + 70087136] = a4;
  dword_140404A6C[v18 + 70087137] = a5;
  if ( g_150F61084 != -1 )
  {
    *(float *)&dword_140404A6C[v18 + 70087134] = v7
                                               + *(float *)&dword_140404A6C[98 * g_150F61084 + 70290981];
    *(float *)&dword_140404A6C[v18 + 70087135] = (float)(*(float *)&dword_140404A6C[98 * g_150F61084
                                                                                  + 70290982]
                                                       - *(float *)&dword_140404A6C[98 * g_150F61084
                                                                                  + 70290905])
                                               + v8;
  }
  v19 = 122LL * v9;
  dword_140404A6C[v19 + 70087129] = g_150F61128;
  dword_140404A6C[v19 + 70087130] = g_150F6112C;
  dword_140404A6C[v19 + 70087131] = g_150F61130;
  dword_140404A6C[v19 + 70087132] = g_150F61134;
  dword_140404A6C[v18 + 70087133] = a6;
  if ( g_150F610F0 )
  {
    g_150F61174 = v9;
    g_150F610F0 = 0;
  }
  if ( g_150F610FC )
  {
    dword_140404A6C[v18 + 70087119] = 1;
    g_150F610FC = 0;
  }
  else
  {
    dword_140404A6C[v18 + 70087119] = 0;
  }
  if ( g_150F610F4 )
  {
    dword_140404A6C[v18 + 70087120] = g_150F610F4;
    if ( g_150F610F4 - 1 <= 0x1FE
      && (dword_140404A6C[g_150F610F4 + 70317269] == -1
       || g_150F61084 == g_150F61168) )
    {
      dword_140404A6C[g_150F610F4 + 70317269] = v9;
    }
  }
  else
  {
    dword_140404A6C[v18 + 70087120] = 0;
  }
  g_150F610F4 = 0;
  dword_140404A6C[v18 + 70087124] = g_150F61100;
  g_150F61100 = 0;
  if ( g_150F61110 )
  {
    dword_140404A6C[v18 + 70087146] = g_150F61108;
    dword_140404A6C[v18 + 70087147] = g_150F6110C;
    *(_QWORD *)&dword_140404A6C[v18 + 70087149] = g_150F61110;
  }
  g_150F61110 = 0;
  *(_QWORD *)&dword_140404A6C[v19 + 70087138] = -1;
  *(_QWORD *)&dword_140404A6C[v19 + 70087140] = -1;
  *(_QWORD *)&dword_140404A6C[v19 + 70087142] = -1;
  if ( g_15104AA48 )
  {
    v20 = g_15104AE4C;
    if ( (int)g_15104AE4C < 16 )
    {
      v21 = g_15104AE50;
      if ( (int)g_15104AE50 >= 16 )
        goto LABEL_43;
      dword_140404A6C[16 * g_15104AE50 + 70326264 + g_15104AE4C] = v9;
      v20 = g_15104AE4C;
    }
    v21 = g_15104AE50;
LABEL_43:
    if ( menu_vertical )
    {
      g_15104AE4C = 0;
      g_15104AE50 = v21 + 1;
    }
    else
    {
      g_15104AE4C = v20 + 1;
    }
  }
  if ( g_150F61104 )
  {
    v22 = g_150F61188;
    if ( v13 <= 1 )
      v22 = v9;
    g_150F61188 = v22;
  }
  g_150F61104 = 0;
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

  v12 = sub_14006C670(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  v13 = sub_140070380(
          v12,
          menu_x,
          menu_y,
          a2,
          LODWORD(a3),
          g_150F610E8);
  v14 = a3 + 4.0;
  v15 = v13;
  if ( menu_vertical )
  {
    menu_y = menu_y + v14;
  }
  else
  {
    menu_row_height = a3 + 4.0;
    menu_x = menu_x + (float)(a2 + 4.0);
  }
  v16 = 122LL * v13;
  menu_last_widget = v13;
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
  if ( v15 != g_150F61180 )
    goto LABEL_28;
  v23 = *(float *)v18;
  v24 = *(float *)&g_1B0032364 - *(float *)&dword_140404A6C[v16 + 70087135];
  v25 = g_1B0032360 - *(float *)&dword_140404A6C[v16 + 70087134];
  v26 = (float)(int)g_160FC481C;
  g_160FC481C = 0;
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
  if ( v33 == -1 || g_151042650 || !g_1510426EC || v15 != g_150F61174 )
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

  v8 = sub_14006C670(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  v9 = sub_140070380(
         v8,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  v10 = v9;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  v11 = 122LL * v9;
  menu_last_widget = v9;
  dword_140404A6C[v11 + 70087115] = 12;
  sub_14006F120((__int64)&dword_140404A6C[v11 + 70087151], (char *)a1);
  *(float *)&dword_140404A6C[v11 + 70087219] = a5;
  *(float *)&dword_140404A6C[v11 + 70087217] = a3;
  *(float *)&dword_140404A6C[v11 + 70087218] = a4;
  *(_QWORD *)&dword_140404A6C[v11 + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[v11 + 70087220] = 1098907648;
  if ( v10 == g_150F61174 )
  {
    if ( g_151042650 )
    {
      v12 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)*(unsigned int *)&g_1B0032360))  /* lane 0 = that word (was the array address, indexed as a vector) */;
      SR_VEC_LANES(128, v12, f32)[0] = (float)((float)((float)(g_1B0032360
                                              - *(float *)&dword_140404A6C[v11 + 70087134])
                                      - 8.0)
                              / (float)(*(float *)&dword_140404A6C[v11 + 70087127] - 16.0))
                      * fmaxf(a4 - a3, 0.0);
      if ( LOBYTE(g_151041AA0) && a5 != 0.0 )
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

  if ( (int)g_150FDB190 < 1024 )
  {
    dword_140404A6C[77 * g_150FDB190 + 70212043] = g_150F61084;
    v2 = a1;
    v3 = &dword_140404A6C[77 * g_150FDB190 + 70212055];
    do
    {
      v4 = *v2++;
      *(_BYTE *)v3 = v4;
      v3 = (unsigned int *)((char *)v3 + 1);
    }
    while ( v4 );
    dword_140404A6C[77 * g_150FDB190 + 70212042] = g_150F610D4;
    dword_140404A6C[77 * g_150FDB190 + 70212044] = *(unsigned int *)&menu_x;
    dword_140404A6C[77 * g_150FDB190 + 70212045] = *(unsigned int *)&menu_y;
    dword_140404A6C[77 * g_150FDB190 + 70212050] = g_150F610E8;
    dword_140404A6C[77 * g_150FDB190 + 70212051] = *(unsigned int *)&menu_x;
    dword_140404A6C[77 * g_150FDB190 + 70212052] = *(unsigned int *)&menu_y;
    dword_140404A6C[77 * g_150FDB190 + 70212053] = g_150F610E8;
    dword_140404A6C[77 * g_150FDB190 + 70212054] = g_150F610E8;
    if ( g_150F61084 != -1 )
    {
      *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212051] = *(float *)&dword_140404A6C[98 * g_150F61084 + 70290981]
                                                                            + *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212051];
      *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212052] = (float)(*(float *)&dword_140404A6C[98 * g_150F61084 + 70290982]
                                                                                    - *(float *)&dword_140404A6C[98 * g_150F61084 + 70290905])
                                                                            + *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212052];
    }
    dword_140404A6C[77 * g_150FDB190 + 70212046] = g_150F61128;
    dword_140404A6C[77 * g_150FDB190 + 70212047] = g_150F6112C;
    dword_140404A6C[77 * g_150FDB190 + 70212048] = g_150F61130;
    dword_140404A6C[77 * g_150FDB190++ + 70212049] = g_150F61134;
    if ( menu_vertical )
      menu_y = menu_y
                                           + (float)(*(float *)&g_150F610E8 + 4.0);
    else
      menu_x = menu_x
                                           + (float)(sub_14006F060(
                                                       g_150F610D4,
                                                       a1,
                                                       *(float *)&g_150F610E8)
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

  v6 = sub_14006C670(a1, (g_150F61084 << 8) + (g_150F610CC << 16));
  v7 = sub_140070380(
         v6,
         menu_x,
         menu_y,
         *(float *)&menu_item_width,
         menu_item_height,
         g_150F610E8);
  v8 = v7;
  if ( v7 == -1 )
    return 0;
  if ( menu_vertical )
  {
    menu_y = menu_y
                                         + (float)(*(float *)&menu_item_height + 4.0);
  }
  else
  {
    menu_x = menu_x
                                         + (float)(*(float *)&menu_item_width + 4.0);
    menu_row_height = *(float *)&menu_item_height + 4.0;
  }
  v9 = 122LL * v7;
  menu_last_widget = v7;
  dword_140404A6C[v9 + 70087115] = 1;
  sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  *(_QWORD *)&dword_140404A6C[v9 + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[v9 + 70087217] = a3;
  if ( g_151042650
    || !g_1510426EC
    || v8 != g_150F61180
    || v8 != g_150F61174 )
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
      glBindTexture(3553, dword_140404A6C[3592 * renderer_current_font + 72777086]);
      v3 = 0;
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v4,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        g_150F61138,
        g_150F6113C,
        g_150F61140,
        g_150F61144);
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
        if ( a1 == g_150F6116C )
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
        sr_text_draw_recovered((char *)&dword_140404A6C[v2 + 70290908], v14 + 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v15))), *(float *)&g_150F610E8, 64, sr_text_bits_float(v38), sr_text_bits_float(v39), sr_text_bits_float(v40), sr_text_bits_float(v41), NULL);
      }
      sub_140075340();
      if ( (unsigned int)sub_140075460(
                           *(float *)&dword_140404A6C[v2 + 70290981],
                           *(float *)&dword_140404A6C[v2 + 70290982],
                           *(float *)&dword_140404A6C[v2 + 70290983],
                           *(float *)&dword_140404A6C[v2 + 70290984]) )
      {
        v16 = &g_150F611B4;
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
        v20 = g_150FDB190;
        v21 = 0;
        if ( (int)g_150FDB190 > 0 )
        {
          v22 = &g_150FDB1B0;
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
              v20 = g_150FDB190;
            }
            ++v21;
            v22 += 77;
          }
          while ( v21 < v20 );
        }
        v29 = &g_1510281A0;
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
        if ( (int)g_15104270C <= 0
          || (v33 = g_15104270C - 1, g_15104270C = v33, v33 <= 0) )
        {
          glDisable(3089);
        }
        else
        {
          v34 = 2LL * v33;
          *(unsigned int *)&g_151042A1C = dword_140404A6C[2 * v34 + 70317861];
          g_151042A24 = dword_140404A6C[2 * v34 + 70317863];
          *(unsigned int *)&g_151042A20 = dword_140404A6C[2 * v34 + 70317862];
          g_151042A28 = dword_140404A6C[2 * v34 + 70317864];
          sub_14007B7E0(
            g_151042A1C,
            g_151042A20,
            *(float *)&g_151042A24,
            *(float *)&g_151042A28);
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
  g_15104AA48 = 0;
  v1 = 0;
  v2 = &g_15104AA4C;
  v3 = &g_15104AA10;
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

  v0 = &g_150F6119C;
  do
  {
    *(v0 - 3) = 0;
    *v0 = 0;
    v0 += 122;
  }
  while ( (__int64)v0 < (__int64)&g_150FDB19C );
  g_150FDB190 = 0;
  v1 = &g_151028198;
  g_151028194 = 0;
  do
  {
    *v1 = 0;
    v1 += 98;
  }
  while ( (__int64)v1 < (__int64)&g_151040998 );
  result = crt_memset((void *)(uintptr_t)(&g_151041DC0), 0xFFu, 0x800u);
  *(_OWORD *)&menu_x = xmmword_1402797D0;
  g_150F61084 = -1;
  g_150F610E8 = 1095761920;
  *(unsigned int *)&g_150F610EC = 1082130432;
  *(_OWORD *)&g_150F61138 = xmmword_140279480;
  g_150F61040 = 0;
  g_150F61148 = xmmword_140279670;
  g_150F610CC = -1;
  g_150F61158 = xmmword_140279680;
  g_150F61088 = 0;
  menu_vertical = 1;
  *(_OWORD *)&g_150F61128 = xmmword_140279700;
  g_150F610F4 = 0;
  g_150F61168 = -1;
  *(_QWORD *)&g_150F61174 = -1;
  g_150F61188 = -1;
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
  if ( (int)g_150FDB190 < 1024 )
  {
    v8 = sub_14006F060(g_150F610D4, a1, a4);
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
    dword_140404A6C[77 * g_150FDB190 + 70212043] = g_150F61084;
    v9 = &dword_140404A6C[77 * g_150FDB190 + 70212055];
    do
    {
      v10 = *v5++;
      *(_BYTE *)v9 = v10;
      v9 = (unsigned int *)((char *)v9 + 1);
    }
    while ( v10 );
    dword_140404A6C[77 * g_150FDB190 + 70212042] = g_150F610D4;
    *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212044] = v7;
    *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212045] = v6;
    *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212050] = a4;
    *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212051] = v7;
    *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212052] = v6;
    *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212053] = a4;
    *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212054] = a4;
    if ( g_150F61084 != -1 )
    {
      *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212051] = *(float *)&dword_140404A6C[98 * g_150F61084 + 70290981]
                                                                            + *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212051];
      *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212052] = (float)(*(float *)&dword_140404A6C[98 * g_150F61084 + 70290982]
                                                                                    - *(float *)&dword_140404A6C[98 * g_150F61084 + 70290905])
                                                                            + *(float *)&dword_140404A6C[77 * g_150FDB190 + 70212052];
    }
    dword_140404A6C[77 * g_150FDB190 + 70212046] = g_150F61128;
    dword_140404A6C[77 * g_150FDB190 + 70212047] = g_150F6112C;
    dword_140404A6C[77 * g_150FDB190 + 70212048] = g_150F61130;
    dword_140404A6C[77 * g_150FDB190++ + 70212049] = g_150F61134;
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

  v1 = &g_151041BC0;
  g_150F6117C = g_150F61174;
  v2 = &g_1510419C0;
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
  v7 = g_1B0032400;
  *(_OWORD *)v1 = *(_OWORD *)v2;
  *((_OWORD *)v1 + 1) = *((_OWORD *)v2 + 1);
  *((_OWORD *)v1 + 2) = *((_OWORD *)v2 + 2);
  *((_OWORD *)v1 + 3) = *((_OWORD *)v2 + 3);
  *((_WORD *)v1 + 32) = *((_WORD *)v2 + 32);
  *((_BYTE *)v1 + 66) = *((_BYTE *)v2 + 66);
  if ( (a1 & 2) != 0 )
  {
    if ( !g_151042A2C )
    {
      for ( i = g_150F61184; i != v7; g_150F61184 = i )
      {
        if ( !dword_140404A6C[5 * i + 468760167] )
        {
          v12 = (int)dword_140404A6C[dword_140404A6C[5 * i + 468760168] + 70317269];
          if ( (_DWORD)v12 != -1 )
          {
            dword_140404A6C[122 * v12 + 70087121] = 1;
            LOWORD(i) = g_150F61184;
          }
        }
        i = ((_WORD)i + 1) & 0x3FF;
      }
    }
  }
  else if ( !g_151042A2C )
  {
    for ( j = g_1B0032404; j != v7; g_1B0032404 = j )
    {
      v9 = dword_140404A6C[5 * j + 468760167];
      if ( v9 == 1 )
      {
        v10 = (int)dword_140404A6C[dword_140404A6C[5 * j + 468760168] + 70317269];
        if ( (_DWORD)v10 != -1 )
          dword_140404A6C[122 * v10 + 70087121] = 1;
        *((_BYTE *)&g_1510419C0 + (int)dword_140404A6C[5 * j + 468760168]) = 0;
      }
      if ( !v9 )
        *((_BYTE *)&g_1510419C0 + (int)dword_140404A6C[5 * j + 468760168]) = 1;
      j = ((_WORD)j + 1) & 0x3FF;
    }
  }
  g_150F61184 = v7;
  g_1510426F4 = g_151042658;
  g_15104265C = *(_OWORD *)&g_1510425C0;
  g_15104266C = g_1510425D0;
  g_15104267C = g_1510425E0;
  g_15104268C = g_1510425F0;
  g_15104269C = g_151042600;
  g_1510426AC = g_151042610;
  g_1510426BC = g_151042620;
  g_1510426CC = g_151042630;
  *(_QWORD *)&g_1510426EC = *(_QWORD *)&g_151042650;
  g_1510426DC = g_151042640;
  if ( (a1 & 1) != 0 )
  {
    v13 = g_1B00323F8;
    v15 = g_1B00323F4;
    v14 = g_1B00323F0;
    v17 = g_1B0032364;
    v16 = *(unsigned int *)&g_1B0032360;
  }
  else
  {
    v13 = sr_ui_mouse_state(&v72, &v73);
    v14 = v13 & 1;
    v15 = ((unsigned __int8)v13 >> 2) & 1;
    g_1B00323F8 = v13;
    g_1B00323F0 = v14;
    g_1B00323F4 = v15;
    *(float *)&v16 = (float)((float)v72 * (renderer_canvas_width))
                   / (float)(int)g_160FC47D8;
    *(unsigned int *)&g_1B0032360 = v16;
    *(float *)&v17 = (float)((float)v73 * (renderer_canvas_height))
                   / (float)(int)g_160FC47DC;
    g_1B0032364 = v17;
  }
  v18 = g_150F61168;
  g_151042658 = v13;
  g_150F61084 = -1;
  g_150F61040 = 0;
  g_150F610CC = -1;
  g_150F61088 = 0;
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1082130432;
  menu_vertical = 1;
  *(_OWORD *)&g_1510425C0 = *(_OWORD *)&g_1B0032360;
  g_1510425D0 = g_1B0032370;
  g_1510425E0 = g_1B0032380;
  g_1510425F0 = g_1B0032390;
  g_151042600 = g_1B00323A0;
  g_151042610 = g_1B00323B0;
  g_151042620 = g_1B00323C0;
  g_151042630 = g_1B00323D0;
  *(_QWORD *)&g_151042650 = *(_QWORD *)&g_1B00323F0;
  g_151042640 = g_1B00323E0;
  if ( g_150F61168 != -1 )
  {
    v19 = 98LL * (int)g_150F61168;
    if ( (int)dword_140404A6C[v19 + 70290891] < 3 )
    {
      v18 = dword_140404A6C[v19 + 70290894];
      g_150F61168 = v18;
    }
  }
  v20 = -1;
  do
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = &g_1510281A0;
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
  v43 = g_150F61178;
  if ( g_151040998 == 3 )
    v20 = g_1510409A0;
  g_150F61170 = v20;
  if ( g_150F61178 != -1 )
  {
    if ( dword_140404A6C[122 * g_150F61178 + 70087113] != 3 )
      v43 = -1;
    g_150F61178 = v43;
  }
  if ( v14 && !g_1510426EC || v15 && !g_1510426F0 )
  {
    v18 = v20;
    v44 = &g_150F61198;
    g_150F61168 = v20;
    v45 = 0;
    v46 = v20;
    do
    {
      if ( *(v44 - 2) == 3 && *v44 == 6 )
      {
        if ( v44[7] == v20 )
          v43 = v45;
        g_150F61178 = v43;
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
        v49 = &g_1510281A8;
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
      v18 = g_150F61168;
    }
  }
  g_150F6116C = v18;
  if ( v18 != -1 )
  {
    v52 = 98LL * v18;
    if ( dword_140404A6C[v52 + 70290972] )
      g_150F6116C = dword_140404A6C[v52 + 70290894];
  }
  g_150F61180 = -1;
  v53 = &g_151041DC0;
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
  v57 = (float *)&g_150F611E8;
  v58 = 0;
  v59 = g_150F61180;
  v60 = g_150F61174;
  do
  {
    if ( *((_DWORD *)v57 - 22) == 3 && *((_DWORD *)v57 - 13) == v20 )
    {
      if ( *((_DWORD *)v57 - 17) )
      {
        v61 = *(v57 - 1);
        if ( g_1510425C0 >= v61
          && g_1510425C0 < (float)(v61 + v57[1])
          && g_1510425C4 >= *v57
          && g_1510425C4 < (float)(*v57 + v57[2])
          && (!g_151042650 || !g_1510426EC || v60 == v58) )
        {
          g_150F61180 = v58;
          v59 = v58;
          if ( g_151042650 )
          {
            if ( !g_1510426EC )
              v60 = v58;
            g_150F61174 = v60;
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
    if ( g_151042650 )
      goto LABEL_132;
    goto LABEL_127;
  }
  if ( g_151042650 )
  {
    if ( !g_1510426EC )
      v60 = -1;
    g_150F61174 = v60;
    goto LABEL_126;
  }
LABEL_127:
  *(_QWORD *)&g_1510426FC = -1;
  if ( v60 != -1 && !g_1510426EC )
  {
    v62 = 122LL * v60;
    if ( (int)dword_140404A6C[v62 + 70087113] < 3 || dword_140404A6C[v62 + 70087115] - 3 > 2 )
      g_150F61174 = -1;
  }
LABEL_132:
  v63 = g_150F61188;
  if ( g_150F61188 != -1 )
  {
    v64 = 0;
    v65 = 1;
    v66 = 4;
    do
    {
      if ( (g_15104AA40 & v65) == v65 && (g_15104AA44 & v65) != v65 )
      {
        if ( dword_140404A6C[122 * (int)v63 + 70087138 + v64] != -1 )
          v63 = dword_140404A6C[122 * (int)v63 + 70087138 + v64];
        g_150F61188 = v63;
      }
      v65 = __ROL4__(v65, 1);
      ++v64;
      --v66;
    }
    while ( v66 );
    if ( (int)dword_140404A6C[122 * v63 + 70087113] < 3 )
      v63 = -1;
    g_150F61188 = v63;
  }
  g_150F6118C = 0;
  if ( (g_15104AA40 & 0x10) != 0 )
    g_150F6118C = (g_15104AA44 & 0x10) == 0;
  g_15104AA44 = g_15104AA40;
  v67 = &g_151028320;
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
  v69 = &g_150F61378;
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
  if ( (int)g_151040998 > 0 )
    --g_151040998;
  result = g_1510411AC;
  g_151042A2C = 0;
  if ( (int)g_1510411AC > 0 )
    return --g_1510411AC;
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

  if ( !g_150F61040 )
  {
    g_150F61084 = -1;
    return 1;
  }
  v1 = (int)g_150F61084;
  if ( g_150F61084 == -1 )
    return 1;
  v2 = 0;
  if ( g_150F61170 == g_150F61084 )
  {
    v3 = 98LL * (int)g_150F61084;
    v4 = (float)(int)g_160FC481C;
    g_160FC481C = 0;
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
  v10 = &g_150F611B4;
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
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  v16 = v12 - 16.0;
  menu_item_width = 1098907648;
  menu_item_height = 1098907648;
  v17 = *(float *)v14 - 16.0;
  if ( (int)g_151042810 < 16 )
  {
    dword_140404A6C[2 * g_151042810 + 70317930] = *(unsigned int *)&menu_x;
    dword_140404A6C[2 * g_151042810++ + 70317931] = *(unsigned int *)&menu_y;
  }
  menu_x = v16;
  menu_y = v17;
  v18 = (unsigned int)sr_DrawMenuButton("X") == 0;
  v19 = g_151042810;
  if ( !v18 )
    v2 = 1;
  if ( (int)g_151042810 > 0 )
  {
    --g_151042810;
    *(unsigned int *)&menu_x = dword_140404A6C[2 * (v19 - 1) + 70317930];
    *(unsigned int *)&menu_y = dword_140404A6C[2 * (v19 - 1) + 70317931];
  }
  v20 = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    menu_item_width = dword_140404A6C[2 * (v20 - 1) + 70317963];
    menu_item_height = dword_140404A6C[2 * (v20 - 1) + 70317964];
  }
  v21 = g_150F61040 - 1;
  g_150F61040 = v21;
  if ( v21 <= 0 )
    g_150F61084 = -1;
  else
    g_150F61084 = dword_140404A6C[v21 + 70087029];
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
  if ( g_183EBFAA4 == 3 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v4 = g_183EBFAA8;
  if ( !g_183EBFAA8 && (_DWORD)v3 != -1 )
  {
    sub_140118B70(v3);
    v4 = g_183EBFAA8;
  }
  v77 = 0;
  v78 = 0;
  if ( v4 != 1 )
    goto LABEL_73;
  g_18329CC24 = 1;
  switch ( g_183EBFCBC )
  {
    case 0u:
      *(_OWORD *)&menu_x = xmmword_140279800;
      g_150F610F4 = 41;
      if ( (unsigned int)sr_DrawMenuButton("Return to Game") )
      {
        g_183EBFAA8 = 0;
        g_18329CC24 = 0;
        sub_140198F0B(1, v5, v6);
        g_183EBFD5C = 1;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
      if ( game_connected )
      {
        if ( g_151E4614C )
        {
          if ( g_1829F8BC0 )
          {
            g_150F610F4 = 12;
            if ( (unsigned int)sr_DrawMenuButton("Invite") )
            {
              v7 = sub_1401988C0(4u);
              g_1829F8FDC = v7;
              for ( i = 0; i < (int)g_1829F8FDC; ++i )
              {
                sub_140198820(
                  (__int64 *)&dword_140404A6C[132LL * i + 278384989],
                  (__int64)&dword_140404A6C[132 * i + 278384992],
                  i,
                  4u);
                v7 = g_1829F8FDC;
              }
              v9 = 0;
              if ( v7 > 0 )
              {
                v10 = &g_18329CED0;
                v11 = &g_1829F8FE8;
                do
                {
                  *v11 = sub_140198A10(*((_QWORD *)v11 - 1));
                  v11 += 132;
                  ++v9;
                  *v10++ = 0;
                }
                while ( v9 < (int)g_1829F8FDC );
              }
              g_183EBFCBC = 1;
            }
          }
        }
      }
      g_150F610F4 = 16;
      if ( (_DWORD)v3 != -1 && (unsigned int)sr_DrawMenuButton("Mute Player") )
      {
        v12 = 0;
        v13 = &g_151623978;
        g_18329C404 = 0;
        v14 = 0;
        v15 = 0;
        do
        {
          if ( *(v13 - 2886) && !*v13 && v15 != v3 )
          {
            dword_140404A6C[v12 + 280649319] = v14;
            v12 = ++g_18329C404;
          }
          ++v14;
          ++v15;
          v13 += 3597;
        }
        while ( v14 < 256 );
        g_183EBFCBC = 3;
      }
      if ( local_player != -1 )
      {
        if ( dword_140404A6C[3597 * local_player + 71856266] )
        {
          g_150F610F4 = 4;
          if ( (unsigned int)sr_DrawMenuButton("Admin") )
          {
            g_1A8E3C9E0 = -1;
            g_183EBFCBC = 2;
          }
        }
      }
      g_150F610F4 = 18;
      if ( (unsigned int)sr_DrawMenuButton("Options") )
      {
        g_183EBFAA4 = 3;
        g_18329CC24 = 1;
      }
      g_150F610F4 = 8;
      if ( (unsigned int)sr_DrawMenuButton("Exit Game") )
      {
        sub_140095FC0(v17, v16, v18);
        g_183EBFAA4 = 0;
      }
      goto LABEL_67;
    case 1u:
      *(_OWORD *)&menu_x = xmmword_1402797F0;
      g_150F610F4 = 41;
      v19 = sr_DrawMenuButton("Back");
      v20 = g_183EBFCBC;
      v21 = 0;
      if ( v19 )
        v20 = 0;
      v22 = 128.0;
      v23 = 0;
      v24 = 64.0;
      g_183EBFCBC = v20;
      menu_item_width = 1128267776;
      menu_item_height = 1105199104;
      if ( (int)g_1829F8FDC > 0 )
      {
        v25 = &g_18329CED0;
        v26 = (int *)&g_1829F8FE8;
        do
        {
          menu_x = v22;
          menu_y = v24;
          if ( *v26 > 0 )
          {
            v27 = (     char *)&dword_140404A6C[132 * v23 + 278384992];
            if ( *v25 )
            {
              crt_sprintf(v79, "Invited %s", v27);
              g_150F610FC = 1;
            }
            else
            {
              crt_sprintf(v79, "%s", v27);
            }
            sr_DrawMenuButtonSelectable(v79, (int *)&g_18329CC34, v23);
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
        while ( v23 < (int)g_1829F8FDC );
      }
      if ( g_18329CC34 != -1 )
      {
        sub_140198C10(*(_QWORD *)&dword_140404A6C[132 * g_18329CC34 + 278384989]);
        dword_140404A6C[g_18329CC34 + 280650009] = 1;
        g_18329CC34 = -1;
      }
LABEL_67:
      v35 = (int)local_player;
      v36 = (int)g_1A8E3C9E0;
      if ( v77 && g_1A8E3C9E0 != -1 )
      {
        g_183EBFCBC = 0;
        dword_140404A6C[3597 * local_player
                      + 71856367
                      + 21 * dword_140404A6C[3597 * local_player + 71856362]] = 4;
        dword_140404A6C[3597 * v35 + 71856368 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = dword_140404A6C[20 * v36 + 438881247];
        dword_140404A6C[3597 * v35 + 71856369 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = g_1A8E3C9E4;
        dword_140404A6C[3597 * v35 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v35 + 71856362] + 1) & 0x3F;
      }
      if ( v78 && (_DWORD)v36 != -1 )
      {
        g_183EBFCBC = 0;
        dword_140404A6C[3597 * v35 + 71856367 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = 5;
        dword_140404A6C[3597 * v35 + 71856368 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = dword_140404A6C[20 * v36 + 438881247];
        dword_140404A6C[3597 * v35 + 71856369 + 21 * (int)dword_140404A6C[3597 * v35 + 71856362]] = g_1A8E3C9E8;
        dword_140404A6C[3597 * v35 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v35 + 71856362] + 1) & 0x3F;
      }
LABEL_73:
      if ( !g_18329CC24 )
      {
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
        g_183F7C758 = sr_menu_relative_mouse(&v75, &v76);
        *(unsigned int *)&g_183F7C6C0 = 1140850688;
        *(unsigned int *)&g_183F7C6C4 = 1134559232;
        g_183F7C750 = g_183F7C758 & 1;
        g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
        g_183F7C6C8 = (float)v75;
        g_183F7C6CC = (float)v76;
        if ( g_18329CC28 )
        {
          g_183F7C758 = sr_menu_relative_mouse(&v76, &v75);
          *(unsigned int *)&g_183F7C6C0 = 1140850688;
          *(unsigned int *)&g_183F7C6C4 = 1134559232;
          g_183F7C750 = g_183F7C758 & 1;
          g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
          g_183F7C6C8 = (float)v76;
          g_183F7C6CC = (float)v75;
        }
      }
      break;
    case 2u:
      *(_OWORD *)&menu_x = xmmword_1402797F0;
      g_150F610F4 = 41;
      v28 = sr_DrawMenuButton("Back");
      v29 = g_183EBFCBC;
      if ( v28 )
        v29 = 0;
      g_183EBFCBC = v29;
      menu_item_width = 1128267776;
      menu_item_height = 1105199104;
      if ( g_1A8E3C9E0 == -1 )
      {
        v30 = &g_1A8E37A2C;
        v31 = (     char *)&g_1A8E379EC;
        *(unsigned int *)&menu_x = 1124073472;
        v32 = 0;
        *(unsigned int *)&menu_y = 1115684864;
        do
        {
          if ( *(v30 - 19) )
          {
            crt_sprintf(v79, "%s %03d-%04d", v31, *v30 / 0x2710, *v30 % 0x2710);
            sr_DrawMenuButtonSelectable(v79, (int *)&g_1A8E3C9E0, v32);
          }
          ++v32;
          v31 += 80;
          v30 += 20;
        }
        while ( v32 < 256 );
      }
      else
      {
        *(unsigned int *)&menu_x = 1107296256;
        *(unsigned int *)&menu_y = 1124073472;
        sr_DrawMenuTextBox("Time", (__int64)&g_1A8E3C9E4, 0, 0x5F5E100u);
        *(unsigned int *)&menu_x = 1134559232;
        *(unsigned int *)&menu_y = 1124073472;
        crt_sprintf(v79, "Ban %s", (     char *)&dword_140404A6C[20 * g_1A8E3C9E0 + 438881248]);
        sr_DrawMenuButtonSelectable(v79, &v77, 1);
        *(unsigned int *)&menu_x = 1107296256;
        *(unsigned int *)&menu_y = 1127219200;
        sr_DrawMenuTextBox("Rating", (__int64)&g_1A8E3C9E8, 0, 0x2710u);
        *(unsigned int *)&menu_x = 1134559232;
        *(unsigned int *)&menu_y = 1127219200;
        crt_sprintf(v79, "Set Rating %s", (     char *)&dword_140404A6C[20 * g_1A8E3C9E0 + 438881248]);
        sr_DrawMenuButtonSelectable(v79, &v78, 1);
      }
      goto LABEL_67;
    case 3u:
      *(_OWORD *)&menu_x = xmmword_1402797E0;
      g_150F610F4 = 41;
      v33 = sr_DrawMenuButton("Back");
      v34 = g_183EBFCBC;
      if ( v33 )
        v34 = 0;
      *(_QWORD *)&a3 = 1136656384;
      g_150F61110 = (uintptr_t)sub_1400FE870;
      *(unsigned int *)&menu_y = 1115684864;
      menu_item_height = 1105199104;
      g_183EBFCBC = v34;
      menu_item_width = 1128267776;
      *(unsigned int *)&menu_x = 1128267776;
      *(_QWORD *)&g_150F61108 = 0;
      if ( (unsigned int)sub_1400707C0(
                           "mutelist",
                           640.0,
                           384.0,
                           160.0,
                           0x42400000u,
                           0,
                           &g_18329C400,
                           0,
                           0,
                           g_18329C404)
        && (g_18329C400 & 0x80000000) == 0
        && (int)g_18329C400 < (int)g_18329C404 )
      {
        sub_140117820(dword_140404A6C[g_18329C400 + 280649319]);
      }
      goto LABEL_67;
  }
  v37 = g_1B0032404;
  v38 = 0;
  v39 = g_1B0032400;
  g_18329CC28 = g_18329CC24;
  for ( g_18329CC4C = 0; v37 != v39; g_1B0032404 = v37 )
  {
    if ( v38 < 32 )
    {
      dword_140404A6C[5 * v38 + 280649849] = dword_140404A6C[5 * v37 + 468760167];
      dword_140404A6C[5 * g_18329CC4C + 280649852] = dword_140404A6C[5 * v37 + 468760169];
      dword_140404A6C[5 * g_18329CC4C + 280649851] = dword_140404A6C[5 * v37 + 468760168];
      dword_140404A6C[5 * g_18329CC4C + 280649853] = dword_140404A6C[5 * v37 + 468760170];
      dword_140404A6C[5 * g_18329CC4C + 280649850] = dword_140404A6C[5 * v37 + 468760171];
      v38 = ++g_18329CC4C;
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
          v38 = g_18329CC4C;
        }
      }
    }
  }
  v43 = 2;
  v44 = &g_183F7C760;
  v45 = (__int64)&g_183F7C960;
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
    v44 = &g_18329CC58;
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
              *((_BYTE *)&g_183F7C960 + v45) = 0;
          }
          else
          {
            *((_BYTE *)&g_183F7C960 + v45) = 1;
          }
        }
      }
      v55 = (unsigned int)(v55 + 1);
      v44 += 5;
    }
    while ( (int)v55 < v38 );
  }
  if ( BYTE1(g_183F7C988) )
  {
    BYTE1(g_183F7C988) = 0;
    g_183EBFAA8 = 1;
    g_18329CC24 = 1;
    g_183EBFD5C = 0;
    sub_140198F0B(0, v45, v55);
  }
  if ( replay_active )
    sub_1400A3970((__int64)v44, v45, a3);
  if ( (_DWORD)v3 != -1 )
  {
    sub_1400A3770(v3);
    if ( !g_183E93540 )
    {
      if ( LOBYTE(g_183F7C988) && !LOBYTE(g_183F7C788) )
      {
        LOBYTE(g_183E93550) = 0;
        g_183E93540 = 1;
      }
      if ( HIBYTE(g_183F7C974) && !HIBYTE(g_183F7C774) )
      {
        v60 = g_183E93544 + 1;
        if ( (signed int)(g_183E93544 + 1) > 2 )
          v60 = 0;
        g_183E93544 = v60;
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
    if ( HIBYTE(g_183F7C988) )
    {
      if ( !HIBYTE(g_183F7C788) )
      {
        if ( g_18329CC24 || (g_18329CC24 = 1, !dword_140404A6C[v61 + 71856342]) )
          g_18329CC24 = 0;
      }
    }
    if ( BYTE2(g_183F7C964) && !BYTE2(g_183F7C764) )
      g_183F79DF0 ^= 1u;
    if ( LOBYTE(g_183F7C970) && !LOBYTE(g_183F7C770) )
      g_183F79DF4 ^= 1u;
    v65 = g_18329CC38;
    g_18329CC3C = g_18329CC38;
    *(_QWORD *)&g_18329CC40 = 0;
    v66 = *((_BYTE *)&g_183F7C960 + (int)g_18329DEE0);
    if ( !v66 )
      v65 = 0;
    g_18329CC38 = v65;
    if ( !g_18329B180 )
    {
      g_18329CC44 = *((_BYTE *)&g_183F7C960 + (int)g_18329DEE8) != 0;
      if ( !v66 || *((_BYTE *)&g_183F7C760 + (int)g_18329DEE0) )
      {
        if ( !v65 )
          g_18329CC40 = g_183F7C754 != 0;
      }
      else
      {
        g_18329CC38 = 1;
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
        && !g_18329CC24 )
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

  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  g_150F610F4 = 41;
  v0 = sr_DrawMenuButton("Back");
  v1 = g_183EBFAA4;
  v2 = menu_y + 32.0;
  if ( v0 )
    v1 = 0;
  menu_item_width = 1128267776;
  menu_item_height = 1103101952;
  g_183EBFAA4 = v1;
  menu_y = menu_y + 32.0;
  *(float *)&g_150F61120 = v2;
  g_150F6111C = *(unsigned int *)&menu_x;
  *(unsigned int *)&menu_row_height = 0;
  menu_vertical = 0;
  sr_DrawMenuButtonSelectable("World Mode", (int *)&g_151E461AC, 4);
  sr_DrawMenuButtonSelectable("Round Mode", (int *)&g_151E461AC, 3);
  sr_DrawMenuButtonSelectable("Eliminator Mode", (int *)&g_151E461AC, 5);
  if ( menu_vertical )
  {
    v3 = menu_y;
  }
  else
  {
    v3 = menu_row_height + *(float *)&g_150F61120;
    *(unsigned int *)&menu_x = g_150F6111C;
    if ( g_15104AA48 )
    {
      ++g_15104AE50;
      g_15104AE4C = 0;
    }
  }
  menu_vertical = 1;
  menu_y = v3 + 16.0;
  sr_DrawMenuTextBox("Max Players", (__int64)&g_151E461A8, 1u, 0x20u);
  if ( g_151E461AC == 3 )
  {
    v4 = &g_183F7A5AC;
  }
  else
  {
    v4 = &g_183F7A600;
    if ( g_151E461AC != 7 )
      v4 = &g_151E461B0;
  }
  sr_DrawMenuTextBox("Round Length", (__int64)v4, 1u, 0x1Eu);
  sub_140070200("Server Name", (__int64)&g_151E45B4C, 0x18u);
  g_150F610F4 = 22;
  menu_y = menu_y + 32.0;
  result = sr_DrawMenuButton("Start");
  if ( SR_DEBUG_AUTOSTART_MODE() && SR_DEBUG_AUTOSTART(SR_DEBUG_AUTOSTART_MODE() == 3 ? "round" : "world") )
  {
    g_151E461AC = SR_DEBUG_AUTOSTART_MODE();
    result = 1;
  }
  if ( (_DWORD)result )
  {
    sub_140198F0B(1, v6, v7);
    g_183F7C758 = sr_menu_relative_mouse(&v10, &v11);
    g_183F7C750 = g_183F7C758 & 1;
    g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
    v8 = 0;
    game_type = g_151E461AC;
    g_183F7C6C8 = (float)v10;
    g_183F7C6CC = (float)v11;
    *(unsigned int *)&g_183F7C6C0 = 1140850688;
    *(unsigned int *)&g_183F7C6C4 = 1134559232;
    do
    {
      v9 = *((_BYTE *)&g_151E45B4C + v8);
      *((_BYTE *)(unsigned int *)&g_1AD04ADD4 + v8++) = v9;
    }
    while ( v9 );
    g_1AD04B1F4 = g_151E461A8;
    g_183EBFCDC = 3600;
    g_183EBFD30 = 1260;
    game_unknown_183ebfcc8 = 0;
    game_connected = 1;
    g_183EBFCE0 = 3600 * g_151E461B0;
    *(_QWORD *)&g_151E4614C = 1;
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

  menu_item_width = 1126170624;
  menu_item_height = 1101004800;
  g_150F610F4 = 41;
  v0 = sr_DrawMenuButton("Back");
  v1 = g_183EBFAA4;
  v2 = g_16B15FF28;
  v3 = 0;
  menu_item_width = 1146880000;
  if ( v0 )
    v1 = 0;
  g_183EBFAA4 = v1;
  menu_item_height = 1105199104;
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1113587712;
  do
  {
    v4 = v3 + 16 * v2;
    if ( v4 < (int)g_16B15FF00 )
    {
      crt_sprintf(v55, "Server %d", v4);
      v5 = g_150F610FC;
      g_150F6110C = 0;
      g_150F61108 = v3 + 16 * g_16B15FF28;
      g_150F61110 = (uintptr_t)sub_1400CFC80;
      if ( dword_140404A6C[368 * g_16B15FF28 + 179473701 + 23 * v3] != dword_1402B231C )
        v5 = 1;
      g_150F610FC = v5;
      if ( (unsigned int)sr_DrawMenuButton(v55) )
      {
        v6 = sub_140198F9B();
        v2 = g_16B15FF28;
        g_16B15FF24 = v6 + 200;
        g_16B15FF30 = v3 + 16 * g_16B15FF28;
        v7 = 23LL * (v3 + 16 * g_16B15FF28);
        v8 = dword_140404A6C[v7 + 179473723];
        v9 = dword_140404A6C[v7 + 179473712];
        g_1AD04B1D4 = dword_140404A6C[v7 + 179473713];
        LOWORD(g_1AD04B1D8) = dword_140404A6C[v7 + 179473714];
        g_1AD04B1E8 = dword_140404A6C[v7 + 179473715];
        LOWORD(g_1AD04B1EC) = dword_140404A6C[v7 + 179473716];
        g_16B15FF34 = v8;
        g_183F7AED4 = v9;
        sub_140050C80(&g_183F7C520, &g_183F7C524, v9);
        g_183EBFAA4 = 2;
        g_16B15FF40 = 0;
        g_16B15FF3C = v8 == 0;
        g_16B15FF50 = 0;
        g_16B15FF60 = 0;
        g_16B15FF70 = 0;
      }
      else
      {
        v2 = g_16B15FF28;
      }
      menu_y = menu_y + -2.0;
    }
    ++v3;
  }
  while ( v3 < 16 );
  menu_item_width = 1124073472;
  *(unsigned int *)&menu_x = 1146945536;
  menu_item_height = 1103101952;
  *(unsigned int *)&menu_y = 1113587712;
  if ( v2 > 0 )
  {
    g_150F610F4 = 75;
    v10 = sr_DrawMenuButton("Page Up");
    v2 = g_16B15FF28;
    if ( v10 )
      v2 = --g_16B15FF28;
  }
  *(unsigned int *)&menu_y = 1140850688;
  if ( 16 * (v2 + 1) < (int)g_16B15FF00 )
  {
    g_150F610F4 = 78;
    if ( (unsigned int)sr_DrawMenuButton("Page Down") )
      ++g_16B15FF28;
  }
  if ( g_183EBFAA4 == 1 )
  {
    if ( !g_16B15FF38 )
      g_16B15FF38 = g_16B165F40 == 2;
    if ( (unsigned int)sub_140198F9B() - g_16B15FF24 <= 0xA )
    {
      v14 = v53;
    }
    else
    {
      v11 = sub_140198F9B();
      g_16B15FF24 = v11;
      v12 = g_16B0A7EE4;
      if ( (int)g_16B0A7EE4 <= 0 )
      {
        v14 = v53;
      }
      else
      {
        v13 = (int)g_16B15FF2C;
        if ( (int)g_16B15FF2C >= (int)g_16B0A7EE4 )
        {
          v14 = v53;
        }
        else
        {
          strcpy((char *)&packet_out_data, "7DFP");
          v14 = 0;
          *(_QWORD *)&packet_out_byte = 5;
          sub_140115D90(&dword_1402B231C, 8);
          v15 = packet_out_byte;
          if ( (int)packet_out_byte < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              v15 = packet_out_byte + 1;
              packet_out_bit = 0;
              ++packet_out_byte;
            }
            *(unsigned int *)((char *)&packet_out_data + v15) = v11;
            packet_out_byte += 4;
          }
          sub_140130350(dword_140404A6C[2 * v13 + 179457309], dword_140404A6C[2 * v13 + 179457310], 0);
          v12 = g_16B0A7EE4;
          LODWORD(v13) = g_16B15FF2C;
        }
        v16 = v13 + 1;
        if ( v16 >= (int)(v12 + 10) )
          v16 = 0;
        g_16B15FF2C = v16;
      }
      if ( g_16B15FF38 == 1 && g_18329C1E0 )
      {
        packet_out_data = dword_1402B2658;
        *(_QWORD *)&packet_out_byte = 5;
        LOBYTE(g_18539D408) = 74;
        sub_140130350(g_18329C1E0, g_18329C1E4, 0);
      }
    }
    if ( g_16B165F40 == 2 && (int)sub_14011C760() > 0 )
    {
      v17 = v54;
      v18 = v54;
      do
      {
        v19 = packet_in_byte;
        v20 = packet_in_length;
        if ( (int)packet_in_byte >= 0x10000
          || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
        {
          v21 = packet_in_bit;
        }
        else
        {
          v21 = packet_in_bit;
          if ( (int)packet_in_bit > 0 )
          {
            v19 = ++packet_in_byte;
            v21 = 0;
            packet_in_bit = 0;
          }
          v22 = v19++;
          v14 = *((_BYTE *)&packet_in_data + v22);
          packet_in_byte = v19;
        }
        if ( v14 == 1 )
        {
          v23 = 0;
          v24 = 0;
          if ( (int)g_16B15FF00 <= 0 )
          {
LABEL_53:
            v26 = ntohl_sr(g_18539D3E8);
            v27 = HIWORD(g_18539D3E4);
            v28 = 23LL * (int)g_16B15FF00;
            dword_140404A6C[v28 + 179473713] = v26;
            LOWORD(dword_140404A6C[v28 + 179473714]) = ntohs_sr(v27);
            sub_140115AE0(&dword_140404A6C[v28 + 179473701], 8);
            v29 = packet_in_byte;
            if ( (int)packet_in_byte < 0x10000
              && (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
            {
              if ( (int)packet_in_bit > 0 )
              {
                v29 = packet_in_byte + 1;
                packet_in_bit = 0;
                ++packet_in_byte;
              }
              dword_140404A6C[v28 + 179473720] = *(unsigned int *)((char *)&packet_in_data + v29);
              packet_in_byte = v29 + 4;
            }
            v30 = 23LL * (int)g_16B15FF00;
            dword_140404A6C[v30 + 179473720] = sub_140198F9B() - dword_140404A6C[v30 + 179473720];
            sub_140115AE0(&dword_140404A6C[v30 + 179473721], 4);
            sub_140115AE0(&dword_140404A6C[v30 + 179473717], 8);
            sub_140115AE0(&dword_140404A6C[v30 + 179473719], 8);
            v31 = packet_in_byte;
            v32 = packet_in_length;
            if ( (int)packet_in_byte >= 0x10000
              || (signed int)(packet_in_byte + 32) > (int)packet_in_length )
            {
              v33 = packet_in_bit;
            }
            else
            {
              v33 = packet_in_bit;
              if ( (int)packet_in_bit > 0 )
              {
                v31 = packet_in_byte + 1;
                v33 = 0;
                ++packet_in_byte;
                packet_in_bit = 0;
              }
              v34 = v31;
              v31 += 32;
              v35 = *(_OWORD *)((char *)&packet_in_data + v34);
              v36 = *(_OWORD *)((char *)&g_1853AD434 + v34);
              packet_in_byte = v31;
              *(_OWORD *)&dword_140404A6C[v30 + 179473704] = v35;
              *(_OWORD *)&dword_140404A6C[v30 + 179473708] = v36;
            }
            if ( v31 < 0x10000 && v31 + 4 <= v32 )
            {
              if ( v33 > 0 )
              {
                ++v31;
                v33 = 0;
                packet_in_byte = v31;
                packet_in_bit = 0;
              }
              v39 = v31;
              v31 += 4;
              dword_140404A6C[v30 + 179473712] = *(unsigned int *)((char *)&packet_in_data + v39);
              packet_in_byte = v31;
            }
            if ( (int)dword_140404A6C[v30 + 179473701] >= 27 && v31 < 0x10000 )
            {
              if ( v31 + 4 <= v32 )
              {
                if ( v33 > 0 )
                {
                  ++v31;
                  v33 = 0;
                  packet_in_byte = v31;
                  packet_in_bit = 0;
                }
                v40 = v31;
                v31 += 4;
                dword_140404A6C[v30 + 179473715] = *(unsigned int *)((char *)&packet_in_data + v40);
                packet_in_byte = v31;
              }
              if ( v31 < 0x10000 && v31 + 2 <= v32 )
              {
                if ( v33 > 0 )
                {
                  ++v31;
                  packet_in_bit = 0;
                  packet_in_byte = v31;
                }
                LOWORD(dword_140404A6C[v30 + 179473716]) = *(_WORD *)((char *)&packet_in_data + v31);
                packet_in_byte = v31 + 2;
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
              ++g_16B15FF00;
              *v42 = 0;
              *v43 = 0;
            }
            else
            {
              sub_140115AE0(v42, 8);
              sub_140115AE0(v43, 8);
              ++g_16B15FF00;
            }
          }
          else
          {
            v25 = &g_16B0A7F34;
            while ( *(v25 - 1) != (unsigned int)ntohl_sr(g_18539D3E8)
                 || *(_WORD *)v25 != (unsigned __int16)ntohs_sr(HIWORD(g_18539D3E4)) )
            {
              ++v23;
              ++v24;
              v25 += 23;
              if ( v23 >= (int)g_16B15FF00 )
                goto LABEL_53;
            }
            v37 = 23LL * v23;
            sub_140115AE0(&dword_140404A6C[v37 + 179473701], 8);
            v38 = packet_in_byte;
            if ( (int)packet_in_byte < 0x10000
              && (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
            {
              if ( (int)packet_in_bit > 0 )
              {
                v38 = packet_in_byte + 1;
                packet_in_bit = 0;
                ++packet_in_byte;
              }
              dword_140404A6C[v37 + 179473720] = *(unsigned int *)((char *)&packet_in_data + v38);
              packet_in_byte = v38 + 4;
            }
            dword_140404A6C[23 * v24 + 179473720] = sub_140198F9B() - dword_140404A6C[23 * v24 + 179473720];
            sub_140115AE0(&dword_140404A6C[v37 + 179473721], 4);
            sub_140115AE0(&dword_140404A6C[v37 + 179473717], 8);
            sub_140115AE0(&dword_140404A6C[v37 + 179473719], 8);
          }
        }
        else if ( v14 == 74 )
        {
          g_16B15FF38 = 2;
          if ( v19 < 0x10000 )
          {
            if ( v19 + 4 <= (int)packet_in_length )
            {
              if ( v21 > 0 )
              {
                ++v19;
                packet_in_bit = 0;
                packet_in_byte = v19;
                v21 = 0;
              }
              v44 = v19;
              v19 += 4;
              v17 = *(unsigned int *)((char *)&packet_in_data + v44);
              packet_in_byte = v19;
            }
            if ( v19 < 0x10000 && v19 + 4 <= (int)packet_in_length )
            {
              if ( v21 > 0 )
              {
                ++v19;
                packet_in_bit = 0;
                packet_in_byte = v19;
                v21 = 0;
              }
              v45 = v19;
              v19 += 4;
              v18 = *(unsigned int *)((char *)&packet_in_data + v45);
              packet_in_byte = v19;
            }
          }
          v46 = v17 + g_16B0A7EE0;
          if ( (signed int)(v17 + g_16B0A7EE0) > 0x2000 )
            v46 = 0x2000;
          g_16B0A7EE4 = v46;
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
                    packet_in_bit = 0;
                    packet_in_byte = v19;
                    v21 = 0;
                  }
                  v49 = v19;
                  v19 += 4;
                  *(v48 - 1) = *(unsigned int *)((char *)&packet_in_data + v49);
                  packet_in_byte = v19;
                }
                if ( v19 < 0x10000 && v19 + 2 <= v20 )
                {
                  if ( v21 > 0 )
                  {
                    ++v19;
                    packet_in_bit = 0;
                    packet_in_byte = v19;
                    v21 = 0;
                  }
                  v50 = v19;
                  v19 += 2;
                  *(_WORD *)v48 = *(_WORD *)((char *)&packet_in_data + v50);
                  packet_in_byte = v19;
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

  *(_OWORD *)&menu_x = xmmword_1402797E0;
  g_150F610F4 = 41;
  v0 = sr_DrawMenuButton("Back");
  v1 = g_183EBFCBC;
  if ( v0 )
    v1 = 0;
  g_150F61110 = (uintptr_t)sub_1400FE870;
  *(unsigned int *)&menu_y = 1115684864;
  menu_item_height = 1105199104;
  g_183EBFCBC = v1;
  menu_item_width = 1128267776;
  *(unsigned int *)&menu_x = 1128267776;
  *(_QWORD *)&g_150F61108 = 0;
  if ( (unsigned int)sub_1400707C0(
                       "mutelist",
                       640.0,
                       384.0,
                       160.0,
                       0x42400000u,
                       0,
                       &g_18329C400,
                       0,
                       0,
                       g_18329C404)
    && (g_18329C400 & 0x80000000) == 0
    && (int)g_18329C400 < (int)g_18329C404 )
  {
    sub_140117820(dword_140404A6C[g_18329C400 + 280649319]);
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
  v2 = g_18329CC24;
  v3 = 3597 * v1;
  v4 = dword_140404A6C[3597 * v1 + 71856342];
  if ( v4 - 1 <= 1 )
    v2 = 1;
  g_18329CC24 = v2;
  if ( !v4 )
  {
    g_18329CC24 = 0;
    return;
  }
  if ( v2 )
  {
    if ( v4 == 1 )
    {
      sub_1400755F0(240.0, 32.0);
      v5 = dword_140404A6C[v3 + 71856286] <= 5;
      *(unsigned int *)&menu_x = 1136918528;
      *(unsigned int *)&menu_y = 1134034944;
      if ( v5 )
      {
        v6 = g_150F610FC;
        if ( (int)dword_140404A6C[v3 + 71856291] > 0 )
          v6 = 1;
        g_150F610FC = v6;
        if ( (unsigned int)sr_DrawMenuButton("Respawn at Base") )
          dword_140404A6C[v3 + 71856345] = 2;
      }
      v7 = g_150F610FC;
      v5 = (int)dword_140404A6C[v3 + 71856291] <= 0;
      g_150F610F4 = 30;
      if ( !v5 )
        v7 = 1;
      g_150F610FC = v7;
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
        *(unsigned int *)&menu_x = 1082130432;
        *(unsigned int *)&menu_y = 1124073472;
        if ( (int)g_151042894 < 16 )
        {
          dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
          dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
        }
        menu_item_width = 1132199936;
        menu_item_height = 1107296256;
        sr_DrawMenuButtonSelectable("Buy", (int *)&dword_140404A6C[v3 + 71856345], 1);
        sr_DrawMenuButtonSelectable("Sell", (int *)&dword_140404A6C[v3 + 71856345], 2);
        v8 = 0;
        v9 = (int *)&g_18329CC24;
        v10 = "Done";
LABEL_53:
        menu_y = menu_y + 32.0;
LABEL_54:
        sr_DrawMenuButtonSelectable((unsigned __int8 *)v10, v9, v8);
        v18 = g_151042894;
        if ( (int)g_151042894 > 0 )
        {
          --g_151042894;
          v19 = v18 - 1;
          menu_item_width = dword_140404A6C[2 * v19 + 70317963];
          menu_item_height = dword_140404A6C[2 * v19 + 70317964];
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
      *(unsigned int *)&menu_x = 1082130432;
      *(unsigned int *)&menu_y = 1124073472;
      if ( (int)g_151042894 < 16 )
      {
        dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
        dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
      }
      v15 = &dword_140404A6C[v3 + 71856345];
      menu_item_width = 1132199936;
      menu_item_height = 1107296256;
      sr_DrawMenuButtonSelectable("Deposit", (int *)&dword_140404A6C[v3 + 71856345], 7);
      sr_DrawMenuButtonSelectable("Withdrawl $5", (int *)&dword_140404A6C[v3 + 71856345], 1);
      sr_DrawMenuButtonSelectable("Withdrawl $10", (int *)&dword_140404A6C[v3 + 71856345], 2);
      sr_DrawMenuButtonSelectable("Withdrawl $20", (int *)&dword_140404A6C[v3 + 71856345], 3);
      sr_DrawMenuButtonSelectable("Withdrawl $50", (int *)&dword_140404A6C[v3 + 71856345], 4);
      sr_DrawMenuButtonSelectable("Withdrawl $100", (int *)&dword_140404A6C[v3 + 71856345], 5);
      sr_DrawMenuButtonSelectable("Withdrawl $1000", (int *)&dword_140404A6C[v3 + 71856345], 6);
      v16 = dword_140404A6C[v3 + 71856342];
      v17 = &g_18329CC24;
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
    *(unsigned int *)&menu_x = 1082130432;
    *(unsigned int *)&menu_y = 1124073472;
    sub_1400755F0(252.0, 32.0);
    v12 = 14019 * v11;
    v13 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 291638736);
    v14 = dword_140404A6C[v12 + 225641203];
    if ( v14 == 3 )
    {
      sr_DrawMenuButtonSelectable("Sell Car", v13, 1);
      v14 = dword_140404A6C[v12 + 225641203];
      menu_y = menu_y + 32.0;
      if ( v14 == 3 )
        goto LABEL_38;
    }
    else
    {
      menu_y = menu_y + 32.0;
    }
    v13 = (int *)&g_18329CC24;
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

  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1124073472;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  v1 = 3597LL * a1;
  menu_item_width = 1132199936;
  menu_item_height = 1107296256;
  sr_DrawMenuButtonSelectable("Deposit", (int *)&dword_140404A6C[v1 + 71856345], 7);
  sr_DrawMenuButtonSelectable("Withdrawl $5", (int *)&dword_140404A6C[v1 + 71856345], 1);
  sr_DrawMenuButtonSelectable("Withdrawl $10", (int *)&dword_140404A6C[v1 + 71856345], 2);
  sr_DrawMenuButtonSelectable("Withdrawl $20", (int *)&dword_140404A6C[v1 + 71856345], 3);
  sr_DrawMenuButtonSelectable("Withdrawl $50", (int *)&dword_140404A6C[v1 + 71856345], 4);
  sr_DrawMenuButtonSelectable("Withdrawl $100", (int *)&dword_140404A6C[v1 + 71856345], 5);
  sr_DrawMenuButtonSelectable("Withdrawl $1000", (int *)&dword_140404A6C[v1 + 71856345], 6);
  v2 = dword_140404A6C[v1 + 71856342];
  v3 = &g_18329CC24;
  if ( v2 == 12 )
    v3 = &dword_140404A6C[v1 + 71856345];
  v4 = 0;
  menu_y = menu_y + 32.0;
  if ( v2 == 12 )
    v4 = 16;
  v5 = "Done";
  if ( v2 == 12 )
    v5 = "Back";
  sr_DrawMenuButtonSelectable((unsigned __int8 *)v5, (int *)v3, v4);
  result = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    result = (int)result - 1;
    menu_item_width = dword_140404A6C[2 * (int)result + 70317963];
    menu_item_height = dword_140404A6C[2 * (int)result + 70317964];
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
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1115684864;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
    v2 = *(unsigned int *)&menu_y;
    v1 = *(unsigned int *)&menu_x;
  }
  v3 = 0;
  v4 = 3597LL * a1;
  menu_item_width = 1126170624;
  menu_item_height = 1103101952;
  g_150F6111C = v1;
  g_150F61120 = v2;
  *(unsigned int *)&menu_row_height = 0;
  menu_vertical = 0;
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
  if ( !menu_vertical )
  {
    *(unsigned int *)&menu_x = g_150F6111C;
    menu_y = menu_row_height + *(float *)&g_150F61120;
    if ( g_15104AA48 )
    {
      ++g_15104AE50;
      g_15104AE4C = 0;
    }
  }
  v5 = g_151042894;
  menu_vertical = 1;
  if ( (int)g_151042894 <= 0 )
  {
    v6 = menu_item_width;
  }
  else
  {
    v5 = g_151042894 - 1;
    g_151042894 = v5;
    v6 = dword_140404A6C[2 * v5 + 70317963];
    menu_item_width = v6;
    menu_item_height = dword_140404A6C[2 * v5 + 70317964];
  }
  v7 = 1107296256;
  v8 = 128.0;
  *(unsigned int *)&menu_x = 1107296256;
  *(unsigned int *)&menu_y = 1124073472;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = v6;
    dword_140404A6C[2 * g_151042894 + 70317964] = menu_item_height;
    v5 = ++g_151042894;
  }
  v9 = dword_140404A6C[v4 + 71856342];
  menu_item_width = 1132199936;
  menu_item_height = 1109393408;
  if ( v9 == 14 )
  {
    crt_sprintf(v24, "$%d", g_182A8BB74);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm", (int *)&dword_140404A6C[v4 + 71856345], 0);
    crt_sprintf(v24, "$%d", g_182A86C34);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5", (int *)&dword_140404A6C[v4 + 71856345], 1);
    crt_sprintf(v24, "$%d", g_182A7F554);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47", (int *)&dword_140404A6C[v4 + 71856345], 2);
    crt_sprintf(v24, "$%d", g_182A81CF4);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16", (int *)&dword_140404A6C[v4 + 71856345], 3);
    crt_sprintf(v24, "$%d", g_182A893D4);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Uzi", (int *)&dword_140404A6C[v4 + 71856345], 4);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = g_151042894;
  }
  if ( v9 == 15 )
  {
    crt_sprintf(v24, "$%d", g_182A8CF44);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("9mm Magazine", (int *)&dword_140404A6C[v4 + 71856345], 0);
    crt_sprintf(v24, "$%d", g_182A88004);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("MP5 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 1);
    crt_sprintf(v24, "$%d", g_182A80924);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("AK-47 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 2);
    crt_sprintf(v24, "$%d", g_182A830C4);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("M-16 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 3);
    crt_sprintf(v24, "$%d", g_182A8A7A4);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Uzi Magazine", (int *)&dword_140404A6C[v4 + 71856345], 4);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = g_151042894;
  }
  if ( v9 == 16 )
  {
    crt_sprintf(v24, "$%d", g_182A8F6E4);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Bandage", (int *)&dword_140404A6C[v4 + 71856345], 0);
    crt_sprintf(v24, "$%d", g_182A90AB4);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Briefcase", (int *)&dword_140404A6C[v4 + 71856345], 7);
    crt_sprintf(v24, "$%d", g_182A8E314);
    sub_1400764B0(
      v24,
      (float)(*(float *)&menu_item_width + menu_x) - 2.0,
      (float)(*(float *)&menu_item_height + menu_y) - 2.0,
      12.0,
      10);
    sr_DrawMenuButtonSelectable("Grenade", (int *)&dword_140404A6C[v4 + 71856345], 6);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = g_151042894;
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
        *(unsigned int *)&menu_x = v7;
        menu_y = v8;
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
          (float)(*(float *)&menu_item_width + menu_x) - 2.0,
          (float)(*(float *)&menu_item_height + menu_y) - 2.0,
          12.0,
          10);
        v15 = g_150F610FC;
        v16 = *(v11 - 17);
        if ( (int)*v11 > (int)dword_140404A6C[v4 + 71856272] )
          v15 = 1;
        g_150F610FC = v15;
        sr_DrawMenuButtonSelectable(v25, (int *)&dword_140404A6C[v4 + 71856345], v16);
        ++v10;
        v8 = v8 + 44.0;
        v11 += 18;
      }
      while ( v10 < (int)dword_140404A6C[v4 + 71857986] );
      v9 = dword_140404A6C[v4 + 71856342];
      v5 = g_151042894;
    }
  }
  if ( v9 == 18 )
  {
    *(unsigned int *)&menu_x = v7;
    menu_y = v8;
    sr_DrawMenuButtonSelectable("Buy 1 Share", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sr_DrawMenuButtonSelectable("Buy 10 Shares", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sr_DrawMenuButtonSelectable("Buy 100 Shares", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sr_DrawMenuButtonSelectable("Buy 1000 Shares", (int *)&dword_140404A6C[v4 + 71856345], 3);
    *(unsigned int *)&menu_x = 1140850688;
    *(unsigned int *)&menu_y = 1124073472;
    v7 = 1140850688;
    v8 = 128.0;
    sr_DrawMenuButtonSelectable("Sell 1 Share", (int *)&dword_140404A6C[v4 + 71856345], 4);
    sr_DrawMenuButtonSelectable("Sell 10 Shares", (int *)&dword_140404A6C[v4 + 71856345], 5);
    sr_DrawMenuButtonSelectable("Sell 100 Shares", (int *)&dword_140404A6C[v4 + 71856345], 6);
    sr_DrawMenuButtonSelectable("Sell 1000 Shares", (int *)&dword_140404A6C[v4 + 71856345], 7);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = g_151042894;
  }
  if ( v9 != 19 )
    goto LABEL_47;
  *(unsigned int *)&menu_x = v7;
  menu_y = v8;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894 + 70317964] = menu_item_height;
    v5 = ++g_151042894;
  }
  menu_item_height = 1102053376;
  menu_item_width = 1132199936;
  if ( (int)dword_140404A6C[v4 + 71857986] > 0 )
  {
    v17 = (int *)&dword_140404A6C[v4 + 71857987];
    do
    {
      if ( v3 == 10 )
      {
        *(unsigned int *)&menu_x = 1140850688;
        *(unsigned int *)&menu_y = 1124073472;
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
    v5 = g_151042894;
  }
  if ( v5 > 0 )
  {
    g_151042894 = --v5;
    menu_item_width = dword_140404A6C[2 * v5 + 70317963];
    menu_item_height = dword_140404A6C[2 * v5 + 70317964];
LABEL_47:
    if ( v5 > 0 )
    {
      g_151042894 = --v5;
      menu_item_width = dword_140404A6C[2 * v5 + 70317963];
      menu_item_height = dword_140404A6C[2 * v5 + 70317964];
    }
  }
  *(unsigned int *)&menu_y = 1138491392;
  *(unsigned int *)&menu_x = 1107296256;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1132199936;
  menu_item_height = 1109393408;
  sr_DrawMenuButtonSelectable("Done", (int *)&g_18329CC24, 0);
  v21 = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    menu_item_width = dword_140404A6C[2 * (v21 - 1) + 70317963];
    menu_item_height = dword_140404A6C[2 * (v21 - 1) + 70317964];
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
  v3 = g_151042894;
  *(unsigned int *)&menu_row_height = 0;
  *(unsigned int *)&menu_x = 1098907648;
  *(unsigned int *)&menu_y = 1115684864;
  g_150F6111C = 1098907648;
  g_150F61120 = 1115684864;
  menu_vertical = 0;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894 + 70317964] = menu_item_height;
    v3 = ++g_151042894;
  }
  v4 = 1126170624;
  v5 = 0;
  v6 = 3597 * v2;
  menu_item_width = 1126170624;
  menu_item_height = 1103101952;
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
    v3 = g_151042894;
    v4 = menu_item_width;
  }
  if ( v3 > 0 )
  {
    g_151042894 = --v3;
    v4 = dword_140404A6C[2 * v3 + 70317963];
    menu_item_width = v4;
    menu_item_height = dword_140404A6C[2 * v3 + 70317964];
  }
  if ( !menu_vertical && g_15104AA48 )
  {
    ++g_15104AE50;
    g_15104AE4C = 0;
  }
  *(unsigned int *)&menu_x = 1098907648;
  menu_vertical = 1;
  *(unsigned int *)&menu_y = 1124073472;
  if ( v3 < 16 )
  {
    dword_140404A6C[2 * v3 + 70317963] = v4;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  v13 = 0;
  menu_item_width = 1132199936;
  menu_item_height = 1108344832;
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
        v19 = g_150F610FC;
        if ( (v15 & 0x100) != 0 )
          v19 = 1;
        g_150F610FC = v19;
        sr_DrawMenuButtonSelectable(v23, (int *)&dword_140404A6C[v6 + 71856345], v15);
        if ( (v1 & 7) == 7 )
        {
          *(unsigned int *)&menu_y = 1124073472;
          menu_x = menu_x + 284.0;
        }
        ++v1;
      }
      ++v13;
      v14 += 18;
    }
    while ( v13 < (int)dword_140404A6C[v6 + 71857986] );
  }
  *(unsigned int *)&menu_y = 1139802112;
  *(unsigned int *)&menu_x = 1098907648;
  sr_DrawMenuButtonSelectable("Done", (int *)&g_18329CC24, 0);
  v20 = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    menu_item_width = dword_140404A6C[2 * (v20 - 1) + 70317963];
    menu_item_height = dword_140404A6C[2 * (v20 - 1) + 70317964];
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
      *(unsigned int *)&menu_x = 1082130432;
      *(unsigned int *)&menu_y = 1115684864;
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
              (float)(*(float *)&menu_item_width + menu_x) - 2.0,
              (float)(*(float *)&menu_item_height + menu_y) - 2.0,
              12.0,
              10);
            v14 = g_150F610FC;
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[14019 * v4 + 225654130 + 3 * v7] )
              v14 = 1;
            v15 = (int *)&dword_140404A6C[v1 + 71856345];
            g_150F610FC = v14;
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
            (float)(*(float *)&menu_item_width + menu_x) - 2.0,
            (float)(*(float *)&menu_item_height + menu_y) - 2.0,
            12.0,
            10);
          v20 = g_150F610FC;
          if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[v19 + 225654130] )
            v20 = 1;
          g_150F610FC = v20;
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
                g_150F610FC = 1;
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
              (float)(*(float *)&menu_item_width + menu_x) - 2.0,
              (float)(*(float *)&menu_item_height + menu_y) - 2.0,
              12.0,
              10);
            v24 = g_150F610FC;
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[14019 * v4 + 225654130 + 3 * v7] )
              v24 = 1;
            v22 = &dword_140404A6C[v1 + 71856345];
            g_150F610FC = v24;
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
              (float)(*(float *)&menu_item_width + menu_x) - 2.0,
              (float)(*(float *)&menu_item_height + menu_y) - 2.0,
              12.0,
              10);
            v27 = g_150F610FC;
            if ( (int)dword_140404A6C[v1 + 71856272] < (int)dword_140404A6C[v26 + 225654130] )
              v27 = 1;
            g_150F610FC = v27;
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
      v28 = (int *)&g_18329CC24;
      if ( dword_140404A6C[v5 + 225641203] == 3 )
      {
        v28 = (int *)v22;
        v3 = 16;
      }
      v29 = "Done";
      if ( dword_140404A6C[v5 + 225641203] == 3 )
        v29 = "Back";
      menu_y = menu_y + 28.0;
      sr_DrawMenuButtonSelectable((unsigned __int8 *)v29, v28, v3);
      v30 = g_151042894;
      if ( (int)g_151042894 > 0 )
      {
        --g_151042894;
        menu_item_width = dword_140404A6C[2 * (v30 - 1) + 70317963];
        menu_item_height = dword_140404A6C[2 * (v30 - 1) + 70317964];
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

  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1124073472;
  if ( (int)g_151042894 < 16 )
  {
    dword_140404A6C[2 * g_151042894 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1132199936;
  menu_item_height = 1107296256;
  v1 = (int *)&dword_140404A6C[3597 * a1 + 71856345];
  sr_DrawMenuButtonSelectable("Buy", v1, 1);
  sr_DrawMenuButtonSelectable("Sell", v1, 2);
  menu_y = menu_y + 32.0;
  sr_DrawMenuButtonSelectable("Done", (int *)&g_18329CC24, 0);
  result = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    result = (int)result - 1;
    menu_item_width = dword_140404A6C[2 * (int)result + 70317963];
    menu_item_height = dword_140404A6C[2 * (int)result + 70317964];
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
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1124073472;
  sub_1400755F0(252.0, 32.0);
  v3 = 14019 * v2;
  v4 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 * 4 + 291638736);
  v5 = dword_140404A6C[v3 + 225641203];
  if ( v5 == 3 )
  {
    sr_DrawMenuButtonSelectable("Sell Car", v4, 1);
    v5 = dword_140404A6C[v3 + 225641203];
    menu_y = menu_y + 32.0;
    if ( v5 == 3 )
      goto LABEL_8;
  }
  else
  {
    menu_y = menu_y + 32.0;
  }
  v4 = (int *)&g_18329CC24;
LABEL_8:
  v6 = 0;
  if ( v5 == 3 )
    v6 = 16;
  v7 = "Done";
  if ( v5 == 3 )
    v7 = "Back";
  sr_DrawMenuButtonSelectable((unsigned __int8 *)v7, v4, v6);
  v8 = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    v9 = v8 - 1;
    menu_item_width = dword_140404A6C[2 * v9 + 70317963];
    menu_item_height = dword_140404A6C[2 * v9 + 70317964];
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
    v6 = g_151042894;
    goto LABEL_22;
  }
  g_150F6111C = *(unsigned int *)&menu_x;
  *(unsigned int *)&menu_row_height = 0;
  g_150F61120 = *(unsigned int *)&menu_y;
  menu_vertical = 0;
  sub_1400755F0(248.0, 32.0);
  v2 = 0;
  *(unsigned int *)&menu_x = 1082130432;
  *(unsigned int *)&menu_y = 1119879168;
  v3 = 3597 * v1;
  do
  {
    if ( dword_140404A6C[v3 + 71856286] != 17 )
      goto LABEL_12;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        g_150F610F4 = 31;
        v4 = 2;
        v5 = "Join Monsota";
      }
      else
      {
        if ( game_type == 7 )
          goto LABEL_12;
        g_150F610F4 = v2 + 30;
        v4 = v2 + 1;
        v5 = "Join OXS";
      }
    }
    else
    {
      g_150F610F4 = 30;
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
    *(unsigned int *)&menu_x = 1144717312;
    g_150F610F4 = 33;
    sr_DrawMenuButtonSelectable("Observer", (int *)&dword_140404A6C[v3 + 71856345], 4);
  }
  v6 = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    v6 = g_151042894 - 1;
    g_151042894 = v6;
    menu_item_width = dword_140404A6C[2 * v6 + 70317963];
    menu_item_height = dword_140404A6C[2 * v6 + 70317964];
  }
  if ( !menu_vertical && g_15104AA48 )
  {
    ++g_15104AE50;
    g_15104AE4C = 0;
  }
  menu_vertical = 1;
LABEL_22:
  *(unsigned int *)&menu_x = 1146028032;
  *(unsigned int *)&menu_y = 1107296256;
  if ( v6 < 16 )
  {
    dword_140404A6C[2 * v6 + 70317963] = menu_item_width;
    dword_140404A6C[2 * g_151042894++ + 70317964] = menu_item_height;
  }
  menu_item_width = 1128267776;
  menu_item_height = 1107296256;
  g_150F610F4 = 21;
  sr_DrawMenuButtonSelectable("Ready", (int *)&dword_140404A6C[3597 * v1 + 71856345], 5);
  result = g_151042894;
  if ( (int)g_151042894 > 0 )
  {
    --g_151042894;
    result = (int)result - 1;
    menu_item_width = dword_140404A6C[2 * (int)result + 70317963];
    menu_item_height = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

