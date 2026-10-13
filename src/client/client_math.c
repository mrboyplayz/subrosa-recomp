#include "shared_client.h"

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014007A010) ----------------------------------------------------
__int64            sub_14007A010(__int64 a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_multiply(float out[9], const float a[9], const float b[9]);
  math_mat3_multiply((float *)a1, (const float *)a2, (const float *)a3);
  return 0;
}


//----- (000000014007A0E0)
__int64 sub_14007A0E0(_OWORD *a1,__int64 a2,__int64 a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat4_multiply(float out[16], const float a[16], const float b[16]);
  math_mat4_multiply((float *)a1, (const float *)a2, (const float *)a3);
  return a3 + 48; /* value the original leaves in RAX */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (000000014007AE70) ----------------------------------------------------
_UNKNOWN **           sub_14007AE70(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_multiply_transposed(float out[9], const float a[9], const float b[9]);
  math_mat3_multiply_transposed(a1, a2, a3);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (000000014007B2A0) ----------------------------------------------------
void            sub_14007B2A0(__int64 a1, float *a2, double a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_mat3_rotate_rows(float matrix[9], const float axis[3], float angle);
  /* The angle arrives as float bits in the low lane of a double. */
  math_mat3_rotate_rows((float *)a1, a2, *(float *)&a3);
}

//----- (000000014000B5F0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_14000B5F0(double a1, float a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern float math_angle_difference(float a, float b);
  /* a arrives as float bits in the low lane; callers read lane 0 of the result. */
  return _mm_set_ss(math_angle_difference(*(float *)&a1, a2));
}

// 14000B5F0: inconsistent variable size for 'xmm0_8.8'

//----- (000000014002CF10) ----------------------------------------------------
float *           sub_14002CF10(__int64 a1, float *a2, __int64 a3, float *a4, float *a5)
{
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm3_4

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = (float)((float)((float)(a4[1] * a2[1]) + (float)(*a4 * *a2)) + (float)(a2[2] * a4[2])) * *a5;
  v7 = *a4 * v6;
  *(float *)a1 = v7;
  v8 = v6 * a4[1];
  *(float *)(a1 + 4) = v8;
  v9 = v6 * a4[2];
  *(float *)(a1 + 8) = v9;
  v10 = (float)((float)((float)(a4[4] * a2[1]) + (float)(a4[3] * *a2)) + (float)(a4[5] * a2[2])) * a5[1];
  v11 = (float)(a4[3] * v10) + v7;
  *(float *)a1 = v11;
  v12 = (float)(v10 * a4[4]) + v8;
  *(float *)(a1 + 4) = v12;
  v13 = (float)(v10 * a4[5]) + v9;
  *(float *)(a1 + 8) = v13;
  v14 = (float)((float)((float)(a4[7] * a2[1]) + (float)(a4[6] * *a2)) + (float)(a4[8] * a2[2])) * a5[2];
  *(float *)a1 = (float)(a4[6] * v14) + v11;
  *(float *)(a1 + 4) = (float)(v14 * a4[7]) + v12;
  *(float *)(a1 + 8) = (float)(v14 * a4[8]) + v13;
  return a5;
}


//----- (000000014002D050) ----------------------------------------------------
float            sub_14002D050(float *a1, float *a2, float *a3)
{
  float v5; // xmm11_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm10_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  double v20; // xmm0_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002D050[32];
#define v22 (*(float (*))(void *)(sr_frame_14002D050 + 0)) /* [rsp+20h] */
#define v23 (*(float (*))(void *)(sr_frame_14002D050 + 4)) /* [rsp+24h] */
#define v24 (*(float (*))(void *)(sr_frame_14002D050 + 8)) /* [rsp+28h] */
#define v25 (*(float (*))(void *)(sr_frame_14002D050 + 12)) /* [rsp+2Ch] */
#define v26 (*(__m128 (*))(void *)(sr_frame_14002D050 + 16)) /* [rsp+30h] */

  sub_14010E370(&v22, a2);
  sub_14010E370(SR_VEC_LANES(128, v26, f32), a3);
  v5 = SR_VEC_LANES(128, v26, f32)[3];
  v6 = SR_VEC_LANES(128, v26, f32)[2];
  v7 = SR_VEC_LANES(128, v26, f32)[0];
  v8 = SR_VEC_LANES(128, v26, f32)[1];
  if ( (float)((float)((float)(v25 * SR_VEC_LANES(128, v26, f32)[3]) + (float)(v24 * SR_VEC_LANES(128, v26, f32)[2]))
             + (float)((float)(v22 * SR_VEC_LANES(128, v26, f32)[0]) + (float)(v23 * SR_VEC_LANES(128, v26, f32)[1]))) < 0.0 )
  {
    v26 = _mm_xor_ps(v26, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v6 = SR_VEC_LANES(128, v26, f32)[2];
    v8 = SR_VEC_LANES(128, v26, f32)[1];
    v7 = SR_VEC_LANES(128, v26, f32)[0];
    v5 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v26, v26, 255), f32)[0];
  }
  v9 = -v8;
  v10 = -v7;
  v11 = -v6;
  v12 = (float)((float)((float)(v10 * v25) + (float)(v5 * v22)) + (float)(v9 * v24)) - (float)(v11 * v23);
  v13 = (float)((float)((float)(v5 * v23) - (float)(v10 * v24)) + (float)(v9 * v25)) + (float)(v11 * v22);
  v14 = (float)((float)((float)(v10 * v23) + (float)(v5 * v24)) - (float)(v9 * v22)) + (float)(v11 * v25);
  v15 = (float)((float)((float)(v25 * v5) - (float)(v10 * v22)) - (float)(v9 * v23)) - (float)(v11 * v24);
  v16 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v16 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v17 = v14 * (float)(1.0 / v16);
    v18 = v13 * (float)(1.0 / v16);
    v19 = v12 * (float)(1.0 / v16);
  }
  *a1 = v19;
  a1[1] = v18;
  a1[2] = v17;
  v20 = acos(fminf(fmaxf(v15, -1.0), 1.0));
  return v20 + v20;
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014002D2D0) ----------------------------------------------------
__m128 *           sub_14002D2D0(__m128 *a1, __m128 *a2, __int64 a3, __int64 a4, __m128 *a5)
{
  __m128 v6; // xmm5
  __m128 v7; // xmm7
  __m128 v8; // xmm1
  __m128 v9; // xmm4

  v6 = *(__m128 *)(a4 + 12);
  v7 = *(__m128 *)(a4 + 24);
  v8 = _mm_unpacklo_ps(*(__m128 *)a4, v6);
  v9 = _mm_mul_ps(
         _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), _mm_shuffle_ps(v8, v7, 30)),
             _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), _mm_movelh_ps(v8, v7))),
           _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), _mm_shuffle_ps(_mm_unpackhi_ps(*(__m128 *)a4, v6), v7, 36))),
         *a5);
  *a1 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v6), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *(__m128 *)a4)),
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v7));
  return a5;
}


