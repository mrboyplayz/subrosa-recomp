/* Address: 0x14002d370 | Name: sub_14002D370 | Size: 1185 bytes */
float *__fastcall sub_14002D370(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float *result; // rax
  float v6; // xmm12_4
  float v7; // xmm13_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  float v11; // xmm14_4
  float v12; // xmm8_4
  float v13; // xmm15_4
  float v14; // xmm10_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm10_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm3_4
  float v21; // xmm10_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm6_4
  float v25; // xmm11_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  float v33; // xmm13_4
  float v34; // xmm14_4
  float v35; // xmm1_4
  float v36; // xmm5_4
  float v37; // xmm6_4
  float v38; // xmm11_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm3_4
  float v42; // xmm11_4
  float v43; // xmm5_4
  float v44; // xmm6_4
  float v45; // xmm13_4
  float v46; // xmm14_4
  float v47; // xmm1_4
  float v48; // xmm5_4
  float v49; // xmm6_4
  float v50; // xmm11_4
  float v51; // xmm5_4
  float v52; // xmm6_4
  float v53; // xmm0_4
  float v54; // xmm11_4
  float v55; // xmm5_4
  float v56; // xmm6_4

  result = a5;
  v6 = a3[1];
  v7 = *a4;
  v8 = *a4 - *a3;
  v9 = a5[2];
  v10 = v9 - a3[2];
  v11 = a4[1];
  v12 = *a5 - *a3;
  v13 = a4[2];
  v14 = a5[1] - v6;
  v15 = v14 * v8;
  v16 = v13 - a3[2];
  v17 = (float)(v14 * v16) - (float)(v10 * (float)(v11 - v6));
  v18 = (float)(v10 * v8) - (float)(v12 * v16);
  v19 = (float)(v12 * (float)(v11 - v6)) - v15;
  v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
  if ( v20 == 0.0 )
  {
    v21 = 0.0;
    v22 = 0.0;
    v23 = 0.0;
  }
  else
  {
    v21 = v17 * (float)(1.0 / v20);
    v22 = v18 * (float)(1.0 / v20);
    v23 = v19 * (float)(1.0 / v20);
  }
  v24 = *a5 - v7;
  v25 = a5[1] - v11;
  v26 = (float)(v25 * v23) - (float)((float)(v9 - v13) * v22);
  v27 = (float)((float)(v9 - v13) * v21) - (float)(v24 * v23);
  v28 = (float)(v24 * v22) - (float)(v25 * v21);
  v29 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
  if ( v29 == 0.0 )
  {
    v30 = 0.0;
    v31 = 0.0;
    v32 = 0.0;
  }
  else
  {
    v30 = v26 * (float)(1.0 / v29);
    v31 = v27 * (float)(1.0 / v29);
    v32 = v28 * (float)(1.0 / v29);
  }
  *a1 = (float)((float)((float)((float)(a2[1] - v11) * v31) + (float)((float)(*a2 - v7) * v30))
              + (float)((float)(a2[2] - v13) * v32))
      / (float)((float)((float)((float)(v6 - v11) * v31) + (float)((float)(*a3 - v7) * v30))
              + (float)((float)(a3[2] - v13) * v32));
  v33 = a5[1];
  v34 = a5[2];
  v35 = a3[1] - v33;
  v36 = a3[2] - v34;
  v37 = *a3 - *a5;
  v38 = (float)(v35 * v23) - (float)(v36 * v22);
  v39 = (float)(v36 * v21) - (float)(v37 * v23);
  v40 = (float)(v37 * v22) - (float)(v35 * v21);
  v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
  if ( v41 == 0.0 )
  {
    v42 = 0.0;
    v43 = 0.0;
    v44 = 0.0;
  }
  else
  {
    v42 = v38 * (float)(1.0 / v41);
    v43 = v39 * (float)(1.0 / v41);
    v44 = v40 * (float)(1.0 / v41);
  }
  a1[1] = (float)((float)((float)((float)(*a2 - *a5) * v42) + (float)((float)(a2[1] - v33) * v43))
                + (float)((float)(a2[2] - v34) * v44))
        / (float)((float)((float)((float)(a4[1] - v33) * v43) + (float)((float)(*a4 - *a5) * v42))
                + (float)((float)(a4[2] - v34) * v44));
  v45 = a3[1];
  v46 = a3[2];
  v47 = a4[1] - v45;
  v48 = a4[2] - v46;
  v49 = *a4 - *a3;
  v50 = (float)(v47 * v23) - (float)(v48 * v22);
  v51 = (float)(v48 * v21) - (float)(v49 * v23);
  v52 = (float)(v49 * v22) - (float)(v47 * v21);
  v53 = fsqrt((float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(v52 * v52));
  if ( v53 == 0.0 )
  {
    v54 = 0.0;
    v55 = 0.0;
    v56 = 0.0;
  }
  else
  {
    v54 = v50 * (float)(1.0 / v53);
    v55 = v51 * (float)(1.0 / v53);
    v56 = v52 * (float)(1.0 / v53);
  }
  a1[2] = (float)((float)((float)((float)(a2[1] - v45) * v55) + (float)((float)(*a2 - *a3) * v54))
                + (float)((float)(a2[2] - v46) * v56))
        / (float)((float)((float)((float)(*a5 - *a3) * v54) + (float)((float)(a5[1] - v45) * v55))
                + (float)((float)(a5[2] - v46) * v56));
  return result;
}

