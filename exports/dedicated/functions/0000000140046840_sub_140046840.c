/* Address: 0x140046840 | Name: sub_140046840 | Size: 1020 bytes */
__int64 __fastcall sub_140046840(int a1, int *a2, __int64 a3)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6; // ebx
  __int64 v7; // r12
  __int64 v8; // r14
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  int v18; // eax
  __int64 v19; // r13
  __int64 v20; // rbp
  __int64 v21; // rdi
  int *v22; // rbx
  float v23; // xmm5_4
  float v24; // xmm7_4
  float v25; // xmm8_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm4_4
  int v32; // eax
  __int64 v33; // rbp
  __int64 v34; // r15
  __int64 v35; // rdi
  int *v36; // rbx
  float v38; // [rsp+30h] [rbp-98h] BYREF
  float v39; // [rsp+34h] [rbp-94h]
  float v40; // [rsp+38h] [rbp-90h]
  unsigned int v41; // [rsp+D0h] [rbp+8h]

  if ( a1 )
    return v41;
  v4 = *((float *)a2 + 1);
  v38 = *(float *)a2;
  v5 = *((float *)a2 + 2);
  v39 = v4;
  v40 = v5;
  v6 = sub_1400414B0(13, (int *)&v38, nullptr, (int *)a3, 0);
  v7 = 5210LL * v6;
  v8 = v6;
  dword_16E6A3C60[v7 + 5098] = 74;
  v9 = *(float *)&dword_16E6A3C60[v7 + 11];
  v10 = *(float *)&dword_16E6A3C60[v7 + 12];
  v11 = *(float *)&dword_16E6A3C60[v7 + 13];
  *(_DWORD *)a3 = dword_16E6A3C60[v7 + 17];
  *(_DWORD *)(a3 + 4) = dword_16E6A3C60[v7 + 18];
  *(_DWORD *)(a3 + 8) = dword_16E6A3C60[v7 + 19];
  v12 = *(float *)&dword_16E6A3C60[v7 + 20];
  *(float *)(a3 + 12) = v12;
  v13 = *(float *)&dword_16E6A3C60[v7 + 21];
  *(float *)(a3 + 16) = v13;
  v14 = *(float *)&dword_16E6A3C60[v7 + 22];
  *(float *)(a3 + 20) = v14;
  v15 = *(float *)&dword_16E6A3C60[v7 + 23];
  *(float *)(a3 + 24) = v15;
  v16 = *(float *)&dword_16E6A3C60[v7 + 24];
  *(float *)(a3 + 28) = v16;
  v17 = *(float *)&dword_16E6A3C60[v7 + 25];
  *(float *)(a3 + 32) = v17;
  v38 = (float)(v9 - (float)(v15 * 5.5)) + (float)(v12 * 0.5);
  v39 = (float)(v10 - (float)(v16 * 5.5)) + (float)(v13 * 0.5);
  v40 = (float)(v11 - (float)(v17 * 5.5)) + (float)(v14 * 0.5);
  v18 = sub_1400414B0(14, (int *)&v38, nullptr, (int *)a3, 0);
  v19 = 5210LL * v18;
  v20 = 0;
  dword_16E6A3C60[v19 + 3466] = v6;
  dword_16E6A3C60[v7 + 3466] = v18;
  do
  {
    if ( (unsigned __int64)v20 < 4 || (unsigned __int64)(v20 - 6) <= 3 )
    {
      v21 = 2;
      v22 = &dword_16E6A3D60[v19];
      do
      {
        sub_140038720(0, dword_16E6A3C60[5210 * v8 + 60 + v20], *v22++, -1);
        --v21;
      }
      while ( v21 );
    }
    ++v20;
  }
  while ( v20 < 12 );
  v23 = *(float *)&dword_16E6A3C60[v7 + 11];
  v24 = *(float *)&dword_16E6A3C60[v7 + 12];
  v25 = *(float *)&dword_16E6A3C60[v7 + 13];
  *(_DWORD *)a3 = dword_16E6A3C60[v7 + 17];
  *(_DWORD *)(a3 + 4) = dword_16E6A3C60[v7 + 18];
  *(_DWORD *)(a3 + 8) = dword_16E6A3C60[v7 + 19];
  v26 = *(float *)&dword_16E6A3C60[v7 + 20];
  *(float *)(a3 + 12) = v26;
  v27 = *(float *)&dword_16E6A3C60[v7 + 21];
  *(float *)(a3 + 16) = v27;
  v28 = *(float *)&dword_16E6A3C60[v7 + 22];
  *(float *)(a3 + 20) = v28;
  v29 = *(float *)&dword_16E6A3C60[v7 + 23];
  *(float *)(a3 + 24) = v29;
  v30 = *(float *)&dword_16E6A3C60[v7 + 24];
  *(float *)(a3 + 28) = v30;
  v31 = *(float *)&dword_16E6A3C60[v7 + 25];
  *(float *)(a3 + 32) = v31;
  v38 = (float)((float)(v29 * 5.5) + v23) + (float)(v26 * 0.5);
  v39 = (float)((float)(v30 * 5.5) + v24) + (float)(v27 * 0.5);
  v40 = (float)((float)(v31 * 5.5) + v25) + (float)(v28 * 0.5);
  v32 = sub_1400414B0(14, (int *)&v38, nullptr, (int *)a3, 0);
  v33 = 2;
  v34 = 5210LL * v32;
  dword_16E6A3C60[v34 + 3466] = v8;
  dword_16E6A3C60[v7 + 3467] = v32;
  do
  {
    if ( (unsigned __int64)(v33 - 6) > 1 )
    {
      v35 = 2;
      v36 = &dword_16E6A3D60[v34];
      do
      {
        sub_140038720(0, dword_16E6A3C60[5210 * v8 + 60 + v33], *v36++, -1);
        --v35;
      }
      while ( v35 );
    }
    ++v33;
  }
  while ( v33 < 12 );
  return (unsigned int)v8;
}

