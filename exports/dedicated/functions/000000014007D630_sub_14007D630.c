/* Address: 0x14007d630 | Name: sub_14007D630 | Size: 7207 bytes */
__int64 __fastcall sub_14007D630(float *a1, float *a2, float *a3, __int64 a4, float *a5, float *a6)
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
  int v89; // eax
  unsigned int v90; // ecx
  __int64 v91; // rax
  float v92; // xmm0_4
  __int64 v93; // rax
  float v94; // xmm8_4
  float v95; // xmm11_4
  float v96; // xmm9_4
  float *v97; // rdi
  __int64 v98; // r8
  float *v99; // rsi
  int v100; // r15d
  signed int v101; // eax
  __int64 v102; // rbx
  float v103; // xmm2_4
  float v104; // xmm1_4
  float v105; // xmm3_4
  float v106; // xmm5_4
  float v107; // xmm6_4
  __int128 v108; // xmm0
  __int64 v109; // r8
  __int64 v110; // rcx
  int *v111; // rbx
  int v112; // eax
  float v113; // xmm2_4
  int v114; // xmm1_4
  int v115; // xmm0_4
  int v116; // xmm1_4
  int v117; // xmm0_4
  int v118; // eax
  __int16 v119; // r15
  __int64 v120; // rax
  int v121; // r15d
  __int64 v122; // r8
  float v123; // xmm1_4
  float v124; // xmm2_4
  float v125; // xmm7_4
  float v126; // xmm3_4
  float v127; // xmm2_4
  unsigned int v128; // r11d
  float v129; // xmm6_4
  float v130; // xmm4_4
  float v131; // xmm0_4
  float v132; // xmm5_4
  float v133; // xmm1_4
  float v134; // xmm4_4
  float v135; // xmm6_4
  float v136; // xmm3_4
  float v137; // xmm1_4
  float v138; // xmm6_4
  float v139; // xmm5_4
  float v140; // xmm2_4
  float v141; // xmm4_4
  float v142; // xmm0_4
  int v143; // edx
  unsigned int v144; // eax
  float v145; // xmm7_4
  float v146; // xmm3_4
  float v147; // xmm2_4
  unsigned int v148; // r11d
  float v149; // xmm6_4
  float v150; // xmm4_4
  float v151; // xmm0_4
  float v152; // xmm5_4
  float v153; // xmm1_4
  float v154; // xmm4_4
  float v155; // xmm6_4
  float v156; // xmm3_4
  float v157; // xmm1_4
  float v158; // xmm6_4
  float v159; // xmm5_4
  float v160; // xmm2_4
  float v161; // xmm4_4
  float v162; // xmm0_4
  float v163; // xmm7_4
  float v164; // xmm3_4
  float v165; // xmm2_4
  int v166; // eax
  float v167; // xmm6_4
  float v168; // xmm4_4
  float v169; // xmm0_4
  float v170; // xmm5_4
  float v171; // xmm1_4
  float v172; // xmm4_4
  float v173; // xmm6_4
  float v174; // xmm3_4
  float v175; // xmm1_4
  float v176; // xmm6_4
  float v177; // xmm5_4
  float v178; // xmm2_4
  float v179; // xmm4_4
  float v180; // xmm0_4
  int v181; // edx
  unsigned int v182; // eax
  int v183; // eax
  float v184; // xmm7_4
  float v185; // xmm3_4
  float v186; // xmm2_4
  float v187; // xmm6_4
  float v188; // xmm4_4
  float v189; // xmm0_4
  float v190; // xmm5_4
  float v191; // xmm1_4
  float v192; // xmm4_4
  float v193; // xmm6_4
  float v194; // xmm3_4
  float v195; // xmm1_4
  float v196; // xmm6_4
  float v197; // xmm5_4
  float v198; // xmm2_4
  float v199; // xmm4_4
  float v200; // xmm0_4
  float v201; // xmm3_4
  float v202; // xmm2_4
  float v203; // xmm6_4
  float v204; // xmm4_4
  float v205; // xmm0_4
  float v206; // xmm5_4
  float v207; // xmm1_4
  float v208; // xmm4_4
  float v209; // xmm6_4
  float v210; // xmm3_4
  float v211; // xmm1_4
  float v212; // xmm6_4
  float v213; // xmm5_4
  float v214; // xmm2_4
  float v215; // xmm4_4
  float v216; // xmm0_4
  int v217; // eax
  float v218; // xmm3_4
  float v219; // xmm9_4
  float v220; // xmm7_4
  float v221; // xmm4_4
  _BOOL8 v222; // rcx
  float v223; // xmm7_4
  float v224; // xmm4_4
  int v226; // [rsp+40h] [rbp-C0h]
  int v227; // [rsp+40h] [rbp-C0h]
  int v228; // [rsp+40h] [rbp-C0h]
  unsigned int v229; // [rsp+40h] [rbp-C0h]
  int v230; // [rsp+40h] [rbp-C0h]
  unsigned int v231; // [rsp+40h] [rbp-C0h]
  int v232; // [rsp+44h] [rbp-BCh]
  float v233; // [rsp+48h] [rbp-B8h] BYREF
  signed int v234; // [rsp+4Ch] [rbp-B4h]
  int v235; // [rsp+50h] [rbp-B0h]
  float v236; // [rsp+58h] [rbp-A8h] BYREF
  float v237; // [rsp+5Ch] [rbp-A4h]
  float v238; // [rsp+60h] [rbp-A0h]
  float v239; // [rsp+68h] [rbp-98h] BYREF
  float v240; // [rsp+6Ch] [rbp-94h]
  float v241; // [rsp+70h] [rbp-90h]
  float v242; // [rsp+78h] [rbp-88h]
  float v243; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v244; // [rsp+80h] [rbp-80h]
  int v245; // [rsp+88h] [rbp-78h]
  float v246; // [rsp+90h] [rbp-70h] BYREF
  float v247; // [rsp+94h] [rbp-6Ch]
  float v248; // [rsp+98h] [rbp-68h]
  int v249; // [rsp+A0h] [rbp-60h]
  __int64 v250; // [rsp+A8h] [rbp-58h]
  __int64 v251; // [rsp+B0h] [rbp-50h]
  int v252; // [rsp+B8h] [rbp-48h]
  unsigned int v253; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v254; // [rsp+C4h] [rbp-3Ch]
  unsigned int v255; // [rsp+C8h] [rbp-38h]
  float *v256; // [rsp+D0h] [rbp-30h]
  __int64 v257; // [rsp+D8h] [rbp-28h]
  int v258; // [rsp+E0h] [rbp-20h]
  int v259; // [rsp+E4h] [rbp-1Ch]
  int v260; // [rsp+E8h] [rbp-18h]
  int v261; // [rsp+ECh] [rbp-14h]
  __int64 v262; // [rsp+F0h] [rbp-10h]
  _DWORD v263[6]; // [rsp+F8h] [rbp-8h] BYREF
  float v264; // [rsp+110h] [rbp+10h]
  int v265; // [rsp+120h] [rbp+20h] BYREF
  int v266; // [rsp+124h] [rbp+24h]
  int v267; // [rsp+128h] [rbp+28h]
  float v268; // [rsp+130h] [rbp+30h] BYREF
  float v269; // [rsp+134h] [rbp+34h]
  unsigned __int64 v270; // [rsp+138h] [rbp+38h]
  float v271; // [rsp+140h] [rbp+40h]
  float v272; // [rsp+144h] [rbp+44h]
  float v273; // [rsp+148h] [rbp+48h] BYREF
  float v274; // [rsp+14Ch] [rbp+4Ch]
  _DWORD v275[2]; // [rsp+150h] [rbp+50h]
  float v276[4]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v277; // [rsp+168h] [rbp+68h] BYREF
  __int128 v278; // [rsp+178h] [rbp+78h]
  float v279; // [rsp+188h] [rbp+88h]
  int v280; // [rsp+190h] [rbp+90h]
  int v281; // [rsp+194h] [rbp+94h]
  _DWORD v282[2]; // [rsp+198h] [rbp+98h]
  _BYTE v283[6144]; // [rsp+1A0h] [rbp+A0h] BYREF

  v8 = 1052016LL * (int)a4;
  v9 = *a5;
  v232 = a4;
  a4 = (int)a4;
  v257 = (int)a4;
  v10 = a3;
  v256 = a3;
  v11 = *(float *)((char *)&unk_16CDE9EF0 + v8);
  v262 = v8;
  if ( v9 >= v11 || v11 <= *a6 )
  {
    v12 = a5[1];
    v13 = *(float *)((char *)&unk_16CDE9EF4 + v8);
    if ( v12 >= v13 || v13 <= a6[1] )
    {
      v14 = a5[2];
      v15 = *(float *)((char *)&unk_16CDE9EF8 + v8);
      if ( v14 >= v15 || v15 <= a6[2] )
      {
        v16 = *(float *)((char *)&unk_16CDE9EFC + v8);
        if ( v9 <= v16 || v16 >= *a6 )
        {
          v17 = *(float *)((char *)&unk_16CDE9F00 + v8);
          if ( v12 <= v17 || v17 >= a6[1] )
          {
            v18 = *(float *)((char *)&unk_16CDE9F04 + v8);
            if ( v14 <= v18 || v18 >= a6[2] )
            {
              *a3 = 1.0;
              v19 = *(float *)((char *)&unk_16CDE9EB0 + v8);
              v20 = *(float *)((char *)&unk_16CDE9EBC + v8);
              v21 = *(float *)((char *)dword_16CDE9EA4 + v8);
              v22 = *(float *)((char *)dword_16CDE9EA8 + v8);
              v23 = *a5 - v21;
              v24 = *(float *)((char *)&unk_16CDE9ED0 + v8);
              v25 = a5[1] - v22;
              v26 = *(float *)((char *)&unk_16CDE9EC0 + v8);
              v27 = *(float *)((char *)dword_16CDE9EAC + v8);
              v28 = *(float *)((char *)&unk_16CDE9EB8 + v8);
              v29 = a5[2] - v27;
              v30 = *(float *)((char *)&unk_16CDE9EC8 + v8);
              v31 = *(float *)((char *)&unk_16CDE9EC4 + v8);
              v242 = *(float *)((char *)&unk_16CDE9EB4 + v8);
              v243 = v26;
              v32 = (float)(v26 * v25) + (float)(v20 * v23);
              LODWORD(v244) = *(_DWORD *)((char *)&unk_16CDE9ECC + v8);
              v33 = (float)((float)(v242 * v25) + (float)(v19 * v23)) + (float)(v28 * v29);
              *(float *)&v34 = *(float *)&v244 * v25;
              v35 = *a6 - v21;
              v249 = v34;
              v36 = v32 + (float)(v31 * v29);
              v37 = (float)(*(float *)&v34 + (float)(v30 * v23)) + (float)(v24 * v29);
              v38 = a6[2] - v27;
              v247 = a6[1] - v22;
              v273 = v33;
              v39 = (float)(v242 * v247) + (float)(v19 * v35);
              v274 = v36;
              *(float *)v275 = v37;
              v246 = v35;
              v40 = (float)((float)(v243 * v247) + (float)(v20 * v35)) + (float)(v31 * v38);
              v248 = v38;
              v276[0] = v39 + (float)(v28 * v38);
              v41 = (float)((float)(*(float *)&v244 * v247) + (float)(v30 * v35)) + (float)(v24 * v38);
              v42 = *(float *)&algn_16CDE9EE4[v8];
              v276[1] = v40;
              v276[2] = v41;
              v43 = (int)(float)(v33 * v42);
              v44 = -1;
              v265 = v43;
              v45 = (float)(v276[0] - v33) * v42;
              v249 = (int)(float)(v42 * v276[0]);
              v46 = (int)(float)(v36 * v42);
              if ( v45 > 0.0 )
                v44 = 1;
              v280 = v44;
              v47 = 1;
              v48 = fabs(v45);
              v266 = (int)(float)(v36 * v42);
              v242 = v48;
              v49 = v48;
              v268 = v48;
              v50 = (int)(float)(v40 * v42);
              v51 = (float)(v40 - v36) * v42;
              v258 = v50;
              v52 = v51 <= 0.0;
              v53 = fabs(v51);
              *((float *)&v244 + 1) = v48;
              v54 = (int)(float)(v37 * v42);
              if ( v52 )
                v47 = -1;
              v259 = v47;
              v281 = v47;
              v55 = 1;
              *((float *)&v270 + 1) = v48;
              v56 = v41 * v42;
              v267 = (int)(float)(v37 * v42);
              v243 = v53;
              v57 = v53;
              v269 = v53;
              v58 = v53;
              v59 = (int)(float)(v41 * v42);
              v60 = (float)(v41 - v37) * v42;
              v261 = (int)v56;
              v271 = v53;
              v52 = v60 <= 0.0;
              v61 = fabs(v60);
              *(float *)&v244 = v61;
              v62 = v61;
              if ( v52 )
                v55 = -1;
              *(float *)&v270 = v61;
              v260 = v55;
              v63 = v61;
              v282[0] = v55;
              v272 = v61;
              if ( v43 == (int)(float)(v42 * v276[0]) && v46 == v50 && v54 == v59 )
              {
                v252 = 0;
LABEL_57:
                v85 = 0;
                v235 = 0;
                while ( v43 < 0
                     || v43 >= *(int *)((char *)dword_16CDE9ED4 + v8) << 6
                     || v46 < 0
                     || v46 >= *(int *)((char *)dword_16CDE9ED8 + v8) << 6
                     || v54 < 0 )
                {
LABEL_123:
                  if ( v43 == v249 && v46 == v50 && v54 == v59 )
                    return 0;
                  v218 = v242;
                  v219 = v243;
                  v220 = *(float *)&v244;
                  v221 = *((float *)&v244 + 1);
                  v222 = v242 >= v243;
                  if ( *(float *)&v244 <= *((float *)&v244 + 1) || v222 )
                  {
                    if ( v57 <= v62 )
                    {
                      v46 += v259;
                      v266 = v46;
                      v57 = v57 + v63;
                      v62 = v62 - v63;
                      v242 = v242 - v49;
                      v243 = v243 + v49;
                      goto LABEL_133;
                    }
                    v223 = *(float *)&v244 + v49;
                    v267 = v260 + v54;
                    v224 = *((float *)&v244 + 1) - v49;
                    v57 = v57 - v58;
                    v62 = v62 + v58;
                  }
                  else
                  {
                    *(&v265 + v222) += *(&v280 + v222);
                    v46 = v266;
                    v43 = v265;
                    v223 = v220 - v63;
                    v224 = v221 + v63;
                    v242 = v218 + v58;
                    v243 = v219 - v58;
                  }
                  v244 = __PAIR64__(LODWORD(v224), LODWORD(v223));
LABEL_133:
                  v235 = ++v85;
                  if ( v85 > v252 )
                    return 0;
                  v54 = v267;
                  a4 = v257;
                }
                if ( v54 >= *(int *)((char *)dword_16CDE9EDC + v8) << 6
                  || (v86 = *(int *)(*(__int64 *)((char *)qword_16CDE9EE8 + v8)
                                   + 4LL
                                   * ((v43 >> 6)
                                    + *(int *)((char *)dword_16CDE9ED4 + v8)
                                    * ((v54 >> 6) + *(int *)((char *)dword_16CDE9EDC + v8) * (v46 >> 6)))),
                      (_DWORD)v86 == -1)
                  || (v87 = dword_16CDEA410[263004 * a4
                                          + 513 * v86
                                          + 64 * ((v46 >> 3) & 7)
                                          + 8 * ((v54 >> 3) & 7)
                                          + ((v43 >> 3) & 7)],
                      (_DWORD)v87 == -1) )
                {
LABEL_122:
                  v85 = v235;
                  goto LABEL_123;
                }
                v233 = 1.0;
                v88 = 6930 * v87 + (v43 & 7) + 8 * ((v54 & 7) + 8 * (v46 & 7u));
                v251 = v88;
                v89 = dword_1661A6EA8[v88];
                if ( v89 )
                {
                  v90 = dword_1661A6EA8[v88];
                  v91 = v89 & 0x3FF;
                  v245 = v91;
                  v234 = 0;
                  v226 = HIBYTE(v90) & 3;
                  v92 = *(float *)((char *)dword_16CDE9EE0 + v8);
                  v93 = 3792 * v91;
                  v250 = v93;
                  v94 = (float)((float)v43 + 0.5) * v92;
                  v95 = (float)v46 * v92;
                  v96 = (float)((float)v54 + 0.5) * v92;
                  if ( *(int *)((char *)&unk_18E9EA9CC + v93) > 0 )
                  {
                    v97 = v256;
                    v98 = v250;
                    v99 = (float *)((char *)&unk_18E9EAA34 + v93);
                    v100 = 1;
                    v101 = v234;
                    while ( 1 )
                    {
                      if ( (v100 & dword_1661A76A8[v88]) == 0 )
                      {
                        v102 = *((int *)v99 - 9);
                        v277 = xmmword_1400F78B0;
                        v279 = 1.0;
                        v278 = xmmword_1400F78B0;
                        sub_140049C20((__int64)&v277, (float *)&qword_140146A28, v98);
                        v103 = (float)((float)((float)(*(v99 - 8) * *(float *)&v277) + v94)
                                     + (float)(*(v99 - 7) * *((float *)&v277 + 3)))
                             + (float)(*(v99 - 6) * *((float *)&v278 + 2));
                        v104 = *(v99 - 6) * *((float *)&v278 + 3);
                        v105 = (float)((float)(*(v99 - 8) * *((float *)&v277 + 1)) + v95)
                             + (float)(*(v99 - 7) * *(float *)&v278);
                        v106 = *(v99 - 6) * v279;
                        v107 = (float)((float)(*(v99 - 8) * *((float *)&v277 + 2)) + v96)
                             + (float)(*(v99 - 7) * *((float *)&v278 + 1));
                        v277 = *(_OWORD *)(v99 - 5);
                        v108 = *(_OWORD *)(v99 - 1);
                        v268 = v103;
                        v278 = v108;
                        v279 = v99[3];
                        v269 = v105 + v104;
                        *(float *)&v270 = v107 + v106;
                        sub_140049C20((__int64)&v277, (float *)&qword_140146A28, v109);
                        v110 = 1268 * v102;
                        if ( !qword_190122FD0[634 * v102] )
                        {
                          v54 = v267;
                          v88 = v251;
                          v98 = v250;
LABEL_75:
                          v101 = v234;
                          goto LABEL_76;
                        }
                        v111 = &dword_190122FC8[v110];
                        sub_1400B3920(v283, &dword_190122FC8[v110], &v268, &v277);
                        v112 = sub_1400811E0(
                                 (unsigned int)v263,
                                 (_DWORD)v111,
                                 (unsigned int)v283,
                                 (unsigned int)&v273,
                                 (__int64)v276);
                        v54 = v267;
                        v88 = v251;
                        v98 = v250;
                        if ( !v112 )
                          goto LABEL_75;
                        v113 = v264;
                        if ( v264 >= *v97 )
                          goto LABEL_75;
                        v114 = v263[1];
                        *a1 = *(float *)v263;
                        v115 = v263[2];
                        *((_DWORD *)a1 + 1) = v114;
                        v116 = v263[3];
                        *((_DWORD *)a1 + 2) = v115;
                        v117 = v263[4];
                        *(_DWORD *)a2 = v116;
                        a2[2] = *(float *)&v263[5];
                        *((_DWORD *)a2 + 1) = v117;
                        dword_16E18CA94 = v232;
                        dword_16E18CA98 = v265;
                        dword_16E18CAC0 = v245;
                        v101 = v234;
                        dword_16E18CAC8 = v234;
                        dword_16E18CAB0 = 0;
                        dword_16E18CA9C = v46;
                        dword_16E18CAA0 = v54;
                        dword_16E18CABC = -1;
                        dword_16E18CAC4 = v226;
                        *v97 = v113;
                      }
LABEL_76:
                      ++v101;
                      v100 = __ROL4__(v100, 1);
                      v99 += 29;
                      v234 = v101;
                      if ( v101 >= *(_DWORD *)((char *)&unk_18E9EA9CC + v98) )
                      {
                        v8 = v262;
                        v10 = v256;
                        break;
                      }
                    }
                  }
                }
                v118 = dword_1661A66A8[v88];
                v119 = v118;
                if ( v118 <= 0 )
                {
                  v43 = v265;
                  v128 = v232;
                }
                else
                {
                  v120 = v118 & 0x7F;
                  v121 = v119 & 0xC00;
                  v227 = v120;
                  v122 = dword_1661A66A8[v88] & 0xC00;
                  v123 = *((float *)&unk_140587F6C + 2310 * v120 + 1);
                  v246 = *((float *)&unk_140587F6C + 2310 * v120);
                  v248 = *((float *)&unk_140587F6C + 2310 * v120 + 2);
                  v247 = v123;
                  if ( (_DWORD)v122 == 1024 || v121 == 2048 || v121 == 3072 )
                    sub_140049E50(&v246, (float *)&qword_140146A28, v122);
                  v124 = *(float *)((char *)dword_16CDE9EE0 + v8);
                  v279 = 1.0;
                  v246 = v246 + (float)((float)((float)v265 + 0.5) * v124);
                  v247 = v247 + (float)((float)v46 * v124);
                  v248 = v248 + (float)((float)((float)v54 + 0.5) * v124);
                  v277 = xmmword_1400F78B0;
                  v278 = xmmword_1400F78B0;
                  if ( v121 == 1024 || v121 == 2048 || v121 == 3072 )
                    sub_140049C20((__int64)&v277, (float *)&qword_140146A28, v122);
                  if ( (unsigned int)sub_140080020(
                                       (unsigned int)&v236,
                                       (unsigned int)&v239,
                                       (unsigned int)&v233,
                                       v227,
                                       (__int64)&v246,
                                       (__int64)&v277,
                                       (__int64)&v273,
                                       (__int64)v276)
                    && (v125 = v233, v233 < *v10) )
                  {
                    v126 = v236;
                    v127 = v238;
                    v128 = v232;
                    v43 = v265;
                    v129 = v237;
                    v130 = v237;
                    v131 = v236;
                    v132 = (float)((float)(v237 * *(float *)((char *)&unk_16CDE9EBC + v8))
                                 + (float)(v236 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                         + (float)(v238 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                    v133 = v238;
                    *a1 = v132;
                    v134 = (float)((float)(v130 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                                 + (float)(v131 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                         + (float)(v133 * *(float *)((char *)&unk_16CDE9ECC + v8));
                    a1[1] = v134;
                    v135 = (float)(v129 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                         + (float)(v126 * *(float *)((char *)&unk_16CDE9EB8 + v8));
                    v136 = v241;
                    v137 = v241;
                    v138 = v135 + (float)(v127 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                    a1[2] = v138;
                    *a1 = v132 + *(float *)((char *)dword_16CDE9EA4 + v8);
                    v139 = v240;
                    v140 = v240;
                    a1[1] = v134 + *(float *)((char *)dword_16CDE9EA8 + v8);
                    v141 = v239;
                    v142 = v239;
                    a1[2] = v138 + *(float *)((char *)dword_16CDE9EAC + v8);
                    *a2 = (float)((float)(v140 * *(float *)((char *)&unk_16CDE9EBC + v8))
                                + (float)(v142 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                        + (float)(v137 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                    a2[1] = (float)((float)(v139 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                                  + (float)(v141 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                          + (float)(v136 * *(float *)((char *)&unk_16CDE9ECC + v8));
                    a2[2] = (float)((float)(v139 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                                  + (float)(v141 * *(float *)((char *)&unk_16CDE9EB8 + v8)))
                          + (float)(v136 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                    dword_16E18CAB0 = 0;
                    dword_16E18CA94 = v232;
                    dword_16E18CA98 = v43;
                    dword_16E18CA9C = v46;
                    dword_16E18CAA0 = v54;
                    dword_16E18CABC = v227;
                    dword_16E18CAC8 = -1;
                    *v10 = v125;
                  }
                  else
                  {
                    v128 = v232;
                    v43 = v265;
                  }
                  v88 = v251;
                }
                v143 = dword_1661A1EA8[v88];
                v228 = v143;
                if ( v143 )
                {
                  v144 = v143 & 0xE0000000;
                  if ( (v143 & 0xE0000000) == 0x40000000 )
                  {
                    if ( (unsigned int)sub_140082ED0(
                                         (unsigned int)&v236,
                                         (unsigned int)&v239,
                                         (unsigned int)&v233,
                                         (unsigned int)&v273,
                                         (__int64)v276,
                                         (__int64)&v265,
                                         v143,
                                         *(int *)((char *)dword_16CDE9EE0 + v8)) )
                    {
                      v145 = v233;
                      if ( v233 < *v10 )
                      {
LABEL_97:
                        v146 = v236;
                        v147 = v238;
                        v148 = v232;
                        v149 = v237;
                        v150 = v237;
                        v151 = v236;
                        v152 = (float)((float)(v237 * *(float *)((char *)&unk_16CDE9EBC + v8))
                                     + (float)(v236 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                             + (float)(v238 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                        v153 = v238;
                        *a1 = v152;
                        v154 = (float)((float)(v150 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                                     + (float)(v151 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                             + (float)(v153 * *(float *)((char *)&unk_16CDE9ECC + v8));
                        a1[1] = v154;
                        v155 = (float)(v149 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                             + (float)(v146 * *(float *)((char *)&unk_16CDE9EB8 + v8));
                        v156 = v241;
                        v157 = v241;
                        v158 = v155 + (float)(v147 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                        a1[2] = v158;
                        *a1 = v152 + *(float *)((char *)dword_16CDE9EA4 + v8);
                        v159 = v240;
                        v160 = v240;
                        a1[1] = v154 + *(float *)((char *)dword_16CDE9EA8 + v8);
                        v161 = v239;
                        v162 = v239;
                        a1[2] = v158 + *(float *)((char *)dword_16CDE9EAC + v8);
                        *a2 = (float)((float)(v160 * *(float *)((char *)&unk_16CDE9EBC + v8))
                                    + (float)(v162 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                            + (float)(v157 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                        a2[1] = (float)((float)(v159 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                                      + (float)(v161 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                              + (float)(v156 * *(float *)((char *)&unk_16CDE9ECC + v8));
                        a2[2] = (float)((float)(v159 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                                      + (float)(v161 * *(float *)((char *)&unk_16CDE9EB8 + v8)))
                              + (float)(v156 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                        dword_16E18CAB0 = v228;
                        dword_16E18CA94 = v232;
                        dword_16E18CA98 = v43;
                        dword_16E18CA9C = v46;
                        dword_16E18CAA0 = v54;
                        dword_16E18CABC = -1;
                        dword_16E18CAC8 = -1;
                        *v10 = v145;
                        goto LABEL_107;
                      }
                    }
                  }
                  else if ( v144 == 0x80000000 )
                  {
                    if ( (unsigned int)sub_140084FF0(
                                         (unsigned int)&v236,
                                         (unsigned int)&v239,
                                         (unsigned int)&v233,
                                         (unsigned int)&v273,
                                         (__int64)v276,
                                         (__int64)&v265,
                                         v143,
                                         *(int *)((char *)dword_16CDE9EE0 + v8)) )
                    {
                      v145 = v233;
                      if ( v233 < *v10 )
                        goto LABEL_97;
                    }
                  }
                  else if ( v144 == -1073741824 )
                  {
                    v229 = v43 - (unsigned __int8)v143;
                    v253 = v229;
                    LODWORD(v250) = v54 - BYTE1(v143);
                    v255 = v250;
                    v234 = v46 - BYTE2(v143);
                    v254 = v234;
                    v245 = sub_14000BE30(v128, v229, v234, v250);
                    if ( (unsigned int)sub_140084FF0(
                                         (unsigned int)&v236,
                                         (unsigned int)&v239,
                                         (unsigned int)&v233,
                                         (unsigned int)&v273,
                                         (__int64)v276,
                                         (__int64)&v253,
                                         v245,
                                         *(int *)((char *)dword_16CDE9EE0 + v8)) )
                    {
                      v163 = v233;
                      if ( v233 < *v10 )
                      {
                        v164 = v236;
                        v165 = v238;
                        v166 = v245;
                        v148 = v232;
                        v167 = v237;
                        v168 = v237;
                        v169 = v236;
                        v170 = (float)((float)(v237 * *(float *)((char *)&unk_16CDE9EBC + v8))
                                     + (float)(v236 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                             + (float)(v238 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                        v171 = v238;
                        *a1 = v170;
                        v172 = (float)((float)(v168 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                                     + (float)(v169 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                             + (float)(v171 * *(float *)((char *)&unk_16CDE9ECC + v8));
                        a1[1] = v172;
                        v173 = (float)(v167 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                             + (float)(v164 * *(float *)((char *)&unk_16CDE9EB8 + v8));
                        v174 = v241;
                        v175 = v241;
                        v176 = v173 + (float)(v165 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                        a1[2] = v176;
                        *a1 = v170 + *(float *)((char *)dword_16CDE9EA4 + v8);
                        v177 = v240;
                        v178 = v240;
                        a1[1] = v172 + *(float *)((char *)dword_16CDE9EA8 + v8);
                        v179 = v239;
                        v180 = v239;
                        a1[2] = v176 + *(float *)((char *)dword_16CDE9EAC + v8);
                        *a2 = (float)((float)(v178 * *(float *)((char *)&unk_16CDE9EBC + v8))
                                    + (float)(v180 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                            + (float)(v175 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                        a2[1] = (float)((float)(v177 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                                      + (float)(v179 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                              + (float)(v174 * *(float *)((char *)&unk_16CDE9ECC + v8));
                        a2[2] = (float)((float)(v177 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                                      + (float)(v179 * *(float *)((char *)&unk_16CDE9EB8 + v8)))
                              + (float)(v174 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                        dword_16E18CAB0 = v166;
                        dword_16E18CA98 = v229;
                        dword_16E18CA9C = v234;
                        dword_16E18CAA0 = v250;
                        dword_16E18CABC = -1;
                        dword_16E18CAC8 = -1;
                        dword_16E18CA94 = v232;
                        *v10 = v163;
                        goto LABEL_107;
                      }
                    }
                  }
                }
                v148 = v232;
LABEL_107:
                v181 = dword_1661A4EA8[v251];
                v230 = v181;
                if ( !v181 )
                {
LABEL_120:
                  if ( *v10 < 1.0 )
                    return 1;
                  v59 = v261;
                  v50 = v258;
                  goto LABEL_122;
                }
                v182 = v181 & 0xE0000000;
                if ( (v181 & 0xE0000000) == 0x40000000 )
                {
                  v183 = sub_140082ED0(
                           (unsigned int)&v236,
                           (unsigned int)&v239,
                           (unsigned int)&v233,
                           (unsigned int)&v273,
                           (__int64)v276,
                           (__int64)&v265,
                           v181,
                           *(int *)((char *)dword_16CDE9EE0 + v8));
                }
                else
                {
                  if ( v182 != 0x80000000 )
                  {
                    if ( v182 != -1073741824 )
                      goto LABEL_120;
                    v245 = v43 - (unsigned __int8)v181;
                    v253 = v245;
                    v234 = v54 - BYTE1(v181);
                    v255 = v234;
                    v231 = v46 - BYTE2(v181);
                    v254 = v231;
                    LODWORD(v250) = sub_14000C850(v148, v245, v231, v234);
                    if ( !(unsigned int)sub_140084FF0(
                                          (unsigned int)&v236,
                                          (unsigned int)&v239,
                                          (unsigned int)&v233,
                                          (unsigned int)&v273,
                                          (__int64)v276,
                                          (__int64)&v253,
                                          v250,
                                          *(int *)((char *)dword_16CDE9EE0 + v8)) )
                      goto LABEL_120;
                    v184 = v233;
                    if ( v233 >= *v10 )
                      goto LABEL_120;
                    v201 = v236;
                    v202 = v238;
                    v203 = v237;
                    v204 = v237;
                    v205 = v236;
                    v206 = (float)((float)(v237 * *(float *)((char *)&unk_16CDE9EBC + v8))
                                 + (float)(v236 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                         + (float)(v238 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                    v207 = v238;
                    *a1 = v206;
                    v208 = (float)((float)(v204 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                                 + (float)(v205 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                         + (float)(v207 * *(float *)((char *)&unk_16CDE9ECC + v8));
                    a1[1] = v208;
                    v209 = (float)(v203 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                         + (float)(v201 * *(float *)((char *)&unk_16CDE9EB8 + v8));
                    v210 = v241;
                    v211 = v241;
                    v212 = v209 + (float)(v202 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                    a1[2] = v212;
                    *a1 = v206 + *(float *)((char *)dword_16CDE9EA4 + v8);
                    v213 = v240;
                    v214 = v240;
                    a1[1] = v208 + *(float *)((char *)dword_16CDE9EA8 + v8);
                    v215 = v239;
                    v216 = v239;
                    a1[2] = v212 + *(float *)((char *)dword_16CDE9EAC + v8);
                    *a2 = (float)((float)(v214 * *(float *)((char *)&unk_16CDE9EBC + v8))
                                + (float)(v216 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                        + (float)(v211 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                    a2[1] = (float)((float)(v213 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                                  + (float)(v215 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                          + (float)(v210 * *(float *)((char *)&unk_16CDE9ECC + v8));
                    v217 = v250;
                    a2[2] = (float)((float)(v213 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                                  + (float)(v215 * *(float *)((char *)&unk_16CDE9EB8 + v8)))
                          + (float)(v210 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                    dword_16E18CAB0 = v217;
                    dword_16E18CA94 = v232;
                    dword_16E18CA98 = v245;
                    dword_16E18CA9C = v231;
                    dword_16E18CAA0 = v234;
LABEL_119:
                    dword_16E18CABC = -1;
                    dword_16E18CAC8 = -1;
                    *v10 = v184;
                    goto LABEL_120;
                  }
                  v183 = sub_140084FF0(
                           (unsigned int)&v236,
                           (unsigned int)&v239,
                           (unsigned int)&v233,
                           (unsigned int)&v273,
                           (__int64)v276,
                           (__int64)&v265,
                           v181,
                           *(int *)((char *)dword_16CDE9EE0 + v8));
                }
                if ( !v183 )
                  goto LABEL_120;
                v184 = v233;
                if ( v233 >= *v10 )
                  goto LABEL_120;
                v185 = v236;
                v186 = v238;
                v187 = v237;
                v188 = v237;
                v189 = v236;
                v190 = (float)((float)(v237 * *(float *)((char *)&unk_16CDE9EBC + v8))
                             + (float)(v236 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                     + (float)(v238 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                v191 = v238;
                *a1 = v190;
                v192 = (float)((float)(v188 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                             + (float)(v189 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                     + (float)(v191 * *(float *)((char *)&unk_16CDE9ECC + v8));
                a1[1] = v192;
                v193 = (float)(v187 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                     + (float)(v185 * *(float *)((char *)&unk_16CDE9EB8 + v8));
                v194 = v241;
                v195 = v241;
                v196 = v193 + (float)(v186 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                a1[2] = v196;
                *a1 = v190 + *(float *)((char *)dword_16CDE9EA4 + v8);
                v197 = v240;
                v198 = v240;
                a1[1] = v192 + *(float *)((char *)dword_16CDE9EA8 + v8);
                v199 = v239;
                v200 = v239;
                a1[2] = v196 + *(float *)((char *)dword_16CDE9EAC + v8);
                *a2 = (float)((float)(v198 * *(float *)((char *)&unk_16CDE9EBC + v8))
                            + (float)(v200 * *(float *)((char *)&unk_16CDE9EB0 + v8)))
                    + (float)(v195 * *(float *)((char *)&unk_16CDE9EC8 + v8));
                a2[1] = (float)((float)(v197 * *(float *)((char *)&unk_16CDE9EC0 + v8))
                              + (float)(v199 * *(float *)((char *)&unk_16CDE9EB4 + v8)))
                      + (float)(v194 * *(float *)((char *)&unk_16CDE9ECC + v8));
                a2[2] = (float)((float)(v197 * *(float *)((char *)&unk_16CDE9EC4 + v8))
                              + (float)(v199 * *(float *)((char *)&unk_16CDE9EB8 + v8)))
                      + (float)(v194 * *(float *)((char *)&unk_16CDE9ED0 + v8));
                dword_16E18CAB0 = v230;
                dword_16E18CA94 = v232;
                dword_16E18CA98 = v43;
                dword_16E18CA9C = v46;
                dword_16E18CAA0 = v54;
                goto LABEL_119;
              }
              v64 = 0;
              v65 = 0;
              do
              {
                v66 = 0;
                v66.m128d_f64[0] = (float)(v42 * *(&v273 + v65));
                v67 = v66.m128d_f64[0];
                if ( (double)(int)v66.m128d_f64[0] != v66.m128d_f64[0] )
                  v67 = (double)((int)v66.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v66, v66)) & 1));
                v68 = v66.m128d_f64[0] - (v67 + 0.5);
                if ( *(&v280 + v65) > 0 )
                  v68 = -v68;
                v69 = v68 + v68;
                if ( v65 )
                {
                  *(&v268 + v65) = (float)(v69 * v48) - *(&v268 + v65);
                  if ( v65 == 2 )
                    v70 = v53;
                  else
                    v70 = v61;
                }
                else
                {
                  v268 = (float)(v69 * v53) - v268;
                  v70 = v61;
                }
                v71 = v65 + 3;
                v72 = 0;
                v72.m128d_f64[0] = (float)(v42 * *(float *)&v275[v65 - 1]);
                *(&v268 + v65 + 3) = (float)(v69 * v70) - *(&v268 + v65 + 3);
                v73 = v72.m128d_f64[0];
                if ( (double)(int)v72.m128d_f64[0] != v72.m128d_f64[0] )
                  v73 = (double)((int)v72.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v72, v72)) & 1));
                v74 = v72.m128d_f64[0] - (v73 + 0.5);
                if ( v282[v65 - 1] > 0 )
                  v74 = -v74;
                v75 = v74 + v74;
                if ( v64 == -1 )
                  v76 = v53;
                else
                  v76 = v48;
                *(&v269 + v65) = (float)(v75 * v76) - *(&v269 + v65);
                if ( v64 == 1 )
                  v77 = v53;
                else
                  v77 = v61;
                v78 = 0;
                v78.m128d_f64[0] = (float)(v42 * *(float *)&v275[v65]);
                *(&v271 + v65) = (float)(v75 * v77) - *(&v271 + v65);
                v79 = v78.m128d_f64[0];
                if ( (double)(int)v78.m128d_f64[0] != v78.m128d_f64[0] )
                  v79 = (double)((int)v78.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v78, v78)) & 1));
                v80 = v78.m128d_f64[0] - (v79 + 0.5);
                if ( (int)v282[v65] > 0 )
                  v80 = -v80;
                v81 = v80 + v80;
                if ( v64 == -2 )
                  v82 = v53;
                else
                  v82 = v48;
                *((float *)&v270 + v65) = (float)(v81 * v82) - *((float *)&v270 + v65);
                if ( v64 )
                  v83 = v61;
                else
                  v83 = v53;
                v64 += 3;
                *(&v272 + v65) = (float)(v83 * v81) - *(&v272 + v65);
                v65 += 3;
              }
              while ( v71 < 3 );
              v10 = v256;
              v84 = abs32(v50 - v46) + abs32(v59 - v54) + abs32(v249 - v43);
              v252 = 0x4000;
              if ( v84 > 0x4000 || (v252 = v84, v84 >= 0) )
              {
                a4 = v257;
                v235 = LODWORD(v272);
                v243 = v269;
                v62 = v272;
                v242 = v268;
                v57 = v271;
                v244 = v270;
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

