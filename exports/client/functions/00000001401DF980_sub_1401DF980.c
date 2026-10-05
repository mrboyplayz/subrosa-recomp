/* Address: 0x1401df980 | Name: sub_1401DF980 | Size: 170 bytes */
__m128 __fastcall sub_1401DF980(__int64 a1, float a2, int a3)
{
  __int128 v3; // xmm1
  int i; // [rsp+0h] [rbp-18h]
  float v6; // [rsp+4h] [rbp-14h]
  float v7; // [rsp+28h] [rbp+10h]

  v7 = -a2;
  v6 = *(float *)(a1 + 4LL * (a3 - 1));
  for ( i = a3 - 2; i >= 0; --i )
    v6 = (float)(v7 * v6) + *(float *)(a1 + 4LL * i);
  v3 = 0x3F800000u;
  *(float *)&v3 = 1.0 / (float)(1.0 - (float)(v7 * v6));
  return (__m128)v3;
}

