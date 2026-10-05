/* Address: 0x1400414b0 | Name: sub_1400414B0 | Size: 3849 bytes */
__int64 __fastcall sub_1400414B0(int a1, int *a2, int *a3, int *a4, int a5)
{
  __int64 v5; // rdi
  int v6; // r12d
  int *v7; // rax
  int *v8; // r14
  int *v9; // r13
  __int64 v12; // rbx
  __int64 v13; // r15
  float v14; // xmm10_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm12_4
  float v18; // xmm0_4
  float v19; // xmm11_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm11_4
  float v25; // xmm1_4
  float v26; // xmm12_4
  float v27; // xmm2_4
  int v28; // xmm0_4
  float v29; // xmm12_4
  float v30; // xmm10_4
  __int64 v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // r8
  char *v34; // rdx
  __int64 v35; // rax
  char *v36; // r10
  char *v37; // r11
  char *v38; // rdi
  char *v39; // rsi
  char *v40; // r12
  char *v41; // r15
  char *v42; // rbx
  char *v43; // r13
  char *v44; // r14
  __int64 v45; // rcx
  char *v46; // rax
  __int64 v47; // r9
  char *v48; // rcx
  char *v49; // rax
  int v50; // edx
  __int64 v51; // rax
  _DWORD *v52; // rcx
  int v53; // eax
  float *v54; // rdi
  float *v55; // rsi
  int v56; // r12d
  float v57; // xmm2_4
  float v58; // xmm7_4
  float v59; // xmm5_4
  float v60; // xmm6_4
  int v61; // eax
  int v62; // xmm4_4
  int v63; // eax
  float v64; // xmm3_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  float v68; // xmm7_4
  float v69; // xmm0_4
  float v70; // xmm3_4
  float v71; // xmm0_4
  float v72; // xmm5_4
  float v73; // xmm3_4
  float v74; // xmm1_4
  float v75; // xmm6_4
  float v76; // xmm1_4
  float v77; // xmm0_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  int v80; // eax
  __int64 v81; // rcx
  float v82; // xmm0_4
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm2_4
  int v88; // eax
  int v89; // ecx
  float v90; // xmm1_4
  float v91; // xmm12_4
  float v92; // xmm0_4
  int v93; // eax
  int v94; // ecx
  __int64 v95; // rdx
  __int64 v96; // r11
  __int64 v97; // rax
  _DWORD *v98; // rcx
  unsigned __int64 v99; // r8
  __int64 v100; // r15
  _DWORD *v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rax
  bool v104; // zf
  int v105; // eax
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rdx
  _DWORD *v109; // rcx
  float v110[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v111; // [rsp+40h] [rbp-C0h] BYREF
  float v112; // [rsp+48h] [rbp-B8h]
  int v113; // [rsp+50h] [rbp-B0h]
  char *v114; // [rsp+58h] [rbp-A8h] BYREF
  int v115; // [rsp+60h] [rbp-A0h]
  __int64 v116; // [rsp+68h] [rbp-98h]
  __int64 v117; // [rsp+70h] [rbp-90h]
  char *v118; // [rsp+78h] [rbp-88h]
  char *v119; // [rsp+80h] [rbp-80h]
  char *v120; // [rsp+88h] [rbp-78h]
  char *v121; // [rsp+90h] [rbp-70h]
  __int64 v122; // [rsp+98h] [rbp-68h]
  int v124; // [rsp+170h] [rbp+70h]

  v124 = (int)a3;
  v5 = a1;
  v113 = 0;
  v6 = 0;
  v7 = dword_16E6A3C60;
  v8 = a4;
  v9 = a3;
  while ( *v7 )
  {
    ++v6;
    v7 += 5210;
    v113 = v6;
    if ( (__int64)v7 >= (__int64)&dword_16F0D0C60 )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v12 = 20840LL * v6;
  v117 = v12;
  memset((char *)dword_16E6A3C64 + v12, 0, 0x5164u);
  *(int *)((char *)&dword_16E6A3C60[1] + v12) = v5;
  *(int *)((char *)dword_16E6A3C60 + v12) = 1;
  v13 = 99776 * v5;
  *(int *)((char *)&dword_16E6A3C60[3] + v12) = 100;
  *(int *)((char *)&dword_16E6A3C60[5209] + v12) = -1;
  *(int *)((char *)&dword_16E6A3C60[7] + v12) = 0xFFFF;
  *(int *)((char *)&dword_16E6A3C60[3474] + v12) = -1;
  *(int *)((char *)&dword_16E6A3C60[5] + v12) = -1;
  *(int *)((char *)&dword_16E6A3C60[9] + v12) = -1;
  *(int *)((char *)&dword_16E6A3C60[3464] + v12) = 4;
  *(int *)((char *)&dword_16E6A3C60[2] + v12) = dword_14AA152E8[24944 * v5];
  *(int *)((char *)&dword_16E6A3C60[6] + v12) = a5;
  *(int *)((char *)&dword_16E6A3C60[11] + v12) = *a2;
  *(int *)((char *)&dword_16E6A3C60[12] + v12) = a2[1];
  *(int *)((char *)&dword_16E6A3C60[13] + v12) = a2[2];
  *(int *)((char *)&dword_16E6A3C60[14] + v12) = *a2;
  *(int *)((char *)&dword_16E6A3C60[15] + v12) = a2[1];
  *(int *)((char *)&dword_16E6A3C60[16] + v12) = a2[2];
  *(int *)((char *)&dword_16E6A3C60[17] + v12) = *v8;
  *(int *)((char *)&dword_16E6A3C60[18] + v12) = v8[1];
  *(int *)((char *)&dword_16E6A3C60[19] + v12) = v8[2];
  *(int *)((char *)&dword_16E6A3C60[20] + v12) = v8[3];
  *(int *)((char *)&dword_16E6A3C60[21] + v12) = v8[4];
  *(int *)((char *)&dword_16E6A3C60[22] + v12) = v8[5];
  *(int *)((char *)&dword_16E6A3C60[23] + v12) = v8[6];
  *(int *)((char *)&dword_16E6A3C60[24] + v12) = v8[7];
  *(int *)((char *)&dword_16E6A3C60[25] + v12) = v8[8];
  *(int *)((char *)&dword_16E6A3C60[26] + v12) = *(int *)((char *)&dword_16E6A3C60[17] + v12);
  *(int *)((char *)&dword_16E6A3C60[27] + v12) = *(int *)((char *)&dword_16E6A3C60[18] + v12);
  *(int *)((char *)&dword_16E6A3C60[28] + v12) = *(int *)((char *)&dword_16E6A3C60[19] + v12);
  *(int *)((char *)&dword_16E6A3C60[29] + v12) = *(int *)((char *)&dword_16E6A3C60[20] + v12);
  *(int *)((char *)&dword_16E6A3C60[30] + v12) = *(int *)((char *)&dword_16E6A3C60[21] + v12);
  *(int *)((char *)&dword_16E6A3C60[31] + v12) = *(int *)((char *)&dword_16E6A3C60[22] + v12);
  *(int *)((char *)&dword_16E6A3C60[32] + v12) = *(int *)((char *)&dword_16E6A3C60[23] + v12);
  *(int *)((char *)&dword_16E6A3C60[33] + v12) = *(int *)((char *)&dword_16E6A3C60[24] + v12);
  *(int *)((char *)&dword_16E6A3C60[34] + v12) = *(int *)((char *)&dword_16E6A3C60[25] + v12);
  v122 = 99776 * v5;
  if ( v9 )
  {
    *(int *)((char *)&dword_16E6A3C60[35] + v12) = *v9;
    *(int *)((char *)&dword_16E6A3C60[36] + v12) = v9[1];
    *(int *)((char *)&dword_16E6A3C60[37] + v12) = v9[2];
    *(int *)((char *)&dword_16E6A3C60[38] + v12) = *v9;
    *(int *)((char *)&dword_16E6A3C60[39] + v12) = v9[1];
    *(int *)((char *)&dword_16E6A3C60[40] + v12) = v9[2];
  }
  v14 = *(float *)((char *)&unk_14AA2D808 + v13);
  v15 = *(float *)((char *)&unk_14AA2D80C + v13);
  v16 = *(float *)((char *)&unk_14AA2D810 + v13);
  v17 = v14;
  v18 = *(float *)((char *)&dword_14AA2CB54 + v13) * 213.0;
  *(int *)((char *)&dword_16E6A3C60[3628] + v12) = 1094713344;
  *(int *)((char *)&dword_16E6A3C60[3629] + v12) = 1128792064;
  *(int *)((char *)&dword_16E6A3C60[3630] + v12) = 1000593162;
  *(float *)((char *)&dword_16E6A3C60[3624] + v12) = v18;
  v19 = (float)(v14 * *(float *)v8) + *(float *)a2;
  v20 = (float)(v14 * *((float *)v8 + 2)) + *((float *)a2 + 2);
  v21 = v19 + (float)(v15 * *((float *)v8 + 3));
  v22 = v15 * *((float *)v8 + 4);
  v23 = v15 * *((float *)v8 + 5);
  v24 = v21 + (float)(v16 * *((float *)v8 + 6));
  v25 = v16 * *((float *)v8 + 7);
  v26 = (float)((float)(v17 * *((float *)v8 + 1)) + *((float *)a2 + 1)) + v22;
  v27 = v16 * *((float *)v8 + 8);
  v28 = *(int *)((char *)&dword_14AA15318 + v13);
  v29 = v26 + v25;
  v110[0] = v24;
  v30 = (float)(v20 + v23) + v27;
  v110[1] = v29;
  v110[2] = v30;
  *(int *)((char *)&dword_16E6A3C60[10] + v12) = sub_140042790(
                                                   1,
                                                   (unsigned int)v110,
                                                   (_DWORD)v8,
                                                   (_DWORD)v9,
                                                   v28,
                                                   (__int64)&unk_14AA2D820 + v13);
  v31 = *(int *)((char *)&unk_14AA16738 + v13);
  *(int *)((char *)&dword_16E6A3C60[510] + v12) = v31;
  v116 = v31;
  if ( (int)v31 > 0 )
  {
    v32 = v13 - v12;
    v33 = (_DWORD *)((char *)&unk_16E6A445C + v12);
    v34 = (char *)&unk_16E6A4460 + v12;
    v35 = v13 - v12 - (_QWORD)&unk_16E6A4460;
    v36 = (char *)&unk_14AA16740 + v35;
    v37 = (char *)&unk_14AA16744 + v35;
    v38 = (char *)&unk_14AA16748 + v35;
    v39 = (char *)&unk_14AA1674C + v35;
    v40 = (char *)&unk_14AA16750 + v35;
    v41 = (char *)&unk_14AA16754 + v35;
    v42 = (char *)&unk_14AA16758 + v35;
    v43 = (char *)&unk_14AA1675C + v35;
    v119 = (char *)&unk_14AA16764 + v35;
    v44 = (char *)&unk_14AA16760 + v35;
    v118 = (char *)&unk_14AA16768 + v35;
    v45 = v32 - (_QWORD)&unk_16E6A445C;
    v120 = (char *)(0x140000000LL + v35 + 178349932);
    v46 = (char *)&unk_14AA1673C + v45;
    v111 = (__int64)&unk_14AA1673C + v45;
    v121 = (char *)&unk_14AA16774 + v45;
    v47 = v116;
    v114 = (char *)(0x140000000LL + v45 + 178349944);
    v48 = v118;
    do
    {
      v34 += 64;
      *v33 = *(_DWORD *)((char *)v33 + (_QWORD)v46);
      v33 += 16;
      *((_DWORD *)v34 - 16) = *(_DWORD *)&v34[(_QWORD)v36 - 64];
      *((_DWORD *)v34 - 15) = *(_DWORD *)&v34[(_QWORD)v37 - 64];
      *((_DWORD *)v34 - 14) = *(_DWORD *)&v34[(_QWORD)v38 - 64];
      *((_DWORD *)v34 - 13) = *(_DWORD *)&v34[(_QWORD)v39 - 64];
      *((_DWORD *)v34 - 12) = *(_DWORD *)&v34[(_QWORD)v40 - 64];
      *((_DWORD *)v34 - 11) = *(_DWORD *)&v34[(_QWORD)v41 - 64];
      *((_DWORD *)v34 - 10) = *(_DWORD *)&v34[(_QWORD)v42 - 64];
      *((_DWORD *)v34 - 9) = *(_DWORD *)&v43[(_QWORD)v34 - 64];
      *((_DWORD *)v34 - 8) = *(_DWORD *)&v34[(_QWORD)v44 - 64];
      *((_DWORD *)v34 - 7) = *(_DWORD *)&v34[(_QWORD)v119 - 64];
      *((_DWORD *)v34 - 6) = *(_DWORD *)&v34[(_QWORD)v48 - 64];
      *((_DWORD *)v34 - 5) = *(_DWORD *)&v34[(_QWORD)v120 - 64];
      v49 = v121;
      *(v33 - 1) = 8;
      *(v33 - 3) = *(_DWORD *)((char *)v33 + (_QWORD)v49 - 64);
      *(v33 - 2) = *(_DWORD *)((char *)v33 + (_QWORD)v114 - 64);
      v46 = (char *)v111;
      --v47;
    }
    while ( v47 );
    v12 = v117;
    v8 = a4;
    v13 = v122;
    v6 = v113;
    LODWORD(v9) = v124;
  }
  v50 = 0;
  if ( *(int *)((char *)&dword_16E6A3C60[59] + v12) > 0 )
  {
    v51 = v13 - v12 - (_QWORD)&unk_16E6A3E54;
    v52 = (_DWORD *)((char *)&unk_16E6A3E54 + v12);
    do
    {
      ++v50;
      *v52 = *(_DWORD *)((char *)v52 + v51 + 0x14AA15928LL);
      v52[64] = *(_DWORD *)((char *)v52 + v51 + 0x14AA15A28LL);
      ++v52;
    }
    while ( v50 < *(int *)((char *)&dword_16E6A3C60[59] + v12) );
  }
  *(int *)((char *)&dword_16E6A3C60[5173] + v12) = *(_DWORD *)((char *)&unk_14AA2D55C + v13);
  *(int *)((char *)&dword_16E6A3C60[5174] + v12) = *(_DWORD *)((char *)&unk_14AA2D560 + v13);
  v53 = *(_DWORD *)((char *)&unk_14AA2CB58 + v13);
  *(int *)((char *)&dword_16E6A3C60[3664] + v12) = v53;
  if ( v53 > 0 )
  {
    v54 = (float *)((char *)&dword_16E6A3C60[3676] + v12);
    v55 = (float *)((char *)&unk_14AA2CBA8 + v13);
    v56 = 0;
    do
    {
      v57 = *(v55 - 13);
      v58 = *(v55 - 2);
      v59 = *(v55 - 1);
      v60 = *v55;
      v61 = *((_DWORD *)v55 - 19);
      v62 = *((_DWORD *)v55 - 14);
      *(v54 - 2) = v58;
      *(v54 - 1) = v59;
      *v54 = v60;
      *((_DWORD *)v54 - 9) = v61;
      *(v54 - 8) = *(v55 - 3);
      *(v54 - 6) = *(v55 - 18);
      *(v54 - 5) = *(v55 - 17);
      *(v54 - 4) = *(v55 - 16);
      *(v54 - 3) = *(v55 - 15);
      v54[3] = *(v55 - 12);
      v54[18] = *(v55 - 8);
      v63 = *((_DWORD *)v55 - 7);
      v54[2] = v57;
      *((_DWORD *)v54 + 19) = v63;
      v54[20] = *(v55 - 6);
      v54[21] = *(v55 - 5);
      *((_DWORD *)v54 + 1) = v62;
      *((_DWORD *)v54 - 7) = 8;
      *(v54 - 10) = 0.125;
      v64 = v58 * *(float *)v8;
      v65 = (float)(v57 * v57) * 0.5;
      v66 = (float)(v57 * 0.25) * v57;
      v67 = v58 * *((float *)v8 + 1);
      v68 = v58 * *((float *)v8 + 2);
      *(float *)&v111 = v65;
      v69 = v59 * *((float *)v8 + 3);
      *((float *)&v111 + 1) = v66 + 0.0052083335;
      v112 = v66 + 0.0052083335;
      v70 = (float)(v64 + v24) + v69;
      v71 = v59 * *((float *)v8 + 4);
      v72 = v59 * *((float *)v8 + 5);
      v73 = v70 + (float)(v60 * *((float *)v8 + 6));
      v74 = v60;
      v75 = v60 * *((float *)v8 + 8);
      v76 = v74 * *((float *)v8 + 7);
      v110[0] = v73;
      v54[8] = v73;
      v110[1] = (float)((float)(v67 + v29) + v71) + v76;
      v54[9] = v110[1];
      v110[2] = (float)((float)(v68 + v30) + v72) + v75;
      v54[10] = v110[2];
      *((_DWORD *)v54 - 11) = sub_140042790(2, (unsigned int)v110, (_DWORD)v8, (_DWORD)v9, v62, (__int64)&v111);
      ++v56;
      v54 += 43;
      v55 += 20;
    }
    while ( v56 < *(_DWORD *)((char *)&unk_14AA2CB58 + v13) );
    v12 = v117;
    v6 = v113;
  }
  if ( a1 == 12 )
  {
    v77 = *((float *)v8 + 3) * 1.5;
    v78 = *((float *)v8 + 5);
    v111 = 0x4100000040802AABLL;
    v112 = 4.0052085;
    v110[0] = v77 + v24;
    v79 = *((float *)v8 + 4) * 1.5;
    v110[2] = (float)(v78 * 1.5) + v30;
    v110[1] = v79 + v29;
    v80 = sub_140042790(1, (unsigned int)v110, (_DWORD)v8, (_DWORD)v9, 1126170624, (__int64)&v111);
    v81 = 188LL * v80;
    *(int *)((char *)&dword_16E6A3C60[5098] + v12) = v80;
    v110[0] = 0.0;
    *(_QWORD *)&v110[1] = 1069547520;
    v114 = nullptr;
    *(_DWORD *)((char *)&unk_1402496AC + v81) = 1082130432;
    *(_DWORD *)((char *)&unk_1402496B0 + v81) = 1040187392;
    *(_DWORD *)((char *)&unk_1402496B4 + v81) = 1082130432;
    LODWORD(v81) = *(int *)((char *)&dword_16E6A3C60[10] + v12);
    v115 = 0;
    sub_140038D20(v81, v80, v110, &v114);
    *(int *)((char *)&dword_16E6A3C60[5099] + v12) = sub_140038EA0(
                                                       *(int *)((char *)&dword_16E6A3C60[10] + v12),
                                                       *(int *)((char *)&dword_16E6A3C60[5098] + v12));
  }
  else
  {
    if ( a1 != 13 )
    {
      *(int *)((char *)&dword_16E6A3C60[3640] + v12) = 2;
      *(int *)((char *)&dword_16E6A3C60[3641] + v12) = 2;
      *(int *)((char *)&dword_16E6A3C60[3642] + v12) = 3;
      if ( a1 == 15 )
      {
        *(int *)((char *)&dword_16E6A3C60[3641] + v12) = 0;
        *(int *)((char *)&dword_16E6A3C60[3642] + v12) = 1;
      }
      goto LABEL_27;
    }
    v82 = *((float *)v8 + 6);
    v83 = v30 - *((float *)v8 + 5);
    v84 = v24 - *((float *)v8 + 3);
    v111 = 0x3FC000003F700000LL;
    v112 = 0.9375;
    v85 = v84 - (float)(v82 * 6.0);
    v86 = *((float *)v8 + 7) * 6.0;
    v110[0] = v85;
    v87 = v83 - (float)(*((float *)v8 + 8) * 6.0);
    v110[1] = (float)(v29 - *((float *)v8 + 4)) - v86;
    v110[2] = v87;
    v88 = sub_140042790(1, (unsigned int)v110, (_DWORD)v8, (_DWORD)v9, 1201422336, (__int64)&v111);
    *(int *)((char *)&dword_16E6A3C60[5103] + v12) = v88;
    v89 = *(int *)((char *)&dword_16E6A3C60[10] + v12);
    v110[2] = -6.0;
    *(_QWORD *)v110 = 0xBF80000000000000uLL;
    v114 = nullptr;
    v115 = 0;
    sub_140038D20(v89, v88, v110, &v114);
    *(int *)((char *)&dword_16E6A3C60[5105] + v12) = sub_140038EA0(
                                                       *(int *)((char *)&dword_16E6A3C60[10] + v12),
                                                       *(int *)((char *)&dword_16E6A3C60[5103] + v12));
    v90 = *((float *)v8 + 5) * 1.25;
    v91 = (float)(v29 - (float)(*((float *)v8 + 4) * 1.25)) + (float)(*((float *)v8 + 7) * 6.0);
    v110[0] = (float)(v24 - (float)(*((float *)v8 + 3) * 1.25)) + (float)(*((float *)v8 + 6) * 6.0);
    v92 = *((float *)v8 + 8) * 6.0;
    v110[1] = v91;
    v110[2] = (float)(v30 - v90) + v92;
    v93 = sub_140042790(1, (unsigned int)v110, (_DWORD)v8, (_DWORD)v9, 1201422336, (__int64)&v111);
    *(int *)((char *)&dword_16E6A3C60[5106] + v12) = v93;
    v94 = *(int *)((char *)&dword_16E6A3C60[10] + v12);
    *(_QWORD *)v110 = 0xBF80000000000000uLL;
    v110[2] = 6.0;
    sub_140038D20(v94, v93, v110, &v114);
    *(int *)((char *)&dword_16E6A3C60[5108] + v12) = sub_140038EA0(
                                                       *(int *)((char *)&dword_16E6A3C60[10] + v12),
                                                       *(int *)((char *)&dword_16E6A3C60[5106] + v12));
  }
  *(int *)((char *)&dword_16E6A3C60[3640] + v12) = 2;
  *(int *)((char *)&dword_16E6A3C60[3641] + v12) = 2;
  *(int *)((char *)&dword_16E6A3C60[3642] + v12) = 3;
LABEL_27:
  v95 = *(int *)((char *)&dword_14AA2D5F8 + v13);
  v96 = 0;
  *(int *)((char *)&dword_16E6A3C60[5175] + v12) = v95;
  v116 = v95;
  if ( v95 >= 4 )
  {
    v97 = v13 - v12 - (_QWORD)&unk_16E6A8D44;
    v111 = (__int64)&unk_14AA2D624 + v97;
    v114 = (char *)&unk_14AA2D628 + v97;
    v121 = (char *)&unk_14AA2D5FC + v97;
    v120 = (char *)&unk_14AA2D608 + v97;
    v98 = (_DWORD *)((char *)&unk_16E6A8D44 + v12);
    v119 = (char *)&unk_14AA2D614 + v97;
    v99 = ((unsigned __int64)(v95 - 4) >> 2) + 1;
    v118 = (char *)(0x140000000LL + v97 + 178443808);
    *(_QWORD *)v110 = 4 * v99;
    do
    {
      *(v98 - 1) = *(_DWORD *)((char *)v98 + (_QWORD)&unk_14AA2D5FC + v97);
      *v98 = *(_DWORD *)((char *)v98 + (_QWORD)&unk_14AA2D600 + v97);
      v98[1] = *(_DWORD *)((char *)v98 + (_QWORD)&unk_14AA2D604 + v97);
      v98[2] = *(_DWORD *)((char *)&unk_14AA2D608 + v97 + (_QWORD)v98);
      v98[3] = *(_DWORD *)((char *)v98 + (_QWORD)&unk_14AA2D60C + v97);
      v98[4] = *(_DWORD *)((char *)v98 + (_QWORD)&unk_14AA2D610 + v97);
      v98[5] = *(_DWORD *)((char *)&unk_14AA2D614 + v97 + (_QWORD)v98);
      v98[6] = *(_DWORD *)((char *)v98 + (_QWORD)&unk_14AA2D618 + v97);
      v98[7] = *(_DWORD *)((char *)&unk_14AA2D61C + v97 + (_QWORD)v98);
      v98 += 12;
      *(v98 - 4) = *(_DWORD *)&v118[(_QWORD)v98 - 48];
      *(v98 - 3) = *(_DWORD *)((char *)v98 + (_QWORD)&unk_14AA2D624 + v97 - 48);
      *(v98 - 2) = *(_DWORD *)((char *)v98 + (_QWORD)&unk_14AA2D628 + v97 - 48);
      --v99;
    }
    while ( v99 );
    v12 = v117;
    v95 = v116;
    v13 = v122;
    v6 = v113;
    v96 = *(_QWORD *)v110;
  }
  if ( v96 < v95 )
  {
    v100 = v13 - v12 - (_QWORD)&unk_16E6A8D44;
    v101 = (_DWORD *)((char *)&unk_16E6A8D44 + 12 * v96 + v12);
    v102 = v95 - v96;
    do
    {
      *(v101 - 1) = *(_DWORD *)((char *)v101 + (_QWORD)&unk_14AA2D5FC + v100);
      *v101 = *(_DWORD *)((char *)v101 + (_QWORD)&unk_14AA2D600 + v100);
      v101[1] = *(_DWORD *)((char *)v101 + (_QWORD)&unk_14AA2D604 + v100);
      v101 += 3;
      --v102;
    }
    while ( v102 );
  }
  v103 = 5210LL * v6;
  v104 = dword_163D75B60 == 0;
  *(_QWORD *)&dword_16E6A3C60[v103 + 3466] = -1;
  *(_QWORD *)&dword_16E6A3C60[v103 + 3468] = -1;
  *(_QWORD *)&dword_16E6A3C60[v103 + 3470] = -1;
  *(_QWORD *)&dword_16E6A3C60[v103 + 3472] = -1;
  if ( !v104 )
  {
    v105 = dword_191541414;
    v106 = (__int64)dword_196199564++ << 7;
    HIWORD(dword_196199564) = 0;
    *(_DWORD *)((char *)&unk_195999560 + v106) = 3;
    *(_DWORD *)((char *)&unk_195999564 + v106) = v105;
    v107 = *(int *)((char *)&dword_16E6A3C60[1] + v12);
    *(int *)((char *)&dword_195999580 + v106) = v6;
    *(int *)((char *)&dword_195999584 + v106) = v107;
    *(int *)((char *)&dword_195999588 + v106) = *(int *)((char *)&dword_16E6A3C60[6] + v12);
  }
  if ( dword_163D75B40 > 0 )
  {
    v108 = (unsigned int)dword_163D75B40;
    v109 = (_DWORD *)(0x140000000LL + 8LL * v6 + 552770304);
    do
    {
      *v109 = 0x10000;
      v109 += 47224;
      --v108;
    }
    while ( v108 );
  }
  return (unsigned int)v6;
}

