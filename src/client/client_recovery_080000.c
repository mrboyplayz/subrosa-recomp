#include "shared_client.h"
#include "../engine/disk.h"

//----- (00000001400802F0) ----------------------------------------------------
void            sub_1400802F0(int a1)
{
  __int64 v2;
  int v3;
  unsigned int *v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = 3597LL * a1;
  if ( !dword_140404A6C[v2 + 71859139] )
  {
    sub_1400F3B30(a1);
    sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    if ( (unsigned int)a1 <= 0xFF )
      sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    v3 = 0;
    v4 = &g_183EBFDC4;
    do
    {
      if ( *v4 == a1 )
      {
        if ( game_type == 4 )
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

//----- (00000001400805E0) ----------------------------------------------------
__int64            sub_1400805E0(int a1)
{
  __int64 v1;
  __int64 result;

  v1 = a1;
  result = closesocket_sr((int)dword_140404A6C[v1 + 289301078]);
  dword_140404A6C[v1 + 289301070] = 0;
  return result;
}

//----- (0000000140080690) ----------------------------------------------------
__int64            sub_140080690(int a1, unsigned int a2, char *a3, unsigned int a4)
{
  return disk_add_file(a1, a2, a3, a4);
}

//----- (0000000140080720) ----------------------------------------------------
__int64            sub_140080720(int a1, int a2, __int64 a3)
{
  unsigned int v3;
  __int64 v4;
  int v7;
  unsigned int *i;
  unsigned int *v9;
  __int64 v10;
  int v11;
  int v12;

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

//----- (0000000140080820) ----------------------------------------------------
__int64            sub_140080820(int a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  unsigned int *i;
  unsigned int *v9;
  __int64 v10;
  int v11;
  int v12;

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

//----- (00000001400808E0) ----------------------------------------------------
__int64 sub_1400808E0()
{
  int v0;
  unsigned int *v1;
  unsigned int *v2;
  unsigned int v3;
  unsigned int *v4;
  int i;
  __m128i v6;
  int v7;
  unsigned int *v8;
  __m128i v9;
  unsigned int v10;
  int v11;
  unsigned int *v12;
  __m128i v13;
  __m128i v14;
  char *v15;
  __int64 v16;
  __m128i v17;
  int v18;
  unsigned int *v19;
  int v20;
  unsigned int *v21;
  unsigned int *v22;
  __m128i v23;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400808E0[224];
#define v25 (*(__int64 (*))(void *)(sr_frame_1400808E0 + 0)) /* [rsp+0h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400808E0 + 32)) /* [rsp+20h] */
#define v27 (*(int (*))(void *)(sr_frame_1400808E0 + 40)) /* [rsp+28h] */
#define v28 (*(int (*))(void *)(sr_frame_1400808E0 + 48)) /* [rsp+30h] */
#define v29 (*(int (*))(void *)(sr_frame_1400808E0 + 56)) /* [rsp+38h] */
#define v30 (*(int (*))(void *)(sr_frame_1400808E0 + 64)) /* [rsp+40h] */
#define v31 (*(double (*))(void *)(sr_frame_1400808E0 + 72)) /* [rsp+48h] */
#define v32 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 80)) /* [rsp+50h] */
#define v33 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 88)) /* [rsp+58h] */
#define v34 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 96)) /* [rsp+60h] */
#define v35 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 104)) /* [rsp+68h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 112)) /* [rsp+70h] */
#define v37 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 120)) /* [rsp+78h] */
#define v38 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 128)) /* [rsp+80h] */
#define v39 (*(char (*)[64])(void *)(sr_frame_1400808E0 + 144)) /* [rsp+90h] */
#define v40 (*(__int64 (*))(void *)(sr_frame_1400808E0 + 208)) /* [rsp+D0h] */

  renderer_current_font = 2;
  v0 = 0;
  v1 = &g_151623978;
  g_16B27E19C = 0;
  v2 = &g_151623978;
  do
  {
    if ( *(v2 - 2886) && !*v2 )
      g_16B27E19C = ++v0;
    if ( v2[711] && !v2[3597] )
      g_16B27E19C = ++v0;
    if ( v2[4308] && !v2[7194] )
      g_16B27E19C = ++v0;
    if ( v2[7905] && !v2[10791] )
      g_16B27E19C = ++v0;
    v2 += 14388;
  }
  while ( (__int64)v2 < (__int64)&g_1519A6D78 );
  v3 = g_16B165F64;
  if ( (int)g_16B165F64 > 0 )
  {
    crt_sprintf(v39, "%.2f", g_16B27E090);
    sr_text_draw_recovered(v39, 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43FA0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080A37 */;
    crt_sprintf(v39, "%.2f", *(unsigned int *)&frame_duration_average);
    sr_text_draw_recovered(v39, 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44010000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080AA1 */;
    v38 = g_16B27ECE0;
    v37 = g_16B27ECDC;
    v36 = g_16B27ECD8;
    v35 = g_16B27ECD4;
    v34 = g_16B27ECD0;
    v33 = g_16B27ECCC;
    v32 = g_16B27ECC8;
    sr_text_draw_recovered("Toggle:/i /i /i /i /i /i /i /i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44050000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B27ECFC, g_16B27ECC8, g_16B27ECCC, g_16B27ECD0, g_16B27ECD4, g_16B27ECD8, g_16B27ECDC, g_16B27ECE0}) /* 0x140080B39 */;
    LODWORD(v31) = g_183E93528;
    v30 = 1065353216;
    v29 = 1065353216;
    v28 = 1065353216;
    v27 = 1065353216;
    v26 = 0;
    sr_text_draw_recovered("Cheat:/i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_183E93528}) /* 0x140080B88 */;
    v4 = &g_189C1DC80;
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
      sr_text_draw_recovered("V:/i", 1020.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v6))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080C02 */;
      v4 += 96401;
    }
    v3 = g_16B165F64;
  }
  if ( v3 == 1 )
  {
    v7 = 0;
    if ( (int)g_16B27EDC4 <= 0 )
      goto LABEL_54;
    v8 = &g_16B27EDC8;
    do
    {
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v9 = _mm_castps_si128(_mm_set_ss((float)v7));
      v27 = 1065353216;
      *(float *)SR_VEC_LANES(128, v9, i32) = (float)(*(float *)SR_VEC_LANES(128, v9, i32) * 16.0) + 32.0;
      LODWORD(v26) = 32;
      sr_text_draw_recovered((char *)&dword_140404A6C[35 * v7 + 179955930], 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080CC8 */;
      v10 = *v8;
      if ( !*v8 )
      {
        LODWORD(v31) = v8[1];
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/i", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080D1A */;
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
        sr_text_draw_recovered("/f", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080D74 */;
      }
      ++v7;
      v8 += 35;
    }
    while ( v7 < (int)g_16B27EDC4 );
    v3 = g_16B165F64;
  }
  if ( v3 == 2 )
  {
    v11 = 0;
    v12 = &g_16B27E1A0;
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
      sr_text_draw_recovered("/i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v13))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080E01 */;
      ++v11;
      ++v12;
    }
    while ( v11 < 16 );
    v14 = _mm_cvtsi32_si128((int)(0x42800000u));
    v15 = (char *)&g_151620C64;
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
        sr_text_draw_recovered(v15, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v14))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080E75 */;
        *(float *)SR_VEC_LANES(128, v14, i32) = *(float *)SR_VEC_LANES(128, v14, i32) + 16.0;
      }
      v15 += 14388;
      v1 += 3597;
      --v16;
    }
    while ( v16 );
    v3 = g_16B165F64;
  }
  if ( v3 - 3 <= 1 )
  {
    v17 = _mm_cvtsi32_si128((int)(0x43000000u));
    if ( v3 == 3 )
    {
      v18 = 64;
      if ( (int)g_16B097E04 <= 64 )
        goto LABEL_54;
      v19 = &g_16B161D94;
      do
      {
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered((char *)&dword_140404A6C[22 * v18 + 179662645], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080F43 */;
        LODWORD(v31) = *(v19 - 1);
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/u", 164.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080F8F */;
        LODWORD(v31) = *v19;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/u", 324.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080FDA */;
        v20 = g_16B097E04;
        *(float *)SR_VEC_LANES(128, v17, i32) = *(float *)SR_VEC_LANES(128, v17, i32) + 16.0;
        ++v18;
        v19 += 22;
      }
      while ( v18 < (int)g_16B097E04 );
      v3 = g_16B165F64;
    }
    else
    {
      v20 = g_16B097E04;
    }
    if ( v3 == 4 )
    {
      if ( v20 >= (int)g_16B097E00 )
        goto LABEL_54;
      v21 = &dword_140404A6C[22 * v20 + 179662666];
      do
      {
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered((char *)&dword_140404A6C[22 * v20 + 179662645], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081073 */;
        LODWORD(v31) = *(v21 - 1);
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/u", 164.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400810BF */;
        LODWORD(v31) = *v21;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/u", 324.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008110A */;
        ++v20;
        *(float *)SR_VEC_LANES(128, v17, i32) = *(float *)SR_VEC_LANES(128, v17, i32) + 16.0;
        v21 += 22;
      }
      while ( v20 < (int)g_16B097E00 );
      v3 = g_16B165F64;
    }
  }
  if ( v3 == 5 )
  {
    v22 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u)));
    if ( game_connected )
    {
      LODWORD(v31) = item_link_peer_count;
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v27 = 1065353216;
      v26 = 0;
      sr_text_draw_recovered("Numofconnections:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v22)), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){item_link_peer_count}) /* 0x140081190 */;
      v23 = _mm_cvtsi32_si128((int)(0x43340000u));
    }
    else
    {
      sr_text_draw_recovered("Roundnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v22)), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){game_unknown_183ebfcc8}) /* 0x1400811D1 */;
      LODWORD(v31) = game_unknown_1a4d2dce4;
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v27 = 1065353216;
      v26 = 0;
      sr_text_draw_recovered("ClientRoundnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43340000u))))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){game_unknown_1a4d2dce4}) /* 0x140081221 */;
      v23 = _mm_cvtsi32_si128((int)(0x43480000u));
    }
    sr_text_draw_recovered("Packetsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1AD04ADCC}) /* 0x140081276 */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("MaxPacketsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1AD04ADD0}) /* 0x1400812C7 */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("Numofevents:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){world_event_count}) /* 0x140081318 */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("objpacketsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B27E3A0}) /* 0x140081369 */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("conn0bytes:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1A8E3DA3C}) /* 0x1400813BA */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("players:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_16B27E19C}) /* 0x14008140B */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    LODWORD(v31) = local_player;
    v30 = 1065353216;
    v29 = 1065353216;
    v28 = 1065353216;
    v27 = 1065353216;
    v26 = 0;
    sr_text_draw_recovered("playernum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){local_player}) /* 0x14008145C */;
  }
LABEL_54:
  renderer_current_font = 0;
  return 0; /* the function has no caller */
}
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40

//----- (00000001400814D0) ----------------------------------------------------
__int64            sub_1400814D0(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  char *v4;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400814D0[1120];
#define v6 (*(__int64 (*))(void *)(sr_frame_1400814D0 + 0)) /* [rsp+0h] */
#define v7 (*(__int64 (*))(void *)(sr_frame_1400814D0 + 32)) /* [rsp+20h] */
#define v8 (*(int (*))(void *)(sr_frame_1400814D0 + 40)) /* [rsp+28h] */
#define v9 (*(int (*))(void *)(sr_frame_1400814D0 + 48)) /* [rsp+30h] */
#define v10 (*(int (*))(void *)(sr_frame_1400814D0 + 56)) /* [rsp+38h] */
#define v11 (*(int (*))(void *)(sr_frame_1400814D0 + 64)) /* [rsp+40h] */
#define v12 (*(unsigned int (*))(void *)(sr_frame_1400814D0 + 72)) /* [rsp+48h] */
#define v13 (*(char (*)[1024])(void *)(sr_frame_1400814D0 + 80)) /* [rsp+50h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1400814D0 + 1104)) /* [rsp+450h] */

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
      sr_text_draw_recovered((char *)&dword_140404A6C[v3 + 71856254], 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42400000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081599 */;
      crt_sprintf(v13, "%03d-%04d", dword_140404A6C[v3 + 71856265] / 0x2710, dword_140404A6C[v3 + 71856265] % 0x2710);
      v11 = 1065353216;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sr_text_draw_recovered(v13, 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008160F */;
      v12 = dword_140404A6C[v3 + 71856275];
      v11 = 1065353216;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sr_text_draw_recovered("Corporate rating: /i", 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A00000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081663 */;
      if ( (unsigned int)v2 <= 5 )
      {
        v4 = off_1402B2890[v2];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_text_draw_recovered(v4, 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42E00000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400816B5 */;
        v12 = dword_140404A6C[v3 + 71856273];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_text_draw_recovered("$/I", 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081709 */;
        v12 = dword_140404A6C[v3 + 71856274];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_text_draw_recovered("Budget: $/I", 680.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081761 */;
      }
    }
    return 0; /* the function has no caller */
  }
  return result;
}
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14

//----- (0000000140081B60) ----------------------------------------------------
void            sub_140081B60(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int128 v5;
  unsigned int *v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = 32901LL * a1;
  if ( !dword_140404A6C[v1 + 299853693] || g_183EBFAA4 == 3 )
  {
    glBindTexture(3553, renderer_white_texture);
    v4 = 0;
    g_1AD059440 = 2;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    if ( dword_140404A6C[v1 + 299853693] )
      v5 = xmmword_140279690;
    else
      v5 = xmmword_140279700;
    g_1AD299450 = v5;
    v6 = &g_189BFFC70;
    {
      /* 0x140081BF4..0x140081C88: x = i + 16 (768 when g_183EBFAA4 == 3), y = sample / 256 + 64
         (288), z = 0; the samples are shorts 16 bytes apart (0x140081C44 reads the one before rdi, 0x140081C65
         the one at rdi). The C had lost all three arguments of both calls. */
      float sr_x0 = 16.0f, sr_y0 = 64.0f;
      if ( g_183EBFAA4 == 3 )
      {
        sr_x0 = 768.0f;
        sr_y0 = 288.0f;
      }
      do
      {
        sub_14007D420((float)v4 + sr_x0, (float)*((__int16 *)v6 - 8) * 0.00390625f + sr_y0, 0.0f);
        ++v4;
        sub_14007D420((float)v4 + sr_x0, (float)*(__int16 *)v6 * 0.00390625f + sr_y0, 0.0f);
        v6 += 4;
      }
      while ( v4 < 239 );
    }
    sub_14006E0D0(v10, v2, v3);
  }
}

//----- (0000000140081CC0) ----------------------------------------------------
__m128            sub_140081CC0(__int64 a1, float *a2, float a3, float a4, float a5)
{
  __int128 v5;
  float v6;
  float v7;
  float v9;
  float v10;
  float v11;
  float v12;

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

//----- (0000000140084950) ----------------------------------------------------
void sub_140084950()
{
  if ( !g_189F0EEA4 )
  {
    sr_CSDrawText("Place Building", 512.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))), 24.0);
    sr_text_draw_recovered((char *)&dword_140404A6C[22 * g_189F0EF4C + 225368653], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084A4B */;
    if ( g_189F0EF44 != -1 )
    {
      sr_text_draw_recovered((char *)&dword_140404A6C[24 * g_189F0EF44 + 225171851], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43DC0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084AAC */;
      sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43E40000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084B0F */;
    }
  }
  if ( g_189F0EEA4 == 1 )
  {
    sr_text_draw_recovered("Select Area", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084B61 */;
    sr_text_draw_recovered("sectors:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1726DA088}) /* 0x140084BAD */;
    sr_text_draw_recovered("type:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF60}) /* 0x140084BFD */;
    sr_text_draw_recovered("x:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43800000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF10}) /* 0x140084C4D */;
    sr_text_draw_recovered("y:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF14}) /* 0x140084C9D */;
    sr_text_draw_recovered("z:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43900000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF18}) /* 0x140084CED */;
  }
  if ( g_189F0EEA4 == 2 )
  {
    sr_text_draw_recovered("Street", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084D3F */;
    sr_text_draw_recovered("intersectionnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF54}) /* 0x140084D8B */;
    sr_text_draw_recovered("streetnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_189F0EF5C}) /* 0x140084DDB */;
  }
  if ( g_189F0EEA4 == 3 )
  {
    sr_text_draw_recovered("Mission", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084E2D */;
    sr_text_draw_recovered("numofguards:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1B4277C40}) /* 0x140084E79 */;
  }
}

//----- (0000000140084EB0) ----------------------------------------------------
__int64 sub_140084EB0()
{
  unsigned int v0;
  __m128i v1;
  char *v2;
  char *v3;
  unsigned int *v4;
  signed int v5;
  signed int v6;
  signed int v7;
  unsigned int *v8;
  char *v9;
  bool v10;
  char *v11;
  char *v12;
  unsigned int *v13;
  signed int v14;
  signed int v15;
  signed int v16;
  unsigned int *v17;
  char *v18;
  char *v19;
  char *v20;
  signed int v21;
  signed int v22;
  signed int v23;
  unsigned int *v24;
  char *v25;
  char *v26;
  unsigned int v27;
  unsigned int *v28;
  int v29;
  unsigned int *v30;
  int i;
  __int64 v32;
  int v33;
  float v34;
  __int64 v35;
  __m128i v36;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140084EB0[1136];
#define v38 (*(_BYTE (*)[32])(void *)(sr_frame_140084EB0 + 0)) /* [rsp+0h] */
#define v39 (*(int (*))(void *)(sr_frame_140084EB0 + 32)) /* [rsp+20h] */
#define v40 (*(float (*))(void *)(sr_frame_140084EB0 + 40)) /* [rsp+28h] */
#define v41 (*(float (*))(void *)(sr_frame_140084EB0 + 48)) /* [rsp+30h] */
#define v42 (*(int (*))(void *)(sr_frame_140084EB0 + 56)) /* [rsp+38h] */
#define v43 (*(int (*))(void *)(sr_frame_140084EB0 + 64)) /* [rsp+40h] */
#define v44 (*(int (*))(void *)(sr_frame_140084EB0 + 72)) /* [rsp+48h] */
#define v45 (*(int (*))(void *)(sr_frame_140084EB0 + 80)) /* [rsp+50h] */
#define v46 (*(char (*)[1024])(void *)(sr_frame_140084EB0 + 96)) /* [rsp+60h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_140084EB0 + 1120)) /* [rsp+460h] */

  v0 = game_state;
  v1 = _mm_cvtsi32_si128((int)(0x43000000u));
  if ( game_state == 3 )
  {
    if ( (int)g_183EBFDB0 <= 0 )
    {
      v2 = "Eliminator Wins!";
      if ( g_183F7A320 != 1 )
        v2 = "Eliminators Wins!";
    }
    else
    {
      v2 = "Humans Win!";
    }
    v40 = 1.0;
    v39 = 32;
    sr_text_draw_recovered(v2, 256.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 32.0, 32u, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084FE7 */;
    v43 = 1065353216;
    v3 = "The Eliminator";
    v42 = 1065353216;
    v41 = 0.75;
    v4 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u)));
    if ( g_183F7A320 != 1 )
      v3 = "The Eliminators";
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v3, 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v4)), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085040 */;
    v5 = g_183F7A320;
    v46[0] = 0;
    v6 = 0;
    if ( (int)g_183F7A320 > 0 )
    {
      v7 = g_183F7A320 - 1;
      v8 = &g_183F7A328;
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
    sr_text_draw_recovered(v46, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43140000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085131 */;
    v43 = 1065353216;
    v12 = "The Savior";
    v42 = 1065353216;
    v41 = 0.75;
    v13 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x433C0000u)));
    if ( g_183F7A320 != 1 )
      v12 = "The Saviors";
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v12, 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v13)), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008518A */;
    v14 = g_183F7A320;
    v15 = 0;
    v46[0] = 0;
    if ( (int)g_183F7A320 > 0 )
    {
      v16 = g_183F7A320 - 1;
      v17 = &g_183F7A324;
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
    sr_text_draw_recovered(v46, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43500000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008526D */;
    v20 = "The Protector";
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    if ( g_183F7A320 != 1 )
      v20 = "The Protectors";
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v20, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43780000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400852CA */;
    v21 = g_183F7A320;
    v22 = 0;
    v46[0] = 0;
    if ( (int)g_183F7A320 > 0 )
    {
      v23 = g_183F7A320 - 1;
      v24 = &g_183F7A32C;
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
    sr_text_draw_recovered(v46, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43860000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400853B1 */;
    v0 = game_state;
  }
  if ( v0 == 1 )
  {
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    renderer_current_font = 2;
    v39 = 32;
    sr_text_draw_recovered("THE ELIMINATOR", 256.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 32.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085416 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("It is the present, the year 1985.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008545D */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("A robot from the year 2019 has been sent back in time", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400854A8 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("to eliminate the future resistance leader.  The future people", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400854F3 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("also sent someone back to stop the robot.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42F80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008553E */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("The Eliminator", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43240000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085592 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("You must kill the future resistance leader.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x433C0000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400855D9 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("A red box will appear in the HUD showing their last known location.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43500000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085620 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("The Protector", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43780000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008566B */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("You must stop The Eliminator, the only way to destroy it is with grenades.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400856B6 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("Civilian//The Savior", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439C0000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085701 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("Your goal is to survive, one of you is the future savior of mankind.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43A80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008574C */;
    v27 = 0;
    v28 = &g_151623978;
    g_192E8EC40 = 0;
    v29 = 0;
    v30 = &g_192E8EC44;
    do
    {
      if ( *(v28 - 2886) && !*v28 )
      {
        dword_140404A6C[2 * v27 + 346695798] = v29;
        v27 = ++g_192E8EC40;
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
    sr_text_draw_recovered("The Players", 776.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42C40000u))))), 17.5, 96u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400857F9 */;
    for ( i = 0; i < (int)g_192E8EC40; v30 += 2 )
    {
      v32 = *v30;
      if ( (unsigned int)v32 > 0xFF )
        v32 = 0;
      if ( game_state != 2 && (_DWORD)v32 != local_player )
      {
        v45 = 1065353216;
        v44 = 1065353216;
        v43 = 1065353216;
        v42 = 1065353216;
        v41 = 0.0;
        v40 = 24.0;
        v39 = 1103101952;
        if ( dword_140404A6C[v32 + 284023074] )
          v33 = g_192E8F44C;
        else
          v33 = dword_140404A6C[3597 * (unsigned int)v32 + 71856270]
              ? g_192E8F448
              : g_192E8F444;
        sr_CSDrawAtlasEntry(0, v33, 752.0, *(float *)SR_VEC_LANES(128, v1, i32), *(float *)&v39, v40, SLOBYTE(v41), v42, v43, v44, v45);
        if ( g_183F7C750 )
        {
          if ( !g_192E8F450
            && g_183F7C6C0 >= 752.0
            && g_183F7C6C0 < 776.0
            && g_183F7C6C4 >= *(float *)SR_VEC_LANES(128, v1, i32)
            && g_183F7C6C4 < (float)(*(float *)SR_VEC_LANES(128, v1, i32) + 24.0) )
          {
            dword_140404A6C[v32 + 284023074] ^= 1u;
          }
        }
      }
      v34 = 1.0;
      if ( game_state == 1 && !dword_140404A6C[3597 * (unsigned int)v32 + 71856271] )
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
      crt_sprintf(
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
  renderer_current_font = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

//----- (0000000140088C00) ----------------------------------------------------
void sub_140088C00()
{
  __int64 v0;
  __m128i v1;
  unsigned int *v2;
  unsigned int *v3;
  char *v4;
  __int64 v5;
  int v6;

  sr_text_draw_recovered("Spectating", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44000000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088C8D */;
  if ( g_183F79DE4 != -1 )
  {
    v0 = (int)dword_140404A6C[7166 * g_183F79DE4 + 280651305];
    if ( (_DWORD)v0 != -1 )
      sr_CSDrawText(
        (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 14388 * v0 + 291638372),
        512.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44040000u))),
        20.0);
  }
  sr_text_draw_recovered("Press Space to switch player", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088D9C */;
  sr_text_draw_recovered("Press 1 for freecam", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440D0000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088DE6 */;
  v1 = _mm_cvtsi32_si128((int)(0x42800000u));
  v2 = &g_183F7AEF4;
  v3 = &g_151623978;
  v4 = (char *)&g_151620C64;
  v5 = 256;
  do
  {
    if ( *(v3 - 2886) && !*v3 && *(v3 - 2847) == -1 )
    {
      sr_CSDrawText(v4, 772.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v1), 20.0);
      if ( *v2 )
      {
        v6 = g_192E8F44C;
      }
      else if ( *(v3 - 2869) )
      {
        v6 = g_192E8F448;
      }
      else
      {
        v6 = g_192E8F444;
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

//----- (0000000140088F80) ----------------------------------------------------
double sub_140088F80()
{
  __m128i si128;
       __m128i *v1;
  __m128i v2;
  __m128i v3;
  __m128i v4;
  __m128i v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  double result;

  sr_CSDrawText("Ping:", 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))), 16.0);
  sr_text_draw_recovered("/i", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){g_1A6F9E138}) /* 0x14008903F */;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279150);
  v1 = (     __m128i *)&g_1A6F9E154;
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
  while ( (__int64)v1 < (__int64)&g_1A6F9E554 );
  v8 = _mm_add_epi32(v4, v3);
  sr_text_draw_recovered("Packetloss:", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008912C */;
  sr_text_draw_recovered("/i%", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140089183 */;
  *(_QWORD *)&result = SR_VEC_READ_LANES(128, _mm_srli_si128(_mm_add_epi32(v8, _mm_srli_si128(v8, 8)), 4), u64)[0];
  return result;
}

//----- (0000000140089430) ----------------------------------------------------
void sub_140089430()
{
  __int64 v0;
  int v1;
  __int64 v2;
  __m128i v3;
  __m128i v4;
  float v5;
  float v6;
  int v7;
  float v8;
  int v9;
  float v10;
  unsigned int *v11;
  char *v12;
  float v13;
  int v14;
  unsigned int *v15;
  __m128i v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  __m128i si128;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  unsigned int *v40;
  _DWORD *v41;
  __int64 v42;
  int v43;
  int v44;
  unsigned int *v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  int v49;

  glBindTexture(3553, renderer_white_texture);
  sub_14006CFF0(sr_export_float_lane_container(0x40000000), sr_export_float_lane_container(1123811328), 0x447F0000 /* native XMM2 width 1020.0f */, 480.0, 0, 0, 0, 0, 1056964608);
  if ( game_type == 3 )
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
        if ( game_state == 3 && (v7 = dword_140404A6C[6 * v2 + 335047065]) != 0 )
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
      if ( !game_state )
        sr_text_draw_recovered("/i.", v13, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4))), 24.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008982D */;
      v14 = 0;
      v15 = &g_151623978;
      g_192E8EC40 = 0;
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
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = v19;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v18 + 335047064] * 0.1)
                                                                                                 * (float)(int)*(v15 - 2851))
                                                                                         + (float)v19);
              v14 = ++g_192E8EC40;
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
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = v21;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v20 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[746])
                                                                                         + (float)v21);
              v14 = ++g_192E8EC40;
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
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = v23;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v22 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[4343])
                                                                                         + (float)v23);
              v14 = ++g_192E8EC40;
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
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = v25;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v24 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[7940])
                                                                                         + (float)v25);
              v14 = ++g_192E8EC40;
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
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = v27;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v26 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[11537])
                                                                                         + (float)v27);
              v14 = ++g_192E8EC40;
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
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = v29;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v28 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[15134])
                                                                                         + (float)v29);
              v14 = ++g_192E8EC40;
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
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = v31;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v30 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[18731])
                                                                                         + (float)v31);
              v14 = ++g_192E8EC40;
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
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = v33;
              else
                dword_140404A6C[2 * g_192E8EC40 + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v32 + 335047064] * 0.1)
                                                                                                 * (float)(int)v15[22328])
                                                                                         + (float)v33);
              v14 = ++g_192E8EC40;
            }
          }
        }
        v17 += 8;
        v15 += 28776;
      }
      while ( (int)(v17 - 2) < 256 );
      renderer_sort_count = v14;
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
          *(__m128i_u *)&dword_140404A6C[v35 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695805]))));
          *(__m128i_u *)&dword_140404A6C[v35 + 437192786] = _mm_sub_epi32(
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
        v45 = &g_1A85C6BA4;
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
          sr_text_draw_recovered("$/I", v13 + 240.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16))), 24.0, 34u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A01C */;
          ++v44;
          *(float *)SR_VEC_LANES(128, v16, i32) = *(float *)SR_VEC_LANES(128, v16, i32) + 24.0;
          ++v45;
        }
        while ( v44 < (int)g_192E8EC40 );
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

