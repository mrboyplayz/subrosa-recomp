/* Address: 0x14011c6b0 | Name: sub_14011C6B0 | Size: 122 bytes */
__m128 __fastcall sub_14011C6B0(__int64 a1, float *a2, float a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm6

  v3 = (__m128)*(unsigned int *)(a1 + 4);
  v3.m128_f32[0] = (float)((float)(v3.m128_f32[0] * a2[1]) + (float)(*(float *)a1 * *a2))
                 + (float)(*(float *)(a1 + 8) * a2[2]);
  v4 = _mm_xor_ps(v3, (__m128)xmmword_140279870);
  v4.m128_f32[0] = v4.m128_f32[0]
                 - fsqrt(
                     (float)(a3 * a3)
                   - (float)((float)((float)((float)(*(float *)a1 * *(float *)a1)
                                           + (float)(*(float *)(a1 + 4) * *(float *)(a1 + 4)))
                                   + (float)(*(float *)(a1 + 8) * *(float *)(a1 + 8)))
                           - (float)(v4.m128_f32[0] * v4.m128_f32[0])));
  return v4;
}