//----- (000000014002D820) ----------------------------------------------------
double            sub_14002D820(float *a1, float *a2, float a3)
{
  float v3; // xmm5_4
  double v4; // xmm3_8
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm4_4
  float v10; // xmm10_4
  float v11; // xmm5_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  double v14; // xmm7_8
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4

  v3 = a1[1];
  v4 = 0.0;
  v5 = *a1;
  v6 = a1[2];
  HIDWORD(v14) = 0;
  v7 = (float)((float)(v3 * a2[1]) + (float)(*a2 * *a1)) + (float)(v6 * a2[2]);
  v8 = *a2 * v7;
  *a1 = v8;
  v9 = v5 - v8;
  v10 = v7 * a2[1];
  v11 = v3 - v10;
  a1[1] = v10;
  v12 = v7 * a2[2];
  v13 = v6 - v12;
  a1[2] = v12;
  *(float *)&v14 = fsqrt((float)((float)(v11 * v11) + (float)(v9 * v9)) + (float)(v13 * v13));
  if ( *(float *)&v14 <= 0.0 )
    return 0.0;
  v15 = v9 * (float)(1.0 / *(float *)&v14);
  v16 = v11 * (float)(1.0 / *(float *)&v14);
  v17 = v13 * (float)(1.0 / *(float *)&v14);
  v18 = fsqrt((float)((float)(v8 * v8) + (float)(v10 * v10)) + (float)(v12 * v12));
  if ( *(float *)&v14 > (float)(v18 * a3) )
  {
    v4 = v14;
    *(float *)&v14 = v18 * a3;
    *(float *)&v4 = (float)((float)(*(float *)&v4 - (float)(v18 * a3)) * v18) * 480.0;
  }
  *a1 = (float)(v15 * *(float *)&v14) + v8;
  a1[1] = (float)(v16 * *(float *)&v14) + v10;
  a1[2] = (float)(v17 * *(float *)&v14) + v12;
  return v4;
}


//----- (000000014002D9B0) ----------------------------------------------------
double            sub_14002D9B0(float *a1, float *a2, float a3, float a4)
{
  float v4; // xmm5_4
  double v5; // xmm4_8
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm10_4
  float v11; // xmm5_4
  float v12; // xmm11_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  double v16; // xmm3_8
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm1_4

  v4 = *a1;
  v5 = 0.0;
  v6 = a1[1];
  v7 = a1[2];
  HIDWORD(v16) = 0;
  v9 = (float)((float)(v6 * a2[1]) + (float)(*a2 * *a1)) + (float)(v7 * a2[2]);
  v10 = *a2 * v9;
  *a1 = v10;
  v11 = v4 - v10;
  v12 = v9 * a2[1];
  v13 = v6 - v12;
  a1[1] = v12;
  v14 = v9 * a2[2];
  v15 = v7 - v14;
  a1[2] = v14;
  *(float *)&v16 = fsqrt((float)((float)(v13 * v13) + (float)(v11 * v11)) + (float)(v15 * v15));
  if ( *(float *)&v16 <= 0.0 )
    return 0.0;
  v17 = v11 * (float)(1.0 / *(float *)&v16);
  v18 = v13 * (float)(1.0 / *(float *)&v16);
  v19 = v15 * (float)(1.0 / *(float *)&v16);
  v20 = fsqrt((float)((float)(v10 * v10) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( *(float *)&v16 > (float)(v20 * a3) )
  {
    v5 = v16;
    *(float *)&v16 = v20 * a3;
    *(float *)&v5 = (float)((float)(*(float *)&v5 - (float)(v20 * a3)) * v20) * 480.0;
  }
  if ( *(float *)&v16 > a4 )
  {
    *(float *)&v5 = *(float *)&v5 + (float)((float)((float)(*(float *)&v16 - a4) * v20) * 480.0);
    *(float *)&v16 = a4;
  }
  *a1 = (float)(v17 * *(float *)&v16) + v10;
  a1[1] = (float)(v18 * *(float *)&v16) + v12;
  a1[2] = (float)(v19 * *(float *)&v16) + v14;
  return v5;
}


//----- (0000000140038480) ----------------------------------------------------
float            sub_140038480(float a1, float a2, float a3)
{
  float v4; // xmm3_4

  v4 = (1.0 - cos(a3 * 3.14159265359)) * 0.5;
  return (float)((float)(1.0 - v4) * a1) + (float)(a2 * v4);
}


//----- (00000001400384F0) ----------------------------------------------------
__m128            sub_1400384F0(float a1, float a2, int a3)
{
  int v4; // r10d
  int v5; // ebx
  int v6; // r8d
  int v7; // ecx
  int v8; // r14d
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // ebp
  float v14; // xmm10_4
  double v15; // xmm0_8
  __int128 v16; // xmm5
  float v17; // xmm7_4

  v4 = (int)a1;
  v5 = (int)a2;
  v6 = a3 & ((int)a1 + 1);
  v7 = ((57 * v5 + v4) << 13) ^ (57 * v5 + v4);
  v8 = 15731 * v7 * v7;
  v9 = ((v6 + 57 * v5) << 13) ^ (v6 + 57 * v5);
  v10 = 57 * (a3 & ((int)a2 + 1));
  v11 = 15731 * v9 * v9 + 789221;
  v12 = 15731 * (((v10 + v4) << 13) ^ (v10 + v4)) * (((v10 + v4) << 13) ^ (v10 + v4)) + 789221;
  v13 = 15731 * (((v10 + v6) << 13) ^ (v10 + v6)) * (((v10 + v6) << 13) ^ (v10 + v6)) + 789221;
  v14 = (1.0 - cos((float)(a1 - (float)(int)a1) * 3.14159265359)) * 0.5;
  v15 = cos((float)(a2 - (float)(int)a2) * 3.14159265359);
  v16 = 0x3F800000u;
  v17 = (1.0 - v15) * 0.5;
  *(float *)&v16 = (float)((float)((float)((float)(1.0
                                                 - (float)((float)((v11 * v11 - 771171059) & 0x7FFFFFFF) * 9.313225746154785e-10))
                                         * v14)
                                 + (float)((float)(1.0
                                                 - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                 & 0x7FFFFFFF)
                                                         * 9.313225746154785e-10))
                                         * (float)(1.0 - v14)))
                         * (float)(1.0 - v17))
                 + (float)((float)((float)((float)(1.0
                                                 - (float)((float)((v12 * v12 - 771171059) & 0x7FFFFFFF) * 9.313225746154785e-10))
                                         * (float)(1.0 - v14))
                                 + (float)((float)(1.0
                                                 - (float)((float)((v13 * v13 - 771171059) & 0x7FFFFFFF) * 9.313225746154785e-10))
                                         * v14))
                         * v17);
  return (__m128)v16;
}


//----- (000000014006EC40) ----------------------------------------------------
__int64            sub_14006EC40(float *a1, float *a2, float *a3, float *a4)
{
  extern void math_triangle_normal(float out[3], const float a[3], const float b[3], const float c[3]);
  math_triangle_normal(a1, a2, a3, a4);
  return 0;
}


//----- (0000000140079D60) ----------------------------------------------------
__int64            sub_140079D60(_OWORD *a1, __int64 a2, float *a3)
{
  extern void math_mat4_multiply_vec4(float out[4], const float m[16], const float v[4]);
  math_mat4_multiply_vec4((float *)a1, (const float *)a2, a3);
  return 0;
}
#undef v14
#undef v15


//----- (0000000140079F00) ----------------------------------------------------
__int64            sub_140079F00(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  extern void math_mat4_ortho(float out[16], float left, float right, float bottom, float top,
                              float z_near, float z_far);
  math_mat4_ortho((float *)a1, a2, a3, a4, a5, a6, a7);
  return 0;
}

//----- (000000014007A240) ----------------------------------------------------
__int64            sub_14007A240(__int64 a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_vec3_normalize(float out[3], const float v[3]);
  math_vec3_normalize((float *)a1, a2);
  return 0;
}


//----- (000000014007ABA0) ----------------------------------------------------
float            sub_14007ABA0(float *a1, float *a2, float *a3)
{
  extern float math_point_segment_distance(const float a[3], const float b[3], const float p[3]);
  return math_point_segment_distance(a1, a2, a3);
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014007B0F0) ----------------------------------------------------
void            sub_14007B0F0(float *a1, float *a2, float *a3)
{
  extern void math_vec3_multiply_mat3(float out[3], const float v[3], const float m[9]);
  math_vec3_multiply_mat3(a1, a2, a3);
}


