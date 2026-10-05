/* Address: 0x1400b29b0 | Name: sub_1400B29B0 | Size: 572 bytes */
__int64 __fastcall sub_1400B29B0(__int64 a1, int a2, int a3, int a4, int a5, float *a6)
{
  float v6; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm0_4

  v6 = *(float *)&dword_140404A6C[282486224];
  *(_DWORD *)a1 = dword_140404A6C[282486224];
  v8 = *(float *)&dword_140404A6C[282486225];
  v9 = v6 - 0.0625;
  *(_DWORD *)(a1 + 4) = dword_140404A6C[282486225];
  v10 = v8;
  v11 = *(float *)&dword_140404A6C[282486226] - 0.09375;
  *(float *)a1 = v9;
  *(float *)(a1 + 8) = v11;
  v12 = 7166LL * a2;
  if ( dword_140404A6C[v12 + 280658335] != 1 && (int)dword_140404A6C[v12 + 280651327] < 2 )
  {
    v10 = v8 - 0.25;
    *(float *)(a1 + 4) = v8 - 0.25;
  }
  if ( dword_140404A6C[v12 + 280651313] != -1 )
  {
    v10 = v10 + 0.25;
    *(float *)(a1 + 4) = v10;
  }
  v13 = 1268LL * a4;
  result = v13 * 4 + 12LL * a3;
  v15 = -*(float *)&dword_140404A6C[v13 + 278522538];
  v16 = (float)(v15 * *a6) + v9;
  *(float *)a1 = v16;
  v17 = (float)(v15 * a6[1]) + v10;
  *(float *)(a1 + 4) = v17;
  v18 = (float)(v15 * a6[2]) + v11;
  *(float *)(a1 + 8) = v18;
  v19 = -*(float *)&dword_140404A6C[v13 + 278522539];
  v20 = (float)(v19 * a6[3]) + v16;
  *(float *)a1 = v20;
  v21 = (float)(v19 * a6[4]) + v17;
  *(float *)(a1 + 4) = v21;
  v22 = (float)(v19 * a6[5]) + v18;
  *(float *)(a1 + 8) = v22;
  v23 = -*(float *)&dword_140404A6C[v13 + 278522540];
  v24 = (float)(v23 * a6[6]) + v20;
  *(float *)a1 = v24;
  v25 = (float)(v23 * a6[7]) + v21;
  *(float *)(a1 + 4) = v25;
  v26 = (float)(v23 * a6[8]) + v22;
  *(float *)(a1 + 8) = v26;
  v27 = *(float *)((char *)&dword_140404A6C[278521317] + result);
  v28 = (float)(v27 * *a6) + v24;
  *(float *)a1 = v28;
  v29 = (float)(v27 * a6[1]) + v25;
  *(float *)(a1 + 4) = v29;
  v30 = (float)(v27 * a6[2]) + v26;
  *(float *)(a1 + 8) = v30;
  v31 = *(float *)((char *)&dword_140404A6C[278521318] + result);
  v32 = (float)(v31 * a6[3]) + v28;
  *(float *)a1 = v32;
  v33 = (float)(v31 * a6[4]) + v29;
  *(float *)(a1 + 4) = v33;
  v34 = (float)(v31 * a6[5]) + v30;
  *(float *)(a1 + 8) = v34;
  v35 = *(float *)((char *)&dword_140404A6C[278521319] + result);
  *(float *)a1 = (float)(v35 * a6[6]) + v32;
  *(float *)(a1 + 4) = (float)(v35 * a6[7]) + v33;
  *(float *)(a1 + 8) = (float)(v35 * a6[8]) + v34;
  return result;
}

