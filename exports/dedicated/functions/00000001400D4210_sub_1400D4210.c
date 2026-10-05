/* Address: 0x1400d4210 | Name: sub_1400D4210 | Size: 5555 bytes */
_BOOL8 __fastcall sub_1400D4210(float *a1, float *a2, float *a3, signed int a4, float *a5, float a6)
{
  float v6; // xmm11_4
  float *v7; // r12
  __int64 v8; // r10
  float v9; // xmm13_4
  unsigned __int64 v10; // r14
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
  int v40; // eax
  float v41; // xmm0_4
  int v42; // esi
  __int64 v43; // r12
  float v44; // xmm9_4
  __int64 v45; // rdi
  int v46; // ebx
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm6_4
  float v50; // xmm2_4
  float v51; // xmm2_4
  __int64 v52; // r8
  int v53; // edi
  __int16 v54; // dx
  __int16 v55; // bx
  unsigned int v56; // edi
  __int64 v57; // rcx
  float v58; // xmm1_4
  int v59; // ebx
  float v60; // xmm2_4
  int v61; // r9d
  unsigned int v62; // eax
  int v63; // eax
  float *v64; // rdi
  float v65; // xmm11_4
  float v66; // xmm7_4
  float v67; // xmm12_4
  float v68; // xmm9_4
  float v69; // xmm10_4
  float v70; // xmm13_4
  float v71; // xmm15_4
  float v72; // xmm14_4
  float *v73; // rcx
  float *v74; // rdx
  float v75; // xmm4_4
  float v76; // xmm6_4
  float v77; // xmm0_4
  float v78; // xmm5_4
  float v79; // xmm4_4
  float v80; // xmm9_4
  float v81; // xmm1_4
  float v82; // xmm5_4
  float v83; // xmm8_4
  float v84; // xmm10_4
  float v85; // xmm13_4
  float v86; // xmm15_4
  float v87; // xmm14_4
  float v88; // xmm2_4
  float v89; // xmm0_4
  float v90; // xmm1_4
  float v91; // xmm3_4
  float v92; // xmm4_4
  int v93; // eax
  float v94; // xmm5_4
  float v95; // xmm11_4
  float v96; // xmm9_4
  float v97; // xmm7_4
  float v98; // xmm15_4
  float v99; // xmm10_4
  float v100; // xmm8_4
  float v101; // xmm12_4
  float v102; // xmm14_4
  float *v103; // rcx
  float *v104; // rdx
  float v105; // xmm2_4
  float v106; // xmm13_4
  float v107; // xmm11_4
  float v108; // xmm6_4
  float v109; // xmm1_4
  float v110; // xmm7_4
  float v111; // xmm0_4
  float v112; // xmm3_4
  float v113; // xmm5_4
  float v114; // xmm4_4
  float v115; // xmm5_4
  float v116; // xmm3_4
  float v117; // xmm9_4
  float v118; // xmm10_4
  float v119; // xmm12_4
  float v120; // xmm0_4
  float v121; // xmm3_4
  float v122; // xmm4_4
  float v123; // xmm15_4
  int v124; // eax
  int v125; // eax
  float v126; // xmm5_4
  float v127; // xmm11_4
  float v128; // xmm9_4
  float v129; // xmm12_4
  float v130; // xmm10_4
  float v131; // xmm8_4
  float v132; // xmm13_4
  float v133; // xmm15_4
  float *v134; // rcx
  float *v135; // rdx
  float v136; // xmm4_4
  float v137; // xmm2_4
  float v138; // xmm14_4
  float v139; // xmm12_4
  float v140; // xmm6_4
  float v141; // xmm1_4
  float v142; // xmm7_4
  float v143; // xmm0_4
  float v144; // xmm3_4
  float v145; // xmm5_4
  float v146; // xmm4_4
  float v147; // xmm5_4
  float v148; // xmm3_4
  float v149; // xmm9_4
  float v150; // xmm10_4
  float v151; // xmm13_4
  float v152; // xmm0_4
  float v153; // xmm3_4
  float v154; // xmm15_4
  float v155; // xmm4_4
  int v156; // r9d
  unsigned int v157; // eax
  float v158; // xmm8_4
  float v159; // xmm9_4
  float v160; // xmm11_4
  float v161; // xmm12_4
  float v162; // xmm10_4
  float v163; // xmm13_4
  float v164; // xmm7_4
  float v165; // xmm15_4
  float *v166; // rcx
  float *v167; // rdx
  float v168; // xmm6_4
  float v169; // xmm2_4
  float v170; // xmm14_4
  float v171; // xmm8_4
  float v172; // xmm1_4
  float v173; // xmm15_4
  float v174; // xmm3_4
  float v175; // xmm7_4
  float v176; // xmm0_4
  float v177; // xmm5_4
  float v178; // xmm4_4
  float v179; // xmm5_4
  float v180; // xmm10_4
  float v181; // xmm13_4
  float v182; // xmm4_4
  float v183; // xmm0_4
  float v184; // xmm3_4
  float v185; // xmm15_4
  float v186; // xmm15_4
  float v187; // xmm3_4
  float v188; // xmm5_4
  float v189; // xmm0_4
  float v190; // xmm6_4
  float v191; // xmm5_4
  float v192; // xmm0_4
  float v193; // xmm4_4
  float v194; // xmm0_4
  float *v195; // rcx
  float v196; // xmm3_4
  float *v197; // rdx
  float v198; // xmm5_4
  float v199; // xmm1_4
  float v200; // xmm2_4
  float v201; // xmm3_4
  float v202; // xmm6_4
  float v203; // xmm0_4
  int v204; // eax
  float v205; // xmm5_4
  float v206; // xmm0_4
  float *v208; // rdi
  float *v209; // rbx
  float v210; // xmm1_4
  float *v211; // rax
  float v212; // xmm0_4
  float v213; // xmm1_4
  float v214; // xmm0_4
  float v215; // xmm1_4
  float v216; // xmm0_4
  float *v217; // rdi
  float *v218; // rbx
  float *v219; // rdx
  float *v220; // r8
  float v221; // xmm1_4
  float v222; // xmm0_4
  float v223; // xmm1_4
  float v224; // xmm0_4
  float v225; // xmm1_4
  float v226; // xmm0_4
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
  unsigned int v249; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v250; // [rsp+D4h] [rbp-34h]
  unsigned int v251; // [rsp+D8h] [rbp-30h]
  int v252; // [rsp+E0h] [rbp-28h]
  int v253; // [rsp+E4h] [rbp-24h]
  int v254; // [rsp+E8h] [rbp-20h]
  int v255; // [rsp+ECh] [rbp-1Ch]
  float *v256; // [rsp+F0h] [rbp-18h]
  float v257[4]; // [rsp+F8h] [rbp-10h] BYREF
  float v258[2]; // [rsp+108h] [rbp+0h] BYREF
  float v259; // [rsp+110h] [rbp+8h]
  __int128 v260; // [rsp+118h] [rbp+10h] BYREF
  __int128 v261; // [rsp+128h] [rbp+20h]
  float v262; // [rsp+138h] [rbp+30h]

  v6 = a6;
  v7 = a3;
  v8 = a4;
  *a3 = 65536.0;
  v9 = *a5;
  v10 = 1052016LL * a4;
  v11 = *a5 + a6;
  v248 = a4;
  v256 = a3;
  v244 = a2;
  v243 = a1;
  v12 = v11 < *(float *)((char *)&unk_16CDE9EF0 + v10);
  v242 = a4;
  if ( v12 )
    return 0;
  v13 = a5[1];
  if ( (float)(v13 + a6) < *(float *)((char *)&unk_16CDE9EF4 + v10) )
    return 0;
  v14 = a5[2];
  if ( (float)(v14 + a6) < *(float *)((char *)&unk_16CDE9EF8 + v10) )
    return 0;
  if ( (float)(v9 - a6) > *(float *)((char *)&unk_16CDE9EFC + v10) )
    return 0;
  if ( (float)(v13 - a6) > *(float *)((char *)&unk_16CDE9F00 + v10) )
    return 0;
  if ( (float)(v14 - a6) > *(float *)((char *)&unk_16CDE9F04 + v10) )
    return 0;
  v15 = v9 - *(float *)&dword_16CDE9EA4[v10 / 4];
  v16 = *(float *)&algn_16CDE9EE4[v10];
  v17 = v13 - *(float *)&dword_16CDE9EA8[v10 / 4];
  v18 = v14 - *(float *)&dword_16CDE9EAC[v10 / 4];
  v241 = (float *)((char *)&unk_16CDE9EB0 + v10);
  v238 = v15;
  v19 = v15 * *(float *)((char *)&unk_16CDE9EBC + v10);
  v20 = v15 * *(float *)((char *)&unk_16CDE9EB0 + v10);
  v21 = v18 * *(float *)((char *)&unk_16CDE9EB0 + v10 + 8);
  v22 = v17 * *(float *)((char *)&unk_16CDE9EC0 + v10);
  v23 = v18 * *(float *)((char *)&unk_16CDE9EC4 + v10);
  v24 = v20 + (float)(v17 * *(float *)((char *)&unk_16CDE9EB0 + v10 + 4));
  v25 = v15 * *(float *)((char *)&unk_16CDE9EC8 + v10);
  v239 = v17;
  v26 = v17 * *(float *)((char *)&unk_16CDE9ECC + v10);
  v240 = v18;
  v27 = v18 * *(float *)((char *)&unk_16CDE9ED0 + v10);
  v28 = v19 + v22;
  v258[0] = v24 + v21;
  v258[1] = v28 + v23;
  v29 = (int)(float)((float)((float)(v24 + v21) - a6) * v16);
  v259 = (float)(v25 + v26) + v27;
  v252 = v29;
  v30 = (int)(float)((float)(v259 - a6) * v16);
  v254 = v30;
  v235 = (int)(float)((float)((float)(a6 + v21) + v24) * v16);
  v31 = (int)(float)((float)((float)(v28 + v23) - a6) * v16);
  LODWORD(v236) = v31;
  v246 = v31;
  v32 = (int)(float)((float)((float)(a6 + v23) + v28) * v16);
  v255 = v32;
  v33 = (int)(float)((float)((float)(a6 + v27) + (float)(v25 + v26)) * v16);
  v253 = v33;
  if ( v31 > v32 )
    return 0;
  v246 = (int)(float)((float)((float)(v28 + v23) - a6) * v16);
LABEL_9:
  v247 = v30;
  v34 = v30;
  if ( v30 > v33 )
    goto LABEL_69;
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
      v30 = v254;
      v32 = v255;
LABEL_69:
      LODWORD(v236) = ++v31;
      v246 = v31;
      if ( v31 > v32 )
        return *v7 < 65536.0;
      goto LABEL_9;
    }
  }
  while ( 1 )
  {
    if ( v36 < 0 )
      goto LABEL_65;
    if ( v36 >= dword_16CDE9ED4[v10 / 4] << 6 )
      goto LABEL_65;
    if ( v31 < 0 )
      goto LABEL_65;
    if ( v31 >= dword_16CDE9ED8[v10 / 4] << 6 )
      goto LABEL_65;
    if ( v34 < 0 )
      goto LABEL_65;
    if ( v34 >= dword_16CDE9EDC[v10 / 4] << 6 )
      goto LABEL_65;
    v37 = *(int *)(qword_16CDE9EE8[v10 / 8]
                 + 4LL * ((v36 >> 6) + dword_16CDE9ED4[v10 / 4] * ((v34 >> 6) + dword_16CDE9EDC[v10 / 4] * (v31 >> 6))));
    if ( (_DWORD)v37 == -1 )
      goto LABEL_65;
    v38 = dword_16CDEA410[263004 * v8 + 513 * v37 + 64 * ((v31 >> 3) & 7) + 8 * ((v34 >> 3) & 7) + ((v36 >> 3) & 7)];
    if ( (_DWORD)v38 == -1 )
      goto LABEL_65;
    v39 = 6930 * v38 + (v36 & 7) + 8 * ((v34 & 7) + 8 * (v31 & 7u));
    v237 = v39;
    v40 = dword_1661A6EA8[v39];
    if ( v40 )
      break;
LABEL_26:
    v53 = dword_1661A66A8[v39];
    v54 = v53;
    v55 = v53;
    if ( v53 > 0 )
    {
      v56 = v53 & 0x7F;
      v57 = 9240LL * v56;
      v58 = *(float *)((char *)&unk_140587F6C + v57 + 4);
      v238 = *(float *)((char *)&unk_140587F6C + v57);
      v240 = *(float *)((char *)&unk_140587F6C + v57 + 8);
      v239 = v58;
      if ( (v54 & 0xC00) == 0x400 )
      {
        sub_140049E50(&v238, (float *)&qword_140146A28, v38);
        v59 = v55 & 0xC00;
      }
      else
      {
        v59 = v55 & 0xC00;
        if ( v59 == 2048 || v59 == 3072 )
          sub_140049E50(&v238, (float *)&qword_140146A28, v38);
      }
      v60 = *(float *)&dword_16CDE9EE0[v10 / 4];
      v262 = 1.0;
      v238 = v238 + (float)((float)((float)v36 + 0.5) * v60);
      v239 = v239 + (float)((float)(int)v236 * v60);
      v240 = v240 + (float)((float)((float)v34 + 0.5) * v60);
      v260 = xmmword_1400F78B0;
      v261 = xmmword_1400F78B0;
      if ( v59 == 1024 || v59 == 2048 || v59 == 3072 )
        sub_140049C20((__int64)&v260, (float *)&qword_140146A28, v38);
      if ( (unsigned int)sub_1400D57D0(
                           (unsigned int)&v228,
                           (unsigned int)&v231,
                           (unsigned int)&v227,
                           v56,
                           (__int64)&v238,
                           (__int64)&v260,
                           (__int64)v258,
                           LODWORD(v6)) )
      {
        v217 = v243;
        sub_140049820(v243, v243, v241);
        v218 = v244;
        v219 = v244;
        v220 = v241;
        *v217 = *(float *)&dword_16CDE9EA4[v10 / 4] + *v217;
        v217[1] = *(float *)&dword_16CDE9EA8[v10 / 4] + v217[1];
        v217[2] = *(float *)&dword_16CDE9EAC[v10 / 4] + v217[2];
        sub_140049820(v219, v219, v220);
        v221 = v229;
        *v217 = v228;
        v222 = v230;
        v217[1] = v221;
        v223 = v231;
        v217[2] = v222;
        v224 = v232;
        *v218 = v223;
        v225 = v233;
        v218[1] = v224;
        v226 = v227;
        v218[2] = v225;
        *v7 = v226;
        dword_16E18CA98 = -1;
        return 1;
      }
    }
    v61 = dword_1661A1EA8[v39];
    v62 = v61 & 0xE0000000;
    if ( (v61 & 0xE0000000) == 0x40000000 )
    {
      v63 = sub_1400D7440(
              (unsigned int)&v228,
              (unsigned int)&v231,
              (unsigned int)&v227,
              (unsigned int)v258,
              LODWORD(v6),
              (__int64)&v245,
              v61,
              dword_16CDE9EE0[v10 / 4]);
      v64 = v241;
      if ( v63 && v227 < *v7 )
      {
        v65 = v241[1];
        v66 = *v241;
        v67 = v241[2];
        v68 = v241[3];
        v69 = v241[6];
        v70 = v241[7];
        v71 = v241[8];
        v72 = v241[4];
        v73 = v243;
        v74 = v244;
        v31 = v236;
        v75 = v67 * v228;
        v76 = (float)(v241[5] * v229) + *(float *)&dword_16CDE9EAC[v10 / 4];
        v77 = (float)(v70 * v230) + (float)(v65 * v228);
        v234 = (float)((float)(v69 * v230) + (float)(*v241 * v228))
             + (float)((float)(v68 * v229) + *(float *)&dword_16CDE9EA4[v10 / 4]);
        v228 = v234;
        v78 = (float)(v71 * v230) + v75;
        v79 = v231;
        v80 = v68 * v232;
        v81 = v231 * v65;
        v82 = v78 + v76;
        v6 = a6;
        v83 = (float)((float)(v72 * v229) + *(float *)&dword_16CDE9EA8[v10 / 4]) + v77;
        v84 = v69 * v233;
        v85 = v70 * v233;
        v86 = v71 * v233;
        v87 = v72 * v232;
        v88 = v232 * v241[5];
        *v243 = v234;
        v89 = v227;
        v73[1] = v83;
        v73[2] = v82;
        v90 = (float)(v81 + v87) + v85;
        v229 = v83;
        v230 = v82;
        v74[1] = v90;
        v232 = v90;
        v91 = (float)((float)(v79 * v66) + v80) + v84;
        v92 = (float)((float)(v79 * v67) + v88) + v86;
        *v74 = v91;
        v231 = v91;
        v74[2] = v92;
        *v7 = v89;
        v233 = v92;
        goto LABEL_51;
      }
      goto LABEL_45;
    }
    if ( v62 == 0x80000000 )
    {
      v93 = sub_1400D9520(
              (unsigned int)&v228,
              (unsigned int)&v231,
              (unsigned int)&v227,
              (unsigned int)v258,
              LODWORD(v6),
              (__int64)&v245,
              v61,
              dword_16CDE9EE0[v10 / 4]);
      v64 = v241;
      if ( v93 && v227 < *v7 )
      {
        v94 = v241[1];
        v95 = v241[4];
        v96 = v241[6];
        v97 = v95;
        v98 = v241[2];
        v99 = v241[7];
        v100 = v241[3];
        v101 = v241[8];
        v102 = v241[5];
        v103 = v243;
        v104 = v244;
        v234 = *v241;
        *(float *)&v237 = v94;
        v105 = v232;
        v106 = (float)((float)(v96 * v230) + (float)(v234 * v228))
             + (float)((float)(v100 * v229) + *(float *)&dword_16CDE9EA4[v10 / 4]);
        v107 = v95 * v232;
        v108 = (float)(v102 * v229) + *(float *)&dword_16CDE9EAC[v10 / 4];
        v109 = v231;
        v110 = (float)((float)(v97 * v229) + *(float *)&dword_16CDE9EA8[v10 / 4])
             + (float)((float)(v99 * v230) + (float)(v94 * v228));
        v111 = v233;
        v112 = v94;
        v113 = (float)(v101 * v230) + (float)(v98 * v228);
        *v243 = v106;
        v114 = v234;
        v103[1] = v110;
        v115 = v113 + v108;
        v116 = (float)(v112 * v109) + v107;
        v117 = v96 * v111;
        v6 = a6;
        v103[2] = v115;
        v118 = v99 * v111;
        v119 = v101 * v111;
        v120 = v227;
        v121 = v116 + v118;
        v104[1] = v121;
        v228 = v106;
        v229 = v110;
        v230 = v115;
        v232 = v121;
        v122 = (float)((float)(v114 * v109) + (float)(v100 * v105)) + v117;
        v123 = (float)((float)(v98 * v109) + (float)(v102 * v105)) + v119;
        *v104 = v122;
        v231 = v122;
        v104[2] = v123;
        *v7 = v120;
        v233 = v123;
      }
LABEL_45:
      v31 = v236;
      goto LABEL_51;
    }
    v31 = v236;
    if ( v62 == -1073741824 )
    {
      v249 = v36 - (unsigned __int8)v61;
      v250 = v236 - BYTE2(v61);
      v251 = v34 - BYTE1(v61);
      v124 = sub_14000BE30(v248, v249, v250, v251);
      v125 = sub_1400D9520(
               (unsigned int)&v228,
               (unsigned int)&v231,
               (unsigned int)&v227,
               (unsigned int)v258,
               LODWORD(v6),
               (__int64)&v249,
               v124,
               dword_16CDE9EE0[v10 / 4]);
      v64 = v241;
      if ( v125 && v227 < *v7 )
      {
        v126 = v241[1];
        v127 = v241[4];
        v128 = v241[6];
        v129 = v241[2];
        v130 = v241[7];
        v131 = v241[3];
        v132 = v241[8];
        v133 = v241[5];
        v134 = v243;
        v135 = v244;
        v136 = v129 * v228;
        *(float *)&v237 = *v241;
        v234 = v126;
        v137 = v231;
        v138 = (float)((float)(v128 * v230) + (float)(*(float *)&v237 * v228))
             + (float)((float)(v131 * v229) + *(float *)&dword_16CDE9EA4[v10 / 4]);
        v139 = v129 * v231;
        v140 = (float)(v133 * v229) + *(float *)&dword_16CDE9EAC[v10 / 4];
        v141 = v232;
        v142 = (float)((float)(v127 * v229) + *(float *)&dword_16CDE9EA8[v10 / 4])
             + (float)((float)(v130 * v230) + (float)(v126 * v228));
        v143 = v233;
        v144 = v126;
        v145 = (float)(v132 * v230) + v136;
        *v243 = v138;
        v146 = *(float *)&v237;
        v134[1] = v142;
        v147 = v145 + v140;
        v134[2] = v147;
        v148 = (float)(v144 * v137) + (float)(v127 * v141);
        v6 = a6;
        v149 = v128 * v143;
        v150 = v130 * v143;
        v151 = v132 * v143;
        v152 = v227;
        v153 = v148 + v150;
        v154 = (float)((float)(v133 * v141) + v139) + v151;
        v228 = v138;
        v229 = v142;
        v135[1] = v153;
        v230 = v147;
        v232 = v153;
        v135[2] = v154;
        v233 = v154;
        v155 = (float)((float)(v146 * v137) + (float)(v131 * v141)) + v149;
        *v135 = v155;
        *v7 = v152;
        v231 = v155;
      }
    }
    else
    {
      v64 = v241;
    }
LABEL_51:
    v156 = dword_1661A4EA8[v39];
    v157 = v156 & 0xE0000000;
    if ( (v156 & 0xE0000000) == 0x40000000 )
    {
      if ( (unsigned int)sub_1400D7440(
                           (unsigned int)&v228,
                           (unsigned int)&v231,
                           (unsigned int)&v227,
                           (unsigned int)v258,
                           LODWORD(v6),
                           (__int64)&v245,
                           v156,
                           dword_16CDE9EE0[v10 / 4]) )
      {
        if ( v227 < *v7 )
        {
          v158 = *v64;
          v159 = v64[6];
          v160 = v64[1];
          v161 = v64[2];
          v162 = v64[7];
          v163 = v64[8];
          v164 = v64[4];
          v165 = v64[5];
          v166 = v243;
          v167 = v244;
          v234 = v64[3];
          *(float *)&v237 = v164;
          v168 = (float)(v165 * v229) + *(float *)&dword_16CDE9EAC[v10 / 4];
          v169 = v231;
          v170 = (float)((float)(v159 * v230) + (float)(v158 * v228))
               + (float)((float)(v234 * v229) + *(float *)&dword_16CDE9EA4[v10 / 4]);
          v171 = v158 * v231;
          v172 = v232;
          v173 = v165 * v232;
          v174 = v164;
          v175 = (float)((float)(v164 * v229) + *(float *)&dword_16CDE9EA8[v10 / 4])
               + (float)((float)(v162 * v230) + (float)(v160 * v228));
          v176 = v233;
          v177 = (float)(v163 * v230) + (float)(v161 * v228);
          *v243 = v170;
          v178 = v234 * v172;
          v166[1] = v175;
          v179 = v177 + v168;
          v180 = v162 * v176;
          v166[2] = v179;
          v181 = v163 * v176;
          v182 = (float)(v178 + v171) + (float)(v159 * v176);
          v183 = v227;
          *v167 = v182;
          v228 = v170;
          v229 = v175;
          v230 = v179;
          v231 = v182;
          v184 = (float)((float)(v174 * v172) + (float)(v160 * v169)) + v180;
          v185 = (float)(v173 + (float)(v161 * v169)) + v181;
          v167[1] = v184;
          v232 = v184;
          v167[2] = v185;
          *v7 = v183;
          v233 = v185;
        }
      }
      goto LABEL_64;
    }
    if ( v157 == 0x80000000 )
    {
      if ( !(unsigned int)sub_1400D9520(
                            (unsigned int)&v228,
                            (unsigned int)&v231,
                            (unsigned int)&v227,
                            (unsigned int)v258,
                            LODWORD(v6),
                            (__int64)&v245,
                            v156,
                            dword_16CDE9EE0[v10 / 4])
        || v227 >= *v7 )
      {
        goto LABEL_64;
      }
      v186 = (float)((float)(v230 * v64[6]) + (float)(v228 * *v64))
           + (float)((float)(v229 * v64[3]) + *(float *)&dword_16CDE9EA4[v10 / 4]);
      v187 = v232;
      v188 = (float)((float)(v229 * v64[4]) + *(float *)&dword_16CDE9EA8[v10 / 4])
           + (float)((float)(v230 * v64[7]) + (float)(v228 * v64[1]));
      v234 = (float)((float)(v230 * v64[8]) + (float)(v228 * v64[2]))
           + (float)((float)(v229 * v64[5]) + *(float *)&dword_16CDE9EAC[v10 / 4]);
      v230 = v234;
      *(float *)&v237 = v188;
      v189 = v231 * *v64;
      v229 = v188;
      v190 = v232 * v64[5];
      v191 = (float)(v232 * v64[3]) + v189;
      v192 = v231;
      v193 = v231 * v64[2];
    }
    else
    {
      if ( v157 != -1073741824 )
        goto LABEL_64;
      v249 = v36 - (unsigned __int8)v156;
      v250 = v31 - BYTE2(v156);
      v251 = v34 - BYTE1(v156);
      v204 = sub_14000C850(v248, v249, v250, v251);
      if ( !(unsigned int)sub_1400D9520(
                            (unsigned int)&v228,
                            (unsigned int)&v231,
                            (unsigned int)&v227,
                            (unsigned int)v258,
                            LODWORD(v6),
                            (__int64)&v249,
                            v204,
                            dword_16CDE9EE0[v10 / 4])
        || v227 >= *v7 )
      {
        goto LABEL_64;
      }
      v186 = (float)((float)(v230 * v64[6]) + (float)(v228 * *v64))
           + (float)((float)(v229 * v64[3]) + *(float *)&dword_16CDE9EA4[v10 / 4]);
      v205 = (float)((float)(v229 * v64[4]) + *(float *)&dword_16CDE9EA8[v10 / 4])
           + (float)((float)(v230 * v64[7]) + (float)(v228 * v64[1]));
      v234 = (float)((float)(v230 * v64[8]) + (float)(v228 * v64[2]))
           + (float)((float)(v229 * v64[5]) + *(float *)&dword_16CDE9EAC[v10 / 4]);
      v230 = v234;
      *(float *)&v237 = v205;
      v206 = v232 * v64[3];
      v187 = v232;
      v193 = v232 * v64[5];
      v229 = v205;
      v191 = (float)(v231 * *v64) + v206;
      v192 = v231;
      v190 = v231 * v64[2];
    }
    v194 = v192 * v64[1];
    v195 = v243;
    v196 = v187 * v64[4];
    v197 = v244;
    v228 = v186;
    v198 = v191 + (float)(v233 * v64[6]);
    v199 = v233 * v64[7];
    v200 = v233 * v64[8];
    *((_DWORD *)v243 + 1) = v237;
    v201 = (float)(v196 + v194) + v199;
    v195[2] = v234;
    v202 = (float)(v190 + v193) + v200;
    v203 = v227;
    *v195 = v186;
    v197[1] = v201;
    *v197 = v198;
    v197[2] = v202;
    *v7 = v203;
    v232 = v201;
    v231 = v198;
    v233 = v202;
LABEL_64:
    v8 = v242;
    v35 = v235;
LABEL_65:
    v6 = a6;
    v245 = ++v36;
    if ( v36 > v35 )
    {
      v29 = v252;
      v33 = v253;
      goto LABEL_67;
    }
  }
  v41 = *(float *)&dword_16CDE9EE0[v10 / 4];
  v42 = 0;
  v43 = 3792LL * (v40 & 0x3FF);
  v44 = (float)v31 * v41;
  v238 = (float)((float)v36 + 0.5) * v41;
  v239 = v44;
  v240 = (float)((float)v34 + 0.5) * v41;
  if ( *(int *)((char *)&unk_18E9EA9CC + v43) <= 0 )
  {
LABEL_25:
    v7 = v256;
    v39 = v237;
    goto LABEL_26;
  }
  v45 = 0x140000000LL + v43 + 1319021108;
  while ( 1 )
  {
    v46 = *(_DWORD *)(v45 - 36);
    v262 = 1.0;
    v260 = xmmword_1400F78B0;
    v261 = xmmword_1400F78B0;
    sub_140049C20((__int64)&v260, (float *)&qword_140146A28, v38);
    v47 = *(float *)(v45 - 32);
    v48 = *(float *)(v45 - 28);
    v49 = *(float *)(v45 - 24);
    v257[0] = (float)((float)((float)(*(float *)&v260 * v47) + (float)((float)((float)v36 + 0.5) * v41))
                    + (float)(*((float *)&v260 + 3) * v48))
            + (float)(*((float *)&v261 + 2) * v49);
    v257[1] = (float)((float)((float)(*((float *)&v260 + 1) * v47) + v44) + (float)(*(float *)&v261 * v48))
            + (float)(*((float *)&v261 + 3) * v49);
    v50 = (float)((float)(*((float *)&v260 + 2) * v47) + (float)((float)((float)v34 + 0.5) * v41))
        + (float)(*((float *)&v261 + 1) * v48);
    v260 = *(_OWORD *)(v45 - 20);
    v51 = v50 + (float)(v262 * v49);
    v261 = *(_OWORD *)(v45 - 4);
    v262 = *(float *)(v45 + 12);
    v257[2] = v51;
    sub_140049C20((__int64)&v260, (float *)&qword_140146A28, v52);
    if ( (unsigned int)sub_1400D68D0(
                         (unsigned int)&v228,
                         (unsigned int)&v231,
                         (unsigned int)&v227,
                         v46,
                         (__int64)v257,
                         (__int64)&v260,
                         (__int64)v258,
                         LODWORD(v6)) )
      break;
    ++v42;
    v45 += 116;
    if ( v42 >= *(_DWORD *)((char *)&unk_18E9EA9CC + v43) )
      goto LABEL_25;
  }
  v208 = v243;
  v209 = v244;
  v210 = v229;
  v211 = v256;
  *v243 = v228;
  v212 = v230;
  v208[1] = v210;
  v213 = v231;
  v208[2] = v212;
  v214 = v232;
  *v209 = v213;
  v215 = v233;
  v209[1] = v214;
  v216 = v227;
  v209[2] = v215;
  *v211 = v216;
  dword_16E18CA98 = -1;
  return 1;
}