//----- (000000014007B4D0) ----------------------------------------------------
void            sub_14007B4D0(float *a1, float *a2, double a3)
{
  extern void math_vec3_rotate(float v[3], const float axis[3], float angle);
  math_vec3_rotate(a1, a2, *(float *)&a3);
}


//----- (000000014007CA00) ----------------------------------------------------
void            sub_14007CA00(_DWORD *a1, int *a2)
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC47C0: using guessed type unsigned int;
// 160FC47D8: using guessed type unsigned int;
// 160FC47E8: using guessed type unsigned int;
// 160FC47F0: using guessed type unsigned int;
// 160FC47F4: using guessed type unsigned int;
// 160FC47F8: using guessed type unsigned int;
// 160FC47FC: using guessed type unsigned int;
// 160FC4804: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;
// 160FC4820: using guessed type unsigned int;
// 1B0032400: using guessed type int[];
// 1B0032404: using guessed type unsigned int;

//----- (000000014007D0B0) ----------------------------------------------------
__int64            sub_14007D0B0(int *a1, unsigned __int16 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 result; // rax

  v2 = a1[1];
  v3 = dword_1402B3840[a2];
  v4 = dword_1402B3840[(unsigned __int16)(a2 + 0x4000)];
  v5 = v3 * *a1 + 0x8000;
  *a1 = ((v4 * *a1 + 0x8000) >> 16) + ((v3 * -(int)v2 + 0x8000) >> 16);
  result = (unsigned int)(v5 >> 16) + (unsigned int)((v4 * v2 + 0x8000) >> 16);
  a1[1] = result;
  return result;
}

// 1402B3840: using guessed type int dword_1402B3840[68174];

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


//----- (000000014009DE70) ----------------------------------------------------
__int64 sub_14009DE70()
{
  return (unsigned int)sub_14009DE80() >> 1;
}


//----- (000000014009DFB0) ----------------------------------------------------
double sub_14009DFB0()
{
  return (double)(int)sub_14009DE80() * 2.3283064370807974e-10;
}


//----- (000000014009DFD0) ----------------------------------------------------
double sub_14009DFD0()
{
  return (double)(int)sub_14009DE80() * 2.3283064365386963e-10;
}


//----- (000000014009DFF0) ----------------------------------------------------
double sub_14009DFF0()
{
  return ((double)(int)sub_14009DE80() + 0.5) * 2.3283064365386963e-10;
}


//----- (000000014009E020) ----------------------------------------------------
double sub_14009E020()
{
  signed int v0; // ebx

  v0 = (unsigned int)sub_14009DE80() >> 5;
  return ((double)((unsigned int)sub_14009DE80() >> 6) + (double)v0 * 67108864.0) * 1.1102230246251565e-16;
}


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

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001400A54F0) ----------------------------------------------------
__int64 sub_1400A54F0()
{
  return (unsigned __int16)sub_14009DE80();
}


//----- (00000001400A5C50) ----------------------------------------------------
void            sub_1400A5C50(float *a1, float *a2, float *a3)
{
  float v4; // xmm0_4
  float v5; // xmm9_4
  float v6; // xmm8_4
  float v7; // xmm6_4
  float v8; // xmm0_4

  v4 = a3[2] - a2[2];
  v5 = fsqrt(
         (float)((float)((float)(a3[1] - a2[1]) * (float)(a3[1] - a2[1]))
               + (float)((float)(*a3 - *a2) * (float)(*a3 - *a2)))
       + (float)(v4 * v4))
     * 0.029296875;
  v6 = expf(-(float)(*(float *)&dword_1402B23D0 * v5));
  v7 = expf(-(float)(*(float *)&dword_1402B23D4 * v5));
  v8 = expf(-(float)(*(float *)&dword_1402B23D8 * v5));
  *a1 = v6;
  a1[1] = v7;
  a1[2] = v8;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B23D0: using guessed type int dword_1402B23D0;
// 1402B23D4: using guessed type int dword_1402B23D4;
// 1402B23D8: using guessed type int dword_1402B23D8;

//----- (00000001400ACD90) ----------------------------------------------------
void            sub_1400ACD90(float *a1, float *a2, float *a3)
{
  float v5; // xmm11_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm10_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  double v20; // xmm0_8
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float sr_relative_quaternion[4];
  __m128 v28; // [rsp+30h] [rbp-B8h] BYREF

  sub_14010E370(&sr_relative_quaternion[0], a3);
  sub_14010E370(SR_VEC_LANES(128, v28, f32), a2);
  v5 = SR_VEC_LANES(128, v28, f32)[3];
  v6 = SR_VEC_LANES(128, v28, f32)[2];
  v7 = SR_VEC_LANES(128, v28, f32)[0];
  v8 = SR_VEC_LANES(128, v28, f32)[1];
  if ( (float)((float)((float)(sr_relative_quaternion[3] * SR_VEC_LANES(128, v28, f32)[3]) + (float)(sr_relative_quaternion[2] * SR_VEC_LANES(128, v28, f32)[2]))
             + (float)((float)(sr_relative_quaternion[0] * SR_VEC_LANES(128, v28, f32)[0]) + (float)(sr_relative_quaternion[1] * SR_VEC_LANES(128, v28, f32)[1]))) < 0.0 )
  {
    v28 = _mm_xor_ps(v28, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v6 = SR_VEC_LANES(128, v28, f32)[2];
    v8 = SR_VEC_LANES(128, v28, f32)[1];
    v7 = SR_VEC_LANES(128, v28, f32)[0];
    v5 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v28, v28, 255), f32)[0];
  }
  v9 = -v8;
  v10 = -v7;
  v11 = -v6;
  v12 = (float)((float)((float)(v10 * sr_relative_quaternion[3]) + (float)(v5 * sr_relative_quaternion[0])) + (float)(v9 * sr_relative_quaternion[2])) - (float)(v11 * sr_relative_quaternion[1]);
  v13 = (float)((float)((float)(v5 * sr_relative_quaternion[1]) - (float)(v10 * sr_relative_quaternion[2])) + (float)(v9 * sr_relative_quaternion[3])) + (float)(v11 * sr_relative_quaternion[0]);
  v14 = (float)((float)((float)(v10 * sr_relative_quaternion[1]) + (float)(v5 * sr_relative_quaternion[2])) - (float)(v9 * sr_relative_quaternion[0])) + (float)(v11 * sr_relative_quaternion[3]);
  v15 = (float)((float)((float)(sr_relative_quaternion[3] * v5) - (float)(v10 * sr_relative_quaternion[0])) - (float)(v9 * sr_relative_quaternion[1])) - (float)(v11 * sr_relative_quaternion[2]);
  v16 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v16 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v17 = v14 * (float)(1.0 / v16);
    v18 = v13 * (float)(1.0 / v16);
    v19 = v12 * (float)(1.0 / v16);
  }
  *a1 = v19;
  a1[1] = v18;
  a1[2] = v17;
  v20 = acos(fminf(fmaxf(v15, -1.0), 1.0));
  v21 = v20 + v20;
  *(float *)&v20 = v21 * *a1;
  v22 = v21 * a1[1];
  v23 = v21 * a1[2];
  *a1 = *(float *)&v20;
  a1[1] = v22;
  a1[2] = v23;
}

