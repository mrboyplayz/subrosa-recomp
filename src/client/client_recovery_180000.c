#include "shared_client.h"


//----- (0000000140187180) ----------------------------------------------------
float            sub_140187180(int a1, float a2, float a3, float a4, float a5, float a6)
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


//----- (0000000140187270) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_140187270(float a1, float a2, float a3, double a4, float a5)
{
  __int128 v5; // xmm7

  v5 = *(_OWORD *)&a4;
  *(float *)&v5 = (float)((float)((float)((float)((float)((float)(*(float *)&a4 * 3.0) * (float)(1.0 - a1))
                                                + (float)(a1 * a5))
                                        * a1)
                                + (float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)(a3 * 3.0)))
                        * a1)
                + (float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)((float)(1.0 - a1) * a2));
  return (__m128)v5;
}

// 140187270: inconsistent variable size for 'xmm3_8.8'

//----- (00000001401872F0) ----------------------------------------------------
float            sub_1401872F0(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v7; // xmm8_4
  float v8; // [rsp+40h] [rbp+8h]

  if ( a1 == 1 )
    return a6 - a3;
  v7 = a2 + a2;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a3 - (float)(a4 + a4)) + a6) * v7) - (float)(a3 + a3)) + (float)(a4 + a4);
  if ( a1 == 3 )
    return (float)((float)((float)((float)((float)((float)((float)((float)(a4 * 3.0) - a3) - (float)(a5 * 3.0)) + a6)
                                         * a2)
                                 * (float)(a2 * 3.0))
                         + (float)((float)((float)((float)(a3 * 3.0) - (float)(a4 * 6.0)) + (float)(a5 * 3.0)) * v7))
                 - (float)(a3 * 3.0))
         + (float)(a4 * 3.0);
  return v8;
}


//----- (0000000140187410) ----------------------------------------------------
_BOOL8            sub_140187410(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v8; // xmm4_4
  float v9; // xmm15_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm12_4
  float v17; // xmm13_4
  float v18; // xmm9_4
  float v19; // xmm4_4
  float v20; // xmm7_4
  float v21; // xmm14_4
  float v22; // xmm11_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm8_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm8_4
  float v32; // xmm11_4
  float v33; // xmm14_4
  float v34; // xmm8_4
  float v35; // xmm5_4
  float v36; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187410[48];
#define v37 (*(float (*))(void *)(sr_frame_140187410 + 0)) /* [rsp+B0h] */
#define v38 (*(float (*))(void *)(sr_frame_140187410 + 8)) /* [rsp+B8h] */
#define v39 (*(float (*))(void *)(sr_frame_140187410 + 16)) /* [rsp+C0h] */
#define v40 (*(float (*))(void *)(sr_frame_140187410 + 24)) /* [rsp+C8h] */
#define v41 (*(float (*))(void *)(sr_frame_140187410 + 32)) /* [rsp+D0h] */

  v5 = a3[1];
  v6 = a3[2];
  v8 = *a5;
  v9 = *a3;
  v10 = a5[1] - v5;
  v41 = a5[1];
  v11 = v8 - *a3;
  v40 = a5[2];
  v38 = a4[1] - v5;
  v37 = a4[2] - v6;
  v39 = *a4 - *a3;
  v12 = (float)(v10 * v37) - (float)((float)(v40 - v6) * v38);
  v13 = (float)((float)(v40 - v6) * v39) - (float)(v11 * v37);
  v14 = (float)(v11 * v38) - (float)(v10 * v39);
  v15 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v15 == 0.0 )
  {
    v16 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v16 = (float)(1.0 / v15) * v12;
    v17 = (float)(1.0 / v15) * v13;
    v18 = (float)(1.0 / v15) * v14;
  }
  v19 = a2[1];
  v20 = a2[2];
  v21 = *a1;
  v22 = a1[1];
  v23 = (float)((float)((float)(v9 - *a2) * v16) + (float)((float)(v5 - v19) * v17)) + (float)((float)(v6 - v20) * v18);
  v24 = a1[2];
  v25 = (float)((float)((float)(v9 - *a1) * v16) + (float)((float)(v5 - v22) * v17)) + (float)((float)(v6 - v24) * v18);
  if ( v25 <= 0.0 )
  {
    if ( v25 < 0.0 && v23 < 0.0 )
      return 0;
  }
  else if ( v23 > 0.0 )
  {
    return 0;
  }
  v27 = v20 - v24;
  v28 = *a2 - v21;
  v29 = v19 - v22;
  v30 = (float)((float)(v28 * v16) + (float)(v29 * v17)) + (float)(v27 * v18);
  if ( v30 == 0.0 )
    return 0;
  v31 = v25 / v30;
  v32 = (float)(v31 * v28) + v21;
  v33 = (float)(v31 * v29) + a1[1];
  v34 = (float)(v31 * v27) + a1[2];
  if ( (float)((float)((float)((float)((float)((float)(v33 - v5) * v37) - (float)((float)(v34 - v6) * v38)) * v16)
                     + (float)((float)((float)((float)(v34 - v6) * v39) - (float)((float)(v32 - v9) * v37)) * v17))
             + (float)((float)((float)((float)(v32 - v9) * v38) - (float)((float)(v33 - v5) * v39)) * v18)) < 0.0 )
    return 0;
  v35 = a5[1] - a4[1];
  v36 = a5[2] - a4[2];
  return (float)((float)((float)((float)((float)((float)(v33 - a4[1]) * v36) - (float)((float)(v34 - a4[2]) * v35)) * v16)
                       + (float)((float)((float)((float)(v34 - a4[2]) * (float)(*a5 - *a4))
                                       - (float)((float)(v32 - *a4) * v36))
                               * v17))
               + (float)((float)((float)((float)(v32 - *a4) * v35) - (float)((float)(v33 - a4[1]) * (float)(*a5 - *a4)))
                       * v18)) >= 0.0
      && (float)((float)((float)((float)((float)((float)(v33 - v41) * (float)(a3[2] - v40))
                                       - (float)((float)(v34 - v40) * (float)(a3[1] - v41)))
                               * v16)
                       + (float)((float)((float)((float)(v34 - v40) * (float)(v9 - *a5))
                                       - (float)((float)(v32 - *a5) * (float)(a3[2] - v40)))
                               * v17))
               + (float)((float)((float)((float)(v32 - *a5) * (float)(a3[1] - v41))
                               - (float)((float)(v33 - v41) * (float)(v9 - *a5)))
                       * v18)) >= 0.0;
}
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41


