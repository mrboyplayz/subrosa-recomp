/* Address: 0x140102aa0 | Name: sub_140102AA0 | Size: 1059 bytes */
__int64 __fastcall sub_140102AA0(int a1, float *a2, float a3, float a4, float a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  __int64 v19; // rax
  float v20; // xmm7_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  unsigned int v23; // r11d
  __int64 v24; // rdx
  __int64 v25; // rcx
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned int v28; // r10d
  __int64 v29; // rdx
  __int64 v30; // rcx
  float v31; // xmm1_4
  float v32; // xmm2_4
  unsigned int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rcx
  float v36; // xmm1_4
  float v37; // xmm2_4
  unsigned int v38; // eax
  int *v39; // r8
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rdx
  _DWORD v46[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v47; // [rsp+20h] [rbp-58h]

  v8 = 2LL * a1;
  v46[0] = dword_140404A6C[4 * a1 + 178322642];
  v46[1] = dword_140404A6C[4 * a1 + 178322643];
  v46[2] = dword_140404A6C[4 * a1 + 178322644];
  v46[3] = dword_140404A6C[4 * a1 + 178322645];
  v9 = (int)(3 * dword_140404A6C[4 * a1 + 178322642]);
  v10 = *(float *)&dword_140404A6C[v9 + 177167567];
  v11 = *(float *)&dword_140404A6C[v9 + 177167568];
  v12 = *(float *)&dword_140404A6C[v9 + 177167569];
  v13 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  v14 = (int)(3 * dword_140404A6C[4 * a1 + 178322644]);
  v15 = (int)(3 * dword_140404A6C[4 * a1 + 178322645]);
  v16 = *(float *)&dword_140404A6C[v15 + 177167568];
  v17 = *(float *)&dword_140404A6C[v15 + 177167569];
  v18 = (float)(*(float *)&dword_140404A6C[v14 + 177167567] + *(float *)&dword_140404A6C[v15 + 177167567])
      + (float)(v10 + *(float *)&dword_140404A6C[v13 + 177167567]);
  v19 = 3 * dword_140404A6C[177167565];
  v20 = v18 * 0.25;
  v21 = (float)((float)(v16 + *(float *)&dword_140404A6C[v14 + 177167568])
              + (float)(v11 + *(float *)&dword_140404A6C[v13 + 177167568]))
      * 0.25;
  v22 = (float)((float)(v17 + *(float *)&dword_140404A6C[v14 + 177167569])
              + (float)(v12 + *(float *)&dword_140404A6C[v13 + 177167569]))
      * 0.25;
  *(float *)&dword_140404A6C[v19 + 177167567] = (float)((float)((float)(v10 - v20) * a3) + v20) + *a2;
  *(float *)&dword_140404A6C[v19 + 177167568] = (float)((float)((float)(v11 - v21) * a4) + v21) + a2[1];
  *(float *)&dword_140404A6C[v19 + 177167569] = (float)((float)((float)(v12 - v22) * a5) + v22) + a2[2];
  v23 = dword_140404A6C[177167565];
  v46[4] = dword_140404A6C[177167565]++;
  v24 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  v25 = 3 * dword_140404A6C[177167565];
  v26 = (float)((float)(*(float *)&dword_140404A6C[v24 + 177167568] - v21) * a4) + v21;
  v27 = (float)((float)(*(float *)&dword_140404A6C[v24 + 177167569] - v22) * a5) + v22;
  *(float *)&dword_140404A6C[v25 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v24 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v25 + 177167568] = v26 + a2[1];
  *(float *)&dword_140404A6C[v25 + 177167569] = v27 + a2[2];
  v28 = dword_140404A6C[177167565];
  v46[5] = dword_140404A6C[177167565]++;
  v29 = (int)(3 * dword_140404A6C[2 * v8 + 178322644]);
  v30 = 3 * dword_140404A6C[177167565];
  v31 = (float)((float)(*(float *)&dword_140404A6C[v29 + 177167568] - v21) * a4) + v21;
  v32 = (float)((float)(*(float *)&dword_140404A6C[v29 + 177167569] - v22) * a5) + v22;
  *(float *)&dword_140404A6C[v30 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v29 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v30 + 177167568] = v31 + a2[1];
  *(float *)&dword_140404A6C[v30 + 177167569] = v32 + a2[2];
  v33 = dword_140404A6C[177167565];
  v46[6] = dword_140404A6C[177167565]++;
  v34 = (int)(3 * dword_140404A6C[2 * v8 + 178322645]);
  v35 = 3 * dword_140404A6C[177167565];
  v36 = *(float *)&dword_140404A6C[v34 + 177167568];
  v37 = *(float *)&dword_140404A6C[v34 + 177167569];
  *(float *)&dword_140404A6C[v35 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[v34 + 177167567] - v20)
                                                              * a3)
                                                      + v20)
                                              + *a2;
  *(float *)&dword_140404A6C[v35 + 177167568] = (float)((float)((float)(v36 - v21) * a4) + v21) + a2[1];
  *(float *)&dword_140404A6C[v35 + 177167569] = (float)((float)((float)(v37 - v22) * a5) + v22) + a2[2];
  LODWORD(v35) = dword_140404A6C[177167565];
  v46[7] = dword_140404A6C[177167565]++;
  dword_140404A6C[2 * v8 + 178322642] = v23;
  dword_140404A6C[2 * v8 + 178322643] = v28;
  dword_140404A6C[2 * v8 + 178322644] = v33;
  dword_140404A6C[2 * v8 + 178322645] = v35;
  v38 = dword_140404A6C[178322641];
  v39 = &dword_1402B3674;
  do
  {
    v40 = *v39;
    dword_140404A6C[4 * v38 + 178322642] = v46[*(v39 - 1)];
    v41 = v46[v40];
    v42 = v39[1];
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = v41;
    v43 = v46[v42];
    v44 = v39[2];
    v39 += 4;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v43;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v46[v44];
    v38 = ++dword_140404A6C[178322641];
  }
  while ( (__int64)v39 < (__int64)&dword_1402B36B4 );
  return MEMORY[0x1401F8B20]((unsigned __int64)v46 ^ v47);
}

