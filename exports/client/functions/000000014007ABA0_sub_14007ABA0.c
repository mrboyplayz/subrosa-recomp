/* Address: 0x14007aba0 | Name: sub_14007ABA0 | Size: 578 bytes */
float __fastcall sub_14007ABA0(float *a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm11_4
  float v9; // xmm7_4
  float v10; // xmm9_4
  float v11; // xmm13_4
  float v12; // xmm14_4
  float v13; // xmm15_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm4_4

  v3 = a2[1];
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = v3 - v5;
  v8 = a2[2];
  v9 = *a2 - *a1;
  v10 = v8 - v6;
  v11 = *a3;
  v12 = a3[1];
  v13 = a3[2];
  if ( (float)((float)((float)((float)(v12 - v3) * (float)(v3 - v5)) + (float)((float)(*a3 - *a2) * v9))
             + (float)((float)(v13 - v8) * (float)(v8 - v6))) >= 0.0 )
    return fsqrt(
             (float)((float)((float)(v3 - v12) * (float)(v3 - v12)) + (float)((float)(*a2 - v11) * (float)(*a2 - v11)))
           + (float)((float)(v8 - v13) * (float)(v8 - v13)));
  if ( (float)((float)((float)((float)(v12 - v5) * v7) + (float)((float)(v11 - v4) * v9))
             + (float)((float)(v13 - v6) * v10)) > 0.0 )
  {
    v18 = fsqrt((float)((float)(v7 * v7) + (float)(v9 * v9)) + (float)(v10 * v10));
    if ( v18 == 0.0 )
    {
      v19 = 0.0;
      v20 = 0.0;
      v21 = 0.0;
    }
    else
    {
      v19 = v9 * (float)(1.0 / v18);
      v20 = v7 * (float)(1.0 / v18);
      v21 = v10 * (float)(1.0 / v18);
    }
    v22 = -(float)((float)((float)((float)(v12 - v5) * v20) + (float)((float)(v11 - v4) * v19))
                 + (float)((float)(v13 - v6) * v21));
    v15 = v4 - (float)((float)(v19 * v22) + v11);
    v16 = v5 - (float)((float)(v20 * v22) + v12);
    v17 = v6 - (float)((float)(v21 * v22) + v13);
  }
  else
  {
    v15 = v4 - v11;
    v16 = v5 - v12;
    v17 = v6 - v13;
  }
  return fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17));
}

