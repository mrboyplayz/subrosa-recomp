/* Address: 0x1401a08e0 | Name: sub_1401A08E0 | Size: 814 bytes */
float *__fastcall sub_1401A08E0(__int64 a1, __int64 a2, int a3, int a4, int a5, float *a6, float *a7, int a8)
{
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  int k; // [rsp+20h] [rbp-38h]
  int m; // [rsp+20h] [rbp-38h]
  float v13; // [rsp+24h] [rbp-34h]
  float v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  float v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+34h] [rbp-24h]
  int v18; // [rsp+38h] [rbp-20h]
  float v19; // [rsp+3Ch] [rbp-1Ch]
  float v20; // [rsp+40h] [rbp-18h]

  v19 = *a6;
  v13 = *a7;
  if ( a6[1] == 0.0 && a5 == 1 && !a8 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v14 = *(float *)(a1 + 4LL * i * a4) * 32768.0;
      *(float *)(a2 + 4LL * i) = v14 - v13;
      v13 = v19 * v14;
    }
    *a7 = v13;
    return a7;
  }
  else
  {
    v15 = a3 / a5;
    if ( a5 != 1 )
      MEMORY[0x1401FCD30](a2, 0, 4LL * a3);
    for ( j = 0; j < v15; ++j )
      *(float *)(a2 + 4LL * a5 * j) = *(float *)(a1 + 4LL * j * a4) * 32768.0;
    if ( a8 )
    {
      for ( k = 0; k < v15; ++k )
      {
        if ( *(float *)(a2 + 4LL * a5 * k) <= 65536.0 )
          v16 = *(float *)(a2 + 4LL * a5 * k);
        else
          v16 = 65536.0;
        if ( v16 >= -65536.0 )
        {
          if ( *(float *)(a2 + 4LL * a5 * k) <= 65536.0 )
            v17 = *(_DWORD *)(a2 + 4LL * a5 * k);
          else
            v17 = 1199570944;
          v18 = v17;
        }
        else
        {
          v18 = -947912704;
        }
        *(_DWORD *)(a2 + 4LL * a5 * k) = v18;
      }
    }
    for ( m = 0; m < a3; ++m )
    {
      v20 = *(float *)(a2 + 4LL * m);
      *(float *)(a2 + 4LL * m) = v20 - v13;
      v13 = v19 * v20;
    }
    *a7 = v13;
    return a7;
  }
}

