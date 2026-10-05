/* Address: 0x1400df5b0 | Name: sub_1400DF5B0 | Size: 778 bytes */
_BOOL8 __fastcall sub_1400DF5B0(float *a1, float *a2, int a3, int a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned int *v9; // rdi
  __int64 v10; // rax
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  __int64 v16; // rax
  __int64 v17; // rax
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm3_4
  float v29; // xmm9_4
  float v30; // xmm8_4
  float v31; // xmm7_4
  float v33[2]; // [rsp+48h] [rbp-79h] BYREF
  float v34; // [rsp+50h] [rbp-71h]
  float v35; // [rsp+58h] [rbp-69h] BYREF
  float v36; // [rsp+5Ch] [rbp-65h]
  float v37; // [rsp+60h] [rbp-61h]
  float v38[4]; // [rsp+68h] [rbp-59h] BYREF
  float v39[4]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v40; // [rsp+88h] [rbp-39h] BYREF
  __int64 v41; // [rsp+8Ch] [rbp-35h]
  __int64 v42; // [rsp+138h] [rbp+77h] BYREF

  dword_140404A6C[73006987] = 1065353216;
  v6 = a4 + 15432LL * a3;
  v7 = (int)dword_140404A6C[v6 + 358300580];
  if ( (int)v7 >= (int)dword_140404A6C[v6 + 358300584] )
    return 0;
  v8 = 5144LL * a3;
  v9 = &dword_140404A6C[3 * v8 + 358300589 + 3 * v7];
  do
  {
    v10 = v8 + (int)*v9;
    v11 = *(float *)&dword_140404A6C[3 * v8 + 358297508 + 3 * (int)*(v9 - 1)];
    v12 = *(float *)&dword_140404A6C[3 * v8 + 358297509 + 3 * (int)*(v9 - 1)];
    LODWORD(v39[0]) = dword_140404A6C[3 * v8 + 358297507 + 3 * (int)*(v9 - 1)];
    v39[1] = v11;
    v13 = *(float *)&dword_140404A6C[3 * v10 + 358297509];
    v14 = *(float *)&dword_140404A6C[3 * v10 + 358297507];
    v15 = *(float *)&dword_140404A6C[3 * v10 + 358297508];
    v16 = (int)v9[1];
    v38[2] = v13;
    v17 = v8 + v16;
    v18 = v13 - v12;
    v38[1] = v15;
    v19 = v15 - v11;
    v38[0] = v14;
    v20 = v14 - v39[0];
    v39[2] = v12;
    v21 = *(float *)&dword_140404A6C[3 * v17 + 358297509];
    v22 = *(float *)&dword_140404A6C[3 * v17 + 358297507];
    v36 = *(float *)&dword_140404A6C[3 * v17 + 358297508];
    v37 = v21;
    v23 = v21 - v12;
    v35 = v22;
    v24 = v22 - v39[0];
    v25 = (float)((float)(v36 - v11) * v18) - (float)(v23 * v19);
    v26 = (float)(v23 * v20) - (float)(v24 * v18);
    v27 = (float)(v24 * v19) - (float)((float)(v36 - v11) * v20);
    v28 = fsqrt((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27));
    if ( v28 == 0.0 )
    {
      v33[0] = 0.0;
      v29 = 0.0;
      v34 = 0.0;
      v31 = 0.0;
      v30 = 0.0;
    }
    else
    {
      v29 = v25 * (float)(1.0 / v28);
      v30 = v27 * (float)(1.0 / v28);
      v33[0] = v29;
      v31 = v26 * (float)(1.0 / v28);
      v34 = v30;
    }
    v33[1] = v31;
    if ( sub_140077FA0((float *)&v40, v33, (float *)&v42, a1, a2, v39, v38, &v35)
      && *(float *)&v42 < *(float *)&dword_140404A6C[73006987] )
    {
      dword_140404A6C[73006981] = v40;
      *(_QWORD *)&dword_140404A6C[73006982] = v41;
      *(float *)&dword_140404A6C[73006984] = v29;
      *(float *)&dword_140404A6C[73006985] = v31;
      *(float *)&dword_140404A6C[73006986] = v30;
      dword_140404A6C[73006987] = v42;
    }
    LODWORD(v7) = v7 + 1;
    v9 += 3;
  }
  while ( (int)v7 < (int)dword_140404A6C[v6 + 358300584] );
  return *(float *)&dword_140404A6C[73006987] < 1.0;
}

