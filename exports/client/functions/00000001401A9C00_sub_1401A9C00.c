/* Address: 0x1401a9c00 | Name: sub_1401A9C00 | Size: 118 bytes */
float __fastcall sub_1401A9C00(__int64 a1, __int64 a2, int a3)
{
  int i; // [rsp+0h] [rbp-18h]
  float v5; // [rsp+4h] [rbp-14h]

  v5 = 0.0;
  for ( i = 0; i < a3; ++i )
    v5 = v5 + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i));
  return v5;
}

