/* Address: 0x1400a4dd0 | Name: sub_1400A4DD0 | Size: 1325 bytes */
__int64 __fastcall sub_1400A4DD0(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  float v13; // xmm14_4
  float v14; // xmm15_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int64 v17; // rbx
  float v18; // xmm14_4
  float v19; // xmm15_4
  __int64 v20; // r10
  float v21; // xmm2_4
  float *v22; // rdx
  __int64 v23; // r11
  __int64 v24; // r8
  __int64 v25; // rcx
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm12_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm8_4
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm5_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm0_4
  float v45; // xmm6_4
  float v46; // xmm6_4
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm4_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm6_4
  float v56; // [rsp+0h] [rbp-138h] BYREF
  __int64 v57; // [rsp+8h] [rbp-130h] BYREF
  float v58; // [rsp+10h] [rbp-128h]
  _OWORD v59[4]; // [rsp+20h] [rbp-118h]
  __int64 v60; // [rsp+60h] [rbp-D8h]

  v59[0] = _mm_load_si128((const __m128i *)&xmmword_140278F80);
  v59[1] = _mm_load_si128((const __m128i *)&xmmword_140279020);
  v3 = a2;
  v4 = 5210LL * a2;
  v5 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716771];
  v6 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716772];
  v7 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716774];
  v8 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716773];
  v9 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716779];
  v10 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716780];
  v11 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716782];
  v12 = 60LL * (int)dword_140404A6C[v4 + 129716781];
  v13 = (float)((float)(*(float *)&dword_140404A6C[v5 + 73007026] + *(float *)&dword_140404A6C[v6 + 73007026])
              + (float)(*(float *)&dword_140404A6C[v7 + 73007026] + *(float *)&dword_140404A6C[v8 + 73007026]))
      + (float)((float)(*(float *)&dword_140404A6C[v11 + 73007026] + *(float *)&dword_140404A6C[v12 + 73007026])
              + (float)(*(float *)&dword_140404A6C[v9 + 73007026] + *(float *)&dword_140404A6C[v10 + 73007026]));
  v14 = (float)((float)(*(float *)&dword_140404A6C[v12 + 73007027] + *(float *)&dword_140404A6C[v11 + 73007027])
              + (float)(*(float *)&dword_140404A6C[v9 + 73007027] + *(float *)&dword_140404A6C[v10 + 73007027]))
      + (float)((float)(*(float *)&dword_140404A6C[v5 + 73007027] + *(float *)&dword_140404A6C[v6 + 73007027])
              + (float)(*(float *)&dword_140404A6C[v8 + 73007027] + *(float *)&dword_140404A6C[v7 + 73007027]));
  v15 = (float)(*(float *)&dword_140404A6C[v12 + 73007028] + *(float *)&dword_140404A6C[v11 + 73007028])
      + (float)(*(float *)&dword_140404A6C[v10 + 73007028] + *(float *)&dword_140404A6C[v9 + 73007028]);
  v16 = (float)(*(float *)&dword_140404A6C[v8 + 73007028] + *(float *)&dword_140404A6C[v7 + 73007028])
      + (float)(*(float *)&dword_140404A6C[v6 + 73007028] + *(float *)&dword_140404A6C[v5 + 73007028]);
  v17 = 5210 * v3;
  v18 = v13 * 0.125;
  v19 = v14 * 0.125;
  *(_QWORD *)a1 = 0;
  v20 = 0;
  v21 = (float)(v15 + v16) * 0.125;
  *(_DWORD *)(a1 + 8) = 0;
  v57 = 0;
  v58 = 0.0;
  v56 = v21;
  do
  {
    v22 = (float *)&v57;
    v23 = 5210 * v3 + *((int *)v59 + v20);
    v24 = 0;
    do
    {
      v25 = 60LL * (int)dword_140404A6C[v23 + 129716769];
      v26 = *(float *)&dword_140404A6C[v24 + 129716727 + v17];
      v27 = *(float *)&dword_140404A6C[v24 + 129716726 + v17];
      v28 = *(float *)&dword_140404A6C[v24 + 129716728 + v17];
      v29 = *(float *)&dword_140404A6C[v25 + 73007028] - v21;
      v30 = *(float *)&dword_140404A6C[v25 + 73007026] - v18;
      v31 = *(float *)&dword_140404A6C[v25 + 73007027] - v19;
      v32 = -(float)((float)((float)(v30 * v27) + (float)(v31 * v26)) + (float)(v29 * v28));
      v33 = (float)(v27 * v32) + v30;
      v34 = (float)(v28 * v32) + v29;
      v35 = (float)(v26 * v32) + v31;
      v36 = fsqrt((float)((float)(v35 * v35) + (float)(v33 * v33)) + (float)(v34 * v34));
      if ( v36 == 0.0 )
      {
        v37 = 0.0;
        v38 = 0.0;
        v39 = 0.0;
      }
      else
      {
        v37 = v33 * (float)(1.0 / v36);
        v38 = v35 * (float)(1.0 / v36);
        v39 = v34 * (float)(1.0 / v36);
      }
      v40 = *(float *)&dword_140404A6C[v25 + 73007032];
      v41 = *(float *)&dword_140404A6C[v25 + 73007034];
      v42 = *(float *)&dword_140404A6C[v25 + 73007033];
      v24 += 3;
      v43 = (float)(v37 * v41) - (float)(v39 * v40);
      v44 = v38;
      *v22 = v36 + *v22;
      v45 = v38 * v40;
      v21 = v56;
      *(float *)((char *)v22 + a1 - (_QWORD)&v57) = (float)((float)(v43 * v26)
                                                          + (float)((float)((float)(v39 * v42) - (float)(v44 * v41))
                                                                  * v27))
                                                  + (float)((float)((float)(v45 - (float)(v37 * v42)) * v28)
                                                          + *(float *)((char *)v22 + a1 - (_QWORD)&v57));
      ++v22;
    }
    while ( v24 < 9 );
    ++v20;
  }
  while ( v20 < 8 );
  v46 = *(float *)(a1 + 4) / *((float *)&v57 + 1);
  v47 = *(float *)(a1 + 8) / v58;
  v48 = *(float *)a1 / *(float *)&v57;
  *(float *)(a1 + 4) = v46;
  *(float *)(a1 + 8) = v47;
  *(float *)a1 = v48;
  v49 = v48 * *(float *)&dword_140404A6C[5210 * v3 + 129716726];
  *(float *)a1 = v49;
  v50 = v48 * *(float *)&dword_140404A6C[5210 * v3 + 129716727];
  *(float *)(a1 + 4) = v50;
  v51 = v48 * *(float *)&dword_140404A6C[5210 * v3 + 129716728];
  *(float *)(a1 + 8) = v51;
  v52 = (float)(v46 * *(float *)&dword_140404A6C[5210 * v3 + 129716729]) + v49;
  *(float *)a1 = v52;
  v53 = (float)(v46 * *(float *)&dword_140404A6C[5210 * v3 + 129716730]) + v50;
  *(float *)(a1 + 4) = v53;
  v54 = (float)(v46 * *(float *)&dword_140404A6C[5210 * v3 + 129716731]) + v51;
  *(float *)(a1 + 8) = v54;
  *(float *)a1 = (float)(v47 * *(float *)&dword_140404A6C[5210 * v3 + 129716732]) + v52;
  *(float *)(a1 + 4) = (float)(v47 * *(float *)&dword_140404A6C[5210 * v3 + 129716733]) + v53;
  *(float *)(a1 + 8) = (float)(v47 * *(float *)&dword_140404A6C[5210 * v3 + 129716734]) + v54;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v56 ^ v60);
}