//----- (000000014008A110) ----------------------------------------------------
__int64 sub_14008A110()
{
  unsigned int v0;
  char *v1;
  int v2;
  int v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  bool v9;
  __m128i v10;
  int v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  char *v17;
  int v18;
  float v19;
       char *v20;
  __m128i v21;
  int v22;
  unsigned int v23;
  unsigned int *v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  __m128i si128;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  unsigned int *v47;
  _DWORD *v48;
  __int64 v49;
  int v50;
  int v51;
  unsigned int *v52;
  float v53;
  __int64 v54;
  int v55;
  float v56;
  __int64 v57;
  __m128i v58;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008A110[640];
#define v60 (*(__int64 (*))(void *)(sr_frame_14008A110 + 0)) /* [rsp+0h] */
#define v61 (*(int (*))(void *)(sr_frame_14008A110 + 32)) /* [rsp+20h] */
#define v62 (*(float (*))(void *)(sr_frame_14008A110 + 40)) /* [rsp+28h] */
#define v63 (*(float (*))(void *)(sr_frame_14008A110 + 48)) /* [rsp+30h] */
#define v64 (*(float (*))(void *)(sr_frame_14008A110 + 56)) /* [rsp+38h] */
#define v65 (*(int (*))(void *)(sr_frame_14008A110 + 64)) /* [rsp+40h] */
#define v66 (*(int (*))(void *)(sr_frame_14008A110 + 72)) /* [rsp+48h] */
#define v67 (*(int (*))(void *)(sr_frame_14008A110 + 80)) /* [rsp+50h] */
#define v68 (*(float (*))(void *)(sr_frame_14008A110 + 96)) /* [rsp+60h] */
#define v69 (*(float (*))(void *)(sr_frame_14008A110 + 100)) /* [rsp+64h] */
#define v70 (*(float (*))(void *)(sr_frame_14008A110 + 104)) /* [rsp+68h] */
#define v71 (*(char (*)[512])(void *)(sr_frame_14008A110 + 112)) /* [rsp+70h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_14008A110 + 624)) /* [rsp+270h] */

  if ( g_183EBFCB0 != 1 )
    goto LABEL_16;
  v0 = g_183EBFCC4;
  if ( (int)g_183EBFCC4 >= 7 )
  {
LABEL_5:
    if ( game_state != 3 || v0 != 5 )
      goto LABEL_16;
    v2 = 0;
    v3 = g_19021F0CC;
    v4 = 0;
    if ( (int)g_19021F0E4 > (int)g_19021F0CC )
    {
      v2 = 1;
      v3 = g_19021F0E4;
      v4 = 1;
    }
    if ( (int)g_19021F0FC > v3 )
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
    sr_text_draw_recovered(v8, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 30.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A207 */;
    goto LABEL_16;
  }
  v1 = off_1402B2920[g_183EBFCC4];
  v65 = 1065353216;
  v64 = 1.0;
  v63 = 1.0;
  v62 = 1.0;
  v61 = 32;
  sr_CSDrawText(v1, 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 20.0);
  if ( g_183EBFCB0 == 1 )
  {
    v0 = g_183EBFCC4;
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
    if ( game_type == 3 && (unsigned int)v11 < 3 )
    {
      v17 = off_1402B2890[v12];
      v65 = 1065353216;
      v64 = v15;
      v63 = v14;
      v62 = v13;
      v61 = 96;
      sr_text_draw_recovered(v17, v16, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10))), 20.0, 96u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A441 */;
      if ( game_state == 3 && (v18 = dword_140404A6C[6 * v12 + 335047065]) != 0 )
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
          crt_sprintf(v71, "$%d(Split)");
        }
        else
        {
          v20 = "$%d(+%d%%)";
          if ( (int)v19 <= 0 )
            v20 = "$%d(%d%%)";
          crt_sprintf(v71, v20);
        }
      }
      else
      {
        crt_sprintf(v71, "$%d");
      }
      v65 = 1065353216;
      v64 = v15;
      v63 = v14;
      v62 = v13;
      v61 = 34;
      sr_text_draw_recovered(v71, v16 + 240.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 17.5, 34u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A56B */;
      if ( game_state == 3 )
      {
        v66 = dword_140404A6C[5873 * v12 + 283831505];
        v65 = 1065353216;
        v64 = v15;
        v63 = v14;
        v62 = v13;
        v61 = 32;
        sr_text_draw_recovered("Bonus:$/i", v16, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 17.5, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A5CF */;
      }
    }
    v21 = _mm_cvtsi32_si128((int)(0x43000000u));
    v22 = 0;
    g_192E8EC40 = 0;
    v23 = 2;
    v24 = &g_151623978;
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
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = v26;
            v22 = ++g_192E8EC40;
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
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = v28;
            v22 = ++g_192E8EC40;
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
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = v30;
            v22 = ++g_192E8EC40;
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
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = v32;
            v22 = ++g_192E8EC40;
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
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = v34;
            v22 = ++g_192E8EC40;
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
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = v36;
            v22 = ++g_192E8EC40;
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
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = v38;
            v22 = ++g_192E8EC40;
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
            dword_140404A6C[2 * g_192E8EC40 + 346695799] = v40;
            v22 = ++g_192E8EC40;
          }
        }
      }
      v23 += 8;
      v24 += 28776;
    }
    while ( (int)(v23 - 2) < 256 );
    renderer_sort_count = v22;
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
        *(__m128i_u *)&dword_140404A6C[v42 + 437192782] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695799]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695801])),
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695803]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695805]))));
        *(__m128i_u *)&dword_140404A6C[v42 + 437192786] = _mm_sub_epi32(
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
    renderer_current_font = 2;
    v51 = 0;
    if ( v22 > 0 )
    {
      v52 = &g_1A85C6BA4;
      v53 = v16 + 24.0;
      do
      {
        v54 = dword_140404A6C[2 * *v52 + 346695798];
        if ( (unsigned int)v54 > 0xFF )
          v54 = 0;
        if ( game_state != 2 )
        {
          v67 = 1065353216;
          v66 = 1065353216;
          v65 = 1065353216;
          v64 = 1.0;
          v63 = 0.0;
          v62 = 24.0;
          v61 = 1103101952;
          if ( dword_140404A6C[v54 + 284023074] )
            v55 = g_192E8F44C;
          else
            v55 = dword_140404A6C[3597 * (unsigned int)v54 + 71856270]
                ? g_192E8F448
                : g_192E8F444;
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
          if ( (_DWORD)v54 != local_player
            && g_183F7C750
            && !g_192E8F450
            && g_183F7C6C0 >= v16
            && g_183F7C6C0 < v53
            && g_183F7C6C4 >= *(float *)SR_VEC_LANES(128, v21, i32)
            && g_183F7C6C4 < (float)(*(float *)SR_VEC_LANES(128, v21, i32) + 24.0) )
          {
            sub_140117820(v54);
          }
        }
        v56 = 1.0;
        if ( game_state == 1 && !dword_140404A6C[3597 * (unsigned int)v54 + 71856271] )
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
        crt_sprintf(
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
      while ( v51 < (int)g_192E8EC40 );
    }
    ++v11;
    ++v12;
    v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
    renderer_current_font = 0;
  }
  while ( v11 < 4 );
  g_192E8F450 = g_183F7C750;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72

// 14008ABBF: conditional instruction was optimized away because ebx.4>=8
// 14008ABB9: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF

//----- (000000014008B050) ----------------------------------------------------
__int64 sub_14008B050()
{
  unsigned int v0;
  char *v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  __m128i v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  char *v15;
  __m128i v16;
  unsigned int *v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __m128i si128;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  unsigned int *v42;
  _DWORD *v43;
  __int64 v44;
  int v45;
  int v46;
  float v47;
  unsigned int *v48;
  float v49;
  __int64 v50;
  int v51;
  float v52;
  __int64 v53;
  __m128i v54;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008B050[640];
#define v56 (*(__int64 (*))(void *)(sr_frame_14008B050 + 0)) /* [rsp+0h] */
#define v57 (*(int (*))(void *)(sr_frame_14008B050 + 32)) /* [rsp+20h] */
#define v58 (*(float (*))(void *)(sr_frame_14008B050 + 40)) /* [rsp+28h] */
#define v59 (*(float (*))(void *)(sr_frame_14008B050 + 48)) /* [rsp+30h] */
#define v60 (*(float (*))(void *)(sr_frame_14008B050 + 56)) /* [rsp+38h] */
#define v61 (*(int (*))(void *)(sr_frame_14008B050 + 64)) /* [rsp+40h] */
#define v62 (*(int (*))(void *)(sr_frame_14008B050 + 72)) /* [rsp+48h] */
#define v63 (*(int (*))(void *)(sr_frame_14008B050 + 80)) /* [rsp+50h] */
#define v64 (*(int (*))(void *)(sr_frame_14008B050 + 96)) /* [rsp+60h] */
#define v65 (*(float (*))(void *)(sr_frame_14008B050 + 100)) /* [rsp+64h] */
#define v66 (*(float (*))(void *)(sr_frame_14008B050 + 104)) /* [rsp+68h] */
#define v67 (*(char (*)[512])(void *)(sr_frame_14008B050 + 112)) /* [rsp+70h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_14008B050 + 624)) /* [rsp+270h] */

  v0 = g_183EBFCC4;
  if ( (int)g_183EBFCC4 < 7 )
  {
    v1 = off_1402B2920[g_183EBFCC4];
    v61 = 1065353216;
    v60 = 1.0;
    v59 = 1.0;
    v58 = 1.0;
    v57 = 32;
    sr_text_draw_recovered(v1, 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 20.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008B13B */;
    v0 = g_183EBFCC4;
  }
  if ( game_state == 3 && v0 == 5 )
  {
    if ( (int)g_183F7AE14 <= (int)g_183F7AE18 )
    {
      if ( (int)g_183F7AE14 >= (int)g_183F7AE18 )
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
        sr_text_draw_recovered(v8, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 30.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008B20D */;
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
        if ( game_state == 3 )
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
      v17 = &g_151623978;
      v18 = 0;
      v19 = 2;
      g_192E8EC40 = 0;
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
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = v21;
              v18 = ++g_192E8EC40;
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
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = v23;
              v18 = ++g_192E8EC40;
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
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = v25;
              v18 = ++g_192E8EC40;
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
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = v27;
              v18 = ++g_192E8EC40;
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
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = v29;
              v18 = ++g_192E8EC40;
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
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = v31;
              v18 = ++g_192E8EC40;
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
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = v33;
              v18 = ++g_192E8EC40;
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
              dword_140404A6C[2 * g_192E8EC40 + 346695799] = v35;
              v18 = ++g_192E8EC40;
            }
          }
        }
        v19 += 8;
        v17 += 28776;
      }
      while ( (int)(v19 - 2) < 256 );
      renderer_sort_count = v18;
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
          *(__m128i_u *)&dword_140404A6C[v37 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695805]))));
          *(__m128i_u *)&dword_140404A6C[v37 + 437192786] = _mm_sub_epi32(
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
      renderer_current_font = 2;
      v46 = 0;
      if ( v18 > 0 )
      {
        v47 = *(float *)&v64;
        v48 = &g_1A85C6BA4;
        v49 = v12 + 24.0;
        do
        {
          v50 = dword_140404A6C[2 * *v48 + 346695798];
          if ( (unsigned int)v50 > 0xFF )
            v50 = 0;
          if ( game_state != 2 )
          {
            v63 = 1065353216;
            v62 = 1065353216;
            v61 = 1065353216;
            v60 = 1.0;
            v59 = 0.0;
            v58 = 24.0;
            v57 = 1103101952;
            if ( dword_140404A6C[v50 + 284023074] )
              v51 = g_192E8F44C;
            else
              v51 = dword_140404A6C[3597 * (unsigned int)v50 + 71856270]
                  ? g_192E8F448
                  : g_192E8F444;
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
            if ( (_DWORD)v50 != local_player
              && g_183F7C750
              && !g_192E8F450
              && g_183F7C6C0 >= v12
              && g_183F7C6C0 < v49
              && g_183F7C6C4 >= *(float *)SR_VEC_LANES(128, v16, i32)
              && g_183F7C6C4 < (float)(*(float *)SR_VEC_LANES(128, v16, i32) + 24.0) )
            {
              dword_140404A6C[v50 + 284023074] ^= 1u;
            }
          }
          v52 = 1.0;
          if ( game_state == 1 && !dword_140404A6C[3597 * (unsigned int)v50 + 71856271] )
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
          crt_sprintf(
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
        while ( v46 < (int)g_192E8EC40 );
      }
      v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
      renderer_current_font = 0;
    }
    ++v9;
    ++v11;
  }
  while ( v9 < 4 );
  g_192E8F450 = g_183F7C750;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68

// 14008B1AD: conditional instruction was optimized away because ecx.4==1
// 14008B2A0: conditional instruction was optimized away because esi.4<2u
// 14008B9EF: conditional instruction was optimized away because ebx.4>=8
// 14008B9E9: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF

//----- (000000014008BE70) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_14008BE70(__int64 a1, double a2, double a3, double a4)
{
  __m128i v5;
  __int128 v6;
  __int64 v7;
  char *v8;
  __int64 v9;
  char *v10;
  char *v11;
  char v12;
  char v13;
  char v14;
  char v15;

  v5 = *(__m128i_u *)&a3;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( !*(_BYTE *)(v7 + a1) )
      break;
    v8 = (char *)&g_144AFA1A0 - v7 - a1;
    v9 = 0;
    v10 = (char *)(v7 + a1 + 2);
    v11 = (char *)&g_144AFA1A0 + -v7 - a1 + 1;
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
    *((_BYTE *)&g_144AFA1A0 + v9) = 0;
    if ( *(_BYTE *)(v9 + v7 + a1) == 10 )
      ++v9;
    sr_text_draw_recovered((char *)&g_144AFA1A0, *(float *)&a2, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v5))), *(float *)&a4, 64u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008BFC1 */;
    v7 += v9;
    *(float *)SR_VEC_LANES(128, v5, i32) = *(float *)SR_VEC_LANES(128, v5, i32) + *(float *)&a4;
    *(float *)&v6 = *(float *)&v6 + *(float *)&a4;
  }
  while ( v7 < 1024 );
  return (__m128)v6;
}

