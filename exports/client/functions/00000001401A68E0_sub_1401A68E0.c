/* Address: 0x1401a68e0 | Name: sub_1401A68E0 | Size: 437 bytes */
__int64 __fastcall sub_1401A68E0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  float v4; // xmm0_4
  int i; // [rsp+20h] [rbp-28h]
  float v7; // [rsp+24h] [rbp-24h]
  float v8; // [rsp+28h] [rbp-20h]
  float v9; // [rsp+2Ch] [rbp-1Ch]
  float v10; // [rsp+30h] [rbp-18h]

  v7 = 1.0e-15;
  v8 = 1.0e-15;
  if ( a3 )
  {
    for ( i = 0; i < (int)a4; ++i )
    {
      v9 = *(float *)(a1 + 4LL * i) + *(float *)(a2 + 4LL * i);
      v10 = *(float *)(a1 + 4LL * i) - *(float *)(a2 + 4LL * i);
      v8 = v8 + (float)(v9 * v9);
      v7 = v7 + (float)(v10 * v10);
    }
  }
  else
  {
    v8 = sub_1401A9C00(a1, a1, a4) + 1.0e-15;
    v7 = sub_1401A9C00(a2, a2, a4) + 1.0e-15;
  }
  sqrt(v8);
  sqrt(v7);
  v4 = sub_1401A6B90();
  return (unsigned int)(int)floor((float)((float)(10430.382 * v4) + 0.5));
}

