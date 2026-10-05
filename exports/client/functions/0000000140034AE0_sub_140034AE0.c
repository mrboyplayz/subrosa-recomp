/* Address: 0x140034ae0 | Name: sub_140034AE0 | Size: 2987 bytes */
_BOOL8 __fastcall sub_140034AE0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        float a9)
{
  float v10; // xmm0_4
  float v14; // xmm9_4
  signed int v15; // r14d
  unsigned int v16; // r8d
  __m128i v17; // xmm15
  __int64 v18; // r12
  float v19; // xmm1_4
  float v20; // xmm14_4
  float v21; // xmm15_4
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  float v26; // xmm4_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  __int64 v29; // rax
  float v30; // xmm8_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  __int64 v33; // rax
  float v34; // xmm8_4
  float v35; // xmm10_4
  float v36; // xmm11_4
  float v37; // xmm2_4
  float v38; // xmm5_4
  __int64 v39; // rax
  float v40; // xmm10_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm11_4
  float v45; // xmm3_4
  float v46; // xmm0_4
  float v47; // xmm4_4
  float v48; // xmm10_4
  float v49; // xmm11_4
  float v50; // xmm0_4
  float v51; // xmm2_4
  int v52; // xmm1_4
  int v53; // xmm0_4
  int v54; // xmm1_4
  int v55; // xmm0_4
  float v56; // xmm2_4
  int v57; // xmm1_4
  int v58; // xmm0_4
  int v59; // xmm1_4
  int v60; // xmm0_4
  signed int v61; // r15d
  int v62; // r12d
  __int64 v63; // r14
  float v64; // xmm4_4
  float v65; // xmm3_4
  __int64 v66; // rax
  float v67; // xmm10_4
  float v68; // xmm11_4
  float v69; // xmm5_4
  float v70; // xmm1_4
  float v71; // xmm6_4
  float v72; // xmm3_4
  float v73; // xmm8_4
  float v74; // xmm4_4
  float v75; // xmm7_4
  float v76; // xmm2_4
  float v77; // xmm5_4
  float v78; // xmm0_4
  float v79; // xmm2_4
  float v80; // xmm4_4
  float v81; // xmm10_4
  float v82; // xmm7_4
  float v83; // xmm6_4
  float v84; // xmm3_4
  float v85; // xmm8_4
  float v86; // xmm5_4
  float v87; // xmm0_4
  float v88; // xmm11_4
  float v89; // xmm10_4
  float v90; // xmm0_4
  float v91; // xmm2_4
  int v92; // xmm1_4
  int v93; // xmm0_4
  int v94; // xmm1_4
  int v95; // xmm0_4
  float v96; // xmm2_4
  int v97; // xmm1_4
  int v98; // xmm0_4
  int v99; // xmm1_4
  int v100; // xmm0_4
  __int64 v101; // rax
  float v102; // xmm10_4
  float v103; // xmm11_4
  float v104; // xmm5_4
  float v105; // xmm1_4
  float v106; // xmm6_4
  float v107; // xmm3_4
  float v108; // xmm8_4
  float v109; // xmm4_4
  float v110; // xmm7_4
  float v111; // xmm2_4
  float v112; // xmm5_4
  float v113; // xmm0_4
  float v114; // xmm2_4
  float v115; // xmm4_4
  float v116; // xmm10_4
  float v117; // xmm7_4
  float v118; // xmm6_4
  float v119; // xmm3_4
  float v120; // xmm8_4
  float v121; // xmm5_4
  float v122; // xmm0_4
  float v123; // xmm11_4
  float v124; // xmm10_4
  float v125; // xmm0_4
  float v126; // xmm2_4
  int v127; // xmm1_4
  int v128; // xmm0_4
  int v129; // xmm1_4
  int v130; // xmm0_4
  int v131; // eax
  float v132; // xmm2_4
  int v133; // xmm1_4
  int v134; // xmm0_4
  int v135; // xmm1_4
  int v136; // xmm0_4
  __int64 v138; // [rsp+28h] [rbp-D8h]
  __int64 v139; // [rsp+28h] [rbp-D8h]
  __int64 v140; // [rsp+28h] [rbp-D8h]
  __int64 v141; // [rsp+28h] [rbp-D8h]
  __int64 v142; // [rsp+28h] [rbp-D8h]
  int v143; // [rsp+48h] [rbp-B8h]
  int v144; // [rsp+48h] [rbp-B8h]
  int v145; // [rsp+48h] [rbp-B8h]
  int v146; // [rsp+48h] [rbp-B8h]
  int v147; // [rsp+48h] [rbp-B8h]
  int v148; // [rsp+50h] [rbp-B0h]
  int v149; // [rsp+50h] [rbp-B0h]
  __int64 v150; // [rsp+50h] [rbp-B0h]
  int v151; // [rsp+50h] [rbp-B0h]
  int v152; // [rsp+50h] [rbp-B0h]
  int v153; // [rsp+50h] [rbp-B0h]
  __int64 v154; // [rsp+58h] [rbp-A8h] BYREF
  float v155; // [rsp+60h] [rbp-A0h]
  int v156; // [rsp+68h] [rbp-98h] BYREF
  int v157; // [rsp+6Ch] [rbp-94h]
  int v158; // [rsp+70h] [rbp-90h]
  float v159; // [rsp+78h] [rbp-88h] BYREF
  float v160; // [rsp+7Ch] [rbp-84h]
  float v161; // [rsp+80h] [rbp-80h]
  float v162; // [rsp+88h] [rbp-78h] BYREF
  float v163; // [rsp+8Ch] [rbp-74h]
  float v164; // [rsp+90h] [rbp-70h]
  float v165; // [rsp+98h] [rbp-68h] BYREF
  float v166; // [rsp+9Ch] [rbp-64h]
  float v167; // [rsp+A0h] [rbp-60h]
  float v168; // [rsp+A8h] [rbp-58h] BYREF
  float v169; // [rsp+ACh] [rbp-54h]
  float v170; // [rsp+B0h] [rbp-50h]
  unsigned int v171; // [rsp+1A0h] [rbp+A0h]
  __int64 v172; // [rsp+1C0h] [rbp+C0h]
  float v173; // [rsp+1C8h] [rbp+C8h]

  v10 = 65536.0;
  v14 = a9;
  v15 = 0;
  *a3 = 65536.0;
  v16 = HIWORD(a8);
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a7 + 4));
  v18 = 58LL * (unsigned __int16)a8;
  v19 = (float)*(int *)(a7 + 8);
  v171 = HIWORD(a8);
  v20 = (float)*(int *)a7;
  v172 = v18 * 4;
  v173 = v19;
  v21 = _mm_cvtepi32_ps(v17).m128_f32[0];
  if ( (int)dword_140404A6C[v18 + 20074623] > 0 )
  {
    v22 = 0;
    v148 = 0;
    do
    {
      v23 = *(_QWORD *)&dword_140404A6C[v18 + 20074615];
      v24 = *(_QWORD *)&dword_140404A6C[v18 + 20074631];
      v25 = 3 * *(_DWORD *)(v22 + v24);
      v26 = v19 + *(float *)(v23 + 4 * v25 + 8);
      v27 = v20 + *(float *)(v23 + 4 * v25);
      v28 = (float)(v21 + *(float *)(v23 + 4 * v25 + 4)) * v14;
      v29 = 3 * *(_DWORD *)(v22 + v24 + 4);
      v164 = v26 * v14;
      v30 = v20 + *(float *)(v23 + 4 * v29);
      v31 = v21 + *(float *)(v23 + 4 * v29 + 4);
      v32 = v19 + *(float *)(v23 + 4 * v29 + 8);
      LODWORD(v29) = *(_DWORD *)(v22 + v24 + 8);
      v162 = v27 * v14;
      v33 = 3 * (int)v29;
      v165 = v30 * v14;
      v34 = (float)(v30 * v14) - (float)(v27 * v14);
      v35 = v19 + *(float *)(v23 + 4 * v33 + 8);
      v36 = v20 + *(float *)(v23 + 4 * v33);
      v37 = v21 + *(float *)(v23 + 4 * v33 + 4);
      LODWORD(v33) = *(_DWORD *)(v22 + v24 + 12);
      v166 = v31 * v14;
      v38 = (float)(v31 * v14) - v28;
      v39 = 3 * (int)v33;
      v161 = v35 * v14;
      v40 = (float)(v35 * v14) - (float)(v26 * v14);
      v41 = v20 + *(float *)(v23 + 4 * v39);
      v42 = v21 + *(float *)(v23 + 4 * v39 + 4);
      v160 = v37 * v14;
      v43 = (float)(v37 * v14) - v28;
      v159 = v36 * v14;
      v44 = (float)(v36 * v14) - (float)(v27 * v14);
      v167 = v32 * v14;
      v45 = (float)(v32 * v14) - (float)(v26 * v14);
      v168 = v41 * v14;
      v46 = (float)(v173 + *(float *)(v23 + 4 * v39 + 8)) * v14;
      v163 = v28;
      v169 = v42 * v14;
      v170 = v46;
      v47 = (float)(v43 * v45) - (float)(v40 * v38);
      v48 = (float)(v40 * v34) - (float)(v44 * v45);
      v49 = (float)(v44 * v38) - (float)(v43 * v34);
      v50 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49));
      if ( v50 == 0.0 )
      {
        v154 = 0;
        v155 = 0.0;
      }
      else
      {
        *(float *)&v154 = (float)(1.0 / v50) * v47;
        *((float *)&v154 + 1) = (float)(1.0 / v50) * v48;
        v155 = (float)(1.0 / v50) * v49;
      }
      LODWORD(v138) = a6;
      if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, int, int))sub_140035690)(
                           (unsigned int)&v156,
                           (unsigned int)&v154,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           v138,
                           (__int64)&v162,
                           (__int64)&v165,
                           (__int64)&v159,
                           v143,
                           v148,
                           v154,
                           LODWORD(v155),
                           v156,
                           v158) )
      {
        v51 = a9;
        if ( a9 < *a3 )
        {
          v52 = v157;
          *a1 = v156;
          v53 = v158;
          a1[1] = v52;
          v54 = v154;
          a1[2] = v53;
          v55 = HIDWORD(v154);
          *(_DWORD *)a2 = v54;
          *(float *)(a2 + 8) = v155;
          *(_DWORD *)(a2 + 4) = v55;
          *a3 = v51;
          dword_140404A6C[73007010] = v15;
        }
      }
      LODWORD(v139) = a6;
      if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, int, int))sub_140035690)(
                           (unsigned int)&v156,
                           (unsigned int)&v154,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           v139,
                           (__int64)&v162,
                           (__int64)&v159,
                           (__int64)&v168,
                           v144,
                           v149,
                           v154,
                           LODWORD(v155),
                           v156,
                           v158) )
      {
        v56 = a9;
        if ( a9 < *a3 )
        {
          v57 = v157;
          *a1 = v156;
          v58 = v158;
          a1[1] = v57;
          v59 = v154;
          a1[2] = v58;
          v60 = HIDWORD(v154);
          *(_DWORD *)a2 = v59;
          *(float *)(a2 + 8) = v155;
          *(_DWORD *)(a2 + 4) = v60;
          *a3 = v56;
          dword_140404A6C[73007010] = v15;
        }
      }
      v19 = v173;
      v22 = v150 + 16;
      ++v15;
      v148 = v150 + 16;
    }
    while ( v15 < (int)dword_140404A6C[v18 + 20074623] );
    v10 = *a3;
    LOWORD(v16) = v171;
  }
  v61 = 0;
  if ( (int)dword_140404A6C[v18 + 20074651] > 0 )
  {
    v62 = 1;
    v63 = 0;
    do
    {
      if ( ((unsigned __int16)v16 & (unsigned __int16)v62 & 0x3FF) == 0 )
      {
        v64 = v19;
        v65 = v19;
        v66 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v172);
        v67 = v19 + *(float *)(v63 + v66 + 32);
        v68 = v20 + *(float *)(v63 + v66 + 24);
        v69 = v21 + *(float *)(v63 + v66 + 4);
        v70 = v21 + *(float *)(v63 + v66 + 40);
        v71 = v21 + *(float *)(v63 + v66 + 16);
        v72 = v65 + *(float *)(v63 + v66 + 20);
        v73 = v20 + *(float *)(v63 + v66 + 12);
        v74 = v64 + *(float *)(v63 + v66 + 8);
        v75 = v20 + *(float *)(v63 + v66);
        v76 = (float)(v21 + *(float *)(v63 + v66 + 28)) * v14;
        v168 = (float)(v20 + *(float *)(v63 + v66 + 36)) * v14;
        v77 = v69 * v14;
        v78 = (float)(v173 + *(float *)(v63 + v66 + 44)) * v14;
        v160 = v76;
        v79 = v76 - v77;
        v170 = v78;
        v80 = v74 * v14;
        v161 = v67 * v14;
        v81 = (float)(v67 * v14) - v80;
        v82 = v75 * v14;
        v163 = v77;
        v159 = v68 * v14;
        v169 = v70 * v14;
        v166 = v71 * v14;
        v83 = (float)(v71 * v14) - v77;
        v167 = v72 * v14;
        v84 = (float)(v72 * v14) - v80;
        v165 = v73 * v14;
        v85 = (float)(v73 * v14) - v82;
        v162 = v82;
        v164 = v80;
        v86 = (float)(v79 * v84) - (float)(v81 * v83);
        v87 = (float)(v68 * v14) - v82;
        v88 = (float)(v87 * v83) - (float)(v79 * v85);
        v89 = (float)(v81 * v85) - (float)(v87 * v84);
        v90 = fsqrt((float)((float)(v89 * v89) + (float)(v86 * v86)) + (float)(v88 * v88));
        if ( v90 == 0.0 )
        {
          v154 = 0;
          v155 = 0.0;
        }
        else
        {
          *(float *)&v154 = (float)(1.0 / v90) * v86;
          *((float *)&v154 + 1) = (float)(1.0 / v90) * v89;
          v155 = (float)(1.0 / v90) * v88;
        }
        LODWORD(v138) = a6;
        if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, int, int))sub_140035690)(
                             (unsigned int)&v156,
                             (unsigned int)&v154,
                             (unsigned int)&a9,
                             a4,
                             a5,
                             v138,
                             (__int64)&v162,
                             (__int64)&v165,
                             (__int64)&v159,
                             v143,
                             v148,
                             v154,
                             LODWORD(v155),
                             v156,
                             v158) )
        {
          v91 = a9;
          if ( a9 < *a3 )
          {
            v92 = v157;
            *a1 = v156;
            v93 = v158;
            a1[1] = v92;
            v94 = v154;
            a1[2] = v93;
            v95 = HIDWORD(v154);
            *(_DWORD *)a2 = v94;
            *(float *)(a2 + 8) = v155;
            *(_DWORD *)(a2 + 4) = v95;
            *a3 = v91;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        LODWORD(v140) = a6;
        if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, int, int))sub_140035690)(
                             (unsigned int)&v156,
                             (unsigned int)&v154,
                             (unsigned int)&a9,
                             a4,
                             a5,
                             v140,
                             (__int64)&v162,
                             (__int64)&v159,
                             (__int64)&v168,
                             v145,
                             v151,
                             v154,
                             LODWORD(v155),
                             v156,
                             v158) )
        {
          v96 = a9;
          if ( a9 < *a3 )
          {
            v97 = v157;
            *a1 = v156;
            v98 = v158;
            a1[1] = v97;
            v99 = v154;
            a1[2] = v98;
            v100 = HIDWORD(v154);
            *(_DWORD *)a2 = v99;
            *(float *)(a2 + 8) = v155;
            *(_DWORD *)(a2 + 4) = v100;
            *a3 = v96;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        v101 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v172);
        v102 = v173 + *(float *)(v63 + v101 + 20);
        v103 = v20 + *(float *)(v63 + v101 + 12);
        v104 = v21 + *(float *)(v63 + v101 + 40);
        v105 = v21 + *(float *)(v63 + v101 + 4);
        v106 = v21 + *(float *)(v63 + v101 + 28);
        v107 = v173 + *(float *)(v63 + v101 + 32);
        v108 = v20 + *(float *)(v63 + v101 + 24);
        v109 = v173 + *(float *)(v63 + v101 + 44);
        v110 = v20 + *(float *)(v63 + v101 + 36);
        v111 = (float)(v21 + *(float *)(v63 + v101 + 16)) * v14;
        v168 = (float)(v20 + *(float *)(v63 + v101)) * v14;
        v112 = v104 * v14;
        v113 = (float)(v173 + *(float *)(v63 + v101 + 8)) * v14;
        v160 = v111;
        v114 = v111 - v112;
        v170 = v113;
        v115 = v109 * v14;
        v161 = v102 * v14;
        v116 = (float)(v102 * v14) - v115;
        v117 = v110 * v14;
        v163 = v112;
        v159 = v103 * v14;
        v169 = v105 * v14;
        v166 = v106 * v14;
        v118 = (float)(v106 * v14) - v112;
        v167 = v107 * v14;
        v119 = (float)(v107 * v14) - v115;
        v165 = v108 * v14;
        v120 = (float)(v108 * v14) - v117;
        v162 = v117;
        v164 = v115;
        v121 = (float)(v114 * v119) - (float)(v116 * v118);
        v122 = (float)(v103 * v14) - v117;
        v123 = (float)(v122 * v118) - (float)(v114 * v120);
        v124 = (float)(v116 * v120) - (float)(v122 * v119);
        v125 = fsqrt((float)((float)(v124 * v124) + (float)(v121 * v121)) + (float)(v123 * v123));
        if ( v125 == 0.0 )
        {
          v154 = 0;
          v155 = 0.0;
        }
        else
        {
          *(float *)&v154 = (float)(1.0 / v125) * v121;
          *((float *)&v154 + 1) = (float)(1.0 / v125) * v124;
          v155 = (float)(1.0 / v125) * v123;
        }
        LODWORD(v141) = a6;
        if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, int, int))sub_140035690)(
                             (unsigned int)&v156,
                             (unsigned int)&v154,
                             (unsigned int)&a9,
                             a4,
                             a5,
                             v141,
                             (__int64)&v162,
                             (__int64)&v165,
                             (__int64)&v159,
                             v146,
                             v152,
                             v154,
                             LODWORD(v155),
                             v156,
                             v158) )
        {
          v126 = a9;
          if ( a9 < *a3 )
          {
            v127 = v157;
            *a1 = v156;
            v128 = v158;
            a1[1] = v127;
            v129 = v154;
            a1[2] = v128;
            v130 = HIDWORD(v154);
            *(_DWORD *)a2 = v129;
            *(float *)(a2 + 8) = v155;
            *(_DWORD *)(a2 + 4) = v130;
            *a3 = v126;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        LODWORD(v142) = a6;
        v131 = ((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, int, int))sub_140035690)(
                 (unsigned int)&v156,
                 (unsigned int)&v154,
                 (unsigned int)&a9,
                 a4,
                 a5,
                 v142,
                 (__int64)&v162,
                 (__int64)&v159,
                 (__int64)&v168,
                 v147,
                 v153,
                 v154,
                 LODWORD(v155),
                 v156,
                 v158);
        LOWORD(v16) = v171;
        if ( v131 )
        {
          v132 = a9;
          if ( a9 < *a3 )
          {
            v133 = v157;
            *a1 = v156;
            v134 = v158;
            a1[1] = v133;
            v135 = v154;
            a1[2] = v134;
            v136 = HIDWORD(v154);
            *(_DWORD *)a2 = v135;
            *(float *)(a2 + 8) = v155;
            *(_DWORD *)(a2 + 4) = v136;
            *a3 = v132;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
      }
      ++v61;
      v19 = v173;
      v63 += 48;
      v62 = __ROL4__(v62, 1);
    }
    while ( v61 < *(int *)((char *)&dword_140404A6C[20074651] + v172) );
    v10 = *a3;
  }
  return v10 < 65536.0;
}

