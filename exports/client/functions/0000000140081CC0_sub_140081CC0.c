/* Address: 0x140081cc0 | Name: sub_140081CC0 | Size: 215 bytes */
__m128 __fastcall sub_140081CC0(__int64 a1, float *a2, float a3, float a4, float a5)
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

