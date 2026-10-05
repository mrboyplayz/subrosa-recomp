/* Address: 0x14011c490 | Name: sub_14011C490 | Size: 106 bytes */
void __fastcall sub_14011C490(float *a1, float *a2)
{
  double v4; // xmm0_8
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4

  sub_14007A240((__int64)a1, a2);
  v4 = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  v5 = v4 + v4;
  *(float *)&v4 = v5 * *a1;
  v6 = v5 * a1[1];
  v7 = v5 * a1[2];
  *a1 = *(float *)&v4;
  a1[1] = v6;
  a1[2] = v7;
}

