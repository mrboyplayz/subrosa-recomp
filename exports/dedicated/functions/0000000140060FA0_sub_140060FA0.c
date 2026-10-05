/* Address: 0x140060fa0 | Name: sub_140060FA0 | Size: 6383 bytes */
__int64 __fastcall sub_140060FA0(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  char *v4; // r13
  float v5; // xmm0_4
  float v6; // xmm4_4
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm8_4
  float v10; // xmm3_4
  float v11; // xmm10_4
  float v12; // xmm12_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm15_4
  float v17; // xmm2_4
  float v18; // xmm15_4
  float v19; // xmm0_4
  float v20; // xmm4_4
  float v21; // xmm11_4
  __int64 v22; // r8
  float *v23; // rbx
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm7_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm14_4
  float v33; // xmm12_4
  float v34; // xmm13_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm3_4
  float v38; // xmm8_4
  float v39; // xmm7_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm8_4
  float *v43; // rsi
  float v44; // xmm9_4
  float v45; // xmm4_4
  float v46; // xmm5_4
  float v47; // xmm15_4
  float v48; // xmm15_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm7_4
  float v52; // xmm8_4
  float v53; // xmm9_4
  float v54; // xmm3_4
  float v55; // xmm4_4
  float v56; // xmm7_4
  float v57; // xmm8_4
  float v58; // xmm9_4
  __int64 v59; // r8
  double v60; // xmm0_8
  float v61; // xmm1_4
  float v62; // xmm4_4
  float v63; // xmm5_4
  float v64; // xmm11_4
  float v65; // xmm7_4
  float v66; // xmm8_4
  float v67; // xmm9_4
  float v68; // xmm3_4
  float v69; // xmm3_4
  float v70; // xmm4_4
  float v71; // xmm5_4
  float v72; // xmm2_4
  float v73; // xmm11_4
  float v74; // xmm6_4
  float v75; // xmm10_4
  float v76; // xmm3_4
  float v77; // xmm7_4
  float v78; // xmm2_4
  float v79; // xmm14_4
  float v80; // xmm13_4
  float v81; // xmm0_4
  float v82; // xmm11_4
  float v83; // xmm9_4
  float v84; // xmm15_4
  float v85; // xmm12_4
  float v86; // xmm0_4
  float v87; // xmm10_4
  float v88; // xmm2_4
  float v89; // xmm5_4
  float v90; // xmm4_4
  float v91; // xmm7_4
  float v92; // xmm2_4
  float v93; // xmm1_4
  float v94; // xmm5_4
  float v95; // xmm1_4
  float v96; // xmm0_4
  float v97; // xmm5_4
  float v98; // xmm8_4
  float v99; // xmm5_4
  float v100; // xmm1_4
  float *v101; // r12
  _DWORD *v102; // r14
  float v103; // xmm4_4
  float v104; // xmm0_4
  int v105; // r15d
  float v106; // xmm5_4
  float v107; // xmm8_4
  float v108; // xmm4_4
  float v109; // xmm2_4
  float v110; // xmm1_4
  float v111; // xmm5_4
  float v112; // xmm1_4
  float *v113; // rsi
  __int64 v114; // rbx
  float v115; // xmm0_4
  float v116; // xmm1_4
  float v117; // xmm0_4
  float v118; // xmm0_4
  float v119; // xmm1_4
  float v120; // xmm0_4
  __int64 v121; // r8
  int v122; // ecx
  float v123; // xmm3_4
  float v124; // xmm4_4
  float v125; // xmm5_4
  float v126; // xmm0_4
  float v127; // xmm1_4
  float v128; // xmm2_4
  float v129; // xmm5_4
  float v130; // xmm1_4
  float v131; // xmm3_4
  float v132; // xmm4_4
  float v133; // xmm1_4
  float v134; // xmm2_4
  float v135; // xmm0_4
  float v136; // xmm0_4
  float v137; // xmm1_4
  float v138; // xmm2_4
  float *v139; // rax
  __int64 v140; // rcx
  float v141; // xmm1_4
  float v142; // xmm6_4
  float v143; // xmm13_4
  float v144; // xmm1_4
  float v145; // xmm8_4
  float v146; // xmm10_4
  float v147; // xmm15_4
  float v148; // xmm1_4
  float v149; // xmm2_4
  float v150; // xmm0_4
  float v151; // xmm0_4
  int v152; // eax
  float v153; // xmm6_4
  float v154; // xmm9_4
  int v155; // xmm11_4
  float v156; // xmm6_4
  int v157; // xmm13_4
  int *v158; // rdx
  __int64 v159; // r8
  __int64 result; // rax
  __int64 v161; // rcx
  float v162; // xmm4_4
  float v163; // xmm3_4
  float v164; // xmm5_4
  float v165; // xmm2_4
  float v166; // xmm3_4
  float v167; // xmm2_4
  float v168; // xmm4_4
  float v169; // xmm3_4
  float v170; // [rsp+78h] [rbp-90h]
  float v171; // [rsp+78h] [rbp-90h]
  float v172; // [rsp+78h] [rbp-90h]
  float v173; // [rsp+7Ch] [rbp-8Ch]
  float v174; // [rsp+7Ch] [rbp-8Ch]
  float v175; // [rsp+7Ch] [rbp-8Ch]
  float v176; // [rsp+80h] [rbp-88h]
  float v177; // [rsp+80h] [rbp-88h]
  float v178; // [rsp+80h] [rbp-88h]
  float v179; // [rsp+84h] [rbp-84h]
  float v180; // [rsp+84h] [rbp-84h]
  float v181; // [rsp+88h] [rbp-80h]
  float v182; // [rsp+88h] [rbp-80h]
  float v183; // [rsp+8Ch] [rbp-7Ch]
  float v184; // [rsp+8Ch] [rbp-7Ch]
  float v185; // [rsp+90h] [rbp-78h]
  float v186; // [rsp+94h] [rbp-74h]
  float v187; // [rsp+94h] [rbp-74h]
  float v188; // [rsp+98h] [rbp-70h]
  float v189; // [rsp+98h] [rbp-70h]
  float v190; // [rsp+9Ch] [rbp-6Ch]
  float v191; // [rsp+A0h] [rbp-68h]
  float v192; // [rsp+A0h] [rbp-68h]
  float v193; // [rsp+A4h] [rbp-64h]
  float v194; // [rsp+A8h] [rbp-60h]
  float v195; // [rsp+ACh] [rbp-5Ch]
  float v196; // [rsp+ACh] [rbp-5Ch]
  float v197; // [rsp+B0h] [rbp-58h]
  float v198; // [rsp+B4h] [rbp-54h]
  float v199; // [rsp+B8h] [rbp-50h]
  float v201; // [rsp+C0h] [rbp-48h] BYREF
  float v202; // [rsp+C4h] [rbp-44h]
  float v203; // [rsp+C8h] [rbp-40h]
  float v204; // [rsp+CCh] [rbp-3Ch]
  int v205; // [rsp+D0h] [rbp-38h] BYREF
  int v206; // [rsp+D4h] [rbp-34h]
  int v207; // [rsp+D8h] [rbp-30h]
  __int64 v208; // [rsp+E0h] [rbp-28h] BYREF
  int v209; // [rsp+E8h] [rbp-20h]
  float v210; // [rsp+F0h] [rbp-18h]
  float v211; // [rsp+F4h] [rbp-14h]
  __m128 v212; // [rsp+F8h] [rbp-10h] BYREF
  float v213; // [rsp+110h] [rbp+8h] BYREF
  float v214; // [rsp+114h] [rbp+Ch]
  float v215; // [rsp+118h] [rbp+10h]
  _DWORD v216[2]; // [rsp+120h] [rbp+18h] BYREF
  float v217[4]; // [rsp+128h] [rbp+20h]
  float v218; // [rsp+138h] [rbp+30h]
  float v219; // [rsp+13Ch] [rbp+34h]
  _DWORD v220[4]; // [rsp+140h] [rbp+38h]
  float v221; // [rsp+150h] [rbp+48h]
  float v222; // [rsp+154h] [rbp+4Ch]
  float v223[4]; // [rsp+158h] [rbp+50h]
  __int128 v224; // [rsp+168h] [rbp+60h] BYREF
  __int128 v225; // [rsp+178h] [rbp+70h]
  int v226; // [rsp+188h] [rbp+80h]
  float v227; // [rsp+190h] [rbp+88h]
  float v228; // [rsp+194h] [rbp+8Ch]
  float v229[4]; // [rsp+198h] [rbp+90h]
  __int128 v230; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v231; // [rsp+1B8h] [rbp+B0h]
  int v232; // [rsp+1C8h] [rbp+C0h]
  _OWORD v233[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v234; // [rsp+1F0h] [rbp+E8h]

  v3 = 28664LL * a1;
  v4 = (char *)&xmmword_190941C1C + v3;
  v5 = (float)(*(float *)&dword_191041A64 * *(float *)((char *)&xmmword_190942984 + v3 + 12))
     + *(float *)((char *)&unk_190942954 + v3);
  v6 = *(float *)((char *)&xmmword_190941C1C + v3 + 12);
  v7 = (float)(*(float *)&dword_191041A64 * *(float *)((char *)&xmmword_190942994 + v3))
     + *(float *)((char *)&unk_190942958 + v3);
  v8 = *(float *)&dword_190941BEC[v3 / 4];
  v9 = *(float *)&dword_190941BF0[v3 / 4];
  v10 = *(float *)((char *)&xmmword_190941C2C + v3);
  v11 = *(float *)&dword_190941BF4[v3 / 4];
  v12 = *(float *)&dword_191041AC4 * *(float *)((char *)&xmmword_190941C1C + v3);
  v229[0] = (float)(*(float *)&dword_191041A64 * *(float *)((char *)&xmmword_190942994 + v3 + 4))
          + *(float *)((char *)&unk_19094295C + v3);
  v227 = v5;
  v228 = v7;
  v13 = (float)(*(float *)&dword_191041B90 * *(float *)((char *)&xmmword_190942D3C + v3 + 4))
      + *(float *)((char *)&unk_190942D04 + v3);
  v14 = (float)(*(float *)&dword_191041B90 * *(float *)((char *)&xmmword_190942D3C + v3))
      + *(float *)((char *)&unk_190942D00 + v3);
  v229[1] = (float)(*(float *)&dword_191041B90 * *(float *)((char *)&xmmword_190942D2C + v3 + 12))
          + *(float *)((char *)&unk_190942CFC + v3);
  v229[3] = v13;
  v15 = *(float *)&dword_191041998 * *(float *)((char *)&xmmword_190941C1C + v3);
  v229[2] = v14;
  v210 = (float)(v15 + v8) + (float)(*(float *)&qword_19104199C * v6);
  v218 = v210;
  v16 = (float)(*(float *)&dword_191041998 * *(float *)((char *)&xmmword_190941C1C + v3 + 8)) + v11;
  v211 = (float)((float)(*(float *)&dword_191041998 * *(float *)((char *)&xmmword_190941C1C + v3 + 4)) + v9)
       + (float)(*(float *)&qword_19104199C * v10);
  v219 = v211;
  v17 = *(float *)((char *)&xmmword_190941C2C + v3 + 4);
  v18 = v16 + (float)(*(float *)&qword_19104199C * v17);
  v19 = *(float *)&qword_191041AC8 * v6;
  v20 = *(float *)&dword_191041AC4 * *(float *)((char *)&xmmword_190941C1C + v3 + 4);
  v21 = *(float *)&dword_191041AC4 * *(float *)((char *)&xmmword_190941C1C + v3 + 8);
  v191 = v18;
  *(float *)v220 = v18;
  v173 = (float)(v12 + v8) + v19;
  *(float *)&v220[1] = v173;
  v170 = (float)(v20 + v9) + (float)(*(float *)&qword_191041AC8 * v10);
  *(float *)&v220[2] = v170;
  v232 = 1065353216;
  v230 = xmmword_1400F78B0;
  v176 = (float)(v21 + v11) + (float)(*(float *)&qword_191041AC8 * v17);
  *(float *)&v220[3] = v176;
  v231 = xmmword_1400F78B0;
  sub_140049C20((__int64)&v230, (float *)&v230 + 3, a3);
  v226 = 1065353216;
  v224 = xmmword_1400F78B0;
  v225 = xmmword_1400F78B0;
  sub_140049C20((__int64)&v224, (float *)&v224 + 3, v22);
  v23 = (float *)((char *)&unk_190948114 + v3);
  v24 = *(float *)&dword_140146A30 * 1.75;
  *(_DWORD *)((char *)&unk_190948250 + v3) = 0;
  *(float *)((char *)&unk_19094821C + v3) = *(float *)((char *)&unk_19094824C + v3)
                                          + *(float *)((char *)&unk_19094821C + v3);
  *(float *)((char *)&unk_190948220 + v3) = *(float *)((char *)&unk_190948220 + v3)
                                          + *(float *)((char *)&unk_190948250 + v3);
  v25 = *(float *)&qword_140146A28 * 1.75;
  *(float *)((char *)&unk_190948224 + v3) = *(float *)((char *)&unk_190948224 + v3)
                                          + *(float *)((char *)&unk_190948254 + v3);
  v26 = *(float *)&algn_190941AC4[v3 + 28];
  v27 = *(float *)&v225 * 0.25;
  *(_DWORD *)((char *)&unk_190948220 + v3) = *(_DWORD *)((char *)&unk_190948118 + v3);
  v28 = (float)(v26 * 0.875) + v27;
  v213 = *(float *)((char *)&unk_190948114 + v3) - v25;
  v214 = *(float *)((char *)&unk_190948114 + v3 + 4) - (float)(*((float *)&qword_140146A28 + 1) * 1.75);
  v215 = *(float *)((char *)&unk_190948114 + v3 + 8) - v24;
  if ( (unsigned int)sub_1400828D0((char *)&unk_190948114 + v3, &v213, 0) )
    *(float *)((char *)&unk_190948220 + v3) = *(float *)&qword_16E18CA44 + v28;
  v29 = *(float *)((char *)&unk_190948154 + v3);
  v30 = *(float *)((char *)&unk_190948158 + v3);
  v31 = *(float *)((char *)&unk_19094815C + v3);
  v32 = (float)((float)((float)(*(float *)((char *)&unk_19094821C + v3) - *v23) * 0.375)
              - (float)((float)(v29 - *(float *)((char *)&unk_19094824C + v3)) * 0.75))
      - v29;
  v188 = v32;
  v33 = (float)((float)((float)(*(float *)((char *)&unk_190948220 + v3) - v23[1]) * 0.375)
              - (float)((float)(v30 - *(float *)((char *)&unk_190948250 + v3)) * 0.75))
      - v30;
  v185 = v33;
  v34 = (float)((float)((float)(*(float *)((char *)&unk_190948224 + v3) - v23[2]) * 0.375)
              - (float)((float)(v31 - *(float *)((char *)&unk_190948254 + v3)) * 0.75))
      - v31;
  v186 = v34;
  if ( v33 <= 0.5 )
  {
    if ( v33 < 0.0 )
    {
      v33 = 0.0;
      v185 = 0.0;
    }
  }
  else
  {
    v185 = 0.5;
    v33 = 0.5;
  }
  v35 = *(float *)((char *)&unk_1909482DC + v3) + 0.125;
  v36 = v29 + v210;
  v37 = v29 + v173;
  v38 = *(float *)((char *)&unk_19094815C + v3);
  v39 = v30 + v211;
  v40 = v30 + v170;
  v41 = v31 + v176;
  *(float *)((char *)&unk_1909482DC + v3) = v35;
  v42 = v38 + v18;
  if ( v35 > 1.0 )
    *(_DWORD *)((char *)&unk_1909482DC + v3) = 1065353216;
  v193 = v36 + (float)(v32 * 3.0);
  v195 = v42 + (float)(v34 * 3.0);
  v197 = v37 + (float)(v32 * 3.0);
  v199 = v41 + (float)(v34 * 3.0);
  v194 = v39 + (float)(v33 * 3.0);
  v198 = v40 + (float)(v33 * 3.0);
  sub_1400A8390(&v201, &v224);
  v43 = (float *)((char *)&unk_190948120 + v3);
  sub_1400A8390(&v212, (char *)&unk_190948120 + v3);
  v44 = v212.m128_f32[3];
  v45 = v212.m128_f32[2];
  v46 = v212.m128_f32[0];
  v47 = v212.m128_f32[1];
  v179 = v212.m128_f32[3];
  if ( (float)((float)((float)(v204 * v212.m128_f32[3]) + (float)(v203 * v212.m128_f32[2]))
             + (float)((float)(v201 * v212.m128_f32[0]) + (float)(v202 * v212.m128_f32[1]))) < 0.0 )
  {
    v212 = _mm_xor_ps(v212, (__m128)xmmword_1400F7F50);
    v45 = v212.m128_f32[2];
    v47 = v212.m128_f32[1];
    v46 = v212.m128_f32[0];
    LODWORD(v179) = _mm_shuffle_ps(v212, v212, 255).m128_u32[0];
    v44 = v179;
  }
  v48 = -v47;
  v49 = -v45;
  v50 = -v46;
  v51 = (float)((float)((float)(v44 * v201) + (float)(v50 * v204)) + (float)(v48 * v203)) - (float)(v49 * v202);
  v52 = (float)((float)((float)(v44 * v202) - (float)(v50 * v203)) + (float)(v48 * v204)) + (float)(v49 * v201);
  v53 = (float)((float)((float)(v44 * v203) + (float)(v50 * v202)) - (float)(v48 * v201)) + (float)(v49 * v204);
  v54 = (float)((float)((float)(v204 * v179) - (float)(v50 * v201)) - (float)(v48 * v202)) - (float)(v49 * v203);
  v55 = fsqrt((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
  if ( v55 == 0.0 )
  {
    v56 = 0.0;
    v57 = 0.0;
    v58 = 0.0;
  }
  else
  {
    v56 = v51 * (float)(1.0 / v55);
    v57 = v52 * (float)(1.0 / v55);
    v58 = v53 * (float)(1.0 / v55);
  }
  v60 = acos(fminf(fmaxf(v54, -1.0), 1.0));
  v61 = v60 + v60;
  v62 = *(float *)((char *)&unk_19094816C + v3);
  v63 = *(float *)((char *)&unk_190948170 + v3);
  v64 = *(float *)((char *)&unk_190948174 + v3);
  v65 = (float)((float)((float)(v56 * v61) * 0.375) - (float)(v62 * 0.75)) - v62;
  v66 = (float)((float)((float)(v57 * v61) * 0.375) - (float)(v63 * 0.75)) - v63;
  v67 = (float)((float)((float)(v58 * v61) * 0.375) - (float)(v64 * 0.75)) - v64;
  v68 = fsqrt((float)((float)(v66 * v66) + (float)(v65 * v65)) + (float)(v67 * v67));
  if ( v68 > 0.25 )
  {
    v65 = (float)(v65 * (float)(1.0 / v68)) * 0.25;
    v66 = (float)(v66 * (float)(1.0 / v68)) * 0.25;
    v67 = (float)(v67 * (float)(1.0 / v68)) * 0.25;
  }
  v224 = *(_OWORD *)v4;
  v69 = v65 + v62;
  v70 = v66 + v63;
  v225 = *((_OWORD *)v4 + 1);
  v71 = v67 + v64;
  v226 = *((_DWORD *)v4 + 8);
  v72 = fsqrt((float)((float)(v70 * v70) + (float)(v69 * v69)) + (float)(v71 * v71));
  if ( v72 > 0.000015258789 )
  {
    v213 = v69 * (float)(1.0 / v72);
    v214 = v70 * (float)(1.0 / v72);
    v215 = v71 * (float)(1.0 / v72);
    sub_140049C20((__int64)&v224, &v213, v59);
  }
  v73 = v211 - v23[1];
  v74 = v191 - v23[2];
  v75 = v210 - *v23;
  v180 = v65 * 3.0;
  v183 = v66 * 3.0;
  v181 = v67 * 3.0;
  v174 = v173 - *v23;
  v171 = v170 - v23[1];
  v177 = v176 - v23[2];
  v221 = (float)((float)(v73 * (float)(v67 * 3.0)) - (float)(v74 * (float)(v66 * 3.0))) + v193;
  v222 = v194 + (float)((float)(v74 * (float)(v65 * 3.0)) - (float)(v75 * (float)(v67 * 3.0)));
  v223[0] = v195 + (float)((float)(v75 * (float)(v66 * 3.0)) - (float)(v73 * (float)(v65 * 3.0)));
  v223[1] = v197 + (float)((float)(v171 * (float)(v67 * 3.0)) - (float)(v177 * (float)(v66 * 3.0)));
  v223[2] = v198 + (float)((float)(v177 * (float)(v65 * 3.0)) - (float)(v174 * (float)(v67 * 3.0)));
  v76 = (float)(v33 * v74) - (float)(v34 * v73);
  v223[3] = v199 + (float)((float)(v174 * (float)(v66 * 3.0)) - (float)(v171 * (float)(v65 * 3.0)));
  v77 = (float)(v34 * v75) - (float)(v32 * v74);
  v78 = v32 * v73;
  v79 = *v43;
  v80 = *(float *)((char *)&unk_190948130 + v3);
  v81 = v33;
  v82 = *(float *)((char *)&unk_19094812C + v3);
  v83 = *(float *)((char *)&unk_190948138 + v3);
  v84 = *(float *)((char *)&unk_190948134 + v3);
  v85 = *(float *)((char *)&unk_190948140 + v3);
  v86 = v81 * v75;
  v87 = *(float *)((char *)&unk_19094813C + v3);
  v88 = v78 - v86;
  v89 = (float)((float)((float)(v77 * v43[1]) + (float)(v76 * *v43)) + (float)(v88 * v43[2])) * -3.0;
  v90 = (float)((float)((float)(v77 * v80) + (float)(v76 * v82)) + (float)(v88 * v84)) * -0.75;
  v91 = (float)((float)((float)(v77 * v87) + (float)(v76 * v83)) + (float)(v88 * v85)) * -6.0;
  v92 = (float)((float)(v91 * v83) + (float)(v90 * v82)) + (float)((float)(v89 * *v43) + v180);
  v93 = v89;
  v94 = (float)(v89 * v43[2]) + v181;
  v95 = (float)(v93 * v43[1]) + (float)(v66 * 3.0);
  *(float *)v216 = v92;
  v96 = v186;
  v217[0] = (float)((float)(v91 * v85) + (float)(v90 * v84)) + v94;
  *(float *)&v216[1] = (float)((float)(v91 * v87) + (float)(v90 * v80)) + v95;
  v97 = (float)(v186 * v174) - (float)(v188 * v177);
  v189 = (float)(v188 * v171) - (float)(v185 * v174);
  v187 = v97;
  v98 = v97;
  v99 = (float)(v97 * v43[1]) + (float)((float)((float)(v185 * v177) - (float)(v96 * v171)) * v79);
  v201 = 0.0625;
  v100 = v189 * v43[2];
  v101 = (float *)v216;
  v202 = 0.0625;
  v102 = (_DWORD *)((char *)&unk_190942BB8 + v3);
  v103 = v98;
  v203 = 0.0625;
  v104 = (float)(v185 * v177) - (float)(v96 * v171);
  v105 = 10;
  v106 = (float)(v99 + v100) * -3.0;
  v107 = (float)((float)((float)(v187 * v87) + (float)(v104 * v83)) + (float)(v189 * v85)) * -6.0;
  v108 = (float)((float)((float)(v103 * v80) + (float)(v104 * v82)) + (float)(v189 * v84)) * -0.75;
  v109 = (float)((float)(v107 * v83) + (float)(v108 * v82)) + (float)((float)(v106 * v79) + v180);
  v110 = v106;
  v111 = v106 * v43[2];
  v112 = v110 * v43[1];
  v217[1] = v109;
  v113 = (float *)((char *)&unk_1909482E8 + v3);
  v114 = 0;
  v217[3] = (float)((float)(v107 * v85) + (float)(v108 * v84)) + (float)(v111 + v181);
  v217[2] = (float)((float)(v107 * v87) + (float)(v108 * v80)) + (float)(v112 + v183);
  do
  {
    if ( *((_DWORD *)v113 - 5) == 1 && !*v102 )
    {
      v115 = *(float *)((char *)&v218 + v114 * 4) + *(float *)((char *)&unk_190948154 + v3);
      v116 = *(float *)&v220[v114 - 1] + *(float *)((char *)&unk_190948158 + v3);
      *(_QWORD *)&v216[v114] = 0;
      v217[v114] = 0.0;
      *(float *)((char *)&v221 + v114 * 4) = v115;
      v117 = *(float *)&v220[v114] + *(float *)((char *)&unk_19094815C + v3);
      v223[v114 - 1] = v116;
      v223[v114] = v117;
    }
    if ( *(float *)((char *)&unk_1909482DC + v3) >= 1.0 )
    {
      v118 = *(float *)((char *)&v218 + v114 * 4) + *(float *)((char *)&unk_190948154 + v3);
      v119 = *(float *)&v220[v114 - 1] + *(float *)((char *)&unk_190948158 + v3);
      *(_QWORD *)&v216[v114] = 0;
      v217[v114] = 0.0;
      *(float *)((char *)&v221 + v114 * 4) = v118;
      v120 = *(float *)&v220[v114] + *(float *)((char *)&unk_19094815C + v3);
      v223[v114 - 1] = v119;
      v223[v114] = v120;
    }
    v234 = 1065353216;
    v233[0] = xmmword_1400F78B0;
    v233[1] = xmmword_1400F78B0;
    sub_140049C20((__int64)v233, (float *)v233 + 3, v59);
    sub_140049C20((__int64)v233, (float *)v233, v121);
    sub_1400495A0((float *)v233, (float *)v233, (float *)((char *)&xmmword_190941C1C + v3));
    sub_1400A8390(&v212, v233);
    v122 = *((_DWORD *)v113 - 5);
    v123 = *(float *)((char *)&v227 + v114 * 4) - *(float *)((char *)&v218 + v114 * 4);
    v124 = v229[v114 - 1] - *(float *)&v220[v114 - 1];
    v125 = v229[v114] - *(float *)&v220[v114];
    if ( v122 == 1 )
    {
      v126 = *(float *)((char *)&v227 + v114 * 4) - *(float *)((char *)&v221 + v114 * 4);
      v127 = v229[v114 - 1] - v223[v114 - 1];
      v128 = v229[v114] - v223[v114];
      v208 = 0x3E96CBE43E96CBE4LL;
      v213 = v126;
      v214 = v127;
      v215 = v128;
      v209 = 1050069988;
      v205 = 1064304640;
      v206 = 1064304640;
      v207 = 1064304640;
      if ( !*v102 )
      {
        v213 = v123;
        v214 = v124;
        v215 = v125;
        *(_QWORD *)&v216[v114] = 0;
        v217[v114] = 0.0;
      }
      v129 = *(float *)((char *)&unk_1909482DC + v3);
    }
    else
    {
      v130 = *(v113 - 2);
      v131 = *v113;
      v129 = *(float *)((char *)&unk_1909482DC + v3);
      *(_QWORD *)&v216[v114] = 0;
      v132 = fminf(v129, 1.0);
      v217[v114] = 0.0;
      v208 = 0x3F96CBE43F96CBE4LL;
      v209 = 1066847204;
      v205 = 1061158912;
      v206 = 1061158912;
      v207 = 1061158912;
      v213 = v130 - (float)(v130 * v132);
      v133 = -0.375 - *(v113 - 1);
      v215 = v131 - (float)(v131 * v132);
      v214 = (float)(v133 * v132) + *(v113 - 1);
    }
    if ( v129 >= 1.0 )
    {
      v208 = 0;
      v209 = 0;
      v205 = 1065353216;
      v206 = 1065353216;
      v207 = 1065353216;
    }
    sub_14005AB00(
      a1,
      0,
      v105,
      &v213,
      (float *)&v224,
      v101,
      1.0,
      0,
      &v212,
      &v208,
      &v205,
      &v201,
      0.78539819,
      (v122 == 1) + 1);
    v101 += 3;
    v105 += 3;
    v102 += 234;
    v113 += 55;
    v114 += 3;
  }
  while ( v105 < 16 );
  *(_DWORD *)((char *)&unk_19094827C + v3) = *(_DWORD *)((char *)&unk_1909482D4 + v3) == 1;
  v134 = 0.5;
  *(_DWORD *)&algn_190941A08[v3 + 24] = 1;
  v135 = fmaxf(*(float *)((char *)&unk_190948108 + v3), -0.5);
  *(_DWORD *)((char *)&unk_1909482D4 + v3) = 0;
  *(_DWORD *)((char *)&unk_1909483B0 + v3) = 0;
  if ( v135 <= 0.5 )
    v134 = v135;
  v136 = fmaxf(*(float *)((char *)&unk_19094810C + v3), -0.75);
  v137 = 0.75;
  *(float *)((char *)&unk_190948108 + v3) = v134;
  if ( v136 <= 0.75 )
    v137 = v136;
  v138 = v134 * 0.125;
  v139 = (float *)&dword_190941BF4[v3 / 4];
  v140 = 2;
  *(float *)((char *)&unk_19094810C + v3) = v137;
  v141 = v137 * 0.125;
  v182 = 0.0;
  v178 = 0.0;
  v175 = 0.0;
  v192 = (float)(v141 * *((float *)&v230 + 3)) + (float)(v138 * *(float *)&v230);
  v172 = 0.0;
  v184 = (float)(v141 * *(float *)&v231) + (float)(v138 * *((float *)&v230 + 1));
  v190 = (float)(v141 * *((float *)&v231 + 1)) + (float)(v138 * *((float *)&v230 + 2));
  do
  {
    v142 = v139[498];
    v143 = v139[576];
    v144 = v139[108];
    v196 = v144 * v139[78];
    v145 = v139[186];
    v146 = v139[264];
    v147 = (float)((float)((float)((float)((float)((float)((float)(v178 + (float)(v139[30] * *(v139 - 2)))
                                                         + (float)(v144 * v139[76]))
                                                 + (float)(v145 * v139[154]))
                                         + (float)(v146 * v139[232]))
                                 + (float)(v139[342] * v139[310]))
                         + (float)(v139[420] * v139[388]))
                 + (float)(v142 * v139[466]))
         + (float)(v143 * v139[544]);
    v178 = v147;
    v148 = (float)((float)((float)((float)((float)((float)((float)(v175 + (float)(v139[30] * *(v139 - 1)))
                                                         + (float)(v144 * v139[77]))
                                                 + (float)(v145 * v139[155]))
                                         + (float)(v146 * v139[233]))
                                 + (float)(v139[342] * v139[311]))
                         + (float)(v139[420] * v139[389]))
                 + (float)(v142 * v139[467]))
         + (float)(v143 * v139[545]);
    v175 = v148;
    v149 = (float)((float)((float)((float)((float)((float)((float)(v172 + (float)(v139[30] * *v139)) + v196)
                                                 + (float)(v145 * v139[156]))
                                         + (float)(v146 * v139[234]))
                                 + (float)(v139[342] * v139[312]))
                         + (float)(v139[420] * v139[390]))
                 + (float)(v142 * v139[468]))
         + (float)(v143 * v139[546]);
    v172 = v149;
    v150 = (float)((float)((float)((float)((float)((float)(v139[30] + v182) + v139[108]) + v145) + v146) + v139[342])
                 + v139[420])
         + v142;
    v139 += 624;
    v151 = v150 + v143;
    v182 = v151;
    --v140;
  }
  while ( v140 );
  if ( v151 > 0.0 )
  {
    v148 = v148 * (float)(1.0 / v151);
    v149 = v149 * (float)(1.0 / v151);
    v175 = v148;
    v147 = v147 * (float)(1.0 / v151);
    v172 = v149;
  }
  v152 = dword_1909480FC[v3 / 4];
  if ( v152 >= 8 )
  {
    if ( v152 >= 16 )
    {
      if ( v152 >= 24 )
        v153 = 0.083333336;
      else
        v153 = 0.06666667;
    }
    else
    {
      v153 = 0.050000001;
    }
  }
  else
  {
    v153 = 0.033333335;
  }
  v154 = *(float *)((char *)&unk_190948158 + v3);
  v155 = *(_DWORD *)((char *)&unk_190948154 + v3);
  v156 = v153 - v154;
  v157 = *(_DWORD *)((char *)&unk_19094815C + v3);
  v158 = &dword_190941BE8[v3 / 4];
  v159 = 16;
  do
  {
    result = *v158;
    v161 = 188 * result;
    *(_DWORD *)((char *)&unk_140249624 + v161) = v155;
    *(_DWORD *)((char *)&unk_14024962C + v161) = v157;
    *(float *)((char *)&unk_140249628 + v161) = v156 + v154;
    v162 = *((float *)&unk_14024961C + 47 * result) - v148;
    v163 = *((float *)&unk_140249620 + 47 * result) - v149;
    v164 = *((float *)&unk_140249618 + 47 * result) - v147;
    *(float *)((char *)&unk_140249624 + v161) = (float)((float)(v190 * v162) - (float)(v184 * v163))
                                              + *((float *)&unk_140249624 + 47 * result);
    *(float *)((char *)&unk_140249628 + v161) = (float)((float)(v192 * v163) - (float)(v190 * v164))
                                              + *((float *)&unk_140249628 + 47 * result);
    *(float *)((char *)&unk_14024962C + v161) = (float)((float)(v184 * v164) - (float)(v192 * v162))
                                              + *((float *)&unk_14024962C + 47 * result);
    *(float *)((char *)&unk_14024966C + v161) = v192;
    *(float *)((char *)&unk_140249670 + v161) = v184;
    *(float *)((char *)&unk_140249674 + v161) = v190;
    *(_QWORD *)((char *)&unk_140249660 + v161) = 0;
    *(_DWORD *)((char *)&unk_140249668 + v161) = 0;
    v165 = (float)((float)((float)(*((float *)&unk_140249670 + 47 * result) * *((float *)&unk_140249640 + 47 * result))
                         + (float)(*((float *)&unk_14024963C + 47 * result) * *((float *)&unk_14024966C + 47 * result)))
                 + (float)(*((float *)&unk_140249674 + 47 * result) * *((float *)&unk_140249644 + 47 * result)))
         * *((float *)&unk_140249684 + 47 * result);
    v166 = *((float *)&unk_14024963C + 47 * result) * v165;
    *(float *)((char *)&unk_140249660 + v161) = v166;
    *(float *)((char *)&unk_140249664 + v161) = (float)(v165 * *((float *)&unk_140249640 + 47 * result))
                                              + *((float *)&unk_140249664 + 47 * result);
    *(float *)((char *)&unk_140249668 + v161) = (float)(v165 * *((float *)&unk_140249644 + 47 * result))
                                              + *((float *)&unk_140249668 + 47 * result);
    v167 = (float)((float)((float)(*((float *)&unk_140249670 + 47 * result) * *((float *)&unk_14024964C + 47 * result))
                         + (float)(*((float *)&unk_140249648 + 47 * result) * *((float *)&unk_14024966C + 47 * result)))
                 + (float)(*((float *)&unk_140249674 + 47 * result) * *((float *)&unk_140249650 + 47 * result)))
         * *((float *)&unk_140249688 + 47 * result);
    v168 = (float)(*((float *)&unk_140249648 + 47 * result) * v167) + v166;
    *(float *)((char *)&unk_140249660 + v161) = v168;
    *(float *)((char *)&unk_140249664 + v161) = (float)(v167 * *((float *)&unk_14024964C + 47 * result))
                                              + *((float *)&unk_140249664 + 47 * result);
    *(float *)((char *)&unk_140249668 + v161) = (float)(v167 * *((float *)&unk_140249650 + 47 * result))
                                              + *((float *)&unk_140249668 + 47 * result);
    v158 += 78;
    v148 = v175;
    v169 = (float)((float)((float)(*((float *)&unk_140249670 + 47 * result) * *((float *)&unk_140249658 + 47 * result))
                         + (float)(*((float *)&unk_140249654 + 47 * result) * *((float *)&unk_14024966C + 47 * result)))
                 + (float)(*((float *)&unk_140249674 + 47 * result) * *((float *)&unk_14024965C + 47 * result)))
         * *((float *)&unk_14024968C + 47 * result);
    *(float *)((char *)&unk_140249660 + v161) = (float)(*((float *)&unk_140249654 + 47 * result) * v169) + v168;
    v149 = v172;
    *(float *)((char *)&unk_140249664 + v161) = (float)(v169 * *((float *)&unk_140249658 + 47 * result))
                                              + *((float *)&unk_140249664 + 47 * result);
    *(float *)((char *)&unk_140249668 + v161) = (float)(v169 * *((float *)&unk_14024965C + 47 * result))
                                              + *((float *)&unk_140249668 + 47 * result);
    --v159;
  }
  while ( v159 );
  *(float *)((char *)&unk_190948158 + v3) = (float)(v156 * 3.0) + v154;
  if ( dword_190948498[v3 / 4] > 0 )
  {
    result = dword_19025F118[1760 * dword_19094849C[v3 / 4]];
    *((float *)&unk_140249628 + 47 * result) = v156 + *((float *)&unk_140249628 + 47 * result);
  }
  if ( *(int *)((char *)&unk_1909484C0 + v3) > 0 )
  {
    result = dword_19025F118[1760 * *(int *)((char *)&unk_1909484C4 + v3)];
    *((float *)&unk_140249628 + 47 * result) = v156 + *((float *)&unk_140249628 + 47 * result);
  }
  dword_1909480FC[v3 / 4] = 0;
  *(_DWORD *)((char *)&unk_190948218 + v3) = 1070141403;
  return result;
}

