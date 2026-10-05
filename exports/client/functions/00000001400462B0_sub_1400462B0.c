/* Address: 0x1400462b0 | Name: sub_1400462B0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1400462B0(
        int *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9)
{
  float *v9; // r14
  float *v10; // rsi
  int *v12; // rbx
  __int64 v13; // r12
  int v14; // r9d
  __int64 v15; // r11
  __int64 v16; // r8
  float v17; // xmm8_4
  float v18; // xmm10_4
  float v19; // xmm12_4
  float v20; // xmm7_4
  float v21; // xmm9_4
  float v22; // xmm11_4
  float v23; // xmm13_4
  float v24; // xmm14_4
  float v25; // xmm15_4
  signed __int64 v26; // r12
  float *v27; // rcx
  signed __int64 v28; // rdx
  signed __int64 v29; // r9
  signed __int64 v30; // r10
  signed __int64 v31; // r11
  signed __int64 v32; // rdi
  signed __int64 v33; // r15
  signed __int64 v34; // r13
  signed __int64 v35; // r14
  unsigned __int64 v36; // rax
  signed __int64 v37; // r8
  float v38; // xmm6_4
  signed __int64 v39; // rbx
  float v40; // xmm2_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  float v43; // xmm4_4
  float v44; // xmm3_4
  float v45; // xmm6_4
  float v46; // xmm5_4
  float v47; // xmm1_4
  float v48; // xmm6_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  float v52; // xmm5_4
  float v53; // xmm6_4
  float v54; // xmm4_4
  float v55; // xmm3_4
  float v56; // xmm6_4
  float v57; // xmm5_4
  float v58; // xmm1_4
  float v59; // xmm6_4
  float v60; // xmm1_4
  signed __int64 v61; // rbx
  float v62; // xmm5_4
  float v63; // xmm2_4
  float v64; // xmm3_4
  float v65; // xmm1_4
  float v66; // xmm6_4
  float v67; // xmm4_4
  float v68; // xmm3_4
  float v69; // xmm5_4
  float v70; // xmm1_4
  float v71; // xmm0_4
  float v72; // xmm2_4
  __int64 v73; // r9
  float v74; // xmm6_4
  float v75; // xmm13_4
  float v76; // xmm14_4
  float v77; // xmm15_4
  char *v78; // r10
  float *v79; // rdx
  signed __int64 v80; // rcx
  signed __int64 v81; // r9
  signed __int64 v82; // r10
  __int64 v83; // r8
  float v84; // xmm2_4
  float v85; // xmm4_4
  float v86; // xmm1_4
  float v87; // xmm3_4
  float v88; // xmm5_4
  float v89; // xmm1_4
  float v90; // xmm0_4
  float v91; // xmm2_4
  int *v92; // rcx
  __int64 v93; // rdx
  int v94; // r11d
  float v95; // xmm3_4
  float v96; // xmm2_4
  float v97; // xmm5_4
  float v98; // xmm1_4
  float v99; // xmm6_4
  float v100; // xmm4_4
  float v101; // xmm0_4
  float v102; // xmm3_4
  unsigned int v103; // xmm4_4
  float v104; // xmm1_4
  float v105; // xmm2_4
  float v106; // xmm5_4
  float v107; // xmm6_4
  float v108; // xmm0_4
  float v109; // xmm1_4
  float v110; // xmm4_4
  float v111; // xmm3_4
  float v112; // xmm2_4
  float v113; // xmm5_4
  float v114; // xmm3_4
  float v115; // xmm2_4
  float v116; // xmm5_4
  float v117; // xmm1_4
  float v118; // xmm6_4
  float v119; // xmm4_4
  float v120; // xmm0_4
  float v121; // xmm3_4
  unsigned int v122; // xmm4_4
  float v123; // xmm1_4
  float v124; // xmm2_4
  float v125; // xmm5_4
  float v126; // xmm6_4
  float v127; // xmm0_4
  float v128; // xmm1_4
  float v129; // xmm4_4
  float v130; // xmm3_4
  float v131; // xmm2_4
  float v132; // xmm5_4
  int *v133; // rbx
  int v134; // edi
  __int64 v135; // r12
  float v136; // xmm6_4
  _DWORD *v137; // rcx
  __int64 v138; // r13
  int v139; // r15d
  __int64 v140; // rdx
  float v141; // xmm1_4
  float v142; // xmm7_4
  float v143; // xmm2_4
  float v144; // xmm3_4
  float v145; // xmm2_4
  float v146; // xmm3_4
  float v147; // xmm4_4
  float v148; // xmm5_4
  float v149; // xmm7_4
  float v150; // xmm0_4
  float v151; // xmm2_4
  float v152; // xmm0_4
  unsigned int v153; // xmm5_4
  float v154; // xmm1_4
  float v155; // xmm3_4
  float v156; // xmm1_4
  float v157; // xmm7_4
  float v158; // xmm2_4
  float v159; // xmm3_4
  float v160; // xmm4_4
  float v161; // xmm5_4
  float v162; // xmm1_4
  float v163; // xmm0_4
  float v164; // xmm2_4
  float v165; // xmm1_4
  float v166; // xmm3_4
  float v167; // xmm7_4
  float v168; // xmm5_4
  float v169; // xmm1_4
  int v170; // eax
  unsigned int v171; // xmm0_4
  float v172; // xmm1_4
  int v173; // esi
  float v174; // xmm0_4
  int *v175; // rdi
  int v176; // eax
  float v177; // xmm0_4
  float v178; // xmm1_4
  __int64 v179; // rcx
  int v180; // eax
  int *v181; // rcx
  _DWORD *v182; // r15
  __int64 v183; // r10
  int v184; // r9d
  __int64 v185; // r8
  float v186; // xmm2_4
  float v187; // xmm3_4
  float v188; // xmm4_4
  __int64 v189; // rdx
  int v190; // xmm1_4
  float v191; // xmm0_4
  float v192; // xmm1_4
  float v193; // xmm0_4
  float v194; // xmm1_4
  float v195; // xmm0_4
  float v196; // xmm1_4
  _DWORD *v197; // rcx
  int v198; // r8d
  __int64 v199; // rdx
  _DWORD *v200; // rcx
  float v201; // xmm6_4
  float v202; // xmm7_4
  float v203; // xmm2_4
  float v204; // xmm8_4
  float v205; // xmm3_4
  float v206; // xmm10_4
  float v207; // xmm9_4
  float v208; // xmm11_4
  float v209; // xmm5_4
  float v210; // xmm5_4
  float v211; // xmm4_4
  float v212; // xmm3_4
  float v213; // xmm0_4
  float v214; // xmm1_4
  float v215; // xmm2_4
  float v216; // xmm2_4
  float v217; // xmm0_4
  float v218; // xmm4_4
  float v219; // xmm2_4
  float v220; // xmm3_4
  float v221; // xmm0_4
  float v222; // xmm1_4
  float v223; // xmm0_4
  float v224; // xmm3_4
  float v225; // xmm1_4
  float v226; // xmm3_4
  float v227; // xmm6_4
  float v228; // xmm0_4
  float v229; // xmm2_4
  float v230; // xmm1_4
  float v231; // xmm3_4
  float v232; // xmm1_4
  float v233; // xmm0_4
  float v234; // xmm6_4
  float v235; // xmm2_4
  float v236; // xmm0_4
  float v237; // xmm1_4
  float v238; // xmm1_4
  __int64 v239; // rdx
  signed int v240; // r8d
  float v241; // xmm6_4
  __int64 v242; // rcx
  __int64 v243; // rax
  __int64 v244; // r13
  __int64 v245; // r15
  int v246; // r14d
  int v247; // edi
  __int64 v248; // rsi
  int v249; // r9d
  __int64 v250; // r8
  __int64 v251; // rcx
  float v252; // xmm1_4
  __int64 v253; // rax
  __int64 v254; // rcx
  unsigned int v255; // xmm0_4
  unsigned int v256; // xmm1_4
  float v257; // xmm3_4
  float v258; // xmm4_4
  float v259; // xmm5_4
  float v260; // xmm0_4
  float v261; // xmm3_4
  float v262; // xmm4_4
  float v263; // xmm5_4
  float v264; // xmm0_4
  bool v265; // zf
  float v266; // xmm1_4
  __int64 v267; // rsi
  int v268; // ecx
  int v269; // edx
  float v270; // xmm0_4
  int v271; // ecx
  int v272; // r13d
  float *v273; // rsi
  int v274; // r14d
  __int64 v275; // rdi
  __int64 v276; // r15
  __int64 v277; // rax
  int v278; // eax
  __int64 v279; // rcx
  int v280; // eax
  int v281; // eax
  _DWORD *v282; // rsi
  int *v283; // r13
  __int64 v284; // r8
  int v285; // r9d
  __int64 v286; // r10
  float v287; // xmm1_4
  __int64 v288; // rdx
  float v289; // xmm1_4
  _DWORD *v290; // rcx
  int v291; // r8d
  _DWORD *v292; // rcx
  __int64 v293; // rdx
  float v294; // xmm1_4
  float v295; // xmm1_4
  signed int v296; // r15d
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // rsi
  __int64 v300; // rcx
  BOOL v301; // edi
  int v302; // eax
  __int64 v303; // r10
  int v304; // eax
  float v305; // xmm1_4
  int v306; // ecx
  unsigned int v307; // xmm0_4
  signed int v308; // r8d
  __int64 v309; // rcx
  __int64 v310; // rax
  __int64 v311; // rbx
  __int64 v312; // r12
  __int64 v313; // r15
  int v314; // edi
  __int64 v315; // rsi
  int v316; // r9d
  __int64 v317; // r8
  __int64 v318; // rcx
  float v319; // xmm1_4
  __int64 v320; // rax
  __int64 v321; // rcx
  unsigned int v322; // xmm0_4
  unsigned int v323; // xmm1_4
  float v324; // xmm3_4
  float v325; // xmm4_4
  float v326; // xmm5_4
  float v327; // xmm0_4
  float v328; // xmm8_4
  float v329; // xmm9_4
  int v330; // ecx
  __int64 v332; // [rsp-20h] [rbp-1B50h] BYREF
  unsigned int *v333; // [rsp+0h] [rbp-1B30h]
  float *v334; // [rsp+8h] [rbp-1B28h]
  unsigned __int64 *v335; // [rsp+10h] [rbp-1B20h]
  __int64 v336; // [rsp+18h] [rbp-1B18h]
  __int64 v337; // [rsp+20h] [rbp-1B10h]
  int v338; // [rsp+30h] [rbp-1B00h]
  int v339; // [rsp+34h] [rbp-1AFCh]
  float v340; // [rsp+38h] [rbp-1AF8h] BYREF
  __int64 v341; // [rsp+40h] [rbp-1AF0h] BYREF
  float v342; // [rsp+48h] [rbp-1AE8h]
  float v343; // [rsp+50h] [rbp-1AE0h]
  float v344; // [rsp+58h] [rbp-1AD8h] BYREF
  float v345; // [rsp+5Ch] [rbp-1AD4h]
  float v346; // [rsp+1AB0h] [rbp-80h]
  unsigned __int64 v347; // [rsp+1AB8h] [rbp-78h] BYREF
  float v348; // [rsp+1AC0h] [rbp-70h]
  signed __int64 v349; // [rsp+1AC8h] [rbp-68h]
  float v350; // [rsp+1AD0h] [rbp-60h] BYREF
  float v351; // [rsp+1AD4h] [rbp-5Ch]
  float v352; // [rsp+1AD8h] [rbp-58h]
  __int64 v353; // [rsp+1AE0h] [rbp-50h] BYREF
  float v354; // [rsp+1AE8h] [rbp-48h] BYREF
  float v355; // [rsp+1AECh] [rbp-44h]
  signed __int64 v356; // [rsp+1AF0h] [rbp-40h]
  float v357; // [rsp+1AF8h] [rbp-38h] BYREF
  float v358; // [rsp+1AFCh] [rbp-34h]
  float v359; // [rsp+1B00h] [rbp-30h]
  float v360; // [rsp+1B08h] [rbp-28h] BYREF
  float v361; // [rsp+1B0Ch] [rbp-24h]
  float v362; // [rsp+1B10h] [rbp-20h]
  unsigned __int64 v363; // [rsp+1B14h] [rbp-1Ch] BYREF
  float v364; // [rsp+1B1Ch] [rbp-14h]
  __int64 v365; // [rsp+1B30h] [rbp+0h]
  __int64 v366; // [rsp+1B38h] [rbp+8h]
  signed __int64 v367; // [rsp+1B40h] [rbp+10h]
  int *v368; // [rsp+1B48h] [rbp+18h]
  __int64 v369; // [rsp+1B50h] [rbp+20h]
  signed __int64 v370; // [rsp+1B58h] [rbp+28h]
  signed __int64 v371; // [rsp+1B60h] [rbp+30h]
  __int64 v372; // [rsp+1B68h] [rbp+38h]
  __int64 v373; // [rsp+1B70h] [rbp+40h]
  float v374; // [rsp+1B78h] [rbp+48h] BYREF
  float v375; // [rsp+1B7Ch] [rbp+4Ch]
  float v376; // [rsp+1B80h] [rbp+50h] BYREF
  float v377; // [rsp+1B84h] [rbp+54h] BYREF
  float v378; // [rsp+1B88h] [rbp+58h]
  float v379; // [rsp+1B8Ch] [rbp+5Ch]
  float v380[3]; // [rsp+1B90h] [rbp+60h] BYREF
  float v381[3]; // [rsp+1B9Ch] [rbp+6Ch] BYREF
  _DWORD v382[4]; // [rsp+1BA8h] [rbp+78h]
  _DWORD v383[6]; // [rsp+1BB8h] [rbp+88h]
  int v384; // [rsp+1BD0h] [rbp+A0h] BYREF
  int v385; // [rsp+1BD4h] [rbp+A4h] BYREF
  _BYTE v387[4]; // [rsp+1BDCh] [rbp+ACh] BYREF
  _BYTE v388[4]; // [rsp+1BE0h] [rbp+B0h] BYREF
  _BYTE v389[4]; // [rsp+1BE4h] [rbp+B4h] BYREF
  char v390; // [rsp+1BE8h] [rbp+B8h] BYREF
  _BYTE v391[4]; // [rsp+1BECh] [rbp+BCh] BYREF
  _BYTE v392[4]; // [rsp+1BF0h] [rbp+C0h] BYREF
  _BYTE v393[4]; // [rsp+1BF4h] [rbp+C4h] BYREF
  char v394; // [rsp+1BF8h] [rbp+C8h] BYREF
  _BYTE v395[6100]; // [rsp+1BFCh] [rbp+CCh] BYREF
  __int64 v396; // [rsp+33D0h] [rbp+18A0h]

  v9 = a6;
  v10 = a7;
  v12 = a1;
  v13 = 5210LL * a4;
  v368 = a1;
  v14 = a3;
  v338 = a3;
  v15 = 0;
  v339 = a4;
  v369 = v13 * 4;
  v16 = (int)dword_140404A6C[45072 * dword_140404A6C[v13 + 129716710] + 335170684];
  v353 = v16;
  if ( v16 < 4 )
  {
    if ( v16 <= 0 )
      goto LABEL_9;
    v20 = *a7;
    v17 = *a6;
    v21 = a7[1];
    v18 = a6[1];
    v22 = a7[2];
    v19 = a6[2];
    v73 = (int)dword_140404A6C[v13 + 129716710];
  }
  else
  {
    v17 = *a6;
    v18 = a6[1];
    v19 = a6[2];
    v20 = *a7;
    v21 = a7[1];
    v22 = a7[2];
    v23 = a7[3];
    v24 = a7[4];
    v25 = a7[5];
    v365 = (int)dword_140404A6C[v13 + 129716710];
    v370 = &v395[-180288 * v365] - (_BYTE *)&dword_140404A6C[335170686];
    v26 = v370;
    v367 = (char *)(&v384 - 45072 * v365) - (char *)&dword_140404A6C[335170686];
    v27 = (float *)&dword_140404A6C[45072 * v365 + 335170686];
    v28 = (char *)(&v385 - 45072 * v365) - (char *)&dword_140404A6C[335170686];
    v371 = &v387[-180288 * v365] - (_BYTE *)&dword_140404A6C[335170686];
    v29 = &v387[-180288 * v365 - 4] - (_BYTE *)&dword_140404A6C[335170686];
    v30 = &v388[-180288 * v365] - (_BYTE *)&dword_140404A6C[335170686];
    v31 = &v389[-180288 * v365] - (_BYTE *)&dword_140404A6C[335170686];
    v32 = &v391[-180288 * v365] - (_BYTE *)&dword_140404A6C[335170686];
    v356 = &v390 - 180288 * v365 - (char *)&dword_140404A6C[335170686];
    v33 = &v392[-180288 * v365] - (_BYTE *)&dword_140404A6C[335170686];
    v34 = &v394 - 180288 * v365 - (char *)&dword_140404A6C[335170686];
    v35 = v367;
    v36 = ((unsigned __int64)(v16 - 4) >> 2) + 1;
    v349 = &v393[-180288 * v365] - (_BYTE *)&dword_140404A6C[335170686];
    v366 = 4 * v36;
    v37 = v371;
    do
    {
      v38 = *(v27 - 1);
      v39 = v356;
      v40 = (float)(v38 * v20) + v17;
      v41 = v27[1] * a7[8];
      v42 = (float)((float)(v38 * v22) + v19) + (float)(*v27 * v25);
      v43 = v27[3];
      v44 = (float)((float)((float)(*(v27 - 1) * v21) + v18) + (float)(*v27 * v24)) + (float)(v27[1] * a7[7]);
      *(float *)((char *)v27 + v35) = (float)(v40 + (float)(*v27 * v23)) + (float)(v27[1] * a7[6]);
      v45 = v42 + v41;
      v46 = v27[4];
      *(float *)((char *)v27 + v28) = v44;
      v47 = v46 * a7[6];
      *(float *)((char *)v27 + v29) = v45;
      v48 = v27[2];
      v49 = v43 * v24;
      v50 = (float)((float)((float)(v48 * v20) + v17) + (float)(v43 * v23)) + v47;
      v51 = v46 * a7[7];
      v52 = v46 * a7[8];
      v53 = (float)((float)(v48 * v22) + v19) + (float)(v43 * v25);
      v54 = v27[6];
      v55 = (float)((float)((float)(v27[2] * v21) + v18) + v49) + v51;
      *(float *)((char *)v27 + v37) = v50;
      v56 = v53 + v52;
      v57 = v27[7];
      *(float *)((char *)v27 + v30) = v55;
      v58 = v57 * a7[6];
      *(float *)((char *)v27 + v31) = v56;
      v59 = v27[5];
      *(float *)((char *)v27 + v39) = (float)((float)((float)(v59 * v20) + v17) + (float)(v54 * v23)) + v58;
      v60 = v57 * a7[7];
      v61 = v349;
      v62 = v57 * a7[8];
      v63 = v27[10];
      v64 = (float)((float)((float)(v59 * v21) + v18) + (float)(v54 * v24)) + v60;
      v65 = v27[9];
      *(float *)((char *)v27 + v32) = v64;
      v66 = (float)((float)((float)(v59 * v22) + v19) + (float)(v54 * v25)) + v62;
      v67 = v27[8];
      *(float *)((char *)v27 + v33) = v66;
      v68 = (float)((float)(v67 * v21) + v18) + (float)(v65 * v24);
      *(float *)&v341 = (float)((float)(v67 * v20) + v17) + (float)(v65 * v23);
      v69 = (float)((float)(v67 * v22) + v19) + (float)(v65 * v25);
      v70 = v63 * a7[7];
      v71 = (float)(v63 * a7[6]) + *(float *)&v341;
      v72 = (float)(v63 * a7[8]) + v69;
      *((float *)&v341 + 1) = v68;
      v342 = v69;
      *(float *)((char *)v27 + v61) = v71;
      v12 = v368;
      *(float *)((char *)v27 + v34) = v70 + v68;
      *(float *)((char *)v27 + v26) = v72;
      v27 += 12;
      --v36;
    }
    while ( v36 );
    v16 = v353;
    v15 = v366;
    v9 = a6;
    if ( v366 >= v353 )
      goto LABEL_8;
    v73 = v365;
  }
  v74 = a7[3];
  v75 = a7[4];
  v76 = a7[5];
  v77 = a7[6];
  v78 = (char *)(&v384 - 45072 * v73);
  v79 = (float *)&dword_140404A6C[45072 * v73 + 335170686 + 3 * v15];
  v80 = (char *)(&v385 - 45072 * v73) - (char *)&dword_140404A6C[335170686];
  v81 = &v387[-180288 * v73 - 4] - (_BYTE *)&dword_140404A6C[335170686];
  v82 = v78 - (char *)&dword_140404A6C[335170686];
  v83 = v16 - v15;
  do
  {
    v84 = v79[1];
    v85 = *(v79 - 1);
    v86 = *v79 * v76;
    v87 = (float)((float)(v85 * v21) + v18) + (float)(*v79 * v75);
    *(float *)&v341 = (float)((float)(v85 * v20) + v17) + (float)(*v79 * v74);
    v88 = (float)((float)(v85 * v22) + v19) + v86;
    v89 = v84 * a7[7];
    v90 = (float)(v84 * v77) + *(float *)&v341;
    v91 = (float)(v84 * a7[8]) + v88;
    *((float *)&v341 + 1) = v87;
    v342 = v88;
    *(float *)((char *)v79 + v82) = v90;
    *(float *)((char *)v79 + v81) = v91;
    *(float *)((char *)v79 + v80) = v89 + v87;
    v79 += 3;
    --v83;
  }
  while ( v83 );
LABEL_8:
  v14 = v338;
LABEL_9:
  v92 = v12 + 2442;
  v93 = 32;
  do
  {
    v94 = v339;
    if ( *(v92 - 7) > 0 && *(v92 - 5) == v14 + 1 && *(v92 - 4) == v339 && !*(v92 - 3) )
    {
      v95 = *((float *)v92 - 2) - *a8;
      v96 = *(float *)v92 - a8[2];
      *((float *)&v341 + 1) = *((float *)v92 - 1) - a8[1];
      v97 = *((float *)&v341 + 1) * a9[4];
      v98 = v96 * a9[2];
      v99 = *((float *)&v341 + 1) * a9[7];
      v100 = (float)(*((float *)&v341 + 1) * a9[1]) + (float)(v95 * *a9);
      *(float *)&v341 = v95;
      v101 = v95 * a9[3];
      v102 = v95 * a9[6];
      *(float *)&v103 = v100 + v98;
      v342 = v96;
      v104 = v96 * a9[5];
      v105 = v96 * a9[8];
      v344 = *(float *)&v103;
      v106 = (float)(v97 + v101) + v104;
      v107 = (float)(v99 + v102) + v105;
      v108 = (float)(*(float *)&v103 * *a7) + *v9;
      v345 = v106;
      v346 = v107;
      *((float *)v92 - 2) = v108;
      v109 = (float)(*(float *)&v103 * a7[1]) + v9[1];
      *((float *)v92 - 1) = v109;
      v110 = (float)(*(float *)&v103 * a7[2]) + v9[2];
      *(float *)v92 = v110;
      v111 = (float)(v106 * a7[3]) + v108;
      *((float *)v92 - 2) = v111;
      v112 = (float)(v106 * a7[4]) + v109;
      *((float *)v92 - 1) = v112;
      v113 = (float)(v106 * a7[5]) + v110;
      *(float *)v92 = v113;
      *((float *)v92 - 2) = (float)(v107 * a7[6]) + v111;
      *((float *)v92 - 1) = (float)(v107 * a7[7]) + v112;
      *(float *)v92 = (float)(v107 * a7[8]) + v113;
    }
    if ( v92[11] > 0 && v92[13] == v14 + 1 && v92[14] == v94 && !v92[15] )
    {
      v114 = *((float *)v92 + 16) - *a8;
      v115 = *((float *)v92 + 18) - a8[2];
      *((float *)&v341 + 1) = *((float *)v92 + 17) - a8[1];
      v116 = *((float *)&v341 + 1) * a9[4];
      v117 = v115 * a9[2];
      v118 = *((float *)&v341 + 1) * a9[7];
      v119 = (float)(*((float *)&v341 + 1) * a9[1]) + (float)(v114 * *a9);
      *(float *)&v341 = v114;
      v120 = v114 * a9[3];
      v121 = v114 * a9[6];
      *(float *)&v122 = v119 + v117;
      v342 = v115;
      v123 = v115 * a9[5];
      v124 = v115 * a9[8];
      v344 = *(float *)&v122;
      v125 = (float)(v116 + v120) + v123;
      v126 = (float)(v118 + v121) + v124;
      v127 = (float)(*(float *)&v122 * *a7) + *v9;
      v345 = v125;
      v346 = v126;
      *((float *)v92 + 16) = v127;
      v128 = (float)(*(float *)&v122 * a7[1]) + v9[1];
      *((float *)v92 + 17) = v128;
      v129 = (float)(*(float *)&v122 * a7[2]) + v9[2];
      *((float *)v92 + 18) = v129;
      v130 = (float)(v125 * a7[3]) + v127;
      *((float *)v92 + 16) = v130;
      v131 = (float)(v125 * a7[4]) + v128;
      *((float *)v92 + 17) = v131;
      v132 = (float)(v125 * a7[5]) + v129;
      *((float *)v92 + 18) = v132;
      *((float *)v92 + 16) = (float)(v126 * a7[6]) + v130;
      *((float *)v92 + 17) = (float)(v126 * a7[7]) + v131;
      *((float *)v92 + 18) = (float)(v126 * a7[8]) + v132;
    }
    v92 += 36;
    --v93;
  }
  while ( v93 );
  v133 = v368;
  v134 = 0;
  v135 = v369;
  v136 = v340;
  LODWORD(v353) = 0;
  if ( *v368 > 0 )
  {
    while ( 1 )
    {
      v137 = v133 + 2436;
      v138 = 23LL * v134;
      v139 = 0;
      v383[0] = v134;
      v140 = 0;
      v141 = *(float *)&v133[v138 + 19];
      v142 = *(float *)&v133[v138 + 21];
      v143 = *(float *)&v133[v138 + 22];
      v144 = *(float *)&v133[v138 + 23];
      v377 = *(float *)&v133[v138 + 18];
      v379 = *(float *)&v133[v138 + 20];
      v378 = v141;
      while ( (int)*(v137 - 1) <= 0 || *v137 != v134 || v137[1] != v14 + 1 || v137[2] != v94 || v137[3] )
      {
        ++v139;
        ++v140;
        v137 += 18;
        if ( v140 >= 64 )
        {
          v139 = -1;
          break;
        }
      }
      v145 = v143 - a8[1];
      v146 = v144 - a8[2];
      *(float *)&v341 = v142 - *a8;
      *((float *)&v341 + 1) = v145;
      v147 = *(float *)&v341 * a9[3];
      v148 = (float)(*(float *)&v341 * *a9) + (float)(v145 * a9[1]);
      v149 = *(float *)&v341 * a9[6];
      v150 = v145;
      v151 = v145 * a9[7];
      v152 = v150 * a9[4];
      *(float *)&v153 = v148 + (float)(v146 * a9[2]);
      v342 = v146;
      v154 = v146;
      v155 = v146 * a9[8];
      v156 = v154 * a9[5];
      v344 = *(float *)&v153;
      v157 = (float)(v149 + v151) + v155;
      v158 = *(float *)&v153 * *v10;
      v159 = *(float *)&v153 * v10[1];
      v160 = (float)(v147 + v152) + v156;
      v161 = *(float *)&v153 * v10[2];
      v162 = v157 * v10[6];
      v345 = v160;
      v163 = v160 * v10[3];
      v346 = v157;
      v164 = (float)((float)(v158 + *v9) + v163) + v162;
      v165 = v157 * v10[7];
      v166 = (float)(v159 + v9[1]) + (float)(v160 * v10[4]);
      v167 = v157 * v10[8];
      v168 = (float)(v161 + v9[2]) + (float)(v160 * v10[5]);
      v374 = v164;
      v375 = v166 + v165;
      v376 = v168 + v167;
      if ( v139 != -1 )
      {
        v169 = *(float *)&v133[18 * v139 + 2441];
        v374 = *(float *)&v133[18 * v139 + 2440];
        v376 = *(float *)&v133[18 * v139 + 2442];
        v375 = v169;
      }
      v170 = sub_1400E15A0((__int64)&v360, v94, &v374, &v377, 0);
      *(float *)&v366 = v362;
      *(float *)&v365 = v361;
      v355 = v360;
      if ( v170 )
      {
        v347 = v363;
        v348 = v364;
        v136 = (float)((float)((float)(v361 - v378) * *((float *)&v363 + 1))
                     + (float)((float)(v360 - v377) * *(float *)&v363))
             + (float)((float)(v362 - v379) * v364);
        v340 = v136;
        if ( v136 < 0.0625 )
        {
          v340 = 0.0625;
          v136 = 0.0625;
        }
        v341 = 0;
        *(float *)&v171 = v360 - *v9;
        v342 = 0.0;
        v172 = v361 - v9[1];
        v173 = 0;
        v344 = *(float *)&v171;
        v174 = v362 - v9[2];
        v345 = v172;
        v346 = v174;
        if ( v133[v138 + 1] > 0 )
        {
          v175 = &v133[v138 + 2];
          do
          {
            sub_1400052C0(
              *v175,
              a5,
              (unsigned int *)&v341,
              (unsigned int *)&v344,
              (unsigned int *)&v347,
              v136,
              0x3C23D70Au,
              0.0625,
              0x3E800000u);
            v175 += 4;
            ++v173;
          }
          while ( v173 < v133[v138 + 1] );
          v134 = v353;
        }
        if ( v139 == -1 )
        {
          v176 = sub_140048090((__int64)v133);
          v14 = v338;
          v94 = v339;
          v10 = a7;
          if ( v176 != -1 )
          {
            v177 = v374;
            v178 = v375;
            v179 = 9LL * v176;
            v133[2 * v179 + 2435] = 2;
            v133[2 * v179 + 2436] = v134;
            v133[2 * v179 + 2437] = v14 + 1;
            v133[2 * v179 + 2438] = v94;
            v133[2 * v179 + 2439] = 0;
            *(float *)&v133[2 * v179 + 2440] = v177;
            *(float *)&v133[2 * v179 + 2442] = v376;
            *(float *)&v133[2 * v179 + 2441] = v178;
          }
          goto LABEL_46;
        }
        v10 = a7;
        v133[18 * v139 + 2435] = 2;
      }
      v14 = v338;
      v94 = v339;
LABEL_46:
      LODWORD(v353) = ++v134;
      if ( v134 >= *v133 )
        goto LABEL_49;
    }
  }
  *(float *)&v366 = v362;
  *(float *)&v365 = v361;
  v355 = v360;
LABEL_49:
  v180 = v133[1473];
  v343 = v136;
  LODWORD(v356) = 0;
  if ( v180 > 0 )
  {
    v181 = v133 + 1475;
    v370 = (signed __int64)(v133 + 1475);
    v182 = v133 + 2436;
    while ( 2 )
    {
      v183 = *v181;
      v184 = 0;
      v185 = *(v181 - 1);
      v186 = *(float *)&v133[23 * v185 + 21];
      v187 = *(float *)&v133[23 * v185 + 22];
      v188 = *(float *)&v133[23 * v185 + 23];
      v372 = 92 * v185;
      v189 = 0;
      v383[0] = v185;
      v383[1] = v183;
      v373 = 92 * v183;
      v190 = v133[23 * v183 + 23];
      LODWORD(v353) = v133[23 * v183 + 21];
      LODWORD(v371) = v133[23 * v183 + 22];
      v191 = *(float *)&v133[23 * v183 + 18];
      LODWORD(v367) = v190;
      v192 = *(float *)&v133[23 * v183 + 19];
      v380[0] = v191;
      v193 = *(float *)&v133[23 * v183 + 20];
      v380[1] = v192;
      v194 = *(float *)&v133[23 * v185 + 18];
      v380[2] = v193;
      v195 = *(float *)&v133[23 * v185 + 19];
      v381[0] = v194;
      v196 = *(float *)&v133[23 * v185 + 20];
      v197 = v182;
      v381[1] = v195;
      v381[2] = v196;
      while ( (int)*(v197 - 1) <= 0 || *v197 != (_DWORD)v185 || v197[1] != v338 + 1 || v197[2] != v94 || v197[3] )
      {
        ++v184;
        ++v189;
        v197 += 18;
        if ( v189 >= 64 )
        {
          v184 = -1;
          break;
        }
      }
      v198 = 0;
      v382[0] = v184;
      v199 = 0;
      v200 = v182;
      while ( (int)*(v200 - 1) <= 0 || *v200 != (_DWORD)v183 || v200[1] != v338 + 1 || v200[2] != v94 || v200[3] )
      {
        ++v198;
        ++v199;
        v200 += 18;
        if ( v199 >= 64 )
        {
          v198 = -1;
          break;
        }
      }
      v382[1] = v198;
      v201 = *a8;
      v202 = a8[1];
      v203 = v186 - *a8;
      v204 = a8[2];
      v205 = v187 - v202;
      v206 = a9[1];
      v207 = *a9;
      v208 = a9[2];
      v209 = *a9;
      *(float *)&v349 = v188 - v204;
      v210 = (float)((float)(v209 * v203) + (float)(v206 * v205)) + (float)(v208 * (float)(v188 - v204));
      v211 = (float)((float)(v205 * a9[4]) + (float)(v203 * a9[3])) + (float)((float)(v188 - v204) * a9[5]);
      v212 = (float)((float)(v205 * a9[7]) + (float)(v203 * a9[6])) + (float)(*(float *)&v349 * a9[8]);
      v213 = v10[3] * v211;
      v214 = (float)(*v10 * v210) + *v9;
      v215 = v10[6] * v212;
      *(float *)&v349 = v212;
      v216 = v215 + v213;
      v217 = v211 * v10[4];
      v218 = v211 * v10[5];
      v219 = v216 + v214;
      v220 = (float)(v212 * v10[7]) + v217;
      v221 = v10[2] * v210;
      v222 = (float)(v10[1] * v210) + v9[1];
      v374 = v219;
      v223 = v221 + v9[2];
      v224 = v220 + v222;
      v225 = *(float *)&v349 * v10[8];
      *(float *)&v341 = *(float *)&v353 - v201;
      v375 = v224;
      *((float *)&v341 + 1) = *(float *)&v371 - v202;
      v342 = *(float *)&v367 - v204;
      v376 = (float)(v225 + v218) + v223;
      v344 = (float)((float)((float)(*(float *)&v353 - v201) * v207) + (float)((float)(*(float *)&v371 - v202) * v206))
           + (float)((float)(*(float *)&v367 - v204) * v208);
      v226 = (float)((float)((float)(*(float *)&v371 - v202) * a9[4]) + (float)((float)(*(float *)&v353 - v201) * a9[3]))
           + (float)((float)(*(float *)&v367 - v204) * a9[5]);
      v227 = (float)((float)((float)(*(float *)&v371 - v202) * a9[7]) + (float)((float)(*(float *)&v353 - v201) * a9[6]))
           + (float)((float)(*(float *)&v367 - v204) * a9[8]);
      v345 = v226;
      v228 = v226 * v10[3];
      v229 = v226 * v10[4];
      v230 = v227 * v10[6];
      v231 = v226 * v10[5];
      v346 = v227;
      v232 = (float)(v230 + v228) + (float)((float)(*v10 * v344) + *v9);
      v233 = v227 * v10[7];
      v234 = v227 * v10[8];
      v377 = v232;
      v235 = (float)(v229 + v233) + (float)((float)(v10[1] * v344) + v9[1]);
      v236 = v10[2];
      v378 = v235;
      v379 = (float)(v231 + v234) + (float)((float)(v236 * v344) + v9[2]);
      if ( v184 != -1 )
      {
        v237 = *(float *)&v133[18 * v184 + 2441];
        v374 = *(float *)&v133[18 * v184 + 2440];
        v376 = *(float *)&v133[18 * v184 + 2442];
        v375 = v237;
      }
      if ( v198 != -1 )
      {
        v238 = *(float *)&v133[18 * v198 + 2441];
        v377 = *(float *)&v133[18 * v198 + 2440];
        v379 = *(float *)&v133[18 * v198 + 2442];
        v378 = v238;
      }
      v239 = *(int *)((char *)&dword_140404A6C[129716710] + v135);
      v240 = 0;
      v241 = 65536.0;
      v242 = v239;
      v243 = 45072 * v239;
      LODWORD(v353) = 1199570944;
      LODWORD(v349) = 0;
      if ( (int)dword_140404A6C[45072 * v239 + 335173757] <= 0 )
      {
        v136 = v343;
      }
      else
      {
        v244 = 0;
        v245 = 0;
        v246 = 0;
        do
        {
          v247 = 0;
          v248 = 0;
          v249 = dword_140404A6C[v244 + 335173759 + v243];
          if ( v249 > 0 )
          {
            do
            {
              v250 = 45072 * v242;
              ++v247;
              v251 = 3LL * (int)dword_140404A6C[45072 * v242 + 335173760 + v248 + v245];
              v252 = *((float *)&v385 + v251);
              v360 = *((float *)&v384 + v251);
              v362 = *(float *)&v387[4 * v251 - 4];
              v253 = v250 + v245 + v247 % v249;
              v361 = v252;
              v254 = 3LL * (int)dword_140404A6C[v253 + 335173760];
              v255 = *(&v384 + 3 * (int)dword_140404A6C[v253 + 335173760]);
              v256 = *(&v385 + 3 * (int)dword_140404A6C[v253 + 335173760]);
              v335 = &v363;
              v334 = &v360;
              v363 = __PAIR64__(v256, v255);
              v364 = *(float *)&v387[4 * v254 - 4];
              if ( sub_140184710(&v350, &v374, &v377, v380, v381, &v360, (float *)&v363)
                && sub_1400D6890(&v350, &v357, &v354, &v374, &v377, &v360, (float *)&v363, 64.0)
                && v241 > v354 )
              {
                v246 = 1;
                v257 = v350 - v357;
                v355 = v357;
                v258 = v351 - v358;
                *(float *)&v365 = v358;
                v259 = v352 - v359;
                *(float *)&v366 = v359;
                v260 = fsqrt((float)((float)(v258 * v258) + (float)(v257 * v257)) + (float)(v259 * v259));
                v343 = v260;
                v340 = v260;
                if ( v260 == 0.0 )
                {
                  v347 = 0;
                  v348 = 0.0;
                }
                else
                {
                  *(float *)&v347 = (float)(1.0 / v260) * v257;
                  *((float *)&v347 + 1) = (float)(1.0 / v260) * v258;
                  v348 = (float)(1.0 / v260) * v259;
                }
                if ( sub_1400D6890(&v350, &v357, &v354, v380, v381, &v360, (float *)&v363, 64.0) )
                {
                  v261 = v357 - v350;
                  v262 = v358 - v351;
                  v263 = v359 - v352;
                  *(float *)&v341 = v357 - v350;
                  *((float *)&v341 + 1) = v358 - v351;
                  v342 = v359 - v352;
                  v264 = fsqrt((float)((float)(v262 * v262) + (float)(v261 * v261)) + (float)(v263 * v263));
                  v343 = v264;
                  v340 = v264;
                  if ( v264 == 0.0 )
                  {
                    v347 = 0;
                    v348 = 0.0;
                  }
                  else
                  {
                    *(float *)&v347 = (float)(1.0 / v264) * v261;
                    *((float *)&v347 + 1) = (float)(1.0 / v264) * v262;
                    v348 = (float)(1.0 / v264) * v263;
                  }
                }
                v241 = v354;
              }
              v239 = *(int *)((char *)&dword_140404A6C[129716710] + v135);
              ++v248;
              v242 = v239;
              v249 = dword_140404A6C[45072 * v239 + 335173759 + v244];
            }
            while ( v247 < v249 );
            v240 = v349;
            *(float *)&v353 = v241;
          }
          ++v240;
          v242 = (int)v239;
          v243 = 45072LL * (int)v239;
          v245 += 26;
          LODWORD(v349) = v240;
          v244 += 26;
        }
        while ( v240 < (int)dword_140404A6C[v243 + 335173757] );
        v133 = v368;
        v265 = v246 == 0;
        v9 = a6;
        v136 = v343;
        if ( !v265 )
        {
          if ( v343 < 0.0625 )
          {
            v343 = 0.0625;
            v136 = 0.0625;
            v340 = 0.0625;
          }
          v266 = *(float *)&v365 - a6[1];
          v267 = v373;
          v268 = v368[(unsigned __int64)v372 / 4 + 2];
          v269 = a5;
          v344 = v355 - *a6;
          v270 = *(float *)&v366 - a6[2];
          v345 = v266;
          v341 = 0;
          v342 = 0.0;
          v346 = v270;
          if ( v268 == v368[(unsigned __int64)v373 / 4 + 2] )
          {
            LODWORD(v337) = 1048576000;
            LODWORD(v336) = 1031798784;
            LODWORD(v335) = 1008981770;
            *(float *)&v334 = v136;
            v333 = (unsigned int *)&v347;
            v271 = *(_DWORD *)(v370 + 8);
          }
          else
          {
            sub_1400052C0(
              v268,
              a5,
              (unsigned int *)&v341,
              (unsigned int *)&v344,
              (unsigned int *)&v347,
              v136,
              0x3C23D70Au,
              0.0625,
              0x3E800000u);
            v269 = a5;
            v271 = *(int *)((char *)v133 + v267 + 8);
            LODWORD(v337) = 1048576000;
            LODWORD(v336) = 1031798784;
            LODWORD(v335) = 1008981770;
            *(float *)&v334 = v136;
            v333 = (unsigned int *)&v347;
          }
          sub_1400052C0(
            v271,
            v269,
            (unsigned int *)&v341,
            (unsigned int *)&v344,
            v333,
            *(float *)&v334,
            (unsigned int)v335,
            *(float *)&v336,
            v337);
          v272 = v339;
          v273 = &v376;
          v274 = v338;
          v275 = 0;
          v276 = 2;
          do
          {
            v277 = (int)v382[v275];
            if ( (_DWORD)v277 == -1 )
            {
              v278 = sub_140048090((__int64)v133);
              v382[v275] = v278;
              if ( v278 != -1 )
              {
                v279 = 9LL * v278;
                v280 = v383[v275];
                v133[2 * v279 + 2435] = 2;
                v133[2 * v279 + 2436] = v280;
                v133[2 * v279 + 2437] = v274 + 1;
                v281 = *((_DWORD *)v273 - 2);
                v133[2 * v279 + 2438] = v272;
                v133[2 * v279 + 2439] = 0;
                v133[2 * v279 + 2440] = v281;
                v133[2 * v279 + 2441] = *((_DWORD *)v273 - 1);
                v133[2 * v279 + 2442] = *(_DWORD *)v273;
              }
            }
            else
            {
              v133[18 * v277 + 2435] = 2;
            }
            ++v275;
            v273 += 3;
            --v276;
          }
          while ( v276 );
          v9 = a6;
        }
        v10 = a7;
        v182 = v133 + 2436;
      }
      v180 = v133[1473];
      v181 = (int *)(v370 + 20);
      LODWORD(v356) = v356 + 1;
      v370 += 20LL;
      if ( (int)v356 < v180 )
      {
        v94 = v339;
        continue;
      }
      break;
    }
  }
  LODWORD(v349) = 0;
  if ( v180 > 0 )
  {
    v282 = v133 + 2436;
    v283 = v133 + 1477;
    do
    {
      v284 = *(v283 - 3);
      v285 = 0;
      v286 = *(v283 - 2);
      v287 = *(float *)&v133[23 * v284 + 19];
      v374 = *(float *)&v133[23 * v284 + 18];
      v376 = *(float *)&v133[23 * v284 + 20];
      v375 = v287;
      v288 = 0;
      v289 = *(float *)&v133[23 * v286 + 19];
      v377 = *(float *)&v133[23 * v286 + 18];
      v290 = v282;
      v379 = *(float *)&v133[23 * v286 + 20];
      v378 = v289;
      while ( (int)*(v290 - 1) <= 0 || *v290 != (_DWORD)v284 || v290[1] != v338 + 1 || v290[2] != v339 || v290[3] )
      {
        ++v285;
        ++v288;
        v290 += 18;
        if ( v288 >= 64 )
        {
          v285 = -1;
          break;
        }
      }
      v291 = 0;
      v292 = v282;
      v293 = 0;
      while ( (int)*(v292 - 1) <= 0 || *v292 != (_DWORD)v286 || v292[1] != v338 + 1 || v292[2] != v339 || v292[3] )
      {
        ++v291;
        ++v293;
        v292 += 18;
        if ( v293 >= 64 )
        {
          v291 = -1;
          break;
        }
      }
      if ( v285 != -1 )
      {
        v294 = *(float *)&v133[18 * v285 + 2441];
        v374 = *(float *)&v133[18 * v285 + 2440];
        v376 = *(float *)&v133[18 * v285 + 2442];
        v375 = v294;
      }
      if ( v291 != -1 )
      {
        v295 = *(float *)&v133[18 * v291 + 2441];
        v377 = *(float *)&v133[18 * v291 + 2440];
        v379 = *(float *)&v133[18 * v291 + 2442];
        v378 = v295;
      }
      v296 = 0;
      v297 = *(int *)((char *)&dword_140404A6C[129716710] + v135);
      v298 = 180288 * v297;
      if ( (int)dword_140404A6C[45072 * v297 + 335173757] > 0 )
      {
        v299 = 0;
        do
        {
          v300 = v299 + v298;
          v301 = 0;
          if ( *(unsigned int *)((char *)&dword_140404A6C[335173759] + v300) == 3 )
          {
            v302 = sub_140035B70(
                     &v350,
                     (float *)&v347,
                     &v340,
                     &v374,
                     &v377,
                     0.0625,
                     (float *)&v384 + 3 * *(int *)((char *)&dword_140404A6C[335173760] + v300),
                     (float *)&v384 + 3 * *(int *)((char *)&dword_140404A6C[335173761] + v300),
                     (float *)&v384 + 3 * *(int *)((char *)&dword_140404A6C[335173762] + v300));
            v136 = v340;
            v301 = v302 != 0;
          }
          v303 = v299 + 180288LL * *(int *)((char *)&dword_140404A6C[129716710] + v135);
          if ( *(unsigned int *)((char *)&dword_140404A6C[335173759] + v303) == 4
            && (v304 = sub_1400346F0(
                         &v350,
                         (float *)&v347,
                         &v340,
                         &v374,
                         &v377,
                         0.0625,
                         (float *)&v384 + 3 * *(int *)((char *)&dword_140404A6C[335173760] + v303),
                         (float *)&v384 + 3 * *(int *)((char *)&dword_140404A6C[335173761] + v303),
                         (float *)&v384 + 3 * *(int *)((char *)&dword_140404A6C[335173762] + v303),
                         (float *)&v384 + 3 * *(int *)((char *)&dword_140404A6C[335173763] + v303)),
                v136 = v340,
                v304)
            || v301 )
          {
            v305 = v351 - v9[1];
            v306 = *v283;
            LODWORD(v337) = 1048576000;
            LODWORD(v336) = 1031798784;
            LODWORD(v335) = 1008981770;
            v345 = v305;
            v341 = 0;
            v342 = 0.0;
            v136 = 0.0625 - v136;
            *(float *)&v307 = v350 - *v9;
            *(float *)&v334 = v136;
            v340 = v136;
            v333 = (unsigned int *)&v347;
            v344 = *(float *)&v307;
            v346 = v352 - v9[2];
            sub_1400052C0(
              v306,
              a5,
              (unsigned int *)&v341,
              (unsigned int *)&v344,
              (unsigned int *)&v347,
              v136,
              0x3C23D70Au,
              0.0625,
              0x3E800000u);
          }
          v297 = *(int *)((char *)&dword_140404A6C[129716710] + v135);
          ++v296;
          v298 = 180288 * v297;
          v299 += 104;
        }
        while ( v296 < (int)dword_140404A6C[45072 * v297 + 335173757] );
        v133 = v368;
      }
      v308 = 0;
      v309 = (int)v297;
      v310 = 45072LL * (int)v297;
      LODWORD(v356) = 0;
      if ( (int)dword_140404A6C[v310 + 335173757] > 0 )
      {
        v311 = v369;
        v312 = 0;
        v313 = 0;
        do
        {
          v314 = 0;
          v315 = 0;
          v316 = dword_140404A6C[v312 + 335173759 + v310];
          if ( v316 > 0 )
          {
            do
            {
              v317 = 45072 * v309;
              LODWORD(v336) = 1031798784;
              ++v314;
              v318 = 3LL * (int)dword_140404A6C[45072 * v309 + 335173760 + v313 + v315];
              v319 = *((float *)&v385 + v318);
              v360 = *((float *)&v384 + v318);
              v320 = v317 + v314 % v316;
              v362 = *(float *)&v387[4 * v318 - 4];
              v361 = v319;
              v321 = 3LL * (int)dword_140404A6C[v313 + 335173760 + v320];
              v322 = *(&v384 + 3 * (int)dword_140404A6C[v313 + 335173760 + v320]);
              v323 = *(&v385 + 3 * (int)dword_140404A6C[v313 + 335173760 + v320]);
              v335 = &v363;
              v334 = &v360;
              v363 = __PAIR64__(v323, v322);
              v364 = *(float *)&v387[4 * v321 - 4];
              if ( sub_1400D6890(&v350, &v357, (float *)&v353, &v374, &v377, &v360, (float *)&v363, 0.0625) )
              {
                v324 = v350 - v357;
                v325 = v351 - v358;
                v326 = v352 - v359;
                v327 = fsqrt((float)((float)(v325 * v325) + (float)(v324 * v324)) + (float)(v326 * v326));
                if ( v327 == 0.0 )
                {
                  v347 = 0;
                  v348 = 0.0;
                }
                else
                {
                  *(float *)&v347 = (float)(1.0 / v327) * v324;
                  *((float *)&v347 + 1) = (float)(1.0 / v327) * v325;
                  v348 = (float)(1.0 / v327) * v326;
                }
                v328 = v358 - v9[1];
                v329 = v359 - v9[2];
                v330 = *v283;
                v136 = 0.0625 - *(float *)&v353;
                v344 = v357 - *v9;
                v340 = 0.0625 - *(float *)&v353;
                v345 = v328;
                v346 = v329;
                v341 = 0;
                v342 = 0.0;
                sub_1400052C0(
                  v330,
                  a5,
                  (unsigned int *)&v341,
                  (unsigned int *)&v344,
                  (unsigned int *)&v347,
                  0.0625 - *(float *)&v353,
                  0x3C23D70Au,
                  0.0625,
                  0x3E800000u);
              }
              ++v315;
              v297 = *(int *)((char *)&dword_140404A6C[129716710] + v311);
              v309 = v297;
              v316 = dword_140404A6C[45072 * v297 + 335173759 + v312];
            }
            while ( v314 < v316 );
            v308 = v356;
          }
          ++v308;
          v309 = (int)v297;
          v310 = 45072LL * (int)v297;
          v313 += 26;
          LODWORD(v356) = v308;
          v312 += 26;
        }
        while ( v308 < (int)dword_140404A6C[v310 + 335173757] );
        v133 = v368;
        v135 = v369;
      }
      v282 = v133 + 2436;
      v283 += 5;
      LODWORD(v349) = v349 + 1;
    }
    while ( (int)v349 < v133[1473] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v332 ^ v396);
}