//----- (00000001401880C0) ----------------------------------------------------
__m128i *           sub_1401880C0(     __m128i *a1, unsigned int a2)
{
  __m128i *result; // rax

  if ( a2 <= 0x400 )
  {
    dword_140404A6C[278384730] = a2;
    result = sub_1401FC920((__m128i *)&dword_140404A6C[278384731], a1, a2);
    dword_140404A6C[278384987] = 1;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1829F8BD4: using guessed type unsigned int;
// 1829F8FD8: using guessed type unsigned int;

//----- (0000000140188900) ----------------------------------------------------
__int64            sub_140188900(int *a1, float *a2, float *a3, int a4)
{
  float *v4; // rbp
  float v5; // xmm0_4
  int *v6; // r13
  int v7; // ebx
  float v9; // xmm1_4
  char v10; // r15
  int v11; // r12d
  int v12; // edx
  float v13; // xmm0_4
  int v14; // ecx
  unsigned __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // r11
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140188900[352];
#define v28 (*(__int64 (*))(void *)(sr_frame_140188900 + 0)) /* [rsp+0h] */
#define v29 (*(int (*))(void *)(sr_frame_140188900 + 48)) /* [rsp+30h] */
#define v30 (*(int (*))(void *)(sr_frame_140188900 + 52)) /* [rsp+34h] */
#define v31 (*(float * (*))(void *)(sr_frame_140188900 + 56)) /* [rsp+38h] */
#define v32 (*(int * (*))(void *)(sr_frame_140188900 + 64)) /* [rsp+40h] */
#define v33 (*(_DWORD (*)[64])(void *)(sr_frame_140188900 + 80)) /* [rsp+50h] */
#define v34 (*(__int64 (*))(void *)(sr_frame_140188900 + 336)) /* [rsp+150h] */

  v4 = a2;
  v5 = *a2;
  v6 = a1;
  v7 = 0;
  v9 = a2[2];
  v10 = a4;
  v31 = a2;
  v11 = (int)(float)(v5 * 0.015625);
  v32 = a1;
  v30 = a4;
  v12 = (int)(float)(*a3 * 0.015625);
  v13 = a3[2] * 0.015625;
  v29 = v12;
  v14 = (int)(float)(v9 * 0.015625);
  if ( v14 <= (int)v13 )
  {
    v15 = v14;
    v16 = 0;
    v17 = (__int64)v14 << 6;
    v18 = (unsigned int)((int)v13 - v14 + 1);
    do
    {
      if ( v15 <= 0x3F && v11 <= v12 )
      {
        v19 = v11;
        v20 = (unsigned int)(v12 - v11 + 1);
        do
        {
          if ( v19 <= 0x3F )
          {
            v21 = 0;
            v22 = (int)dword_140404A6C[9 * v17 + 254352099 + 9 * v19];
            if ( v22 > 0 )
            {
              do
              {
                if ( v16 < 64 )
                {
                  ++v7;
                  v33[v16++] = dword_140404A6C[8 * v17 + 254352100 + 8 * v19 + v17 + v19 + v21];
                }
                ++v21;
              }
              while ( v21 < v22 );
            }
          }
          ++v19;
          --v20;
        }
        while ( v20 );
        v12 = v29;
      }
      ++v15;
      v17 += 64;
      --v18;
    }
    while ( v18 );
    v4 = v31;
    v10 = v30;
    v6 = v32;
  }
  v23 = v7;
  if ( v7 > 0 )
  {
    v24 = 0;
    do
    {
      v25 = (int)v33[v24];
      v26 = 15432 * v25;
      if ( *(float *)&dword_140404A6C[15432 * v25 + 358312926] <= *a3
        && *(float *)&dword_140404A6C[v26 + 358312927] <= a3[1]
        && *(float *)&dword_140404A6C[v26 + 358312928] <= a3[2]
        && *(float *)&dword_140404A6C[v26 + 358312929] >= *v4
        && *(float *)&dword_140404A6C[v26 + 358312930] >= v4[1]
        && *(float *)&dword_140404A6C[v26 + 358312931] >= v4[2] )
      {
        if ( (v10 & 1) != 0 )
          sub_140188720(v6, v4, a3, v25, 0);
        if ( (v10 & 2) != 0 )
          sub_140188720(v6, v4, a3, v25, 1);
        if ( (v10 & 4) != 0 )
          sub_140188720(v6, v4, a3, v25, 2);
      }
      ++v24;
    }
    while ( v24 < v23 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014018C250) ----------------------------------------------------
void            sub_14018C250(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  signed int v3; // eax
  unsigned int *v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax

  if ( a1 != -1 )
  {
    v1 = 396LL * a1;
    v2 = (int)dword_140404A6C[v1 + 225426186];
    if ( v2 > 0 )
    {
      v3 = dword_140404A6C[132384229];
      v4 = &dword_140404A6C[v1 + 225426187];
      do
      {
        v5 = v3;
        v6 = *v4++;
        dword_140404A6C[v5 + 132384230] = v6;
        v3 = ++dword_140404A6C[132384229];
        --v2;
      }
      while ( v2 );
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FD06200: using guessed type unsigned int;

//----- (000000014018C2B0) ----------------------------------------------------
void            sub_14018C2B0(_DWORD *a1, int *a2)
{
  int v2; // xmm5_4
  int v3; // xmm2_4
  int v4; // xmm4_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm3_4
  int v8; // xmm6_4
  int v9; // xmm7_4

  v2 = *a2;
  v3 = a2[3];
  v4 = a2[4];
  v5 = a2[6];
  v6 = a2[7];
  v7 = a2[8];
  v8 = a2[5];
  v9 = a2[1];
  a1[6] = a2[2];
  a1[3] = v9;
  a1[7] = v8;
  *a1 = v2;
  a1[1] = v3;
  a1[2] = v5;
  a1[4] = v4;
  a1[5] = v6;
  a1[8] = v7;
}


//----- (000000014018C340) ----------------------------------------------------
void            sub_14018C340(int a1)
{
  __m128 v2; // xmm10
  __m128 v3; // xmm11
  float v4; // xmm12_4
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  _DWORD sr_branch_position[3];
  float sr_branch_axis[3];
  _DWORD sr_branch_position2[3];
  _DWORD sr_branch_matrix[9];
  _DWORD sr_branch_matrix2[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018C340[192];
#define v8 (*(__int64 (*))(void *)(sr_frame_14018C340 + 0)) /* [rsp+8h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_14018C340 + 176)) /* [rsp+B8h] */

  (*(__int128 *)sr_branch_matrix) = xmmword_140278D30;
  dword_140404A6C[177167565] = 0;
  (*(__int128 *)(sr_branch_matrix + 4)) = xmmword_140278D30;
  dword_140404A6C[177495247] = 0;
  sr_branch_matrix[8] = 1065353216;
  dword_140404A6C[178519250] = 0;
  (*(unsigned __int64 *)sr_branch_position) = 0;
  (*(float *)&sr_branch_position[2]) = 0.0;
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1056964608), 0.375, 4.0);
  v2 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(__int128 *)sr_branch_matrix)))));
  v3 = ((__m128)_mm_cvtsi32_si128((int)((*(__int128 *)(sr_branch_matrix + 4)))));
  (*(__int128 *)(sr_branch_matrix2 + 4)) = (*(__int128 *)(sr_branch_matrix + 4));
  SR_VEC_LANES(128, v2, f32)[0] = *((float *)&(*(__int128 *)sr_branch_matrix) + 3) * 4.0;
  sr_branch_axis[1] = 0.0;
  SR_VEC_LANES(128, v3, f32)[0] = *(float *)&(*(__int128 *)(sr_branch_matrix + 4)) * 4.0;
  v4 = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  (*(unsigned __int64 *)sr_branch_position) = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v2, v3), u64)[0];
  (*(unsigned __int64 *)sr_branch_position2) = (*(unsigned __int64 *)sr_branch_position);
  (*(__int128 *)sr_branch_matrix2) = (*(__int128 *)sr_branch_matrix);
  sr_branch_matrix2[8] = sr_branch_matrix[8];
  (*(float *)&sr_branch_position[2]) = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  (*(_DWORD *)&sr_branch_axis[2]) = 1064852291;
  sr_branch_axis[0] = 0.24253564;
  (*(float *)&sr_branch_position2[2]) = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix), sr_branch_axis, sr_export_float_lane_container(1040187392));
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix2), sr_branch_axis, sr_export_float_lane_container(3210739712LL));
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1052770304), 0.25, 3.0);
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position2), (float *)&(*(__int128 *)sr_branch_matrix2), sr_export_float_lane_container(1044381696), 0.125, 3.0);
  v5 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(__int128 *)sr_branch_matrix)))));
  SR_VEC_LANES(128, v5, f32)[0] = (float)(*((float *)&(*(__int128 *)sr_branch_matrix) + 3) * 3.0) + SR_VEC_LANES(128, v2, f32)[0];
  v6 = ((__m128)_mm_cvtsi32_si128((int)((*(__int128 *)(sr_branch_matrix + 4)))));
  (*(__int128 *)(sr_branch_matrix2 + 4)) = (*(__int128 *)(sr_branch_matrix + 4));
  SR_VEC_LANES(128, v6, f32)[0] = (float)(*(float *)&(*(__int128 *)(sr_branch_matrix + 4)) * 3.0) + SR_VEC_LANES(128, v3, f32)[0];
  (*(float *)&sr_branch_position[2]) = (float)(*((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 3.0) + v4;
  (*(__int128 *)sr_branch_matrix2) = (*(__int128 *)sr_branch_matrix);
  (*(unsigned __int64 *)sr_branch_position) = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v5, v6), u64)[0];
  (*(unsigned __int64 *)sr_branch_position2) = (*(unsigned __int64 *)sr_branch_position);
  sr_branch_matrix2[8] = sr_branch_matrix[8];
  (*(_DWORD *)&sr_branch_axis[2]) = -1087044365;
  sr_branch_axis[0] = 0.70710677;
  (*(float *)&sr_branch_position2[2]) = (*(float *)&sr_branch_position[2]);
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix), sr_branch_axis, sr_export_float_lane_container(1040187392));
  sub_14007B2A0((__int64)&(*(__int128 *)sr_branch_matrix2), sr_branch_axis, sr_export_float_lane_container(3210739712LL));
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1048576000), 0.1875, 2.0);
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position2), (float *)&(*(__int128 *)sr_branch_matrix2), sr_export_float_lane_container(1040187392), 0.09375, 2.0);
  sub_1401449C0(a1, 1);
  return;
}
#undef v8
#undef v21

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014018C6A0) ----------------------------------------------------
__int64            sub_14018C6A0(float *a1, float *a2, double a3, float a4, float a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // r14d
  __m128 v9; // xmm0
  __int64 v10; // rbp
  float v11; // xmm12_4
  __m128d v13; // xmm8
  __m128 v14; // xmm0
  double v15; // xmm7_8
  __int64 v16; // rcx
  double v17; // xmm6_8
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  double v21; // xmm2_8
  float v22; // xmm1_4
  float v23; // xmm5_4
  unsigned int v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  unsigned int v27; // eax
  float v28; // xmm3_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  unsigned int v32; // xmm5_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  unsigned int v35; // ebx
  __m128d v36; // xmm7
  __int64 v37; // rdx
  __m128 v38; // xmm0
  double v39; // xmm6_8
  __int64 v40; // rcx
  double v41; // xmm5_8
  float v42; // xmm4_4
  float v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  unsigned int v46; // xmm3_4
  float v47; // xmm4_4
  __int64 v48; // rcx
  float v49; // xmm3_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm12_4
  float v54; // xmm13_4
  int v55; // eax
  unsigned int v56; // ebx
  int v57; // r11d
  __int64 v58; // rbp
  unsigned int v59; // xmm1_4
  unsigned int v60; // xmm0_4
  unsigned int v61; // xmm12_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  __int64 v64; // rcx
  float v65; // xmm13_4
  unsigned int v66; // edi
  unsigned int v67; // xmm1_4
  unsigned int v68; // xmm0_4
  unsigned int v69; // xmm13_4
  unsigned int v70; // esi
  __int64 result; // rax
  unsigned int v72; // edx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // edx
  __int64 v78; // rax
  unsigned int v79; // r10d
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax

  v5 = dword_140404A6C[177167565];
  v8 = dword_140404A6C[177167565];
  v9 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  v10 = 3;
  v11 = *(float *)&a3;
  do
  {
    v13 = _mm_cvtps_pd(v9);
    v14 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v13, f64)[0], (__int64)a2, a3));
    v15 = *(double *)SR_VEC_LANES(128, v14, u64);
    v16 = (int)(3 * v5);
    v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v14, (__m128d)v14, 1), f64)[0];
    v18 = v11 * v17;
    v19 = -(v11 * *(double *)SR_VEC_LANES(128, v14, u64));
    v20 = v18;
    HIDWORD(v21) = 0;
    v22 = (float)(v18 * a2[1]) + a1[1];
    v23 = (float)(v18 * a2[2]) + a1[2];
    *(float *)&v24 = (float)((float)(v20 * *a2) + *a1) + (float)(v19 * a2[6]);
    SR_VEC_LANES(128, v14, f32)[0] = v19 * a2[7];
    v25 = v19 * a2[8];
    dword_140404A6C[v16 + 177167567] = v24;
    *(float *)&dword_140404A6C[v16 + 177167568] = v22 + SR_VEC_LANES(128, v14, f32)[0];
    *(float *)&dword_140404A6C[v16 + 177167569] = v23 + v25;
    v26 = a4 * v17;
    ++dword_140404A6C[177167565];
    v27 = 3 * dword_140404A6C[177167565];
    v28 = -(a4 * v15);
    v29 = (float)((float)(a5 * a2[3]) + *a1) + (float)(v26 * *a2);
    SR_VEC_LANES(128, v14, f32)[0] = v26 * a2[1];
    v30 = v26 * a2[2];
    v31 = (float)((float)(a5 * a2[4]) + a1[1]) + SR_VEC_LANES(128, v14, f32)[0];
    *(float *)&v32 = v29 + (float)(v28 * a2[6]);
    v33 = v28 * a2[7];
    SR_VEC_LANES(128, v14, f32)[0] = (float)(a5 * a2[5]) + a1[2];
    v34 = v28 * a2[8];
    *(float *)&v21 = v31 + v33;
    dword_140404A6C[v27 + 177167567] = v32;
    dword_140404A6C[v27 + 177167568] = LODWORD(v21);
    *(float *)&dword_140404A6C[v27 + 177167569] = (float)(SR_VEC_LANES(128, v14, f32)[0] + v30) + v34;
    SR_VEC_LANES(128, v13, f64)[0] = SR_VEC_LANES(128, v13, f64)[0] + 1.047197551196598;
    v35 = ++dword_140404A6C[177167565];
    v36 = _mm_cvtps_pd(_mm_cvtpd_ps(v13));
    v38 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v36, f64)[0], v37, v21));
    v39 = *(double *)SR_VEC_LANES(128, v38, u64);
    v40 = (int)(3 * v35);
    v41 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v38, (__m128d)v38, 1), f64)[0];
    *(float *)&v21 = -(v11 * *(double *)SR_VEC_LANES(128, v38, u64));
    v42 = v11 * v41;
    v43 = (float)(v42 * *a2) + *a1;
    v44 = (float)(v42 * a2[1]) + a1[1];
    v45 = (float)(v42 * a2[2]) + a1[2];
    *(float *)&v46 = v43 + (float)(*(float *)&v21 * a2[6]);
    SR_VEC_LANES(128, v38, f32)[0] = *(float *)&v21 * a2[7];
    *(float *)&v21 = *(float *)&v21 * a2[8];
    dword_140404A6C[v40 + 177167567] = v46;
    *(float *)&dword_140404A6C[v40 + 177167568] = v44 + SR_VEC_LANES(128, v38, f32)[0];
    HIDWORD(a3) = 0;
    *(float *)&dword_140404A6C[v40 + 177167569] = v45 + *(float *)&v21;
    v47 = a4 * v41;
    ++dword_140404A6C[177167565];
    v48 = 3 * dword_140404A6C[177167565];
    v49 = -(a4 * v39);
    *(float *)&v41 = (float)((float)(a5 * a2[3]) + *a1) + (float)(v47 * *a2);
    SR_VEC_LANES(128, v38, f32)[0] = v47 * a2[1];
    v50 = v47 * a2[2];
    *(float *)&a3 = (float)((float)(a5 * a2[4]) + a1[1]) + SR_VEC_LANES(128, v38, f32)[0];
    *(float *)&v41 = *(float *)&v41 + (float)(v49 * a2[6]);
    v51 = v49 * a2[7];
    SR_VEC_LANES(128, v38, f32)[0] = (float)(a5 * a2[5]) + a1[2];
    v52 = v49 * a2[8];
    dword_140404A6C[v48 + 177167567] = LODWORD(v41);
    *(float *)&a3 = *(float *)&a3 + v51;
    dword_140404A6C[v48 + 177167568] = LODWORD(a3);
    *(float *)&dword_140404A6C[v48 + 177167569] = (float)(SR_VEC_LANES(128, v38, f32)[0] + v50) + v52;
    v5 = dword_140404A6C[177167565] + 1;
    SR_VEC_LANES(128, v36, f64)[0] = SR_VEC_LANES(128, v36, f64)[0] + 1.047197551196598;
    ++dword_140404A6C[177167565];
    v9 = _mm_cvtpd_ps(v36);
    --v10;
  }
  while ( v10 );
  v53 = -v11;
  v54 = a4 + a5;
  v55 = 3 * v5;
  v56 = v8 + 12;
  v57 = 2;
  v58 = 2;
  *(float *)&v59 = (float)(v53 * a2[3]) + *a1;
  *(float *)&v60 = (float)(v53 * a2[4]) + a1[1];
  *(float *)&v61 = (float)(v53 * a2[5]) + a1[2];
  dword_140404A6C[v55 + 177167567] = v59;
  dword_140404A6C[v55 + 177167568] = v60;
  dword_140404A6C[v55 + 177167569] = v61;
  ++dword_140404A6C[177167565];
  v62 = v54 * a2[3];
  v63 = v54 * a2[4];
  v64 = 3 * dword_140404A6C[177167565];
  v65 = v54 * a2[5];
  v66 = v8 + 2;
  *(float *)&v67 = v62 + *a1;
  *(float *)&v68 = v63 + a1[1];
  *(float *)&v69 = v65 + a1[2];
  v70 = v8 + 13;
  dword_140404A6C[v64 + 177167567] = v67;
  dword_140404A6C[v64 + 177167568] = v68;
  dword_140404A6C[v64 + 177167569] = v69;
  ++dword_140404A6C[177167565];
  LODWORD(result) = dword_140404A6C[177495247];
  do
  {
    dword_140404A6C[3 * (_DWORD)result + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 - 1;
    v72 = v8 + 2 * ((v57 - 1) % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v72 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v73 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v73 + 178011345] = 1052770304;
    dword_140404A6C[v73 + 178011346] = 1052770304;
    dword_140404A6C[v73 + 178011347] = 1052770304;
    dword_140404A6C[v73 + 178011348] = 1052770304;
    dword_140404A6C[v73 + 178011349] = 1052770304;
    dword_140404A6C[v73 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v72 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v72;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v74 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v74 + 178011345] = 1052770304;
    dword_140404A6C[v74 + 178011346] = 1052770304;
    dword_140404A6C[v74 + 178011347] = 1052770304;
    dword_140404A6C[v74 + 178011348] = 1052770304;
    dword_140404A6C[v74 + 178011349] = 1052770304;
    dword_140404A6C[v74 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 - 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v72;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v75 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v75 + 178011345] = 1052770304;
    dword_140404A6C[v75 + 178011346] = 1052770304;
    dword_140404A6C[v75 + 178011347] = 1052770304;
    dword_140404A6C[v75 + 178011348] = 1052770304;
    dword_140404A6C[v75 + 178011349] = 1052770304;
    dword_140404A6C[v75 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v72 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v76 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v76 + 178011345] = 1052770304;
    dword_140404A6C[v76 + 178011346] = 1052770304;
    dword_140404A6C[v76 + 178011347] = 1052770304;
    dword_140404A6C[v76 + 178011348] = 1052770304;
    dword_140404A6C[v76 + 178011349] = 1052770304;
    dword_140404A6C[v76 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 1;
    v77 = v8 + 2 * (v57 % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v78 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v78 + 178011345] = 1052770304;
    dword_140404A6C[v78 + 178011346] = 1052770304;
    dword_140404A6C[v78 + 178011347] = 1052770304;
    dword_140404A6C[v78 + 178011348] = 1052770304;
    dword_140404A6C[v78 + 178011349] = 1052770304;
    dword_140404A6C[v78 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v77 + 1;
    v79 = v66 + 3;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v80 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v80 + 178011345] = 1052770304;
    dword_140404A6C[v80 + 178011346] = 1052770304;
    dword_140404A6C[v80 + 178011347] = 1052770304;
    dword_140404A6C[v80 + 178011348] = 1052770304;
    dword_140404A6C[v80 + 178011349] = 1052770304;
    dword_140404A6C[v80 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v77;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v81 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v81 + 178011345] = 1052770304;
    dword_140404A6C[v81 + 178011346] = 1052770304;
    dword_140404A6C[v81 + 178011347] = 1052770304;
    dword_140404A6C[v81 + 178011348] = 1052770304;
    dword_140404A6C[v81 + 178011349] = 1052770304;
    dword_140404A6C[v81 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v77 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v82 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v82 + 178011345] = 1052770304;
    dword_140404A6C[v82 + 178011346] = 1052770304;
    dword_140404A6C[v82 + 178011347] = 1052770304;
    dword_140404A6C[v82 + 178011348] = 1052770304;
    dword_140404A6C[v82 + 178011349] = 1052770304;
    dword_140404A6C[v82 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66 + 3;
    v83 = v8 + 2 * ((v57 + 1) % 6);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v83 + 1;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v84 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v84 + 178011345] = 1052770304;
    dword_140404A6C[v84 + 178011346] = 1052770304;
    dword_140404A6C[v84 + 178011347] = 1052770304;
    dword_140404A6C[v84 + 178011348] = 1052770304;
    dword_140404A6C[v84 + 178011349] = 1052770304;
    dword_140404A6C[v84 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v83 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v83;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v85 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v85 + 178011345] = 1052770304;
    dword_140404A6C[v85 + 178011346] = 1052770304;
    dword_140404A6C[v85 + 178011347] = 1052770304;
    dword_140404A6C[v85 + 178011348] = 1052770304;
    dword_140404A6C[v85 + 178011349] = 1052770304;
    dword_140404A6C[v85 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v83;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v86 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v86 + 178011345] = 1052770304;
    dword_140404A6C[v86 + 178011346] = 1052770304;
    dword_140404A6C[v86 + 178011347] = 1052770304;
    dword_140404A6C[v86 + 178011348] = 1052770304;
    dword_140404A6C[v86 + 178011349] = 1052770304;
    dword_140404A6C[v86 + 178011350] = 1052770304;
    ++dword_140404A6C[177495247];
    v57 += 3;
    v66 += 6;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v83 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v79;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v87 = 6 * dword_140404A6C[177495247];
    dword_140404A6C[v87 + 178011345] = 1052770304;
    dword_140404A6C[v87 + 178011346] = 1052770304;
    dword_140404A6C[v87 + 178011347] = 1052770304;
    dword_140404A6C[v87 + 178011348] = 1052770304;
    dword_140404A6C[v87 + 178011349] = 1052770304;
    dword_140404A6C[v87 + 178011350] = 1052770304;
    result = ++dword_140404A6C[177495247];
    --v58;
  }
  while ( v58 );
  return result;
}

// 14018C74B: variable 'a2' is possibly undefined
// 14018C8BD: variable 'v37' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (000000014018D440) ----------------------------------------------------
__int64            sub_14018D440(float *a1, int a2)
{
  char v3; // bl
  signed int v4; // r8d
  __int64 result; // rax
  float v6; // xmm1_4
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  sub_140115AE0(&v7, a2);
  v4 = (unsigned int)(1 << v3) >> 1;
  result = v7 & (unsigned int)v4;
  v6 = (float)(v7 & (v4 - 1)) * (6.28318530718 / (float)v4);
  *a1 = v6;
  if ( (_DWORD)result == v4 )
    *a1 = -v6;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014018D510) ----------------------------------------------------
__int64            sub_14018D510(_DWORD *a1, int a2, int a3)
{
  unsigned int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
    {
      return sub_140115AE0(a1, a3);
    }
    else
    {
      sub_140115AE0(&v9, 9);
      v8 = v9;
      if ( (v9 & 0x100) != 0 )
        v8 = v9 | 0xFFFFFE00;
      result = v8 + a2;
      *a1 = result;
    }
  }
  else
  {
    sub_140115AE0(&v9, 4);
    v6 = v9;
    if ( (v9 & 8) != 0 )
      v6 = v9 | 0xFFFFFFF0;
    result = v6 + a2;
    *a1 = result;
  }
  return result;
}