// 14008BE70: inconsistent variable size for 'xmm2_8.8'

//----- (000000014008C030) ----------------------------------------------------
void sub_14008C030()
{
  int v0;
  unsigned int *v1;
  __int64 i;
  int v3;
  signed int v4;
  __int64 j;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;

  v0 = 0;
  if ( (int)item_block_region_count > 0 )
  {
    v1 = &g_1760D202C;
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
      if ( v0 >= (int)item_block_region_count )
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

//----- (000000014008C1F0) ----------------------------------------------------
void sub_14008C1F0()
{
  unsigned int *v0;
  unsigned int *v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;

  v0 = &g_19021F244;
  v1 = &g_19021F244;
  do
  {
    if ( *v1 )
    {
      if ( (rand() & 7) == 0 )
        *v1 = 0;
    }
    v1 += 4;
  }
  while ( (__int64)v1 < (__int64)&g_19021F2C4 );
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
  while ( (__int64)v0 < (__int64)&g_19021F2C4 );
}

//----- (000000014008C310) ----------------------------------------------------
unsigned int *sub_14008C310()
{
  unsigned int *result;
  signed int v1;
  signed int v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  _UNKNOWN *retaddr;

  result = (unsigned int *)&retaddr;
  v1 = item_block_region_count;
  v2 = 0;
  if ( (int)item_block_region_count > 0 )
  {
    v3 = g_182A8F6E4;
    v4 = 0;
    v5 = g_182A8CF44;
    v6 = g_182A893D4;
    v7 = g_182A8A7A4;
    v8 = g_182A8BB74;
    v9 = g_182A830C4;
    v10 = g_182A81CF4;
    result = &g_1760D202C;
    v11 = g_182A88004;
    v12 = g_182A86C34;
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
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = g_182A7F554;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v17 = (int)*result;
        *result = v17 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v17] = 2;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = g_182A80924;
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
        v22 = g_182A8E314;
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
        v1 = item_block_region_count;
      }
      ++v2;
      v4 += 4673;
      result += 14019;
    }
    while ( v2 < v1 );
  }
  return result;
}