// 1400B1CC2: variable 'v81' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C2F90) ----------------------------------------------------
/* Existing callers carry the native XMM3 float word in a double container. */
_UNKNOWN ** sub_1400C2F90(float *a1,float *a2,float *a3,double a4)
{
  float alpha;
  memcpy(&alpha,&a4,sizeof alpha);
  __m128 factor=_mm_set1_ps(alpha),left,right;
  sub_14010E370((float *)(void *)&left,a2);
  sub_14010E370((float *)(void *)&right,a3);
  float l[4],r[4];
  _mm_storeu_ps(l,left);_mm_storeu_ps(r,right);
  float p2=l[2]*r[2],p0=l[0]*r[0];
  float p3=l[3]*r[3]+p2,p1=l[1]*r[1]+p0;
  float dot=p3+p1;
  if(!_mm_comige_ss(_mm_set_ss(dot),_mm_setzero_ps()))
    right=_mm_xor_ps(right,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279870)));
  __m128 weights=_mm_sub_ps(_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279700)),factor);
  __m128 blended=_mm_add_ps(_mm_mul_ps(weights,left),_mm_mul_ps(factor,right));
  float q[4];_mm_storeu_ps(q,blended);
  float s2=q[2]*q[2],s3=q[3]*q[3];
  float s0=q[0]*q[0],s1=q[1]*q[1];
  float sum23=s3+s2,sum01=s0+s1,norm=sum23+sum01;
  __m128d root=_mm_sqrt_pd(_mm_cvtss_sd(_mm_setzero_pd(),_mm_set_ss(norm)));
  unsigned char zero_or_unordered;
  __asm__ volatile("ucomisd %2, %1; sete %0" : "=qm"(zero_or_unordered)
                   : "x"(root),"x"(_mm_setzero_pd()) : "cc");
  if(zero_or_unordered)
    _mm_storeu_ps(q,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279490)));
  else
  {
    __m128d inverse=_mm_div_sd(_mm_set_sd(1.0),root);
    inverse=_mm_unpacklo_pd(inverse,inverse);
    for(unsigned i=0;i<2;i++)
    {
      __m128 pair=_mm_castpd_ps(_mm_load_sd((const double *)(const void *)(q+2*i)));
      __m128 converted=_mm_cvtpd_ps(_mm_mul_pd(_mm_cvtps_pd(pair),inverse));
      uint64_t words;
      memcpy(&words,&converted,sizeof words);
      memcpy(q+2*i,&words,sizeof words);
    }
  }
  return sub_14011C340(a1,q);
}


//----- (00000001400C30E0) ----------------------------------------------------
void            sub_1400C30E0(float *a1, float *a2, float *a3, float a4)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm4_4
  float v7; // xmm6_4

  v4 = a3[1];
  v5 = a2[1];
  v6 = a2[2];
  v7 = a3[2];
  *a1 = (float)((float)(*a3 - *a2) * a4) + *a2;
  a1[1] = (float)((float)(v4 - v5) * a4) + a2[1];
  a1[2] = (float)((float)(v7 - v6) * a4) + a2[2];
}


