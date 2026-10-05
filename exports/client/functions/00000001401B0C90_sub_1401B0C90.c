/* Address: 0x1401b0c90 | Name: sub_1401B0C90 | Size: 561 bytes */
_BOOL8 __fastcall sub_1401B0C90(__int64 a1, __int64 a2, int a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+24h] [rbp-34h]
  float v10; // [rsp+28h] [rbp-30h]
  float v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-24h]
  float v13; // [rsp+38h] [rbp-20h]
  float v14; // [rsp+40h] [rbp-18h]
  float v15; // [rsp+4Ch] [rbp-Ch]

  v13 = 1.0e-15;
  v10 = 1.0e-15;
  for ( i = 0; i < 13; ++i )
  {
    for ( j = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a3;
          j < *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) << a3;
          ++j )
    {
      v3 = sub_140244390();
      v14 = v3;
      v4 = sub_140244390();
      v13 = v13 + (float)(v14 + v4);
      v5 = sub_140244390();
      v15 = v5;
      v6 = sub_140244390();
      v10 = v10 + (float)(v15 + v6);
    }
  }
  v11 = 0.70710701 * v10;
  v12 = 13;
  if ( a3 <= 1 )
    v12 = 5;
  return (float)((float)(v12 + (*(__int16 *)(*(_QWORD *)(a1 + 32) + 26LL) << (a3 + 1))) * v11) > (float)((float)(*(__int16 *)(*(_QWORD *)(a1 + 32) + 26LL) << (a3 + 1)) * v13);
}