//----- (000000014008C810) ----------------------------------------------------
__int64 sub_14008C810()
{
  float *v0;
  unsigned int *v1;
  int i;
  int v3;
  int *v4;
  __int64 v5;
  float v6;
  int v7;
  int v8;
  int v9;
  int v10;
  float v11;
  unsigned int *v12;
  __int64 result;
  int j;
  __int64 v15;
  int v16;
  int *v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  unsigned int *v25;
  unsigned __int64 v26;
  unsigned int *v27;
  __int64 v28;
  unsigned int *v29;
  int v30;
  __int64 v31;

  v0 = (float *)&g_19021F0C4;
  v1 = &g_183EBFDBC;
  for ( i = 0; i < 3; ++i )
  {
    v3 = *v1;
    v4 = (int *)&g_151620CA8;
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
        v12 = &g_151620CEC;
        *v0 = v11 * 0.2;
        do
        {
          if ( *(v12 - 35) && *(v12 - 2) == i )
            *v12 *= 5;
          v12 += 3597;
        }
        while ( (__int64)v12 < (__int64)&g_1519A40EC );
      }
    }
    else
    {
      *v0 = 10.0;
    }
    v1 += 5873;
    v0 += 6;
  }
  result = (__int64)&g_151620CF0;
  do
  {
    if ( *(_DWORD *)(result - 144) )
      *(_DWORD *)result = 0;
    if ( *(_DWORD *)(result + 14244) )
      *(_DWORD *)(result + 14388) = 0;
    result += 28776;
  }
  while ( result < (__int64)&g_1519A40F0 );
  for ( j = 0; j < 3; ++j )
  {
    v15 = -1;
    v16 = 1000;
    v17 = (int *)&g_151620CA8;
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
  v25 = &g_151620CFC;
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
  while ( (__int64)v25 < (__int64)&g_1519A40FC );
  return result;
}

//----- (000000014008CEB0) ----------------------------------------------------
__int64            sub_14008CEB0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  extern int collision_edge_edge(float *on_a, float *on_b, float *distance, const float *a0, const float *a1,
                                 const float *b0, const float *b1);
  /* src/engine/collision_mesh.c */
  return collision_edge_edge(a1, a2, a3, a4, a5, a6, a7);
}

//----- (000000014008D150) ----------------------------------------------------
__int64            sub_14008D150(int a1, float *a2, float *a3)
{
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 result;

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

//----- (000000014008EC40) ----------------------------------------------------
float            sub_14008EC40(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v7;
  float v9;
  float v10;
  float v11;

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
  __int64 v1;
  unsigned __int64 result;
  unsigned __int64 v3;
  unsigned int *v4;

  v1 = 39LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 290382647], 6);
  sub_140115D90(&dword_140404A6C[v1 + 290382648], 28);
  result = dword_140404A6C[v1 + 290382647];
  if ( !(_DWORD)result )
  {
    sub_140115D90(&dword_140404A6C[v1 + 290382649], 12);
    sub_140115D90(&dword_140404A6C[v1 + 290382650], 6);
    sub_140115D90(&dword_140404A6C[v1 + 290382651], 7);
    result = packet_out_byte;
    v3 = (int)dword_140404A6C[v1 + 290382651];
    if ( (int)packet_out_byte >= 0x10000 )
      return result;
    if ( (int)packet_out_bit > 0 )
    {
      LODWORD(result) = ++packet_out_byte;
      packet_out_bit = 0;
    }
    v4 = &g_1857BD75C;
    goto LABEL_14;
  }
  if ( (_DWORD)result == 1 )
  {
    sub_140115D90(&dword_140404A6C[v1 + 290382649], 12);
    sub_140115D90(&dword_140404A6C[v1 + 290382650], 5);
    sub_140115D90(&dword_140404A6C[v1 + 290382651], 7);
    v3 = (int)dword_140404A6C[v1 + 290382651];
    result = packet_out_byte;
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        LODWORD(result) = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      crt_memcpy(
        (__m128i *)((char *)&packet_out_data + (int)result),
        (     __m128i *)&dword_140404A6C[v1 + 290382652],
        v3);
      result = (unsigned int)(v3 + packet_out_byte);
      packet_out_byte = result;
      if ( (int)result < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          LODWORD(result) = result + 1;
          packet_out_bit = 0;
          packet_out_byte = result;
        }
        v4 = &g_1857BD79C;
LABEL_14:
        result = (unsigned __int64)crt_memcpy(
                                     (__m128i *)((char *)&packet_out_data + (int)result),
                                     (     __m128i *)&v4[v1],
                                     v3);
        packet_out_byte += v3;
      }
    }
  }
  return result;
}

//----- (000000014008EF00) ----------------------------------------------------
__int64            sub_14008EF00(int a1)
{
  __int64 v1;
  unsigned int v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008EF00[16];
#define v7 (*(unsigned int (*))(void *)(sr_frame_14008EF00 + 0)) /* [rsp+40h] */
#define v8 (*(unsigned int (*))(void *)(sr_frame_14008EF00 + 8)) /* [rsp+48h] */

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
#undef v7
#undef v8

//----- (0000000140090D00) ----------------------------------------------------
__int64            sub_140090D00(FILE *Stream, int a2)
{
  int v5;
  int v6;
  unsigned int *v7;
  int v8;
  unsigned int *v9;
  __int64 v10;
  __int64 v11;
  char *v12;
  char *v13;
  signed int v14;
  __int64 v15;
  unsigned int *v16;
  char *v17;
  signed int v18;
  int *v19;
  char *v20;
  int v21;
  __int64 v22;
  unsigned int *v23;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140090D00[32];
#define Buffer (*(int (*))(void *)(sr_frame_140090D00 + 0)) /* [rsp+68h] */
#define v25 (*(int (*))(void *)(sr_frame_140090D00 + 8)) /* [rsp+70h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140090D00 + 16)) /* [rsp+78h] */

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, (__int64)Stream);
    crt_fread((__int64)&g_16696E3D8, 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&g_16696E3D8), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  v5 = 0;
  if ( (int)g_16696E3D8 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 160802396];
      if ( a2 )
        crt_fread((__int64)v7, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)g_16696E3D8 );
  }
  if ( a2 )
    crt_fread((__int64)&g_16696FBDC, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&g_16696FBDC), 4, 1, (FILE *)(uintptr_t)(Stream));
  v8 = 0;
  v25 = 0;
  if ( (int)g_16696FBDC > 0 )
  {
    v9 = &g_1669703F0;
    do
    {
      v10 = v8;
      v11 = 26648LL * v8;
      v26 = v11;
      v12 = (char *)&g_16696FBE0 + v11;
      v13 = (char *)&g_16677CBC0 + v11;
      if ( a2 )
      {
        crt_fread((__int64)v12, 4, 3, (__int64)Stream);
        crt_fread((__int64)(v13 + 2043948), 4, 1, (__int64)Stream);
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
            crt_fread((__int64)v16, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v16), 4, 1, (FILE *)(uintptr_t)(Stream));
          ++v14;
        }
        while ( v14 < (int)*(v9 - 513) );
      }
      v17 = (char *)&g_1669703F0 + v11;
      if ( a2 )
        crt_fread((__int64)v17, 4, 1, (__int64)Stream);
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
            crt_fread((__int64)v20, 4, 1, (__int64)Stream);
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
                crt_fread((__int64)v23, 4, 1, (__int64)Stream);
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
    while ( v25 < (int)g_16696FBDC );
  }
  return 1;
}
#undef Buffer
#undef v25
#undef v26

//----- (0000000140091020) ----------------------------------------------------
__int64            sub_140091020(__int64 a1, int a2)
{
  int v5;
  int v6;
  unsigned int *v7;
  int v8;
  unsigned int *v9;
  unsigned int *v10;
  signed int v11;
  __int64 v12;
  unsigned int *v13;
  unsigned int *v14;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140091020[32];
#define Buffer (*(int (*))(void *)(sr_frame_140091020 + 0)) /* [rsp+68h] */
#define v16 (*(int (*))(void *)(sr_frame_140091020 + 8)) /* [rsp+70h] */
#define v17 (*(unsigned __int64 (*))(void *)(sr_frame_140091020 + 16)) /* [rsp+78h] */

  Buffer = 2;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, a1);
    crt_fread((__int64)&g_16684E3CC, 4, 1, a1);
    crt_fread((__int64)&g_16684E3D0, 4, 1, a1);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer != 2 )
      return 0;
    fread_sr((void *)(uintptr_t)(&g_16684E3CC), 4, 1, (FILE *)(uintptr_t)(a1));
    fread_sr((void *)(uintptr_t)(&g_16684E3D0), 4, 1, (FILE *)(uintptr_t)(a1));
  }
  v5 = 0;
  if ( (int)g_16684E3D0 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 160507482];
      if ( a2 )
      {
        crt_fread((__int64)v7, 4, 3, a1);
        crt_fread((__int64)&dword_140404A6C[v5 + 160556634], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v5 + 160556634]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)g_16684E3D0 );
  }
  if ( a2 )
    crt_fread((__int64)&g_16688E3D4, 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&g_16688E3D4), 4, 1, (FILE *)(uintptr_t)(a1));
  v8 = 0;
  v16 = 0;
  if ( (int)g_16688E3D4 > 0 )
  {
    v9 = &g_16688E3D8;
    do
    {
      v10 = &dword_140404A6C[14 * v8 + 160573019];
      v17 = 56LL * v8;
      if ( a2 )
        crt_fread((__int64)v10, 4, 1, a1);
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
            crt_fread((__int64)v13, 4, 1, a1);
            crt_fread((__int64)&dword_140404A6C[2 * v12 + 160573024 + 2 * v11], 4, 2, a1);
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
        crt_fread((__int64)v14, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v14), 4, 1, (FILE *)(uintptr_t)(a1));
      ++v8;
      v9 += 14;
      v16 = v8;
    }
    while ( v8 < (int)g_16688E3D4 );
  }
  return 1;
}
#undef Buffer
#undef v16
#undef v17

