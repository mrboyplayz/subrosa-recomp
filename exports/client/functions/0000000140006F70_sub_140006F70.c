/* Address: 0x140006f70 | Name: sub_140006F70 | Size: 1154 bytes */
__int64 __fastcall sub_140006F70(int a1, float *a2, float *a3, float a4)
{
  __int64 v4; // rbx
  int v5; // r11d
  __int64 result; // rax
  int v8; // r10d
  int *v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  __int64 v20; // rcx
  __int64 v21; // rax
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  __int64 v29; // rcx
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm7_4
  unsigned int v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  __int64 v37; // rcx
  float v38; // xmm5_4
  float v39; // xmm2_4
  float v40; // xmm7_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  __int64 v43; // r11
  unsigned int *v44; // r9
  float v45; // xmm2_4
  float v46; // xmm3_4
  float v47; // xmm4_4
  __int64 v48; // rcx
  float v49; // xmm7_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v52; // xmm5_4

  v4 = a1;
  v5 = 0;
  result = 20840LL * a1;
  v8 = *(unsigned int *)((char *)&dword_140404A6C[129716768] + result);
  if ( v8 < 4 )
  {
    if ( v8 <= 0 )
      return result;
    v12 = 0;
    goto LABEL_8;
  }
  v9 = (int *)((char *)&dword_140404A6C[129716770] + result);
  v10 = ((unsigned int)(v8 - 4) >> 2) + 1;
  v11 = v10;
  v5 = 4 * v10;
  v12 = 4LL * v10;
  do
  {
    v13 = 60LL * *(v9 - 1);
    v14 = *v9;
    v15 = *(float *)&dword_140404A6C[v13 + 73007027] - a2[1];
    v16 = *(float *)&dword_140404A6C[v13 + 73007028] - a2[2];
    v17 = *(float *)&dword_140404A6C[v13 + 73007026] - *a2;
    v18 = (float)((float)(a3[1] * v17) - (float)(*a3 * v15)) * a4;
    v19 = (float)((float)(*a3 * v16) - (float)(a3[2] * v17)) * a4;
    *(float *)&dword_140404A6C[v13 + 73007032] = (float)((float)((float)(a3[2] * v15) - (float)(a3[1] * v16)) * a4)
                                               + *(float *)&dword_140404A6C[v13 + 73007032];
    *(float *)&dword_140404A6C[v13 + 73007033] = v19 + *(float *)&dword_140404A6C[v13 + 73007033];
    *(float *)&dword_140404A6C[v13 + 73007034] = v18 + *(float *)&dword_140404A6C[v13 + 73007034];
    v20 = 60 * v14;
    v21 = v9[1];
    v22 = *(float *)&dword_140404A6C[v20 + 73007027] - a2[1];
    v23 = *(float *)&dword_140404A6C[v20 + 73007028] - a2[2];
    v24 = *(float *)&dword_140404A6C[v20 + 73007026] - *a2;
    v25 = (float)((float)(a3[1] * v24) - (float)(*a3 * v22)) * a4;
    v26 = (float)((float)(*a3 * v23) - (float)(a3[2] * v24)) * a4;
    *(float *)&dword_140404A6C[v20 + 73007032] = (float)((float)((float)(a3[2] * v22) - (float)(a3[1] * v23)) * a4)
                                               + *(float *)&dword_140404A6C[v20 + 73007032];
    *(float *)&dword_140404A6C[v20 + 73007033] = v26 + *(float *)&dword_140404A6C[v20 + 73007033];
    *(float *)&dword_140404A6C[v20 + 73007034] = v25 + *(float *)&dword_140404A6C[v20 + 73007034];
    v27 = a3[2];
    v28 = *a3;
    v29 = 60 * v21;
    v30 = *(float *)&dword_140404A6C[60 * v21 + 73007027] - a2[1];
    v31 = *(float *)&dword_140404A6C[60 * v21 + 73007028] - a2[2];
    v32 = *(float *)&dword_140404A6C[60 * v21 + 73007026] - *a2;
    *(float *)&v33 = (float)((float)((float)(v27 * v30) - (float)(a3[1] * v31)) * a4)
                   + *(float *)&dword_140404A6C[60 * v21 + 73007032];
    result = v9[2];
    v34 = *a3 * v31;
    v9 += 4;
    v35 = a3[1] * v32;
    dword_140404A6C[v29 + 73007032] = v33;
    *(float *)&dword_140404A6C[v29 + 73007033] = (float)((float)(v34 - (float)(v27 * v32)) * a4)
                                               + *(float *)&dword_140404A6C[v29 + 73007033];
    *(float *)&dword_140404A6C[v29 + 73007034] = (float)((float)(v35 - (float)(v28 * v30)) * a4)
                                               + *(float *)&dword_140404A6C[v29 + 73007034];
    v36 = a3[1];
    v37 = 60 * result;
    v38 = *(float *)&dword_140404A6C[60 * result + 73007027] - a2[1];
    v39 = *(float *)&dword_140404A6C[60 * result + 73007028] - a2[2];
    v40 = *(float *)&dword_140404A6C[60 * result + 73007026] - *a2;
    v41 = a3[2] * v40;
    v42 = *a3;
    *(float *)&dword_140404A6C[v37 + 73007032] = (float)((float)((float)(a3[2] * v38) - (float)(v36 * v39)) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007032];
    *(float *)&dword_140404A6C[v37 + 73007033] = (float)((float)((float)(v42 * v39) - v41) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007033];
    *(float *)&dword_140404A6C[v37 + 73007034] = (float)((float)((float)(v36 * v40) - (float)(v42 * v38)) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007034];
    --v11;
  }
  while ( v11 );
  if ( v5 < v8 )
  {
LABEL_8:
    v43 = (unsigned int)(v8 - v5);
    v44 = &dword_140404A6C[5210 * v4 + 129716769 + v12];
    do
    {
      v45 = a3[2];
      v46 = a3[1];
      v47 = *a3;
      result = (int)*v44++;
      v48 = 60 * result;
      v49 = *(float *)&dword_140404A6C[60 * result + 73007026] - *a2;
      v50 = *(float *)&dword_140404A6C[60 * result + 73007027] - a2[1];
      v51 = *(float *)&dword_140404A6C[60 * result + 73007028] - a2[2];
      v52 = v51 * *a3;
      *(float *)&dword_140404A6C[v48 + 73007032] = (float)((float)((float)(v50 * v45) - (float)(v51 * v46)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007032];
      *(float *)&dword_140404A6C[v48 + 73007033] = (float)((float)(v52 - (float)(v49 * v45)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007033];
      *(float *)&dword_140404A6C[v48 + 73007034] = (float)((float)((float)(v49 * v46) - (float)(v50 * v47)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007034];
      --v43;
    }
    while ( v43 );
  }
  return result;
}

