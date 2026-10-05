/* Address: 0x14007ca00 | Name: sub_14007CA00 | Size: 129 bytes */
void __fastcall sub_14007CA00(_DWORD *a1, int *a2)
{
  int v2; // xmm5_4
  int v3; // xmm2_4
  int v4; // xmm4_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm3_4
  int v8; // xmm6_4
  int v9; // xmm7_4

  v2 = *a2;
  v3 = a2[3];
  v4 = a2[4];
  v5 = a2[6];
  v6 = a2[7];
  v7 = a2[8];
  v8 = a2[5];
  v9 = a2[1];
  a1[6] = a2[2];
  a1[3] = v9;
  a1[7] = v8;
  *a1 = v2;
  a1[1] = v3;
  a1[2] = v5;
  a1[4] = v4;
  a1[5] = v6;
  a1[8] = v7;
}