//----- (0000000140091310) ----------------------------------------------------
__int64            sub_140091310(FILE *Stream, int a2)
{
  int v4;
  int i;
  __int64 v6;
  unsigned int *v7;
  unsigned int *v8;
  int v9;
  unsigned int *v10;
  int Buffer;

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, (__int64)Stream);
    crt_fread((__int64)&g_16677CBC0, 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&g_16677CBC0), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  v4 = 0;
  for ( i = 0; i < (int)g_16677CBC0; ++i )
  {
    v6 = 6LL * i;
    v7 = &dword_140404A6C[v6 + 160292950];
    v8 = &dword_140404A6C[v6 + 160292949];
    if ( a2 )
    {
      crt_fread((__int64)v7, 4, 1, (__int64)Stream);
      crt_fread((__int64)(v8 + 2), 4, 1, (__int64)Stream);
      crt_fread((__int64)&dword_140404A6C[v6 + 160292952], 4, 1, (__int64)Stream);
      crt_fread((__int64)&dword_140404A6C[v6 + 160292953], 4, 1, (__int64)Stream);
      crt_fread((__int64)&dword_140404A6C[v6 + 160292954], 4, 1, (__int64)Stream);
      crt_fread((__int64)&dword_140404A6C[v6 + 160292955], 4, 1, (__int64)Stream);
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
    crt_fread((__int64)&g_16677E3C4, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&g_16677E3C4), 4, 1, (FILE *)(uintptr_t)(Stream));
  if ( (int)g_16677E3C4 > 0 )
  {
    v9 = 0;
    do
    {
      v10 = &dword_140404A6C[v9 + 160294487];
      if ( a2 )
        crt_fread((__int64)v10, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v10), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v4;
      v9 += 3;
    }
    while ( v4 < (int)g_16677E3C4 );
  }
  if ( a2 )
  {
    crt_fread((__int64)&g_1667AE3C8, 4, 1, (__int64)Stream);
    crt_fread((__int64)&g_1667AE3CC, 4, 3 * g_1667AE3C8, (__int64)Stream);
    crt_fread((__int64)&g_1667DE3CC, 4, (int)g_1667AE3C8, (__int64)Stream);
    crt_fread((__int64)&g_1667EE3CC, 4, 6 * g_1667AE3C8, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&g_1667AE3C8), 4, 1, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&g_1667AE3CC), 4, 3 * g_1667AE3C8, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&g_1667DE3CC), 4, (int)g_1667AE3C8, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&g_1667EE3CC), 4, 6 * g_1667AE3C8, (FILE *)(uintptr_t)(Stream));
  }
  return 1;
}

//----- (0000000140091660) ----------------------------------------------------
__int64            sub_140091660(__int64 a1, int a2)
{
  int v5;
  unsigned int *v6;
  __int64 v7;
  unsigned int *v8;
  signed int i;
  unsigned int *v10;
  int Buffer;

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, a1);
    crt_fread((__int64)&g_1669A3CB8, 4, 1, a1);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&g_1669A3CB8), 4, 1, (FILE *)(uintptr_t)(a1));
  }
  v5 = 0;
  if ( (int)g_1669A3CB8 > 0 )
  {
    v6 = &g_1669A3CBC;
    do
    {
      v7 = 13LL * v5;
      v8 = &dword_140404A6C[v7 + 160857236];
      if ( a2 )
        crt_fread((__int64)v8, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v8), 4, 1, (FILE *)(uintptr_t)(a1));
      for ( i = 0; i < (int)*v6; ++i )
      {
        v10 = &dword_140404A6C[3 * i + 160857237 + v7];
        if ( a2 )
          crt_fread((__int64)v10, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(v10), 4, 3, (FILE *)(uintptr_t)(a1));
      }
      ++v5;
      v6 += 13;
    }
    while ( v5 < (int)g_1669A3CB8 );
  }
  return 1;
}

//----- (00000001400917C0) ----------------------------------------------------
__int64            sub_1400917C0(__int64 a1, int a2)
{
  int Buffer;

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, a1);
    crt_fread((__int64)(unsigned int *)&g_1669A3CA0, 4, 3, a1);
    crt_fread((__int64)&g_1669A3CAC, 4, 3, a1);
    return 1;
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)((unsigned int *)&g_1669A3CA0), 4, 3, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_1669A3CAC), 4, 3, (FILE *)(uintptr_t)(a1));
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

//----- (0000000140091880) ----------------------------------------------------
__int64 sub_140091880()
{
  int v0;
       char *v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140091880[96];
#define v17 (*(__int64 (*))(void *)(sr_frame_140091880 + 0)) /* [rsp+0h] */
#define v18 (*(int (*))(void *)(sr_frame_140091880 + 32)) /* [rsp+20h] */
#define v19 (*(int (*))(void *)(sr_frame_140091880 + 36)) /* [rsp+24h] */
#define v20 (*(char * (*))(void *)(sr_frame_140091880 + 40)) /* [rsp+28h] */
#define v21 (*(_QWORD (*)[5])(void *)(sr_frame_140091880 + 48)) /* [rsp+30h] */

  v0 = 0;
  v21[0] = (uint64)(uintptr_t)("OpenGL ES-CL ");
  v1 = "OpenGL ES-CM ";
  v20 = "OpenGL ES-CM ";
  v21[1] = (uint64)(uintptr_t)("OpenGL ES ");
  v21[2] = 0;
  v2 = glGetString(7938);
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
  crt_sscanf_s(v2, "%d.%d", (__int64)(uintptr_t)&v18, (__int64)(uintptr_t)&v19);
  dword_140404A68 = v18;
  g_140404A6C = v19;
  g_144980D98 = v18;
  g_144980D9C = v19;
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
  g_144980CB0 = v5;
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
    g_144980D98 = 3;
    g_144980D9C = 3;
  }
  return (unsigned int)v18;
}
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

//----- (0000000140091BA0) ----------------------------------------------------
__int64 sub_140091BA0()
{
  __int64 v0;
  int v1;
       __m128i *v2;
  char *v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
       __m128i *v8;
  __int64 v9;
  unsigned __int64 v11;
  __m128i *v12;
  __m128i *v13;
       __m128i *v14;
       __m128i *v15;
  int v16;
  int v17;
       char **v18;
  int v19;
  __int64 v20;

  if ( (int)g_144980D98 < 3 )
  {
    v0 = glGetString(7939);
    v1 = g_144980DA8;
    v2 = (     __m128i *)v0;
    v3 = *(char **)&g_144980DB0;
    g_144980DA0 = v0;
    goto LABEL_16;
  }
  g_144980DA8 = 0;
  glGetIntegerv(33309, &g_144980DA8);
  v1 = g_144980DA8;
  if ( (int)g_144980DA8 <= 0 )
  {
    v3 = *(char **)&g_144980DB0;
  }
  else
  {
    v4 = j__realloc_base_sr(g_144980DB0, 8LL * (int)g_144980DA8);
    v3 = (char *)v4;
    if ( !v4 )
      return 0;
    v1 = g_144980DA8;
    g_144980DB0 = v4;
  }
  if ( !v3 )
    return 0;
  v6 = 0;
  if ( v1 )
  {
    do
    {
      v7 = glGetStringi(7939, (unsigned int)v6);
      v8 = (     __m128i *)v7;
      v9 = -1;
      while ( *(_BYTE *)(v7 + v9++ + 1) != 0 )
        ;
      v11 = v9 + 1;
      v12 = (__m128i *)sr_path_malloc(v9 + 1);
      v13 = v12;
      if ( v12 )
        crt_memcpy(v12, v8, v11);
      v3 = *(char **)&g_144980DB0;
      *(_QWORD *)(g_144980DB0 + 8 * v6) = (uint64)(uintptr_t)(v13);
      v6 = (unsigned int)(v6 + 1);
      v1 = g_144980DA8;
    }
    while ( (unsigned int)v6 < g_144980DA8 );
  }
  v2 = *(     __m128i **)(unsigned int *)&g_144980DA0;
LABEL_16:
  if ( (int)g_144980D98 < 3 )
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
        v1 = g_144980DA8;
        v16 = 1;
        v3 = *(char **)&g_144980DB0;
      }
      else
      {
LABEL_23:
        v1 = g_144980DA8;
        v16 = 0;
        v3 = *(char **)&g_144980DB0;
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
          v3 = *(char **)&g_144980DB0;
          v20 += 8;
          ++v19;
        }
        while ( v19 < (int)g_144980DA8 );
      }
      free(v3);
      g_144980DB0 = 0;
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

