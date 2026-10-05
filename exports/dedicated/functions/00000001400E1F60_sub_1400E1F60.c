/* Address: 0x1400e1f60 | Name: sub_1400E1F60 | Size: 859 bytes */
_BOOL8 __fastcall sub_1400E1F60(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float v8; // xmm2_4
  float v10; // xmm3_4
  float v12; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm3_4
  float *v21; // rbp
  float *v22; // rsi
  float *v23; // rbx
  float v24; // xmm5_4
  float v25; // xmm8_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm6_4
  float v29; // xmm10_4
  float v30; // xmm0_4
  float v31; // xmm9_4
  float v32; // xmm8_4
  float v33; // xmm0_4
  _BOOL8 result; // rax
  __int64 v35; // [rsp+40h] [rbp-98h] BYREF
  float v36; // [rsp+48h] [rbp-90h]
  float v37; // [rsp+E8h] [rbp+10h] BYREF

  v8 = a4[1] - a2[1];
  v10 = a3[2] - a2[2];
  v12 = a3[1] - a2[1];
  v14 = *a3 - *a2;
  v15 = a4[2] - a2[2];
  v16 = *a4 - *a2;
  v17 = (float)(v8 * v10) - (float)(v15 * v12);
  v18 = (float)(v15 * v14) - (float)(v16 * v10);
  v19 = (float)(v16 * v12) - (float)(v8 * v14);
  v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
  if ( v20 == 0.0 )
  {
    v35 = 0;
    v36 = 0.0;
  }
  else
  {
    *(float *)&v35 = v17 * (float)(1.0 / v20);
    *((float *)&v35 + 1) = v18 * (float)(1.0 / v20);
    v36 = v19 * (float)(1.0 / v20);
  }
  v21 = a6;
  v22 = a7;
  if ( sub_140048920(a1, (float *)&v35, &v37, a6, a7, a2, a3, a4) )
    return 1;
  v23 = a5;
  v24 = a4[1] - a2[1];
  v25 = a5[2] - a2[2];
  v26 = a5[1] - a2[1];
  v27 = a4[2] - a2[2];
  v28 = *a4 - *a2;
  v29 = (float)(v26 * v27) - (float)(v25 * v24);
  v30 = *a5 - *a2;
  v31 = (float)(v30 * v24) - (float)(v26 * v28);
  v32 = (float)(v25 * v28) - (float)(v30 * v27);
  v33 = fsqrt((float)((float)(v32 * v32) + (float)(v29 * v29)) + (float)(v31 * v31));
  if ( v33 == 0.0 )
  {
    v35 = 0;
    v36 = 0.0;
  }
  else
  {
    *(float *)&v35 = v29 * (float)(1.0 / v33);
    *((float *)&v35 + 1) = v32 * (float)(1.0 / v33);
    v36 = v31 * (float)(1.0 / v33);
  }
  if ( sub_140048920(a1, (float *)&v35, &v37, v21, v22, a2, a4, a5) )
    return 1;
  sub_140047CD0((float *)&v35, a2, a3, v23);
  if ( sub_140048920(a1, (float *)&v35, &v37, v21, v22, a2, a3, v23) )
    return 1;
  sub_140047CD0((float *)&v35, a3, a4, v23);
  result = sub_140048920(a1, (float *)&v35, &v37, v21, v22, a3, a4, v23);
  if ( result )
    return 1;
  return result;
}

