/* Address: 0x1400a9940 | Name: sub_1400A9940 | Size: 1436 bytes */
__int64 __fastcall sub_1400A9940(int a1, int a2, int a3, float *a4)
{
  __int64 v4; // r10
  __int64 v7; // rbp
  __int64 v8; // rbx
  float v9; // xmm13_4
  float v10; // xmm6_4
  __int64 v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm15_4
  float v14; // xmm7_4
  float v15; // xmm3_4
  float v16; // xmm14_4
  float v17; // xmm11_4
  float v18; // xmm10_4
  float v19; // xmm12_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm9_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm6_4
  float v26; // xmm2_4
  float v27; // xmm13_4
  float v28; // xmm0_4
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm8_4
  float v32; // xmm11_4
  float v33; // xmm0_4
  float v34; // xmm9_4
  float v35; // xmm4_4
  float v36; // xmm5_4
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  __int64 v40; // rax
  float v41; // xmm0_4
  float v42; // xmm10_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm6_4
  float v46; // xmm3_4
  float v47; // xmm0_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  __int64 v51; // [rsp+0h] [rbp-128h] BYREF
  float v52[10]; // [rsp+20h] [rbp-108h] BYREF
  __m128 v53; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+60h] [rbp-C8h]

  v4 = 28664LL * a1;
  v7 = a3;
  v8 = v4 + 312LL * a2;
  v9 = *(float *)((char *)&dword_140404A6C[280651452] + v8);
  v10 = *(float *)((char *)&dword_140404A6C[280651454] + v8);
  v11 = v4 + 312LL * a3;
  v12 = *(float *)((char *)&dword_140404A6C[280651453] + v8);
  v13 = *(float *)((char *)&dword_140404A6C[280651456] + v8);
  v14 = *(float *)((char *)&dword_140404A6C[280651453] + v11);
  v15 = *(float *)((char *)&dword_140404A6C[280651454] + v11);
  v16 = *(float *)((char *)&dword_140404A6C[280651452] + v11);
  v17 = *(float *)((char *)&dword_140404A6C[280651456] + v11);
  v18 = *(float *)((char *)&dword_140404A6C[280651455] + v11);
  v19 = *(float *)((char *)&dword_140404A6C[280651457] + v11);
  v20 = *(float *)((char *)&dword_140404A6C[280651459] + v11);
  v21 = *(float *)((char *)&dword_140404A6C[280651458] + v11);
  v22 = *(float *)((char *)&dword_140404A6C[280651460] + v11);
  v52[0] = (float)((float)(v16 * v9) + (float)(v12 * v14)) + (float)(v10 * v15);
  v23 = (float)((float)(v18 * v9) + (float)(v17 * v12)) + (float)(v19 * v10);
  v24 = v22 * v10;
  v25 = *(float *)((char *)&dword_140404A6C[280651457] + v8);
  v52[1] = v23;
  v26 = v21 * v9;
  v27 = *(float *)((char *)&dword_140404A6C[280651455] + v8);
  v28 = v13 * v14;
  v29 = *(float *)((char *)&dword_140404A6C[280651459] + v8);
  v52[2] = (float)(v26 + (float)(v20 * v12)) + v24;
  v52[3] = (float)((float)(v27 * v16) + v28) + (float)(v25 * v15);
  v52[4] = (float)((float)(v27 * v18) + (float)(v13 * v17)) + (float)(v25 * v19);
  v52[5] = (float)((float)(v27 * v21) + (float)(v13 * v20)) + (float)(v25 * v22);
  v30 = *(float *)((char *)&dword_140404A6C[280651458] + v8);
  v31 = *(float *)((char *)&dword_140404A6C[280651460] + v8);
  v52[6] = (float)((float)(v30 * v16) + (float)(v29 * *(float *)((char *)&dword_140404A6C[280651453] + v11)))
         + (float)(v31 * *(float *)((char *)&dword_140404A6C[280651454] + v11));
  v52[7] = (float)((float)(v30 * v18) + (float)(v29 * v17)) + (float)(v31 * v19);
  v52[8] = (float)((float)(v30 * v21) + (float)(v29 * v20)) + (float)(v31 * v22);
  sub_14010E370(&v53, v52);
  v32 = *(float *)((char *)&dword_140404A6C[280651452] + v8);
  v33 = a4[1];
  v34 = (float)((float)(*a4 * v32) + (float)(v33 * *(float *)((char *)&dword_140404A6C[280651453] + v8)))
      + (float)(a4[2] * *(float *)((char *)&dword_140404A6C[280651454] + v8));
  v35 = (float)((float)(*a4 * v27) + (float)(v33 * v13))
      + (float)(a4[2] * *(float *)((char *)&dword_140404A6C[280651457] + v8));
  v36 = (float)((float)(*a4 * v30) + (float)(v33 * v29)) + (float)(a4[2] * v31);
  if ( v53.m128_f32[3] < 0.0 )
    v53 = _mm_xor_ps(v53, (__m128)xmmword_140279870);
  v37 = v53.m128_f32[0] * 2.0;
  v38 = v53.m128_f32[1] * 2.0;
  v39 = v53.m128_f32[2] * 2.0;
  if ( (a3 == 11 || a3 == 14) && v37 > 1.570796326795 )
    v37 = -3.14159265359 - (3.14159265359 - v37);
  v40 = 25 * v7;
  v41 = *(float *)&dword_140404A6C[25 * v7 + 282486061];
  v42 = *(float *)&dword_140404A6C[25 * v7 + 282486064];
  if ( v37 < v41 && (float)((float)((float)(v37 - v41) * -0.25) - v34) > 0.0 )
    v34 = (float)(v37 - v41) * -0.25;
  if ( v37 > v42 )
  {
    v43 = (float)(v37 - v42) * -0.25;
    if ( (float)(v43 - v34) < 0.0 )
      v34 = v43;
  }
  v44 = *(float *)&dword_140404A6C[v40 + 282486062];
  v45 = *(float *)&dword_140404A6C[v40 + 282486065];
  if ( v38 < v44 && (float)((float)((float)(v38 - v44) * -0.25) - v35) > 0.0 )
    v35 = (float)(v38 - v44) * -0.25;
  if ( v38 > v45 )
  {
    v46 = (float)(v38 - v45) * -0.25;
    if ( (float)(v46 - v35) < 0.0 )
      v35 = v46;
  }
  v47 = *(float *)&dword_140404A6C[v40 + 282486063];
  v48 = *(float *)&dword_140404A6C[v40 + 282486066];
  if ( v39 < v47 && (float)((float)((float)(v39 - v47) * -0.25) - v36) > 0.0 )
    v36 = (float)(v39 - v47) * -0.25;
  if ( v39 > v48 )
  {
    v49 = (float)(v39 - v48) * -0.25;
    if ( (float)(v49 - v36) < 0.0 )
      v36 = v49;
  }
  *a4 = (float)((float)(v35 * v27) + (float)(v34 * v32))
      + (float)(v36 * *(float *)((char *)&dword_140404A6C[280651458] + v8));
  a4[1] = (float)((float)(v35 * *(float *)((char *)&dword_140404A6C[280651456] + v8))
                + (float)(v34 * *(float *)((char *)&dword_140404A6C[280651453] + v8)))
        + (float)(v36 * *(float *)((char *)&dword_140404A6C[280651459] + v8));
  a4[2] = (float)((float)(v35 * *(float *)((char *)&dword_140404A6C[280651457] + v8))
                + (float)(v34 * *(float *)((char *)&dword_140404A6C[280651454] + v8)))
        + (float)(v36 * *(float *)((char *)&dword_140404A6C[280651460] + v8));
  return MEMORY[0x1401F8B20]((unsigned __int64)&v51 ^ v54);
}

