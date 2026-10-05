/* Address: 0x1400ac890 | Name: sub_1400AC890 | Size: 1279 bytes */
__int64 __fastcall sub_1400AC890(unsigned int a1)
{
  __int64 v2; // rbx
  float v3; // xmm3_4
  float v4; // xmm4_4
  int v5; // r14d
  float v6; // xmm14_4
  float v7; // xmm9_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm5_4
  float v12; // xmm10_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm10_4
  float v18; // xmm8_4
  __int128 *v19; // rsi
  int v20; // edi
  float v21; // xmm12_4
  float v22; // xmm1_4
  float v23; // xmm13_4
  float v24; // xmm7_4
  float v25; // xmm10_4
  float v26; // xmm8_4
  __int64 v27; // rax
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm11_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  __int64 v35; // [rsp+8h] [rbp-100h] BYREF
  float v36; // [rsp+28h] [rbp-E0h]
  float v37; // [rsp+30h] [rbp-D8h] BYREF
  float v38; // [rsp+34h] [rbp-D4h]
  float v39; // [rsp+38h] [rbp-D0h]
  float v40; // [rsp+40h] [rbp-C8h] BYREF
  float v41; // [rsp+44h] [rbp-C4h]
  float v42; // [rsp+48h] [rbp-C0h]
  __int128 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+68h] [rbp-A0h]
  float v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+98h] [rbp-70h]

  v2 = 7166LL * (int)a1;
  v43 = xmmword_140278D30;
  v44 = xmmword_140278D30;
  v45 = 1.0;
  sub_14007B2A0((__int64)&v43, (float *)&v43 + 3);
  v3 = *(float *)&dword_140404A6C[v2 + 280651441];
  v4 = *(float *)&dword_140404A6C[v2 + 280651442];
  v5 = 0;
  v6 = 65536.0;
  v7 = -65536.0;
  v37 = *(float *)&dword_140404A6C[v2 + 280651440];
  v38 = v3;
  v39 = v4;
  v40 = v37 - (float)(*(float *)&dword_1402F6188 * 1.75);
  v41 = v3 - (float)(*(float *)&dword_1402F618C * 1.75);
  v42 = v4 - (float)(*(float *)&dword_1402F6190 * 1.75);
  if ( (unsigned int)sub_1400B91E0(a1, &v37, &v40) )
    v8 = *(float *)&dword_140404A6C[73006982];
  else
    v8 = v38;
  v9 = *(float *)&dword_140404A6C[v2 + 280657992];
  v10 = *(float *)&dword_140404A6C[v2 + 280657994];
  v11 = v8;
  v36 = v8;
  v12 = 0.0;
  v13 = fsqrt((float)(v10 * v10) + (float)(v9 * v9));
  if ( v13 < 0.016666668 )
  {
    v14 = v13 - 0.016666668;
    v12 = *((float *)&v44 + 3) * v14;
    v9 = (float)(*((float *)&v44 + 2) * v14) + v9;
    v10 = (float)(v45 * v14) + v10;
  }
  v15 = fsqrt((float)((float)(v12 * v12) + (float)(v9 * v9)) + (float)(v10 * v10));
  if ( v15 == 0.0 )
  {
    v16 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v16 = v9 * (float)(1.0 / v15);
    v17 = v12 * (float)(1.0 / v15);
    v18 = v10 * (float)(1.0 / v15);
  }
  v19 = &v43;
  v20 = 0;
  v21 = v39;
  v22 = v8;
  v23 = v37;
  v24 = v16 * 0.66666669;
  v25 = v17 * 0.66666669;
  v26 = v18 * 0.66666669;
  do
  {
    v37 = (float)(*(float *)&dword_1402F6188 * 0.75) + v23;
    v41 = v11 - (float)(*(float *)&dword_1402F618C * 0.75);
    v38 = (float)(*(float *)&dword_1402F618C * 0.75) + v22;
    v40 = v23 - (float)(*(float *)&dword_1402F6188 * 0.75);
    v39 = (float)(*(float *)&dword_1402F6190 * 0.75) + v21;
    v42 = v21 - (float)(*(float *)&dword_1402F6190 * 0.75);
    if ( (unsigned int)sub_1400B91E0(a1, &v37, &v40) )
    {
      if ( !v20 )
      {
        v27 = (int)dword_140404A6C[73007011];
        *(_QWORD *)&dword_140404A6C[v2 + 280657986] = 0;
        *(_QWORD *)&dword_140404A6C[v2 + 280657988] = 0;
        *(_QWORD *)&dword_140404A6C[v2 + 280657990] = 0;
        if ( (_DWORD)v27 != -1 )
        {
          dword_140404A6C[v2 + 280657986] = dword_140404A6C[5210 * v27 + 129716744];
          dword_140404A6C[v2 + 280657987] = dword_140404A6C[5210 * v27 + 129716745];
          dword_140404A6C[v2 + 280657988] = dword_140404A6C[5210 * v27 + 129716746];
          dword_140404A6C[v2 + 280657989] = dword_140404A6C[5210 * v27 + 129716750];
          dword_140404A6C[v2 + 280657990] = dword_140404A6C[5210 * v27 + 129716751];
          dword_140404A6C[v2 + 280657991] = dword_140404A6C[5210 * v27 + 129716752];
        }
      }
      v8 = *(float *)&dword_140404A6C[73006982];
      ++v5;
      v19 = (__int128 *)((char *)v19 + 4);
      v6 = fminf(*(float *)&dword_140404A6C[73006982], v6);
      v7 = fmaxf(*(float *)&dword_140404A6C[73006982], v7);
    }
    v23 = v23 + v24;
    ++v20;
    v21 = v21 + v26;
    v8 = v25 + v8;
    v22 = v8;
    v11 = v8;
  }
  while ( v20 < 4 );
  if ( v5 > 0 )
  {
    v28 = *(float *)&dword_140404A6C[v2 + 280658001];
    v29 = v7 - v36;
    v30 = 0.03125;
    v31 = fmaxf((float)(1.0 - fmaxf(fminf(fabs(v7 - v6), 0.5), fminf(fabs(v7 - v36), 0.625))) - v28, -0.03125);
    if ( v31 > 0.03125 )
      v31 = 0.03125;
    v32 = *(float *)&dword_140404A6C[v2 + 280658002];
    *(float *)&dword_140404A6C[v2 + 280658001] = v31 + v28;
    v33 = fmaxf(v29 - v32, -0.03125);
    if ( v33 <= 0.03125 )
      v30 = v33;
    *(float *)&dword_140404A6C[v2 + 280658002] = v30 + v32;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v46);
}

