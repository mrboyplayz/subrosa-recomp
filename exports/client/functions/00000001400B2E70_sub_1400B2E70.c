/* Address: 0x1400b2e70 | Name: sub_1400B2E70 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1400B2E70(int a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  unsigned int *v3; // r12
  float v4; // xmm7_4
  float *v5; // rax
  float v6; // xmm8_4
  int v7; // esi
  float v8; // xmm9_4
  __int64 v9; // r13
  float v10; // xmm10_4
  float v11; // xmm6_4
  float *v12; // r14
  float *v13; // r15
  __int64 v14; // rdi
  float *v15; // rbx
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  unsigned int v18; // xmm1_4
  int v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  unsigned int v23; // xmm1_4
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm1_4
  __int64 v26; // rcx
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float *v30; // r13
  float *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r13
  int v35; // edi
  __int64 v36; // r15
  int *v37; // r14
  int *v38; // r12
  int v39; // xmm6_4
  unsigned int *v40; // rbx
  __int64 v41; // r10
  __int64 v42; // rdx
  float v43; // xmm1_4
  float v44; // xmm0_4
  unsigned int v45; // xmm3_4
  unsigned int v46; // xmm4_4
  __int64 v47; // r12
  int v48; // r15d
  unsigned __int64 v49; // rcx
  float *v50; // rdx
  unsigned int *v51; // r13
  float v52; // xmm7_4
  __int64 v53; // r14
  unsigned int *v54; // rsi
  float v55; // xmm8_4
  float *v56; // rcx
  int v57; // ebx
  float *v58; // rdi
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm7_4
  float v62; // xmm0_4
  float v63; // xmm7_4
  float v64; // xmm0_4
  float v65; // xmm8_4
  unsigned int v66; // xmm0_4
  float v67; // xmm8_4
  float v68; // xmm13_4
  float v69; // xmm7_4
  float v70; // xmm8_4
  __int64 v71; // rax
  float *v72; // rcx
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm0_4
  float v76; // xmm7_4
  float v77; // xmm0_4
  float v78; // xmm7_4
  float v79; // xmm0_4
  float v80; // xmm8_4
  float v81; // xmm0_4
  float v82; // xmm8_4
  float v83; // xmm3_4
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm1_4
  float v87; // xmm0_4
  float v88; // xmm1_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  __int64 v91; // r10
  __int64 v92; // rdx
  unsigned int v93; // xmm7_4
  unsigned int v94; // xmm0_4
  float v95; // xmm1_4
  unsigned int v96; // xmm7_4
  unsigned int v97; // xmm8_4
  __int64 v99; // [rsp-20h] [rbp-CAE0h] BYREF
  unsigned int *v100; // [rsp+0h] [rbp-CAC0h]
  float *v101; // [rsp+8h] [rbp-CAB8h]
  float *v102; // [rsp+10h] [rbp-CAB0h]
  unsigned __int64 *v103; // [rsp+18h] [rbp-CAA8h]
  float *v104; // [rsp+20h] [rbp-CAA0h]
  float *v105; // [rsp+30h] [rbp-CA90h]
  float v106; // [rsp+38h] [rbp-CA88h] BYREF
  unsigned __int64 v107; // [rsp+3Ch] [rbp-CA84h]
  __int64 v108; // [rsp+48h] [rbp-CA78h] BYREF
  float v109; // [rsp+50h] [rbp-CA70h] BYREF
  float v110; // [rsp+58h] [rbp-CA68h] BYREF
  float v111; // [rsp+5Ch] [rbp-CA64h]
  float v112; // [rsp+CA40h] [rbp-80h]
  float v113; // [rsp+CA48h] [rbp-78h] BYREF
  unsigned __int64 v114; // [rsp+CA4Ch] [rbp-74h]
  float v115; // [rsp+CA58h] [rbp-68h] BYREF
  float v116; // [rsp+CA5Ch] [rbp-64h]
  float v117; // [rsp+CA60h] [rbp-60h]
  __int64 v118; // [rsp+CA68h] [rbp-58h]
  float v119; // [rsp+CA70h] [rbp-50h] BYREF
  float v120; // [rsp+CA74h] [rbp-4Ch]
  float v121; // [rsp+CA78h] [rbp-48h]
  float v122; // [rsp+CA7Ch] [rbp-44h] BYREF
  unsigned __int64 v123; // [rsp+CA80h] [rbp-40h]
  float v124; // [rsp+CA88h] [rbp-38h] BYREF
  float v125; // [rsp+CA8Ch] [rbp-34h]
  float v126; // [rsp+CA90h] [rbp-30h]
  float v127[3]; // [rsp+CA94h] [rbp-2Ch] BYREF
  unsigned __int64 v128; // [rsp+CAA0h] [rbp-20h] BYREF
  int v129; // [rsp+CAA8h] [rbp-18h]
  float *v130; // [rsp+CAB0h] [rbp-10h]
  unsigned __int64 v131; // [rsp+CAB8h] [rbp-8h] BYREF
  float v132; // [rsp+CAC0h] [rbp+0h]
  unsigned int v133; // [rsp+CAD0h] [rbp+10h] BYREF
  _BYTE v134[2056]; // [rsp+CAD8h] [rbp+18h] BYREF
  int v135[3]; // [rsp+D2E0h] [rbp+820h] BYREF
  char v136; // [rsp+D2ECh] [rbp+82Ch] BYREF
  int v137; // [rsp+192E4h] [rbp+C824h]
  __int64 v138; // [rsp+192F0h] [rbp+C830h]

  v1 = 28664LL * a1;
  v109 = *(float *)&a1;
  v135[0] = 0;
  v137 = 0;
  v130 = (float *)((char *)&dword_140404A6C[280651418] + v1);
  v118 = v1;
  sub_140188900(
    v135,
    (float *)((char *)&dword_140404A6C[280651415] + v1),
    (float *)((char *)&dword_140404A6C[280651418] + v1),
    4);
  v2 = v135[0];
  v3 = &dword_140404A6C[282486069];
  v4 = v121;
  v5 = (float *)((char *)&dword_140404A6C[280651439] + v1);
  v6 = v120;
  v7 = 0;
  v8 = v119;
  v9 = 0;
  v105 = (float *)((char *)&dword_140404A6C[280651439] + v1);
  do
  {
    if ( v7 != 12
      && v7 != 15
      && (v7 != 11 && v7 != 14
       || *(unsigned int *)((char *)&dword_140404A6C[280651325] + v1) == 2
       || *(int *)((char *)&dword_140404A6C[280651318] + v1) <= 0
       || *(int *)((char *)&dword_140404A6C[280658299] + v1) < 50) )
    {
      v10 = *(float *)v3;
      v11 = 65536.0;
      v125 = 65536.0;
      if ( v2 > 0 )
      {
        v12 = (float *)((char *)&dword_140404A6C[280651508] + v1 + v9);
        v13 = (float *)((char *)&dword_140404A6C[280651505] + v1 + v9);
        v14 = (unsigned int)v2;
        v15 = (float *)&v136;
        do
        {
          v16 = *((_DWORD *)v15 - 2);
          v17 = *((_DWORD *)v15 - 1);
          v104 = &v115;
          v131 = __PAIR64__(v17, v16);
          v18 = *((_DWORD *)v15 + 1);
          v132 = *v15;
          v128 = __PAIR64__(*((_DWORD *)v15 + 2), v18);
          v19 = *((_DWORD *)v15 + 3);
          v103 = &v128;
          v20 = v15[4];
          v129 = v19;
          v21 = v15[5];
          v115 = v20;
          v22 = v15[6];
          v116 = v21;
          v23 = *((unsigned int *)v15 + 7);
          v102 = (float *)&v131;
          v117 = v22;
          v24 = *((_DWORD *)v15 + 8);
          v106 = *(float *)&v23;
          v25 = *((_DWORD *)v15 + 9);
          *(float *)&v101 = v10;
          v107 = __PAIR64__(v25, v24);
          if ( (unsigned int)sub_140035690(
                               &v113,
                               &v106,
                               (float *)&v108,
                               v13,
                               v12,
                               (__int64)v101,
                               (float *)&v131,
                               (float *)&v128,
                               &v115)
            && v11 > *(float *)&v108 )
          {
            v11 = *(float *)&v108;
            v8 = v113;
            v6 = *(float *)&v114;
            v4 = *((float *)&v114 + 1);
            v122 = v106;
            v123 = v107;
          }
          v15 += 12;
          --v14;
        }
        while ( v14 );
        v5 = v105;
        v125 = v11;
        v121 = v4;
        v120 = v6;
        v119 = v8;
        if ( v11 < 65536.0 )
        {
          v26 = *(int *)v105;
          v27 = *(float *)v3;
          LODWORD(v102) = 1031798784;
          LODWORD(v101) = 1023410176;
          LODWORD(v100) = 1053609165;
          v28 = v6 - *(float *)&dword_140404A6C[47 * v26 + 18215716];
          v110 = v8 - *(float *)&dword_140404A6C[47 * v26 + 18215715];
          v29 = v4 - *(float *)&dword_140404A6C[47 * v26 + 18215717];
          v111 = v28;
          v112 = v29;
          sub_140005160(v26, (unsigned int *)&v110, (unsigned int *)&v122, v27 - v11, 0x3ECCCCCDu, 0.03125, 0x3D800000u);
          v5 = v105;
        }
        v2 = v135[0];
        v1 = v118;
      }
    }
    v5 += 78;
    ++v7;
    v9 += 312;
    v105 = v5;
    v3 += 25;
  }
  while ( v7 < 16 );
  sub_140038230(
    (int *)&v133,
    (int *)((char *)&dword_140404A6C[280651421] + v1),
    (int *)((char *)&dword_140404A6C[280651424] + v1));
  if ( (int)v133 > 0 )
  {
    v30 = (float *)v134;
    v31 = v130;
    v105 = (float *)v134;
    v32 = v133;
    v108 = v133;
    do
    {
      v33 = 1760LL * *(int *)v30;
      if ( *(float *)&dword_140404A6C[v33 + 278845958] <= *v31
        && *(float *)&dword_140404A6C[v33 + 278845961] >= *(float *)((char *)&dword_140404A6C[280651415] + v1)
        && *(float *)&dword_140404A6C[v33 + 278845960] <= v31[2]
        && *(float *)&dword_140404A6C[v33 + 278845963] >= *(float *)((char *)&dword_140404A6C[280651417] + v1)
        && *(float *)&dword_140404A6C[v33 + 278845959] <= v31[1]
        && *(float *)&dword_140404A6C[v33 + 278845962] >= *(float *)((char *)&dword_140404A6C[280651416] + v1) )
      {
        v34 = v118;
        v35 = 0;
        v36 = 0;
        v37 = (int *)&dword_140404A6C[282486069];
        v38 = (int *)((char *)&dword_140404A6C[280651439] + v1);
        do
        {
          if ( v35 == 7 || (unsigned int)v35 <= 4 || (unsigned int)v35 >= 0xA )
          {
            v39 = *v37;
            v40 = &dword_140404A6C[1268 * dword_140404A6C[v33 + 278845898] + 278522247];
            sub_14011BF40(
              (__int64)v135,
              (__int64)v40,
              (float *)&dword_140404A6C[47 * dword_140404A6C[v33 + 278845915] + 18215715],
              (float *)&dword_140404A6C[47 * dword_140404A6C[v33 + 278845915] + 18215724]);
            if ( sub_140033BE0(
                   &v119,
                   (__int64)v40,
                   (__int64)v135,
                   (float *)((char *)&dword_140404A6C[v36 + 280651505] + v34),
                   (float *)((char *)&dword_140404A6C[v36 + 280651508] + v34),
                   v39) )
            {
              v41 = *v38;
              v42 = (int)dword_140404A6C[v33 + 278845915];
              v113 = v122;
              LODWORD(v104) = 1040187392;
              v114 = v123;
              LODWORD(v103) = 1031798784;
              v115 = v119;
              v116 = v120;
              v117 = v121;
              LODWORD(v102) = 1053609165;
              v43 = v120 - *(float *)&dword_140404A6C[47 * v41 + 18215716];
              v110 = v119 - *(float *)&dword_140404A6C[47 * v41 + 18215715];
              v112 = v121 - *(float *)&dword_140404A6C[47 * v41 + 18215717];
              v44 = *(float *)v37 - v125;
              v111 = v43;
              *(float *)&v101 = v44;
              *(float *)&v45 = v120 - *(float *)&dword_140404A6C[47 * v42 + 18215716];
              *(float *)&v46 = v121 - *(float *)&dword_140404A6C[47 * v42 + 18215717];
              v106 = v119 - *(float *)&dword_140404A6C[47 * v42 + 18215715];
              v107 = __PAIR64__(v46, v45);
              sub_1400052C0(
                v41,
                v42,
                (unsigned int *)&v110,
                (unsigned int *)&v106,
                (unsigned int *)&v113,
                v44,
                0x3ECCCCCDu,
                0.0625,
                0x3E000000u);
              *(_QWORD *)&dword_140404A6C[v33 + 278845895] = 0;
            }
          }
          ++v35;
          v36 += 78;
          v38 += 78;
          v37 += 25;
        }
        while ( v35 < 16 );
        v30 = v105;
        v32 = v108;
        v1 = v118;
        v31 = v130;
      }
      v30 += 2;
      --v32;
      v105 = v30;
      v108 = v32;
    }
    while ( v32 );
  }
  if ( LODWORD(v109) + 1 < 256LL )
  {
    v47 = 7166LL * (LODWORD(v109) + 1);
    do
    {
      if ( dword_140404A6C[v47 + 280651303]
        && dword_140404A6C[v47 + 280651313] == -1
        && *(float *)&dword_140404A6C[v47 + 280651415] <= *v130
        && *(float *)&dword_140404A6C[v47 + 280651418] >= *(float *)((char *)&dword_140404A6C[280651415] + v1)
        && *(float *)&dword_140404A6C[v47 + 280651417] <= v130[2]
        && *(float *)&dword_140404A6C[v47 + 280651420] >= *(float *)((char *)&dword_140404A6C[280651417] + v1)
        && *(float *)&dword_140404A6C[v47 + 280651416] <= v130[1]
        && *(float *)&dword_140404A6C[v47 + 280651419] >= *(float *)((char *)&dword_140404A6C[280651416] + v1) )
      {
        v48 = 0;
        v49 = 0;
        LODWORD(v108) = 0;
        v50 = (float *)((char *)&dword_140404A6C[280651442] + v1);
        v128 = 0;
        v105 = (float *)((char *)&dword_140404A6C[280651442] + v1);
        v51 = &dword_140404A6C[282486067];
        do
        {
          if ( v48 == 13 || (unsigned int)v48 <= 0xA || (unsigned int)v48 >= 0x10 )
          {
            v52 = *((float *)v51 + 1) * -0.5;
            v53 = 0;
            v54 = &dword_140404A6C[282486067];
            v55 = *((float *)v51 + 1) * 0.5;
            v56 = (float *)((char *)&dword_140404A6C[3 * v49 + 280651452 + 3 * (int)*v51] + v1);
            v57 = 0;
            v58 = (float *)&dword_140404A6C[v47 + 280651442];
            v59 = (float)(v55 * v56[1]) + *(v50 - 1);
            v119 = (float)(v52 * *v56) + *(v50 - 2);
            v60 = v52 * v56[1];
            v61 = v52 * v56[2];
            v62 = v60 + *(v50 - 1);
            *(float *)&v123 = v59;
            v63 = v61 + *v50;
            v120 = v62;
            v64 = v55 * *v56;
            v65 = v55 * v56[2];
            *(float *)&v66 = v64 + *(v50 - 2);
            v121 = v63;
            v67 = v65 + *v50;
            v122 = *(float *)&v66;
            *((float *)&v123 + 1) = v67;
            do
            {
              if ( v57 == 13 || (unsigned int)v57 <= 0xA || (unsigned int)v57 >= 0x10 )
              {
                v68 = *((float *)v51 + 2) + *((float *)v54 + 2);
                v69 = *((float *)v54 + 1) * -0.5;
                v70 = *((float *)v54 + 1) * 0.5;
                v71 = 3 * (v53 + (int)*v54);
                *(float *)&v103 = v68;
                v72 = (float *)&dword_140404A6C[v71 + 280651452 + v47];
                v102 = v127;
                v101 = &v124;
                v73 = v69 * *v72;
                v100 = (unsigned int *)&v122;
                v74 = (float)(v70 * v72[1]) + *(v58 - 1);
                v124 = v73 + *(v58 - 2);
                v75 = v69 * v72[1];
                v76 = v69 * v72[2];
                v77 = v75 + *(v58 - 1);
                v127[1] = v74;
                v78 = v76 + *v58;
                v125 = v77;
                v79 = v70 * *v72;
                v80 = v70 * v72[2];
                v81 = v79 + *(v58 - 2);
                v126 = v78;
                v82 = v80 + *v58;
                v127[0] = v81;
                v127[2] = v82;
                if ( sub_1400D6890(&v115, &v113, &v109, &v119, &v122, &v124, v127, v68) )
                {
                  v83 = v113 - v115;
                  v84 = *(float *)&v114 - v116;
                  v85 = *((float *)&v114 + 1) - v117;
                  v86 = fsqrt((float)((float)(v84 * v84) + (float)(v83 * v83)) + (float)(v85 * v85));
                  if ( v86 == 0.0 )
                  {
                    v88 = 0.0;
                    v89 = 0.0;
                    v90 = 0.0;
                  }
                  else
                  {
                    v87 = 1.0 / v86;
                    v88 = (float)(1.0 / v86) * v83;
                    v89 = v87 * v84;
                    v90 = v87 * v85;
                  }
                  v91 = *((int *)v58 - 3);
                  v92 = *((int *)v105 - 3);
                  *(float *)&dword_140404A6C[73006986] = v90;
                  *(float *)&v93 = (float)(*(float *)&v114 + v116) * 0.5;
                  *(float *)&dword_140404A6C[73006984] = v88;
                  *(float *)&dword_140404A6C[73006981] = (float)(v113 + v115) * 0.5;
                  *(float *)&v94 = *(float *)&dword_140404A6C[73006981]
                                 - *(float *)&dword_140404A6C[47 * v91 + 18215715];
                  dword_140404A6C[73006982] = v93;
                  v95 = *(float *)&v93 - *(float *)&dword_140404A6C[47 * v91 + 18215716];
                  *(float *)&dword_140404A6C[73006983] = (float)(*((float *)&v114 + 1) + v117) * 0.5;
                  *(float *)&dword_140404A6C[73006985] = v89;
                  v110 = *(float *)&v94;
                  v112 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v91 + 18215717];
                  LODWORD(v104) = 1031798784;
                  LODWORD(v103) = 1023410176;
                  LODWORD(v102) = 1053609165;
                  *(float *)&v101 = v68 - v109;
                  v111 = v95;
                  *(float *)&v96 = *(float *)&v93 - *(float *)&dword_140404A6C[47 * v92 + 18215716];
                  *(float *)&v97 = *(float *)&dword_140404A6C[73006983]
                                 - *(float *)&dword_140404A6C[47 * v92 + 18215717];
                  v106 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v92 + 18215715];
                  v107 = __PAIR64__(v97, v96);
                  sub_1400052C0(
                    v91,
                    v92,
                    (unsigned int *)&v110,
                    (unsigned int *)&v106,
                    &dword_140404A6C[73006984],
                    v68 - v109,
                    0x3ECCCCCDu,
                    0.03125,
                    0x3D800000u);
                }
              }
              ++v57;
              v53 += 26;
              v54 += 25;
              v58 += 78;
            }
            while ( v57 < 16 );
            v48 = v108;
            v50 = v105;
            v49 = v128;
            v1 = v118;
          }
          ++v48;
          v49 += 26LL;
          v50 += 78;
          LODWORD(v108) = v48;
          v51 += 25;
          v128 = v49;
          v105 = v50;
        }
        while ( v48 < 16 );
      }
      v47 += 7166;
    }
    while ( v47 < 1834496 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v99 ^ v138);
}

