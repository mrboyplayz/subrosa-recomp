/* Address: 0x14005bca0 | Name: sub_14005BCA0 | Size: 3849 bytes */
__int64 __fastcall sub_14005BCA0(int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 v5; // rdi
  signed int v6; // r12d
  unsigned int *v7; // rax
  unsigned int *v8; // r14
  unsigned int *v9; // r13
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
  signed int v50; // edx
  __int64 v51; // rax
  _DWORD *v52; // rcx
  int v53; // eax
  float *v54; // rdi
  float *v55; // rsi
  signed int v56; // r12d
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
  signed int v80; // eax
  __int64 v81; // rcx
  float v82; // xmm0_4
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm2_4
  unsigned int v88; // eax
  unsigned int v89; // ecx
  float v90; // xmm1_4
  float v91; // xmm12_4
  float v92; // xmm0_4
  unsigned int v93; // eax
  unsigned int v94; // ecx
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
  unsigned int v105; // eax
  __int64 v106; // rcx
  unsigned int v107; // eax
  __int64 v108; // rdx
  _DWORD *v109; // rcx
  _BYTE v110[12]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v111; // [rsp+40h] [rbp-C0h] BYREF
  float v112; // [rsp+48h] [rbp-B8h]
  signed int v113; // [rsp+50h] [rbp-B0h]
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
  v7 = &dword_140404A6C[129716709];
  v8 = a4;
  v9 = a3;
  while ( *v7 )
  {
    ++v6;
    v7 += 5210;
    v113 = v6;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[132384229] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v12 = 20840LL * v6;
  v117 = v12;
  MEMORY[0x1401FCD30]((char *)&dword_140404A6C[129716710] + v12, 0, 20836);
  *(unsigned int *)((char *)&dword_140404A6C[129716710] + v12) = v5;
  *(unsigned int *)((char *)&dword_140404A6C[129716709] + v12) = 1;
  v13 = 99776 * v5;
  *(unsigned int *)((char *)&dword_140404A6C[129716712] + v12) = 100;
  *(unsigned int *)((char *)&dword_140404A6C[129721918] + v12) = -1;
  *(unsigned int *)((char *)&dword_140404A6C[129716716] + v12) = 0xFFFF;
  *(unsigned int *)((char *)&dword_140404A6C[129720183] + v12) = -1;
  *(unsigned int *)((char *)&dword_140404A6C[129716714] + v12) = -1;
  *(unsigned int *)((char *)&dword_140404A6C[129716718] + v12) = -1;
  *(unsigned int *)((char *)&dword_140404A6C[129720173] + v12) = 4;
  *(unsigned int *)((char *)&dword_140404A6C[129716711] + v12) = dword_140404A6C[24944 * v5 + 346707719];
  *(unsigned int *)((char *)&dword_140404A6C[129716715] + v12) = a5;
  *(unsigned int *)((char *)&dword_140404A6C[129716720] + v12) = *a2;
  *(unsigned int *)((char *)&dword_140404A6C[129716721] + v12) = a2[1];
  *(unsigned int *)((char *)&dword_140404A6C[129716722] + v12) = a2[2];
  *(unsigned int *)((char *)&dword_140404A6C[129716723] + v12) = *a2;
  *(unsigned int *)((char *)&dword_140404A6C[129716724] + v12) = a2[1];
  *(unsigned int *)((char *)&dword_140404A6C[129716725] + v12) = a2[2];
  *(unsigned int *)((char *)&dword_140404A6C[129716726] + v12) = *v8;
  *(unsigned int *)((char *)&dword_140404A6C[129716727] + v12) = v8[1];
  *(unsigned int *)((char *)&dword_140404A6C[129716728] + v12) = v8[2];
  *(unsigned int *)((char *)&dword_140404A6C[129716729] + v12) = v8[3];
  *(unsigned int *)((char *)&dword_140404A6C[129716730] + v12) = v8[4];
  *(unsigned int *)((char *)&dword_140404A6C[129716731] + v12) = v8[5];
  *(unsigned int *)((char *)&dword_140404A6C[129716732] + v12) = v8[6];
  *(unsigned int *)((char *)&dword_140404A6C[129716733] + v12) = v8[7];
  *(unsigned int *)((char *)&dword_140404A6C[129716734] + v12) = v8[8];
  *(unsigned int *)((char *)&dword_140404A6C[129716735] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716726]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716736] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716727]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716737] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716728]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716738] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716729]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716739] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716730]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716740] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716731]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716741] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716732]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716742] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716733]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716743] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716734]
                                                                                 + v12);
  v122 = 99776 * v5;
  if ( v9 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[129716744] + v12) = *v9;
    *(unsigned int *)((char *)&dword_140404A6C[129716745] + v12) = v9[1];
    *(unsigned int *)((char *)&dword_140404A6C[129716746] + v12) = v9[2];
    *(unsigned int *)((char *)&dword_140404A6C[129716747] + v12) = *v9;
    *(unsigned int *)((char *)&dword_140404A6C[129716748] + v12) = v9[1];
    *(unsigned int *)((char *)&dword_140404A6C[129716749] + v12) = v9[2];
  }
  v14 = *(float *)((char *)&dword_140404A6C[346732623] + v13);
  v15 = *(float *)((char *)&dword_140404A6C[346732624] + v13);
  v16 = *(float *)((char *)&dword_140404A6C[346732625] + v13);
  v17 = v14;
  v18 = *(float *)((char *)&dword_140404A6C[346731810] + v13) * 213.0;
  *(unsigned int *)((char *)&dword_140404A6C[129720337] + v12) = 1094713344;
  *(unsigned int *)((char *)&dword_140404A6C[129720338] + v12) = 1128792064;
  *(unsigned int *)((char *)&dword_140404A6C[129720339] + v12) = 1000593162;
  *(float *)((char *)&dword_140404A6C[129720333] + v12) = v18;
  v19 = (float)(v14 * *(float *)v8) + *(float *)a2;
  v20 = (float)(v14 * *((float *)v8 + 2)) + *((float *)a2 + 2);
  v21 = v19 + (float)(v15 * *((float *)v8 + 3));
  v22 = v15 * *((float *)v8 + 4);
  v23 = v15 * *((float *)v8 + 5);
  v24 = v21 + (float)(v16 * *((float *)v8 + 6));
  v25 = v16 * *((float *)v8 + 7);
  v26 = (float)((float)(v17 * *((float *)v8 + 1)) + *((float *)a2 + 1)) + v22;
  v27 = v16 * *((float *)v8 + 8);
  v28 = *(unsigned int *)((char *)&dword_140404A6C[346707731] + v13);
  v29 = v26 + v25;
  *(float *)v110 = v24;
  v30 = (float)(v20 + v23) + v27;
  *(float *)&v110[4] = v29;
  *(float *)&v110[8] = v30;
  *(unsigned int *)((char *)&dword_140404A6C[129716719] + v12) = sub_14005CF80(
                                                                   1,
                                                                   (unsigned int)v110,
                                                                   (_DWORD)v8,
                                                                   (_DWORD)v9,
                                                                   v28,
                                                                   (__int64)&dword_140404A6C[346732629] + v13);
  v31 = *(int *)((char *)&dword_140404A6C[346709019] + v13);
  *(unsigned int *)((char *)&dword_140404A6C[129717219] + v12) = v31;
  v116 = v31;
  if ( (int)v31 > 0 )
  {
    v32 = v13 - v12;
    v33 = (unsigned int *)((char *)&dword_140404A6C[129717220] + v12);
    v34 = (char *)&dword_140404A6C[129717221] + v12;
    v35 = v13 - v12 - (_QWORD)&dword_140404A6C[129717221];
    v36 = (char *)&dword_140404A6C[346709021] + v35;
    v37 = (char *)&dword_140404A6C[346709022] + v35;
    v38 = (char *)&dword_140404A6C[346709023] + v35;
    v39 = (char *)&dword_140404A6C[346709024] + v35;
    v40 = (char *)&dword_140404A6C[346709025] + v35;
    v41 = (char *)&dword_140404A6C[346709026] + v35;
    v42 = (char *)&dword_140404A6C[346709027] + v35;
    v43 = (char *)&dword_140404A6C[346709028] + v35;
    v119 = (char *)&dword_140404A6C[346709030] + v35;
    v44 = (char *)&dword_140404A6C[346709029] + v35;
    v118 = (char *)&dword_140404A6C[346709031] + v35;
    v45 = v32 - (_QWORD)&dword_140404A6C[129717220];
    v120 = (char *)(0x140000000LL + v35 + 1391049484);
    v46 = (char *)&dword_140404A6C[346709020] + v45;
    v111 = (__int64)&dword_140404A6C[346709020] + v45;
    v121 = (char *)&dword_140404A6C[346709034] + v45;
    v47 = v116;
    v114 = (char *)(0x140000000LL + v45 + 1391049496);
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
  if ( *(int *)((char *)&dword_140404A6C[129716768] + v12) > 0 )
  {
    v51 = v13 - v12 - (_QWORD)&dword_140404A6C[129716834];
    v52 = (unsigned int *)((char *)&dword_140404A6C[129716834] + v12);
    do
    {
      ++v50;
      *v52 = *(_DWORD *)((char *)v52 + v51 + 0x192E9ACC8LL);
      v52[64] = *(_DWORD *)((char *)v52 + v51 + 0x192E9ADC8LL);
      ++v52;
    }
    while ( v50 < *(int *)((char *)&dword_140404A6C[129716768] + v12) );
  }
  *(unsigned int *)((char *)&dword_140404A6C[129721882] + v12) = *(unsigned int *)((char *)&dword_140404A6C[346732452]
                                                                                 + v13);
  *(unsigned int *)((char *)&dword_140404A6C[129721883] + v12) = *(unsigned int *)((char *)&dword_140404A6C[346732453]
                                                                                 + v13);
  v53 = *(unsigned int *)((char *)&dword_140404A6C[346731811] + v13);
  *(unsigned int *)((char *)&dword_140404A6C[129720373] + v12) = v53;
  if ( v53 > 0 )
  {
    v54 = (float *)((char *)&dword_140404A6C[129720385] + v12);
    v55 = (float *)((char *)&dword_140404A6C[346731831] + v13);
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
      *(float *)v110 = v73;
      v54[8] = v73;
      *(float *)&v110[4] = (float)((float)(v67 + v29) + v71) + v76;
      v54[9] = *(float *)&v110[4];
      *(float *)&v110[8] = (float)((float)(v68 + v30) + v72) + v75;
      v54[10] = *(float *)&v110[8];
      *((_DWORD *)v54 - 11) = sub_14005CF80(2, (unsigned int)v110, (_DWORD)v8, (_DWORD)v9, v62, (__int64)&v111);
      ++v56;
      v54 += 43;
      v55 += 20;
    }
    while ( v56 < *(int *)((char *)&dword_140404A6C[346731811] + v13) );
    v12 = v117;
    v6 = v113;
  }
  if ( a1 == 12 )
  {
    v77 = *((float *)v8 + 3) * 1.5;
    v78 = *((float *)v8 + 5);
    v111 = 0x4100000040802AABLL;
    v112 = 4.0052085;
    *(float *)v110 = v77 + v24;
    v79 = *((float *)v8 + 4) * 1.5;
    *(float *)&v110[8] = (float)(v78 * 1.5) + v30;
    *(float *)&v110[4] = v79 + v29;
    v80 = sub_14005CF80(1, (unsigned int)v110, (_DWORD)v8, (_DWORD)v9, 1126170624, (__int64)&v111);
    v81 = 188LL * v80;
    *(unsigned int *)((char *)&dword_140404A6C[129721807] + v12) = v80;
    *(_DWORD *)v110 = 0;
    *(_QWORD *)&v110[4] = 1069547520;
    v114 = nullptr;
    *(unsigned int *)((char *)&dword_140404A6C[18215752] + v81) = 1082130432;
    *(unsigned int *)((char *)&dword_140404A6C[18215753] + v81) = 1040187392;
    *(unsigned int *)((char *)&dword_140404A6C[18215754] + v81) = 1082130432;
    LODWORD(v81) = *(unsigned int *)((char *)&dword_140404A6C[129716719] + v12);
    v115 = 0;
    sub_14004E430(v81, v80, (unsigned int *)v110, (unsigned int *)&v114);
    *(unsigned int *)((char *)&dword_140404A6C[129721808] + v12) = sub_14004E5B0(
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129716719]
                                                                                     + v12),
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129721807]
                                                                                     + v12));
  }
  else
  {
    if ( a1 != 13 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[129720349] + v12) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[129720350] + v12) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[129720351] + v12) = 3;
      if ( a1 == 15 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[129720350] + v12) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[129720351] + v12) = 1;
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
    *(float *)v110 = v85;
    v87 = v83 - (float)(*((float *)v8 + 8) * 6.0);
    *(float *)&v110[4] = (float)(v29 - *((float *)v8 + 4)) - v86;
    *(float *)&v110[8] = v87;
    v88 = sub_14005CF80(1, (unsigned int)v110, (_DWORD)v8, (_DWORD)v9, 1201422336, (__int64)&v111);
    *(unsigned int *)((char *)&dword_140404A6C[129721812] + v12) = v88;
    v89 = *(unsigned int *)((char *)&dword_140404A6C[129716719] + v12);
    *(_DWORD *)&v110[8] = -1061158912;
    *(_QWORD *)v110 = 0xBF80000000000000uLL;
    v114 = nullptr;
    v115 = 0;
    sub_14004E430(v89, v88, (unsigned int *)v110, (unsigned int *)&v114);
    *(unsigned int *)((char *)&dword_140404A6C[129721814] + v12) = sub_14004E5B0(
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129716719]
                                                                                     + v12),
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129721812]
                                                                                     + v12));
    v90 = *((float *)v8 + 5) * 1.25;
    v91 = (float)(v29 - (float)(*((float *)v8 + 4) * 1.25)) + (float)(*((float *)v8 + 7) * 6.0);
    *(float *)v110 = (float)(v24 - (float)(*((float *)v8 + 3) * 1.25)) + (float)(*((float *)v8 + 6) * 6.0);
    v92 = *((float *)v8 + 8) * 6.0;
    *(float *)&v110[4] = v91;
    *(float *)&v110[8] = (float)(v30 - v90) + v92;
    v93 = sub_14005CF80(1, (unsigned int)v110, (_DWORD)v8, (_DWORD)v9, 1201422336, (__int64)&v111);
    *(unsigned int *)((char *)&dword_140404A6C[129721815] + v12) = v93;
    v94 = *(unsigned int *)((char *)&dword_140404A6C[129716719] + v12);
    *(_QWORD *)v110 = 0xBF80000000000000uLL;
    *(_DWORD *)&v110[8] = 1086324736;
    sub_14004E430(v94, v93, (unsigned int *)v110, (unsigned int *)&v114);
    *(unsigned int *)((char *)&dword_140404A6C[129721817] + v12) = sub_14004E5B0(
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129716719]
                                                                                     + v12),
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129721815]
                                                                                     + v12));
  }
  *(unsigned int *)((char *)&dword_140404A6C[129720349] + v12) = 2;
  *(unsigned int *)((char *)&dword_140404A6C[129720350] + v12) = 2;
  *(unsigned int *)((char *)&dword_140404A6C[129720351] + v12) = 3;
