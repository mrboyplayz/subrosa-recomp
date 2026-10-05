/* Address: 0x140080b80 | Name: sub_140080B80 | Size: 627 bytes */
_BOOL8 __fastcall sub_140080B80(__int64 a1, int *a2, float *a3, float *a4)
{
  int v4; // edi
  float *v9; // rsi
  float v10; // xmm7_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm8_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm9_4
  float v24; // xmm0_4
  float v25; // xmm8_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v34[2]; // [rsp+48h] [rbp-79h] BYREF
  float v35; // [rsp+50h] [rbp-71h]
  float v36[4]; // [rsp+58h] [rbp-69h] BYREF
  float v37[4]; // [rsp+68h] [rbp-59h] BYREF
  float v38[4]; // [rsp+78h] [rbp-49h] BYREF
  float v39[6]; // [rsp+88h] [rbp-39h] BYREF
  float v40; // [rsp+128h] [rbp+67h] BYREF

  v4 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *a2 <= 0 )
    return 0;
  v9 = (float *)(a2 + 3);
  do
  {
    v10 = v9[6];
    v11 = *(v9 - 1);
    v12 = *v9;
    v13 = v9[4];
    v14 = v9[5];
    v15 = v9[3];
    v16 = v9[2];
    v17 = v9[1];
    v38[0] = *(v9 - 2);
    v38[2] = v12;
    v36[2] = v10;
    v18 = v10 - v12;
    v37[2] = v15;
    v19 = v15 - v12;
    v36[0] = v13;
    v36[1] = v14;
    v20 = v14 - v11;
    v38[1] = v11;
    v37[1] = v16;
    v21 = v16 - v11;
    v37[0] = v17;
    v22 = v17 - v38[0];
    v23 = (float)(v20 * v19) - (float)(v18 * v21);
    v24 = (float)(v13 - v38[0]) * v19;
    v25 = (float)((float)(v13 - v38[0]) * v21) - (float)(v20 * v22);
    v26 = (float)(v18 * v22) - v24;
    v27 = fsqrt((float)((float)(v26 * v26) + (float)(v23 * v23)) + (float)(v25 * v25));
    if ( v27 == 0.0 )
    {
      v34[0] = 0.0;
      v28 = 0.0;
      v35 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
    }
    else
    {
      v28 = v23 * (float)(1.0 / v27);
      v29 = v25 * (float)(1.0 / v27);
      v34[0] = v28;
      v30 = v26 * (float)(1.0 / v27);
      v35 = v29;
    }
    v34[1] = v30;
    if ( sub_140048690(v39, v34, &v40, a3, a4, v38, v37, v36) )
    {
      v31 = v40;
      if ( v40 < *(float *)(a1 + 24) )
      {
        v32 = v39[1];
        *(float *)a1 = v39[0];
        *(float *)(a1 + 8) = v39[2];
        *(float *)(a1 + 4) = v32;
        *(float *)(a1 + 12) = v28;
        *(float *)(a1 + 16) = v30;
        *(float *)(a1 + 20) = v29;
        *(float *)(a1 + 24) = v31;
      }
    }
    ++v4;
    v9 += 12;
  }
  while ( v4 < *a2 );
  return *(float *)(a1 + 24) < 1.0;
}

