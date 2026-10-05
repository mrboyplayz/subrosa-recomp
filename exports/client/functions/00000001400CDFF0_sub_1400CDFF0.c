/* Address: 0x1400cdff0 | Name: sub_1400CDFF0 | Size: 886 bytes */
__int64 __fastcall sub_1400CDFF0(int a1)
{
  __int64 v1; // r15
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // ebp
  float v6; // xmm7_4
  float v7; // xmm11_4
  float v8; // xmm14_4
  float v9; // xmm10_4
  float v10; // xmm13_4
  __int64 v11; // rax
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm9_4
  float v17; // xmm12_4
  float v18; // xmm8_4
  float v19; // xmm14_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  unsigned int v23; // edi
  unsigned int v24; // esi
  unsigned int v25; // ebp
  unsigned int v26; // ebx
  __int64 v28; // [rsp+0h] [rbp-128h] BYREF
  float v29; // [rsp+30h] [rbp-F8h]
  __int128 v30; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v31; // [rsp+48h] [rbp-E0h]
  float v32; // [rsp+58h] [rbp-D0h]
  __int64 v33; // [rsp+60h] [rbp-C8h]

  v1 = 1760LL * a1;
  v2 = dword_140404A6C[v1 + 278846096];
  v3 = dword_140404A6C[v1 + 278846093];
  v4 = dword_140404A6C[v1 + 278846094];
  v5 = dword_140404A6C[v1 + 278846095];
  v29 = *(float *)&dword_140404A6C[263004 * dword_140404A6C[v1 + 278846092] + 111579653];
  v30 = xmmword_140278D30;
  v31 = xmmword_140278D30;
  v32 = 1.0;
  sub_14007B2A0((__int64)&v30, (float *)&dword_1402F6188);
  v6 = *((float *)&v30 + 3);
  v7 = *((float *)&v30 + 1);
  v8 = *((float *)&v30 + 2);
  v9 = *(float *)&v31;
  v10 = *((float *)&v31 + 1);
  v11 = 3792LL * (v2 & 0x3FF) + 116LL * (int)dword_140404A6C[v1 + 278846097];
  v12 = *(float *)((char *)&dword_140404A6C[272299436] + v11);
  v13 = *(float *)((char *)&dword_140404A6C[272299434] + v11);
  v14 = *(float *)((char *)&dword_140404A6C[272299435] + v11);
  v15 = *((float *)&v31 + 2) * v12;
  v16 = *((float *)&v31 + 3) * v12;
  v17 = v32 * v12;
  v18 = *(float *)&v30 * v13;
  v30 = *(_OWORD *)((char *)&dword_140404A6C[272299437] + v11);
  v31 = *(_OWORD *)((char *)&dword_140404A6C[272299441] + v11);
  v19 = v8 * v13;
  v32 = *(float *)((char *)&dword_140404A6C[272299445] + v11);
  sub_14007B2A0((__int64)&v30, (float *)&dword_1402F6188);
  v20 = (float)((float)((float)((float)((float)((float)v3 + 0.5) * v29) + v18) + (float)(v6 * v14)) + v15)
      - *(float *)&dword_140404A6C[v1 + 278845916];
  v21 = (float)((float)((float)((float)((float)v4 * v29) + (float)(v7 * v13)) + (float)(v9 * v14)) + v16)
      - *(float *)&dword_140404A6C[v1 + 278845917];
  v22 = (float)((float)((float)((float)((float)((float)v5 + 0.5) * v29) + v19) + (float)(v10 * v14)) + v17)
      - *(float *)&dword_140404A6C[v1 + 278845918];
  if ( fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22)) < 0.125 )
  {
    v23 = dword_140404A6C[v1 + 278846095];
    v24 = dword_140404A6C[v1 + 278846094];
    v25 = dword_140404A6C[v1 + 278846093];
    v26 = ~(1 << dword_140404A6C[v1 + 278846097]) & sub_1400169B0(dword_140404A6C[v1 + 278846092], v25, v24, v23);
    sub_140017110(dword_140404A6C[v1 + 278846092], v25, v24, v23, v26);
    sub_1400516B0(dword_140404A6C[v1 + 278846092], v25, v24, v23, v26, 1u);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v28 ^ v33);
}

