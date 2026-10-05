/* Address: 0x140151190 | Name: sub_140151190 | Size: 5555 bytes */
__int64 __fastcall sub_140151190(float *a1, float *a2, float *a3, signed int a4, float *a5, __int64 a6)
{
  int v6; // xmm11_4
  float *v7; // r12
  __int64 v8; // r10
  float v9; // xmm13_4
  __int64 v10; // r14
  float v11; // xmm0_4
  bool v12; // cf
  float v13; // xmm12_4
  float v14; // xmm10_4
  float v15; // xmm13_4
  float v16; // xmm1_4
  float v17; // xmm12_4
  float v18; // xmm10_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm5_4
  float v22; // xmm7_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm13_4
  float v26; // xmm12_4
  float v27; // xmm10_4
  float v28; // xmm6_4
  int v29; // eax
  int v30; // edx
  int v31; // ebx
  int v32; // r8d
  int v33; // ecx
  int v34; // r13d
  int v35; // r9d
  int v36; // r15d
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rsi
  unsigned int v40; // eax
  float v41; // xmm0_4
  signed int v42; // esi
  __int64 v43; // r12
  float v44; // xmm9_4
  __int64 v45; // rdi
  int v46; // ebx
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm6_4
  float v50; // xmm2_4
  float v51; // xmm2_4
  int v52; // edi
  __int16 v53; // dx
  __int16 v54; // bx
  unsigned int v55; // edi
  __int64 v56; // rcx
  unsigned int v57; // xmm1_4
  int v58; // ebx
  float v59; // xmm2_4
  unsigned int v60; // r9d
  unsigned int v61; // eax
  int v62; // eax
  float *v63; // rdi
  float v64; // xmm11_4
  float v65; // xmm7_4
  float v66; // xmm12_4
  float v67; // xmm9_4
  float v68; // xmm10_4
  float v69; // xmm13_4
  float v70; // xmm15_4
  float v71; // xmm14_4
  float *v72; // rcx
  float *v73; // rdx
  float v74; // xmm4_4
  float v75; // xmm6_4
  float v76; // xmm0_4
  float v77; // xmm5_4
  float v78; // xmm4_4
  float v79; // xmm9_4
  float v80; // xmm1_4
  float v81; // xmm5_4
  float v82; // xmm8_4
  float v83; // xmm10_4
  float v84; // xmm13_4
  float v85; // xmm15_4
  float v86; // xmm14_4
  float v87; // xmm2_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  float v90; // xmm3_4
  float v91; // xmm4_4
  int v92; // eax
  float v93; // xmm5_4
  float v94; // xmm11_4
  float v95; // xmm9_4
  float v96; // xmm7_4
  float v97; // xmm15_4
  float v98; // xmm10_4
  float v99; // xmm8_4
  float v100; // xmm12_4
  float v101; // xmm14_4
  float *v102; // rcx
  float *v103; // rdx
  float v104; // xmm2_4
  float v105; // xmm13_4
  float v106; // xmm11_4
  float v107; // xmm6_4
  float v108; // xmm1_4
  float v109; // xmm7_4
  float v110; // xmm0_4
  float v111; // xmm3_4
  float v112; // xmm5_4
  float v113; // xmm4_4
  float v114; // xmm5_4
  float v115; // xmm3_4
  float v116; // xmm9_4
  float v117; // xmm10_4
  float v118; // xmm12_4
  float v119; // xmm0_4
  float v120; // xmm3_4
  float v121; // xmm4_4
  float v122; // xmm15_4
  int v123; // eax
  int v124; // eax
  float v125; // xmm5_4
  float v126; // xmm11_4
  float v127; // xmm9_4
  float v128; // xmm12_4
  float v129; // xmm10_4
  float v130; // xmm8_4
  float v131; // xmm13_4
  float v132; // xmm15_4
  float *v133; // rcx
  float *v134; // rdx
  float v135; // xmm4_4
  float v136; // xmm2_4
  float v137; // xmm14_4
  float v138; // xmm12_4
  float v139; // xmm6_4
  float v140; // xmm1_4
  float v141; // xmm7_4
  float v142; // xmm0_4
  float v143; // xmm3_4
  float v144; // xmm5_4
  float v145; // xmm4_4
  float v146; // xmm5_4
  float v147; // xmm3_4
  float v148; // xmm9_4
  float v149; // xmm10_4
  float v150; // xmm13_4
  float v151; // xmm0_4
  float v152; // xmm3_4
  float v153; // xmm15_4
  float v154; // xmm4_4
  unsigned int v155; // r9d
  unsigned int v156; // eax
  float v157; // xmm8_4
  float v158; // xmm9_4
  float v159; // xmm11_4
  float v160; // xmm12_4
  float v161; // xmm10_4
  float v162; // xmm13_4
  float v163; // xmm7_4
  float v164; // xmm15_4
  float *v165; // rcx
  float *v166; // rdx
  float v167; // xmm6_4
  float v168; // xmm2_4
  float v169; // xmm14_4
  float v170; // xmm8_4
  float v171; // xmm1_4
  float v172; // xmm15_4
  float v173; // xmm3_4
  float v174; // xmm7_4
  float v175; // xmm0_4
  float v176; // xmm5_4
  float v177; // xmm4_4
  float v178; // xmm5_4
  float v179; // xmm10_4
  float v180; // xmm13_4
  float v181; // xmm4_4
  float v182; // xmm0_4
  float v183; // xmm3_4
  float v184; // xmm15_4
  float v185; // xmm15_4
  float v186; // xmm3_4
  float v187; // xmm5_4
  float v188; // xmm0_4
  float v189; // xmm6_4
  float v190; // xmm5_4
  float v191; // xmm0_4
  float v192; // xmm4_4
  float v193; // xmm0_4
  float *v194; // rcx
  float v195; // xmm3_4
  float *v196; // rdx
  float v197; // xmm5_4
  float v198; // xmm1_4
  float v199; // xmm2_4
  float v200; // xmm3_4
  float v201; // xmm6_4
  float v202; // xmm0_4
  int v203; // eax
  float v204; // xmm5_4
  float v205; // xmm0_4
  float *v207; // rdi
  float *v208; // rbx
  float v209; // xmm1_4
  float *v210; // rax
  float v211; // xmm0_4
  float v212; // xmm1_4
  float v213; // xmm0_4
  float v214; // xmm1_4
  float v215; // xmm0_4
  float *v216; // rdi
  float *v217; // rbx
  float *v218; // rdx
  float *v219; // r8
  float v220; // xmm1_4
  float v221; // xmm0_4
  float v222; // xmm1_4
  float v223; // xmm0_4
  float v224; // xmm1_4
  float v225; // xmm0_4
  __int64 v226; // [rsp+8h] [rbp-100h] BYREF
  float v227; // [rsp+48h] [rbp-C0h] BYREF
  float v228; // [rsp+50h] [rbp-B8h] BYREF
  float v229; // [rsp+54h] [rbp-B4h]
  float v230; // [rsp+58h] [rbp-B0h]
  float v231; // [rsp+60h] [rbp-A8h] BYREF
  float v232; // [rsp+64h] [rbp-A4h]
  float v233; // [rsp+68h] [rbp-A0h]
  float v234; // [rsp+70h] [rbp-98h]
  int v235; // [rsp+74h] [rbp-94h]
  __int64 v236; // [rsp+78h] [rbp-90h]
  __int64 v237; // [rsp+80h] [rbp-88h]
  float v238; // [rsp+88h] [rbp-80h] BYREF
  float v239; // [rsp+8Ch] [rbp-7Ch]
  float v240; // [rsp+90h] [rbp-78h]
  float *v241; // [rsp+98h] [rbp-70h]
  __int64 v242; // [rsp+A0h] [rbp-68h]
  float *v243; // [rsp+A8h] [rbp-60h]
  float *v244; // [rsp+B0h] [rbp-58h]
  int v245; // [rsp+B8h] [rbp-50h] BYREF
  int v246; // [rsp+BCh] [rbp-4Ch]
  int v247; // [rsp+C0h] [rbp-48h]
  unsigned int v248; // [rsp+C8h] [rbp-40h]
  __int64 v249; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v250; // [rsp+D8h] [rbp-30h]
  __int64 v251; // [rsp+E0h] [rbp-28h]
  __int64 v252; // [rsp+E8h] [rbp-20h]
  float *v253; // [rsp+F0h] [rbp-18h]
  __int64 v254; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v255; // [rsp+100h] [rbp-8h]
  __int64 v256; // [rsp+108h] [rbp+0h] BYREF
  __int64 v257; // [rsp+110h] [rbp+8h]
  __int128 v258; // [rsp+118h] [rbp+10h] BYREF
  __int128 v259; // [rsp+128h] [rbp+20h]
  float v260; // [rsp+138h] [rbp+30h]
  __int64 v261; // [rsp+140h] [rbp+38h]

  v6 = a6;
  v7 = a3;
  v8 = a4;
  *a3 = 65536.0;
  v9 = *a5;
  v10 = 263004LL * a4;
  v11 = *a5 + *(float *)&a6;
  v248 = a4;
  v253 = a3;
  v244 = a2;
  v243 = a1;
  v12 = v11 < *(float *)&dword_140404A6C[v10 + 111579657];
  v242 = a4;
  if ( v12 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
  v13 = a5[1];
  if ( (float)(v13 + *(float *)&a6) < *(float *)&dword_140404A6C[v10 + 111579658] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
  v14 = a5[2];
  if ( (float)(v14 + *(float *)&a6) < *(float *)&dword_140404A6C[v10 + 111579659] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
  if ( (float)(v9 - *(float *)&a6) > *(float *)&dword_140404A6C[v10 + 111579660] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
  if ( (float)(v13 - *(float *)&a6) > *(float *)&dword_140404A6C[v10 + 111579661] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
  if ( (float)(v14 - *(float *)&a6) > *(float *)&dword_140404A6C[v10 + 111579662] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
  v15 = v9 - *(float *)&dword_140404A6C[v10 + 111579638];
  v16 = *(float *)&dword_140404A6C[v10 + 111579654];
  v17 = v13 - *(float *)&dword_140404A6C[v10 + 111579639];
  v18 = v14 - *(float *)&dword_140404A6C[v10 + 111579640];
  v241 = (float *)&dword_140404A6C[v10 + 111579641];
  v238 = v15;
  v19 = v15 * *(float *)&dword_140404A6C[v10 + 111579644];
  v20 = v15 * *(float *)&dword_140404A6C[v10 + 111579641];
  v21 = v18 * *(float *)&dword_140404A6C[v10 + 111579643];
  v22 = v17 * *(float *)&dword_140404A6C[v10 + 111579645];
  v23 = v18 * *(float *)&dword_140404A6C[v10 + 111579646];
  v24 = v20 + (float)(v17 * *(float *)&dword_140404A6C[v10 + 111579642]);
  v25 = v15 * *(float *)&dword_140404A6C[v10 + 111579647];
  v239 = v17;
  v26 = v17 * *(float *)&dword_140404A6C[v10 + 111579648];
  v240 = v18;
  v27 = v18 * *(float *)&dword_140404A6C[v10 + 111579649];
  v28 = v19 + v22;
  *(float *)&v256 = v24 + v21;
  *((float *)&v256 + 1) = v28 + v23;
  v29 = (int)(float)((float)((float)(v24 + v21) - *(float *)&a6) * v16);
  *(float *)&v257 = (float)(v25 + v26) + v27;
  LODWORD(v251) = v29;
  v30 = (int)(float)((float)(*(float *)&v257 - *(float *)&a6) * v16);
  LODWORD(v252) = v30;
  v235 = (int)(float)((float)((float)(*(float *)&a6 + v21) + v24) * v16);
  v31 = (int)(float)((float)((float)(v28 + v23) - *(float *)&a6) * v16);
  LODWORD(v236) = v31;
  v246 = v31;
  v32 = (int)(float)((float)((float)(*(float *)&a6 + v23) + v28) * v16);
  HIDWORD(v252) = v32;
  v33 = (int)(float)((float)((float)(*(float *)&a6 + v27) + (float)(v25 + v26)) * v16);
  HIDWORD(v251) = v33;
  if ( v31 > v32 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
  v246 = (int)(float)((float)((float)(v28 + v23) - *(float *)&a6) * v16);
  while ( 1 )
  {
    v247 = v30;
    v34 = v30;
    if ( v30 <= v33 )
      break;
LABEL_69:
    LODWORD(v236) = ++v31;
    v246 = v31;
    if ( v31 > v32 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
  }
  v35 = v235;
  while ( 1 )
  {
    v245 = v29;
    v36 = v29;
    if ( v29 <= v35 )
      break;
LABEL_67:
    v247 = ++v34;
    if ( v34 > v33 )
    {
      v30 = v252;
      v32 = HIDWORD(v252);
      goto LABEL_69;
    }
  }
  while ( 1 )
  {
    if ( v36 < 0 )
      goto LABEL_65;
    if ( v36 >= (int)(dword_140404A6C[v10 + 111579650] << 6) )
      goto LABEL_65;
    if ( v31 < 0 )
      goto LABEL_65;
    if ( v31 >= (int)(dword_140404A6C[v10 + 111579651] << 6) )
      goto LABEL_65;
    if ( v34 < 0 )
      goto LABEL_65;
    if ( v34 >= (int)(dword_140404A6C[v10 + 111579652] << 6) )
      goto LABEL_65;
    v37 = *(int *)(*(_QWORD *)&dword_140404A6C[v10 + 111579655]
                 + 4LL
                 * (int)((v36 >> 6)
                       + dword_140404A6C[v10 + 111579650] * ((v34 >> 6) + dword_140404A6C[v10 + 111579652] * (v31 >> 6))));
    if ( (_DWORD)v37 == -1 )
      goto LABEL_65;
    v38 = (int)dword_140404A6C[263004 * v8
                             + 111579985
                             + 513 * v37
                             + 64 * ((v31 >> 3) & 7)
                             + 8 * ((v34 >> 3) & 7)
                             + ((v36 >> 3) & 7)];
    if ( (_DWORD)v38 == -1 )
      goto LABEL_65;
    v39 = 6930 * v38 + (v36 & 7) + 8 * ((v34 & 7) + 8 * (v31 & 7u));
    v237 = v39;
    v40 = dword_140404A6C[v39 + 83199479];
    if ( !v40 )
      goto LABEL_26;
    v41 = *(float *)&dword_140404A6C[v10 + 111579653];
    v42 = 0;
    v43 = 948LL * (v40 & 0x3FF);
    v44 = (float)v31 * v41;
    v238 = (float)((float)v36 + 0.5) * v41;
    v239 = v44;
    v240 = (float)((float)v34 + 0.5) * v41;
    if ( (int)dword_140404A6C[v43 + 272299416] > 0 )
      break;
LABEL_25:
    v7 = v253;
    v39 = v237;
LABEL_26:
    v52 = dword_140404A6C[v39 + 83198967];
    v53 = v52;
    v54 = v52;
    if ( v52 > 0 )
    {
      v55 = v52 & 0x7F;
      v56 = 2310LL * v55;
      v57 = dword_140404A6C[v56 + 432533577];
      v238 = *(float *)&dword_140404A6C[v56 + 432533576];
      v240 = *(float *)&dword_140404A6C[v56 + 432533578];
      v239 = *(float *)&v57;
      if ( (v53 & 0xC00) == 0x400 )
      {
        sub_14007B4D0(&v238, (float *)&dword_1402F6188);
        v58 = v54 & 0xC00;
      }
      else
      {
        v58 = v54 & 0xC00;
        if ( v58 == 2048 || v58 == 3072 )
          sub_14007B4D0(&v238, (float *)&dword_1402F6188);
      }
      v59 = *(float *)&dword_140404A6C[v10 + 111579653];
      v260 = 1.0;
      v238 = v238 + (float)((float)((float)v36 + 0.5) * v59);
      v239 = v239 + (float)((float)(int)v236 * v59);
      v240 = v240 + (float)((float)((float)v34 + 0.5) * v59);
      v258 = xmmword_140278D30;
      v259 = xmmword_140278D30;
      if ( v58 == 1024 || v58 == 2048 || v58 == 3072 )
        sub_14007B2A0((__int64)&v258, (float *)&dword_1402F6188);
      if ( (unsigned int)sub_140152750(
                           (unsigned int)&v228,
                           (unsigned int)&v231,
                           (unsigned int)&v227,
                           v55,
                           (unsigned int)&v238,
                           (unsigned int)&v258,
                           (unsigned int)&v256,
                           v6,
                           LODWORD(v227),
                           LODWORD(v228),
                           LODWORD(v230),
                           LODWORD(v231),
                           LODWORD(v233),
                           LODWORD(v234),
                           v236,
                           v237,
                           LODWORD(v238),
                           LODWORD(v240),
                           (_DWORD)v241,
                           v242,
                           (_DWORD)v243,
                           (_DWORD)v244,
                           v245,
                           v247,
                           v248,
                           v249,
                           v250,
                           v251,
                           v252,
                           (__int64)v253) )
      {
        v216 = v243;
        sub_14007B0F0(v243, v243, v241);
        v217 = v244;
        v218 = v244;
        v219 = v241;
        *v216 = *(float *)&dword_140404A6C[v10 + 111579638] + *v216;
        v216[1] = *(float *)&dword_140404A6C[v10 + 111579639] + v216[1];
        v216[2] = *(float *)&dword_140404A6C[v10 + 111579640] + v216[2];
        sub_14007B0F0(v218, v218, v219);
        v220 = v229;
        *v216 = v228;
        v221 = v230;
        v216[1] = v220;
        v222 = v231;
        v216[2] = v221;
        v223 = v232;
        *v217 = v222;
        v224 = v233;
        v217[1] = v223;
        v225 = v227;
        v217[2] = v224;
        *v7 = v225;
        dword_140404A6C[73007003] = -1;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
      }
    }
    v60 = dword_140404A6C[v39 + 83194359];
    v61 = v60 & 0xE0000000;
    if ( (v60 & 0xE0000000) == 0x40000000 )
    {
      v62 = sub_1401543C0(
              (unsigned int)&v228,
              (unsigned int)&v231,
              (unsigned int)&v227,
              (unsigned int)&v256,
              v6,
              (unsigned int)&v245,
              v60,
              dword_140404A6C[v10 + 111579653],
              LODWORD(v227),
              LODWORD(v228),
              LODWORD(v230),
              LODWORD(v231),
              LODWORD(v233),
              LODWORD(v234),
              v236,
              v237,
              LODWORD(v238),
              LODWORD(v240),
              (_DWORD)v241,
              v242,
              (_DWORD)v243,
              (_DWORD)v244,
              v245,
              v247,
              v248,
              v249,
              v250,
              v251,
              v252);
      v63 = v241;
      if ( v62 && v227 < *v7 )
      {
        v64 = v241[1];
        v65 = *v241;
        v66 = v241[2];
        v67 = v241[3];
        v68 = v241[6];
        v69 = v241[7];
        v70 = v241[8];
        v71 = v241[4];
        v72 = v243;
        v73 = v244;
        v31 = v236;
        v74 = v66 * v228;
        v75 = (float)(v241[5] * v229) + *(float *)&dword_140404A6C[v10 + 111579640];
        v76 = (float)(v69 * v230) + (float)(v64 * v228);
        v234 = (float)((float)(v68 * v230) + (float)(*v241 * v228))
             + (float)((float)(v67 * v229) + *(float *)&dword_140404A6C[v10 + 111579638]);
        v228 = v234;
        v77 = (float)(v70 * v230) + v74;
        v78 = v231;
        v79 = v67 * v232;
        v80 = v231 * v64;
        v81 = v77 + v75;
        v6 = a6;
        v82 = (float)((float)(v71 * v229) + *(float *)&dword_140404A6C[v10 + 111579639]) + v76;
        v83 = v68 * v233;
        v84 = v69 * v233;
        v85 = v70 * v233;
        v86 = v71 * v232;
        v87 = v232 * v241[5];
        *v243 = v234;
        v88 = v227;
        v72[1] = v82;
        v72[2] = v81;
        v89 = (float)(v80 + v86) + v84;
        v229 = v82;
        v230 = v81;
        v73[1] = v89;
        v232 = v89;
        v90 = (float)((float)(v78 * v65) + v79) + v83;
        v91 = (float)((float)(v78 * v66) + v87) + v85;
        *v73 = v90;
        v231 = v90;
        v73[2] = v91;
        *v7 = v88;
        v233 = v91;
        goto LABEL_51;
      }
      goto LABEL_45;
    }
    if ( v61 == 0x80000000 )
    {
      v92 = sub_1401564A0(
              (unsigned int)&v228,
              (unsigned int)&v231,
              (unsigned int)&v227,
              (unsigned int)&v256,
              v6,
              (unsigned int)&v245,
              v60,
              dword_140404A6C[v10 + 111579653],
              LODWORD(v227),
              LODWORD(v228),
              LODWORD(v230),
              LODWORD(v231),
              LODWORD(v233),
              LODWORD(v234),
              v236,
              v237,
              LODWORD(v238),
              LODWORD(v240),
              (_DWORD)v241,
              v242,
              (_DWORD)v243,
              (_DWORD)v244,
              v245,
              v247,
              v248,
              v249,
              v250,
              v251,
              v252,
              (__int64)v253);
      v63 = v241;
      if ( v92 && v227 < *v7 )
      {
        v93 = v241[1];
        v94 = v241[4];
        v95 = v241[6];
        v96 = v94;
        v97 = v241[2];
        v98 = v241[7];
        v99 = v241[3];
        v100 = v241[8];
        v101 = v241[5];
        v102 = v243;
        v103 = v244;
        v234 = *v241;
        *(float *)&v237 = v93;
        v104 = v232;
        v105 = (float)((float)(v95 * v230) + (float)(v234 * v228))
             + (float)((float)(v99 * v229) + *(float *)&dword_140404A6C[v10 + 111579638]);
        v106 = v94 * v232;
        v107 = (float)(v101 * v229) + *(float *)&dword_140404A6C[v10 + 111579640];
        v108 = v231;
        v109 = (float)((float)(v96 * v229) + *(float *)&dword_140404A6C[v10 + 111579639])
             + (float)((float)(v98 * v230) + (float)(v93 * v228));
        v110 = v233;
        v111 = v93;
        v112 = (float)(v100 * v230) + (float)(v97 * v228);
        *v243 = v105;
        v113 = v234;
        v102[1] = v109;
        v114 = v112 + v107;
        v115 = (float)(v111 * v108) + v106;
        v116 = v95 * v110;
        v6 = a6;
        v102[2] = v114;
        v117 = v98 * v110;
        v118 = v100 * v110;
        v119 = v227;
        v120 = v115 + v117;
        v103[1] = v120;
        v228 = v105;
        v229 = v109;
        v230 = v114;
        v232 = v120;
        v121 = (float)((float)(v113 * v108) + (float)(v99 * v104)) + v116;
        v122 = (float)((float)(v97 * v108) + (float)(v101 * v104)) + v118;
        *v103 = v121;
        v231 = v121;
        v103[2] = v122;
        *v7 = v119;
        v233 = v122;
      }
LABEL_45:
      v31 = v236;
      goto LABEL_51;
    }
    v31 = v236;
    if ( v61 == -1073741824 )
    {
      LODWORD(v249) = v36 - (unsigned __int8)v60;
      HIDWORD(v249) = v236 - BYTE2(v60);
      LODWORD(v250) = v34 - BYTE1(v60);
      v123 = sub_1400129D0(v248, v249, HIDWORD(v249), v250);
      v124 = sub_1401564A0(
               (unsigned int)&v228,
               (unsigned int)&v231,
               (unsigned int)&v227,
               (unsigned int)&v256,
               v6,
               (unsigned int)&v249,
               v123,
               dword_140404A6C[v10 + 111579653],
               LODWORD(v227),
               LODWORD(v228),
               LODWORD(v230),
               LODWORD(v231),
               LODWORD(v233),
               LODWORD(v234),
               v236,
               v237,
               LODWORD(v238),
               LODWORD(v240),
               (_DWORD)v241,
               v242,
               (_DWORD)v243,
               (_DWORD)v244,
               v245,
               v247,
               v248,
               v249,
               v250,
               v251,
               v252,
               (__int64)v253);
      v63 = v241;
      if ( v124 && v227 < *v7 )
      {
        v125 = v241[1];
        v126 = v241[4];
        v127 = v241[6];
        v128 = v241[2];
        v129 = v241[7];
        v130 = v241[3];
        v131 = v241[8];
        v132 = v241[5];
        v133 = v243;
        v134 = v244;
        v135 = v128 * v228;
        *(float *)&v237 = *v241;
        v234 = v125;
        v136 = v231;
        v137 = (float)((float)(v127 * v230) + (float)(*(float *)&v237 * v228))
             + (float)((float)(v130 * v229) + *(float *)&dword_140404A6C[v10 + 111579638]);
        v138 = v128 * v231;
        v139 = (float)(v132 * v229) + *(float *)&dword_140404A6C[v10 + 111579640];
        v140 = v232;
        v141 = (float)((float)(v126 * v229) + *(float *)&dword_140404A6C[v10 + 111579639])
             + (float)((float)(v129 * v230) + (float)(v125 * v228));
        v142 = v233;
        v143 = v125;
        v144 = (float)(v131 * v230) + v135;
        *v243 = v137;
        v145 = *(float *)&v237;
        v133[1] = v141;
        v146 = v144 + v139;
        v133[2] = v146;
        v147 = (float)(v143 * v136) + (float)(v126 * v140);
        v6 = a6;
        v148 = v127 * v142;
        v149 = v129 * v142;
        v150 = v131 * v142;
        v151 = v227;
        v152 = v147 + v149;
        v153 = (float)((float)(v132 * v140) + v138) + v150;
        v228 = v137;
        v229 = v141;
        v134[1] = v152;
        v230 = v146;
        v232 = v152;
        v134[2] = v153;
        v233 = v153;
        v154 = (float)((float)(v145 * v136) + (float)(v130 * v140)) + v148;
        *v134 = v154;
        *v7 = v151;
        v231 = v154;
      }
    }
    else
    {
      v63 = v241;
    }
LABEL_51:
    v155 = dword_140404A6C[v39 + 83197431];
    v156 = v155 & 0xE0000000;
    if ( (v155 & 0xE0000000) == 0x40000000 )
    {
      if ( (unsigned int)sub_1401543C0(
                           (unsigned int)&v228,
                           (unsigned int)&v231,
                           (unsigned int)&v227,
                           (unsigned int)&v256,
                           v6,
                           (unsigned int)&v245,
                           v155,
                           dword_140404A6C[v10 + 111579653],
                           LODWORD(v227),
                           LODWORD(v228),
                           LODWORD(v230),
                           LODWORD(v231),
                           LODWORD(v233),
                           LODWORD(v234),
                           v236,
                           v237,
                           LODWORD(v238),
                           LODWORD(v240),
                           (_DWORD)v241,
                           v242,
                           (_DWORD)v243,
                           (_DWORD)v244,
                           v245,
                           v247,
                           v248,
                           v249,
                           v250,
                           v251,
                           v252)
        && v227 < *v7 )
      {
        v157 = *v63;
        v158 = v63[6];
        v159 = v63[1];
        v160 = v63[2];
        v161 = v63[7];
        v162 = v63[8];
        v163 = v63[4];
        v164 = v63[5];
        v165 = v243;
        v166 = v244;
        v234 = v63[3];
        *(float *)&v237 = v163;
        v167 = (float)(v164 * v229) + *(float *)&dword_140404A6C[v10 + 111579640];
        v168 = v231;
        v169 = (float)((float)(v158 * v230) + (float)(v157 * v228))
             + (float)((float)(v234 * v229) + *(float *)&dword_140404A6C[v10 + 111579638]);
        v170 = v157 * v231;
        v171 = v232;
        v172 = v164 * v232;
        v173 = v163;
        v174 = (float)((float)(v163 * v229) + *(float *)&dword_140404A6C[v10 + 111579639])
             + (float)((float)(v161 * v230) + (float)(v159 * v228));
        v175 = v233;
        v176 = (float)(v162 * v230) + (float)(v160 * v228);
        *v243 = v169;
        v177 = v234 * v171;
        v165[1] = v174;
        v178 = v176 + v167;
        v179 = v161 * v175;
        v165[2] = v178;
        v180 = v162 * v175;
        v181 = (float)(v177 + v170) + (float)(v158 * v175);
        v182 = v227;
        *v166 = v181;
        v228 = v169;
        v229 = v174;
        v230 = v178;
        v231 = v181;
        v183 = (float)((float)(v173 * v171) + (float)(v159 * v168)) + v179;
        v184 = (float)(v172 + (float)(v160 * v168)) + v180;
        v166[1] = v183;
        v232 = v183;
        v166[2] = v184;
        *v7 = v182;
        v233 = v184;
      }
      goto LABEL_64;
    }
    if ( v156 == 0x80000000 )
    {
      if ( !(unsigned int)sub_1401564A0(
                            (unsigned int)&v228,
                            (unsigned int)&v231,
                            (unsigned int)&v227,
                            (unsigned int)&v256,
                            v6,
                            (unsigned int)&v245,
                            v155,
                            dword_140404A6C[v10 + 111579653],
                            LODWORD(v227),
                            LODWORD(v228),
                            LODWORD(v230),
                            LODWORD(v231),
                            LODWORD(v233),
                            LODWORD(v234),
                            v236,
                            v237,
                            LODWORD(v238),
                            LODWORD(v240),
                            (_DWORD)v241,
                            v242,
                            (_DWORD)v243,
                            (_DWORD)v244,
                            v245,
                            v247,
                            v248,
                            v249,
                            v250,
                            v251,
                            v252,
                            (__int64)v253)
        || v227 >= *v7 )
      {
        goto LABEL_64;
      }
      v185 = (float)((float)(v230 * v63[6]) + (float)(v228 * *v63))
           + (float)((float)(v229 * v63[3]) + *(float *)&dword_140404A6C[v10 + 111579638]);
      v186 = v232;
      v187 = (float)((float)(v229 * v63[4]) + *(float *)&dword_140404A6C[v10 + 111579639])
           + (float)((float)(v230 * v63[7]) + (float)(v228 * v63[1]));
      v234 = (float)((float)(v230 * v63[8]) + (float)(v228 * v63[2]))
           + (float)((float)(v229 * v63[5]) + *(float *)&dword_140404A6C[v10 + 111579640]);
      v230 = v234;
      *(float *)&v237 = v187;
      v188 = v231 * *v63;
      v229 = v187;
      v189 = v232 * v63[5];
      v190 = (float)(v232 * v63[3]) + v188;
      v191 = v231;
      v192 = v231 * v63[2];
    }
    else
    {
      if ( v156 != -1073741824 )
        goto LABEL_64;
      LODWORD(v249) = v36 - (unsigned __int8)v155;
      HIDWORD(v249) = v31 - BYTE2(v155);
      LODWORD(v250) = v34 - BYTE1(v155);
      v203 = sub_140016450(v248, v249, HIDWORD(v249), v250);
      if ( !(unsigned int)sub_1401564A0(
                            (unsigned int)&v228,
                            (unsigned int)&v231,
                            (unsigned int)&v227,
                            (unsigned int)&v256,
                            v6,
                            (unsigned int)&v249,
                            v203,
                            dword_140404A6C[v10 + 111579653],
                            LODWORD(v227),
                            LODWORD(v228),
                            LODWORD(v230),
                            LODWORD(v231),
                            LODWORD(v233),
                            LODWORD(v234),
                            v236,
                            v237,
                            LODWORD(v238),
                            LODWORD(v240),
                            (_DWORD)v241,
                            v242,
                            (_DWORD)v243,
                            (_DWORD)v244,
                            v245,
                            v247,
                            v248,
                            v249,
                            v250,
                            v251,
                            v252,
                            (__int64)v253)
        || v227 >= *v7 )
      {
        goto LABEL_64;
      }
      v185 = (float)((float)(v230 * v63[6]) + (float)(v228 * *v63))
           + (float)((float)(v229 * v63[3]) + *(float *)&dword_140404A6C[v10 + 111579638]);
      v204 = (float)((float)(v229 * v63[4]) + *(float *)&dword_140404A6C[v10 + 111579639])
           + (float)((float)(v230 * v63[7]) + (float)(v228 * v63[1]));
      v234 = (float)((float)(v230 * v63[8]) + (float)(v228 * v63[2]))
           + (float)((float)(v229 * v63[5]) + *(float *)&dword_140404A6C[v10 + 111579640]);
      v230 = v234;
      *(float *)&v237 = v204;
      v205 = v232 * v63[3];
      v186 = v232;
      v192 = v232 * v63[5];
      v229 = v204;
      v190 = (float)(v231 * *v63) + v205;
      v191 = v231;
      v189 = v231 * v63[2];
    }
    v193 = v191 * v63[1];
    v194 = v243;
    v195 = v186 * v63[4];
    v196 = v244;
    v228 = v185;
    v197 = v190 + (float)(v233 * v63[6]);
    v198 = v233 * v63[7];
    v199 = v233 * v63[8];
    *((_DWORD *)v243 + 1) = v237;
    v200 = (float)(v195 + v193) + v198;
    v194[2] = v234;
    v201 = (float)(v189 + v192) + v199;
    v202 = v227;
    *v194 = v185;
    v196[1] = v200;
    *v196 = v197;
    v196[2] = v201;
    *v7 = v202;
    v232 = v200;
    v231 = v197;
    v233 = v201;
LABEL_64:
    v8 = v242;
    v35 = v235;
LABEL_65:
    v6 = a6;
    v245 = ++v36;
    if ( v36 > v35 )
    {
      v29 = v251;
      v33 = HIDWORD(v251);
      goto LABEL_67;
    }
  }
  v45 = 0x140000000LL + v43 * 4 + 1093411124;
  while ( 1 )
  {
    v46 = *(_DWORD *)(v45 - 36);
    v260 = 1.0;
    v258 = xmmword_140278D30;
    v259 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v258, (float *)&dword_1402F6188);
    v47 = *(float *)(v45 - 32);
    v48 = *(float *)(v45 - 28);
    v49 = *(float *)(v45 - 24);
    *(float *)&v254 = (float)((float)((float)(*(float *)&v258 * v47) + (float)((float)((float)v36 + 0.5) * v41))
                            + (float)(*((float *)&v258 + 3) * v48))
                    + (float)(*((float *)&v259 + 2) * v49);
    *((float *)&v254 + 1) = (float)((float)((float)(*((float *)&v258 + 1) * v47) + v44) + (float)(*(float *)&v259 * v48))
                          + (float)(*((float *)&v259 + 3) * v49);
    v50 = (float)((float)(*((float *)&v258 + 2) * v47) + (float)((float)((float)v34 + 0.5) * v41))
        + (float)(*((float *)&v259 + 1) * v48);
    v258 = *(_OWORD *)(v45 - 20);
    v51 = v50 + (float)(v260 * v49);
    v259 = *(_OWORD *)(v45 - 4);
    v260 = *(float *)(v45 + 12);
    *(float *)&v255 = v51;
    sub_14007B2A0((__int64)&v258, (float *)&dword_1402F6188);
    if ( (unsigned int)sub_140153850(
                         (unsigned int)&v228,
                         (unsigned int)&v231,
                         (unsigned int)&v227,
                         v46,
                         (unsigned int)&v254,
                         (unsigned int)&v258,
                         (unsigned int)&v256,
                         v6,
                         LODWORD(v227),
                         LODWORD(v228),
                         LODWORD(v230),
                         LODWORD(v231),
                         LODWORD(v233),
                         LODWORD(v234),
                         v236,
                         v237,
                         LODWORD(v238),
                         LODWORD(v240),
                         (_DWORD)v241,
                         v242,
                         (_DWORD)v243,
                         (_DWORD)v244,
                         v245,
                         v247,
                         v248,
                         v249,
                         v250,
                         v251,
                         v252,
                         (__int64)v253,
                         v254,
                         v255,
                         v256,
                         v257,
                         v258) )
      break;
    ++v42;
    v45 += 116;
    if ( v42 >= (int)dword_140404A6C[v43 + 272299416] )
      goto LABEL_25;
  }
  v207 = v243;
  v208 = v244;
  v209 = v229;
  v210 = v253;
  *v243 = v228;
  v211 = v230;
  v207[1] = v209;
  v212 = v231;
  v207[2] = v211;
  v213 = v232;
  *v208 = v212;
  v214 = v233;
  v208[1] = v213;
  v215 = v227;
  v208[2] = v214;
  *v210 = v215;
  dword_140404A6C[73007003] = -1;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v226 ^ v261);
}

