/* Address: 0x1401ad490 | Name: sub_1401AD490 | Size: 594 bytes */
float __fastcall sub_1401AD490(__int64 a1, float *a2, int a3)
{
  float result; // xmm0_4
  int j; // [rsp+20h] [rbp-38h]
  int k; // [rsp+20h] [rbp-38h]
  int i; // [rsp+24h] [rbp-34h]
  float v7; // [rsp+28h] [rbp-30h]
  float v8; // [rsp+2Ch] [rbp-2Ch]
  float v9; // [rsp+30h] [rbp-28h]
  float v10; // [rsp+34h] [rbp-24h]
  float v11; // [rsp+38h] [rbp-20h]

  v9 = *a2;
  MEMORY[0x1401FCD30](a1, 0, 4LL * a3);
  result = *a2;
  if ( *a2 != 0.0 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v7 = 0.0;
      for ( j = 0; j < i; ++j )
        v7 = v7 + (float)(*(float *)(a1 + 4LL * j) * a2[i - j]);
      v8 = -(float)((float)(v7 + a2[i + 1]) / v9);
      *(float *)(a1 + 4LL * i) = v8;
      for ( k = 0; k < (i + 1) >> 1; *(float *)(a1 + 4LL * (i - 1 - k++)) = v11 + (float)(v8 * v10) )
      {
        v10 = *(float *)(a1 + 4LL * k);
        v11 = *(float *)(a1 + 4LL * (i - 1 - k));
        *(float *)(a1 + 4LL * k) = v10 + (float)(v8 * v11);
      }
      v9 = v9 - (float)((float)(v8 * v8) * v9);
      result = 0.001 * *a2;
      if ( result > v9 )
        break;
    }
  }
  return result;
}

