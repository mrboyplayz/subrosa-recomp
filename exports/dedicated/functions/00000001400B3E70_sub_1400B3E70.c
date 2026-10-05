/* Address: 0x1400b3e70 | Name: sub_1400B3E70 | Size: 106 bytes */
void __fastcall sub_1400B3E70(float *a1, float *a2)
{
  double v4; // xmm0_8
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4

  sub_140049260((__int64)a1, a2);
  v4 = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  v5 = v4 + v4;
  *(float *)&v4 = v5 * *a1;
  v6 = v5 * a1[1];
  v7 = v5 * a1[2];
  *a1 = *(float *)&v4;
  a1[1] = v6;
  a1[2] = v7;
}