//----- (0000000140091DF0) ----------------------------------------------------
_BOOL8            sub_140091DF0(_BYTE *a1)
{
  signed int v1;
  signed int i;
  __int64 v4;

  v1 = g_1862AE020;
  for ( i = g_1862AE024; v1 < i; g_1862AE020 = ++v1 )
  {
    if ( (unsigned int)sub_14003C6F0(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  g_1862AE020 = v4 + v1;
  return (int)v4 + v1 < i;
}

//----- (0000000140091E60) ----------------------------------------------------
unsigned __int64            sub_140091E60(int a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int *v3;
  char i;
  __int64 v5;
  _BYTE *v6;
  __int64 v7;
  unsigned __int64 result;
  __int64 v9;

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
    result = (unsigned __int64)&g_151620C64 + (int)result + v2 * 4;
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

//----- (00000001400920F0) ----------------------------------------------------
__int64 sub_1400920F0(__int64 a1,      char *a2, ...)
{
  __int64 *v4;
  va_list va;

  va_start(va, a2);
  v4 = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*v4, a1, (__int64)a2, 0, (__int64)va);
}

//----- (0000000140092370) ----------------------------------------------------
__int64 sub_140092370()
{
  float v0;
  float v1;
  __m128 v2;
  float v3;
  float v4;
  __int64 v5;
  float v6;
  double v7;
  float v8;
  __m128 v9;
  double v10;
  double v11;
  double v12;
  __int64 v13;
  unsigned int v14;
  unsigned int *v15;
  unsigned int *v16;
  signed int v17;
  __int64 result;
  __int64 v19;
  int v20;
  unsigned int v21;
  float v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  unsigned int *v36;
  unsigned int *v37;
  __int64 v38;
  __m128d v39;
  __int64 v40;
  float v41;
  double v42;
  float v43;
  __m128 v44;
  double v45;
  double v46;
  __m128d v47;
  double v48;
  __m128i v49;
  __m128i v50;
  double v51;
  __m128i v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  float v56;

  if ( game_type == 5
    && local_player != -1
    && dword_140404A6C[3597 * local_player + 71856286] - 1 <= 1
    && g_183F7A570 != 0.0 )
  {
    glDisable(2929);
    v2 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)*(unsigned int *)&g_183F7C560))  /* lane 0 = that word (was the array address, indexed as a vector) */;
    v0 = g_183F7C574;
    v1 = (float)((float)(g_183F7C554
                       * (float)(g_183F7A574 - g_183F7C548))
               + (float)(g_183F7C550
                       * (float)(g_183F7A570 - g_183F7C544)))
       + (float)(g_183F7C558
               * (float)(g_183F7A578 - g_183F7C54C));
    SR_VEC_LANES(128, v2, f32)[0] = (float)((float)(g_183F7C560
                                   * (float)(g_183F7A574
                                           - g_183F7C548))
                           + (float)(g_183F7C55C
                                   * (float)(g_183F7A570
                                           - g_183F7C544)))
                   + (float)(g_183F7C564
                           * (float)(g_183F7A578 - g_183F7C54C));
    v3 = -(float)((float)((float)(g_183F7C56C
                                * (float)(g_183F7A574 - g_183F7C548))
                        + (float)(g_183F7C568
                                * (float)(g_183F7A570 - g_183F7C544)))
                + (float)(g_183F7C570
                        * (float)(g_183F7A578 - g_183F7C54C)));
    v4 = fmaxf(
           fminf(
             (float)(192.0
                   / (float)((float)(fsqrt(
                                       (float)((float)((float)(g_183F7A574
                                                             - g_183F7C548)
                                                     * (float)(g_183F7A574
                                                             - g_183F7C548))
                                             + (float)((float)(g_183F7A570
                                                             - g_183F7C544)
                                                     * (float)(g_183F7A570
                                                             - g_183F7C544)))
                                     + (float)((float)(g_183F7A578
                                                     - g_183F7C54C)
                                             * (float)(g_183F7A578
                                                     - g_183F7C54C)))
                                   * 0.0625)
                           * g_183F7C574))
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
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF984 + 284024944]);
    v14 = local_player;
    if ( dword_140404A6C[3597 * local_player + 71856286] == 1 )
    {
      sub_14006CFF0(v12, v11, COERCE_UNSIGNED_INT((float)(v4)) /* native XMM2 width = XMM8, same as the height */, v4, 133, 1065353216, 0, 0, 1061158912);
      v14 = local_player;
    }
    if ( dword_140404A6C[3597 * v14 + 71856286] == 2 )
      sub_14006CFF0(v12, v11, COERCE_UNSIGNED_INT((float)(v4)) /* native XMM2 width = XMM8, same as the height */, v4, 133, 0, 1065353216, 0, 1061158912);
  }
  renderer_current_font = 2;
  v15 = &g_1832A5054;
  do
  {
    *v15 = 0;
    v15 += 7166;
  }
  while ( (__int64)v15 < (__int64)&g_1839A4854 );
  v16 = &g_182BBB41C;
  do
  {
    *v16 = 0;
    v16 += 1760;
  }
  while ( (__int64)v16 < (__int64)&g_18329B41C );
  v17 = g_192E98E60;
  for ( result = g_192E98E60 + 1;
        v17 != (unsigned __int8)(LOBYTE(g_192E98E60) + 1);
        result = g_192E98E60 + 1 )
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
          v28 = (float)((float)(g_183F7C55C * 0.5) + *(float *)&v24)
              - g_183F7C544;
          v29 = (float)((float)(g_183F7C560 * 0.5) + *(float *)&v25)
              - g_183F7C548;
          v56 = (float)((float)(g_183F7C564 * 0.5) + *(float *)&v26)
              - g_183F7C54C;
          v30 = (float)((float)(v29 * g_183F7C554)
                      + (float)(v28 * g_183F7C550))
              + (float)(v56 * g_183F7C558);
          v31 = (float)((float)(v29 * g_183F7C560)
                      + (float)(v28 * g_183F7C55C))
              + (float)(v56 * g_183F7C564);
          v32 = -(float)((float)((float)(v29 * g_183F7C56C)
                               + (float)(v28 * g_183F7C568))
                       + (float)(v56 * g_183F7C570));
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
            if ( dword_140404A6C[3592 * renderer_current_font + 72777085] && *(_BYTE *)v36 )
            {
              v37 = &dword_140404A6C[v19 + 346696451];
              do
              {
                if ( (char *)v37 - (char *)v36 >= 0xFFFF )
                  break;
                v38 = *(char *)v37;
                v37 = (unsigned int *)((char *)v37 + 1);
                v35 = v35
                    + (float)(v34 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + v38]);
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
                v43 = v43 * (float)(-1.0 / (float)(v32 * g_183F7C574));
            }
            else
            {
              v43 = v43 / (float)(v32 * g_183F7C574);
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
            glBindTexture(3553, renderer_white_texture);
            v54 = 1061158912;
            if ( v32 > -0.125 )
              v54 = 1065353216;
            /* 0x140092C29: width = the text width summed at 0x140092A7F (v35) + 4.0 (0x140092BE0, xmm2 at 0x140092C04);
               the C had passed an undefined local */
            sub_14006CFF0(v51, *(double *)SR_VEC_LANES(128, v49, i64), sr_text_float_bits(v35 + 4.0f), v34 * 0.875, 5, v54, v54, v54, COERCE_INT(v22 * 0.75f));
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

//----- (0000000140094690) ----------------------------------------------------
__int64 sub_140094690()
{
  glDisable(2884);
  glDisable(2929);
  glEnable(2884);
  return (*(__int64 (           **)(__int64))(unsigned int *)&glEnable)(2929);
}

//----- (00000001400946D0) ----------------------------------------------------
double sub_1400946D0()
{
  __int64 v0;
  __int64 v1;
  signed int v2;
  int v3;
  signed int v4;
  unsigned int *v5;
  __int64 v6;
  unsigned int *v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int *v15;
  int v16;
  unsigned int *v17;
  int v18;
  int v19;

  sub_14011C950();
  glUseProgram(shadow_program);
  glUniformMatrix4fv(shadow_u_modelmatrix, 1, 0, (unsigned int *)&g_1A724E600);
  glUniformMatrix4fv(shadow_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniformMatrix4fv(shadow_u_projectionmatrix, 1, 0, (unsigned int *)&g_1A724E580);
  glUniformMatrix4fv(shadow_u_viewmatrix, 1, 0, (unsigned int *)&g_1A724E5C0);
  glUniform3fv(shadow_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniform1f((int)shadow_u_shadowlength,0x1.0000000000000p+5f);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C04 + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C18 + 283793813]);
  glEnableVertexAttribArray(0);
  v2 = g_150F55020;
  v3 = 0;
  v4 = 0;
  if ( (int)g_150F55020 > 0 )
  {
    v5 = &g_150F55024;
    do
    {
      if ( !g_18AB70F9C && !g_18E95B03C )
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
                glVertexAttribPointer(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[309078348+3074*((int64_t)(int32_t)dword_140404A6C[6*v8+312226123])+3*((int64_t)(int32_t)dword_140404A6C[(6*v8+312226123)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[6*v8+312226123])*g_189F0EF8C)));
                if ( dword_140404A6C[2 * v9 + 328456563] != -1 )
                  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*dword_140404A6C[8969*v10+73991665]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[325308788+3074*((int64_t)(int32_t)dword_140404A6C[2*v9+328456563])+3*((int64_t)(int32_t)dword_140404A6C[(2*v9+328456563)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[2*v9+328456563])*g_18DCF902C)));
              }
            }
          }
          ++v7;
          --v6;
        }
        while ( v6 );
        v2 = g_150F55020;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < v2 );
  }
  glDisableVertexAttribArray(0);
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  glDisable(32823);
  glEnable(3042);
  if ( !g_16B165F68 )
  {
    v14 = g_18417E1B4;
    v15 = &g_1841821B8;
    v16 = 0;
    if ( (int)g_18417E1B4 > 0 )
    {
      v17 = &g_1841821B8;
      do
      {
        if ( (v17[3] & 1) != 0 )
        {
          v18 = *v17;
          if ( (int)*v17 >= (int)g_183EBBBC4 && v18 <= (int)g_183EBBFC0 )
          {
            sub_140124FE0(
              v18,
              v17[1],
              &dword_140404A6C[30 * v16 + 284554715],
              (__int64)&dword_140404A6C[30 * v16 + 284554718]);
            v14 = g_18417E1B4;
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
            if ( (int)*v15 < (int)g_183EBBBC4 || v19 > (int)g_183EBBFC0 )
            {
              sub_140124FE0(
                v19,
                v15[1],
                &dword_140404A6C[30 * v3 + 284554715],
                (__int64)&dword_140404A6C[30 * v3 + 284554718]);
              v14 = g_18417E1B4;
            }
          }
          ++v3;
          v15 += 30;
        }
        while ( v3 < v14 );
      }
    }
    glBindBuffer(34962, 0);
  }
  glDisable(32823);
  return ((double (*)(_QWORD))glUseProgram)(0);
}

//----- (0000000140095800) ----------------------------------------------------
unsigned __int64            sub_140095800(_BYTE *a1, __int64 a2, unsigned __int64 a3, FILE *a4)
{
  _BYTE *v6;
  int i;
  int v8;
  _BYTE *v9;
  char v10;
  int v11;
  int v12;
  _BYTE *v13;
  char v14;
  int v15;

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

//----- (0000000140095910) ----------------------------------------------------
void sub_140095910()
{
  char *v0;
  int v1;
  __int64 v2;

  v0 = *(char **)&g_144980DB0;
  if ( g_144980DB0 )
  {
    v1 = 0;
    if ( (int)g_144980DA8 > 0 )
    {
      v2 = 0;
      do
      {
        free(*(void **)&v0[v2]);
        v0 = *(char **)&g_144980DB0;
        v2 += 8;
        ++v1;
      }
      while ( v1 < (int)g_144980DA8 );
    }
    free(v0);
    g_144980DB0 = 0;
  }
}

//----- (00000001400959E0) ----------------------------------------------------
unsigned __int64            sub_1400959E0(char *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char *v6;
  int i;
  int v8;
  char *v9;
  int v10;
  char *v11;

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

//----- (0000000140095FC0) ----------------------------------------------------
void            sub_140095FC0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  unsigned int *v4;
  unsigned int *v5;
  unsigned int *v6;

  if ( g_183EBFAA0 )
  {
    g_183EBFAA0 = 0;
    g_1AD04B1E0 = 0;
    g_183EBFD5C = 0;
    sub_140198F0B(0, a2, a3);
    if ( game_connected )
    {
      v3 = 0;
      v4 = &g_151620C60;
      do
      {
        if ( *v4 )
          sub_1400802F0(v3);
        ++v3;
        v4 += 3597;
      }
      while ( v3 < 256 );
    }
    else if ( !replay_active )
    {
      packet_out_data = dword_1402B2658;
      *(_QWORD *)&packet_out_byte = 5;
      LOBYTE(g_18539D408) = 7;
      sub_140130350(g_1AD04B1D4, g_1AD04B1D8, *(__int64 *)&g_1AD04B1E0);
    }
    v5 = &g_15F2D9200;
    do
    {
      *v5 = 0;
      v5 += 5210;
    }
    while ( (__int64)v5 < (__int64)&g_15FD06200 );
    v6 = &g_140654DB4;
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
    while ( (__int64)v6 < (__int64)&g_144A60DB4 );
  }
}

// 14009701D: conditional instruction was optimized away because ecx.4<1

//----- (000000014009A370) ----------------------------------------------------
__int64            sub_14009A370(int a1)
{
  __int64 v1;
  __int64 result;
  int v3;
  int *v4;
  int v5;
  int v6;
  int *v7;
  void **v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009A370[128];
#define v28 (*(int * (*))(void *)(sr_frame_14009A370 + 0)) /* [rsp+20h] */
#define v29 (*(int (*))(void *)(sr_frame_14009A370 + 96)) /* [rsp+80h] */
#define v30 (*(void ** (*))(void *)(sr_frame_14009A370 + 104)) /* [rsp+88h] */
#define v31 (*(unsigned int * (*))(void *)(sr_frame_14009A370 + 120)) /* [rsp+98h] */

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
                                 + (uintptr_t)&g_183F7CC00
                                 - (uintptr_t)&g_183F7CC38
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
#undef v28
#undef v29
#undef v30
#undef v31

//----- (000000014009B1A0) ----------------------------------------------------
void               sub_14009B1A0(int a1)
{
  BOOL *v1;
  int v2;
  __int64 v3;
  int v4;
  float v5;
  BOOL v6;
  double v7;
  __int64 v8;
  char *v9;
  unsigned int i;
  char *v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  bool v16;
  signed int j;
  signed int k;
  __int64 v19;
  signed int v20;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009B1A0[1072];
#define v22 (*(__int64 (*))(void *)(sr_frame_14009B1A0 + 0)) /* [rsp+0h] */
#define v23 (*(_DWORD (*)[256])(void *)(sr_frame_14009B1A0 + 32)) /* [rsp+20h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_14009B1A0 + 1056)) /* [rsp+420h] */

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
  g_1B0037420 = 128;
  g_1B0037424 = 128;
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
      dword_140404A6C[v14 + 468765295 + g_1B0037420 * v13] = 0;
      if ( (__int64)v9 < (__int64)((char *)&unk_1402B2410 + 0x140) /* 0x1402B2550, the end of the 8x8 font */ )
      {
        if ( *v11 < 0 )
          dword_140404A6C[v14 + 468765295 + g_1B0037420 * v13] = -1;
        v16 = (*v11 & 0x40) == 0;
        dword_140404A6C[v14 + 468765296 + g_1B0037420 * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765296 + g_1B0037420 * v13] = -1;
        v16 = (*v11 & 0x20) == 0;
        dword_140404A6C[v14 + 468765297 + g_1B0037420 * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765297 + g_1B0037420 * v13] = -1;
        v16 = (*v11 & 0x10) == 0;
        dword_140404A6C[v14 + 468765298 + g_1B0037420 * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765298 + g_1B0037420 * v13] = -1;
        v16 = (*v11 & 8) == 0;
        dword_140404A6C[v14 + 468765299 + g_1B0037420 * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765299 + g_1B0037420 * v13] = -1;
        v16 = (*v11 & 4) == 0;
        dword_140404A6C[v14 + 468765300 + g_1B0037420 * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765300 + g_1B0037420 * v13] = -1;
        v16 = (*v11 & 2) == 0;
        dword_140404A6C[v14 + 468765301 + g_1B0037420 * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765301 + g_1B0037420 * v13] = -1;
        v16 = (*v11 & 1) == 0;
        dword_140404A6C[v14 + 468765302 + g_1B0037420 * v13] = 0;
        goto LABEL_50;
      }
      if ( (__int64)v9 < (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ && v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765295 + g_1B0037420 * v13] = -1;
        dword_140404A6C[v14 + 468765296 + g_1B0037420 * v13] = 0;
      }
      else
      {
        dword_140404A6C[v14 + 468765296 + g_1B0037420 * v13] = 0;
        if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_33;
      }
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 1 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765296 + g_1B0037420 * v13] = -1;
        dword_140404A6C[v14 + 468765297 + g_1B0037420 * v13] = 0;
        goto LABEL_34;
      }
LABEL_33:
      dword_140404A6C[v14 + 468765297 + g_1B0037420 * v13] = 0;
      if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_36;
LABEL_34:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 2 + 8 * (i & 1)] )
      {
LABEL_36:
        dword_140404A6C[v14 + 468765298 + g_1B0037420 * v13] = 0;
        if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_39;
        goto LABEL_37;
      }
      dword_140404A6C[v14 + 468765297 + g_1B0037420 * v13] = -1;
      dword_140404A6C[v14 + 468765298 + g_1B0037420 * v13] = 0;
LABEL_37:
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 3 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765298 + g_1B0037420 * v13] = -1;
        dword_140404A6C[v14 + 468765299 + g_1B0037420 * v13] = 0;
        goto LABEL_40;
      }
