/* Address: 0x1400b78f0 | Name: sub_1400B78F0 | Size: 6383 bytes */
__int64 __fastcall sub_1400B78F0(int a1)
{
  __int64 v1; // rdi
  unsigned int *v2; // r13
  float v3; // xmm0_4
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm3_4
  float v9; // xmm10_4
  float v10; // xmm12_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm15_4
  float v15; // xmm2_4
  float v16; // xmm15_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm11_4
  float *v20; // rbx
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm7_4
  float v24; // xmm0_4
  float v25; // xmm7_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm12_4
  float v30; // xmm14_4
  float v31; // xmm13_4
  float v32; // xmm14_4
  float v33; // xmm0_4
  float v34; // xmm12_4
  float v35; // xmm13_4
  float v36; // xmm13_4
  unsigned int v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm8_4
  float v41; // xmm7_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm8_4
  float *v45; // rsi
  float v46; // xmm9_4
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm15_4
  float v50; // xmm15_4
  float v51; // xmm4_4
  float v52; // xmm5_4
  float v53; // xmm7_4
  float v54; // xmm8_4
  float v55; // xmm9_4
  float v56; // xmm3_4
  float v57; // xmm4_4
  float v58; // xmm7_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  double v61; // xmm0_8
  float v62; // xmm1_4
  float v63; // xmm4_4
  float v64; // xmm5_4
  float v65; // xmm11_4
  float v66; // xmm7_4
  float v67; // xmm8_4
  float v68; // xmm9_4
  float v69; // xmm3_4
  float v70; // xmm3_4
  float v71; // xmm4_4
  float v72; // xmm5_4
  float v73; // xmm2_4
  float v74; // xmm11_4
  float v75; // xmm6_4
  float v76; // xmm10_4
  float v77; // xmm5_4
  float v78; // xmm4_4
  float v79; // xmm15_4
  float v80; // xmm3_4
  float v81; // xmm7_4
  float v82; // xmm2_4
  float v83; // xmm14_4
  float v84; // xmm13_4
  float v85; // xmm0_4
  float v86; // xmm11_4
  float v87; // xmm9_4
  float v88; // xmm15_4
  float v89; // xmm12_4
  float v90; // xmm0_4
  float v91; // xmm10_4
  float v92; // xmm2_4
  float v93; // xmm5_4
  float v94; // xmm4_4
  float v95; // xmm7_4
  float v96; // xmm2_4
  float v97; // xmm1_4
  float v98; // xmm5_4
  float v99; // xmm1_4
  float v100; // xmm0_4
  float v101; // xmm5_4
  float v102; // xmm8_4
  float v103; // xmm5_4
  float v104; // xmm1_4
  float *v105; // r12
  unsigned int *v106; // r14
  float v107; // xmm4_4
  float v108; // xmm0_4
  int v109; // r15d
  float v110; // xmm5_4
  float v111; // xmm8_4
  float v112; // xmm4_4
  float v113; // xmm2_4
  float v114; // xmm1_4
  float v115; // xmm5_4
  float v116; // xmm1_4
  float *v117; // rsi
  __int64 v118; // rbx
  float v119; // xmm0_4
  float v120; // xmm1_4
  float v121; // xmm0_4
  float v122; // xmm0_4
  float v123; // xmm1_4
  float v124; // xmm0_4
  int v125; // ecx
  float v126; // xmm3_4
  float v127; // xmm4_4
  float v128; // xmm5_4
  float v129; // xmm0_4
  float v130; // xmm1_4
  float v131; // xmm2_4
  float v132; // xmm5_4
  float v133; // xmm1_4
  float v134; // xmm3_4
  float v135; // xmm4_4
  float v136; // xmm1_4
  float v137; // xmm2_4
  float v138; // xmm0_4
  float v139; // xmm0_4
  float v140; // xmm1_4
  float v141; // xmm2_4
  float *v142; // rax
  __int64 v143; // rcx
  float v144; // xmm1_4
  float v145; // xmm1_4
  float v146; // xmm6_4
  float v147; // xmm15_4
  float v148; // xmm2_4
  float v149; // xmm13_4
  float v150; // xmm0_4
  float v151; // xmm1_4
  float v152; // xmm11_4
  float v153; // xmm8_4
  float v154; // xmm0_4
  float v155; // xmm14_4
  float v156; // xmm8_4
  float v157; // xmm5_4
  float v158; // xmm10_4
  float v159; // xmm0_4
  float v160; // xmm5_4
  float v161; // xmm10_4
  float v162; // xmm7_4
  float v163; // xmm12_4
  float v164; // xmm4_4
  float v165; // xmm0_4
  float v166; // xmm9_4
  float v167; // xmm6_4
  float v168; // xmm15_4
  float v169; // xmm0_4
  float v170; // xmm1_4
  float v171; // xmm2_4
  float v172; // xmm0_4
  float v173; // xmm0_4
  float v174; // xmm0_4
  int v175; // eax
  float v176; // xmm6_4
  float v177; // xmm9_4
  unsigned int v178; // xmm11_4
  float v179; // xmm6_4
  unsigned int v180; // xmm13_4
  float v181; // xmm10_4
  unsigned int *v182; // rdx
  float v183; // xmm7_4
  __int64 v184; // r8
  float v185; // xmm8_4
  __int64 v186; // rcx
  float v187; // xmm4_4
  float v188; // xmm3_4
  float v189; // xmm5_4
  float v190; // xmm2_4
  unsigned int v191; // xmm3_4
  float v192; // xmm2_4
  unsigned int v193; // xmm4_4
  float v194; // xmm3_4
  __int64 v195; // rcx
  __int64 v196; // rcx
  __int64 v198; // [rsp+8h] [rbp-100h] BYREF
  float v199; // [rsp+78h] [rbp-90h]
  float v200; // [rsp+7Ch] [rbp-8Ch]
  float v201; // [rsp+80h] [rbp-88h]
  float v202; // [rsp+84h] [rbp-84h]
  float v203; // [rsp+88h] [rbp-80h]
  float v204; // [rsp+8Ch] [rbp-7Ch]
  float v205; // [rsp+90h] [rbp-78h]
  float v206; // [rsp+94h] [rbp-74h]
  float v207; // [rsp+98h] [rbp-70h]
  float v208; // [rsp+9Ch] [rbp-6Ch]
  float v209; // [rsp+A0h] [rbp-68h]
  float v210; // [rsp+A4h] [rbp-64h]
  float v211; // [rsp+A8h] [rbp-60h]
  float v212; // [rsp+ACh] [rbp-5Ch]
  float v213; // [rsp+B0h] [rbp-58h]
  float v214; // [rsp+B4h] [rbp-54h]
  float v215; // [rsp+B8h] [rbp-50h]
  int v216; // [rsp+BCh] [rbp-4Ch]
  float v217; // [rsp+C0h] [rbp-48h] BYREF
  float v218; // [rsp+C4h] [rbp-44h]
  float v219; // [rsp+C8h] [rbp-40h]
  float v220; // [rsp+CCh] [rbp-3Ch]
  unsigned int v221; // [rsp+D0h] [rbp-38h] BYREF
  int v222; // [rsp+D4h] [rbp-34h]
  int v223; // [rsp+D8h] [rbp-30h]
  __int64 v224; // [rsp+E0h] [rbp-28h] BYREF
  int v225; // [rsp+E8h] [rbp-20h]
  float v226; // [rsp+F0h] [rbp-18h]
  float v227; // [rsp+F4h] [rbp-14h]
  __m128 v228; // [rsp+F8h] [rbp-10h] BYREF
  float v229; // [rsp+110h] [rbp+8h] BYREF
  float v230; // [rsp+114h] [rbp+Ch]
  float v231; // [rsp+118h] [rbp+10h]
  _DWORD v232[2]; // [rsp+120h] [rbp+18h] BYREF
  float v233[4]; // [rsp+128h] [rbp+20h]
  float v234; // [rsp+138h] [rbp+30h]
  float v235; // [rsp+13Ch] [rbp+34h]
  _DWORD v236[4]; // [rsp+140h] [rbp+38h]
  float v237; // [rsp+150h] [rbp+48h]
  float v238; // [rsp+154h] [rbp+4Ch]
  float v239[4]; // [rsp+158h] [rbp+50h]
  __int128 v240; // [rsp+168h] [rbp+60h] BYREF
  __int128 v241; // [rsp+178h] [rbp+70h]
  int v242; // [rsp+188h] [rbp+80h]
  float v243; // [rsp+190h] [rbp+88h]
  float v244; // [rsp+194h] [rbp+8Ch]
  float v245[4]; // [rsp+198h] [rbp+90h]
  __int128 v246; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v247; // [rsp+1B8h] [rbp+B0h]
  int v248; // [rsp+1C8h] [rbp+C0h]
  _OWORD v249[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v250; // [rsp+1F0h] [rbp+E8h]
  __int64 v251; // [rsp+1F8h] [rbp+F0h]

  v1 = 7166LL * a1;
  v216 = a1;
  v2 = &dword_140404A6C[v1 + 280651452];
  v3 = (float)(*(float *)&dword_140404A6C[282486350] * *(float *)&dword_140404A6C[v1 + 280652313])
     + *(float *)&dword_140404A6C[v1 + 280652298];
  v4 = *(float *)&dword_140404A6C[v1 + 280651455];
  v5 = (float)(*(float *)&dword_140404A6C[282486350] * *(float *)&dword_140404A6C[v1 + 280652314])
     + *(float *)&dword_140404A6C[v1 + 280652299];
  v6 = *(float *)&dword_140404A6C[v1 + 280651440];
  v7 = *(float *)&dword_140404A6C[v1 + 280651441];
  v8 = *(float *)&dword_140404A6C[v1 + 280651456];
  v9 = *(float *)&dword_140404A6C[v1 + 280651442];
  v10 = *(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v1 + 280651452];
  v245[0] = (float)(*(float *)&dword_140404A6C[282486350] * *(float *)&dword_140404A6C[v1 + 280652315])
          + *(float *)&dword_140404A6C[v1 + 280652300];
  v243 = v3;
  v244 = v5;
  v11 = (float)(*(float *)&dword_140404A6C[282486425] * *(float *)&dword_140404A6C[v1 + 280652549])
      + *(float *)&dword_140404A6C[v1 + 280652534];
  v12 = (float)(*(float *)&dword_140404A6C[282486425] * *(float *)&dword_140404A6C[v1 + 280652548])
      + *(float *)&dword_140404A6C[v1 + 280652533];
  v245[1] = (float)(*(float *)&dword_140404A6C[282486425] * *(float *)&dword_140404A6C[v1 + 280652547])
          + *(float *)&dword_140404A6C[v1 + 280652532];
  v245[3] = v11;
  v13 = *(float *)&dword_140404A6C[282486299] * *(float *)&dword_140404A6C[v1 + 280651452];
  v245[2] = v12;
  v226 = (float)(v13 + v6) + (float)(*(float *)&dword_140404A6C[282486300] * v4);
  v234 = v226;
  v14 = (float)(*(float *)&dword_140404A6C[282486299] * *(float *)&dword_140404A6C[v1 + 280651454]) + v9;
  v227 = (float)((float)(*(float *)&dword_140404A6C[282486299] * *(float *)&dword_140404A6C[v1 + 280651453]) + v7)
       + (float)(*(float *)&dword_140404A6C[282486300] * v8);
  v235 = v227;
  v15 = *(float *)&dword_140404A6C[v1 + 280651457];
  v16 = v14 + (float)(*(float *)&dword_140404A6C[282486300] * v15);
  v17 = *(float *)&dword_140404A6C[282486375] * v4;
  v18 = *(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v1 + 280651453];
  v19 = *(float *)&dword_140404A6C[282486374] * *(float *)&dword_140404A6C[v1 + 280651454];
  v209 = v16;
  *(float *)v236 = v16;
  v200 = (float)(v10 + v6) + v17;
  *(float *)&v236[1] = v200;
  v199 = (float)(v18 + v7) + (float)(*(float *)&dword_140404A6C[282486375] * v8);
  *(float *)&v236[2] = v199;
  v248 = 1065353216;
  v246 = xmmword_140278D30;
  v201 = (float)(v19 + v9) + (float)(*(float *)&dword_140404A6C[282486375] * v15);
  *(float *)&v236[3] = v201;
  v247 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v246, (float *)&v246 + 3);
  v242 = 1065353216;
  v240 = xmmword_140278D30;
  v241 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v240, (float *)&v240 + 3);
  v20 = (float *)&dword_140404A6C[v1 + 280657914];
  v21 = *(float *)&dword_1402F6190 * 1.75;
  dword_140404A6C[v1 + 280657993] = 0;
  *(float *)&dword_140404A6C[v1 + 280657980] = *(float *)&dword_140404A6C[v1 + 280657992]
                                             + *(float *)&dword_140404A6C[v1 + 280657980];
  *(float *)&dword_140404A6C[v1 + 280657981] = *(float *)&dword_140404A6C[v1 + 280657981]
                                             + *(float *)&dword_140404A6C[v1 + 280657993];
  v22 = *(float *)&dword_1402F6188 * 1.75;
  *(float *)&dword_140404A6C[v1 + 280657982] = *(float *)&dword_140404A6C[v1 + 280657982]
                                             + *(float *)&dword_140404A6C[v1 + 280657994];
  v23 = *(float *)&dword_140404A6C[v1 + 280651373];
  v24 = *(float *)&v241 * 0.25;
  dword_140404A6C[v1 + 280657981] = dword_140404A6C[v1 + 280657915];
  v25 = (float)(v23 * 0.875) + v24;
  v229 = *(float *)&dword_140404A6C[v1 + 280657914] - v22;
  v230 = *(float *)&dword_140404A6C[v1 + 280657915] - (float)(*(float *)&dword_1402F618C * 1.75);
  v231 = *(float *)&dword_140404A6C[v1 + 280657916] - v21;
  if ( (unsigned int)sub_1400DC050(&dword_140404A6C[v1 + 280657914], &v229, 0) )
    *(float *)&dword_140404A6C[v1 + 280657981] = *(float *)&dword_140404A6C[73006982] + v25;
  v26 = *(float *)&dword_140404A6C[v1 + 280657930];
  v27 = *(float *)&dword_140404A6C[v1 + 280657931];
  v28 = *(float *)&dword_140404A6C[v1 + 280657932];
  v29 = (float)(*(float *)&dword_140404A6C[v1 + 280657981] - v20[1]) * 0.375;
  v30 = (float)((float)(*(float *)&dword_140404A6C[v1 + 280657980] - *v20) * 0.375)
      - (float)((float)(v26 - *(float *)&dword_140404A6C[v1 + 280657992]) * 0.75);
  v31 = (float)(*(float *)&dword_140404A6C[v1 + 280657982] - v20[2]) * 0.375;
  v208 = 0.75;
  v32 = v30 - v26;
  v33 = (float)(v27 - *(float *)&dword_140404A6C[v1 + 280657993]) * 0.75;
  v207 = v32;
  v34 = (float)(v29 - v33) - v27;
  v35 = v31 - (float)((float)(v28 - *(float *)&dword_140404A6C[v1 + 280657994]) * 0.75);
  v205 = v34;
  v36 = v35 - v28;
  v206 = v36;
  if ( v34 <= 0.5 )
  {
    if ( v34 < 0.0 )
    {
      v34 = 0.0;
      v205 = 0.0;
    }
  }
  else
  {
    v205 = 0.5;
    v34 = 0.5;
  }
  *(float *)&v37 = *(float *)&dword_140404A6C[v1 + 280658028] + 0.125;
  v38 = v26 + v226;
  v39 = v26 + v200;
  v40 = v28;
  v41 = v27 + v227;
  v42 = v27 + v199;
  v43 = v28 + v201;
  dword_140404A6C[v1 + 280658028] = v37;
  v44 = v40 + v16;
  if ( *(float *)&v37 > 1.0 )
    dword_140404A6C[v1 + 280658028] = 1065353216;
  v210 = v38 + (float)(v32 * 3.0);
  v212 = v44 + (float)(v36 * 3.0);
  v213 = v39 + (float)(v32 * 3.0);
  v215 = v43 + (float)(v36 * 3.0);
  v211 = v41 + (float)(v34 * 3.0);
  v214 = v42 + (float)(v34 * 3.0);
  sub_14010E370(&v217, &v240);
  v45 = (float *)&dword_140404A6C[v1 + 280657917];
  sub_14010E370(&v228, &dword_140404A6C[v1 + 280657917]);
  v46 = v228.m128_f32[3];
  v47 = v228.m128_f32[2];
  v48 = v228.m128_f32[0];
  v49 = v228.m128_f32[1];
  v202 = v228.m128_f32[3];
  if ( (float)((float)((float)(v220 * v228.m128_f32[3]) + (float)(v219 * v228.m128_f32[2]))
             + (float)((float)(v217 * v228.m128_f32[0]) + (float)(v218 * v228.m128_f32[1]))) < 0.0 )
  {
    v228 = _mm_xor_ps(v228, (__m128)xmmword_140279870);
    v47 = v228.m128_f32[2];
    v49 = v228.m128_f32[1];
    v48 = v228.m128_f32[0];
    LODWORD(v202) = _mm_shuffle_ps(v228, v228, 255).m128_u32[0];
    v46 = v202;
  }
  v50 = -v49;
  v51 = -v47;
  v52 = -v48;
  v53 = (float)((float)((float)(v46 * v217) + (float)(v52 * v220)) + (float)(v50 * v219)) - (float)(v51 * v218);
  v54 = (float)((float)((float)(v46 * v218) - (float)(v52 * v219)) + (float)(v50 * v220)) + (float)(v51 * v217);
  v55 = (float)((float)((float)(v46 * v219) + (float)(v52 * v218)) - (float)(v50 * v217)) + (float)(v51 * v220);
  v56 = (float)((float)((float)(v220 * v202) - (float)(v52 * v217)) - (float)(v50 * v218)) - (float)(v51 * v219);
  v57 = fsqrt((float)((float)(v54 * v54) + (float)(v53 * v53)) + (float)(v55 * v55));
  if ( v57 == 0.0 )
  {
    v58 = 0.0;
    v59 = 0.0;
    v60 = 0.0;
  }
  else
  {
    v58 = v53 * (float)(1.0 / v57);
    v59 = v54 * (float)(1.0 / v57);
    v60 = v55 * (float)(1.0 / v57);
  }
  v61 = acos(fminf(fmaxf(v56, -1.0), 1.0));
  v62 = v61 + v61;
  v63 = *(float *)&dword_140404A6C[v1 + 280657936];
  v64 = *(float *)&dword_140404A6C[v1 + 280657937];
  v65 = *(float *)&dword_140404A6C[v1 + 280657938];
  v66 = (float)((float)((float)(v58 * v62) * 0.375) - (float)(v63 * 0.75)) - v63;
  v67 = (float)((float)((float)(v59 * v62) * 0.375) - (float)(v64 * 0.75)) - v64;
  v68 = (float)((float)((float)(v60 * v62) * 0.375) - (float)(v65 * 0.75)) - v65;
  v69 = fsqrt((float)((float)(v67 * v67) + (float)(v66 * v66)) + (float)(v68 * v68));
  if ( v69 > 0.25 )
  {
    v66 = (float)(v66 * (float)(1.0 / v69)) * 0.25;
    v67 = (float)(v67 * (float)(1.0 / v69)) * 0.25;
    v68 = (float)(v68 * (float)(1.0 / v69)) * 0.25;
  }
  v240 = *(_OWORD *)v2;
  v70 = v66 + v63;
  v71 = v67 + v64;
  v241 = *((_OWORD *)v2 + 1);
  v72 = v68 + v65;
  v242 = v2[8];
  v73 = fsqrt((float)((float)(v71 * v71) + (float)(v70 * v70)) + (float)(v72 * v72));
  if ( v73 > 0.000015258789 )
  {
    v229 = v70 * (float)(1.0 / v73);
    v230 = v71 * (float)(1.0 / v73);
    v231 = v72 * (float)(1.0 / v73);
    sub_14007B2A0((__int64)&v240, &v229);
  }
  v74 = v227 - v20[1];
  v75 = v209 - v20[2];
  v76 = v226 - *v20;
  v77 = v199 - v20[1];
  v78 = v201 - v20[2];
  v79 = v200 - *v20;
  v202 = v66 * 3.0;
  v204 = v67 * 3.0;
  v203 = v68 * 3.0;
  v200 = v79;
  v199 = v77;
  v201 = v78;
  v237 = (float)((float)(v74 * (float)(v68 * 3.0)) - (float)(v75 * (float)(v67 * 3.0))) + v210;
  v238 = v211 + (float)((float)(v75 * (float)(v66 * 3.0)) - (float)(v76 * (float)(v68 * 3.0)));
  v239[0] = v212 + (float)((float)(v76 * (float)(v67 * 3.0)) - (float)(v74 * (float)(v66 * 3.0)));
  v239[1] = v213 + (float)((float)(v77 * (float)(v68 * 3.0)) - (float)(v78 * (float)(v67 * 3.0)));
  v239[2] = v214 + (float)((float)(v78 * (float)(v66 * 3.0)) - (float)(v79 * (float)(v68 * 3.0)));
  v80 = (float)(v34 * v75) - (float)(v36 * v74);
  v239[3] = v215 + (float)((float)(v79 * (float)(v67 * 3.0)) - (float)(v77 * (float)(v66 * 3.0)));
  v81 = (float)(v36 * v76) - (float)(v32 * v75);
  v82 = v32 * v74;
  v83 = *v45;
  v84 = *(float *)&dword_140404A6C[v1 + 280657921];
  v85 = v34;
  v86 = *(float *)&dword_140404A6C[v1 + 280657920];
  v87 = *(float *)&dword_140404A6C[v1 + 280657923];
  v88 = *(float *)&dword_140404A6C[v1 + 280657922];
  v89 = *(float *)&dword_140404A6C[v1 + 280657925];
  v90 = v85 * v76;
  v91 = *(float *)&dword_140404A6C[v1 + 280657924];
  v92 = v82 - v90;
  v93 = (float)((float)((float)(v81 * v45[1]) + (float)(v80 * *v45)) + (float)(v92 * v45[2])) * -3.0;
  v94 = (float)((float)((float)(v81 * v84) + (float)(v80 * v86)) + (float)(v92 * v88)) * -0.75;
  v95 = (float)((float)((float)(v81 * v91) + (float)(v80 * v87)) + (float)(v92 * v89)) * -6.0;
  v96 = (float)((float)(v95 * v87) + (float)(v94 * v86)) + (float)((float)(v93 * *v45) + v202);
  v97 = v93;
  v98 = (float)(v93 * v45[2]) + v203;
  v99 = (float)(v97 * v45[1]) + (float)(v67 * 3.0);
  *(float *)v232 = v96;
  v100 = v206;
  v233[0] = (float)((float)(v95 * v89) + (float)(v94 * v88)) + v98;
  *(float *)&v232[1] = (float)((float)(v95 * v91) + (float)(v94 * v84)) + v99;
  v101 = (float)(v206 * v200) - (float)(v207 * v201);
  v207 = (float)(v207 * v199) - (float)(v205 * v200);
  v206 = v101;
  v102 = v101;
  v103 = (float)(v101 * v45[1]) + (float)((float)((float)(v205 * v201) - (float)(v100 * v199)) * v83);
  v217 = 0.0625;
  v104 = v207 * v45[2];
  v105 = (float *)v232;
  v218 = 0.0625;
  v106 = &dword_140404A6C[v1 + 280652451];
  v107 = v102;
  v219 = 0.0625;
  v108 = (float)(v205 * v201) - (float)(v100 * v199);
  v109 = 10;
  v110 = (float)(v103 + v104) * -3.0;
  v111 = (float)((float)((float)(v206 * v91) + (float)(v108 * v87)) + (float)(v207 * v89)) * -6.0;
  v112 = (float)((float)((float)(v107 * v84) + (float)(v108 * v86)) + (float)(v207 * v88)) * -0.75;
  v113 = (float)((float)(v111 * v87) + (float)(v112 * v86)) + (float)((float)(v110 * v83) + v202);
  v114 = v110;
  v115 = v110 * v45[2];
  v116 = v114 * v45[1];
  v233[1] = v113;
  v117 = (float *)&dword_140404A6C[v1 + 280658031];
  v118 = 0;
  v233[3] = (float)((float)(v111 * v89) + (float)(v112 * v88)) + (float)(v115 + v203);
  v233[2] = (float)((float)(v111 * v91) + (float)(v112 * v84)) + (float)(v116 + v204);
  do
  {
    if ( *((_DWORD *)v117 - 5) == 1 && !*v106 )
    {
      v119 = *(float *)((char *)&v234 + v118 * 4) + *(float *)&dword_140404A6C[v1 + 280657930];
      v120 = *(float *)&v236[v118 - 1] + *(float *)&dword_140404A6C[v1 + 280657931];
      *(_QWORD *)&v232[v118] = 0;
      v233[v118] = 0.0;
      *(float *)((char *)&v237 + v118 * 4) = v119;
      v121 = *(float *)&v236[v118] + *(float *)&dword_140404A6C[v1 + 280657932];
      v239[v118 - 1] = v120;
      v239[v118] = v121;
    }
    if ( *(float *)&dword_140404A6C[v1 + 280658028] >= 1.0 )
    {
      v122 = *(float *)((char *)&v234 + v118 * 4) + *(float *)&dword_140404A6C[v1 + 280657930];
      v123 = *(float *)&v236[v118 - 1] + *(float *)&dword_140404A6C[v1 + 280657931];
      *(_QWORD *)&v232[v118] = 0;
      v233[v118] = 0.0;
      *(float *)((char *)&v237 + v118 * 4) = v122;
      v124 = *(float *)&v236[v118] + *(float *)&dword_140404A6C[v1 + 280657932];
      v239[v118 - 1] = v123;
      v239[v118] = v124;
    }
    v250 = 1065353216;
    v249[0] = xmmword_140278D30;
    v249[1] = xmmword_140278D30;
    sub_14007B2A0((__int64)v249, (float *)v249 + 3);
    sub_14007B2A0((__int64)v249, (float *)v249);
    sub_14007AE70((float *)v249, (float *)v249, (float *)&dword_140404A6C[v1 + 280651452]);
    sub_14010E370(&v228, v249);
    v125 = *((_DWORD *)v117 - 5);
    v126 = *(float *)((char *)&v243 + v118 * 4) - *(float *)((char *)&v234 + v118 * 4);
    v127 = v245[v118 - 1] - *(float *)&v236[v118 - 1];
    v128 = v245[v118] - *(float *)&v236[v118];
    if ( v125 == 1 )
    {
      v129 = *(float *)((char *)&v243 + v118 * 4) - *(float *)((char *)&v237 + v118 * 4);
      v130 = v245[v118 - 1] - v239[v118 - 1];
      v131 = v245[v118] - v239[v118];
      v224 = 0x3E96CBE43E96CBE4LL;
      v229 = v129;
      v230 = v130;
      v231 = v131;
      v225 = 1050069988;
      v221 = 1064304640;
      v222 = 1064304640;
      v223 = 1064304640;
      if ( !*v106 )
      {
        v229 = v126;
        v230 = v127;
        v231 = v128;
        *(_QWORD *)&v232[v118] = 0;
        v233[v118] = 0.0;
      }
      v132 = *(float *)&dword_140404A6C[v1 + 280658028];
    }
    else
    {
      v133 = *(v117 - 2);
      v134 = *v117;
      v132 = *(float *)&dword_140404A6C[v1 + 280658028];
      *(_QWORD *)&v232[v118] = 0;
      v135 = fminf(v132, 1.0);
      v233[v118] = 0.0;
      v224 = 0x3F96CBE43F96CBE4LL;
      v225 = 1066847204;
      v221 = 1061158912;
      v222 = 1061158912;
      v223 = 1061158912;
      v229 = v133 - (float)(v133 * v135);
      v136 = -0.375 - *(v117 - 1);
      v231 = v134 - (float)(v134 * v135);
      v230 = (float)(v136 * v135) + *(v117 - 1);
    }
    if ( v132 >= 1.0 )
    {
      v224 = 0;
      v225 = 0;
      v221 = 1065353216;
      v222 = 1065353216;
      v223 = 1065353216;
    }
    sub_1400B1450(
      v216,
      0,
      v109,
      &v229,
      (float *)&v240,
      v105,
      1.0,
      0,
      &v228,
      &v224,
      &v221,
      (unsigned int *)&v217,
      0.78539819,
      (v125 == 1) + 1);
    v105 += 3;
    v109 += 3;
    v106 += 234;
    v117 += 55;
    v118 += 3;
  }
  while ( v109 < 16 );
  dword_140404A6C[v1 + 280658004] = dword_140404A6C[v1 + 280658026] == 1;
  v137 = 0.5;
  dword_140404A6C[v1 + 280651325] = 1;
  v138 = fmaxf(*(float *)&dword_140404A6C[v1 + 280657911], -0.5);
  dword_140404A6C[v1 + 280658026] = 0;
  dword_140404A6C[v1 + 280658081] = 0;
  if ( v138 <= 0.5 )
    v137 = v138;
  v139 = fmaxf(*(float *)&dword_140404A6C[v1 + 280657912], -0.75);
  v140 = v208;
  *(float *)&dword_140404A6C[v1 + 280657911] = v137;
  if ( v139 <= v140 )
    v140 = v139;
  v141 = v137 * 0.125;
  v142 = (float *)&dword_140404A6C[v1 + 280651442];
  v143 = 2;
  *(float *)&dword_140404A6C[v1 + 280657912] = v140;
  v144 = v140 * 0.125;
  v203 = 0.0;
  v201 = 0.0;
  v200 = 0.0;
  v209 = (float)(v144 * *((float *)&v246 + 3)) + (float)(v141 * *(float *)&v246);
  v199 = 0.0;
  v204 = (float)(v144 * *(float *)&v247) + (float)(v141 * *((float *)&v246 + 1));
  v208 = (float)(v144 * *((float *)&v247 + 1)) + (float)(v141 * *((float *)&v246 + 2));
  do
  {
    v145 = v142[30];
    v146 = v142[498];
    v147 = v145 * *(v142 - 2);
    v148 = v146 * v142[467];
    v149 = v142[576];
    *(float *)&v216 = v145 * *(v142 - 1);
    v150 = v145 * *v142;
    v151 = v142[108];
    v152 = v151 * v142[76];
    v213 = v150;
    v215 = v151 * v142[77];
    v212 = v151 * v142[78];
    v153 = v142[186];
    v154 = v153 * v142[156];
    v155 = v153 * v142[155];
    v156 = v153 * v142[154];
    v211 = v154;
    v157 = v142[264];
    v214 = v155;
    v158 = v157;
    v159 = v157 * v142[234];
    v160 = v157 * v142[232];
    v161 = v158 * v142[233];
    v210 = v159;
    v162 = v142[342] * v142[311];
    v163 = v142[342] * v142[312];
    v164 = v142[420] * v142[389];
    v165 = v146 * v142[466];
    v166 = v142[420] * v142[390];
    v167 = v146 * v142[468];
    v168 = (float)((float)((float)((float)((float)((float)((float)(v201 + v147) + v152) + v156) + v160)
                                 + (float)(v142[342] * v142[310]))
                         + (float)(v142[420] * v142[388]))
                 + v165)
         + (float)(v149 * v142[544]);
    v169 = v149 * v142[545];
    v201 = v168;
    v170 = (float)((float)((float)((float)((float)((float)((float)(v200 + *(float *)&v216) + v215) + v155) + v161) + v162)
                         + v164)
                 + v148)
         + v169;
    v200 = v170;
    v171 = (float)((float)((float)((float)((float)((float)((float)(v199 + v213) + v212) + v211) + v210) + v163) + v166)
                 + v167)
         + (float)(v149 * v142[546]);
    v172 = v142[30];
    v199 = v171;
    v173 = (float)((float)((float)((float)((float)((float)(v172 + v203) + v142[108]) + v142[186]) + v142[264])
                         + v142[342])
                 + v142[420])
         + v142[498];
    v142 += 624;
    v174 = v173 + v149;
    v203 = v174;
    --v143;
  }
  while ( v143 );
  if ( v174 > 0.0 )
  {
    v170 = v170 * (float)(1.0 / v174);
    v171 = v171 * (float)(1.0 / v174);
    v200 = v170;
    v168 = v168 * (float)(1.0 / v174);
    v199 = v171;
  }
  v175 = dword_140404A6C[v1 + 280657908];
  if ( v175 >= 8 )
  {
    if ( v175 >= 16 )
    {
      if ( v175 >= 24 )
        v176 = 0.083333336;
      else
        v176 = 0.06666667;
    }
    else
    {
      v176 = 0.050000001;
    }
  }
  else
  {
    v176 = 0.033333335;
  }
  v177 = *(float *)&dword_140404A6C[v1 + 280657931];
  v178 = dword_140404A6C[v1 + 280657930];
  v179 = v176 - v177;
  v180 = dword_140404A6C[v1 + 280657932];
  v181 = v208;
  v182 = &dword_140404A6C[v1 + 280651439];
  v183 = v209;
  v184 = 16;
  v185 = v204;
  do
  {
    v186 = 47LL * (int)*v182;
    dword_140404A6C[v186 + 18215718] = v178;
    dword_140404A6C[v186 + 18215720] = v180;
    *(float *)&dword_140404A6C[v186 + 18215719] = v179 + v177;
    v187 = *(float *)&dword_140404A6C[v186 + 18215716] - v170;
    v188 = *(float *)&dword_140404A6C[v186 + 18215717] - v171;
    v189 = *(float *)&dword_140404A6C[v186 + 18215715] - v168;
    *(float *)&dword_140404A6C[v186 + 18215718] = (float)((float)(v181 * v187) - (float)(v185 * v188))
                                                + *(float *)&dword_140404A6C[v186 + 18215718];
    *(float *)&dword_140404A6C[v186 + 18215719] = (float)((float)(v183 * v188) - (float)(v181 * v189))
                                                + *(float *)&dword_140404A6C[v186 + 18215719];
    *(float *)&dword_140404A6C[v186 + 18215720] = (float)((float)(v185 * v189) - (float)(v183 * v187))
                                                + *(float *)&dword_140404A6C[v186 + 18215720];
    *(float *)&dword_140404A6C[v186 + 18215736] = v183;
    *(float *)&dword_140404A6C[v186 + 18215737] = v185;
    *(float *)&dword_140404A6C[v186 + 18215738] = v181;
    *(_QWORD *)&dword_140404A6C[v186 + 18215733] = 0;
    dword_140404A6C[v186 + 18215735] = 0;
    v190 = (float)((float)((float)(*(float *)&dword_140404A6C[v186 + 18215737]
                                 * *(float *)&dword_140404A6C[v186 + 18215725])
                         + (float)(*(float *)&dword_140404A6C[v186 + 18215724]
                                 * *(float *)&dword_140404A6C[v186 + 18215736]))
                 + (float)(*(float *)&dword_140404A6C[v186 + 18215738] * *(float *)&dword_140404A6C[v186 + 18215726]))
         * *(float *)&dword_140404A6C[v186 + 18215742];
    *(float *)&v191 = *(float *)&dword_140404A6C[v186 + 18215724] * v190;
    dword_140404A6C[v186 + 18215733] = v191;
    *(float *)&dword_140404A6C[v186 + 18215734] = (float)(v190 * *(float *)&dword_140404A6C[v186 + 18215725])
                                                + *(float *)&dword_140404A6C[v186 + 18215734];
    *(float *)&dword_140404A6C[v186 + 18215735] = (float)(v190 * *(float *)&dword_140404A6C[v186 + 18215726])
                                                + *(float *)&dword_140404A6C[v186 + 18215735];
    v192 = (float)((float)((float)(*(float *)&dword_140404A6C[v186 + 18215737]
                                 * *(float *)&dword_140404A6C[v186 + 18215728])
                         + (float)(*(float *)&dword_140404A6C[v186 + 18215727]
                                 * *(float *)&dword_140404A6C[v186 + 18215736]))
                 + (float)(*(float *)&dword_140404A6C[v186 + 18215738] * *(float *)&dword_140404A6C[v186 + 18215729]))
         * *(float *)&dword_140404A6C[v186 + 18215743];
    *(float *)&v193 = (float)(*(float *)&dword_140404A6C[v186 + 18215727] * v192) + *(float *)&v191;
    dword_140404A6C[v186 + 18215733] = v193;
    *(float *)&dword_140404A6C[v186 + 18215734] = (float)(v192 * *(float *)&dword_140404A6C[v186 + 18215728])
                                                + *(float *)&dword_140404A6C[v186 + 18215734];
    *(float *)&dword_140404A6C[v186 + 18215735] = (float)(v192 * *(float *)&dword_140404A6C[v186 + 18215729])
                                                + *(float *)&dword_140404A6C[v186 + 18215735];
    v182 += 78;
    v170 = v200;
    v194 = (float)((float)((float)(*(float *)&dword_140404A6C[v186 + 18215737]
                                 * *(float *)&dword_140404A6C[v186 + 18215731])
                         + (float)(*(float *)&dword_140404A6C[v186 + 18215730]
                                 * *(float *)&dword_140404A6C[v186 + 18215736]))
                 + (float)(*(float *)&dword_140404A6C[v186 + 18215738] * *(float *)&dword_140404A6C[v186 + 18215732]))
         * *(float *)&dword_140404A6C[v186 + 18215744];
    *(float *)&dword_140404A6C[v186 + 18215733] = (float)(*(float *)&dword_140404A6C[v186 + 18215730] * v194)
                                                + *(float *)&v193;
    v171 = v199;
    *(float *)&dword_140404A6C[v186 + 18215734] = (float)(v194 * *(float *)&dword_140404A6C[v186 + 18215731])
                                                + *(float *)&dword_140404A6C[v186 + 18215734];
    *(float *)&dword_140404A6C[v186 + 18215735] = (float)(v194 * *(float *)&dword_140404A6C[v186 + 18215732])
                                                + *(float *)&dword_140404A6C[v186 + 18215735];
    --v184;
  }
  while ( v184 );
  *(float *)&dword_140404A6C[v1 + 280657931] = (float)(v179 * 3.0) + v177;
  if ( (int)dword_140404A6C[v1 + 280658139] > 0 )
  {
    v195 = 47LL * (int)dword_140404A6C[1760 * dword_140404A6C[v1 + 280658140] + 278845915];
    *(float *)&dword_140404A6C[v195 + 18215719] = v179 + *(float *)&dword_140404A6C[v195 + 18215719];
  }
  if ( (int)dword_140404A6C[v1 + 280658149] > 0 )
  {
    v196 = 47LL * (int)dword_140404A6C[1760 * dword_140404A6C[v1 + 280658150] + 278845915];
    *(float *)&dword_140404A6C[v196 + 18215719] = v179 + *(float *)&dword_140404A6C[v196 + 18215719];
  }
  dword_140404A6C[v1 + 280657908] = 0;
  dword_140404A6C[v1 + 280657979] = 1070141403;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v198 ^ v251);
}