//----- (000000014018D5E0) ----------------------------------------------------
__int64            sub_14018D5E0(int *a1, int a2, int a3)
{
  __int64 result; // rax
  int v7; // ebp
  int v8; // edx
  int v9; // [rsp+48h] [rbp+20h] BYREF

  if ( dword_140404A6C[179992056] )
  {
    result = sub_140115AE0(&v9, 1);
    if ( !v9 )
    {
      *a1 = a2;
      return result;
    }
  }
  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
      return sub_140115D20(a1, a3);
    v7 = dword_140404A6C[157679550];
  }
  else
  {
    v7 = dword_140404A6C[157679549];
  }
  sub_140115AE0(&v9, v7);
  if ( (v9 & (1 << (v7 - 1))) == 1 << (v7 - 1) )
    v8 = v9 | (-1 << v7);
  else
    v8 = v9;
  *a1 = v8 + a2;
  result = (unsigned int)(v8 + 128);
  if ( (unsigned int)result <= 0xFF )
  {
    ++dword_140404A6C[(unsigned __int8)v8 + 179992058];
    return (__int64)&dword_140404A6C[179668285];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 165D84960: using guessed type unsigned int;
// 165D84964: using guessed type unsigned int;

//----- (000000014018D6D0) ----------------------------------------------------
__int64            sub_14018D6D0(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned int v7; // xmm4_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  __int64 result; // rax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 1760LL * a2;
  v4 = a1;
  dword_140404A6C[v3 + 278846107] = dword_140404A6C[v3 + 278846102];
  dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278846103];
  dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278846104];
  dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278846105];
  dword_140404A6C[v3 + 278846102] = dword_140404A6C[283831474];
  sub_140115AE0(&v11, 8);
  v5 = 318464LL * (int)v11 + 36 * v2;
  v6 = 318464 * v4 + 36 * v2;
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358015] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358015] + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358016] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358016] + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358017] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358017] + v5),
    28);
  *(float *)&v7 = (float)((float)*(int *)((char *)&dword_140404A6C[137358015] + v6) * 0.00024414062) - 4096.0;
  *(float *)&v8 = (float)*(int *)((char *)&dword_140404A6C[137358016] + v6) * 0.00024414062;
  *(float *)&v9 = (float)((float)*(int *)((char *)&dword_140404A6C[137358017] + v6) * 0.00024414062) - 4096.0;
  dword_140404A6C[v3 + 278845916] = v7;
  dword_140404A6C[v3 + 278845917] = v8;
  dword_140404A6C[v3 + 278845918] = v9;
  dword_140404A6C[v3 + 278846103] = v7;
  dword_140404A6C[v3 + 278846104] = dword_140404A6C[v3 + 278845917];
  dword_140404A6C[v3 + 278846105] = dword_140404A6C[v3 + 278845918];
  if ( !dword_140404A6C[v3 + 278846106] )
  {
    dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278845916];
    dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278845917];
    dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278845918];
    dword_140404A6C[v3 + 278846107] = dword_140404A6C[283831474];
  }
  dword_140404A6C[v3 + 278846106] = 1;
  sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[137358018] + v6), 2);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358019] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358019] + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358020] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358020] + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358021] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358021] + v5),
    14);
  sub_140191F90((float *)&dword_140404A6C[v3 + 278845934], (int *)((char *)&dword_140404A6C[137358018] + v6));
  result = dword_140404A6C[v3 + 278845898];
  if ( (_DWORD)result == 18 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846062], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846061], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846063], 30);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 26 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846112], 1);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 39 )
  {
    sub_140115AE0(&v11, 12);
    result = v11;
    if ( v11 == 4095 )
      result = 0xFFFFFFFFLL;
    dword_140404A6C[v3 + 278846113] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (000000014018DB20) ----------------------------------------------------
__int64            sub_14018DB20(int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1760LL * a1;
  sub_140115AE0(&dword_140404A6C[v1 + 278845898], 8);
  sub_140115AE0(&v5, 10);
  v2 = v5;
  if ( v5 == 1023 )
    v2 = -1;
  dword_140404A6C[v1 + 278845903] = v2;
  sub_140115AE0(&v5, 10);
  v3 = v5;
  if ( v5 == 1023 )
    v3 = -1;
  dword_140404A6C[v1 + 278845902] = v3;
  result = sub_140115AE0(&dword_140404A6C[v1 + 278845904], 4);
  if ( dword_140404A6C[v1 + 278845898] == 39 )
  {
    sub_140115AE0(&dword_140404A6C[v1 + 278846111], 5);
    return sub_140115AE0(&dword_140404A6C[v1 + 278846112], 5);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014018DBF0) ----------------------------------------------------
__int64            sub_14018DBF0(int a1)
{
  __int64 v1; // rsi
  int *v2; // r15
  __int64 result; // rax
  int v4; // eax
  _DWORD *v5; // r12
  int v6; // r13d
  _DWORD *v7; // rbx
  int *v8; // r15
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edi
  char *v12; // rbx
  int v13; // r14d
  unsigned int v14; // eax
  signed int v15; // ebx
  int v16; // ebp
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // xmm0_8
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // r15
  unsigned int v26; // eax
  int v27; // edx
  __int64 v28; // r10
  int v29; // r8d
  char v30; // r9
  int v31; // eax
  unsigned int *v32; // r15
  int v33; // r8d
  unsigned int v34; // r10d
  char v35; // r9
  int v36; // eax
  _DWORD *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // xmm0_8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // xmm0_8
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r9d
  char v68; // r8
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // xmm0_8
  __int64 v72; // rax
  __int64 v73; // xmm0_8
  __int64 v74; // rax
  __int64 v75; // rax
  signed int v76; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018DBF0[32];
#define v77 (*(unsigned int (*))(void *)(sr_frame_14018DBF0 + 0)) /* [rsp+70h] */
#define v78 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 8)) /* [rsp+78h] */
#define v79 (*(char * (*))(void *)(sr_frame_14018DBF0 + 16)) /* [rsp+80h] */
#define v80 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 24)) /* [rsp+88h] */

  v1 = (__int64)a1 << 7;
  v2 = (int *)((char *)&dword_140404A6C[297756285] + v1);
  v79 = (char *)&dword_140404A6C[297756285] + v1;
  result = sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756285] + v1), 6);
  if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1) != 23 )
  {
    sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756286] + v1), 28);
    v4 = *v2;
    v5 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v1);
    v6 = 10;
    if ( !*v2 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 4);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756294] + v1), 10);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756287] + v1), 4, 3);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756290] + v1), 4, 3);
      v4 = *v2;
    }
    if ( v4 == 1 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 4);
      v7 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      v78 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756294] + v1), 6);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756287] + v1), 4, 3);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756290] + v1), 4, 3);
      v4 = *v2;
    }
    else
    {
      v7 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      v78 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
    }
    if ( v4 == 2 )
    {
      v8 = (int *)((char *)&dword_140404A6C[297756293] + v1);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 6);
      sub_140115AE0(v7, 4);
      sub_140115AE0(&v77, 10);
      v9 = v77;
      if ( v77 == 1023 )
        v9 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v9;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756296] + v1), 4);
      v10 = *v8;
      v11 = 0;
      if ( *v8 <= 0 )
      {
        LOBYTE(v13) = v77;
      }
      else
      {
        v12 = (char *)&dword_140404A6C[297756301] + v1;
        do
        {
          sub_140115AE0(&v77, 7);
          LOBYTE(v13) = v77;
          ++v11;
          *v12++ = v77;
          v10 = *v8;
        }
        while ( v11 < *v8 );
        v7 = v78;
      }
      v2 = (int *)v79;
      *((_BYTE *)&dword_140404A6C[297756301] + v1 + v10) = 0;
      v4 = *v2;
    }
    else
    {
      LOBYTE(v13) = v77;
    }
    if ( v4 == 3 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 10);
      sub_140115AE0(v7, 8);
      sub_140115AE0(&v77, 4);
      v14 = v77;
      if ( v77 == 15 )
        v14 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v14;
    }
    if ( *v2 == 4 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 10);
      sub_140115AE0(v7, 4);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756295] + v1), 10);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v18 = v15;
          v15 += 12;
          v19 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v18);
          LODWORD(v18) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v18);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v19;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v18;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 12 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v20 = v15;
          v15 += 12;
          v21 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v20);
          LODWORD(v20) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v20);
          *(_QWORD *)((char *)&dword_140404A6C[297756290] + v1) = v21;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v1) = v20;
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    else
    {
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    v22 = *v2;
    if ( *v2 == 5 )
    {
      sub_140115AE0(v5, 20);
      sub_140115AE0(&v77, 10);
      v23 = v77;
      if ( v77 == 1023 )
        v23 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = v23;
      sub_140115AE0(&v77, 10);
      v24 = v77;
      if ( v77 == 1023 )
        v24 = -1;
      v25 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v1);
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v24;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756296] + v1), 4);
      v22 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1);
      v15 = dword_140404A6C[289317484];
      v17 = dword_140404A6C[289317485];
      v16 = dword_140404A6C[289317483];
    }
    else
    {
      v25 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v1);
    }
    if ( v22 == 6 )
    {
      sub_140115AE0(v5, 10);
      sub_140115AE0(v78, 3);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756295] + v1), 16);
      sub_140115AE0(v25, 2);
      v22 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1);
      v15 = dword_140404A6C[289317484];
      v17 = dword_140404A6C[289317485];
      v16 = dword_140404A6C[289317483];
    }
    v80 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v1);
    if ( v22 == 7 )
    {
      sub_140115AE0(v5, 16);
      sub_140115AE0(&v77, 10);
      v26 = v77;
      v27 = dword_140404A6C[289317484];
      if ( v77 == 1023 )
        v26 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = v26;
      if ( v27 < 0x10000 && v27 + 4 <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          ++v27;
          dword_140404A6C[289317485] = 0;
          dword_140404A6C[289317484] = v27;
        }
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v27);
        dword_140404A6C[289317484] = v27 + 4;
      }
      sub_140115AE0(v25, 24);
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      v28 = 0;
      v15 = dword_140404A6C[289317484];
      do
      {
        v29 = 7;
        if ( v15 < 0x10000 && v15 <= v16 )
        {
          v13 = 0;
          v30 = 0;
          while ( 1 )
          {
            v31 = 8 - v17;
            v13 |= (~(-1 << v29)
                  & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v30;
            if ( v29 < (unsigned int)(8 - v17) )
              break;
            if ( v29 == v31 )
            {
              dword_140404A6C[289317484] = ++v15;
              v17 = 0;
              goto LABEL_60;
            }
            ++v15;
            v17 = 0;
            v29 -= v31;
            dword_140404A6C[289317484] = v15;
            v30 += v31;
            dword_140404A6C[289317485] = 0;
            if ( v29 <= 0 )
              goto LABEL_61;
          }
          v17 += v29;
LABEL_60:
          dword_140404A6C[289317485] = v17;
        }
LABEL_61:
        *((_BYTE *)&dword_140404A6C[297756301] + v1 + v28++) = v13;
      }
      while ( v28 < 31 );
      v32 = (unsigned int *)v79;
      *((_BYTE *)&dword_140404A6C[297756308] + v1 + 3) = 0;
      v22 = *v32;
    }
    else
    {
      v32 = (unsigned int *)v79;
    }
    if ( v22 == 17 )
    {
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 10);
      sub_140115AE0(v78, 1);
      v15 = dword_140404A6C[289317484];
      v33 = 8;
      v16 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v34 = v77;
        v17 = dword_140404A6C[289317485];
      }
      else
      {
        v17 = dword_140404A6C[289317485];
        v34 = 0;
        v35 = 0;
        while ( 1 )
        {
          v36 = 8 - v17;
          v34 |= (~(-1 << v33)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v35;
          if ( v33 < (unsigned int)(8 - v17) )
            break;
          if ( v33 == v36 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
            goto LABEL_75;
          }
          ++v15;
          v17 = 0;
          v33 -= v36;
          dword_140404A6C[289317484] = v15;
          v35 += v36;
          dword_140404A6C[289317485] = 0;
          if ( v33 <= 0 )
            goto LABEL_75;
        }
        v17 += v33;
        dword_140404A6C[289317485] = v17;
      }
LABEL_75:
      if ( v34 == 255 )
        v34 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v34;
    }
    v37 = v80;
    if ( *v32 == 8 )
    {
      sub_140115AE0(v80, 8);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v38 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v38);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v39 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v39);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v40 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v40);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 9 )
    {
      sub_140115AE0(v37, 8);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v41 = v15;
          v15 += 12;
          v42 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v41);
          LODWORD(v41) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v41);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v42;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v41;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v43 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756297] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v43);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v44 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756298] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v44);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 19 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 16);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v45 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v45);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v46 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v46);
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    v47 = *v32;
    if ( *v32 == 10 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 1);
      v47 = *v32;
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    else
    {
      v37 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528);
    }
    if ( v47 == 11 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v48 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v48);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v49 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v49);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v50 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v50);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v51 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v51);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 12 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v52 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v52);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v53 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v53);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v54 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v54);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v55 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v55);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 22 )
    {
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 16);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 6);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 7);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000 )
      {
        v17 = dword_140404A6C[289317485];
      }
      else
      {
        v56 = *(int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536);
        v17 = dword_140404A6C[289317485];
        if ( (signed int)(dword_140404A6C[289317484] + v56) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          sub_1401FC920(
            (__m128i *)((char *)&dword_140404A6C[297756301] + v1),
            (     __m128i *)((char *)&dword_140404A6C[289317486] + v15),
            v56);
          v15 += v56;
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    if ( *v32 == 21 )
    {
      sub_140115AE0(v37, 10);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 4);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 4);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 30);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000
        && (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v15 = dword_140404A6C[289317484] + 1;
          v17 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
        }
        v57 = v15;
        v15 += 12;
        v58 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v57);
        LODWORD(v57) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v57);
        *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v58;
        *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v57;
        dword_140404A6C[289317484] = v15;
      }
    }
    if ( *v32 == 13 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v59 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v59);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v60 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v60);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v61 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v61);
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    result = *v32;
    if ( (_DWORD)result == 14 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 20);
      result = *v32;
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    if ( (_DWORD)result == 15 )
    {
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v62 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v62);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v63 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v63);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v15;
            }
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v15);
            dword_140404A6C[289317484] = v15 + 4;
          }
        }
      }
      result = sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 2);
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    if ( *v32 == 16 )
    {
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v64 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v64);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v65 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v65);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v66 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v66);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 || v15 + 1 > v16 )
      {
LABEL_240:
        v67 = v77;
      }
      else
      {
        v67 = 0;
        v68 = 0;
        while ( 1 )
        {
          v69 = 8 - v17;
          v67 |= (~(-1 << v6)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v68;
          if ( v6 < (unsigned int)(8 - v17) )
            break;
          if ( v6 == v69 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
            goto LABEL_241;
          }
          ++v15;
          v17 = 0;
          v6 -= v69;
          dword_140404A6C[289317484] = v15;
          v68 += v69;
          dword_140404A6C[289317485] = 0;
          if ( v6 <= 0 )
            goto LABEL_241;
        }
        v17 += v6;
        dword_140404A6C[289317485] = v17;
      }
LABEL_241:
      result = 0xFFFFFFFFLL;
      if ( v67 == 1023 )
        v67 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = v67;
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 12);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v70 = v15;
          v15 += 12;
          v71 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v70);
          result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v70);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v71;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = result;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 12);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v72 = v15;
            v15 += 12;
            v73 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v72);
            result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v72);
            *(_QWORD *)((char *)&dword_140404A6C[297756290] + v1) = v73;
            *(unsigned int *)((char *)&dword_140404A6C[297756292] + v1) = result;
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 18 && v15 < 0x10000 )
    {
      result = (unsigned int)(v15 + 4);
      if ( (int)result <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v74 = v15;
        v15 += 4;
        result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v74);
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = result;
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 4);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v75 = v15;
          v15 += 4;
          result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v75);
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = result;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 4);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v15;
            }
            result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v15);
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = result;
            dword_140404A6C[289317484] = v15 + 4;
          }
        }
      }
    }
    if ( *v32 == 20 )
    {
      result = sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 8);
      v76 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        result = dword_140404A6C[289317484] + 12;
        if ( (int)result <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v76 = dword_140404A6C[289317484] + 1;
            dword_140404A6C[289317485] = 0;
            ++dword_140404A6C[289317484];
          }
          result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v76);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v76);
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = result;
          dword_140404A6C[289317484] = v76 + 12;
        }
      }
    }
  }
  return result;
}
#undef v77
#undef v78
#undef v79
#undef v80

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (0000000140191F90) ----------------------------------------------------
__int64            sub_140191F90(float *a1, int *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __m128d v5; // xmm4
  __m128d v6; // xmm3
  double v7; // xmm2_8
  __m128i v8; // xmm2
  __m128i v9; // xmm2
  double v10; // xmm2_8
  float v11; // xmm1_4
  __m128 v12; // xmm2
  double v13; // xmm3_8
  __int64 v14; // rax
  double v15; // xmm3_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140191F90[64];
#define v17 (*(__int64 (*))(void *)(sr_frame_140191F90 + 0)) /* [rsp+0h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140191F90 + 32)) /* [rsp+20h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140191F90 + 48)) /* [rsp+30h] */

  v2 = *a2;
  v4 = 1;
  v5 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v6 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  if ( dword_140301DD8 != (_DWORD)v2 )
  {
    v4 = 2;
    v7 = (double)a2[1];
    SR_VEC_LANES(128, v6, f64)[0] = 1.0 - v7 * v7 * 0.00000002980959967779399;
    *((float *)&v18 + dword_140301DD8) = v7 * 0.0001726545674976309;
  }
  if ( dword_140301DDC != (_DWORD)v2 )
  {
    v8 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)SR_VEC_LANES(128, v8, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v8), f64)[0];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + *(double *)SR_VEC_LANES(128, v8, i64) * *(double *)SR_VEC_LANES(128, v8, i64) * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DDC) = *(double *)SR_VEC_LANES(128, v8, i64) * 0.0001726545674976309;
  }
  if ( dword_140301DE0 != (_DWORD)v2 )
  {
    v9 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)SR_VEC_LANES(128, v9, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v9), f64)[0];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + *(double *)SR_VEC_LANES(128, v9, i64) * *(double *)SR_VEC_LANES(128, v9, i64) * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE0) = *(double *)SR_VEC_LANES(128, v9, i64) * 0.0001726545674976309;
  }
  if ( dword_140301DE4 != (_DWORD)v2 )
  {
    v10 = (double)a2[v4];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + v10 * v10 * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE4) = v10 * 0.0001726545674976309;
  }
  if ( SR_VEC_LANES(128, v6, f64)[0] <= 0.0 )
    v11 = 0.0;
  else
    v11 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v6), f64)[0];
  *((float *)&v18 + v2) = v11;
  v12 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v18))));
  SR_VEC_LANES(128, v12, f32)[0] = (float)((float)(SR_VEC_LANES(128, v12, f32)[0] * SR_VEC_LANES(128, v12, f32)[0])
                          + (float)(*((float *)&v18 + 2) * *((float *)&v18 + 2)))
                  + (float)((float)(*(float *)&v18 * *(float *)&v18)
                          + (float)(*((float *)&v18 + 1) * *((float *)&v18 + 1)));
  v13 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v12)), f64)[0];
  if ( v13 == 0.0 )
  {
    v18 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v5, f64)[0] = 1.0 / v13;
    v14 = 0;
    v15 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v5, v5), f64)[0];
    do
    {
      *(double *)((char *)&v18 + 4 * v14) = COERCE_FLOAT(*(_QWORD *)((char *)&v18 + 4 * v14)) * v15;
      v14 += 2;
    }
    while ( v14 < 4 );
  }
  sub_14011C340(a1, (float *)&v18);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v17
