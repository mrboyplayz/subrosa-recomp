/* Address: 0x140085e30 | Name: sub_140085E30 | Size: 778 bytes */
_BOOL8 __fastcall sub_140085E30(float *a1, float *a2, int a3, int a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r12
  int *v9; // rdi
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
  float v40; // [rsp+88h] [rbp-39h] BYREF
  __int64 v41; // [rsp+8Ch] [rbp-35h]
  float v42; // [rsp+138h] [rbp+77h] BYREF

  dword_16E18CA58 = 1065353216;
  v6 = a4 + 15432LL * a3;
  v7 = *((int *)&unk_14BC53360 + v6 + 3079);
  if ( (int)v7 >= *((_DWORD *)&unk_14BC53360 + v6 + 3083) )
    return 0;
  v8 = 5144LL * a3;
  v9 = (int *)((char *)&unk_14BC563A0 + 12 * v8 + 12 * v7);
  do
  {
    v10 = v8 + *v9;
    v11 = *((float *)&unk_14BC53360 + 3 * v8 + 3 * *(v9 - 1) + 7);
    v12 = *((float *)&unk_14BC53360 + 3 * v8 + 3 * *(v9 - 1) + 8);
    v39[0] = *((float *)&unk_14BC53360 + 3 * v8 + 3 * *(v9 - 1) + 6);
    v39[1] = v11;
    v13 = *((float *)&unk_14BC53360 + 3 * v10 + 8);
    v14 = *((float *)&unk_14BC53360 + 3 * v10 + 6);
    v15 = *((float *)&unk_14BC53360 + 3 * v10 + 7);
    v16 = v9[1];
    v38[2] = v13;
    v17 = v8 + v16;
    v18 = v13 - v12;
    v38[1] = v15;
    v19 = v15 - v11;
    v38[0] = v14;
    v20 = v14 - v39[0];
    v39[2] = v12;
    v21 = *((float *)&unk_14BC53360 + 3 * v17 + 8);
    v22 = *((float *)&unk_14BC53360 + 3 * v17 + 6);
    v36 = *((float *)&unk_14BC53360 + 3 * v17 + 7);
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
    if ( sub_140048690(&v40, v33, &v42, a1, a2, v39, v38, &v35) && v42 < *(float *)&dword_16E18CA58 )
    {
      flt_16E18CA40 = v40;
      qword_16E18CA44 = v41;
      *(float *)&qword_16E18CA4C = v29;
      *((float *)&qword_16E18CA4C + 1) = v31;
      dword_16E18CA54 = LODWORD(v30);
      dword_16E18CA58 = LODWORD(v42);
    }
    LODWORD(v7) = v7 + 1;
    v9 += 3;
  }
  while ( (int)v7 < *((_DWORD *)&unk_14BC53360 + v6 + 3083) );
  return *(float *)&dword_16E18CA58 < 1.0;
}

