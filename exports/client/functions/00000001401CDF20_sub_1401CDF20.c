/* Address: 0x1401cdf20 | Name: sub_1401CDF20 | Size: 594 bytes */
__int64 __fastcall sub_1401CDF20(__int64 a1, int a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  __int64 v5; // [rsp+0h] [rbp-D8h] BYREF
  int j; // [rsp+20h] [rbp-B8h]
  int i; // [rsp+24h] [rbp-B4h]
  double v8; // [rsp+28h] [rbp-B0h]
  double v9; // [rsp+30h] [rbp-A8h]
  double v10; // [rsp+38h] [rbp-A0h]
  double v11; // [rsp+40h] [rbp-98h]
  double v12; // [rsp+48h] [rbp-90h]
  double v13; // [rsp+50h] [rbp-88h]
  float v14[24]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-18h]

  MEMORY[0x1401FC920](v14, a1);
  v9 = 1.0;
  for ( i = a2 - 1; i > 0; --i )
  {
    v8 = (float)-v14[i];
    v10 = 1.0 - v8 * v8;
    v9 = v9 * v10;
    if ( v9 * 10000.0 < 1.0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v15);
    v13 = 1.0 / v10;
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      v11 = v14[j];
      v12 = v14[i - j - 1];
      v2 = (v11 - v12 * v8) * v13;
      v14[j] = v2;
      v3 = (v12 - v11 * v8) * v13;
      v14[i - j - 1] = v3;
    }
  }
  v8 = (float)-v14[0];
  v10 = 1.0 - v8 * v8;
  v9 = v9 * v10;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v15);
}

