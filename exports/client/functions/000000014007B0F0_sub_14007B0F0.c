/* Address: 0x14007b0f0 | Name: sub_14007B0F0 | Size: 140 bytes */
void __fastcall sub_14007B0F0(float *a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm0_4

  v3 = *a2;
  v4 = a2[2];
  v5 = a2[1];
  v6 = *a2;
  *a1 = (float)((float)(v5 * a3[3]) + (float)(*a2 * *a3)) + (float)(v4 * a3[6]);
  a1[1] = (float)((float)(v5 * a3[4]) + (float)(v6 * a3[1])) + (float)(v4 * a3[7]);
  a1[2] = (float)((float)(v5 * a3[5]) + (float)(v3 * a3[2])) + (float)(v4 * a3[8]);
}

