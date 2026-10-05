/* Address: 0x1400895c0 | Name: sub_1400895C0 | Size: 2177 bytes */
_BOOL8 __fastcall sub_1400895C0(int a1, float *a2, float *a3)
{
  __int64 v4; // rax
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14; // edi
  __int64 v15; // r12
  __int64 v16; // r15
  int *v17; // rbx
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm14_4
  float v21; // xmm15_4
  __int64 v22; // rcx
  float v23; // xmm3_4
  float v24; // xmm1_4
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm11_4
  float v29; // xmm12_4
  float v30; // xmm10_4
  float v31; // xmm11_4
  float v32; // xmm12_4
  float v33; // xmm6_4
  float v34; // xmm8_4
  float v35; // xmm9_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm8_4
  float v39; // xmm9_4
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  float v46; // xmm5_4
  float v47; // xmm1_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  __int64 v50; // rcx
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm1_4
  float v54; // xmm3_4
  float v55; // xmm5_4
  float v56; // xmm4_4
  float v57; // xmm10_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm6_4
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rdx
  float v68; // xmm5_4
  float v69; // xmm1_4
  float v70; // xmm4_4
  float v71; // xmm3_4
  float v73; // [rsp+40h] [rbp-C0h] BYREF
  float v74; // [rsp+44h] [rbp-BCh]
  float v75; // [rsp+48h] [rbp-B8h]
  __int64 v76; // [rsp+50h] [rbp-B0h] BYREF
  float v77; // [rsp+58h] [rbp-A8h]
  __int64 v78; // [rsp+60h] [rbp-A0h] BYREF
  float v79; // [rsp+68h] [rbp-98h]
  float v80; // [rsp+70h] [rbp-90h] BYREF
  __int64 v81; // [rsp+74h] [rbp-8Ch]
  float v82[4]; // [rsp+80h] [rbp-80h] BYREF
  float v83; // [rsp+170h] [rbp+70h] BYREF
  float v84; // [rsp+178h] [rbp+78h]

  v4 = 5210LL * a1;
  v6 = *(float *)&dword_16E6A3D10[v4];
  if ( *a2 < v6 && v6 > *a3 )
    return 0;
  v7 = a2[1];
  v8 = *(float *)&dword_16E6A3D14[v4];
  if ( v7 < v8 && v8 > a3[1] )
    return 0;
  v9 = a2[2];
  v10 = *(float *)&dword_16E6A3D18[v4];
  if ( v9 < v10 && v10 > a3[2] )
    return 0;
  v11 = *(float *)&dword_16E6A3D1C[v4];
  if ( *a2 > v11 && v11 < *a3 )
    return 0;
  v12 = *(float *)&dword_16E6A3D20[v4];
  if ( v7 > v12 && v12 < a3[1] )
    return 0;
  v13 = *(float *)&dword_16E6A3D24[v4];
  if ( v9 > v13 && v13 < a3[2] )
    return 0;
  v14 = 0;
  v15 = 180288LL * dword_16E6A3C64[v4];
  dword_16E18CA58 = 1065353216;
  if ( *(int *)((char *)&unk_143DADAF8 + v15) <= 0 )
    return 0;
  v16 = 5210LL * a1;
  v17 = (int *)((char *)&unk_143DADB04 + v15);
  do
  {
    v18 = 60LL * dword_16E6A3D50[v16 + *v17];
    v19 = *(float *)&dword_16E18CAF4[v18 + 2];
    v20 = *(float *)&dword_16E18CAF4[v18];
    v21 = *(float *)&dword_16E18CAF4[v18 + 1];
    v22 = 60LL * dword_16E6A3D50[v16 + v17[1]];
    v84 = v19;
    v82[2] = v19;
    v82[0] = v20;
    v82[1] = v21;
    v23 = *(float *)&dword_16E18CAF4[v22];
    v24 = *(float *)&dword_16E18CAF4[v22 + 2];
    v25 = dword_16E6A3D50[v16 + v17[2]];
    HIDWORD(v78) = dword_16E18CAF4[v22 + 1];
    v79 = v24;
    v26 = v24 - v19;
    *(float *)&v78 = v23;
    v27 = v23 - v20;
    v28 = *(float *)&dword_16E18CAF4[60 * v25 + 2];
    v29 = *(float *)&dword_16E18CAF4[60 * v25];
    HIDWORD(v76) = dword_16E18CAF4[60 * v25 + 1];
    v30 = *((float *)&v76 + 1) - v21;
    v77 = v28;
    v31 = v28 - v19;
    *(float *)&v76 = v29;
    v32 = v29 - v20;
    v33 = (float)((float)(*((float *)&v76 + 1) - v21) * v26) - (float)(v31 * (float)(*((float *)&v78 + 1) - v21));
    v34 = (float)(v31 * v27) - (float)(v32 * v26);
    v35 = (float)(v32 * (float)(*((float *)&v78 + 1) - v21)) - (float)((float)(*((float *)&v76 + 1) - v21) * v27);
    v36 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
    if ( v36 == 0.0 )
    {
      v73 = 0.0;
      v37 = 0.0;
      v74 = 0.0;
      v38 = 0.0;
      v75 = 0.0;
      v39 = 0.0;
    }
    else
    {
      v37 = v33 * (float)(1.0 / v36);
      v38 = v34 * (float)(1.0 / v36);
      v39 = v35 * (float)(1.0 / v36);
      v73 = v37;
      v74 = v38;
      v75 = v39;
    }
    if ( sub_140048690(&v80, &v73, &v83, a2, a3, v82, (float *)&v78, (float *)&v76) && v83 < *(float *)&dword_16E18CA58 )
    {
      v40 = v16 + *v17;
      flt_16E18CA40 = v80;
      qword_16E18CA44 = v81;
      dword_16E18CA74 = dword_16E6A3D50[v40];
      v41 = v16 + v17[1];
      *(float *)&qword_16E18CA4C = v37;
      *((float *)&qword_16E18CA4C + 1) = v38;
      dword_16E18CA54 = LODWORD(v39);
      dword_16E18CA58 = LODWORD(v83);
      dword_16E18CA78 = dword_16E6A3D50[v41];
      v42 = v17[2];
      dword_16E18CA70 = v14;
      dword_16E18CA7C = dword_16E6A3D50[v16 + v42];
      sub_140020140((float *)&dword_16E18CA84, &flt_16E18CA40, v82, (float *)&v78, (float *)&v76);
      v43 = 240LL * dword_16E18CA74;
      v44 = 240LL * dword_16E18CA78;
      v45 = 240LL * dword_16E18CA7C;
      v46 = (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v44 + 8))
          + (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v43 + 8));
      v47 = *(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v45 + 4);
      v48 = *(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v45 + 8);
      v49 = (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v44 + 4))
          + (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v43 + 4));
      *(float *)&qword_16E18CA60 = (float)((float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v44))
                                         + (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v43)))
                                 + (float)(*(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v45));
      *(float *)&dword_16E18CA68 = v46 + v48;
      *((float *)&qword_16E18CA60 + 1) = v49 + v47;
    }
    if ( *(v17 - 1) == 4 )
    {
      v78 = v76;
      v79 = v77;
      v50 = 60LL * dword_16E6A3D50[v16 + v17[3]];
      v51 = *(float *)&dword_16E18CAF4[v50 + 2];
      v52 = *(float *)&dword_16E18CAF4[v50 + 1];
      LODWORD(v76) = dword_16E18CAF4[v50];
      v77 = v51;
      v53 = v51 - v84;
      *((float *)&v76 + 1) = v52;
      v54 = v52 - v21;
      v55 = (float)(v32 * v53) - (float)(v31 * (float)(*(float *)&v76 - v20));
      v56 = (float)(v31 * v54) - (float)(v30 * v53);
      v57 = (float)(v30 * (float)(*(float *)&v76 - v20)) - (float)(v32 * v54);
      v58 = fsqrt((float)((float)(v55 * v55) + (float)(v56 * v56)) + (float)(v57 * v57));
      if ( v58 == 0.0 )
      {
        v73 = 0.0;
        v59 = 0.0;
        v74 = 0.0;
        v60 = 0.0;
        v75 = 0.0;
        v61 = 0.0;
      }
      else
      {
        v59 = (float)(1.0 / v58) * v56;
        v60 = (float)(1.0 / v58) * v55;
        v61 = (float)(1.0 / v58) * v57;
        v73 = v59;
        v74 = v60;
        v75 = v61;
      }
      if ( sub_140048690(&v80, &v73, &v83, a2, a3, v82, (float *)&v78, (float *)&v76)
        && v83 < *(float *)&dword_16E18CA58 )
      {
        v62 = v16 + *v17;
        flt_16E18CA40 = v80;
        qword_16E18CA44 = v81;
        dword_16E18CA74 = dword_16E6A3D50[v62];
        v63 = v16 + v17[2];
        *(float *)&qword_16E18CA4C = v59;
        *((float *)&qword_16E18CA4C + 1) = v60;
        dword_16E18CA54 = LODWORD(v61);
        dword_16E18CA58 = LODWORD(v83);
        dword_16E18CA78 = dword_16E6A3D50[v63];
        v64 = v17[3];
        dword_16E18CA70 = v14;
        dword_16E18CA7C = dword_16E6A3D50[v16 + v64];
        sub_140020140((float *)&dword_16E18CA84, &flt_16E18CA40, v82, (float *)&v78, (float *)&v76);
        v65 = 240LL * dword_16E18CA74;
        v66 = 240LL * dword_16E18CA78;
        v67 = 240LL * dword_16E18CA7C;
        v68 = (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v66 + 8))
            + (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v65 + 8));
        v69 = *(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v67 + 4);
        v70 = *(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v67 + 8);
        v71 = (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v66 + 4))
            + (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v65 + 4));
        *(float *)&qword_16E18CA60 = (float)((float)(*(float *)&dword_16E18CA88
                                                   * *(float *)((char *)&unk_16E18CB0C + v66))
                                           + (float)(*(float *)&dword_16E18CA84
                                                   * *(float *)((char *)&unk_16E18CB0C + v65)))
                                   + (float)(*(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v67));
        *(float *)&dword_16E18CA68 = v68 + v70;
        *((float *)&qword_16E18CA60 + 1) = v71 + v69;
      }
    }
    ++v14;
    v17 += 6;
  }
  while ( v14 < *(_DWORD *)((char *)&unk_143DADAF8 + v15) );
  return *(float *)&dword_16E18CA58 < 1.0;
}

