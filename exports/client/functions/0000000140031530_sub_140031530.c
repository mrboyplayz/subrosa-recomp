/* Address: 0x140031530 | Name: sub_140031530 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140031530(float *a1, float *a2, float *a3, signed int a4, float *a5, float *a6, float a7)
{
  float v7; // xmm12_4
  __int64 v9; // r15
  __int64 v10; // r10
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float v27; // xmm3_4
  float v28; // xmm11_4
  float v29; // xmm2_4
  float v30; // xmm6_4
  float v31; // xmm13_4
  float v32; // xmm14_4
  float v33; // xmm15_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm15_4
  float v37; // xmm4_4
  float v38; // xmm14_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm8_4
  float v42; // xmm0_4
  float v43; // xmm13_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm8_4
  float v47; // xmm7_4
  float v48; // xmm5_4
  float v49; // xmm7_4
  float v50; // xmm2_4
  float v51; // xmm5_4
  float v52; // xmm0_4
  int v53; // eax
  float v54; // xmm1_4
  signed int v55; // r14d
  int v56; // r8d
  float v57; // xmm1_4
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // r9d
  int v62; // r12d
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // rbx
  unsigned int v66; // eax
  float v67; // xmm0_4
  __int64 v68; // rax
  __m128i v69; // xmm10
  signed int v70; // r14d
  signed int v71; // ecx
  float v72; // xmm8_4
  float v73; // xmm10_4
  float v74; // xmm9_4
  int v75; // edi
  unsigned int v76; // r15d
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rbx
  double v80; // xmm7_8
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm5_4
  float v85; // xmm6_4
  __int128 v86; // xmm0
  __int64 v87; // rcx
  unsigned int *v88; // rbx
  BOOL v89; // eax
  float v90; // xmm2_4
  float *v91; // r8
  float v92; // xmm1_4
  unsigned int v93; // eax
  unsigned int v94; // r10d
  float v95; // xmm0_4
  float v96; // xmm1_4
  float *v97; // r8
  float v98; // xmm0_4
  __int16 v99; // dx
  int v100; // ebx
  int v101; // edi
  __int64 v102; // rcx
  unsigned int v103; // xmm1_4
  int v104; // ebx
  __int64 v105; // xmm2_8
  float v106; // xmm2_4
  __int64 v107; // xmm2_8
  unsigned int v108; // ebx
  unsigned int v109; // eax
  float v110; // xmm5_4
  float v111; // xmm9_4
  float v112; // xmm15_4
  float v113; // xmm10_4
  float v114; // xmm8_4
  float v115; // xmm11_4
  float v116; // xmm12_4
  float v117; // xmm14_4
  float *v118; // rdi
  float *v119; // rdx
  float v120; // xmm2_4
  float v121; // xmm13_4
  float v122; // xmm8_4
  float v123; // xmm7_4
  float v124; // xmm0_4
  float v125; // xmm5_4
  float v126; // xmm15_4
  float v127; // xmm4_4
  float v128; // xmm3_4
  float v129; // xmm5_4
  float v130; // xmm3_4
  float v131; // xmm7_4
  float v132; // xmm8_4
  float v133; // xmm9_4
  float v134; // xmm10_4
  float v135; // xmm13_4
  float v136; // xmm11_4
  float v137; // xmm12_4
  float v138; // xmm15_4
  float v139; // xmm4_4
  float v140; // xmm5_4
  float v141; // xmm0_4
  float v142; // xmm14_4
  float v143; // xmm2_4
  float v144; // xmm6_4
  float v145; // xmm1_4
  float v146; // xmm14_4
  float v147; // xmm3_4
  float v148; // xmm4_4
  float v149; // xmm5_4
  float v150; // xmm0_4
  unsigned int v151; // r10d
  unsigned int v152; // r8d
  unsigned int v153; // ebx
  float v154; // xmm13_4
  float v155; // xmm9_4
  float v156; // xmm10_4
  float v157; // xmm8_4
  float v158; // xmm11_4
  float v159; // xmm14_4
  float v160; // xmm12_4
  float v161; // xmm1_4
  float *v162; // rdx
  unsigned int v163; // eax
  float v164; // xmm2_4
  float v165; // xmm15_4
  float v166; // xmm7_4
  float v167; // xmm0_4
  float v168; // xmm5_4
  float v169; // xmm15_4
  float v170; // xmm0_4
  float v171; // xmm1_4
  float v172; // xmm0_4
  float v173; // xmm4_4
  float v174; // xmm5_4
  float v175; // xmm6_4
  float v176; // xmm3_4
  float v177; // xmm0_4
  float v178; // xmm5_4
  float v179; // xmm6_4
  float v180; // xmm0_4
  unsigned int v181; // ebx
  unsigned int v182; // eax
  float v183; // xmm7_4
  float v184; // xmm11_4
  float v185; // xmm12_4
  float v186; // xmm9_4
  float v187; // xmm10_4
  float v188; // xmm13_4
  float v189; // xmm14_4
  float v190; // xmm15_4
  float v191; // xmm4_4
  float v192; // xmm6_4
  float v193; // xmm0_4
  float v194; // xmm5_4
  float v195; // xmm8_4
  float v196; // xmm5_4
  float v197; // xmm4_4
  float *v198; // rax
  float v199; // xmm8_4
  float v200; // xmm9_4
  float v201; // xmm1_4
  float v202; // xmm10_4
  float v203; // xmm5_4
  float v204; // xmm13_4
  float v205; // xmm15_4
  float v206; // xmm14_4
  float v207; // xmm2_4
  float v208; // xmm0_4
  float v209; // xmm3_4
  float v210; // xmm1_4
  float v211; // xmm4_4
  unsigned int v212; // edx
  unsigned int v213; // r8d
  unsigned int v214; // ebx
  float v215; // xmm9_4
  float v216; // xmm14_4
  float v217; // xmm13_4
  float v218; // xmm8_4
  float v219; // xmm12_4
  float *v220; // rax
  float v221; // xmm4_4
  float v222; // xmm10_4
  float v223; // xmm6_4
  float v224; // xmm1_4
  float v225; // xmm11_4
  float v226; // xmm0_4
  float v227; // xmm15_4
  float v228; // xmm7_4
  float v229; // xmm3_4
  float v230; // xmm7_4
  float v231; // xmm5_4
  float v232; // xmm2_4
  float v233; // xmm0_4
  float v234; // xmm4_4
  float v235; // xmm2_4
  float v236; // xmm5_4
  float v237; // xmm0_4
  float *v239; // rcx
  float *v240; // rdx
  float v241; // xmm1_4
  float v242; // xmm0_4
  float v243; // xmm1_4
  float v244; // xmm0_4
  float v245; // xmm1_4
  float v246; // xmm0_4
  __int64 v247; // [rsp-20h] [rbp-1B48h] BYREF
  __int64 v248; // [rsp+8h] [rbp-1B20h]
  __int64 v249; // [rsp+18h] [rbp-1B10h]
  __int64 v250; // [rsp+20h] [rbp-1B08h]
  float v251; // [rsp+30h] [rbp-1AF8h] BYREF
  unsigned int v252; // [rsp+34h] [rbp-1AF4h]
  float v253; // [rsp+38h] [rbp-1AF0h] BYREF
  float v254; // [rsp+3Ch] [rbp-1AECh]
  float v255; // [rsp+40h] [rbp-1AE8h]
  float v256; // [rsp+48h] [rbp-1AE0h] BYREF
  float v257; // [rsp+4Ch] [rbp-1ADCh]
  float v258; // [rsp+50h] [rbp-1AD8h]
  float v259; // [rsp+58h] [rbp-1AD0h]
  int v260; // [rsp+5Ch] [rbp-1ACCh]
  float v261; // [rsp+1AA8h] [rbp-80h]
  __int64 v262; // [rsp+1AB0h] [rbp-78h]
  float v263; // [rsp+1AB8h] [rbp-70h]
  float *v264; // [rsp+1AC0h] [rbp-68h]
  __int64 v265; // [rsp+1AC8h] [rbp-60h]
  float v266; // [rsp+1AD0h] [rbp-58h] BYREF
  float v267; // [rsp+1AD4h] [rbp-54h]
  float v268; // [rsp+1AD8h] [rbp-50h]
  float v269; // [rsp+1AE0h] [rbp-48h]
  float *v270; // [rsp+1AE8h] [rbp-40h]
  int v271; // [rsp+1AF0h] [rbp-38h] BYREF
  signed int v272; // [rsp+1AF4h] [rbp-34h]
  int v273; // [rsp+1AF8h] [rbp-30h]
  unsigned int v274; // [rsp+1B00h] [rbp-28h]
  __int64 v275; // [rsp+1B08h] [rbp-20h]
  unsigned int v276; // [rsp+1B10h] [rbp-18h] BYREF
  unsigned int v277; // [rsp+1B14h] [rbp-14h]
  unsigned int v278; // [rsp+1B18h] [rbp-10h]
  int v279; // [rsp+1B20h] [rbp-8h]
  int v280; // [rsp+1B24h] [rbp-4h]
  int v281; // [rsp+1B28h] [rbp+0h]
  float v282[4]; // [rsp+1B30h] [rbp+8h] BYREF
  __int64 v283; // [rsp+1B40h] [rbp+18h]
  float v284[7]; // [rsp+1B48h] [rbp+20h] BYREF
  float v285; // [rsp+1B64h] [rbp+3Ch]
  float v286[4]; // [rsp+1B70h] [rbp+48h] BYREF
  float v287[4]; // [rsp+1B80h] [rbp+58h] BYREF
  __int128 v288; // [rsp+1B90h] [rbp+68h] BYREF
  __int128 v289; // [rsp+1BA0h] [rbp+78h]
  float v290; // [rsp+1BB0h] [rbp+88h]
  _BYTE v291[6144]; // [rsp+1BB8h] [rbp+90h] BYREF
  __int64 v292; // [rsp+33B8h] [rbp+1890h]

  v7 = a7;
  v9 = 1052016LL * a4;
  *a3 = 65536.0;
  v10 = a4;
  v264 = a1;
  v252 = a4;
  v11 = *(float *)((char *)&dword_140404A6C[111579657] + v9);
  v265 = a4;
  v12 = *a5;
  v13 = *a5 + a7;
  v270 = a2;
  v283 = v9;
  if ( v13 < v11 && (float)(a7 + *a6) < v11 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
  v14 = a5[1];
  v15 = *(float *)((char *)&dword_140404A6C[111579658] + v9);
  if ( (float)(v14 + a7) < v15 && (float)(a7 + a6[1]) < v15 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
  v16 = a5[2];
  v17 = *(float *)((char *)&dword_140404A6C[111579659] + v9);
  if ( (float)(v16 + a7) < v17 && (float)(a7 + a6[2]) < v17 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
  v18 = *(float *)((char *)&dword_140404A6C[111579660] + v9);
  if ( (float)(v12 - a7) > v18 && (float)(*a6 - a7) > v18 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
  v19 = *(float *)((char *)&dword_140404A6C[111579661] + v9);
  if ( (float)(v14 - a7) > v19 && (float)(a6[1] - a7) > v19 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
  v20 = *(float *)((char *)&dword_140404A6C[111579662] + v9);
  if ( (float)(v16 - a7) > v20 && (float)(a6[2] - a7) > v20 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
  v21 = *(float *)((char *)&dword_140404A6C[111579638] + v9);
  v22 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
  v23 = v12 - v21;
  v24 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
  v25 = *(float *)((char *)&dword_140404A6C[111579639] + v9);
  v26 = *(float *)((char *)&dword_140404A6C[111579640] + v9);
  v27 = v14 - v25;
  v28 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
  v29 = v16 - v26;
  v30 = *(float *)((char *)&dword_140404A6C[111579646] + v9);
  v31 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
  v32 = *(float *)((char *)&dword_140404A6C[111579645] + v9) * v27;
  v33 = (float)(*(float *)((char *)&dword_140404A6C[111579642] + v9) * v27) + (float)(v22 * v23);
  v269 = v27;
  v34 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
  v35 = v24 * v23;
  v36 = v33 + (float)(v28 * v29);
  v263 = v23;
  v37 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
  v38 = (float)(v32 + v35) + (float)(v30 * v29);
  v287[0] = v36;
  v39 = v37 * v29;
  v40 = *a6 - v21;
  v41 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
  v42 = a6[1] - v25;
  v43 = (float)((float)(v31 * v269) + (float)(v34 * v263)) + v39;
  v287[1] = v38;
  v44 = a6[2] - v26;
  v45 = v34 * v40;
  v46 = (float)((float)(v41 * v42) + (float)(v22 * v40)) + (float)(v28 * v44);
  v47 = (float)(*(float *)((char *)&dword_140404A6C[111579645] + v9) * v42) + (float)(v24 * v40);
  v48 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
  v49 = v47 + (float)(v30 * v44);
  v266 = v40;
  v50 = *(float *)((char *)&dword_140404A6C[111579654] + v9);
  v287[2] = v43;
  v267 = v42;
  v268 = v44;
  v286[0] = v46;
  v286[1] = v49;
  v51 = (float)((float)(v48 * v42) + v45) + (float)(v37 * v44);
  v286[2] = v51;
  v52 = v36 >= v46 ? v46 : v36;
  v53 = (int)(float)((float)(v52 - a7) * v50);
  v269 = *(float *)&v53;
  v260 = (int)(float)((float)(fmaxf(v36, v46) + a7) * v50);
  v54 = v38 >= v49 ? v49 : v38;
  v55 = (int)(float)(v50 * (float)(v54 - a7));
  v56 = (int)(float)((float)(fmaxf(v38, v49) + a7) * v50);
  v263 = *(float *)&v55;
  v281 = v56;
  v57 = v43 >= v51 ? v51 : v43;
  v272 = v55;
  v58 = (int)(float)(v50 * (float)(v57 - a7));
  v59 = (int)(float)((float)(fmaxf(v43, v51) + a7) * v50);
  v280 = v58;
  v279 = v59;
  if ( v55 > v56 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
  v272 = v55;
  do
  {
    v273 = v58;
    v60 = v58;
    if ( v58 > v59 )
      goto LABEL_98;
    v61 = v260;
    do
    {
      v271 = v53;
      v62 = v53;
      if ( v53 <= v61 )
      {
        while ( 1 )
        {
          if ( v62 < 0 )
            goto LABEL_94;
          if ( v62 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579650] + v9) << 6) )
            goto LABEL_94;
          if ( v55 < 0 )
            goto LABEL_94;
          if ( v55 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579651] + v9) << 6) )
            goto LABEL_94;
          if ( v60 < 0 )
            goto LABEL_94;
          if ( v60 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579652] + v9) << 6) )
            goto LABEL_94;
          v63 = *(int *)(*(_QWORD *)((char *)&dword_140404A6C[111579655] + v9)
                       + 4LL
                       * (int)((v62 >> 6)
                             + *(unsigned int *)((char *)&dword_140404A6C[111579650] + v9)
                             * ((v60 >> 6) + *(unsigned int *)((char *)&dword_140404A6C[111579652] + v9) * (v55 >> 6))));
          if ( (_DWORD)v63 == -1 )
            goto LABEL_94;
          v64 = (int)dword_140404A6C[263004 * v10
                                   + 111579985
                                   + 513 * v63
                                   + 64 * ((v55 >> 3) & 7)
                                   + 8 * ((v60 >> 3) & 7)
                                   + ((v62 >> 3) & 7)];
          if ( (_DWORD)v64 == -1 )
            goto LABEL_94;
          v65 = 6930 * v64 + (v62 & 7) + 8 * ((v60 & 7) + 8 * (v55 & 7u));
          v275 = v65;
          v66 = dword_140404A6C[v65 + 83199479];
          if ( v66 )
          {
            v67 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
            v68 = v66 & 0x3FF;
            v69 = _mm_cvtsi32_si128(v55);
            v70 = 0;
            v71 = HIBYTE(dword_140404A6C[v65 + 83199479]) & 3;
            v261 = *(float *)&v68;
            v259 = *(float *)&v71;
            v262 = 3792 * v68;
            v72 = (float)((float)v62 + 0.5) * v67;
            v73 = _mm_cvtepi32_ps(v69).m128_f32[0] * v67;
            v74 = (float)((float)v60 + 0.5) * v67;
            if ( (int)dword_140404A6C[948 * v68 + 272299416] > 0 )
            {
              v75 = 1;
              v76 = v273;
              v77 = v262;
              v78 = 0x140000000LL + v262 + 1093411124;
              do
              {
                if ( (v75 & dword_140404A6C[v65 + 83199991]) == 0 )
                {
                  v79 = *(int *)(v78 - 36);
                  v288 = xmmword_140278D30;
                  v290 = 1.0;
                  v289 = xmmword_140278D30;
                  v80 = (float)v71 * 1.570796326795;
                  sub_14007B2A0((__int64)&v288, (float *)&dword_1402F6188, v80);
                  v81 = (float)((float)((float)(*(float *)(v78 - 32) * *(float *)&v288) + v72)
                              + (float)(*(float *)(v78 - 28) * *((float *)&v288 + 3)))
                      + (float)(*(float *)(v78 - 24) * *((float *)&v289 + 2));
                  v82 = *(float *)(v78 - 24) * *((float *)&v289 + 3);
                  v83 = (float)((float)(*(float *)(v78 - 32) * *((float *)&v288 + 1)) + v73)
                      + (float)(*(float *)(v78 - 28) * *(float *)&v289);
                  v84 = *(float *)(v78 - 24) * v290;
                  v85 = (float)((float)(*(float *)(v78 - 32) * *((float *)&v288 + 2)) + v74)
                      + (float)(*(float *)(v78 - 28) * *((float *)&v289 + 1));
                  v288 = *(_OWORD *)(v78 - 20);
                  v86 = *(_OWORD *)(v78 - 4);
                  v282[0] = v81;
                  v289 = v86;
                  v290 = *(float *)(v78 + 12);
                  v282[1] = v83 + v82;
                  v282[2] = v85 + v84;
                  sub_14007B2A0((__int64)&v288, (float *)&dword_1402F6188, v80);
                  v87 = 1268 * v79;
                  if ( *(_QWORD *)&dword_140404A6C[1268 * v79 + 278522249] )
                  {
                    v88 = &dword_140404A6C[v87 + 278522247];
                    sub_14011BF40((__int64)v291, (__int64)&dword_140404A6C[v87 + 278522247], v282, (float *)&v288);
                    v89 = sub_140033BE0(v284, (__int64)v88, (__int64)v291, v287, v286, SLODWORD(v7));
                    *(float *)&v71 = v259;
                    v65 = v275;
                    if ( v89 )
                    {
                      v90 = v285;
                      if ( v285 < *a3 )
                      {
                        v91 = v264;
                        v92 = v284[1];
                        v93 = LODWORD(v263);
                        v94 = v252;
                        *v264 = v284[0];
                        v95 = v284[2];
                        v91[1] = v92;
                        v96 = v284[3];
                        v91[2] = v95;
                        v97 = v270;
                        v98 = v284[4];
                        *v270 = v96;
                        v97[2] = v284[5];
                        v97[1] = v98;
                        dword_140404A6C[73007004] = v93;
                        *(float *)&dword_140404A6C[73007013] = v261;
                        dword_140404A6C[73007009] = 0;
                        dword_140404A6C[73007002] = v94;
                        dword_140404A6C[73007003] = v62;
                        dword_140404A6C[73007005] = v76;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007014] = v71;
                        dword_140404A6C[73007015] = v70;
                        *a3 = v90;
                      }
                    }
                  }
                  else
                  {
                    *(float *)&v71 = v259;
                    v65 = v275;
                  }
                  v77 = v262;
                }
                ++v70;
                v75 = __ROL4__(v75, 1);
                v78 += 116;
              }
              while ( v70 < *(int *)((char *)&dword_140404A6C[272299416] + v77) );
              v9 = v283;
              v60 = v273;
            }
            *(float *)&v55 = v263;
          }
          v99 = dword_140404A6C[v65 + 83198967];
          v100 = dword_140404A6C[v65 + 83198967];
          if ( v100 > 0 )
            break;
LABEL_64:
          v108 = dword_140404A6C[v275 + 83194359];
          v109 = v108 & 0xE0000000;
          if ( (v108 & 0xE0000000) == 0x40000000 )
          {
            LODWORD(v250) = *(unsigned int *)((char *)&dword_140404A6C[111579653] + v9);
            LODWORD(v249) = v108;
            *(float *)&v248 = v7;
            if ( sub_140034370(&v253, &v256, &v251, v287, v286, v248, &v271, v249, v250) && v251 < *a3 )
            {
              v110 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
              v111 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
              v112 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
              v113 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
              v114 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
              v115 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
              v116 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
              v117 = *(float *)((char *)&dword_140404A6C[111579646] + v9);
              v118 = v264;
              v119 = v270;
              v261 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
              v259 = v110;
              v120 = v257;
              v121 = (float)((float)(v111 * v255) + (float)(v261 * v253))
                   + (float)((float)(v114 * v254) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
              v122 = v114 * v257;
              v123 = (float)((float)(v115 * v254) + *(float *)((char *)&dword_140404A6C[111579639] + v9))
                   + (float)((float)(v113 * v255) + (float)(v110 * v253));
              v124 = v258;
              v125 = (float)(v116 * v255) + (float)(v112 * v253);
              v126 = v112 * v256;
              v127 = v261 * v256;
              v128 = v259 * v256;
              v129 = v125 + (float)((float)(v117 * v254) + *(float *)((char *)&dword_140404A6C[111579640] + v9));
              *v264 = v121;
              v118[1] = v123;
              v118[2] = v129;
              v253 = v121;
              v256 = (float)(v127 + v122) + (float)(v111 * v124);
              *v119 = v256;
              v254 = v123;
              v130 = (float)(v128 + (float)(v115 * v120)) + (float)(v113 * v124);
              v255 = v129;
              v258 = (float)(v126 + (float)(v117 * v120)) + (float)(v116 * v124);
              v119[2] = v258;
LABEL_72:
              v150 = v251;
              v119[1] = v130;
              *a3 = v150;
              dword_140404A6C[73007009] = v108;
              dword_140404A6C[73007003] = v62;
              dword_140404A6C[73007004] = v55;
              dword_140404A6C[73007005] = v60;
LABEL_73:
              v151 = v252;
              v7 = a7;
              dword_140404A6C[73007002] = v252;
              v257 = v130;
              dword_140404A6C[73007012] = -1;
              dword_140404A6C[73007015] = -1;
              goto LABEL_79;
            }
          }
          else if ( v109 == 0x80000000 )
          {
            if ( sub_140034AE0(
                   &v253,
                   (__int64)&v256,
                   &v251,
                   v287,
                   v286,
                   SLODWORD(v7),
                   (__int64)&v271,
                   v108,
                   *(float *)((char *)&dword_140404A6C[111579653] + v9))
              && v251 < *a3 )
            {
              v131 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
              v132 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
              v133 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
              v134 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
              v135 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
              v136 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
              v137 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
              v138 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
              v118 = v264;
              v119 = v270;
              v139 = (float)(v254 * *(float *)((char *)&dword_140404A6C[111579646] + v9))
                   + *(float *)((char *)&dword_140404A6C[111579640] + v9);
              v140 = (float)(v254 * v134) + *(float *)((char *)&dword_140404A6C[111579639] + v9);
              v141 = (float)(v255 * v136) + (float)(v253 * v135);
              v142 = (float)(v255 * v138) + (float)(v253 * v137);
              v143 = v258;
              v261 = (float)((float)(v253 * v132) + (float)(v254 * v131))
                   + (float)((float)(v255 * v133) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
              v253 = v261;
              v144 = v256;
              v145 = v258 * v133;
              v146 = v142 + v139;
              v259 = v140 + v141;
              v147 = v257;
              v254 = v140 + v141;
              v148 = v257 * *(float *)((char *)&dword_140404A6C[111579646] + v9);
              v149 = (float)(v257 * v131) + (float)(v256 * v132);
              v264[2] = v146;
              v255 = v146;
              *v118 = v261;
              v118[1] = v259;
              v256 = v149 + v145;
              *v119 = v149 + v145;
              v130 = (float)((float)(v147 * v134) + (float)(v144 * v135)) + (float)(v143 * v136);
              v258 = (float)((float)(v144 * v137) + v148) + (float)(v143 * v138);
              v119[2] = v258;
              goto LABEL_72;
            }
          }
          else if ( v109 == -1073741824 )
          {
            v274 = v62 - (unsigned __int8)v108;
            v152 = v55 - BYTE2(v108);
            v153 = v60 - BYTE1(v108);
            v276 = v274;
            LODWORD(v262) = v152;
            v277 = v152;
            v278 = v153;
            LODWORD(v259) = sub_1400129D0(v252, v274, v152, v153);
            if ( sub_140034AE0(
                   &v253,
                   (__int64)&v256,
                   &v251,
                   v287,
                   v286,
                   SLODWORD(v7),
                   (__int64)&v276,
                   LODWORD(v259),
                   *(float *)((char *)&dword_140404A6C[111579653] + v9))
              && v251 < *a3 )
            {
              v154 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
              v155 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
              v156 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
              v157 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
              v158 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
              v159 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
              v160 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
              v161 = v255;
              v118 = v264;
              v162 = v270;
              v163 = LODWORD(v259);
              v164 = v258;
              v165 = (float)(v255 * v156) + (float)(v253 * v155);
              v167 = (float)(v254 * v157) + *(float *)((char *)&dword_140404A6C[111579638] + v9);
              v255 = (float)((float)(*(float *)((char *)&dword_140404A6C[111579649] + v9) * v255) + (float)(v154 * v253))
                   + (float)((float)(*(float *)((char *)&dword_140404A6C[111579646] + v9) * v254)
                           + *(float *)((char *)&dword_140404A6C[111579640] + v9));
              v166 = v255;
              v168 = (float)(v254 * v158) + *(float *)((char *)&dword_140404A6C[111579639] + v9);
              v169 = v165 + v167;
              v170 = v161 * v160;
              v171 = v258 * v156;
              v172 = v170 + (float)(v253 * v159);
              v253 = v169;
              v261 = v168 + v172;
              v254 = v168 + v172;
              v173 = v257 * *(float *)((char *)&dword_140404A6C[111579646] + v9);
              v174 = (float)(v257 * v157) + (float)(v256 * v155);
              v175 = v256 * v154;
              v176 = (float)(v257 * v158) + (float)(v256 * v159);
              v177 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
              *v264 = v169;
              v178 = v174 + v171;
              v118[2] = v166;
              v179 = (float)(v175 + v173) + (float)(v177 * v164);
              v256 = v178;
              v118[1] = v261;
              v130 = v176 + (float)(v164 * v160);
              v180 = v251;
              *v162 = v178;
              v162[2] = v179;
              v258 = v179;
              v162[1] = v130;
              *a3 = v180;
              dword_140404A6C[73007009] = v163;
              dword_140404A6C[73007003] = v274;
              dword_140404A6C[73007004] = v262;
              dword_140404A6C[73007005] = v153;
              goto LABEL_73;
            }
          }
          v118 = v264;
          v151 = v252;
LABEL_79:
          v181 = dword_140404A6C[v275 + 83197431];
          v182 = v181 & 0xE0000000;
          if ( (v181 & 0xE0000000) == 0x40000000 )
          {
            LODWORD(v250) = *(unsigned int *)((char *)&dword_140404A6C[111579653] + v9);
            LODWORD(v249) = v181;
            *(float *)&v248 = v7;
            if ( !sub_140034370(&v253, &v256, &v251, v287, v286, v248, &v271, v249, v250) || v251 >= *a3 )
              goto LABEL_93;
            v183 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
            v184 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
            v185 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
            v186 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
            v187 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
            v188 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
            v189 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
            v190 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
            v191 = v185 * v253;
            v192 = *(float *)((char *)&dword_140404A6C[111579646] + v9) * v254;
            v193 = (float)(v188 * v255) + (float)(v184 * v253);
            v194 = v190 * v255;
            *(float *)&v262 = (float)((float)(v187 * v255) + (float)(v183 * v253))
                            + (float)((float)(v186 * v254) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
            v253 = *(float *)&v262;
            v195 = v189 * v254;
          }
          else
          {
            if ( v182 != 0x80000000 )
            {
              if ( v182 != -1073741824 )
                goto LABEL_93;
              v212 = v62 - (unsigned __int8)v181;
              v261 = *(float *)&v212;
              v213 = v55 - BYTE2(v181);
              v276 = v212;
              v214 = v60 - BYTE1(v181);
              v259 = *(float *)&v213;
              v277 = v213;
              v278 = v214;
              v274 = sub_140016450(v151, v212, v213, v214);
              if ( !sub_140034AE0(
                      &v253,
                      (__int64)&v256,
                      &v251,
                      v287,
                      v286,
                      SLODWORD(v7),
                      (__int64)&v276,
                      v274,
                      *(float *)((char *)&dword_140404A6C[111579653] + v9))
                || v251 >= *a3 )
              {
                goto LABEL_93;
              }
              v215 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
              v216 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
              v217 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
              v218 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
              v219 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
              v220 = v270;
              v221 = v217 * v253;
              v222 = (float)(v219 * v254) + *(float *)((char *)&dword_140404A6C[111579639] + v9);
              v223 = (float)(*(float *)((char *)&dword_140404A6C[111579646] + v9) * v254)
                   + *(float *)((char *)&dword_140404A6C[111579640] + v9);
              v224 = v258;
              v225 = *(float *)((char *)&dword_140404A6C[111579647] + v9) * v258;
              v226 = (float)(*(float *)((char *)&dword_140404A6C[111579648] + v9) * v255) + (float)(v216 * v253);
              v227 = *(float *)((char *)&dword_140404A6C[111579648] + v9) * v258;
              *(float *)&v262 = (float)((float)(*(float *)((char *)&dword_140404A6C[111579647] + v9) * v255)
                                      + (float)(v215 * v253))
                              + (float)((float)(v218 * v254) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
              v253 = *(float *)&v262;
              v228 = (float)(*(float *)((char *)&dword_140404A6C[111579649] + v9) * v255) + v221;
              v254 = v222 + v226;
              v229 = v257 * *(float *)((char *)&dword_140404A6C[111579646] + v9);
              v230 = v228 + v223;
              v231 = v256 * v217;
              v232 = (float)(v257 * v219) + (float)(v256 * v216);
              v255 = v230;
              v233 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
              v234 = (float)((float)(v257 * v218) + (float)(v256 * v215)) + v225;
              v118[1] = v254;
              v118[2] = v230;
              v235 = v232 + v227;
              v256 = v234;
              v236 = (float)(v231 + v229) + (float)(v233 * v224);
              *(_DWORD *)v118 = v262;
              v237 = v251;
              *v220 = v234;
              v220[1] = v235;
              v220[2] = v236;
              LODWORD(v220) = v274;
              *a3 = v237;
              dword_140404A6C[73007009] = (unsigned int)v220;
              dword_140404A6C[73007002] = v252;
              v257 = v235;
              v258 = v236;
              *(float *)&dword_140404A6C[73007003] = v261;
              *(float *)&dword_140404A6C[73007004] = v259;
              dword_140404A6C[73007005] = v214;
              goto LABEL_92;
            }
            if ( !sub_140034AE0(
                    &v253,
                    (__int64)&v256,
                    &v251,
                    v287,
                    v286,
                    SLODWORD(v7),
                    (__int64)&v271,
                    v181,
                    *(float *)((char *)&dword_140404A6C[111579653] + v9))
              || v251 >= *a3 )
            {
              goto LABEL_93;
            }
            v183 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
            v184 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
            v185 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
            v186 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
            v187 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
            v188 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
            v189 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
            v190 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
            v191 = v185 * v253;
            v192 = *(float *)((char *)&dword_140404A6C[111579646] + v9) * v254;
            v193 = (float)(v188 * v255) + (float)(v184 * v253);
            v194 = v190 * v255;
            *(float *)&v262 = (float)((float)(v186 * v254) + (float)(v183 * v253))
                            + (float)((float)(v187 * v255) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
            v253 = *(float *)&v262;
            v195 = v189 * v254;
          }
          v196 = v194 + v191;
          v197 = v256;
          v198 = v270;
          v199 = (float)(v195 + *(float *)((char *)&dword_140404A6C[111579639] + v9)) + v193;
          v200 = v186 * v257;
          v201 = v256;
          v202 = v187 * v258;
          v203 = v196 + (float)(v192 + *(float *)((char *)&dword_140404A6C[111579640] + v9));
          v204 = v188 * v258;
          v205 = v190 * v258;
          v206 = v189 * v257;
          v207 = v257 * *(float *)((char *)&dword_140404A6C[111579646] + v9);
          *(_DWORD *)v118 = v262;
          v208 = v251;
          v118[1] = v199;
          v118[2] = v203;
          v254 = v199;
          v255 = v203;
          v209 = (float)((float)(v197 * v183) + v200) + v202;
          v210 = (float)((float)(v201 * v184) + v206) + v204;
          v211 = (float)((float)(v197 * v185) + v207) + v205;
          *v198 = v209;
          v256 = v209;
          v198[1] = v210;
          v257 = v210;
          v198[2] = v211;
          LODWORD(v198) = v252;
          *a3 = v208;
          dword_140404A6C[73007009] = v181;
          dword_140404A6C[73007002] = (unsigned int)v198;
          dword_140404A6C[73007003] = v62;
          dword_140404A6C[73007004] = v55;
          dword_140404A6C[73007005] = v60;
          v258 = v211;
LABEL_92:
          dword_140404A6C[73007015] = -1;
          dword_140404A6C[73007012] = -1;
LABEL_93:
          v10 = v265;
          v61 = v260;
LABEL_94:
          v7 = a7;
          v271 = ++v62;
          if ( v62 > v61 )
          {
            *(float *)&v53 = v269;
            v59 = v279;
            goto LABEL_96;
          }
        }
        v101 = v100 & 0x7F;
        v102 = 2310LL * (v100 & 0x7F);
        v103 = dword_140404A6C[v102 + 432533577];
        v266 = *(float *)&dword_140404A6C[v102 + 432533576];
        v268 = *(float *)&dword_140404A6C[v102 + 432533578];
        v267 = *(float *)&v103;
        if ( (v99 & 0xC00) == 0x400 )
        {
          sub_14007B4D0(&v266, (float *)&dword_1402F6188, COERCE_DOUBLE(1070141403));
          v104 = v100 & 0xC00;
          goto LABEL_56;
        }
        v104 = v100 & 0xC00;
        if ( v104 == 2048 )
        {
          v105 = 1078530011;
        }
        else
        {
          if ( v104 != 3072 )
            goto LABEL_56;
          v105 = 1083624420;
        }
        sub_14007B4D0(&v266, (float *)&dword_1402F6188, *(double *)&v105);
LABEL_56:
        v106 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
        v290 = 1.0;
        v266 = v266 + (float)((float)((float)v62 + 0.5) * v106);
        v267 = v267 + (float)((float)v55 * v106);
        v268 = v268 + (float)((float)((float)v60 + 0.5) * v106);
        v288 = xmmword_140278D30;
        v289 = xmmword_140278D30;
        switch ( v104 )
        {
          case 1024:
            v107 = 1070141403;
            break;
          case 2048:
            v107 = 1078530011;
            break;
          case 3072:
            v107 = 1083624420;
            break;
          default:
            goto LABEL_63;
        }
        sub_14007B2A0((__int64)&v288, (float *)&dword_1402F6188, *(double *)&v107);
LABEL_63:
        if ( sub_140032E60(&v253, (__int64)&v256, &v251, v101, &v266, (float *)&v288, v287, v286, v7) )
        {
          v239 = v264;
          v240 = v270;
          v241 = v254;
          *v264 = v253;
          v242 = v255;
          v239[1] = v241;
          v243 = v256;
          v239[2] = v242;
          v244 = v257;
          *v240 = v243;
          v245 = v258;
          v240[1] = v244;
          v246 = v251;
          v240[2] = v245;
          *a3 = v246;
          dword_140404A6C[73007003] = -1;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
        }
        goto LABEL_64;
      }
LABEL_96:
      v273 = ++v60;
    }
    while ( v60 <= v59 );
    v58 = v280;
    v56 = v281;
LABEL_98:
    ++v55;
    v263 = *(float *)&v55;
    v272 = v55;
  }
  while ( v55 <= v56 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v292);
}