#undef v18
#undef v19

// 140279490: using guessed type __int128 xmmword_140279490;
// 140301DD8: using guessed type int dword_140301DD8;
// 140301DDC: using guessed type int dword_140301DDC;
// 140301DE0: using guessed type int dword_140301DE0;
// 140301DE4: using guessed type int dword_140301DE4;

//----- (0000000140192160) ----------------------------------------------------
__int64            sub_140192160(float *a1, int *a2, char a3)
{
  __m128d v3; // xmm4
  char v5; // cl
  __int64 v6; // r8
  __m128d v7; // xmm3
  int v8; // eax
  __int64 v9; // rcx
  double v10; // xmm5_8
  double v11; // xmm2_8
  __m128i v12; // xmm2
  __m128i v13; // xmm2
  double v14; // xmm2_8
  float v15; // xmm1_4
  __m128 v16; // xmm2
  double v17; // xmm3_8
  __int64 v18; // rax
  double v19; // xmm3_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192160[64];
#define v21 (*(__int64 (*))(void *)(sr_frame_140192160 + 0)) /* [rsp+0h] */
#define v22 (*(__int128 (*))(void *)(sr_frame_140192160 + 32)) /* [rsp+20h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140192160 + 48)) /* [rsp+30h] */

  v3 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v5 = a3 - 1;
  v6 = 1;
  v7 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v8 = 1 << v5;
  v9 = *a2;
  v10 = (double)v8 - 1.0;
  if ( dword_140301DF8 != (_DWORD)v9 )
  {
    v6 = 2;
    v11 = (double)a2[1] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = 1.0 - v11 * v11 * 2.0;
    *((float *)&v22 + dword_140301DF8) = v11 * 1.414213562373095;
  }
  if ( dword_140301DFC != (_DWORD)v9 )
  {
    v12 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)SR_VEC_LANES(128, v12, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v12), f64)[0] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + *(double *)SR_VEC_LANES(128, v12, i64) * *(double *)SR_VEC_LANES(128, v12, i64) * -2.0;
    *((float *)&v22 + dword_140301DFC) = *(double *)SR_VEC_LANES(128, v12, i64) * 1.414213562373095;
  }
  if ( dword_140301E00 != (_DWORD)v9 )
  {
    v13 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)SR_VEC_LANES(128, v13, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v13), f64)[0] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + *(double *)SR_VEC_LANES(128, v13, i64) * *(double *)SR_VEC_LANES(128, v13, i64) * -2.0;
    *((float *)&v22 + dword_140301E00) = *(double *)SR_VEC_LANES(128, v13, i64) * 1.414213562373095;
  }
  if ( dword_140301E04 != (_DWORD)v9 )
  {
    v14 = (double)a2[v6] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + v14 * v14 * -2.0;
    *((float *)&v22 + dword_140301E04) = v14 * 1.414213562373095;
  }
  if ( SR_VEC_LANES(128, v7, f64)[0] <= 0.0 )
    v15 = 0.0;
  else
    v15 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v7), f64)[0];
  *((float *)&v22 + v9) = v15;
  v16 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v22))));
  SR_VEC_LANES(128, v16, f32)[0] = (float)((float)(SR_VEC_LANES(128, v16, f32)[0] * SR_VEC_LANES(128, v16, f32)[0])
                          + (float)(*((float *)&v22 + 2) * *((float *)&v22 + 2)))
                  + (float)((float)(*(float *)&v22 * *(float *)&v22)
                          + (float)(*((float *)&v22 + 1) * *((float *)&v22 + 1)));
  v17 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v16)), f64)[0];
  if ( v17 == 0.0 )
  {
    v22 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v3, f64)[0] = 1.0 / v17;
    v18 = 0;
    v19 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v3, v3), f64)[0];
    do
    {
      *(double *)((char *)&v22 + 4 * v18) = COERCE_FLOAT(*(_QWORD *)((char *)&v22 + 4 * v18)) * v19;
      v18 += 2;
    }
    while ( v18 < 4 );
  }
  sub_14011C340(a1, (float *)&v22);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v21
#undef v22
#undef v23

// 140279490: using guessed type __int128 xmmword_140279490;
// 140301DF8: using guessed type int dword_140301DF8;
// 140301DFC: using guessed type int dword_140301DFC;
// 140301E00: using guessed type int dword_140301E00;
// 140301E04: using guessed type int dword_140301E04;

//----- (0000000140192470) ----------------------------------------------------
__int64            sub_140192470(float *a1, __int64 a2, float a3, int a4)
{
  float *v4; // rbx
  signed int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbp
  float v9; // xmm6_4
  float v10; // xmm1_4
  __int64 result; // rax
  float v12; // xmm0_4
  _DWORD v13[4]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1;
  v6 = (unsigned int)(1 << a4) >> 1;
  v7 = 3;
  v8 = a2 - (_QWORD)a1;
  v9 = (float)v6 / a3;
  do
  {
    sub_140115AE0(v13, a4);
    v10 = (float)(v13[0] & (v6 - 1));
    result = v13[0] & (unsigned int)v6;
    v12 = (float)(1.0 / v9) * v10;
    if ( (_DWORD)result == v6 )
      v12 = (float)(-1.0 / v9) * v10;
    *v4 = v12 + *(float *)((char *)v4 + v8);
    ++v4;
    --v7;
  }
  while ( v7 );
  return result;
}


//----- (0000000140192560) ----------------------------------------------------
__int64            sub_140192560(float *a1, float a2, int a3)
{
  char v4; // bl
  signed int v5; // r8d
  __int64 result; // rax
  float v7; // xmm1_4
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  sub_140115AE0(&v8, a3);
  v5 = (unsigned int)(1 << v4) >> 1;
  result = v8 & (unsigned int)v5;
  v7 = (float)(v8 & (v5 - 1)) / (float)((float)v5 / a2);
  *a1 = v7;
  if ( (_DWORD)result == v5 )
    *a1 = -v7;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401925F0) ----------------------------------------------------
__int64            sub_1401925F0(_DWORD *a1, float *a2, char a3)
{
  __int64 v4; // r11
  float v6; // xmm0_4
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // edx
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4

  v4 = *a1 & 3;
  if ( (*a1 & 4) != 0 )
    v6 = -1.0;
  else
    v6 = 1.0;
  a2[*a1 & 3] = v6;
  v8 = 1;
  result = (unsigned int)((1 << a3) - 1);
  v10 = (1 << a3) - 1;
  v11 = (double)v10;
  if ( v4 )
  {
    result = (unsigned int)v10 & (a1[1] >> 1);
    v12 = 1.0 / v11;
    if ( (a1[1] & 1) != 0 )
      v12 = -1.0 / v11;
    v8 = 2;
    *a2 = (double)(int)result * v12;
  }
  if ( (_DWORD)v4 != 1 )
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v13 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v13 = -1.0 / v11 * (double)(int)result;
    ++v8;
    a2[1] = v13;
  }
  if ( (_DWORD)v4 == 2 )
  {
    v15 = a2[2];
  }
  else
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v14 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v14 = -1.0 / v11 * (double)(int)result;
    v15 = v14;
  }
  v16 = a2[1];
  v17 = *a2;
  v18 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v15 * v15));
  if ( v18 == 0.0 )
  {
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
  }
  else
  {
    v19 = v15 * (float)(1.0 / v18);
    v20 = v16 * (float)(1.0 / v18);
    v21 = v17 * (float)(1.0 / v18);
  }
  *a2 = v21;
  a2[1] = v20;
  a2[2] = v19;
  return result;
}


