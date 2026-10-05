/* Address: 0x1400a77c0 | Name: sub_1400A77C0 | Size: 629 bytes */
void __fastcall sub_1400A77C0(float a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm14_4
  float v13; // xmm15_4
  float v14; // xmm3_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  char v17; // di
  __int64 v18; // rbx
  float v19; // xmm12_4
  __int64 v20; // rdx
  __int64 v21; // r8
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  __int64 v37; // rcx
  float v38; // [rsp+20h] [rbp-B8h] BYREF
  float v39; // [rsp+24h] [rbp-B4h]
  int v40; // [rsp+28h] [rbp-B0h]

  v8 = v6;
  v9 = v5;
  v10 = v6 - a1;
  v11 = a4 - v5;
  v12 = (float)(a1 + v6) * 0.5;
  v13 = (float)(v5 + a4) * 0.5;
  v14 = fsqrt((float)(v11 * v11) + (float)(v10 * v10));
  if ( v14 == 0.0 )
  {
    v15 = 0.0;
    v16 = 0.0;
  }
  else
  {
    v15 = v10 * (float)(1.0 / v14);
    v16 = v11 * (float)(1.0 / v14);
  }
  v17 = 0;
  dword_140404A6C[456217208] = 9;
  v18 = 0;
  dword_140404A6C[456217205] = 0;
  v40 = 0;
  v19 = -v15;
  dword_140404A6C[456217207] = 0;
  do
  {
    v38 = v12;
    v39 = v13;
    sub_14007D520((unsigned int *)&v38, a2, a3);
    v22 = a5 * *(float *)&dword_140404A6C[2 * v18 + 346696314];
    v23 = a5 * *(float *)&dword_140404A6C[2 * v18 + 346696315];
    v24 = (float)(v15 * v23) + (float)(v16 * v22);
    v25 = (float)(v19 * v22) + (float)(v16 * v23);
    if ( (unsigned __int64)v18 >= 0x20 )
    {
      v26 = v24 + a1;
      v27 = v25 + v9;
    }
    else
    {
      v26 = v24 + v8;
      v27 = v25 + a4;
    }
    v39 = v27;
    v38 = v26;
    sub_14007D520((unsigned int *)&v38, v20, v21);
    v30 = ++v17 & 0x3F;
    v31 = a5 * *(float *)&dword_140404A6C[2 * v30 + 346696314];
    v32 = a5 * *(float *)&dword_140404A6C[2 * v30 + 346696315];
    v33 = (float)(v15 * v32) + (float)(v16 * v31);
    v34 = (float)(v19 * v31) + (float)(v16 * v32);
    if ( (v17 & 0x3Fu) >= 0x20 )
    {
      v35 = v33 + a1;
      v36 = v34 + v9;
    }
    else
    {
      v35 = v33 + v8;
      v36 = v34 + a4;
    }
    v39 = v36;
    v38 = v35;
    sub_14007D520((unsigned int *)&v38, v28, v29);
    ++v18;
  }
  while ( v18 < 64 );
  sub_14006E0D0(v37, a2, a3);
}

