/* Address: 0x140056960 | Name: sub_140056960 | Size: 16523 bytes */
__int64 __fastcall sub_140056960(unsigned int a1)
{
  unsigned __int64 v1; // rsi
  int v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // r13d
  int v6; // r8d
  bool v7; // zf
  float v8; // xmm8_4
  __m128 v9; // xmm7
  __int128 v10; // xmm15
  __int64 v11; // rbx
  float *v12; // r12
  float *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char *v17; // rdi
  __int128 v18; // xmm6
  __m128 v19; // xmm0
  float v20; // xmm9_4
  float v21; // xmm8_4
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __m128 v26; // xmm6
  __m128d v27; // xmm0
  __m128 v28; // xmm0
  float v29; // xmm11_4
  float v30; // xmm14_4
  float v31; // xmm7_4
  float v32; // xmm13_4
  float v33; // xmm11_4
  __int64 v34; // r8
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm6_4
  float v39; // xmm8_4
  float v40; // xmm9_4
  float v41; // xmm10_4
  float v42; // xmm3_4
  float v43; // xmm0_4
  float v44; // xmm11_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  double v47; // xmm0_8
  float v48; // xmm6_4
  float v49; // xmm6_4
  float v50; // xmm6_4
  float v51; // xmm5_4
  float v52; // xmm4_4
  float v53; // xmm3_4
  __int64 v54; // r15
  float *v55; // rbx
  float v56; // xmm11_4
  float v57; // xmm8_4
  float v58; // xmm7_4
  unsigned int v59; // ecx
  float v60; // xmm3_4
  float v61; // xmm5_4
  float v62; // xmm8_4
  float v63; // xmm7_4
  float v64; // xmm6_4
  float v65; // xmm5_4
  float v66; // xmm4_4
  float v67; // xmm3_4
  float v68; // xmm0_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm5_4
  float v72; // xmm4_4
  __int64 v73; // r8
  __int64 v74; // rbx
  float *v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r8
  char *v78; // rdi
  float v79; // xmm0_4
  __m128 v80; // xmm6
  __m128d v81; // xmm0
  __m128 v82; // xmm0
  float v83; // xmm10_4
  float v84; // xmm9_4
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int128 v89; // xmm6
  __m128 v90; // xmm0
  float v91; // xmm8_4
  float v92; // xmm7_4
  float v93; // xmm14_4
  float v94; // xmm13_4
  float v95; // xmm8_4
  __int64 v96; // r8
  float v97; // xmm3_4
  float v98; // xmm4_4
  float v99; // xmm6_4
  float v100; // xmm5_4
  float v101; // xmm9_4
  float v102; // xmm10_4
  float v103; // xmm11_4
  float v104; // xmm3_4
  float v105; // xmm0_4
  float v106; // xmm7_4
  float v107; // xmm8_4
  float v108; // xmm6_4
  double v109; // xmm0_8
  float v110; // xmm4_4
  float v111; // xmm4_4
  float v112; // xmm4_4
  float v113; // xmm2_4
  float v114; // xmm5_4
  float v115; // xmm3_4
  float *v116; // rbx
  float v117; // xmm9_4
  float v118; // xmm0_4
  float v119; // xmm3_4
  float v120; // xmm1_4
  float v121; // xmm2_4
  float v122; // xmm7_4
  float v123; // xmm9_4
  float v124; // xmm0_4
  float v125; // xmm5_4
  float v126; // xmm9_4
  float v127; // xmm6_4
  float v128; // xmm8_4
  unsigned int v129; // ecx
  float v130; // xmm3_4
  float v131; // xmm5_4
  float v132; // xmm8_4
  float v133; // xmm7_4
  float v134; // xmm6_4
  float v135; // xmm5_4
  float v136; // xmm4_4
  float v137; // xmm3_4
  float v138; // xmm0_4
  float v139; // xmm2_4
  float v140; // xmm1_4
  float v141; // xmm5_4
  float v142; // xmm4_4
  __int64 v143; // r8
  __int64 v144; // r8
  __int64 v145; // rdx
  __int64 v146; // rbx
  float v147; // xmm4_4
  float v148; // xmm3_4
  float v149; // xmm5_4
  float v150; // xmm6_4
  float v151; // xmm13_4
  float v152; // xmm14_4
  float v153; // xmm8_4
  float v154; // xmm11_4
  float v155; // xmm10_4
  float v156; // xmm7_4
  float v157; // xmm9_4
  float v158; // xmm3_4
  float v159; // xmm10_4
  float v160; // xmm0_4
  float v161; // xmm8_4
  float v162; // xmm7_4
  float v163; // xmm6_4
  double v164; // xmm0_8
  float v165; // xmm1_4
  float v166; // xmm1_4
  float v167; // xmm7_4
  float v168; // xmm8_4
  __int64 v169; // rax
  float v170; // xmm6_4
  __int64 v171; // rax
  __int64 v172; // rbx
  float v173; // xmm9_4
  float v174; // xmm5_4
  float v175; // xmm3_4
  float v176; // xmm4_4
  float v177; // xmm11_4
  float v178; // xmm10_4
  float v179; // xmm13_4
  float v180; // xmm14_4
  float v181; // xmm7_4
  float v182; // xmm6_4
  float v183; // xmm8_4
  float v184; // xmm3_4
  float v185; // xmm8_4
  float v186; // xmm4_4
  float v187; // xmm7_4
  float v188; // xmm6_4
  float v189; // xmm8_4
  double v190; // xmm0_8
  float v191; // xmm1_4
  float v192; // xmm1_4
  float v193; // xmm6_4
  __int64 v194; // rax
  float v195; // xmm7_4
  float v196; // xmm8_4
  __int64 v197; // rbx
  float *v198; // r12
  char *v199; // r14
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __m128 v203; // xmm0
  float v204; // xmm11_4
  float v205; // xmm8_4
  float v206; // xmm10_4
  float v207; // xmm13_4
  __int64 v208; // r8
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __m128 v212; // xmm9
  __m128d v213; // xmm0
  __m128 v214; // xmm0
  float v215; // xmm3_4
  float v216; // xmm7_4
  float v217; // xmm6_4
  float v218; // xmm13_4
  float v219; // xmm11_4
  __int64 v220; // r8
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // r8
  float v224; // xmm8_4
  float v225; // xmm6_4
  float v226; // xmm13_4
  float v227; // xmm7_4
  double v228; // xmm0_8
  float v229; // xmm11_4
  float v230; // xmm10_4
  float v231; // xmm13_4
  float v232; // xmm9_4
  float v233; // xmm11_4
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  double v237; // xmm0_8
  float v238; // xmm2_4
  float v239; // xmm0_4
  float v240; // xmm1_4
  float v241; // xmm2_4
  float v242; // xmm3_4
  float v243; // xmm7_4
  float v244; // xmm6_4
  float v245; // xmm8_4
  double v246; // xmm0_8
  float v247; // xmm1_4
  float v248; // xmm1_4
  float v249; // xmm1_4
  unsigned int v250; // ecx
  float *v251; // rdi
  float v252; // xmm6_4
  float v253; // xmm7_4
  float v254; // xmm8_4
  float v255; // xmm6_4
  float v256; // xmm4_4
  float v257; // xmm7_4
  float v258; // xmm8_4
  float v259; // xmm5_4
  float v260; // xmm4_4
  float v261; // xmm3_4
  float v262; // xmm0_4
  float v263; // xmm1_4
  float v264; // xmm2_4
  float v265; // xmm4_4
  __int64 v266; // r8
  _BOOL8 v267; // rcx
  int v268; // r12d
  int v269; // r15d
  BOOL v270; // r14d
  __int64 v271; // rdx
  BOOL v272; // eax
  __int64 v273; // r8
  __int64 v274; // r8
  __int64 v275; // r8
  float v276; // xmm1_4
  float v277; // xmm0_4
  float v278; // xmm1_4
  __int64 v279; // r8
  float v280; // xmm7_4
  float v281; // xmm6_4
  float v282; // xmm8_4
  __int64 v283; // rdx
  int v284; // edi
  int v285; // eax
  int v286; // ebx
  float v287; // xmm1_4
  float v288; // xmm7_4
  float v289; // xmm6_4
  float v290; // xmm8_4
  int v291; // eax
  __int64 v292; // r8
  __int64 v293; // r13
  __int64 v294; // rdx
  float v295; // xmm1_4
  float v296; // xmm3_4
  float v297; // xmm2_4
  float v298; // xmm11_4
  float v299; // xmm7_4
  float v300; // xmm11_4
  float v301; // xmm1_4
  float v302; // xmm7_4
  float v303; // xmm8_4
  float v304; // xmm10_4
  float v305; // xmm9_4
  float v306; // xmm2_4
  float v307; // xmm3_4
  float v308; // xmm1_4
  float v309; // xmm2_4
  int v310; // xmm1_4
  int v311; // xmm2_4
  float v312; // xmm3_4
  float v313; // xmm3_4
  int v314; // xmm1_4
  float v315; // xmm0_4
  __int64 v316; // r8
  int v317; // r9d
  int v318; // r14d
  int v319; // edx
  float v320; // xmm5_4
  float v321; // xmm13_4
  float v322; // xmm14_4
  float v323; // xmm15_4
  __int64 v324; // rbx
  __int64 v325; // rcx
  float v326; // xmm7_4
  float v327; // xmm6_4
  float v328; // xmm11_4
  float v329; // xmm1_4
  unsigned __int64 v330; // rcx
  float v331; // xmm1_4
  float v332; // xmm0_4
  float v333; // xmm6_4
  float v334; // xmm1_4
  float v335; // xmm6_4
  float v336; // xmm7_4
  float v337; // xmm11_4
  float v338; // xmm3_4
  float v339; // xmm0_4
  float v340; // xmm2_4
  float v341; // xmm1_4
  float v342; // xmm11_4
  float v343; // xmm6_4
  float v344; // xmm3_4
  float v345; // xmm6_4
  int v346; // eax
  __int64 v347; // r8
  __int64 v348; // rax
  float v349; // xmm6_4
  float v350; // xmm5_4
  float v351; // xmm7_4
  __int64 v352; // rdi
  __int64 v353; // rbx
  float v354; // xmm1_4
  int v355; // eax
  float v356; // xmm1_4
  __m128d v357; // xmm0
  double v358; // xmm1_8
  __m128 v359; // xmm0
  float v360; // xmm6_4
  __m128d v361; // xmm1
  float v362; // xmm2_4
  float v363; // xmm2_4
  __m128d v364; // xmm2
  __m128d v365; // xmm0
  __int64 v366; // r8
  float v367; // xmm1_4
  __int64 v368; // r8
  int v369; // eax
  float v370; // xmm13_4
  float v371; // xmm11_4
  float v372; // xmm14_4
  float v373; // xmm15_4
  float v374; // xmm5_4
  float v375; // xmm6_4
  float v376; // xmm10_4
  float v377; // xmm0_4
  float v378; // xmm8_4
  float v379; // xmm9_4
  float v380; // xmm7_4
  float v381; // xmm2_4
  float v382; // xmm0_4
  float v383; // xmm1_4
  float v384; // xmm6_4
  float v385; // xmm11_4
  float v386; // xmm13_4
  float v387; // xmm14_4
  float v388; // xmm6_4
  int v389; // edx
  int v390; // eax
  int v391; // ebx
  float v392; // xmm1_4
  float v393; // xmm0_4
  int v394; // eax
  float v395; // xmm0_4
  int v396; // ecx
  float v397; // xmm6_4
  float v398; // xmm7_4
  int v399; // edi
  __int64 v400; // rax
  int v401; // r13d
  __int64 v402; // r8
  __int64 v403; // rdx
  int v404; // xmm1_4
  int v405; // xmm0_4
  __int64 v406; // rax
  __int64 v407; // rcx
  __int64 v408; // rax
  __int64 v409; // rcx
  __int64 v410; // rax
  __int64 v411; // rcx
  __int64 v412; // rax
  __int64 v413; // rcx
  __int64 v414; // rax
  __int64 v415; // rcx
  __int64 v416; // rax
  __int64 v417; // r14
  __int128 *v418; // r9
  __int64 v419; // rax
  __int64 v420; // r14
  __int128 *v421; // r9
  __int64 v422; // rdi
  __int64 v423; // rbx
  __int128 *v424; // r9
  __int64 v425; // rax
  int v426; // r12d
  int v427; // edi
  int *v428; // r14
  __int64 v429; // r15
  __int64 v430; // rbx
  __int128 *v431; // r9
  __int64 v432; // rax
  __int64 v433; // r15
  __int64 v434; // rbx
  __int128 *v435; // r9
  float v436; // xmm6_4
  float v437; // xmm0_4
  float v438; // xmm6_4
  double v439; // xmm0_8
  float v440; // xmm1_4
  float v441; // xmm6_4
  __int64 result; // rax
  __int64 v443; // rdi
  __int64 v444; // rbx
  __int128 *v445; // r9
  float v446; // xmm6_4
  __int64 v447; // rax
  __int64 v448; // rdi
  __int64 v449; // rbx
  __int128 *v450; // r9
  __int64 v451; // rax
  __int64 v452; // rdi
  __int64 v453; // rbx
  __int128 *v454; // r9
  __int64 v455; // rax
  int *v456; // rdi
  float v457; // xmm6_4
  __int64 v458; // rsi
  __int64 v459; // rbx
  __int128 *v460; // r9
  __int64 v461; // rax
  __int64 v462; // rsi
  __int64 v463; // rbx
  __int128 *v464; // r9
  float v465; // [rsp+78h] [rbp-90h] BYREF
  float v466; // [rsp+7Ch] [rbp-8Ch]
  float v467; // [rsp+80h] [rbp-88h]
  __m128 v468; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v469; // [rsp+A0h] [rbp-68h]
  float v470; // [rsp+A4h] [rbp-64h]
  __int64 v471; // [rsp+A8h] [rbp-60h] BYREF
  float v472; // [rsp+B0h] [rbp-58h]
  float v473; // [rsp+B8h] [rbp-50h]
  float v474; // [rsp+BCh] [rbp-4Ch]
  float v475; // [rsp+C0h] [rbp-48h]
  int v476; // [rsp+C4h] [rbp-44h]
  float v477; // [rsp+C8h] [rbp-40h] BYREF
  float v478; // [rsp+CCh] [rbp-3Ch]
  float v479; // [rsp+D0h] [rbp-38h]
  float v480; // [rsp+D4h] [rbp-34h]
  __int64 v481; // [rsp+D8h] [rbp-30h] BYREF
  int v482; // [rsp+E0h] [rbp-28h]
  float v483; // [rsp+E8h] [rbp-20h]
  float v484; // [rsp+ECh] [rbp-1Ch]
  int v485; // [rsp+F0h] [rbp-18h] BYREF
  int v486; // [rsp+F4h] [rbp-14h]
  int v487; // [rsp+F8h] [rbp-10h]
  __int64 v488; // [rsp+100h] [rbp-8h]
  int v489; // [rsp+108h] [rbp+0h] BYREF
  int v490; // [rsp+10Ch] [rbp+4h]
  int v491; // [rsp+110h] [rbp+8h]
  float v492; // [rsp+118h] [rbp+10h]
  float v493; // [rsp+11Ch] [rbp+14h]
  float v494; // [rsp+120h] [rbp+18h]
  float v495; // [rsp+124h] [rbp+1Ch]
  float v496; // [rsp+128h] [rbp+20h]
  float v497; // [rsp+12Ch] [rbp+24h]
  __int64 v498; // [rsp+130h] [rbp+28h]
  _OWORD v499[2]; // [rsp+138h] [rbp+30h] BYREF
  int v500; // [rsp+158h] [rbp+50h]
  _DWORD v501[4]; // [rsp+160h] [rbp+58h] BYREF
  _BOOL8 v502; // [rsp+170h] [rbp+68h]
  __int128 v503; // [rsp+178h] [rbp+70h] BYREF
  __int128 v504; // [rsp+188h] [rbp+80h] BYREF
  float v505; // [rsp+198h] [rbp+90h]
  float v506; // [rsp+1A0h] [rbp+98h] BYREF
  float v507; // [rsp+1A4h] [rbp+9Ch]
  float v508; // [rsp+1A8h] [rbp+A0h]
  __int64 v509; // [rsp+1B0h] [rbp+A8h] BYREF
  float v510; // [rsp+1B8h] [rbp+B0h]
  _OWORD v511[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  int v512; // [rsp+1E0h] [rbp+D8h]

  v1 = 28664LL * (int)a1;
  v469 = a1;
  if ( *(_DWORD *)((char *)&unk_1909487A8 + v1) && (byte_190941BDC[v1] & 0x20) != 0 )
    *(float *)&algn_190941A08[v1 + 48] = *(float *)&algn_190941B0C[v1] * 8.0;
  v2 = dword_190948734[v1 / 4];
  v492 = 1.0;
  v493 = 1.0;
  if ( v2 < 100 )
    v492 = (float)v2 * 0.0099999998;
  v3 = dword_19094873C[v1 / 4];
  if ( v3 < 100 )
    v493 = (float)v3 * 0.0099999998;
  if ( *(_DWORD *)&algn_190941A08[v1 + 24] == 1 && *(float *)((char *)&unk_190948158 + v1) < 0.0 )
    *(_DWORD *)((char *)&unk_190948218 + v1) = 0;
  v4 = dword_190948498[v1 / 4];
  v5 = 0;
  v6 = *(int *)((char *)&unk_1909484C0 + v1);
  v483 = *(float *)&v4;
  v484 = *(float *)&v6;
  if ( v4 > 0 && dword_1901220D0[1268 * dword_19025F0D4[1760 * dword_19094849C[v1 / 4]]] )
  {
    v5 = 1;
  }
  else if ( v6 > 0 && dword_1901220D0[1268 * dword_19025F0D4[1760 * *(int *)((char *)&unk_1909484C4 + v1)]] )
  {
    v5 = 1;
  }
  v7 = *(_DWORD *)&algn_190941A08[v1 + 32] == 2;
  v8 = 0.39269909;
  v470 = 0.39269909;
  if ( v7 )
  {
    v8 = 0.78539819;
    v470 = 0.78539819;
  }
  if ( (byte_190941BDC[v1] & 2) != 0 )
  {
    v8 = 0.0;
    v470 = 0.0;
  }
  if ( !v5 )
  {
    v8 = 0.0;
    v470 = 0.0;
  }
  if ( v4 > 0 && *(_DWORD *)&algn_1901220D4[5072 * dword_19025F0D4[1760 * dword_19094849C[v1 / 4]]] )
    v470 = -v8;
  if ( byte_1962BC9C0 )
    v470 = 0.0;
  v7 = dword_1909419F0[7166 * a1] == -1;
  v9 = 0;
  v474 = 0.0;
  v10 = 0;
  if ( !v7 )
  {
    v9 = (__m128)(unsigned int)dword_190941B04[7166 * a1];
    v10 = (unsigned int)dword_190941B00[7166 * a1];
    v474 = *(float *)&dword_190941B04[7166 * a1];
  }
  v11 = dword_190941E40[7166 * a1];
  v12 = (float *)((char *)&xmmword_190941C1C + v1);
  v13 = (float *)((char *)&unk_190941D54 + v1);
  sub_1400495A0((float *)v499, (float *)((char *)&unk_190941D54 + v1), (float *)((char *)&xmmword_190941C1C + v1));
  sub_1400A8390(&v468, v499);
  v17 = (char *)&unk_1909481A8 + v1;
  *(_QWORD *)v17 = 1065353216;
  *((_QWORD *)v17 + 1) = 0;
  *((_QWORD *)v17 + 2) = 1065353216;
  *((_QWORD *)v17 + 3) = 0;
  *((_DWORD *)v17 + 8) = 1065353216;
  v18 = (unsigned int)dword_190941B08[v1 / 4];
  if ( dword_1909419F0[v1 / 4] != -1 )
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&v10 + 1);
  if ( byte_1962BC9C0 )
    v18 = 0;
  v19.m128_u64[1] = *((_QWORD *)&v18 + 1);
  *(double *)v19.m128_u64 = _libm_sse2_sincosf_(v15, v14, v16);
  v20 = _mm_shuffle_ps(v19, v19, 1).m128_f32[0];
  v21 = v19.m128_f32[0];
  sub_140049C20((__int64)&unk_1909481A8 + v1, (float *)((char *)&unk_1909481B4 + v1), v22);
  v26 = (__m128)(unsigned int)dword_190941A64[v1 / 4];
  if ( (byte_190941BDC[v1] & 0x20) != 0 )
    v26.m128_f32[0] = v26.m128_f32[0] * 0.5;
  else
    v26.m128_f32[0] = (float)(v26.m128_f32[0] + *(float *)&algn_190941B0C[v1]) * 0.75;
  if ( dword_1909419F0[v1 / 4] != -1 )
    v26 = v9;
  v26.m128_f32[0] = v26.m128_f32[0] * 0.75;
  if ( byte_1962BC9C0 )
  {
    v27 = _mm_cvtps_pd(v26);
    v27.m128d_f64[0] = v27.m128d_f64[0] - 0.196349540849375;
    v26.m128_u64[1] = _mm_cvtpd_ps(v27).m128_u64[1];
  }
  v28.m128_u64[1] = v26.m128_u64[1];
  *(double *)v28.m128_u64 = _libm_sse2_sincosf_(v24, v23, v25);
  v29 = _mm_shuffle_ps(v28, v28, 1).m128_f32[0];
  v30 = v29 * v21;
  v31 = -(float)(v28.m128_f32[0] * v21);
  v32 = v28.m128_f32[0] * v20;
  v33 = v29 * v20;
  sub_140049C20((__int64)&unk_1909481A8 + v1, (float *)((char *)&unk_1909481A8 + v1), v34);
  v35 = v468.m128_f32[3];
  v36 = v468.m128_f32[2];
  v37 = v468.m128_f32[1];
  v38 = v468.m128_f32[0];
  if ( (float)((float)((float)(v468.m128_f32[3] * v33) + (float)(v468.m128_f32[2] * v31))
             + (float)((float)(v468.m128_f32[1] * v30) + (float)(v468.m128_f32[0] * (float)(v28.m128_f32[0] * v20)))) < 0.0 )
  {
    v468 = _mm_xor_ps(v468, (__m128)xmmword_1400F7F50);
    v36 = v468.m128_f32[2];
    v37 = v468.m128_f32[1];
    v38 = v468.m128_f32[0];
    v35 = _mm_shuffle_ps(v468, v468, 255).m128_f32[0];
  }
  v468.m128_f32[1] = -v37;
  v468.m128_f32[0] = -v38;
  v468.m128_f32[2] = -v36;
  v39 = (float)((float)((float)((float)-v38 * v33) + (float)(v35 * v32)) + (float)((float)-v37 * v31))
      - (float)((float)-v36 * v30);
  v40 = (float)((float)((float)(v35 * v30) - (float)((float)-v38 * v31)) + (float)((float)-v37 * v33))
      + (float)((float)-v36 * v32);
  v41 = (float)((float)((float)((float)-v38 * v30) + (float)(v35 * v31)) - (float)((float)-v37 * v32))
      + (float)((float)-v36 * v33);
  v42 = (float)((float)((float)(v35 * v33) - (float)((float)-v38 * v32)) - (float)((float)-v37 * v30))
      - (float)((float)-v36 * v31);
  v43 = fsqrt((float)((float)(v40 * v40) + (float)(v39 * v39)) + (float)(v41 * v41));
  if ( v43 == 0.0 )
  {
    v44 = 0.0;
    v45 = 0.0;
    v46 = 0.0;
  }
  else
  {
    v44 = (float)(1.0 / v43) * v39;
    v45 = (float)(1.0 / v43) * v40;
    v46 = (float)(1.0 / v43) * v41;
  }
  v47 = acos(fminf(fmaxf(v42, -1.0), 1.0));
  v48 = v47 + v47;
  if ( byte_1962BC9C0 )
  {
    v50 = fmaxf(v48, -0.25);
    if ( v50 > 0.25 )
      v50 = 0.25;
    v49 = fabs(v50) * v50 * 4.0;
  }
  else
  {
    v49 = fmaxf(v48, -0.39269909);
    if ( v49 > 0.39269909 )
      v49 = 0.39269909;
  }
  v51 = *(float *)&dword_190941C40[v1 / 4 + 1] - *(float *)&dword_190941D7C[v1 / 4];
  v52 = *(float *)&dword_190941C40[v1 / 4] - *(float *)&dword_190941D78[v1 / 4];
  v53 = *(float *)&dword_190941C40[v1 / 4 + 2] - *(float *)&dword_190941D80[v1 / 4];
  v54 = v11;
  v55 = (float *)&xmmword_14B6432F0[9 * v11];
  v56 = (float)((float)(v44 * v49) * 0.75)
      - (float)((float)((float)((float)(v51 * v12[1]) + (float)(v52 * *v12)) + (float)(v53 * v12[2])) * 0.25);
  v57 = (float)((float)(v45 * v49) * 0.75)
      - (float)((float)((float)((float)(v51 * *(float *)((char *)&xmmword_190941C2C + v1))
                              + (float)(v52 * *(float *)((char *)&xmmword_190941C1C + v1 + 12)))
                      + (float)(v53 * *(float *)((char *)&xmmword_190941C2C + v1 + 4)))
              * 0.25);
  v58 = (float)((float)(v46 * v49) * 0.75)
      - (float)((float)((float)((float)(v51 * *(float *)((char *)&xmmword_190941C2C + v1 + 12))
                              + (float)(v52 * *(float *)((char *)&xmmword_190941C2C + v1 + 8)))
                      + (float)(v53 * *(float *)&dword_190941C3C[v1 / 4]))
              * 0.25);
  *v55 = (float)((float)(v57 * v13[3]) + (float)(v56 * *v13)) + (float)(v58 * v13[6]);
  v55[1] = (float)((float)(v57 * *(float *)((char *)&xmmword_190941D64 + v1))
                 + (float)(v56 * *(float *)&dword_190941D58[v1 / 4]))
         + (float)(v58 * *(float *)((char *)&xmmword_190941D64 + v1 + 12));
  v59 = v469;
  v55[2] = (float)((float)(v57 * *(float *)((char *)&xmmword_190941D64 + v1 + 4))
                 + (float)(v56 * *(float *)&dword_190941D5C[v1 / 4]))
         + (float)(v58 * *(float *)&dword_190941D74[v1 / 4]);
  sub_14005C2A0(v59, 0, 1, (_DWORD)v55, 1066401792, 1065353216);
  v60 = v55[1];
  v61 = *v55;
  v62 = v55[2];
  v63 = fsqrt((float)((float)(v61 * v61) + (float)(v60 * v60)) + (float)(v62 * v62));
  if ( v63 == 0.0 )
  {
    v64 = 0.0;
    v65 = 0.0;
    v66 = 0.0;
  }
  else
  {
    v64 = (float)(1.0 / v63) * v61;
    v65 = (float)(1.0 / v63) * v60;
    v66 = (float)(1.0 / v63) * v62;
  }
  v67 = v65 * *(float *)((char *)&xmmword_190941C2C + v1);
  v68 = v64 * *(float *)((char *)&xmmword_190941C1C + v1 + 12);
  v69 = (float)((float)(v65 * v12[1]) + (float)(v64 * *v12)) + (float)(v66 * v12[2]);
  v70 = v66 * *(float *)((char *)&xmmword_190941C2C + v1 + 4);
  v71 = (float)(v65 * *(float *)((char *)&xmmword_190941C2C + v1 + 12))
      + (float)(v64 * *(float *)((char *)&xmmword_190941C2C + v1 + 8));
  v72 = v66 * *(float *)&dword_190941C3C[v1 / 4];
  *(float *)&v471 = v69;
  v472 = v71 + v72;
  *((float *)&v471 + 1) = (float)(v67 + v68) + v70;
  sub_1400495A0((float *)v17, v12, v13);
  sub_140049C20((__int64)v17, (float *)&v471, v73);
  *((_DWORD *)&unk_14B8833A8 + 61 * v54) = 0;
  v74 = dword_190941F78[v1 / 4];
  v75 = (float *)((char *)&unk_190941E8C + v1);
  v476 = dword_190941F78[v1 / 4];
  sub_1400495A0((float *)v499, (float *)((char *)&unk_190941E8C + v1), v13);
  sub_1400A8390(&v468, v499);
  v78 = (char *)&unk_1909481CC + v1;
  *(_QWORD *)v78 = 1065353216;
  *((_QWORD *)v78 + 1) = 0;
  *((_QWORD *)v78 + 2) = 1065353216;
  *((_QWORD *)v78 + 3) = 0;
  *((_DWORD *)v78 + 8) = 1065353216;
  v79 = *(float *)&dword_190941A64[v1 / 4];
  if ( (byte_190941BDC[v1] & 0x20) != 0 )
  {
    v80 = (__m128)(unsigned int)dword_190941A64[v1 / 4];
    v80.m128_f32[0] = v79 * 0.5;
  }
  else
  {
    v80 = (__m128)*(unsigned int *)&algn_190941B0C[v1];
    v80.m128_f32[0] = (float)(v80.m128_f32[0] * 0.75) + (float)(v79 * 0.25);
  }
  if ( dword_1909419F0[v1 / 4] != -1 )
    v80 = (__m128)LODWORD(v474);
  v80.m128_f32[0] = v80.m128_f32[0] * 0.5;
  if ( byte_1962BC9C0 )
  {
    v81 = _mm_cvtps_pd(v80);
    v81.m128d_f64[0] = v81.m128d_f64[0] - 0.5890486225481251;
    v80.m128_u64[1] = _mm_cvtpd_ps(v81).m128_u64[1];
  }
  v82.m128_u64[1] = v80.m128_u64[1];
  *(double *)v82.m128_u64 = _libm_sse2_sincosf_(0, v76, v77);
  v83 = _mm_shuffle_ps(v82, v82, 1).m128_f32[0];
  v84 = v82.m128_f32[0];
  sub_140049C20((__int64)&unk_1909481CC + v1, (float *)((char *)&unk_1909481CC + v1), v85);
  v89 = (unsigned int)dword_190941B08[v1 / 4];
  if ( dword_1909419F0[v1 / 4] != -1 )
    *((_QWORD *)&v89 + 1) = *((_QWORD *)&v10 + 1);
  if ( byte_1962BC9C0 )
    v89 = 0;
  v90.m128_u64[1] = *((_QWORD *)&v89 + 1);
  *(double *)v90.m128_u64 = _libm_sse2_sincosf_(v87, v86, v88);
  v91 = _mm_shuffle_ps(v90, v90, 1).m128_f32[0];
  v92 = v90.m128_f32[0] * v84;
  v93 = v91 * v84;
  v94 = v90.m128_f32[0] * v83;
  v95 = v91 * v83;
  sub_140049C20((__int64)&unk_1909481CC + v1, (float *)((char *)&unk_1909481D8 + v1), v96);
  v97 = v468.m128_f32[3];
  v98 = v468.m128_f32[2];
  v99 = v468.m128_f32[1];
  v100 = v468.m128_f32[0];
  if ( (float)((float)((float)(v468.m128_f32[3] * v95) + (float)(v468.m128_f32[2] * (float)(v90.m128_f32[0] * v84)))
             + (float)((float)(v468.m128_f32[1] * (float)(v90.m128_f32[0] * v83)) + (float)(v468.m128_f32[0] * v93))) < 0.0 )
  {
    v468 = _mm_xor_ps(v468, (__m128)xmmword_1400F7F50);
    v98 = v468.m128_f32[2];
    v99 = v468.m128_f32[1];
    v100 = v468.m128_f32[0];
    v97 = _mm_shuffle_ps(v468, v468, 255).m128_f32[0];
  }
  v468.m128_f32[1] = -v99;
  v468.m128_f32[0] = -v100;
  v468.m128_f32[2] = -v98;
  v101 = (float)((float)((float)((float)-v100 * v95) + (float)(v97 * v93)) + (float)((float)-v99 * v92))
       - (float)((float)-v98 * v94);
  v102 = (float)((float)((float)(v97 * v94) - (float)((float)-v100 * v92)) + (float)(v95 * (float)-v99))
       + (float)((float)-v98 * v93);
  v103 = (float)((float)((float)((float)-v100 * v94) + (float)(v97 * v92)) - (float)(v93 * (float)-v99))
       + (float)((float)-v98 * v95);
  v104 = (float)((float)((float)(v97 * v95) - (float)((float)-v100 * v93)) - (float)(v94 * (float)-v99))
       - (float)((float)-v98 * v92);
  v105 = fsqrt((float)((float)(v102 * v102) + (float)(v101 * v101)) + (float)(v103 * v103));
  if ( v105 == 0.0 )
  {
    v106 = 0.0;
    v107 = 0.0;
    v108 = 0.0;
  }
  else
  {
    v106 = (float)(1.0 / v105) * v101;
    v107 = (float)(1.0 / v105) * v102;
    v108 = (float)(1.0 / v105) * v103;
  }
  v109 = acos(fminf(fmaxf(v104, -1.0), 1.0));
  v110 = v109 + v109;
  if ( byte_1962BC9C0 )
  {
    v112 = fmaxf(v110, -0.25);
    if ( v112 > 0.25 )
      v112 = 0.25;
    v111 = fabs(v112) * v112 * 4.0;
  }
  else
  {
    v111 = fmaxf(v110, -0.39269909);
    if ( v111 > 0.39269909 )
      v111 = 0.39269909;
  }
  v113 = *(float *)&dword_190941D80[v1 / 4] - *(float *)&dword_190941EB8[v1 / 4];
  v114 = *(float *)&dword_190941D7C[v1 / 4] - *(float *)&dword_190941EB4[v1 / 4];
  v115 = *(float *)&dword_190941D78[v1 / 4] - *(float *)&dword_190941EB0[v1 / 4];
  v116 = (float *)&xmmword_14B6432F0[9 * v74];
  v117 = (float)(v114 * v13[1]) + (float)(v115 * *v13);
  v118 = v115 * *(float *)&dword_190941D60[v1 / 4];
  v119 = v115 * *(float *)((char *)&xmmword_190941D64 + v1 + 8);
  v120 = v113 * *(float *)((char *)&xmmword_190941D64 + v1 + 4);
  v121 = v113 * *(float *)&dword_190941D74[v1 / 4];
  v474 = (float)(v117
               + (float)((float)(*(float *)&dword_190941D80[v1 / 4] - *(float *)&dword_190941EB8[v1 / 4]) * v13[2]))
       * -0.25;
  v122 = (float)((float)(v106 * v111) * 0.75) + v474;
  v123 = (float)(v114 * *(float *)((char *)&xmmword_190941D64 + v1)) + v118;
  v124 = v122 * *v75;
  v125 = (float)((float)((float)(v114 * *(float *)((char *)&xmmword_190941D64 + v1 + 12)) + v119) + v121) * -0.25;
  v126 = (float)(v123 + v120) * -0.25;
  v127 = (float)((float)(v108 * v111) * 0.75) + v125;
  v473 = v125;
  v128 = (float)((float)(v107 * v111) * 0.75) + v126;
  v475 = v126;
  *v116 = (float)((float)(v128 * v75[3]) + v124) + (float)(v127 * v75[6]);
  v116[1] = (float)((float)(v122 * *(float *)&dword_190941E90[v1 / 4])
                  + (float)(v128 * *(float *)((char *)&xmmword_190941E9C + v1)))
          + (float)(v127 * *(float *)((char *)&xmmword_190941E9C + v1 + 12));
  v129 = v469;
  v116[2] = (float)((float)(v122 * *(float *)&dword_190941E94[v1 / 4])
                  + (float)(v128 * *(float *)((char *)&xmmword_190941E9C + v1 + 4)))
          + (float)(v127 * *(float *)&dword_190941EAC[v1 / 4]);
  sub_14005C2A0(v129, 1, 2, (_DWORD)v116, 1066401792, 1065353216);
  v130 = v116[1];
  v131 = *v116;
  v132 = v116[2];
  v133 = fsqrt((float)((float)(v131 * v131) + (float)(v130 * v130)) + (float)(v132 * v132));
  if ( v133 == 0.0 )
  {
    v134 = 0.0;
    v135 = 0.0;
    v136 = 0.0;
  }
  else
  {
    v134 = (float)(1.0 / v133) * v131;
    v135 = (float)(1.0 / v133) * v130;
    v136 = (float)(1.0 / v133) * v132;
  }
  v137 = v135 * *(float *)((char *)&xmmword_190941D64 + v1);
  v138 = v134 * *(float *)&dword_190941D60[v1 / 4];
  v139 = (float)((float)(v135 * v13[1]) + (float)(v134 * *v13)) + (float)(v136 * v13[2]);
  v140 = v136 * *(float *)((char *)&xmmword_190941D64 + v1 + 4);
  v141 = (float)(v135 * *(float *)((char *)&xmmword_190941D64 + v1 + 12))
       + (float)(v134 * *(float *)((char *)&xmmword_190941D64 + v1 + 8));
  v142 = v136 * *(float *)&dword_190941D74[v1 / 4];
  *(float *)&v471 = v139;
  v472 = v141 + v142;
  *((float *)&v471 + 1) = (float)(v137 + v138) + v140;
  sub_1400495A0((float *)((char *)&unk_1909481CC + v1), v13, (float *)((char *)&unk_190941E8C + v1));
  sub_140049C20((__int64)&unk_1909481CC + v1, (float *)&v471, v143);
  v145 = v476;
  *((_DWORD *)&unk_14B8833A8 + 61 * v476) = 0;
  if ( v5 && dword_1909419F0[v1 / 4] == -1 )
  {
    sub_1400566E0(v469, v145, v144);
    v146 = dword_190941E40[v1 / 4];
    sub_1400495A0((float *)v499, v13, v12);
    sub_1400A8390(&v468, v499);
    v147 = v468.m128_f32[2];
    v148 = v468.m128_f32[3];
    v149 = v468.m128_f32[1];
    v150 = v468.m128_f32[0];
    v151 = *(float *)((char *)&unk_19094843C + v1 + 8);
    v152 = *(float *)((char *)&unk_19094843C + v1 + 12);
    v153 = *(float *)((char *)&unk_19094843C + v1);
    v154 = *(float *)((char *)&unk_19094843C + v1 + 4);
    if ( (float)((float)((float)(v468.m128_f32[2] * v151) + (float)(v468.m128_f32[3] * v152))
               + (float)((float)(v154 * v468.m128_f32[1]) + (float)(v153 * v468.m128_f32[0]))) < 0.0 )
    {
      v468 = _mm_xor_ps(v468, (__m128)xmmword_1400F7F50);
      v147 = v468.m128_f32[2];
      v149 = v468.m128_f32[1];
      v150 = v468.m128_f32[0];
      v148 = _mm_shuffle_ps(v468, v468, 255).m128_f32[0];
    }
    v155 = v148 * v151;
    v468.m128_f32[1] = -v149;
    v468.m128_f32[0] = -v150;
    v468.m128_f32[2] = -v147;
    v156 = (float)((float)((float)((float)-v150 * v152) + (float)(v153 * v148)) + (float)((float)-v149 * v151))
         - (float)((float)-v147 * v154);
    v157 = (float)((float)((float)(v154 * v148) - (float)((float)-v150 * v151)) + (float)((float)-v149 * v152))
         + (float)(v153 * (float)-v147);
    v158 = (float)((float)((float)(v148 * v152) - (float)(v153 * (float)-v150)) - (float)((float)-v149 * v154))
         - (float)((float)-v147 * v151);
    v159 = (float)((float)(v155 + (float)((float)-v150 * v154)) - (float)(v153 * (float)-v149))
         + (float)((float)-v147 * v152);
    v160 = fsqrt((float)((float)(v157 * v157) + (float)(v156 * v156)) + (float)(v159 * v159));
    if ( v160 == 0.0 )
    {
      v161 = 0.0;
      v162 = 0.0;
      v163 = 0.0;
    }
    else
    {
      v161 = (float)(1.0 / v160) * v156;
      v162 = (float)(1.0 / v160) * v157;
      v163 = (float)(1.0 / v160) * v159;
    }
    v164 = acos(fminf(fmaxf(v158, -1.0), 1.0));
    v165 = v164 + v164;
    v166 = fmaxf(v165, -0.39269909);
    if ( v166 > 0.39269909 )
      v166 = 0.39269909;
    v167 = v162 * v166;
    v168 = v161 * v166;
    v169 = 9 * v146;
    v170 = v163 * v166;
    *(float *)&xmmword_14B6432F0[v169] = (float)((float)(v167 * v13[3]) + (float)(v168 * *v13)) + (float)(v170 * v13[6]);
    *((float *)&xmmword_14B6432F0[v169] + 1) = (float)((float)(v167 * v13[4]) + (float)(v168 * v13[1]))
                                             + (float)(v170 * v13[7]);
    *((float *)&xmmword_14B6432F0[v169] + 2) = (float)((float)(v167 * v13[5]) + (float)(v168 * v13[2]))
                                             + (float)(v170 * v13[8]);
    v171 = 244 * v146;
    v172 = dword_190941F78[v1 / 4];
    *(_DWORD *)((char *)&unk_14B8833A8 + v171) = 0;
    sub_1400495A0((float *)v499, (float *)((char *)&unk_190941E8C + v1), (float *)((char *)&unk_190941D54 + v1));
    sub_1400A8390(&v468, v499);
    v173 = v468.m128_f32[0];
    v174 = v468.m128_f32[1];
    v175 = v468.m128_f32[3];
    v176 = v468.m128_f32[2];
    v177 = *(float *)((char *)&unk_19094844C + v1 + 4);
    v178 = *(float *)((char *)&unk_19094844C + v1);
    v179 = *(float *)((char *)&unk_19094844C + v1 + 8);
    v180 = *(float *)((char *)&unk_19094844C + v1 + 12);
    if ( (float)((float)((float)(v177 * v468.m128_f32[1]) + (float)(v468.m128_f32[0] * v178))
               + (float)((float)(v179 * v468.m128_f32[2]) + (float)(v468.m128_f32[3] * v180))) < 0.0 )
    {
      v468 = _mm_xor_ps(v468, (__m128)xmmword_1400F7F50);
      v176 = v468.m128_f32[2];
      v174 = v468.m128_f32[1];
      v173 = v468.m128_f32[0];
      v175 = _mm_shuffle_ps(v468, v468, 255).m128_f32[0];
    }
    v468.m128_f32[1] = -v174;
    v468.m128_f32[2] = -v176;
    v468.m128_f32[0] = -v173;
    v181 = (float)((float)((float)(v175 * v178) + (float)((float)-v173 * v180)) + (float)((float)-v174 * v179))
         - (float)((float)-v176 * v177);
    v182 = (float)((float)((float)(v177 * v175) - (float)(v179 * (float)-v173)) + (float)((float)-v174 * v180))
         + (float)((float)-v176 * v178);
    v183 = (float)(v179 * v175) + (float)(v177 * (float)-v173);
    v184 = (float)((float)((float)(v175 * v180) - (float)(v178 * (float)-v173)) - (float)(v177 * (float)-v174))
         - (float)((float)-v176 * v179);
    v185 = (float)(v183 - (float)(v178 * (float)-v174)) + (float)((float)-v176 * v180);
    v186 = fsqrt((float)((float)(v182 * v182) + (float)(v181 * v181)) + (float)(v185 * v185));
    if ( v186 == 0.0 )
    {
      v187 = 0.0;
      v188 = 0.0;
      v189 = 0.0;
    }
    else
    {
      v187 = v181 * (float)(1.0 / v186);
      v188 = v182 * (float)(1.0 / v186);
      v189 = v185 * (float)(1.0 / v186);
    }
    v190 = acos(fminf(fmaxf(v184, -1.0), 1.0));
    v191 = v190 + v190;
    v192 = fmaxf(v191, -0.39269909);
    if ( v192 > 0.39269909 )
      v192 = 0.39269909;
    v193 = v188 * v192;
    v194 = 9 * v172;
    v195 = v187 * v192;
    v196 = v189 * v192;
    *(float *)&xmmword_14B6432F0[v194] = (float)((float)(v193 * v75[3]) + (float)(v195 * *v75)) + (float)(v196 * v75[6]);
    *((float *)&xmmword_14B6432F0[v194] + 1) = (float)((float)(v193 * v75[4]) + (float)(v195 * v75[1]))
                                             + (float)(v196 * v75[7]);
    *((float *)&xmmword_14B6432F0[v194] + 2) = (float)((float)(v193 * v75[5]) + (float)(v195 * v75[2]))
                                             + (float)(v196 * v75[8]);
    *((_DWORD *)&unk_14B8833A8 + 61 * v172) = 0;
  }
  v197 = dword_1909420B0[v1 / 4];
  v198 = (float *)((char *)&xmmword_190941FC4 + v1);
  sub_1400495A0((float *)v499, (float *)((char *)&xmmword_190941FC4 + v1), (float *)((char *)&unk_190941E8C + v1));
  sub_1400A8390(&v468, v499);
  v199 = (char *)&unk_1909481F0 + v1;
  *(_QWORD *)v199 = 1065353216;
  *((_QWORD *)v199 + 1) = 0;
  *((_QWORD *)v199 + 2) = 1065353216;
  *((_QWORD *)v199 + 3) = 0;
  *((_DWORD *)v199 + 8) = 1065353216;
  v203.m128_u64[1] = 0;
  *(double *)v203.m128_u64 = _libm_sse2_sincosf_(v201, v200, v202);
  v204 = _mm_shuffle_ps(v203, v203, 1).m128_f32[0];
  v205 = v203.m128_f32[0];
  v206 = 0.0;
  v207 = 0.0;
  sub_140049C20((__int64)&unk_1909481F0 + v1, (float *)((char *)&unk_1909481FC + v1), v208);
  if ( *(_DWORD *)&algn_190941A08[v1 + 32] == 2 && v5 )
  {
    v206 = v203.m128_f32[0] * -0.098017141;
    v205 = v203.m128_f32[0] * 0.99518472;
    v207 = v204 * -0.098017141;
    v204 = v204 * 0.99518472;
    sub_140049C20((__int64)&unk_1909481F0 + v1, (float *)((char *)&unk_190948208 + v1), v211);
  }
  v212 = (__m128)*(unsigned int *)&algn_190941B0C[v1];
  v212.m128_f32[0] = (float)(v212.m128_f32[0] * 0.25) + (float)(*(float *)&dword_190941A64[v1 / 4] * 0.5);
  if ( byte_1962BC9C0 )
  {
    v213 = _mm_cvtps_pd(v212);
    v213.m128d_f64[0] = v213.m128d_f64[0] - 0.39269908169875;
    v212.m128_u64[1] = _mm_cvtpd_ps(v213).m128_u64[1];
  }
  v214.m128_u64[1] = v212.m128_u64[1];
  *(double *)v214.m128_u64 = _libm_sse2_sincosf_(v210, v209, v211);
  v215 = _mm_shuffle_ps(v214, v214, 1).m128_f32[0];
  v216 = (float)(v206 * v215) + (float)(v204 * v214.m128_f32[0]);
  v217 = (float)(v205 * v215) + (float)(v207 * v214.m128_f32[0]);
  v218 = (float)(v207 * v215) - (float)(v205 * v214.m128_f32[0]);
  v478 = v217;
  v477 = v216;
  v219 = (float)(v204 * v215) - (float)(v206 * v214.m128_f32[0]);
  v479 = v218;
  v480 = v219;
  sub_140049C20((__int64)&unk_1909481F0 + v1, (float *)((char *)&unk_1909481F0 + v1), v220);
  if ( v5 && dword_1909419F0[v1 / 4] == -1 )
  {
    v224 = *(float *)((char *)&unk_19094846C + v1);
    v225 = *(float *)((char *)&unk_19094846C + v1 + 4);
    v226 = *(float *)((char *)&unk_19094846C + v1 + 8);
    v227 = *(float *)((char *)&unk_19094846C + v1 + 12);
    v228 = _libm_sse2_sincosf_(v222, v221, v223);
    v229 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v228, (__m128)*(unsigned __int64 *)&v228, 1).m128_f32[0];
    v230 = (float)(v226 * *(float *)&v228) + (float)(v225 * v229);
    v231 = (float)(v226 * v229) - (float)(v225 * *(float *)&v228);
    v232 = (float)(v229 * v224) + (float)(*(float *)&v228 * v227);
    v233 = (float)(v229 * v227) - (float)(*(float *)&v228 * v224);
    v237 = _libm_sse2_sincosf_(v235, v234, v236);
    v238 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v237, (__m128)*(unsigned __int64 *)&v237, 1).m128_f32[0];
    v216 = (float)(v232 * v238) - (float)(v231 * *(float *)&v237);
    v217 = (float)(v230 * v238) + (float)(v233 * *(float *)&v237);
    v218 = (float)(v231 * v238) + (float)(v232 * *(float *)&v237);
    v478 = v217;
    v477 = v216;
    v219 = (float)(v233 * v238) - (float)(v230 * *(float *)&v237);
    v479 = v218;
    v480 = v219;
  }
  v239 = v468.m128_f32[2];
  v240 = v468.m128_f32[1];
  v241 = v468.m128_f32[0];
  if ( (float)((float)((float)(v219 * v468.m128_f32[3]) + (float)(v218 * v468.m128_f32[2]))
             + (float)((float)(v217 * v468.m128_f32[1]) + (float)(v216 * v468.m128_f32[0]))) < 0.0 )
  {
    v468 = _mm_xor_ps(v468, (__m128)xmmword_1400F7F50);
    v240 = v468.m128_f32[1];
    v241 = v468.m128_f32[0];
    v239 = _mm_shuffle_ps(v468, v468, 170).m128_f32[0];
  }
  v468.m128_f32[0] = -v241;
  v468.m128_f32[1] = -v240;
  v468.m128_f32[2] = -v239;
  sub_14009FD70(&v477, &v468, &v477);
  v242 = fsqrt((float)((float)(v478 * v478) + (float)(v477 * v477)) + (float)(v479 * v479));
  if ( v242 == 0.0 )
  {
    v243 = 0.0;
    v244 = 0.0;
    v245 = 0.0;
  }
  else
  {
    v243 = v477 * (float)(1.0 / v242);
    v244 = v478 * (float)(1.0 / v242);
    v245 = v479 * (float)(1.0 / v242);
  }
  v246 = acos(fminf(fmaxf(v480, -1.0), 1.0));
  v247 = v246 + v246;
  if ( byte_1962BC9C0 )
  {
    v249 = fmaxf(v247, -0.25);
    if ( v249 > 0.25 )
      v249 = 0.25;
    v248 = fabs(v249) * v249 * 4.0;
  }
  else
  {
    v248 = fmaxf(v247, -0.39269909);
    if ( v248 > 0.39269909 )
      v248 = 0.39269909;
  }
  v250 = v469;
  v251 = (float *)(0x140000000LL + 144 * v197 + 191116016);
  v252 = (float)((float)(v244 * v248) * 0.75) + v475;
  v253 = (float)((float)(v243 * v248) * 0.75) + v474;
  v254 = (float)((float)(v245 * v248) * 0.75) + v473;
  *v251 = (float)((float)(v252 * v198[3]) + (float)(v253 * *v198)) + (float)(v254 * v198[6]);
  v251[1] = (float)((float)(v252 * v198[4]) + (float)(v253 * v198[1])) + (float)(v254 * v198[7]);
  v251[2] = (float)((float)(v252 * v198[5]) + (float)(v253 * v198[2])) + (float)(v254 * v198[8]);
  sub_14005C2A0(v250, 2, 3, (_DWORD)v251, 1066401792, 1065353216);
  *v251 = *v251;
  v251[1] = v251[1];
  v251[2] = v251[2];
  *((_DWORD *)&unk_14B8833A8 + 61 * v197) = 0;
  v255 = *(float *)(0x140000004LL + 144 * v197 + 191116016);
  v256 = *v251;
  v257 = *(float *)(0x140000008LL + 144 * v197 + 191116016);
  v258 = fsqrt((float)((float)(v256 * v256) + (float)(v255 * v255)) + (float)(v257 * v257));
  if ( v258 == 0.0 )
  {
    v259 = 0.0;
    v260 = 0.0;
    v261 = 0.0;
  }
  else
  {
    v259 = (float)(1.0 / v258) * v256;
    v260 = (float)(1.0 / v258) * v255;
    v261 = (float)(1.0 / v258) * v257;
  }
  v262 = v259 * *(float *)((char *)&unk_190941E98 + v1);
  v263 = v261 * *(float *)((char *)&unk_190941E98 + v1 + 8);
  *(float *)&v471 = (float)((float)(v260 * v75[1]) + (float)(v259 * *v75)) + (float)(v261 * v75[2]);
  v264 = (float)((float)(v260 * *(float *)((char *)&unk_190941E98 + v1 + 4)) + v262) + v263;
  v265 = (float)((float)(v260 * *(float *)((char *)&xmmword_190941E9C + v1 + 12))
               + (float)(v259 * *(float *)((char *)&xmmword_190941E9C + v1 + 8)))
       + (float)(v261 * *(float *)((char *)&xmmword_190941E9C + v1 + 16));
  *((float *)&v471 + 1) = v264;
  v472 = v265;
  sub_1400495A0((float *)v199, (float *)((char *)&unk_190941E8C + v1), v198);
  sub_140049C20((__int64)v199, (float *)&v471, v266);
  v267 = 0;
  v268 = 0;
  if ( SLODWORD(v484) <= 0 )
    v267 = SLODWORD(v483) <= 0;
  v502 = v267;
  v497 = -v470;
  v498 = 0;
  do
  {
    v476 = 0;
    v269 = -1;
    v488 = 0;
    if ( v268 == 1 )
    {
      if ( dword_190948498[v1 / 4] > 0 )
        v269 = dword_19094849C[v1 / 4];
    }
    else if ( *(int *)((char *)&unk_1909484C0 + v1) <= 0 )
    {
      if ( dword_190948498[v1 / 4] > 0 )
      {
        v283 = dword_19025F0D4[1760 * dword_19094849C[v1 / 4]];
        if ( (dword_19012213C[1268 * v283] > 1 || (_DWORD)v283 == 36)
          && (*(float *)((char *)&unk_190948130 + v1) > 0.70700002 || (byte_190941BDC[v1] & 8) == 0) )
        {
          v269 = dword_19094849C[v1 / 4];
          v476 = 1;
          v488 = 1;
        }
      }
    }
    else
    {
      v269 = *(_DWORD *)((char *)&unk_1909484C4 + v1);
    }
    v474 = 0.0;
    v270 = 0;
    if ( v269 != -1 )
    {
      v271 = dword_19025F0D4[1760 * v269];
      v272 = dword_1901220D0[1268 * v271] != 0;
      if ( (_DWORD)v271 == 34 || (LODWORD(v474) = dword_1901220D0[1268 * v271] != 0, v270 = v272, (_DWORD)v271 == 29) )
      {
        v474 = *(float *)&v272;
        v270 = v272;
        if ( !v268 )
        {
          v476 = 1;
          v488 = 1;
          v474 = *(float *)&v272;
        }
      }
    }
    v505 = 1.0;
    v503 = xmmword_1400F78B0;
    v504 = xmmword_1400F78B0;
    sub_140049C20((__int64)&v503, (float *)&dword_140146A18, 1);
    sub_140049C20((__int64)&v503, (float *)&v503, v273);
    sub_140049C20((__int64)&v503, (float *)&v503 + 3, v274);
    if ( *(_DWORD *)((char *)&unk_1909487A8 + v1) == 1 )
      sub_140049C20((__int64)&v503, (float *)&v504 + 2, v275);
    if ( dword_1909419F0[v1 / 4] == -1 && (byte_190941BDC[v1] & 2) != 0 )
      sub_140049C20((__int64)&v503, (float *)&dword_140146A18, v275);
    if ( (byte_190941BDC[v1] & 0x20) != 0 || !*(_DWORD *)((char *)&unk_1909487A8 + v1) )
      sub_140049C20((__int64)&v503, (float *)&dword_140146A18, v275);
    sub_140049C20((__int64)&v503, (float *)&dword_140146A28, v275);
    if ( v269 == -1 )
    {
      v503 = xmmword_1400F78B0;
      v505 = 1.0;
      v504 = xmmword_1400F78B0;
    }
    if ( !v270 || dword_1909419F0[v1 / 4] != -1 )
      goto LABEL_156;
    v276 = -*(float *)((char *)&unk_19094846C + v1);
    v480 = *(float *)((char *)&unk_190948478 + v1);
    v277 = *(float *)((char *)&unk_190948470 + v1);
    v477 = v276;
    v278 = -*(float *)((char *)&unk_190948474 + v1);
    v478 = -v277;
    v479 = v278;
    sub_1400B3D20(&v503, &v477);
    sub_140049C20((__int64)&v503, (float *)&v503, v279);
    if ( dword_1909419F0[v1 / 4] == -1 && (byte_190941BDC[v1] & 2) != 0 )
      sub_140049C20((__int64)&v503, (float *)&v503, 0x140000000LL);
    if ( (byte_190941BDC[v1] & 0x20) != 0 || !*(_DWORD *)((char *)&unk_1909487A8 + v1) )
    {
      sub_140049C20((__int64)&v503, (float *)&v503, 0x140000000LL);
      v280 = 0.1875;
      v281 = 0.0625;
      v282 = 0.0;
    }
    else
    {
LABEL_156:
      v280 = 0.1875;
      v281 = 0.0625;
      v282 = 0.0;
      if ( !v270 )
        goto LABEL_160;
    }
    if ( dword_1909419F0[v1 / 4] == -1 && *(int *)&algn_190941A08[v1 + 32] < 2 )
      v281 = 0.0625;
LABEL_160:
    v284 = *(_DWORD *)&algn_190941A08[v1 + 32];
    if ( v284 == 2 )
    {
      v280 = 0.0625;
      v281 = 0.125;
    }
    if ( v270 && dword_1909419F0[v1 / 4] != -1 )
      v281 = 0.125;
    if ( !v268 && *(int *)((char *)&unk_1909484C0 + v1) > 0 )
    {
      v280 = -0.125;
      v281 = 0.125;
    }
    if ( v269 != -1 )
    {
      v285 = dword_19025F0D4[1760 * v269];
      if ( v285 == 34 || v285 == 29 )
      {
        v280 = 0.0;
        v281 = 0.0;
        v282 = 0.0;
        if ( dword_1909419F0[v1 / 4] != -1 )
          v281 = -0.125;
      }
    }
    v286 = *(_DWORD *)&byte_190941BDC[v1] & 0x20;
    if ( v286 || !*(_DWORD *)((char *)&unk_1909487A8 + v1) )
    {
      v287 = sin((float)(fminf(*(float *)&algn_190941A08[v1 + 48] + 1.17809724509625, 0.0) * 3.0)) * 0.375;
      v282 = (float)(-0.25 - v287) * v505;
      v280 = v280 + (float)((float)(-0.25 - v287) * *((float *)&v504 + 2));
      v281 = v281 + (float)((float)(-0.25 - v287) * *((float *)&v504 + 3));
    }
    v288 = (float)((float)(v280 - (float)(*((float *)&v504 + 2) * 0.1875)) - (float)(*((float *)&v504 + 2) * 0.375))
         + (float)(*((float *)&v503 + 3) * 0.0625);
    v289 = (float)((float)(v281 - (float)(*((float *)&v504 + 3) * 0.1875)) - (float)(*((float *)&v504 + 3) * 0.375))
         + (float)(*(float *)&v504 * 0.0625);
    v290 = (float)((float)(v282 - (float)(v505 * 0.1875)) - (float)(v505 * 0.375))
         + (float)(*((float *)&v504 + 1) * 0.0625);
    if ( v269 != -1 && dword_19025F0D4[1760 * v269] == 39 )
    {
      v288 = (float)((float)(*((float *)&v504 + 2) * 0.27500001) + v288) - (float)(*((float *)&v503 + 3) * 0.125);
      v289 = (float)((float)(*((float *)&v504 + 3) * 0.27500001) + v289) - (float)(*(float *)&v504 * 0.125);
      v290 = (float)((float)(v505 * 0.27500001) + v290) - (float)(*((float *)&v504 + 1) * 0.125);
    }
    if ( v268 == 1 )
    {
      if ( v269 == -1 )
        goto LABEL_195;
      if ( dword_19025F0D4[1760 * v269] == 25 && *((_DWORD *)&unk_19025F33C + 1760 * dword_19094849C[v1 / 4]) == 3 )
      {
        v288 = (float)((float)(*((float *)&v504 + 2) * 0.4375) + v288) + (float)(*((float *)&v503 + 3) * 0.0625);
        v289 = (float)((float)(*((float *)&v504 + 3) * 0.4375) + v289) + (float)(*(float *)&v504 * 0.0625);
        v290 = (float)((float)(v505 * 0.4375) + v290) + (float)(*((float *)&v504 + 1) * 0.0625);
      }
    }
    else if ( v269 == -1 )
    {
      goto LABEL_192;
    }
    v291 = dword_19025F0D4[1760 * v269];
    if ( v291 == 11 )
    {
      if ( dword_1909419F0[v1 / 4] == -1 )
      {
        if ( v284 == 2 )
        {
          v288 = v288 + (float)(*((float *)&v504 + 2) * -0.25);
          v289 = v289 + (float)(*((float *)&v504 + 3) * -0.25);
          v290 = v290 + (float)(v505 * -0.25);
        }
        else
        {
          v288 = v288 + (float)(*((float *)&v503 + 3) * -0.125);
          v289 = v289 + (float)(*(float *)&v504 * -0.125);
          v290 = v290 + (float)(*((float *)&v504 + 1) * -0.125);
        }
      }
    }
    else if ( v291 == 29 || v291 == 34 )
    {
      goto LABEL_195;
    }
LABEL_192:
    if ( !v268 && *(int *)((char *)&unk_1909484C0 + v1) > 0 )
    {
      v288 = v288 + (float)(*((float *)&v504 + 2) * 0.125);
      v289 = v289 + (float)(*((float *)&v504 + 3) * 0.125);
      v290 = v290 + (float)(v505 * 0.125);
    }
LABEL_195:
    if ( v286 || !*(_DWORD *)((char *)&unk_1909487A8 + v1) )
    {
      if ( v269 == -1 )
      {
LABEL_213:
        v295 = 0.0;
        v293 = v269;
        v296 = 0.0;
        v297 = 0.0;
        goto LABEL_214;
      }
    }
    else
    {
      if ( v269 == -1 )
        goto LABEL_213;
      if ( dword_19025F0D4[1760 * v269] == 15 )
      {
        v288 = *(float *)&dword_140146A28 * -0.65625;
        v289 = *(float *)&dword_140146A2C * -0.65625;
        v290 = *(float *)&dword_140146A30 * -0.65625;
        if ( dword_1909419F0[v1 / 4] != -1 )
        {
          v288 = (float)(*(float *)&dword_140146A28 * 0.125) + v288;
          v289 = (float)(*(float *)&dword_140146A2C * 0.125) + v289;
          v290 = (float)(*(float *)&dword_140146A30 * 0.125) + v290;
        }
        if ( v268 )
        {
          if ( v268 == 1 )
            v288 = 0.1875;
        }
        else
        {
          v288 = -0.1875;
        }
      }
      if ( dword_19025F0D4[1760 * v269] == 15 )
      {
        sub_140049C20((__int64)&v503, (float *)&dword_140146A18, 0x140000000LL);
        if ( !v268 || v268 == 1 )
          sub_140049C20((__int64)&v503, (float *)&v504 + 2, v292);
      }
    }
    v293 = v269;
    v294 = 5072LL * dword_19025F0D4[1760 * v269] + 12 * v488;
    v295 = *(float *)((char *)&unk_190122140 + v294);
    v296 = *(float *)((char *)&unk_190122140 + v294 + 4);
    v297 = *(float *)((char *)&unk_190122140 + v294 + 8);
LABEL_214:
    v298 = (float)(v295 * *(float *)&v503) + v288;
    v299 = v295;
    v300 = v298 + (float)(v296 * *((float *)&v503 + 3));
    v301 = (float)((float)(v295 * *((float *)&v503 + 2)) + v290) + (float)(v296 * *((float *)&v504 + 1));
    v302 = (float)((float)(v299 * *((float *)&v503 + 1)) + v289) + (float)(v296 * *(float *)&v504);
    v303 = (float)(v297 * *((float *)&v504 + 2)) + v300;
    v304 = (float)(v297 * v505) + v301;
    v305 = (float)(v297 * *((float *)&v504 + 3)) + v302;
    v465 = v303;
    v467 = v304;
    v466 = v305;
    if ( v269 != -1 && dword_19025F0D4[1760 * v293] == 26 && HIDWORD(qword_19025F428[880 * v293]) )
    {
      v306 = v297 + 0.1875;
      v303 = (float)(*((float *)&v504 + 2) * v306) + v300;
      v305 = (float)(*((float *)&v504 + 3) * v306) + v302;
      v304 = (float)(v505 * v306) + v301;
      v465 = v303;
      v466 = v305;
      v467 = v304;
    }
    if ( (byte_190941BDC[v1] & 0x20) != 0 || !*(_DWORD *)((char *)&unk_1909487A8 + v1) )
    {
      if ( v269 == -1 )
        goto LABEL_221;
      if ( dword_19025F0D4[1760 * v293] == 15 )
      {
        sub_140049C20((__int64)&v503, (float *)&v503, 0x140000000LL);
        if ( (unsigned int)v268 <= 1 )
          sub_140049C20((__int64)&v503, (float *)&v504 + 2, v316);
      }
    }
    else if ( v269 == -1 )
    {
      goto LABEL_221;
    }
    if ( !v270 || (v317 = dword_19025F0D4[1760 * v293], v317 == 11) )
    {
      v318 = v469;
    }
    else if ( v268 == 1 || v476 == 1 )
    {
      v318 = v469;
      sub_14005C060((unsigned int)&v465, v469, v476, v317, LODWORD(v470), (__int64)&v503);
      v304 = v467;
      v305 = v466;
      v303 = v465;
    }
    else
    {
      v318 = v469;
    }
    v319 = *(_DWORD *)((char *)&unk_1909487A8 + v1);
    if ( v319 == 1 )
    {
      v320 = -(float)((float)((float)((float)(v305 * *((float *)&v503 + 1)) + (float)(v303 * *(float *)&v503))
                            + (float)(v304 * *((float *)&v503 + 2)))
                    * *(float *)((char *)&unk_1909487AC + v1));
      v303 = v303 + (float)(*(float *)&v503 * v320);
      v305 = v305 + (float)(*((float *)&v503 + 1) * v320);
      v304 = v304 + (float)(*((float *)&v503 + 2) * v320);
      v465 = v303;
      v466 = v305;
      v467 = v304;
    }
    v321 = *(float *)((char *)&unk_190948154 + v1);
    v322 = *(float *)((char *)&unk_190948158 + v1);
    v323 = *(float *)((char *)&unk_19094815C + v1);
    v324 = 1760 * v293;
    v325 = 188LL * dword_19025F118[1760 * v293];
    v326 = *(float *)((char *)&unk_140249624 + v325);
    v327 = *(float *)((char *)&unk_140249624 + v325 + 4);
    v328 = *(float *)((char *)&unk_140249624 + v325 + 8);
    if ( byte_1962BC9C0 )
    {
      v506 = v326 - v321;
      v507 = v327 - v322;
      v508 = v328 - v323;
      v329 = fsqrt((float)((float)(v507 * v507) + (float)(v506 * v506)) + (float)(v508 * v508));
      sub_140051570(&v506, v329 + v329, 0.0);
      v330 = v1 + 56 * ((unsigned int)v268 ^ 1LL);
      v331 = v507;
      v326 = (float)((float)(v506 + *(float *)((char *)&dword_1909485E8[7] + v330)) * 0.75) + (float)(v326 * 0.25);
      v332 = v327 * 0.25;
      *(float *)((char *)&dword_1909485E8[7] + v330) = v326;
      v333 = (float)(v331 + *(float *)((char *)&dword_1909485E8[8] + v330)) * 0.75;
      v334 = v508;
      v327 = v333 + v332;
      *(float *)((char *)&dword_1909485E8[8] + v330) = v327;
      v328 = (float)((float)(v334 + *(float *)((char *)&dword_1909485E8[9] + v330)) * 0.75) + (float)(v328 * 0.25);
      *(float *)((char *)&dword_1909485E8[9] + v330) = v328;
      v319 = *(_DWORD *)((char *)&unk_1909487A8 + v1);
    }
    v335 = v327 - v322;
    v336 = v326 - v321;
    v337 = v328 - v323;
    v7 = (byte_190941BDC[v1] & 0x20) == 0;
    v338 = v335 * *(float *)((char *)&xmmword_190941E9C + v1);
    v339 = v336 * *(float *)((char *)&unk_190941E98 + v1);
    v340 = (float)((float)(v335 * *(float *)(0x140000004LL + v1 + 1351884428))
                 + (float)(v336 * *(float *)(0x140000000LL + v1 + 1351884428)))
         + (float)(v337 * *(float *)(0x140000008LL + v1 + 1351884428));
    v341 = v337 * *(float *)((char *)&xmmword_190941E9C + v1 + 4);
    v342 = v337 * *(float *)&dword_190941EAC[v1 / 4];
    v343 = (float)(v335 * *(float *)((char *)&xmmword_190941E9C + v1 + 12))
         + (float)(v336 * *(float *)((char *)&xmmword_190941E9C + v1 + 8));
    *(float *)&v471 = v340;
    v344 = (float)(v338 + v339) + v341;
    v345 = v343 + v342;
    *((float *)&v471 + 1) = v344;
    v472 = v345;
    if ( v7 && v319 )
    {
      v303 = v303 + (float)(v340 * -0.75);
      v305 = v305 + (float)(v344 * -0.75);
      v304 = v304 + (float)(v345 * -0.75);
      v465 = v303;
      v466 = v305;
      v467 = v304;
    }
    v346 = dword_19025F0D4[v324];
    if ( v346 == 34 || v346 == 29 )
    {
      sub_140049C20((__int64)&v503, (float *)&v503, 0x140000000LL);
      v346 = dword_19025F0D4[v324];
    }
    if ( v346 == 18 )
    {
      sub_140049C20((__int64)&v503, (float *)&v503, 0x140000000LL);
      v346 = dword_19025F0D4[v324];
    }
    if ( v346 == 28 )
    {
      sub_140055BE0(&v465, v318, v269);
      v511[0] = xmmword_1400F78B0;
      v512 = 1065353216;
      v511[1] = xmmword_1400F78B0;
      sub_140049C20((__int64)v511, (float *)&dword_140146A28, v347);
      sub_1400B3A60(&v503, 0x140000000LL + v1 + 1351884428, v511);
      v304 = v467;
      v305 = v466;
      v303 = v465;
    }
    v348 = dword_19025F0D4[1760 * v293];
    if ( fabs(*(float *)&dword_19012217C[1268 * v348 + 4 * v488]) > 0.0 )
    {
      v349 = *(float *)&dword_190122170[1268 * v348 + 4 * v488];
      v350 = *(float *)&dword_190122174[1268 * v348 + 4 * v488];
      v351 = *(float *)&dword_190122178[1268 * v348 + 4 * v488];
      *(float *)&v471 = (float)((float)(*((float *)&v503 + 3) * v350) + (float)(*(float *)&v503 * v349))
                      + (float)(*((float *)&v504 + 2) * v351);
      *((float *)&v471 + 1) = (float)((float)(*(float *)&v504 * v350) + (float)(*((float *)&v503 + 1) * v349))
                            + (float)(*((float *)&v504 + 3) * v351);
      v472 = (float)((float)(*((float *)&v504 + 1) * v350) + (float)(*((float *)&v503 + 2) * v349))
           + (float)(v505 * v351);
      sub_140049C20((__int64)&v503, (float *)&v471, 0x140000000LL);
    }
LABEL_221:
    if ( !v268 )
    {
      sub_140051570((float *)&v471, 0.0078125, 0.0);
      v307 = *(float *)&v471 + *(float *)&algn_190941B0C[v1 + 112];
      v308 = *((float *)&v471 + 1);
      v309 = v472;
      *(float *)&algn_190941B0C[v1 + 112] = v307;
      *(float *)&v310 = v308 + *(float *)&dword_190941B80[v1 / 4];
      dword_190941B80[v1 / 4] = v310;
      *(float *)&v311 = v309 + *(float *)&dword_190941B84[v1 / 4];
      dword_190941B84[v1 / 4] = v311;
      v312 = v307 - (float)(*(float *)&algn_190941B0C[v1 + 100] * 0.00390625);
      *(float *)&algn_190941B0C[v1 + 112] = v312;
      v313 = v312 * 0.9375;
      *(float *)&v314 = *(float *)&v310 - (float)(*(float *)&algn_190941B0C[v1 + 104] * 0.00390625);
      dword_190941B80[v1 / 4] = v314;
      v315 = *(float *)&algn_190941B0C[v1 + 108];
      *(float *)&algn_190941B0C[v1 + 112] = v313;
      *(float *)&dword_190941B80[v1 / 4] = *(float *)&v314 * 0.9375;
      *(float *)&dword_190941B84[v1 / 4] = (float)(*(float *)&v311 - (float)(v315 * 0.00390625)) * 0.9375;
      *(float *)&algn_190941B0C[v1 + 100] = v313 + *(float *)&algn_190941B0C[v1 + 100];
      *(float *)&algn_190941B0C[v1 + 104] = *(float *)&dword_190941B80[v1 / 4] + *(float *)&algn_190941B0C[v1 + 104];
      *(float *)&algn_190941B0C[v1 + 108] = *(float *)&dword_190941B84[v1 / 4] + *(float *)&algn_190941B0C[v1 + 108];
    }
    v352 = v498;
    v353 = 300 * v498;
    v354 = (float)((float)(*(float *)&v504 * 0.0625) + v305) - *((float *)&qword_191041744 + 75 * v498);
    v465 = (float)((float)(*((float *)&v503 + 3) * 0.0625) + v303) - *((float *)&xmmword_191041734 + 75 * v498 + 3);
    v466 = v354;
    v467 = (float)((float)(*((float *)&v504 + 1) * 0.0625) + v304) - *((float *)&qword_191041744 + 75 * v498 + 1);
    if ( v269 == -1 )
    {
      v465 = -0.0625;
      if ( v268 )
        v465 = 0.0625;
      v355 = *(_DWORD *)&algn_190941A08[v1 + 32];
      v356 = *(float *)((char *)&unk_190948494 + v1) * 0.39269908169875;
      if ( v355 > 0 )
        v356 = v356 * 0.5;
      if ( v268 == 1 )
        v356 = -v356;
      v357 = 0;
      v357.m128d_f64[0] = v356;
      if ( v355 )
        v358 = 0.196349540849375;
      else
        v358 = 0.39269908169875;
      v357.m128d_f64[0] = v357.m128d_f64[0] + v358;
      v359 = _mm_cvtpd_ps(v357);
      if ( dword_1909480FC[v1 / 4] > 0 )
        v359 = (__m128)0x3F490FDBu;
      v360 = 0.875;
      if ( !v355 )
        v360 = 0.75;
      if ( byte_1962BC9C0 )
      {
        v361 = (__m128d)0x4005FDBBE9BBA90DuLL;
        v362 = *(float *)&dword_190941A64[v1 / 4];
        v361.m128d_f64[0] = 2.74889357189125 - (float)((float)(v362 + *(float *)&algn_190941B0C[v1]) * 1.5);
        v359 = _mm_cvtpd_ps(v361);
        v360 = 1.0;
        if ( v362 > 0.0 )
        {
          v363 = v362 * 0.75;
          if ( v363 >= 0.75 )
            v360 = 0.25;
          else
            v360 = 1.0 - v363;
        }
      }
      if ( ((*(_DWORD *)&algn_190941A08[v1 + 24] - 1) & 0xFFFFFFFD) == 0 )
      {
        v360 = 0.9375;
        v364 = (__m128d)0x3FF921FB54442EEAuLL;
        v364.m128d_f64[0] = 1.570796326795 - (float)(*(float *)&algn_190941B0C[v1] + *(float *)&dword_190941A64[v1 / 4]);
        v359 = _mm_cvtpd_ps(v364);
      }
      if ( dword_1909419F0[v1 / 4] != -1 )
        v359 = (__m128)0x3FC90FDBu;
      v365.m128d_f64[1] = _mm_cvtps_pd(v359).m128d_f64[1];
      v365.m128d_f64[0] = _libm_sse2_sincos_();
      v367 = _mm_shuffle_pd(v365, v365, 1).m128d_f64[0] * -0.65625 * v360;
      *(float *)v365.m128d_f64 = v365.m128d_f64[0] * -0.65625 * v360;
      v466 = v367;
      v467 = *(float *)v365.m128d_f64;
      if ( v502 && v268 == 1 && (byte_190941BDC[v1] & 3) == 3 )
      {
        v465 = -0.1875;
        v466 = 0.0;
        v467 = -0.65625;
        sub_140049E50(&v465, (float *)&dword_140146A18, v366);
        sub_140049E50(&v465, (float *)&dword_140146A28, v368);
      }
    }
    else if ( dword_19025F0D4[1760 * v293] == 36 )
    {
      v465 = 0.1875;
      if ( v268 )
        v465 = -0.1875;
      v466 = 0.56318527;
      v467 = -0.11202452;
    }
    sub_1400A8390(&v468, &v503);
    v7 = *(_DWORD *)((char *)&unk_1909487A8 + v1) == 0;
    v468.m128_i32[0] ^= 0x80000000;
    v468.m128_f32[1] = -v468.m128_f32[1];
    v468.m128_i32[2] ^= 0x80000000;
    v475 = 0.19634955;
    if ( v7 )
      v475 = 0.78539819;
    if ( dword_1909480FC[v1 / 4] > 0 )
      v475 = 0.78539819;
    v369 = *(_DWORD *)&algn_190941A08[v1 + 24];
    if ( v369 == 3 )
    {
      v475 = 0.78539819;
    }
    else if ( v369 == 2 )
    {
      goto LABEL_297;
    }
    if ( *(_DWORD *)&algn_190941A08[v1 + 20]
      && *(float *)((char *)&unk_190948130 + v1) < 0.5
      && (byte_190941BDC[v1] & 8) != 0 )
    {
      v370 = *(float *)&dword_190941E90[v1 / 4];
      v371 = *(float *)((char *)&unk_190941E8C + v1);
      v372 = *(float *)&dword_190941E94[v1 / 4];
      v373 = *(float *)((char *)&unk_190941E98 + v1);
      v496 = *(float *)&dword_190941EAC[v1 / 4];
      v483 = *(float *)((char *)&xmmword_190941E9C + v1);
      v374 = (float)((float)(v371 * *(float *)&dword_140146A28) + (float)(v370 * *(float *)&dword_140146A2C))
           + (float)(v372 * *(float *)&dword_140146A30);
      v495 = *(float *)((char *)&xmmword_190941E9C + v1 + 4);
      v484 = *(float *)((char *)&xmmword_190941E9C + v1 + 8);
      v375 = (float)((float)(v373 * *(float *)&dword_140146A28) + (float)(v483 * *(float *)&dword_140146A2C))
           + (float)(v495 * *(float *)&dword_140146A30);
      v494 = *(float *)((char *)&xmmword_190941E9C + v1 + 12);
      v376 = (float)((float)(v484 * *(float *)&dword_140146A28) + (float)(v494 * *(float *)&dword_140146A2C))
           + (float)(v496 * *(float *)&dword_140146A30);
      v377 = fsqrt((float)((float)(v375 * v375) + (float)(v374 * v374)) + (float)(v376 * v376));
      if ( v377 == 0.0 )
      {
        v471 = 0;
        v378 = 0.0;
        v379 = 0.0;
        v380 = 0.0;
      }
      else
      {
        v378 = (float)(1.0 / v377) * v374;
        v379 = (float)(1.0 / v377) * v375;
        *(float *)&v471 = v378;
        v380 = (float)(1.0 / v377) * v376;
        *((float *)&v471 + 1) = v379;
      }
      v381 = *(float *)((char *)&xmmword_191041734 + v353 + 12);
      v382 = *(float *)((char *)&qword_191041744 + v353);
      v383 = *(float *)((char *)&qword_191041744 + v353 + 4);
      v384 = 0.65625;
      v385 = (float)(v371 * v381) + *(float *)((char *)&unk_190941E5C + v1);
      v386 = (float)(v370 * v381) + *(float *)((char *)&unk_190941E60 + v1);
      v387 = (float)((float)(v372 * v381) + *(float *)((char *)&unk_190941E64 + v1)) + (float)(v495 * v382);
      v472 = v380;
      *(float *)&v509 = (float)(v385 + (float)(v373 * v382)) + (float)(v484 * v383);
      v506 = *(float *)&v509 - *(float *)&dword_140146A28;
      v510 = v387 + (float)(v496 * v383);
      *((float *)&v509 + 1) = (float)(v386 + (float)(v483 * v382)) + (float)(v494 * v383);
      v508 = v510 - *(float *)&dword_140146A30;
      v507 = *((float *)&v509 + 1) - *(float *)&dword_140146A2C;
      if ( (unsigned int)sub_1400828D0(&v509, &v506, 0) )
        v384 = (float)(*((float *)&v509 + 1) - *(float *)&qword_16E18CA44) + 0.00390625;
      v388 = -fminf(v384, 0.65625);
      v465 = v378 * v388;
      v466 = v379 * v388;
      v467 = v380 * v388;
    }
LABEL_297:
    v389 = *(_DWORD *)&byte_190941BDC[v1];
    v390 = 6;
    if ( v269 == -1 )
      v390 = 4;
    v500 = 1065353216;
    v509 = 0;
    v391 = v390 | 1;
    v510 = 0.0;
    v485 = 1050069988;
    v392 = *(&v492 + v352);
    v489 = 1063256064;
    v486 = 1041681380;
    v490 = 1063256064;
    v487 = 1041681380;
    v491 = 1063256064;
    v499[0] = xmmword_1400F78B0;
    if ( v392 >= 1.0 )
      v391 = v390;
    v499[1] = xmmword_1400F78B0;
    if ( v269 == -1 && (((v268 != 1) + 1) & v389) == (v268 != 1) + 1 )
    {
      v475 = 0.39269909;
      v393 = 0.0;
      v486 = 1050069988;
      v487 = 1050069988;
    }
    else
    {
      if ( dword_1909419F0[v1 / 4] != -1 || v269 != -1 )
        goto LABEL_312;
      v394 = *(_DWORD *)&algn_190941A08[v1 + 24];
      if ( v394 != 3 )
      {
        if ( v394 == 1 && (v389 & 8) == 0 )
        {
LABEL_311:
          v473 = 0.0;
          v395 = 0.0;
          v485 = 1033292772;
          v486 = 1033292772;
          v487 = 1033292772;
          v489 = 1061158912;
          v490 = 1061158912;
          v491 = 1061158912;
          v481 = 0x3D8000003D800000LL;
          v482 = 1031798784;
          goto LABEL_328;
        }
LABEL_312:
        v393 = 0.0;
        if ( v269 != -1 )
        {
          v393 = 0.78539819;
          v396 = dword_19025F0D4[1760 * v293];
          if ( v396 == 11 )
          {
            v393 = 0.39269909;
          }
          else if ( v396 == 3 )
          {
            v393 = 1.3744467;
          }
        }
        goto LABEL_317;
      }
      if ( *(float *)((char *)&unk_1909482DC + v1) >= 0.875 )
        goto LABEL_311;
      v393 = 0.0;
    }
LABEL_317:
    if ( v268 )
    {
      if ( v268 == 1 )
      {
        v473 = v393;
        v397 = v393;
      }
      else
      {
        v397 = v473;
      }
    }
    else
    {
      v397 = -v393;
      v473 = -v393;
    }
    if ( (v389 & 0x20) != 0 || !*(_DWORD *)((char *)&unk_1909487A8 + v1) )
    {
      v397 = 0.0;
      v473 = 0.0;
    }
    v481 = 0;
    v482 = 0;
    if ( v392 < 1.0 )
    {
      *(float *)&v481 = (float)(v392 * 0.015625) + 0.00390625;
      *((float *)&v481 + 1) = *(float *)&v481;
    }
    v391 |= 0x10u;
    v395 = v397;
LABEL_328:
    v398 = v475;
    v399 = 3 * v268;
    sub_14005AB00(
      v469,
      2,
      3 * v268 + 4,
      (unsigned int)&v465,
      (__int64)v499,
      (__int64)&v509,
      1059586048,
      LODWORD(v395),
      (__int64)&v468,
      (__int64)&v485,
      (__int64)&v489,
      (__int64)&v481,
      LODWORD(v475),
      v391);
    if ( v269 == -1 )
    {
      if ( *(_DWORD *)&algn_190941A08[v1 + 24] == 2 )
      {
        v436 = asinf(*(float *)((char *)&xmmword_190941C2C + v1 + 12));
        if ( v436 <= 0.0 )
          v437 = 0.25;
        else
          v437 = 4.0;
        v438 = v436 * v437;
        if ( v438 > 2.748893571891069 )
          v438 = 2.7488935;
        v465 = -0.09375;
        if ( v268 )
          v465 = 0.09375;
        v439 = _libm_sse2_sincos_();
        v440 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v439, (__m128d)*(unsigned __int64 *)&v439, 1).m128d_f64[0]
             * -0.4921875;
        *(float *)&v439 = v439 * -0.4921875;
        v466 = v440;
        v467 = *(float *)&v439;
        if ( v438 <= 0.0 )
          v441 = 0.0;
        else
          v441 = v438 * 0.5;
        if ( v268 )
        {
          if ( v268 == 1 )
            v473 = v441;
          else
            v441 = v473;
        }
        else
        {
          v441 = -v441;
          v473 = v441;
        }
        v401 = v469;
        v481 = 0x3D8000003D800000LL;
        v482 = 1031798784;
        sub_14005AB00(
          v469,
          2,
          v399 + 4,
          (unsigned int)&v465,
          (__int64)v499,
          (__int64)&v509,
          1059586048,
          LODWORD(v441),
          (__int64)&v468,
          (__int64)&v485,
          (__int64)&v489,
          (__int64)&v481,
          LODWORD(v398),
          v391);
      }
      else
      {
        v401 = v469;
      }
    }
    else
    {
      v400 = 1760 * v293;
      v401 = v469;
      v471 = 0;
      v472 = 0.0;
      v402 = dword_19025F0D4[v400];
      v403 = 5072 * v402 + 12 * v488;
      v404 = *(_DWORD *)((char *)&unk_190122140 + v403 + 4);
      v501[0] = *(_DWORD *)((char *)&unk_190122140 + v403);
      v405 = *(_DWORD *)((char *)&unk_190122140 + v403 + 8);
      v501[1] = v404;
      v501[2] = v405;
      sub_14005E450(
        v469,
        v399 + 6,
        v269,
        (unsigned int)&v471,
        (__int64)v501,
        (__int64)&dword_190122170[1268 * v402 + 4 * (unsigned int)v476]);
      if ( (byte_190941BDC[v1] & 0x20) == 0
        && *(_DWORD *)((char *)&unk_1909487A8 + v1)
        && v268 == 1
        && v474 != 0.0
        && dword_1909419F0[v1 / 4] == -1 )
      {
        sub_140053BC0(v401, v269);
      }
    }
    ++v498;
    ++v268;
  }
  while ( v268 < 2 );
  v406 = dword_190941F78[v1 / 4];
  HIDWORD(xmmword_14B643320[9 * dword_190941E40[v1 / 4]]) = 0;
  v407 = 9 * v406;
  v408 = dword_1909420B0[v1 / 4];
  HIDWORD(xmmword_14B643320[v407]) = 0;
  v409 = 9 * v408;
  v410 = dword_1909421E8[v1 / 4];
  HIDWORD(xmmword_14B643320[v409]) = 0;
  v411 = 9 * v410;
  v412 = dword_190942320[v1 / 4];
  HIDWORD(xmmword_14B643320[v411]) = 0;
  v413 = 9 * v412;
  v414 = dword_190942590[v1 / 4];
  HIDWORD(xmmword_14B643320[v413]) = 0;
  v415 = 9 * v414;
  v416 = dword_1909426C8[v1 / 4];
  HIDWORD(xmmword_14B643320[v415]) = 0;
  v7 = *(_DWORD *)&algn_190941A08[v1 + 24] == 2;
  HIDWORD(xmmword_14B643320[9 * v416]) = 0;
  if ( v7 )
  {
    v417 = dword_190941E40[v1 / 4];
    v418 = &xmmword_14B643330[9 * v417];
    HIDWORD(xmmword_14B643320[9 * v417]) = 0;
    *(_QWORD *)v418 = 0;
    *((_DWORD *)v418 + 2) = 0;
    sub_1400535A0(v401, 0, 1, (float *)v418);
    if ( (float)((float)((float)(*(float *)&xmmword_14B643330[9 * v417] * *(float *)&xmmword_14B643330[9 * v417])
                       + (float)(*((float *)&xmmword_14B643330[9 * v417] + 1)
                               * *((float *)&xmmword_14B643330[9 * v417] + 1)))
               + (float)(*((float *)&xmmword_14B643330[9 * v417] + 2) * *((float *)&xmmword_14B643330[9 * v417] + 2))) > 0.0 )
      HIDWORD(xmmword_14B643320[9 * v417]) = 1;
    v419 = 244 * v417;
    v420 = dword_190941F78[v1 / 4];
    *(_DWORD *)((char *)&unk_14B8833A8 + v419) = 1006632960;
    v421 = &xmmword_14B643330[9 * v420];
    HIDWORD(xmmword_14B643320[9 * v420]) = 0;
    *(_QWORD *)v421 = 0;
    *((_DWORD *)v421 + 2) = 0;
    sub_1400535A0(v401, 1, 2, (float *)v421);
    if ( (float)((float)((float)(*(float *)&xmmword_14B643330[9 * v420] * *(float *)&xmmword_14B643330[9 * v420])
                       + (float)(*((float *)&xmmword_14B643330[9 * v420] + 1)
                               * *((float *)&xmmword_14B643330[9 * v420] + 1)))
               + (float)(*((float *)&xmmword_14B643330[9 * v420] + 2) * *((float *)&xmmword_14B643330[9 * v420] + 2))) > 0.0 )
      HIDWORD(xmmword_14B643320[9 * v420]) = 1;
    v422 = dword_1909420B0[v1 / 4];
    v423 = 9 * v422;
    v424 = &xmmword_14B643330[9 * v422];
    *((_DWORD *)&unk_14B8833A8 + 61 * v420) = 1006632960;
    HIDWORD(xmmword_14B643320[9 * v422]) = 0;
    *(_QWORD *)v424 = 0;
    *((_DWORD *)v424 + 2) = 0;
    sub_1400535A0(v401, 2, 3, (float *)v424);
    if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v423] * *(float *)&xmmword_14B643330[v423])
                       + (float)(*((float *)&xmmword_14B643330[v423] + 1) * *((float *)&xmmword_14B643330[v423] + 1)))
               + (float)(*((float *)&xmmword_14B643330[v423] + 2) * *((float *)&xmmword_14B643330[v423] + 2))) > 0.0 )
      HIDWORD(xmmword_14B643320[v423]) = 1;
    v425 = 244 * v422;
    v426 = 4;
    v427 = 4;
    v428 = &dword_190942320[v1 / 4];
    *(_DWORD *)((char *)&unk_14B8833A8 + v425) = 1006632960;
    do
    {
      v429 = *(v428 - 78);
      v430 = 9 * v429;
      v431 = &xmmword_14B643330[9 * v429];
      HIDWORD(xmmword_14B643320[9 * v429]) = 0;
      *(_QWORD *)v431 = 0;
      *((_DWORD *)v431 + 2) = 0;
      sub_1400535A0(v401, 2, v427, (float *)v431);
      if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v430] * *(float *)&xmmword_14B643330[v430])
                         + (float)(*((float *)&xmmword_14B643330[v430] + 1) * *((float *)&xmmword_14B643330[v430] + 1)))
                 + (float)(*((float *)&xmmword_14B643330[v430] + 2) * *((float *)&xmmword_14B643330[v430] + 2))) > 0.0 )
        HIDWORD(xmmword_14B643320[v430]) = 1;
      v432 = 244 * v429;
      v433 = *v428;
      *(_DWORD *)((char *)&unk_14B8833A8 + v432) = 1023410176;
      v434 = 9 * v433;
      v435 = &xmmword_14B643330[9 * v433];
      HIDWORD(xmmword_14B643320[9 * v433]) = 0;
      *(_QWORD *)v435 = 0;
      *((_DWORD *)v435 + 2) = 0;
      sub_1400535A0(v401, v427, v427 + 1, (float *)v435);
      if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v434] * *(float *)&xmmword_14B643330[v434])
                         + (float)(*((float *)&xmmword_14B643330[v434] + 1) * *((float *)&xmmword_14B643330[v434] + 1)))
                 + (float)(*((float *)&xmmword_14B643330[v434] + 2) * *((float *)&xmmword_14B643330[v434] + 2))) > 0.0 )
        HIDWORD(xmmword_14B643320[v434]) = 1;
      v427 += 3;
      v428 += 234;
      *((_DWORD *)&unk_14B8833A8 + 61 * v433) = 1023410176;
    }
    while ( v427 < 10 );
  }
  else
  {
    v426 = 4;
  }
  result = *(unsigned int *)((char *)&unk_190941A40 + v1);
  if ( (int)result > 0 )
  {
    v443 = dword_190941E40[v1 / 4];
    v444 = 9 * v443;
    v445 = &xmmword_14B643330[9 * v443];
    HIDWORD(xmmword_14B643320[9 * v443]) = 0;
    *(_QWORD *)v445 = 0;
    *((_DWORD *)v445 + 2) = 0;
    v446 = 0.125 - (float)(fminf((float)(int)result * 0.016666668, 1.0) * 0.1171875);
    sub_1400535A0(v401, 0, 1, (float *)v445);
    if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v444] * *(float *)&xmmword_14B643330[v444])
                       + (float)(*((float *)&xmmword_14B643330[v444] + 1) * *((float *)&xmmword_14B643330[v444] + 1)))
               + (float)(*((float *)&xmmword_14B643330[v444] + 2) * *((float *)&xmmword_14B643330[v444] + 2))) > 0.0 )
      HIDWORD(xmmword_14B643320[v444]) = 1;
    v447 = 244 * v443;
    v448 = dword_190941F78[v1 / 4];
    *(float *)((char *)&unk_14B8833A8 + v447) = v446;
    v449 = 9 * v448;
    v450 = &xmmword_14B643330[9 * v448];
    HIDWORD(xmmword_14B643320[9 * v448]) = 0;
    *(_QWORD *)v450 = 0;
    *((_DWORD *)v450 + 2) = 0;
    sub_1400535A0(v401, 1, 2, (float *)v450);
    if ( (float)((float)((float)(*((float *)&xmmword_14B643330[v449] + 1) * *((float *)&xmmword_14B643330[v449] + 1))
                       + (float)(*(float *)&xmmword_14B643330[v449] * *(float *)&xmmword_14B643330[v449]))
               + (float)(*((float *)&xmmword_14B643330[v449] + 2) * *((float *)&xmmword_14B643330[v449] + 2))) > 0.0 )
      HIDWORD(xmmword_14B643320[v449]) = 1;
    v451 = 244 * v448;
    v452 = dword_1909420B0[v1 / 4];
    *(float *)((char *)&unk_14B8833A8 + v451) = v446;
    v453 = 9 * v452;
    v454 = &xmmword_14B643330[9 * v452];
    HIDWORD(xmmword_14B643320[9 * v452]) = 0;
    *(_QWORD *)v454 = 0;
    *((_DWORD *)v454 + 2) = 0;
    sub_1400535A0(v401, 2, 3, (float *)v454);
    if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v453] * *(float *)&xmmword_14B643330[v453])
                       + (float)(*((float *)&xmmword_14B643330[v453] + 1) * *((float *)&xmmword_14B643330[v453] + 1)))
               + (float)(*((float *)&xmmword_14B643330[v453] + 2) * *((float *)&xmmword_14B643330[v453] + 2))) > 0.0 )
      HIDWORD(xmmword_14B643320[v453]) = 1;
    v455 = 244 * v452;
    v456 = (int *)(0x140000000LL + v1 + 1351885600);
    *(float *)((char *)&unk_14B8833A8 + v455) = v446;
    v457 = v446 * 0.25;
    do
    {
      v458 = *(v456 - 78);
      v459 = 9 * v458;
      v460 = &xmmword_14B643330[9 * v458];
      HIDWORD(xmmword_14B643320[9 * v458]) = 0;
      *(_QWORD *)v460 = 0;
      *((_DWORD *)v460 + 2) = 0;
      sub_1400535A0(v401, 2, v426, (float *)v460);
      if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v459] * *(float *)&xmmword_14B643330[v459])
                         + (float)(*((float *)&xmmword_14B643330[v459] + 1) * *((float *)&xmmword_14B643330[v459] + 1)))
                 + (float)(*((float *)&xmmword_14B643330[v459] + 2) * *((float *)&xmmword_14B643330[v459] + 2))) > 0.0 )
        HIDWORD(xmmword_14B643320[v459]) = 1;
      v461 = 244 * v458;
      v462 = *v456;
      *(float *)((char *)&unk_14B8833A8 + v461) = v457;
      v463 = 9 * v462;
      v464 = &xmmword_14B643330[9 * v462];
      HIDWORD(xmmword_14B643320[9 * v462]) = 0;
      *(_QWORD *)v464 = 0;
      *((_DWORD *)v464 + 2) = 0;
      sub_1400535A0(v401, v426, v426 + 1, (float *)v464);
      if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v463] * *(float *)&xmmword_14B643330[v463])
                         + (float)(*((float *)&xmmword_14B643330[v463] + 1) * *((float *)&xmmword_14B643330[v463] + 1)))
                 + (float)(*((float *)&xmmword_14B643330[v463] + 2) * *((float *)&xmmword_14B643330[v463] + 2))) > 0.0 )
        HIDWORD(xmmword_14B643320[v463]) = 1;
      result = 244 * v462;
      v426 += 3;
      v456 += 234;
      *((float *)&unk_14B8833A8 + 61 * v462) = v457;
    }
    while ( v426 < 10 );
  }
  return result;
}