LABEL_39:
      dword_140404A6C[v14 + 468765299 + g_1B0037420 * v13] = 0;
      if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_42;
LABEL_40:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 4 + 8 * (i & 1)] )
      {
LABEL_42:
        dword_140404A6C[v14 + 468765300 + g_1B0037420 * v13] = 0;
        if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_45;
        goto LABEL_43;
      }
      dword_140404A6C[v14 + 468765299 + g_1B0037420 * v13] = -1;
      dword_140404A6C[v14 + 468765300 + g_1B0037420 * v13] = 0;
LABEL_43:
      if ( v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 5 + 8 * (i & 1)] )
      {
        dword_140404A6C[v14 + 468765300 + g_1B0037420 * v13] = -1;
        dword_140404A6C[v14 + 468765301 + g_1B0037420 * v13] = 0;
        goto LABEL_46;
      }
LABEL_45:
      dword_140404A6C[v14 + 468765301 + g_1B0037420 * v13] = 0;
      if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
        goto LABEL_48;
LABEL_46:
      if ( !v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 6 + 8 * (i & 1)] )
      {
LABEL_48:
        dword_140404A6C[v14 + 468765302 + g_1B0037420 * v13] = 0;
        if ( (__int64)v9 >= (__int64)((char *)&unk_1402B2410 + 0x160) /* 0x1402B2570 */ )
          goto LABEL_52;
        goto LABEL_49;
      }
      dword_140404A6C[v14 + 468765301 + g_1B0037420 * v13] = -1;
      dword_140404A6C[v14 + 468765302 + g_1B0037420 * v13] = 0;
LABEL_49:
      v16 = v23[16 * (v13 + v15 + 8 * ((i >> 1) & 1)) + 7 + 8 * (i & 1)] == 0;
LABEL_50:
      if ( !v16 )
        dword_140404A6C[v14 + 468765302 + g_1B0037420 * v13] = -1;
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
      v19 = k + j * g_1B0037420;
      v20 = k + j * dword_140404A6C[v8 + 284024933];
      ++k;
    }
  }
  sub_14014D3E0(v3, 0);
  return; /* native cookie verifies compiler stack layout, not atlas data */
}
#undef v22
#undef v23
#undef v24

//----- (000000014009B9F0) ----------------------------------------------------
double            sub_14009B9F0(int a1)
{
  unsigned int v1;
  int v2;
  __int64 v3;
  signed int v4;
  int v5;
  __int64 v6;
  int v7;
  float v8;
  unsigned int v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  signed int v29;
  signed int i;
  __int64 v31;
  signed int v32;

  v1 = g_1862AE010;
  v2 = 128;
  v3 = a1;
  v4 = 128;
  v5 = 0;
  v6 = (int)dword_140404A6C[4 * v3 + 283827814];
  g_1B0037420 = 128;
  g_1B0037424 = 128;
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
        v2 = g_1B0037420;
      }
      while ( v7 < (int)g_1B0037420 );
      v4 = g_1B0037424;
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
        v31 = i + v29 * g_1B0037420;
        v32 = i + v29 * dword_140404A6C[v27 + 284024933];
        ++i;
      }
      ++v29;
    }
    while ( v29 < (int)dword_140404A6C[v27 + 284024934] );
  }
  sub_14009A370(v6);
  sub_14014D3E0(v6, 1);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
}

//----- (000000014009BE40) ----------------------------------------------------
void            sub_14009BE40(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6;
  __int64 v7;
  unsigned int v9;
  signed int v10;
  signed int i;
  int v13;
  int v14;
  __int64 v15;
  unsigned int *v16;
  unsigned int *v17;
  void **v18;
  __int64 v19;
  signed int v20;
  signed int j;
  __int64 v22;
  signed int v23;

  v6 = 128;
  v7 = a1;
  g_1B0037420 = 128;
  v9 = g_1862AE010;
  v10 = 128;
  g_1B0037424 = 128;
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
        v6 = g_1B0037420;
        ++v13;
      }
      while ( v13 < (int)g_1B0037420 );
      v10 = g_1B0037424;
    }
  }
  if ( v9 )
  {
    g_1B0037428 = 1612720160;
    g_1B003742C = -425767648;
  }
  else
  {
    g_1B0037428 = 539500640;
    g_1B003742C = 541958118;
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
      v22 = j + v20 * g_1B0037420;
      v23 = j + *v17 * v20;
      ++j;
    }
  }
  if ( a2 )
    sub_14009A370(v7);
  sub_14014D3E0(v7, 1);
}

//----- (000000014009D7A0) ----------------------------------------------------
double            sub_14009D7A0(int a1)
{
  int v1;
  signed int v2;
  signed int v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  double result;
  int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  signed int v14;
  signed int i;
  __int64 v16;
  signed int v17;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009D7A0[16];
#define v18 (*(float (*)[2])(void *)(sr_frame_14009D7A0 + 0)) /* [rsp+20h] */
#define v19 (*(float (*))(void *)(sr_frame_14009D7A0 + 8)) /* [rsp+28h] */

  v1 = 64;
  v2 = 8;
  v3 = 0;
  v4 = a1;
  g_1B0037420 = 64;
  g_1B0037424 = 8;
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
        if ( g_1862AE010 )
          v10 = (v7 << 16) + (v9 << 8) + (v6 << 24) + 255;
        else
          v10 = (v7 << 8) - 0x1000000 + (v9 << 16) + v6;
        v11 = v5 + v3 * g_1B0037420;
        ++v5;
        dword_140404A6C[v11 + 468765295] = v10;
        v1 = g_1B0037420;
      }
      while ( v5 < (int)g_1B0037420 );
      v2 = g_1B0037424;
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
        v16 = i + v14 * g_1B0037420;
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
#undef v18
#undef v19

//----- (000000014009DE70) ----------------------------------------------------
__int64 sub_14009DE70()
{
  return (unsigned int)sub_14009DE80() >> 1;
}

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
  signed int v0;

  v0 = (unsigned int)sub_14009DE80() >> 5;
  return ((double)((unsigned int)sub_14009DE80() >> 6) + (double)v0 * 67108864.0) * 1.110223024625157e-16;
}

//----- (000000014009E070) ----------------------------------------------------
__int64 sub_14009E070()
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
       __m128i *v6;
  __int64 v7;
  unsigned __int64 v9;
  __m128i *v10;
  __m128i *v11;

  if ( (int)g_144980D98 < 3 )
  {
    g_144980DA0 = glGetString(7939);
    return 1;
  }
  v1 = 0;
  g_144980DA8 = 0;
  glGetIntegerv(33309, &g_144980DA8);
  v2 = g_144980DA8;
  v3 = g_144980DB0;
  if ( (int)g_144980DA8 > 0 )
  {
    v4 = j__realloc_base_sr(g_144980DB0, 8LL * (int)g_144980DA8);
    v3 = v4;
    if ( !v4 )
      return 0;
    g_144980DB0 = v4;
    v2 = g_144980DA8;
  }
  if ( !v3 )
    return 0;
  if ( v2 )
  {
    do
    {
      v5 = glGetStringi(7939, (unsigned int)v1);
      v6 = (     __m128i *)v5;
      v7 = -1;
      while ( *(_BYTE *)(v5 + v7++ + 1) != 0 )
        ;
      v9 = v7 + 1;
      v10 = (__m128i *)sr_path_malloc(v7 + 1);
      v11 = v10;
      if ( v10 )
        crt_memcpy(v10, v6, v9);
      *(_QWORD *)(g_144980DB0 + 8 * v1) = (uint64)(uintptr_t)(v11);
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < g_144980DA8 );
  }
  return 1;
}

//----- (000000014009E190) ----------------------------------------------------
__int64            sub_14009E190(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = g_144980D88;
  if ( !g_144980D88 )
    return 0;
  if ( g_144980D90 )
  {
    result = (*(__int64 (           **)(__int64))(unsigned int *)&g_144980D90)(a1);
    if ( result )
      return result;
    v2 = g_144980D88;
  }
  return ((__int64 (           *)(__int64, __int64))GetProcAddress)(v2, a1);
}

// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored

//----- (000000014009E590) ----------------------------------------------------
int sub_14009E590()
{
  unsigned __int64 v0;
  __int64 v1;
  __int64 Frequency;

  g_182A7D548 = 1000000000;
  LODWORD(v0) = QueryPerformanceFrequency((LARGE_INTEGER *)&Frequency);
  v1 = g_182A7D548;
  if ( (_DWORD)v0 )
    v1 = Frequency;
  g_182A7D548 = v1;
  if ( v1 )
  {
    if ( v1 < 0 )
    {
      v0 = v1 & 1 | ((unsigned __int64)v1 >> 1);
      *(double *)&g_182A7D550 = 1000.0 / ((double)(long long)v0 + (double)(long long)v0);
    }
    else
    {
      *(double *)&g_182A7D550 = 1000.0 / (double)(long long)v1;
    }
  }
  else
  {
    g_182A7D550 = 0;
  }
  return v0;
}

//----- (000000014009E7D0) ----------------------------------------------------
void            sub_14009E7D0(float *a1, __int64 a2)
{
  float v4;
  double v5;
  __int64 v6;
  __m128 v7;

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

//----- (000000014009E880) ----------------------------------------------------
__int64            sub_14009E880(float *a1, float *a2)
{
  float v3;
  float v4;
  float v5;
  double v6;
  float v7;
  double v8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009E880[80];
#define v10 (*(__int64 (*))(void *)(sr_frame_14009E880 + 0)) /* [rsp+0h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_14009E880 + 32)) /* [rsp+20h] */
#define v12 (*(float (*))(void *)(sr_frame_14009E880 + 48)) /* [rsp+30h] */
#define v13 (*(int (*))(void *)(sr_frame_14009E880 + 52)) /* [rsp+34h] */
#define v14 (*(float (*)[2])(void *)(sr_frame_14009E880 + 56)) /* [rsp+38h] */
#define v15 (*(float (*))(void *)(sr_frame_14009E880 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_14009E880 + 72)) /* [rsp+48h] */

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
  return 0; /* the function has no caller */
}
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16

//----- (000000014009E950) ----------------------------------------------------
float            sub_14009E950(__int64 a1, __int64 a2, double a3)
{
  int i;
  char v4;
  int v5;
  __int64 v6;
  char v7;
  float v9;

  for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
  {
    v4 = *((_BYTE *)&g_1862AE028 + i);
    if ( v4 != 47 && v4 > 44 && v4 < 58 )
      break;
  }
  v5 = 0;
  if ( i < (int)g_1862AE024 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= 255 )
        break;
      v7 = *((_BYTE *)&g_1862AE028 + i);
      if ( (unsigned __int8)(v7 - 48) > 9u && (unsigned __int8)(v7 - 45) > 1u )
        break;
      *((_BYTE *)&g_1863AE028 + v6) = v7;
      ++v5;
      ++v6;
      i = ++g_1862AE020;
    }
    while ( (int)g_1862AE020 < (int)g_1862AE024 );
  }
  *((_BYTE *)&g_1863AE028 + v5) = 0;
  crt_sscanf((__int64)&g_1863AE028, "%f", a3);
  return v9;
}