//----- (0000000140192790) ----------------------------------------------------
__int64            sub_140192790(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r11
  __int64 v5; // r14
  int v6; // edi
  char *v7; // rdx
  int *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // r12d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  signed int v20; // r13d
  int v21; // esi
  signed int v22; // r15d
  __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // r14
  signed int v26; // esi
  float v27; // xmm13_4
  float v28; // xmm14_4
  float v29; // xmm15_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm6_4
  float v35; // xmm9_4
  float v36; // xmm6_4
  float v37; // xmm9_4
  float v38; // xmm10_4
  float v39; // xmm5_4
  float v40; // xmm11_4
  float v41; // xmm12_4
  float v42; // xmm6_4
  float v43; // xmm9_4
  float v44; // xmm3_4
  float v45; // xmm12_4
  float v46; // xmm6_4
  float v47; // xmm9_4
  __int64 v48; // rdi
  float v49; // xmm6_4
  float *v50; // rbx
  unsigned int v51; // xmm1_4
  unsigned int v52; // xmm1_4
  unsigned int v53; // xmm1_4
  unsigned int v54; // xmm1_4
  unsigned int v55; // xmm0_4
  __int64 v56; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192790[304];
#define v58 (*(__int64 (*))(void *)(sr_frame_140192790 + 8)) /* [rsp+0h] */
#define v59 (*(int (*))(void *)(sr_frame_140192790 + 40)) /* [rsp+20h] */
#define v60 (*(unsigned int (*))(void *)(sr_frame_140192790 + 44)) /* [rsp+24h] */
#define v61 (*(float (*))(void *)(sr_frame_140192790 + 48)) /* [rsp+28h] */
#define v62 (*(unsigned int (*))(void *)(sr_frame_140192790 + 52)) /* [rsp+2Ch] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_140192790 + 56)) /* [rsp+30h] */
#define v64 (*(unsigned int (*))(void *)(sr_frame_140192790 + 60)) /* [rsp+34h] */
#define v65 (*(unsigned int (*))(void *)(sr_frame_140192790 + 64)) /* [rsp+38h] */
#define v66 (*(int (*))(void *)(sr_frame_140192790 + 68)) /* [rsp+3Ch] */
#define v67 (*(int (*))(void *)(sr_frame_140192790 + 72)) /* [rsp+40h] */
#define v68 (*(__int128 (*))(void *)(sr_frame_140192790 + 80)) /* [rsp+48h] */
#define v69 (*(int (*))(void *)(sr_frame_140192790 + 96)) /* [rsp+58h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_140192790 + 104)) /* [rsp+60h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_140192790 + 112)) /* [rsp+68h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_140192790 + 120)) /* [rsp+70h] */
#define v73 (*(__int64 (*))(void *)(sr_frame_140192790 + 128)) /* [rsp+78h] */
#define v74 (*(__int64 (*))(void *)(sr_frame_140192790 + 136)) /* [rsp+80h] */
#define v75 (*(__int64 (*))(void *)(sr_frame_140192790 + 144)) /* [rsp+88h] */
#define v76 (*(__int64 (*))(void *)(sr_frame_140192790 + 152)) /* [rsp+90h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_140192790 + 160)) /* [rsp+98h] */
#define v78 (*(__int64 (*))(void *)(sr_frame_140192790 + 168)) /* [rsp+A0h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_140192790 + 176)) /* [rsp+A8h] */
#define v80 (*(unsigned int (*))(void *)(sr_frame_140192790 + 184)) /* [rsp+B0h] */
#define v81 (*(float (*))(void *)(sr_frame_140192790 + 188)) /* [rsp+B4h] */
#define v82 (*(unsigned int (*))(void *)(sr_frame_140192790 + 192)) /* [rsp+B8h] */
#define v83 (*(unsigned int (*))(void *)(sr_frame_140192790 + 196)) /* [rsp+BCh] */
#define v84 (*(float (*))(void *)(sr_frame_140192790 + 200)) /* [rsp+C0h] */
#define v85 (*(unsigned int (*))(void *)(sr_frame_140192790 + 204)) /* [rsp+C4h] */
#define v86 (*(unsigned int (*))(void *)(sr_frame_140192790 + 208)) /* [rsp+C8h] */
#define v87 (*(float (*))(void *)(sr_frame_140192790 + 212)) /* [rsp+CCh] */
#define v88 (*(unsigned int (*))(void *)(sr_frame_140192790 + 216)) /* [rsp+D0h] */
#define v89 (*(unsigned int (*))(void *)(sr_frame_140192790 + 220)) /* [rsp+D4h] */
#define v90 (*(float (*))(void *)(sr_frame_140192790 + 224)) /* [rsp+D8h] */
#define v91 (*(float (*))(void *)(sr_frame_140192790 + 228)) /* [rsp+DCh] */
#define v92 (*(float (*))(void *)(sr_frame_140192790 + 232)) /* [rsp+E0h] */
#define v93 (*(float (*))(void *)(sr_frame_140192790 + 236)) /* [rsp+E4h] */
#define v94 (*(float (*))(void *)(sr_frame_140192790 + 240)) /* [rsp+E8h] */
#define v95 (*(float (*))(void *)(sr_frame_140192790 + 244)) /* [rsp+ECh] */
#define v96 (*(_DWORD (*)[2])(void *)(sr_frame_140192790 + 248)) /* [rsp+F0h] */
#define v97 (*(char (*))(void *)(sr_frame_140192790 + 256)) /* [rsp+F8h] */
#define v98 (*(__int64 (*))(void *)(sr_frame_140192790 + 296)) /* [rsp+120h] */

  v2 = a1;
  v3 = 104LL * a2;
  v4 = 180288LL * a1;
  v73 = a1;
  v79 = a2;
  v78 = v3;
  v5 = v3 + v4;
  v6 = *(unsigned int *)((char *)&dword_140404A6C[335173759] + v3 + v4);
  v77 = v3 + v4;
  v60 = v6;
  if ( v6 >= 3 )
  {
    v7 = &v97;
    v8 = (int *)((char *)&dword_140404A6C[335173760] + v5);
    v9 = (unsigned int)v6;
    do
    {
      v7 += 12;
      v10 = 15024LL * a1 + *v8++;
      *((_DWORD *)v7 - 5) = dword_140404A6C[3 * v10 + 335170685];
      *((_DWORD *)v7 - 4) = dword_140404A6C[3 * v10 + 335170686];
      *((_DWORD *)v7 - 3) = dword_140404A6C[3 * v10 + 335170687];
      --v9;
    }
    while ( v9 );
    v11 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v4);
    LODWORD(v4) = 0;
    v61 = 65536.0;
    v74 = 0;
    v68 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( v11 > 0 )
    {
      v16 = 0;
      v17 = 1;
      v72 = 0;
      v59 = 1;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      do
      {
        v18 = v16 + 1;
        v69 = v17;
        *(_QWORD *)&v68 = v18;
        v19 = v17;
        v71 = v18;
        v20 = v17;
        if ( v17 < v11 )
        {
          v21 = v17 + 1;
          v67 = v17 + 1;
          do
          {
            ++v18;
            v22 = v21;
            v76 = v18;
            v23 = v18;
            v70 = v18;
            if ( v21 < v11 )
            {
              v24 = v21 + 1;
              v66 = v21 + 1;
              do
              {
                v25 = v23 + 1;
                v26 = v24;
                v75 = v23 + 1;
                if ( v24 < v11 )
                {
                  do
                  {
                    v27 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v72];
                    v28 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v72];
                    v29 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v72];
                    v80 = LODWORD(v27);
                    v81 = v28;
                    v82 = LODWORD(v29);
                    v30 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v71];
                    v31 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v71];
                    v85 = dword_140404A6C[45072 * v73 + 335157371 + 4 * v71];
                    v84 = v30;
                    v32 = v30 - v28;
                    v83 = LODWORD(v31);
                    v33 = v31 - v27;
                    v34 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v23];
                    v35 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v23];
                    v87 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v23];
                    v88 = LODWORD(v34);
                    v36 = v34 - v29;
                    v86 = LODWORD(v35);
                    v37 = v35 - v27;
                    v38 = *(float *)&dword_140404A6C[45072 * v73 + 335157369 + 4 * v25];
                    v39 = *(float *)&dword_140404A6C[45072 * v73 + 335157370 + 4 * v25];
                    v40 = *(float *)&dword_140404A6C[45072 * v73 + 335157371 + 4 * v25];
                    v41 = (float)((float)(v87 - v28) * (float)(*(float *)&v85 - v29)) - (float)(v36 * v32);
                    v89 = LODWORD(v38);
                    v90 = v39;
                    v42 = (float)(v36 * v33) - (float)(v37 * (float)(*(float *)&v85 - v29));
                    v91 = v40;
                    v43 = (float)(v37 * v32) - (float)((float)(v87 - v28) * v33);
                    v44 = fsqrt((float)((float)(v42 * v42) + (float)(v41 * v41)) + (float)(v43 * v43));
                    if ( v44 == 0.0 )
                    {
                      v45 = 0.0;
                      v46 = 0.0;
                      v47 = 0.0;
                    }
                    else
                    {
                      v45 = v41 * (float)(1.0 / v44);
                      v46 = v42 * (float)(1.0 / v44);
                      v47 = v43 * (float)(1.0 / v44);
                    }
                    v48 = v60;
                    if ( (double)((float)((float)((float)((float)(v39 - v28) * v46) + (float)((float)(v38 - v27) * v45))
                                        + (float)((float)(v40 - v29) * v47)) < 0.25) == 0.0 )
                    {
                      v49 = 0.0;
                      v50 = (float *)v96;
                      do
                      {
                        sub_14002E730((__int64)&v92, 4, (__int64)&v80, v50);
                        if ( v49 < fabs(v92) )
                          v49 = fabs(v92);
                        if ( v49 < fabs(v93) )
                          v49 = fabs(v93);
                        if ( v49 < fabs(v94) )
                          v49 = fabs(v94);
                        if ( v49 < fabs(v95) )
                          v49 = fabs(v95);
                        v50 += 3;
                        --v48;
                      }
                      while ( v48 );
                      LODWORD(v4) = 0;
                      v17 = v59;
                      v23 = v70;
                      if ( v61 <= v49 )
                      {
                        v12 = v62;
                        v13 = v63;
                        v14 = v64;
                        v15 = v65;
                      }
                      else
                      {
                        v15 = v59 - 1;
                        v61 = v49;
                        v12 = v26;
                        v65 = v59 - 1;
                        v62 = v26;
                        v14 = v20;
                        v64 = v20;
                        v13 = v22;
                        v63 = v22;
                      }
                    }
                    else
                    {
                      v17 = v59;
                    }
                    ++v26;
                    ++v25;
                  }
                  while ( v26 < v11 );
                  v24 = v66;
                }
                v23 = v75;
                ++v24;
                ++v22;
                v66 = v24;
                v70 = v75;
              }
              while ( v22 < v11 );
              v21 = v67;
              v18 = v76;
            }
            ++v21;
            v71 = v18;
            ++v20;
            v67 = v21;
          }
          while ( v20 < v11 );
          v19 = v69;
        }
        v16 = v68;
        v59 = ++v17;
        v72 = v68;
      }
      while ( v19 < v11 );
      v2 = v73;
      v5 = v77;
      v3 = v78;
    }
    v51 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v15];
    v80 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v15];
    v82 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v15];
    v81 = *(float *)&v51;
    v52 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v14];
    v83 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v14];
    v85 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v14];
    v84 = *(float *)&v52;
    v53 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v13];
    v86 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v13];
    v88 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v13];
    v87 = *(float *)&v53;
    v54 = dword_140404A6C[45072 * v2 + 335157370 + 4 * (int)v12];
    v89 = dword_140404A6C[45072 * v2 + 335157369 + 4 * (int)v12];
    v55 = dword_140404A6C[45072 * v2 + 335157371 + 4 * (int)v12];
    v90 = *(float *)&v54;
    v91 = *(float *)&v55;
    v56 = 104 * v79 + 180288 * v2;
    *(unsigned int *)((char *)&dword_140404A6C[335173764] + v56) = v15;
    *(unsigned int *)((char *)&dword_140404A6C[335173765] + v56) = v14;
    *(unsigned int *)((char *)&dword_140404A6C[335173766] + v56) = v13;
    *(unsigned int *)((char *)&dword_140404A6C[335173767] + v56) = v12;
    if ( *(int *)((char *)&dword_140404A6C[335173759] + v5) > 0 )
    {
      do
      {
        sub_14002E730(
          (__int64)&dword_140404A6C[45072 * v2 + 335173768 + 4 * (int)v4] + v3,
          4,
          (__int64)&v80,
          (float *)&v96[3 * (int)v4]);
        v4 = (unsigned int)(v74 + 1);
        v74 = v4;
      }
      while ( (int)v4 < *(int *)((char *)&dword_140404A6C[335173759] + v5) );
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
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
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
#undef v85
#undef v86
#undef v87
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 19028A428: using guessed type unsigned int;

//----- (0000000140194590) ----------------------------------------------------
__int64            sub_140194590(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v6; // rax

  v6 = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)v6 | 1LL, a1, -1, a2, nullptr, a3);
}


