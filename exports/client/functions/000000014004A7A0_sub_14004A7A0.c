/* Address: 0x14004a7a0 | Name: sub_14004A7A0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14004A7A0(int a1, int a2, int *a3, int *a4, float *a5, float *a6, float *a7, float *a8)
{
  float *v8; // r10
  int v9; // r13d
  float *v10; // r15
  int *v11; // r11
  __int64 v12; // rdx
  float *v13; // r9
  __int64 v14; // r8
  float v15; // xmm10_4
  float *v16; // rax
  float v17; // xmm11_4
  float v18; // xmm12_4
  float v19; // xmm13_4
  float *v20; // rcx
  float v21; // xmm14_4
  __int64 v22; // r8
  float v23; // xmm15_4
  float v24; // xmm9_4
  float v25; // xmm5_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm8_4
  float v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm7_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm6_4
  float v41; // xmm0_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  float v44; // xmm9_4
  __int64 v45; // rdx
  float *v46; // r12
  __int64 v47; // r8
  float v48; // xmm10_4
  float *v49; // rax
  float v50; // xmm11_4
  float v51; // xmm12_4
  float v52; // xmm13_4
  float *v53; // rcx
  float v54; // xmm14_4
  __int64 v55; // r8
  float v56; // xmm15_4
  float v57; // xmm7_4
  float v58; // xmm6_4
  float v59; // xmm3_4
  float v60; // xmm9_4
  float v61; // xmm4_4
  float v62; // xmm1_4
  float v63; // xmm8_4
  float v64; // xmm5_4
  float v65; // xmm2_4
  float v66; // xmm7_4
  float v67; // xmm4_4
  float v68; // xmm1_4
  float v69; // xmm6_4
  unsigned int v70; // xmm0_4
  float v71; // xmm4_4
  float v72; // xmm3_4
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm9_4
  float v76; // xmm0_4
  float v77; // xmm8_4
  __int64 v78; // rdx
  int v79; // r14d
  int v80; // eax
  float *v81; // rdi
  int v82; // esi
  float v83; // xmm8_4
  float v84; // xmm9_4
  float v85; // xmm3_4
  float v86; // xmm5_4
  float v87; // xmm2_4
  float v88; // xmm6_4
  float v89; // xmm9_4
  float v90; // xmm1_4
  float v91; // xmm4_4
  float v92; // xmm7_4
  unsigned int v93; // xmm0_4
  float v94; // xmm8_4
  float v95; // xmm6_4
  float v96; // xmm0_4
  float v97; // xmm4_4
  float v98; // xmm0_4
  float v99; // xmm8_4
  int v100; // r14d
  __int64 v101; // rbx
  int v102; // ecx
  unsigned int v103; // xmm3_4
  float v104; // xmm5_4
  float v105; // xmm1_4
  unsigned int v106; // xmm4_4
  float v107; // xmm0_4
  float v108; // xmm2_4
  int v109; // r14d
  float *v110; // rdi
  int v111; // esi
  float v112; // xmm9_4
  float v113; // xmm3_4
  float v114; // xmm5_4
  float v115; // xmm6_4
  float v116; // xmm9_4
  float v117; // xmm4_4
  float v118; // xmm2_4
  float v119; // xmm1_4
  float v120; // xmm7_4
  unsigned int v121; // xmm0_4
  float v122; // xmm8_4
  float v123; // xmm6_4
  float v124; // xmm0_4
  float v125; // xmm4_4
  float v126; // xmm0_4
  float v127; // xmm8_4
  int v128; // r14d
  __int64 v129; // rbx
  int v130; // ecx
  unsigned int v131; // xmm3_4
  float v132; // xmm5_4
  float v133; // xmm1_4
  unsigned int v134; // xmm4_4
  float v135; // xmm0_4
  float v136; // xmm2_4
  int v137; // r8d
  float *v138; // rcx
  __int64 v139; // rax
  bool v140; // cc
  float v141; // xmm6_4
  float v142; // xmm10_4
  float v143; // xmm5_4
  float v144; // xmm11_4
  float v145; // xmm13_4
  float v146; // xmm10_4
  float v147; // xmm2_4
  float v148; // xmm3_4
  float v149; // xmm0_4
  float v150; // xmm1_4
  float v151; // xmm4_4
  float v152; // xmm6_4
  float v153; // xmm5_4
  float v154; // xmm11_4
  float v155; // xmm0_4
  float v156; // xmm13_4
  float v157; // xmm11_4
  float v158; // xmm13_4
  float v159; // xmm0_4
  float v160; // xmm10_4
  float v161; // xmm10_4
  int *v162; // r13
  float v163; // xmm7_4
  int v164; // ebx
  float v165; // xmm6_4
  float v166; // xmm4_4
  int v167; // r14d
  __int64 v168; // rdi
  float v169; // xmm8_4
  float v170; // xmm5_4
  float v171; // xmm9_4
  float v172; // xmm3_4
  float v173; // xmm7_4
  float v174; // xmm6_4
  float v175; // xmm2_4
  float v176; // xmm1_4
  float v177; // xmm5_4
  float v178; // xmm3_4
  unsigned int v179; // xmm0_4
  float v180; // xmm1_4
  float v181; // xmm8_4
  float v182; // xmm0_4
  float v183; // xmm8_4
  float v184; // xmm9_4
  float v185; // xmm4_4
  float v186; // xmm0_4
  float v187; // xmm7_4
  float v188; // xmm6_4
  float v189; // xmm0_4
  float v190; // xmm5_4
  float v191; // xmm7_4
  float v192; // xmm6_4
  __int64 v193; // r11
  int v194; // edx
  __int64 v195; // r9
  unsigned int v196; // eax
  _DWORD *v197; // r8
  __int64 v198; // r10
  __int64 v199; // rax
  float v200; // xmm2_4
  float v201; // xmm0_4
  int v202; // edx
  __int64 v203; // rax
  float v204; // xmm2_4
  float v205; // xmm0_4
  int v206; // edx
  __int64 v207; // rax
  float v208; // xmm2_4
  float v209; // xmm0_4
  int v210; // edx
  __int64 v211; // rax
  float v212; // xmm2_4
  float v213; // xmm0_4
  __int64 v214; // rax
  float v215; // xmm2_4
  float v216; // xmm0_4
  __int64 v217; // r9
  _DWORD *v218; // r8
  __int64 v219; // r10
  __int64 v220; // rax
  float v221; // xmm2_4
  float v222; // xmm0_4
  __int64 v223; // rax
  float v224; // xmm2_4
  float v225; // xmm0_4
  int v226; // r8d
  int v227; // ebx
  __int64 v228; // rsi
  __int64 v229; // rdi
  int v230; // edx
  unsigned int v231; // eax
  __int64 v232; // r10
  __int64 v233; // r11
  _DWORD *v234; // r9
  __int64 v235; // rax
  float v236; // xmm1_4
  float v237; // xmm2_4
  float v238; // xmm3_4
  int v239; // edx
  __int64 v240; // rax
  float v241; // xmm1_4
  float v242; // xmm2_4
  float v243; // xmm3_4
  int v244; // edx
  __int64 v245; // rax
  float v246; // xmm1_4
  float v247; // xmm2_4
  float v248; // xmm3_4
  int v249; // edx
  __int64 v250; // rax
  float v251; // xmm1_4
  float v252; // xmm2_4
  float v253; // xmm3_4
  __int64 v254; // rax
  float v255; // xmm1_4
  float v256; // xmm2_4
  float v257; // xmm3_4
  __int64 v258; // r10
  _DWORD *v259; // r9
  __int64 v260; // r11
  __int64 v261; // rax
  float v262; // xmm1_4
  float v263; // xmm2_4
  float v264; // xmm3_4
  __int64 v265; // rax
  float v266; // xmm1_4
  float v267; // xmm2_4
  float v268; // xmm3_4
  int v269; // r15d
  __int64 v270; // r12
  int v271; // edi
  int v272; // ebx
  int v273; // r14d
  __int64 v274; // rsi
  __int64 v275; // rdx
  __int64 v276; // rax
  float v277; // xmm1_4
  float v278; // xmm0_4
  __int64 v279; // rdx
  __int64 v280; // rax
  int v281; // xmm1_4
  float v282; // xmm0_4
  __int64 v283; // rax
  float v284; // xmm1_4
  float v285; // xmm0_4
  __int64 v286; // rax
  float v287; // xmm1_4
  float v288; // xmm0_4
  float v289; // xmm13_4
  float v290; // xmm14_4
  __m128 v291; // xmm10
  __m128 v292; // xmm11
  float v293; // xmm6_4
  float v294; // xmm15_4
  float v295; // xmm7_4
  float v296; // xmm9_4
  float v297; // xmm8_4
  float v298; // xmm0_4
  unsigned __int64 v299; // xmm0_8
  float v300; // xmm1_4
  unsigned int v301; // xmm11_4
  unsigned int v302; // xmm10_4
  float v303; // xmm1_4
  float v304; // xmm9_4
  __int64 v306; // [rsp-20h] [rbp-3BB0h] BYREF
  __int64 v307; // [rsp+10h] [rbp-3B80h]
  int v308; // [rsp+18h] [rbp-3B78h]
  int v309; // [rsp+20h] [rbp-3B70h]
  unsigned __int64 v310; // [rsp+30h] [rbp-3B60h] BYREF
  float v311; // [rsp+38h] [rbp-3B58h]
  float v312; // [rsp+40h] [rbp-3B50h] BYREF
  float v313; // [rsp+44h] [rbp-3B4Ch]
  float v314; // [rsp+48h] [rbp-3B48h]
  int v315; // [rsp+50h] [rbp-3B40h]
  int v316; // [rsp+54h] [rbp-3B3Ch]
  float v317; // [rsp+58h] [rbp-3B38h] BYREF
  int v318; // [rsp+5Ch] [rbp-3B34h]
  int v319; // [rsp+3B10h] [rbp-80h]
  float v320; // [rsp+3B18h] [rbp-78h] BYREF
  float v321; // [rsp+3B1Ch] [rbp-74h]
  float v322; // [rsp+3B20h] [rbp-70h]
  __int64 v323; // [rsp+3B28h] [rbp-68h] BYREF
  float v324; // [rsp+3B30h] [rbp-60h]
  int v325; // [rsp+3B38h] [rbp-58h]
  int v326; // [rsp+3B3Ch] [rbp-54h]
  float *v327; // [rsp+3B40h] [rbp-50h]
  int *v328; // [rsp+3B48h] [rbp-48h]
  __int64 v329; // [rsp+3B50h] [rbp-40h]
  float *v330; // [rsp+3B58h] [rbp-38h]
  int *v331; // [rsp+3B60h] [rbp-30h]
  float v332; // [rsp+3B68h] [rbp-28h]
  float v333; // [rsp+3B6Ch] [rbp-24h]
  float v334; // [rsp+3B70h] [rbp-20h]
  float v335; // [rsp+3B74h] [rbp-1Ch]
  float v336; // [rsp+3B78h] [rbp-18h]
  float v337; // [rsp+3B7Ch] [rbp-14h]
  float v338[4]; // [rsp+3B80h] [rbp-10h] BYREF
  float v339[4]; // [rsp+3B90h] [rbp+0h] BYREF
  unsigned __int64 v340; // [rsp+3BA0h] [rbp+10h] BYREF
  float v341; // [rsp+3BA8h] [rbp+18h]
  unsigned __int64 v342; // [rsp+3BB0h] [rbp+20h] BYREF
  float v343; // [rsp+3BB8h] [rbp+28h]
  float v344; // [rsp+3BC0h] [rbp+30h] BYREF
  float v345; // [rsp+3BC4h] [rbp+34h]
  float v346; // [rsp+3BC8h] [rbp+38h]
  float v347; // [rsp+3BCCh] [rbp+3Ch] BYREF
  float v348; // [rsp+3BD0h] [rbp+40h]
  float v349; // [rsp+3BD4h] [rbp+44h]
  float v350[6]; // [rsp+3BE8h] [rbp+58h] BYREF
  _QWORD v351[8]; // [rsp+3C00h] [rbp+70h]
  _QWORD v352[8]; // [rsp+3C40h] [rbp+B0h]
  _DWORD v353[2]; // [rsp+3C80h] [rbp+F0h] BYREF
  float v354[1534]; // [rsp+3C88h] [rbp+F8h] BYREF
  _DWORD v355[2]; // [rsp+5480h] [rbp+18F0h] BYREF
  float v356[2046]; // [rsp+5488h] [rbp+18F8h] BYREF
  __int64 v357; // [rsp+7480h] [rbp+38F0h]

  v8 = a8;
  v9 = 0;
  v10 = a5;
  v11 = a4;
  v318 = a2;
  v12 = *a3;
  v331 = a4;
  v13 = a6;
  v328 = a3;
  v319 = a1;
  v330 = a8;
  v327 = a6;
  v316 = 0;
  if ( v12 > 0 )
  {
    v14 = *((_QWORD *)a3 + 1);
    v15 = a6[3];
    v16 = v354;
    v17 = *a6;
    v18 = a6[6];
    v19 = a6[4];
    v20 = (float *)(v14 + 8);
    v21 = a6[1];
    v22 = v14 - (_QWORD)v354;
    v23 = a6[7];
    do
    {
      v24 = *(v20 - 1);
      v25 = *(float *)((char *)v16 + v22);
      v26 = *v20;
      v27 = v24 * v15;
      v20 += 3;
      v28 = v25 * a6[2];
      v29 = v24;
      v30 = v24 * a6[5];
      v31 = v26;
      v32 = v29 * v19;
      v33 = v26;
      v34 = v26 * a6[8];
      v35 = v25 * v17;
      v36 = v31 * v18;
      v37 = *(float *)((char *)v16 + v22) * v21;
      v38 = v35 + v27;
      v39 = v33 * v23;
      v40 = (float)(v27 + *a5) + (float)(v35 + v36);
      v312 = v38 + v36;
      v41 = v37 + v32;
      v42 = v32 + a5[1];
      *(v16 - 2) = v40;
      v313 = v41 + v39;
      v43 = v28 + v30;
      v44 = v30 + a5[2];
      *(v16 - 1) = v42 + (float)(v37 + v39);
      v314 = v43 + v34;
      *v16 = v44 + (float)(v28 + v34);
      v16 += 3;
      --v12;
    }
    while ( v12 );
  }
  v45 = *v11;
  v46 = a7;
  if ( v45 > 0 )
  {
    v47 = *((_QWORD *)v11 + 1);
    v48 = a8[3];
    v49 = v356;
    v50 = *a8;
    v51 = a8[6];
    v52 = a8[4];
    v53 = (float *)(v47 + 8);
    v54 = a8[1];
    v55 = v47 - (_QWORD)v356;
    v56 = a8[7];
    do
    {
      v57 = *(v53 - 1);
      v58 = *(float *)((char *)v49 + v55);
      v59 = v58;
      v60 = v58 * a8[2];
      v61 = *v53;
      v53 += 3;
      v62 = v61;
      v63 = v61 * a8[8];
      v64 = v57;
      v65 = v57;
      v66 = v57 * a8[5];
      v67 = v61 * v51;
      v68 = v62 * v56;
      v69 = (float)(v58 * v50) + (float)(v64 * v48);
      *(float *)&v70 = v69 + v67;
      v71 = v67 + *a7;
      v312 = *(float *)&v70;
      v72 = (float)(v59 * v54) + (float)(v65 * v52);
      v73 = v72 + v68;
      v74 = v68 + a7[1];
      *(v49 - 2) = v69 + v71;
      v313 = v73;
      v75 = v60 + v66;
      v76 = v75 + v63;
      v77 = v63 + a7[2];
      *(v49 - 1) = v72 + v74;
      v314 = v76;
      *v49 = v75 + v77;
      v49 += 3;
      --v45;
    }
    while ( v45 );
  }
  v78 = (__int64)v328;
  v79 = 0;
  v80 = v328[4];
  v315 = 0;
  if ( v80 > 0 )
  {
    v81 = (float *)(v328 + 10);
    do
    {
      v82 = 0;
      v83 = *(v81 - 3);
      v84 = *(v81 - 2);
      v85 = *(v81 - 4) * *v13;
      v86 = v84 * v13[6];
      v87 = v84 * v13[7];
      v88 = v83 * v13[3];
      v89 = v84 * v13[8];
      v90 = *(v81 - 4) * v13[1];
      v91 = v83 * v13[4];
      v92 = *(v81 - 4) * v13[2];
      *(float *)&v93 = (float)(v85 + v88) + v86;
      v94 = v83 * v13[5];
      v95 = v88 + *a5;
      v312 = *(float *)&v93;
      v96 = v90 + v91;
      v97 = v91 + a5[1];
      v320 = (float)(v86 + v85) + v95;
      v313 = v96 + v87;
      v98 = v92 + v94;
      v99 = v94 + a5[2];
      v321 = (float)(v87 + v90) + v97;
      v314 = v98 + v89;
      v322 = (float)(v89 + v92) + v99;
      if ( *((int *)v81 - 1) > 0 )
      {
        v100 = v318;
        v101 = 0;
        do
        {
          if ( sub_1400DAD20(
                 (__int64)&v344,
                 (__int64)v11,
                 (__int64)v355,
                 (__int64)a7,
                 v8,
                 &v320,
                 (float *)&v353[3 * *(_DWORD *)(v101 + *(_QWORD *)v81)]) )
          {
            v102 = *(_DWORD *)(v101 + *(_QWORD *)v81);
            v309 = 1023410176;
            v308 = 1015021568;
            LODWORD(v307) = 1053609165;
            *(float *)&v103 = v344 - *a7;
            v104 = (float)((float)((float)(v345 - *(float *)&v353[3 * v102 + 1]) * v348)
                         + (float)((float)(v344 - *(float *)&v353[3 * v102]) * v347))
                 + (float)((float)(v346 - v354[3 * v102]) * v349);
            v105 = v345 - a5[1];
            *(float *)&v106 = v345 - a7[1];
            v312 = v344 - *a5;
            v107 = v346 - a5[2];
            v108 = v346 - a7[2];
            v317 = v104;
            v313 = v105;
            v314 = v107;
            v310 = __PAIR64__(v106, v103);
            v311 = v108;
            sub_1400052C0(
              v319,
              v100,
              (unsigned int *)&v312,
              (unsigned int *)&v310,
              (unsigned int *)&v347,
              v104,
              0x3ECCCCCDu,
              0.015625,
              0x3D000000u);
            v9 = 1;
          }
          v8 = v330;
          ++v82;
          v11 = v331;
          v101 += 4;
        }
        while ( v82 < *((_DWORD *)v81 - 1) );
        v79 = v315;
        v13 = v327;
        v78 = (__int64)v328;
        v316 = v9;
      }
      v80 = *(_DWORD *)(v78 + 16);
      ++v79;
      v81 += 14;
      v315 = v79;
    }
    while ( v79 < v80 );
  }
  v109 = 0;
  v315 = 0;
  if ( v11[4] > 0 )
  {
    v110 = (float *)(v11 + 10);
    do
    {
      v111 = 0;
      v112 = *(v110 - 2);
      v113 = *(v110 - 4) * *v8;
      v114 = v112 * v8[6];
      v115 = *(v110 - 3) * v8[3];
      v116 = v112 * v8[8];
      v117 = *(v110 - 3) * v8[4];
      v118 = *(v110 - 4) * v8[1];
      v119 = *(v110 - 2) * v8[7];
      v120 = *(v110 - 4) * v8[2];
      *(float *)&v121 = (float)(v113 + v115) + v114;
      v122 = *(v110 - 3) * v8[5];
      v123 = v115 + *a7;
      v312 = *(float *)&v121;
      v124 = v118 + v117;
      v125 = v117 + a7[1];
      v320 = (float)(v114 + v113) + v123;
      v313 = v124 + v119;
      v126 = v120 + v122;
      v127 = v122 + a7[2];
      v321 = v125 + (float)(v119 + v118);
      v314 = v126 + v116;
      v322 = (float)(v116 + v120) + v127;
      if ( *((int *)v110 - 1) > 0 )
      {
        v128 = v318;
        v129 = 0;
        do
        {
          if ( sub_1400DAD20(
                 (__int64)&v344,
                 v78,
                 (__int64)v353,
                 (__int64)a5,
                 v13,
                 &v320,
                 (float *)&v355[3 * *(_DWORD *)(v129 + *(_QWORD *)v110)]) )
          {
            v130 = *(_DWORD *)(v129 + *(_QWORD *)v110);
            v309 = 1023410176;
            v308 = 1015021568;
            LODWORD(v307) = 1053609165;
            *(float *)&v131 = v344 - *a5;
            v132 = (float)((float)((float)(v345 - *(float *)&v355[3 * v130 + 1]) * v348)
                         + (float)((float)(v344 - *(float *)&v355[3 * v130]) * v347))
                 + (float)((float)(v346 - v356[3 * v130]) * v349);
            v133 = v345 - a7[1];
            *(float *)&v134 = v345 - a5[1];
            v312 = v344 - *a7;
            v135 = v346 - a7[2];
            v136 = v346 - a5[2];
            v317 = v132;
            v313 = v133;
            v314 = v135;
            v310 = __PAIR64__(v134, v131);
            v311 = v136;
            sub_1400052C0(
              v128,
              v319,
              (unsigned int *)&v312,
              (unsigned int *)&v310,
              (unsigned int *)&v347,
              v132,
              0x3ECCCCCDu,
              0.015625,
              0x3D000000u);
            v9 = 1;
          }
          v13 = v327;
          ++v111;
          v78 = (__int64)v328;
          v129 += 4;
        }
        while ( v111 < *((_DWORD *)v110 - 1) );
        v109 = v315;
        v8 = v330;
        v11 = v331;
        v316 = v9;
      }
      v13 = v327;
      ++v109;
      v110 += 14;
      v315 = v109;
    }
    while ( v109 < v11[4] );
    v80 = *(_DWORD *)(v78 + 16);
  }
  v137 = 0;
  v326 = 0;
  if ( v80 <= 0 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v306 ^ v357);
  v138 = v327;
  v139 = v78 + 32;
  v329 = v78 + 32;
  do
  {
    v140 = v11[4] <= 0;
    v141 = *(float *)(v139 - 8);
    v142 = *(float *)(v139 - 4);
    v143 = *(float *)v139;
    v144 = v142 * v138[3];
    v325 = 0;
    v145 = v142 * v138[4];
    v146 = v142 * v138[5];
    v147 = v143 * v138[6];
    v148 = v141 * v138[1];
    v149 = (float)(v141 * *v138) + v144;
    v150 = v143 * v138[7];
    v151 = (float)(v141 * *v138) + v147;
    v152 = v141 * v138[2];
    v153 = v143 * v138[8];
    v154 = v144 + *v10;
    v312 = v149 + v147;
    v155 = v148 + v145;
    v156 = v145 + v10[1];
    v157 = v154 + v151;
    v336 = v157;
    v158 = v156 + (float)(v148 + v150);
    v320 = v157;
    v313 = v155 + v150;
    v159 = v152 + v146;
    v160 = v146 + v10[2];
    v337 = v158;
    v321 = v158;
    v161 = v160 + (float)(v152 + v153);
    v314 = v159 + v153;
    v335 = v161;
    v322 = v161;
    if ( v140 )
      goto LABEL_98;
    v162 = v11 + 8;
    do
    {
      v163 = *((float *)v162 - 2);
      v164 = 0;
      v165 = *((float *)v162 - 1);
      v166 = v163 * *v8;
      v167 = *(_DWORD *)(v139 + 32);
      v168 = 0;
      v169 = v165 * v8[3];
      v351[0] = 0;
      v170 = *(float *)v162;
      v171 = v163 * v8[1];
      v172 = v165;
      v352[0] = 0;
      v173 = v163 * v8[2];
      v174 = v165 * v8[5];
      v175 = v170 * v8[6];
      v176 = v170;
      v177 = v170 * v8[8];
      v178 = v172 * v8[4];
      *(float *)&v179 = (float)(v166 + v169) + v175;
      v180 = v176 * v8[7];
      v181 = v169 + *v46;
      v312 = *(float *)&v179;
      v182 = v171 + v178;
      v183 = v181 + (float)(v166 + v175);
      v184 = (float)(v171 + v180) + (float)(v178 + v46[1]);
      v350[0] = v183;
      v185 = v183 - v157;
      v313 = v182 + v180;
      v186 = v173 + v174;
      v350[1] = v184;
      v187 = v173 + v177;
      v188 = v174 + v46[2];
      v333 = v183 - v157;
      v189 = v186 + v177;
      v190 = v184 - v158;
      v191 = v187 + v188;
      v314 = v189;
      v332 = v184 - v158;
      v350[2] = v191;
      v192 = v191 - v161;
      v334 = v191 - v161;
      if ( v167 < 4 )
      {
        if ( v167 <= 0 )
          goto LABEL_54;
        v193 = *(_QWORD *)(v139 + 40);
        v194 = 1;
LABEL_49:
        v217 = v164;
        v218 = (_DWORD *)(v193 + 12 * v168);
        v219 = (unsigned int)(v167 - v164);
        do
        {
          v220 = 3 * *v218;
          v221 = *(float *)&v353[v220 + 1];
          v222 = v354[v220];
          v312 = *(float *)&v353[v220] - v157;
          v313 = v221 - v158;
          v314 = v222 - v161;
          if ( (float)((float)((float)((float)(v221 - v158) * v190) + (float)(v312 * v185))
                     + (float)((float)(v222 - v161) * v192)) < 0.0 )
          {
            v223 = 3 * v218[1];
            v224 = *(float *)&v353[v223 + 1];
            v225 = v354[v223];
            *(float *)&v310 = *(float *)&v353[v223] - v157;
            *((float *)&v310 + 1) = v224 - v158;
            v311 = v225 - v161;
            if ( (float)((float)((float)((float)(v224 - v158) * v190) + (float)(*(float *)&v310 * v185))
                       + (float)((float)(v225 - v161) * v192)) < 0.0 )
              *((_DWORD *)v351 + (v217 >> 5)) |= v194;
          }
          v194 = __ROL4__(v194, 1);
          v218 += 3;
          ++v217;
          --v219;
        }
        while ( v219 );
        goto LABEL_54;
      }
      v193 = *(_QWORD *)(v139 + 40);
      v194 = 1;
      v195 = 2;
      v196 = ((unsigned int)(v167 - 4) >> 2) + 1;
      v197 = (_DWORD *)(v193 + 12);
      v198 = v196;
      v164 = 4 * v196;
      v168 = 4LL * v196;
      do
      {
        if ( (float)((float)((float)((float)(*(float *)&v353[3 * *(v197 - 3) + 1] - v158) * v190)
                           + (float)((float)(*(float *)&v353[3 * *(v197 - 3)] - v157) * v185))
                   + (float)((float)(v354[3 * *(v197 - 3)] - v161) * v192)) < 0.0 )
        {
          v199 = 3 * *(v197 - 2);
          v200 = *(float *)&v353[v199 + 1];
          v201 = v354[v199];
          *(float *)&v310 = *(float *)&v353[v199] - v157;
          *((float *)&v310 + 1) = v200 - v158;
          v311 = v201 - v161;
          if ( (float)((float)((float)((float)(v200 - v158) * v190) + (float)(*(float *)&v310 * v185))
                     + (float)((float)(v201 - v161) * v192)) < 0.0 )
            *((_DWORD *)v351 + ((v195 - 2) >> 5)) |= v194;
        }
        v202 = __ROL4__(v194, 1);
        if ( (float)((float)((float)((float)(*(float *)&v353[3 * *v197 + 1] - v158) * v190)
                           + (float)((float)(*(float *)&v353[3 * *v197] - v157) * v185))
                   + (float)((float)(v354[3 * *v197] - v161) * v192)) < 0.0 )
        {
          v203 = 3 * v197[1];
          v204 = *(float *)&v353[v203 + 1];
          v205 = v354[v203];
          *(float *)&v310 = *(float *)&v353[v203] - v157;
          *((float *)&v310 + 1) = v204 - v158;
          v311 = v205 - v161;
          if ( (float)((float)((float)((float)(v204 - v158) * v190) + (float)(*(float *)&v310 * v185))
                     + (float)((float)(v205 - v161) * v192)) < 0.0 )
            *((_DWORD *)v351 + ((v195 - 1) >> 5)) |= v202;
        }
        v206 = __ROL4__(v202, 1);
        if ( (float)((float)((float)((float)(*(float *)&v353[3 * v197[3] + 1] - v158) * v190)
                           + (float)((float)(*(float *)&v353[3 * v197[3]] - v157) * v185))
                   + (float)((float)(v354[3 * v197[3]] - v161) * v192)) < 0.0 )
        {
          v207 = 3 * v197[4];
          v208 = *(float *)&v353[v207 + 1];
          v209 = v354[v207];
          *(float *)&v310 = *(float *)&v353[v207] - v157;
          *((float *)&v310 + 1) = v208 - v158;
          v311 = v209 - v161;
          if ( (float)((float)((float)((float)(v208 - v158) * v190) + (float)(*(float *)&v310 * v185))
                     + (float)((float)(v209 - v161) * v192)) < 0.0 )
            *((_DWORD *)v351 + (v195 >> 5)) |= v206;
        }
        v210 = __ROL4__(v206, 1);
        v211 = 3 * v197[6];
        v212 = *(float *)&v353[v211 + 1];
        v213 = v354[v211];
        v312 = *(float *)&v353[v211] - v157;
        v313 = v212 - v158;
        v314 = v213 - v161;
        if ( (float)((float)((float)((float)(v212 - v158) * v190) + (float)(v312 * v185))
                   + (float)((float)(v213 - v161) * v192)) < 0.0 )
        {
          v214 = 3 * v197[7];
          v215 = *(float *)&v353[v214 + 1];
          v216 = v354[v214];
          *(float *)&v310 = *(float *)&v353[v214] - v157;
          *((float *)&v310 + 1) = v215 - v158;
          v311 = v216 - v161;
          if ( (float)((float)((float)((float)(v215 - v158) * v190) + (float)(*(float *)&v310 * v185))
                     + (float)((float)(v216 - v161) * v192)) < 0.0 )
            *((_DWORD *)v351 + ((v195 + 1) >> 5)) |= v210;
        }
        v194 = __ROL4__(v210, 1);
        v197 += 12;
        v195 += 4;
        --v198;
      }
      while ( v198 );
      if ( v164 < v167 )
        goto LABEL_49;
LABEL_54:
      v226 = v162[8];
      v227 = 0;
      v228 = 0;
      if ( v226 < 4 )
      {
        if ( v226 <= 0 )
          goto LABEL_78;
        v229 = *((_QWORD *)v162 + 5);
        v230 = 1;
LABEL_73:
        v258 = v227;
        v259 = (_DWORD *)(v229 + 12 * v228);
        v260 = (unsigned int)(v226 - v227);
        do
        {
          v261 = 3 * *v259;
          v262 = *(float *)&v355[v261 + 1] - v184;
          v263 = v356[v261] - v191;
          v264 = v185 * (float)(*(float *)&v355[v261] - v183);
          v312 = *(float *)&v355[v261] - v183;
          v313 = v262;
          v314 = v263;
          if ( (float)((float)(v264 + (float)(v190 * v262)) + (float)(v192 * v263)) > 0.0 )
          {
            v265 = 3 * v259[1];
            v266 = *(float *)&v355[v265] - v183;
            v267 = v356[v265] - v191;
            v268 = v190 * (float)(*(float *)&v355[v265 + 1] - v184);
            *((float *)&v310 + 1) = *(float *)&v355[v265 + 1] - v184;
            *(float *)&v310 = v266;
            v311 = v267;
            if ( (float)((float)(v268 + (float)(v185 * v266)) + (float)(v192 * v267)) > 0.0 )
              *((_DWORD *)v352 + (v258 >> 5)) |= v230;
          }
          v230 = __ROL4__(v230, 1);
          v259 += 3;
          ++v258;
          --v260;
        }
        while ( v260 );
        goto LABEL_78;
      }
      v229 = *((_QWORD *)v162 + 5);
      v230 = 1;
      v231 = ((unsigned int)(v226 - 4) >> 2) + 1;
      v232 = 2;
      v233 = v231;
      v234 = (_DWORD *)(v229 + 12);
      v227 = 4 * v231;
      v228 = 4LL * v231;
      do
      {
        if ( (float)((float)((float)((float)(*(float *)&v355[3 * *(v234 - 3) + 1] - v184) * v190)
                           + (float)((float)(*(float *)&v355[3 * *(v234 - 3)] - v183) * v185))
                   + (float)((float)(v356[3 * *(v234 - 3)] - v191) * v192)) > 0.0 )
        {
          v235 = 3 * *(v234 - 2);
          v236 = *(float *)&v355[v235] - v183;
          v237 = v356[v235] - v191;
          v238 = v190 * (float)(*(float *)&v355[v235 + 1] - v184);
          *((float *)&v310 + 1) = *(float *)&v355[v235 + 1] - v184;
          *(float *)&v310 = v236;
          v311 = v237;
          if ( (float)((float)(v238 + (float)(v185 * v236)) + (float)(v192 * v237)) > 0.0 )
            *((_DWORD *)v352 + ((v232 - 2) >> 5)) |= v230;
        }
        v239 = __ROL4__(v230, 1);
        if ( (float)((float)((float)((float)(*(float *)&v355[3 * *v234 + 1] - v184) * v190)
                           + (float)((float)(*(float *)&v355[3 * *v234] - v183) * v185))
                   + (float)((float)(v356[3 * *v234] - v191) * v192)) > 0.0 )
        {
          v240 = 3 * v234[1];
          v241 = *(float *)&v355[v240] - v183;
          v242 = v356[v240] - v191;
          v243 = v190 * (float)(*(float *)&v355[v240 + 1] - v184);
          *((float *)&v310 + 1) = *(float *)&v355[v240 + 1] - v184;
          *(float *)&v310 = v241;
          v311 = v242;
          if ( (float)((float)(v243 + (float)(v185 * v241)) + (float)(v192 * v242)) > 0.0 )
            *((_DWORD *)v352 + ((v232 - 1) >> 5)) |= v239;
        }
        v244 = __ROL4__(v239, 1);
        if ( (float)((float)((float)((float)(*(float *)&v355[3 * v234[3] + 1] - v184) * v190)
                           + (float)((float)(*(float *)&v355[3 * v234[3]] - v183) * v185))
                   + (float)((float)(v356[3 * v234[3]] - v191) * v192)) > 0.0 )
        {
          v245 = 3 * v234[4];
          v246 = *(float *)&v355[v245] - v183;
          v247 = v356[v245] - v191;
          v248 = v190 * (float)(*(float *)&v355[v245 + 1] - v184);
          *((float *)&v310 + 1) = *(float *)&v355[v245 + 1] - v184;
          *(float *)&v310 = v246;
          v311 = v247;
          if ( (float)((float)(v248 + (float)(v185 * v246)) + (float)(v192 * v247)) > 0.0 )
            *((_DWORD *)v352 + (v232 >> 5)) |= v244;
        }
        v249 = __ROL4__(v244, 1);
        v250 = 3 * v234[6];
        v251 = *(float *)&v355[v250 + 1] - v184;
        v252 = v356[v250] - v191;
        v253 = v185 * (float)(*(float *)&v355[v250] - v183);
        v312 = *(float *)&v355[v250] - v183;
        v313 = v251;
        v314 = v252;
        if ( (float)((float)(v253 + (float)(v190 * v251)) + (float)(v192 * v252)) > 0.0 )
        {
          v254 = 3 * v234[7];
          v255 = *(float *)&v355[v254] - v183;
          v256 = v356[v254] - v191;
          v257 = v190 * (float)(*(float *)&v355[v254 + 1] - v184);
          *((float *)&v310 + 1) = *(float *)&v355[v254 + 1] - v184;
          *(float *)&v310 = v255;
          v311 = v256;
          if ( (float)((float)(v257 + (float)(v185 * v255)) + (float)(v192 * v256)) > 0.0 )
            *((_DWORD *)v352 + ((v232 + 1) >> 5)) |= v249;
        }
        v230 = __ROL4__(v249, 1);
        v234 += 12;
        v232 += 4;
        --v233;
      }
      while ( v233 );
      if ( v227 < v226 )
        goto LABEL_73;
LABEL_78:
      v139 = v329;
      v269 = 0;
      v315 = 0;
      if ( v167 > 0 )
      {
        v270 = 0;
        do
        {
          v271 = 0;
          if ( v226 > 0 )
          {
            v272 = 1;
            v273 = __ROL4__(1, v269) & *((_DWORD *)v351 + ((__int64)v269 >> 5));
            v274 = 0;
            do
            {
              if ( !v273 || (v272 & *((_DWORD *)v352 + ((__int64)v271 >> 5))) == 0 )
              {
                v275 = *(_QWORD *)(v329 + 40);
                v276 = 3 * *(_DWORD *)(v275 + v270);
                v277 = *(float *)&v353[v276 + 1];
                v312 = *(float *)&v353[v276];
                v278 = v354[v276];
                LODWORD(v276) = *(_DWORD *)(v275 + v270 + 4);
                v279 = *((_QWORD *)v162 + 5);
                v314 = v278;
                v313 = v277;
                v280 = 3 * (int)v276;
                v281 = v353[v280 + 1];
                LODWORD(v310) = v353[v280];
                v282 = v354[v280];
                LODWORD(v280) = *(_DWORD *)(v279 + v274);
                v311 = v282;
                HIDWORD(v310) = v281;
                v283 = 3 * (int)v280;
                v284 = *(float *)&v355[v283 + 1];
                v339[0] = *(float *)&v355[v283];
                v285 = v356[v283];
                LODWORD(v283) = *(_DWORD *)(v279 + v274 + 4);
                v339[2] = v285;
                v339[1] = v284;
                v286 = 3 * (int)v283;
                v287 = *(float *)&v355[v286 + 1];
                v338[0] = *(float *)&v355[v286];
                v288 = v356[v286];
                v338[1] = v287;
                v338[2] = v288;
                if ( (unsigned int)sub_14008CEB0(
                                     (float *)&v340,
                                     (float *)&v342,
                                     &v317,
                                     &v312,
                                     (float *)&v310,
                                     v339,
                                     v338) )
                {
                  v289 = *(float *)&v342;
                  v290 = *((float *)&v342 + 1);
                  v291 = (__m128)(unsigned int)v340;
                  v292 = (__m128)HIDWORD(v340);
                  v293 = *(float *)&v342 - *(float *)&v340;
                  v294 = v343;
                  v295 = *((float *)&v342 + 1) - *((float *)&v340 + 1);
                  v296 = v341;
                  v297 = v343 - v341;
                  *(float *)&v323 = *(float *)&v342 - *(float *)&v340;
                  *((float *)&v323 + 1) = *((float *)&v342 + 1) - *((float *)&v340 + 1);
                  v324 = v343 - v341;
                  if ( (float)((float)((float)(v332 * (float)(*((float *)&v342 + 1) - *((float *)&v340 + 1)))
                                     + (float)(v333 * (float)(*(float *)&v342 - *(float *)&v340)))
                             + (float)(v334 * (float)(v343 - v341))) <= 0.0
                    && sub_140187410(v339, v338, &v320, &v312, (float *)&v310)
                    && sub_140187410(&v312, (float *)&v310, v350, v339, v338) )
                  {
                    v298 = fsqrt((float)((float)(v295 * v295) + (float)(v293 * v293)) + (float)(v297 * v297));
                    if ( v298 == 0.0 )
                    {
                      v323 = 0;
                      v324 = 0.0;
                    }
                    else
                    {
                      *(float *)&v323 = (float)(1.0 / v298) * v293;
                      *((float *)&v323 + 1) = (float)(1.0 / v298) * v295;
                      v324 = (float)(1.0 / v298) * v297;
                    }
                    v291.m128_f32[0] = (float)(v291.m128_f32[0] + v289) * 0.5;
                    v292.m128_f32[0] = (float)(v292.m128_f32[0] + v290) * 0.5;
                    v311 = (float)(v296 + v294) * 0.5;
                    v299 = _mm_unpacklo_ps(v291, v292).m128_u64[0];
                    v300 = v292.m128_f32[0];
                    *(float *)&v301 = v292.m128_f32[0] - a7[1];
                    v310 = v299;
                    v340 = v299;
                    v342 = v299;
                    LODWORD(v299) = v291.m128_i32[0];
                    *(float *)&v302 = v291.m128_f32[0] - *a7;
                    v341 = v311;
                    v343 = v311;
                    v310 = __PAIR64__(v301, v302);
                    v303 = v300 - a5[1];
                    v312 = *(float *)&v299 - *a5;
                    *(float *)&v299 = v311 - a5[2];
                    v304 = v311 - a7[2];
                    v313 = v303;
                    v314 = *(float *)&v299;
                    v311 = v304;
                    sub_1400052C0(
                      v319,
                      v318,
                      (unsigned int *)&v312,
                      (unsigned int *)&v310,
                      (unsigned int *)&v323,
                      v317,
                      0x3ECCCCCDu,
                      0.015625,
                      0x3D000000u);
                    v316 = 1;
                  }
                }
              }
              v226 = v162[8];
              ++v271;
              v272 = __ROL4__(v272, 1);
              v274 += 12;
            }
            while ( v271 < v226 );
            v269 = v315;
            v139 = v329;
          }
          ++v269;
          v270 += 12;
          v315 = v269;
        }
        while ( v269 < *(_DWORD *)(v139 + 32) );
        v161 = v335;
        v157 = v336;
        v158 = v337;
        v46 = a7;
      }
      v162 += 14;
      v11 = v331;
      v8 = v330;
      ++v325;
    }
    while ( v325 < v331[4] );
    v10 = a5;
    v138 = v327;
    v78 = (__int64)v328;
    v137 = v326;
LABEL_98:
    v8 = v330;
    ++v137;
    v139 += 56;
    v326 = v137;
    v329 = v139;
  }
  while ( v137 < *(_DWORD *)(v78 + 16) );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v306 ^ v357);
}

