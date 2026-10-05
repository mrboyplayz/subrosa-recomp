/* Address: 0x1401d3760 | Name: sub_1401D3760 | Size: 624 bytes */
__int64 __fastcall sub_1401D3760(__int64 a1, __int64 a2, float a3, int a4, int a5)
{
  float v5; // xmm0_4
  int j; // [rsp+0h] [rbp-1D8h] BYREF
  int i; // [rsp+4h] [rbp-1D4h]
  double v9; // [rsp+8h] [rbp-1D0h]
  double v10; // [rsp+10h] [rbp-1C8h]
  double v11[26]; // [rsp+20h] [rbp-1B8h] BYREF
  _QWORD v12[29]; // [rsp+F0h] [rbp-E8h] BYREF

  memset(v11, 0, 0xC8u);
  memset(v12, 0, 0xC8u);
  for ( i = 0; i < a4; ++i )
  {
    v9 = *(float *)(a2 + 4LL * i);
    for ( j = 0; j < a5; j += 2 )
    {
      v10 = v11[j] + a3 * (v11[j + 1] - v9);
      v11[j] = v9;
      *(double *)&v12[j] = *(double *)&v12[j] + v11[0] * v9;
      v9 = v11[j + 1] + a3 * (v11[j + 2] - v10);
      v11[j + 1] = v10;
      *(double *)&v12[j + 1] = *(double *)&v12[j + 1] + v11[0] * v10;
    }
    v11[a5] = v9;
    *(double *)&v12[a5] = *(double *)&v12[a5] + v11[0] * v9;
  }
  for ( j = 0; j < a5 + 1; ++j )
  {
    v5 = *(double *)&v12[j];
    *(float *)(a1 + 4LL * j) = v5;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v12[26]);
}

