/* Address: 0x1401ce180 | Name: sub_1401CE180 | Size: 645 bytes */
__int64 __fastcall sub_1401CE180(__int64 a1, __int64 a2, int a3)
{
  float v3; // xmm0_4
  int i; // [rsp+0h] [rbp-1D8h] BYREF
  int j; // [rsp+4h] [rbp-1D4h]
  double v7; // [rsp+8h] [rbp-1D0h]
  double v8; // [rsp+10h] [rbp-1C8h]
  double v9; // [rsp+18h] [rbp-1C0h]
  double v10; // [rsp+20h] [rbp-1B8h]
  double v11; // [rsp+28h] [rbp-1B0h]
  _BYTE v12[400]; // [rsp+30h] [rbp-1A8h]
  _OWORD v13[24]; // [rsp+38h] [rbp-1A0h]
  __int64 v14; // [rsp+1C0h] [rbp-18h]

  i = 0;
  do
  {
    v8 = *(float *)(a2 + 4LL * i);
    *(double *)&v13[i] = v8;
    *(double *)&v12[16 * i++] = v8;
  }
  while ( i <= a3 );
  for ( i = 0; i < a3; ++i )
  {
    if ( *(double *)v13 <= 9.999999717180685e-10 )
      v9 = 9.999999717180685e-10;
    else
      v9 = *(double *)v13;
    v7 = -*(double *)&v12[16 * i + 16] / v9;
    v3 = v7;
    *(float *)(a1 + 4LL * i) = v3;
    for ( j = 0; j < a3 - i; ++j )
    {
      v10 = *(double *)&v12[16 * j + 16 + 16 * i];
      v11 = *(double *)&v13[j];
      *(double *)&v12[16 * j + 16 + 16 * i] = v10 + v11 * v7;
      *(double *)&v13[j] = v11 + v10 * v7;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v14);
}

