/* Address: 0x1400200a0 | Name: sub_1400200A0 | Size: 150 bytes */
__m128 *__fastcall sub_1400200A0(__m128 *a1, __m128 *a2, __int64 a3, __int64 a4, __m128 *a5)
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

