/* Address: 0x140021bc0 | Name: sub_140021BC0 | Size: 6447 bytes */
_BOOL8 __fastcall sub_140021BC0(float *a1, float *a2, float *a3, signed int a4, float *a5, float *a6, float a7)
{
  float v7; // xmm12_4
  __int64 v9; // r15
  __int64 v10; // r10
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float v27; // xmm3_4
  float v28; // xmm11_4
  float v29; // xmm2_4
  float v30; // xmm6_4
  float v31; // xmm13_4
  float v32; // xmm14_4
  float v33; // xmm15_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm15_4
  float v37; // xmm4_4
  float v38; // xmm14_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm8_4
  float v42; // xmm0_4
  float v43; // xmm13_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm8_4
  float v47; // xmm7_4
  float v48; // xmm5_4
  float v49; // xmm7_4
  float v50; // xmm2_4
  float v51; // xmm5_4
  float v52; // xmm0_4
  int v53; // eax
  float v54; // xmm1_4
  signed int v55; // r14d
  int v56; // r8d
  float v57; // xmm1_4
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // r9d
  int v62; // r12d
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // rbx
  int v66; // eax
  float v67; // xmm0_4
  unsigned int v68; // ecx
  __int64 v69; // rax
  __m128i v70; // xmm10
  int v71; // r14d
  float v72; // xmm8_4
  float v73; // xmm10_4
  float v74; // xmm9_4
  int v75; // edi
  int v76; // r15d
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rbx
  float v80; // xmm2_4
  float v81; // xmm1_4
  float v82; // xmm3_4
  float v83; // xmm5_4
  float v84; // xmm6_4
  __int128 v85; // xmm0
  __int64 v86; // rcx
  int *v87; // rbx
  int v88; // eax
  int v89; // ecx
  float v90; // xmm2_4
  float *v91; // r8
  int v92; // xmm1_4
  int v93; // eax
  int v94; // r10d
  int v95; // xmm0_4
  int v96; // xmm1_4
  float *v97; // r8
  int v98; // xmm0_4
  __int16 v99; // dx
  int v100; // ebx
  int v101; // edi
  __int64 v102; // rcx
  float v103; // xmm1_4
  int v104; // ebx
  float v105; // xmm2_4
  int v106; // ebx
  unsigned int v107; // eax
  float v108; // xmm5_4
  float v109; // xmm9_4
  float v110; // xmm15_4
  float v111; // xmm10_4
  float v112; // xmm8_4
  float v113; // xmm11_4
  float v114; // xmm12_4
  float v115; // xmm14_4
  float *v116; // rdi
  float *v117; // rdx
  float v118; // xmm2_4
  float v119; // xmm13_4
  float v120; // xmm8_4
  float v121; // xmm7_4
  float v122; // xmm0_4
  float v123; // xmm5_4
  float v124; // xmm15_4
  float v125; // xmm4_4
  float v126; // xmm3_4
  float v127; // xmm5_4
  float v128; // xmm3_4
  float v129; // xmm7_4
  float v130; // xmm8_4
  float v131; // xmm9_4
  float v132; // xmm10_4
  float v133; // xmm13_4
  float v134; // xmm11_4
  float v135; // xmm12_4
  float v136; // xmm15_4
  float v137; // xmm4_4
  float v138; // xmm5_4
  float v139; // xmm0_4
  float v140; // xmm14_4
  float v141; // xmm2_4
  float v142; // xmm6_4
  float v143; // xmm1_4
  float v144; // xmm14_4
  float v145; // xmm3_4
  float v146; // xmm4_4
  float v147; // xmm5_4
  float v148; // xmm0_4
  unsigned int v149; // r10d
  unsigned int v150; // r8d
  unsigned int v151; // ebx
  float v152; // xmm13_4
  float v153; // xmm9_4
  float v154; // xmm10_4
  float v155; // xmm8_4
  float v156; // xmm11_4
  float v157; // xmm14_4
  float v158; // xmm12_4
  float v159; // xmm1_4
  float *v160; // rdx
  int v161; // eax
  float v162; // xmm2_4
  float v163; // xmm15_4
  float v164; // xmm7_4
  float v165; // xmm0_4
  float v166; // xmm5_4
  float v167; // xmm15_4
  float v168; // xmm0_4
  float v169; // xmm1_4
  float v170; // xmm0_4
  float v171; // xmm4_4
  float v172; // xmm5_4
  float v173; // xmm6_4
  float v174; // xmm3_4
  float v175; // xmm0_4
  float v176; // xmm5_4
  float v177; // xmm6_4
  float v178; // xmm0_4
  int v179; // ebx
  unsigned int v180; // eax
  float v181; // xmm7_4
  float v182; // xmm11_4
  float v183; // xmm12_4
  float v184; // xmm9_4
  float v185; // xmm10_4
  float v186; // xmm13_4
  float v187; // xmm14_4
  float v188; // xmm15_4
  float v189; // xmm4_4
  float v190; // xmm6_4
  float v191; // xmm0_4
  float v192; // xmm5_4
  float v193; // xmm8_4
  float v194; // xmm5_4
  float v195; // xmm4_4
  float *v196; // rax
  float v197; // xmm8_4
  float v198; // xmm9_4
  float v199; // xmm1_4
  float v200; // xmm10_4
  float v201; // xmm5_4
  float v202; // xmm13_4
  float v203; // xmm15_4
  float v204; // xmm14_4
  float v205; // xmm2_4
  float v206; // xmm0_4
  float v207; // xmm3_4
  float v208; // xmm1_4
  float v209; // xmm4_4
  unsigned int v210; // edx
  unsigned int v211; // r8d
  unsigned int v212; // ebx
  float v213; // xmm9_4
  float v214; // xmm14_4
  float v215; // xmm13_4
  float v216; // xmm8_4
  float v217; // xmm12_4
  float *v218; // rax
  float v219; // xmm4_4
  float v220; // xmm10_4
  float v221; // xmm6_4
  float v222; // xmm1_4
  float v223; // xmm11_4
  float v224; // xmm0_4
  float v225; // xmm15_4
  float v226; // xmm7_4
  float v227; // xmm3_4
  float v228; // xmm7_4
  float v229; // xmm5_4
  float v230; // xmm2_4
  float v231; // xmm0_4
  float v232; // xmm4_4
  float v233; // xmm2_4
  float v234; // xmm5_4
  float v235; // xmm0_4
  float *v237; // rcx
  float *v238; // rdx
  float v239; // xmm1_4
  float v240; // xmm0_4
  float v241; // xmm1_4
  float v242; // xmm0_4
  float v243; // xmm1_4
  float v244; // xmm0_4
  float v245; // [rsp+50h] [rbp-B0h] BYREF
  signed int v246; // [rsp+54h] [rbp-ACh]
  float v247; // [rsp+58h] [rbp-A8h] BYREF
  float v248; // [rsp+5Ch] [rbp-A4h]
  float v249; // [rsp+60h] [rbp-A0h]
  float v250; // [rsp+68h] [rbp-98h] BYREF
  float v251; // [rsp+6Ch] [rbp-94h]
  float v252; // [rsp+70h] [rbp-90h]
  float v253; // [rsp+78h] [rbp-88h]
  int v254; // [rsp+7Ch] [rbp-84h]
  float v255; // [rsp+80h] [rbp-80h]
  __int64 v256; // [rsp+88h] [rbp-78h]
  float v257; // [rsp+90h] [rbp-70h]
  float *v258; // [rsp+98h] [rbp-68h]
  __int64 v259; // [rsp+A0h] [rbp-60h]
  float v260; // [rsp+A8h] [rbp-58h] BYREF
  float v261; // [rsp+ACh] [rbp-54h]
  float v262; // [rsp+B0h] [rbp-50h]
  float v263; // [rsp+B8h] [rbp-48h]
  float *v264; // [rsp+C0h] [rbp-40h]
  int v265; // [rsp+C8h] [rbp-38h] BYREF
  signed int v266; // [rsp+CCh] [rbp-34h]
  int v267; // [rsp+D0h] [rbp-30h]
  unsigned int v268; // [rsp+D8h] [rbp-28h]
  __int64 v269; // [rsp+E0h] [rbp-20h]
  unsigned int v270; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v271; // [rsp+ECh] [rbp-14h]
  unsigned int v272; // [rsp+F0h] [rbp-10h]
  int v273; // [rsp+F8h] [rbp-8h]
  int v274; // [rsp+FCh] [rbp-4h]
  int v275; // [rsp+100h] [rbp+0h]
  _DWORD v276[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v277; // [rsp+118h] [rbp+18h]
  _DWORD v278[7]; // [rsp+120h] [rbp+20h] BYREF
  float v279; // [rsp+13Ch] [rbp+3Ch]
  _DWORD v280[4]; // [rsp+148h] [rbp+48h] BYREF
  _DWORD v281[4]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v282; // [rsp+168h] [rbp+68h] BYREF
  __int128 v283; // [rsp+178h] [rbp+78h]
  float v284; // [rsp+188h] [rbp+88h]
  _BYTE v285[6144]; // [rsp+190h] [rbp+90h] BYREF

  v7 = a7;
  v9 = 1052016LL * a4;
  *a3 = 65536.0;
  v10 = a4;
  v258 = a1;
  v246 = a4;
  v11 = *(float *)((char *)&unk_16CDE9EF0 + v9);
  v259 = a4;
  v12 = *a5;
  v13 = *a5 + a7;
  v264 = a2;
  v277 = v9;
  if ( v13 < v11 && (float)(a7 + *a6) < v11 )
    return 0;
  v14 = a5[1];
  v15 = *(float *)((char *)&unk_16CDE9EF4 + v9);
  if ( (float)(v14 + a7) < v15 && (float)(a7 + a6[1]) < v15 )
    return 0;
  v16 = a5[2];
  v17 = *(float *)((char *)&unk_16CDE9EF8 + v9);
  if ( (float)(v16 + a7) < v17 && (float)(a7 + a6[2]) < v17 )
    return 0;
  v18 = *(float *)((char *)&unk_16CDE9EFC + v9);
  if ( (float)(v12 - a7) > v18 && (float)(*a6 - a7) > v18 )
    return 0;
  v19 = *(float *)((char *)&unk_16CDE9F00 + v9);
  if ( (float)(v14 - a7) > v19 && (float)(a6[1] - a7) > v19 )
    return 0;
  v20 = *(float *)((char *)&unk_16CDE9F04 + v9);
  if ( (float)(v16 - a7) > v20 && (float)(a6[2] - a7) > v20 )
    return 0;
  v21 = *(float *)((char *)dword_16CDE9EA4 + v9);
  v22 = *(float *)((char *)&unk_16CDE9EB0 + v9);
  v23 = v12 - v21;
  v24 = *(float *)((char *)&unk_16CDE9EBC + v9);
  v25 = *(float *)((char *)dword_16CDE9EA8 + v9);
  v26 = *(float *)((char *)dword_16CDE9EAC + v9);
  v27 = v14 - v25;
  v28 = *(float *)((char *)&unk_16CDE9EB8 + v9);
  v29 = v16 - v26;
  v30 = *(float *)((char *)&unk_16CDE9EC4 + v9);
  v31 = *(float *)((char *)&unk_16CDE9ECC + v9);
  v32 = *(float *)((char *)&unk_16CDE9EC0 + v9) * v27;
  v33 = (float)(*(float *)((char *)&unk_16CDE9EB4 + v9) * v27) + (float)(v22 * v23);
  v263 = v27;
  v34 = *(float *)((char *)&unk_16CDE9EC8 + v9);
  v35 = v24 * v23;
  v36 = v33 + (float)(v28 * v29);
  v257 = v23;
  v37 = *(float *)((char *)&unk_16CDE9ED0 + v9);
  v38 = (float)(v32 + v35) + (float)(v30 * v29);
  *(float *)v281 = v36;
  v39 = v37 * v29;
  v40 = *a6 - v21;
  v41 = *(float *)((char *)&unk_16CDE9EB4 + v9);
  v42 = a6[1] - v25;
  v43 = (float)((float)(v31 * v263) + (float)(v34 * v257)) + v39;
  *(float *)&v281[1] = v38;
  v44 = a6[2] - v26;
  v45 = v34 * v40;
  v46 = (float)((float)(v41 * v42) + (float)(v22 * v40)) + (float)(v28 * v44);
  v47 = (float)(*(float *)((char *)&unk_16CDE9EC0 + v9) * v42) + (float)(v24 * v40);
  v48 = *(float *)((char *)&unk_16CDE9ECC + v9);
  v49 = v47 + (float)(v30 * v44);
  v260 = v40;
  v50 = *(float *)&algn_16CDE9EE4[v9];
  *(float *)&v281[2] = v43;
  v261 = v42;
  v262 = v44;
  *(float *)v280 = v46;
  *(float *)&v280[1] = v49;
  v51 = (float)((float)(v48 * v42) + v45) + (float)(v37 * v44);
  *(float *)&v280[2] = v51;
  v52 = v36 >= v46 ? v46 : v36;
  v53 = (int)(float)((float)(v52 - a7) * v50);
  v263 = *(float *)&v53;
  v254 = (int)(float)((float)(fmaxf(v36, v46) + a7) * v50);
  v54 = v38 >= v49 ? v49 : v38;
  v55 = (int)(float)(v50 * (float)(v54 - a7));
  v56 = (int)(float)((float)(fmaxf(v38, v49) + a7) * v50);
  v257 = *(float *)&v55;
  v275 = v56;
  v57 = v43 >= v51 ? v51 : v43;
  v266 = v55;
  v58 = (int)(float)(v50 * (float)(v57 - a7));
  v59 = (int)(float)((float)(fmaxf(v43, v51) + a7) * v50);
  v274 = v58;
  v273 = v59;
  if ( v55 > v56 )
    return 0;
  v266 = v55;
LABEL_24:
  v267 = v58;
  v60 = v58;
  if ( v58 > v59 )
    goto LABEL_93;
  v61 = v254;
  while ( 1 )
  {
    v265 = v53;
    v62 = v53;
    if ( v53 <= v61 )
      break;
LABEL_91:
    v267 = ++v60;
    if ( v60 > v59 )
    {
      v58 = v274;
      v56 = v275;
LABEL_93:
      ++v55;
      v257 = *(float *)&v55;
      v266 = v55;
      if ( v55 > v56 )
        return *a3 < 65536.0;
      goto LABEL_24;
    }
  }
  while ( 1 )
  {
    if ( v62 < 0 )
      goto LABEL_89;
    if ( v62 >= *(int *)((char *)dword_16CDE9ED4 + v9) << 6 )
      goto LABEL_89;
    if ( v55 < 0 )
      goto LABEL_89;
    if ( v55 >= *(int *)((char *)dword_16CDE9ED8 + v9) << 6 )
      goto LABEL_89;
    if ( v60 < 0 )
      goto LABEL_89;
    if ( v60 >= *(int *)((char *)dword_16CDE9EDC + v9) << 6 )
      goto LABEL_89;
    v63 = *(int *)(*(__int64 *)((char *)qword_16CDE9EE8 + v9)
                 + 4LL
                 * ((v62 >> 6)
                  + *(int *)((char *)dword_16CDE9ED4 + v9)
                  * ((v60 >> 6) + *(int *)((char *)dword_16CDE9EDC + v9) * (v55 >> 6))));
    if ( (_DWORD)v63 == -1 )
      goto LABEL_89;
    v64 = dword_16CDEA410[263004 * v10 + 513 * v63 + 64 * ((v55 >> 3) & 7) + 8 * ((v60 >> 3) & 7) + ((v62 >> 3) & 7)];
    if ( (_DWORD)v64 == -1 )
      goto LABEL_89;
    v65 = 6930 * v64 + (v62 & 7) + 8 * ((v60 & 7) + 8 * (v55 & 7u));
    v269 = v65;
    v66 = dword_1661A6EA8[v65];
    if ( v66 )
    {
      v67 = *(float *)((char *)dword_16CDE9EE0 + v9);
      v68 = dword_1661A6EA8[v65];
      v69 = v66 & 0x3FF;
      v70 = _mm_cvtsi32_si128(v55);
      v71 = 0;
      v255 = *(float *)&v69;
      LODWORD(v253) = HIBYTE(v68) & 3;
      v256 = 3792 * v69;
      v72 = (float)((float)v62 + 0.5) * v67;
      v73 = _mm_cvtepi32_ps(v70).m128_f32[0] * v67;
      v74 = (float)((float)v60 + 0.5) * v67;
      if ( *((int *)&unk_18E9EA9CC + 948 * v69) > 0 )
      {
        v75 = 1;
        v76 = v267;
        v77 = v256;
        v78 = 0x140000000LL + v256 + 1319021108;
        do
        {
          if ( (v75 & dword_1661A76A8[v65]) == 0 )
          {
            v79 = *(int *)(v78 - 36);
            v282 = xmmword_1400F78B0;
            v284 = 1.0;
            v283 = xmmword_1400F78B0;
            sub_140049C20(&v282, &dword_140146A28);
            v80 = (float)((float)((float)(*(float *)(v78 - 32) * *(float *)&v282) + v72)
                        + (float)(*(float *)(v78 - 28) * *((float *)&v282 + 3)))
                + (float)(*(float *)(v78 - 24) * *((float *)&v283 + 2));
            v81 = *(float *)(v78 - 24) * *((float *)&v283 + 3);
            v82 = (float)((float)(*(float *)(v78 - 32) * *((float *)&v282 + 1)) + v73)
                + (float)(*(float *)(v78 - 28) * *(float *)&v283);
            v83 = *(float *)(v78 - 24) * v284;
            v84 = (float)((float)(*(float *)(v78 - 32) * *((float *)&v282 + 2)) + v74)
                + (float)(*(float *)(v78 - 28) * *((float *)&v283 + 1));
            v282 = *(_OWORD *)(v78 - 20);
            v85 = *(_OWORD *)(v78 - 4);
            *(float *)v276 = v80;
            v283 = v85;
            v284 = *(float *)(v78 + 12);
            *(float *)&v276[1] = v82 + v81;
            *(float *)&v276[2] = v84 + v83;
            sub_140049C20(&v282, &dword_140146A28);
            v86 = 1268 * v79;
            if ( qword_190122FD0[634 * v79] )
            {
              v87 = &dword_190122FC8[v86];
              sub_1400B3920(v285, &dword_190122FC8[v86], v276, &v282);
              v88 = sub_140024270(
                      (unsigned int)v278,
                      (_DWORD)v87,
                      (unsigned int)v285,
                      (unsigned int)v281,
                      (__int64)v280,
                      LODWORD(v7));
              v89 = LODWORD(v253);
              v65 = v269;
              if ( v88 )
              {
                v90 = v279;
                if ( v279 < *a3 )
                {
                  v91 = v258;
                  v92 = v278[1];
                  v93 = LODWORD(v257);
                  v94 = v246;
                  *v258 = *(float *)v278;
                  v95 = v278[2];
                  *((_DWORD *)v91 + 1) = v92;
                  v96 = v278[3];
                  *((_DWORD *)v91 + 2) = v95;
                  v97 = v264;
                  v98 = v278[4];
                  *(_DWORD *)v264 = v96;
                  v97[2] = *(float *)&v278[5];
                  *((_DWORD *)v97 + 1) = v98;
                  dword_16E18CA9C = v93;
                  dword_16E18CAC0 = LODWORD(v255);
                  dword_16E18CAB0 = 0;
                  dword_16E18CA94 = v94;
                  dword_16E18CA98 = v62;
                  dword_16E18CAA0 = v76;
                  dword_16E18CABC = -1;
                  dword_16E18CAC4 = v89;
                  dword_16E18CAC8 = v71;
                  *a3 = v90;
                }
              }
            }
            else
            {
              v65 = v269;
            }
            v77 = v256;
          }
          ++v71;
          v75 = __ROL4__(v75, 1);
          v78 += 116;
        }
        while ( v71 < *(_DWORD *)((char *)&unk_18E9EA9CC + v77) );
        v9 = v277;
        v60 = v267;
      }
      *(float *)&v55 = v257;
    }
    v99 = dword_1661A66A8[v65];
    v100 = dword_1661A66A8[v65];
    if ( v100 > 0 )
    {
      v101 = v100 & 0x7F;
      v102 = 9240LL * (v100 & 0x7F);
      v103 = *(float *)((char *)&unk_140587F6C + v102 + 4);
      v260 = *(float *)((char *)&unk_140587F6C + v102);
      v262 = *(float *)((char *)&unk_140587F6C + v102 + 8);
      v261 = v103;
      if ( (v99 & 0xC00) == 0x400 )
      {
        sub_140049E50(&v260, &dword_140146A28);
        v104 = v100 & 0xC00;
      }
      else
      {
        v104 = v100 & 0xC00;
        if ( v104 == 2048 || v104 == 3072 )
          sub_140049E50(&v260, &dword_140146A28);
      }
      v105 = *(float *)((char *)dword_16CDE9EE0 + v9);
      v284 = 1.0;
      v260 = v260 + (float)((float)((float)v62 + 0.5) * v105);
      v261 = v261 + (float)((float)v55 * v105);
      v262 = v262 + (float)((float)((float)v60 + 0.5) * v105);
      v282 = xmmword_1400F78B0;
      v283 = xmmword_1400F78B0;
      if ( v104 == 1024 || v104 == 2048 || v104 == 3072 )
        sub_140049C20(&v282, &dword_140146A28);
      if ( (unsigned int)sub_1400234F0(
                           (unsigned int)&v247,
                           (unsigned int)&v250,
                           (unsigned int)&v245,
                           v101,
                           (__int64)&v260,
                           (__int64)&v282,
                           (__int64)v281,
                           (__int64)v280,
                           LODWORD(v7)) )
        break;
    }
    v106 = dword_1661A1EA8[v269];
    v107 = v106 & 0xE0000000;
    if ( (v106 & 0xE0000000) == 0x40000000 )
    {
      if ( (unsigned int)sub_140024A00(
                           (unsigned int)&v247,
                           (unsigned int)&v250,
                           (unsigned int)&v245,
                           (unsigned int)v281,
                           (__int64)v280,
                           LODWORD(v7),
                           (__int64)&v265,
                           v106,
                           *(int *)((char *)dword_16CDE9EE0 + v9))
        && v245 < *a3 )
      {
        v108 = *(float *)((char *)&unk_16CDE9EB4 + v9);
        v109 = *(float *)((char *)&unk_16CDE9EC8 + v9);
        v110 = *(float *)((char *)&unk_16CDE9EB8 + v9);
        v111 = *(float *)((char *)&unk_16CDE9ECC + v9);
        v112 = *(float *)((char *)&unk_16CDE9EBC + v9);
        v113 = *(float *)((char *)&unk_16CDE9EC0 + v9);
        v114 = *(float *)((char *)&unk_16CDE9ED0 + v9);
        v115 = *(float *)((char *)&unk_16CDE9EC4 + v9);
        v116 = v258;
        v117 = v264;
        v255 = *(float *)((char *)&unk_16CDE9EB0 + v9);
        v253 = v108;
        v118 = v251;
        v119 = (float)((float)(v109 * v249) + (float)(v255 * v247))
             + (float)((float)(v112 * v248) + *(float *)((char *)dword_16CDE9EA4 + v9));
        v120 = v112 * v251;
        v121 = (float)((float)(v113 * v248) + *(float *)((char *)dword_16CDE9EA8 + v9))
             + (float)((float)(v111 * v249) + (float)(v108 * v247));
        v122 = v252;
        v123 = (float)(v114 * v249) + (float)(v110 * v247);
        v124 = v110 * v250;
        v125 = v255 * v250;
        v126 = v253 * v250;
        v127 = v123 + (float)((float)(v115 * v248) + *(float *)((char *)dword_16CDE9EAC + v9));
        *v258 = v119;
        v116[1] = v121;
        v116[2] = v127;
        v247 = v119;
        v250 = (float)(v125 + v120) + (float)(v109 * v122);
        *v117 = v250;
        v248 = v121;
        v128 = (float)(v126 + (float)(v113 * v118)) + (float)(v111 * v122);
        v249 = v127;
        v252 = (float)(v124 + (float)(v115 * v118)) + (float)(v114 * v122);
        v117[2] = v252;
LABEL_67:
        v148 = v245;
        v117[1] = v128;
        *a3 = v148;
        dword_16E18CAB0 = v106;
        dword_16E18CA98 = v62;
        dword_16E18CA9C = v55;
        dword_16E18CAA0 = v60;
LABEL_68:
        v149 = v246;
        v7 = a7;
        dword_16E18CA94 = v246;
        v251 = v128;
        dword_16E18CABC = -1;
        dword_16E18CAC8 = -1;
        goto LABEL_74;
      }
    }
    else if ( v107 == 0x80000000 )
    {
      if ( (unsigned int)sub_140025170(
                           (unsigned int)&v247,
                           (unsigned int)&v250,
                           (unsigned int)&v245,
                           (unsigned int)v281,
                           (__int64)v280,
                           LODWORD(v7),
                           (__int64)&v265,
                           v106,
                           *(int *)((char *)dword_16CDE9EE0 + v9))
        && v245 < *a3 )
      {
        v129 = *(float *)((char *)&unk_16CDE9EBC + v9);
        v130 = *(float *)((char *)&unk_16CDE9EB0 + v9);
        v131 = *(float *)((char *)&unk_16CDE9EC8 + v9);
        v132 = *(float *)((char *)&unk_16CDE9EC0 + v9);
        v133 = *(float *)((char *)&unk_16CDE9EB4 + v9);
        v134 = *(float *)((char *)&unk_16CDE9ECC + v9);
        v135 = *(float *)((char *)&unk_16CDE9EB8 + v9);
        v136 = *(float *)((char *)&unk_16CDE9ED0 + v9);
        v116 = v258;
        v117 = v264;
        v137 = (float)(v248 * *(float *)((char *)&unk_16CDE9EC4 + v9)) + *(float *)((char *)dword_16CDE9EAC + v9);
        v138 = (float)(v248 * v132) + *(float *)((char *)dword_16CDE9EA8 + v9);
        v139 = (float)(v249 * v134) + (float)(v247 * v133);
        v140 = (float)(v249 * v136) + (float)(v247 * v135);
        v141 = v252;
        v255 = (float)((float)(v247 * v130) + (float)(v248 * v129))
             + (float)((float)(v249 * v131) + *(float *)((char *)dword_16CDE9EA4 + v9));
        v247 = v255;
        v142 = v250;
        v143 = v252 * v131;
        v144 = v140 + v137;
        v253 = v138 + v139;
        v145 = v251;
        v248 = v138 + v139;
        v146 = v251 * *(float *)((char *)&unk_16CDE9EC4 + v9);
        v147 = (float)(v251 * v129) + (float)(v250 * v130);
        v258[2] = v144;
        v249 = v144;
        *v116 = v255;
        v116[1] = v253;
        v250 = v147 + v143;
        *v117 = v147 + v143;
        v128 = (float)((float)(v145 * v132) + (float)(v142 * v133)) + (float)(v141 * v134);
        v252 = (float)((float)(v142 * v135) + v146) + (float)(v141 * v136);
        v117[2] = v252;
        goto LABEL_67;
      }
    }
    else if ( v107 == -1073741824 )
    {
      v268 = v62 - (unsigned __int8)v106;
      v150 = v55 - BYTE2(v106);
      v151 = v60 - BYTE1(v106);
      v270 = v268;
      LODWORD(v256) = v150;
      v271 = v150;
      v272 = v151;
      LODWORD(v253) = sub_14000BE30(v246, v268, v150, v151);
      if ( (unsigned int)sub_140025170(
                           (unsigned int)&v247,
                           (unsigned int)&v250,
                           (unsigned int)&v245,
                           (unsigned int)v281,
                           (__int64)v280,
                           LODWORD(v7),
                           (__int64)&v270,
                           LODWORD(v253),
                           *(int *)((char *)dword_16CDE9EE0 + v9)) )
      {
        if ( v245 < *a3 )
        {
          v152 = *(float *)((char *)&unk_16CDE9EB8 + v9);
          v153 = *(float *)((char *)&unk_16CDE9EB0 + v9);
          v154 = *(float *)((char *)&unk_16CDE9EC8 + v9);
          v155 = *(float *)((char *)&unk_16CDE9EBC + v9);
          v156 = *(float *)((char *)&unk_16CDE9EC0 + v9);
          v157 = *(float *)((char *)&unk_16CDE9EB4 + v9);
          v158 = *(float *)((char *)&unk_16CDE9ECC + v9);
          v159 = v249;
          v116 = v258;
          v160 = v264;
          v161 = LODWORD(v253);
          v162 = v252;
          v163 = (float)(v249 * v154) + (float)(v247 * v153);
          v165 = (float)(v248 * v155) + *(float *)((char *)dword_16CDE9EA4 + v9);
          v249 = (float)((float)(*(float *)((char *)&unk_16CDE9ED0 + v9) * v249) + (float)(v152 * v247))
               + (float)((float)(*(float *)((char *)&unk_16CDE9EC4 + v9) * v248)
                       + *(float *)((char *)dword_16CDE9EAC + v9));
          v164 = v249;
          v166 = (float)(v248 * v156) + *(float *)((char *)dword_16CDE9EA8 + v9);
          v167 = v163 + v165;
          v168 = v159 * v158;
          v169 = v252 * v154;
          v170 = v168 + (float)(v247 * v157);
          v247 = v167;
          v255 = v166 + v170;
          v248 = v166 + v170;
          v171 = v251 * *(float *)((char *)&unk_16CDE9EC4 + v9);
          v172 = (float)(v251 * v155) + (float)(v250 * v153);
          v173 = v250 * v152;
          v174 = (float)(v251 * v156) + (float)(v250 * v157);
          v175 = *(float *)((char *)&unk_16CDE9ED0 + v9);
          *v258 = v167;
          v176 = v172 + v169;
          v116[2] = v164;
          v177 = (float)(v173 + v171) + (float)(v175 * v162);
          v250 = v176;
          v116[1] = v255;
          v128 = v174 + (float)(v162 * v158);
          v178 = v245;
          *v160 = v176;
          v160[2] = v177;
          v252 = v177;
          v160[1] = v128;
          *a3 = v178;
          dword_16E18CAB0 = v161;
          dword_16E18CA98 = v268;
          dword_16E18CA9C = v256;
          dword_16E18CAA0 = v151;
          goto LABEL_68;
        }
      }
    }
    v116 = v258;
    v149 = v246;
LABEL_74:
    v179 = dword_1661A4EA8[v269];
    v180 = v179 & 0xE0000000;
    if ( (v179 & 0xE0000000) == 0x40000000 )
    {
      if ( !(unsigned int)sub_140024A00(
                            (unsigned int)&v247,
                            (unsigned int)&v250,
                            (unsigned int)&v245,
                            (unsigned int)v281,
                            (__int64)v280,
                            LODWORD(v7),
                            (__int64)&v265,
                            v179,
                            *(int *)((char *)dword_16CDE9EE0 + v9))
        || v245 >= *a3 )
      {
        goto LABEL_88;
      }
      v181 = *(float *)((char *)&unk_16CDE9EB0 + v9);
      v182 = *(float *)((char *)&unk_16CDE9EB4 + v9);
      v183 = *(float *)((char *)&unk_16CDE9EB8 + v9);
      v184 = *(float *)((char *)&unk_16CDE9EBC + v9);
      v185 = *(float *)((char *)&unk_16CDE9EC8 + v9);
      v186 = *(float *)((char *)&unk_16CDE9ECC + v9);
      v187 = *(float *)((char *)&unk_16CDE9EC0 + v9);
      v188 = *(float *)((char *)&unk_16CDE9ED0 + v9);
      v189 = v183 * v247;
      v190 = *(float *)((char *)&unk_16CDE9EC4 + v9) * v248;
      v191 = (float)(v186 * v249) + (float)(v182 * v247);
      v192 = v188 * v249;
      *(float *)&v256 = (float)((float)(v185 * v249) + (float)(v181 * v247))
                      + (float)((float)(v184 * v248) + *(float *)((char *)dword_16CDE9EA4 + v9));
      v247 = *(float *)&v256;
      v193 = v187 * v248;
    }
    else
    {
      if ( v180 != 0x80000000 )
      {
        if ( v180 != -1073741824 )
          goto LABEL_88;
        v210 = v62 - (unsigned __int8)v179;
        v255 = *(float *)&v210;
        v211 = v55 - BYTE2(v179);
        v270 = v210;
        v212 = v60 - BYTE1(v179);
        v253 = *(float *)&v211;
        v271 = v211;
        v272 = v212;
        v268 = sub_14000C850(v149, v210, v211, v212);
        if ( !(unsigned int)sub_140025170(
                              (unsigned int)&v247,
                              (unsigned int)&v250,
                              (unsigned int)&v245,
                              (unsigned int)v281,
                              (__int64)v280,
                              LODWORD(v7),
                              (__int64)&v270,
                              v268,
                              *(int *)((char *)dword_16CDE9EE0 + v9))
          || v245 >= *a3 )
        {
          goto LABEL_88;
        }
        v213 = *(float *)((char *)&unk_16CDE9EB0 + v9);
        v214 = *(float *)((char *)&unk_16CDE9EB4 + v9);
        v215 = *(float *)((char *)&unk_16CDE9EB8 + v9);
        v216 = *(float *)((char *)&unk_16CDE9EBC + v9);
        v217 = *(float *)((char *)&unk_16CDE9EC0 + v9);
        v218 = v264;
        v219 = v215 * v247;
        v220 = (float)(v217 * v248) + *(float *)((char *)dword_16CDE9EA8 + v9);
        v221 = (float)(*(float *)((char *)&unk_16CDE9EC4 + v9) * v248) + *(float *)((char *)dword_16CDE9EAC + v9);
        v222 = v252;
        v223 = *(float *)((char *)&unk_16CDE9EC8 + v9) * v252;
        v224 = (float)(*(float *)((char *)&unk_16CDE9ECC + v9) * v249) + (float)(v214 * v247);
        v225 = *(float *)((char *)&unk_16CDE9ECC + v9) * v252;
        *(float *)&v256 = (float)((float)(*(float *)((char *)&unk_16CDE9EC8 + v9) * v249) + (float)(v213 * v247))
                        + (float)((float)(v216 * v248) + *(float *)((char *)dword_16CDE9EA4 + v9));
        v247 = *(float *)&v256;
        v226 = (float)(*(float *)((char *)&unk_16CDE9ED0 + v9) * v249) + v219;
        v248 = v220 + v224;
        v227 = v251 * *(float *)((char *)&unk_16CDE9EC4 + v9);
        v228 = v226 + v221;
        v229 = v250 * v215;
        v230 = (float)(v251 * v217) + (float)(v250 * v214);
        v249 = v228;
        v231 = *(float *)((char *)&unk_16CDE9ED0 + v9);
        v232 = (float)((float)(v251 * v216) + (float)(v250 * v213)) + v223;
        v116[1] = v248;
        v116[2] = v228;
        v233 = v230 + v225;
        v250 = v232;
        v234 = (float)(v229 + v227) + (float)(v231 * v222);
        *(_DWORD *)v116 = v256;
        v235 = v245;
        *v218 = v232;
        v218[1] = v233;
        v218[2] = v234;
        LODWORD(v218) = v268;
        *a3 = v235;
        dword_16E18CAB0 = (int)v218;
        dword_16E18CA94 = v246;
        v251 = v233;
        v252 = v234;
        dword_16E18CA98 = LODWORD(v255);
        dword_16E18CA9C = LODWORD(v253);
        dword_16E18CAA0 = v212;
        goto LABEL_87;
      }
      if ( !(unsigned int)sub_140025170(
                            (unsigned int)&v247,
                            (unsigned int)&v250,
                            (unsigned int)&v245,
                            (unsigned int)v281,
                            (__int64)v280,
                            LODWORD(v7),
                            (__int64)&v265,
                            v179,
                            *(int *)((char *)dword_16CDE9EE0 + v9))
        || v245 >= *a3 )
      {
        goto LABEL_88;
      }
      v181 = *(float *)((char *)&unk_16CDE9EB0 + v9);
      v182 = *(float *)((char *)&unk_16CDE9EB4 + v9);
      v183 = *(float *)((char *)&unk_16CDE9EB8 + v9);
      v184 = *(float *)((char *)&unk_16CDE9EBC + v9);
      v185 = *(float *)((char *)&unk_16CDE9EC8 + v9);
      v186 = *(float *)((char *)&unk_16CDE9ECC + v9);
      v187 = *(float *)((char *)&unk_16CDE9EC0 + v9);
      v188 = *(float *)((char *)&unk_16CDE9ED0 + v9);
      v189 = v183 * v247;
      v190 = *(float *)((char *)&unk_16CDE9EC4 + v9) * v248;
      v191 = (float)(v186 * v249) + (float)(v182 * v247);
      v192 = v188 * v249;
      *(float *)&v256 = (float)((float)(v184 * v248) + (float)(v181 * v247))
                      + (float)((float)(v185 * v249) + *(float *)((char *)dword_16CDE9EA4 + v9));
      v247 = *(float *)&v256;
      v193 = v187 * v248;
    }
    v194 = v192 + v189;
    v195 = v250;
    v196 = v264;
    v197 = (float)(v193 + *(float *)((char *)dword_16CDE9EA8 + v9)) + v191;
    v198 = v184 * v251;
    v199 = v250;
    v200 = v185 * v252;
    v201 = v194 + (float)(v190 + *(float *)((char *)dword_16CDE9EAC + v9));
    v202 = v186 * v252;
    v203 = v188 * v252;
    v204 = v187 * v251;
    v205 = v251 * *(float *)((char *)&unk_16CDE9EC4 + v9);
    *(_DWORD *)v116 = v256;
    v206 = v245;
    v116[1] = v197;
    v116[2] = v201;
    v248 = v197;
    v249 = v201;
    v207 = (float)((float)(v195 * v181) + v198) + v200;
    v208 = (float)((float)(v199 * v182) + v204) + v202;
    v209 = (float)((float)(v195 * v183) + v205) + v203;
    *v196 = v207;
    v250 = v207;
    v196[1] = v208;
    v251 = v208;
    v196[2] = v209;
    LODWORD(v196) = v246;
    *a3 = v206;
    dword_16E18CAB0 = v179;
    dword_16E18CA94 = (int)v196;
    dword_16E18CA98 = v62;
    dword_16E18CA9C = v55;
    dword_16E18CAA0 = v60;
    v252 = v209;
LABEL_87:
    dword_16E18CAC8 = -1;
    dword_16E18CABC = -1;
LABEL_88:
    v10 = v259;
    v61 = v254;
LABEL_89:
    v7 = a7;
    v265 = ++v62;
    if ( v62 > v61 )
    {
      *(float *)&v53 = v263;
      v59 = v273;
      goto LABEL_91;
    }
  }
  v237 = v258;
  v238 = v264;
  v239 = v248;
  *v258 = v247;
  v240 = v249;
  v237[1] = v239;
  v241 = v250;
  v237[2] = v240;
  v242 = v251;
  *v238 = v241;
  v243 = v252;
  v238[1] = v242;
  v244 = v245;
  v238[2] = v243;
  *a3 = v244;
  dword_16E18CA98 = -1;
  return 1;
}

