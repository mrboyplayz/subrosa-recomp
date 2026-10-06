#include "shared_client.h"

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014007A010) ----------------------------------------------------
__int64            sub_14007A010(__int64 a1, __int64 a2, __int64 a3)
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
  _Alignas(16) unsigned sr_pose_product[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007A010[16];
#define v16 (*(__int64 (*))(void *)(sr_frame_14007A010 + 0)) /* [rsp+28h] */

  v4 = (float *)((__int128 *)(void *)sr_pose_product);
  v5 = 3;
  v6 = a3 - (_QWORD)((__int128 *)(void *)sr_pose_product);
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
  *(_OWORD *)a1 = ((__int128 *)(void *)sr_pose_product)[0];
  *(_OWORD *)(a1 + 16) = ((__int128 *)(void *)sr_pose_product)[1];
  *(_DWORD *)(a1 + 32) = sr_pose_product[8];
  return 0; /* compatibility result discarded by all reviewed callers */
}


//----- (000000014007A0E0)
__int64 sub_14007A0E0(_OWORD *a1,__int64 a2,__int64 a3)
{
  float left[16],right[16],result[16];
  memcpy(left,(const void *)(uintptr_t)a2,64);
  memcpy(right,(const void *)(uintptr_t)a3,64);
  for(int row=0;row<4;row++)for(int column=0;column<4;column++)
  {
    float p0=left[row*4]*right[column];
    float p1=left[row*4+1]*right[column+4];
    float p2=left[row*4+2]*right[column+8];
    float p3=left[row*4+3]*right[column+12];
    result[row*4+column]=((p0+p1)+p2)+p3;
  }
  memcpy(a1,result,64);
  /* Native scalar loop leaves RAX at right+48; cookie checker preserves it. */
  return a3+48;
}
#undef v16

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (000000014007AE70) ----------------------------------------------------
_UNKNOWN **           sub_14007AE70(float *a1, float *a2, float *a3)
{
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm11_4
  float v11; // xmm14_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm10_4
  float v15; // xmm15_4
  float v16; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007AE70[224];
#define v17 (*(float (*))(void *)(sr_frame_14007AE70 + 0)) /* [rsp+0h] */
#define v18 (*(float (*))(void *)(sr_frame_14007AE70 + 4)) /* [rsp+4h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_14007AE70 + 184)) /* [rsp+B8h] */
#define v20 (*(float (*))(void *)(sr_frame_14007AE70 + 192)) /* [rsp+C0h] */
#define v21 (*(float (*))(void *)(sr_frame_14007AE70 + 200)) /* [rsp+C8h] */
#define v22 (*(float (*))(void *)(sr_frame_14007AE70 + 208)) /* [rsp+D0h] */
#define v23 (*(float (*))(void *)(sr_frame_14007AE70 + 216)) /* [rsp+D8h] */

  v4 = a3[1];
  v5 = a3[2];
  v21 = a2[5];
  v20 = a2[7];
  v22 = a2[6];
  v23 = a2[8];
  v6 = *a3;
  v7 = a3[4];
  v8 = a3[3];
  v9 = a3[5];
  v10 = a2[1];
  v11 = *a2;
  v12 = a2[2];
  v13 = a2[4];
  v14 = a2[3];
  v15 = a3[7];
  v17 = a3[6];
  v18 = a3[8];
  v16 = (float)(*a3 * v22) + (float)(v4 * v20);
  *a1 = (float)((float)(v4 * v10) + (float)(*a3 * *a2)) + (float)(v5 * v12);
  a1[2] = v16 + (float)(v5 * v23);
  a1[1] = (float)((float)(v6 * v14) + (float)(v4 * v13)) + (float)(v5 * v21);
  a1[3] = (float)((float)(v11 * v8) + (float)(v10 * v7)) + (float)(v12 * v9);
  a1[4] = (float)((float)(v8 * v14) + (float)(v7 * v13)) + (float)(v9 * v21);
  a1[5] = (float)((float)(v8 * v22) + (float)(v7 * v20)) + (float)(v9 * v23);
  a1[6] = (float)((float)(v11 * v17) + (float)(v10 * v15)) + (float)(v12 * v18);
  a1[8] = (float)((float)(v17 * v22) + (float)(v15 * v20)) + (float)(v18 * v23);
  a1[7] = (float)((float)(v17 * v14) + (float)(v15 * v13)) + (float)(v18 * v21);
  return &retaddr;
}
#undef v17
#undef v18
#undef retaddr
#undef v20
#undef v21
#undef v22
#undef v23

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (000000014007B2A0) ----------------------------------------------------
void            sub_14007B2A0(__int64 a1, float *a2, double a3)
{
  __m128 v5; // xmm0
  float v6; // xmm12_4
  float v7; // xmm13_4
  float *v8; // rdi
  float v9; // xmm14_4
  __int64 v10; // rcx
  float v11; // xmm11_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm6_4
  float v22; // xmm2_4
  unsigned char sr_rotation_zero;
  float v23; // xmm6_4

  v5 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(a3)), (__int64)a2, a3);
  v6 = a2[2];
  v7 = a2[1];
  v8 = (float *)(a1 + 4);
  v9 = *a2;
  v10 = 3;
  v11 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v5, v5, 1), f32)[0];
  do
  {
    v12 = v8[1];
    v13 = *(v8 - 1);
    v14 = v12 * v6;
    v15 = (float)(v6 * *v8) - (float)(v12 * v7);
    v16 = (float)(v12 * v9) - (float)(v13 * v6);
    v17 = (float)(v13 * v7) - (float)(v9 * *v8);
    v18 = (float)((float)(v13 * v9) + (float)(v7 * *v8)) + v14;
    v19 = (float)((float)((float)((float)(v17 * v7) - (float)(v16 * v6)) * v11) + (float)(v9 * v18))
        + (float)(SR_VEC_LANES(128, v5, f32)[0] * v15);
    v20 = (float)((float)((float)((float)((float)((float)(v6 * *v8) - (float)(v8[1] * v7)) * v6) - (float)(v17 * v9))
                        * v11)
                + (float)(v7 * v18))
        + (float)(SR_VEC_LANES(128, v5, f32)[0] * v16);
    *v8 = v20;
    v21 = (float)((float)((float)((float)(v16 * v9) - (float)(v15 * v7)) * v11) + (float)(v6 * v18))
        + (float)(SR_VEC_LANES(128, v5, f32)[0] * v17);
    v22 = fsqrt((float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21));
    __asm__ volatile("ucomiss %2, %1; sete %0" : "=qm"(sr_rotation_zero)
                     : "x"(_mm_set_ss(v22)), "x"(_mm_setzero_ps()) : "cc");
    if ( sr_rotation_zero )
    {
      *(_QWORD *)(v8 - 1) = 0;
      v23 = 0.0;
    }
    else
    {
      v23 = v21 * (float)(1.0f / v22);
      *(v8 - 1) = v19 * (float)(1.0f / v22);
      *v8 = (float)(1.0f / v22) * *v8;
    }
    v8[1] = v23;
    v8 += 3;
    --v10;
  }
  while ( v10 );
}
