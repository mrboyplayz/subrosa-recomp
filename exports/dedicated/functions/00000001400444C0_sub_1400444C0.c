/* Address: 0x1400444c0 | Name: sub_1400444C0 | Size: 3258 bytes */
__int64 __fastcall sub_1400444C0(int a1, float *a2, float a3, float a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r11
  __int64 v7; // rax
  float v8; // xmm3_4
  float v9; // xmm3_4
  float v10; // xmm3_4
  float v11; // xmm8_4
  float v12; // xmm10_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm12_4
  float v16; // xmm2_4
  float v17; // xmm13_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  float v23; // xmm11_4
  float v24; // xmm0_4
  float v25; // xmm11_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm12_4
  float v29; // xmm13_4
  float v30; // xmm2_4
  float v31; // xmm6_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float v37; // xmm8_4
  float v38; // xmm10_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm10_4
  float v48; // xmm8_4
  float v49; // xmm2_4
  float v50; // xmm8_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm13_4
  float v58; // xmm6_4
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm5_4
  float v62; // xmm1_4
  float v63; // xmm5_4
  float v64; // xmm6_4
  __int64 v65; // r8
  __int64 v66; // rbx
  __int64 v67; // rax
  float v68; // xmm4_4
  float v69; // xmm3_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm5_4
  int v73; // edx
  float v74; // xmm9_4
  float v75; // xmm8_4
  float v76; // xmm10_4
  float v77; // xmm11_4
  float v78; // xmm12_4
  float v79; // xmm13_4
  float v80; // xmm3_4
  float v81; // xmm2_4
  float v82; // xmm4_4
  __int64 v83; // rcx
  int i; // esi
  int v85; // edi
  __int64 v86; // r14
  int v87; // r10d
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // r8d
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  int v95; // edx
  __int64 v96; // rcx
  __int64 result; // rax
  float v99; // [rsp+28h] [rbp-E0h]
  float v100; // [rsp+2Ch] [rbp-DCh]
  float v101; // [rsp+30h] [rbp-D8h]
  float v102; // [rsp+34h] [rbp-D4h]
  float v103; // [rsp+38h] [rbp-D0h]
  float v104; // [rsp+40h] [rbp-C8h]
  float v105; // [rsp+44h] [rbp-C4h]
  float v106[12]; // [rsp+48h] [rbp-C0h]
  float v107; // [rsp+78h] [rbp-90h]
  int v108; // [rsp+7Ch] [rbp-8Ch]
  _DWORD v109[10]; // [rsp+80h] [rbp-88h]
  float v110; // [rsp+A8h] [rbp-60h]
  float v111; // [rsp+ACh] [rbp-5Ch]
  float v112[10]; // [rsp+B0h] [rbp-58h]
  float v113; // [rsp+D8h] [rbp-30h]
  float v114; // [rsp+DCh] [rbp-2Ch]
  _DWORD v115[10]; // [rsp+E0h] [rbp-28h]
  float v116; // [rsp+108h] [rbp+0h]
  int v117; // [rsp+10Ch] [rbp+4h]
  _DWORD v118[10]; // [rsp+110h] [rbp+8h]

  v4 = dword_15AD73360;
  v5 = 61728LL * dword_15AD73360;
  v7 = dword_15AD73360;
  *(_DWORD *)((char *)&unk_14BC53360 + v5) = a1;
  *(_DWORD *)((char *)&unk_14BC53360 + v5 + 20) = 0;
  *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312) = 0;
  v8 = a2[3] + *a2;
  *(float *)((char *)&unk_14BC53360 + v5 + 8) = v8;
  *(float *)((char *)&unk_14BC53360 + v5 + 12) = a2[4] + a2[1];
  *(float *)((char *)&unk_14BC53360 + v5 + 16) = a2[5] + a2[2];
  v9 = v8 + a2[6];
  *(float *)((char *)&unk_14BC53360 + v5 + 8) = v9;
  *(float *)((char *)&unk_14BC53360 + v5 + 12) = a2[7] + *(float *)((char *)&unk_14BC53360 + v5 + 12);
  *(float *)((char *)&unk_14BC53360 + v5 + 16) = a2[8] + *(float *)((char *)&unk_14BC53360 + v5 + 16);
  v10 = v9 + a2[9];
  *(float *)((char *)&unk_14BC53360 + v5 + 8) = v10;
  *(float *)((char *)&unk_14BC53360 + v5 + 12) = a2[10] + *(float *)((char *)&unk_14BC53360 + v5 + 12);
  *(float *)((char *)&unk_14BC53360 + v5 + 16) = a2[11] + *(float *)((char *)&unk_14BC53360 + v5 + 16);
  *(float *)((char *)&unk_14BC53360 + v5 + 8) = v10 * 0.25;
  *(float *)((char *)&unk_14BC53360 + v5 + 12) = *(float *)((char *)&unk_14BC53360 + v5 + 12) * 0.25;
  *(float *)((char *)&unk_14BC53360 + v5 + 16) = *(float *)((char *)&unk_14BC53360 + v5 + 16) * 0.25;
  v11 = a2[3];
  v12 = a2[5];
  v13 = a2[2];
  v14 = *a2;
  v15 = a2[9];
  v16 = v13 - v12;
  v17 = a2[11];
  v18 = v11 - *a2;
  v108 = *((_DWORD *)a2 + 1);
  v103 = a2[4];
  *(float *)&v109[8] = v103;
  *(float *)&v118[7] = a2[6];
  *(float *)&v118[8] = a2[7];
  *(float *)&v118[9] = a2[8];
  v117 = *((_DWORD *)a2 + 10);
  v107 = v14;
  *(float *)v109 = v13;
  v100 = v11;
  *(float *)&v109[7] = v11;
  v101 = v12;
  *(float *)&v109[9] = v12;
  v116 = v15;
  *(float *)v118 = v17;
  v19 = fsqrt((float)(v16 * v16) + (float)(v18 * v18));
  if ( v19 == 0.0 )
  {
    v21 = 0.0;
    v20 = 0.0;
  }
  else
  {
    v20 = (float)(1.0 / v19) * v18;
    v21 = (float)(1.0 / v19) * v16;
  }
  v22 = a2[6];
  v23 = a4 * 0.33333334;
  v24 = v23 + a2[1];
  v25 = v23 + a2[4];
  v26 = fsqrt((float)((float)(v17 - v13) * (float)(v17 - v13)) + (float)((float)(v15 - v14) * (float)(v15 - v14)))
      * 0.33333334;
  v102 = v24;
  v111 = v24;
  v27 = a2[8] - v12;
  v28 = (float)(v21 * v26) + v14;
  v112[8] = v25;
  v29 = (float)(v20 * v26) + v13;
  v110 = v28;
  v112[0] = v29;
  v30 = fsqrt((float)(v27 * v27) + (float)((float)(v22 - v11) * (float)(v22 - v11))) * 0.33333334;
  v31 = v20 * v30;
  v32 = (float)(v21 * v30) + v11;
  v33 = a2[9] - v22;
  v34 = a2[8] - a2[11];
  v35 = v31 + v12;
  v112[7] = v32;
  v112[9] = v35;
  v36 = fsqrt((float)(v34 * v34) + (float)(v33 * v33));
  if ( v36 == 0.0 )
  {
    v38 = 0.0;
    v37 = 0.0;
  }
  else
  {
    v37 = (float)(1.0 / v36) * v33;
    v38 = (float)(1.0 / v36) * v34;
  }
  v39 = a2[3] - a2[6];
  v99 = a3 * 0.33333334;
  v40 = a2[5] - a2[8];
  v41 = fsqrt((float)((float)(v13 - a2[11]) * (float)(v13 - a2[11])) + (float)((float)(v14 - a2[9])
                                                                             * (float)(v14 - a2[9])))
      * 0.33333334;
  v114 = a2[10] - v99;
  v42 = (float)(v38 * v41) + a2[9];
  v43 = (float)(v37 * v41) + a2[11];
  v44 = fsqrt((float)(v40 * v40) + (float)(v39 * v39)) * 0.33333334;
  v45 = (float)((float)(a2[3] - *a2) * 0.33333334) + *a2;
  *(float *)&v109[2] = (float)((float)(a2[4] - a2[1]) * 0.33333334) + a2[1];
  v46 = a2[2];
  v47 = (float)(v38 * v44) + a2[6];
  v48 = v37 * v44;
  v49 = a2[7] - v99;
  v50 = v48 + a2[8];
  *(float *)&v109[1] = v45;
  v51 = a2[5] - v46;
  v113 = v42;
  *(float *)v115 = v43;
  *(float *)&v115[7] = v47;
  *(float *)&v115[9] = v50;
  *(float *)&v115[8] = v49;
  *(float *)&v109[3] = (float)(v51 * 0.33333334) + v46;
  v52 = (float)((float)(*a2 - v100) * 0.33333334) + v100;
  *(float *)&v109[6] = (float)((float)(v46 - v101) * 0.33333334) + v101;
  v53 = a2[4] - a2[1];
  *(float *)&v109[4] = v52;
  *(float *)&v109[5] = (float)((float)(a2[1] - a2[4]) * 0.33333334) + a2[4];
  v112[1] = (float)((float)(v32 - v28) * 0.33333334) + v28;
  v112[2] = (float)(v53 * 0.33333334) + v102;
  v112[4] = (float)((float)(v28 - v32) * 0.33333334) + v32;
  v112[3] = (float)((float)(v35 - v29) * 0.33333334) + v29;
  v54 = a2[1] - v103;
  *(float *)&v115[2] = (float)((float)(v49 - v114) * 0.33333334) + v114;
  v55 = (float)((float)(v114 - v49) * 0.33333334) + v49;
  v56 = a2[9];
  v57 = (float)((float)(v29 - v35) * 0.33333334) + v35;
  v58 = a2[7];
  *(float *)&v115[5] = v55;
  v59 = a2[6];
  v112[6] = v57;
  v112[5] = (float)(v54 * 0.33333334) + v25;
  *(float *)&v115[1] = (float)((float)(v47 - v42) * 0.33333334) + v42;
  *(float *)&v115[4] = (float)((float)(v42 - v47) * 0.33333334) + v47;
  v60 = a2[8];
  *(float *)&v115[3] = (float)((float)(v50 - v43) * 0.33333334) + v43;
  *(float *)&v115[6] = (float)((float)(v43 - v50) * 0.33333334) + v50;
  v61 = a2[10];
  *(float *)&v118[1] = (float)((float)(v59 - v56) * 0.33333334) + v56;
  *(float *)&v118[4] = (float)((float)(v56 - v59) * 0.33333334) + v59;
  *(float *)&v118[2] = (float)((float)(v58 - v61) * 0.33333334) + v61;
  v62 = a2[11];
  v63 = (float)((float)(v61 - v58) * 0.33333334) + v58;
  v64 = 0.0;
  *(float *)&v118[5] = v63;
  *(float *)&v118[3] = (float)((float)(v60 - v62) * 0.33333334) + v62;
  *(float *)&v118[6] = (float)((float)(v62 - v60) * 0.33333334) + v60;
  v65 = 17;
  v66 = 5144 * v7;
  do
  {
    v67 = 0;
    v68 = 1.0 - v64;
    do
    {
      v69 = (float)((float)((float)(*(float *)&v115[v67 - 1] * 3.0) * v68) + (float)(v64 * *(float *)&v118[v67 - 1]))
          * v64;
      v70 = (float)(v112[v67 - 1] * 3.0) * (float)(v68 * v68);
      *(float *)((char *)&v104 + v67 * 4) = (float)((float)((float)((float)((float)((float)(*(float *)((char *)&v113 + v67 * 4)
                                                                                          * 3.0)
                                                                                  * v68)
                                                                          + (float)(v64
                                                                                  * *(float *)((char *)&v116 + v67 * 4)))
                                                                  * v64)
                                                          + (float)((float)(*(float *)((char *)&v110 + v67 * 4) * 3.0)
                                                                  * (float)(v68 * v68)))
                                                  * v64)
                                          + (float)((float)(v68 * v68)
                                                  * (float)(v68 * *(float *)((char *)&v107 + v67 * 4)));
      v71 = (float)((float)((float)((float)(*(float *)&v115[v67] * 3.0) * v68) + (float)(v64 * *(float *)&v118[v67]))
                  * v64)
          + (float)((float)(v112[v67] * 3.0) * (float)(v68 * v68));
      v106[v67 - 1] = (float)((float)(v69 + v70) * v64)
                    + (float)((float)(v68 * *(float *)&v109[v67 - 1]) * (float)(v68 * v68));
      v106[v67] = (float)(v71 * v64) + (float)((float)(v68 * *(float *)&v109[v67]) * (float)(v68 * v68));
      v67 += 3;
    }
    while ( v67 < 12 );
    v72 = 0.0;
    v73 = 0;
    v74 = v106[4] * 3.0;
    v75 = v106[1] * 3.0;
    v76 = v106[2] * 3.0;
    v77 = v106[5] * 3.0;
    v78 = v106[3] * 3.0;
    v79 = v106[6] * 3.0;
    do
    {
      v80 = (float)((float)((float)((float)((float)(v106[7] * v72) + (float)((float)(1.0 - v72) * v74)) * v72)
                          + (float)((float)((float)(1.0 - v72) * v75) * (float)(1.0 - v72)))
                  * v72)
          + (float)((float)((float)((float)(1.0 - v72) * v104) * (float)(1.0 - v72)) * (float)(1.0 - v72));
      v81 = (float)((float)((float)((float)((float)(v106[8] * v72) + (float)((float)(1.0 - v72) * v77)) * v72)
                          + (float)((float)((float)(1.0 - v72) * v76) * (float)(1.0 - v72)))
                  * v72)
          + (float)((float)((float)((float)(1.0 - v72) * v105) * (float)(1.0 - v72)) * (float)(1.0 - v72));
      v82 = (float)((float)((float)((float)((float)((float)(1.0 - v72) * v79) + (float)(v106[9] * v72)) * v72)
                          + (float)((float)((float)(1.0 - v72) * v78) * (float)(1.0 - v72)))
                  * v72)
          + (float)((float)((float)((float)(1.0 - v72) * v106[0]) * (float)(1.0 - v72)) * (float)(1.0 - v72));
      if ( (v73 & 0xFFFFFFEF) == 0 )
        v81 = 23.0;
      v72 = v72 + 0.0625;
      ++v73;
      v83 = 3 * (v66 + *(int *)((char *)&unk_14BC53360 + v5 + 20));
      *((float *)&unk_14BC53360 + v83 + 6) = v80;
      *((float *)&unk_14BC53360 + v83 + 7) = v81;
      *((float *)&unk_14BC53360 + v83 + 8) = v82;
      ++*(_DWORD *)((char *)&unk_14BC53360 + v5 + 20);
    }
    while ( v73 <= 16 );
    v64 = v64 + 0.0625;
    --v65;
  }
  while ( v65 );
  for ( i = 18; i < 290; i += 17 )
  {
    v85 = i;
    v86 = 4;
    do
    {
      v87 = v85 + 2;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3087) = v85 - 18;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3088) = v85 - 17;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3089) = v85;
      v88 = *(int *)((char *)&unk_14BC53360 + v5 + 12312);
      *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312) = v88 + 1;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * v88 + 3090) = v85 - 18;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3088) = v85;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3089) = v85 - 1;
      v89 = *(int *)((char *)&unk_14BC53360 + v5 + 12312);
      *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312) = v89 + 1;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * v89 + 3090) = v85 - 17;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3088) = v85 - 16;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3089) = v85 + 1;
      v90 = *(int *)((char *)&unk_14BC53360 + v5 + 12312);
      *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312) = v90 + 1;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * v90 + 3090) = v85 - 17;
      v91 = v85 - 15;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3088) = v85 + 1;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3089) = v85;
      v92 = *(int *)((char *)&unk_14BC53360 + v5 + 12312);
      *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312) = v92 + 1;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * v92 + 3090) = v85 - 16;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3088) = v85 - 15;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3089) = v85 + 2;
      v93 = *(int *)((char *)&unk_14BC53360 + v5 + 12312);
      *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312) = v93 + 1;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * v93 + 3090) = v85 - 16;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3088) = v85 + 2;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3089) = v85 + 1;
      v94 = *(int *)((char *)&unk_14BC53360 + v5 + 12312);
      *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312) = v94 + 1;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * v94 + 3090) = v85 - 15;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3088) = v85 - 14;
      v95 = v85 + 3;
      v85 += 4;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3089) = v95;
      v96 = *(int *)((char *)&unk_14BC53360 + v5 + 12312);
      *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312) = v96 + 1;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * v96 + 3090) = v91;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * *(int *)((char *)&unk_14BC53360 + v5 + 12312) + 3088) = v95;
      *((_DWORD *)&unk_14BC53360 + 3 * v66 + 3 * (*(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312))++ + 3089) = v87;
      --v86;
    }
    while ( v86 );
  }
  *(_QWORD *)((char *)&unk_14BC53360 + v5 + 12316) = 0;
  *(_QWORD *)((char *)&unk_14BC53360 + v5 + 12332) = 0;
  *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12324) = 0;
  *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12340) = *(_DWORD *)((char *)&unk_14BC53360 + v5 + 12312);
  result = sub_1400E2FA0(v4);
  ++dword_15AD73360;
  return result;
}

