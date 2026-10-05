/* Address: 0x140013120 | Name: sub_140013120 | Size: 12295 bytes */
__int64 __fastcall sub_140013120(signed int a1, signed int a2)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // eax
  __m128i v7; // xmm9
  __m128i v8; // xmm10
  __m128i v9; // xmm11
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int *v12; // r8
  float v13; // xmm1_4
  signed int v14; // esi
  float v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  int v18; // ecx
  int *v19; // rax
  signed int v20; // r11d
  signed int v21; // r10d
  int v22; // r9d
  unsigned int v23; // r15d
  __int64 v24; // r12
  float v25; // ebx
  int v26; // r14d
  int v27; // ecx
  __int64 v28; // rax
  float v29; // xmm2_4
  __int64 v30; // r9
  __int64 v31; // rbp
  __int64 v32; // r15
  __int64 v33; // r13
  __m128i v34; // xmm4
  float *v35; // r8
  __int64 v36; // rsi
  __m128i v37; // xmm5
  __m128i v38; // xmm3
  unsigned int *v39; // r10
  float v40; // xmm3_4
  unsigned int *v41; // r11
  __int64 v42; // rsi
  __int64 v43; // rbp
  float v44; // xmm4_4
  float v45; // xmm5_4
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // eax
  signed int v51; // esi
  int v52; // r13d
  int v53; // r15d
  __int64 v54; // rbp
  int v55; // ebx
  __int64 v56; // rdx
  float v57; // xmm7_4
  float v58; // xmm4_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm6_4
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  float v71; // xmm1_4
  float v72; // xmm0_4
  float v73; // xmm6_4
  float *v74; // rdx
  float v75; // xmm5_4
  float v76; // xmm2_4
  float v77; // xmm8_4
  float v78; // xmm4_4
  float v79; // xmm7_4
  float v80; // xmm3_4
  unsigned int *v81; // rax
  __int64 v82; // rbp
  char *v83; // rsi
  __int64 v84; // r14
  __int64 v85; // r13
  int v86; // r12d
  int v87; // ecx
  __int16 v88; // ax
  __int64 v89; // r8
  __int64 v90; // rdx
  unsigned int v91; // xmm0_4
  unsigned int v92; // xmm1_4
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __m128 v99; // xmm3
  __m128 v100; // xmm4
  __m128 v101; // xmm12
  __m128 v102; // xmm14
  __m128 v103; // xmm11
  __m128 v104; // xmm13
  char v105; // al
  __int64 v106; // rax
  __m128 v107; // xmm2
  __m128 v108; // xmm1
  __m128 v109; // xmm0
  float v110; // xmm10_4
  float v111; // xmm9_4
  float v112; // xmm8_4
  float v113; // xmm7_4
  __int64 v114; // rax
  float v115; // xmm6_4
  float v116; // xmm4_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  __int64 v119; // rax
  float v120; // xmm6_4
  float v121; // xmm4_4
  float v122; // xmm5_4
  float v123; // xmm3_4
  __int64 v124; // rax
  float v125; // xmm6_4
  float v126; // xmm4_4
  float v127; // xmm2_4
  float v128; // xmm5_4
  float v129; // xmm3_4
  float v130; // xmm4_4
  float v131; // xmm2_4
  float v132; // xmm0_4
  float v133; // xmm6_4
  float v134; // xmm3_4
  __int64 v135; // rcx
  float v136; // xmm2_4
  float v137; // xmm0_4
  float v138; // xmm1_4
  float v139; // xmm1_4
  float v140; // xmm2_4
  __int64 v141; // rcx
  float v142; // xmm8_4
  float v143; // xmm4_4
  float v144; // xmm7_4
  __int64 v145; // rdx
  float v146; // xmm4_4
  float v147; // xmm5_4
  float v148; // xmm3_4
  float v149; // xmm6_4
  float *v150; // rcx
  int v151; // ecx
  __int64 v152; // r10
  int *v153; // r9
  _DWORD *v154; // r8
  __int64 v155; // rax
  __int64 v156; // rbx
  int *v157; // rsi
  int *v158; // r12
  int v159; // ecx
  int i; // r13d
  int j; // r15d
  int v162; // eax
  __int64 v163; // rdx
  int v164; // r14d
  int v165; // ebp
  unsigned int v166; // xmm1_4
  float v167; // xmm2_4
  float v168; // xmm1_4
  __int64 v169; // rcx
  __int64 v170; // rcx
  char *v171; // rcx
  int v172; // r15d
  int v173; // ebp
  unsigned int v174; // eax
  int v175; // r14d
  int k; // r10d
  int m; // r9d
  unsigned int v178; // r11d
  float v179; // xmm3_4
  float v180; // xmm0_4
  float v181; // xmm1_4
  float v182; // xmm0_4
  float v183; // xmm1_4
  float v184; // xmm0_4
  unsigned int v185; // r11d
  float v186; // xmm3_4
  float v187; // xmm0_4
  float v188; // xmm1_4
  float v189; // xmm0_4
  float v190; // xmm1_4
  float v191; // xmm0_4
  unsigned int v192; // r11d
  float v193; // xmm3_4
  float v194; // xmm0_4
  float v195; // xmm1_4
  float v196; // xmm0_4
  float v197; // xmm1_4
  float v198; // xmm0_4
  unsigned int v199; // r11d
  float v200; // xmm3_4
  float v201; // xmm0_4
  float v202; // xmm1_4
  float v203; // xmm0_4
  float v204; // xmm1_4
  float v205; // xmm0_4
  int v206; // ebp
  unsigned int v207; // r15d
  unsigned int v209; // eax
  int v210; // ecx
  int v211; // r8d
  int v212; // r9d
  int v213; // r10d
  __int64 v214; // rcx
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rcx
  int v219; // r11d
  int v220; // edi
  __int64 v221; // r9
  __int64 v222; // r10
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rax
  __int64 v226; // rax
  __int64 v227; // r8
  __int64 v228; // rdx
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // rdx
  __int64 v233; // rax
  __int64 v234; // rax
  int v235; // r9d
  int n; // ecx
  __int64 v237; // rax
  int v238; // edx
  __int64 v239; // rax
  signed int v240; // r8d
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // rcx
  __int64 v244; // rcx
  unsigned int v245; // eax
  int v246; // ecx
  unsigned int *v247; // rax
  __int64 v248; // rax
  __int16 v249; // ax
  unsigned int v250; // eax
  int v251; // ecx
  __int64 v252; // rax
  int v253; // r8d
  float v254; // r12d
  float v255; // eax
  int v256; // ecx
  __int64 v257; // rdx
  unsigned int *v258; // r15
  _DWORD *v259; // r9
  unsigned int *v260; // rsi
  __int64 v261; // rdi
  signed __int64 v262; // r10
  unsigned int *v263; // r14
  float v264; // eax
  int v265; // ecx
  int *v266; // r12
  __int64 v267; // rbx
  int v268; // r13d
  int v269; // r11d
  unsigned int *v270; // r8
  __int64 v271; // rcx
  __int64 v272; // rdi
  __int64 v273; // rdx
  __int64 v274; // rdi
  __int64 v275; // rsi
  __int64 v276; // rcx
  __int64 v277; // rcx
  int v278; // edi
  int v279; // ebp
  int v280; // r8d
  int v281; // eax
  unsigned int v282; // ecx
  unsigned int v283; // eax
  unsigned int v284; // r10d
  unsigned int v285; // eax
  unsigned int v286; // r10d
  unsigned int v287; // eax
  unsigned int v288; // edx
  int v289; // r8d
  int v290; // r10d
  __int64 v291; // rcx
  __int64 v292; // rax
  int v293; // r11d
  unsigned int v294; // edx
  __int64 v295; // r8
  int ii; // edi
  int v297; // r10d
  unsigned int *v298; // r8
  unsigned int *v299; // r9
  __int64 v300; // rcx
  __int64 v301; // rax
  int v302; // eax
  __int64 v303; // r9
  char *v304; // rdx
  unsigned int *v305; // r8
  int v306; // eax
  unsigned int v307; // ecx
  int v308; // eax
  int v309; // eax
  int v310; // ecx
  __int64 v311; // [rsp+0h] [rbp-188h] BYREF
  float v312; // [rsp+20h] [rbp-168h]
  float v313; // [rsp+24h] [rbp-164h]
  int v314; // [rsp+28h] [rbp-160h]
  int v315; // [rsp+2Ch] [rbp-15Ch]
  int v316; // [rsp+30h] [rbp-158h]
  int v317; // [rsp+34h] [rbp-154h]
  int v318; // [rsp+38h] [rbp-150h]
  signed __int64 v319; // [rsp+40h] [rbp-148h]
  __int64 v320; // [rsp+48h] [rbp-140h]
  float v321; // [rsp+50h] [rbp-138h]
  signed int v322; // [rsp+54h] [rbp-134h]
  unsigned int v323; // [rsp+58h] [rbp-130h] BYREF
  float v324; // [rsp+5Ch] [rbp-12Ch]
  float v325; // [rsp+60h] [rbp-128h]
  __int64 v326; // [rsp+68h] [rbp-120h]
  int v327; // [rsp+70h] [rbp-118h]
  unsigned int *v328; // [rsp+78h] [rbp-110h]
  unsigned int *v329; // [rsp+80h] [rbp-108h]
  __int64 v330; // [rsp+88h] [rbp-100h]
  __int64 v331; // [rsp+90h] [rbp-F8h]
  __int64 v332; // [rsp+98h] [rbp-F0h]
  _QWORD v333[2]; // [rsp+A0h] [rbp-E8h]

  v2 = a1;
  v3 = a2;
  LODWORD(v319) = a2;
  LODWORD(v320) = a1;
  if ( (unsigned int)a1 <= 0xFFF )
  {
    v4 = 27720LL * a1;
    v330 = v4;
    if ( *(unsigned int *)((char *)&dword_140404A6C[83194357] + v4) )
    {
      v5 = a2 + 6930LL * a1;
      v332 = v5;
      v6 = dword_140404A6C[v5 + 83200503];
      if ( v6 != -2
        && v6 > 0x3FF
        && ((int)dword_140404A6C[70087022] < 1 || (unsigned int)MEMORY[0x140198F9B]() - dword_140404A6C[70087023] < 0x10) )
      {
        v7 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200507]);
        v8 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200508]);
        v9 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200509]);
        v322 = dword_140404A6C[73991661];
        v10 = 263004LL * (int)dword_140404A6C[6930 * v2 + 83194358];
        dword_140404A6C[71654225] = 0;
        v11 = 0;
        dword_140404A6C[70425405] = 0;
        v12 = nullptr;
        dword_140404A6C[70998846] = 0;
        dword_140404A6C[71179071] = 0;
        v13 = *(float *)&dword_140404A6C[v10 + 111579653];
        dword_140404A6C[71655762] = 0;
        v14 = 2 * v3;
        v316 = 2 * v3;
        v15 = (float)(_mm_cvtepi32_ps(v7).m128_f32[0] * 8.0) * v13;
        v16 = (float)(_mm_cvtepi32_ps(v8).m128_f32[0] * 8.0) * v13;
        v17 = (float)(_mm_cvtepi32_ps(v9).m128_f32[0] * 8.0) * v13;
        v321 = v15;
        *(float *)&v326 = v16;
        *(float *)&v315 = v17;
        if ( (int)(2 * v3) >= (int)(2 * v3 + 2) )
        {
          v207 = v322;
          v156 = 35876LL * v322;
          v326 = v156;
          v157 = (int *)(0x140000000LL + v156 + 300180020);
          v206 = 0;
          v174 = 0;
          *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = 0;
          *v157 = 0;
        }
        else
        {
          v18 = 16 * v3;
          v19 = (int *)((char *)&dword_140404A6C[64 * (__int64)(int)(2 * v3) + 83197431] + v4);
          v314 = 16 * v3;
          do
          {
            v20 = 0;
            v318 = 0;
            do
            {
              v21 = 0;
              v317 = 0;
              v329 = (unsigned int *)v19;
              do
              {
                v22 = *v19;
                if ( (*v19 & 0xE0000000) == 0x80000000 )
                {
                  v313 = *(float *)&v11;
                  v327 = 8 * (v21 + 8 * (v18 + v20));
                  v23 = (v22 >> 24) & 3;
                  v24 = 232LL * (unsigned __int16)v22;
                  v25 = *(float *)&v11;
                  v26 = v22 >> 16;
                  v312 = *(float *)&v23;
                  v331 = v24;
                  v27 = *(unsigned int *)((char *)&dword_140404A6C[20074613] + v24);
                  v333[0] = *(_QWORD *)((char *)&dword_140404A6C[83197943] + v4 + v327);
                  if ( v27 > 0 )
                  {
                    v28 = *(_QWORD *)((char *)&dword_140404A6C[20074615] + v24);
                    v29 = *(float *)&dword_140404A6C[v10 + 111579653];
                    v30 = 0;
                    v31 = *(_QWORD *)((char *)&dword_140404A6C[20074619] + v24);
                    v32 = (unsigned int)v27;
                    v33 = *(_QWORD *)((char *)&dword_140404A6C[20074621] + v24);
                    v34 = _mm_cvtsi32_si128(v14);
                    v35 = (float *)(v28 + 8);
                    v36 = *(_QWORD *)((char *)&dword_140404A6C[20074617] + v24);
                    v37 = _mm_cvtsi32_si128(v20);
                    v38 = _mm_cvtsi32_si128(v21);
                    v39 = (unsigned int *)(v31 + 8);
                    v40 = _mm_cvtepi32_ps(v38).m128_f32[0];
                    v41 = (unsigned int *)(v36 + 8);
                    v42 = v36 - v28;
                    v43 = v31 - v28;
                    v44 = _mm_cvtepi32_ps(v34).m128_f32[0];
                    v45 = _mm_cvtepi32_ps(v37).m128_f32[0];
                    do
                    {
                      *(float *)&dword_140404A6C[3 * (int)v11 + 70687550] = (float)(v40 + *(v35 - 2)) * v29;
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v44 + *(v35 - 1))
                                                                                           * v29;
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v45 + *v35) * v29;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 8;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 16;
                      v46 = 3LL * (int)dword_140404A6C[70425405];
                      *(float *)&dword_140404A6C[v46 + 70687550] = v15
                                                                 + *(float *)&dword_140404A6C[3
                                                                                            * dword_140404A6C[70425405]
                                                                                            + 70687550];
                      *(float *)&dword_140404A6C[v46 + 70687551] = v16 + *(float *)&dword_140404A6C[v46 + 70687551];
                      *(float *)&dword_140404A6C[v46 + 70687552] = v17 + *(float *)&dword_140404A6C[v46 + 70687552];
                      v47 = 3LL * (int)dword_140404A6C[70425405];
                      *(float *)&dword_140404A6C[v47 + 70687550] = *(float *)&dword_140404A6C[v10 + 111579638]
                                                                 + *(float *)&dword_140404A6C[3
                                                                                            * dword_140404A6C[70425405]
                                                                                            + 70687550];
                      *(float *)&dword_140404A6C[v47 + 70687551] = *(float *)&dword_140404A6C[v10 + 111579639]
                                                                 + *(float *)&dword_140404A6C[v47 + 70687551];
                      *(float *)&dword_140404A6C[v47 + 70687552] = *(float *)&dword_140404A6C[v10 + 111579640]
                                                                 + *(float *)&dword_140404A6C[v47 + 70687552];
                      v48 = 3LL * (int)dword_140404A6C[70425405];
                      dword_140404A6C[v48 + 70736702] = *(_DWORD *)((char *)v35 + v42 - 8);
                      dword_140404A6C[v48 + 70736703] = *(v41 - 1);
                      dword_140404A6C[v48 + 70736704] = *v41;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702]
                                                                                          + 1.0) << 24;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736703]
                                                                                          + 1.0) << 26;
                      v41 += 3;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736704]
                                                                                          + 1.0) << 28;
                      v49 = 3LL * (int)dword_140404A6C[70425405];
                      dword_140404A6C[v49 + 70785854] = *(_DWORD *)((char *)v35 + v43 - 8);
                      v35 += 3;
                      dword_140404A6C[v49 + 70785855] = *(v39 - 1);
                      v50 = *v39;
                      v39 += 3;
                      dword_140404A6C[v49 + 70785856] = v50;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = *(_DWORD *)(v30 + v33);
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = *(_DWORD *)(v30 + v33 + 4);
                      v30 += 8;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158] = 1065353216;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884159] = 1065353216;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884160] = 1065353216;
                      LODWORD(v11) = ++dword_140404A6C[70425405];
                      --v32;
                    }
                    while ( v32 );
                    LODWORD(v12) = dword_140404A6C[71655762];
                    v25 = v313;
                    *(float *)&v23 = v312;
                  }
                  v51 = 0;
                  v52 = *(unsigned int *)((char *)&dword_140404A6C[20074651] + v24);
                  if ( v52 > 0 )
                  {
                    v53 = v317;
                    v54 = 40;
                    v55 = v318;
                    do
                    {
                      if ( ((unsigned __int8)(1 << v51) & (unsigned __int8)v26) == 0 && (int)v12 < 256 )
                      {
                        v56 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v24);
                        v57 = *(float *)&dword_140404A6C[v10 + 111579653];
                        v58 = *(float *)&dword_140404A6C[v10 + 111579638];
                        v59 = *(float *)&dword_140404A6C[v10 + 111579639];
                        v60 = *(float *)&dword_140404A6C[v10 + 111579640];
                        v61 = (float)v316;
                        *(float *)&dword_140404A6C[20 * (int)v12 + 71655768] = (float)((float)v53
                                                                                     + *(float *)(v56 + v54 - 4))
                                                                             * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655769] = (float)(v61 + *(float *)(v56 + v54))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655770] = (float)((float)v55 + *(float *)(v56 + v54 + 4))
                                                                                              * v57;
                        v62 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v62 + 71655768] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655768];
                        *(float *)&dword_140404A6C[2 * v62 + 71655769] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v62 + 71655769];
                        *(float *)&dword_140404A6C[2 * v62 + 71655770] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v62 + 71655770];
                        v63 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v63 + 71655768] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655768];
                        *(float *)&dword_140404A6C[2 * v63 + 71655769] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v63 + 71655769];
                        *(float *)&dword_140404A6C[2 * v63 + 71655770] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v63 + 71655770];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771] = (float)((float)v53 + *(float *)(v56 + v54 - 16))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655772] = (float)(v61 + *(float *)(v56 + v54 - 12))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655773] = (float)((float)v55 + *(float *)(v56 + v54 - 8))
                                                                                              * v57;
                        v64 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v64 + 71655771] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771];
                        *(float *)&dword_140404A6C[2 * v64 + 71655772] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v64 + 71655772];
                        *(float *)&dword_140404A6C[2 * v64 + 71655773] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v64 + 71655773];
                        v65 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v65 + 71655771] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771];
                        *(float *)&dword_140404A6C[2 * v65 + 71655772] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v65 + 71655772];
                        *(float *)&dword_140404A6C[2 * v65 + 71655773] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v65 + 71655773];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774] = (float)((float)v53 + *(float *)(v56 + v54 - 28))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655775] = (float)(v61 + *(float *)(v56 + v54 - 24))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655776] = (float)((float)v55 + *(float *)(v56 + v54 - 20))
                                                                                              * v57;
                        v66 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v66 + 71655774] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774];
                        *(float *)&dword_140404A6C[2 * v66 + 71655775] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v66 + 71655775];
                        *(float *)&dword_140404A6C[2 * v66 + 71655776] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v66 + 71655776];
                        v67 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v67 + 71655774] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774];
                        *(float *)&dword_140404A6C[2 * v67 + 71655775] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v67 + 71655775];
                        *(float *)&dword_140404A6C[2 * v67 + 71655776] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v67 + 71655776];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777] = (float)((float)v53 + *(float *)(v56 + v54 - 40))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655778] = (float)(v61 + *(float *)(v56 + v54 - 36))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655779] = (float)((float)v55 + *(float *)(v56 + v54 - 32))
                                                                                              * v57;
                        v68 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v68 + 71655777] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777];
                        *(float *)&dword_140404A6C[2 * v68 + 71655778] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v68 + 71655778];
                        *(float *)&dword_140404A6C[2 * v68 + 71655779] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v68 + 71655779];
                        v69 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v69 + 71655777] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777];
                        *(float *)&dword_140404A6C[2 * v69 + 71655778] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v69 + 71655778];
                        *(float *)&dword_140404A6C[2 * v69 + 71655779] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v69 + 71655779];
                        v70 = 20LL * (int)dword_140404A6C[71655762];
                        v71 = *(float *)&dword_140404A6C[v70 + 71655769];
                        v72 = *(float *)&dword_140404A6C[v70 + 71655768];
                        v73 = *(float *)&dword_140404A6C[v70 + 71655770];
                        v75 = *(float *)&dword_140404A6C[v70 + 71655775] - v71;
                        v76 = *(float *)&dword_140404A6C[v70 + 71655776] - v73;
                        v77 = *(float *)&dword_140404A6C[v70 + 71655772] - v71;
                        v78 = *(float *)&dword_140404A6C[v70 + 71655773] - v73;
                        v79 = *(float *)&dword_140404A6C[v70 + 71655771] - v72;
                        v80 = *(float *)&dword_140404A6C[v70 + 71655774] - v72;
                        v324 = v71;
                        *(float *)&v323 = v72;
                        v325 = v73;
                        v74 = (float *)(0x140000000LL + v70 * 4 + 290836476);
                        *v74 = (float)(v75 * v78) - (float)(v76 * v77);
                        v74[1] = (float)(v76 * v79) - (float)(v78 * v80);
                        v74[2] = (float)(v77 * v80) - (float)(v75 * v79);
                        sub_14007A240(v74, v74);
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655763] = 1;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655764] = v53;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655765] = v316;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655766] = v55;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655767] = v51;
                        LODWORD(v12) = ++dword_140404A6C[71655762];
                      }
                      ++v51;
                      v54 += 48;
                    }
                    while ( v51 < v52 );
                    LODWORD(v11) = dword_140404A6C[70425405];
                    v25 = v313;
                    *(float *)&v23 = v312;
                  }
                  v81 = (unsigned int *)*(unsigned int *)((char *)&dword_140404A6C[20074623] + v24);
                  if ( (int)v81 > 0 )
                  {
                    v82 = 8;
                    v83 = *(char **)((char *)&dword_140404A6C[20074635] + v24);
                    v84 = *(_QWORD *)((char *)&dword_140404A6C[20074631] + v24);
                    v85 = *(_QWORD *)((char *)&dword_140404A6C[20074633] + v24) - (_QWORD)v83;
                    v86 = v327;
                    v328 = v81;
                    do
                    {
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 - 8);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 - 4);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = LODWORD(v25) + *(_DWORD *)(v84 + v82);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 + 4);
                      v87 = *(_DWORD *)&v83[v85];
                      if ( (unsigned __int8)v87 >= 8u )
                      {
                        v88 = *((_WORD *)&dword_140404A6C[6930 * (int)v320 + 83195379] + v86 + (unsigned __int8)v87);
                        if ( v88 >= 0 )
                        {
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = (unsigned __int16)v88;
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = (unsigned __int8)dword_140404A6C[dword_140404A6C[70998846] + 71064383];
                        }
                        else
                        {
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = dword_140404A6C[3
                                                                                                * (*((_WORD *)&dword_140404A6C[6930 * (int)v320 + 83195379] + v86 + (unsigned __int8)v87)
                                                                                                 & 0x3FF)
                                                                                                + 421769142];
                        }
                      }
                      else
                      {
                        dword_140404A6C[dword_140404A6C[70998846] + 71064383] = *((unsigned __int8 *)v333
                                                                                + (unsigned __int8)v87);
                      }
                      if ( (*v83 & 1) != 0 )
                      {
                        if ( *(float *)&v23 != 0.0 )
                        {
                          v89 = v23;
                          do
                          {
                            v90 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                            v91 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                + 70835006];
                            v92 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                + 70835007];
                            v93 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v90 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998850]
                                                                            + 70835006];
                            dword_140404A6C[v90 + 70835007] = dword_140404A6C[v93 + 70835007];
                            v94 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            v95 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v95 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998849]
                                                                            + 70835006];
                            dword_140404A6C[v95 + 70835007] = dword_140404A6C[v94 + 70835007];
                            v96 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            v97 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            dword_140404A6C[v97 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998848]
                                                                            + 70835006];
                            dword_140404A6C[v97 + 70835007] = dword_140404A6C[v96 + 70835007];
                            v98 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            dword_140404A6C[v98 + 70835006] = v91;
                            dword_140404A6C[v98 + 70835007] = v92;
                            --v89;
                          }
                          while ( v89 );
                        }
                        v99 = _mm_xor_ps((__m128)(unsigned int)dword_1402F6198, (__m128)0x80000000);
                        v100 = _mm_xor_ps((__m128)(unsigned int)dword_1402F61A0, (__m128)0x80000000);
                        v101 = (__m128)(unsigned int)dword_1402F6178;
                        v102 = _mm_xor_ps((__m128)(unsigned int)dword_1402F619C, (__m128)0x80000000);
                        v103 = (__m128)(unsigned int)dword_1402F617C;
                        v104 = (__m128)(unsigned int)dword_1402F6180;
                        v105 = v23 + (*(int *)&v83[v85] >> 12);
                        v312 = v99.m128_f32[0];
                        v313 = v100.m128_f32[0];
                        v106 = v105 & 3;
                        if ( (_DWORD)v106 )
                        {
                          do
                          {
                            v107 = v104;
                            v108 = v103;
                            v109 = v101;
                            v101 = _mm_xor_ps(v99, (__m128)0x80000000);
                            v103 = _mm_xor_ps(v102, (__m128)0x80000000);
                            v104 = _mm_xor_ps(v100, (__m128)0x80000000);
                            v99 = v109;
                            v102 = v108;
                            v100 = v107;
                            --v106;
                          }
                          while ( v106 );
                          v313 = v107.m128_f32[0];
                          v312 = v109.m128_f32[0];
                        }
                        v110 = *(float *)&dword_140404A6C[v10 + 111579654];
                        v111 = *(float *)&dword_140404A6C[v10 + 111579638];
                        v112 = *(float *)&dword_140404A6C[v10 + 111579639];
                        v113 = *(float *)&dword_140404A6C[v10 + 111579640];
                        v114 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                        v115 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687550]
                                     - v321)
                             - v111;
                        v116 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687552]
                                     - *(float *)&v315)
                             - v113;
                        v117 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687551]
                                     - *(float *)&v326)
                             - v112;
                        v118 = (float)((float)(v102.m128_f32[0] * v117) + (float)(v312 * v115)) + (float)(v313 * v116);
                        *(float *)&dword_140404A6C[v114 + 70835006] = (float)((float)((float)(v103.m128_f32[0] * v117)
                                                                                    + (float)(v101.m128_f32[0] * v115))
                                                                            + (float)(v104.m128_f32[0] * v116))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v114 + 70835007] = v118 * v110;
                        v119 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                        v120 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687550]
                                     - v321)
                             - v111;
                        v121 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687551]
                                     - *(float *)&v326)
                             - v112;
                        v122 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687552]
                                     - *(float *)&v315)
                             - v113;
                        v123 = (float)((float)(v102.m128_f32[0] * v121) + (float)(v312 * v120)) + (float)(v313 * v122);
                        *(float *)&dword_140404A6C[v119 + 70835006] = (float)((float)((float)(v103.m128_f32[0] * v121)
                                                                                    + (float)(v101.m128_f32[0] * v120))
                                                                            + (float)(v104.m128_f32[0] * v122))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v119 + 70835007] = v123 * v110;
                        v124 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                        v125 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687550]
                                     - v321)
                             - v111;
                        v126 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687551]
                                     - *(float *)&v326)
                             - v112;
                        v127 = v103.m128_f32[0] * v126;
                        v128 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687552]
                                     - *(float *)&v315)
                             - v113;
                        v129 = v102.m128_f32[0] * v126;
                        v130 = v312;
                        v131 = v127 + (float)(v101.m128_f32[0] * v125);
                        v132 = v312 * v125;
                        v133 = v313;
                        v134 = (float)(v129 + v132) + (float)(v313 * v128);
                        *(float *)&dword_140404A6C[v124 + 70835006] = (float)(v131 + (float)(v104.m128_f32[0] * v128))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v124 + 70835007] = v134 * v110;
                        v135 = (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                        v136 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687550] - v321) - v111;
                        v137 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687551] - *(float *)&v326) - v112;
                        v138 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687552] - *(float *)&v315) - v113;
                        *(float *)&dword_140404A6C[3 * v135 + 70835006] = (float)((float)((float)(v103.m128_f32[0] * v137)
                                                                                        + (float)(v101.m128_f32[0] * v136))
                                                                                + (float)(v104.m128_f32[0] * v138))
                                                                        * v110;
                        *(float *)&dword_140404A6C[3 * v135 + 70835007] = (float)((float)((float)(v102.m128_f32[0] * v137)
                                                                                        + (float)(v130 * v136))
                                                                                + (float)(v133 * v138))
                                                                        * v110;
                      }
                      dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 0;
                      if ( *v83 < 0 )
                        dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 128;
                      v139 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687551];
                      v140 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687552];
                      v141 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      v323 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70687550];
                      v142 = *(float *)&dword_140404A6C[v141 + 70687550] - *(float *)&v323;
                      v143 = *(float *)&dword_140404A6C[v141 + 70687552];
                      v144 = *(float *)&dword_140404A6C[v141 + 70687551] - v139;
                      v145 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      v324 = v139;
                      v146 = v143 - v140;
                      v147 = *(float *)&dword_140404A6C[v145 + 70687551] - v139;
                      v148 = *(float *)&dword_140404A6C[v145 + 70687552] - v140;
                      v149 = *(float *)&dword_140404A6C[v145 + 70687550] - *(float *)&v323;
                      v325 = v140;
                      v150 = (float *)(0x140000000LL + 12LL * (int)dword_140404A6C[70998846] + 288667496);
                      *v150 = (float)(v147 * v146) - (float)(v148 * v144);
                      v150[1] = (float)(v142 * v148) - (float)(v149 * v146);
                      v150[2] = (float)(v149 * v144) - (float)(v142 * v147);
                      sub_14007A240(v150, v150);
                      ++dword_140404A6C[70998846];
                      v82 += 16;
                      v83 += 4;
                      v328 = (unsigned int *)((char *)v328 - 1);
                    }
                    while ( v328 );
                    LODWORD(v12) = dword_140404A6C[71655762];
                    LODWORD(v11) = dword_140404A6C[70425405];
                    v15 = v321;
                    v16 = *(float *)&v326;
                    v17 = *(float *)&v315;
                    v24 = v331;
                  }
                  v151 = *(unsigned int *)((char *)&dword_140404A6C[20074639] + v24);
                  if ( v151 > 0 )
                  {
                    v152 = (unsigned int)v151;
                    v153 = *(int **)((char *)&dword_140404A6C[20074643] + v24);
                    v154 = (_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[20074641] + v24) + 8LL);
                    do
                    {
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = LODWORD(v25) + *(v154 - 2);
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = LODWORD(v25) + *(v154 - 1);
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = LODWORD(v25) + *v154;
                      v155 = *v153;
                      if ( (int)v155 >= 8 )
                        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = 0;
                      else
                        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = *((unsigned __int8 *)v333 + v155);
                      v154 += 3;
                      ++v153;
                      dword_140404A6C[dword_140404A6C[71179071] + 71293761] = 0;
                      ++dword_140404A6C[71179071];
                      --v152;
                    }
                    while ( v152 );
                    LODWORD(v12) = dword_140404A6C[71655762];
                    LODWORD(v11) = dword_140404A6C[70425405];
                  }
                  v4 = v330;
                  v18 = v314;
                  v14 = v316;
                  v20 = v318;
                  v21 = v317;
                }
                ++v21;
                v19 = (int *)(v329 + 1);
                v317 = v21;
                ++v329;
              }
              while ( v21 < 8 );
              v318 = ++v20;
            }
            while ( v20 < 8 );
            ++v14;
            v18 += 8;
            v316 = v14;
            v314 = v18;
          }
          while ( v14 < 2 * (int)v319 + 2 );
          v156 = 35876LL * v322;
          v157 = (int *)((char *)&dword_140404A6C[73991666] + v156);
          v326 = v156;
          v158 = (int *)((char *)&dword_140404A6C[64 * (__int64)(2 * (int)v319) + 83198967] + v4);
          v314 = 2 * v319;
          *(unsigned int *)((char *)&dword_140404A6C[73991666] + v156) = 0;
          v159 = 0;
          do
          {
            for ( i = 0; i < 8; ++i )
            {
              for ( j = 0; j < 8; ++j )
              {
                v162 = *v158;
                if ( *v158 > 0 )
                {
                  v163 = v162 & 0x7F;
                  v164 = (v162 >> 12) & 0xFFF;
                  v165 = (v162 >> 10) & 3;
                  *(unsigned int *)((char *)&dword_140404A6C[15 * v159 + 73991667] + v156) = v163;
                  v166 = dword_140404A6C[2310 * v163 + 432533577];
                  v323 = dword_140404A6C[2310 * v163 + 432533576];
                  v325 = *(float *)&dword_140404A6C[2310 * v163 + 432533578];
                  v324 = *(float *)&v166;
                  if ( v165 == 1 || v165 == 2 || v165 == 3 )
                    sub_14007B4D0(&v323, &dword_1402F6188, 0x140000000uLL, &dword_140404A6C[432533576]);
                  v167 = *(float *)&dword_140404A6C[v10 + 111579653];
                  *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991670] + v156) = (float)((float)((float)j + 0.5)
                                                                                             * v167)
                                                                                     + *(float *)&v323;
                  v168 = (float)((float)((float)i + 0.5) * v167) + v325;
                  *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991671] + v156) = (float)((float)v314 * v167)
                                                                                     + v324;
                  *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991672] + v156) = v168;
                  v169 = v156 + 60LL * *v157;
                  *(float *)((char *)&dword_140404A6C[73991670] + v169) = v15
                                                                        + *(float *)((char *)&dword_140404A6C[73991670]
                                                                                   + v169);
                  *(float *)((char *)&dword_140404A6C[73991671] + v169) = v16
                                                                        + *(float *)((char *)&dword_140404A6C[73991671]
                                                                                   + v169);
                  *(float *)((char *)&dword_140404A6C[73991672] + v169) = v17
                                                                        + *(float *)((char *)&dword_140404A6C[73991672]
                                                                                   + v169);
                  v170 = v156 + 60LL * *v157;
                  *(float *)((char *)&dword_140404A6C[73991670] + v170) = *(float *)&dword_140404A6C[v10 + 111579638]
                                                                        + *(float *)((char *)&dword_140404A6C[73991670]
                                                                                   + v170);
                  *(float *)((char *)&dword_140404A6C[73991671] + v170) = *(float *)((char *)&dword_140404A6C[73991671]
                                                                                   + v170)
                                                                        + *(float *)&dword_140404A6C[v10 + 111579639];
                  *(float *)((char *)&dword_140404A6C[73991672] + v170) = *(float *)((char *)&dword_140404A6C[73991672]
                                                                                   + v170)
                                                                        + *(float *)&dword_140404A6C[v10 + 111579640];
                  v171 = (char *)&dword_140404A6C[15 * *v157 + 73991673] + v156;
                  *(_QWORD *)v171 = 1065353216;
                  *((_QWORD *)v171 + 1) = 0;
                  *((_QWORD *)v171 + 2) = 1065353216;
                  *((_QWORD *)v171 + 3) = 0;
                  *((_DWORD *)v171 + 8) = 1065353216;
                  if ( v165 == 1 || v165 == 2 || v165 == 3 )
                    sub_14007B2A0((char *)&dword_140404A6C[15 * *v157 + 73991673] + v156, &dword_1402F6188);
                  *(unsigned int *)((char *)&dword_140404A6C[15 * *v157 + 73991668] + v156) = v164;
                  *(unsigned int *)((char *)&dword_140404A6C[15 * *v157 + 73991669] + v156) = ((_BYTE)v165 - 2) & 3;
                  v159 = *v157 + 1;
                  *v157 = v159;
                }
                ++v158;
              }
            }
            v3 = v319;
            v11 = (unsigned int)(v314 + 1);
            v314 = v11;
            v172 = 2 * v319 + 2;
          }
          while ( (int)v11 < v172 );
          v173 = 2 * v319;
          v12 = (unsigned int *)((char *)&dword_140404A6C[64 * (__int64)(2 * (int)v319) + 83199991] + v330);
          *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = 0;
          v174 = 0;
          v175 = 16 * v3;
          do
          {
            for ( k = 0; k < 8; ++k )
            {
              for ( m = 0; m < 8; m += 4 )
              {
                v178 = *(v12 - 512);
                if ( v178 )
                {
                  v179 = *(float *)&dword_140404A6C[v10 + 111579653];
                  v180 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                  *(unsigned int *)((char *)&dword_140404A6C[7 * v174 + 73993588] + v156) = *(v12 - 512) & 0x3FF;
                  v181 = (float)((float)((float)m + 0.5) * v179) + v180;
                  v182 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993590]
                                  + v156) = *v12;
                  v11 = (unsigned int)(m + 8 * (v175 + k));
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993589]
                                  + v156) = v11;
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993591]
                                  + v156) = HIBYTE(v178) & 3;
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993592]
                           + v156) = v181;
                  v183 = (float)((float)v173 * v179) + v182;
                  v184 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993593]
                           + v156) = v183;
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993594]
                           + v156) = (float)((float)((float)k + 0.5) * v179) + v184;
                  v174 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                  *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v174;
                }
                v185 = *(v12 - 511);
                if ( v185 )
                {
                  v186 = *(float *)&dword_140404A6C[v10 + 111579653];
                  v187 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                  *(unsigned int *)((char *)&dword_140404A6C[7 * v174 + 73993588] + v156) = *(v12 - 511) & 0x3FF;
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993590]
                                  + v156) = v12[1];
                  v11 = (unsigned int)(m + 8 * (v175 + k) + 1);
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993589]
                                  + v156) = v11;
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993591]
                                  + v156) = HIBYTE(v185) & 3;
                  v188 = (float)((float)((float)(m + 1) + 0.5) * v186) + v187;
                  v189 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993592]
                           + v156) = v188;
                  v190 = (float)((float)v173 * v186) + v189;
                  v191 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993593]
                           + v156) = v190;
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993594]
                           + v156) = (float)((float)((float)k + 0.5) * v186) + v191;
                  v174 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                  *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v174;
                }
                v192 = *(v12 - 510);
                if ( v192 )
                {
                  v193 = *(float *)&dword_140404A6C[v10 + 111579653];
                  v194 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                  *(unsigned int *)((char *)&dword_140404A6C[7 * v174 + 73993588] + v156) = *(v12 - 510) & 0x3FF;
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993590]
                                  + v156) = v12[2];
                  v11 = (unsigned int)(m + 8 * (v175 + k) + 2);
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993589]
                                  + v156) = v11;
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993591]
                                  + v156) = HIBYTE(v192) & 3;
                  v195 = (float)((float)((float)(m + 2) + 0.5) * v193) + v194;
                  v196 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993592]
                           + v156) = v195;
                  v197 = (float)((float)v173 * v193) + v196;
                  v198 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993593]
                           + v156) = v197;
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993594]
                           + v156) = (float)((float)((float)k + 0.5) * v193) + v198;
                  v174 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                  *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v174;
                }
                v199 = *(v12 - 509);
                if ( v199 )
                {
                  v200 = *(float *)&dword_140404A6C[v10 + 111579653];
                  v201 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                  *(unsigned int *)((char *)&dword_140404A6C[7 * v174 + 73993588] + v156) = *(v12 - 509) & 0x3FF;
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993590]
                                  + v156) = v12[3];
                  v11 = (unsigned int)(m + 8 * (v175 + k) + 3);
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993589]
                                  + v156) = v11;
                  *(unsigned int *)((char *)&dword_140404A6C[7
                                                           * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                           + 73993591]
                                  + v156) = HIBYTE(v199) & 3;
                  v202 = (float)((float)((float)(m + 3) + 0.5) * v200) + v201;
                  v203 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993592]
                           + v156) = v202;
                  v204 = (float)((float)v173 * v200) + v203;
                  v205 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993593]
                           + v156) = v204;
                  *(float *)((char *)&dword_140404A6C[7 * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                    + 73993594]
                           + v156) = (float)((float)((float)k + 0.5) * v200) + v205;
                  v174 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                  *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v174;
                }
                v12 += 4;
              }
            }
            ++v173;
            v175 += 8;
          }
          while ( v173 < v172 );
          v5 = v332;
          LODWORD(v2) = v320;
          v206 = 0;
          v207 = v322;
        }
        if ( dword_140404A6C[70998846] || dword_140404A6C[71179071] || *v157 || v174 )
        {
          ++dword_140404A6C[70087022];
          sub_140185D00(0x140000000uLL, v11, v12);
          v209 = dword_140404A6C[73006973];
          v210 = dword_140404A6C[70998846];
          v211 = 0;
          if ( (int)dword_140404A6C[73006973] < (int)dword_140404A6C[70998846] )
            v209 = dword_140404A6C[70998846];
          dword_140404A6C[73006973] = v209;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v212 = 0;
            v213 = 0;
            do
            {
              v214 = v212;
              v212 += 9;
              v215 = v213;
              v213 += 3;
              dword_140404A6C[v215 + 71359297] = -1;
              *(_QWORD *)&dword_140404A6C[v214 + 71506753] = 0;
              dword_140404A6C[v214 + 71506755] = 0;
              dword_140404A6C[v215 + 71359298] = -1;
              *(_QWORD *)&dword_140404A6C[v214 + 71506756] = 0;
              dword_140404A6C[v214 + 71506758] = 0;
              dword_140404A6C[v215 + 71359299] = -1;
              *(_QWORD *)&dword_140404A6C[v214 + 71506759] = 0;
              dword_140404A6C[v214 + 71506761] = 0;
              v216 = v211++;
              v217 = 3 * v216;
              v218 = 3LL * (int)dword_140404A6C[3 * v216 + 71179072];
              dword_140404A6C[v217 + 71310145] = dword_140404A6C[3 * dword_140404A6C[3 * v216 + 71179072] + 70736702];
              dword_140404A6C[v217 + 71310146] = dword_140404A6C[v218 + 70736703];
              dword_140404A6C[v217 + 71310147] = dword_140404A6C[v218 + 70736704];
            }
            while ( v211 < (int)dword_140404A6C[71179071] );
            v210 = dword_140404A6C[70998846];
          }
          v219 = 2;
          v220 = 0;
          v315 = 2;
          if ( v210 > 0 )
          {
            do
            {
              v221 = v220;
              v222 = 2LL * v220;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v220 + 70998847];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v220 + 70998848];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v220 + 70998849];
              v223 = 3LL * (int)dword_140404A6C[4 * v220 + 70998847];
              v224 = 3LL * (int)dword_140404A6C[71179071];
              dword_140404A6C[v224 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v220 + 70998847] + 70736702];
              dword_140404A6C[v224 + 71310146] = dword_140404A6C[v223 + 70736703];
              dword_140404A6C[v224 + 71310147] = dword_140404A6C[v223 + 70736704];
              dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v220 + 71064383];
              dword_140404A6C[dword_140404A6C[71179071] + 71293761] = dword_140404A6C[v220 + 71097151];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359297] = -1;
              v225 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v225 + 71506753] = 0;
              dword_140404A6C[v225 + 71506755] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359298] = -1;
              v226 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v226 + 71506756] = 0;
              dword_140404A6C[v226 + 71506758] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359299] = dword_140404A6C[71179071] + 1;
              dword_140404A6C[6 * dword_140404A6C[71179071] + 71408454] = 2;
              v227 = 3LL * (int)dword_140404A6C[4 * v220 + 70998847];
              v228 = 9 * dword_140404A6C[71179071];
              dword_140404A6C[v228 + 71506759] = dword_140404A6C[3 * dword_140404A6C[4 * v220 + 70998847] + 70736702];
              dword_140404A6C[v228 + 71506760] = dword_140404A6C[v227 + 70736703];
              dword_140404A6C[v228 + 71506761] = dword_140404A6C[v227 + 70736704];
              ++dword_140404A6C[71179071];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v220 + 70998847];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v220++ + 70998849];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[2 * v222 + 70998850];
              v229 = 3LL * (int)dword_140404A6C[2 * v222 + 70998847];
              v230 = 3LL * (int)dword_140404A6C[71179071];
              dword_140404A6C[v230 + 71310145] = dword_140404A6C[3 * dword_140404A6C[2 * v222 + 70998847] + 70736702];
              dword_140404A6C[v230 + 71310146] = dword_140404A6C[v229 + 70736703];
              dword_140404A6C[v230 + 71310147] = dword_140404A6C[v229 + 70736704];
              dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v221 + 71064383];
              dword_140404A6C[dword_140404A6C[71179071] + 71293761] = dword_140404A6C[v221 + 71097151];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359297] = dword_140404A6C[71179071] - 1;
              dword_140404A6C[6 * dword_140404A6C[71179071] + 71408450] = 1;
              v231 = 3LL * (int)dword_140404A6C[2 * v222 + 70998847];
              v232 = 9 * dword_140404A6C[71179071];
              dword_140404A6C[v232 + 71506753] = dword_140404A6C[3 * dword_140404A6C[2 * v222 + 70998847] + 70736702];
              dword_140404A6C[v232 + 71506754] = dword_140404A6C[v231 + 70736703];
              dword_140404A6C[v232 + 71506755] = dword_140404A6C[v231 + 70736704];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359298] = -1;
              v233 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v233 + 71506756] = 0;
              dword_140404A6C[v233 + 71506758] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359299] = -1;
              v234 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v234 + 71506759] = 0;
              dword_140404A6C[v234 + 71506761] = 0;
              ++dword_140404A6C[71179071];
            }
            while ( v220 < (int)dword_140404A6C[70998846] );
          }
          v235 = dword_140404A6C[70425405];
          for ( n = 0; n < (int)dword_140404A6C[70425405]; v235 = dword_140404A6C[70425405] )
          {
            v237 = n++;
            dword_140404A6C[v237 + 70982462] = 0;
          }
          v238 = 0;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            do
            {
              v239 = v238++;
              dword_140404A6C[dword_140404A6C[3 * v239 + 71179072] + 70982462] = 1;
              dword_140404A6C[dword_140404A6C[3 * v239 + 71179073] + 70982462] = 1;
              dword_140404A6C[dword_140404A6C[3 * v239 + 71179074] + 70982462] = 1;
            }
            while ( v238 < (int)dword_140404A6C[71179071] );
            v235 = dword_140404A6C[70425405];
          }
          v240 = 0;
          while ( v240 < v235 )
          {
            if ( dword_140404A6C[v240 + 70982462] )
            {
              ++v240;
            }
            else
            {
              dword_140404A6C[70425405] = --v235;
              if ( v240 >= v235 )
                break;
              v241 = 3LL * v240;
              dword_140404A6C[v241 + 70687550] = dword_140404A6C[3 * v235 + 70687550];
              dword_140404A6C[v241 + 70687551] = dword_140404A6C[3 * v235 + 70687551];
              dword_140404A6C[v241 + 70687552] = dword_140404A6C[3 * v235 + 70687552];
              v242 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v241 + 70736702] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702];
              dword_140404A6C[v241 + 70736703] = dword_140404A6C[v242 + 70736703];
              dword_140404A6C[v241 + 70736704] = dword_140404A6C[v242 + 70736704];
              v243 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v241 + 70785854] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70785854];
              dword_140404A6C[v241 + 70785855] = dword_140404A6C[v243 + 70785855];
              dword_140404A6C[v241 + 70785856] = dword_140404A6C[v243 + 70785856];
              dword_140404A6C[v241 + 70835006] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006];
              dword_140404A6C[v241 + 70835007] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007];
              dword_140404A6C[v241 + 70835008] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008];
              v244 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v241 + 70884158] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158];
              dword_140404A6C[v241 + 70884159] = dword_140404A6C[v244 + 70884159];
              v245 = dword_140404A6C[v244 + 70884160];
              v246 = 0;
              dword_140404A6C[v241 + 70884160] = v245;
              dword_140404A6C[v240 + 70933310] = dword_140404A6C[dword_140404A6C[70425405] + 70933310];
              dword_140404A6C[v240 + 70982462] = dword_140404A6C[dword_140404A6C[70425405] + 70982462];
              v235 = dword_140404A6C[70425405];
              if ( (int)dword_140404A6C[71179071] > 0 )
              {
                v247 = &dword_140404A6C[71179073];
                do
                {
                  if ( *(v247 - 1) == v235 )
                  {
                    *(v247 - 1) = v240;
                    v235 = dword_140404A6C[70425405];
                  }
                  if ( *v247 == v235 )
                  {
                    *v247 = v240;
                    v235 = dword_140404A6C[70425405];
                  }
                  if ( v247[1] == v235 )
                  {
                    v247[1] = v240;
                    v235 = dword_140404A6C[70425405];
                  }
                  ++v246;
                  v247 += 3;
                }
                while ( v246 < (int)dword_140404A6C[71179071] );
              }
            }
          }
          v248 = *(int *)((char *)&dword_140404A6C[73991662] + v156);
          if ( (_DWORD)v248 != -1 )
            dword_140404A6C[6930 * v248 + 83200503 + *(int *)((char *)&dword_140404A6C[73991663] + v156)] = -1;
          ++dword_140404A6C[179955279];
          dword_140404A6C[179955278] += v235;
          *(unsigned int *)((char *)&dword_140404A6C[73991662] + v156) = v2;
          *(unsigned int *)((char *)&dword_140404A6C[73991663] + v156) = v3;
          v249 = LOWORD(dword_140404A6C[73991661]) + 1;
          dword_140404A6C[v5 + 83200503] = v207;
          dword_140404A6C[73991661] = v249 & 0x3FF;
          if ( v235 > 0 && (!dword_140404A6C[179955281] || (int)dword_140404A6C[179955281] > v235) )
            dword_140404A6C[179955281] = v235;
          v250 = dword_140404A6C[179955280];
          v251 = 0;
          if ( (int)dword_140404A6C[179955280] < v235 )
            v250 = v235;
          dword_140404A6C[179955280] = v250;
          if ( v235 > 0 )
          {
            do
            {
              v252 = v251++;
              HIBYTE(dword_140404A6C[v252 + 70933310]) = 0;
              dword_140404A6C[v252 + 70966078] = -1;
              v235 = dword_140404A6C[70425405];
            }
            while ( v251 < (int)dword_140404A6C[70425405] );
          }
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v253 = 0;
            v254 = 0.0;
            v316 = 0;
            v255 = 0.0;
            v312 = 0.0;
            v313 = 0.0;
            do
            {
              v256 = v206 + 1;
              v327 = v206 + 1;
              v317 = v206 + 1;
              if ( v206 + 1 < (int)dword_140404A6C[71179071] )
              {
                v257 = 3LL * v256;
                v258 = &dword_140404A6C[v257 + 71310147];
                v259 = (_DWORD *)(0x140000000LL + 36LL * v256 + 290240376);
                v333[0] = v259;
                v260 = &dword_140404A6C[v257 + 71359297];
                v261 = 3LL * v256;
                v262 = (_UNKNOWN *)((char *)&unk_1402F61A8 - v257 * 4) - (_UNKNOWN *)&dword_140404A6C[71359297];
                v320 = v261;
                v263 = &dword_140404A6C[6 * v256 + 71408450];
                v319 = v262;
                v328 = &dword_140404A6C[v257 + 71359297];
                v329 = v263;
                do
                {
                  v264 = v313;
                  v265 = LODWORD(v254);
                  v314 = LODWORD(v254);
                  v266 = (int *)&unk_1402F61A8;
                  v267 = 0;
                  v318 = LODWORD(v313);
                  v268 = v253;
                  do
                  {
                    if ( dword_140404A6C[v268 + 71359297] == -1 )
                    {
                      v269 = 0;
                      v270 = v260;
                      do
                      {
                        if ( *v270 == -1 )
                        {
                          v271 = (int)dword_140404A6C[v261 + 71179072 + *(int *)((char *)v270 + v262)];
                          v272 = 3LL * v206;
                          v273 = (int)dword_140404A6C[v267 + 71179072 + v272];
                          if ( dword_140404A6C[v273 + 70933310] == dword_140404A6C[v271 + 70933310] )
                          {
                            v274 = (int)dword_140404A6C[v272 + 71179072 + *v266];
                            v275 = (int)*(v270 - 180225);
                            if ( dword_140404A6C[v274 + 70933310] == dword_140404A6C[v275 + 70933310] )
                            {
                              v276 = 3 * v271;
                              if ( fabs(
                                     *(float *)&dword_140404A6C[3 * v273 + 70687550]
                                   - *(float *)&dword_140404A6C[v276 + 70687550]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v273 + 70687551]
                                   - *(float *)&dword_140404A6C[v276 + 70687551]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v273 + 70687552]
                                   - *(float *)&dword_140404A6C[v276 + 70687552]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v274 + 70687550]
                                   - *(float *)&dword_140404A6C[3 * v275 + 70687550]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v274 + 70687551]
                                   - *(float *)&dword_140404A6C[3 * v275 + 70687551]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v274 + 70687552]
                                   - *(float *)&dword_140404A6C[3 * v275 + 70687552]) < 0.000099999997 )
                              {
                                dword_140404A6C[v268 + 71359297] = v317;
                                dword_140404A6C[v314 + 71408450] = (v269 + 2) % 3;
                                v277 = v318;
                                dword_140404A6C[v318 + 71506753] = *(v258 - 2);
                                dword_140404A6C[v277 + 71506754] = *(v258 - 1);
                                dword_140404A6C[v277 + 71506755] = *v258;
                                LODWORD(v277) = v315;
                                *v270 = v206;
                                *v263 = (v268 + (int)v277) % 3;
                                *(v259 - 2) = dword_140404A6C[3 * v206 + 71310145];
                                *(v259 - 1) = dword_140404A6C[3 * v206 + 71310146];
                                *v259 = dword_140404A6C[3 * v206 + 71310147];
                              }
                            }
                          }
                          v262 = v319;
                          v261 = v320;
                        }
                        ++v269;
                        v263 += 2;
                        v259 += 3;
                        ++v270;
                      }
                      while ( v269 < 3 );
                      v264 = *(float *)&v318;
                      v265 = v314;
                      v259 = (_DWORD *)v333[0];
                      v260 = v328;
                      v263 = v329;
                    }
                    v265 += 2;
                    LODWORD(v264) += 3;
                    v314 = v265;
                    ++v268;
                    v318 = LODWORD(v264);
                    ++v267;
                    ++v266;
                  }
                  while ( (__int64)v266 < (__int64)&dword_1402F61B4 );
                  v261 += 3;
                  v254 = v312;
                  v263 += 6;
                  ++v317;
                  v259 += 9;
                  v320 = v261;
                  v260 += 3;
                  v329 = v263;
                  v262 -= 12LL;
                  v333[0] = v259;
                  v258 += 3;
                  v328 = v260;
                  v253 = v316;
                  v319 = v262;
                }
                while ( v317 < (int)dword_140404A6C[71179071] );
                v219 = v315;
                v255 = v313;
                v256 = v327;
              }
              LODWORD(v255) += 9;
              LODWORD(v254) += 6;
              v253 += 3;
              v313 = v255;
              v219 -= 3;
              v312 = v254;
              v206 = v256;
              v316 = v253;
              v315 = v219;
            }
            while ( v256 < (int)dword_140404A6C[71179071] );
            v235 = dword_140404A6C[70425405];
            v156 = v326;
            v207 = v322;
          }
          v278 = 0;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v279 = 0;
            v280 = 3;
            do
            {
              dword_140404A6C[v280 + 71408446] = dword_140404A6C[3 * v278 + 71179072];
              v281 = v280 - 2;
              v282 = dword_140404A6C[v279 + 71359297];
              if ( v282 == -1 )
              {
                v283 = dword_140404A6C[3 * v278 + 71179072];
              }
              else
              {
                v284 = dword_140404A6C[v281 + 71408449];
                if ( v284 > 2 )
                {
                  dword_140404A6C[v281 + 71408449] = 0;
                  v284 = 0;
                  v282 = dword_140404A6C[v279 + 71359297];
                }
                v283 = dword_140404A6C[3 * v282 + 71179072 + v284];
              }
              dword_140404A6C[v280 + 71408447] = v283;
              dword_140404A6C[v280 + 71408448] = dword_140404A6C[3 * v278 + 71179073];
              if ( dword_140404A6C[v279 + 71359298] == -1 )
              {
                v285 = dword_140404A6C[3 * v278 + 71179073];
              }
              else
              {
                v286 = dword_140404A6C[v280 + 71408449];
                if ( v286 > 2 )
                {
                  dword_140404A6C[v280 + 71408449] = 0;
                  v286 = 0;
                }
                v285 = dword_140404A6C[3 * dword_140404A6C[v279 + 71359298] + 71179072 + v286];
              }
              dword_140404A6C[v280 + 71408449] = v285;
              dword_140404A6C[v280 + 71408450] = dword_140404A6C[3 * v278 + 71179074];
              if ( dword_140404A6C[v279 + 71359299] == -1 )
              {
                v287 = dword_140404A6C[3 * v278 + 71179074];
              }
              else
              {
                v288 = dword_140404A6C[v280 + 71408451];
                if ( v288 > 2 )
                {
                  dword_140404A6C[v280 + 71408451] = 0;
                  v288 = 0;
                }
                v287 = dword_140404A6C[3 * dword_140404A6C[v279 + 71359299] + 71179072 + v288];
              }
              ++v278;
              dword_140404A6C[v280 + 71408451] = v287;
              v279 += 3;
              v280 += 6;
            }
            while ( v278 < (int)dword_140404A6C[71179071] );
            v235 = dword_140404A6C[70425405];
          }
          *(unsigned int *)((char *)&dword_140404A6C[73991664] + v156) = v235;
          v289 = 0;
          if ( v235 > 0 )
          {
            v290 = 0;
            do
            {
              v291 = v290;
              v290 += 16;
              v292 = v289++;
              *(_QWORD *)&dword_140404A6C[v291 + 70425406] = *(_QWORD *)&dword_140404A6C[3 * v292 + 70687550];
              dword_140404A6C[v291 + 70425408] = dword_140404A6C[3 * v292 + 70687552];
              *(_QWORD *)&dword_140404A6C[v291 + 70425409] = *(_QWORD *)&dword_140404A6C[3 * v292 + 70736702];
              dword_140404A6C[v291 + 70425411] = dword_140404A6C[3 * v292 + 70736704];
              *(_QWORD *)&dword_140404A6C[v291 + 70425412] = *(_QWORD *)&dword_140404A6C[3 * v292 + 70785854];
              dword_140404A6C[v291 + 70425414] = dword_140404A6C[3 * v292 + 70785856];
              *(_QWORD *)&dword_140404A6C[v291 + 70425415] = *(_QWORD *)&dword_140404A6C[3 * v292 + 70835006];
              dword_140404A6C[v291 + 70425417] = dword_140404A6C[3 * v292 + 70835008];
              v235 = dword_140404A6C[70425405];
            }
            while ( v289 < (int)dword_140404A6C[70425405] );
          }
          sub_140193FE0(0, v207, &dword_140404A6C[70425406], (unsigned int)(v235 << 6));
          v293 = dword_140404A6C[71179071];
          v294 = 0;
          *(unsigned int *)((char *)&dword_140404A6C[73991665] + v156) = dword_140404A6C[71179071];
          dword_140404A6C[71228224] = 0;
          LODWORD(v295) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156) = 0;
          for ( ii = 0; ii < 256; ++ii )
          {
            v297 = 0;
            *((_BYTE *)&dword_140404A6C[3 * (int)v295 + 73994485] + v156) = ii;
            *(unsigned int *)((char *)&dword_140404A6C[3 * *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156)
                                                     + 73994486]
                            + v156) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[3 * *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156)
                                                     + 73994487]
                            + v156) = v294;
            if ( v293 > 0 )
            {
              v298 = &dword_140404A6C[71179072];
              v299 = &dword_140404A6C[71277377];
              do
              {
                if ( *v299 == ii )
                {
                  v300 = (int)(3 * v294);
                  *(_QWORD *)&dword_140404A6C[v300 + 71228225] = *(_QWORD *)v298;
                  dword_140404A6C[v300 + 71228227] = v298[2];
                  v301 = *(int *)((char *)&dword_140404A6C[73994484] + v156);
                  v293 = dword_140404A6C[71179071];
                  v294 = ++dword_140404A6C[71228224];
                  ++*(unsigned int *)((char *)&dword_140404A6C[3 * v301 + 73994486] + v156);
                }
                ++v297;
                ++v299;
                v298 += 3;
              }
              while ( v297 < v293 );
            }
            v295 = *(int *)((char *)&dword_140404A6C[73994484] + v156);
            if ( *(int *)((char *)&dword_140404A6C[3 * v295 + 73994486] + v156) > 0 )
            {
              LODWORD(v295) = v295 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156) = v295;
            }
          }
          sub_140193FE0(3, v207, &dword_140404A6C[71228225], (unsigned int)(12 * v293));
          sub_140193FE0(5, v207, &dword_140404A6C[71408449], 24 * dword_140404A6C[71179071]);
          v302 = dword_140404A6C[71655762];
          *(unsigned int *)((char *)&dword_140404A6C[73995254] + v156) = dword_140404A6C[71655762];
          if ( v302 > 0 )
          {
            v303 = (unsigned int)v302;
            v304 = (char *)&dword_140404A6C[73995263] + v156;
            v305 = &dword_140404A6C[71655770];
            do
            {
              v306 = *(v305 - 7);
              v307 = v305[9];
              v305 += 20;
              *((_DWORD *)v304 - 7) = v306;
              v308 = *(v305 - 26);
              *((_DWORD *)v304 - 8) = 1;
              *((_DWORD *)v304 - 6) = v308;
              v304 += 84;
              *((_DWORD *)v304 - 26) = *(v305 - 25);
              *((_DWORD *)v304 - 25) = *(v305 - 24);
              *((_DWORD *)v304 - 24) = *(v305 - 23);
              *((_DWORD *)v304 - 23) = *(v305 - 22);
              *((_DWORD *)v304 - 22) = *(v305 - 21);
              *((_DWORD *)v304 - 21) = *(v305 - 20);
              *((_DWORD *)v304 - 20) = *(v305 - 19);
              *((_DWORD *)v304 - 19) = *(v305 - 18);
              *((_DWORD *)v304 - 18) = *(v305 - 17);
              *((_DWORD *)v304 - 17) = *(v305 - 16);
              *((_DWORD *)v304 - 16) = *(v305 - 15);
              *((_DWORD *)v304 - 15) = *(v305 - 14);
              v309 = *(v305 - 13);
              *((_DWORD *)v304 - 12) = v307;
              v310 = *(v305 - 10);
              *((_DWORD *)v304 - 14) = v309;
              *((_DWORD *)v304 - 13) = *(v305 - 12);
              *((_DWORD *)v304 - 11) = v310;
              *((_DWORD *)v304 - 10) = *(v305 - 9);
              *((_DWORD *)v304 - 9) = *(v305 - 8);
              --v303;
            }
            while ( v303 );
          }
        }
        else
        {
          dword_140404A6C[v5 + 83200503] = -2;
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v311 ^ v333[1]);
}