LABEL_27:
  v95 = *(int *)((char *)&dword_140404A6C[346732491] + v13);
  v96 = 0;
  *(unsigned int *)((char *)&dword_140404A6C[129721884] + v12) = v95;
  v116 = v95;
  if ( v95 >= 4 )
  {
    v97 = v13 - v12 - (_QWORD)&dword_140404A6C[129721886];
    v111 = (__int64)&dword_140404A6C[346732502] + v97;
    v114 = (char *)&dword_140404A6C[346732503] + v97;
    v121 = (char *)&dword_140404A6C[346732492] + v97;
    v120 = (char *)&dword_140404A6C[346732495] + v97;
    v98 = (unsigned int *)((char *)&dword_140404A6C[129721886] + v12);
    v119 = (char *)&dword_140404A6C[346732498] + v97;
    v99 = ((unsigned __int64)(v95 - 4) >> 2) + 1;
    v118 = (char *)(0x140000000LL + v97 + 1391143360);
    *(_QWORD *)v110 = 4 * v99;
    do
    {
      *(v98 - 1) = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732492] + v97);
      *v98 = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732493] + v97);
      v98[1] = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732494] + v97);
      v98[2] = *(unsigned int *)((char *)&dword_140404A6C[346732495] + v97 + (_QWORD)v98);
      v98[3] = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732496] + v97);
      v98[4] = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732497] + v97);
      v98[5] = *(unsigned int *)((char *)&dword_140404A6C[346732498] + v97 + (_QWORD)v98);
      v98[6] = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732499] + v97);
      v98[7] = *(unsigned int *)((char *)&dword_140404A6C[346732500] + v97 + (_QWORD)v98);
      v98 += 12;
      *(v98 - 4) = *(_DWORD *)&v118[(_QWORD)v98 - 48];
      *(v98 - 3) = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732502] + v97 - 48);
      *(v98 - 2) = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732503] + v97 - 48);
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
    v100 = v13 - v12 - (_QWORD)&dword_140404A6C[129721886];
    v101 = (unsigned int *)((char *)&dword_140404A6C[3 * v96 + 129721886] + v12);
    v102 = v95 - v96;
    do
    {
      *(v101 - 1) = *(_DWORD *)((char *)v101 + (_QWORD)&dword_140404A6C[346732492] + v100);
      *v101 = *(_DWORD *)((char *)v101 + (_QWORD)&dword_140404A6C[346732493] + v100);
      v101[1] = *(_DWORD *)((char *)v101 + (_QWORD)&dword_140404A6C[346732494] + v100);
      v101 += 3;
      --v102;
    }
    while ( v102 );
  }
  v103 = 5210LL * v6;
  v104 = dword_140404A6C[456202453] == 0;
  *(_QWORD *)&dword_140404A6C[v103 + 129720175] = -1;
  *(_QWORD *)&dword_140404A6C[v103 + 129720177] = -1;
  *(_QWORD *)&dword_140404A6C[v103 + 129720179] = -1;
  *(_QWORD *)&dword_140404A6C[v103 + 129720181] = -1;
  if ( !v104 )
  {
    v105 = dword_140404A6C[283831474];
    v106 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v106) = 3;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v106) = v105;
    v107 = *(unsigned int *)((char *)&dword_140404A6C[129716710] + v12);
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v106) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v106) = v107;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v106) = *(unsigned int *)((char *)&dword_140404A6C[129716715]
                                                                                    + v12);
  }
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v108 = dword_140404A6C[456202445];
    v109 = (_DWORD *)(0x140000000LL + 8LL * v6 + 1759763392);
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

