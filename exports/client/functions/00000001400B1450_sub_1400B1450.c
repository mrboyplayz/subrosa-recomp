/* Address: 0x1400b1450 | Name: sub_1400B1450 | Size: 4080 bytes */
__int64 __fastcall sub_1400B1450(
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
        unsigned int *a11,
        unsigned int *a12,
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
  float v33; // xmm10_4
  float v34; // xmm8_4
  float v35; // xmm12_4
  float v36; // xmm13_4
  float v37; // xmm6_4
  float v38; // xmm14_4
  float v39; // xmm9_4
  float v40; // xmm3_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm11_4
  float v44; // xmm0_4
  float v45; // xmm6_4
  float v46; // xmm9_4
  float v47; // xmm8_4
  float v48; // xmm10_4
  float v49; // xmm3_4
  float v50; // xmm4_4
  float v51; // xmm9_4
  float v52; // xmm8_4
  float v53; // xmm10_4
  double v54; // xmm0_8
  float v55; // xmm11_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  __int64 v58; // rax
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm10_4
  __int64 v62; // rdi
  float v63; // xmm2_4
  float *v64; // r9
  float v65; // xmm0_4
  float v66; // xmm3_4
  float v67; // xmm1_4
  float v68; // xmm10_4
  float v69; // xmm8_4
  float v70; // xmm0_4
  float v71; // xmm1_4
  float v72; // xmm2_4
  float v73; // xmm1_4
  float v74; // xmm1_4
  float v75; // xmm2_4
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdi
  float *v79; // r15
  __int64 v80; // rcx
  __m128 v81; // xmm0
  float v82; // xmm15_4
  float v83; // xmm2_4
  float v84; // xmm8_4
  float v85; // xmm10_4
  float v86; // xmm5_4
  float v87; // xmm3_4
  float v88; // xmm4_4
  float v89; // xmm0_4
  float v90; // xmm9_4
  float v91; // xmm0_4
  float v92; // xmm9_4
  double v93; // xmm0_8
  float v94; // xmm1_4
  float v95; // xmm1_4
  __int64 v96; // rax
  float v97; // xmm4_4
  float v98; // xmm9_4
  float v99; // xmm2_4
  float v100; // xmm0_4
  float v101; // xmm5_4
  unsigned int v102; // xmm3_4
  float v103; // xmm1_4
  float v104; // xmm4_4
  float v105; // xmm9_4
  float v106; // xmm2_4
  __int64 v107; // rcx
  __int64 v108; // rax
  float *v109; // rbx
  float v110; // xmm3_4
  float v111; // xmm4_4
  float v112; // xmm5_4
  float v113; // xmm8_4
  float v114; // xmm5_4
  float v115; // xmm8_4
  float v116; // xmm4_4
  float v117; // xmm9_4
  float v118; // xmm10_4
  float v119; // xmm12_4
  float v120; // xmm3_4
  float v121; // xmm0_4
  float v122; // xmm8_4
  float v123; // xmm7_4
  double v124; // xmm0_8
  float v125; // xmm1_4
  float v126; // xmm1_4
  __int64 v127; // rcx
  float v128; // xmm8_4
  float v129; // xmm6_4
  __int64 v130; // rax
  float v131; // xmm7_4
  float v132; // xmm2_4
  float v133; // xmm0_4
  unsigned int v134; // xmm3_4
  float v135; // xmm1_4
  float v136; // xmm7_4
  float v137; // xmm1_4
  float v138; // xmm8_4
  _DWORD v140[12]; // [rsp+0h] [rbp-100h] BYREF
  __int128 v141; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v142; // [rsp+40h] [rbp-C0h] BYREF
  float v143; // [rsp+58h] [rbp-A8h]
  __int64 v144; // [rsp+60h] [rbp-A0h]
  float v145; // [rsp+68h] [rbp-98h]
  __int128 v146; // [rsp+70h] [rbp-90h] BYREF
  float v147; // [rsp+80h] [rbp-80h]
  unsigned int v148; // [rsp+84h] [rbp-7Ch]
  unsigned int v149; // [rsp+88h] [rbp-78h]
  float v150; // [rsp+8Ch] [rbp-74h]
  int v151; // [rsp+90h] [rbp-70h]
  __int64 v152; // [rsp+98h] [rbp-68h]
  __int128 v153; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v154; // [rsp+B0h] [rbp-50h] BYREF
  float v155; // [rsp+C0h] [rbp-40h]
  __int64 v156; // [rsp+C8h] [rbp-38h]

  v15 = *a4;
  v16 = a4[1] * a4[1];
  v17 = a3;
  v18 = a4[2] * a4[2];
  v143 = *(float *)&a2;
  v19 = a1;
  v20 = (float)((float)(v15 * v15) + v16) + v18;
  v21 = fabs(a7);
  v22 = fsqrt(v20);
  if ( v22 > v21 )
    v22 = v21;
  acos((float)(v22 / a7));
  v152 = v17;
  v23 = 7166 * v19;
  v24 = 28664 * v19 + 312 * v17;
  v25 = (float *)((char *)&dword_140404A6C[280651452] + v24);
  LODWORD(v144) = *(unsigned int *)((char *)&dword_140404A6C[280651511] + v24);
  sub_14007AE70(
    (float *)&v153,
    (float *)((char *)&dword_140404A6C[280651452] + v24),
    (float *)&dword_140404A6C[7166 * v19 + 280651452 + 78 * SLODWORD(v143)]);
  sub_14010E370(&v142, &v153);
  v26 = a4[1];
  v27 = (float)((float)(v26 * a5[1]) + (float)(*a4 * *a5)) + (float)(a4[2] * a5[2]);
  v28 = (float)((float)(v26 * a5[4]) + (float)(*a4 * a5[3])) + (float)(a4[2] * a5[5]);
  v29 = (float)((float)(v26 * a5[7]) + (float)(*a4 * a5[6])) + (float)(a4[2] * a5[8]);
  if ( (a14 & 4) == 0 && v28 > -0.0625 )
    v28 = -0.0625;
  *(float *)&v154 = -v28;
  *((float *)&v154 + 1) = -v29;
  *((float *)&v153 + 3) = -v27;
  sub_14007A240((__int64)&v153 + 12, (float *)&v153 + 3);
  *((float *)&v154 + 2) = (float)(*((float *)&v154 + 1) * *(float *)&dword_1402F617C)
                        - (float)(*(float *)&v154 * *(float *)&dword_1402F6180);
  *((float *)&v154 + 3) = (float)(*((float *)&v153 + 3) * *(float *)&dword_1402F6180)
                        - (float)(*((float *)&v154 + 1) * *(float *)&dword_1402F6178);
  v155 = (float)(*(float *)&v154 * *(float *)&dword_1402F6178)
       - (float)(*((float *)&v153 + 3) * *(float *)&dword_1402F617C);
  sub_14007A240((__int64)&v154 + 8, (float *)&v154 + 2);
  *(float *)&v153 = (float)(v155 * *(float *)&v154) - (float)(*((float *)&v154 + 3) * *((float *)&v154 + 1));
  *((float *)&v153 + 1) = (float)(*((float *)&v154 + 2) * *((float *)&v154 + 1)) - (float)(v155 * *((float *)&v153 + 3));
  *((float *)&v153 + 2) = (float)(*((float *)&v154 + 3) * *((float *)&v153 + 3))
                        - (float)(*((float *)&v154 + 2) * *(float *)&v154);
  sub_14007A240((__int64)&v153, (float *)&v153);
  v30 = DWORD1(v153);
  v31 = DWORD2(v153);
  v32 = DWORD1(v154);
  DWORD1(v153) = HIDWORD(v153);
  DWORD1(v154) = HIDWORD(v154);
  *((_QWORD *)&v153 + 1) = __PAIR64__(v30, DWORD2(v154));
  *((_QWORD *)&v154 + 1) = __PAIR64__(v32, v31);
  sub_14007B2A0((__int64)&v153, (float *)&dword_1402F6188);
  sub_14007B2A0((__int64)&v153, (float *)&dword_1402F6178);
  sub_14010E370(&v141, &v153);
  v33 = *(float *)&v141;
  v34 = *((float *)&v141 + 1);
  LODWORD(v35) = v141;
  v146 = v141;
  v36 = *((float *)&v141 + 1);
  v37 = *((float *)&v141 + 2);
  v38 = *((float *)&v141 + 2);
  v39 = *((float *)&v141 + 3);
  v151 = a14 & 8;
  if ( (a14 & 8) != 0 )
  {
    v155 = 1.0;
    v153 = xmmword_140278D30;
    v154 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v153, (float *)&dword_1402F6188);
    sub_14007B2A0((__int64)&v153, (float *)&dword_1402F6178);
    sub_14010E370(&v146, &v153);
    v38 = *((float *)&v146 + 2);
    v36 = *((float *)&v146 + 1);
    LODWORD(v35) = v146;
  }
  v40 = v142.m128_f32[3];
  v41 = v142.m128_f32[2];
  v42 = v142.m128_f32[0];
  v43 = v142.m128_f32[1];
  v44 = v142.m128_f32[2] * v37;
  v45 = 0.0;
  if ( (float)((float)((float)(v142.m128_f32[3] * v39) + v44)
             + (float)((float)(v142.m128_f32[0] * v33) + (float)(v142.m128_f32[1] * v34))) < 0.0 )
  {
    v142 = _mm_xor_ps(v142, (__m128)xmmword_140279870);
    v41 = v142.m128_f32[2];
    v43 = v142.m128_f32[1];
    v42 = v142.m128_f32[0];
    v40 = _mm_shuffle_ps(v142, v142, 255).m128_f32[0];
  }
  v142.m128_f32[2] = -v41;
  v142.m128_f32[0] = -v42;
  v142.m128_f32[1] = -v43;
  v46 = (float)((float)((float)((float)-v42 * *((float *)&v141 + 3)) + (float)(v40 * v33))
              + (float)((float)-v43 * *((float *)&v141 + 2)))
      - (float)((float)-v41 * v34);
  v47 = (float)((float)((float)(v40 * *((float *)&v141 + 1)) - (float)((float)-v42 * *((float *)&v141 + 2)))
              + (float)((float)-v43 * *((float *)&v141 + 3)))
      + (float)((float)-v41 * v33);
  v48 = (float)((float)((float)((float)-v42 * *((float *)&v141 + 1)) + (float)(v40 * *((float *)&v141 + 2)))
              - (float)((float)-v43 * *(float *)&v141))
      + (float)((float)-v41 * *((float *)&v141 + 3));
  v49 = (float)((float)((float)(v40 * *((float *)&v141 + 3)) - (float)((float)-v42 * *(float *)&v141))
              - (float)((float)-v43 * *((float *)&v141 + 1)))
      - (float)((float)-v41 * *((float *)&v141 + 2));
  v50 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
  if ( v50 == 0.0 )
  {
    v51 = 0.0;
    v52 = 0.0;
    v53 = 0.0;
  }
  else
  {
    v51 = v46 * (float)(1.0 / v50);
    v52 = v47 * (float)(1.0 / v50);
    v53 = v48 * (float)(1.0 / v50);
  }
  v54 = acos(fminf(fmaxf(v49, -1.0), 1.0));
  v55 = a13;
  v145 = -a13;
  v56 = v54 + v54;
  v57 = fmaxf(v56, -a13);
  if ( a13 < v57 )
    v57 = a13;
  v58 = (int)v144;
  v59 = v52 * v57;
  v144 = v58;
  v60 = v51 * v57;
  v61 = v53 * v57;
  v62 = 36 * v58;
  v63 = v59 * v25[4];
  v64 = (float *)&dword_140404A6C[36 * v58 + 485543033];
  v65 = v60 * v25[1];
  v66 = (float)((float)(v59 * v25[3]) + (float)(v60 * *v25)) + (float)(v61 * v25[6]);
  v67 = v61 * v25[7];
  v68 = v61 * v25[8];
  v69 = (float)(v59 * v25[5]) + (float)(v60 * v25[2]);
  *v64 = v66;
  v64[1] = (float)(v63 + v65) + v67;
  v64[2] = v69 + v68;
  v70 = (float)(*a6 * 0.5) + v66;
  *v64 = v70;
  v71 = (float)(a6[1] * 0.5) + *(float *)&dword_140404A6C[36 * v58 + 485543034];
  v64[1] = v71;
  v72 = (float)(a6[2] * 0.5) + *(float *)&dword_140404A6C[36 * v58 + 485543035];
  v64[2] = v72;
  if ( (_DWORD)v17 == 10 )
  {
    v73 = *(float *)&dword_140404A6C[v23 + 280657947];
    *v64 = v70 + *(float *)&dword_140404A6C[v23 + 280657945];
    v64[1] = *(float *)&dword_140404A6C[v23 + 280657946] + *(float *)&dword_140404A6C[v62 + 485543034];
    v64[2] = v73 + *(float *)&dword_140404A6C[v62 + 485543035];
  }
  else if ( (_DWORD)v17 == 13 )
  {
    v74 = v71 + *(float *)&dword_140404A6C[v23 + 280657949];
    v75 = v72 + *(float *)&dword_140404A6C[v23 + 280657950];
    *v64 = v70 + *(float *)&dword_140404A6C[v23 + 280657948];
    v64[1] = v74;
    v64[2] = v75;
  }
  if ( (a14 & 0x10) != 0 )
  {
    v140[10] = 1065353216;
    sub_1400B2BF0(v19, LODWORD(v143), v17, (_DWORD)v64, *a10, 1065353216);
    sub_1400A9940(v19, SLODWORD(v143), v17, (float *)&dword_140404A6C[61 * v144 + 486149283]);
    v58 = v144;
  }
  v76 = 61 * v58;
  dword_140404A6C[v62 + 485543048] = 0;
  dword_140404A6C[v76 + 486149287] = *a12;
  dword_140404A6C[v76 + 486149288] = *a11;
  v77 = v23 * 4 + 312 * (v17 + 1);
  v78 = *(int *)((char *)&dword_140404A6C[280651511] + v77);
  v79 = (float *)(0x140000000LL + v77 + 1126819164);
  sub_14007AE70((float *)&v153, v79, v25);
  sub_14010E370(&v142, &v153);
  v81 = 0;
  *(double *)v81.m128_u64 = MEMORY[0x1401F8AC0](v80);
  v82 = v142.m128_f32[3];
  v83 = v142.m128_f32[0];
  v84 = v81.m128_f32[0];
  v85 = _mm_shuffle_ps(v81, v81, 1).m128_f32[0];
  v150 = v85;
  if ( (float)((float)(v81.m128_f32[0] * v142.m128_f32[0]) + (float)(v85 * v142.m128_f32[3])) < 0.0
    && (float)(v85 * v142.m128_f32[3]) < 0.0 )
  {
    v142 = _mm_xor_ps(v142, (__m128)xmmword_140279870);
    v83 = v142.m128_f32[0];
    v82 = _mm_shuffle_ps(v142, v142, 255).m128_f32[0];
  }
  v142.m128_f32[0] = -v83;
  v142.m128_i32[1] ^= 0x80000000;
  v142.m128_f32[2] = -v142.m128_f32[2];
  v86 = (float)(v85 * (float)-v83) + (float)(v81.m128_f32[0] * v82);
  v87 = (float)(v142.m128_f32[2] * v85) - (float)(v142.m128_f32[1] * v81.m128_f32[0]);
  v88 = (float)(v85 * v82) - (float)(v81.m128_f32[0] * (float)-v83);
  *(float *)&v144 = (float)(v142.m128_f32[2] * v81.m128_f32[0]) + (float)(v142.m128_f32[1] * v85);
  v89 = fsqrt((float)((float)(*(float *)&v144 * *(float *)&v144) + (float)(v86 * v86)) + (float)(v87 * v87));
  if ( v89 == 0.0 )
  {
    v91 = 0.0;
    v92 = 0.0;
    v143 = 0.0;
  }
  else
  {
    v90 = 1.0 / v89;
    v143 = (float)(1.0 / v89) * v86;
    v91 = (float)(1.0 / v89) * *(float *)&v144;
    v92 = v90 * v87;
  }
  *(float *)&v144 = v91;
  v93 = acos(fminf(fmaxf(v88, -1.0), 1.0));
  v94 = v93 + v93;
  v95 = fmaxf(v94, v145);
  if ( a13 < v95 )
    v95 = a13;
  v96 = 18 * v78;
  v97 = *(float *)&v144 * v95;
  v98 = v92 * v95;
  v99 = (float)(*(float *)&v144 * v95) * v79[4];
  v100 = v143 * v95;
  v101 = (float)(v143 * v95) * v79[2];
  *(float *)&v102 = (float)((float)((float)(*(float *)&v144 * v95) * v79[3]) + (float)((float)(v143 * v95) * *v79))
                  + (float)(v98 * v79[6]);
  v103 = v98 * v79[7];
  v104 = (float)(v97 * v79[5]) + v101;
  v105 = v98 * v79[8];
  v106 = v99 + (float)(v100 * v79[1]);
  dword_140404A6C[2 * v96 + 485543033] = v102;
  v107 = 61 * v78;
  *(float *)&dword_140404A6C[2 * v96 + 485543034] = v106 + v103;
  *(float *)&dword_140404A6C[2 * v96 + 485543035] = v104 + v105;
  *(float *)&dword_140404A6C[2 * v96 + 485543033] = (float)(*a6 * 0.5) + *(float *)&v102;
  *(float *)&dword_140404A6C[2 * v96 + 485543034] = (float)(a6[1] * 0.5)
                                                  + *(float *)&dword_140404A6C[2 * v96 + 485543034];
  *(float *)&dword_140404A6C[2 * v96 + 485543035] = (float)(a6[2] * 0.5)
                                                  + *(float *)&dword_140404A6C[2 * v96 + 485543035];
  dword_140404A6C[2 * v96 + 485543048] = 0;
  dword_140404A6C[v107 + 486149287] = a12[1];
  dword_140404A6C[v107 + 486149288] = a11[1];
  v108 = v23 * 4 + 312 * (v152 + 2);
  v109 = (float *)((char *)&dword_140404A6C[280651452] + v108);
  LODWORD(v144) = *(unsigned int *)((char *)&dword_140404A6C[280651511] + v108);
  sub_14007AE70((float *)&v153, (float *)((char *)&dword_140404A6C[280651452] + v108), v79);
  sub_14010E370(&v142, &v153);
  v141 = xmmword_140279490;
  if ( (a14 & 2) != 0 )
  {
    v84 = -v84;
    *((float *)&v141 + 3) = v85;
    v35 = -v35;
    v147 = v84;
    v36 = -v36;
    *(float *)&v141 = v84;
    v38 = -v38;
    *(_QWORD *)&v146 = __PAIR64__(LODWORD(v36), LODWORD(v35));
    *((float *)&v146 + 2) = v38;
    v148 = 0x80000000;
    v149 = 0x80000000;
    sub_140105930(&v141, &v141, &v146);
    if ( (float)((float)((float)(*((float *)&v141 + 3) * a9->m128_f32[3])
                       + (float)(*((float *)&v141 + 2) * a9->m128_f32[2]))
               + (float)((float)(*((float *)&v141 + 1) * a9->m128_f32[1]) + (float)(*(float *)&v141 * a9->m128_f32[0]))) < 0.0 )
      *a9 = _mm_xor_ps(*a9, (__m128)xmmword_140279870);
    sub_140105930(&v141, &v141, a9);
  }
  if ( v151 )
  {
    *((float *)&v141 + 3) = v85;
    v147 = -v84;
    *(float *)&v141 = -v84;
    *(float *)&v146 = -v35;
    *((float *)&v146 + 1) = -v36;
    *((float *)&v146 + 2) = -v38;
    v148 = 0x80000000;
    v149 = 0x80000000;
    *(_QWORD *)((char *)&v141 + 4) = 0;
    sub_140105930(&v141, &v141, &v146);
  }
  v110 = v142.m128_f32[3];
  v111 = v142.m128_f32[2];
  v112 = v142.m128_f32[0];
  v113 = v142.m128_f32[1];
  if ( (float)((float)((float)(v142.m128_f32[3] * *((float *)&v141 + 3))
                     + (float)(v142.m128_f32[2] * *((float *)&v141 + 2)))
             + (float)((float)(v142.m128_f32[0] * *(float *)&v141) + (float)(v142.m128_f32[1] * *((float *)&v141 + 1)))) < 0.0 )
  {
    v142 = _mm_xor_ps(v142, (__m128)xmmword_140279870);
    v111 = v142.m128_f32[2];
    v113 = v142.m128_f32[1];
    v112 = v142.m128_f32[0];
    v110 = _mm_shuffle_ps(v142, v142, 255).m128_f32[0];
  }
  v114 = -v112;
  v115 = -v113;
  v116 = -v111;
  v117 = (float)((float)((float)(v114 * *((float *)&v141 + 3)) + (float)(v110 * *(float *)&v141))
               + (float)(v115 * *((float *)&v141 + 2)))
       - (float)(v116 * *((float *)&v141 + 1));
  v118 = (float)((float)((float)(v110 * *((float *)&v141 + 1)) - (float)(v114 * *((float *)&v141 + 2)))
               + (float)(v115 * *((float *)&v141 + 3)))
       + (float)(v116 * *(float *)&v141);
  v119 = (float)((float)((float)(v114 * *((float *)&v141 + 1)) + (float)(v110 * *((float *)&v141 + 2)))
               - (float)(v115 * *(float *)&v141))
       + (float)(v116 * *((float *)&v141 + 3));
  v120 = (float)((float)((float)(v110 * *((float *)&v141 + 3)) - (float)(v114 * *(float *)&v141))
               - (float)(v115 * *((float *)&v141 + 1)))
       - (float)(v116 * *((float *)&v141 + 2));
  v121 = fsqrt((float)((float)(v118 * v118) + (float)(v117 * v117)) + (float)(v119 * v119));
  if ( v121 == 0.0 )
  {
    v122 = 0.0;
    v123 = 0.0;
  }
  else
  {
    v45 = (float)(1.0 / v121) * v117;
    v122 = (float)(1.0 / v121) * v118;
    v123 = (float)(1.0 / v121) * v119;
  }
  v124 = acos(fminf(fmaxf(v120, -1.0), 1.0));
  v125 = v124 + v124;
  v126 = fmaxf(v125, v145);
  if ( a13 >= v126 )
    v55 = v126;
  v127 = (int)v144;
  v128 = v122 * v55;
  v129 = v45 * v55;
  v130 = 18LL * (int)v144;
  v131 = v123 * v55;
  v132 = v128 * v109[4];
  v133 = v129 * v109[1];
  *(float *)&v134 = (float)((float)(v128 * v109[3]) + (float)(v129 * *v109)) + (float)(v131 * v109[6]);
  v135 = v131;
  v136 = v131 * v109[8];
  v137 = v135 * v109[7];
  v138 = (float)(v128 * v109[5]) + (float)(v129 * v109[2]);
  dword_140404A6C[2 * v130 + 485543033] = v134;
  v127 *= 244;
  *(float *)&dword_140404A6C[2 * v130 + 485543034] = (float)(v132 + v133) + v137;
  *(float *)&dword_140404A6C[2 * v130 + 485543035] = v138 + v136;
  *(float *)&dword_140404A6C[2 * v130 + 485543033] = (float)(*a6 * 0.5) + *(float *)&v134;
  *(float *)&dword_140404A6C[2 * v130 + 485543034] = (float)(a6[1] * 0.5)
                                                   + *(float *)&dword_140404A6C[2 * v130 + 485543034];
  *(float *)&dword_140404A6C[2 * v130 + 485543035] = (float)(a6[2] * 0.5)
                                                   + *(float *)&dword_140404A6C[2 * v130 + 485543035];
  dword_140404A6C[2 * v130 + 485543048] = 0;
  *(unsigned int *)((char *)&dword_140404A6C[486149287] + v127) = a12[2];
  *(unsigned int *)((char *)&dword_140404A6C[486149288] + v127) = a11[2];
  return MEMORY[0x1401F8B20]((unsigned __int64)v140 ^ v156);
}