//----- (00000001401948E0) ----------------------------------------------------
__int64            sub_1401948E0(int a1, char *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v7; // r10
  unsigned int *v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  unsigned int *v11; // rax
  char v12; // cl

  result = a1;
  v4 = 5873LL * a1;
  v7 = (int)dword_140404A6C[v4 + 283831511];
  if ( v7 > 0 )
  {
    v8 = &dword_140404A6C[v4 + 283831512];
    do
    {
      v9 = 2570LL * (int)*v8;
      result = (int)dword_140404A6C[v9 + 275754072];
      if ( (int)result < 256 )
      {
        v10 = a2;
        dword_140404A6C[6 * result + 275754073 + v9] = a3;
        v11 = &dword_140404A6C[6 * (int)dword_140404A6C[v9 + 275754072] + 275754074 + v9];
        do
        {
          v12 = *v10++;
          *(_BYTE *)v11 = v12;
          v11 = (unsigned int *)((char *)v11 + 1);
        }
        while ( v12 );
        result = v9 * 4 + 24LL * (int)dword_140404A6C[v9 + 275754072];
        *(unsigned int *)((char *)&dword_140404A6C[275754078] + result) = 0;
        ++dword_140404A6C[v9 + 275754072];
      }
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401949C0) ----------------------------------------------------
__int64            sub_1401949C0(int a1)
{
  __int64 v1; // r10
  int v2; // r8d
  __int64 v3; // rax
  int v4; // eax
  __int64 result; // rax
  int v6; // r10d
  _DWORD *v7; // r11
  unsigned int *v8; // r11
  unsigned int *v9; // r11
  unsigned int *v10; // r11
  unsigned int *v11; // r11
  unsigned int *v12; // r11
  signed int v13; // r10d

  v1 = 5873LL * a1;
  v2 = 0;
  v3 = (int)dword_140404A6C[v1 + 283831510];
  if ( (_DWORD)v3 != -1 )
  {
    if ( (int)(dword_140404A6C[3597 * v3 + 71856275] - 1000) / 100 >= 0 )
      v2 = (int)(dword_140404A6C[3597 * v3 + 71856275] - 1000) / 100;
    if ( v2 > 1000 )
      v2 = 1000;
  }
  v4 = dword_140404A6C[v1 + 283831506];
  if ( v4 >= 10 )
    result = 100;
  else
    result = (unsigned int)(10 * v4);
  v6 = result + v2;
  if ( !dword_140404A6C[180001071] )
  {
    result = 2156LL * a1;
    v7 = (unsigned int *)((char *)&dword_140404A6C[180001074] + result);
    if ( *(int *)((char *)&dword_140404A6C[180001074] + result) > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180001072] * v6) >> 32) >> 31;
      *v7 = dword_140404A6C[180001072] + (signed int)(dword_140404A6C[180001072] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180035724] )
  {
    result = (__int64)&dword_140404A6C[180035727];
    v8 = &dword_140404A6C[539 * a1 + 180035727];
    if ( (int)*v8 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180035725] * v6) >> 32) >> 31;
      *v8 = dword_140404A6C[180035725] + (signed int)(dword_140404A6C[180035725] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180070377] )
  {
    result = (__int64)&dword_140404A6C[180070380];
    v9 = &dword_140404A6C[539 * a1 + 180070380];
    if ( (int)*v9 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180070378] * v6) >> 32) >> 31;
      *v9 = dword_140404A6C[180070378] + (signed int)(dword_140404A6C[180070378] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180105030] )
  {
    result = (__int64)&dword_140404A6C[180105033];
    v10 = &dword_140404A6C[539 * a1 + 180105033];
    if ( (int)*v10 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180105031] * v6) >> 32) >> 31;
      *v10 = dword_140404A6C[180105031] + (signed int)(dword_140404A6C[180105031] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180139683] )
  {
    result = (__int64)&dword_140404A6C[180139686];
    v11 = &dword_140404A6C[539 * a1 + 180139686];
    if ( (int)*v11 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180139684] * v6) >> 32) >> 31;
      *v11 = dword_140404A6C[180139684] + (signed int)(dword_140404A6C[180139684] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180174336] )
  {
    result = (__int64)&dword_140404A6C[180174339];
    v12 = &dword_140404A6C[539 * a1 + 180174339];
    if ( (int)*v12 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180174337] * v6) >> 32) >> 31;
      *v12 = dword_140404A6C[180174337] + (signed int)(dword_140404A6C[180174337] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180208989] && (int)dword_140404A6C[539 * a1 + 180208992] > 0 )
  {
    v13 = dword_140404A6C[180208990] * v6;
    dword_140404A6C[539 * a1 + 180208992] = dword_140404A6C[180208990] + v13 / 100;
    return (unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140194C10) ----------------------------------------------------
__int64            sub_140194C10(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  int v3; // ecx
  unsigned int *v4; // rbx
  int v5; // r9d
  int v6; // r10d
  int v7; // edx
  unsigned int *v8; // rcx
  unsigned int v9; // eax

  v1 = a1;
  result = (__int64)&dword_140404A6C[71856286];
  v3 = 0;
  do
  {
    if ( *(_DWORD *)(result - 132) && *(_DWORD *)result == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 14256) && *(_DWORD *)(result + 14388) == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 28644) && *(_DWORD *)(result + 28776) == (_DWORD)v1 )
      ++v3;
    if ( *(_DWORD *)(result + 43032) && *(_DWORD *)(result + 43164) == (_DWORD)v1 )
      ++v3;
    result += 57552;
  }
  while ( result < (__int64)&dword_140404A6C[72777118] );
  if ( v3 )
  {
    v4 = &dword_140404A6C[5 * v1 + 188872237];
    v5 = 2 * ((int)*v4 / 10);
    if ( (int)*v4 / 10 >= 0 )
      v5 = (int)*v4 / 10;
    if ( v3 <= 1 )
    {
      v6 = v5;
    }
    else
    {
      v5 /= 2;
      v6 = v5 / (v3 - 1);
    }
    result = 23492 * v1;
    v7 = 0;
    v8 = &dword_140404A6C[71856275];
    do
    {
      if ( *(v8 - 22) && v8[11] == (_DWORD)v1 )
      {
        v9 = *v8;
        if ( dword_140404A6C[5873 * v1 + 283831510] == v7 )
          result = v5 + v9;
        else
          result = v6 + v9;
        *v8 = result;
      }
      ++v7;
      v8 += 3597;
    }
    while ( (__int64)v8 < (__int64)&dword_140404A6C[72777107] );
    *v4 = 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140194D40) ----------------------------------------------------
__int64 sub_140194D40()
{
  int v0; // edi
  unsigned int *v1; // rax
  __int64 v2; // rbp
  int v3; // edx
  int v4; // r8d
  signed int v5; // ebx
  __m128i si128; // xmm4
  __m128i v7; // xmm5
  __int64 v8; // rcx
  unsigned int *v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm4
  unsigned int *v16; // rcx
  __int64 v17; // r8
  signed int v18; // eax
  int v19; // esi
  int v20; // edx
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  signed int v25; // esi
  unsigned int *v26; // rax
  __int64 v27; // r12
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // r14
  __int64 v31; // rax
  int i; // ebx
       char *v33; // r8
       char **v34; // rbx
       char *v35; // rcx
  char v36; // al
  __int64 v37; // r9
  __int64 v38; // rax
  char *v39; // r8
  unsigned int *v40; // rdx
  char v41; // al
  int v42; // eax
  BOOL v43; // r14d
  int v44; // eax
  __int64 v45; // rsi
  int v46; // ebx
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // ebx
  unsigned int *v50; // rdi
  unsigned int *v51; // rsi
  char *v52; // rcx
  char v53; // al
  char *v54; // rcx
  char v55; // al
  char *v56; // rcx
  char v57; // al
  char *v58; // rcx
  char v59; // al
  unsigned int *v60; // rbx
  __int64 v61; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140194D40[848];
#define v63 (*(__int64 (*))(void *)(sr_frame_140194D40 + 0)) /* [rsp+0h] */
#define v64 (*(unsigned int (*))(void *)(sr_frame_140194D40 + 48)) /* [rsp+30h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_140194D40 + 56)) /* [rsp+38h] */
#define v66 (*(char (*)[256])(void *)(sr_frame_140194D40 + 64)) /* [rsp+40h] */
#define v67 (*(_BYTE (*)[512])(void *)(sr_frame_140194D40 + 320)) /* [rsp+140h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_140194D40 + 832)) /* [rsp+340h] */

  v0 = 0;
  v1 = &dword_140404A6C[180035722];
  while ( *(v1 - 34653) )
  {
    if ( !*v1 )
    {
      ++v0;
      break;
    }
    if ( !v1[34653] )
    {
      v0 += 2;
      break;
    }
    if ( !v1[69306] )
    {
      v0 += 3;
      break;
    }
    v1 += 138612;
    v0 += 4;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[188906890] )
      break;
  }
  if ( v0 != -1 )
  {
    v2 = 34653LL * v0;
    v65 = v0;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 180001070]), 0, 0x21D70u);
    v3 = dword_140404A6C[487149972];
    dword_140404A6C[v2 + 180001069] = 1;
    if ( v3 )
    {
      v4 = 0;
      v5 = 0x10000;
      if ( v3 >= 8 && dword_140302080 >= 2 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_1402791B0);
        v7 = si128;
        v8 = 0;
        v9 = &dword_140404A6C[487150492];
        do
        {
          v10 = _mm_cvtsi32_si128(v9[259]);
          v4 += 8;
          v11 = _mm_cvtsi32_si128(*(v9 - 259));
          v8 += 8;
          v12 = _mm_cvtsi32_si128(*v9);
          v13 = _mm_cvtsi32_si128(*(v9 - 518));
          v9 += 2072;
          si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(v13, v11), _mm_unpacklo_epi32(v12, v10)));
          v7 = _mm_min_epi32(
                 v7,
                 _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 1554)), _mm_cvtsi32_si128(*(v9 - 1295))),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 1036)), _mm_cvtsi32_si128(*(v9 - 777)))));
        }
        while ( v8 < (int)(v3 - (v3 & 0x80000007)) );
        v14 = _mm_min_epi32(si128, v7);
        v15 = _mm_min_epi32(v14, _mm_srli_si128(v14, 8));
        v5 = _mm_cvtsi128_si32(_mm_min_epi32(v15, _mm_srli_si128(v15, 4)));
      }
      if ( v4 < v3 )
      {
        v16 = &dword_140404A6C[259 * v4 + 487149974];
        v17 = (unsigned int)(v3 - v4);
        do
        {
          v18 = *v16;
          v16 += 259;
          if ( v5 <= v18 )
            v18 = v5;
          v5 = v18;
          --v17;
        }
        while ( v17 );
      }
      v19 = 0;
      v20 = rand() % (signed int)dword_140404A6C[487149972];
      do
      {
        if ( (int)dword_140404A6C[259 * v20 + 487149974] <= v5 )
          break;
        ++v19;
        v20 = rand() % (signed int)dword_140404A6C[487149972];
      }
      while ( v19 < 1024 );
      v21 = v20;
      v22 = 259LL * v20;
      v23 = (int)dword_140404A6C[v22 + 487149973];
      ++dword_140404A6C[v22 + 487149974];
      v24 = 14019 * v23;
      v25 = 0;
      v26 = &dword_140404A6C[273377349];
      v27 = (int)dword_140404A6C[v24 + 225641322];
      v64 = dword_140404A6C[v24 + 225641321];
      while ( *v26 )
      {
        ++v25;
        v26 += 290;
        if ( (__int64)v26 >= (__int64)&dword_140404A6C[275753029] )
          return 0; /* compatibility result discarded by all reviewed callers */
      }
      if ( v25 != -1 )
      {
        v28 = 290LL * v25;
        dword_140404A6C[34653 * v0 + 180035569] = v25;
        dword_140404A6C[v28 + 273377349] = 1;
        dword_140404A6C[v28 + 273377606] = 0;
        v29 = 0;
        if ( &dword_140404A6C[v22 + 487149976] )
          v29 = rand() % (int)dword_140404A6C[v22 + 487149975];
        v30 = (int)dword_140404A6C[259 * v21 + 487149976 + v29];
        v31 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[v31 + 485542517] )
            break;
          v31 = rand() & 0x1F;
        }
        dword_140404A6C[v31 + 485542517] = 1;
        v33 = off_1402B2000[v31];
        v34 = &off_1402B2000[v31];
        v35 = v33;
        do
        {
          v36 = *v35;
          v35[(intptr_t)((uintptr_t)(v67) - (uintptr_t)(v33))] = *v35;
          ++v35;
        }
        while ( v36 );
        sub_140158AB0(v66, "%s.DOC", v33);
        v37 = 2570 * v30;
        v38 = (int)dword_140404A6C[2570 * v30 + 275754072];
        if ( (int)v38 < 256 )
        {
          dword_140404A6C[6 * v38 + 275754073 + v37] = v25;
          v39 = v66;
          v40 = &dword_140404A6C[6 * (int)dword_140404A6C[v37 + 275754072] + 275754074 + v37];
          do
          {
            v41 = *v39++;
            *(_BYTE *)v40 = v41;
            v40 = (unsigned int *)((char *)v40 + 1);
          }
          while ( v41 );
          dword_140404A6C[6 * (int)dword_140404A6C[v37 + 275754072]++ + 275754078 + v37] = 0;
        }
        sub_140158AB0(v66, "%s", *v34);
        v42 = rand();
        v43 = v42 == 5 * (v42 / 5);
        v44 = 2500 * (rand() % 5 + 2);
        dword_140404A6C[34653 * v0 + 180001072] = v44;
        if ( v0 == dword_140404A6C[180001067] )
          dword_140404A6C[34653 * v0 + 180001072] = 5 * v44;
        v45 = 3;
        do
        {
          v46 = 0;
          v47 = rand() % 6;
          v48 = (int)dword_140404A6C[5873 * v47 + 283831510];
          if ( (_DWORD)v48 != -1 )
          {
            if ( (int)(dword_140404A6C[3597 * v48 + 71856275] - 1000) / 100 >= 0 )
              v46 = (int)(dword_140404A6C[3597 * v48 + 71856275] - 1000) / 100;
            if ( v46 > 1000 )
              v46 = 1000;
          }
          dword_140404A6C[34653 * v0 + 180001074 + 539 * v47] = dword_140404A6C[34653 * v0 + 180001072]
                                                              + (int)(v46 * dword_140404A6C[34653 * v0 + 180001072])
                                                              / 100;
          --v45;
        }
        while ( v45 );
        v49 = v0 + 200;
        dword_140404A6C[34653 * v0 + 180035589] = v0 + 200;
        sub_140158AB0(&dword_140404A6C[v2 + 180035590], "INTEL%02d.CDE", v0);
        v50 = &dword_140404A6C[396 * v27 + 225426047];
        v51 = &dword_140404A6C[396 * v64 + 225426047];
        sub_14012F890(
          &dword_140404A6C[290 * v49 + 273377350],
          v66,
          (__int64)v51,
          (__int64)v50,
          (__int64)off_1402B2100[v65],
          v43);
        sub_140115FF0(v49);
        v52 = v66;
        do
        {
          v53 = *v52;
          *((_BYTE *)&dword_140404A6C[180035657] + v2 * 4 - (_QWORD)v66 + (_QWORD)v52) = *v52;
          ++v52;
        }
        while ( v53 );
        v54 = (char *)&dword_140404A6C[180035673] + v2 * 4 - (_QWORD)v51;
        do
        {
          v55 = *(_BYTE *)v51;
          v54[(_QWORD)v51] = *(_BYTE *)v51;
          v51 = (unsigned int *)((char *)v51 + 1);
        }
        while ( v55 );
        v56 = (char *)&dword_140404A6C[180035689] + v2 * 4 - (_QWORD)v50;
        do
        {
          v57 = *(_BYTE *)v50;
          v56[(_QWORD)v50] = *(_BYTE *)v50;
          v50 = (unsigned int *)((char *)v50 + 1);
        }
        while ( v57 );
        v58 = v67;
        do
        {
          v59 = *v58;
          *((_BYTE *)&dword_140404A6C[180035705] + v2 * 4 - (_QWORD)v67 + (_QWORD)v58) = *v58;
          ++v58;
        }
        while ( v59 );
        dword_140404A6C[v2 + 180035721] = v43;
        v60 = &dword_140404A6C[v2 + 180001596];
        v61 = 6;
        do
        {
          sub_140158AB0(v60, (     char *)&dword_140273614);
          v60 += 539;
          --v61;
        }
        while ( v61 );
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68

