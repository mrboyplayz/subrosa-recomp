/* Address: 0x1400d6b60 | Name: sub_1400D6B60 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1400D6B60(float *a1, float *a2, float *a3, __int64 a4, float *a5, float *a6)
{
  __int64 v8; // rdi
  float v9; // xmm3_4
  float *v10; // rsi
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm2_4
  float v26; // xmm15_4
  float v27; // xmm12_4
  float v28; // xmm13_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm8_4
  float v32; // xmm15_4
  float v33; // xmm14_4
  int v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm15_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm9_4
  float v41; // xmm7_4
  float v42; // xmm5_4
  int v43; // r15d
  int v44; // eax
  float v45; // xmm3_4
  int v46; // r13d
  int v47; // eax
  float v48; // xmm3_4
  float v49; // xmm13_4
  int v50; // r11d
  float v51; // xmm9_4
  bool v52; // cc
  float v53; // xmm9_4
  int v54; // ebx
  int v55; // eax
  float v56; // xmm0_4
  float v57; // xmm14_4
  float v58; // xmm10_4
  int v59; // r10d
  float v60; // xmm7_4
  float v61; // xmm7_4
  float v62; // xmm15_4
  float v63; // xmm12_4
  int v64; // r8d
  __int64 v65; // rcx
  __m128d v66; // xmm2
  double v67; // xmm1_8
  float v68; // xmm1_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  __int64 v71; // r9
  __m128d v72; // xmm2
  double v73; // xmm1_8
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm0_4
  __m128d v78; // xmm2
  double v79; // xmm1_8
  float v80; // xmm2_4
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  signed int v84; // ecx
  int v85; // edx
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // rdx
  unsigned int v89; // eax
  unsigned int v90; // ecx
  __int64 v91; // rax
  int v92; // ecx
  float v93; // xmm0_4
  __int64 v94; // rax
  float v95; // xmm8_4
  float v96; // xmm11_4
  float v97; // xmm9_4
  float *v98; // rdi
  __int64 v99; // r8
  unsigned int *v100; // rsi
  int v101; // r15d
  signed int v102; // eax
  __int64 v103; // rbx
  double v104; // xmm7_8
  float v105; // xmm2_4
  float v106; // xmm1_4
  float v107; // xmm3_4
  float v108; // xmm5_4
  float v109; // xmm6_4
  __int128 v110; // xmm0
  __int64 v111; // rcx
  unsigned int *v112; // rbx
  BOOL v113; // eax
  float v114; // xmm2_4
  int v115; // xmm1_4
  unsigned int v116; // eax
  int v117; // xmm0_4
  int v118; // xmm1_4
  int v119; // xmm0_4
  int v120; // eax
  __int16 v121; // r8
  __int16 v122; // r15
  __int64 v123; // rax
  int v124; // r15d
  unsigned int v125; // xmm1_4
  __int64 v126; // xmm2_8
  float v127; // xmm2_4
  __int64 v128; // xmm2_8
  float v129; // xmm7_4
  float v130; // xmm3_4
  float v131; // xmm2_4
  unsigned int v132; // r11d
  float v133; // xmm6_4
  unsigned int v134; // eax
  float v135; // xmm4_4
  float v136; // xmm0_4
  float v137; // xmm5_4
  float v138; // xmm1_4
  float v139; // xmm4_4
  float v140; // xmm6_4
  float v141; // xmm3_4
  float v142; // xmm1_4
  float v143; // xmm6_4
  float v144; // xmm5_4
  float v145; // xmm2_4
  float v146; // xmm4_4
  float v147; // xmm0_4
  int v148; // edx
  unsigned int v149; // eax
  float v150; // xmm7_4
  float v151; // xmm3_4
  float v152; // xmm2_4
  unsigned int v153; // eax
  unsigned int v154; // r11d
  float v155; // xmm6_4
  float v156; // xmm4_4
  float v157; // xmm0_4
  float v158; // xmm5_4
  float v159; // xmm1_4
  float v160; // xmm4_4
  float v161; // xmm6_4
  float v162; // xmm3_4
  float v163; // xmm1_4
  float v164; // xmm6_4
  float v165; // xmm5_4
  float v166; // xmm2_4
  float v167; // xmm4_4
  float v168; // xmm0_4
  float v169; // xmm7_4
  float v170; // xmm3_4
  float v171; // xmm2_4
  unsigned int v172; // eax
  float v173; // xmm6_4
  float v174; // xmm4_4
  float v175; // xmm0_4
  float v176; // xmm5_4
  float v177; // xmm1_4
  float v178; // xmm4_4
  float v179; // xmm6_4
  float v180; // xmm3_4
  float v181; // xmm1_4
  float v182; // xmm6_4
  float v183; // xmm5_4
  float v184; // xmm2_4
  float v185; // xmm4_4
  float v186; // xmm0_4
  int v187; // edx
  unsigned int v188; // eax
  int v189; // eax
  float v190; // xmm7_4
  float v191; // xmm3_4
  float v192; // xmm2_4
  float v193; // xmm6_4
  float v194; // xmm4_4
  float v195; // xmm0_4
  float v196; // xmm5_4
  float v197; // xmm1_4
  float v198; // xmm4_4
  float v199; // xmm6_4
  float v200; // xmm3_4
  float v201; // xmm1_4
  float v202; // xmm6_4
  float v203; // xmm5_4
  float v204; // xmm2_4
  float v205; // xmm4_4
  float v206; // xmm0_4
  unsigned int v207; // eax
  float v208; // xmm3_4
  float v209; // xmm2_4
  float v210; // xmm6_4
  float v211; // xmm4_4
  float v212; // xmm0_4
  float v213; // xmm5_4
  float v214; // xmm1_4
  float v215; // xmm4_4
  float v216; // xmm6_4
  float v217; // xmm3_4
  float v218; // xmm1_4
  float v219; // xmm6_4
  float v220; // xmm5_4
  float v221; // xmm2_4
  float v222; // xmm4_4
  float v223; // xmm0_4
  unsigned int v224; // eax
  float v225; // xmm3_4
  float v226; // xmm9_4
  float v227; // xmm7_4
  float v228; // xmm4_4
  _BOOL8 v229; // rcx
  float v230; // xmm7_4
  float v231; // xmm4_4
  __int64 v233; // [rsp-20h] [rbp-1B58h] BYREF
  unsigned int v234; // [rsp+20h] [rbp-1B18h]
  unsigned int v235; // [rsp+24h] [rbp-1B14h]
  float v236; // [rsp+28h] [rbp-1B10h] BYREF
  signed int v237; // [rsp+2Ch] [rbp-1B0Ch]
  int v238; // [rsp+30h] [rbp-1B08h]
  float v239; // [rsp+38h] [rbp-1B00h] BYREF
  float v240; // [rsp+3Ch] [rbp-1AFCh]
  float v241; // [rsp+40h] [rbp-1AF8h]
  float v242; // [rsp+48h] [rbp-1AF0h] BYREF
  float v243; // [rsp+4Ch] [rbp-1AECh]
  float v244; // [rsp+50h] [rbp-1AE8h]
  float v245; // [rsp+58h] [rbp-1AE0h]
  float v246; // [rsp+5Ch] [rbp-1ADCh]
  unsigned __int64 v247; // [rsp+1AB8h] [rbp-80h]
  unsigned int v248; // [rsp+1AC0h] [rbp-78h]
  float v249; // [rsp+1AC8h] [rbp-70h] BYREF
  float v250; // [rsp+1ACCh] [rbp-6Ch]
  float v251; // [rsp+1AD0h] [rbp-68h]
  int v252; // [rsp+1AD8h] [rbp-60h]
  __int64 v253; // [rsp+1AE0h] [rbp-58h]
  __int64 v254; // [rsp+1AE8h] [rbp-50h]
  int v255; // [rsp+1AF0h] [rbp-48h]
  unsigned int v256; // [rsp+1AF8h] [rbp-40h] BYREF
  unsigned int v257; // [rsp+1AFCh] [rbp-3Ch]
  unsigned int v258; // [rsp+1B00h] [rbp-38h]
  float *v259; // [rsp+1B08h] [rbp-30h]
  __int64 v260; // [rsp+1B10h] [rbp-28h]
  int v261; // [rsp+1B18h] [rbp-20h]
  int v262; // [rsp+1B1Ch] [rbp-1Ch]
  int v263; // [rsp+1B20h] [rbp-18h]
  int v264; // [rsp+1B24h] [rbp-14h]
  __int64 v265; // [rsp+1B28h] [rbp-10h]
  _DWORD v266[6]; // [rsp+1B30h] [rbp-8h] BYREF
  float v267; // [rsp+1B48h] [rbp+10h]
  unsigned int v268; // [rsp+1B58h] [rbp+20h] BYREF
  int v269; // [rsp+1B5Ch] [rbp+24h]
  int v270; // [rsp+1B60h] [rbp+28h]
  float v271; // [rsp+1B68h] [rbp+30h] BYREF
  float v272; // [rsp+1B6Ch] [rbp+34h]
  unsigned __int64 v273; // [rsp+1B70h] [rbp+38h]
  unsigned int v274; // [rsp+1B78h] [rbp+40h]
  float v275; // [rsp+1B7Ch] [rbp+44h]
  float v276; // [rsp+1B80h] [rbp+48h] BYREF
  float v277; // [rsp+1B84h] [rbp+4Ch]
  _DWORD v278[2]; // [rsp+1B88h] [rbp+50h]
  float v279[4]; // [rsp+1B90h] [rbp+58h] BYREF
  __int128 v280; // [rsp+1BA0h] [rbp+68h] BYREF
  __int128 v281; // [rsp+1BB0h] [rbp+78h]
  float v282; // [rsp+1BC0h] [rbp+88h]
  int v283; // [rsp+1BC8h] [rbp+90h]
  int v284; // [rsp+1BCCh] [rbp+94h]
  _DWORD v285[2]; // [rsp+1BD0h] [rbp+98h]
  _BYTE v286[6144]; // [rsp+1BD8h] [rbp+A0h] BYREF
  __int64 v287; // [rsp+33D8h] [rbp+18A0h]

  v8 = 1052016LL * (int)a4;
  v9 = *a5;
  v235 = a4;
  a4 = (int)a4;
  v260 = (int)a4;
  v10 = a3;
  v259 = a3;
  v11 = *(float *)((char *)&dword_140404A6C[111579657] + v8);
  v265 = v8;
  if ( v9 >= v11 || v11 <= *a6 )
  {
    v12 = a5[1];
    v13 = *(float *)((char *)&dword_140404A6C[111579658] + v8);
    if ( v12 >= v13 || v13 <= a6[1] )
    {
      v14 = a5[2];
      v15 = *(float *)((char *)&dword_140404A6C[111579659] + v8);
      if ( v14 >= v15 || v15 <= a6[2] )
      {
        v16 = *(float *)((char *)&dword_140404A6C[111579660] + v8);
        if ( v9 <= v16 || v16 >= *a6 )
        {
          v17 = *(float *)((char *)&dword_140404A6C[111579661] + v8);
          if ( v12 <= v17 || v17 >= a6[1] )
          {
            v18 = *(float *)((char *)&dword_140404A6C[111579662] + v8);
            if ( v14 <= v18 || v18 >= a6[2] )
            {
              *a3 = 1.0;
              v19 = *(float *)((char *)&dword_140404A6C[111579641] + v8);
              v20 = *(float *)((char *)&dword_140404A6C[111579644] + v8);
              v21 = *(float *)((char *)&dword_140404A6C[111579638] + v8);
              v22 = *(float *)((char *)&dword_140404A6C[111579639] + v8);
              v23 = *a5 - v21;
              v24 = *(float *)((char *)&dword_140404A6C[111579649] + v8);
              v25 = a5[1] - v22;
              v26 = *(float *)((char *)&dword_140404A6C[111579645] + v8);
              v27 = *(float *)((char *)&dword_140404A6C[111579640] + v8);
              v28 = *(float *)((char *)&dword_140404A6C[111579643] + v8);
              v29 = a5[2] - v27;
              v30 = *(float *)((char *)&dword_140404A6C[111579647] + v8);
              v31 = *(float *)((char *)&dword_140404A6C[111579646] + v8);
              v245 = *(float *)((char *)&dword_140404A6C[111579642] + v8);
              v246 = v26;
              v32 = (float)(v26 * v25) + (float)(v20 * v23);
              LODWORD(v247) = *(unsigned int *)((char *)&dword_140404A6C[111579648] + v8);
              v33 = (float)((float)(v245 * v25) + (float)(v19 * v23)) + (float)(v28 * v29);
              *(float *)&v34 = *(float *)&v247 * v25;
              v35 = *a6 - v21;
              v252 = v34;
              v36 = v32 + (float)(v31 * v29);
              v37 = (float)(*(float *)&v34 + (float)(v30 * v23)) + (float)(v24 * v29);
              v38 = a6[2] - v27;
              v250 = a6[1] - v22;
              v276 = v33;
              v39 = (float)(v245 * v250) + (float)(v19 * v35);
              v277 = v36;
              *(float *)v278 = v37;
              v249 = v35;
              v40 = (float)((float)(v246 * v250) + (float)(v20 * v35)) + (float)(v31 * v38);
              v251 = v38;
              v279[0] = v39 + (float)(v28 * v38);
              v41 = (float)((float)(*(float *)&v247 * v250) + (float)(v30 * v35)) + (float)(v24 * v38);
              v42 = *(float *)((char *)&dword_140404A6C[111579654] + v8);
              v279[1] = v40;
              v279[2] = v41;
              v43 = (int)(float)(v33 * v42);
              v44 = -1;
              v268 = v43;
              v45 = (float)(v279[0] - v33) * v42;
              v252 = (int)(float)(v42 * v279[0]);
              v46 = (int)(float)(v36 * v42);
              if ( v45 > 0.0 )
                v44 = 1;
              v283 = v44;
              v47 = 1;
              v48 = fabs(v45);
              v269 = (int)(float)(v36 * v42);
              v245 = v48;
              v49 = v48;
              v271 = v48;
              v50 = (int)(float)(v40 * v42);
              v51 = (float)(v40 - v36) * v42;
              v261 = v50;
              v52 = v51 <= 0.0;
              v53 = fabs(v51);
              *((float *)&v247 + 1) = v48;
              v54 = (int)(float)(v37 * v42);
              if ( v52 )
                v47 = -1;
              v262 = v47;
              v284 = v47;
              v55 = 1;
              *((float *)&v273 + 1) = v48;
              v56 = v41 * v42;
              v270 = (int)(float)(v37 * v42);
              v246 = v53;
              v57 = v53;
              v272 = v53;
              v58 = v53;
              v59 = (int)(float)(v41 * v42);
              v60 = (float)(v41 - v37) * v42;
              v264 = (int)v56;
              *(float *)&v274 = v53;
              v52 = v60 <= 0.0;
              v61 = fabs(v60);
              *(float *)&v247 = v61;
              v62 = v61;
              if ( v52 )
                v55 = -1;
              *(float *)&v273 = v61;
              v263 = v55;
              v63 = v61;
              v285[0] = v55;
              v275 = v61;
              if ( v43 == (int)(float)(v42 * v279[0]) && v46 == v50 && v54 == v59 )
              {
                v255 = 0;
LABEL_57:
                v85 = 0;
                v238 = 0;
                while ( v43 < 0
                     || v43 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579650] + v8) << 6)
                     || v46 < 0
                     || v46 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579651] + v8) << 6)
                     || v54 < 0 )
                {
LABEL_129:
                  if ( v43 == v252 && v46 == v50 && v54 == v59 )
                    return MEMORY[0x1401F8B20]((unsigned __int64)&v233 ^ v287);
                  v225 = v245;
                  v226 = v246;
                  v227 = *(float *)&v247;
                  v228 = *((float *)&v247 + 1);
                  v229 = v245 >= v246;
                  if ( *(float *)&v247 <= *((float *)&v247 + 1) || v229 )
                  {
                    if ( v57 <= v62 )
                    {
                      v46 += v262;
                      v269 = v46;
                      v57 = v57 + v63;
                      v62 = v62 - v63;
                      v245 = v245 - v49;
                      v246 = v246 + v49;
                      goto LABEL_139;
                    }
                    v230 = *(float *)&v247 + v49;
                    v270 = v263 + v54;
                    v231 = *((float *)&v247 + 1) - v49;
                    v57 = v57 - v58;
                    v62 = v62 + v58;
                  }
                  else
                  {
                    *(&v268 + v229) += *(&v283 + v229);
                    v46 = v269;
                    v43 = v268;
                    v230 = v227 - v63;
                    v231 = v228 + v63;
                    v245 = v225 + v58;
                    v246 = v226 - v58;
                  }
                  v247 = __PAIR64__(LODWORD(v231), LODWORD(v230));
LABEL_139:
                  v238 = ++v85;
                  if ( v85 > v255 )
                    return MEMORY[0x1401F8B20]((unsigned __int64)&v233 ^ v287);
                  v54 = v270;
                  a4 = v260;
                }
                if ( v54 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579652] + v8) << 6)
                  || (v86 = *(int *)(*(_QWORD *)((char *)&dword_140404A6C[111579655] + v8)
                                   + 4LL
                                   * (int)((v43 >> 6)
                                         + *(unsigned int *)((char *)&dword_140404A6C[111579650] + v8)
                                         * ((v54 >> 6)
                                          + *(unsigned int *)((char *)&dword_140404A6C[111579652] + v8) * (v46 >> 6)))),
                      (_DWORD)v86 == -1)
                  || (v87 = (int)dword_140404A6C[263004 * a4
                                               + 111579985
                                               + 513 * v86
                                               + 64 * ((v46 >> 3) & 7)
                                               + 8 * ((v54 >> 3) & 7)
                                               + ((v43 >> 3) & 7)],
                      (_DWORD)v87 == -1) )
                {
LABEL_128:
                  v85 = v238;
                  goto LABEL_129;
                }
                v236 = 1.0;
                v88 = 6930 * v87 + (v43 & 7) + 8 * ((v54 & 7) + 8 * (v46 & 7u));
                v254 = v88;
                v89 = dword_140404A6C[v88 + 83199479];
                if ( v89 )
                {
                  v90 = dword_140404A6C[v88 + 83199479];
                  v91 = v89 & 0x3FF;
                  v248 = v91;
                  v92 = HIBYTE(v90) & 3;
                  v237 = 0;
                  v234 = v92;
                  v93 = *(float *)((char *)&dword_140404A6C[111579653] + v8);
                  v94 = 948 * v91;
                  v253 = v94 * 4;
                  v95 = (float)((float)v43 + 0.5) * v93;
                  v96 = (float)v46 * v93;
                  v97 = (float)((float)v54 + 0.5) * v93;
                  if ( (int)dword_140404A6C[v94 + 272299416] > 0 )
                  {
                    v98 = v259;
                    v99 = v253;
                    v100 = &dword_140404A6C[v94 + 272299442];
                    v101 = 1;
                    v102 = v237;
                    while ( 1 )
                    {
                      if ( (v101 & dword_140404A6C[v88 + 83199991]) == 0 )
                      {
                        v103 = (int)*(v100 - 9);
                        v280 = xmmword_140278D30;
                        v282 = 1.0;
                        v281 = xmmword_140278D30;
                        v104 = (float)v92 * 1.570796326795;
                        sub_14007B2A0((__int64)&v280, (float *)&dword_1402F6188, v104);
                        v105 = (float)((float)((float)(*((float *)v100 - 8) * *(float *)&v280) + v95)
                                     + (float)(*((float *)v100 - 7) * *((float *)&v280 + 3)))
                             + (float)(*((float *)v100 - 6) * *((float *)&v281 + 2));
                        v106 = *((float *)v100 - 6) * *((float *)&v281 + 3);
                        v107 = (float)((float)(*((float *)v100 - 8) * *((float *)&v280 + 1)) + v96)
                             + (float)(*((float *)v100 - 7) * *(float *)&v281);
                        v108 = *((float *)v100 - 6) * v282;
                        v109 = (float)((float)(*((float *)v100 - 8) * *((float *)&v280 + 2)) + v97)
                             + (float)(*((float *)v100 - 7) * *((float *)&v281 + 1));
                        v280 = *(_OWORD *)(v100 - 5);
                        v110 = *(_OWORD *)(v100 - 1);
                        v271 = v105;
                        v281 = v110;
                        v282 = *((float *)v100 + 3);
                        v272 = v107 + v106;
                        *(float *)&v273 = v109 + v108;
                        sub_14007B2A0((__int64)&v280, (float *)&dword_1402F6188, v104);
                        v111 = 1268 * v103;
                        if ( !*(_QWORD *)&dword_140404A6C[1268 * v103 + 278522249] )
                        {
                          v54 = v270;
                          v92 = v234;
                          v88 = v254;
                          v99 = v253;
LABEL_75:
                          v102 = v237;
                          goto LABEL_76;
                        }
                        v112 = &dword_140404A6C[v111 + 278522247];
                        sub_14011BF40((__int64)v286, (__int64)&dword_140404A6C[v111 + 278522247], &v271, (float *)&v280);
                        v113 = sub_1400DA960((__int64)v266, (__int64)v112, (__int64)v286, &v276, v279);
                        v54 = v270;
                        v92 = v234;
                        v88 = v254;
                        v99 = v253;
                        if ( !v113 )
                          goto LABEL_75;
                        v114 = v267;
                        if ( v267 >= *v98 )
                          goto LABEL_75;
                        v115 = v266[1];
                        v116 = v235;
                        *a1 = *(float *)v266;
                        v117 = v266[2];
                        *((_DWORD *)a1 + 1) = v115;
                        v118 = v266[3];
                        *((_DWORD *)a1 + 2) = v117;
                        v119 = v266[4];
                        *(_DWORD *)a2 = v118;
                        a2[2] = *(float *)&v266[5];
                        *((_DWORD *)a2 + 1) = v119;
                        dword_140404A6C[73007002] = v116;
                        dword_140404A6C[73007003] = v268;
                        dword_140404A6C[73007013] = v248;
                        v102 = v237;
                        dword_140404A6C[73007015] = v237;
                        dword_140404A6C[73007009] = 0;
                        dword_140404A6C[73007004] = v46;
                        dword_140404A6C[73007005] = v54;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007014] = v92;
                        *v98 = v114;
                      }
LABEL_76:
                      ++v102;
                      v101 = __ROL4__(v101, 1);
                      v100 += 29;
                      v237 = v102;
                      if ( v102 >= *(int *)((char *)&dword_140404A6C[272299416] + v99) )
                      {
                        v8 = v265;
                        v10 = v259;
                        break;
                      }
                    }
                  }
                }
                v120 = dword_140404A6C[v88 + 83198967];
                v121 = v120;
                v122 = v120;
                if ( v120 <= 0 )
                {
                  v43 = v268;
                  v132 = v235;
                  goto LABEL_99;
                }
                v123 = v120 & 0x7F;
                v124 = v122 & 0xC00;
                v234 = v123;
                v125 = dword_140404A6C[2310 * v123 + 432533577];
                v249 = *(float *)&dword_140404A6C[2310 * v123 + 432533576];
                v251 = *(float *)&dword_140404A6C[2310 * v123 + 432533578];
                v250 = *(float *)&v125;
                if ( (v121 & 0xC00) == 0x400 )
                {
                  v126 = 1070141403;
                }
                else if ( v124 == 2048 )
                {
                  v126 = 1078530011;
                }
                else
                {
                  if ( v124 != 3072 )
                    goto LABEL_86;
                  v126 = 1083624420;
                }
                sub_14007B4D0(&v249, (float *)&dword_1402F6188, *(double *)&v126);
LABEL_86:
                v127 = *(float *)((char *)&dword_140404A6C[111579653] + v8);
                v282 = 1.0;
                v249 = v249 + (float)((float)((float)(int)v268 + 0.5) * v127);
                v250 = v250 + (float)((float)v46 * v127);
                v251 = v251 + (float)((float)((float)v54 + 0.5) * v127);
                v280 = xmmword_140278D30;
                v281 = xmmword_140278D30;
                switch ( v124 )
                {
                  case 1024:
                    v128 = 1070141403;
                    break;
                  case 2048:
                    v128 = 1078530011;
                    break;
                  case 3072:
                    v128 = 1083624420;
                    break;
                  default:
                    goto LABEL_93;
                }
                sub_14007B2A0((__int64)&v280, (float *)&dword_1402F6188, *(double *)&v128);
LABEL_93:
                if ( (unsigned int)sub_1400D97A0(&v239, &v242, &v236, v234, &v249, (float *)&v280, &v276, v279)
                  && (v129 = v236, v236 < *v10) )
                {
                  v130 = v239;
                  v131 = v241;
                  v132 = v235;
                  v43 = v268;
                  v133 = v240;
                  v134 = v234;
                  v135 = v240;
                  v136 = v239;
                  v137 = (float)((float)(v240 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                               + (float)(v239 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                       + (float)(v241 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                  v138 = v241;
                  *a1 = v137;
                  v139 = (float)((float)(v135 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                               + (float)(v136 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                       + (float)(v138 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                  a1[1] = v139;
                  v140 = (float)(v133 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                       + (float)(v130 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                  v141 = v244;
                  v142 = v244;
                  v143 = v140 + (float)(v131 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                  a1[2] = v143;
                  *a1 = v137 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                  v144 = v243;
                  v145 = v243;
                  a1[1] = v139 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                  v146 = v242;
                  v147 = v242;
                  a1[2] = v143 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                  *a2 = (float)((float)(v145 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                              + (float)(v147 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                      + (float)(v142 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                  a2[1] = (float)((float)(v144 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                + (float)(v146 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                        + (float)(v141 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                  a2[2] = (float)((float)(v144 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                + (float)(v146 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                        + (float)(v141 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                  dword_140404A6C[73007009] = 0;
                  dword_140404A6C[73007002] = v132;
                  dword_140404A6C[73007003] = v43;
                  dword_140404A6C[73007004] = v46;
                  dword_140404A6C[73007005] = v54;
                  dword_140404A6C[73007012] = v134;
                  dword_140404A6C[73007015] = -1;
                  *v10 = v129;
                }
                else
                {
                  v132 = v235;
                  v43 = v268;
                }
                v88 = v254;
LABEL_99:
                v148 = dword_140404A6C[v88 + 83194359];
                v234 = v148;
                if ( v148 )
                {
                  v149 = v148 & 0xE0000000;
                  if ( (v148 & 0xE0000000) == 0x40000000 )
                  {
                    if ( (unsigned int)sub_1400DC650(
                                         &v239,
                                         (__int64)&v242,
                                         &v236,
                                         &v276,
                                         v279,
                                         (int *)&v268,
                                         v148,
                                         *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v150 = v236;
                      if ( v236 < *v10 )
                      {
LABEL_103:
                        v151 = v239;
                        v152 = v241;
                        v153 = v234;
                        v154 = v235;
                        v155 = v240;
                        v156 = v240;
                        v157 = v239;
                        v158 = (float)((float)(v240 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                     + (float)(v239 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                             + (float)(v241 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        v159 = v241;
                        *a1 = v158;
                        v160 = (float)((float)(v156 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                     + (float)(v157 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                             + (float)(v159 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a1[1] = v160;
                        v161 = (float)(v155 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                             + (float)(v151 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                        v162 = v244;
                        v163 = v244;
                        v164 = v161 + (float)(v152 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        a1[2] = v164;
                        *a1 = v158 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                        v165 = v243;
                        v166 = v243;
                        a1[1] = v160 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                        v167 = v242;
                        v168 = v242;
                        a1[2] = v164 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                        *a2 = (float)((float)(v166 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                    + (float)(v168 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                            + (float)(v163 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        a2[1] = (float)((float)(v165 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                      + (float)(v167 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                              + (float)(v162 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a2[2] = (float)((float)(v165 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                      + (float)(v167 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                              + (float)(v162 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        dword_140404A6C[73007009] = v153;
                        dword_140404A6C[73007002] = v154;
                        dword_140404A6C[73007003] = v43;
                        dword_140404A6C[73007004] = v46;
                        dword_140404A6C[73007005] = v54;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007015] = -1;
                        *v10 = v150;
                        goto LABEL_113;
                      }
                    }
                  }
                  else if ( v149 == 0x80000000 )
                  {
                    if ( sub_1400DE770(
                           &v239,
                           &v242,
                           &v236,
                           &v276,
                           v279,
                           (__int64)&v268,
                           *(float *)&v148,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v150 = v236;
                      if ( v236 < *v10 )
                        goto LABEL_103;
                    }
                  }
                  else if ( v149 == -1073741824 )
                  {
                    v234 = v43 - (unsigned __int8)v148;
                    v256 = v234;
                    LODWORD(v253) = v54 - BYTE1(v148);
                    v258 = v253;
                    v237 = v46 - BYTE2(v148);
                    v257 = v237;
                    v248 = sub_1400129D0(v132, v234, v237, v253);
                    if ( sub_1400DE770(
                           &v239,
                           &v242,
                           &v236,
                           &v276,
                           v279,
                           (__int64)&v256,
                           *(float *)&v248,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v169 = v236;
                      if ( v236 < *v10 )
                      {
                        v170 = v239;
                        v171 = v241;
                        v172 = v248;
                        v154 = v235;
                        v173 = v240;
                        v174 = v240;
                        v175 = v239;
                        v176 = (float)((float)(v240 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                     + (float)(v239 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                             + (float)(v241 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        v177 = v241;
                        *a1 = v176;
                        v178 = (float)((float)(v174 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                     + (float)(v175 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                             + (float)(v177 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a1[1] = v178;
                        v179 = (float)(v173 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                             + (float)(v170 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                        v180 = v244;
                        v181 = v244;
                        v182 = v179 + (float)(v171 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        a1[2] = v182;
                        *a1 = v176 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                        v183 = v243;
                        v184 = v243;
                        a1[1] = v178 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                        v185 = v242;
                        v186 = v242;
                        a1[2] = v182 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                        *a2 = (float)((float)(v184 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                    + (float)(v186 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                            + (float)(v181 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        a2[1] = (float)((float)(v183 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                      + (float)(v185 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                              + (float)(v180 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a2[2] = (float)((float)(v183 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                      + (float)(v185 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                              + (float)(v180 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        dword_140404A6C[73007009] = v172;
                        dword_140404A6C[73007003] = v234;
                        dword_140404A6C[73007004] = v237;
                        dword_140404A6C[73007005] = v253;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007015] = -1;
                        dword_140404A6C[73007002] = v154;
                        *v10 = v169;
                        goto LABEL_113;
                      }
                    }
                  }
                }
                v154 = v235;
LABEL_113:
                v187 = dword_140404A6C[v254 + 83197431];
                v234 = v187;
                if ( !v187 )
                {
LABEL_126:
                  if ( *v10 < 1.0 )
                    return MEMORY[0x1401F8B20]((unsigned __int64)&v233 ^ v287);
                  v59 = v264;
                  v50 = v261;
                  goto LABEL_128;
                }
                v188 = v187 & 0xE0000000;
                if ( (v187 & 0xE0000000) == 0x40000000 )
                {
                  v189 = sub_1400DC650(
                           &v239,
                           (__int64)&v242,
                           &v236,
                           &v276,
                           v279,
                           (int *)&v268,
                           v187,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8));
                }
                else
                {
                  if ( v188 != 0x80000000 )
                  {
                    if ( v188 != -1073741824 )
                      goto LABEL_126;
                    v248 = v43 - (unsigned __int8)v187;
                    v256 = v248;
                    v237 = v54 - BYTE1(v187);
                    v258 = v237;
                    v234 = v46 - BYTE2(v187);
                    v257 = v234;
                    LODWORD(v253) = sub_140016450(v154, v248, v234, v237);
                    if ( !sub_1400DE770(
                            &v239,
                            &v242,
                            &v236,
                            &v276,
                            v279,
                            (__int64)&v256,
                            *(float *)&v253,
                            *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                      goto LABEL_126;
                    v190 = v236;
                    if ( v236 >= *v10 )
                      goto LABEL_126;
                    v208 = v239;
                    v209 = v241;
                    v210 = v240;
                    v211 = v240;
                    v212 = v239;
                    v213 = (float)((float)(v240 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                 + (float)(v239 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                         + (float)(v241 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                    v214 = v241;
                    *a1 = v213;
                    v215 = (float)((float)(v211 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                 + (float)(v212 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                         + (float)(v214 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                    a1[1] = v215;
                    v216 = (float)(v210 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                         + (float)(v208 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                    v217 = v244;
                    v218 = v244;
                    v219 = v216 + (float)(v209 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                    a1[2] = v219;
                    *a1 = v213 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                    v220 = v243;
                    v221 = v243;
                    a1[1] = v215 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                    v222 = v242;
                    v223 = v242;
                    a1[2] = v219 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                    *a2 = (float)((float)(v221 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                + (float)(v223 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                        + (float)(v218 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                    a2[1] = (float)((float)(v220 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                  + (float)(v222 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                          + (float)(v217 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                    v224 = v253;
                    a2[2] = (float)((float)(v220 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                  + (float)(v222 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                          + (float)(v217 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                    dword_140404A6C[73007009] = v224;
                    dword_140404A6C[73007002] = v235;
                    dword_140404A6C[73007003] = v248;
                    dword_140404A6C[73007004] = v234;
                    dword_140404A6C[73007005] = v237;
LABEL_125:
                    dword_140404A6C[73007012] = -1;
                    dword_140404A6C[73007015] = -1;
                    *v10 = v190;
                    goto LABEL_126;
                  }
                  v189 = sub_1400DE770(
                           &v239,
                           &v242,
                           &v236,
                           &v276,
                           v279,
                           (__int64)&v268,
                           *(float *)&v187,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8));
                }
                if ( !v189 )
                  goto LABEL_126;
                v190 = v236;
                if ( v236 >= *v10 )
                  goto LABEL_126;
                v191 = v239;
                v192 = v241;
                v193 = v240;
                v194 = v240;
                v195 = v239;
                v196 = (float)((float)(v240 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                             + (float)(v239 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                     + (float)(v241 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                v197 = v241;
                *a1 = v196;
                v198 = (float)((float)(v194 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                             + (float)(v195 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                     + (float)(v197 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                a1[1] = v198;
                v199 = (float)(v193 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                     + (float)(v191 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                v200 = v244;
                v201 = v244;
                v202 = v199 + (float)(v192 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                a1[2] = v202;
                *a1 = v196 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                v203 = v243;
                v204 = v243;
                a1[1] = v198 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                v205 = v242;
                v206 = v242;
                a1[2] = v202 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                *a2 = (float)((float)(v204 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                            + (float)(v206 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                    + (float)(v201 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                a2[1] = (float)((float)(v203 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                              + (float)(v205 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                      + (float)(v200 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                v207 = v234;
                a2[2] = (float)((float)(v203 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                              + (float)(v205 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                      + (float)(v200 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                dword_140404A6C[73007009] = v207;
                dword_140404A6C[73007002] = v235;
                dword_140404A6C[73007003] = v43;
                dword_140404A6C[73007004] = v46;
                dword_140404A6C[73007005] = v54;
                goto LABEL_125;
              }
              v64 = 0;
              v65 = 0;
              do
              {
                v66 = 0;
                v66.m128d_f64[0] = (float)(v42 * *(&v276 + v65));
                v67 = v66.m128d_f64[0];
                if ( (double)(int)v66.m128d_f64[0] != v66.m128d_f64[0] )
                  v67 = (double)((int)v66.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v66, v66)) & 1));
                v68 = v66.m128d_f64[0] - (v67 + 0.5);
                if ( *(&v283 + v65) > 0 )
                  v68 = -v68;
                v69 = v68 + v68;
                if ( v65 )
                {
                  *(&v271 + v65) = (float)(v69 * v48) - *(&v271 + v65);
                  if ( v65 == 2 )
                    v70 = v53;
                  else
                    v70 = v61;
                }
                else
                {
                  v271 = (float)(v69 * v53) - v271;
                  v70 = v61;
                }
                v71 = v65 + 3;
                v72 = 0;
                v72.m128d_f64[0] = (float)(v42 * *(float *)&v278[v65 - 1]);
                *(&v271 + v65 + 3) = (float)(v69 * v70) - *(&v271 + v65 + 3);
                v73 = v72.m128d_f64[0];
                if ( (double)(int)v72.m128d_f64[0] != v72.m128d_f64[0] )
                  v73 = (double)((int)v72.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v72, v72)) & 1));
                v74 = v72.m128d_f64[0] - (v73 + 0.5);
                if ( v285[v65 - 1] > 0 )
                  v74 = -v74;
                v75 = v74 + v74;
                if ( v64 == -1 )
                  v76 = v53;
                else
                  v76 = v48;
                *(&v272 + v65) = (float)(v75 * v76) - *(&v272 + v65);
                if ( v64 == 1 )
                  v77 = v53;
                else
                  v77 = v61;
                v78 = 0;
                v78.m128d_f64[0] = (float)(v42 * *(float *)&v278[v65]);
                *((float *)&v274 + v65) = (float)(v75 * v77) - *((float *)&v274 + v65);
                v79 = v78.m128d_f64[0];
                if ( (double)(int)v78.m128d_f64[0] != v78.m128d_f64[0] )
                  v79 = (double)((int)v78.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v78, v78)) & 1));
                v80 = v78.m128d_f64[0] - (v79 + 0.5);
                if ( (int)v285[v65] > 0 )
                  v80 = -v80;
                v81 = v80 + v80;
                if ( v64 == -2 )
                  v82 = v53;
                else
                  v82 = v48;
                *((float *)&v273 + v65) = (float)(v81 * v82) - *((float *)&v273 + v65);
                if ( v64 )
                  v83 = v61;
                else
                  v83 = v53;
                v64 += 3;
                *(&v275 + v65) = (float)(v83 * v81) - *(&v275 + v65);
                v65 += 3;
              }
              while ( v71 < 3 );
              v10 = v259;
              v84 = abs32(v50 - v46) + abs32(v59 - v54) + abs32(v252 - v43);
              v255 = 0x4000;
              if ( v84 > 0x4000 || (v255 = v84, v84 >= 0) )
              {
                a4 = v260;
                v238 = LODWORD(v275);
                v234 = v274;
                v246 = v272;
                v62 = v275;
                v245 = v271;
                v57 = *(float *)&v274;
                v247 = v273;
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v233 ^ v287);
}

