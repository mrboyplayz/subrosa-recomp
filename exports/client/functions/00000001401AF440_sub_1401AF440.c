/* Address: 0x1401af440 | Name: sub_1401AF440 | Size: 156 bytes */
float __fastcall sub_1401AF440(__int64 a1, int a2, int a3, float a4)
{
  float v4; // xmm0_4
  float v6; // [rsp+20h] [rbp-18h]
  int i; // [rsp+24h] [rbp-14h]

  v6 = 0.0;
  for ( i = 0; i < a2; ++i )
  {
    v4 = sub_140244390();
    v6 = v6 + v4;
  }
  return v6 + (float)((float)((float)a3 * a4) * v6);
}

