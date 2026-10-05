/* Address: 0x1400e2470 | Name: sub_1400E2470 | Size: 274 bytes */
float __fastcall sub_1400E2470(int a1, float a2, float a3, float a4, float a5, float a6)
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

