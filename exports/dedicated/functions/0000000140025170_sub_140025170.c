/* Address: 0x140025170 | Name: sub_140025170 | Size: 2987 bytes */
_BOOL8 __fastcall sub_140025170(
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
  int v15; // r14d
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
  int v61; // r15d
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
  __int64 v138; // [rsp+50h] [rbp-B0h]
  __int64 v139; // [rsp+58h] [rbp-A8h] BYREF
  float v140; // [rsp+60h] [rbp-A0h]
  int v141; // [rsp+68h] [rbp-98h] BYREF
  int v142; // [rsp+6Ch] [rbp-94h]
  int v143; // [rsp+70h] [rbp-90h]
  float v144; // [rsp+78h] [rbp-88h] BYREF
  float v145; // [rsp+7Ch] [rbp-84h]
  float v146; // [rsp+80h] [rbp-80h]
  float v147; // [rsp+88h] [rbp-78h] BYREF
  float v148; // [rsp+8Ch] [rbp-74h]
  float v149; // [rsp+90h] [rbp-70h]
  float v150; // [rsp+98h] [rbp-68h] BYREF
  float v151; // [rsp+9Ch] [rbp-64h]
  float v152; // [rsp+A0h] [rbp-60h]
  float v153; // [rsp+A8h] [rbp-58h] BYREF
  float v154; // [rsp+ACh] [rbp-54h]
  float v155; // [rsp+B0h] [rbp-50h]
  unsigned int v156; // [rsp+1A0h] [rbp+A0h]
  __int64 v157; // [rsp+1C0h] [rbp+C0h]
  float v158; // [rsp+1C8h] [rbp+C8h]

  v10 = 65536.0;
  v14 = a9;
  v15 = 0;
  *a3 = 65536.0;
  v16 = HIWORD(a8);
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a7 + 4));
  v18 = 232LL * (unsigned __int16)a8;
  v19 = (float)*(int *)(a7 + 8);
  v156 = HIWORD(a8);
  v20 = (float)*(int *)a7;
  v157 = v18;
  v158 = v19;
  v21 = _mm_cvtepi32_ps(v17).m128_f32[0];
  if ( *(int *)&byte_15AE31760[v18 + 104] > 0 )
  {
    v22 = 0;
    v138 = 0;
    do
    {
      v23 = *(_QWORD *)&byte_15AE31760[v18 + 72];
      v24 = *(_QWORD *)&byte_15AE31760[v18 + 136];
      v25 = 3 * *(_DWORD *)(v22 + v24);
      v26 = v19 + *(float *)(v23 + 4 * v25 + 8);
      v27 = v20 + *(float *)(v23 + 4 * v25);
      v28 = (float)(v21 + *(float *)(v23 + 4 * v25 + 4)) * v14;
      v29 = 3 * *(_DWORD *)(v22 + v24 + 4);
      v149 = v26 * v14;
      v30 = v20 + *(float *)(v23 + 4 * v29);
      v31 = v21 + *(float *)(v23 + 4 * v29 + 4);
      v32 = v19 + *(float *)(v23 + 4 * v29 + 8);
      LODWORD(v29) = *(_DWORD *)(v22 + v24 + 8);
      v147 = v27 * v14;
      v33 = 3 * (int)v29;
      v150 = v30 * v14;
      v34 = (float)(v30 * v14) - (float)(v27 * v14);
      v35 = v19 + *(float *)(v23 + 4 * v33 + 8);
      v36 = v20 + *(float *)(v23 + 4 * v33);
      v37 = v21 + *(float *)(v23 + 4 * v33 + 4);
      LODWORD(v33) = *(_DWORD *)(v22 + v24 + 12);
      v151 = v31 * v14;
      v38 = (float)(v31 * v14) - v28;
      v39 = 3 * (int)v33;
      v146 = v35 * v14;
      v40 = (float)(v35 * v14) - (float)(v26 * v14);
      v41 = v20 + *(float *)(v23 + 4 * v39);
      v42 = v21 + *(float *)(v23 + 4 * v39 + 4);
      v145 = v37 * v14;
      v43 = (float)(v37 * v14) - v28;
      v144 = v36 * v14;
      v44 = (float)(v36 * v14) - (float)(v27 * v14);
      v152 = v32 * v14;
      v45 = (float)(v32 * v14) - (float)(v26 * v14);
      v153 = v41 * v14;
      v46 = (float)(v158 + *(float *)(v23 + 4 * v39 + 8)) * v14;
      v148 = v28;
      v154 = v42 * v14;
      v155 = v46;
      v47 = (float)(v43 * v45) - (float)(v40 * v38);
      v48 = (float)(v40 * v34) - (float)(v44 * v45);
      v49 = (float)(v44 * v38) - (float)(v43 * v34);
      v50 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49));
      if ( v50 == 0.0 )
      {
        v139 = 0;
        v140 = 0.0;
      }
      else
      {
        *(float *)&v139 = (float)(1.0 / v50) * v47;
        *((float *)&v139 + 1) = (float)(1.0 / v50) * v48;
        v140 = (float)(1.0 / v50) * v49;
      }
      if ( (unsigned int)sub_140025D20(
                           (unsigned int)&v141,
                           (unsigned int)&v139,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           a6,
                           (__int64)&v147,
                           (__int64)&v150,
                           (__int64)&v144) )
      {
        v51 = a9;
        if ( a9 < *a3 )
        {
          v52 = v142;
          *a1 = v141;
          v53 = v143;
          a1[1] = v52;
          v54 = v139;
          a1[2] = v53;
          v55 = HIDWORD(v139);
          *(_DWORD *)a2 = v54;
          *(float *)(a2 + 8) = v140;
          *(_DWORD *)(a2 + 4) = v55;
          *a3 = v51;
          dword_16E18CAB4 = v15;
        }
      }
      if ( (unsigned int)sub_140025D20(
                           (unsigned int)&v141,
                           (unsigned int)&v139,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           a6,
                           (__int64)&v147,
                           (__int64)&v144,
                           (__int64)&v153) )
      {
        v56 = a9;
        if ( a9 < *a3 )
        {
          v57 = v142;
          *a1 = v141;
          v58 = v143;
          a1[1] = v57;
          v59 = v139;
          a1[2] = v58;
          v60 = HIDWORD(v139);
          *(_DWORD *)a2 = v59;
          *(float *)(a2 + 8) = v140;
          *(_DWORD *)(a2 + 4) = v60;
          *a3 = v56;
          dword_16E18CAB4 = v15;
        }
      }
      v19 = v158;
      v22 = v138 + 16;
      ++v15;
      v138 += 16;
    }
    while ( v15 < *(_DWORD *)&byte_15AE31760[v18 + 104] );
    v10 = *a3;
    LOWORD(v16) = v156;
  }
  v61 = 0;
  if ( *(int *)&byte_15AE31760[v18 + 216] > 0 )
  {
    v62 = 1;
    v63 = 0;
    do
    {
      if ( ((unsigned __int16)v16 & (unsigned __int16)v62 & 0x3FF) == 0 )
      {
        v64 = v19;
        v65 = v19;
        v66 = *(_QWORD *)&byte_15AE31760[v157 + 224];
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
        v153 = (float)(v20 + *(float *)(v63 + v66 + 36)) * v14;
        v77 = v69 * v14;
        v78 = (float)(v158 + *(float *)(v63 + v66 + 44)) * v14;
        v145 = v76;
        v79 = v76 - v77;
        v155 = v78;
        v80 = v74 * v14;
        v146 = v67 * v14;
        v81 = (float)(v67 * v14) - v80;
        v82 = v75 * v14;
        v148 = v77;
        v144 = v68 * v14;
        v154 = v70 * v14;
        v151 = v71 * v14;
        v83 = (float)(v71 * v14) - v77;
        v152 = v72 * v14;
        v84 = (float)(v72 * v14) - v80;
        v150 = v73 * v14;
        v85 = (float)(v73 * v14) - v82;
        v147 = v82;
        v149 = v80;
        v86 = (float)(v79 * v84) - (float)(v81 * v83);
        v87 = (float)(v68 * v14) - v82;
        v88 = (float)(v87 * v83) - (float)(v79 * v85);
        v89 = (float)(v81 * v85) - (float)(v87 * v84);
        v90 = fsqrt((float)((float)(v89 * v89) + (float)(v86 * v86)) + (float)(v88 * v88));
        if ( v90 == 0.0 )
        {
          v139 = 0;
          v140 = 0.0;
        }
        else
        {
          *(float *)&v139 = (float)(1.0 / v90) * v86;
          *((float *)&v139 + 1) = (float)(1.0 / v90) * v89;
          v140 = (float)(1.0 / v90) * v88;
        }
        if ( (unsigned int)sub_140025D20(
                             (unsigned int)&v141,
                             (unsigned int)&v139,
                             (unsigned int)&a9,
                             a4,
                             a5,
                             a6,
                             (__int64)&v147,
                             (__int64)&v150,
                             (__int64)&v144) )
        {
          v91 = a9;
          if ( a9 < *a3 )
          {
            v92 = v142;
            *a1 = v141;
            v93 = v143;
            a1[1] = v92;
            v94 = v139;
            a1[2] = v93;
            v95 = HIDWORD(v139);
            *(_DWORD *)a2 = v94;
            *(float *)(a2 + 8) = v140;
            *(_DWORD *)(a2 + 4) = v95;
            *a3 = v91;
            dword_16E18CAB4 = v61 | 0x10000;
          }
        }
        if ( (unsigned int)sub_140025D20(
                             (unsigned int)&v141,
                             (unsigned int)&v139,
                             (unsigned int)&a9,
                             a4,
                             a5,
                             a6,
                             (__int64)&v147,
                             (__int64)&v144,
                             (__int64)&v153) )
        {
          v96 = a9;
          if ( a9 < *a3 )
          {
            v97 = v142;
            *a1 = v141;
            v98 = v143;
            a1[1] = v97;
            v99 = v139;
            a1[2] = v98;
            v100 = HIDWORD(v139);
            *(_DWORD *)a2 = v99;
            *(float *)(a2 + 8) = v140;
            *(_DWORD *)(a2 + 4) = v100;
            *a3 = v96;
            dword_16E18CAB4 = v61 | 0x10000;
          }
        }
        v101 = *(_QWORD *)&byte_15AE31760[v157 + 224];
        v102 = v158 + *(float *)(v63 + v101 + 20);
        v103 = v20 + *(float *)(v63 + v101 + 12);
        v104 = v21 + *(float *)(v63 + v101 + 40);
        v105 = v21 + *(float *)(v63 + v101 + 4);
        v106 = v21 + *(float *)(v63 + v101 + 28);
        v107 = v158 + *(float *)(v63 + v101 + 32);
        v108 = v20 + *(float *)(v63 + v101 + 24);
        v109 = v158 + *(float *)(v63 + v101 + 44);
        v110 = v20 + *(float *)(v63 + v101 + 36);
        v111 = (float)(v21 + *(float *)(v63 + v101 + 16)) * v14;
        v153 = (float)(v20 + *(float *)(v63 + v101)) * v14;
        v112 = v104 * v14;
        v113 = (float)(v158 + *(float *)(v63 + v101 + 8)) * v14;
        v145 = v111;
        v114 = v111 - v112;
        v155 = v113;
        v115 = v109 * v14;
        v146 = v102 * v14;
        v116 = (float)(v102 * v14) - v115;
        v117 = v110 * v14;
        v148 = v112;
        v144 = v103 * v14;
        v154 = v105 * v14;
        v151 = v106 * v14;
        v118 = (float)(v106 * v14) - v112;
        v152 = v107 * v14;
        v119 = (float)(v107 * v14) - v115;
        v150 = v108 * v14;
        v120 = (float)(v108 * v14) - v117;
        v147 = v117;
        v149 = v115;
        v121 = (float)(v114 * v119) - (float)(v116 * v118);
        v122 = (float)(v103 * v14) - v117;
        v123 = (float)(v122 * v118) - (float)(v114 * v120);
        v124 = (float)(v116 * v120) - (float)(v122 * v119);
        v125 = fsqrt((float)((float)(v124 * v124) + (float)(v121 * v121)) + (float)(v123 * v123));
        if ( v125 == 0.0 )
        {
          v139 = 0;
          v140 = 0.0;
        }
        else
        {
          *(float *)&v139 = (float)(1.0 / v125) * v121;
          *((float *)&v139 + 1) = (float)(1.0 / v125) * v124;
          v140 = (float)(1.0 / v125) * v123;
        }
        if ( (unsigned int)sub_140025D20(
                             (unsigned int)&v141,
                             (unsigned int)&v139,
                             (unsigned int)&a9,
                             a4,
                             a5,
                             a6,
                             (__int64)&v147,
                             (__int64)&v150,
                             (__int64)&v144) )
        {
          v126 = a9;
          if ( a9 < *a3 )
          {
            v127 = v142;
            *a1 = v141;
            v128 = v143;
            a1[1] = v127;
            v129 = v139;
            a1[2] = v128;
            v130 = HIDWORD(v139);
            *(_DWORD *)a2 = v129;
            *(float *)(a2 + 8) = v140;
            *(_DWORD *)(a2 + 4) = v130;
            *a3 = v126;
            dword_16E18CAB4 = v61 | 0x10000;
          }
        }
        v131 = sub_140025D20(
                 (unsigned int)&v141,
                 (unsigned int)&v139,
                 (unsigned int)&a9,
                 a4,
                 a5,
                 a6,
                 (__int64)&v147,
                 (__int64)&v144,
                 (__int64)&v153);
        LOWORD(v16) = v156;
        if ( v131 )
        {
          v132 = a9;
          if ( a9 < *a3 )
          {
            v133 = v142;
            *a1 = v141;
            v134 = v143;
            a1[1] = v133;
            v135 = v139;
            a1[2] = v134;
            v136 = HIDWORD(v139);
            *(_DWORD *)a2 = v135;
            *(float *)(a2 + 8) = v140;
            *(_DWORD *)(a2 + 4) = v136;
            *a3 = v132;
            dword_16E18CAB4 = v61 | 0x10000;
          }
        }
      }
      ++v61;
      v19 = v158;
      v63 += 48;
      v62 = __ROL4__(v62, 1);
    }
    while ( v61 < *(_DWORD *)&byte_15AE31760[v157 + 216] );
    v10 = *a3;
  }
  return v10 < 65536.0;
}

