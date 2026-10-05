/* Address: 0x1401d53d0 | Name: sub_1401D53D0 | Size: 663 bytes */
float __fastcall sub_1401D53D0(__int64 a1, float *a2, __int64 a3, float a4, int a5)
{
  int j; // [rsp+0h] [rbp-28h]
  int k; // [rsp+0h] [rbp-28h]
  int n; // [rsp+0h] [rbp-28h]
  float v9; // [rsp+4h] [rbp-24h]
  float v10; // [rsp+8h] [rbp-20h]
  float v11; // [rsp+8h] [rbp-20h]
  int m; // [rsp+Ch] [rbp-1Ch]
  int i; // [rsp+10h] [rbp-18h]
  float v14; // [rsp+14h] [rbp-14h]

  v9 = 0.0;
  v14 = 0.0000000099999999 * (float)(*a2 + a2[a5 * a5 - 1]);
  for ( i = 0; i < 10; ++i )
  {
    v10 = 0.0;
    for ( j = 0; j < a5; ++j )
      v10 = v10 + (float)(*(float *)(a3 + 4LL * j) * *(float *)(a1 + 4LL * j));
    v9 = a4 - (float)(2.0 * v10);
    for ( k = 0; k < a5; ++k )
    {
      v11 = 0.0;
      for ( m = k + 1; m < a5; ++m )
        v11 = v11 + (float)(a2[m * a5 + k] * *(float *)(a1 + 4LL * m));
      v9 = v9
         + (float)(*(float *)(a1 + 4LL * k)
                 * (float)((float)(2.0 * v11) + (float)(a2[k * a5 + k] * *(float *)(a1 + 4LL * k))));
    }
    if ( v9 > 0.0 )
      break;
    for ( n = 0; n < a5; ++n )
      a2[n * a5 + n] = a2[n * a5 + n] + v14;
    v14 = v14 * 2.0;
  }
  if ( i == 10 )
    return 1.0;
  return v9;
}