//----- (00000001400C3140) ----------------------------------------------------
__int64            sub_1400C3140(unsigned __int64 a1, float *a2)
{
  float v2; // xmm13_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm5_4
  float v6; // xmm11_4
  float v7; // xmm8_4
  float v8; // xmm14_4
  float v9; // xmm15_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm12_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm11_4
  float v40; // xmm0_4
  float v41; // xmm8_4
  float v42; // xmm12_4
  float v43; // xmm13_4
  float v44; // xmm14_4
  float v45; // xmm0_4
  float v46; // xmm9_4
  float v47; // xmm0_4
  float v48; // xmm5_4
  float v49; // xmm10_4
  float v50; // xmm6_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm5_4
  float v54; // xmm8_4
  float v55; // xmm9_4
  float v56; // xmm4_4
  float v57; // xmm7_4
  float v58; // xmm10_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm9_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  __m128 v65; // xmm5
  __m128 v66; // xmm2
  __m128 v67; // xmm3
  float v68; // xmm6_4
  float v69; // xmm0_4
  float v70; // xmm8_4
  __m128 v71; // xmm4
  __m128 v72; // xmm3
  __m128 v73; // xmm5
  float v74; // xmm0_4
  float v75; // xmm11_4
  __m128 v76; // xmm1
  __m128 v77; // xmm1
  __m128 v78; // xmm3
  float v79; // xmm0_4
  __m128 v80; // xmm4
  float v81; // xmm6_4
  __m128 v82; // xmm1
  __m128 v83; // xmm2
  __m128 v84; // xmm4
  float v85; // xmm0_4
  float v86; // xmm9_4
  __m128 v87; // xmm3
  float v88; // xmm0_4
  float v89; // xmm8_4
  float v90; // xmm0_4
  float v91; // xmm3_4
  __m128 v92; // xmm2
  __m128 v93; // xmm3
  _BYTE *v94; // r9
  __int8 *v95; // r10
  unsigned __int64 v96; // rax
  __int64 v97; // rcx
  float v98; // xmm1_4
  float v99; // xmm0_4
  float v100; // xmm1_4
  __m128 v101; // xmm1
  __m128 v102; // xmm0
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C3140[160];
#define v104 (*(float (*))(void *)(sr_frame_1400C3140 + 0)) /* [rsp+0h] */
#define v105 (*(float (*))(void *)(sr_frame_1400C3140 + 4)) /* [rsp+4h] */
#define v106 (*(float (*))(void *)(sr_frame_1400C3140 + 8)) /* [rsp+8h] */
#define v107 (*(float (*))(void *)(sr_frame_1400C3140 + 12)) /* [rsp+Ch] */
#define v108 (*(float (*))(void *)(sr_frame_1400C3140 + 16)) /* [rsp+10h] */
#define v109 (*(float (*))(void *)(sr_frame_1400C3140 + 20)) /* [rsp+14h] */
#define v110 (*(float (*))(void *)(sr_frame_1400C3140 + 24)) /* [rsp+18h] */
#define v111 (*(float (*))(void *)(sr_frame_1400C3140 + 28)) /* [rsp+1Ch] */
#define v112 (*(float (*))(void *)(sr_frame_1400C3140 + 32)) /* [rsp+20h] */
#define v113 (*(float (*))(void *)(sr_frame_1400C3140 + 36)) /* [rsp+24h] */
#define v114 (*(float (*))(void *)(sr_frame_1400C3140 + 40)) /* [rsp+28h] */
#define v115 (*(float (*))(void *)(sr_frame_1400C3140 + 44)) /* [rsp+2Ch] */
#define v116 (*(float (*))(void *)(sr_frame_1400C3140 + 48)) /* [rsp+30h] */
#define v117 (*(float (*))(void *)(sr_frame_1400C3140 + 52)) /* [rsp+34h] */
#define v118 (*(float (*))(void *)(sr_frame_1400C3140 + 56)) /* [rsp+38h] */
#define v119 (*(float (*))(void *)(sr_frame_1400C3140 + 60)) /* [rsp+3Ch] */
#define v120 (*(__m128 (*))(void *)(sr_frame_1400C3140 + 64)) /* [rsp+40h] */
#define v121 (*(__m128 (*))(void *)(sr_frame_1400C3140 + 80)) /* [rsp+50h] */
#define v122 (*(_BYTE (*)[48])(void *)(sr_frame_1400C3140 + 96)) /* [rsp+60h] */
#define v123 (*(__int64 (*))(void *)(sr_frame_1400C3140 + 144)) /* [rsp+90h] */

  v2 = a2[15];
  v3 = a2[11];
  v4 = a2[7];
  v5 = a2[10];
  v6 = a2[14];
  v7 = a2[6];
  v8 = a2[13];
  v9 = a2[4];
  v10 = a2[8];
  v11 = a2[12];
  v12 = (float)(v7 * a2[9]) * v2;
  v13 = v10 * v4;
  v14 = (float)((float)(a2[5] * v5) * v2) - (float)((float)(v3 * a2[5]) * v6);
  v15 = v10 * v7;
  v104 = v9 * v5;
  v16 = v14 - v12;
  v17 = v8 * v7;
  v18 = v11 * a2[6];
  v19 = (float)(v8 * v4) * v5;
  v20 = v11 * v4;
  v106 = (float)((float)(v16 + (float)((float)(v4 * a2[9]) * v6)) + (float)(v17 * v3)) - v19;
  v21 = (float)(v9 * v3) * v8;
  v22 = (float)(v10 * v4) * v6;
  v23 = (float)((float)((float)(v9 * v3) * v6) - (float)(v104 * v2)) + (float)(v15 * v2);
  v24 = v18 * v3;
  v25 = v11 * a2[5];
  v26 = (float)(v23 - v22) - v24;
  v27 = v9 * a2[9];
  *(float *)v122 = v26 + (float)(v20 * a2[10]);
  v28 = (float)(v10 * a2[5]) * v6;
  v29 = v25 * a2[11];
  v30 = v25 * a2[10];
  v31 = (float)((float)((float)((float)((float)(v27 * v2) - v21) - (float)((float)(v10 * a2[5]) * v2))
                      + (float)(v13 * v8))
              + v29)
      - (float)(v20 * a2[9]);
  v32 = a2[9];
  v107 = v31;
  v33 = (float)((float)(v104 * v8) - (float)(v27 * v6)) + v28;
  v34 = *a2;
  v35 = v33 - (float)(v15 * v8);
  v36 = a2[1];
  v114 = *a2 * a2[10];
  v37 = v35 - v30;
  v38 = a2[2];
  v105 = v36 * v11;
  v39 = v38 * v32;
  v40 = v37 + (float)(v18 * v32);
  v41 = a2[3];
  v110 = v38 * v10;
  v42 = v41 * v32;
  v104 = v40;
  v43 = v38 * v8;
  v44 = v41 * a2[13];
  v115 = v34 * a2[11];
  v112 = v38 * v11;
  v111 = v41 * v10;
  v45 = v41 * v11;
  v46 = a2[14];
  v113 = v45;
  v47 = v34 * v32;
  v48 = v36 * v10;
  v49 = a2[13];
  v119 = v47;
  v118 = v48;
  v50 = v36 * a2[6];
  *(float *)&v122[36] = (float)((float)((float)((float)((float)(v46 * v47) - (float)(v49 * v114)) - (float)(v46 * v48))
                                      + (float)(v49 * v110))
                              + (float)(a2[10] * v105))
                      - (float)(a2[9] * v112);
  v51 = *a2;
  v52 = a2[2];
  v53 = a2[1];
  v54 = v41 * a2[5];
  v55 = a2[3];
  v56 = v36 * a2[7];
  v57 = v52 * a2[5];
  v58 = *a2 * a2[7];
  v109 = *a2 * a2[6];
  v108 = v52 * v9;
  v59 = v51 * a2[5];
  v60 = a2[13] * v109;
  v116 = v59;
  v117 = v53 * v9;
  v61 = v55 * v9;
  v62 = (float)((float)((float)((float)(v60 - (float)(a2[14] * v59)) + (float)(a2[14] * (float)(v53 * v9)))
                      - (float)(a2[13] * v108))
              - (float)(a2[6] * v105))
      + (float)(a2[5] * v112);
  v63 = a2[11] * v50;
  v64 = a2[11] * v57;
  *(float *)&v122[40] = v62;
  v65 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 10))));
  v66 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 15))));
  v67 = v66;
  SR_VEC_LANES(128, v67, f32)[0] = SR_VEC_LANES(128, v66, f32)[0] * v50;
  v68 = a2[14];
  SR_VEC_LANES(128, v65, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v65, f32)[0] * v56) - v63) + v64) - (float)(a2[10] * v54))
                          - (float)(a2[7] * v39))
                  + (float)(a2[6] * v42);
  v69 = v68 * v54;
  v70 = a2[7];
  SR_VEC_LANES(128, v67, f32)[0] = (float)((float)((float)((float)(SR_VEC_LANES(128, v67, f32)[0] - (float)(v68 * v56)) - (float)(a2[15] * v57)) + v69)
                          + (float)(v70 * v43))
                  - (float)(a2[6] * v44);
  v71 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 1))));
  v72 = _mm_unpacklo_ps(v67, v65);
  v73 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v68))));
  v74 = a2[15] * v39;
  v75 = a2[10];
  SR_VEC_LANES(128, v71, f32)[0] = (float)((float)((float)((float)((float)((float)(SR_VEC_LANES(128, v71, f32)[0] * a2[11]) * v68)
                                                  - (float)((float)(SR_VEC_LANES(128, v71, f32)[0] * v75) * SR_VEC_LANES(128, v66, f32)[0]))
                                          + v74)
                                  - (float)(v68 * v42))
                          - (float)(a2[11] * v43))
                  + (float)(v75 * v44);
  v76 = _mm_unpacklo_ps(((__m128)_mm_cvtsi32_si128((int)(LODWORD(v106)))), v71);
  SR_VEC_LANES(128, v71, f32)[0] = a2[6];
  v77 = _mm_movelh_ps(v76, v72);
  v78 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 11))));
  v120 = v77;
  v121 = v77;
  SR_VEC_LANES(128, v78, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v78, f32)[0] * v109) - (float)(v75 * v58))
                                          - (float)(a2[11] * v108))
                                  + (float)(v75 * v61))
                          + (float)(v70 * v110))
                  - (float)(SR_VEC_LANES(128, v71, f32)[0] * v111);
  v79 = SR_VEC_LANES(128, v71, f32)[0] * v113;
  v80 = v66;
  SR_VEC_LANES(128, v73, f32)[0] = (float)((float)((float)((float)((float)(v68 * v58) - (float)(SR_VEC_LANES(128, v66, f32)[0] * v109))
                                          + (float)(SR_VEC_LANES(128, v66, f32)[0] * v108))
                                  - (float)(v68 * v61))
                          - (float)(v70 * v112))
                  + v79;
  SR_VEC_LANES(128, v80, f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, v66, f32)[0] * v114) - (float)(v68 * v115))
                          - (float)(SR_VEC_LANES(128, v66, f32)[0] * v110))
                  + (float)(v68 * v111);
  v81 = a2[11];
  SR_VEC_LANES(128, v80, f32)[0] = (float)(SR_VEC_LANES(128, v80, f32)[0] + (float)(v81 * v112)) - (float)(a2[10] * v113);
  v82 = _mm_movelh_ps(_mm_unpacklo_ps(v80, v73), _mm_unpacklo_ps(v78, ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v107))))));
  SR_VEC_LANES(128, v78, f32)[0] = a2[9];
  v83 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v78, u32)[0]));
  *(__m128 *)&v122[4] = v82;
  v84 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 15))));
  SR_VEC_LANES(128, v83, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v78, f32)[0] * v58) - (float)(v81 * v116))
                                          + (float)(v81 * v117))
                                  - (float)(SR_VEC_LANES(128, v78, f32)[0] * v61))
                          - (float)(v70 * v118))
                  + (float)(a2[5] * v111);
  v85 = a2[13] * v61;
  v86 = a2[5];
  v87 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 13))));
  SR_VEC_LANES(128, v84, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v84, f32)[0] * v116) - (float)(a2[13] * v58))
                                          - (float)(SR_VEC_LANES(128, v84, f32)[0] * v117))
                                  + v85)
                          + (float)(v70 * v105))
                  - (float)(v86 * v113);
  SR_VEC_LANES(128, v87, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v87, f32)[0] * v115) - (float)(a2[15] * v119))
                                          + (float)(a2[15] * v118))
                                  - (float)(a2[13] * v111))
                          - (float)(a2[11] * v105))
                  + (float)(a2[9] * v113);
  v88 = a2[9] * v109;
  v89 = a2[9] * v108;
  SR_VEC_LANES(128, v82, f32)[0] = a2[10];
  *(__m128 *)&v122[20] = _mm_movelh_ps(_mm_unpacklo_ps(v87, v84), _mm_unpacklo_ps(v83, ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v104))))));
  SR_VEC_LANES(128, v82, f32)[0] = (float)((float)((float)((float)(SR_VEC_LANES(128, v82, f32)[0] * v116) - v88) - (float)(SR_VEC_LANES(128, v82, f32)[0] * v117))
                          + v89)
                  + (float)(a2[6] * v118);
  SR_VEC_LANES(128, v87, f32)[0] = (float)(*(float *)v122 * a2[1]) + (float)(v106 * *a2);
  v90 = a2[3] * v104;
  *(float *)&v122[44] = SR_VEC_LANES(128, v82, f32)[0] - (float)(v86 * v110);
  v91 = SR_VEC_LANES(128, v87, f32)[0] + (float)(v90 + (float)(a2[2] * v107));
  if ( v91 != 0.0 )
  {
    v92 = ((__m128)_mm_cvtsi32_si128((int)(0x3F800000u)));
    SR_VEC_LANES(128, v92, f32)[0] = 1.0 / v91;
    v93 = _mm_shuffle_ps(v92, v92, 0);
    if ( a1 > (unsigned __int64)&v122[44] || a1 + 60 < (unsigned __int64)&v121 )
    {
      v101 = _mm_mul_ps(*(__m128 *)&v122[16], v93);
      *(__m128 *)a1 = _mm_mul_ps(v120, v93);
      *(__m128 *)(a1 + 16) = _mm_mul_ps(*(__m128 *)v122, v93);
      v102 = _mm_mul_ps(*(__m128 *)&v122[32], v93);
      *(__m128 *)(a1 + 32) = v101;
      *(__m128 *)(a1 + 48) = v102;
    }
    else
    {
      v94 = (char *)&v121 - a1;
      v95 = &SR_VEC_LANES(128, v121, i8)[-a1 + 4];
      v96 = a1 + 8;
      v97 = 4;
      do
      {
        v96 += 16LL;
        v98 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v95[v96 - 24];
        *(float *)(v96 - 24) = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v94[v96 - 24];
        v99 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v94[v96 - 16];
        *(float *)(v96 - 20) = v98;
        v100 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v95[v96 - 16];
        *(float *)(v96 - 16) = v99;
        *(float *)(v96 - 12) = v100;
        --v97;
      }
      while ( v97 );
    }
  }
  return 0; /* the function has no caller */
}
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123

