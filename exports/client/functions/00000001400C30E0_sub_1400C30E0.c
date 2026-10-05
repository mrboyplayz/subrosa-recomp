/* Address: 0x1400c30e0 | Name: sub_1400C30E0 | Size: 96 bytes */
void __fastcall sub_1400C30E0(float *a1, float *a2, float *a3, float a4)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm4_4
  float v7; // xmm6_4

  v4 = a3[1];
  v5 = a2[1];
  v6 = a2[2];
  v7 = a3[2];
  *a1 = (float)((float)(*a3 - *a2) * a4) + *a2;
  a1[1] = (float)((float)(v4 - v5) * a4) + a2[1];
  a1[2] = (float)((float)(v7 - v6) * a4) + a2[2];
}

