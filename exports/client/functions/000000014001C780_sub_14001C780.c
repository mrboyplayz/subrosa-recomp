/* Address: 0x14001c780 | Name: sub_14001C780 | Size: 1070 bytes */
__int64 __fastcall sub_14001C780(int a1)
{
  __int64 result; // rax
  __int64 v2; // r9
  __int64 v3; // r8
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm7_4
  __int64 v7; // rcx
  float v8; // xmm5_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  __int64 v11; // rdx
  float v12; // xmm4_4
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float v18; // xmm9_4
  float v19; // xmm3_4
  unsigned int v20; // xmm7_4
  float v21; // xmm2_4
  unsigned int v22; // xmm9_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm8_4
  float v28; // xmm5_4
  unsigned int v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm7_4
  unsigned int v32; // xmm6_4
  unsigned int v33; // xmm3_4
  float v34; // xmm8_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm9_4
  float v38; // xmm4_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm0_4

  result = a1;
  v2 = 61LL * a1;
  v3 = 18LL * a1;
  v4 = *(float *)&dword_140404A6C[v2 + 486149267];
  v5 = *(float *)&dword_140404A6C[v2 + 486149269];
  v6 = *(float *)&dword_140404A6C[v2 + 486149268];
  v7 = (int)dword_140404A6C[v2 + 486149291];
  v8 = *(float *)&dword_140404A6C[v2 + 486149270];
  v9 = v6;
  v10 = *(float *)&dword_140404A6C[v2 + 486149271];
  v11 = (int)dword_140404A6C[v2 + 486149292];
  v12 = v10;
  LOWORD(dword_140404A6C[2 * v3 + 485543029]) = v7;
  v13 = 47 * v7;
  HIWORD(dword_140404A6C[2 * v3 + 485543029]) = v11;
  v14 = 47 * v11;
  *(float *)&v15 = (float)((float)(v6 * *(float *)&dword_140404A6C[v13 + 18215727])
                         + (float)(v4 * *(float *)&dword_140404A6C[v13 + 18215724]))
                 + (float)(v5 * *(float *)&dword_140404A6C[v13 + 18215730]);
  v16 = (float)(v6 * *(float *)&dword_140404A6C[v13 + 18215729])
      + (float)(v4 * *(float *)&dword_140404A6C[v13 + 18215726]);
  v17 = v5;
  v18 = (float)(v9 * *(float *)&dword_140404A6C[v13 + 18215728])
      + (float)(v4 * *(float *)&dword_140404A6C[v13 + 18215725]);
  v19 = v10 * *(float *)&dword_140404A6C[v14 + 18215728];
  *(float *)&v20 = v16 + (float)(v5 * *(float *)&dword_140404A6C[v13 + 18215732]);
  v21 = *(float *)&dword_140404A6C[v2 + 486149272];
  *(float *)&v22 = v18 + (float)(v17 * *(float *)&dword_140404A6C[v13 + 18215731]);
  v23 = v10 * *(float *)&dword_140404A6C[v14 + 18215729];
  v24 = v21 * *(float *)&dword_140404A6C[v14 + 18215730];
  v25 = (float)(v12 * *(float *)&dword_140404A6C[v14 + 18215727])
      + (float)(v8 * *(float *)&dword_140404A6C[v14 + 18215724]);
  dword_140404A6C[2 * v3 + 485543037] = v15;
  v26 = v8 * *(float *)&dword_140404A6C[v14 + 18215725];
  v27 = *(float *)&v15 + *(float *)&dword_140404A6C[v13 + 18215715];
  v28 = v8 * *(float *)&dword_140404A6C[v14 + 18215726];
  *(float *)&v29 = v25 + v24;
  dword_140404A6C[2 * v3 + 485543038] = v22;
  v30 = *(float *)&v22 + *(float *)&dword_140404A6C[v13 + 18215716];
  dword_140404A6C[2 * v3 + 485543039] = v20;
  v31 = *(float *)&v20 + *(float *)&dword_140404A6C[v13 + 18215717];
  dword_140404A6C[2 * v3 + 485543040] = v29;
  *(float *)&v32 = (float)(v23 + v28) + (float)(v21 * *(float *)&dword_140404A6C[v14 + 18215732]);
  *(float *)&v33 = (float)(v19 + v26) + (float)(v21 * *(float *)&dword_140404A6C[v14 + 18215731]);
  v34 = v27 - (float)(*(float *)&v29 + *(float *)&dword_140404A6C[v14 + 18215715]);
  dword_140404A6C[2 * v3 + 485543042] = v32;
  v35 = *(float *)&v32 + *(float *)&dword_140404A6C[v14 + 18215717];
  dword_140404A6C[2 * v3 + 485543041] = v33;
  v36 = v31 - v35;
  v37 = v30 - (float)(*(float *)&v33 + *(float *)&dword_140404A6C[v14 + 18215716]);
  v38 = fsqrt((float)((float)(v37 * v37) + (float)(v34 * v34)) + (float)(v36 * v36));
  if ( v38 > 0.0625 )
  {
    v34 = (float)(v34 * (float)(1.0 / v38)) * 0.0625;
    v37 = (float)(v37 * (float)(1.0 / v38)) * 0.0625;
    v36 = (float)(v36 * (float)(1.0 / v38)) * 0.0625;
  }
  if ( dword_140404A6C[v2 + 486149294] == 1111 )
  {
    v39 = fsqrt((float)((float)(v37 * v37) + (float)(v34 * v34)) + (float)(v36 * v36));
    if ( v39 > 0.015625 )
    {
      v34 = (float)((float)(1.0 / v39) * v34) * 0.015625;
      v37 = (float)((float)(1.0 / v39) * v37) * 0.015625;
      v36 = (float)((float)(1.0 / v39) * v36) * 0.015625;
    }
  }
  v40 = *(float *)&dword_140404A6C[v14 + 18215714];
  v41 = *(float *)&dword_140404A6C[v13 + 18215714];
  *(float *)&dword_140404A6C[2 * v3 + 485543056] = v34 * 0.1875;
  *(float *)&dword_140404A6C[2 * v3 + 485543057] = v37 * 0.1875;
  *(float *)&dword_140404A6C[2 * v3 + 485543058] = v36 * 0.1875;
  dword_140404A6C[2 * v3 + 485543046] = 1044381696;
  v42 = 1.0 / (float)(v40 + v41);
  *(float *)&dword_140404A6C[2 * v3 + 485543045] = v42 * v41;
  *(float *)&dword_140404A6C[2 * v3 + 485543044] = v42 * v40;
  *(float *)&dword_140404A6C[2 * v3 + 485543059] = *(float *)&dword_140404A6C[2 * v3 + 485543033] * 0.875;
  *(float *)&dword_140404A6C[2 * v3 + 485543060] = *(float *)&dword_140404A6C[2 * v3 + 485543034] * 0.875;
  *(float *)&dword_140404A6C[2 * v3 + 485543061] = *(float *)&dword_140404A6C[2 * v3 + 485543035] * 0.875;
  *(float *)&dword_140404A6C[2 * v3 + 485543062] = fminf(
                                                     (float)(*(float *)&dword_140404A6C[2 * v3 + 485543045]
                                                           + *(float *)&dword_140404A6C[2 * v3 + 485543045])
                                                   * *(float *)&dword_140404A6C[v14 + 18215748],
                                                     (float)(*(float *)&dword_140404A6C[2 * v3 + 485543044]
                                                           + *(float *)&dword_140404A6C[2 * v3 + 485543044])
                                                   * *(float *)&dword_140404A6C[v13 + 18215748]);
  return result;
}

