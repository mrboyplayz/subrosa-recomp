/* Address: 0x14005f6e0 | Name: sub_14005F6E0 | Size: 3258 bytes */
__int64 __fastcall sub_14005F6E0(unsigned int a1, float *a2, float a3, float a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r11
  __int64 v7; // rax
  unsigned int v8; // xmm3_4
  unsigned int v9; // xmm3_4
  unsigned int v10; // xmm3_4
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
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm10_4
  float v50; // xmm8_4
  float v51; // xmm2_4
  float v52; // xmm8_4
  float v53; // xmm0_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm3_4
  float v58; // xmm2_4
  float v59; // xmm13_4
  float v60; // xmm6_4
  float v61; // xmm3_4
  float v62; // xmm4_4
  float v63; // xmm5_4
  float v64; // xmm1_4
  float v65; // xmm5_4
  float v66; // xmm6_4
  __int64 v67; // r8
  __int64 v68; // rbx
  __int64 v69; // rax
  float v70; // xmm4_4
  float v71; // xmm3_4
  float v72; // xmm1_4
  float v73; // xmm2_4
  float v74; // xmm5_4
  int v75; // edx
  float v76; // xmm9_4
  float v77; // xmm8_4
  float v78; // xmm10_4
  float v79; // xmm11_4
  float v80; // xmm12_4
  float v81; // xmm13_4
  float v82; // xmm3_4
  float v83; // xmm2_4
  float v84; // xmm4_4
  __int64 v85; // rcx
  int i; // esi
  unsigned int v87; // edi
  __int64 v88; // r14
  unsigned int v89; // r10d
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  unsigned int v93; // r8d
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  unsigned int v97; // edx
  __int64 v98; // rcx
  __int64 v100; // [rsp+8h] [rbp-100h] BYREF
  float v101; // [rsp+28h] [rbp-E0h]
  float v102; // [rsp+2Ch] [rbp-DCh]
  float v103; // [rsp+30h] [rbp-D8h]
  float v104; // [rsp+34h] [rbp-D4h]
  float v105; // [rsp+38h] [rbp-D0h]
  float v106; // [rsp+40h] [rbp-C8h]
  float v107; // [rsp+44h] [rbp-C4h]
  float v108[12]; // [rsp+48h] [rbp-C0h]
  float v109; // [rsp+78h] [rbp-90h]
  int v110; // [rsp+7Ch] [rbp-8Ch]
  _DWORD v111[10]; // [rsp+80h] [rbp-88h]
  float v112; // [rsp+A8h] [rbp-60h]
  float v113; // [rsp+ACh] [rbp-5Ch]
  float v114[10]; // [rsp+B0h] [rbp-58h]
  float v115; // [rsp+D8h] [rbp-30h]
  float v116; // [rsp+DCh] [rbp-2Ch]
  _DWORD v117[10]; // [rsp+E0h] [rbp-28h]
  float v118; // [rsp+108h] [rbp+0h]
  int v119; // [rsp+10Ch] [rbp+4h]
  _DWORD v120[10]; // [rsp+110h] [rbp+8h]
  __int64 v121; // [rsp+138h] [rbp+30h]

  v4 = dword_140404A6C[421506973];
  v5 = 15432LL * (int)dword_140404A6C[421506973];
  v101 = a3;
  v7 = (int)dword_140404A6C[421506973];
  dword_140404A6C[v5 + 358297501] = a1;
  dword_140404A6C[v5 + 358297506] = 0;
  dword_140404A6C[v5 + 358300579] = 0;
  *(float *)&v8 = a2[3] + *a2;
  dword_140404A6C[v5 + 358297503] = v8;
  *(float *)&dword_140404A6C[v5 + 358297504] = a2[4] + a2[1];
  *(float *)&dword_140404A6C[v5 + 358297505] = a2[5] + a2[2];
  *(float *)&v9 = *(float *)&v8 + a2[6];
  dword_140404A6C[v5 + 358297503] = v9;
  *(float *)&dword_140404A6C[v5 + 358297504] = a2[7] + *(float *)&dword_140404A6C[v5 + 358297504];
  *(float *)&dword_140404A6C[v5 + 358297505] = a2[8] + *(float *)&dword_140404A6C[v5 + 358297505];
  *(float *)&v10 = *(float *)&v9 + a2[9];
  dword_140404A6C[v5 + 358297503] = v10;
  *(float *)&dword_140404A6C[v5 + 358297504] = a2[10] + *(float *)&dword_140404A6C[v5 + 358297504];
  *(float *)&dword_140404A6C[v5 + 358297505] = a2[11] + *(float *)&dword_140404A6C[v5 + 358297505];
  *(float *)&dword_140404A6C[v5 + 358297503] = *(float *)&v10 * 0.25;
  *(float *)&dword_140404A6C[v5 + 358297504] = *(float *)&dword_140404A6C[v5 + 358297504] * 0.25;
  *(float *)&dword_140404A6C[v5 + 358297505] = *(float *)&dword_140404A6C[v5 + 358297505] * 0.25;
  v11 = a2[3];
  v12 = a2[5];
  v13 = a2[2];
  v14 = *a2;
  v15 = a2[9];
  v16 = v13 - v12;
  v17 = a2[11];
  v18 = v11 - *a2;
  v110 = *((_DWORD *)a2 + 1);
  v105 = a2[4];
  *(float *)&v111[8] = v105;
  *(float *)&v120[7] = a2[6];
  *(float *)&v120[8] = a2[7];
  *(float *)&v120[9] = a2[8];
  v119 = *((_DWORD *)a2 + 10);
  v109 = v14;
  *(float *)v111 = v13;
  v102 = v11;
  *(float *)&v111[7] = v11;
  v103 = v12;
  *(float *)&v111[9] = v12;
  v118 = v15;
  *(float *)v120 = v17;
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
  v104 = v24;
  v113 = v24;
  v27 = a2[8] - v12;
  v28 = (float)(v21 * v26) + v14;
  v114[8] = v25;
  v29 = (float)(v20 * v26) + v13;
  v112 = v28;
  v114[0] = v29;
  v30 = fsqrt((float)(v27 * v27) + (float)((float)(v22 - v11) * (float)(v22 - v11))) * 0.33333334;
  v31 = v20 * v30;
  v32 = (float)(v21 * v30) + v11;
  v33 = a2[9] - v22;
  v34 = a2[8] - a2[11];
  v35 = v31 + v12;
  v114[7] = v32;
  v114[9] = v35;
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
  v39 = a2[10];
  v40 = a2[3] - a2[6];
  v41 = fsqrt((float)((float)(v13 - a2[11]) * (float)(v13 - a2[11])) + (float)((float)(v14 - a2[9])
                                                                             * (float)(v14 - a2[9])));
  v101 = v101 * 0.33333334;
  v42 = a2[5] - a2[8];
  v43 = v41 * 0.33333334;
  v116 = v39 - v101;
  v44 = (float)(v38 * v43) + a2[9];
  v45 = (float)(v37 * v43) + a2[11];
  v46 = fsqrt((float)(v42 * v42) + (float)(v40 * v40)) * 0.33333334;
  v47 = (float)((float)(a2[3] - *a2) * 0.33333334) + *a2;
  *(float *)&v111[2] = (float)((float)(a2[4] - a2[1]) * 0.33333334) + a2[1];
  v48 = a2[2];
  v49 = (float)(v38 * v46) + a2[6];
  v50 = v37 * v46;
  v51 = a2[7] - v101;
  v52 = v50 + a2[8];
  *(float *)&v111[1] = v47;
  v53 = a2[5] - v48;
  v115 = v44;
  *(float *)v117 = v45;
  *(float *)&v117[7] = v49;
  *(float *)&v117[9] = v52;
  *(float *)&v117[8] = v51;
  *(float *)&v111[3] = (float)(v53 * 0.33333334) + v48;
  v54 = (float)((float)(*a2 - v102) * 0.33333334) + v102;
  *(float *)&v111[6] = (float)((float)(v48 - v103) * 0.33333334) + v103;
  v55 = a2[4] - a2[1];
  *(float *)&v111[4] = v54;
  *(float *)&v111[5] = (float)((float)(a2[1] - a2[4]) * 0.33333334) + a2[4];
  v114[1] = (float)((float)(v32 - v28) * 0.33333334) + v28;
  v114[2] = (float)(v55 * 0.33333334) + v104;
  v114[4] = (float)((float)(v28 - v32) * 0.33333334) + v32;
  v114[3] = (float)((float)(v35 - v29) * 0.33333334) + v29;
  v56 = a2[1] - v105;
  *(float *)&v117[2] = (float)((float)(v51 - (float)(v39 - v101)) * 0.33333334) + (float)(v39 - v101);
  v57 = (float)((float)((float)(v39 - v101) - v51) * 0.33333334) + v51;
  v58 = a2[9];
  v59 = (float)((float)(v29 - v35) * 0.33333334) + v35;
  v60 = a2[7];
  *(float *)&v117[5] = v57;
  v61 = a2[6];
  v114[6] = v59;
  v114[5] = (float)(v56 * 0.33333334) + v25;
  *(float *)&v117[1] = (float)((float)(v49 - v44) * 0.33333334) + v44;
  *(float *)&v117[4] = (float)((float)(v44 - v49) * 0.33333334) + v49;
  v62 = a2[8];
  *(float *)&v117[3] = (float)((float)(v52 - v45) * 0.33333334) + v45;
  *(float *)&v117[6] = (float)((float)(v45 - v52) * 0.33333334) + v52;
  v63 = a2[10];
  *(float *)&v120[1] = (float)((float)(v61 - v58) * 0.33333334) + v58;
  *(float *)&v120[4] = (float)((float)(v58 - v61) * 0.33333334) + v61;
  *(float *)&v120[2] = (float)((float)(v60 - v63) * 0.33333334) + v63;
  v64 = a2[11];
  v65 = (float)((float)(v63 - v60) * 0.33333334) + v60;
  v66 = 0.0;
  *(float *)&v120[5] = v65;
  *(float *)&v120[3] = (float)((float)(v62 - v64) * 0.33333334) + v64;
  *(float *)&v120[6] = (float)((float)(v64 - v62) * 0.33333334) + v62;
  v67 = 17;
  v68 = 5144 * v7;
  do
  {
    v69 = 0;
    v70 = 1.0 - v66;
    do
    {
      v71 = (float)((float)((float)(*(float *)&v117[v69 - 1] * 3.0) * v70) + (float)(v66 * *(float *)&v120[v69 - 1]))
          * v66;
      v72 = (float)(v114[v69 - 1] * 3.0) * (float)(v70 * v70);
      *(float *)((char *)&v106 + v69 * 4) = (float)((float)((float)((float)((float)((float)(*(float *)((char *)&v115 + v69 * 4)
                                                                                          * 3.0)
                                                                                  * v70)
                                                                          + (float)(v66
                                                                                  * *(float *)((char *)&v118 + v69 * 4)))
                                                                  * v66)
                                                          + (float)((float)(*(float *)((char *)&v112 + v69 * 4) * 3.0)
                                                                  * (float)(v70 * v70)))
                                                  * v66)
                                          + (float)((float)(v70 * v70)
                                                  * (float)(v70 * *(float *)((char *)&v109 + v69 * 4)));
      v73 = (float)((float)((float)((float)(*(float *)&v117[v69] * 3.0) * v70) + (float)(v66 * *(float *)&v120[v69]))
                  * v66)
          + (float)((float)(v114[v69] * 3.0) * (float)(v70 * v70));
      v108[v69 - 1] = (float)((float)(v71 + v72) * v66)
                    + (float)((float)(v70 * *(float *)&v111[v69 - 1]) * (float)(v70 * v70));
      v108[v69] = (float)(v73 * v66) + (float)((float)(v70 * *(float *)&v111[v69]) * (float)(v70 * v70));
      v69 += 3;
    }
    while ( v69 < 12 );
    v74 = 0.0;
    v75 = 0;
    v76 = v108[4] * 3.0;
    v77 = v108[1] * 3.0;
    v78 = v108[2] * 3.0;
    v79 = v108[5] * 3.0;
    v80 = v108[3] * 3.0;
    v81 = v108[6] * 3.0;
    do
    {
      v82 = (float)((float)((float)((float)((float)(v108[7] * v74) + (float)((float)(1.0 - v74) * v76)) * v74)
                          + (float)((float)((float)(1.0 - v74) * v77) * (float)(1.0 - v74)))
                  * v74)
          + (float)((float)((float)((float)(1.0 - v74) * v106) * (float)(1.0 - v74)) * (float)(1.0 - v74));
      v83 = (float)((float)((float)((float)((float)(v108[8] * v74) + (float)((float)(1.0 - v74) * v79)) * v74)
                          + (float)((float)((float)(1.0 - v74) * v78) * (float)(1.0 - v74)))
                  * v74)
          + (float)((float)((float)((float)(1.0 - v74) * v107) * (float)(1.0 - v74)) * (float)(1.0 - v74));
      v84 = (float)((float)((float)((float)((float)((float)(1.0 - v74) * v81) + (float)(v108[9] * v74)) * v74)
                          + (float)((float)((float)(1.0 - v74) * v80) * (float)(1.0 - v74)))
                  * v74)
          + (float)((float)((float)((float)(1.0 - v74) * v108[0]) * (float)(1.0 - v74)) * (float)(1.0 - v74));
      if ( (v75 & 0xFFFFFFEF) == 0 )
        v83 = 23.0;
      v74 = v74 + 0.0625;
      ++v75;
      v85 = 3 * (v68 + (int)dword_140404A6C[v5 + 358297506]);
      *(float *)&dword_140404A6C[v85 + 358297507] = v82;
      *(float *)&dword_140404A6C[v85 + 358297508] = v83;
      *(float *)&dword_140404A6C[v85 + 358297509] = v84;
      ++dword_140404A6C[v5 + 358297506];
    }
    while ( v75 <= 16 );
    v66 = v66 + 0.0625;
    --v67;
  }
  while ( v67 );
  for ( i = 18; i < 290; i += 17 )
  {
    v87 = i;
    v88 = 4;
    do
    {
      v89 = v87 + 2;
      dword_140404A6C[3 * v68 + 358300588 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 18;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 17;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87;
      v90 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v90 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v90] = v87 - 18;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 1;
      v91 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v91 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v91] = v87 - 17;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 16;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 1;
      v92 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v92 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v92] = v87 - 17;
      v93 = v87 - 15;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 1;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87;
      v94 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v94 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v94] = v87 - 16;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 15;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 2;
      v95 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v95 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v95] = v87 - 16;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 2;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 1;
      v96 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v96 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v96] = v87 - 15;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 14;
      v97 = v87 + 3;
      v87 += 4;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v97;
      v98 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v98 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v98] = v93;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v97;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]++] = v89;
      --v88;
    }
    while ( v88 );
  }
  *(_QWORD *)&dword_140404A6C[v5 + 358300580] = 0;
  *(_QWORD *)&dword_140404A6C[v5 + 358300584] = 0;
  dword_140404A6C[v5 + 358300582] = 0;
  dword_140404A6C[v5 + 358300586] = dword_140404A6C[v5 + 358300579];
  sub_1401899F0(v4);
  ++dword_140404A6C[421506973];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v100 ^ v121);
}

