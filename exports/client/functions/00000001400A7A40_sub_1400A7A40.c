/* Address: 0x1400a7a40 | Name: sub_1400A7A40 | Size: 545 bytes */
void __fastcall sub_1400A7A40(float a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  char v15; // di
  __int64 v16; // rbx
  float v17; // xmm13_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  __int64 v33; // rcx
  float v34; // [rsp+20h] [rbp-98h] BYREF
  float v35; // [rsp+24h] [rbp-94h]
  int v36; // [rsp+28h] [rbp-90h]

  v8 = v6;
  v9 = v5;
  v10 = a4 - v5;
  v11 = v6 - a1;
  v12 = fsqrt((float)(v10 * v10) + (float)(v11 * v11));
  if ( v12 == 0.0 )
  {
    v13 = 0.0;
    v14 = 0.0;
  }
  else
  {
    v13 = v11 * (float)(1.0 / v12);
    v14 = v10 * (float)(1.0 / v12);
  }
  v15 = 0;
  dword_140404A6C[456217205] = 2;
  v16 = 0;
  dword_140404A6C[456217207] = 0;
  v36 = 0;
  v17 = -v13;
  dword_140404A6C[456217208] = 9;
  do
  {
    v18 = a5 * *(float *)&dword_140404A6C[2 * v16 + 346696314];
    v19 = a5 * *(float *)&dword_140404A6C[2 * v16 + 346696315];
    v20 = (float)(v13 * v19) + (float)(v14 * v18);
    v21 = (float)(v17 * v18) + (float)(v14 * v19);
    if ( (unsigned __int64)v16 >= 0x20 )
    {
      v22 = v20 + a1;
      v23 = v21 + v9;
    }
    else
    {
      v22 = v20 + v8;
      v23 = v21 + a4;
    }
    v35 = v23;
    v34 = v22;
    sub_14007D520((unsigned int *)&v34, a2, a3);
    v26 = ++v15 & 0x3F;
    v27 = a5 * *(float *)&dword_140404A6C[2 * v26 + 346696314];
    v28 = a5 * *(float *)&dword_140404A6C[2 * v26 + 346696315];
    v29 = (float)(v13 * v28) + (float)(v14 * v27);
    v30 = (float)(v17 * v27) + (float)(v14 * v28);
    if ( (v15 & 0x3Fu) >= 0x20 )
    {
      v31 = v29 + a1;
      v32 = v30 + v9;
    }
    else
    {
      v31 = v29 + v8;
      v32 = v30 + a4;
    }
    v35 = v32;
    v34 = v31;
    sub_14007D520((unsigned int *)&v34, v24, v25);
    ++v16;
  }
  while ( v16 < 64 );
  sub_14006E0D0(v33, a2, a3);
}