// 1400C39C9: conditional instruction was optimized away because r11.8==10

//----- (00000001400D47A0) ----------------------------------------------------
__m128            sub_1400D47A0(float a1, float a2, int a3)
{
  __int128 v4; // xmm5
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // ebx
  float v9; // xmm7_4
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // r9d

  v4 = 0x3F800000u;
  v5 = (int)a1;
  v6 = 57 * (int)a2;
  v7 = a3 & ((int)a1 + 1);
  v8 = 15731 * (((v6 + v5) << 13) ^ (v6 + v5)) * (((v6 + v5) << 13) ^ (v6 + v5));
  v9 = a1 - (float)(int)a1;
  v10 = (((v7 + v6) << 13) ^ (v7 + v6)) * (((v7 + v6) << 13) ^ (v7 + v6));
  v11 = 57 * (a3 & ((int)a2 + 1));
  v12 = ((15731 * v10 + 789221) * (15731 * v10 + 789221) - 771171059) & 0x7FFFFFFF;
  v13 = (((v11 + v7) << 13) ^ (v11 + v7)) * (((v11 + v7) << 13) ^ (v11 + v7));
  v14 = 15731 * (((v11 + v5) << 13) ^ (v11 + v5)) * (((v11 + v5) << 13) ^ (v11 + v5)) + 789221;
  *(float *)&v4 = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.313225746154785e-10))
                                        * (float)(1.0 - v9))
                                + (float)((float)(1.0 - (float)((float)v12 * 9.313225746154785e-10)) * v9))
                        * (float)(1.0 - (float)(a2 - (float)(int)a2)))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((v14 * v14 - 771171059) & 0x7FFFFFFF) * 9.313225746154785e-10))
                                        * (float)(1.0 - v9))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * v13 + 789221) * (15731 * v13 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.313225746154785e-10))
                                        * v9))
                        * (float)(a2 - (float)(int)a2));
  return (__m128)v4;
}


//----- (0000000140105770) ----------------------------------------------------
__int64            sub_140105770(__int64 a1, __int64 a2, __int64 a3)
{
  float *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  float *v7; // rdx
  __int64 v8; // r9
  float v9; // xmm3_4
  __int64 v10; // rcx
  float v11; // xmm4_4
  float v12; // xmm5_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140105770[48];
#define v14 (*(_OWORD (*)[2])(void *)(sr_frame_140105770 + 0)) /* [rsp+0h] */
#define v15 (*(int (*))(void *)(sr_frame_140105770 + 32)) /* [rsp+20h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140105770 + 40)) /* [rsp+28h] */

  v4 = (float *)v14;
  v5 = 3;
  v6 = a3 - (_QWORD)v14;
  v7 = (float *)(a2 + 8);
  v8 = v6 + 24;
  do
  {
    v9 = *(v7 - 2);
    v10 = 3;
    v11 = *(v7 - 1);
    v12 = *v7;
    do
    {
      *v4 = (float)((float)(v9 * *(float *)((char *)v4 + v6)) + (float)(v11 * *(float *)((char *)v4 + v6 + 12)))
          + (float)(v12 * *(float *)((char *)v4 + v8));
      ++v4;
      --v10;
    }
    while ( v10 );
    v7 += 3;
    v8 -= 12;
    v6 -= 12;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)a1 = v14[0];
  *(_OWORD *)(a1 + 16) = v14[1];
  *(_DWORD *)(a1 + 32) = v15;
  return 0; /* the function has no caller */
}
#undef v14
#undef v15
#undef v16


//----- (0000000140105840) ----------------------------------------------------
__int64            sub_140105840(_OWORD *a1, __int64 a2, __int64 a3)
{
  float *v4; // r11
  char *v5; // r9
  __int64 v6; // r8
  float *v7; // rdx
  float v8; // xmm3_4
  float *v9; // rax
  float v10; // xmm4_4
  __int64 v11; // rcx
  float v12; // xmm5_4
  float v13; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140105840[80];
#define v15 (*(_OWORD (*)[4])(void *)(sr_frame_140105840 + 0)) /* [rsp+0h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140105840 + 64)) /* [rsp+40h] */

  v4 = (float *)(a3 + 32);
  v5 = (char *)&v15[-2] - a3;
  v6 = 4;
  v7 = (float *)(a2 + 8);
  do
  {
    v8 = *(v7 - 2);
    v9 = v4;
    v10 = *(v7 - 1);
    v11 = 4;
    v12 = *v7;
    v13 = v7[1];
    do
    {
      *(float *)&v5[(_QWORD)v9] = (float)((float)((float)(v8 * *(v9 - 8)) + (float)(v10 * *(v9 - 4)))
                                        + (float)(v12 * *v9))
                                + (float)(v13 * v9[4]);
      ++v9;
      --v11;
    }
    while ( v11 );
    v5 += 16;
    v7 += 4;
    --v6;
  }
  while ( v6 );
  *a1 = v15[0];
  a1[1] = v15[1];
  a1[2] = v15[2];
  a1[3] = v15[3];
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v15
#undef v16


//----- (0000000140105930) ----------------------------------------------------
_UNKNOWN **           sub_140105930(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). No caller uses the result. */
  extern void math_quat_multiply(float out[4], const float a[4], const float b[4]);
  math_quat_multiply(a1, a2, a3);
  return (_UNKNOWN **)a1;
}


