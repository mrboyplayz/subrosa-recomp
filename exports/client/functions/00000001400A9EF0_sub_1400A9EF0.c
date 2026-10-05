/* Address: 0x1400a9ef0 | Name: sub_1400A9EF0 | Size: 1554 bytes */
__int64 __fastcall sub_1400A9EF0(__int64 a1, __int64 a2, int a3, float *a4)
{
  __int64 v5; // r10
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbp
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  double v12; // xmm0_8
  float v13; // xmm7_4
  __int64 v14; // rdx
  __int64 v15; // rcx
  double v16; // xmm0_8
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm12_4
  float v20; // xmm3_4
  float v21; // xmm11_4
  float v22; // xmm14_4
  float v23; // xmm6_4
  float v24; // xmm4_4
  __int64 result; // rax
  float v26; // xmm12_4
  float v27; // xmm3_4
  float v28; // xmm10_4
  float v29; // xmm15_4
  float v30; // xmm0_4
  float v31; // xmm11_4
  float v32; // xmm13_4
  float v33; // xmm10_4
  float v34; // xmm0_4
  float v35; // xmm7_4
  float v36; // xmm13_4
  float v37; // xmm7_4
  float v38; // xmm11_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // [rsp+20h] [rbp-F8h]
  float v43; // [rsp+24h] [rbp-F4h]
  float v44; // [rsp+28h] [rbp-F0h]
  float v45; // [rsp+2Ch] [rbp-ECh]
  float v46; // [rsp+30h] [rbp-E8h]
  float v47; // [rsp+34h] [rbp-E4h]
  float v48; // [rsp+38h] [rbp-E0h]
  float v49; // [rsp+3Ch] [rbp-DCh]
  float v50; // [rsp+40h] [rbp-D8h]
  float v51; // [rsp+44h] [rbp-D4h]

  v5 = 28664LL * (int)a1;
  v6 = a3;
  v7 = v5 + 312LL * (int)a2;
  v8 = v5 + 312LL * a3;
  v49 = *(float *)((char *)&dword_140404A6C[280651452] + v7);
  v50 = *(float *)((char *)&dword_140404A6C[280651453] + v7);
  v42 = *(float *)((char *)&dword_140404A6C[280651458] + v7);
  v46 = *(float *)((char *)&dword_140404A6C[280651456] + v7);
  v43 = *(float *)((char *)&dword_140404A6C[280651459] + v7);
  v44 = *(float *)((char *)&dword_140404A6C[280651460] + v7);
  v51 = *(float *)((char *)&dword_140404A6C[280651454] + v7);
  v45 = *(float *)((char *)&dword_140404A6C[280651455] + v7);
  v47 = *(float *)((char *)&dword_140404A6C[280651457] + v7);
  v9 = sub_14023F704(a1, a2);
  v48 = *(float *)&v9;
  v12 = sub_14023F704(v11, v10);
  v13 = *(float *)&v12;
  MEMORY[0x1401F8AC0]();
  v16 = sub_14023F704(v15, v14);
  v17 = *(float *)&v16;
  v18 = *(float *)((char *)&dword_140404A6C[280651462] + v7) - *(float *)((char *)&dword_140404A6C[280651462] + v8);
  v19 = *(float *)((char *)&dword_140404A6C[280651461] + v7) - *(float *)((char *)&dword_140404A6C[280651461] + v8);
  v20 = *(float *)((char *)&dword_140404A6C[280651463] + v7) - *(float *)((char *)&dword_140404A6C[280651463] + v8);
  v21 = (float)((float)(v18 * v50) + (float)(v19 * v49)) + (float)(v20 * v51);
  v22 = (float)((float)(v18 * v46) + (float)(v19 * v45)) + (float)(v20 * v47);
  v23 = 0.0;
  v24 = 0.0;
  result = 25 * v6;
  v26 = (float)((float)(v19 * v42) + (float)(v18 * v43)) + (float)(v20 * v44);
  v27 = 0.0;
  v28 = *(float *)&dword_140404A6C[25 * v6 + 282486061];
  v29 = *(float *)&dword_140404A6C[25 * v6 + 282486064];
  if ( v48 < v28 && (float)((float)((float)(v48 - v28) * -0.25) - (float)(v21 * 0.5)) > 0.0 )
    v23 = (float)((float)(v48 - v28) * -0.25) - (float)(v21 * 0.5);
  if ( v48 > v29 )
  {
    v30 = (float)((float)(v48 - v29) * -0.25) - (float)(v21 * 0.5);
    if ( v30 < 0.0 )
      v23 = v23 + v30;
  }
  v31 = *(float *)&dword_140404A6C[25 * v6 + 282486065];
  v32 = *(float *)&dword_140404A6C[25 * v6 + 282486062];
  v33 = fminf(fmaxf(v28, v48), v29);
  if ( v13 < v32 && (float)((float)((float)(v13 - v32) * -0.25) - (float)(v22 * 0.5)) > 0.0 )
    v24 = (float)((float)(v13 - v32) * -0.25) - (float)(v22 * 0.5);
  if ( v13 > v31 )
  {
    v34 = (float)((float)(v13 - v31) * -0.25) - (float)(v22 * 0.5);
    if ( v34 < 0.0 )
      v24 = v24 + v34;
  }
  v35 = fmaxf(v13, v32);
  v36 = *(float *)&dword_140404A6C[25 * v6 + 282486063];
  v37 = fminf(v35, v31);
  v38 = *(float *)&dword_140404A6C[25 * v6 + 282486066];
  if ( v17 < v36 && (float)((float)((float)(v17 - v36) * -0.25) - (float)(v26 * 0.5)) > 0.0 )
    v27 = (float)((float)(v17 - v36) * -0.25) - (float)(v26 * 0.5);
  if ( v17 > v38 )
  {
    v39 = (float)((float)(v17 - v38) * -0.25) - (float)(v26 * 0.5);
    if ( v39 < 0.0 )
      v27 = v27 + v39;
  }
  v40 = v27 * v43;
  *(float *)((char *)&dword_140404A6C[280651502] + v8) = v33;
  *(float *)((char *)&dword_140404A6C[280651503] + v8) = v37;
  *(float *)((char *)&dword_140404A6C[280651504] + v8) = fminf(fmaxf(v17, v36), v38);
  *a4 = (float)((float)(v24 * v45) + (float)(v49 * v23)) + (float)((float)(v27 * v42) + *a4);
  v41 = (float)((float)(v27 * v44) + (float)(v23 * v51)) + (float)((float)(v24 * v47) + a4[2]);
  a4[1] = (float)(v40 + (float)(v23 * v50)) + (float)((float)(v24 * v46) + a4[1]);
  a4[2] = v41;
  return result;
}

