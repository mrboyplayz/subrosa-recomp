/* Address: 0x140035e50 | Name: sub_140035E50 | Size: 5071 bytes */
__int64 __fastcall sub_140035E50(int a1, float *a2, float *a3, float a4)
{
  float v5; // xmm3_4
  __int64 v6; // r14
  float v7; // xmm0_4
  float *v8; // rbx
  float *v9; // rdi
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  __int64 v16; // rax
  signed int v17; // r12d
  __int64 v18; // r10
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  __int64 v22; // r15
  __int64 v23; // rdx
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm12_4
  float v29; // xmm13_4
  float v30; // xmm14_4
  float v31; // xmm15_4
  signed __int64 v32; // rdi
  float *v33; // rax
  signed __int64 v34; // r8
  signed __int64 v35; // r9
  signed __int64 v36; // r12
  signed __int64 v37; // r10
  signed __int64 v38; // r11
  signed __int64 v39; // rsi
  signed __int64 v40; // r13
  _BYTE *v41; // rcx
  signed __int64 v42; // r15
  unsigned __int64 v43; // rcx
  signed __int64 v44; // rdx
  float v45; // xmm4_4
  float v46; // xmm6_4
  float v47; // xmm0_4
  float v48; // xmm5_4
  float v49; // xmm3_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm4_4
  float v53; // xmm1_4
  float v54; // xmm6_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  float v58; // xmm3_4
  float v59; // xmm0_4
  float v60; // xmm5_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm4_4
  float v65; // xmm1_4
  float v66; // xmm6_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm3_4
  float v74; // xmm2_4
  float v75; // xmm0_4
  float v76; // xmm4_4
  float v77; // xmm0_4
  signed __int64 v78; // rbx
  float v79; // xmm0_4
  float v80; // xmm6_4
  float v81; // xmm8_4
  float v82; // xmm9_4
  float v83; // xmm10_4
  float v84; // xmm11_4
  float v85; // xmm12_4
  float v86; // xmm13_4
  float v87; // xmm14_4
  float v88; // xmm15_4
  float *v89; // rax
  __int64 v90; // rdx
  float v91; // xmm1_4
  float v92; // xmm2_4
  float v93; // xmm4_4
  float v94; // xmm3_4
  float v95; // xmm5_4
  float v96; // xmm1_4
  unsigned int v97; // xmm5_4
  unsigned int v98; // xmm4_4
  float v99; // xmm0_4
  float v100; // xmm2_4
  float v101; // xmm3_4
  float v102; // xmm0_4
  signed int v103; // r13d
  int *v104; // rsi
  float v105; // xmm15_4
  float v106; // xmm11_4
  float v107; // xmm12_4
  float v108; // xmm13_4
  __int64 v109; // rcx
  float v110; // xmm3_4
  float v111; // xmm1_4
  __int64 v112; // rax
  float v113; // xmm1_4
  float v114; // xmm3_4
  float v115; // xmm10_4
  float v116; // xmm8_4
  float v117; // xmm9_4
  float v118; // xmm10_4
  float v119; // xmm8_4
  float v120; // xmm4_4
  float v121; // xmm5_4
  float v122; // xmm6_4
  float v123; // xmm3_4
  __int64 v124; // rax
  float v125; // xmm3_4
  float v126; // xmm4_4
  float v127; // xmm3_4
  float v128; // xmm4_4
  float v129; // xmm5_4
  float v130; // xmm3_4
  float v131; // xmm4_4
  float v132; // xmm1_4
  __int64 v133; // r13
  _DWORD *v134; // rsi
  float v135; // xmm5_4
  float v136; // xmm7_4
  float v137; // xmm12_4
  float v138; // xmm11_4
  float v139; // xmm6_4
  float v140; // xmm4_4
  float v141; // xmm14_4
  float v142; // xmm13_4
  __int64 v143; // rcx
  float v144; // xmm15_4
  float v145; // xmm10_4
  float v146; // xmm9_4
  float v147; // xmm3_4
  float v148; // xmm2_4
  unsigned int v149; // xmm15_4
  float v150; // xmm9_4
  float v151; // xmm3_4
  float v152; // xmm8_4
  float v153; // xmm0_4
  float v154; // xmm9_4
  float v155; // xmm10_4
  float v156; // xmm2_4
  float v157; // xmm8_4
  float v158; // xmm10_4
  float v159; // xmm3_4
  float v160; // xmm1_4
  float v161; // xmm5_4
  float v162; // xmm7_4
  float v163; // xmm8_4
  float v164; // xmm0_4
  float v165; // xmm2_4
  float v166; // xmm1_4
  float v167; // xmm6_4
  float v168; // xmm3_4
  float v169; // xmm4_4
  float v170; // xmm5_4
  float v171; // xmm3_4
  float v172; // xmm7_4
  float v173; // xmm2_4
  float v174; // xmm5_4
  float v175; // xmm6_4
  float v176; // xmm5_4
  float v177; // xmm1_4
  float v178; // xmm4_4
  float v179; // xmm6_4
  float v180; // xmm9_4
  float v181; // xmm10_4
  float v182; // xmm5_4
  float v183; // xmm3_4
  float v184; // xmm4_4
  float v185; // xmm1_4
  float v186; // xmm7_4
  __int64 v188; // [rsp+0h] [rbp-100h] BYREF
  __int64 v189; // [rsp+28h] [rbp-D8h]
  float v190; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v191; // [rsp+58h] [rbp-A8h] BYREF
  float v192; // [rsp+60h] [rbp-A0h]
  float v193; // [rsp+68h] [rbp-98h]
  float v194[4]; // [rsp+70h] [rbp-90h] BYREF
  float v195; // [rsp+80h] [rbp-80h]
  signed __int64 v196; // [rsp+88h] [rbp-78h] BYREF
  float v197; // [rsp+90h] [rbp-70h]
  float *v198; // [rsp+98h] [rbp-68h] BYREF
  float v199; // [rsp+A0h] [rbp-60h]
  __int64 v200; // [rsp+A8h] [rbp-58h] BYREF
  float v201; // [rsp+B0h] [rbp-50h]
  __int64 v202; // [rsp+B8h] [rbp-48h] BYREF
  float v203; // [rsp+C0h] [rbp-40h]
  signed __int64 v204; // [rsp+C8h] [rbp-38h]
  signed __int64 v205; // [rsp+D0h] [rbp-30h]
  float v206; // [rsp+D8h] [rbp-28h]
  __int64 v207; // [rsp+E0h] [rbp-20h]
  signed __int64 v208; // [rsp+E8h] [rbp-18h]
  __int64 v209; // [rsp+F0h] [rbp-10h]
  signed __int64 v210; // [rsp+F8h] [rbp-8h]
  int v211; // [rsp+100h] [rbp+0h] BYREF
  int v212; // [rsp+104h] [rbp+4h] BYREF
  int v213; // [rsp+108h] [rbp+8h] BYREF
  char v214; // [rsp+10Ch] [rbp+Ch] BYREF
  _BYTE v215[4]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v216[4]; // [rsp+114h] [rbp+14h] BYREF
  char v217; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v218[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
  _BYTE v219[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v221[4]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v222[3028]; // [rsp+12Ch] [rbp+2Ch] BYREF
  __int64 v223; // [rsp+D00h] [rbp+C00h]

  v5 = *a2;
  v6 = 5210LL * a1;
  v7 = *a2;
  v206 = a4;
  v8 = a3;
  *(_QWORD *)v194 = a2;
  v198 = a3;
  v9 = a2;
  v10 = *(float *)&dword_140404A6C[v6 + 129716753];
  if ( (float)(v7 + a4) < v10 && (float)(a4 + *a3) < v10 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v188 ^ v223);
  v11 = *(float *)&dword_140404A6C[v6 + 129716754];
  if ( (float)(a2[1] + a4) < v11 && (float)(a4 + a3[1]) < v11 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v188 ^ v223);
  v12 = *(float *)&dword_140404A6C[v6 + 129716755];
  if ( (float)(a2[2] + a4) < v12 && (float)(a4 + a3[2]) < v12 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v188 ^ v223);
  v13 = *(float *)&dword_140404A6C[v6 + 129716756];
  if ( (float)(v5 - a4) > v13 && (float)(*a3 - a4) > v13 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v188 ^ v223);
  v14 = *(float *)&dword_140404A6C[v6 + 129716757];
  if ( (float)(a2[1] - a4) > v14 && (float)(a3[1] - a4) > v14 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v188 ^ v223);
  v15 = *(float *)&dword_140404A6C[v6 + 129716758];
  if ( (float)(a2[2] - a4) > v15 && (float)(a3[2] - a4) > v15 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v188 ^ v223);
  v16 = (int)dword_140404A6C[v6 + 129716710];
  v17 = 0;
  v18 = 0;
  dword_140404A6C[73006988] = 1199570944;
  v19 = *a3 + *a2;
  v20 = a3[1] + a2[1];
  v21 = a3[2] + a2[2];
  v22 = 180288 * v16;
  v190 = v19;
  v195 = v20;
  v193 = v21;
  v207 = v16;
  v23 = (int)dword_140404A6C[45072 * v16 + 335170684];
  v191 = 180288 * v16;
  v202 = v23;
  if ( v23 < 4 )
  {
    if ( v23 <= 0 )
      goto LABEL_21;
  }
  else
  {
    v24 = *(float *)&dword_140404A6C[v6 + 129716726];
    v25 = *(float *)&dword_140404A6C[v6 + 129716720];
    v26 = *(float *)&dword_140404A6C[v6 + 129716727];
    v27 = *(float *)&dword_140404A6C[v6 + 129716721];
    v28 = *(float *)&dword_140404A6C[v6 + 129716728];
    v29 = *(float *)&dword_140404A6C[v6 + 129716722];
    v30 = *(float *)&dword_140404A6C[v6 + 129716729];
    v31 = *(float *)&dword_140404A6C[v6 + 129716730];
    v205 = &v221[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v32 = v205;
    v210 = &v222[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v33 = (float *)((char *)&dword_140404A6C[335170686] + v22);
    v34 = (char *)&v212 - v22 - (char *)&dword_140404A6C[335170686];
    v204 = (char *)&v211 - v22 - (char *)&dword_140404A6C[335170686];
    v35 = (char *)&v213 - v22 - (char *)&dword_140404A6C[335170686];
    v36 = v204;
    v37 = &v215[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v38 = &v216[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v208 = &v214 - v22 - (char *)&dword_140404A6C[335170686];
    v39 = &v218[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v40 = &v219[-v22] - (_BYTE *)&dword_140404A6C[335170686];
    v196 = &v217 - v22 - (char *)&dword_140404A6C[335170686];
    v41 = v221 - v22 + 2;
    v42 = v208;
    v209 = v41 - (_BYTE *)&dword_140404A6C[335170686];
    v43 = ((unsigned __int64)(v23 - 4) >> 2) + 1;
    v200 = 4 * v43;
    v44 = v196;
    do
    {
      v45 = *(v33 - 1);
      v46 = v33[1];
      v47 = *(float *)&dword_140404A6C[v6 + 129716731] * *v33;
      v48 = v33[3];
      v49 = (float)((float)((float)(v26 * v45) + v27) + (float)(v31 * *v33))
          + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v46);
      v50 = *(float *)&dword_140404A6C[v6 + 129716734];
      *(float *)((char *)v33 + v36) = (float)((float)((float)(v24 * v45) + v25) + (float)(v30 * *v33))
                                    + (float)(*(float *)&dword_140404A6C[v6 + 129716732] * v46);
      v51 = v28 * v45;
      v52 = v33[2];
      v53 = v50 * v46;
      v54 = v33[4];
      *(float *)((char *)v33 + v34) = v49;
      v55 = (float)((float)(v51 + v29) + v47) + v53;
      v56 = *(float *)&dword_140404A6C[v6 + 129716732] * v54;
      *(float *)((char *)v33 + v35) = v55;
      v57 = (float)((float)((float)(v24 * v52) + v25) + (float)(v30 * v48)) + v56;
      v58 = (float)((float)(v26 * v52) + v27) + (float)(v31 * v48);
      v59 = *(float *)&dword_140404A6C[v6 + 129716731] * v48;
      v60 = v33[6];
      v61 = v58 + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v54);
      v62 = *(float *)&dword_140404A6C[v6 + 129716734];
      *(float *)((char *)v33 + v42) = v57;
      v63 = v28 * v52;
      v64 = v33[5];
      v65 = v62 * v54;
      v66 = v33[7];
      *(float *)((char *)v33 + v37) = v61;
      v67 = (float)((float)(v63 + v29) + v59) + v65;
      v68 = *(float *)&dword_140404A6C[v6 + 129716732] * v66;
      *(float *)((char *)v33 + v38) = v67;
      *(float *)((char *)v33 + v44) = (float)((float)((float)(v24 * v64) + v25) + (float)(v30 * v60)) + v68;
      v69 = *(float *)&dword_140404A6C[v6 + 129716731] * v60;
      v70 = *(float *)&dword_140404A6C[v6 + 129716734] * v66;
      *(float *)((char *)v33 + v39) = (float)((float)((float)(v26 * v64) + v27) + (float)(v31 * v60))
                                    + (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v66);
      v71 = (float)((float)((float)(v28 * v64) + v29) + v69) + v70;
      v72 = v33[9];
      v73 = v33[8];
      *(float *)((char *)v33 + v40) = v71;
      v74 = v33[10];
      *(float *)&v196 = (float)((float)(v24 * v73) + v25) + (float)(v30 * v72);
      v75 = *(float *)&dword_140404A6C[v6 + 129716731] * v72;
      *((float *)&v196 + 1) = (float)((float)(v26 * v73) + v27) + (float)(v31 * v72);
      v76 = (float)((float)(v28 * v73) + v29) + v75;
      v77 = *(float *)&dword_140404A6C[v6 + 129716732] * v74;
      v197 = v76;
      *(float *)((char *)v33 + v209) = v77 + *(float *)&v196;
      v78 = v210;
      v79 = (float)(*(float *)&dword_140404A6C[v6 + 129716734] * v74) + v76;
      *(float *)((char *)v33 + v32) = (float)(*(float *)&dword_140404A6C[v6 + 129716733] * v74)
                                    + (float)((float)((float)(v26 * v73) + v27) + (float)(v31 * v72));
      *(float *)((char *)v33 + v78) = v79;
      v33 += 12;
      --v43;
    }
    while ( v43 );
    v23 = v202;
    v18 = v200;
    v17 = 0;
    v8 = v198;
    v9 = *(float **)v194;
    v22 = v191;
    if ( v200 >= v202 )
      goto LABEL_20;
    v16 = v207;
  }
  v80 = *(float *)&dword_140404A6C[v6 + 129716726];
  v81 = *(float *)&dword_140404A6C[v6 + 129716720];
  v82 = *(float *)&dword_140404A6C[v6 + 129716727];
  v83 = *(float *)&dword_140404A6C[v6 + 129716721];
  v84 = *(float *)&dword_140404A6C[v6 + 129716728];
  v85 = *(float *)&dword_140404A6C[v6 + 129716722];
  v86 = *(float *)&dword_140404A6C[v6 + 129716729];
  v87 = *(float *)&dword_140404A6C[v6 + 129716730];
  v88 = *(float *)&dword_140404A6C[v6 + 129716731];
  v89 = (float *)(0x140000000LL + 12 * (v18 + 15024 * v16) + 1344896100);
  v90 = v23 - v18;
  do
  {
    v91 = *(v89 - 1);
    v92 = *v89;
    v93 = v82 * v91;
    v94 = v84 * v91;
    v95 = (float)(v80 * v91) + v81;
    v96 = *(float *)&dword_140404A6C[v6 + 129716733];
    *(float *)&v97 = v95 + (float)(v86 * *v89);
    *(float *)&v98 = (float)(v93 + v83) + (float)(v87 * *v89);
    v196 = __PAIR64__(v98, v97);
    v99 = v88 * v92;
    v100 = v89[1];
    v101 = (float)(v94 + v85) + v99;
    v102 = *(float *)&dword_140404A6C[v6 + 129716732] * v100;
    v197 = v101;
    *(float *)((char *)v89 + (char *)&v212 - v22 - (char *)&dword_140404A6C[335170686]) = (float)(v96 * v100)
                                                                                        + *(float *)&v98;
    *(float *)((char *)v89 + (char *)&v211 - v22 - (char *)&dword_140404A6C[335170686]) = v102 + *(float *)&v97;
    *(float *)((char *)v89 + (char *)&v213 - v22 - (char *)&dword_140404A6C[335170686]) = (float)(*(float *)&dword_140404A6C[v6 + 129716734]
                                                                                                * v100)
                                                                                        + v101;
    v89 += 3;
    --v90;
  }
  while ( v90 );
LABEL_20:
  v21 = v193;
  v20 = v195;
  v19 = v190;
LABEL_21:
  v103 = 0;
  if ( *(int *)((char *)&dword_140404A6C[335173757] + v22) > 0 )
  {
    v104 = (int *)((char *)&dword_140404A6C[335173761] + v22);
    v105 = v19 * 0.5;
    v195 = v20 * 0.5;
    v193 = v21 * 0.5;
    do
    {
      LODWORD(v106) = *(&v211 + 3 * *(v104 - 1));
      LODWORD(v107) = *(&v212 + 3 * *(v104 - 1));
      v108 = *((float *)&v213 + 3 * *(v104 - 1));
      v109 = 3LL * *v104;
      v196 = __PAIR64__(LODWORD(v107), LODWORD(v106));
      v110 = *((float *)&v211 + v109);
      v111 = *((float *)&v213 + v109);
      v112 = v104[1];
      HIDWORD(v200) = *(&v212 + v109);
      v201 = v111;
      v113 = v111 - v108;
      *(float *)&v200 = v110;
      v114 = v110 - v106;
      v115 = *((float *)&v213 + 3 * v112);
      v116 = *((float *)&v211 + 3 * v112);
      HIDWORD(v198) = *(&v212 + 3 * v112);
      v117 = *((float *)&v198 + 1) - v107;
      v199 = v115;
      v118 = v115 - v108;
      *(float *)&v198 = v116;
      v119 = v116 - v106;
      v197 = v108;
      v120 = (float)((float)(*((float *)&v198 + 1) - v107) * v113)
           - (float)(v118 * (float)(*((float *)&v200 + 1) - v107));
      v121 = (float)(v118 * v114) - (float)(v119 * v113);
      v122 = (float)(v119 * (float)(*((float *)&v200 + 1) - v107))
           - (float)((float)(*((float *)&v198 + 1) - v107) * v114);
      v123 = fsqrt((float)((float)(v121 * v121) + (float)(v120 * v120)) + (float)(v122 * v122));
      if ( v123 == 0.0 )
      {
        v191 = 0;
        v192 = 0.0;
      }
      else
      {
        *(float *)&v191 = v120 * (float)(1.0 / v123);
        *((float *)&v191 + 1) = v121 * (float)(1.0 / v123);
        v192 = v122 * (float)(1.0 / v123);
      }
      *(float *)&v189 = a4;
      *((float *)&v202 + 1) = v195 - v107;
      *(float *)&v202 = v105 - v106;
      v203 = v193 - v108;
      if ( (unsigned int)sub_140035690(
                           v194,
                           (float *)&v191,
                           &v190,
                           v9,
                           v8,
                           v189,
                           (float *)&v196,
                           (__int64)&v200,
                           (__int64)&v198)
        && *(float *)&dword_140404A6C[73006988] > v190 )
      {
        *(_QWORD *)&dword_140404A6C[73006981] = *(_QWORD *)v194;
        *(float *)&dword_140404A6C[73006983] = v194[2];
        *(_QWORD *)&dword_140404A6C[73006984] = v191;
        *(float *)&dword_140404A6C[73006986] = v192;
        *(float *)&dword_140404A6C[73006988] = v190;
      }
      if ( *(v104 - 2) == 4 )
      {
        v200 = (__int64)v198;
        v201 = v199;
        v124 = v104[2];
        v125 = *((float *)&v213 + 3 * v124);
        v126 = *((float *)&v211 + 3 * v124);
        HIDWORD(v198) = *(&v212 + 3 * v124);
        v199 = v125;
        v127 = v125 - v108;
        *(float *)&v198 = v126;
        v128 = v126 - v106;
        v129 = (float)((float)(*((float *)&v198 + 1) - v107) * v118) - (float)(v127 * v117);
        v130 = (float)(v127 * v119) - (float)(v128 * v118);
        v131 = (float)(v128 * v117) - (float)((float)(*((float *)&v198 + 1) - v107) * v119);
        v132 = fsqrt((float)((float)(v130 * v130) + (float)(v129 * v129)) + (float)(v131 * v131));
        if ( v132 == 0.0 )
        {
          v191 = 0;
          v192 = 0.0;
        }
        else
        {
          *(float *)&v191 = v129 * (float)(1.0 / v132);
          *((float *)&v191 + 1) = v130 * (float)(1.0 / v132);
          v192 = v131 * (float)(1.0 / v132);
        }
        *(float *)&v189 = a4;
        if ( (unsigned int)sub_140035690(
                             v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (__int64)&v200,
                             (__int64)&v198) )
        {
          if ( *(float *)&dword_140404A6C[73006988] > v190 )
          {
            *(_QWORD *)&dword_140404A6C[73006981] = *(_QWORD *)v194;
            *(float *)&dword_140404A6C[73006983] = v194[2];
            *(_QWORD *)&dword_140404A6C[73006984] = v191;
            *(float *)&dword_140404A6C[73006986] = v192;
            *(float *)&dword_140404A6C[73006988] = v190;
          }
        }
      }
      ++v103;
      v104 += 26;
    }
    while ( v103 < *(int *)((char *)&dword_140404A6C[335173757] + v22) );
  }
  if ( *(int *)((char *)&dword_140404A6C[335200382] + v22) > 0 )
  {
    v133 = 0;
    v134 = (_DWORD *)(0x140000000LL + v6 * 4 + 523090428);
    do
    {
      if ( !*v134 )
      {
        v135 = *(float *)&dword_140404A6C[v6 + 129716720];
        v136 = *(float *)&dword_140404A6C[v6 + 129716726];
        v137 = *(float *)&dword_140404A6C[v6 + 129716729];
        v138 = *(float *)&dword_140404A6C[v6 + 129716732];
        v139 = *(float *)&dword_140404A6C[v6 + 129716731];
        v140 = *(float *)&dword_140404A6C[v6 + 129716734];
        v141 = *(float *)&dword_140404A6C[v6 + 129716730];
        v142 = *(float *)&dword_140404A6C[v6 + 129716733];
        v143 = v133 + 180288 * v207;
        v144 = *(float *)((char *)&dword_140404A6C[335200384] + v143);
        v145 = *(float *)((char *)&dword_140404A6C[335200387] + v143);
        v146 = (float)((float)(v144 * *(float *)&dword_140404A6C[v6 + 129716728])
                     + *(float *)&dword_140404A6C[v6 + 129716722])
             + (float)(*(float *)((char *)&dword_140404A6C[335200385] + v143) * v139);
        v147 = *(float *)((char *)&dword_140404A6C[335200386] + v143) * v140;
        v148 = *(float *)((char *)&dword_140404A6C[335200388] + v143);
        *(float *)&v149 = (float)((float)((float)(v144 * *(float *)&dword_140404A6C[v6 + 129716727])
                                        + *(float *)&dword_140404A6C[v6 + 129716721])
                                + (float)(*(float *)((char *)&dword_140404A6C[335200385] + v143) * v141))
                        + (float)(*(float *)((char *)&dword_140404A6C[335200386] + v143) * v142);
        v195 = (float)((float)((float)(*(float *)((char *)&dword_140404A6C[335200384] + v143) * v136) + v135)
                     + (float)(*(float *)((char *)&dword_140404A6C[335200385] + v143) * v137))
             + (float)(*(float *)((char *)&dword_140404A6C[335200386] + v143) * v138);
        v150 = v146 + v147;
        v151 = *(float *)((char *)&dword_140404A6C[335200389] + v143);
        v152 = (float)(v145 * *(float *)&dword_140404A6C[v6 + 129716727]) + *(float *)&dword_140404A6C[v6 + 129716721];
        *(float *)&v204 = v150;
        v153 = v148 * v141;
        v154 = (float)((float)((float)(v145 * v136) + v135) + (float)(v148 * v137)) + (float)(v151 * v138);
        v155 = (float)((float)(v145 * *(float *)&dword_140404A6C[v6 + 129716728])
                     + *(float *)&dword_140404A6C[v6 + 129716722])
             + (float)(v148 * v139);
        v156 = *(float *)((char *)&dword_140404A6C[335200391] + v143);
        v157 = (float)(v152 + v153) + (float)(v151 * v142);
        v158 = v155 + (float)(v151 * v140);
        v159 = *(float *)((char *)&dword_140404A6C[335200392] + v143);
        v160 = (float)(*(float *)((char *)&dword_140404A6C[335200390] + v143) * v136) + v135;
        v161 = *(float *)((char *)&dword_140404A6C[335200390] + v143);
        v193 = v160 + (float)(v156 * v137);
        v193 = v193 + (float)(v159 * v138);
        v162 = v161;
        *((float *)&v200 + 1) = v157;
        v163 = v157 - *(float *)&v149;
        v164 = v156;
        v165 = v156 * v139;
        v166 = v159;
        v167 = *(float *)((char *)&dword_140404A6C[335200393] + v143);
        v168 = v159 * v140;
        v169 = *(float *)((char *)&dword_140404A6C[335200395] + v143);
        v170 = (float)((float)((float)(v161 * *(float *)&dword_140404A6C[v6 + 129716728])
                             + *(float *)&dword_140404A6C[v6 + 129716722])
                     + v165)
             + v168;
        v171 = *(float *)((char *)&dword_140404A6C[335200394] + v143);
        v172 = (float)((float)(v162 * *(float *)&dword_140404A6C[v6 + 129716727])
                     + *(float *)&dword_140404A6C[v6 + 129716721])
             + (float)(v164 * v141);
        v173 = (float)(v167 * *(float *)&dword_140404A6C[v6 + 129716727]) + *(float *)&dword_140404A6C[v6 + 129716721];
        v201 = v158;
        *(float *)&v205 = v170;
        *(float *)&v200 = v154;
        v174 = (float)(v167 * *(float *)&dword_140404A6C[v6 + 129716726]) + *(float *)&dword_140404A6C[v6 + 129716720];
        v175 = (float)(v167 * *(float *)&dword_140404A6C[v6 + 129716728]) + *(float *)&dword_140404A6C[v6 + 129716722];
        *((float *)&v198 + 1) = v172 + (float)(v166 * v142);
        v176 = (float)(v174 + (float)(v171 * v137)) + (float)(v169 * v138);
        v177 = v169;
        v178 = v169 * *(float *)&dword_140404A6C[v6 + 129716734];
        v179 = v175 + (float)(v171 * *(float *)&dword_140404A6C[v6 + 129716731]);
        v180 = v154 - v195;
        v196 = __PAIR64__(v149, LODWORD(v195));
        v199 = *(float *)&v205;
        *(float *)&v198 = v193;
        *(float *)&v202 = v176;
        v203 = v179 + v178;
        v197 = *(float *)&v204;
        v181 = v158 - *(float *)&v204;
        *((float *)&v202 + 1) = (float)(v173 + (float)(v171 * v141)) + (float)(v177 * v142);
        v182 = (float)((float)(*((float *)&v198 + 1) - *(float *)&v149) * v181)
             - (float)((float)(*(float *)&v205 - *(float *)&v204) * v163);
        v183 = (float)((float)(*(float *)&v205 - *(float *)&v204) * v180) - (float)((float)(v193 - v195) * v181);
        v184 = (float)((float)(v193 - v195) * v163) - (float)((float)(*((float *)&v198 + 1) - *(float *)&v149) * v180);
        v185 = fsqrt((float)((float)(v183 * v183) + (float)(v182 * v182)) + (float)(v184 * v184));
        if ( v185 == 0.0 )
        {
          v191 = 0;
          v192 = 0.0;
        }
        else
        {
          *(float *)&v191 = v182 * (float)(1.0 / v185);
          *((float *)&v191 + 1) = v183 * (float)(1.0 / v185);
          v192 = v184 * (float)(1.0 / v185);
        }
        v186 = v206;
        *(float *)&v189 = v206;
        if ( (unsigned int)sub_140035690(
                             v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (__int64)&v200,
                             (__int64)&v198)
          && *(float *)&dword_140404A6C[73006988] > v190 )
        {
          *(_QWORD *)&dword_140404A6C[73006981] = *(_QWORD *)v194;
          *(float *)&dword_140404A6C[73006983] = v194[2];
          *(_QWORD *)&dword_140404A6C[73006984] = v191;
          *(float *)&dword_140404A6C[73006986] = v192;
          *(float *)&dword_140404A6C[73006988] = v190;
        }
        *(float *)&v189 = v186;
        if ( (unsigned int)sub_140035690(
                             v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (__int64)&v198,
                             (__int64)&v202)
          && *(float *)&dword_140404A6C[73006988] > v190 )
        {
          *(float *)&dword_140404A6C[73006981] = v194[0];
          *(_QWORD *)&dword_140404A6C[73006982] = *(_QWORD *)&v194[1];
          *(_QWORD *)&dword_140404A6C[73006984] = v191;
          *(float *)&dword_140404A6C[73006986] = v192;
          *(float *)&dword_140404A6C[73006988] = v190;
        }
        *(float *)&v191 = -*(float *)&v191;
        *(float *)&v189 = v186;
        *((float *)&v191 + 1) = -*((float *)&v191 + 1);
        v192 = -v192;
        if ( (unsigned int)sub_140035690(
                             v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (__int64)&v198,
                             (__int64)&v200)
          && *(float *)&dword_140404A6C[73006988] > v190 )
        {
          *(_QWORD *)&dword_140404A6C[73006981] = *(_QWORD *)v194;
          *(float *)&dword_140404A6C[73006983] = v194[2];
          *(_QWORD *)&dword_140404A6C[73006984] = v191;
          *(float *)&dword_140404A6C[73006986] = v192;
          *(float *)&dword_140404A6C[73006988] = v190;
        }
        *(float *)&v189 = v186;
        if ( (unsigned int)sub_140035690(
                             v194,
                             (float *)&v191,
                             &v190,
                             v9,
                             v8,
                             v189,
                             (float *)&v196,
                             (__int64)&v202,
                             (__int64)&v198)
          && *(float *)&dword_140404A6C[73006988] > v190 )
        {
          *(_QWORD *)&dword_140404A6C[73006981] = *(_QWORD *)v194;
          *(float *)&dword_140404A6C[73006983] = v194[2];
          *(_QWORD *)&dword_140404A6C[73006984] = v191;
          *(float *)&dword_140404A6C[73006986] = v192;
          *(float *)&dword_140404A6C[73006988] = v190;
        }
      }
      ++v17;
      ++v134;
      v133 += 52;
    }
    while ( v17 < *(int *)((char *)&dword_140404A6C[335200382] + v22) );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v188 ^ v223);
}