//----- (000000014010CD40) ----------------------------------------------------
__int64            sub_14010CD40(__m128 *a1, float *a2, float *a3)
{
  __int64 result; // rax
  float *v4; // rdi
  float *v5; // r9
  float v8; // xmm8_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm15_4
  __int64 v21; // rdx
  __int64 v22; // r10
  float *v23; // r8
  float *v24; // rcx
  float v25; // xmm12_4
  float v26; // xmm13_4
  float v27; // xmm1_4
  float v28; // xmm11_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm4_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm0_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm7_4
  float v39; // xmm8_4
  float v40; // xmm9_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010CD40[32];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_14010CD40 + 0)) /* [rsp+A8h] */
#define v42 (*(float (*))(void *)(sr_frame_14010CD40 + 8)) /* [rsp+B0h] */
#define v43 (*(float (*))(void *)(sr_frame_14010CD40 + 24)) /* [rsp+C0h] */

  result = (__int64)&retaddr;
  v4 = a3 + 1;
  v5 = a3 + 2;
  SR_VEC_PTR_LANES(128, a1, u64)[0] = 0;
  SR_VEC_PTR_LANES(128, a1, u64)[1] = 0;
  v8 = a3[6] - *a3;
  v9 = a3[7] - a3[1];
  v10 = a3[8] - a3[2];
  v11 = a3[3] - *a3;
  v12 = a3[4] - a3[1];
  v13 = a3[5] - a3[2];
  v14 = (float)(v9 * v13) - (float)(v10 * v12);
  v15 = (float)(v10 * v11) - (float)(v8 * v13);
  v16 = (float)(v8 * v12) - (float)(v9 * v11);
  v17 = fsqrt((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16));
  if ( v17 == 0.0 )
  {
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
  }
  else
  {
    v18 = (float)(1.0 / v17) * v14;
    v19 = (float)(1.0 / v17) * v15;
    v20 = (float)(1.0 / v17) * v16;
  }
  v21 = 0;
  v43 = v19;
  v42 = v18;
  do
  {
    v22 = 0;
    v23 = v4;
    do
    {
      if ( v22 != v21 )
      {
        result = v22 + 1;
        if ( v22 + 1 < 4 )
        {
          v24 = v23 + 4;
          do
          {
            if ( result != v21 )
            {
              v25 = *v23;
              v26 = v23[1];
              v27 = *(v24 - 1) - *v23;
              v28 = *(v23 - 1);
              v29 = *v24 - v26;
              v30 = *(v24 - 2) - v28;
              v31 = (float)(v27 * v20) - (float)(v29 * v19);
              v32 = (float)(v29 * v18) - (float)(v30 * v20);
              v33 = (float)(v30 * v19) - (float)(v27 * v18);
              v34 = fsqrt((float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v33 * v33));
              if ( v34 == 0.0 )
              {
                v35 = 0.0;
                v36 = 0.0;
                v37 = 0.0;
              }
              else
              {
                v35 = (float)(1.0 / v34) * v31;
                v36 = (float)(1.0 / v34) * v32;
                v37 = (float)(1.0 / v34) * v33;
              }
              v38 = *(v5 - 2) - v28;
              v39 = *(v5 - 1) - v25;
              v40 = *v5 - v26;
              if ( (float)((float)((float)(v36 * v39) + (float)(v35 * v38)) + (float)(v37 * v40)) < 0.0 )
              {
                v35 = -v35;
                v36 = -v36;
                v37 = -v37;
              }
              SR_VEC_PTR_LANES(128, a1, f32)[v21] = (float)((float)((float)((float)((float)(a2[1] - v25) * v36)
                                                        + (float)((float)(*a2 - v28) * v35))
                                                + (float)((float)(a2[2] - v26) * v37))
                                        / (float)((float)((float)(v36 * v39) + (float)(v35 * v38)) + (float)(v37 * v40)))
                                + SR_VEC_PTR_LANES(128, a1, f32)[v21];
            }
            v18 = v42;
            ++result;
            v19 = v43;
            v24 += 3;
          }
          while ( result < 4 );
        }
      }
      v18 = v42;
      ++v22;
      v19 = v43;
      v23 += 3;
    }
    while ( v22 < 4 );
    ++v21;
    v5 += 3;
  }
  while ( v21 < 4 );
  *a1 = _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_140279310)), *a1);
  return result;
}
#undef retaddr
#undef v42
#undef v43

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EA0: using guessed type unsigned int;

//----- (000000014010E370) ----------------------------------------------------
void            sub_14010E370(float *a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_quat_from_mat3(float *, const float *);
  math_quat_from_mat3(a1, a2);
}

//----- (000000014011C080) ----------------------------------------------------
_UNKNOWN **           sub_14011C080(float *a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_mat3_multiply_transposed(float *, const float *, const float *);
  math_mat3_multiply_transposed(a1, a2, a3);
  return (_UNKNOWN **)a1;
}

//----- (000000014011C300) ----------------------------------------------------
float            sub_14011C300(__int64 a1, float *a2)
{
  double v3; // xmm0_8

  sub_14007A240(a1, a2);
  v3 = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  return v3 + v3;
}


//----- (000000014011C340) ----------------------------------------------------
_UNKNOWN **           sub_14011C340(float *a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void math_mat3_from_quat(float *, const float *);
  math_mat3_from_quat(a1, a2);
  return (_UNKNOWN **)a1;
}

//----- (000000014011C490) ----------------------------------------------------
void            sub_14011C490(float *a1, float *a2)
{
  double v4; // xmm0_8
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4

  sub_14007A240((__int64)a1, a2);
  v4 = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  v5 = v4 + v4;
  *(float *)&v4 = v5 * *a1;
  v6 = v5 * a1[1];
  v7 = v5 * a1[2];
  *a1 = *(float *)&v4;
  a1[1] = v6;
  a1[2] = v7;
}


//----- (000000014011C640) ----------------------------------------------------
float            sub_14011C640(float *a1, float *a2, float a3)
{
  float v3; // xmm5_4

  v3 = (float)((float)(a1[1] * a2[1]) + (float)(*a1 * *a2)) + (float)(a1[2] * a2[2]);
  return fsqrt(
           (float)(a3 * a3)
         - (float)((float)((float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])) + (float)(a1[2] * a1[2]))
                 - (float)(v3 * v3)))
       - v3;
}


//----- (000000014011C6B0) ----------------------------------------------------
__m128            sub_14011C6B0(__int64 a1, float *a2, float a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm6

  v3 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a1 + 4))));
  SR_VEC_LANES(128, v3, f32)[0] = (float)((float)(SR_VEC_LANES(128, v3, f32)[0] * a2[1]) + (float)(*(float *)a1 * *a2))
                 + (float)(*(float *)(a1 + 8) * a2[2]);
  v4 = _mm_xor_ps(v3, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  SR_VEC_LANES(128, v4, f32)[0] = SR_VEC_LANES(128, v4, f32)[0]
                 - fsqrt(
                     (float)(a3 * a3)
                   - (float)((float)((float)((float)(*(float *)a1 * *(float *)a1)
                                           + (float)(*(float *)(a1 + 4) * *(float *)(a1 + 4)))
                                   + (float)(*(float *)(a1 + 8) * *(float *)(a1 + 8)))
                           - (float)(SR_VEC_LANES(128, v4, f32)[0] * SR_VEC_LANES(128, v4, f32)[0])));
  return v4;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014012BD30) ----------------------------------------------------