// 140194E6F: conditional instruction was optimized away because edx.4>=8
// 140273614: using guessed type int dword_140273614;
// 1402791B0: using guessed type __int128 xmmword_1402791B0;
// 1402B2000: using guessed type _UNKNOWN *off_1402B2000;
// 1402B2100: using guessed type char *off_1402B2100[8];
// 140302080: using guessed type int dword_140302080;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B46590BC: using guessed type unsigned int;

//----- (0000000140195970) ----------------------------------------------------
__int64 sub_140195970()
{
  signed int v0; // eax
  unsigned int *v1; // r13
  int v2; // r12d
  unsigned int *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rax
  int i; // ebx
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r11
  unsigned int *v13; // r10
  unsigned int *v14; // rax
  _BYTE *v15; // r8
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int *v20; // rax
  __int64 v21; // rax
  char *v22; // r8
  unsigned int *v23; // rdx
  char v24; // al
  signed int v25; // r15d
  signed int v26; // ebp
  int *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdi
  int v31; // edx
  unsigned int *v32; // r8
  __int64 v33; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195970[576];
#define v35 (*(__int64 (*))(void *)(sr_frame_140195970 + 0)) /* [rsp+0h] */
#define j (*(int (*))(void *)(sr_frame_140195970 + 32)) /* [rsp+20h] */
#define v37 (*(_BYTE (*)[512])(void *)(sr_frame_140195970 + 48)) /* [rsp+30h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_140195970 + 560)) /* [rsp+230h] */

  v0 = dword_140404A6C[487149972];
  v1 = &dword_140404A6C[487149975];
  v2 = 0;
  j = 0;
  if ( (int)dword_140404A6C[487149972] > 0 )
  {
    v3 = &dword_140404A6C[487149975];
    v4 = 0;
    do
    {
      v5 = 64;
      do
      {
        v6 = 0;
        if ( &dword_140404A6C[259 * v2 + 487149976] )
          v6 = rand() % (int)*v3;
        v7 = (int)dword_140404A6C[v4 + 487149976 + v6];
        v8 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[v8 + 485542517] )
            break;
          v8 = rand() & 0x1F;
        }
        sub_140158AB0(v37, "%s.DOC", off_1402B2000[v8]);
        v10 = 2570 * v7;
        v11 = 0;
        v12 = (int)dword_140404A6C[2570 * v7 + 275754072];
        if ( (int)v12 <= 0 )
        {
LABEL_17:
          v18 = 0;
          v19 = 0;
          v20 = &dword_140404A6C[273377349];
          while ( *v20 )
          {
            ++v18;
            ++v19;
            v20 += 290;
            if ( (__int64)v20 >= (__int64)&dword_140404A6C[275753029] )
              goto LABEL_26;
          }
          if ( v18 != -1 )
          {
            v21 = 290 * v19;
            dword_140404A6C[v21 + 273377349] = 1;
            dword_140404A6C[v21 + 273377606] = 0;
            if ( (int)v12 < 256 )
            {
              dword_140404A6C[6 * v12 + 275754073 + v10] = v18;
              v22 = v37;
              v23 = &dword_140404A6C[6 * (int)dword_140404A6C[v10 + 275754072] + 275754074 + v10];
              do
              {
                v24 = *v22++;
                *(_BYTE *)v23 = v24;
                v23 = (unsigned int *)((char *)v23 + 1);
              }
              while ( v24 );
              dword_140404A6C[6 * (int)dword_140404A6C[v10 + 275754072]++ + 275754078 + v10] = 0;
            }
          }
        }
        else
        {
          v13 = &dword_140404A6C[v10 + 275754078];
          while ( 1 )
          {
            if ( !*v13 )
            {
              v14 = &dword_140404A6C[6 * v11 + 275754074 + v10];
              v15 = (_BYTE *)(v37 - (_BYTE *)v14);
              do
              {
                v16 = (unsigned __int8)v15[(_QWORD)v14];
                v17 = *(unsigned __int8 *)v14 - v16;
                if ( v17 )
                  break;
                v14 = (unsigned int *)((char *)v14 + 1);
              }
              while ( v16 );
              if ( !v17 )
                break;
            }
            v11 = (unsigned int)(v11 + 1);
            v13 += 6;
            if ( (int)v11 >= (int)v12 )
              goto LABEL_17;
          }
        }
LABEL_26:
        --v5;
      }
      while ( v5 );
      v4 += 259;
      v0 = dword_140404A6C[487149972];
      v2 = j + 1;
      v3 += 259;
      j = v2;
    }
    while ( v2 < (int)dword_140404A6C[487149972] );
    v1 = &dword_140404A6C[487149975];
  }
  v25 = 0;
  for ( j = 0; v25 < v0; j = v25 )
  {
    v26 = 0;
    if ( (int)*v1 > 0 )
    {
      v27 = (int *)(v1 + 1);
      do
      {
        v28 = 2570LL * *v27;
        if ( (int)dword_140404A6C[v28 + 275754072] > 1 )
        {
          v29 = 64;
          do
          {
            v30 = rand() % (int)dword_140404A6C[v28 + 275754072];
            v31 = rand() % (int)dword_140404A6C[v28 + 275754072];
            if ( (_DWORD)v30 != v31 )
            {
              v32 = &dword_140404A6C[6 * v30 + 275754073 + v28];
              v33 = v28 * 4 + 24LL * v31;
              *(_OWORD *)&dword_140404A6C[v28 + 275755609] = *(_OWORD *)v32;
              *(_QWORD *)&dword_140404A6C[v28 + 275755613] = *((_QWORD *)v32 + 2);
              *(_OWORD *)v32 = *(_OWORD *)((char *)&dword_140404A6C[275754073] + v33);
              *((_QWORD *)v32 + 2) = *(_QWORD *)((char *)&dword_140404A6C[275754077] + v33);
              *(_OWORD *)((char *)&dword_140404A6C[275754073] + v33) = *(_OWORD *)&dword_140404A6C[v28 + 275755609];
              *(_QWORD *)((char *)&dword_140404A6C[275754077] + v33) = *(_QWORD *)&dword_140404A6C[v28 + 275755613];
            }
            --v29;
          }
          while ( v29 );
        }
        ++v26;
        ++v27;
      }
      while ( v26 < (int)*v1 );
      v0 = dword_140404A6C[487149972];
      v25 = j;
    }
    ++v25;
    v1 += 259;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v35
#undef j
#undef v37
#undef v38

// 1402B2000: using guessed type _UNKNOWN *off_1402B2000;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B46590BC: using guessed type unsigned int;

//----- (0000000140195D20) ----------------------------------------------------
__int64            sub_140195D20(int a1,      char *a2)
{
  __int64 v3; // rdi
  char *v4; // r8
  __int64 v5; // r9
       char *v6; // rdx
  char *v7; // rdx
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  int v12; // eax
  __int64 v13; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195D20[2176];
#define v15 (*(_BYTE (*)[32])(void *)(sr_frame_140195D20 + 0)) /* [rsp+0h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140195D20 + 32)) /* [rsp+20h] */
#define v17 (*(float (*)[4])(void *)(sr_frame_140195D20 + 48)) /* [rsp+30h] */
#define v18 (*(_OWORD (*)[2])(void *)(sr_frame_140195D20 + 64)) /* [rsp+40h] */
#define v19 (*(int (*))(void *)(sr_frame_140195D20 + 96)) /* [rsp+60h] */
#define v20 (*(__m128i (*)[128])(void *)(sr_frame_140195D20 + 112)) /* [rsp+70h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_140195D20 + 2160)) /* [rsp+870h] */

  v3 = a1;
  v4 = off_1402B2890[a1];
  v5 = (unsigned int)((signed int)dword_140404A6C[179992853] / 3600 / 60 % -12);
  v6 = "\n%s Internal Memo\n%d:%02d AM\n\n";
  if ( !(_DWORD)v5 )
    v5 = 12;
  LODWORD(v16) = (signed int)dword_140404A6C[179992853] / 3600 % 60;
  if ( (int)dword_140404A6C[179992853] >= 2592000 )
    v6 = "\n%s Internal Memo\n%d:%02d PM\n\n";
  sub_140158AB0(v20, v6, v4, v5, v16);
  v7 = &v15[111];
  while ( *++v7 != 0 )
    ;
  strcpy(v7, a2);
  v18[0] = xmmword_140278D30;
  v18[1] = xmmword_140278D30;
  v19 = 1065353216;
  v9 = *(float *)&dword_140404A6C[5873 * v3 + 283831498];
  v10 = *(float *)&dword_140404A6C[5873 * v3 + 283831499];
  v11 = *(float *)&dword_140404A6C[5873 * v3 + 283831500];
  sub_14007B2A0((__int64)v18, (float *)v18 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(*(float *)&dword_140404A6C[5873 * v3 + 283831497] - 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
  v17[0] = v9 - (float)(*(float *)v18 * 0.5);
  v17[2] = v11 - (float)(*((float *)v18 + 2) * 0.5);
  v17[1] = v10 - (float)(*((float *)v18 + 1) * 0.5);
  v12 = sr_CreateItem(34, v17, nullptr, (float *)v18);
  v13 = v12;
  if ( v12 != -1 )
  {
    sub_1400584B0(v12, v20);
    dword_140404A6C[1760 * v13 + 278845900] = 0x10000;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140195FB0) ----------------------------------------------------
__int64            sub_140195FB0(int a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  _BYTE *v7; // rcx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned int *v10; // rbx
  unsigned int *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // eax
  int v15; // edi
  unsigned int *v16; // rbx
       char **v17; // r14
  __int64 v18; // rsi
  int v19; // r9d
  signed int v20; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195FB0[1088];
#define v22 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 0)) /* [rsp+0h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 32)) /* [rsp+20h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 40)) /* [rsp+28h] */
#define v25 (*(char (*)[1024])(void *)(sr_frame_140195FB0 + 48)) /* [rsp+30h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 1072)) /* [rsp+430h] */

  v2 = 34653LL * a1;
  v3 = a2;
  v4 = 539LL * a2;
  LODWORD(v23) = a2;
  v24 = v4 * 4;
  v5 = v4 * 4 + v2 * 4;
  if ( !dword_140404A6C[v4 + 180001073 + v2] )
  {
    *(unsigned int *)((char *)&dword_140404A6C[180001073] + v5) = 1;
    if ( (int)dword_140404A6C[v2 + 180001071] < 2 )
    {
      v6 = *(unsigned int *)((char *)&dword_140404A6C[180001074] + v5);
      v7 = (char *)&dword_140404A6C[180001084] + v5;
      v8 = (int *)((char *)&dword_140404A6C[180001083] + v5);
      if ( v6 <= 0 )
      {
        *v8 = 0;
        sub_140158AB0(v7, "TRADE");
        ++*v8;
        sub_140158AB0((_BYTE *)&dword_140404A6C[180001596] + v5, "Trade");
        v14 = v23;
        v15 = 0;
        v16 = &dword_140404A6C[v2 + 180001083];
        v17 = (     char **)off_1402B2890;
        v18 = 0;
        do
        {
          if ( v15 != v14 )
          {
            v19 = *(v16 - 9);
            if ( v19 > 0 )
            {
              if ( dword_140404A6C[v2 + 180001071] )
              {
                v20 = *v16;
              }
              else
              {
                *v16 = 0;
                v20 = 0;
              }
              sub_140158AB0(
                &dword_140404A6C[64 * (__int64)v20 + 180001084 + v18 + v2],
                "%s HAS THE FILE  VALUE: $%d",
                off_1402B2890[v3],
                v19);
              ++*v16;
              sub_140158AB0(&dword_140404A6C[v2 + 180001596 + v18], "Trade");
              sub_140158AB0(
                v25,
                "%s has obtained the file for the\n%s project",
                off_1402B2890[v3],
                (     char *)&dword_140404A6C[v2 + 180035705]);
              sub_140195D20(v15, v25);
              sub_140158AB0(
                (_BYTE *)&dword_140404A6C[64 * (__int64)*v8 + 180001084 + v2] + v24,
                "%s WANTS THE FILE",
                *v17);
              ++*v8;
              v14 = v23;
            }
          }
          ++v15;
          v18 += 539;
          v16 += 539;
          ++v17;
        }
        while ( v15 < 6 );
        dword_140404A6C[v2 + 180001071] = 1;
      }
      else
      {
        dword_140404A6C[5 * v3 + 188872237] += v6;
        v23 = 20 * v3;
        *v8 = 0;
        sub_140158AB0(v7, "MISSION SUCCESS");
        sub_140158AB0(
          &dword_140404A6C[64 * (__int64)++*v8 + 180001084 + v2 + v4],
          "VALUE: $%d",
          *(unsigned int *)((char *)&dword_140404A6C[180001074] + v5));
        ++*v8;
        sub_140158AB0((_BYTE *)&dword_140404A6C[180001596] + v5, "Success");
        v9 = 0;
        v10 = &dword_140404A6C[v2 + 180001083];
        v11 = &dword_140404A6C[v2 + 180001596];
        v12 = 6;
        do
        {
          if ( v9 != v3 )
          {
            *v10 = 0;
            sub_140158AB0((_BYTE *)v11 - 2048, "MISSION CLOSED");
            ++*v10;
            sub_140158AB0(v11, "Closed");
          }
          v11 += 539;
          ++v9;
          v10 += 539;
          --v12;
        }
        while ( v12 );
        v13 = v23;
        dword_140404A6C[v2 + 180001071] = 2;
        if ( *(int *)((char *)&dword_140404A6C[188872240] + v13) > 0 )
          *(unsigned int *)((char *)&dword_140404A6C[188872240] + v13) = 1;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140196320) ----------------------------------------------------
__int64            sub_140196320(int a1, char *a2, unsigned int a3, char *a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  unsigned int *v8; // rcx
  char v9; // al
  __int64 v10; // rsi
  int v11; // r12d
  int i; // r15d
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // [rsp+60h] [rbp+8h] BYREF

  result = a1;
  v5 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v5 + 293512629] && dword_140404A6C[265228 * a1 + 293512631] )
  {
    dword_140404A6C[265228 * a1 + 293512635 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]] = a3;
    v8 = &dword_140404A6C[265228 * a1 + 293512638 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]];
    do
    {
      v9 = *a2++;
      *(_BYTE *)v8 = v9;
      v8 = (unsigned int *)((char *)v8 + 1);
    }
    while ( v9 );
    dword_140404A6C[16 * (unsigned __int64)dword_140404A6C[v5 + 293512634] + 293512636 + v5] = ftell_sr(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    switch ( a3 )
    {
      case 0x585A0001u:
        v10 = *(_QWORD *)&dword_140404A6C[v5 + 293512629];
        if ( v10 )
        {
          v26 = 1;
          sub_14020CE0C((__int64)&v26, 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852365], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852366], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852367], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852368], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852369], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852370], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852371], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852372], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852373], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852374], 4, 1, v10);
          v11 = 0;
          for ( i = 0; i < (int)dword_140404A6C[19852374]; ++i )
          {
            v13 = 87LL * i;
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852378], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852376], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852379], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852377], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852460], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852461], 4, 1, v10);
            v14 = 4;
            v15 = &dword_140404A6C[v13 + 19852428];
            v16 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v13 * 4 + 83622876;
            do
            {
              v17 = 4;
              do
              {
                sub_14020CE0C(v16, 4, 3, v10);
                sub_14020CE0C((__int64)v15, 4, 2, v10);
                v16 += 12;
                v15 += 2;
                --v17;
              }
              while ( v17 );
              --v14;
            }
            while ( v14 );
          }
          sub_14020CE0C((__int64)&dword_140404A6C[19896919], 4, 1, v10);
          if ( (int)dword_140404A6C[19896919] > 0 )
          {
            do
            {
              v18 = 8;
              v19 = 124LL * v11;
              v20 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801036;
              do
              {
                sub_14020CE0C(v20, 4, 3, v10);
                v20 += 12;
                --v18;
              }
              while ( v18 );
              v21 = 6;
              v22 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801132;
              do
              {
                sub_14020CE0C(v22, 4, 1, v10);
                v22 += 4;
                --v21;
              }
              while ( v21 );
              sub_14020CE0C(((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801156, 4, 1, v10);
              ++v11;
            }
            while ( v11 < (int)dword_140404A6C[19896919] );
          }
        }
        break;
      case 0x585A0002u:
        sub_140196D60(a4, *(FILE **)&dword_140404A6C[v5 + 293512629], 1);
        break;
      case 0x585A0004u:
        sub_140197630(*(_DWORD *)a4, *(_QWORD *)&dword_140404A6C[v5 + 293512629], 1);
        break;
    }
    v23 = ftell_sr(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    v24 = v5 * 4 + ((unsigned __int64)dword_140404A6C[v5 + 293512634] << 6);
    *(unsigned int *)((char *)&dword_140404A6C[293512637] + v24) = v23
                                                                 - *(unsigned int *)((char *)&dword_140404A6C[293512636]
                                                                                   + v24);
    v25 = dword_140404A6C[v5 + 293512634];
    dword_140404A6C[v5 + 293512633] += dword_140404A6C[16 * (unsigned __int64)v25 + 293512637 + v5];
    result = v25 + 1;
    dword_140404A6C[v5 + 293512634] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401967E0) ----------------------------------------------------
