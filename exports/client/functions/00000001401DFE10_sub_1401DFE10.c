/* Address: 0x1401dfe10 | Name: sub_1401DFE10 | Size: 313 bytes */
float __fastcall sub_1401DFE10(__int64 a1, float a2, int a3)
{
  float result; // xmm0_4
  float v4; // xmm0_4
  int j; // [rsp+20h] [rbp-28h]
  float v6; // [rsp+24h] [rbp-24h]
  int i; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v8 = 0;
  for ( i = 0; i < 10; ++i )
  {
    v6 = -1.0;
    for ( j = 0; j < a3; ++j )
    {
      v4 = sub_140244390();
      if ( v4 > v6 )
      {
        v6 = v4;
        v8 = j;
      }
    }
    result = a2;
    if ( a2 >= v6 )
      break;
    result = 0.99000001
           - (float)((float)((float)((float)(0.1 * (float)i) + 0.80000001) * (float)(v6 - a2))
                   / (float)(v6 * (float)(v8 + 1)));
    sub_1401CDE70(a1, a3, result);
  }
  return result;
}