void            sub_14012BD30(__int64 a1, float *a2, double a3)
{
  __m128 v5; // xmm0
  float v6; // xmm8_4
  float v7; // xmm12_4
  float v8; // xmm10_4
  float v9; // xmm9_4
  float v10; // xmm2_4
  float v11; // xmm11_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm6_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm3_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm3_4

  v5 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(a3)), (__int64)a2, a3);
  v6 = a2[2];
  v7 = SR_VEC_LANES(128, v5, f32)[0];
  v8 = a2[1];
  v9 = *a2;
  v10 = *(float *)(a1 + 8);
  v11 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v5, v5, 1), f32)[0];
  v12 = (float)(v10 * *a2) - (float)(*(float *)a1 * v6);
  v13 = (float)((float)(*(float *)(a1 + 4) * v8) + (float)(*(float *)a1 * *a2)) + (float)(v10 * v6);
  v14 = (float)((float)(*(float *)a1 * v8) - (float)(*(float *)(a1 + 4) * *a2)) * SR_VEC_LANES(128, v5, f32)[0];
  v15 = (float)((float)((float)((float)((float)((float)(*(float *)a1 * v8) - (float)(*(float *)(a1 + 4) * *a2)) * v8)
                              - (float)(v12 * v6))
                      * v11)
              + (float)(*a2 * v13))
      + (float)((float)((float)(*(float *)(a1 + 4) * v6) - (float)(v10 * v8)) * SR_VEC_LANES(128, v5, f32)[0]);
  v16 = v12;
  v17 = (float)((float)((float)((float)(*(float *)(a1 + 4) * v6) - (float)(*(float *)(a1 + 8) * v8)) * v6)
              - (float)((float)((float)(*(float *)a1 * v8) - (float)(*(float *)(a1 + 4) * *a2)) * *a2))
      * v11;
  v18 = (float)(v12 * *a2) - (float)((float)((float)(*(float *)(a1 + 4) * v6) - (float)(*(float *)(a1 + 8) * v8)) * v8);
  *(float *)a1 = v15;
  *(float *)(a1 + 4) = (float)(v17 + (float)(v8 * v13)) + (float)(v16 * SR_VEC_LANES(128, v5, f32)[0]);
  *(float *)(a1 + 8) = (float)((float)(v18 * v11) + (float)(v6 * v13)) + v14;
  v19 = *(float *)(a1 + 20);
  v20 = (float)(*(float *)(a1 + 16) * v6) - (float)(v19 * v8);
  SR_VEC_LANES(128, v5, i32)[0] = *(_DWORD *)(a1 + 12);
  v21 = (float)(v19 * v9) - (float)(SR_VEC_LANES(128, v5, f32)[0] * v6);
  v22 = (float)(SR_VEC_LANES(128, v5, f32)[0] * v8) - (float)(*(float *)(a1 + 16) * v9);
  v23 = (float)((float)(SR_VEC_LANES(128, v5, f32)[0] * v9) + (float)(*(float *)(a1 + 16) * v8)) + (float)(v19 * v6);
  *(float *)(a1 + 12) = v9 * v23;
  *(float *)(a1 + 16) = v8 * v23;
  *(float *)(a1 + 20) = v6 * v23;
  *(float *)(a1 + 12) = (float)((float)((float)(v22 * v8) - (float)(v21 * v6)) * v11) + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = (float)((float)((float)(v20 * v6) - (float)(v22 * v9)) * v11) + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = (float)((float)((float)(v21 * v9) - (float)(v20 * v8)) * v11) + *(float *)(a1 + 20);
  *(float *)(a1 + 12) = (float)(v20 * v7) + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = (float)(v21 * v7) + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = (float)(v22 * v7) + *(float *)(a1 + 20);
  v24 = *(float *)(a1 + 24);
  v25 = (float)(*(float *)(a1 + 28) * v6) - (float)(*(float *)(a1 + 32) * v8);
  v26 = (float)(*(float *)(a1 + 32) * v9) - (float)(v24 * v6);
  v27 = (float)(v24 * v8) - (float)(*(float *)(a1 + 28) * v9);
  v28 = (float)((float)(v24 * v9) + (float)(*(float *)(a1 + 28) * v8)) + (float)(*(float *)(a1 + 32) * v6);
  *(float *)(a1 + 24) = v9 * v28;
  *(float *)(a1 + 28) = v8 * v28;
  *(float *)(a1 + 32) = v6 * v28;
  *(float *)(a1 + 24) = (float)((float)((float)(v27 * v8) - (float)(v26 * v6)) * v11) + *(float *)(a1 + 24);
  *(float *)(a1 + 28) = (float)((float)((float)(v25 * v6) - (float)(v27 * v9)) * v11) + *(float *)(a1 + 28);
  *(float *)(a1 + 32) = (float)((float)((float)(v26 * v9) - (float)(v25 * v8)) * v11) + *(float *)(a1 + 32);
  *(float *)(a1 + 24) = (float)(v25 * v7) + *(float *)(a1 + 24);
  *(float *)(a1 + 28) = (float)(v26 * v7) + *(float *)(a1 + 28);
  *(float *)(a1 + 32) = (float)(v27 * v7) + *(float *)(a1 + 32);
}


//----- (000000014012C100) ----------------------------------------------------
void            sub_14012C100(float *a1, float *a2)
{
  double v4; // xmm2_8
  __m128 v5; // xmm0
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm5_4

  *(_QWORD *)&v4 = *(unsigned int *)a2;
  *(float *)&v4 = (float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]);
  v5 = sub_1401F8AC0(
         COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fsqrt(*(float *)&v4) * 0.5f)),
         (__int64)a2,
         v4);
  v6 = SR_VEC_LANES(128, v5, f32)[0];
  v7 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v5, v5, 1), f32)[0];
  v8 = 0.0;
  a1[3] = v7;
  v9 = *a2;
  v10 = fsqrt((float)((float)(v9 * v9) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v12 = 0.0;
  }
  else
  {
    v11 = v9 * (float)(1.0 / v10);
    *a1 = v11;
    v12 = (float)(1.0 / v10) * a2[1];
    a1[1] = v12;
    v8 = (float)(1.0 / v10) * a2[2];
  }
  a1[2] = v8;
  v13 = v11 * v6;
  v14 = v12 * v6;
  v15 = v6 * a1[2];
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v15;
}


//----- (00000001401305F0) ----------------------------------------------------
__m128            sub_1401305F0(float a1, float a2, int a3)
{
  int v4; // r11d
  __int128 v5; // xmm5
  int v6; // r8d
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  float v11; // xmm7_4
  int v12; // r9d
  int v13; // edi
  int v14; // ecx
  float v15; // xmm8_4

  v4 = (int)a2;
  v5 = 0x3F800000u;
  v6 = a3 & ((int)a1 + 1);
  v7 = ((57 * v4 + (int)a1) << 13) ^ (57 * v4 + (int)a1);
  v8 = 15731 * v7 * v7;
  v9 = ((v6 + 57 * v4) << 13) ^ (v6 + 57 * v4);
  v10 = 57 * (a3 & ((int)a2 + 1));
  v11 = (float)(3.0 - (float)((float)(a1 - (float)(int)a1) + (float)(a1 - (float)(int)a1)))
      * (float)((float)(a1 - (float)(int)a1) * (float)(a1 - (float)(int)a1));
  v12 = 15731 * (((v10 + (int)a1) << 13) ^ (v10 + (int)a1)) * (((v10 + (int)a1) << 13) ^ (v10 + (int)a1)) + 789221;
  v13 = (15731 * v9 * v9 + 789221) * (15731 * v9 * v9 + 789221) - 771171059;
  v14 = (((v10 + v6) << 13) ^ (v10 + v6)) * (((v10 + v6) << 13) ^ (v10 + v6));
  v15 = (float)(3.0 - (float)((float)(a2 - (float)(int)a2) + (float)(a2 - (float)(int)a2)))
      * (float)((float)(a2 - (float)(int)a2) * (float)(a2 - (float)(int)a2));
  *(float *)&v5 = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.313225746154785e-10))
                                        * (float)(1.0 - v11))
                                + (float)((float)(1.0 - (float)((float)(v13 & 0x7FFFFFFF) * 9.313225746154785e-10)) * v11))
                        * (float)(1.0 - v15))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((v12 * v12 - 771171059) & 0x7FFFFFFF) * 9.313225746154785e-10))
                                        * (float)(1.0 - v11))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * v14 + 789221) * (15731 * v14 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.313225746154785e-10))
                                        * v11))
                        * v15);
  return (__m128)v5;
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


