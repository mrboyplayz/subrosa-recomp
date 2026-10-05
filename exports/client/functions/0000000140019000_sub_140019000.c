/* Address: 0x140019000 | Name: sub_140019000 | Size: 127 bytes */
__m128 __fastcall sub_140019000(float *a1, float *a2)
{
  float v2; // xmm0_4
  __int128 v4; // xmm6

  v2 = a2[2] - a1[2];
  if ( fsqrt(
         (float)((float)((float)(a2[1] - a1[1]) * (float)(a2[1] - a1[1]))
               + (float)((float)(*a2 - *a1) * (float)(*a2 - *a1)))
       + (float)(v2 * v2)) <= 128.0 )
  {
    v4 = 0x3F800000u;
    if ( (unsigned int)sub_1400DC050(a1, a2, 0) )
      return (__m128)0x3F000000u;
    return (__m128)v4;
  }
  else
  {
    return (__m128)0x3F000000u;
  }
}

