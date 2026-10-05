/* Address: 0x14000b5f0 | Name: sub_14000B5F0 | Size: 94 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_14000B5F0(double a1, float a2)
{
  __m128 v2; // xmm4
  __m128d v3; // xmm0

  v2 = *(__m128 *)&a1;
  if ( (float)(a2 - *(float *)&a1) >= 3.14159265359 )
  {
    v3 = 0;
    v3.m128d_f64[0] = v2.m128_f32[0] + 6.28318530718;
    v2 = _mm_cvtpd_ps(v3);
  }
  if ( (float)(v2.m128_f32[0] - a2) >= 3.14159265359 )
    a2 = a2 + 6.28318530718;
  v2.m128_f32[0] = v2.m128_f32[0] - a2;
  return v2;
}

