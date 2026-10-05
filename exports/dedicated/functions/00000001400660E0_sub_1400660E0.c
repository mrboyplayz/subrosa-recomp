/* Address: 0x1400660e0 | Name: sub_1400660E0 | Size: 5591 bytes */
__int64 __fastcall sub_1400660E0(signed int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // r14d
  int v9; // edi
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm9_4
  float v17; // xmm2_4
  float v18; // xmm7_4
  float v19; // xmm13_4
  float v20; // xmm5_4
  float v21; // xmm11_4
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm4_4
  float v32; // xmm4_4
  float v33; // xmm2_4
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  float v37; // xmm2_4
  __int64 i; // rcx
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  int *v44; // r15
  __int64 v45; // r8
  __int64 v46; // r8
  float v47; // xmm4_4
  float v48; // xmm2_4
  unsigned int v49; // xmm0_4
  __int32 v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  float *v55; // r12
  __int64 v56; // rdi
  unsigned __int64 v57; // rsi
  float v58; // xmm0_4
  float v59; // xmm0_4
  int v60; // eax
  char *v61; // rdi
  __m128 v62; // xmm4
  __m128 v63; // xmm15
  float v64; // xmm3_4
  float v65; // xmm8_4
  float v66; // xmm9_4
  float v67; // xmm3_4
  float v68; // xmm9_4
  float v69; // xmm8_4
  __m128 v70; // xmm5
  __m128 v71; // xmm6
  __m128 v72; // xmm7
  float v73; // xmm3_4
  float v74; // xmm6_4
  float v75; // xmm8_4
  float v76; // xmm7_4
  __int64 v77; // r8
  double v78; // xmm0_8
  int v79; // xmm4_4
  float v80; // xmm1_4
  float v81; // xmm6_4
  float v82; // xmm7_4
  float v83; // xmm8_4
  float v84; // xmm2_4
  float *v85; // rdi
  __int64 v86; // rsi
  int v87; // r12d
  char *v88; // r15
  __int64 v89; // rax
  __int64 v90; // rcx
  int v91; // eax
  float v92; // xmm0_4
  float v93; // xmm0_4
  __int64 v94; // r8
  __int64 v95; // r8
  int v96; // r14d
  __int64 v97; // r8
  __int64 v98; // r8
  float v99; // xmm14_4
  float v100; // xmm10_4
  float v101; // xmm11_4
  float v102; // xmm12_4
  float v103; // xmm10_4
  float v104; // xmm2_4
  float v105; // xmm4_4
  float v106; // xmm7_4
  float v107; // xmm3_4
  float v108; // xmm6_4
  float v109; // xmm8_4
  float v110; // xmm11_4
  float v111; // xmm9_4
  float v112; // xmm10_4
  float v113; // xmm3_4
  float v114; // xmm2_4
  float v115; // xmm1_4
  __int64 v116; // r8
  float v117; // xmm6_4
  float v118; // xmm7_4
  float v119; // xmm12_4
  float v120; // xmm8_4
  float v121; // xmm14_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  char v124; // al
  bool v125; // cc
  int v126; // ecx
  float *v127; // r14
  __int64 result; // rax
  float v129; // xmm0_4
  float v130; // xmm8_4
  float v131; // xmm6_4
  float v132; // xmm5_4
  float v133; // xmm4_4
  float v134; // xmm1_4
  float v135; // xmm0_4
  float v136; // xmm1_4
  float v137; // xmm0_4
  int v138; // [rsp+78h] [rbp-90h]
  float v139; // [rsp+80h] [rbp-88h] BYREF
  float v140; // [rsp+84h] [rbp-84h]
  float v141; // [rsp+88h] [rbp-80h]
  unsigned __int64 v142; // [rsp+8Ch] [rbp-7Ch]
  float v143; // [rsp+98h] [rbp-70h] BYREF
  float v144; // [rsp+9Ch] [rbp-6Ch]
  __int64 v145; // [rsp+A0h] [rbp-68h] BYREF
  int v146; // [rsp+A8h] [rbp-60h]
  float v147; // [rsp+B0h] [rbp-58h]
  float *v148; // [rsp+B8h] [rbp-50h]
  float *v149; // [rsp+C0h] [rbp-48h]
  float *v150; // [rsp+C8h] [rbp-40h]
  float v151[4]; // [rsp+D0h] [rbp-38h] BYREF
  float v152[4]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v153; // [rsp+F0h] [rbp-18h] BYREF
  float v154; // [rsp+F8h] [rbp-10h]
  __m128 v155; // [rsp+100h] [rbp-8h] BYREF
  __int32 v156; // [rsp+110h] [rbp+8h]
  unsigned int v157; // [rsp+114h] [rbp+Ch]
  float v158; // [rsp+118h] [rbp+10h] BYREF
  float v159; // [rsp+11Ch] [rbp+14h]
  float v160; // [rsp+120h] [rbp+18h]
  __int128 v161; // [rsp+128h] [rbp+20h] BYREF
  __int128 v162; // [rsp+138h] [rbp+30h]
  float v163; // [rsp+148h] [rbp+40h]
  __m128 v164; // [rsp+150h] [rbp+48h] BYREF
  float v165; // [rsp+168h] [rbp+60h] BYREF
  float v166; // [rsp+16Ch] [rbp+64h]
  float v167; // [rsp+170h] [rbp+68h]
  float v168[2]; // [rsp+174h] [rbp+6Ch]
  float v169; // [rsp+17Ch] [rbp+74h]
  __int128 v170; // [rsp+180h] [rbp+78h] BYREF
  __int128 v171; // [rsp+190h] [rbp+88h] BYREF
  int v172; // [rsp+1A0h] [rbp+98h]
  float v173; // [rsp+1A8h] [rbp+A0h] BYREF
  float v174; // [rsp+1ACh] [rbp+A4h]
  float v175; // [rsp+1B0h] [rbp+A8h]
  _DWORD v176[2]; // [rsp+1B4h] [rbp+ACh]
  _DWORD v177[7]; // [rsp+1BCh] [rbp+B4h] BYREF
  float v178[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v179[3]; // [rsp+1E8h] [rbp+E0h] BYREF

  v4 = 28664LL * a1;
  v143 = 1.0;
  v144 = 1.0;
  v5 = dword_190948744[v4 / 4];
  v147 = fminf(
           fmaxf(
             (float)(fsqrt(
                       (float)((float)(*(float *)((char *)&unk_190948154 + v4) * *(float *)((char *)&unk_190948154 + v4))
                             + (float)(*(float *)((char *)&unk_190948158 + v4) * *(float *)((char *)&unk_190948158 + v4)))
                     + (float)(*(float *)((char *)&unk_19094815C + v4) * *(float *)((char *)&unk_19094815C + v4)))
                   * 60.0)
           - 0.5,
             0.0),
           1.0);
  if ( v5 < 100 )
    v143 = (float)v5 * 0.0099999998;
  v6 = dword_19094874C[v4 / 4];
  if ( v6 < 100 )
    v144 = (float)v6 * 0.0099999998;
  v7 = *(_DWORD *)&algn_190941A08[v4 + 24];
  v8 = 0;
  v9 = 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      *(_DWORD *)((char *)&unk_190941A44 + v4) = 0;
      dword_1909480FC[v4 / 4] = 0;
      if ( *(float *)((char *)&xmmword_190941C2C + v4) > 0.875 )
        *(float *)((char *)&unk_190941A60 + v4) = atan2f(
                                                    -*(float *)((char *)&xmmword_190941C2C + v4 + 8),
                                                    *(float *)&dword_190941C3C[v4 / 4]);
      if ( *(_DWORD *)&algn_190941A08[v4 + 20] && *(float *)((char *)&unk_190948164 + v4) < 0.016666668 )
      {
        *(_DWORD *)&algn_190941A08[v4 + 24] = 0;
        *(_DWORD *)((char *)&unk_190941A44 + v4) = 1;
      }
    }
  }
  else
  {
    *(_DWORD *)((char *)&unk_190941A44 + v4) = 1;
    if ( !*(_DWORD *)((char *)&unk_1909482D4 + v4) && !*(_DWORD *)((char *)&unk_1909483B0 + v4) )
    {
      if ( !*(_DWORD *)&algn_190941A08[v4 + 20] || *(float *)((char *)&unk_190948164 + v4) > 0.016666668 )
      {
        if ( *(float *)((char *)&xmmword_190941C2C + v4) > 0.875 )
          *(float *)((char *)&unk_190941A60 + v4) = atan2f(
                                                      -*(float *)((char *)&xmmword_190941C2C + v4 + 8),
                                                      *(float *)&dword_190941C3C[v4 / 4]);
        *(_DWORD *)&algn_190941A08[v4 + 24] = 1;
        dword_1909480FC[v4 / 4] = 0;
      }
      *(_DWORD *)((char *)&unk_190941A44 + v4) = 0;
    }
  }
  v10 = *(float *)&dword_191041A64;
  v11 = *(float *)&dword_191041B90;
  v12 = *(float *)&dword_191041998;
  v13 = *(float *)&dword_191041A64;
  *(_QWORD *)((char *)&unk_190948190 + v4) = 0;
  *(_QWORD *)((char *)&unk_190948198 + v4) = 0;
  *(_QWORD *)((char *)&unk_1909481A0 + v4) = 0;
  v14 = v13 * *(float *)((char *)&xmmword_190942994 + v4);
  v15 = (float)(v13 * *(float *)((char *)&xmmword_190942984 + v4 + 12)) + *(float *)((char *)&unk_190942954 + v4);
  v16 = *(float *)&dword_190941BEC[v4 / 4];
  v17 = (float)(v10 * *(float *)((char *)&xmmword_190942994 + v4 + 4)) + *(float *)((char *)&unk_19094295C + v4);
  v18 = *(float *)((char *)&xmmword_190941C1C + v4 + 12);
  v19 = *(float *)&dword_190941BF4[v4 / 4];
  v20 = *(float *)((char *)&xmmword_190941C2C + v4 + 4);
  v21 = *(float *)&dword_190941BF0[v4 / 4];
  v22 = *(float *)((char *)&xmmword_190941C2C + v4);
  v174 = v14 + *(float *)((char *)&unk_190942958 + v4);
  v23 = v11 * *(float *)((char *)&xmmword_190942D3C + v4);
  v173 = v15;
  v24 = v11 * *(float *)((char *)&xmmword_190942D2C + v4 + 12);
  v25 = v23 + *(float *)((char *)&unk_190942D00 + v4);
  v26 = v11 * *(float *)((char *)&xmmword_190942D3C + v4 + 4);
  v27 = v24 + *(float *)((char *)&unk_190942CFC + v4);
  v175 = v17;
  v28 = v12 * *(float *)((char *)&xmmword_190941C1C + v4 + 4);
  v29 = v26 + *(float *)((char *)&unk_190942D04 + v4);
  *(float *)&v176[1] = v25;
  v30 = v12 * *(float *)((char *)&xmmword_190941C1C + v4);
  v31 = v12 * *(float *)((char *)&xmmword_190941C1C + v4 + 8);
  *(float *)v176 = v27;
  *(float *)v177 = v29;
  v165 = (float)(v30 + v16) + (float)(*(float *)&qword_19104199C * v18);
  v166 = (float)(v28 + v21) + (float)(*(float *)&qword_19104199C * v22);
  v167 = (float)(v31 + v19) + (float)(*(float *)&qword_19104199C * v20);
  v32 = (float)(*(float *)&dword_191041AC4 * *(float *)((char *)&xmmword_190941C1C + v4 + 8)) + v19;
  v33 = (float)((float)(*(float *)&dword_191041AC4 * *(float *)((char *)&xmmword_190941C1C + v4 + 4)) + v21)
      + (float)(*(float *)&qword_191041AC8 * v22);
  v168[0] = (float)((float)(*(float *)&dword_191041AC4 * *(float *)((char *)&xmmword_190941C1C + v4)) + v16)
          + (float)(*(float *)&qword_191041AC8 * v18);
  v161 = xmmword_1400F78B0;
  v168[1] = v33;
  v162 = xmmword_1400F78B0;
  v169 = v32 + (float)(*(float *)&qword_191041AC8 * v20);
  v163 = 1.0;
  sub_140049C20((__int64)&v161, (float *)&v161 + 3, a3);
  v172 = 1065353216;
  v170 = xmmword_1400F78B0;
  v171 = xmmword_1400F78B0;
  sub_140049C20((__int64)&v170, (float *)&v170 + 3, v34);
  v37 = 0.0;
  for ( i = 0; i < 2; i += 2 )
  {
    v39 = v163 * (float)(v168[3 * i - 1] - *(float *)&v176[3 * i - 1]);
    v40 = (float)(*((float *)&v162 + 2) * (float)(*(&v165 + 3 * i) - *(&v173 + 3 * i))) * 2.0;
    if ( i )
      v41 = v37 + (float)(v40 + (float)(v39 * 2.0));
    else
      v41 = v37 + (float)((float)(v39 * -2.0) - v40);
    v42 = *((float *)&v162 + 2) * (float)(v168[3 * i] - *(float *)&v176[3 * i]);
    v43 = v163 * (float)(*(&v169 + 3 * i) - *(float *)&v177[3 * i]);
    if ( v9 )
      v37 = (float)((float)(v41 + v43) + v43) + (float)(v42 + v42);
    else
      v37 = v41 + (float)((float)(v43 * -2.0) - (float)(v42 * 2.0));
    v9 += 2;
  }
  v44 = (int *)((char *)&unk_1909482D4 + v4);
  if ( !*(_DWORD *)((char *)&unk_1909482D4 + v4) && !*(_DWORD *)((char *)&unk_1909483B0 + v4) )
    v37 = v37 * 0.5;
  *(float *)((char *)&unk_190948494 + v4) = (float)((float)(v37 - *(float *)((char *)&unk_190948494 + v4)) * 0.5)
                                          + *(float *)((char *)&unk_190948494 + v4);
  sub_14005D760(a1, v35, v36);
  sub_140049C20((__int64)&v170, (float *)&v171 + 2, v45);
  sub_140049C20((__int64)&v170, (float *)&v170, v46);
  v47 = (float)(*((float *)&qword_140146A28 + 1) * 0.25) + *(float *)&dword_190941BF0[v4 / 4];
  v48 = (float)(*(float *)&dword_140146A30 * 0.25) + *(float *)&dword_190941BF4[v4 / 4];
  *(float *)&v153 = (float)(*(float *)&qword_140146A28 * 0.25) + *(float *)&dword_190941BEC[v4 / 4];
  *((float *)&v153 + 1) = v47;
  v154 = v48;
  v158 = *(float *)&v153 - (float)(*(float *)&qword_140146A28 * 1.5);
  v159 = v47 - (float)(*((float *)&qword_140146A28 + 1) * 1.5);
  v160 = v48 - (float)(*(float *)&dword_140146A30 * 1.5);
  sub_140062890(a1, (__int64)&v153, (__int64)&v158);
  v49 = *(_DWORD *)((char *)&unk_190948224 + v4);
  v50 = *(_DWORD *)((char *)&unk_19094821C + v4);
  *(_DWORD *)((char *)&unk_190948250 + v4) = 0;
  v155.m128_u64[1] = __PAIR64__(v50, v49);
  v157 = v49;
  v155.m128_i32[1] = *(_DWORD *)((char *)&unk_190948220 + v4);
  v156 = v155.m128_i32[1];
  v51 = *(float *)((char *)&unk_19094824C + v4) + *(float *)((char *)&unk_190948234 + v4);
  v155.m128_i32[0] = v50;
  *(float *)((char *)&unk_190948258 + v4) = v51;
  *(float *)((char *)&unk_19094825C + v4) = *(float *)((char *)&unk_190948250 + v4)
                                          + *(float *)((char *)&unk_190948238 + v4);
  *(float *)((char *)&unk_190948260 + v4) = *(float *)((char *)&unk_190948254 + v4)
                                          + *(float *)((char *)&unk_19094823C + v4);
  sub_1400640F0(a1, (__int64)&v165, (__int64)&v173);
  v52 = *(float *)((char *)&unk_19094841C + v4);
  v53 = *(float *)((char *)&unk_190948340 + v4);
  v54 = v52 + v53;
  if ( (float)(v52 + v53) <= 1.0 )
  {
    v139 = *(float *)((char *)&unk_190948340 + v4);
    v140 = v52;
  }
  else
  {
    v140 = (float)(1.0 / v54) * v52;
    v139 = (float)(1.0 / v54) * v53;
  }
  v55 = &v139;
  v56 = 0;
  v57 = 0;
  do
  {
    v58 = *(float *)((char *)&v165 + v56 * 4);
    v177[v56 + 2] = *(_DWORD *)((char *)&v166 + v56 * 4);
    v177[v56 + 3] = LODWORD(v168[v56 - 1]);
    v59 = v58 + *(float *)((char *)&unk_190948154 + v4);
    *(_QWORD *)((char *)v179 + v56 * 4) = 0;
    *(_DWORD *)((char *)&v179[1] + v56 * 4) = 0;
    *(float *)&v177[v56 + 1] = v59;
    *(float *)&v177[v56 + 2] = *(float *)&v177[v56 + 2] + *(float *)((char *)&unk_190948158 + v4);
    v60 = *v44;
    *(float *)&v177[v56 + 3] = *(float *)&v177[v56 + 3] + *(float *)((char *)&unk_19094815C + v4);
    if ( v60 == 1 )
    {
      sub_1400655E0(
        a1,
        v8,
        (float *)&v177[v57 / 4 + 1],
        (float *)((char *)v179 + v57),
        (float *)((char *)&v165 + v57),
        (float *)((char *)&v173 + v57),
        &v155.m128_f32[v57 / 4],
        (__int64)&v170,
        *v55);
      v60 = *v44;
    }
    if ( v60 == 3 )
      sub_140064D60(a1, v8, (__int64)&v164 + v57, (float *)((char *)&v165 + v57), (int)&v155 + v57, (float *)&v161);
    ++v8;
    v57 += 12LL;
    v56 += 3;
    ++v55;
    v44 += 55;
  }
  while ( v8 < 2 );
  sub_1400A8390(&v164, &v170);
  v61 = (char *)&xmmword_190941C1C + v4;
  sub_1400A8390(&v155, (char *)&xmmword_190941C1C + v4);
  v62 = (__m128)v164.m128_u32[3];
  v63 = (__m128)v155.m128_u32[3];
  v64 = v155.m128_f32[2];
  v65 = v155.m128_f32[0];
  v66 = v155.m128_f32[1];
  if ( (float)((float)((float)(v164.m128_f32[3] * v155.m128_f32[3]) + (float)(v164.m128_f32[2] * v155.m128_f32[2]))
             + (float)((float)(v164.m128_f32[0] * v155.m128_f32[0]) + (float)(v164.m128_f32[1] * v155.m128_f32[1]))) < 0.0 )
  {
    v155 = _mm_xor_ps(v155, (__m128)xmmword_1400F7F50);
    v64 = v155.m128_f32[2];
    v66 = v155.m128_f32[1];
    v65 = v155.m128_f32[0];
    v63 = _mm_shuffle_ps(v155, v155, 255);
  }
  v70 = v63;
  v67 = -v64;
  v68 = -v66;
  v69 = -v65;
  v71 = v63;
  v72 = v63;
  v70.m128_f32[0] = (float)((float)((float)(v63.m128_f32[0] * v164.m128_f32[0]) + (float)(v164.m128_f32[3] * v69))
                          + (float)(v164.m128_f32[2] * v68))
                  - (float)(v164.m128_f32[1] * v67);
  v71.m128_f32[0] = (float)((float)((float)(v63.m128_f32[0] * v164.m128_f32[1]) - (float)(v164.m128_f32[2] * v69))
                          + (float)(v164.m128_f32[3] * v68))
                  + (float)(v164.m128_f32[0] * v67);
  v72.m128_f32[0] = (float)((float)((float)(v63.m128_f32[0] * v164.m128_f32[2]) + (float)(v164.m128_f32[1] * v69))
                          - (float)(v164.m128_f32[0] * v68))
                  + (float)(v164.m128_f32[3] * v67);
  v62.m128_f32[0] = (float)((float)((float)(v164.m128_f32[3] * v63.m128_f32[0]) - (float)(v164.m128_f32[0] * v69))
                          - (float)(v164.m128_f32[1] * v68))
                  - (float)(v164.m128_f32[2] * v67);
  v164 = _mm_movelh_ps(_mm_unpacklo_ps(v70, v71), _mm_unpacklo_ps(v72, v62));
  v73 = fsqrt(
          (float)((float)(v71.m128_f32[0] * v71.m128_f32[0]) + (float)(v70.m128_f32[0] * v70.m128_f32[0]))
        + (float)(v72.m128_f32[0] * v72.m128_f32[0]));
  if ( v73 == 0.0 )
  {
    v75 = 0.0;
    v74 = 0.0;
    v76 = 0.0;
  }
  else
  {
    v74 = v71.m128_f32[0] * (float)(1.0 / v73);
    v75 = (float)(1.0 / v73) * v70.m128_f32[0];
    v76 = v72.m128_f32[0] * (float)(1.0 / v73);
  }
  v78 = acos(fminf(fmaxf(v62.m128_f32[0], -1.0), 1.0));
  LODWORD(v142) = *((_DWORD *)v61 + 3);
  HIDWORD(v170) = v142;
  v79 = *((_DWORD *)v61 + 4);
  v80 = v78 + v78;
  *(float *)&v78 = fminf(*(float *)((char *)&unk_190948130 + v4) + 0.5, 1.0);
  DWORD1(v170) = *((_DWORD *)v61 + 1);
  HIDWORD(v171) = *((_DWORD *)v61 + 7);
  HIDWORD(v142) = v79;
  LODWORD(v171) = v79;
  v139 = *((float *)v61 + 5);
  *((float *)&v171 + 1) = v139;
  *(float *)&v78 = fmaxf(*(float *)&v78, 0.125) * 0.25;
  v81 = (float)(v74 * v80) * *(float *)&v78;
  v82 = (float)(v76 * v80) * *(float *)&v78;
  v83 = (float)(v75 * v80) * *(float *)&v78;
  LODWORD(v170) = *(_DWORD *)v61;
  DWORD2(v170) = *((_DWORD *)v61 + 2);
  DWORD2(v171) = *((_DWORD *)v61 + 6);
  v172 = *((_DWORD *)v61 + 8);
  v84 = fsqrt((float)((float)(v81 * v81) + (float)(v83 * v83)) + (float)(v82 * v82));
  if ( v84 > 0.000015258789 )
  {
    *(float *)&v153 = v83 * (float)(1.0 / v84);
    *((float *)&v153 + 1) = v81 * (float)(1.0 / v84);
    v154 = v82 * (float)(1.0 / v84);
    sub_140049C20((__int64)&v170, (float *)&v153, v77);
    v139 = *((float *)&v171 + 1);
    v142 = __PAIR64__(v171, HIDWORD(v170));
  }
  v149 = &v143;
  v138 = 0;
  v148 = (float *)&xmmword_191041A54 + 2;
  v85 = (float *)((char *)&unk_1909482F4 + v4);
  v150 = (float *)v179;
  v86 = 0;
  v87 = 10;
  v88 = (char *)&unk_190942A94 + v4;
  do
  {
    if ( *((_DWORD *)v88 + 73) )
    {
      v89 = *((int *)v85 - 11);
      if ( (_DWORD)v89 != -1 )
      {
        v90 = 244 * v89;
        v91 = *((_DWORD *)v85 - 8);
        *(_QWORD *)((char *)&unk_14B883358 + v90) = 0;
        *(_DWORD *)((char *)&unk_14B883360 + v90) = 0;
        *(_DWORD *)((char *)&unk_14B8833A4 + v90) = 1063675494;
        *(_DWORD *)((char *)&unk_14B883390 + v90) = 1056964608;
        *(_DWORD *)((char *)&unk_14B883394 + v90) = 1056964608;
        if ( v91 )
        {
          if ( v91 == 3 )
          {
            *(_DWORD *)((char *)&unk_14B8833A4 + v90) = 0;
            v92 = 1.0 - v147;
            *(_DWORD *)((char *)&unk_14B883370 + v90) = 0;
            v93 = 0.5 - (float)((float)(1.0 - (float)((float)(v92 * v92) * (float)(v92 * v92))) * 0.4375);
            *(float *)((char *)&unk_14B883390 + v90) = v93;
            *(float *)((char *)&unk_14B883394 + v90) = v93;
          }
        }
        else
        {
          *(_DWORD *)((char *)&unk_14B8833A4 + v90) = 0;
          *(_DWORD *)((char *)&unk_14B883370 + v90) = 0;
        }
      }
    }
    v163 = 1.0;
    v161 = xmmword_1400F78B0;
    v162 = xmmword_1400F78B0;
    sub_140049C20((__int64)&v161, (float *)&v161 + 3, v77);
    sub_140049C20((__int64)&v161, (float *)&v161, v94);
    v96 = *((_DWORD *)v85 - 8);
    if ( v96 == 1 )
    {
      v163 = 1.0;
      v161 = xmmword_1400F78B0;
      v162 = xmmword_1400F78B0;
      sub_140049C20((__int64)&v161, (float *)&v161 + 3, v95);
      sub_140049C20((__int64)&v161, (float *)&v161, v97);
      v96 = *((_DWORD *)v85 - 8);
    }
    sub_1400A8390(&v164, &v161);
    sub_1400A8390(&v155, &v170);
    v99 = v164.m128_f32[3];
    v100 = v164.m128_f32[2];
    v101 = v164.m128_f32[0];
    v102 = v164.m128_f32[1];
    v141 = v155.m128_f32[1];
    if ( (float)((float)((float)(v155.m128_f32[3] * v164.m128_f32[3]) + (float)(v155.m128_f32[2] * v164.m128_f32[2]))
               + (float)((float)(v155.m128_f32[0] * v164.m128_f32[0]) + (float)(v155.m128_f32[1] * v164.m128_f32[1]))) < 0.0 )
    {
      v164 = _mm_xor_ps(v164, (__m128)xmmword_1400F7F50);
      v100 = v164.m128_f32[2];
      v102 = v164.m128_f32[1];
      v101 = v164.m128_f32[0];
      v99 = _mm_shuffle_ps(v164, v164, 255).m128_f32[0];
    }
    v164.m128_f32[0] = -v101;
    v103 = -v100;
    v164.m128_f32[1] = -v102;
    v104 = v155.m128_f32[0] * v103;
    v105 = v155.m128_f32[0] * (float)-v102;
    v106 = v155.m128_f32[0] * (float)-v101;
    v107 = v155.m128_f32[1] * (float)-v101;
    v108 = v155.m128_f32[1] * (float)-v102;
    v164.m128_f32[2] = v103;
    v155.m128_f32[0] = (float)((float)((float)(v155.m128_f32[0] * v99) + (float)(v155.m128_f32[3] * (float)-v101))
                             + (float)(v141 * v103))
                     - (float)(v155.m128_f32[2] * (float)-v102);
    v155.m128_f32[1] = (float)((float)((float)(v155.m128_f32[3] * (float)-v102) - v104) + (float)(v141 * v99))
                     + (float)(v155.m128_f32[2] * (float)-v101);
    v109 = (float)((float)((float)(v155.m128_f32[3] * v99) - v106) - v108) - (float)(v155.m128_f32[2] * v103);
    v155.m128_f32[2] = (float)((float)((float)(v155.m128_f32[3] * v103) + v105) - v107)
                     + (float)(v155.m128_f32[2] * v99);
    v155.m128_f32[3] = v109;
    if ( (v96 & 0xFFFFFFF7) == 0 )
      v155 = (__m128)xmmword_1400F7D40;
    v110 = *(float *)((char *)&v165 + v86 * 4) + *(float *)((char *)&unk_190948154 + v4);
    v111 = *(float *)((char *)&v166 + v86 * 4) + *(float *)((char *)&unk_190948158 + v4);
    v112 = v168[v86 - 1] + *(float *)((char *)&unk_19094815C + v4);
    if ( v96 == 1 )
    {
      v111 = *(float *)&v177[v86 + 2];
      v112 = *(float *)&v177[v86 + 3];
      v110 = *(float *)&v177[v86 + 1];
    }
    else
    {
      *(_QWORD *)((char *)v179 + v86 * 4) = 0;
      *(_DWORD *)((char *)&v179[1] + v86 * 4) = 0;
    }
    v113 = *(float *)((char *)&v173 + v86 * 4);
    v114 = *(float *)((char *)&v174 + v86 * 4);
    v115 = *(float *)&v176[v86 - 1];
    if ( v96 == 1 )
    {
      v163 = 1.0;
      v161 = xmmword_1400F78B0;
      v162 = xmmword_1400F78B0;
      sub_140049C20((__int64)&v161, (float *)&v161 + 3, v98);
      sub_140049C20((__int64)&v161, (float *)&v161, v116);
      v117 = *((float *)v88 - 1);
      v118 = *(float *)v88;
      v119 = *((float *)v88 - 2) - (float)(*((float *)v88 + 16) * 0.09375);
      v120 = v117 - (float)(*((float *)v88 + 17) * 0.09375);
      v121 = *(float *)v88 - (float)(*((float *)v88 + 18) * 0.09375);
      v158 = (float)(*(float *)&qword_140146A28 * 0.25) + *((float *)v88 - 2);
      v159 = (float)(*((float *)&qword_140146A28 + 1) * 0.25) + v117;
      v160 = (float)(*(float *)&dword_140146A30 * 0.25) + v118;
      v178[0] = v158 - (float)(*(float *)&qword_140146A28 * 0.5);
      v178[1] = v159 - (float)(*((float *)&qword_140146A28 + 1) * 0.5);
      v178[2] = v160 - (float)(*(float *)&dword_140146A30 * 0.5);
      if ( (unsigned int)sub_140062890(a1, (__int64)&v158, (__int64)v178) )
        v120 = *(float *)&qword_16E18CA44 + 0.03125;
      if ( *((_DWORD *)v88 + 73) )
        v120 = v85[20] + 0.03125;
      v122 = 0.09375 - *v148;
      v96 = *((_DWORD *)v85 - 8);
      v113 = (float)(*((float *)&v162 + 2) * v122) + v119;
      v114 = (float)(*((float *)&v162 + 3) * v122) + v120;
      v115 = (float)(v163 * v122) + v121;
    }
    switch ( v96 )
    {
      case 3:
        v113 = *(v85 - 2);
        v114 = *(v85 - 1);
        v115 = *v85;
        break;
      case 8:
        v113 = v110 - (float)(*(float *)&v142 * 0.25);
        v114 = v111 - (float)(*((float *)&v142 + 1) * 0.25);
        v115 = v112 - (float)(v139 * 0.25);
        break;
      case 0:
        v129 = *(float *)&algn_190941AC4[v4 + 28] * -0.75;
        v130 = *(float *)((char *)&xmmword_190941C2C + v4);
        v131 = *(float *)((char *)&xmmword_190941C2C + v4 + 4);
        v132 = *(float *)((char *)&xmmword_190941C1C + v4 + 12);
        v114 = (float)(v130 * v129) + v111;
        v133 = (float)(v131 * v129) + v112;
        v113 = (float)(v132 * v129) + v110;
        v115 = v133;
        if ( *(_DWORD *)&algn_190941A08[v4 + 20] )
        {
          v114 = v114 - (float)(fmaxf(*(float *)((char *)&unk_190948130 + v4), 0.0) * 0.25);
        }
        else if ( *(float *)((char *)&unk_190948158 + v4) < 0.016666668 )
        {
          v134 = fmaxf(*(float *)((char *)&xmmword_190941C2C + v4), 0.0);
          v159 = 0.0;
          v135 = v134;
          v136 = v134 * *(float *)((char *)&unk_190948168 + v4);
          v137 = v135 * *(float *)((char *)&unk_190948160 + v4);
          v160 = v136;
          v158 = v137;
          if ( v138 == *(_DWORD *)((char *)&unk_19094827C + v4) )
          {
            v115 = (float)(v136 * 6.0) + v133;
            v113 = (float)(v137 * 6.0) + v113;
          }
          else
          {
            v114 = (float)(v130 * 0.25) + v114;
            v113 = (float)(v113 - (float)(v137 * 3.0)) + (float)(v132 * 0.25);
            v115 = (float)(v133 - (float)(v136 * 3.0)) + (float)(v131 * 0.25);
          }
        }
        break;
    }
    v145 = 0;
    v146 = 0;
    v153 = 0;
    v152[2] = v115 - v112;
    v123 = *v149;
    v152[0] = v113 - v110;
    v152[1] = v114 - v111;
    v154 = 0.0;
    v124 = (3 - (v96 != 0)) | 0x10;
    v151[0] = (float)(v123 * 0.22089323) + 0.073631078;
    v151[1] = v151[0];
    if ( v123 >= 1.0 )
      v124 = 3 - (v96 != 0);
    v151[2] = (float)(v123 * 0.22089323) + 0.073631078;
    if ( !v96 )
    {
      v125 = *(float *)((char *)&xmmword_190941C2C + v4) >= 0.875;
      v153 = 0x3D8000003D800000LL;
      v154 = 0.0625;
      if ( !v125 )
      {
        v153 = 0x3C0000003C000000LL;
        v154 = 0.0078125;
      }
      v145 = 0x3E8000003E800000LL;
      v146 = 1048576000;
    }
    v126 = *(_DWORD *)((char *)&unk_190941A40 + v4);
    if ( v126 > 0 )
    {
      *(float *)&v153 = 0.125 - (float)(fminf((float)v126 * 0.033333335, 1.0) * 0.09375);
      *((float *)&v153 + 1) = *(float *)&v153;
      v154 = *(float *)&v153;
    }
    v127 = v150;
    result = sub_14005AB00(
               a1,
               0,
               v87,
               v152,
               (float *)(0x140000000LL + v4 + 1351883804),
               v150,
               1.0,
               0,
               &v155,
               v151,
               &v145,
               &v153,
               0.78539819,
               v124);
    ++v138;
    v148 += 75;
    v87 += 3;
    ++v149;
    v86 += 3;
    v88 += 936;
    v85 += 55;
    v150 = v127 + 3;
  }
  while ( v87 < 16 );
  return result;
}

