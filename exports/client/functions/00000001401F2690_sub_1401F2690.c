/* Address: 0x1401f2690 | Name: sub_1401F2690 | Size: 367 bytes */
float __fastcall sub_1401F2690(float a1)
{
  int v2; // [rsp+24h] [rbp-14h]
  float v3; // [rsp+28h] [rbp-10h]
  float v4; // [rsp+40h] [rbp+8h]

  v4 = a1;
  v3 = 1.0;
  if ( a1 >= 8.0 )
    return 1.0;
  if ( a1 <= -8.0 )
    return -1.0;
  if ( a1 < 0.0 )
  {
    v4 = -a1;
    v3 = -1.0;
  }
  v2 = (int)floor((float)((float)(25.0 * v4) + 0.5));
  return v3
       * (float)(flt_14027B860[v2]
               + (float)((float)((float)(v4 - (float)(0.039999999 * (float)v2))
                               * (float)(1.0 - (float)(flt_14027B860[v2] * flt_14027B860[v2])))
                       * (float)(1.0 - (float)(flt_14027B860[v2] * (float)(v4 - (float)(0.039999999 * (float)v2))))));
}

