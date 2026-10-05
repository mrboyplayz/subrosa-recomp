/* Address: 0x1400535a0 | Name: sub_1400535A0 | Size: 1554 bytes */
__int64 __fastcall sub_1400535A0(int a1, int a2, int a3, float *a4)
{
  __int64 v5; // r10
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbp
  float v9; // xmm10_4
  float v10; // xmm8_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm15_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float v18; // xmm7_4
  float v19; // xmm7_4
  __m128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  float v24; // xmm3_4
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm12_4
  float v28; // xmm3_4
  float v29; // xmm11_4
  float v30; // xmm14_4
  float v31; // xmm6_4
  float v32; // xmm4_4
  __int64 result; // rax
  float v34; // xmm12_4
  float v35; // xmm3_4
  float v36; // xmm10_4
  float v37; // xmm15_4
  float v38; // xmm0_4
  float v39; // xmm11_4
  float v40; // xmm13_4
  float v41; // xmm10_4
  float v42; // xmm0_4
  float v43; // xmm7_4
  float v44; // xmm13_4
  float v45; // xmm7_4
  float v46; // xmm11_4
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm3_4
  float v50; // [rsp+20h] [rbp-F8h]
  float v51; // [rsp+24h] [rbp-F4h]
  float v52; // [rsp+28h] [rbp-F0h]
  float v53; // [rsp+2Ch] [rbp-ECh]
  float v54; // [rsp+30h] [rbp-E8h]
  float v55; // [rsp+34h] [rbp-E4h]
  float v56; // [rsp+38h] [rbp-E0h]
  float v57; // [rsp+3Ch] [rbp-DCh]
  float v58; // [rsp+40h] [rbp-D8h]
  float v59; // [rsp+44h] [rbp-D4h]

  v5 = 28664LL * a1;
  v6 = a3;
  v7 = v5 + 312LL * a2;
  v8 = v5 + 312LL * a3;
  v57 = *(float *)((char *)&xmmword_190941C1C + v7);
  v58 = *(float *)((char *)&xmmword_190941C1C + v7 + 4);
  v9 = *(float *)((char *)&xmmword_190941C1C + v8 + 4);
  v10 = *(float *)((char *)&xmmword_190941C1C + v8 + 8);
  v11 = *(float *)((char *)&xmmword_190941C1C + v8 + 12);
  v12 = *(float *)((char *)&xmmword_190941C2C + v8 + 4);
  v13 = *(float *)((char *)&xmmword_190941C2C + v8 + 12);
  v14 = *(float *)((char *)&xmmword_190941C2C + v8 + 8);
  v15 = *(float *)((char *)dword_190941C3C + v8);
  v50 = *(float *)((char *)&xmmword_190941C2C + v7 + 8);
  v54 = *(float *)((char *)&xmmword_190941C2C + v7);
  v51 = *(float *)((char *)&xmmword_190941C2C + v7 + 12);
  v52 = *(float *)((char *)dword_190941C3C + v7);
  v16 = *(float *)((char *)&xmmword_190941C1C + v8);
  v59 = *(float *)((char *)&xmmword_190941C1C + v7 + 8);
  v53 = *(float *)((char *)&xmmword_190941C1C + v7 + 12);
  v17 = (float)((float)(v9 * v58) + (float)(v16 * v57)) + (float)(v10 * v59);
  v55 = *(float *)((char *)&xmmword_190941C2C + v7 + 4);
  v18 = (float)((float)(v9 * v54) + (float)(v16 * v53)) + (float)(v10 * v55);
  v56 = atan2f(
          (float)((float)(*(float *)((char *)&xmmword_190941C2C + v8) * v51) + (float)(v11 * v50)) + (float)(v12 * v52),
          (float)((float)(v13 * v51) + (float)(v14 * v50)) + (float)(v15 * v52));
  v19 = atan2f(
          -(float)((float)((float)(v9 * v51) + (float)(v16 * v50)) + (float)(v10 * v52)),
          fsqrt((float)(v18 * v18) + (float)(v17 * v17)));
  v20 = (__m128)LODWORD(v56);
  *(double *)v20.m128_u64 = _libm_sse2_sincosf_(v22, v21, v23);
  v24 = _mm_shuffle_ps(v20, v20, 1).m128_f32[0];
  v25 = atan2f(
          (float)((float)((float)((float)(v13 * v58) + (float)(v14 * v57)) + (float)(v15 * v59)) * v20.m128_f32[0])
        - (float)((float)((float)((float)(*(float *)((char *)&xmmword_190941C2C + v8) * v58) + (float)(v11 * v57))
                        + (float)(v12 * v59))
                * v24),
          (float)((float)((float)((float)(*(float *)((char *)&xmmword_190941C2C + v8) * v54) + (float)(v11 * v53))
                        + (float)(v12 * v55))
                * v24)
        - (float)((float)((float)((float)(v13 * v54) + (float)(v14 * v53)) + (float)(v15 * v55)) * v20.m128_f32[0]));
  v26 = *(float *)((char *)&dword_190941C44 + v7) - *(float *)((char *)&dword_190941C44 + v8);
  v27 = *(float *)((char *)&dword_190941C40 + v7) - *(float *)((char *)&dword_190941C40 + v8);
  v28 = *(float *)((char *)&dword_190941C48 + v7) - *(float *)((char *)&dword_190941C48 + v8);
  v29 = (float)((float)(v26 * v58) + (float)(v27 * v57)) + (float)(v28 * v59);
  v30 = (float)((float)(v26 * v54) + (float)(v27 * v53)) + (float)(v28 * v55);
  v31 = 0.0;
  v32 = 0.0;
  result = 25 * v6;
  v34 = (float)((float)(v27 * v50) + (float)(v26 * v51)) + (float)(v28 * v52);
  v35 = 0.0;
  v36 = *(float *)&dword_1910415E0[25 * v6];
  v37 = *(float *)&dword_1910415EC[25 * v6];
  if ( v56 < v36 && (float)((float)((float)(v56 - v36) * -0.25) - (float)(v29 * 0.5)) > 0.0 )
    v31 = (float)((float)(v56 - v36) * -0.25) - (float)(v29 * 0.5);
  if ( v56 > v37 )
  {
    v38 = (float)((float)(v56 - v37) * -0.25) - (float)(v29 * 0.5);
    if ( v38 < 0.0 )
      v31 = v31 + v38;
  }
  v39 = *(float *)&dword_1910415F0[25 * v6];
  v40 = *(float *)&dword_1910415E4[25 * v6];
  v41 = fminf(fmaxf(v36, v56), v37);
  if ( v19 < v40 && (float)((float)((float)(v19 - v40) * -0.25) - (float)(v30 * 0.5)) > 0.0 )
    v32 = (float)((float)(v19 - v40) * -0.25) - (float)(v30 * 0.5);
  if ( v19 > v39 )
  {
    v42 = (float)((float)(v19 - v39) * -0.25) - (float)(v30 * 0.5);
    if ( v42 < 0.0 )
      v32 = v32 + v42;
  }
  v43 = fmaxf(v19, v40);
  v44 = *(float *)&dword_1910415E8[25 * v6];
  v45 = fminf(v43, v39);
  v46 = *(float *)&dword_1910415F4[25 * v6];
  if ( v25 < v44 && (float)((float)((float)(v25 - v44) * -0.25) - (float)(v34 * 0.5)) > 0.0 )
    v35 = (float)((float)(v25 - v44) * -0.25) - (float)(v34 * 0.5);
  if ( v25 > v46 )
  {
    v47 = (float)((float)(v25 - v46) * -0.25) - (float)(v34 * 0.5);
    if ( v47 < 0.0 )
      v35 = v35 + v47;
  }
  v48 = v35 * v51;
  *(float *)((char *)&dword_190941CE4 + v8) = v41;
  *(float *)((char *)&dword_190941CE8 + v8) = v45;
  *(float *)((char *)&dword_190941CEC + v8) = fminf(fmaxf(v25, v44), v46);
  *a4 = (float)((float)(v32 * v53) + (float)(v57 * v31)) + (float)((float)(v35 * v50) + *a4);
  v49 = (float)((float)(v35 * v52) + (float)(v31 * v59)) + (float)((float)(v32 * v55) + a4[2]);
  a4[1] = (float)(v48 + (float)(v31 * v58)) + (float)((float)(v32 * v54) + a4[1]);
  a4[2] = v49;
  return result;
}

