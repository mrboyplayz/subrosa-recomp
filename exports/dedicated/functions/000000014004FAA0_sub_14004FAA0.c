/* Address: 0x14004faa0 | Name: sub_14004FAA0 | Size: 172 bytes */
void __fastcall sub_14004FAA0(float *a1, float *a2)
{
  __m128 v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  float v8; // xmm2_4

  *a1 = atan2f(a2[1], a2[4]);
  a1[1] = atan2f(-a2[7], fsqrt((float)(a2[6] * a2[6]) + (float)(a2[8] * a2[8])));
  v4 = 0;
  *(double *)v4.m128_u64 = _libm_sse2_sincosf_(v6, v5, v7);
  v8 = _mm_shuffle_ps(v4, v4, 1).m128_f32[0];
  a1[2] = atan2f(
            (float)(v4.m128_f32[0] * a2[5]) - (float)(v8 * a2[2]),
            (float)(v8 * *a2) - (float)(v4.m128_f32[0] * a2[3]));
}