__int64            sub_1401967E0(__int64 a1, int a2)
{
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rsi
  unsigned int *v7; // rcx
  unsigned int *v8; // rdi
  __int64 v9; // r15
  unsigned int *v10; // rdi
  unsigned int *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int *v15; // rdi
  __int64 v16; // rsi
  unsigned int *v17; // rdi
  unsigned int *v18; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  Buffer = 1;
  if ( !a2 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852365]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852366]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852367]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852368]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852369]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852370]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852371]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852372]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852373]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852374]), 4, 1, (FILE *)(uintptr_t)(a1));
      goto LABEL_6;
    }
    return 0;
  }
  sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852365], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852366], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852367], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852368], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852369], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852370], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852371], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852372], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852373], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852374], 4, 1, a1);
LABEL_6:
  v4 = 0;
  v5 = 0;
  if ( (int)dword_140404A6C[19852374] > 0 )
  {
    do
    {
      v6 = 87LL * v5;
      v7 = &dword_140404A6C[v6 + 19852378];
      v8 = &dword_140404A6C[v6 + 19852349];
      if ( a2 )
      {
        sub_14020CE0C((__int64)v7, 4, 1, a1);
        sub_14020CE0C((__int64)(v8 + 27), 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852379], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852377], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852460], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852461], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v7), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(v8 + 27), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852379]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852377]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852460]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852461]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      v9 = 4;
      v10 = &dword_140404A6C[v6 + 19852428];
      v11 = &dword_140404A6C[v6 + 19852380];
      do
      {
        v12 = 4;
        do
        {
          if ( a2 )
          {
            sub_14020CE0C((__int64)v11, 4, 3, a1);
            sub_14020CE0C((__int64)v10, 4, 2, a1);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v11), 4, 3, (FILE *)(uintptr_t)(a1));
            fread_sr((void *)(uintptr_t)(v10), 4, 2, (FILE *)(uintptr_t)(a1));
          }
          v11 += 3;
          v10 += 2;
          --v12;
        }
        while ( v12 );
        --v9;
      }
      while ( v9 );
      ++v5;
    }
    while ( v5 < (int)dword_140404A6C[19852374] );
    v4 = 0;
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[19896919], 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[19896919]), 4, 1, (FILE *)(uintptr_t)(a1));
  if ( (int)dword_140404A6C[19896919] > 0 )
  {
    do
    {
      v13 = 31LL * v4;
      v14 = 8;
      v15 = &dword_140404A6C[v13 + 19896920];
      do
      {
        if ( a2 )
          sub_14020CE0C((__int64)v15, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(v15), 4, 3, (FILE *)(uintptr_t)(a1));
        v15 += 3;
        --v14;
      }
      while ( v14 );
      v16 = 6;
      v17 = &dword_140404A6C[v13 + 19896944];
      do
      {
        if ( a2 )
          sub_14020CE0C((__int64)v17, 4, 1, a1);
        else
          fread_sr((void *)(uintptr_t)(v17), 4, 1, (FILE *)(uintptr_t)(a1));
        ++v17;
        --v16;
      }
      while ( v16 );
      v18 = &dword_140404A6C[31 * v4 + 19896950];
      if ( a2 )
        sub_14020CE0C((__int64)v18, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v18), 4, 1, (FILE *)(uintptr_t)(a1));
      ++v4;
    }
    while ( v4 < (int)dword_140404A6C[19896919] );
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140197630) ----------------------------------------------------
__int64            sub_140197630(int a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int *v5; // rdi
  __int64 v7; // rbx
  unsigned int *v8; // rdi
  unsigned int *v9; // rsi
  int Buffer; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  if ( !a2 )
    return 0;
  Buffer = 1;
  if ( a3 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a2);
    sub_14020CE0C((__int64)&dword_140404A6C[46 * v3 + 421784763], 1, 64, a2);
    v5 = &dword_140404A6C[46 * v3 + 421784733];
    sub_14020CE0C((__int64)(v5 + 22), 4, 1, a2);
    sub_14020CE0C((__int64)(v5 + 26), 4, 1, a2);
    sub_14020CE0C(*((_QWORD *)v5 + 12), 1, (int)v5[22], a2);
    sub_14020CE0C(*((_QWORD *)v5 + 14), 1, (int)v5[26], a2);
    return 1;
  }
  fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( Buffer != 1 )
    return 0;
  v7 = 46 * v3;
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784763]), 1, 64, (FILE *)(uintptr_t)(a2));
  v8 = &dword_140404A6C[v7 + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784755]), 4, 1, (FILE *)(uintptr_t)(a2));
  v9 = &dword_140404A6C[v7 + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784759]), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( (int)dword_140404A6C[v7 + 421784755] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784757] = sr_path_malloc((int)v8[22]);
  if ( (int)v9[26] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784761] = sr_path_malloc((int)v9[26]);
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v7 + 421784757]), 1, (int)v8[22], (FILE *)(uintptr_t)(a2));
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v7 + 421784761]), 1, (int)v9[26], (FILE *)(uintptr_t)(a2));
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401977E0) ----------------------------------------------------
void            sub_1401977E0(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  unsigned int i; // ebx

  v1 = 265228LL * a1;
  v2 = *(_QWORD *)&dword_140404A6C[v1 + 293512629];
  if ( v2 )
  {
    if ( dword_140404A6C[v1 + 293512631] )
    {
      sub_14020C4A8(v2, 4, 0);
      sub_14020CE0C((__int64)&dword_140404A6C[v1 + 293512633], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      sub_14020CE0C((__int64)&dword_140404A6C[v1 + 293512634], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      sub_14020C4A8(*(_QWORD *)&dword_140404A6C[v1 + 293512629], dword_140404A6C[v1 + 293512633], 0);
      for ( i = 0; i < dword_140404A6C[v1 + 293512634]; ++i )
        sub_14020CE0C(
          (__int64)&dword_140404A6C[16 * (__int64)(int)i + 293512635 + v1],
          64,
          1,
          *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    }
    sub_14020B9E8(*(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    *(_QWORD *)&dword_140404A6C[v1 + 293512629] = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401978F0) ----------------------------------------------------
unsigned int *           sub_1401978F0(int a1, __int64 a2, int a3)
{
  unsigned int *result; // rax
  __int64 v4; // rbx
  int v7; // r9d
  unsigned int v8; // edi
  unsigned int *i; // r10
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  result = (unsigned int *)a1;
  v4 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v4 + 293512629] )
  {
    if ( !dword_140404A6C[v4 + 293512631] )
    {
      v7 = 0;
      v8 = dword_140404A6C[v4 + 293512634];
      if ( v8 )
      {
        for ( i = &dword_140404A6C[v4 + 293512635]; ; i += 16 )
        {
          if ( *i == a3 )
          {
            result = &dword_140404A6C[16 * (__int64)v7 + 293512638 + v4];
            v10 = a2 - (_QWORD)result;
            do
            {
              v11 = *((unsigned __int8 *)result + v10);
              v12 = *(unsigned __int8 *)result - v11;
              if ( v12 )
                break;
              result = (unsigned int *)((char *)result + 1);
            }
            while ( v11 );
            if ( !v12 )
              break;
          }
          if ( ++v7 >= v8 )
            return result;
        }
        return (unsigned int *)sub_14020C4A8(
                                 *(_QWORD *)&dword_140404A6C[v4 + 293512629],
                                 dword_140404A6C[16 * (__int64)v7 + 293512636 + v4],
                                 0);
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401979D0) ----------------------------------------------------
void            sub_1401979D0(int a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // eax
  unsigned int *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int *v10; // r14
  unsigned int *v11; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401979D0[560];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 0)) /* [rsp+0h] */
#define v14 (*(char (*)[512])(void *)(sr_frame_1401979D0 + 32)) /* [rsp+20h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 544)) /* [rsp+220h] */

  v2 = a1;
  v3 = 265228LL * a1;
  strcpy(v14, "test.csx");
  if ( a2 )
  {
    v4 = sub_14020B8D8(v14, "wb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = dword_1402B2314;
      dword_140404A6C[v3 + 293512631] = 1;
      v7 = &dword_140404A6C[v3 + 293512632];
      *(_QWORD *)&dword_140404A6C[v3 + 293512633] = 12;
      *v7 = v6;
      sub_14020CE0C((__int64)v7, 12, 1, v5);
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v3 + 293774779]), 0, 0x3014u);
    }
  }
  else
  {
    v8 = sub_14020B8D8(v14, "rb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v8;
    if ( v8 )
    {
      v9 = 0;
      dword_140404A6C[v3 + 293512631] = 0;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v3 + 293512632]), 12, 1, (FILE *)(uintptr_t)(v8));
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v3 + 293774779]), 0, 0x3014u);
      v10 = &dword_140404A6C[v3 + 293512629];
      if ( dword_140404A6C[v3 + 293512632] == dword_1402B2314 )
      {
        sub_14020C4A8(*(_QWORD *)&dword_140404A6C[v3 + 293512629], dword_140404A6C[v3 + 293512633], 0);
        if ( v10[5] )
        {
          v11 = &dword_140404A6C[v3 + 293512635];
          do
          {
            fread_sr(
              (void *)(uintptr_t)(&dword_140404A6C[16 * (__int64)(int)v9 + 293512635 + v3]),
              64,
              1,
              (FILE *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v3 + 293512629]));
            if ( *v11 == 1482293250 )
              dword_140404A6C[265228 * v2 + 293775805 + (int)dword_140404A6C[v3 + 293775804]++] = v9;
            ++v9;
            v11 += 16;
          }
          while ( v9 < v10[5] );
        }
      }
      else
      {
        v10[5] = 0;
        sub_1401977E0(v2);
      }
    }
  }
  return;
}
#undef v13
#undef v14
#undef v15

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 1402B2314: using guessed type int dword_1402B2314;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140197C00) ----------------------------------------------------
__int64            sub_140197C00(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 337);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279AF0: using guessed type void (*off_140279AF0)(CHtmlStream *__hidden this);

//----- (0000000140197C50) ----------------------------------------------------
__int64            sub_140197C50(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 513);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279AA0: using guessed type void (*off_140279AA0)(CHtmlStream *__hidden this);

//----- (0000000140197CA0) ----------------------------------------------------
__int64            sub_140197CA0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 1202);
  }
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279B40: using guessed type void (*off_140279B40)(CHtmlStream *__hidden this);

//----- (0000000140197DF0) ----------------------------------------------------
__int64            sub_140197DF0(__int64 a1)
{
  __int64 v2; // rcx

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 12) = 154;
  v2 = a1 + 40;
  *(_QWORD *)v2 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(v2 + 24) = (uintptr_t)sub_1401982A0;
  *(_BYTE *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = a1;
  SteamAPI_RegisterCallback(v2, 513);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 96) = (uintptr_t)sub_1401982B0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 88) = a1;
  SteamAPI_RegisterCallback(a1 + 72, 337);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 128) = (uintptr_t)sub_1401982C0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 120) = a1;
  SteamAPI_RegisterCallback(a1 + 104, 1202);
  return a1;
}

// 14026E650: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140279A58: using guessed type __int64 (__fastcall *off_140279A58)();
// 140279AA0: using guessed type void (*off_140279AA0)(CHtmlStream *__hidden this);
// 140279AF0: using guessed type void (*off_140279AF0)(CHtmlStream *__hidden this);
// 140279B40: using guessed type void (*off_140279B40)(CHtmlStream *__hidden this);

//----- (0000000140197EC0) ----------------------------------------------------
__int64 (           **           sub_140197EC0(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 (           **result)(); // rax

  v1 = a1[2];
  result = &off_140279A58;
  *a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( v1 )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    a1[2] = 0;
  }
  return result;
}

// 14026E668: using guessed type __int64 __fastcall SteamAPI_UnregisterCallResult(_QWORD);
// 140279A58: using guessed type __int64 (__fastcall *off_140279A58)();

//----- (0000000140197FB0) ----------------------------------------------------
__int64 (           **           sub_140197FB0(__int64 a1))()
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rdx
  __int64 (           **result)(); // rax

  v2 = a1 + 104;
  *(_QWORD *)v2 = (uint64)(uintptr_t)(&off_140279B18);
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
    SteamAPI_UnregisterCallback(v2);
  v3 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !v3 )
    SteamAPI_UnregisterCallback(a1 + 72);
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(&off_140279A78);
  if ( !v3 )
    SteamAPI_UnregisterCallback(a1 + 40);
  v4 = *(_QWORD *)(a1 + 16);
  result = &off_140279A58;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( v4 )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}
