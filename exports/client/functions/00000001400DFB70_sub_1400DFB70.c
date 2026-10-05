/* Address: 0x1400dfb70 | Name: sub_1400DFB70 | Size: 6698 bytes */
__int64 __fastcall sub_1400DFB70(int a1, float *a2, float *a3, int a4)
{
  float v4; // xmm3_4
  float *v5; // rdi
  __int64 v6; // rbx
  float *v7; // rsi
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  __int64 v16; // rax
  signed int v17; // r14d
  __int64 v18; // r10
  __int64 v19; // r13
  __int64 v20; // rdx
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm13_4
  float v28; // xmm14_4
  float v29; // xmm15_4
  signed __int64 v30; // rsi
  float *v31; // rax
  signed __int64 v32; // r8
  signed __int64 v33; // r14
  signed __int64 v34; // r9
  signed __int64 v35; // r10
  signed __int64 v36; // r11
  signed __int64 v37; // r15
  signed __int64 v38; // r12
  _BYTE *v39; // rcx
  signed __int64 v40; // r13
  unsigned __int64 v41; // rcx
  signed __int64 v42; // rdx
  float v43; // xmm4_4
  float v44; // xmm6_4
  float v45; // xmm0_4
  float v46; // xmm5_4
  float v47; // xmm3_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  float v52; // xmm6_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm0_4
  float v58; // xmm5_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm4_4
  float v63; // xmm1_4
  float v64; // xmm6_4
  float v65; // xmm2_4
  float v66; // xmm1_4
  float v67; // xmm1_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm3_4
  float v71; // xmm2_4
  float v72; // xmm0_4
  signed __int64 v73; // rdi
  float v74; // xmm0_4
  float v75; // xmm6_4
  float v76; // xmm7_4
  float v77; // xmm8_4
  float v78; // xmm9_4
  float v79; // xmm10_4
  float v80; // xmm11_4
  float v81; // xmm12_4
  float v82; // xmm13_4
  float v83; // xmm14_4
  float v84; // xmm15_4
  float *v85; // rax
  __int64 v86; // rdx
  float v87; // xmm1_4
  float v88; // xmm2_4
  float v89; // xmm4_4
  float v90; // xmm3_4
  float v91; // xmm5_4
  float v92; // xmm1_4
  float v93; // xmm5_4
  float v94; // xmm4_4
  float v95; // xmm0_4
  float v96; // xmm2_4
  float v97; // xmm3_4
  signed int v98; // r12d
  int *v99; // r15
  float v100; // xmm12_4
  float v101; // xmm13_4
  float v102; // xmm15_4
  __int64 v103; // rcx
  float v104; // xmm3_4
  float v105; // xmm1_4
  __int64 v106; // rax
  float v107; // xmm1_4
  float v108; // xmm3_4
  float v109; // xmm11_4
  float v110; // xmm9_4
  float v111; // xmm10_4
  float v112; // xmm11_4
  float v113; // xmm9_4
  float v114; // xmm6_4
  float v115; // xmm7_4
  float v116; // xmm8_4
  float v117; // xmm3_4
  float v118; // xmm8_4
  float v119; // xmm6_4
  float v120; // xmm7_4
  __int64 v121; // rax
  float v122; // xmm6_4
  float v123; // xmm7_4
  float v124; // xmm6_4
  float v125; // xmm8_4
  float v126; // xmm0_4
  float v127; // xmm7_4
  float v128; // xmm6_4
  float v129; // xmm3_4
  float v130; // xmm8_4
  float v131; // xmm6_4
  float v132; // xmm7_4
  int v133; // edx
  signed int v134; // r15d
  __int64 v135; // r13
  __int64 v136; // r14
  _DWORD *v137; // r12
  float v138; // xmm7_4
  float v139; // xmm10_4
  float v140; // xmm5_4
  float v141; // xmm12_4
  float v142; // xmm8_4
  float v143; // xmm13_4
  float v144; // xmm11_4
  float v145; // xmm6_4
  float v146; // xmm9_4
  __int64 v147; // rcx
  float v148; // xmm2_4
  float v149; // xmm3_4
  float v150; // xmm4_4
  float v151; // xmm15_4
  float v152; // xmm0_4
  float v153; // xmm2_4
  float v154; // xmm15_4
  float v155; // xmm0_4
  float v156; // xmm3_4
  float v157; // xmm1_4
  float v158; // xmm0_4
  float v159; // xmm4_4
  float v160; // xmm1_4
  float v161; // xmm1_4
  float v162; // xmm0_4
  float v163; // xmm2_4
  float v164; // xmm0_4
  float v165; // xmm3_4
  float v166; // xmm0_4
  float v167; // xmm4_4
  float v168; // xmm1_4
  float v169; // xmm0_4
  float v170; // xmm2_4
  float v171; // xmm0_4
  float v172; // xmm3_4
  float v173; // xmm0_4
  float v174; // xmm4_4
  float v175; // xmm1_4
  float v176; // xmm6_4
  float v177; // xmm0_4
  float v178; // xmm0_4
  float v179; // xmm5_4
  float v180; // xmm5_4
  float v181; // xmm12_4
  float v182; // xmm0_4
  float v183; // xmm4_4
  float v184; // xmm1_4
  float v185; // xmm10_4
  float v186; // xmm0_4
  float v187; // xmm10_4
  float v188; // xmm11_4
  float v189; // xmm3_4
  float v190; // xmm0_4
  float v191; // xmm5_4
  float v192; // xmm7_4
  float v193; // xmm9_4
  float v194; // xmm10_4
  float v195; // xmm11_4
  float v196; // xmm13_4
  float v197; // xmm3_4
  float v198; // xmm4_4
  float v199; // xmm2_4
  float v200; // xmm0_4
  float v201; // xmm1_4
  float v202; // xmm8_4
  bool v203; // cf
  float v204; // xmm13_4
  float v205; // xmm10_4
  float v206; // xmm11_4
  float v207; // xmm2_4
  float v208; // xmm8_4
  float v209; // xmm13_4
  float v210; // xmm10_4
  float v211; // xmm11_4
  float v212; // xmm7_4
  float v213; // xmm10_4
  float v214; // xmm11_4
  float v215; // xmm8_4
  float v216; // xmm3_4
  float v217; // xmm10_4
  float v218; // xmm8_4
  float v219; // xmm11_4
  float v220; // xmm13_4
  float v221; // xmm5_4
  float v222; // xmm4_4
  float v223; // xmm3_4
  float v224; // xmm2_4
  float v225; // xmm0_4
  float v226; // xmm1_4
  float v227; // xmm9_4
  float v228; // xmm5_4
  float v229; // xmm4_4
  float v230; // xmm13_4
  float v231; // xmm2_4
  float v232; // xmm9_4
  unsigned int v233; // xmm4_4
  float v234; // xmm13_4
  float v235; // xmm5_4
  float *v236; // r15
  __int64 v238; // [rsp+0h] [rbp-100h] BYREF
  float v239; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v240; // [rsp+44h] [rbp-BCh]
  float v241; // [rsp+4Ch] [rbp-B4h]
  unsigned int v242; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v243; // [rsp+54h] [rbp-ACh]
  unsigned int v244; // [rsp+58h] [rbp-A8h]
  float v245; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v246; // [rsp+68h] [rbp-98h] BYREF
  float v247; // [rsp+70h] [rbp-90h]
  float v248; // [rsp+78h] [rbp-88h] BYREF
  float v249; // [rsp+7Ch] [rbp-84h]
  float v250; // [rsp+80h] [rbp-80h]
  unsigned int v251; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v252; // [rsp+8Ch] [rbp-74h]
  unsigned int v253; // [rsp+90h] [rbp-70h]
  unsigned __int64 v254; // [rsp+98h] [rbp-68h] BYREF
  float v255; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v256; // [rsp+A8h] [rbp-58h]
  float v257; // [rsp+B0h] [rbp-50h]
  signed __int64 v258; // [rsp+B8h] [rbp-48h]
  signed __int64 v259; // [rsp+C0h] [rbp-40h]
  __int64 v260; // [rsp+C8h] [rbp-38h]
  __int64 v261; // [rsp+D0h] [rbp-30h]
  float *v262; // [rsp+D8h] [rbp-28h]
  float *v263; // [rsp+E0h] [rbp-20h]
  __int64 v264; // [rsp+E8h] [rbp-18h]
  __int64 v265; // [rsp+F0h] [rbp-10h]
  signed __int64 v266; // [rsp+F8h] [rbp-8h]
  __int64 v267; // [rsp+100h] [rbp+0h]
  signed __int64 v268; // [rsp+108h] [rbp+8h]
  signed __int64 v269; // [rsp+110h] [rbp+10h]
  int v270; // [rsp+118h] [rbp+18h]
  int v271; // [rsp+120h] [rbp+20h] BYREF
  int v272; // [rsp+124h] [rbp+24h] BYREF
  int v273; // [rsp+128h] [rbp+28h] BYREF
  char v274; // [rsp+12Ch] [rbp+2Ch] BYREF
  _BYTE v275[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v276[4]; // [rsp+134h] [rbp+34h] BYREF
  char v277; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v278[4]; // [rsp+13Ch] [rbp+3Ch] BYREF
  _BYTE v279[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v281[4]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v282[3028]; // [rsp+14Ch] [rbp+4Ch] BYREF
  __int64 v283; // [rsp+D20h] [rbp+C20h]

  v4 = *a2;
  v5 = a3;
  v6 = 5210LL * a1;
  v270 = a4;
  v7 = a2;
  v263 = a3;
  v262 = a2;
  v8 = *(float *)&dword_140404A6C[v6 + 129716753];
  if ( v4 < v8 && v8 > *a3 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v238 ^ v283);
  v9 = *(float *)&dword_140404A6C[v6 + 129716754];
  v10 = a2[1];
  if ( v10 < v9 && v9 > a3[1] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v238 ^ v283);
  v11 = *(float *)&dword_140404A6C[v6 + 129716755];
  v12 = a2[2];
  if ( v12 < v11 && v11 > a3[2] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v238 ^ v283);
  v13 = *(float *)&dword_140404A6C[v6 + 129716756];
  if ( v4 > v13 && v13 < *a3 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v238 ^ v283);
  v14 = *(float *)&dword_140404A6C[v6 + 129716757];
  if ( v10 > v14 && v14 < a3[1] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v238 ^ v283);
  v15 = *(float *)&dword_140404A6C[v6 + 129716758];
  if ( v12 > v15 && v15 < a3[2] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v238 ^ v283);
  v16 = (int)dword_140404A6C[v6 + 129716710];
  v17 = 0;
  v18 = 0;
  v19 = 180288 * v16;
  dword_140404A6C[73006987] = 1065353216;
  v260 = v16;
  v261 = 180288 * v16;
  v20 = (int)dword_140404A6C[45072 * v16 + 335170684];
  v265 = v20;
  if ( v20 >= 4 )
  {
    v21 = *(float *)&dword_140404A6C[v6 + 129716726];
    v22 = *(float *)&dword_140404A6C[v6 + 129716720];
    v23 = *(float *)&dword_140404A6C[v6 + 129716727];
    v24 = *(float *)&dword_140404A6C[v6 + 129716721];
    v25 = *(float *)&dword_140404A6C[v6 + 129716728];
    v26 = *(float *)&dword_140404A6C[v6 + 129716722];
    v27 = *(float *)&dword_140404A6C[v6 + 129716729];
    v28 = *(float *)&dword_140404A6C[v6 + 129716730];
    v29 = *(float *)&dword_140404A6C[v6 + 129716731];
    v269 = &v281[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v30 = v269;
    v266 = &v282[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v31 = (float *)((char *)&dword_140404A6C[335170686] + v19);
    v268 = (char *)&v271 - v19 - (char *)&dword_140404A6C[335170686];
    v32 = (char *)&v272 - v19 - (char *)&dword_140404A6C[335170686];
    v33 = v268;
    v34 = (char *)&v273 - v19 - (char *)&dword_140404A6C[335170686];
    v35 = &v275[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v259 = &v274 - v19 - (char *)&dword_140404A6C[335170686];
    v36 = &v276[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v37 = &v278[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v38 = &v279[-v19] - (_BYTE *)&dword_140404A6C[335170686];
    v258 = &v277 - v19 - (char *)&dword_140404A6C[335170686];
    v39 = v281 - v19 + 2;
    v40 = v259;
    v267 = v39 - (_BYTE *)&dword_140404A6C[335170686];
    v41 = ((unsigned __int64)(v20 - 4) >> 2) + 1;
    v264 = 4 * v41;
    v42 = v258;
    do
    {
      v43 = *(v31 - 1);
      v44 = v31[1];
      v45 = v29 * *v31;
      v46 = v31[3];
      v47 = (float)((float)((float)(v23 * v43) + v24) + (float)(v28 * *v31))
          + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v44);
      v48 = *(float *)&dword_140404A6C[v6 + 129716734];
      *(float *)((char *)v31 + v33) = (float)((float)((float)(v21 * v43) + v22) + (float)(v27 * *v31))
                                    + (float)(*(float *)&dword_140404A6C[v6 + 129716732] * v44);
      v49 = v25 * v43;
      v50 = v31[2];
      v51 = v48 * v44;
      v52 = v31[4];
      *(float *)((char *)v31 + v32) = v47;
      v53 = (float)((float)(v49 + v26) + v45) + v51;
      v54 = *(float *)&dword_140404A6C[v6 + 129716732] * v52;
      *(float *)((char *)v31 + v34) = v53;
      v55 = (float)((float)((float)(v21 * v50) + v22) + (float)(v27 * v46)) + v54;
      v56 = (float)((float)(v23 * v50) + v24) + (float)(v28 * v46);
      v57 = v29 * v46;
      v58 = v31[6];
      v59 = v56 + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v52);
      v60 = *(float *)&dword_140404A6C[v6 + 129716734];
      *(float *)((char *)v31 + v40) = v55;
      v61 = v25 * v50;
      v62 = v31[5];
      v63 = v60 * v52;
      v64 = v31[7];
      *(float *)((char *)v31 + v35) = v59;
      v65 = (float)((float)(v61 + v26) + v57) + v63;
      v66 = *(float *)&dword_140404A6C[v6 + 129716732] * v64;
      *(float *)((char *)v31 + v36) = v65;
      *(float *)((char *)v31 + v42) = (float)((float)((float)(v21 * v62) + v22) + (float)(v27 * v58)) + v66;
      v67 = *(float *)&dword_140404A6C[v6 + 129716734] * v64;
      *(float *)((char *)v31 + v37) = (float)((float)((float)(v23 * v62) + v24) + (float)(v28 * v58))
                                    + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v64);
      v68 = (float)((float)((float)(v25 * v62) + v26) + (float)(v29 * v58)) + v67;
      v69 = v31[9];
      v70 = v31[8];
      *(float *)((char *)v31 + v38) = v68;
      v71 = v31[10];
      v248 = (float)((float)(v21 * v70) + v22) + (float)(v27 * v69);
      v249 = (float)((float)(v23 * v70) + v24) + (float)(v28 * v69);
      v72 = *(float *)&dword_140404A6C[v6 + 129716732] * v71;
      v250 = (float)((float)(v25 * v70) + v26) + (float)(v29 * v69);
      *(float *)((char *)v31 + v267) = v72 + v248;
      v73 = v266;
      v74 = (float)(*(float *)&dword_140404A6C[v6 + 129716734] * v71)
          + (float)((float)((float)(v25 * v70) + v26) + (float)(v29 * v69));
      *(float *)((char *)v31 + v30) = (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v71)
                                    + (float)((float)((float)(v23 * v70) + v24) + (float)(v28 * v69));
      *(float *)((char *)v31 + v73) = v74;
      v31 += 12;
      --v41;
    }
    while ( v41 );
    v20 = v265;
    v18 = v264;
    v17 = 0;
    v5 = v263;
    v7 = v262;
    v19 = v261;
    if ( v264 >= v265 )
      goto LABEL_20;
    v16 = v260;
    goto LABEL_18;
  }
  if ( v20 > 0 )
  {
LABEL_18:
    v75 = *(float *)&dword_140404A6C[v6 + 129716726];
    v76 = *(float *)&dword_140404A6C[v6 + 129716720];
    v77 = *(float *)&dword_140404A6C[v6 + 129716727];
    v78 = *(float *)&dword_140404A6C[v6 + 129716721];
    v79 = *(float *)&dword_140404A6C[v6 + 129716728];
    v80 = *(float *)&dword_140404A6C[v6 + 129716722];
    v81 = *(float *)&dword_140404A6C[v6 + 129716729];
    v82 = *(float *)&dword_140404A6C[v6 + 129716730];
    v83 = *(float *)&dword_140404A6C[v6 + 129716731];
    v84 = *(float *)&dword_140404A6C[v6 + 129716732];
    v85 = (float *)(0x140000000LL + 12 * (v18 + 15024 * v16) + 1344896100);
    v86 = v20 - v18;
    do
    {
      v87 = *(v85 - 1);
      v88 = *v85;
      v89 = v77 * v87;
      v90 = v79 * v87;
      v91 = (float)(v75 * v87) + v76;
      v92 = *(float *)&dword_140404A6C[v6 + 129716733];
      v93 = v91 + (float)(v81 * *v85);
      v94 = (float)(v89 + v78) + (float)(v82 * *v85);
      v248 = v93;
      v95 = v83 * v88;
      v96 = v85[1];
      v97 = (float)(v90 + v80) + v95;
      v249 = v94;
      v250 = v97;
      *(float *)((char *)v85 + (char *)&v272 - v19 - (char *)&dword_140404A6C[335170686]) = (float)(v92 * v96) + v94;
      *(float *)((char *)v85 + (char *)&v271 - v19 - (char *)&dword_140404A6C[335170686]) = (float)(v84 * v96) + v93;
      *(float *)((char *)v85 + (char *)&v273 - v19 - (char *)&dword_140404A6C[335170686]) = (float)(*(float *)&dword_140404A6C[v6 + 129716734]
                                                                                                  * v96)
                                                                                          + v97;
      v85 += 3;
      --v86;
    }
    while ( v86 );
  }
LABEL_20:
  v98 = 0;
  if ( *(int *)((char *)&dword_140404A6C[335173757] + v19) > 0 )
  {
    v99 = (int *)(0x140000000LL + v19 + 1344908400);
    do
    {
      v100 = *((float *)&v271 + 3 * *(v99 - 1));
      v101 = *((float *)&v272 + 3 * *(v99 - 1));
      v102 = *((float *)&v273 + 3 * *(v99 - 1));
      v103 = 3LL * *v99;
      v248 = v100;
      v104 = *((float *)&v271 + v103);
      v105 = *((float *)&v273 + v103);
      v106 = v99[1];
      HIDWORD(v254) = *(&v272 + v103);
      v255 = v105;
      v107 = v105 - v102;
      *(float *)&v254 = v104;
      v108 = v104 - v100;
      v249 = v101;
      v109 = *((float *)&v273 + 3 * v106);
      v110 = *((float *)&v271 + 3 * v106);
      HIDWORD(v246) = *(&v272 + 3 * v106);
      v111 = *((float *)&v246 + 1) - v101;
      v247 = v109;
      v112 = v109 - v102;
      *(float *)&v246 = v110;
      v113 = v110 - v100;
      v250 = v102;
      v114 = (float)((float)(*((float *)&v246 + 1) - v101) * v107)
           - (float)(v112 * (float)(*((float *)&v254 + 1) - v101));
      v115 = (float)(v112 * v108) - (float)(v113 * v107);
      v116 = (float)(v113 * (float)(*((float *)&v254 + 1) - v101))
           - (float)((float)(*((float *)&v246 + 1) - v101) * v108);
      v117 = fsqrt((float)((float)(v115 * v115) + (float)(v114 * v114)) + (float)(v116 * v116));
      if ( v117 == 0.0 )
      {
        v244 = 0;
        v119 = 0.0;
        v120 = 0.0;
        v118 = 0.0;
      }
      else
      {
        v118 = v116 * (float)(1.0 / v117);
        v119 = v114 * (float)(1.0 / v117);
        v244 = LODWORD(v118);
        v120 = v115 * (float)(1.0 / v117);
      }
      v243 = LODWORD(v120);
      v242 = LODWORD(v119);
      if ( sub_140077FA0((float *)&v251, (float *)&v242, &v239, v7, v5, &v248, (float *)&v254, (float *)&v246)
        && v239 < *(float *)&dword_140404A6C[73006987] )
      {
        dword_140404A6C[73006994] = dword_140404A6C[v6 + 129716769];
        dword_140404A6C[73006995] = dword_140404A6C[73006994];
        dword_140404A6C[73006996] = dword_140404A6C[73006994];
        dword_140404A6C[73006981] = v251;
        dword_140404A6C[73006982] = v252;
        dword_140404A6C[73006983] = v253;
        *(float *)&dword_140404A6C[73006984] = v119;
        *(float *)&dword_140404A6C[73006985] = v120;
        *(float *)&dword_140404A6C[73006986] = v118;
        *(float *)&dword_140404A6C[73006987] = v239;
        dword_140404A6C[73006992] = 0;
        dword_140404A6C[73006993] = v98;
        sub_14002D370(
          (float *)&dword_140404A6C[73006998],
          (float *)&dword_140404A6C[73006981],
          &v248,
          (float *)&v254,
          (float *)&v246);
        *(_QWORD *)&dword_140404A6C[73006989] = 0;
        dword_140404A6C[73006991] = 0;
      }
      if ( *(v99 - 2) == 4 )
      {
        v254 = v246;
        v255 = v247;
        v121 = v99[2];
        v122 = *((float *)&v273 + 3 * v121);
        v123 = *((float *)&v271 + 3 * v121);
        HIDWORD(v246) = *(&v272 + 3 * v121);
        v247 = v122;
        v124 = v122 - v102;
        *(float *)&v246 = v123;
        v125 = (float)((float)(*((float *)&v246 + 1) - v101) * v112) - (float)(v124 * v111);
        v126 = v123 - v100;
        v127 = (float)((float)(v123 - v100) * v111) - (float)((float)(*((float *)&v246 + 1) - v101) * v113);
        v128 = (float)(v124 * v113) - (float)(v126 * v112);
        v129 = fsqrt((float)((float)(v128 * v128) + (float)(v125 * v125)) + (float)(v127 * v127));
        if ( v129 == 0.0 )
        {
          v242 = 0;
          v130 = 0.0;
          v131 = 0.0;
          v132 = 0.0;
        }
        else
        {
          v130 = v125 * (float)(1.0 / v129);
          v131 = v128 * (float)(1.0 / v129);
          v242 = LODWORD(v130);
          v132 = v127 * (float)(1.0 / v129);
        }
        v244 = LODWORD(v132);
        v243 = LODWORD(v131);
        if ( sub_140077FA0((float *)&v251, (float *)&v242, &v239, v7, v5, &v248, (float *)&v254, (float *)&v246)
          && v239 < *(float *)&dword_140404A6C[73006987] )
        {
          dword_140404A6C[73006994] = dword_140404A6C[v6 + 129716769];
          dword_140404A6C[73006995] = dword_140404A6C[73006994];
          dword_140404A6C[73006996] = dword_140404A6C[73006994];
          dword_140404A6C[73006981] = v251;
          dword_140404A6C[73006982] = v252;
          dword_140404A6C[73006983] = v253;
          *(float *)&dword_140404A6C[73006984] = v130;
          *(float *)&dword_140404A6C[73006985] = v131;
          *(float *)&dword_140404A6C[73006986] = v132;
          *(float *)&dword_140404A6C[73006987] = v239;
          dword_140404A6C[73006992] = 0;
          dword_140404A6C[73006993] = v98;
          sub_14002D370(
            (float *)&dword_140404A6C[73006998],
            (float *)&dword_140404A6C[73006981],
            &v248,
            (float *)&v254,
            (float *)&v246);
          *(_QWORD *)&dword_140404A6C[73006989] = 0;
          dword_140404A6C[73006991] = 0;
        }
      }
      ++v98;
      v99 += 26;
    }
    while ( v98 < *(int *)((char *)&dword_140404A6C[335173757] + v19) );
  }
  v133 = *(unsigned int *)((char *)&dword_140404A6C[335200382] + v19);
  v134 = 0;
  LODWORD(v268) = v133;
  if ( v133 > 0 )
  {
    v135 = 0;
    v136 = v260;
    v137 = (_DWORD *)(0x140000000LL + v6 * 4 + 523090428);
    while ( 1 )
    {
      if ( *v137 )
        goto LABEL_70;
      v138 = *(float *)&dword_140404A6C[v6 + 129716729];
      v139 = *(float *)&dword_140404A6C[v6 + 129716720];
      v140 = *(float *)&dword_140404A6C[v6 + 129716732];
      v141 = *(float *)&dword_140404A6C[v6 + 129716721];
      v142 = *(float *)&dword_140404A6C[v6 + 129716730];
      v143 = *(float *)&dword_140404A6C[v6 + 129716722];
      v144 = *(float *)&dword_140404A6C[v6 + 129716731];
      v145 = *(float *)&dword_140404A6C[v6 + 129716733];
      v146 = *(float *)&dword_140404A6C[v6 + 129716734];
      v147 = v135 + 180288 * v136;
      v148 = *(float *)((char *)&dword_140404A6C[335200384] + v147);
      v149 = *(float *)((char *)&dword_140404A6C[335200385] + v147);
      v150 = *(float *)((char *)&dword_140404A6C[335200386] + v147);
      v241 = (float)((float)((float)(*(float *)&dword_140404A6C[v6 + 129716726] * v148) + v139) + (float)(v138 * v149))
           + (float)(v140 * v150);
      v151 = (float)((float)(*(float *)&dword_140404A6C[v6 + 129716727] * v148) + v141) + (float)(v149 * v142);
      v152 = *(float *)&dword_140404A6C[v6 + 129716728] * v148;
      v153 = *(float *)((char *)&dword_140404A6C[335200387] + v147);
      v154 = v151 + (float)(v150 * v145);
      v155 = (float)(v152 + v143) + (float)(v149 * v144);
      v156 = *(float *)((char *)&dword_140404A6C[335200388] + v147);
      v157 = (float)(*(float *)&dword_140404A6C[v6 + 129716726] * v153) + v139;
      v158 = v155 + (float)(v150 * v146);
      v159 = *(float *)((char *)&dword_140404A6C[335200389] + v147);
      *(float *)&v259 = v158;
      *(float *)&v256 = v157 + (float)(v138 * v156);
      v160 = *(float *)&dword_140404A6C[v6 + 129716727] * v153;
      *(float *)&v256 = *(float *)&v256 + (float)(v140 * v159);
      *((float *)&v256 + 1) = (float)(v160 + v141) + (float)(v156 * v142);
      v161 = *(float *)&dword_140404A6C[v6 + 129716726];
      *((float *)&v256 + 1) = *((float *)&v256 + 1) + (float)(v159 * v145);
      v162 = *(float *)&dword_140404A6C[v6 + 129716728] * v153;
      v163 = *(float *)((char *)&dword_140404A6C[335200390] + v147);
      v164 = (float)(v162 + v143) + (float)(v156 * v144);
      v165 = *(float *)((char *)&dword_140404A6C[335200391] + v147);
      v166 = v164 + (float)(v159 * v146);
      v167 = *(float *)((char *)&dword_140404A6C[335200392] + v147);
      *(float *)&v258 = v166;
      v249 = v154;
      *(float *)&v240 = (float)((float)(v161 * v163) + v139) + (float)(v138 * v165);
      v168 = *(float *)&dword_140404A6C[v6 + 129716727] * v163;
      *(float *)&v240 = *(float *)&v240 + (float)(v140 * v167);
      *((float *)&v240 + 1) = (float)(v168 + v141) + (float)(v165 * v142);
      *((float *)&v240 + 1) = *((float *)&v240 + 1) + (float)(v167 * v145);
      v169 = *(float *)&dword_140404A6C[v6 + 129716728] * v163;
      v170 = *(float *)((char *)&dword_140404A6C[335200393] + v147);
      v171 = (float)(v169 + v143) + (float)(v165 * v144);
      v172 = *(float *)((char *)&dword_140404A6C[335200394] + v147);
      v173 = v171 + (float)(v167 * v146);
      v174 = *(float *)((char *)&dword_140404A6C[335200395] + v147);
      v175 = v174 * v145;
      v176 = v241;
      v245 = v173;
      v177 = (float)(*(float *)&dword_140404A6C[v6 + 129716726] * v170) + v139;
      v248 = v241;
      v178 = (float)(v177 + (float)(v138 * v172)) + (float)(v140 * v174);
      v179 = *(float *)&dword_140404A6C[v6 + 129716727] * v170;
      *(float *)&v263 = v178;
      v180 = v179 + v141;
      v181 = *(float *)&v259;
      v250 = *(float *)&v259;
      v182 = *(float *)&dword_140404A6C[v6 + 129716728] * v170;
      v254 = v256;
      *(float *)&v264 = (float)(v180 + (float)(v172 * v142)) + v175;
      v247 = v245;
      *(float *)&v267 = *(float *)&v256 - v241;
      v255 = *(float *)&v258;
      *(float *)&v269 = *((float *)&v256 + 1) - v154;
      *(float *)&v265 = (float)((float)(v182 + v143) + (float)(v172 * v144)) + (float)(v174 * v146);
      v246 = v240;
      v183 = *(float *)&v258 - *(float *)&v259;
      v184 = v245 - *(float *)&v259;
      *(float *)&v266 = *(float *)&v258 - *(float *)&v259;
      *(float *)&v262 = *(float *)&v240 - v241;
      v185 = (float)(*(float *)&v258 - *(float *)&v259) * (float)(*((float *)&v240 + 1) - v154);
      v186 = v245 - *(float *)&v259;
      *(float *)&v259 = *((float *)&v240 + 1) - v154;
      v187 = v185 - (float)(v186 * (float)(*((float *)&v256 + 1) - v154));
      *(float *)&v260 = v184;
      v188 = (float)(v184 * (float)(*(float *)&v256 - v241)) - (float)(v183 * (float)(*(float *)&v240 - v241));
      v189 = (float)((float)(*((float *)&v256 + 1) - v154) * (float)(*(float *)&v240 - v241))
           - (float)((float)(*(float *)&v256 - v241) * (float)(*((float *)&v240 + 1) - v154));
      v190 = fsqrt((float)((float)(v188 * v188) + (float)(v187 * v187)) + (float)(v189 * v189));
      if ( v190 == 0.0 )
      {
        v191 = 0.0;
        v192 = 0.0;
        v193 = 0.0;
      }
      else
      {
        v191 = (float)(1.0 / v190) * v187;
        v192 = (float)(1.0 / v190) * v188;
        v193 = (float)(1.0 / v190) * v189;
      }
      v194 = *v5;
      v195 = v5[1];
      v196 = v5[2];
      v197 = *v7;
      v198 = v7[1];
      v257 = v192;
      *(float *)&v261 = v191;
      v199 = (float)((float)((float)(v241 - v194) * v191) + (float)((float)(v154 - v195) * v192))
           + (float)((float)(v181 - v196) * v193);
      v200 = v7[2];
      v201 = (float)(v181 - v200) * v193;
      v202 = (float)((float)((float)(v241 - v197) * v191) + (float)((float)(v154 - v198) * v192)) + v201;
      v203 = v202 < 0.0;
      if ( v202 > 0.0 )
      {
        if ( v199 > 0.0 )
          goto LABEL_56;
        v203 = v202 < 0.0;
      }
      if ( !v203 || v199 >= 0.0 )
      {
        v204 = v196 - v200;
        v239 = (float)((float)((float)(v241 - v197) * v191) + (float)((float)(v154 - v198) * v192)) + v201;
        v205 = v194 - v197;
        v206 = v195 - v198;
        v207 = (float)((float)(v192 * v206) + (float)(v191 * v205)) + (float)(v193 * v204);
        if ( v207 != 0.0 )
        {
          v208 = v202 / v207;
          v209 = (float)(v204 * v208) + v7[2];
          v210 = (float)(v205 * v208) + v197;
          v239 = v208;
          v211 = (float)(v206 * v208) + v198;
          v253 = LODWORD(v209);
          v251 = LODWORD(v210);
          v252 = LODWORD(v211);
          if ( (float)((float)((float)((float)((float)((float)(v209 - v181) * *(float *)&v267)
                                             - (float)(*(float *)&v266 * (float)(v210 - v241)))
                                     * v192)
                             + (float)((float)((float)((float)(v211 - v154) * *(float *)&v266)
                                             - (float)((float)(v209 - v181) * *(float *)&v269))
                                     * v191))
                     + (float)((float)((float)((float)(v210 - v241) * *(float *)&v269)
                                     - (float)((float)(v211 - v154) * *(float *)&v267))
                             * v193)) >= 0.0 )
          {
            v176 = v241;
            if ( (float)((float)((float)((float)((float)((float)(v211 - *((float *)&v256 + 1))
                                                       * (float)(v245 - *(float *)&v258))
                                               - (float)((float)(v209 - *(float *)&v258)
                                                       * (float)(*((float *)&v240 + 1) - *((float *)&v256 + 1))))
                                       * *(float *)&v261)
                               + (float)((float)((float)((float)(v209 - *(float *)&v258)
                                                       * (float)(*(float *)&v240 - *(float *)&v256))
                                               - (float)((float)(v210 - *(float *)&v256)
                                                       * (float)(v245 - *(float *)&v258)))
                                       * v257))
                       + (float)((float)((float)((float)(v210 - *(float *)&v256)
                                               * (float)(*((float *)&v240 + 1) - *((float *)&v256 + 1)))
                                       - (float)((float)(v211 - *((float *)&v256 + 1))
                                               * (float)(*(float *)&v240 - *(float *)&v256)))
                               * v193)) >= 0.0 )
            {
              if ( (float)((float)((float)((float)((float)((float)(v241 - *(float *)&v240) * (float)(v209 - v245))
                                                 - (float)((float)(v181 - v245) * (float)(v210 - *(float *)&v240)))
                                         * v257)
                                 + (float)((float)((float)((float)(v181 - v245) * (float)(v211 - *((float *)&v240 + 1)))
                                                 - (float)((float)(v154 - *((float *)&v240 + 1)) * (float)(v209 - v245)))
                                         * *(float *)&v261))
                         + (float)((float)((float)((float)(v154 - *((float *)&v240 + 1))
                                                 * (float)(v210 - *(float *)&v240))
                                         - (float)((float)(v241 - *(float *)&v240)
                                                 * (float)(v211 - *((float *)&v240 + 1))))
                                 * v193)) >= 0.0
                && v208 < *(float *)&dword_140404A6C[73006987] )
              {
                dword_140404A6C[73006994] = dword_140404A6C[v6 + 129716769];
                dword_140404A6C[73006995] = dword_140404A6C[73006994];
                dword_140404A6C[73006996] = dword_140404A6C[73006994];
                dword_140404A6C[73006984] = v261;
                *(float *)&dword_140404A6C[73006981] = v210;
                *(float *)&dword_140404A6C[73006982] = v211;
                *(float *)&dword_140404A6C[73006983] = v209;
                *(float *)&dword_140404A6C[73006985] = v257;
                *(float *)&dword_140404A6C[73006986] = v193;
                *(float *)&dword_140404A6C[73006987] = v208;
                dword_140404A6C[73006992] = 1;
                dword_140404A6C[73006993] = v134;
                sub_14002D370(
                  (float *)&dword_140404A6C[73006998],
                  (float *)&dword_140404A6C[73006981],
                  &v248,
                  (float *)&v254,
                  (float *)&v246);
                v133 = v268;
                *(_QWORD *)&dword_140404A6C[73006989] = 0;
                dword_140404A6C[73006991] = 0;
              }
              v176 = v241;
            }
          }
        }
      }
LABEL_56:
      v212 = *(float *)&v260;
      v254 = v240;
      v255 = v245;
      v246 = __PAIR64__(v264, (unsigned int)v263);
      v247 = *(float *)&v265;
      v213 = (float)(*(float *)&v260 * (float)(*(float *)&v264 - v154))
           - (float)((float)(*(float *)&v265 - v181) * *(float *)&v259);
      v214 = (float)(*(float *)&v259 * (float)(*(float *)&v263 - v176))
           - (float)((float)(*(float *)&v264 - v154) * *(float *)&v262);
      v215 = (float)((float)(*(float *)&v265 - v181) * *(float *)&v262)
           - (float)(*(float *)&v260 * (float)(*(float *)&v263 - v176));
      v216 = fsqrt((float)((float)(v215 * v215) + (float)(v213 * v213)) + (float)(v214 * v214));
      if ( v216 == 0.0 )
      {
        v242 = 0;
        v217 = 0.0;
        v243 = 0;
        v218 = 0.0;
        v244 = 0;
        v219 = 0.0;
      }
      else
      {
        v217 = v213 * (float)(1.0 / v216);
        v218 = v215 * (float)(1.0 / v216);
        v219 = v214 * (float)(1.0 / v216);
        v242 = LODWORD(v217);
        v243 = LODWORD(v218);
        v244 = LODWORD(v219);
      }
      v220 = *v5;
      v221 = v5[1];
      v222 = v5[2];
      v223 = *v7;
      v224 = (float)((float)((float)(v176 - *v5) * v217) + (float)((float)(v154 - v221) * v218))
           + (float)((float)(v181 - v222) * v219);
      v225 = v7[2];
      v226 = (float)(v181 - v225) * v219;
      v227 = (float)((float)((float)(v176 - *v7) * v217) + (float)((float)(v154 - v7[1]) * v218)) + v226;
      if ( v227 <= 0.0 )
      {
        if ( v227 >= 0.0 || v224 >= 0.0 )
        {
LABEL_64:
          v228 = v221 - v7[1];
          v229 = v222 - v225;
          v239 = (float)((float)((float)(v176 - v223) * v217) + (float)((float)(v154 - v7[1]) * v218)) + v226;
          v230 = v220 - v223;
          v231 = (float)((float)(v218 * v228) + (float)(v217 * v230)) + (float)(v219 * v229);
          if ( v231 != 0.0 )
          {
            v232 = v227 / v231;
            *(float *)&v233 = (float)(v229 * v232) + v7[2];
            v234 = (float)(v230 * v232) + v223;
            v239 = v232;
            v235 = (float)(v228 * v232) + v7[1];
            LODWORD(v258) = v233;
            v253 = v233;
            v251 = LODWORD(v234);
            *(float *)&v260 = v235;
            v252 = LODWORD(v235);
            if ( (float)((float)((float)((float)((float)(*(float *)&v262 * (float)(*(float *)&v233 - v181))
                                               - (float)(v212 * (float)(v234 - v176)))
                                       * v218)
                               + (float)((float)((float)(v212 * (float)(v235 - v154))
                                               - (float)(*(float *)&v259 * (float)(*(float *)&v233 - v181)))
                                       * v217))
                       + (float)((float)((float)(*(float *)&v259 * (float)(v234 - v176))
                                       - (float)(*(float *)&v262 * (float)(v235 - v154)))
                               * v219)) >= 0.0
              && (float)((float)((float)((float)((float)((float)(*(float *)&v265 - v245)
                                                       * (float)(v235 - *((float *)&v240 + 1)))
                                               - (float)((float)(*(float *)&v264 - *((float *)&v240 + 1))
                                                       * (float)(*(float *)&v258 - v245)))
                                       * v217)
                               + (float)((float)((float)((float)(*(float *)&v263 - *(float *)&v240)
                                                       * (float)(*(float *)&v258 - v245))
                                               - (float)((float)(*(float *)&v265 - v245)
                                                       * (float)(v234 - *(float *)&v240)))
                                       * v218))
                       + (float)((float)((float)((float)(*(float *)&v264 - *((float *)&v240 + 1))
                                               * (float)(v234 - *(float *)&v240))
                                       - (float)((float)(*(float *)&v263 - *(float *)&v240)
                                               * (float)(v235 - *((float *)&v240 + 1))))
                               * v219)) >= 0.0
              && (float)((float)((float)((float)((float)((float)(*(float *)&v258 - *(float *)&v265)
                                                       * (float)(v241 - *(float *)&v263))
                                               - (float)((float)(v181 - *(float *)&v265)
                                                       * (float)(v234 - *(float *)&v263)))
                                       * v218)
                               + (float)((float)((float)((float)(v181 - *(float *)&v265)
                                                       * (float)(*(float *)&v260 - *(float *)&v264))
                                               - (float)((float)(v154 - *(float *)&v264)
                                                       * (float)(*(float *)&v258 - *(float *)&v265)))
                                       * v217))
                       + (float)((float)((float)((float)(v154 - *(float *)&v264) * (float)(v234 - *(float *)&v263))
                                       - (float)((float)(*(float *)&v260 - *(float *)&v264)
                                               * (float)(v241 - *(float *)&v263)))
                               * v219)) >= 0.0
              && v232 < *(float *)&dword_140404A6C[73006987] )
            {
              dword_140404A6C[73006994] = dword_140404A6C[v6 + 129716769];
              dword_140404A6C[73006995] = dword_140404A6C[73006994];
              dword_140404A6C[73006996] = dword_140404A6C[73006994];
              *(float *)&dword_140404A6C[73006981] = v234;
              dword_140404A6C[73006982] = v260;
              dword_140404A6C[73006983] = v258;
              *(float *)&dword_140404A6C[73006984] = v217;
              *(float *)&dword_140404A6C[73006985] = v218;
              *(float *)&dword_140404A6C[73006986] = v219;
              *(float *)&dword_140404A6C[73006987] = v232;
              dword_140404A6C[73006992] = 1;
              dword_140404A6C[73006993] = v134;
              sub_14002D370(
                (float *)&dword_140404A6C[73006998],
                (float *)&dword_140404A6C[73006981],
                &v248,
                (float *)&v254,
                (float *)&v246);
              v133 = v268;
              *(_QWORD *)&dword_140404A6C[73006989] = 0;
              dword_140404A6C[73006991] = 0;
            }
          }
        }
      }
      else if ( v224 <= 0.0 )
      {
        goto LABEL_64;
      }
LABEL_70:
      ++v134;
      ++v137;
      v135 += 52;
      if ( v134 >= v133 )
      {
        v17 = 0;
        break;
      }
    }
  }
  if ( v270 && (int)dword_140404A6C[v6 + 129720373] > 0 )
  {
    v236 = (float *)(0x140000000LL + v6 * 4 + 523094904);
    do
    {
      if ( (unsigned int)sub_1400DF380(
                           (float *)&v251,
                           (float *)&v242,
                           &v239,
                           v7,
                           v5,
                           (float *)&dword_140404A6C[43 * v17 + 129720393 + v6],
                           *v236)
        && v239 < *(float *)&dword_140404A6C[73006987] )
      {
        dword_140404A6C[73006981] = v251;
        dword_140404A6C[73006982] = v252;
        dword_140404A6C[73006983] = v253;
        dword_140404A6C[73006984] = v242;
        dword_140404A6C[73006985] = v243;
        dword_140404A6C[73006986] = v244;
        *(float *)&dword_140404A6C[73006987] = v239;
        dword_140404A6C[73006993] = -1;
        dword_140404A6C[73006994] = v17;
      }
      ++v17;
      v236 += 43;
    }
    while ( v17 < (int)dword_140404A6C[v6 + 129720373] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v238 ^ v283);
}

