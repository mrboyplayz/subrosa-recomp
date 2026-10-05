/* Address: 0x140033e40 | Name: sub_140033E40 | Size: 5008 bytes */
__int64 __fastcall sub_140033E40(
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
  unsigned int v12; // r13d
  float *v13; // r15
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
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
  __int64 v184; // rcx
  float *v185; // rbx
  int v186; // eax
  unsigned int v187; // xmm3_4
  float v188; // xmm5_4
  float v189; // xmm1_4
  unsigned int v190; // xmm4_4
  float v191; // xmm0_4
  float v192; // xmm2_4
  int v193; // r15d
  __int64 v194; // rcx
  float *v195; // rbx
  int v196; // eax
  unsigned int v197; // xmm3_4
  float v198; // xmm5_4
  float v199; // xmm1_4
  unsigned int v200; // xmm4_4
  float v201; // xmm0_4
  float v202; // xmm2_4
  int v203; // eax
  __int64 v204; // rdx
  int v205; // r15d
  __int64 v206; // rbx
  __int64 v207; // r12
  __int64 v208; // r13
  __int64 v209; // rax
  int v210; // xmm1_4
  float v211; // xmm0_4
  __int64 v212; // rax
  int v213; // xmm1_4
  float v214; // xmm0_4
  __int64 v215; // rax
  int v216; // xmm1_4
  int v217; // xmm0_4
  __int64 v218; // rax
  int v219; // xmm1_4
  int v220; // xmm0_4
  __m128 v221; // xmm4
  __m128 v222; // xmm5
  float v223; // xmm6_4
  float v224; // xmm7_4
  float v225; // xmm3_4
  float v226; // xmm8_4
  float v227; // xmm0_4
  unsigned __int64 v228; // xmm0_8
  unsigned int v229; // xmm1_4
  unsigned int v230; // xmm5_4
  unsigned int v231; // xmm4_4
  float v232; // xmm3_4
  unsigned int v234; // [rsp+50h] [rbp-B0h]
  int v235; // [rsp+50h] [rbp-B0h]
  int v236; // [rsp+50h] [rbp-B0h]
  __int64 v237; // [rsp+58h] [rbp-A8h]
  _BYTE *v238; // [rsp+58h] [rbp-A8h]
  __int64 v239; // [rsp+58h] [rbp-A8h]
  __int64 v240; // [rsp+58h] [rbp-A8h]
  __int64 v241; // [rsp+58h] [rbp-A8h]
  float *v242; // [rsp+60h] [rbp-A0h] BYREF
  float v243; // [rsp+68h] [rbp-98h]
  float *v244; // [rsp+70h] [rbp-90h] BYREF
  float v245; // [rsp+78h] [rbp-88h]
  _BYTE *v246; // [rsp+80h] [rbp-80h] BYREF
  int v247; // [rsp+88h] [rbp-78h]
  float *v248; // [rsp+90h] [rbp-70h] BYREF
  int v249; // [rsp+98h] [rbp-68h]
  int v250; // [rsp+A0h] [rbp-60h]
  int v251; // [rsp+A4h] [rbp-5Ch]
  _BYTE *v252; // [rsp+A8h] [rbp-58h] BYREF
  float v253; // [rsp+B0h] [rbp-50h]
  __int64 v254; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v255; // [rsp+C0h] [rbp-40h] BYREF
  float v256; // [rsp+C8h] [rbp-38h]
  _BYTE *v257; // [rsp+D0h] [rbp-30h] BYREF
  float v258; // [rsp+D8h] [rbp-28h]
  _BYTE *v259; // [rsp+E0h] [rbp-20h]
  __int64 v260; // [rsp+E8h] [rbp-18h]
  _BYTE *v261; // [rsp+F0h] [rbp-10h]
  _BYTE *v262; // [rsp+F8h] [rbp-8h]
  float v263; // [rsp+100h] [rbp+0h] BYREF
  float v264; // [rsp+104h] [rbp+4h]
  float v265; // [rsp+108h] [rbp+8h]
  float v266; // [rsp+10Ch] [rbp+Ch] BYREF
  float v267; // [rsp+110h] [rbp+10h]
  float v268; // [rsp+114h] [rbp+14h]
  _BYTE *v269; // [rsp+128h] [rbp+28h]
  _BYTE *v270; // [rsp+130h] [rbp+30h]
  _BYTE v271[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v272[4]; // [rsp+144h] [rbp+44h] BYREF
  _BYTE v273[4]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v274[4]; // [rsp+14Ch] [rbp+4Ch] BYREF
  _BYTE v275[4]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v277[4]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v278[4]; // [rsp+15Ch] [rbp+5Ch] BYREF
  _BYTE v279[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v281[4]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v283[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v284[4]; // [rsp+1A4h] [rbp+A4h] BYREF
  _BYTE v285[4]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v287[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v288[4]; // [rsp+1B4h] [rbp+B4h] BYREF
  _BYTE v289[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v291[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v293[4]; // [rsp+1C8h] [rbp+C8h] BYREF
  _BYTE v294[52]; // [rsp+1CCh] [rbp+CCh] BYREF
  _DWORD v295[2]; // [rsp+200h] [rbp+100h] BYREF
  _DWORD v296[1534]; // [rsp+208h] [rbp+108h] BYREF
  _DWORD v297[2]; // [rsp+1A00h] [rbp+1900h] BYREF
  float v298[1534]; // [rsp+1A08h] [rbp+1908h] BYREF
  _BYTE v299[6144]; // [rsp+3200h] [rbp+3100h] BYREF
  _BYTE v300[6144]; // [rsp+4A00h] [rbp+4900h] BYREF
  int v301; // [rsp+6330h] [rbp+6230h]

  v9 = a5;
  v10 = a4;
  v11 = a7;
  v12 = 0;
  v13 = a8;
  v14 = a3;
  v254 = a4;
  v250 = a2;
  v251 = a1;
  v260 = a3;
  v248 = a7;
  v244 = a8;
  v242 = a5;
  v234 = 0;
  sub_140035520((unsigned int)v297, (unsigned int)v300, a3, (_DWORD)a5, (__int64)a6);
  sub_140035520((unsigned int)v295, (unsigned int)v299, v10, (_DWORD)a7, (__int64)a8);
  v15 = *(int *)(v14 + 48);
  v16 = 0;
  v246 = (_BYTE *)v15;
  v237 = 0;
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
  v26 = &v272[-v14];
  v27 = a6[8];
  v28 = &v273[-v14];
  v269 = &v278[-v14];
  v29 = &v278[-v14];
  v30 = (unsigned __int64)(v15 - 4) >> 2;
  v270 = &v279[-v14];
  v31 = &v275[-v14];
  v32 = &v279[-v14];
  v33 = v277 - v14 + 2;
  v261 = &v281[-v14];
  v262 = v283 - v14 + 50;
  v259 = &v271[-v14];
  v34 = &v271[-v14];
  v255 = &v274[-v14];
  v35 = &v274[-v14];
  v257 = &v277[-v14];
  v36 = &v277[-v14];
  v37 = v281 - v14 + 2;
  v38 = &v281[-v14];
  v39 = v30 + 1;
  v252 = v37;
  v237 = 4 * v39;
  v40 = v262;
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
    v66 = v252;
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
    v34 = v259;
    *(float *)((char *)v23 + (_QWORD)v38 - 60) = v77 + *(float *)((char *)v23 + (_QWORD)v38 - 60);
    *(float *)((char *)v23 + (_QWORD)v40 - 60) = v78 + *(float *)((char *)v23 + (_QWORD)v40 - 60);
    v23 += 12;
    --v39;
  }
  while ( v39 );
  v15 = (__int64)v246;
  v16 = v237;
  v10 = v254;
  v11 = v248;
  v14 = v260;
  v13 = v244;
  v12 = 0;
  if ( v237 < (__int64)v246 )
  {
LABEL_8:
    v79 = (float *)(v14 + 12 * (v16 + 5));
    v80 = &v272[-v14];
    v81 = &v273[-v14];
    v82 = v15 - v237;
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
      *(float *)&v271[(_QWORD)v79 - v14 - 60] = (float)((float)((float)(v17 * v83) + v86) + (float)(v19 * v84)) + *a5;
      *(float *)((char *)v79 + (_QWORD)v80 - 60) = v88 + *(float *)&v272[(_QWORD)v79 - v14 - 60];
      *(float *)((char *)v79 + (_QWORD)v81 - 60) = v87 + *(float *)&v273[(_QWORD)v79 - v14 - 60];
      v79 += 3;
      --v82;
    }
    while ( v82 );
  }
LABEL_10:
  v89 = *(int *)(v10 + 48);
  v90 = nullptr;
  v262 = (_BYTE *)v89;
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
  v100 = &v284[-v10];
  v101 = v13[8];
  v102 = &v285[-v10];
  v244 = (float *)&v291[-v10];
  v103 = &v291[-v10];
  v104 = &v287[-v10];
  v248 = (float *)&v293[-v10];
  v105 = &v288[-v10];
  v106 = &v293[-v10];
  v107 = v291 - v10 + 2;
  v246 = &v294[-v10];
  v108 = &v294[-v10];
  v238 = &v283[-v10];
  v252 = v287 - v10 + 2;
  v257 = &v289[-v10];
  v109 = v293 - v10 + 2;
  v110 = &v283[-v10];
  v255 = v109;
  v111 = v89 - 4;
  v112 = v252;
  v113 = (v111 >> 2) + 1;
  v261 = (_BYTE *)(4 * v113);
  v114 = v257;
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
    v140 = v255;
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
    v110 = v238;
    *(float *)((char *)v97 + (_QWORD)v106 - 60) = v151 + *(float *)((char *)v97 + (_QWORD)v106 - 60);
    *(float *)((char *)v97 + (_QWORD)v108 - 60) = v152 + *(float *)((char *)v97 + (_QWORD)v108 - 60);
    v97 += 12;
    --v113;
  }
  while ( v113 );
  v89 = (__int64)v262;
  v90 = v261;
  v10 = v254;
  v9 = v242;
  v14 = v260;
  v12 = 0;
  if ( (__int64)v261 < (__int64)v262 )
  {
LABEL_17:
    v153 = (float *)(v10 + 12LL * (_QWORD)(v90 + 5));
    v154 = &v284[-v10];
    v155 = &v285[-v10];
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
      *(float *)&v283[(_QWORD)v153 - v10 - 60] = v163;
      *(float *)((char *)v153 + (_QWORD)v154 - 60) = v161 + *(float *)&v284[(_QWORD)v153 - v10 - 60];
      *(float *)((char *)v153 + (_QWORD)v155 - 60) = v162 + *(float *)&v285[(_QWORD)v153 - v10 - 60];
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
    v171 = v295[v170 + 1];
    LODWORD(v246) = v295[v170];
    v172 = v296[v170];
    LODWORD(v170) = *(_DWORD *)(v168 - 48);
    v247 = v172;
    HIDWORD(v246) = v171;
    v173 = 3 * (int)v170;
    v174 = v295[v173 + 1];
    LODWORD(v248) = v295[v173];
    v249 = v296[v173];
    HIDWORD(v248) = v174;
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
      v179 = v295[v178 + 1];
      LODWORD(v246) = v295[v178];
      v180 = v296[v178];
      LODWORD(v178) = *(v176 - 2);
      v247 = v180;
      HIDWORD(v246) = v179;
      v181 = 3 * (int)v178;
      v182 = v295[v181 + 1];
      LODWORD(v248) = v295[v181];
      v249 = v296[v181];
      HIDWORD(v248) = v182;
      --v175;
    }
    while ( v175 );
  }
LABEL_28:
  v301 = a9 & 1;
  if ( !v301 )
  {
    v183 = 0;
    if ( *(int *)v14 > 0 )
    {
      v184 = 0;
      v185 = v298;
      v186 = 0;
      v239 = 0;
      v235 = 0;
      do
      {
        if ( (unsigned int)sub_140035270(
                             (unsigned int)&v263,
                             v10,
                             (unsigned int)v295,
                             (unsigned int)v299,
                             (__int64)&v271[12 * *(int *)(*(_QWORD *)(v14 + 8) + v184 + 12)],
                             (__int64)&v297[v186]) )
        {
          *(float *)&v187 = v263 - *v11;
          v188 = (float)((float)((float)(v264 - *(v185 - 1)) * v267) + (float)((float)(v263 - *(v185 - 2)) * v266))
               + (float)((float)(v265 - *v185) * v268);
          v189 = v264 - v9[1];
          *(float *)&v190 = v264 - v11[1];
          *(float *)&v244 = v263 - *v9;
          v191 = v265 - v9[2];
          v192 = v265 - v11[2];
          *(float *)&v254 = v188;
          *((float *)&v244 + 1) = v189;
          v245 = v191;
          v242 = (float *)__PAIR64__(v190, v187);
          v243 = v192;
          sub_140002C40(v251, v250, &v244, &v242, &v266, v188, 1053609165, 0.015625, 1023410176);
          v12 = 1;
        }
        ++v183;
        v186 = v235 + 3;
        v184 = v239 + 16;
        v235 += 3;
        v185 += 3;
        v239 += 16;
      }
      while ( v183 < *(_DWORD *)v14 );
      v234 = v12;
    }
  }
  v193 = 0;
  if ( *(int *)v10 > 0 )
  {
    v194 = 0;
    v195 = (float *)v296;
    v196 = 0;
    v240 = 0;
    v236 = 0;
    do
    {
      if ( (unsigned int)sub_140035270(
                           (unsigned int)&v263,
                           v14,
                           (unsigned int)v297,
                           (unsigned int)v300,
                           (__int64)&v283[12 * *(int *)(*(_QWORD *)(v10 + 8) + v194 + 12)],
                           (__int64)&v295[v196]) )
      {
        *(float *)&v197 = v263 - *v9;
        v198 = (float)((float)((float)(v264 - *(v195 - 1)) * v267) + (float)((float)(v263 - *(v195 - 2)) * v266))
             + (float)((float)(v265 - *v195) * v268);
        v199 = v264 - v11[1];
        *(float *)&v200 = v264 - v9[1];
        *(float *)&v244 = v263 - *v11;
        v201 = v265 - v11[2];
        v202 = v265 - v9[2];
        *(float *)&v254 = v198;
        *((float *)&v244 + 1) = v199;
        v245 = v201;
        v242 = (float *)__PAIR64__(v200, v197);
        v243 = v202;
        sub_140002C40(v250, v251, &v244, &v242, &v266, v198, 1053609165, 0.015625, 1023410176);
        v12 = 1;
      }
      ++v193;
      v196 = v236 + 3;
      v194 = v240 + 16;
      v236 += 3;
      v195 += 3;
      v240 += 16;
    }
    while ( v193 < *(_DWORD *)v10 );
    v234 = v12;
  }
  v203 = 0;
  LODWORD(v259) = 0;
  if ( *(int *)(v14 + 32) <= 0 )
    return v12;
  v204 = 0;
  v241 = 0;
  do
  {
    v205 = 0;
    if ( *(int *)(v10 + 32) > 0 )
    {
      v206 = 0;
      do
      {
        v207 = *(_QWORD *)(v14 + 40);
        v208 = *(_QWORD *)(v10 + 40);
        v209 = 3 * *(_DWORD *)(v204 + v207);
        v210 = v297[v209 + 1];
        LODWORD(v244) = v297[v209];
        v211 = v298[v209];
        LODWORD(v209) = *(_DWORD *)(v204 + v207 + 4);
        v245 = v211;
        HIDWORD(v244) = v210;
        v212 = 3 * (int)v209;
        v213 = v297[v212 + 1];
        LODWORD(v242) = v297[v212];
        v214 = v298[v212];
        LODWORD(v212) = *(_DWORD *)(v206 + v208);
        v243 = v214;
        HIDWORD(v242) = v213;
        v215 = 3 * (int)v212;
        v216 = v295[v215 + 1];
        LODWORD(v246) = v295[v215];
        v217 = v296[v215];
        LODWORD(v215) = *(_DWORD *)(v206 + v208 + 4);
        v247 = v217;
        HIDWORD(v246) = v216;
        v218 = 3 * (int)v215;
        v219 = v295[v218 + 1];
        LODWORD(v248) = v295[v218];
        v220 = v296[v218];
        HIDWORD(v248) = v219;
        v249 = v220;
        if ( (unsigned int)sub_14004D9D0(
                             (unsigned int)&v257,
                             (unsigned int)&v255,
                             (unsigned int)&v254,
                             (unsigned int)&v244,
                             (__int64)&v242,
                             (__int64)&v246,
                             (__int64)&v248)
          && (v301
           || (unsigned int)sub_1400E2590(
                              (unsigned int)&v246,
                              (unsigned int)&v248,
                              (unsigned int)&v271[12 * *(_DWORD *)(v241 + v207 + 8)],
                              (unsigned int)&v244,
                              (__int64)&v242))
          && (unsigned int)sub_1400E2590(
                             (unsigned int)&v244,
                             (unsigned int)&v242,
                             (unsigned int)&v283[12 * *(_DWORD *)(v206 + v208 + 8)],
                             (unsigned int)&v246,
                             (__int64)&v248) )
        {
          v221 = (__m128)(unsigned int)v257;
          v222 = (__m128)HIDWORD(v257);
          v223 = *(float *)&v255 - *(float *)&v257;
          v224 = *((float *)&v255 + 1) - *((float *)&v257 + 1);
          v225 = v258;
          v226 = v256 - v258;
          v227 = fsqrt((float)((float)(v224 * v224) + (float)(v223 * v223)) + (float)(v226 * v226));
          if ( v227 == 0.0 )
          {
            v252 = nullptr;
            v253 = 0.0;
          }
          else
          {
            *(float *)&v252 = (float)(1.0 / v227) * v223;
            *((float *)&v252 + 1) = (float)(1.0 / v227) * v224;
            v253 = (float)(1.0 / v227) * v226;
          }
          v221.m128_f32[0] = (float)(*(float *)&v257 + *(float *)&v255) * 0.5;
          v222.m128_f32[0] = (float)(*((float *)&v257 + 1) + *((float *)&v255 + 1)) * 0.5;
          v228 = _mm_unpacklo_ps(v221, v222).m128_u64[0];
          *(float *)&v229 = v222.m128_f32[0] - v9[1];
          *(float *)&v230 = v222.m128_f32[0] - v11[1];
          v242 = (float *)v228;
          v257 = (_BYTE *)v228;
          v255 = (_BYTE *)v228;
          *(float *)&v228 = v221.m128_f32[0] - *v9;
          *(float *)&v231 = v221.m128_f32[0] - *v11;
          v258 = (float)(v258 + v256) * 0.5;
          v243 = v258;
          v244 = (float *)__PAIR64__(v229, v228);
          *(float *)&v228 = (float)((float)(v225 + v256) * 0.5) - v9[2];
          v232 = v258 - v11[2];
          v256 = v258;
          v242 = (float *)__PAIR64__(v230, v231);
          v245 = *(float *)&v228;
          v243 = v232;
          sub_140002C40(v251, v250, &v244, &v242, &v252, *(float *)&v254, 1053609165, 0.015625, 1023410176);
          v234 = 1;
        }
        v204 = v241;
        ++v205;
        v14 = v260;
        v206 += 12;
      }
      while ( v205 < *(_DWORD *)(v10 + 32) );
      v203 = (int)v259;
    }
    ++v203;
    v204 += 12;
    LODWORD(v259) = v203;
    v241 = v204;
  }
  while ( v203 < *(_DWORD *)(v14 + 32) );
  return v234;
}

