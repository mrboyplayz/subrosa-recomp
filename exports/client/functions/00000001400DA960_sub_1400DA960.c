/* Address: 0x1400da960 | Name: sub_1400DA960 | Size: 950 bytes */
_BOOL8 __fastcall sub_1400DA960(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  int v5; // eax
  float *v9; // r12
  __int64 v10; // r15
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  __int64 v25; // rax
  float v26; // xmm8_4
  float v27; // xmm4_4
  float v28; // xmm8_4
  float v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm3_4
  float v34; // xmm9_4
  float v35; // xmm8_4
  float v36; // xmm7_4
  bool v37; // zf
  __int64 v38; // rax
  float v39; // xmm1_4
  float v40; // xmm2_4
  int v41; // xmm1_4
  float v42; // xmm2_4
  int v43; // xmm1_4
  int v45; // [rsp+48h] [rbp-C0h]
  float v46[2]; // [rsp+50h] [rbp-B8h] BYREF
  float v47; // [rsp+58h] [rbp-B0h]
  int v48; // [rsp+60h] [rbp-A8h] BYREF
  int v49; // [rsp+64h] [rbp-A4h]
  int v50; // [rsp+68h] [rbp-A0h]
  float v51[2]; // [rsp+70h] [rbp-98h] BYREF
  float v52; // [rsp+78h] [rbp-90h]
  float v53[4]; // [rsp+80h] [rbp-88h] BYREF
  float v54[4]; // [rsp+90h] [rbp-78h] BYREF
  float v55[4]; // [rsp+A0h] [rbp-68h] BYREF
  float v56; // [rsp+158h] [rbp+50h] BYREF
  __int64 v57; // [rsp+160h] [rbp+58h]

  v57 = a2;
  v5 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v45 = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v9 = a5;
  v10 = a2 + 48;
  do
  {
    v11 = 0;
    if ( *(int *)v10 > 0 )
    {
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(v10 + 8);
        v14 = 3 * *(_DWORD *)(v13 + v12 + 8);
        v15 = *(float *)(a3 + 4 * v14);
        v16 = *(float *)(a3 + 4 * v14 + 4);
        v17 = *(float *)(a3 + 4 * v14 + 8);
        LODWORD(v14) = *(_DWORD *)(v13 + v12 + 12);
        v53[0] = v15;
        v53[2] = v17;
        v53[1] = v16;
        v18 = 3 * (int)v14;
        v19 = *(float *)(a3 + 4 * v18 + 8);
        v20 = *(float *)(a3 + 4 * v18);
        v21 = *(float *)(a3 + 4 * v18 + 4);
        LODWORD(v18) = *(_DWORD *)(v13 + v12 + 16);
        v54[2] = v19;
        v22 = v19 - v17;
        v54[1] = v21;
        v23 = v21 - v16;
        v54[0] = v20;
        v24 = v20 - v15;
        v25 = 3 * (int)v18;
        v26 = *(float *)(a3 + 4 * v25);
        v27 = *(float *)(a3 + 4 * v25 + 4);
        v52 = *(float *)(a3 + 4 * v25 + 8);
        v51[0] = v26;
        v28 = v26 - v15;
        v51[1] = v27;
        v29 = v27 - v16;
        v30 = (float)(v29 * v22) - (float)((float)(v52 - v17) * v23);
        v31 = (float)((float)(v52 - v17) * v24) - (float)(v28 * v22);
        v32 = (float)(v28 * v23) - (float)(v29 * v24);
        v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
        if ( v33 == 0.0 )
        {
          v46[0] = 0.0;
          v34 = 0.0;
          v47 = 0.0;
          v36 = 0.0;
          v35 = 0.0;
        }
        else
        {
          v34 = v30 * (float)(1.0 / v33);
          v35 = v32 * (float)(1.0 / v33);
          v46[0] = v34;
          v36 = v31 * (float)(1.0 / v33);
          v47 = v35;
        }
        v37 = *(_DWORD *)(v13 + v12 + 4) == 4;
        v46[1] = v36;
        if ( v37 )
        {
          v38 = 3 * *(_DWORD *)(v13 + v12 + 20);
          v39 = *(float *)(a3 + 4 * v38 + 4);
          v55[0] = *(float *)(a3 + 4 * v38);
          v55[2] = *(float *)(a3 + 4 * v38 + 8);
          v55[1] = v39;
        }
        if ( sub_140077FA0((float *)&v48, v46, &v56, a4, v9, v53, v54, v51) )
        {
          v40 = v56;
          if ( v56 < *(float *)(a1 + 24) )
          {
            v41 = v49;
            *(_DWORD *)a1 = v48;
            *(_DWORD *)(a1 + 8) = v50;
            *(_DWORD *)(a1 + 4) = v41;
            *(float *)(a1 + 12) = v34;
            *(float *)(a1 + 16) = v36;
            *(float *)(a1 + 20) = v35;
            *(float *)(a1 + 24) = v40;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 8) + v12 + 4) == 4
          && sub_140077FA0((float *)&v48, v46, &v56, a4, v9, v53, v51, v55) )
        {
          v42 = v56;
          if ( v56 < *(float *)(a1 + 24) )
          {
            v43 = v49;
            *(_DWORD *)a1 = v48;
            *(_DWORD *)(a1 + 8) = v50;
            *(_DWORD *)(a1 + 4) = v43;
            *(float *)(a1 + 12) = v34;
            *(float *)(a1 + 16) = v36;
            *(float *)(a1 + 20) = v35;
            *(float *)(a1 + 24) = v42;
          }
        }
        ++v11;
        v12 += 36;
      }
      while ( v11 < *(_DWORD *)v10 );
      v5 = v45;
      a2 = v57;
    }
    ++v5;
    v10 += 56;
    v45 = v5;
  }
  while ( v5 < *(_DWORD *)(a2 + 16) );
  return *(float *)(a1 + 24) < 1.0;
}

