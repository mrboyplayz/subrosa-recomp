/* Address: 0x14005ab00 | Name: sub_14005AB00 | Size: 4080 bytes */
__int64 __fastcall sub_14005AB00(
        int a1,
        int a2,
        int a3,
        float *a4,
        float *a5,
        float *a6,
        float a7,
        int a8,
        __m128 *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        float a13,
        char a14)
{
  float v15; // xmm2_4
  float v16; // xmm0_4
  __int64 v17; // r15
  float v18; // xmm1_4
  __int64 v19; // r13
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rbx
  __int64 v24; // rcx
  float *v25; // r12
  float v26; // xmm5_4
  float v27; // xmm6_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  unsigned int v30; // xmm2_4
  unsigned int v31; // xmm3_4
  unsigned int v32; // xmm4_4
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  float v36; // xmm10_4
  float v37; // xmm8_4
  float v38; // xmm12_4
  float v39; // xmm13_4
  float v40; // xmm6_4
  float v41; // xmm14_4
  float v42; // xmm9_4
  __int64 v43; // r8
  float v44; // xmm3_4
  float v45; // xmm4_4
  float v46; // xmm5_4
  float v47; // xmm11_4
  float v48; // xmm0_4
  float v49; // xmm6_4
  float v50; // xmm9_4
  float v51; // xmm8_4
  float v52; // xmm10_4
  float v53; // xmm3_4
  float v54; // xmm4_4
  float v55; // xmm9_4
  float v56; // xmm8_4
  float v57; // xmm10_4
  double v58; // xmm0_8
  float v59; // xmm11_4
  float v60; // xmm1_4
  float v61; // xmm1_4
  __int64 v62; // rax
  float v63; // xmm8_4
  float v64; // xmm9_4
  float v65; // xmm10_4
  __int64 v66; // rdi
  float v67; // xmm2_4
  float *v68; // r9
  float v69; // xmm0_4
  float v70; // xmm3_4
  float v71; // xmm1_4
  float v72; // xmm10_4
  float v73; // xmm8_4
  float v74; // xmm0_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm1_4
  float v78; // xmm1_4
  float v79; // xmm2_4
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdi
  float *v83; // r15
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __m128 v87; // xmm0
  float v88; // xmm15_4
  float v89; // xmm2_4
  float v90; // xmm8_4
  float v91; // xmm10_4
  float v92; // xmm5_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  float v95; // xmm0_4
  float v96; // xmm9_4
  float v97; // xmm0_4
  float v98; // xmm9_4
  double v99; // xmm0_8
  float v100; // xmm1_4
  float v101; // xmm1_4
  __int64 v102; // rax
  float v103; // xmm4_4
  float v104; // xmm9_4
  float v105; // xmm2_4
  float v106; // xmm0_4
  float v107; // xmm5_4
  float v108; // xmm3_4
  float v109; // xmm1_4
  float v110; // xmm4_4
  float v111; // xmm9_4
  float v112; // xmm2_4
  __int64 v113; // rcx
  __int64 v114; // rax
  float *v115; // rbx
  float v116; // xmm3_4
  float v117; // xmm4_4
  float v118; // xmm5_4
  float v119; // xmm8_4
  float v120; // xmm5_4
  float v121; // xmm8_4
  float v122; // xmm4_4
  float v123; // xmm9_4
  float v124; // xmm10_4
  float v125; // xmm12_4
  float v126; // xmm3_4
  float v127; // xmm0_4
  float v128; // xmm8_4
  float v129; // xmm7_4
  double v130; // xmm0_8
  float v131; // xmm1_4
  float v132; // xmm1_4
  __int64 v133; // rcx
  float v134; // xmm8_4
  float v135; // xmm6_4
  __int64 v136; // rax
  float v137; // xmm7_4
  float v138; // xmm2_4
  float v139; // xmm0_4
  float v140; // xmm3_4
  float v141; // xmm1_4
  float v142; // xmm7_4
  float v143; // xmm1_4
  float v144; // xmm8_4
  __int64 result; // rax
  __int128 v146; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v147; // [rsp+40h] [rbp-C0h] BYREF
  float v148; // [rsp+58h] [rbp-A8h]
  __int64 v149; // [rsp+60h] [rbp-A0h]
  float v150; // [rsp+68h] [rbp-98h]
  __int128 v151; // [rsp+70h] [rbp-90h] BYREF
  float v152; // [rsp+80h] [rbp-80h]
  unsigned int v153; // [rsp+84h] [rbp-7Ch]
  unsigned int v154; // [rsp+88h] [rbp-78h]
  float v155; // [rsp+8Ch] [rbp-74h]
  int v156; // [rsp+90h] [rbp-70h]
  __int64 v157; // [rsp+98h] [rbp-68h]
  __int128 v158; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v159; // [rsp+B0h] [rbp-50h] BYREF
  float v160; // [rsp+C0h] [rbp-40h]

  v15 = *a4;
  v16 = a4[1] * a4[1];
  v17 = a3;
  v18 = a4[2] * a4[2];
  v148 = *(float *)&a2;
  v19 = a1;
  v20 = (float)((float)(v15 * v15) + v16) + v18;
  v21 = fabs(a7);
  v22 = fsqrt(v20);
  if ( v22 > v21 )
    v22 = v21;
  acos((float)(v22 / a7));
  v157 = v17;
  v23 = 28664 * v19;
  v24 = 28664 * v19 + 312 * v17;
  v25 = (float *)((char *)&xmmword_190941C1C + v24);
  LODWORD(v149) = *(_DWORD *)((char *)&unk_190941D08 + v24);
  sub_1400495A0(
    (float *)&v158,
    (float *)((char *)&xmmword_190941C1C + v24),
    (float *)&xmmword_190941C1C + 7166 * v19 + 78 * SLODWORD(v148));
  sub_1400A8390(&v147, &v158);
  v26 = a4[1];
  v27 = (float)((float)(v26 * a5[1]) + (float)(*a4 * *a5)) + (float)(a4[2] * a5[2]);
  v28 = (float)((float)(v26 * a5[4]) + (float)(*a4 * a5[3])) + (float)(a4[2] * a5[5]);
  v29 = (float)((float)(v26 * a5[7]) + (float)(*a4 * a5[6])) + (float)(a4[2] * a5[8]);
  if ( (a14 & 4) == 0 && v28 > -0.0625 )
    v28 = -0.0625;
  *(float *)&v159 = -v28;
  *((float *)&v159 + 1) = -v29;
  *((float *)&v158 + 3) = -v27;
  sub_140049260((__int64)&v158 + 12, (float *)&v158 + 3);
  *((float *)&v159 + 2) = (float)(*((float *)&v159 + 1) * *(float *)&dword_140146A1C)
                        - (float)(*(float *)&v159 * *(float *)&dword_140146A20);
  *((float *)&v159 + 3) = (float)(*((float *)&v158 + 3) * *(float *)&dword_140146A20)
                        - (float)(*((float *)&v159 + 1) * *(float *)&dword_140146A18);
  v160 = (float)(*(float *)&v159 * *(float *)&dword_140146A18)
       - (float)(*((float *)&v158 + 3) * *(float *)&dword_140146A1C);
  sub_140049260((__int64)&v159 + 8, (float *)&v159 + 2);
  *(float *)&v158 = (float)(v160 * *(float *)&v159) - (float)(*((float *)&v159 + 3) * *((float *)&v159 + 1));
  *((float *)&v158 + 1) = (float)(*((float *)&v159 + 2) * *((float *)&v159 + 1)) - (float)(v160 * *((float *)&v158 + 3));
  *((float *)&v158 + 2) = (float)(*((float *)&v159 + 3) * *((float *)&v158 + 3))
                        - (float)(*((float *)&v159 + 2) * *(float *)&v159);
  sub_140049260((__int64)&v158, (float *)&v158);
  v30 = DWORD1(v158);
  v31 = DWORD2(v158);
  v32 = DWORD1(v159);
  DWORD1(v158) = HIDWORD(v158);
  DWORD1(v159) = HIDWORD(v159);
  *((_QWORD *)&v158 + 1) = __PAIR64__(v30, DWORD2(v159));
  *((_QWORD *)&v159 + 1) = __PAIR64__(v32, v31);
  sub_140049C20((__int64)&v158, (float *)&dword_140146A28, v33);
  sub_140049C20((__int64)&v158, (float *)&dword_140146A18, v34);
  sub_1400A8390(&v146, &v158);
  v36 = *(float *)&v146;
  v37 = *((float *)&v146 + 1);
  LODWORD(v38) = v146;
  v151 = v146;
  v39 = *((float *)&v146 + 1);
  v40 = *((float *)&v146 + 2);
  v41 = *((float *)&v146 + 2);
  v42 = *((float *)&v146 + 3);
  v156 = a14 & 8;
  if ( (a14 & 8) != 0 )
  {
    v160 = 1.0;
    v158 = xmmword_1400F78B0;
    v159 = xmmword_1400F78B0;
    sub_140049C20((__int64)&v158, (float *)&dword_140146A28, v35);
    sub_140049C20((__int64)&v158, (float *)&dword_140146A18, v43);
    sub_1400A8390(&v151, &v158);
    v41 = *((float *)&v151 + 2);
    v39 = *((float *)&v151 + 1);
    LODWORD(v38) = v151;
  }
  v44 = v147.m128_f32[3];
  v45 = v147.m128_f32[2];
  v46 = v147.m128_f32[0];
  v47 = v147.m128_f32[1];
  v48 = v147.m128_f32[2] * v40;
  v49 = 0.0;
  if ( (float)((float)((float)(v147.m128_f32[3] * v42) + v48)
             + (float)((float)(v147.m128_f32[0] * v36) + (float)(v147.m128_f32[1] * v37))) < 0.0 )
  {
    v147 = _mm_xor_ps(v147, (__m128)xmmword_1400F7F50);
    v45 = v147.m128_f32[2];
    v47 = v147.m128_f32[1];
    v46 = v147.m128_f32[0];
    v44 = _mm_shuffle_ps(v147, v147, 255).m128_f32[0];
  }
  v147.m128_f32[2] = -v45;
  v147.m128_f32[0] = -v46;
  v147.m128_f32[1] = -v47;
  v50 = (float)((float)((float)((float)-v46 * *((float *)&v146 + 3)) + (float)(v44 * v36))
              + (float)((float)-v47 * *((float *)&v146 + 2)))
      - (float)((float)-v45 * v37);
  v51 = (float)((float)((float)(v44 * *((float *)&v146 + 1)) - (float)((float)-v46 * *((float *)&v146 + 2)))
              + (float)((float)-v47 * *((float *)&v146 + 3)))
      + (float)((float)-v45 * v36);
  v52 = (float)((float)((float)((float)-v46 * *((float *)&v146 + 1)) + (float)(v44 * *((float *)&v146 + 2)))
              - (float)((float)-v47 * *(float *)&v146))
      + (float)((float)-v45 * *((float *)&v146 + 3));
  v53 = (float)((float)((float)(v44 * *((float *)&v146 + 3)) - (float)((float)-v46 * *(float *)&v146))
              - (float)((float)-v47 * *((float *)&v146 + 1)))
      - (float)((float)-v45 * *((float *)&v146 + 2));
  v54 = fsqrt((float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(v52 * v52));
  if ( v54 == 0.0 )
  {
    v55 = 0.0;
    v56 = 0.0;
    v57 = 0.0;
  }
  else
  {
    v55 = v50 * (float)(1.0 / v54);
    v56 = v51 * (float)(1.0 / v54);
    v57 = v52 * (float)(1.0 / v54);
  }
  v58 = acos(fminf(fmaxf(v53, -1.0), 1.0));
  v59 = a13;
  v150 = -a13;
  v60 = v58 + v58;
  v61 = fmaxf(v60, -a13);
  if ( a13 < v61 )
    v61 = a13;
  v62 = (int)v149;
  v63 = v56 * v61;
  v149 = v62;
  v64 = v55 * v61;
  v65 = v57 * v61;
  v66 = 9 * v62;
  v67 = v63 * v25[4];
  v68 = (float *)&xmmword_14B6432F0[9 * v62];
  v69 = v64 * v25[1];
  v70 = (float)((float)(v63 * v25[3]) + (float)(v64 * *v25)) + (float)(v65 * v25[6]);
  v71 = v65 * v25[7];
  v72 = v65 * v25[8];
  v73 = (float)(v63 * v25[5]) + (float)(v64 * v25[2]);
  *v68 = v70;
  v68[1] = (float)(v67 + v69) + v71;
  v68[2] = v73 + v72;
  v74 = (float)(*a6 * 0.5) + v70;
  *v68 = v74;
  v75 = (float)(a6[1] * 0.5) + *((float *)&xmmword_14B6432F0[9 * v62] + 1);
  v68[1] = v75;
  v76 = (float)(a6[2] * 0.5) + *((float *)&xmmword_14B6432F0[9 * v62] + 2);
  v68[2] = v76;
  if ( (_DWORD)v17 == 10 )
  {
    v77 = *(float *)((char *)&unk_190948198 + v23);
    *v68 = v74 + *(float *)((char *)&unk_190948190 + v23);
    v68[1] = *(float *)((char *)&unk_190948194 + v23) + *((float *)&xmmword_14B6432F0[v66] + 1);
    v68[2] = v77 + *((float *)&xmmword_14B6432F0[v66] + 2);
  }
  else if ( (_DWORD)v17 == 13 )
  {
    v78 = v75 + *(float *)((char *)&unk_1909481A0 + v23);
    v79 = v76 + *(float *)((char *)&unk_1909481A4 + v23);
    *v68 = v74 + *(float *)((char *)&unk_19094819C + v23);
    v68[1] = v78;
    v68[2] = v79;
  }
  if ( (a14 & 0x10) != 0 )
  {
    sub_14005C2A0(v19, LODWORD(v148), v17, (_DWORD)v68, *a10, 1065353216);
    sub_140052FF0(v19, SLODWORD(v148), v17, (float *)&unk_14B883398 + 61 * v149);
    v62 = v149;
  }
  v80 = 244 * v62;
  HIDWORD(xmmword_14B643320[v66]) = 0;
  *(_DWORD *)((char *)&unk_14B8833A8 + v80) = *a12;
  *(_DWORD *)((char *)&unk_14B8833AC + v80) = *a11;
  v81 = v23 + 312 * (v17 + 1);
  v82 = *(int *)((char *)&unk_190941D08 + v81);
  v83 = (float *)(0x140000000LL + v81 + 1351883804);
  sub_1400495A0((float *)&v158, v83, v25);
  sub_1400A8390(&v147, &v158);
  v87 = 0;
  *(double *)v87.m128_u64 = _libm_sse2_sincosf_(v85, v84, v86);
  v88 = v147.m128_f32[3];
  v89 = v147.m128_f32[0];
  v90 = v87.m128_f32[0];
  v91 = _mm_shuffle_ps(v87, v87, 1).m128_f32[0];
  v155 = v91;
  if ( (float)((float)(v87.m128_f32[0] * v147.m128_f32[0]) + (float)(v91 * v147.m128_f32[3])) < 0.0
    && (float)(v91 * v147.m128_f32[3]) < 0.0 )
  {
    v147 = _mm_xor_ps(v147, (__m128)xmmword_1400F7F50);
    v89 = v147.m128_f32[0];
    v88 = _mm_shuffle_ps(v147, v147, 255).m128_f32[0];
  }
  v147.m128_f32[0] = -v89;
  v147.m128_i32[1] ^= 0x80000000;
  v147.m128_f32[2] = -v147.m128_f32[2];
  v92 = (float)(v91 * (float)-v89) + (float)(v87.m128_f32[0] * v88);
  v93 = (float)(v147.m128_f32[2] * v91) - (float)(v147.m128_f32[1] * v87.m128_f32[0]);
  v94 = (float)(v91 * v88) - (float)(v87.m128_f32[0] * (float)-v89);
  *(float *)&v149 = (float)(v147.m128_f32[2] * v87.m128_f32[0]) + (float)(v147.m128_f32[1] * v91);
  v95 = fsqrt((float)((float)(*(float *)&v149 * *(float *)&v149) + (float)(v92 * v92)) + (float)(v93 * v93));
  if ( v95 == 0.0 )
  {
    v97 = 0.0;
    v98 = 0.0;
    v148 = 0.0;
  }
  else
  {
    v96 = 1.0 / v95;
    v148 = (float)(1.0 / v95) * v92;
    v97 = (float)(1.0 / v95) * *(float *)&v149;
    v98 = v96 * v93;
  }
  *(float *)&v149 = v97;
  v99 = acos(fminf(fmaxf(v94, -1.0), 1.0));
  v100 = v99 + v99;
  v101 = fmaxf(v100, v150);
  if ( a13 < v101 )
    v101 = a13;
  v102 = 9 * v82;
  v103 = *(float *)&v149 * v101;
  v104 = v98 * v101;
  v105 = (float)(*(float *)&v149 * v101) * v83[4];
  v106 = v148 * v101;
  v107 = (float)(v148 * v101) * v83[2];
  v108 = (float)((float)((float)(*(float *)&v149 * v101) * v83[3]) + (float)((float)(v148 * v101) * *v83))
       + (float)(v104 * v83[6]);
  v109 = v104 * v83[7];
  v110 = (float)(v103 * v83[5]) + v107;
  v111 = v104 * v83[8];
  v112 = v105 + (float)(v106 * v83[1]);
  *(float *)&xmmword_14B6432F0[v102] = v108;
  v113 = 244 * v82;
  *((float *)&xmmword_14B6432F0[v102] + 1) = v112 + v109;
  *((float *)&xmmword_14B6432F0[v102] + 2) = v110 + v111;
  *(float *)&xmmword_14B6432F0[v102] = (float)(*a6 * 0.5) + v108;
  *((float *)&xmmword_14B6432F0[v102] + 1) = (float)(a6[1] * 0.5) + *((float *)&xmmword_14B6432F0[v102] + 1);
  *((float *)&xmmword_14B6432F0[v102] + 2) = (float)(a6[2] * 0.5) + *((float *)&xmmword_14B6432F0[v102] + 2);
  HIDWORD(xmmword_14B643320[v102]) = 0;
  *(_DWORD *)((char *)&unk_14B8833A8 + v113) = a12[1];
  *(_DWORD *)((char *)&unk_14B8833AC + v113) = a11[1];
  v114 = v23 + 312 * (v157 + 2);
  v115 = (float *)((char *)&xmmword_190941C1C + v114);
  LODWORD(v149) = *(_DWORD *)((char *)&unk_190941D08 + v114);
  sub_1400495A0((float *)&v158, (float *)((char *)&xmmword_190941C1C + v114), v83);
  sub_1400A8390(&v147, &v158);
  v146 = xmmword_1400F7D40;
  if ( (a14 & 2) != 0 )
  {
    v90 = -v90;
    *((float *)&v146 + 3) = v91;
    v38 = -v38;
    v152 = v90;
    v39 = -v39;
    *(float *)&v146 = v90;
    v41 = -v41;
    *(_QWORD *)&v151 = __PAIR64__(LODWORD(v39), LODWORD(v38));
    *((float *)&v151 + 2) = v41;
    v153 = 0x80000000;
    v154 = 0x80000000;
    sub_14009FD70(&v146, &v146, &v151);
    if ( (float)((float)((float)(*((float *)&v146 + 3) * a9->m128_f32[3])
                       + (float)(*((float *)&v146 + 2) * a9->m128_f32[2]))
               + (float)((float)(*((float *)&v146 + 1) * a9->m128_f32[1]) + (float)(*(float *)&v146 * a9->m128_f32[0]))) < 0.0 )
      *a9 = _mm_xor_ps(*a9, (__m128)xmmword_1400F7F50);
    sub_14009FD70(&v146, &v146, a9);
  }
  if ( v156 )
  {
    *((float *)&v146 + 3) = v91;
    v152 = -v90;
    *(float *)&v146 = -v90;
    *(float *)&v151 = -v38;
    *((float *)&v151 + 1) = -v39;
    *((float *)&v151 + 2) = -v41;
    v153 = 0x80000000;
    v154 = 0x80000000;
    *(_QWORD *)((char *)&v146 + 4) = 0;
    sub_14009FD70(&v146, &v146, &v151);
  }
  v116 = v147.m128_f32[3];
  v117 = v147.m128_f32[2];
  v118 = v147.m128_f32[0];
  v119 = v147.m128_f32[1];
  if ( (float)((float)((float)(v147.m128_f32[3] * *((float *)&v146 + 3))
                     + (float)(v147.m128_f32[2] * *((float *)&v146 + 2)))
             + (float)((float)(v147.m128_f32[0] * *(float *)&v146) + (float)(v147.m128_f32[1] * *((float *)&v146 + 1)))) < 0.0 )
  {
    v147 = _mm_xor_ps(v147, (__m128)xmmword_1400F7F50);
    v117 = v147.m128_f32[2];
    v119 = v147.m128_f32[1];
    v118 = v147.m128_f32[0];
    v116 = _mm_shuffle_ps(v147, v147, 255).m128_f32[0];
  }
  v120 = -v118;
  v121 = -v119;
  v122 = -v117;
  v123 = (float)((float)((float)(v120 * *((float *)&v146 + 3)) + (float)(v116 * *(float *)&v146))
               + (float)(v121 * *((float *)&v146 + 2)))
       - (float)(v122 * *((float *)&v146 + 1));
  v124 = (float)((float)((float)(v116 * *((float *)&v146 + 1)) - (float)(v120 * *((float *)&v146 + 2)))
               + (float)(v121 * *((float *)&v146 + 3)))
       + (float)(v122 * *(float *)&v146);
  v125 = (float)((float)((float)(v120 * *((float *)&v146 + 1)) + (float)(v116 * *((float *)&v146 + 2)))
               - (float)(v121 * *(float *)&v146))
       + (float)(v122 * *((float *)&v146 + 3));
  v126 = (float)((float)((float)(v116 * *((float *)&v146 + 3)) - (float)(v120 * *(float *)&v146))
               - (float)(v121 * *((float *)&v146 + 1)))
       - (float)(v122 * *((float *)&v146 + 2));
  v127 = fsqrt((float)((float)(v124 * v124) + (float)(v123 * v123)) + (float)(v125 * v125));
  if ( v127 == 0.0 )
  {
    v128 = 0.0;
    v129 = 0.0;
  }
  else
  {
    v49 = (float)(1.0 / v127) * v123;
    v128 = (float)(1.0 / v127) * v124;
    v129 = (float)(1.0 / v127) * v125;
  }
  v130 = acos(fminf(fmaxf(v126, -1.0), 1.0));
  v131 = v130 + v130;
  v132 = fmaxf(v131, v150);
  if ( a13 >= v132 )
    v59 = v132;
  v133 = (int)v149;
  v134 = v128 * v59;
  v135 = v49 * v59;
  v136 = 9LL * (int)v149;
  v137 = v129 * v59;
  v138 = v134 * v115[4];
  v139 = v135 * v115[1];
  v140 = (float)((float)(v134 * v115[3]) + (float)(v135 * *v115)) + (float)(v137 * v115[6]);
  v141 = v137;
  v142 = v137 * v115[8];
  v143 = v141 * v115[7];
  v144 = (float)(v134 * v115[5]) + (float)(v135 * v115[2]);
  *(float *)&xmmword_14B6432F0[v136] = v140;
  v133 *= 244;
  *((float *)&xmmword_14B6432F0[v136] + 1) = (float)(v138 + v139) + v143;
  *((float *)&xmmword_14B6432F0[v136] + 2) = v144 + v142;
  *(float *)&xmmword_14B6432F0[v136] = (float)(*a6 * 0.5) + v140;
  *((float *)&xmmword_14B6432F0[v136] + 1) = (float)(a6[1] * 0.5) + *((float *)&xmmword_14B6432F0[v136] + 1);
  *((float *)&xmmword_14B6432F0[v136] + 2) = (float)(a6[2] * 0.5) + *((float *)&xmmword_14B6432F0[v136] + 2);
  HIDWORD(xmmword_14B643320[v136]) = 0;
  *(_DWORD *)((char *)&unk_14B8833A8 + v133) = a12[2];
  result = (unsigned int)a11[2];
  *(_DWORD *)((char *)&unk_14B8833AC + v133) = result;
  return result;
}

