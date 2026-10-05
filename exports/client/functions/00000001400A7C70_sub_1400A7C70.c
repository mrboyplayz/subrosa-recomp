/* Address: 0x1400a7c70 | Name: sub_1400A7C70 | Size: 1854 bytes */
__int64 __fastcall sub_1400A7C70(int a1, float a2, float a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  float *v5; // r14
  __int64 v6; // r12
  float *v7; // rsi
  float *v8; // rdi
  char *v9; // r15
  __int64 v10; // rax
  float v11; // xmm15_4
  float v12; // xmm0_4
  float v13; // xmm10_4
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm11_4
  float v17; // xmm13_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm12_4
  float v21; // xmm10_4
  float v22; // xmm14_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm11_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm11_4
  float v36; // xmm0_4
  float *v37; // r13
  float *v38; // r12
  int v39; // esi
  __int64 v40; // rcx
  unsigned int *v41; // rdx
  float v42; // xmm1_4
  float v43; // xmm5_4
  __int64 v44; // rcx
  int v45; // r14d
  float v46; // xmm9_4
  float v47; // xmm11_4
  float v48; // xmm8_4
  float v49; // xmm12_4
  float v50; // xmm7_4
  float v51; // xmm15_4
  float v52; // xmm14_4
  __int64 v53; // rdx
  __int64 v54; // r8
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm4_4
  float v58; // xmm6_4
  float v59; // xmm10_4
  float v60; // xmm13_4
  char v61; // di
  __int64 v62; // rbx
  float v63; // xmm2_4
  float v64; // xmm1_4
  float v65; // xmm3_4
  float v66; // xmm3_4
  float v67; // xmm0_4
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rax
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm3_4
  float v74; // xmm4_4
  float v75; // xmm3_4
  float v76; // xmm4_4
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // r8
  float v80; // xmm0_4
  __int64 v82; // [rsp+8h] [rbp-100h] BYREF
  float v83; // [rsp+38h] [rbp-D0h]
  float v84; // [rsp+40h] [rbp-C8h] BYREF
  float v85; // [rsp+44h] [rbp-C4h]
  __int64 v86; // [rsp+48h] [rbp-C0h]
  __int64 v87; // [rsp+50h] [rbp-B8h]
  float v88; // [rsp+58h] [rbp-B0h]
  float v89; // [rsp+5Ch] [rbp-ACh]
  __int64 v90; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v91; // [rsp+68h] [rbp-A0h]
  _OWORD v92[2]; // [rsp+70h] [rbp-98h] BYREF
  int v93; // [rsp+90h] [rbp-78h]
  __int64 v94; // [rsp+98h] [rbp-70h] BYREF
  float v95[3]; // [rsp+A0h] [rbp-68h]
  char v96; // [rsp+ACh] [rbp-5Ch] BYREF
  float v97[9]; // [rsp+158h] [rbp+50h] BYREF
  char v98; // [rsp+17Ch] [rbp+74h] BYREF
  char v99; // [rsp+184h] [rbp+7Ch] BYREF
  __int64 v100; // [rsp+398h] [rbp+290h]

  v3 = a1;
  *(float *)&v90 = a3;
  v89 = a2;
  v92[0] = xmmword_140278D30;
  v94 = 0;
  v95[0] = 0.0;
  v92[1] = xmmword_140278D30;
  v93 = 1065353216;
  v91 = 28664LL * a1;
  sub_14007B2A0((__int64)v92, (float *)v92 + 3);
  v3 *= 1376;
  sub_14007AE70(v97, (float *)v92, (float *)((char *)&dword_140404A6C[284956347] + v3));
  v4 = 0x140000000LL + v3 + 1144038864;
  v5 = (float *)&v96;
  v6 = 15;
  v7 = (float *)&v99;
  v8 = (float *)&dword_140404A6C[282486075];
  v9 = &v98;
  do
  {
    v10 = *((int *)v8 - 5);
    v11 = *v8;
    *(float *)&v87 = *(v8 - 1);
    v12 = v97[9 * v10 + 2];
    v13 = *(float *)&v87 * v97[9 * v10 + 1];
    v14 = (float)(*(float *)&v87 * v97[9 * v10]) + v95[3 * v10 - 2];
    v15 = v97[9 * v10 + 3];
    v16 = v97[9 * v10 + 4];
    v17 = v97[9 * v10 + 5];
    v18 = v97[9 * v10 + 6];
    v19 = v97[9 * v10 + 7];
    v20 = v97[9 * v10 + 8];
    *(v5 - 2) = v14;
    v21 = v13 + v95[3 * v10 - 1];
    v88 = v12;
    v83 = v8[1];
    *(v5 - 1) = v21;
    v22 = v95[3 * v10];
    sub_14007A010((__int64)v9, v4, (__int64)&v97[9 * v10]);
    v23 = *(v8 - 4) - *(v8 - 1);
    v24 = *(v8 - 3) - *v8;
    v25 = *(v8 - 2) - v8[1];
    v26 = v83 * v20;
    v27 = v24 * v7[2];
    v28 = (float)((float)((float)((float)((float)(v15 * v11) + v14) + (float)(v83 * v18)) + (float)(v23 * *(v7 - 2)))
                + (float)(v24 * v7[1]))
        + (float)(v25 * v7[4]);
    v29 = v24 * v7[3];
    v30 = v23 * *(v7 - 1);
    v31 = v23 * *v7;
    v32 = (float)((float)((float)(v16 * v11) + v21) + (float)(v83 * v19)) + v30;
    *(v5 - 2) = v28;
    v33 = v25;
    v34 = v25 * v7[6];
    v35 = v32 + v27;
    v36 = (float)((float)(v88 * *(float *)&v87) + v22) + (float)(v17 * v11);
    *(v5 - 1) = v35 + (float)(v33 * v7[5]);
    *v5 = (float)((float)((float)(v36 + v26) + v31) + v29) + v34;
    v4 += 84;
    v9 += 36;
    v8 += 25;
    v7 += 9;
    v5 += 3;
    --v6;
  }
  while ( v6 );
  v37 = (float *)&v94;
  v38 = (float *)&dword_140404A6C[282486068];
  *(float *)&v39 = 0.0;
  v40 = 0;
  v83 = 0.0;
  v87 = 0;
  LODWORD(v86) = 0;
  do
  {
    if ( (unsigned int)v39 > 2 )
    {
      if ( v39 == 3 )
      {
        v41 = &dword_140404A6C[280658304];
      }
      else if ( (unsigned int)(v39 - 4) > 2 )
      {
        if ( (unsigned int)(v39 - 7) > 2 )
        {
          v41 = &dword_140404A6C[280658310];
          if ( (unsigned int)(v39 - 10) > 2 )
            v41 = &dword_140404A6C[280658312];
        }
        else
        {
          v41 = &dword_140404A6C[280658308];
        }
      }
      else
      {
        v41 = &dword_140404A6C[280658306];
      }
    }
    else
    {
      v41 = &dword_140404A6C[280658302];
    }
    v42 = *v38 * -0.5;
    v43 = *v38 * 0.5;
    v44 = 3 * (v40 + *((int *)v38 - 1));
    v45 = v41[v91 / 4];
    v46 = v38[1] * 64.0;
    v47 = *(float *)&v90 - (float)((float)((float)(v97[v44 + 1] * v42) + v37[1]) * 64.0);
    v48 = (float)((float)((float)(v97[v44] * v42) + *v37) * 64.0) + v89;
    v49 = *(float *)&v90 - (float)((float)((float)(v97[v44 + 1] * v43) + v37[1]) * 64.0);
    v50 = (float)((float)((float)(v97[v44] * v43) + *v37) * 64.0) + v89;
    if ( v45 >= 50 )
    {
      v51 = (float)(v45 - 50) * 0.02;
      v52 = 1.0;
    }
    else
    {
      v51 = 0.0;
      v52 = (float)v45 * 0.02;
    }
    unk_140404050(3553, dword_140404A6C[451221642]);
    *(float *)&dword_140404A6C[456807034] = v52;
    *(float *)&dword_140404A6C[456807035] = v51;
    v55 = v50 - v48;
    dword_140404A6C[456807033] = 1065353216;
    v56 = v49 - v47;
    dword_140404A6C[456807036] = 1056964608;
    v57 = fsqrt((float)(v56 * v56) + (float)(v55 * v55));
    if ( v57 == 0.0 )
    {
      v59 = 0.0;
      v58 = 0.0;
    }
    else
    {
      v58 = (float)(1.0 / v57) * v56;
      v59 = (float)(1.0 / v57) * v55;
    }
    dword_140404A6C[456217205] = 2;
    v60 = -v59;
    v61 = 0;
    dword_140404A6C[456217207] = 0;
    v62 = 0;
    dword_140404A6C[456217208] = 9;
    do
    {
      v63 = v46 * *(float *)&dword_140404A6C[2 * v62 + 346696314];
      v64 = v46 * *(float *)&dword_140404A6C[2 * v62 + 346696315];
      v65 = (float)(v59 * v64) + (float)(v58 * v63);
      if ( (unsigned __int64)v62 >= 0x20 )
      {
        v66 = v65 + v48;
        v67 = v47;
      }
      else
      {
        v66 = v65 + v50;
        v67 = v49;
      }
      v84 = v66;
      v85 = v67 + (float)((float)(v58 * v64) + (float)(v60 * v63));
      sub_14007D520((unsigned int *)&v84, v53, v54);
      v70 = ++v61 & 0x3F;
      v71 = v46 * *(float *)&dword_140404A6C[2 * v70 + 346696314];
      v72 = v46 * *(float *)&dword_140404A6C[2 * v70 + 346696315];
      v73 = (float)(v59 * v72) + (float)(v58 * v71);
      v74 = (float)(v58 * v72) + (float)(v60 * v71);
      if ( (v61 & 0x3Fu) >= 0x20 )
      {
        v75 = v73 + v48;
        v76 = v74 + v47;
      }
      else
      {
        v75 = v73 + v50;
        v76 = v74 + v49;
      }
      v85 = v76;
      v84 = v75;
      sub_14007D520((unsigned int *)&v84, v68, v69);
      ++v62;
    }
    while ( v62 < 64 );
    sub_14006E0D0(v77, v53, v54);
    if ( dword_140404A6C[v91 / 4 + 280658301] && v45 > 87 )
    {
      v45 = 87;
      v52 = 0.0;
      v51 = 0.0;
    }
    else
    {
      if ( v45 >= 100 )
        goto LABEL_36;
      if ( v45 < 50 )
      {
        v80 = 1.0;
        goto LABEL_35;
      }
    }
    v80 = (float)(100 - v45) * 0.02;
LABEL_35:
    *(float *)&dword_140404A6C[456807036] = v80;
    *(float *)&dword_140404A6C[456807034] = v52;
    *(float *)&dword_140404A6C[456807035] = v51;
    dword_140404A6C[456807033] = 1065353216;
    sub_1400A77C0(v48, v78, v79, v49, v46);
LABEL_36:
    v40 = v87 + 3;
    v39 = LODWORD(v83) + 1;
    v38 += 25;
    v83 = *(float *)&v39;
    v37 += 3;
    v87 += 3;
  }
  while ( v39 < 16 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v82 ^ v100);
}

