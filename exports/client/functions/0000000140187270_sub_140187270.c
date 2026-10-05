/* Address: 0x140187270 | Name: sub_140187270 | Size: 123 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_140187270(float a1, float a2, float a3, double a4, float a5)
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

