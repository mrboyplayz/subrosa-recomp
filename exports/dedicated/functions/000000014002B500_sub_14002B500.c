/* Address: 0x14002b500 | Name: sub_14002B500 | Size: 896 bytes */
_BOOL8 __fastcall sub_14002B500(_DWORD *a1, __int64 a2, float *a3, float *a4, __int64 a5, int a6, float a7, int a8)
{
  __int64 v9; // rcx
  int v11; // r13d
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rdx
  int *v18; // r15
  __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  __int64 v25; // rax
  __int64 v26; // rax
  float v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm4_4
  float v35; // xmm7_4
  float v36; // xmm8_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  __int64 v44; // [rsp+58h] [rbp-99h] BYREF
  float v45; // [rsp+60h] [rbp-91h]
  float v46; // [rsp+68h] [rbp-89h] BYREF
  float v47; // [rsp+6Ch] [rbp-85h]
  float v48; // [rsp+70h] [rbp-81h]
  _DWORD v49[4]; // [rsp+78h] [rbp-79h] BYREF
  float v50[4]; // [rsp+88h] [rbp-69h] BYREF
  _DWORD v51[6]; // [rsp+98h] [rbp-59h] BYREF
  __int64 v52; // [rsp+150h] [rbp+5Fh]

  v9 = SLODWORD(a7);
  v11 = (int)a4;
  v12 = 61728LL * SLODWORD(a7);
  if ( fabs(*a4 - *(float *)((char *)&unk_14BC53360 + v12 + 8)) > 64.0 )
    return 0;
  if ( fabs(a4[2] - *(float *)((char *)&unk_14BC53360 + v12 + 16)) > 64.0 )
    return 0;
  if ( fabs(a4[1] - *(float *)((char *)&unk_14BC53360 + v12 + 12)) > 64.0 )
    return 0;
  v14 = a8;
  *a3 = 65536.0;
  v15 = v14 + 15432 * v9;
  v16 = *((int *)&unk_14BC53360 + v15 + 3079);
  if ( (int)v16 >= *((_DWORD *)&unk_14BC53360 + v15 + 3083) )
    return 0;
  v17 = 5144 * v9;
  v52 = 5144 * v9;
  v18 = (int *)((char *)&unk_14BC53360 + 41152 * v9 + 20576 * v9 + 8 * v16 + 4 * v16 + 12352);
  do
  {
    v19 = v17 + *v18;
    v20 = *((float *)&unk_14BC53360 + 3 * v17 + 3 * *(v18 - 1) + 7);
    v21 = *((float *)&unk_14BC53360 + 3 * v17 + 3 * *(v18 - 1) + 8);
    v50[0] = *((float *)&unk_14BC53360 + 3 * v17 + 3 * *(v18 - 1) + 6);
    v50[1] = v20;
    v22 = *((float *)&unk_14BC53360 + 3 * v19 + 8);
    v23 = *((float *)&unk_14BC53360 + 3 * v19 + 6);
    v24 = *((float *)&unk_14BC53360 + 3 * v19 + 7);
    v25 = v18[1];
    *(float *)&v49[2] = v22;
    v26 = v17 + v25;
    v27 = v22 - v21;
    v50[2] = v21;
    *(float *)&v49[1] = v24;
    v28 = v24 - v20;
    *(float *)v49 = v23;
    v29 = v23 - v50[0];
    v30 = *((float *)&unk_14BC53360 + 3 * v26 + 8);
    v31 = *((float *)&unk_14BC53360 + 3 * v26 + 6);
    v47 = *((float *)&unk_14BC53360 + 3 * v26 + 7);
    v48 = v30;
    v32 = v30 - v21;
    v46 = v31;
    v33 = v31 - v50[0];
    v34 = (float)((float)(v47 - v20) * v27) - (float)(v32 * v28);
    v35 = (float)(v32 * v29) - (float)(v33 * v27);
    v36 = (float)(v33 * v28) - (float)((float)(v47 - v20) * v29);
    v37 = fsqrt((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
    if ( v37 == 0.0 )
    {
      v44 = 0;
      v45 = 0.0;
    }
    else
    {
      *(float *)&v44 = v34 * (float)(1.0 / v37);
      *((float *)&v44 + 1) = v35 * (float)(1.0 / v37);
      v45 = v36 * (float)(1.0 / v37);
    }
    if ( (unsigned int)sub_14002B880(
                         (unsigned int)v51,
                         (unsigned int)&v44,
                         (unsigned int)&a7,
                         v11,
                         a5,
                         a6,
                         (__int64)v50,
                         (__int64)v49,
                         (__int64)&v46) )
    {
      v38 = a7;
      if ( a7 < *a3 )
      {
        v39 = v51[1];
        *a1 = v51[0];
        v40 = v51[2];
        a1[1] = v39;
        v41 = v44;
        a1[2] = v40;
        v42 = HIDWORD(v44);
        *(_DWORD *)a2 = v41;
        *(float *)(a2 + 8) = v45;
        *(_DWORD *)(a2 + 4) = v42;
        *a3 = v38;
      }
    }
    v17 = v52;
    LODWORD(v16) = v16 + 1;
    v18 += 3;
  }
  while ( (int)v16 < *((_DWORD *)&unk_14BC53360 + v15 + 3083) );
  return *a3 < 65536.0;
}

