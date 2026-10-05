/* Address: 0x140031350 | Name: sub_140031350 | Size: 7642 bytes */
__int64 __fastcall sub_140031350(
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
  float v103; // xmm4_4
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
  float v122; // xmm4_4
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
  float v153; // xmm5_4
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
  float v171; // xmm0_4
  float v172; // xmm1_4
  int v173; // esi
  float v174; // xmm0_4
  int *v175; // rdi
  int v176; // eax
  float v177; // xmm0_4
  float v178; // xmm1_4
  __int64 v179; // rcx
  __int64 result; // rax
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
  int v191; // xmm0_4
  int v192; // xmm1_4
  int v193; // xmm0_4
  int v194; // xmm1_4
  int v195; // xmm0_4
  int v196; // xmm1_4
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
  int v240; // r8d
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
  int v255; // xmm1_4
  float v256; // xmm0_4
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
  float v269; // xmm0_4
  float *v270; // rsi
  __int64 v271; // rdi
  __int64 v272; // r15
  __int64 v273; // rax
  int v274; // eax
  __int64 v275; // rcx
  int v276; // eax
  int v277; // eax
  _DWORD *v278; // rsi
  int *v279; // r13
  __int64 v280; // r8
  int v281; // r9d
  __int64 v282; // r10
  float v283; // xmm1_4
  __int64 v284; // rdx
  float v285; // xmm1_4
  _DWORD *v286; // rcx
  int v287; // r8d
  _DWORD *v288; // rcx
  __int64 v289; // rdx
  float v290; // xmm1_4
  float v291; // xmm1_4
  int v292; // r15d
  __int64 v293; // rdx
  __int64 v294; // rcx
  __int64 v295; // rsi
  __int64 v296; // rcx
  BOOL v297; // edi
  int v298; // eax
  __int64 v299; // r10
  int v300; // eax
  int v301; // ecx
  float v302; // xmm0_4
  int v303; // r8d
  __int64 v304; // rcx
  __int64 v305; // rbx
  __int64 v306; // r12
  __int64 v307; // r15
  int v308; // edi
  __int64 v309; // rsi
  int v310; // r9d
  __int64 v311; // r8
  __int64 v312; // rcx
  float v313; // xmm1_4
  __int64 v314; // rax
  __int64 v315; // rcx
  int v316; // xmm1_4
  float v317; // xmm0_4
  float v318; // xmm3_4
  float v319; // xmm4_4
  float v320; // xmm5_4
  float v321; // xmm0_4
  float v322; // xmm8_4
  float v323; // xmm9_4
  int v324; // ecx
  int v326; // [rsp+54h] [rbp-ACh]
  float v327; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v328; // [rsp+60h] [rbp-A0h] BYREF
  float v329; // [rsp+68h] [rbp-98h]
  float v330; // [rsp+70h] [rbp-90h]
  float v331; // [rsp+78h] [rbp-88h] BYREF
  float v332; // [rsp+7Ch] [rbp-84h]
  float v333; // [rsp+80h] [rbp-80h]
  __int64 v334; // [rsp+88h] [rbp-78h] BYREF
  float v335; // [rsp+90h] [rbp-70h]
  signed __int64 v336; // [rsp+98h] [rbp-68h]
  float v337; // [rsp+A0h] [rbp-60h] BYREF
  float v338; // [rsp+A4h] [rbp-5Ch]
  float v339; // [rsp+A8h] [rbp-58h]
  __int64 v340; // [rsp+B0h] [rbp-50h] BYREF
  float v341; // [rsp+B8h] [rbp-48h] BYREF
  float v342; // [rsp+BCh] [rbp-44h]
  signed __int64 v343; // [rsp+C0h] [rbp-40h]
  float v344; // [rsp+C8h] [rbp-38h] BYREF
  float v345; // [rsp+CCh] [rbp-34h]
  float v346; // [rsp+D0h] [rbp-30h]
  float v347; // [rsp+D8h] [rbp-28h] BYREF
  float v348; // [rsp+DCh] [rbp-24h]
  float v349; // [rsp+E0h] [rbp-20h]
  __int64 v350; // [rsp+E4h] [rbp-1Ch] BYREF
  float v351; // [rsp+ECh] [rbp-14h]
  __int64 v352; // [rsp+100h] [rbp+0h]
  __int64 v353; // [rsp+108h] [rbp+8h]
  signed __int64 v354; // [rsp+110h] [rbp+10h]
  int *v355; // [rsp+118h] [rbp+18h]
  __int64 v356; // [rsp+120h] [rbp+20h]
  signed __int64 v357; // [rsp+128h] [rbp+28h]
  signed __int64 v358; // [rsp+130h] [rbp+30h]
  __int64 v359; // [rsp+138h] [rbp+38h]
  __int64 v360; // [rsp+140h] [rbp+40h]
  float v361; // [rsp+148h] [rbp+48h] BYREF
  float v362; // [rsp+14Ch] [rbp+4Ch]
  float v363; // [rsp+150h] [rbp+50h] BYREF
  float v364; // [rsp+154h] [rbp+54h] BYREF
  float v365; // [rsp+158h] [rbp+58h]
  float v366; // [rsp+15Ch] [rbp+5Ch]
  _DWORD v367[3]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v368[3]; // [rsp+16Ch] [rbp+6Ch] BYREF
  _DWORD v369[4]; // [rsp+178h] [rbp+78h]
  _DWORD v370[6]; // [rsp+188h] [rbp+88h]
  int v371; // [rsp+1A0h] [rbp+A0h] BYREF
  int v372; // [rsp+1A4h] [rbp+A4h] BYREF
  _BYTE v374[4]; // [rsp+1ACh] [rbp+ACh] BYREF
  _BYTE v375[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v376[4]; // [rsp+1B4h] [rbp+B4h] BYREF
  char v377; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v378[4]; // [rsp+1BCh] [rbp+BCh] BYREF
  _BYTE v379[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v380[4]; // [rsp+1C4h] [rbp+C4h] BYREF
  char v381; // [rsp+1C8h] [rbp+C8h] BYREF
  _BYTE v382[6100]; // [rsp+1CCh] [rbp+CCh] BYREF

  v9 = a6;
  v10 = a7;
  v12 = a1;
  v13 = 5210LL * a4;
  v355 = a1;
  v14 = a3;
  v15 = 0;
  v326 = a4;
  v356 = v13 * 4;
  v16 = dword_143DB3AFC[45072 * dword_16E6A3C64[v13]];
  v340 = v16;
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
    v73 = dword_16E6A3C64[v13];
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
    v352 = dword_16E6A3C64[v13];
    v357 = &v382[-180288 * v352] - (_BYTE *)&unk_143DB3B04;
    v26 = v357;
    v354 = (char *)(&v371 - 45072 * v352) - (char *)&unk_143DB3B04;
    v27 = (float *)((char *)&unk_143DB3B04 + 180288 * v352);
    v28 = (char *)(&v372 - 45072 * v352) - (char *)&unk_143DB3B04;
    v358 = &v374[-180288 * v352] - (_BYTE *)&unk_143DB3B04;
    v29 = &v374[-180288 * v352 - 4] - (_BYTE *)&unk_143DB3B04;
    v30 = &v375[-180288 * v352] - (_BYTE *)&unk_143DB3B04;
    v31 = &v376[-180288 * v352] - (_BYTE *)&unk_143DB3B04;
    v32 = &v378[-180288 * v352] - (_BYTE *)&unk_143DB3B04;
    v343 = &v377 - 180288 * v352 - (char *)&unk_143DB3B04;
    v33 = &v379[-180288 * v352] - (_BYTE *)&unk_143DB3B04;
    v34 = &v381 - 180288 * v352 - (char *)&unk_143DB3B04;
    v35 = v354;
    v36 = ((unsigned __int64)(v16 - 4) >> 2) + 1;
    v336 = &v380[-180288 * v352] - (_BYTE *)&unk_143DB3B04;
    v353 = 4 * v36;
    v37 = v358;
    do
    {
      v38 = *(v27 - 1);
      v39 = v343;
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
      v61 = v336;
      v62 = v57 * a7[8];
      v63 = v27[10];
      v64 = (float)((float)((float)(v59 * v21) + v18) + (float)(v54 * v24)) + v60;
      v65 = v27[9];
      *(float *)((char *)v27 + v32) = v64;
      v66 = (float)((float)((float)(v59 * v22) + v19) + (float)(v54 * v25)) + v62;
      v67 = v27[8];
      *(float *)((char *)v27 + v33) = v66;
      v68 = (float)((float)(v67 * v21) + v18) + (float)(v65 * v24);
      *(float *)&v328 = (float)((float)(v67 * v20) + v17) + (float)(v65 * v23);
      v69 = (float)((float)(v67 * v22) + v19) + (float)(v65 * v25);
      v70 = v63 * a7[7];
      v71 = (float)(v63 * a7[6]) + *(float *)&v328;
      v72 = (float)(v63 * a7[8]) + v69;
      *((float *)&v328 + 1) = v68;
      v329 = v69;
      *(float *)((char *)v27 + v61) = v71;
      v12 = v355;
      *(float *)((char *)v27 + v34) = v70 + v68;
      *(float *)((char *)v27 + v26) = v72;
      v27 += 12;
      --v36;
    }
    while ( v36 );
    v16 = v340;
    v15 = v353;
    v9 = a6;
    if ( v353 >= v340 )
      goto LABEL_8;
    v73 = v352;
  }
  v74 = a7[3];
  v75 = a7[4];
  v76 = a7[5];
  v77 = a7[6];
  v78 = (char *)(&v371 - 45072 * v73);
  v79 = (float *)((char *)&unk_143DB3B04 + 180288 * v73 + 12 * v15);
  v80 = (char *)(&v372 - 45072 * v73) - (char *)&unk_143DB3B04;
  v81 = &v374[-180288 * v73 - 4] - (_BYTE *)&unk_143DB3B04;
  v82 = v78 - (char *)&unk_143DB3B04;
  v83 = v16 - v15;
  do
  {
    v84 = v79[1];
    v85 = *(v79 - 1);
    v86 = *v79 * v76;
    v87 = (float)((float)(v85 * v21) + v18) + (float)(*v79 * v75);
    *(float *)&v328 = (float)((float)(v85 * v20) + v17) + (float)(*v79 * v74);
    v88 = (float)((float)(v85 * v22) + v19) + v86;
    v89 = v84 * a7[7];
    v90 = (float)(v84 * v77) + *(float *)&v328;
    v91 = (float)(v84 * a7[8]) + v88;
    *((float *)&v328 + 1) = v87;
    v329 = v88;
    *(float *)((char *)v79 + v82) = v90;
    *(float *)((char *)v79 + v81) = v91;
    *(float *)((char *)v79 + v80) = v89 + v87;
    v79 += 3;
    --v83;
  }
  while ( v83 );
LABEL_8:
  v14 = a3;
LABEL_9:
  v92 = v12 + 2442;
  v93 = 32;
  do
  {
    v94 = v326;
    if ( *(v92 - 7) > 0 && *(v92 - 5) == v14 + 1 && *(v92 - 4) == v326 && !*(v92 - 3) )
    {
      v95 = *((float *)v92 - 2) - *a8;
      v96 = *(float *)v92 - a8[2];
      *((float *)&v328 + 1) = *((float *)v92 - 1) - a8[1];
      v97 = *((float *)&v328 + 1) * a9[4];
      v98 = v96 * a9[2];
      v99 = *((float *)&v328 + 1) * a9[7];
      v100 = (float)(*((float *)&v328 + 1) * a9[1]) + (float)(v95 * *a9);
      *(float *)&v328 = v95;
      v101 = v95 * a9[3];
      v102 = v95 * a9[6];
      v103 = v100 + v98;
      v329 = v96;
      v104 = v96 * a9[5];
      v105 = v96 * a9[8];
      v331 = v103;
      v106 = (float)(v97 + v101) + v104;
      v107 = (float)(v99 + v102) + v105;
      v108 = (float)(v103 * *a7) + *v9;
      v332 = v106;
      v333 = v107;
      *((float *)v92 - 2) = v108;
      v109 = (float)(v103 * a7[1]) + v9[1];
      *((float *)v92 - 1) = v109;
      v110 = (float)(v103 * a7[2]) + v9[2];
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
    if ( v92[11] > 0 && v92[13] == v14 + 1 && v92[14] == v326 && !v92[15] )
    {
      v114 = *((float *)v92 + 16) - *a8;
      v115 = *((float *)v92 + 18) - a8[2];
      *((float *)&v328 + 1) = *((float *)v92 + 17) - a8[1];
      v116 = *((float *)&v328 + 1) * a9[4];
      v117 = v115 * a9[2];
      v118 = *((float *)&v328 + 1) * a9[7];
      v119 = (float)(*((float *)&v328 + 1) * a9[1]) + (float)(v114 * *a9);
      *(float *)&v328 = v114;
      v120 = v114 * a9[3];
      v121 = v114 * a9[6];
      v122 = v119 + v117;
      v329 = v115;
      v123 = v115 * a9[5];
      v124 = v115 * a9[8];
      v331 = v122;
      v125 = (float)(v116 + v120) + v123;
      v126 = (float)(v118 + v121) + v124;
      v127 = (float)(v122 * *a7) + *v9;
      v332 = v125;
      v333 = v126;
      *((float *)v92 + 16) = v127;
      v128 = (float)(v122 * a7[1]) + v9[1];
      *((float *)v92 + 17) = v128;
      v129 = (float)(v122 * a7[2]) + v9[2];
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
  v133 = v355;
  v134 = 0;
  v135 = v356;
  v136 = v327;
  LODWORD(v340) = 0;
  if ( *v355 > 0 )
  {
    while ( 1 )
    {
      v137 = v133 + 2436;
      v138 = 23LL * v134;
      v139 = 0;
      v370[0] = v134;
      v140 = 0;
      v141 = *(float *)&v133[v138 + 19];
      v142 = *(float *)&v133[v138 + 21];
      v143 = *(float *)&v133[v138 + 22];
      v144 = *(float *)&v133[v138 + 23];
      v364 = *(float *)&v133[v138 + 18];
      v366 = *(float *)&v133[v138 + 20];
      v365 = v141;
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
      *(float *)&v328 = v142 - *a8;
      *((float *)&v328 + 1) = v145;
      v147 = *(float *)&v328 * a9[3];
      v148 = (float)(*(float *)&v328 * *a9) + (float)(v145 * a9[1]);
      v149 = *(float *)&v328 * a9[6];
      v150 = v145;
      v151 = v145 * a9[7];
      v152 = v150 * a9[4];
      v153 = v148 + (float)(v146 * a9[2]);
      v329 = v146;
      v154 = v146;
      v155 = v146 * a9[8];
      v156 = v154 * a9[5];
      v331 = v153;
      v157 = (float)(v149 + v151) + v155;
      v158 = v153 * *v10;
      v159 = v153 * v10[1];
      v160 = (float)(v147 + v152) + v156;
      v161 = v153 * v10[2];
      v162 = v157 * v10[6];
      v332 = v160;
      v163 = v160 * v10[3];
      v333 = v157;
      v164 = (float)((float)(v158 + *v9) + v163) + v162;
      v165 = v157 * v10[7];
      v166 = (float)(v159 + v9[1]) + (float)(v160 * v10[4]);
      v167 = v157 * v10[8];
      v168 = (float)(v161 + v9[2]) + (float)(v160 * v10[5]);
      v361 = v164;
      v362 = v166 + v165;
      v363 = v168 + v167;
      if ( v139 != -1 )
      {
        v169 = *(float *)&v133[18 * v139 + 2441];
        v361 = *(float *)&v133[18 * v139 + 2440];
        v363 = *(float *)&v133[18 * v139 + 2442];
        v362 = v169;
      }
      v170 = sub_140087E20((unsigned int)&v347, v94, (unsigned int)&v361, (unsigned int)&v364, 0);
      *(float *)&v353 = v349;
      *(float *)&v352 = v348;
      v342 = v347;
      if ( v170 )
      {
        v334 = v350;
        v335 = v351;
        v136 = (float)((float)((float)(v348 - v365) * *((float *)&v350 + 1))
                     + (float)((float)(v347 - v364) * *(float *)&v350))
             + (float)((float)(v349 - v366) * v351);
        v327 = v136;
        if ( v136 < 0.0625 )
        {
          v327 = 0.0625;
          v136 = 0.0625;
        }
        v328 = 0;
        v171 = v347 - *v9;
        v329 = 0.0;
        v172 = v348 - v9[1];
        v173 = 0;
        v331 = v171;
        v174 = v349 - v9[2];
        v332 = v172;
        v333 = v174;
        if ( v133[v138 + 1] > 0 )
        {
          v175 = &v133[v138 + 2];
          do
          {
            sub_140002C40(*v175, a5, &v328, &v331, &v334, v136, 1008981770, 0.0625, 1048576000);
            v175 += 4;
            ++v173;
          }
          while ( v173 < v133[v138 + 1] );
          v134 = v340;
        }
        if ( v139 == -1 )
        {
          v176 = sub_140033130(v133);
          v14 = a3;
          v94 = v326;
          v10 = a7;
          if ( v176 != -1 )
          {
            v177 = v361;
            v178 = v362;
            v179 = 9LL * v176;
            v133[2 * v179 + 2435] = 2;
            v133[2 * v179 + 2436] = v134;
            v133[2 * v179 + 2437] = a3 + 1;
            v133[2 * v179 + 2438] = v326;
            v133[2 * v179 + 2439] = 0;
            *(float *)&v133[2 * v179 + 2440] = v177;
            *(float *)&v133[2 * v179 + 2442] = v363;
            *(float *)&v133[2 * v179 + 2441] = v178;
          }
          goto LABEL_46;
        }
        v10 = a7;
        v133[18 * v139 + 2435] = 2;
      }
      v14 = a3;
      v94 = v326;
LABEL_46:
      LODWORD(v340) = ++v134;
      if ( v134 >= *v133 )
        goto LABEL_49;
    }
  }
  *(float *)&v353 = v349;
  *(float *)&v352 = v348;
  v342 = v347;
LABEL_49:
  result = (unsigned int)v133[1473];
  v330 = v136;
  LODWORD(v343) = 0;
  if ( (int)result > 0 )
  {
    v181 = v133 + 1475;
    v357 = (signed __int64)(v133 + 1475);
    v182 = v133 + 2436;
    while ( 2 )
    {
      v183 = *v181;
      v184 = 0;
      v185 = *(v181 - 1);
      v186 = *(float *)&v133[23 * v185 + 21];
      v187 = *(float *)&v133[23 * v185 + 22];
      v188 = *(float *)&v133[23 * v185 + 23];
      v359 = 92 * v185;
      v189 = 0;
      v370[0] = v185;
      v370[1] = v183;
      v360 = 92 * v183;
      v190 = v133[23 * v183 + 23];
      LODWORD(v340) = v133[23 * v183 + 21];
      LODWORD(v358) = v133[23 * v183 + 22];
      v191 = v133[23 * v183 + 18];
      LODWORD(v354) = v190;
      v192 = v133[23 * v183 + 19];
      v367[0] = v191;
      v193 = v133[23 * v183 + 20];
      v367[1] = v192;
      v194 = v133[23 * v185 + 18];
      v367[2] = v193;
      v195 = v133[23 * v185 + 19];
      v368[0] = v194;
      v196 = v133[23 * v185 + 20];
      v197 = v182;
      v368[1] = v195;
      v368[2] = v196;
      while ( (int)*(v197 - 1) <= 0 || *v197 != (_DWORD)v185 || v197[1] != a3 + 1 || v197[2] != v94 || v197[3] )
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
      v369[0] = v184;
      v199 = 0;
      v200 = v182;
      while ( (int)*(v200 - 1) <= 0 || *v200 != (_DWORD)v183 || v200[1] != a3 + 1 || v200[2] != v94 || v200[3] )
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
      v369[1] = v198;
      v201 = *a8;
      v202 = a8[1];
      v203 = v186 - *a8;
      v204 = a8[2];
      v205 = v187 - v202;
      v206 = a9[1];
      v207 = *a9;
      v208 = a9[2];
      v209 = *a9;
      *(float *)&v336 = v188 - v204;
      v210 = (float)((float)(v209 * v203) + (float)(v206 * v205)) + (float)(v208 * (float)(v188 - v204));
      v211 = (float)((float)(v205 * a9[4]) + (float)(v203 * a9[3])) + (float)((float)(v188 - v204) * a9[5]);
      v212 = (float)((float)(v205 * a9[7]) + (float)(v203 * a9[6])) + (float)(*(float *)&v336 * a9[8]);
      v213 = v10[3] * v211;
      v214 = (float)(*v10 * v210) + *v9;
      v215 = v10[6] * v212;
      *(float *)&v336 = v212;
      v216 = v215 + v213;
      v217 = v211 * v10[4];
      v218 = v211 * v10[5];
      v219 = v216 + v214;
      v220 = (float)(v212 * v10[7]) + v217;
      v221 = v10[2] * v210;
      v222 = (float)(v10[1] * v210) + v9[1];
      v361 = v219;
      v223 = v221 + v9[2];
      v224 = v220 + v222;
      v225 = *(float *)&v336 * v10[8];
      *(float *)&v328 = *(float *)&v340 - v201;
      v362 = v224;
      *((float *)&v328 + 1) = *(float *)&v358 - v202;
      v329 = *(float *)&v354 - v204;
      v363 = (float)(v225 + v218) + v223;
      v331 = (float)((float)((float)(*(float *)&v340 - v201) * v207) + (float)((float)(*(float *)&v358 - v202) * v206))
           + (float)((float)(*(float *)&v354 - v204) * v208);
      v226 = (float)((float)((float)(*(float *)&v358 - v202) * a9[4]) + (float)((float)(*(float *)&v340 - v201) * a9[3]))
           + (float)((float)(*(float *)&v354 - v204) * a9[5]);
      v227 = (float)((float)((float)(*(float *)&v358 - v202) * a9[7]) + (float)((float)(*(float *)&v340 - v201) * a9[6]))
           + (float)((float)(*(float *)&v354 - v204) * a9[8]);
      v332 = v226;
      v228 = v226 * v10[3];
      v229 = v226 * v10[4];
      v230 = v227 * v10[6];
      v231 = v226 * v10[5];
      v333 = v227;
      v232 = (float)(v230 + v228) + (float)((float)(*v10 * v331) + *v9);
      v233 = v227 * v10[7];
      v234 = v227 * v10[8];
      v364 = v232;
      v235 = (float)(v229 + v233) + (float)((float)(v10[1] * v331) + v9[1]);
      v236 = v10[2];
      v365 = v235;
      v366 = (float)(v231 + v234) + (float)((float)(v236 * v331) + v9[2]);
      if ( v184 != -1 )
      {
        v237 = *(float *)&v133[18 * v184 + 2441];
        v361 = *(float *)&v133[18 * v184 + 2440];
        v363 = *(float *)&v133[18 * v184 + 2442];
        v362 = v237;
      }
      if ( v198 != -1 )
      {
        v238 = *(float *)&v133[18 * v198 + 2441];
        v364 = *(float *)&v133[18 * v198 + 2440];
        v366 = *(float *)&v133[18 * v198 + 2442];
        v365 = v238;
      }
      v239 = *(int *)((char *)dword_16E6A3C64 + v135);
      v240 = 0;
      v241 = 65536.0;
      v242 = v239;
      v243 = 45072 * v239;
      LODWORD(v340) = 1199570944;
      LODWORD(v336) = 0;
      if ( dword_143DB6B00[45072 * v239] <= 0 )
      {
        v136 = v330;
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
          v249 = *(_DWORD *)((char *)&unk_143DB6B08 + v244 + v243 * 4);
          if ( v249 > 0 )
          {
            do
            {
              v250 = 45072 * v242;
              ++v247;
              v251 = 3LL * dword_143DB6B0C[45072 * v242 + v248 + v245];
              v252 = *((float *)&v372 + v251);
              v347 = *((float *)&v371 + v251);
              v349 = *(float *)&v374[4 * v251 - 4];
              v253 = v250 + v245 + v247 % v249;
              v348 = v252;
              v254 = 3LL * dword_143DB6B0C[v253];
              v255 = *(&v372 + 3 * dword_143DB6B0C[v253]);
              LODWORD(v350) = *(&v371 + 3 * dword_143DB6B0C[v253]);
              v256 = *(float *)&v374[4 * v254 - 4];
              HIDWORD(v350) = v255;
              v351 = v256;
              if ( (unsigned int)sub_1400E1F60(
                                   (unsigned int)&v337,
                                   (unsigned int)&v361,
                                   (unsigned int)&v364,
                                   (unsigned int)v367,
                                   (__int64)v368,
                                   (__int64)&v347,
                                   (__int64)&v350)
                && (unsigned int)sub_14007D360(
                                   (unsigned int)&v337,
                                   (unsigned int)&v344,
                                   (unsigned int)&v341,
                                   (unsigned int)&v361,
                                   (__int64)&v364,
                                   (__int64)&v347,
                                   (__int64)&v350,
                                   1115684864)
                && v241 > v341 )
              {
                v246 = 1;
                v257 = v337 - v344;
                v342 = v344;
                v258 = v338 - v345;
                *(float *)&v352 = v345;
                v259 = v339 - v346;
                *(float *)&v353 = v346;
                v260 = fsqrt((float)((float)(v258 * v258) + (float)(v257 * v257)) + (float)(v259 * v259));
                v330 = v260;
                v327 = v260;
                if ( v260 == 0.0 )
                {
                  v334 = 0;
                  v335 = 0.0;
                }
                else
                {
                  *(float *)&v334 = (float)(1.0 / v260) * v257;
                  *((float *)&v334 + 1) = (float)(1.0 / v260) * v258;
                  v335 = (float)(1.0 / v260) * v259;
                }
                if ( (unsigned int)sub_14007D360(
                                     (unsigned int)&v337,
                                     (unsigned int)&v344,
                                     (unsigned int)&v341,
                                     (unsigned int)v367,
                                     (__int64)v368,
                                     (__int64)&v347,
                                     (__int64)&v350,
                                     1115684864) )
                {
                  v261 = v344 - v337;
                  v262 = v345 - v338;
                  v263 = v346 - v339;
                  *(float *)&v328 = v344 - v337;
                  *((float *)&v328 + 1) = v345 - v338;
                  v329 = v346 - v339;
                  v264 = fsqrt((float)((float)(v262 * v262) + (float)(v261 * v261)) + (float)(v263 * v263));
                  v330 = v264;
                  v327 = v264;
                  if ( v264 == 0.0 )
                  {
                    v334 = 0;
                    v335 = 0.0;
                  }
                  else
                  {
                    *(float *)&v334 = (float)(1.0 / v264) * v261;
                    *((float *)&v334 + 1) = (float)(1.0 / v264) * v262;
                    v335 = (float)(1.0 / v264) * v263;
                  }
                }
                v241 = v341;
              }
              v239 = *(int *)((char *)dword_16E6A3C64 + v135);
              ++v248;
              v242 = v239;
              v249 = *(_DWORD *)((char *)&unk_143DB6B08 + 180288 * v239 + v244);
            }
            while ( v247 < v249 );
            v240 = v336;
            *(float *)&v340 = v241;
          }
          ++v240;
          v242 = (int)v239;
          v243 = 45072LL * (int)v239;
          v245 += 26;
          LODWORD(v336) = v240;
          v244 += 104;
        }
        while ( v240 < dword_143DB6B00[v243] );
        v133 = v355;
        v265 = v246 == 0;
        v9 = a6;
        v136 = v330;
        if ( !v265 )
        {
          if ( v330 < 0.0625 )
          {
            v330 = 0.0625;
            v136 = 0.0625;
            v327 = 0.0625;
          }
          v266 = *(float *)&v352 - a6[1];
          v267 = v360;
          v268 = v355[(unsigned __int64)v359 / 4 + 2];
          v331 = v342 - *a6;
          v269 = *(float *)&v353 - a6[2];
          v332 = v266;
          v328 = 0;
          v329 = 0.0;
          v333 = v269;
          if ( v268 == v355[(unsigned __int64)v360 / 4 + 2] )
          {
            sub_140002C40(*(_DWORD *)(v357 + 8), a5, &v328, &v331, &v334, v136, 1008981770, 0.0625, 1048576000);
          }
          else
          {
            sub_140002C40(v268, a5, &v328, &v331, &v334, v136, 1008981770, 0.0625, 1048576000);
            sub_140002C40(
              *(int *)((char *)v133 + v267 + 8),
              a5,
              &v328,
              &v331,
              &v334,
              v136,
              1008981770,
              0.0625,
              1048576000);
          }
          v270 = &v363;
          v271 = 0;
          v272 = 2;
          do
          {
            v273 = (int)v369[v271];
            if ( (_DWORD)v273 == -1 )
            {
              v274 = sub_140033130(v133);
              v369[v271] = v274;
              if ( v274 != -1 )
              {
                v275 = 9LL * v274;
                v276 = v370[v271];
                v133[2 * v275 + 2435] = 2;
                v133[2 * v275 + 2436] = v276;
                v133[2 * v275 + 2437] = a3 + 1;
                v277 = *((_DWORD *)v270 - 2);
                v133[2 * v275 + 2438] = v326;
                v133[2 * v275 + 2439] = 0;
                v133[2 * v275 + 2440] = v277;
                v133[2 * v275 + 2441] = *((_DWORD *)v270 - 1);
                v133[2 * v275 + 2442] = *(_DWORD *)v270;
              }
            }
            else
            {
              v133[18 * v273 + 2435] = 2;
            }
            ++v271;
            v270 += 3;
            --v272;
          }
          while ( v272 );
          v9 = a6;
        }
        v10 = a7;
        v182 = v133 + 2436;
      }
      result = (unsigned int)v133[1473];
      v181 = (int *)(v357 + 20);
      LODWORD(v343) = v343 + 1;
      v357 += 20LL;
      if ( (int)v343 < (int)result )
      {
        v94 = v326;
        continue;
      }
      break;
    }
  }
  LODWORD(v336) = 0;
  if ( (int)result > 0 )
  {
    v278 = v133 + 2436;
    v279 = v133 + 1477;
    do
    {
      v280 = *(v279 - 3);
      v281 = 0;
      v282 = *(v279 - 2);
      v283 = *(float *)&v133[23 * v280 + 19];
      v361 = *(float *)&v133[23 * v280 + 18];
      v363 = *(float *)&v133[23 * v280 + 20];
      v362 = v283;
      v284 = 0;
      v285 = *(float *)&v133[23 * v282 + 19];
      v364 = *(float *)&v133[23 * v282 + 18];
      v286 = v278;
      v366 = *(float *)&v133[23 * v282 + 20];
      v365 = v285;
      while ( (int)*(v286 - 1) <= 0 || *v286 != (_DWORD)v280 || v286[1] != a3 + 1 || v286[2] != v326 || v286[3] )
      {
        ++v281;
        ++v284;
        v286 += 18;
        if ( v284 >= 64 )
        {
          v281 = -1;
          break;
        }
      }
      v287 = 0;
      v288 = v278;
      v289 = 0;
      while ( (int)*(v288 - 1) <= 0 || *v288 != (_DWORD)v282 || v288[1] != a3 + 1 || v288[2] != v326 || v288[3] )
      {
        ++v287;
        ++v289;
        v288 += 18;
        if ( v289 >= 64 )
        {
          v287 = -1;
          break;
        }
      }
      if ( v281 != -1 )
      {
        v290 = *(float *)&v133[18 * v281 + 2441];
        v361 = *(float *)&v133[18 * v281 + 2440];
        v363 = *(float *)&v133[18 * v281 + 2442];
        v362 = v290;
      }
      if ( v287 != -1 )
      {
        v291 = *(float *)&v133[18 * v287 + 2441];
        v364 = *(float *)&v133[18 * v287 + 2440];
        v366 = *(float *)&v133[18 * v287 + 2442];
        v365 = v291;
      }
      v292 = 0;
      v293 = *(int *)((char *)dword_16E6A3C64 + v135);
      v294 = 180288 * v293;
      if ( dword_143DB6B00[45072 * v293] > 0 )
      {
        v295 = 0;
        do
        {
          v296 = v295 + v294;
          v297 = 0;
          if ( *(_DWORD *)((char *)&unk_143DB6B08 + v296) == 3 )
          {
            v298 = sub_140026200(
                     &v337,
                     (float *)&v334,
                     &v327,
                     &v361,
                     &v364,
                     0.0625,
                     (float *)&v371 + 3 * *(int *)((char *)dword_143DB6B0C + v296),
                     (__int64)(&v371 + 3 * *(int *)((char *)&unk_143DB6B10 + v296)),
                     (__int64)(&v371 + 3 * *(int *)((char *)&unk_143DB6B14 + v296)));
            v136 = v327;
            v297 = v298 != 0;
          }
          v299 = v295 + 180288LL * *(int *)((char *)dword_16E6A3C64 + v135);
          if ( *(_DWORD *)((char *)&unk_143DB6B08 + v299) == 4
            && (v300 = sub_140024D80(
                         &v337,
                         (float *)&v334,
                         &v327,
                         &v361,
                         &v364,
                         0.0625,
                         (float *)&v371 + 3 * *(int *)((char *)dword_143DB6B0C + v299),
                         (__int64)(&v371 + 3 * *(int *)((char *)&unk_143DB6B10 + v299)),
                         (__int64)(&v371 + 3 * *(int *)((char *)&unk_143DB6B14 + v299)),
                         (__int64)(&v371 + 3 * *(int *)((char *)&unk_143DB6B18 + v299))),
                v136 = v327,
                v300)
            || v297 )
          {
            v301 = *v279;
            v332 = v338 - v9[1];
            v328 = 0;
            v329 = 0.0;
            v136 = 0.0625 - v136;
            v302 = v337 - *v9;
            v327 = v136;
            v331 = v302;
            v333 = v339 - v9[2];
            sub_140002C40(v301, a5, &v328, &v331, &v334, v136, 1008981770, 0.0625, 1048576000);
          }
          v293 = *(int *)((char *)dword_16E6A3C64 + v135);
          ++v292;
          v294 = 180288 * v293;
          v295 += 104;
        }
        while ( v292 < dword_143DB6B00[45072 * v293] );
        v133 = v355;
      }
      v303 = 0;
      v304 = (int)v293;
      result = 180288LL * (int)v293;
      LODWORD(v343) = 0;
      if ( *(int *)((char *)dword_143DB6B00 + result) > 0 )
      {
        v305 = v356;
        v306 = 0;
        v307 = 0;
        do
        {
          v308 = 0;
          v309 = 0;
          v310 = *(_DWORD *)((char *)&unk_143DB6B08 + v306 + result);
          if ( v310 > 0 )
          {
            do
            {
              v311 = 45072 * v304;
              ++v308;
              v312 = 3LL * dword_143DB6B0C[45072 * v304 + v307 + v309];
              v313 = *((float *)&v372 + v312);
              v347 = *((float *)&v371 + v312);
              v314 = v311 + v308 % v310;
              v349 = *(float *)&v374[4 * v312 - 4];
              v348 = v313;
              v315 = 3LL * dword_143DB6B0C[v307 + v314];
              v316 = *(&v372 + 3 * dword_143DB6B0C[v307 + v314]);
              LODWORD(v350) = *(&v371 + 3 * dword_143DB6B0C[v307 + v314]);
              v317 = *(float *)&v374[4 * v315 - 4];
              HIDWORD(v350) = v316;
              v351 = v317;
              if ( (unsigned int)sub_14007D360(
                                   (unsigned int)&v337,
                                   (unsigned int)&v344,
                                   (unsigned int)&v340,
                                   (unsigned int)&v361,
                                   (__int64)&v364,
                                   (__int64)&v347,
                                   (__int64)&v350,
                                   1031798784) )
              {
                v318 = v337 - v344;
                v319 = v338 - v345;
                v320 = v339 - v346;
                v321 = fsqrt((float)((float)(v319 * v319) + (float)(v318 * v318)) + (float)(v320 * v320));
                if ( v321 == 0.0 )
                {
                  v334 = 0;
                  v335 = 0.0;
                }
                else
                {
                  *(float *)&v334 = (float)(1.0 / v321) * v318;
                  *((float *)&v334 + 1) = (float)(1.0 / v321) * v319;
                  v335 = (float)(1.0 / v321) * v320;
                }
                v322 = v345 - v9[1];
                v323 = v346 - v9[2];
                v324 = *v279;
                v136 = 0.0625 - *(float *)&v340;
                v331 = v344 - *v9;
                v327 = 0.0625 - *(float *)&v340;
                v332 = v322;
                v333 = v323;
                v328 = 0;
                v329 = 0.0;
                sub_140002C40(v324, a5, &v328, &v331, &v334, 0.0625 - *(float *)&v340, 1008981770, 0.0625, 1048576000);
              }
              ++v309;
              v293 = *(int *)((char *)dword_16E6A3C64 + v305);
              v304 = v293;
              v310 = *(_DWORD *)((char *)&unk_143DB6B08 + 180288 * v293 + v306);
            }
            while ( v308 < v310 );
            v303 = v343;
          }
          ++v303;
          v304 = (int)v293;
          result = 180288LL * (int)v293;
          v307 += 26;
          LODWORD(v343) = v303;
          v306 += 104;
        }
        while ( v303 < *(int *)((char *)dword_143DB6B00 + result) );
        v133 = v355;
        v135 = v356;
      }
      v278 = v133 + 2436;
      v279 += 5;
      LODWORD(v336) = v336 + 1;
    }
    while ( (int)v336 < v133[1473] );
  }
  return result;
}

