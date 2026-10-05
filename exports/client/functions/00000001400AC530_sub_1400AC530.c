/* Address: 0x1400ac530 | Name: sub_1400AC530 | Size: 858 bytes */
__int64 __fastcall sub_1400AC530(float *a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdi
  float v7; // xmm10_4
  float v8; // xmm9_4
  float v9; // xmm2_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm2_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm11_4
  float v17; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm11_4
  float v21; // xmm8_4
  float v22; // xmm3_4
  float v23; // xmm8_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  __int64 v31; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+20h] [rbp-98h] BYREF
  __int128 v33; // [rsp+30h] [rbp-88h]
  int v34; // [rsp+40h] [rbp-78h]
  __int64 v35; // [rsp+48h] [rbp-70h]

  v4 = 1760LL * a3;
  v34 = 1065353216;
  v5 = 1268LL * (int)dword_140404A6C[v4 + 278845898];
  v6 = 7166LL * a2;
  v7 = (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 278521317] * *(float *)&dword_140404A6C[v4 + 278845934])
                     + *(float *)&dword_140404A6C[v4 + 278845916])
             + (float)(*(float *)&dword_140404A6C[v5 + 278521318] * *(float *)&dword_140404A6C[v4 + 278845937]))
     + (float)(*(float *)&dword_140404A6C[v5 + 278521319] * *(float *)&dword_140404A6C[v4 + 278845940]);
  v8 = (float)((float)(*(float *)&dword_140404A6C[v5 + 278521317] * *(float *)&dword_140404A6C[v4 + 278845936])
             + *(float *)&dword_140404A6C[v4 + 278845918])
     + (float)(*(float *)&dword_140404A6C[v5 + 278521318] * *(float *)&dword_140404A6C[v4 + 278845939]);
  v9 = *(float *)&dword_140404A6C[v5 + 278521319] * *(float *)&dword_140404A6C[v4 + 278845942];
  v10 = (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 278521317] * *(float *)&dword_140404A6C[v4 + 278845935])
                      + *(float *)&dword_140404A6C[v4 + 278845917])
              + (float)(*(float *)&dword_140404A6C[v5 + 278521318] * *(float *)&dword_140404A6C[v4 + 278845938]))
      + (float)(*(float *)&dword_140404A6C[v5 + 278521319] * *(float *)&dword_140404A6C[v4 + 278845941]);
  v32 = xmmword_140278D30;
  v11 = v8 + v9;
  v33 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v32, (float *)&dword_1402F6188);
  v12 = *((float *)&v32 + 1);
  v13 = *((float *)&v32 + 3) * 0.5;
  v14 = (float)(*(float *)&v32 * 0.875) + *(float *)&dword_140404A6C[v4 + 278846085];
  v15 = *((float *)&v32 + 2) * 0.875;
  v16 = *(float *)&v33 * 0.5;
  *a1 = v14;
  v17 = v13 + v14;
  v18 = *((float *)&v33 + 1) * 0.5;
  v19 = (float)(v12 * 0.875) + *(float *)&dword_140404A6C[v4 + 278846086];
  a1[1] = v19;
  v20 = v16 + v19;
  v21 = v15 + *(float *)&dword_140404A6C[v4 + 278846087];
  *a1 = v17;
  v22 = v17 - v7;
  a1[1] = v20;
  v23 = v21 + v18;
  a1[2] = v23;
  v24 = v23 - v11;
  v25 = fsqrt((float)(v24 * v24) + (float)(v22 * v22));
  if ( v25 <= 0.0625 )
  {
    v10 = v20;
    v26 = v23;
  }
  else
  {
    a1[1] = v10;
    v26 = (float)((float)((float)(1.0 / v25) * v24) * 0.0625) + v11;
    v17 = (float)((float)((float)(1.0 / v25) * v22) * 0.0625) + v7;
    a1[2] = v26;
    *a1 = v17;
  }
  v27 = v10 - *(float *)&dword_140404A6C[v6 + 280651597];
  v28 = v17 - *(float *)&dword_140404A6C[v6 + 280651596];
  v29 = v26 - *(float *)&dword_140404A6C[v6 + 280651598];
  *a1 = (float)((float)(v27 * *(float *)&dword_140404A6C[v6 + 280651609])
              + (float)(v28 * *(float *)&dword_140404A6C[v6 + 280651608]))
      + (float)(v29 * *(float *)&dword_140404A6C[v6 + 280651610]);
  a1[1] = (float)((float)(v27 * *(float *)&dword_140404A6C[v6 + 280651612])
                + (float)(v28 * *(float *)&dword_140404A6C[v6 + 280651611]))
        + (float)(v29 * *(float *)&dword_140404A6C[v6 + 280651613]);
  a1[2] = (float)((float)(v27 * *(float *)&dword_140404A6C[v6 + 280651615])
                + (float)(v28 * *(float *)&dword_140404A6C[v6 + 280651614]))
        + (float)(v29 * *(float *)&dword_140404A6C[v6 + 280651616]);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v35);
}

