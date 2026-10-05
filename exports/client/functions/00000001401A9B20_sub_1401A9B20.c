/* Address: 0x1401a9b20 | Name: sub_1401A9B20 | Size: 207 bytes */
float *__fastcall sub_1401A9B20(__int64 a1, __int64 a2, __int64 a3, int a4, float *a5, float *a6)
{
  int i; // [rsp+0h] [rbp-18h]
  float v8; // [rsp+4h] [rbp-14h]
  float v9; // [rsp+8h] [rbp-10h]

  v8 = 0.0;
  v9 = 0.0;
  for ( i = 0; i < a4; ++i )
  {
    v8 = v8 + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i));
    v9 = v9 + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a3 + 4LL * i));
  }
  *a5 = v8;
  *a6 = v9;
  return a6;
}

