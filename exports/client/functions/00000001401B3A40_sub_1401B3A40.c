/* Address: 0x1401b3a40 | Name: sub_1401B3A40 | Size: 379 bytes */
__int64 __fastcall sub_1401B3A40(__int64 *a1, __int64 a2, int a3, float a4, float *a5)
{
  int i; // [rsp+0h] [rbp-38h]
  float v7; // [rsp+4h] [rbp-34h]
  float v8; // [rsp+8h] [rbp-30h]
  float v9; // [rsp+Ch] [rbp-2Ch]
  float v10; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+18h] [rbp-20h]
  __int64 v12; // [rsp+20h] [rbp-18h]

  v11 = *a1;
  v12 = a1[1];
  v7 = *a5;
  v8 = a5[1];
  for ( i = 0; i < a3; ++i )
  {
    v9 = (float)(*(float *)(v11 + 4LL * i) + 1.0e-30) + v7;
    v10 = (float)(*(float *)(v12 + 4LL * i) + 1.0e-30) + v8;
    v7 = a4 * v9;
    v8 = a4 * v10;
    *(float *)(a2 + 8LL * i) = v9 * 0.000030517578;
    *(float *)(a2 + 4LL * (2 * i + 1)) = v10 * 0.000030517578;
  }
  *a5 = v7;
  a5[1] = v8;
  return 4;
}

