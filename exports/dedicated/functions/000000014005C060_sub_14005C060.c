/* Address: 0x14005c060 | Name: sub_14005C060 | Size: 572 bytes */
__int64 __fastcall sub_14005C060(__int64 a1, int a2, int a3, int a4, int a5, float *a6)
{
  float v6; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  unsigned __int64 v12; // rcx
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

  v6 = *(float *)&dword_19104186C;
  *(_DWORD *)a1 = dword_19104186C;
  v8 = *(float *)&qword_191041870;
  v9 = v6 - 0.0625;
  *(_DWORD *)(a1 + 4) = qword_191041870;
  v10 = v8;
  v11 = *((float *)&qword_191041870 + 1) - 0.09375;
  *(float *)a1 = v9;
  *(float *)(a1 + 8) = v11;
  v12 = 28664LL * a2;
  if ( *(_DWORD *)((char *)&unk_1909487A8 + v12) != 1 && *(int *)&algn_190941A08[v12 + 32] < 2 )
  {
    v10 = v8 - 0.25;
    *(float *)(a1 + 4) = v8 - 0.25;
  }
  if ( dword_1909419F0[v12 / 4] != -1 )
  {
    v10 = v10 + 0.25;
    *(float *)(a1 + 4) = v10;
  }
  v13 = 5072LL * a4;
  result = v13 + 12LL * a3;
  v15 = -*(float *)((char *)&unk_190123454 + v13);
  v16 = (float)(v15 * *a6) + v9;
  *(float *)a1 = v16;
  v17 = (float)(v15 * a6[1]) + v10;
  *(float *)(a1 + 4) = v17;
  v18 = (float)(v15 * a6[2]) + v11;
  *(float *)(a1 + 8) = v18;
  v19 = -*(float *)((char *)&unk_190123458 + v13);
  v20 = (float)(v19 * a6[3]) + v16;
  *(float *)a1 = v20;
  v21 = (float)(v19 * a6[4]) + v17;
  *(float *)(a1 + 4) = v21;
  v22 = (float)(v19 * a6[5]) + v18;
  *(float *)(a1 + 8) = v22;
  v23 = -*(float *)((char *)&unk_19012345C + v13);
  v24 = (float)(v23 * a6[6]) + v20;
  *(float *)a1 = v24;
  v25 = (float)(v23 * a6[7]) + v21;
  *(float *)(a1 + 4) = v25;
  v26 = (float)(v23 * a6[8]) + v22;
  *(float *)(a1 + 8) = v26;
  v27 = *(float *)((char *)&unk_190122140 + result);
  v28 = (float)(v27 * *a6) + v24;
  *(float *)a1 = v28;
  v29 = (float)(v27 * a6[1]) + v25;
  *(float *)(a1 + 4) = v29;
  v30 = (float)(v27 * a6[2]) + v26;
  *(float *)(a1 + 8) = v30;
  v31 = *(float *)((char *)&unk_190122144 + result);
  v32 = (float)(v31 * a6[3]) + v28;
  *(float *)a1 = v32;
  v33 = (float)(v31 * a6[4]) + v29;
  *(float *)(a1 + 4) = v33;
  v34 = (float)(v31 * a6[5]) + v30;
  *(float *)(a1 + 8) = v34;
  v35 = *(float *)((char *)&unk_190122148 + result);
  *(float *)a1 = (float)(v35 * a6[6]) + v32;
  *(float *)(a1 + 4) = (float)(v35 * a6[7]) + v33;
  *(float *)(a1 + 8) = (float)(v35 * a6[8]) + v34;
  return result;
}

