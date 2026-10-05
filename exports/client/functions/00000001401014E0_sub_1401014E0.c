/* Address: 0x1401014e0 | Name: sub_1401014E0 | Size: 1203 bytes */
__int64 __fastcall sub_1401014E0(int a1)
{
  __int64 v1; // r10
  __int64 v2; // r8
  __int64 v3; // rdx
  float v4; // xmm6_4
  float v5; // xmm4_4
  __int64 v6; // rax
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm0_4
  int v10; // ecx
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm14_4
  float v15; // xmm13_4
  float v16; // xmm11_4
  float v17; // xmm15_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v21; // xmm13_4
  unsigned int v22; // xmm15_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  unsigned int v25; // xmm13_4
  float v26; // xmm2_4
  unsigned int v27; // xmm11_4
  unsigned int v28; // xmm10_4
  unsigned int v29; // xmm9_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  __int64 v33; // rax
  float v34; // xmm1_4
  unsigned int v35; // xmm8_4
  float v36; // xmm0_4
  unsigned int v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm14_4
  float v40; // xmm1_4
  unsigned int v41; // xmm7_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm0_4
  unsigned int v45; // r9d
  __int64 v46; // rcx
  unsigned int v47; // xmm9_4
  __int64 v48; // rcx
  __int64 v49; // rcx
  int *v50; // r8
  unsigned int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rdx
  float v58; // [rsp+0h] [rbp-E8h] BYREF
  float v59; // [rsp+4h] [rbp-E4h]
  float v60; // [rsp+8h] [rbp-E0h]
  float v61; // [rsp+Ch] [rbp-DCh]
  float v62; // [rsp+10h] [rbp-D8h]
  float v63; // [rsp+14h] [rbp-D4h]
  _DWORD v64[8]; // [rsp+18h] [rbp-D0h]
  __int64 v65; // [rsp+38h] [rbp-B0h]

  v1 = 2LL * a1;
  v64[0] = dword_140404A6C[4 * a1 + 178322642];
  v64[1] = dword_140404A6C[4 * a1 + 178322643];
  v64[2] = dword_140404A6C[4 * a1 + 178322644];
  v64[3] = dword_140404A6C[4 * a1 + 178322645];
  v2 = 4 * a1;
  v3 = (int)(3 * dword_140404A6C[v2 + 178322642]);
  v4 = *(float *)&dword_140404A6C[v3 + 177167567];
  v5 = *(float *)&dword_140404A6C[v3 + 177167568];
  v6 = (int)(3 * dword_140404A6C[v2 + 178322643]);
  v63 = *(float *)&dword_140404A6C[v3 + 177167569];
  v62 = v5;
  v61 = v4;
  v7 = *(float *)&dword_140404A6C[v6 + 177167567];
  v8 = *(float *)&dword_140404A6C[v6 + 177167568];
  v9 = *(float *)&dword_140404A6C[v6 + 177167569];
  LODWORD(v6) = dword_140404A6C[v2 + 178322645];
  v59 = v9;
  v58 = v7;
  v60 = v8;
  v10 = 3 * v6;
  v11 = (float)(v7 - v4) * 0.125;
  v12 = (float)(v9 - v63) * 0.125;
  v13 = v4 + v11;
  v14 = *(float *)&dword_140404A6C[3 * (_DWORD)v6 + 177167567];
  v15 = *(float *)&dword_140404A6C[3 * (_DWORD)v6 + 177167568];
  v16 = *(float *)&dword_140404A6C[3 * (_DWORD)v6 + 177167569];
  v17 = v14 - v4;
  v18 = (int)(3 * dword_140404A6C[v2 + 178322644]);
  v19 = (float)(v8 - v5) * 0.125;
  v20 = *(float *)&dword_140404A6C[v18 + 177167569];
  v21 = (float)(v15 - v5) * 0.25;
  *(float *)&v22 = (float)(v17 * 0.25) + v13;
  v23 = v5;
  v24 = *(float *)&dword_140404A6C[v18 + 177167568];
  *(float *)&v25 = v21 + (float)(v23 + v19);
  v26 = *(float *)&dword_140404A6C[v18 + 177167567];
  *(float *)&v27 = (float)((float)(v16 - v63) * 0.25) + (float)(v63 + v12);
  *(float *)&v28 = (float)((float)(v26 - v7) * 0.25) + (float)(v7 - v11);
  *(float *)&v29 = (float)((float)(v24 - v8) * 0.25) + (float)(v8 - v19);
  v30 = v59 - v12;
  v31 = *(float *)&dword_140404A6C[v10 + 177167568];
  v32 = (float)(*(float *)&dword_140404A6C[v10 + 177167569] - v20) * 0.125;
  v33 = 3 * dword_140404A6C[177167565];
  v34 = (float)(*(float *)&dword_140404A6C[v10 + 177167567] - v26) * 0.125;
  *(float *)&v35 = (float)((float)(v20 - v59) * 0.25) + v30;
  v36 = (float)(v31 - v24) * 0.125;
  v58 = (float)((float)(v58 - v26) * 0.25) + (float)(v26 + v34);
  *(float *)&v37 = (float)((float)(v59 - v20) * 0.25) + (float)(v20 + v32);
  v38 = v61 - v14;
  v39 = v14 - v34;
  v40 = v63;
  *(float *)&v41 = (float)((float)(v60 - v24) * 0.25) + (float)(v24 + v36);
  v42 = v62 - v31;
  v43 = v31 - v36;
  v44 = *(float *)&dword_140404A6C[v10 + 177167569];
  dword_140404A6C[v33 + 177167567] = v22;
  dword_140404A6C[v33 + 177167568] = v25;
  dword_140404A6C[v33 + 177167569] = v27;
  v45 = dword_140404A6C[177167565];
  v64[4] = dword_140404A6C[177167565]++;
  v46 = 3 * dword_140404A6C[177167565];
  dword_140404A6C[v46 + 177167567] = v28;
  dword_140404A6C[v46 + 177167568] = v29;
  v47 = LODWORD(v58);
  dword_140404A6C[v46 + 177167569] = v35;
  LODWORD(v2) = dword_140404A6C[177167565];
  v64[5] = dword_140404A6C[177167565]++;
  v48 = 3 * dword_140404A6C[177167565];
  dword_140404A6C[v48 + 177167567] = v47;
  dword_140404A6C[v48 + 177167568] = v41;
  dword_140404A6C[v48 + 177167569] = v37;
  LODWORD(v3) = dword_140404A6C[177167565];
  v64[6] = dword_140404A6C[177167565]++;
  v49 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v49 + 177167567] = (float)(v38 * 0.25) + v39;
  *(float *)&dword_140404A6C[v49 + 177167568] = (float)(v42 * 0.25) + v43;
  *(float *)&dword_140404A6C[v49 + 177167569] = (float)((float)(v40 - v44) * 0.25) + (float)(v44 - v32);
  LODWORD(v49) = dword_140404A6C[177167565];
  v64[7] = dword_140404A6C[177167565]++;
  dword_140404A6C[2 * v1 + 178322642] = v45;
  dword_140404A6C[2 * v1 + 178322643] = v2;
  v50 = &dword_1402B3674;
  dword_140404A6C[2 * v1 + 178322644] = v3;
  dword_140404A6C[2 * v1 + 178322645] = v49;
  v51 = dword_140404A6C[178322641];
  do
  {
    v52 = *v50;
    dword_140404A6C[4 * v51 + 178322642] = v64[*(v50 - 1)];
    v53 = v64[v52];
    v54 = v50[1];
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v53;
    v55 = v64[v54];
    v56 = v50[2];
    v50 += 4;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v55;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v64[v56];
    v51 = ++dword_140404A6C[178322641];
  }
  while ( (__int64)v50 < (__int64)&dword_1402B36B4 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v58 ^ v65);
}

