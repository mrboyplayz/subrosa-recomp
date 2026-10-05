/* Address: 0x140048da0 | Name: sub_140048DA0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140048DA0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        char a9)
{
  float *v9; // r14
  __int64 v10; // rdi
  float *v11; // rsi
  int v12; // r13d
  float *v13; // r15
  __int64 v14; // r12
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  float v22; // xmm12_4
  float *v23; // rax
  float v24; // xmm13_4
  float v25; // xmm14_4
  _BYTE *v26; // r9
  float v27; // xmm15_4
  _BYTE *v28; // r10
  _BYTE *v29; // r13
  unsigned __int64 v30; // r8
  _BYTE *v31; // r11
  _BYTE *v32; // rdi
  _BYTE *v33; // rbx
  _BYTE *v34; // rsi
  _BYTE *v35; // r15
  _BYTE *v36; // rdx
  _BYTE *v37; // rcx
  _BYTE *v38; // r12
  unsigned __int64 v39; // r8
  _BYTE *v40; // rcx
  float v41; // xmm6_4
  float v42; // xmm2_4
  float v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm5_4
  float v46; // xmm0_4
  float v47; // xmm6_4
  float v48; // xmm4_4
  float v49; // xmm6_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm6_4
  float v54; // xmm0_4
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm0_4
  float v58; // xmm6_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  float v62; // xmm6_4
  float v63; // xmm5_4
  float v64; // xmm6_4
  float v65; // xmm0_4
  _BYTE *v66; // rsi
  float v67; // xmm0_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm6_4
  float v71; // xmm4_4
  float v72; // xmm6_4
  float v73; // xmm5_4
  float v74; // xmm2_4
  float v75; // xmm0_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm0_4
  float *v79; // rcx
  _BYTE *v80; // rax
  _BYTE *v81; // r8
  __int64 v82; // rdx
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm0_4
  float v86; // xmm6_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  __int64 v89; // rdx
  _BYTE *v90; // rbx
  float v91; // xmm7_4
  float v92; // xmm8_4
  float v93; // xmm9_4
  float v94; // xmm10_4
  float v95; // xmm11_4
  float v96; // xmm12_4
  float *v97; // rax
  float v98; // xmm13_4
  float v99; // xmm14_4
  _BYTE *v100; // r8
  float v101; // xmm15_4
  _BYTE *v102; // r9
  _BYTE *v103; // r13
  _BYTE *v104; // r10
  _BYTE *v105; // r11
  _BYTE *v106; // r12
  _BYTE *v107; // r15
  _BYTE *v108; // r14
  _BYTE *v109; // rcx
  _BYTE *v110; // rdi
  unsigned __int64 v111; // rcx
  _BYTE *v112; // rdx
  __int64 v113; // rcx
  _BYTE *v114; // rbx
  float v115; // xmm6_4
  float v116; // xmm2_4
  float v117; // xmm3_4
  float v118; // xmm1_4
  float v119; // xmm5_4
  float v120; // xmm0_4
  float v121; // xmm6_4
  float v122; // xmm4_4
  float v123; // xmm6_4
  float v124; // xmm5_4
  float v125; // xmm3_4
  float v126; // xmm1_4
  float v127; // xmm6_4
  float v128; // xmm0_4
  float v129; // xmm2_4
  float v130; // xmm3_4
  float v131; // xmm0_4
  float v132; // xmm6_4
  float v133; // xmm4_4
  float v134; // xmm3_4
  float v135; // xmm1_4
  float v136; // xmm6_4
  float v137; // xmm5_4
  float v138; // xmm6_4
  float v139; // xmm0_4
  _BYTE *v140; // rdi
  float v141; // xmm0_4
  float v142; // xmm3_4
  float v143; // xmm1_4
  float v144; // xmm6_4
  float v145; // xmm4_4
  float v146; // xmm6_4
  float v147; // xmm5_4
  float v148; // xmm2_4
  float v149; // xmm0_4
  float v150; // xmm0_4
  float v151; // xmm1_4
  float v152; // xmm0_4
  float *v153; // rcx
  _BYTE *v154; // rax
  _BYTE *v155; // r8
  __int64 v156; // rdx
  float v157; // xmm6_4
  float v158; // xmm5_4
  float v159; // xmm2_4
  float v160; // xmm3_4
  float v161; // xmm0_4
  float v162; // xmm1_4
  float v163; // xmm6_4
  __int64 v164; // r8
  __int64 v165; // r10
  __int64 v166; // r11
  unsigned __int64 v167; // r9
  __int64 v168; // rdx
  int v169; // eax
  __int64 v170; // rax
  int v171; // xmm1_4
  int v172; // xmm0_4
  __int64 v173; // rax
  int v174; // xmm1_4
  __int64 v175; // r8
  int *v176; // rdx
  int v177; // eax
  __int64 v178; // rax
  int v179; // xmm1_4
  int v180; // xmm0_4
  __int64 v181; // rax
  int v182; // xmm1_4
  int v183; // r15d
  _BYTE *v184; // rcx
  float *v185; // rbx
  int v186; // eax
  float v187; // xmm0_4
  float v188; // xmm1_4
  float v189; // xmm5_4
  unsigned int v190; // xmm3_4
  float v191; // xmm5_4
  float v192; // xmm1_4
  unsigned int v193; // xmm4_4
  float v194; // xmm0_4
  float v195; // xmm2_4
  int v196; // r15d
  _BYTE *v197; // rcx
  float *v198; // rbx
  int v199; // eax
  float v200; // xmm0_4
  float v201; // xmm1_4
  float v202; // xmm5_4
  unsigned int v203; // xmm3_4
  float v204; // xmm5_4
  float v205; // xmm1_4
  unsigned int v206; // xmm4_4
  float v207; // xmm0_4
  float v208; // xmm2_4
  int v209; // eax
  _BYTE *v210; // rdx
  int v211; // r15d
  __int64 v212; // rbx
  __int64 v213; // r12
  __int64 v214; // r13
  __int64 v215; // rax
  int v216; // xmm1_4
  float v217; // xmm0_4
  __int64 v218; // rax
  int v219; // xmm1_4
  float v220; // xmm0_4
  __int64 v221; // rax
  int v222; // xmm1_4
  int v223; // xmm0_4
  __int64 v224; // rax
  int v225; // xmm1_4
  int v226; // xmm0_4
  __m128 v227; // xmm4
  __m128 v228; // xmm5
  float v229; // xmm6_4
  float v230; // xmm7_4
  float v231; // xmm3_4
  float v232; // xmm8_4
  float v233; // xmm0_4
  unsigned __int64 v234; // xmm0_8
  unsigned int v235; // xmm1_4
  unsigned int v236; // xmm5_4
  unsigned int v237; // xmm4_4
  float v238; // xmm3_4
  __int64 v240; // [rsp-20h] [rbp-63B0h] BYREF
  __int64 v241; // [rsp+10h] [rbp-6380h]
  int v242; // [rsp+18h] [rbp-6378h]
  int v243; // [rsp+20h] [rbp-6370h]
  int v244; // [rsp+30h] [rbp-6360h]
  _BYTE *v245; // [rsp+38h] [rbp-6358h]
  float *v246; // [rsp+40h] [rbp-6350h] BYREF
  float v247; // [rsp+48h] [rbp-6348h]
  float *v248; // [rsp+50h] [rbp-6340h] BYREF
  float v249; // [rsp+58h] [rbp-6338h]
  _BYTE *v250; // [rsp+6310h] [rbp-80h] BYREF
  int v251; // [rsp+6318h] [rbp-78h]
  float *v252; // [rsp+6320h] [rbp-70h] BYREF
  int v253; // [rsp+6328h] [rbp-68h]
  int v254; // [rsp+6330h] [rbp-60h]
  int v255; // [rsp+6334h] [rbp-5Ch]
  _BYTE *v256; // [rsp+6338h] [rbp-58h] BYREF
  float v257; // [rsp+6340h] [rbp-50h]
  __int64 v258; // [rsp+6348h] [rbp-48h] BYREF
  _BYTE *v259; // [rsp+6350h] [rbp-40h] BYREF
  float v260; // [rsp+6358h] [rbp-38h]
  _BYTE *v261; // [rsp+6360h] [rbp-30h] BYREF
  float v262; // [rsp+6368h] [rbp-28h]
  _BYTE *v263; // [rsp+6370h] [rbp-20h]
  __int64 v264; // [rsp+6378h] [rbp-18h]
  _BYTE *v265; // [rsp+6380h] [rbp-10h]
  _BYTE *v266; // [rsp+6388h] [rbp-8h]
  float v267; // [rsp+6390h] [rbp+0h] BYREF
  float v268; // [rsp+6394h] [rbp+4h]
  float v269; // [rsp+6398h] [rbp+8h]
  float v270; // [rsp+639Ch] [rbp+Ch] BYREF
  float v271; // [rsp+63A0h] [rbp+10h]
  float v272; // [rsp+63A4h] [rbp+14h]
  _BYTE *v273; // [rsp+63B8h] [rbp+28h]
  _BYTE *v274; // [rsp+63C0h] [rbp+30h]
  _BYTE v275[4]; // [rsp+63D0h] [rbp+40h] BYREF
  _BYTE v276[4]; // [rsp+63D4h] [rbp+44h] BYREF
  _BYTE v277[4]; // [rsp+63D8h] [rbp+48h] BYREF
  _BYTE v278[4]; // [rsp+63DCh] [rbp+4Ch] BYREF
  _BYTE v279[4]; // [rsp+63E0h] [rbp+50h] BYREF
  _BYTE v281[4]; // [rsp+63E8h] [rbp+58h] BYREF
  _BYTE v282[4]; // [rsp+63ECh] [rbp+5Ch] BYREF
  _BYTE v283[4]; // [rsp+63F0h] [rbp+60h] BYREF
  _BYTE v285[4]; // [rsp+63F8h] [rbp+68h] BYREF
  _BYTE v287[4]; // [rsp+6430h] [rbp+A0h] BYREF
  _BYTE v288[4]; // [rsp+6434h] [rbp+A4h] BYREF
  _BYTE v289[4]; // [rsp+6438h] [rbp+A8h] BYREF
  _BYTE v291[4]; // [rsp+6440h] [rbp+B0h] BYREF
  _BYTE v292[4]; // [rsp+6444h] [rbp+B4h] BYREF
  _BYTE v293[4]; // [rsp+6448h] [rbp+B8h] BYREF
  _BYTE v295[4]; // [rsp+6450h] [rbp+C0h] BYREF
  _BYTE v297[4]; // [rsp+6458h] [rbp+C8h] BYREF
  _BYTE v298[52]; // [rsp+645Ch] [rbp+CCh] BYREF
  _DWORD v299[2]; // [rsp+6490h] [rbp+100h] BYREF
  _DWORD v300[1534]; // [rsp+6498h] [rbp+108h] BYREF
  _DWORD v301[2]; // [rsp+7C90h] [rbp+1900h] BYREF
  float v302[1534]; // [rsp+7C98h] [rbp+1908h] BYREF
  _BYTE v303[6144]; // [rsp+9490h] [rbp+3100h] BYREF
  _BYTE v304[6144]; // [rsp+AC90h] [rbp+4900h] BYREF
  __int64 v305; // [rsp+C490h] [rbp+6100h]
  int v306; // [rsp+C5C0h] [rbp+6230h]

  v9 = a5;
  v10 = a4;
  v11 = a7;
  v12 = 0;
  v13 = a8;
  v14 = a3;
  v258 = a4;
  v254 = a2;
  v255 = a1;
  v264 = a3;
  v252 = a7;
  v248 = a8;
  v246 = a5;
  v244 = 0;
  sub_14004A480((__int64)v301, (__int64)v304, a3, a5, a6);
  sub_14004A480((__int64)v299, (__int64)v303, v10, a7, a8);
  v15 = *(int *)(v14 + 48);
  v16 = nullptr;
  v250 = (_BYTE *)v15;
  v245 = nullptr;
  if ( v15 < 4 )
  {
    if ( v15 <= 0 )
      goto LABEL_10;
    v17 = a6[3];
    v18 = *a6;
    v19 = a6[6];
    v20 = a6[4];
    v21 = a6[1];
    v22 = a6[7];
    v24 = a6[5];
    v25 = a6[2];
    v27 = a6[8];
    goto LABEL_8;
  }
  v17 = a6[3];
  v18 = *a6;
  v19 = a6[6];
  v20 = a6[4];
  v21 = a6[1];
  v22 = a6[7];
  v23 = (float *)(v14 + 60);
  v24 = a6[5];
  v25 = a6[2];
  v26 = &v276[-v14];
  v27 = a6[8];
  v28 = &v277[-v14];
  v273 = &v282[-v14];
  v29 = &v282[-v14];
  v30 = (unsigned __int64)(v15 - 4) >> 2;
  v274 = &v283[-v14];
  v31 = &v279[-v14];
  v32 = &v283[-v14];
  v33 = v281 - v14 + 2;
  v265 = &v285[-v14];
  v266 = v287 - v14 + 50;
  v263 = &v275[-v14];
  v34 = &v275[-v14];
  v259 = &v278[-v14];
  v35 = &v278[-v14];
  v261 = &v281[-v14];
  v36 = &v281[-v14];
  v37 = v285 - v14 + 2;
  v38 = &v285[-v14];
  v39 = v30 + 1;
  v256 = v37;
  v245 = (_BYTE *)(4 * v39);
  v40 = v266;
  do
  {
    v41 = *(v23 - 1);
    v42 = (float)(v41 * v17) + (float)(*(v23 - 2) * v18);
    v43 = (float)(v41 * v20) + (float)(*(v23 - 2) * v21);
    v44 = *v23;
    v45 = *v23 * v27;
    v46 = *a5;
    v47 = (float)(v41 * v24) + (float)(*(v23 - 2) * v25);
    v48 = v23[1];
    *(float *)((char *)v23 + (_QWORD)v34 - 60) = v42 + (float)(*v23 * v19);
    v49 = v47 + v45;
    v50 = v23[3];
    v51 = v43 + (float)(v44 * v22);
    v52 = a5[1];
    *(float *)((char *)v23 + (_QWORD)v26 - 60) = v51;
    *(float *)((char *)v23 + (_QWORD)v28 - 60) = v49;
    v53 = v23[2];
    *(float *)((char *)v23 + (_QWORD)v34 - 60) = v46 + *(float *)((char *)v23 + (_QWORD)v34 - 60);
    v54 = a5[2];
    *(float *)((char *)v23 + (_QWORD)v26 - 60) = v52 + *(float *)((char *)v23 + (_QWORD)v26 - 60);
    *(float *)((char *)v23 + (_QWORD)v28 - 60) = v54 + *(float *)((char *)v23 + (_QWORD)v28 - 60);
    v55 = (float)(v53 * v17) + (float)(v48 * v18);
    v56 = (float)(v53 * v20) + (float)(v48 * v21);
    v57 = *a5;
    v58 = (float)(v53 * v24) + (float)(v48 * v25);
    v59 = v23[4];
    *(float *)((char *)v23 + (_QWORD)v35 - 60) = v55 + (float)(v50 * v19);
    v60 = v56 + (float)(v50 * v22);
    v61 = a5[1];
    v62 = v58 + (float)(v50 * v27);
    v63 = v23[6];
    *(float *)((char *)v23 + (_QWORD)v31 - 60) = v60;
    *(float *)((char *)v23 + (_QWORD)v33 - 60) = v62;
    v64 = v23[5];
    *(float *)((char *)v23 + (_QWORD)v35 - 60) = v57 + *(float *)((char *)v23 + (_QWORD)v35 - 60);
    v65 = a5[2];
    *(float *)((char *)v23 + (_QWORD)v31 - 60) = v61 + *(float *)((char *)v23 + (_QWORD)v31 - 60);
    *(float *)((char *)v23 + (_QWORD)v33 - 60) = v65 + *(float *)((char *)v23 + (_QWORD)v33 - 60);
    v66 = v256;
    v67 = *a5;
    *(float *)((char *)v23 + (_QWORD)v36 - 60) = (float)((float)(v64 * v17) + (float)(v59 * v18)) + (float)(v63 * v19);
    v68 = (float)((float)(v64 * v20) + (float)(v59 * v21)) + (float)(v63 * v22);
    v69 = a5[1];
    v70 = (float)(v64 * v24) + (float)(v59 * v25);
    v71 = v23[7];
    *(float *)&v29[(_QWORD)v23 - 60] = v68;
    v72 = v70 + (float)(v63 * v27);
    v73 = v23[9];
    *(float *)((char *)v23 + (_QWORD)v32 - 60) = v72;
    v74 = v23[8];
    *(float *)((char *)v23 + (_QWORD)v36 - 60) = v67 + *(float *)((char *)v23 + (_QWORD)v36 - 60);
    v75 = a5[2];
    *(float *)&v29[(_QWORD)v23 - 60] = v69 + *(float *)&v29[(_QWORD)v23 - 60];
    *(float *)((char *)v23 + (_QWORD)v32 - 60) = v75 + *(float *)((char *)v23 + (_QWORD)v32 - 60);
    v76 = *a5;
    *(float *)((char *)v23 + (_QWORD)v66 - 60) = (float)((float)(v74 * v17) + (float)(v71 * v18)) + (float)(v73 * v19);
    v77 = a5[1];
    *(float *)((char *)v23 + (_QWORD)v38 - 60) = (float)((float)(v74 * v20) + (float)(v71 * v21)) + (float)(v73 * v22);
    *(float *)((char *)v23 + (_QWORD)v40 - 60) = (float)((float)(v74 * v24) + (float)(v71 * v25)) + (float)(v73 * v27);
    *(float *)((char *)v23 + (_QWORD)v66 - 60) = v76 + *(float *)((char *)v23 + (_QWORD)v66 - 60);
    v78 = a5[2];
    v34 = v263;
    *(float *)((char *)v23 + (_QWORD)v38 - 60) = v77 + *(float *)((char *)v23 + (_QWORD)v38 - 60);
    *(float *)((char *)v23 + (_QWORD)v40 - 60) = v78 + *(float *)((char *)v23 + (_QWORD)v40 - 60);
    v23 += 12;
    --v39;
  }
  while ( v39 );
  v15 = (__int64)v250;
  v16 = v245;
  v10 = v258;
  v11 = v252;
  v14 = v264;
  v13 = v248;
  v12 = v244;
  if ( (__int64)v245 < (__int64)v250 )
  {
LABEL_8:
    v79 = (float *)(v14 + 12LL * (_QWORD)(v16 + 5));
    v80 = &v276[-v14];
    v81 = &v277[-v14];
    v82 = v15 - (_QWORD)v245;
    do
    {
      v83 = *(v79 - 1);
      v84 = *v79;
      v85 = *(v79 - 2);
      v86 = v85 * v18;
      *(float *)((char *)v79 + (_QWORD)v80 - 60) = (float)((float)(v20 * v83) + (float)(v85 * v21))
                                                 + (float)(v22 * *v79);
      v87 = a5[2];
      *(float *)((char *)v79 + (_QWORD)v81 - 60) = (float)((float)(v24 * v83) + (float)(v85 * v25)) + (float)(v27 * v84);
      v88 = a5[1];
      *(float *)&v275[(_QWORD)v79 - v14 - 60] = (float)((float)((float)(v17 * v83) + v86) + (float)(v19 * v84)) + *a5;
      *(float *)((char *)v79 + (_QWORD)v80 - 60) = v88 + *(float *)&v276[(_QWORD)v79 - v14 - 60];
      *(float *)((char *)v79 + (_QWORD)v81 - 60) = v87 + *(float *)&v277[(_QWORD)v79 - v14 - 60];
      v79 += 3;
      --v82;
    }
    while ( v82 );
  }
LABEL_10:
  v89 = *(int *)(v10 + 48);
  v90 = nullptr;
  v266 = (_BYTE *)v89;
  if ( v89 < 4 )
  {
    if ( v89 <= 0 )
      goto LABEL_19;
    v91 = v13[3];
    v92 = *v13;
    v93 = v13[6];
    v94 = v13[4];
    v95 = v13[1];
    v96 = v13[7];
    v98 = v13[5];
    v99 = v13[2];
    v101 = v13[8];
    goto LABEL_17;
  }
  v91 = v13[3];
  v92 = *v13;
  v93 = v13[6];
  v94 = v13[4];
  v95 = v13[1];
  v96 = v13[7];
  v97 = (float *)(v10 + 60);
  v98 = v13[5];
  v99 = v13[2];
  v100 = &v288[-v10];
  v101 = v13[8];
  v102 = &v289[-v10];
  v248 = (float *)&v295[-v10];
  v103 = &v295[-v10];
  v104 = &v291[-v10];
  v252 = (float *)&v297[-v10];
  v105 = &v292[-v10];
  v106 = &v297[-v10];
  v107 = v295 - v10 + 2;
  v250 = &v298[-v10];
  v108 = &v298[-v10];
  v245 = &v287[-v10];
  v256 = v291 - v10 + 2;
  v261 = &v293[-v10];
  v109 = v297 - v10 + 2;
  v110 = &v287[-v10];
  v259 = v109;
  v111 = v89 - 4;
  v112 = v256;
  v113 = (v111 >> 2) + 1;
  v265 = (_BYTE *)(4 * v113);
  v114 = v261;
  do
  {
    v115 = *(v97 - 1);
    v116 = (float)(v115 * v91) + (float)(*(v97 - 2) * v92);
    v117 = (float)(v115 * v94) + (float)(*(v97 - 2) * v95);
    v118 = *v97;
    v119 = *v97 * v101;
    v120 = *v11;
    v121 = (float)(v115 * v98) + (float)(*(v97 - 2) * v99);
    v122 = v97[1];
    *(float *)((char *)v97 + (_QWORD)v110 - 60) = v116 + (float)(*v97 * v93);
    v123 = v121 + v119;
    v124 = v97[3];
    v125 = v117 + (float)(v118 * v96);
    v126 = v11[1];
    *(float *)((char *)v97 + (_QWORD)v100 - 60) = v125;
    *(float *)((char *)v97 + (_QWORD)v102 - 60) = v123;
    v127 = v97[2];
    *(float *)((char *)v97 + (_QWORD)v110 - 60) = v120 + *(float *)((char *)v97 + (_QWORD)v110 - 60);
    v128 = v11[2];
    *(float *)((char *)v97 + (_QWORD)v100 - 60) = v126 + *(float *)((char *)v97 + (_QWORD)v100 - 60);
    *(float *)((char *)v97 + (_QWORD)v102 - 60) = v128 + *(float *)((char *)v97 + (_QWORD)v102 - 60);
    v129 = (float)(v127 * v91) + (float)(v122 * v92);
    v130 = (float)(v127 * v94) + (float)(v122 * v95);
    v131 = *v11;
    v132 = (float)(v127 * v98) + (float)(v122 * v99);
    v133 = v97[4];
    *(float *)&v112[(_QWORD)v97 - 60] = v129 + (float)(v124 * v93);
    v134 = v130 + (float)(v124 * v96);
    v135 = v11[1];
    v136 = v132 + (float)(v124 * v101);
    v137 = v97[6];
    *(float *)((char *)v97 + (_QWORD)v104 - 60) = v134;
    *(float *)((char *)v97 + (_QWORD)v105 - 60) = v136;
    v138 = v97[5];
    *(float *)&v112[(_QWORD)v97 - 60] = v131 + *(float *)&v112[(_QWORD)v97 - 60];
    v139 = v11[2];
    *(float *)((char *)v97 + (_QWORD)v104 - 60) = v135 + *(float *)((char *)v97 + (_QWORD)v104 - 60);
    *(float *)((char *)v97 + (_QWORD)v105 - 60) = v139 + *(float *)((char *)v97 + (_QWORD)v105 - 60);
    v140 = v259;
    v141 = *v11;
    *(float *)&v114[(_QWORD)v97 - 60] = (float)((float)(v138 * v91) + (float)(v133 * v92)) + (float)(v137 * v93);
    v142 = (float)((float)(v138 * v94) + (float)(v133 * v95)) + (float)(v137 * v96);
    v143 = v11[1];
    v144 = (float)(v138 * v98) + (float)(v133 * v99);
    v145 = v97[7];
    *(float *)((char *)v97 + (_QWORD)v107 - 60) = v142;
    v146 = v144 + (float)(v137 * v101);
    v147 = v97[9];
    *(float *)&v103[(_QWORD)v97 - 60] = v146;
    v148 = v97[8];
    *(float *)&v114[(_QWORD)v97 - 60] = v141 + *(float *)&v114[(_QWORD)v97 - 60];
    v149 = v11[2];
    *(float *)((char *)v97 + (_QWORD)v107 - 60) = v143 + *(float *)((char *)v97 + (_QWORD)v107 - 60);
    *(float *)&v103[(_QWORD)v97 - 60] = v149 + *(float *)&v103[(_QWORD)v97 - 60];
    v150 = *v11;
    *(float *)&v140[(_QWORD)v97 - 60] = (float)((float)(v148 * v91) + (float)(v145 * v92)) + (float)(v147 * v93);
    v151 = v11[1];
    *(float *)((char *)v97 + (_QWORD)v106 - 60) = (float)((float)(v148 * v94) + (float)(v145 * v95))
                                                + (float)(v147 * v96);
    *(float *)((char *)v97 + (_QWORD)v108 - 60) = (float)((float)(v148 * v98) + (float)(v145 * v99))
                                                + (float)(v147 * v101);
    *(float *)&v140[(_QWORD)v97 - 60] = v150 + *(float *)&v140[(_QWORD)v97 - 60];
    v152 = v11[2];
    v110 = v245;
    *(float *)((char *)v97 + (_QWORD)v106 - 60) = v151 + *(float *)((char *)v97 + (_QWORD)v106 - 60);
    *(float *)((char *)v97 + (_QWORD)v108 - 60) = v152 + *(float *)((char *)v97 + (_QWORD)v108 - 60);
    v97 += 12;
    --v113;
  }
  while ( v113 );
  v89 = (__int64)v266;
  v90 = v265;
  v10 = v258;
  v9 = v246;
  v14 = v264;
  v12 = v244;
  if ( (__int64)v265 < (__int64)v266 )
  {
LABEL_17:
    v153 = (float *)(v10 + 12LL * (_QWORD)(v90 + 5));
    v154 = &v288[-v10];
    v155 = &v289[-v10];
    v156 = v89 - (_QWORD)v90;
    do
    {
      v157 = *(v153 - 2);
      v158 = *v153;
      v159 = *(v153 - 1);
      v160 = (float)(v159 * v98) + (float)(v157 * v99);
      v161 = v11[1];
      *(float *)((char *)v153 + (_QWORD)v154 - 60) = (float)((float)(v159 * v94) + (float)(v157 * v95))
                                                   + (float)(*v153 * v96);
      v162 = v11[2];
      v163 = (float)((float)((float)(v157 * v92) + (float)(v159 * v91)) + (float)(v158 * v93)) + *v11;
      *(float *)((char *)v153 + (_QWORD)v155 - 60) = v160 + (float)(v101 * v158);
      *(float *)&v287[(_QWORD)v153 - v10 - 60] = v163;
      *(float *)((char *)v153 + (_QWORD)v154 - 60) = v161 + *(float *)&v288[(_QWORD)v153 - v10 - 60];
      *(float *)((char *)v153 + (_QWORD)v155 - 60) = v162 + *(float *)&v289[(_QWORD)v153 - v10 - 60];
      v153 += 3;
      --v156;
    }
    while ( v156 );
  }
LABEL_19:
  v164 = *(int *)(v10 + 32);
  v165 = 0;
  if ( v164 < 4 )
  {
    if ( v164 <= 0 )
      goto LABEL_28;
    v166 = *(_QWORD *)(v10 + 40);
    goto LABEL_26;
  }
  v166 = *(_QWORD *)(v10 + 40);
  v167 = ((unsigned __int64)(v164 - 4) >> 2) + 1;
  v168 = v166 + 40;
  v165 = 4 * v167;
  do
  {
    v169 = *(_DWORD *)(v168 - 4);
    v168 += 48;
    v170 = 3 * v169;
    v171 = v299[v170 + 1];
    LODWORD(v250) = v299[v170];
    v172 = v300[v170];
    LODWORD(v170) = *(_DWORD *)(v168 - 48);
    v251 = v172;
    HIDWORD(v250) = v171;
    v173 = 3 * (int)v170;
    v174 = v299[v173 + 1];
    LODWORD(v252) = v299[v173];
    v253 = v300[v173];
    HIDWORD(v252) = v174;
    --v167;
  }
  while ( v167 );
  if ( v165 < v164 )
  {
LABEL_26:
    v175 = v164 - v165;
    v176 = (int *)(v166 + 12 * v165);
    do
    {
      v177 = *v176;
      v176 += 3;
      v178 = 3 * v177;
      v179 = v299[v178 + 1];
      LODWORD(v250) = v299[v178];
      v180 = v300[v178];
      LODWORD(v178) = *(v176 - 2);
      v251 = v180;
      HIDWORD(v250) = v179;
      v181 = 3 * (int)v178;
      v182 = v299[v181 + 1];
      LODWORD(v252) = v299[v181];
      v253 = v300[v181];
      HIDWORD(v252) = v182;
      --v175;
    }
    while ( v175 );
  }
LABEL_28:
  v306 = a9 & 1;
  if ( !v306 )
  {
    v183 = 0;
    if ( *(int *)v14 > 0 )
    {
      v184 = nullptr;
      v185 = v302;
      v186 = 0;
      v245 = nullptr;
      v244 = 0;
      do
      {
        if ( sub_14004A1D0(
               &v267,
               v10,
               (__int64)v299,
               (__int64)v303,
               (float *)&v275[12 * *(int *)&v184[*(_QWORD *)(v14 + 8) + 12]],
               (float *)&v301[v186]) )
        {
          v187 = v267 - *(v185 - 2);
          v188 = v269 - *v185;
          v243 = 1023410176;
          v189 = (float)(v268 - *(v185 - 1)) * v271;
          v242 = 1015021568;
          LODWORD(v241) = 1053609165;
          *(float *)&v190 = v267 - *v11;
          v191 = (float)(v189 + (float)(v187 * v270)) + (float)(v188 * v272);
          v192 = v268 - v9[1];
          *(float *)&v193 = v268 - v11[1];
          *(float *)&v248 = v267 - *v9;
          v194 = v269 - v9[2];
          v195 = v269 - v11[2];
          *(float *)&v258 = v191;
          *((float *)&v248 + 1) = v192;
          v249 = v194;
          v246 = (float *)__PAIR64__(v193, v190);
          v247 = v195;
          sub_1400052C0(
            v255,
            v254,
            (unsigned int *)&v248,
            (unsigned int *)&v246,
            (unsigned int *)&v270,
            v191,
            0x3ECCCCCDu,
            0.015625,
            0x3D000000u);
          v12 = 1;
        }
        ++v183;
        v186 = v244 + 3;
        v184 = v245 + 16;
        v244 += 3;
        v185 += 3;
        v245 += 16;
      }
      while ( v183 < *(_DWORD *)v14 );
      v244 = v12;
    }
  }
  v196 = 0;
  if ( *(int *)v10 > 0 )
  {
    v197 = nullptr;
    v198 = (float *)v300;
    v199 = 0;
    v245 = nullptr;
    v244 = 0;
    do
    {
      if ( sub_14004A1D0(
             &v267,
             v14,
             (__int64)v301,
             (__int64)v304,
             (float *)&v287[12 * *(int *)&v197[*(_QWORD *)(v10 + 8) + 12]],
             (float *)&v299[v199]) )
      {
        v200 = v267 - *(v198 - 2);
        v201 = v269 - *v198;
        v243 = 1023410176;
        v202 = (float)(v268 - *(v198 - 1)) * v271;
        v242 = 1015021568;
        LODWORD(v241) = 1053609165;
        *(float *)&v203 = v267 - *v9;
        v204 = (float)(v202 + (float)(v200 * v270)) + (float)(v201 * v272);
        v205 = v268 - v11[1];
        *(float *)&v206 = v268 - v9[1];
        *(float *)&v248 = v267 - *v11;
        v207 = v269 - v11[2];
        v208 = v269 - v9[2];
        *(float *)&v258 = v204;
        *((float *)&v248 + 1) = v205;
        v249 = v207;
        v246 = (float *)__PAIR64__(v206, v203);
        v247 = v208;
        sub_1400052C0(
          v254,
          v255,
          (unsigned int *)&v248,
          (unsigned int *)&v246,
          (unsigned int *)&v270,
          v204,
          0x3ECCCCCDu,
          0.015625,
          0x3D000000u);
        v12 = 1;
      }
      ++v196;
      v199 = v244 + 3;
      v197 = v245 + 16;
      v244 += 3;
      v198 += 3;
      v245 += 16;
    }
    while ( v196 < *(_DWORD *)v10 );
    v244 = v12;
  }
  v209 = 0;
  LODWORD(v263) = 0;
  if ( *(int *)(v14 + 32) > 0 )
  {
    v210 = nullptr;
    v245 = nullptr;
    do
    {
      v211 = 0;
      if ( *(int *)(v10 + 32) > 0 )
      {
        v212 = 0;
        do
        {
          v213 = *(_QWORD *)(v14 + 40);
          v214 = *(_QWORD *)(v10 + 40);
          v215 = 3 * *(_DWORD *)&v210[v213];
          v216 = v301[v215 + 1];
          LODWORD(v248) = v301[v215];
          v217 = v302[v215];
          LODWORD(v215) = *(_DWORD *)&v210[v213 + 4];
          v249 = v217;
          HIDWORD(v248) = v216;
          v218 = 3 * (int)v215;
          v219 = v301[v218 + 1];
          LODWORD(v246) = v301[v218];
          v220 = v302[v218];
          LODWORD(v218) = *(_DWORD *)(v212 + v214);
          v247 = v220;
          HIDWORD(v246) = v219;
          v221 = 3 * (int)v218;
          v222 = v299[v221 + 1];
          LODWORD(v250) = v299[v221];
          v223 = v300[v221];
          LODWORD(v221) = *(_DWORD *)(v212 + v214 + 4);
          v251 = v223;
          HIDWORD(v250) = v222;
          v224 = 3 * (int)v221;
          v225 = v299[v224 + 1];
          LODWORD(v252) = v299[v224];
          v226 = v300[v224];
          HIDWORD(v252) = v225;
          v253 = v226;
          if ( (unsigned int)sub_14008CEB0(
                               (float *)&v261,
                               (float *)&v259,
                               (float *)&v258,
                               (float *)&v248,
                               (float *)&v246,
                               (float *)&v250,
                               (float *)&v252)
            && (v306
             || sub_140187410(
                  (float *)&v250,
                  (float *)&v252,
                  (float *)&v275[12 * *(int *)&v245[v213 + 8]],
                  (float *)&v248,
                  (float *)&v246))
            && sub_140187410(
                 (float *)&v248,
                 (float *)&v246,
                 (float *)&v287[12 * *(int *)(v212 + v214 + 8)],
                 (float *)&v250,
                 (float *)&v252) )
          {
            v227 = (__m128)(unsigned int)v261;
            v228 = (__m128)HIDWORD(v261);
            v229 = *(float *)&v259 - *(float *)&v261;
            v230 = *((float *)&v259 + 1) - *((float *)&v261 + 1);
            v231 = v262;
            v232 = v260 - v262;
            v233 = fsqrt((float)((float)(v230 * v230) + (float)(v229 * v229)) + (float)(v232 * v232));
            if ( v233 == 0.0 )
            {
              v256 = nullptr;
              v257 = 0.0;
            }
            else
            {
              *(float *)&v256 = (float)(1.0 / v233) * v229;
              *((float *)&v256 + 1) = (float)(1.0 / v233) * v230;
              v257 = (float)(1.0 / v233) * v232;
            }
            v243 = 1023410176;
            v242 = 1015021568;
            LODWORD(v241) = 1053609165;
            v227.m128_f32[0] = (float)(*(float *)&v261 + *(float *)&v259) * 0.5;
            v228.m128_f32[0] = (float)(*((float *)&v261 + 1) + *((float *)&v259 + 1)) * 0.5;
            v234 = _mm_unpacklo_ps(v227, v228).m128_u64[0];
            *(float *)&v235 = v228.m128_f32[0] - v9[1];
            *(float *)&v236 = v228.m128_f32[0] - v11[1];
            v246 = (float *)v234;
            v261 = (_BYTE *)v234;
            v259 = (_BYTE *)v234;
            *(float *)&v234 = v227.m128_f32[0] - *v9;
            *(float *)&v237 = v227.m128_f32[0] - *v11;
            v262 = (float)(v262 + v260) * 0.5;
            v247 = v262;
            v248 = (float *)__PAIR64__(v235, v234);
            *(float *)&v234 = (float)((float)(v231 + v260) * 0.5) - v9[2];
            v238 = v262 - v11[2];
            v260 = v262;
            v246 = (float *)__PAIR64__(v236, v237);
            v249 = *(float *)&v234;
            v247 = v238;
            sub_1400052C0(
              v255,
              v254,
              (unsigned int *)&v248,
              (unsigned int *)&v246,
              (unsigned int *)&v256,
              *(float *)&v258,
              0x3ECCCCCDu,
              0.015625,
              0x3D000000u);
            v244 = 1;
          }
          v210 = v245;
          ++v211;
          v14 = v264;
          v212 += 12;
        }
        while ( v211 < *(_DWORD *)(v10 + 32) );
        v209 = (int)v263;
      }
      ++v209;
      v210 += 12;
      LODWORD(v263) = v209;
      v245 = v210;
    }
    while ( v209 < *(_DWORD *)(v14 + 32) );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v240 ^ v305);
}

