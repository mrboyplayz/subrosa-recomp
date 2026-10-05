/* Address: 0x14003fb90 | Name: sub_14003FB90 | Size: 2117 bytes */
__int64 __fastcall sub_14003FB90(int a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // xmm1_4
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  unsigned int v20; // xmm1_4
  __int64 v21; // rcx
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  __int64 v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  __int64 v29; // rcx
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  __int64 v33; // rcx
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 result; // rax

  v8 = a1;
  v9 = 2310LL * a1;
  v10 = 770LL * a1;
  v11 = (int)dword_140404A6C[v9 + 432531270];
  *(float *)&v12 = (float)((float)(*(float *)dword_1402B34F8 - 0.5) * a7) + a4;
  *(float *)&dword_140404A6C[3 * v10 + 432531271 + 3 * v11] = (float)((float)(*(float *)dword_1402B34F0 - 0.5) * a5)
                                                            + a2;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)((float)(*(float *)dword_1402B34F4 - 0.5) * a6)
                                                                                             + a3;
  v13 = *(float *)&dword_1402B34FC - 0.5;
  dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v12;
  v14 = (int)dword_140404A6C[v9 + 432531270];
  v15 = *(float *)&dword_1402B3500 - 0.5;
  dword_140404A6C[v9 + 432531270] = v14 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v14] = (float)(v13 * a5) + a2;
  v16 = *(float *)&dword_1402B3504 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v15 * a6) + a3;
  v17 = (float)(*(float *)&dword_1402B350C - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v16 * a7) + a4;
  v18 = (int)dword_140404A6C[v9 + 432531270];
  v19 = *(float *)&dword_1402B3508 - 0.5;
  dword_140404A6C[v9 + 432531270] = v18 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v18] = (float)(v19 * a5) + a2;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v17 + a3;
  *(float *)&v20 = (float)((float)(*(float *)&dword_1402B3518 - 0.5) * a6) + a3;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)((float)(*(float *)&dword_1402B3510 - 0.5) * a7)
                                                                                             + a4;
  v21 = (int)dword_140404A6C[v9 + 432531270];
  v22 = *(float *)&dword_1402B3514 - 0.5;
  dword_140404A6C[v9 + 432531270] = v21 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v21] = (float)(v22 * a5) + a2;
  v23 = *(float *)&dword_1402B351C - 0.5;
  dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v20;
  v24 = (float)(*(float *)&dword_1402B3524 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v23 * a7) + a4;
  v25 = (int)dword_140404A6C[v9 + 432531270];
  v26 = *(float *)&dword_1402B3520 - 0.5;
  dword_140404A6C[v9 + 432531270] = v25 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v25] = (float)(v26 * a5) + a2;
  v27 = *(float *)&dword_1402B3528 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v24 + a3;
  v28 = (float)(*(float *)&dword_1402B3530 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v27 * a7) + a4;
  v29 = (int)dword_140404A6C[v9 + 432531270];
  v30 = *(float *)&dword_1402B352C - 0.5;
  dword_140404A6C[v9 + 432531270] = v29 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v29] = (float)(v30 * a5) + a2;
  v31 = *(float *)&dword_1402B3534 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v28 + a3;
  v8 *= 385;
  v32 = (float)(*(float *)&dword_1402B353C - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v31 * a7) + a4;
  v33 = (int)dword_140404A6C[v9 + 432531270];
  v34 = *(float *)&dword_1402B3538 - 0.5;
  dword_140404A6C[v9 + 432531270] = v33 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v33] = (float)(v34 * a5) + a2;
  v35 = *(float *)&dword_1402B3540 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v32 + a3;
  v36 = (float)(*(float *)&dword_1402B3548 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v35 * a7) + a4;
  v37 = (int)dword_140404A6C[v9 + 432531270];
  v38 = *(float *)&dword_1402B3544 - 0.5;
  dword_140404A6C[v9 + 432531270] = v37 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v37] = (float)(v38 * a5) + a2;
  v39 = *(float *)&dword_1402B354C - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v36 + a3;
  v40 = v10 + (int)dword_140404A6C[v9 + 432531270];
  LODWORD(v10) = v11 + dword_1402B3660[0];
  *(float *)&dword_140404A6C[3 * v40 + 432531273] = (float)(v39 * a7) + a4;
  v41 = (int)dword_140404A6C[v9 + 432532039];
  ++dword_140404A6C[v9 + 432531270];
  dword_140404A6C[6 * v8 + 432532041 + 6 * v41] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3664[0];
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3668[0];
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B366C[0];
  LODWORD(v10) = v11 + dword_1402B3670;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v42 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v42 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v42] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3674;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3678;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B367C;
  LODWORD(v10) = v11 + dword_1402B3680;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v43 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v43 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v43] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3684;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3688;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B368C;
  LODWORD(v10) = v11 + dword_1402B3690;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v44 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v44 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v44] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3694;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3698;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B369C;
  LODWORD(v10) = v11 + dword_1402B36A0;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v45 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v45 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v45] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36A4;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36A8;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36AC;
  LODWORD(v10) = v11 + dword_1402B36B0;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v46 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v46 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v46] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36B4;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36B8;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36BC;
  result = v8 + (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[6 * result + 432532040] = 4;
  ++dword_140404A6C[v9 + 432532039];
  return result;
}

