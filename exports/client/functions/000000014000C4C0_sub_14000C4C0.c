/* Address: 0x14000c4c0 | Name: sub_14000C4C0 | Size: 9194 bytes */
__int64 __fastcall sub_14000C4C0(unsigned int a1)
{
  __int64 v1; // rbp
  __m128i v2; // xmm4
  __m128 v3; // xmm3
  signed int v4; // r10d
  __int64 v5; // r8
  int v6; // esi
  __m128i v7; // xmm10
  __m128i v8; // xmm11
  __int64 v9; // r13
  char *v10; // rax
  char *v11; // rdx
  float v12; // xmm1_4
  float v13; // xmm11_4
  float v14; // xmm4_4
  float v15; // xmm10_4
  signed int v16; // r12d
  char *v17; // rcx
  signed int v18; // edi
  char *v19; // r14
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int16 v23; // ax
  int *v24; // r12
  int v25; // ebp
  int v26; // esi
  unsigned __int64 v27; // r11
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // r9
  int *v31; // r10
  float v32; // xmm5_4
  __int64 v33; // rbx
  int v34; // xmm9_4
  int v35; // xmm10_4
  int v36; // xmm11_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm8_4
  unsigned int v40; // r15d
  float v41; // xmm14_4
  float v42; // xmm15_4
  float v43; // xmm12_4
  float v44; // xmm13_4
  int v45; // eax
  __int64 v46; // r14
  float v47; // xmm3_4
  float v48; // xmm4_4
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  __int64 v58; // rcx
  float v59; // xmm0_4
  float v60; // xmm1_4
  __int64 v61; // rcx
  float v62; // xmm0_4
  __int64 v63; // r8
  __int64 v64; // rdx
  unsigned int v65; // xmm0_4
  unsigned int v66; // xmm1_4
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // edx
  int v76; // eax
  unsigned int v77; // r15d
  unsigned int v78; // edx
  int v79; // eax
  unsigned int v80; // edx
  int v81; // eax
  unsigned int v82; // edx
  int v83; // eax
  __int64 v84; // r9
  int v85; // r11d
  unsigned __int64 v86; // rax
  __int64 v87; // r14
  unsigned int v88; // esi
  int v89; // ecx
  __int64 v90; // rax
  float v91; // xmm2_4
  __int64 v92; // r10
  __int64 v93; // rbp
  float v94; // xmm7_4
  float v95; // xmm8_4
  float *v96; // r9
  float v97; // xmm9_4
  __int64 v98; // r13
  float v99; // xmm3_4
  __m128i v100; // xmm4
  __int64 v101; // rdi
  __m128i v102; // xmm6
  __int64 v103; // r12
  unsigned int *v104; // r11
  __int64 v105; // rbp
  unsigned int *v106; // rbx
  __int64 v107; // rdi
  float v108; // xmm4_4
  float v109; // xmm5_4
  float v110; // xmm6_4
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rcx
  int v116; // r12d
  signed int v117; // edi
  signed int v118; // r13d
  __int64 v119; // rbx
  unsigned int v120; // r8d
  __int64 v121; // rbp
  int v122; // eax
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // r8
  __int64 v127; // rdx
  unsigned int v128; // xmm0_4
  unsigned int v129; // xmm1_4
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __m128 v136; // xmm13
  __m128 v137; // xmm14
  __m128 v138; // xmm10
  __m128 v139; // xmm15
  __m128 v140; // xmm11
  __m128 v141; // xmm12
  __int64 v142; // rax
  __m128 v143; // xmm2
  __m128 v144; // xmm1
  __m128 v145; // xmm0
  float v146; // xmm9_4
  float v147; // xmm6_4
  float v148; // xmm7_4
  float v149; // xmm8_4
  __int64 v150; // rax
  float v151; // xmm2_4
  float v152; // xmm0_4
  float v153; // xmm1_4
  __int64 v154; // rax
  float v155; // xmm2_4
  float v156; // xmm0_4
  float v157; // xmm1_4
  __int64 v158; // rax
  float v159; // xmm2_4
  float v160; // xmm0_4
  float v161; // xmm1_4
  __int64 v162; // rcx
  float v163; // xmm5_4
  float v164; // xmm4_4
  float v165; // xmm3_4
  float v166; // xmm0_4
  float v167; // xmm1_4
  float v168; // xmm2_4
  float v169; // xmm8_4
  float v170; // xmm7_4
  float v171; // xmm4_4
  float v172; // xmm5_4
  float v173; // xmm3_4
  float v174; // xmm6_4
  float *v175; // rcx
  int v176; // ecx
  __int64 v177; // r10
  __int64 v178; // r9
  __int64 v179; // r8
  unsigned int v180; // ecx
  int v181; // edx
  int i; // r10d
  __int64 v183; // r9
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rdx
  __int64 v187; // rcx
  int v188; // r9d
  signed int v189; // r8d
  int v190; // ecx
  unsigned int *v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rcx
  unsigned int v196; // eax
  int v197; // ecx
  unsigned int *v198; // rax
  unsigned int v199; // eax
  int v200; // r8d
  int v201; // r10d
  __int64 v202; // rcx
  __int64 v203; // rax
  unsigned int v204; // r15d
  int v205; // edx
  int v206; // r8d
  int v207; // ecx
  __int64 v208; // rax
  signed int v209; // r11d
  int v210; // r15d
  signed int v211; // esi
  unsigned int *v212; // r14
  unsigned int *v213; // r8
  int v214; // r9d
  __int64 j; // rbx
  int v216; // edi
  __int64 v217; // rbp
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rbp
  __int64 v221; // rax
  __int64 v222; // rax
  __int64 v223; // rbp
  __int64 v224; // rax
  __int64 v225; // rax
  int v226; // ebx
  int v227; // esi
  int v228; // r8d
  int v229; // eax
  unsigned int v230; // ecx
  unsigned int v231; // eax
  unsigned int v232; // r10d
  unsigned int v233; // eax
  unsigned int v234; // r10d
  unsigned int v235; // eax
  unsigned int v236; // edx
  __int64 v237; // rdi
  unsigned int v238; // r8d
  __int64 v239; // r9
  int k; // ebx
  int v241; // r11d
  unsigned int *v242; // r9
  unsigned int *v243; // r10
  __int64 v244; // rcx
  __int64 v245; // rax
  __int64 v247; // [rsp+0h] [rbp-188h] BYREF
  float v248; // [rsp+20h] [rbp-168h]
  float v249; // [rsp+24h] [rbp-164h]
  float v250; // [rsp+28h] [rbp-160h]
  int v251; // [rsp+2Ch] [rbp-15Ch]
  int v252; // [rsp+30h] [rbp-158h]
  int v253; // [rsp+34h] [rbp-154h]
  int v254; // [rsp+38h] [rbp-150h]
  unsigned int v255; // [rsp+3Ch] [rbp-14Ch]
  unsigned int v256; // [rsp+40h] [rbp-148h]
  unsigned int v257; // [rsp+44h] [rbp-144h]
  __int64 v258; // [rsp+48h] [rbp-140h]
  char *v259; // [rsp+50h] [rbp-138h]
  __int64 v260; // [rsp+58h] [rbp-130h]
  _DWORD *v261; // [rsp+60h] [rbp-128h]
  int *v262; // [rsp+68h] [rbp-120h]
  __int64 v263; // [rsp+70h] [rbp-118h]
  char *v264; // [rsp+78h] [rbp-110h]
  char *v265; // [rsp+80h] [rbp-108h]
  char *v266; // [rsp+88h] [rbp-100h]
  char *v267; // [rsp+90h] [rbp-F8h]
  _BYTE v268[17]; // [rsp+98h] [rbp-F0h]
  _BYTE v269[15]; // [rsp+A9h] [rbp-DFh] BYREF
  __int64 v270; // [rsp+B8h] [rbp-D0h]

  v255 = a1;
  if ( a1 <= 0xFFF )
  {
    v1 = 27720LL * (int)a1;
    v260 = v1;
    if ( *(unsigned int *)((char *)&dword_140404A6C[83194357] + v1) )
    {
      v2 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200507]);
      v3 = (__m128)0x80000000;
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200508]);
      v8 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200509]);
      v9 = 1052016LL * (int)dword_140404A6C[6930 * a1 + 83194358];
      dword_140404A6C[71654225] = 0;
      v10 = (char *)&dword_140404A6C[83194871] + v1;
      v258 = v9;
      v11 = (char *)&dword_140404A6C[83195383] + v1 - (_QWORD)v269;
      dword_140404A6C[70425405] = 0;
      dword_140404A6C[70998846] = 0;
      dword_140404A6C[71179071] = 0;
      v12 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
      v251 = 0;
      v254 = 0;
      v266 = (char *)&dword_140404A6C[83194871] + v1;
      v267 = v11;
      v13 = (float)(_mm_cvtepi32_ps(v8).m128_f32[0] * 8.0) * v12;
      v14 = (float)(_mm_cvtepi32_ps(v2).m128_f32[0] * 8.0) * v12;
      v15 = (float)(_mm_cvtepi32_ps(v7).m128_f32[0] * 8.0) * v12;
      v250 = v13;
      v248 = v14;
      v249 = v15;
      do
      {
        v16 = 0;
        v253 = 0;
        v264 = v10;
        v17 = v11;
        v265 = v11;
        do
        {
          v18 = 0;
          v252 = 0;
          v261 = v10;
          v19 = v17;
          v259 = v17;
          do
          {
            v20 = *((_DWORD *)v10 - 512);
            v257 = v20;
            if ( (v20 & 0xE0000000) == 0x40000000 )
            {
              v256 = HIBYTE(v20) & 3;
              v21 = 0;
              v22 = 0;
              do
              {
                v23 = *(_WORD *)&v269[v22 + (_QWORD)v19];
                *(_WORD *)&v268[v22 + 16] = v23;
                if ( v22 >= 0x10 )
                  goto LABEL_162;
                *(_WORD *)&v268[v22] = 0;
                if ( (v23 & 0x4000) != 0 )
                {
                  v269[v22] = 0;
                  *(_WORD *)&v268[v22] = HIBYTE(v23) & 0x1F;
                  v23 = *(_WORD *)&v268[v22 + 16];
                }
                if ( v23 < 0 )
                {
                  *(_WORD *)&v268[v22] = v23 & 0x3FF;
                  *(_WORD *)&v268[v22 + 16] = dword_140404A6C[421784414];
                }
                v21 = (unsigned int)(v21 + 1);
                v22 += 2LL;
              }
              while ( (int)v21 < 8 );
              v24 = dword_1402B3660;
              v263 = 0;
              v262 = dword_1402B3660;
              v25 = 0;
              v26 = 1;
              v27 = 0;
              v28 = 0;
              do
              {
                if ( (v26 & v20) != 0 )
                {
                  v29 = *(unsigned __int16 *)&v268[v28 + 16];
                  v30 = 0;
                  v31 = v24;
                  v32 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
                  v33 = 4;
                  v34 = dword_1402B3550[v27 / 4];
                  v35 = dword_1402B3554[v27 / 4];
                  v36 = dword_1402B3558[v27 / 4];
                  v37 = *(float *)((char *)&unk_1402B35A0 + v27);
                  v38 = *(float *)((char *)&unk_1402B35A4 + v27);
                  v39 = *(float *)((char *)&unk_1402B35A8 + v27);
                  v40 = dword_140404A6C[421784414];
                  v41 = (float)v252;
                  v42 = (float)v251;
                  v43 = *(float *)&dword_140404A6C[46 * v29 + 421784734];
                  v44 = *(float *)&dword_140404A6C[46 * v29 + 421784735];
                  v45 = *(unsigned __int16 *)&v268[v28];
                  v46 = v258;
                  v47 = (float)v253;
                  v48 = (float)v45;
                  do
                  {
                    v49 = 3LL * *v31;
                    *(float *)&dword_140404A6C[3 * (int)v5 + 70687550] = (float)(v41
                                                                               + *(float *)&dword_1402B34F0[3 * *v31])
                                                                       * v32;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v42
                                                                                                 + *(float *)&dword_1402B34F4[v49])
                                                                                         * v32;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v47
                                                                                                 + *(float *)&dword_1402B34F8[v49])
                                                                                         * v32;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 10;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 20;
                    v50 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v50 + 70736702] = v34;
                    dword_140404A6C[v50 + 70736703] = v35;
                    dword_140404A6C[v50 + 70736704] = v36;
                    v51 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v51 + 70785854] = v37;
                    *(float *)&dword_140404A6C[v51 + 70785855] = v38;
                    *(float *)&dword_140404A6C[v51 + 70785856] = v39;
                    v52 = *(float *)((char *)&unk_1402B35F0 + v27);
                    v53 = *(float *)((char *)&unk_1402B35F8 + v27);
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = (float)((float)((float)(v38 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551]) + (float)(v37 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550]))
                                                                                                 + (float)(v39 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552]))
                                                                                         * v43;
                    v54 = (float)(*(float *)((char *)&unk_1402B35F4 + v27)
                                * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551])
                        + (float)(v52 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550]);
                    v55 = v248;
                    v56 = v54 + (float)(v53 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552]);
                    v57 = v249;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = v56 * v44;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                    v58 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v58 + 70687550] = v55
                                                               + *(float *)&dword_140404A6C[3
                                                                                          * dword_140404A6C[70425405]
                                                                                          + 70687550];
                    v59 = v250;
                    *(float *)&dword_140404A6C[v58 + 70687551] = v57 + *(float *)&dword_140404A6C[v58 + 70687551];
                    v60 = *(float *)((char *)&dword_140404A6C[111579639] + v46);
                    *(float *)&dword_140404A6C[v58 + 70687552] = v59 + *(float *)&dword_140404A6C[v58 + 70687552];
                    v61 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v61 + 70687550] = *(float *)((char *)&dword_140404A6C[111579638] + v46)
                                                               + *(float *)&dword_140404A6C[3
                                                                                          * dword_140404A6C[70425405]
                                                                                          + 70687550];
                    v62 = *(float *)((char *)&dword_140404A6C[111579640] + v46);
                    *(float *)&dword_140404A6C[v61 + 70687551] = v60 + *(float *)&dword_140404A6C[v61 + 70687551];
                    *(float *)&dword_140404A6C[v61 + 70687552] = v62 + *(float *)&dword_140404A6C[v61 + 70687552];
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = v48;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884159] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884160] = 1065353216;
                    if ( (unsigned int)(v25 - 1) <= 3 && (_DWORD)v29 == v40 )
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = v48;
                    ++v31;
                    dword_140404A6C[4 * (int)dword_140404A6C[70998846] + 70998847 + v30++] = dword_140404A6C[70425405];
                    LODWORD(v5) = ++dword_140404A6C[70425405];
                    --v33;
                  }
                  while ( v33 );
                  v28 = v263;
                  v24 = v262;
                  if ( v25 == 5 && v256 )
                  {
                    v63 = v256;
                    do
                    {
                      v64 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                      v65 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70835006];
                      v66 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70835007];
                      v67 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                      dword_140404A6C[v64 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998850]
                                                                      + 70835006];
                      dword_140404A6C[v64 + 70835007] = dword_140404A6C[v67 + 70835007];
                      v68 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      v69 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                      dword_140404A6C[v69 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998849]
                                                                      + 70835006];
                      dword_140404A6C[v69 + 70835007] = dword_140404A6C[v68 + 70835007];
                      v70 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      v71 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      dword_140404A6C[v71 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998848]
                                                                      + 70835006];
                      dword_140404A6C[v71 + 70835007] = dword_140404A6C[v70 + 70835007];
                      v72 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      dword_140404A6C[v72 + 70835006] = v65;
                      dword_140404A6C[v72 + 70835007] = v66;
                      --v63;
                    }
                    while ( v63 );
                  }
                  v20 = v257;
                  v9 = v258;
                  dword_140404A6C[dword_140404A6C[70998846] + 71064383] = v29;
                  v73 = 3LL * (int)dword_140404A6C[70998846];
                  dword_140404A6C[v73 + 71113535] = v34;
                  dword_140404A6C[v73 + 71113536] = v35;
                  dword_140404A6C[v73 + 71113537] = v36;
                  ++dword_140404A6C[70998846];
                  v5 = dword_140404A6C[70425405];
                }
                v24 += 4;
                v26 = __ROL4__(v26, 1);
                v28 += 2;
                v262 = v24;
                ++v25;
                v263 = v28;
                v27 += 12LL;
              }
              while ( v25 < 6 );
              v4 = dword_140404A6C[71654225];
              v3 = (__m128)0x80000000;
              v15 = v249;
              v13 = v250;
              v1 = v260;
              v16 = v253;
              v18 = v252;
              v6 = v251;
              v19 = v259;
            }
            else if ( (v20 & 0xE0000000) == 0x80000000 )
            {
              v75 = 0;
              if ( v4 <= 0 )
              {
LABEL_38:
                v76 = *(unsigned int *)((char *)&dword_140404A6C[83200507] + v1);
                v77 = HIBYTE(v20) & 3;
                v256 = v77;
                v78 = v18 + 8 * v76;
                v79 = *(unsigned int *)((char *)&dword_140404A6C[83200508] + v1);
                dword_140404A6C[3 * v4 + 71654226] = v78;
                v80 = v6 + 8 * v79;
                v81 = *(unsigned int *)((char *)&dword_140404A6C[83200509] + v1);
                dword_140404A6C[3 * dword_140404A6C[71654225] + 71654227] = v80;
                v5 = 0;
                v82 = v16 + 8 * v81;
                v83 = v254;
                dword_140404A6C[3 * dword_140404A6C[71654225] + 71654228] = v82;
                v4 = dword_140404A6C[71654225] + 1;
                v84 = 13860LL * (int)v255;
                ++dword_140404A6C[71654225];
                v85 = 8 * (v18 + 8 * (v16 + v83));
                do
                {
                  v22 = v84 + v85 + (int)v5;
                  v86 = 2LL * (int)v5;
                  v21 = *((unsigned __int16 *)&dword_140404A6C[83195383] + v22);
                  *(_WORD *)&v268[v86 + 16] = v21;
                  if ( v86 >= 0x10 )
LABEL_162:
                    sub_1401F8694(v22, v21, v5);
                  *(_WORD *)&v268[2 * (int)v5] = 0;
                  if ( (v21 & 0x4000) != 0 )
                    *(_WORD *)&v268[2 * (int)v5] = BYTE1(v21) & 0x1F;
                  v5 = (unsigned int)(v5 + 1);
                  v269[v86] = 0;
                }
                while ( (int)v5 < 8 );
                v5 = dword_140404A6C[70425405];
                v87 = 58LL * (unsigned __int16)v20;
                v88 = dword_140404A6C[70425405];
                v257 = dword_140404A6C[70425405];
                v89 = dword_140404A6C[v87 + 20074613];
                if ( v89 > 0 )
                {
                  v90 = *(_QWORD *)&dword_140404A6C[v87 + 20074615];
                  v91 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
                  v92 = 0;
                  v93 = *(_QWORD *)&dword_140404A6C[v87 + 20074619];
                  v94 = *(float *)((char *)&dword_140404A6C[111579638] + v9);
                  v95 = *(float *)((char *)&dword_140404A6C[111579639] + v9);
                  v96 = (float *)(v90 + 8);
                  v97 = *(float *)((char *)&dword_140404A6C[111579640] + v9);
                  v98 = (unsigned int)v89;
                  v99 = v248;
                  v100 = _mm_cvtsi32_si128(v18);
                  v101 = *(_QWORD *)&dword_140404A6C[v87 + 20074617];
                  v102 = _mm_cvtsi32_si128(v16);
                  v103 = *(_QWORD *)&dword_140404A6C[v87 + 20074621];
                  v104 = (unsigned int *)(v93 + 8);
                  v105 = v93 - v90;
                  v106 = (unsigned int *)(v101 + 8);
                  v107 = v101 - v90;
                  v108 = _mm_cvtepi32_ps(v100).m128_f32[0];
                  v109 = (float)v251;
                  v110 = _mm_cvtepi32_ps(v102).m128_f32[0];
                  do
                  {
                    *(float *)&dword_140404A6C[3 * (int)v5 + 70687550] = (float)(v108 + *(v96 - 2)) * v91;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v109 + *(v96 - 1))
                                                                                         * v91;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v110 + *v96) * v91;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 10;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 20;
                    v111 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v111 + 70687550] = v99
                                                                + *(float *)&dword_140404A6C[3
                                                                                           * dword_140404A6C[70425405]
                                                                                           + 70687550];
                    *(float *)&dword_140404A6C[v111 + 70687551] = v15 + *(float *)&dword_140404A6C[v111 + 70687551];
                    *(float *)&dword_140404A6C[v111 + 70687552] = v13 + *(float *)&dword_140404A6C[v111 + 70687552];
                    v112 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v112 + 70687550] = v94
                                                                + *(float *)&dword_140404A6C[3
                                                                                           * dword_140404A6C[70425405]
                                                                                           + 70687550];
                    *(float *)&dword_140404A6C[v112 + 70687551] = v95 + *(float *)&dword_140404A6C[v112 + 70687551];
                    *(float *)&dword_140404A6C[v112 + 70687552] = v97 + *(float *)&dword_140404A6C[v112 + 70687552];
                    v113 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v113 + 70736702] = *(_DWORD *)((char *)v96 + v107 - 8);
                    dword_140404A6C[v113 + 70736703] = *(v106 - 1);
                    dword_140404A6C[v113 + 70736704] = *v106;
                    v114 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v114 + 70785854] = *(_DWORD *)((char *)v96 + v105 - 8);
                    dword_140404A6C[v114 + 70785855] = *(v104 - 1);
                    dword_140404A6C[v114 + 70785856] = *v104;
                    v115 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v115 + 70884158] = 1065353216;
                    dword_140404A6C[v115 + 70884159] = 1065353216;
                    dword_140404A6C[v115 + 70884160] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = *(_DWORD *)(v103 + v92);
                    v96 += 3;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = *(_DWORD *)(v103 + v92 + 4);
                    v106 += 3;
                    v104 += 3;
                    v92 += 8;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                    v5 = ++dword_140404A6C[70425405];
                    --v98;
                  }
                  while ( v98 );
                  v4 = dword_140404A6C[71654225];
                  v3 = (__m128)0x80000000;
                  v14 = v248;
                  v88 = v257;
                  v77 = v256;
                }
                v116 = dword_140404A6C[v87 + 20074623];
                v117 = 0;
                if ( v116 > 0 )
                {
                  v118 = dword_140404A6C[v87 + 20074624];
                  v119 = 0;
                  v120 = dword_140404A6C[70998846];
                  v121 = 8;
                  do
                  {
                    if ( v117 >= v118 || (v122 = *v261, !_bittest(&v122, v117)) )
                    {
                      v123 = *(_QWORD *)&dword_140404A6C[v87 + 20074633];
                      v124 = *(_QWORD *)&dword_140404A6C[v87 + 20074631];
                      dword_140404A6C[4 * v120 + 70998847] = v88 + *(_DWORD *)(v124 + v121 - 8);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = v88 + *(_DWORD *)(v124 + v121 - 4);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = v88 + *(_DWORD *)(v124 + v121);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = v88 + *(_DWORD *)(v124 + v121 + 4);
                      dword_140404A6C[dword_140404A6C[70998846] + 71064383] = *(unsigned __int16 *)&v268[2 * *(unsigned __int8 *)(v119 + v123) + 16];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                               + 70835008] = (float)*(unsigned __int16 *)&v268[2
                                                                                             * *(unsigned __int8 *)(v119 + v123)];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                               + 70835008] = (float)*(unsigned __int16 *)&v268[2
                                                                                             * *(unsigned __int8 *)(v119 + v123)];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                               + 70835008] = (float)*(unsigned __int16 *)&v268[2
                                                                                             * *(unsigned __int8 *)(v119 + v123)];
                      v125 = *(_QWORD *)&dword_140404A6C[v87 + 20074635];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850]
                                               + 70835008] = (float)*(unsigned __int16 *)&v268[2
                                                                                             * *(unsigned __int8 *)(v119 + v123)];
                      if ( (*(_BYTE *)(v119 + v125) & 1) != 0 )
                      {
                        if ( v77 )
                        {
                          v126 = v77;
                          do
                          {
                            v127 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                            v128 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                 + 70835006];
                            v129 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                 + 70835007];
                            v130 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v127 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998850]
                                                                             + 70835006];
                            dword_140404A6C[v127 + 70835007] = dword_140404A6C[v130 + 70835007];
                            v131 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            v132 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v132 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998849]
                                                                             + 70835006];
                            dword_140404A6C[v132 + 70835007] = dword_140404A6C[v131 + 70835007];
                            v133 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            v134 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            dword_140404A6C[v134 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998848]
                                                                             + 70835006];
                            dword_140404A6C[v134 + 70835007] = dword_140404A6C[v133 + 70835007];
                            v135 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            dword_140404A6C[v135 + 70835006] = v128;
                            dword_140404A6C[v135 + 70835007] = v129;
                            --v126;
                          }
                          while ( v126 );
                        }
                        v136 = _mm_xor_ps((__m128)(unsigned int)dword_1402F6198, v3);
                        v137 = _mm_xor_ps((__m128)(unsigned int)dword_1402F619C, v3);
                        v138 = (__m128)(unsigned int)dword_1402F6178;
                        v139 = _mm_xor_ps((__m128)(unsigned int)dword_1402F61A0, v3);
                        v140 = (__m128)(unsigned int)dword_1402F617C;
                        v141 = (__m128)(unsigned int)dword_1402F6180;
                        v142 = ((_BYTE)v77 + (unsigned __int8)(*(int *)(v119 + v123) >> 12)) & 3;
                        if ( (((_BYTE)v77 + (unsigned __int8)(*(int *)(v119 + v123) >> 12)) & 3) != 0 )
                        {
                          do
                          {
                            v143 = v141;
                            v144 = v140;
                            v145 = v138;
                            v138 = _mm_xor_ps(v136, v3);
                            v140 = _mm_xor_ps(v137, v3);
                            v141 = _mm_xor_ps(v139, v3);
                            v136 = v145;
                            v137 = v144;
                            v139 = v143;
                            --v142;
                          }
                          while ( v142 );
                        }
                        v146 = *(float *)((char *)&dword_140404A6C[111579654] + v258);
                        v147 = *(float *)((char *)&dword_140404A6C[111579638] + v258);
                        v148 = *(float *)((char *)&dword_140404A6C[111579639] + v258);
                        v149 = *(float *)((char *)&dword_140404A6C[111579640] + v258);
                        v150 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                        v151 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687550]
                                     - v14)
                             - v147;
                        v152 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687551]
                                     - v249)
                             - v148;
                        v153 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687552]
                                     - v250)
                             - v149;
                        *(float *)&dword_140404A6C[v150 + 70835006] = (float)((float)((float)(v151 * v138.m128_f32[0])
                                                                                    + (float)(v152 * v140.m128_f32[0]))
                                                                            + (float)(v153 * v141.m128_f32[0]))
                                                                    * v146;
                        *(float *)&dword_140404A6C[v150 + 70835007] = (float)((float)((float)(v151 * v136.m128_f32[0])
                                                                                    + (float)(v152 * v137.m128_f32[0]))
                                                                            + (float)(v153 * v139.m128_f32[0]))
                                                                    * v146;
                        v154 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                        v155 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687550]
                                     - v248)
                             - v147;
                        v156 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687551]
                                     - v249)
                             - v148;
                        v157 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687552]
                                     - v250)
                             - v149;
                        *(float *)&dword_140404A6C[v154 + 70835006] = (float)((float)((float)(v155 * v138.m128_f32[0])
                                                                                    + (float)(v156 * v140.m128_f32[0]))
                                                                            + (float)(v157 * v141.m128_f32[0]))
                                                                    * v146;
                        *(float *)&dword_140404A6C[v154 + 70835007] = (float)((float)((float)(v155 * v136.m128_f32[0])
                                                                                    + (float)(v156 * v137.m128_f32[0]))
                                                                            + (float)(v157 * v139.m128_f32[0]))
                                                                    * v146;
                        v158 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                        v159 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687550]
                                     - v248)
                             - v147;
                        v160 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687551]
                                     - v249)
                             - v148;
                        v161 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687552]
                                     - v250)
                             - v149;
                        *(float *)&dword_140404A6C[v158 + 70835006] = (float)((float)((float)(v159 * v138.m128_f32[0])
                                                                                    + (float)(v160 * v140.m128_f32[0]))
                                                                            + (float)(v161 * v141.m128_f32[0]))
                                                                    * v146;
                        *(float *)&dword_140404A6C[v158 + 70835007] = (float)((float)((float)(v159 * v136.m128_f32[0])
                                                                                    + (float)(v160 * v137.m128_f32[0]))
                                                                            + (float)(v161 * v139.m128_f32[0]))
                                                                    * v146;
                        v162 = (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                        v163 = (float)(*(float *)&dword_140404A6C[3 * v162 + 70687550] - v248) - v147;
                        v164 = (float)(*(float *)&dword_140404A6C[3 * v162 + 70687551] - v249) - v148;
                        v165 = (float)(*(float *)&dword_140404A6C[3 * v162 + 70687552] - v250) - v149;
                        *(float *)&dword_140404A6C[3 * v162 + 70835006] = (float)((float)((float)(v163 * v138.m128_f32[0])
                                                                                        + (float)(v164 * v140.m128_f32[0]))
                                                                                + (float)(v165 * v141.m128_f32[0]))
                                                                        * v146;
                        *(float *)&dword_140404A6C[3 * v162 + 70835007] = (float)((float)((float)(v163 * v136.m128_f32[0])
                                                                                        + (float)(v164 * v137.m128_f32[0]))
                                                                                + (float)(v165 * v139.m128_f32[0]))
                                                                        * v146;
                      }
                      v166 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687550];
                      v167 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687551];
                      v168 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687552];
                      v169 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687550]
                           - v166;
                      v170 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687551]
                           - v167;
                      v171 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687552]
                           - v168;
                      v172 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687551]
                           - v167;
                      v173 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687552]
                           - v168;
                      v174 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687550]
                           - v166;
                      v175 = (float *)(0x140000000LL + 12LL * (int)dword_140404A6C[70998846] + 288667496);
                      *v175 = (float)(v172 * v171) - (float)(v173 * v170);
                      v175[1] = (float)(v169 * v173) - (float)(v174 * v171);
                      v175[2] = (float)(v174 * v170) - (float)(v169 * v172);
                      sub_14007A240(v175, v175);
                      v3 = (__m128)0x80000000;
                      v120 = ++dword_140404A6C[70998846];
                    }
                    v14 = v248;
                    ++v117;
                    v121 += 16;
                    v119 += 4;
                  }
                  while ( v117 < v116 );
                  v4 = dword_140404A6C[71654225];
                  v5 = dword_140404A6C[70425405];
                  v15 = v249;
                  v13 = v250;
                }
                v176 = dword_140404A6C[v87 + 20074639];
                if ( v176 > 0 )
                {
                  v177 = (unsigned int)v176;
                  v178 = *(_QWORD *)&dword_140404A6C[v87 + 20074643];
                  v179 = *(_QWORD *)&dword_140404A6C[v87 + 20074641] + 8LL;
                  v180 = dword_140404A6C[71179071];
                  do
                  {
                    v181 = *(_DWORD *)(v179 - 8);
                    v179 += 12;
                    v178 += 4;
                    dword_140404A6C[3 * v180 + 71179072] = v88 + v181;
                    dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = v88 + *(_DWORD *)(v179 - 16);
                    dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = v88 + *(_DWORD *)(v179 - 12);
                    dword_140404A6C[dword_140404A6C[71179071] + 71277377] = *(unsigned __int16 *)&v268[2 * *(int *)(v178 - 4) + 16];
                    v180 = ++dword_140404A6C[71179071];
                    --v177;
                  }
                  while ( v177 );
                  v4 = dword_140404A6C[71654225];
                  v5 = dword_140404A6C[70425405];
                }
                v1 = v260;
                v16 = v253;
                v18 = v252;
                v6 = v251;
                v19 = v259;
              }
              else
              {
                while ( v18 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200507] + v1) != dword_140404A6C[3 * v75 + 71654226]
                     || v6 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200508] + v1) != dword_140404A6C[3 * v75 + 71654227]
                     || v16 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200509] + v1) != dword_140404A6C[3 * v75 + 71654228] )
                {
                  if ( ++v75 >= v4 )
                    goto LABEL_38;
                }
              }
            }
            ++v18;
            v14 = v248;
            v10 = (char *)(v261 + 1);
            v9 = v258;
            v19 += 16;
            v252 = v18;
            ++v261;
            v259 = v19;
          }
          while ( v18 < 8 );
          ++v16;
          v10 = v264 + 32;
          v17 = v265 + 128;
          v253 = v16;
          v264 += 32;
          v265 += 128;
        }
        while ( v16 < 8 );
        ++v6;
        v74 = (unsigned int)(v254 + 8);
        v10 = v266 + 256;
        v11 = v267 + 1024;
        v251 = v6;
        v254 = v74;
        v266 += 256;
        v267 += 1024;
      }
      while ( (int)v74 < 64 );
      sub_140184BB0(v74, v11, v5, 0);
      for ( i = 0; i < (int)dword_140404A6C[70998846]; ++dword_140404A6C[71179071] )
      {
        v183 = i++;
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v183 + 70998847];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v183 + 70998848];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v183 + 70998849];
        v184 = 3LL * (int)dword_140404A6C[4 * v183 + 70998847];
        v185 = 3LL * (int)dword_140404A6C[71179071];
        dword_140404A6C[v185 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v183 + 70998847] + 70736702];
        dword_140404A6C[v185 + 71310146] = dword_140404A6C[v184 + 70736703];
        dword_140404A6C[v185 + 71310147] = dword_140404A6C[v184 + 70736704];
        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v183 + 71064383];
        ++dword_140404A6C[71179071];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v183 + 70998847];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v183 + 70998849];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v183 + 70998850];
        v186 = 3LL * (int)dword_140404A6C[4 * v183 + 70998847];
        v187 = 3LL * (int)dword_140404A6C[71179071];
        dword_140404A6C[v187 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v183 + 70998847] + 70736702];
        dword_140404A6C[v187 + 71310146] = dword_140404A6C[v186 + 70736703];
        dword_140404A6C[v187 + 71310147] = dword_140404A6C[v186 + 70736704];
        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v183 + 71064383];
      }
      v188 = dword_140404A6C[70425405];
      v189 = 0;
      while ( v189 < v188 )
      {
        v190 = 0;
        if ( (int)dword_140404A6C[71179071] <= 0 )
        {
LABEL_75:
          dword_140404A6C[70425405] = --v188;
          if ( v189 >= v188 )
            break;
          v192 = 3LL * v189;
          dword_140404A6C[v192 + 70687550] = dword_140404A6C[3 * v188 + 70687550];
          dword_140404A6C[v192 + 70687551] = dword_140404A6C[3 * v188 + 70687551];
          dword_140404A6C[v192 + 70687552] = dword_140404A6C[3 * v188 + 70687552];
          v193 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v192 + 70736702] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702];
          dword_140404A6C[v192 + 70736703] = dword_140404A6C[v193 + 70736703];
          dword_140404A6C[v192 + 70736704] = dword_140404A6C[v193 + 70736704];
          v194 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v192 + 70785854] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70785854];
          dword_140404A6C[v192 + 70785855] = dword_140404A6C[v194 + 70785855];
          dword_140404A6C[v192 + 70785856] = dword_140404A6C[v194 + 70785856];
          dword_140404A6C[v192 + 70835006] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006];
          dword_140404A6C[v192 + 70835007] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007];
          dword_140404A6C[v192 + 70835008] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008];
          v195 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v192 + 70884158] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158];
          dword_140404A6C[v192 + 70884159] = dword_140404A6C[v195 + 70884159];
          v196 = dword_140404A6C[v195 + 70884160];
          v197 = 0;
          dword_140404A6C[v192 + 70884160] = v196;
          v188 = dword_140404A6C[70425405];
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v198 = &dword_140404A6C[71179073];
            do
            {
              if ( *(v198 - 1) == v188 )
              {
                *(v198 - 1) = v189;
                v188 = dword_140404A6C[70425405];
              }
              if ( *v198 == v188 )
              {
                *v198 = v189;
                v188 = dword_140404A6C[70425405];
              }
              if ( v198[1] == v188 )
              {
                v198[1] = v189;
                v188 = dword_140404A6C[70425405];
              }
              ++v197;
              v198 += 3;
            }
            while ( v197 < (int)dword_140404A6C[71179071] );
          }
        }
        else
        {
          v191 = &dword_140404A6C[71179073];
          while ( *(v191 - 1) != v189 && *v191 != v189 && v191[1] != v189 )
          {
            ++v190;
            v191 += 3;
            if ( v190 >= (int)dword_140404A6C[71179071] )
              goto LABEL_75;
          }
          ++v189;
        }
      }
      v199 = dword_140404A6C[179955283];
      v200 = 0;
      if ( (int)dword_140404A6C[179955283] < v188 )
        v199 = v188;
      dword_140404A6C[179955283] = v199;
      if ( v188 > 0 )
      {
        v201 = 0;
        do
        {
          v202 = v201;
          v201 += 16;
          v203 = v200++;
          *(_QWORD *)&dword_140404A6C[v202 + 70425406] = *(_QWORD *)&dword_140404A6C[3 * v203 + 70687550];
          dword_140404A6C[v202 + 70425408] = dword_140404A6C[3 * v203 + 70687552];
          *(_QWORD *)&dword_140404A6C[v202 + 70425409] = *(_QWORD *)&dword_140404A6C[3 * v203 + 70736702];
          dword_140404A6C[v202 + 70425411] = dword_140404A6C[3 * v203 + 70736704];
          *(_QWORD *)&dword_140404A6C[v202 + 70425412] = *(_QWORD *)&dword_140404A6C[3 * v203 + 70785854];
          dword_140404A6C[v202 + 70425414] = dword_140404A6C[3 * v203 + 70785856];
          *(_QWORD *)&dword_140404A6C[v202 + 70425415] = *(_QWORD *)&dword_140404A6C[3 * v203 + 70835006];
          dword_140404A6C[v202 + 70425417] = dword_140404A6C[3 * v203 + 70835008];
          v188 = dword_140404A6C[70425405];
        }
        while ( v200 < (int)dword_140404A6C[70425405] );
      }
      v204 = v255;
      sub_140193FE0(1, v255, &dword_140404A6C[70425406], (unsigned int)(v188 << 6));
      v205 = dword_140404A6C[71179071];
      v206 = 0;
      *(unsigned int *)((char *)&dword_140404A6C[83200512] + v1) = dword_140404A6C[71179071];
      if ( v205 > 0 )
      {
        v207 = 0;
        do
        {
          v208 = v207;
          ++v206;
          v207 += 3;
          *(_QWORD *)&dword_140404A6C[v208 + 71359297] = -1;
          dword_140404A6C[v208 + 71359299] = -1;
          v205 = dword_140404A6C[71179071];
        }
        while ( v206 < (int)dword_140404A6C[71179071] );
      }
      v209 = 0;
      if ( v205 > 0 )
      {
        v210 = 0;
        do
        {
          v211 = 0;
          if ( v205 > 0 )
          {
            v212 = &dword_140404A6C[71408452];
            v213 = &dword_140404A6C[71359297];
            do
            {
              if ( v209 != v211 )
              {
                v214 = 0;
                for ( j = 0; j < 3; ++j )
                {
                  v216 = v210 + v214;
                  if ( dword_140404A6C[v210 + 71359297 + v214] == -1 )
                  {
                    if ( *v213 == -1 )
                    {
                      v217 = 3LL * v209;
                      v218 = (int)*(v213 - 180224);
                      if ( fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v217] + 70687550]
                           - *(float *)&dword_140404A6C[3 * v218 + 70687550]) < 0.000099999997
                        && fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v217] + 70687551]
                           - *(float *)&dword_140404A6C[3 * v218 + 70687551]) < 0.000099999997
                        && fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v217] + 70687552]
                           - *(float *)&dword_140404A6C[3 * v218 + 70687552]) < 0.000099999997 )
                      {
                        v219 = (int)*(v213 - 180225);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v217 + 71179072 + (v214 + 1) % 3]
                                                        + 70687550]
                             - *(float *)&dword_140404A6C[3 * v219 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v217 + 71179072 + (v214 + 1) % 3]
                                                        + 70687551]
                             - *(float *)&dword_140404A6C[3 * v219 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v217 + 71179072 + (v214 + 1) % 3]
                                                        + 70687552]
                             - *(float *)&dword_140404A6C[3 * v219 + 70687552]) < 0.000099999997 )
                        {
                          dword_140404A6C[v216 + 71359297] = v211;
                          dword_140404A6C[2 * v216 + 71408450] = 2;
                          *v213 = v209;
                          *(v212 - 2) = (v214 + 2) % 3;
                        }
                      }
                    }
                    if ( dword_140404A6C[v216 + 71359297] == -1 )
                    {
                      if ( v213[1] == -1 )
                      {
                        v220 = 3LL * v209;
                        v221 = (int)*(v213 - 180223);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v220] + 70687550]
                             - *(float *)&dword_140404A6C[3 * v221 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v220] + 70687551]
                             - *(float *)&dword_140404A6C[3 * v221 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v220] + 70687552]
                             - *(float *)&dword_140404A6C[3 * v221 + 70687552]) < 0.000099999997 )
                        {
                          v222 = (int)*(v213 - 180224);
                          if ( fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v220 + 71179072 + (v214 + 1) % 3]
                                                          + 70687550]
                               - *(float *)&dword_140404A6C[3 * v222 + 70687550]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v220 + 71179072 + (v214 + 1) % 3]
                                                          + 70687551]
                               - *(float *)&dword_140404A6C[3 * v222 + 70687551]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v220 + 71179072 + (v214 + 1) % 3]
                                                          + 70687552]
                               - *(float *)&dword_140404A6C[3 * v222 + 70687552]) < 0.000099999997 )
                          {
                            dword_140404A6C[v216 + 71359297] = v211;
                            dword_140404A6C[2 * v216 + 71408450] = 0;
                            v213[1] = v209;
                            *v212 = (v214 + 2) % 3;
                          }
                        }
                      }
                      if ( dword_140404A6C[v216 + 71359297] == -1 && v213[2] == -1 )
                      {
                        v223 = 3LL * v209;
                        v224 = (int)*(v213 - 180225);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v223] + 70687550]
                             - *(float *)&dword_140404A6C[3 * v224 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v223] + 70687551]
                             - *(float *)&dword_140404A6C[3 * v224 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v223] + 70687552]
                             - *(float *)&dword_140404A6C[3 * v224 + 70687552]) < 0.000099999997 )
                        {
                          v225 = (int)*(v213 - 180223);
                          if ( fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v223 + 71179072 + (v214 + 1) % 3]
                                                          + 70687550]
                               - *(float *)&dword_140404A6C[3 * v225 + 70687550]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v223 + 71179072 + (v214 + 1) % 3]
                                                          + 70687551]
                               - *(float *)&dword_140404A6C[3 * v225 + 70687551]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v223 + 71179072 + (v214 + 1) % 3]
                                                          + 70687552]
                               - *(float *)&dword_140404A6C[3 * v225 + 70687552]) < 0.000099999997 )
                          {
                            dword_140404A6C[v216 + 71359297] = v211;
                            dword_140404A6C[2 * v216 + 71408450] = 1;
                            v213[2] = v209;
                            v212[2] = (v214 + 2) % 3;
                          }
                        }
                      }
                    }
                  }
                  ++v214;
                }
                v205 = dword_140404A6C[71179071];
              }
              ++v211;
              v213 += 3;
              v212 += 6;
            }
            while ( v211 < v205 );
          }
          ++v209;
          v210 += 3;
        }
        while ( v209 < v205 );
        v1 = v260;
        v204 = v255;
      }
      v226 = 0;
      if ( v205 > 0 )
      {
        v227 = 0;
        v228 = 3;
        do
        {
          dword_140404A6C[v228 + 71408446] = dword_140404A6C[3 * v226 + 71179072];
          v229 = v228 - 2;
          v230 = dword_140404A6C[v227 + 71359297];
          if ( v230 == -1 )
          {
            v231 = dword_140404A6C[3 * v226 + 71179072];
          }
          else
          {
            v232 = dword_140404A6C[v229 + 71408449];
            if ( v232 > 2 )
            {
              dword_140404A6C[v229 + 71408449] = 0;
              v232 = 0;
              v230 = dword_140404A6C[v227 + 71359297];
            }
            v231 = dword_140404A6C[3 * v230 + 71179072 + v232];
          }
          dword_140404A6C[v228 + 71408447] = v231;
          dword_140404A6C[v228 + 71408448] = dword_140404A6C[3 * v226 + 71179073];
          if ( dword_140404A6C[v227 + 71359298] == -1 )
          {
            v233 = dword_140404A6C[3 * v226 + 71179073];
          }
          else
          {
            v234 = dword_140404A6C[v228 + 71408449];
            if ( v234 > 2 )
            {
              dword_140404A6C[v228 + 71408449] = 0;
              v234 = 0;
            }
            v233 = dword_140404A6C[3 * dword_140404A6C[v227 + 71359298] + 71179072 + v234];
          }
          dword_140404A6C[v228 + 71408449] = v233;
          dword_140404A6C[v228 + 71408450] = dword_140404A6C[3 * v226 + 71179074];
          if ( dword_140404A6C[v227 + 71359299] == -1 )
          {
            v235 = dword_140404A6C[3 * v226 + 71179074];
          }
          else
          {
            v236 = dword_140404A6C[v228 + 71408451];
            if ( v236 > 2 )
            {
              dword_140404A6C[v228 + 71408451] = 0;
              v236 = 0;
            }
            v235 = dword_140404A6C[3 * dword_140404A6C[v227 + 71359299] + 71179072 + v236];
          }
          dword_140404A6C[v228 + 71408451] = v235;
          ++v226;
          v205 = dword_140404A6C[71179071];
          v227 += 3;
          v228 += 6;
        }
        while ( v226 < (int)dword_140404A6C[71179071] );
      }
      v237 = 2310LL * (int)v204;
      v238 = 0;
      dword_140404A6C[71228224] = 0;
      LODWORD(v239) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[83200513] + v1) = 0;
      for ( k = 0; k < 256; ++k )
      {
        v241 = 0;
        LOBYTE(dword_140404A6C[3 * v237 + 83200514 + 3 * (int)v239]) = k;
        dword_140404A6C[3 * v237 + 83200515 + 3 * *(int *)((char *)&dword_140404A6C[83200513] + v1)] = 0;
        dword_140404A6C[3 * v237 + 83200516 + 3 * *(int *)((char *)&dword_140404A6C[83200513] + v1)] = v238;
        if ( v205 > 0 )
        {
          v242 = &dword_140404A6C[71179072];
          v243 = &dword_140404A6C[71277377];
          do
          {
            if ( *v243 == k )
            {
              v244 = (int)(3 * v238);
              *(_QWORD *)&dword_140404A6C[v244 + 71228225] = *(_QWORD *)v242;
              dword_140404A6C[v244 + 71228227] = v242[2];
              v245 = v237 + *(int *)((char *)&dword_140404A6C[83200513] + v1);
              v205 = dword_140404A6C[71179071];
              v238 = ++dword_140404A6C[71228224];
              ++dword_140404A6C[3 * v245 + 83200515];
            }
            ++v241;
            ++v243;
            v242 += 3;
          }
          while ( v241 < v205 );
        }
        v239 = *(int *)((char *)&dword_140404A6C[83200513] + v1);
        if ( (int)dword_140404A6C[3 * v237 + 83200515 + 3 * v239] > 0 )
        {
          LODWORD(v239) = v239 + 1;
          *(unsigned int *)((char *)&dword_140404A6C[83200513] + v1) = v239;
        }
      }
      sub_140193FE0(2, v204, &dword_140404A6C[71228225], (unsigned int)(12 * v205));
      sub_140193FE0(4, v204, &dword_140404A6C[71408449], 24 * dword_140404A6C[71179071]);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v247 ^ v270);
}