//----- (000000014009EA20) ----------------------------------------------------
void            sub_14009EA20(int a1, int a2)
{
  signed int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;

  if ( a2 != -1 )
  {
    v2 = -1;
    v3 = a1;
    v4 = 7166LL * a2;
    if ( (int)dword_140404A6C[v4 + 280658139] > 0 )
      v2 = dword_140404A6C[v4 + 280658140];
    v5 = 0;
    if ( !g_18329B180 )
      v5 = BYTE1(g_183F7CA40) != 0;
    if ( !g_151E46200 )
    {
      v5 = 3;
      if ( BYTE1(g_183F7CA40) )
        v5 = 2;
    }
    if ( !g_18329B180 )
    {
      if ( !BYTE1(g_183F7C974) && BYTE1(g_183F7C774) )
        sub_140116B00(v3, 1u, v5, v5 ^ 1);
      if ( LOBYTE(g_183F7C968) && !LOBYTE(g_183F7C768) )
        sub_140116B00(v3, 8u, v5, v5 ^ 1);
      if ( v2 == -1
        || (v6 = 1760LL * v2, ((dword_140404A6C[v6 + 278845898] - 25) & 0xFFFFFFF7) != 0)
        || dword_140404A6C[v6 + 278846052] != 1 )
      {
        if ( !BYTE2(g_183F7C97C) && BYTE2(g_183F7C77C) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !HIBYTE(g_183F7C97C) && HIBYTE(g_183F7C77C) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 4;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !LOBYTE(g_183F7C980) && LOBYTE(g_183F7C780) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 5;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !BYTE1(g_183F7C980) && BYTE1(g_183F7C780) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 6;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
        if ( !BYTE2(g_183F7C980) && BYTE2(g_183F7C780) )
        {
          dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
          dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 7;
          dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
          dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 0;
          dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
        }
      }
      v7 = g_18329CC38;
      if ( g_18329CC38 )
      {
        if ( g_183F7C754 )
        {
          if ( !g_183F7C6B4 )
            v7 = 0;
          g_18329CC38 = v7;
        }
      }
      else if ( g_18329CC3C )
      {
        dword_140404A6C[3597 * v3 + 71856367 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 3;
        dword_140404A6C[3597 * v3 + 71856368 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = 2;
        dword_140404A6C[3597 * v3 + 71856369 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = v5;
        dword_140404A6C[3597 * v3 + 71856370 + 21 * (int)dword_140404A6C[3597 * v3 + 71856362]] = -1;
        dword_140404A6C[3597 * v3 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v3 + 71856362] + 1) & 0x3F;
      }
      if ( g_18329CC2C || v7 )
      {
        v8 = g_18329CC48;
      }
      else
      {
        if ( !g_183F7C750 )
        {
LABEL_49:
          g_18329CC48 = 0;
          return;
        }
        v8 = g_18329CC48;
        if ( !g_183F7C6B0 )
          v8 = 1;
        g_18329CC48 = v8;
      }
      if ( !g_183F7C750 )
        goto LABEL_49;
      if ( v8 )
        dword_140404A6C[3597 * v3 + 71856325] |= 1u;
    }
  }
}

//----- (000000014009F050) ----------------------------------------------------
__int64            sub_14009F050(int a1, __int64 a2, double a3)
{
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int *v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int64 v26;
  int v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  unsigned int *v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  char v38;
  __int64 v39;
  float v40;
  float v41;
  __int64 v42;
  float v43;
  float v44;
  char v45;
  unsigned __int8 v46;
  unsigned int v47;
  int v48;
  char v49;
  __int64 v50;
  int v51;
  unsigned int v52;
  char v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned __int8 v57;
  unsigned int v58;
  __int64 v59;
  char v60;
  unsigned __int8 v61;
  unsigned int v62;
  int v63;
  __int64 v64;
  char v65;
  __int64 v66;
  char v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009F050[96];
#define v74 (*(__int64 (*))(void *)(sr_frame_14009F050 + 0)) /* [rsp+0h] */
#define v75 (*(int (*))(void *)(sr_frame_14009F050 + 32)) /* [rsp+20h] */
#define v76 (*(int (*))(void *)(sr_frame_14009F050 + 36)) /* [rsp+24h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_14009F050 + 40)) /* [rsp+28h] */
#define v78 (*(__int128 (*))(void *)(sr_frame_14009F050 + 48)) /* [rsp+30h] */
#define v79 (*(__int128 (*))(void *)(sr_frame_14009F050 + 64)) /* [rsp+40h] */
#define v80 (*(float (*))(void *)(sr_frame_14009F050 + 80)) /* [rsp+50h] */
#define v81 (*(__int64 (*))(void *)(sr_frame_14009F050 + 88)) /* [rsp+58h] */

  v3 = 0;
  v4 = a1;
  v75 = a1;
  renderer_current_font = 2;
  if ( g_183EBFAA8 == 1 )
  {
    g_18329CC24 = 1;
    v5 = 1;
    g_183EBFD5C = 0;
  }
  else
  {
    g_183EBFD5C = 1;
    v5 = 0;
    if ( !g_183EBFAA8 && a1 != -1 && g_18329CC24 )
      sub_140118B70(a1);
  }
  sub_14003A0F0();
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
  g_183F7C758 = sr_menu_relative_mouse(&v76, (int *)&v77);
  g_183F7C750 = g_183F7C758 & 1;
  g_183F7C754 = (LOBYTE(g_183F7C758) >> 2) & 1;
  g_183F7C6C8 = (float)v76;
  g_183F7C6CC = (float)(int)v77;
  *(unsigned int *)&g_183F7C6C0 = 1140850688;
  *(unsigned int *)&g_183F7C6C4 = 1134559232;
  sub_140198E40();
  if ( BYTE1(g_183F7C988) )
  {
    BYTE1(g_183F7C988) = 0;
    sub_140095FC0(v7, v6, v8);
  }
  v9 = g_1B0032404;
  v10 = g_1B0032400;
  v11 = 0;
  for ( g_18329CC4C = 0; v9 != v10; g_1B0032404 = v9 )
  {
    if ( v11 < 32 )
    {
      dword_140404A6C[5 * v11 + 280649849] = dword_140404A6C[5 * v9 + 468760167];
      dword_140404A6C[5 * g_18329CC4C + 280649852] = dword_140404A6C[5 * v9 + 468760169];
      dword_140404A6C[5 * g_18329CC4C + 280649851] = dword_140404A6C[5 * v9 + 468760168];
      dword_140404A6C[5 * g_18329CC4C + 280649853] = dword_140404A6C[5 * v9 + 468760170];
      dword_140404A6C[5 * g_18329CC4C + 280649850] = dword_140404A6C[5 * v9 + 468760171];
      v11 = ++g_18329CC4C;
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
          v11 = g_18329CC4C;
        }
      }
    }
  }
  v15 = 2;
  v16 = (__int64)&g_183F7C960;
  v17 = &g_183F7C760;
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
    v31 = &g_18329CC58;
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
              *((_BYTE *)&g_183F7C960 + v16) = 0;
          }
          else
          {
            *((_BYTE *)&g_183F7C960 + v16) = 1;
          }
        }
      }
      ++v27;
      v31 += 5;
    }
    while ( v27 < v11 );
  }
  if ( game_unknown_189f0eea0 )
    sub_1400387E0();
  if ( g_183EBFAA8 || !v5 )
  {
    v33 = g_18329CC24;
    if ( g_18329CC24 )
    {
      g_18329CC2C = 1;
      goto LABEL_39;
    }
  }
  else
  {
    v33 = 0;
    g_18329CC24 = 0;
  }
  v34 = g_18329CC2C;
  if ( !g_183F7C750 )
    v34 = 0;
  g_18329CC2C = v34;
LABEL_39:
  g_18329CC28 = v33;
  if ( !g_183E93540 && LOBYTE(g_183F7C988) && !LOBYTE(g_183F7C788) )
  {
    LOBYTE(g_183E93550) = 0;
    g_183E93540 = 1;
  }
  if ( replay_active )
  {
    if ( HIBYTE(g_183F7C970) && !HIBYTE(g_183F7C770) )
      game_paused ^= 1u;
    if ( BYTE2(g_183F7C970) )
    {
      v35 = game_single_step;
      if ( !BYTE2(g_183F7C770) )
        v35 = 1;
      game_single_step = v35;
    }
    if ( LOBYTE(g_183F7C96C) && !LOBYTE(g_183F7C76C) )
      frame_slow_pacing ^= 1u;
    v36 = g_183F79DE4;
    if ( BYTE1(g_183F7C994) )
      v36 = -1;
    g_183F79DE4 = v36;
    if ( BYTE2(g_183F7C97C) )
    {
      v37 = 1;
      g_183F79DE4 = -1;
      g_144CBFAC4 = 1;
      v36 = -1;
    }
    else
    {
      v37 = g_144CBFAC4;
    }
    v38 = BYTE1(g_183F7CA40);
    if ( HIBYTE(g_183F7C97C) )
    {
      v37 = 2;
      g_144CBFAC4 = 2;
      if ( BYTE1(g_183F7CA40) )
      {
        g_183F7C398 = g_183F7C37C;
        g_183F7C39C = g_183F7C380;
        g_183F7C3A0 = g_183F7C384;
        v78 = xmmword_140278D30;
        v80 = 1.0;
        v79 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v78, (float *)&v78 + 3, sr_export_float_lane_container((unsigned __int64)g_183F7C388));
        sub_14007B2A0((__int64)&v78, (float *)&v78, sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
        *(_QWORD *)&a3 = *(unsigned int *)&g_183F7C390;
        v37 = g_144CBFAC4;
        v36 = g_183F79DE4;
        v38 = BYTE1(g_183F7CA40);
        v39 = 7LL * (int)g_144CBFAC4;
        v40 = *((float *)&v79 + 3) * g_183F7C390;
        *(float *)&dword_140404A6C[v39 + 284024381] = (float)(*((float *)&v79 + 2)
                                                            * g_183F7C390)
                                                    + *(float *)&dword_140404A6C[v39 + 284024381];
        v41 = v80 * *(float *)&a3;
        *(float *)&dword_140404A6C[v39 + 284024382] = v40 + *(float *)&dword_140404A6C[v39 + 284024382];
        *(float *)&dword_140404A6C[v39 + 284024383] = v41 + *(float *)&dword_140404A6C[v39 + 284024383];
        dword_140404A6C[v39 + 284024384] = g_183F7C388;
        dword_140404A6C[v39 + 284024385] = g_183F7C38C;
      }
    }
    if ( LOBYTE(g_183F7C980) )
    {
      v37 = 3;
      g_144CBFAC4 = 3;
      if ( v38 )
      {
        g_183F7C3B4 = g_183F7C37C;
        g_183F7C3B8 = g_183F7C380;
        g_183F7C3BC = g_183F7C384;
        v78 = xmmword_140278D30;
        v80 = 1.0;
        v79 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v78, (float *)&v78 + 3, sr_export_float_lane_container((unsigned __int64)g_183F7C388));
        sub_14007B2A0((__int64)&v78, (float *)&v78, sr_export_float_lane_container((unsigned __int64)g_183F7C38C));
        *(_QWORD *)&a3 = *(unsigned int *)&g_183F7C390;
        v37 = g_144CBFAC4;
        v36 = g_183F79DE4;
        v38 = BYTE1(g_183F7CA40);
        v42 = 7LL * (int)g_144CBFAC4;
        v43 = *((float *)&v79 + 3) * g_183F7C390;
        *(float *)&dword_140404A6C[v42 + 284024381] = (float)(*((float *)&v79 + 2)
                                                            * g_183F7C390)
                                                    + *(float *)&dword_140404A6C[v42 + 284024381];
        v44 = v80 * *(float *)&a3;
        *(float *)&dword_140404A6C[v42 + 284024382] = v43 + *(float *)&dword_140404A6C[v42 + 284024382];
        *(float *)&dword_140404A6C[v42 + 284024383] = v44 + *(float *)&dword_140404A6C[v42 + 284024383];
        dword_140404A6C[v42 + 284024384] = g_183F7C388;
        dword_140404A6C[v42 + 284024385] = g_183F7C38C;
      }
    }
    v45 = g_183F7C78C;
    if ( LOBYTE(g_183F7C98C) && !LOBYTE(g_183F7C78C) )
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
        if ( *(unsigned int *)((char *)&g_18329E308 + v16) )
        {
          if ( *(int *)((char *)&g_18329E344 + v16) > 0
            && *(unsigned int *)((char *)&g_1832A5284 + v16) <= 2 )
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
      g_183F79DE4 = v47;
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
    v33 = g_18329CC24;
  }
  else
  {
    v36 = g_183F79DE4;
    v38 = BYTE1(g_183F7CA40);
    v45 = g_183F7C78C;
  }
  if ( (_DWORD)v4 != -1 && !game_unknown_189f0eea0 )
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
    v54 = game_type;
    v55 = g_18329B180;
    if ( game_type == 4 && dword_140404A6C[v50 + 71856266] )
    {
      if ( dword_140404A6C[v50 + 71856342] == 1
        && HIBYTE(g_183F7C984)
        && !HIBYTE(g_183F7C784) )
      {
        v56 = g_183F79DEC ^ 1;
        g_183F79DEC ^= 1u;
      }
      else
      {
        v56 = g_183F79DEC;
      }
      if ( v56 )
      {
        if ( BYTE2(g_183F7C97C) )
          v36 = -1;
        g_183F79DE4 = v36;
        if ( LOBYTE(g_183F7C98C) )
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
            g_183F79DE4 = v58;
          }
        }
      }
    }
    else
    {
      g_183F79DEC = 0;
      if ( (game_type == 3 || game_type - 5 <= 2)
        && !g_183F79DE8
        && !g_18329B180 )
      {
        if ( BYTE2(g_183F7C97C) )
          v36 = -1;
        if ( LOBYTE(g_183F7C98C) && !v45 )
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
        if ( game_state != 2 )
          v36 = -1;
        g_183F79DE4 = v36;
      }
    }
LABEL_140:
    v66 = g_18329CC38;
    g_18329CC3C = g_18329CC38;
    *(_QWORD *)&g_18329CC40 = 0;
    v67 = *((_BYTE *)&g_183F7C960 + (int)g_18329DEE0);
    if ( !v67 )
      v66 = 0;
    g_18329CC38 = v66;
    if ( !g_18329B180 )
    {
      g_18329CC44 = *((_BYTE *)&g_183F7C960 + (int)g_18329DEE8) != 0;
      if ( !v67 || *((_BYTE *)&g_183F7C760 + (int)g_18329DEE0) )
      {
        if ( !(_DWORD)v66 )
          g_18329CC40 = g_183F7C754 != 0;
      }
      else
      {
        g_18329CC38 = 1;
      }
    }
    v68 = (int)dword_140404A6C[v50 + 71856292];
    dword_140404A6C[v50 + 71856339] = 0;
    if ( (_DWORD)v68 != -1 )
    {
      v66 = 28664 * v68;
      if ( (int)dword_140404A6C[7166 * v68 + 280651318] > 0 )
      {
        v69 = *(int *)((char *)&g_18329E330 + v66);
        dword_140404A6C[v50 + 71856339] = 1;
        if ( (_DWORD)v69 != -1 )
        {
          if ( dword_140404A6C[24944 * dword_140404A6C[5210 * v69 + 129716710] + 346707719] == 1
            || *(unsigned int *)((char *)&g_18329E334 + v66) )
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
        if ( BYTE2(g_183F7C97C) )
        {
          v3 = 64;
          dword_140404A6C[v50 + 71856325] = 64;
        }
        if ( HIBYTE(g_183F7C97C) )
        {
          v3 |= 0x80u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( LOBYTE(g_183F7C980) )
        {
          v3 |= 0x100u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( BYTE1(g_183F7C980) )
        {
          v3 |= 0x200u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( BYTE1(g_183F7C974) )
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
  return 0; /* the function has no caller */
}
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81

// 14009F41D: conditional instruction was optimized away because rdx.8 is in (1..FF)

