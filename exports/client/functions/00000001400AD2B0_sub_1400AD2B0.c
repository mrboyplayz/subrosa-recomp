/* Address: 0x1400ad2b0 | Name: sub_1400AD2B0 | Size: 16523 bytes */
__int64 __fastcall sub_1400AD2B0(signed int a1)
{
  __int64 v1; // rsi
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
  __int64 v14; // rcx
  unsigned int *v15; // rdi
  __int128 v16; // xmm6
  __m128 v17; // xmm0
  float v18; // xmm9_4
  float v19; // xmm8_4
  __int64 v20; // rcx
  __m128 v21; // xmm6
  __m128d v22; // xmm0
  __m128 v23; // xmm0
  float v24; // xmm11_4
  float v25; // xmm14_4
  float v26; // xmm7_4
  float v27; // xmm13_4
  float v28; // xmm11_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  float v33; // xmm8_4
  float v34; // xmm9_4
  float v35; // xmm10_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm11_4
  float v39; // xmm8_4
  float v40; // xmm7_4
  double v41; // xmm0_8
  float v42; // xmm6_4
  float v43; // xmm6_4
  float v44; // xmm6_4
  float v45; // xmm5_4
  float v46; // xmm4_4
  float v47; // xmm3_4
  __int64 v48; // r15
  float *v49; // rbx
  float v50; // xmm2_4
  float v51; // xmm0_4
  float v52; // xmm4_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm3_4
  float v56; // xmm11_4
  float v57; // xmm8_4
  float v58; // xmm7_4
  float v59; // xmm1_4
  unsigned int v60; // ecx
  float v61; // xmm3_4
  float v62; // xmm5_4
  float v63; // xmm8_4
  float v64; // xmm7_4
  float v65; // xmm6_4
  float v66; // xmm5_4
  float v67; // xmm4_4
  float v68; // xmm3_4
  float v69; // xmm0_4
  float v70; // xmm2_4
  float v71; // xmm1_4
  float v72; // xmm5_4
  float v73; // xmm4_4
  __int64 v74; // rbx
  float *v75; // r15
  unsigned int *v76; // rdi
  float v77; // xmm0_4
  __m128 v78; // xmm6
  __m128d v79; // xmm0
  __m128 v80; // xmm0
  float v81; // xmm10_4
  float v82; // xmm9_4
  __int64 v83; // rcx
  __int128 v84; // xmm6
  __m128 v85; // xmm0
  float v86; // xmm8_4
  float v87; // xmm7_4
  float v88; // xmm14_4
  float v89; // xmm13_4
  float v90; // xmm8_4
  float v91; // xmm3_4
  float v92; // xmm4_4
  float v93; // xmm6_4
  float v94; // xmm5_4
  float v95; // xmm9_4
  float v96; // xmm10_4
  float v97; // xmm11_4
  float v98; // xmm3_4
  float v99; // xmm0_4
  float v100; // xmm7_4
  float v101; // xmm8_4
  float v102; // xmm6_4
  double v103; // xmm0_8
  float v104; // xmm4_4
  float v105; // xmm4_4
  float v106; // xmm4_4
  float v107; // xmm2_4
  float v108; // xmm5_4
  float v109; // xmm3_4
  float v110; // xmm1_4
  float *v111; // rbx
  float v112; // xmm9_4
  float v113; // xmm0_4
  float v114; // xmm9_4
  float v115; // xmm0_4
  float v116; // xmm3_4
  float v117; // xmm9_4
  float v118; // xmm1_4
  float v119; // xmm2_4
  float v120; // xmm7_4
  float v121; // xmm9_4
  float v122; // xmm0_4
  float v123; // xmm5_4
  float v124; // xmm9_4
  float v125; // xmm6_4
  float v126; // xmm8_4
  float v127; // xmm1_4
  unsigned int v128; // ecx
  float v129; // xmm3_4
  float v130; // xmm5_4
  float v131; // xmm8_4
  float v132; // xmm7_4
  float v133; // xmm6_4
  float v134; // xmm5_4
  float v135; // xmm4_4
  float v136; // xmm3_4
  float v137; // xmm0_4
  float v138; // xmm2_4
  float v139; // xmm1_4
  float v140; // xmm5_4
  float v141; // xmm4_4
  __int64 v142; // rbx
  float v143; // xmm4_4
  float v144; // xmm3_4
  float v145; // xmm5_4
  float v146; // xmm6_4
  float v147; // xmm13_4
  float v148; // xmm14_4
  float v149; // xmm8_4
  float v150; // xmm11_4
  float v151; // xmm10_4
  float v152; // xmm7_4
  float v153; // xmm9_4
  float v154; // xmm3_4
  float v155; // xmm10_4
  float v156; // xmm0_4
  float v157; // xmm8_4
  float v158; // xmm7_4
  float v159; // xmm6_4
  double v160; // xmm0_8
  float v161; // xmm1_4
  float v162; // xmm1_4
  float v163; // xmm7_4
  float v164; // xmm8_4
  __int64 v165; // rax
  float v166; // xmm6_4
  __int64 v167; // rax
  __int64 v168; // rbx
  float v169; // xmm9_4
  float v170; // xmm5_4
  float v171; // xmm3_4
  float v172; // xmm4_4
  float v173; // xmm11_4
  float v174; // xmm10_4
  float v175; // xmm13_4
  float v176; // xmm14_4
  float v177; // xmm7_4
  float v178; // xmm6_4
  float v179; // xmm8_4
  float v180; // xmm3_4
  float v181; // xmm8_4
  float v182; // xmm4_4
  float v183; // xmm7_4
  float v184; // xmm6_4
  float v185; // xmm8_4
  double v186; // xmm0_8
  float v187; // xmm1_4
  float v188; // xmm1_4
  float v189; // xmm6_4
  __int64 v190; // rax
  float v191; // xmm7_4
  float v192; // xmm8_4
  __int64 v193; // rbx
  float *v194; // r12
  unsigned int *v195; // r14
  __int64 v196; // rcx
  __m128 v197; // xmm0
  float v198; // xmm11_4
  float v199; // xmm8_4
  float v200; // xmm10_4
  float v201; // xmm13_4
  __int64 v202; // rcx
  __m128 v203; // xmm9
  __m128d v204; // xmm0
  __m128 v205; // xmm0
  float v206; // xmm3_4
  float v207; // xmm7_4
  float v208; // xmm6_4
  float v209; // xmm13_4
  float v210; // xmm11_4
  __int64 v211; // rcx
  float v212; // xmm8_4
  float v213; // xmm6_4
  float v214; // xmm13_4
  float v215; // xmm7_4
  double v216; // xmm0_8
  float v217; // xmm11_4
  float v218; // xmm10_4
  float v219; // xmm13_4
  float v220; // xmm9_4
  float v221; // xmm11_4
  __int64 v222; // rcx
  double v223; // xmm0_8
  float v224; // xmm2_4
  float v225; // xmm0_4
  float v226; // xmm1_4
  float v227; // xmm2_4
  float v228; // xmm3_4
  float v229; // xmm7_4
  float v230; // xmm6_4
  float v231; // xmm8_4
  double v232; // xmm0_8
  float v233; // xmm1_4
  float v234; // xmm1_4
  float v235; // xmm1_4
  unsigned int v236; // ecx
  float *v237; // rdi
  float v238; // xmm6_4
  float v239; // xmm7_4
  float v240; // xmm8_4
  float v241; // xmm1_4
  float v242; // xmm3_4
  float v243; // xmm6_4
  float v244; // xmm4_4
  float v245; // xmm7_4
  float v246; // xmm8_4
  float v247; // xmm5_4
  float v248; // xmm4_4
  float v249; // xmm3_4
  float v250; // xmm0_4
  float v251; // xmm1_4
  float v252; // xmm2_4
  float v253; // xmm4_4
  _BOOL8 v254; // rcx
  int v255; // r12d
  int v256; // r15d
  BOOL v257; // r14d
  __int64 v258; // rdx
  BOOL v259; // eax
  __int64 v260; // rcx
  float v261; // xmm1_4
  float v262; // xmm0_4
  float v263; // xmm1_4
  float v264; // xmm7_4
  float v265; // xmm6_4
  float v266; // xmm8_4
  __int64 v267; // rdx
  unsigned int v268; // edi
  int v269; // eax
  unsigned int v270; // ebx
  float v271; // xmm1_4
  float v272; // xmm7_4
  float v273; // xmm6_4
  float v274; // xmm8_4
  int v275; // eax
  __int64 v276; // r13
  __int64 v277; // rdx
  float v278; // xmm1_4
  float v279; // xmm3_4
  float v280; // xmm2_4
  float v281; // xmm11_4
  float v282; // xmm7_4
  float v283; // xmm11_4
  float v284; // xmm1_4
  float v285; // xmm7_4
  float v286; // xmm8_4
  float v287; // xmm10_4
  float v288; // xmm9_4
  float v289; // xmm2_4
  unsigned int v290; // xmm3_4
  float v291; // xmm1_4
  float v292; // xmm2_4
  unsigned int v293; // xmm1_4
  unsigned int v294; // xmm2_4
  unsigned int v295; // xmm3_4
  unsigned int v296; // xmm3_4
  unsigned int v297; // xmm1_4
  float v298; // xmm0_4
  unsigned int v299; // r9d
  int v300; // r14d
  unsigned int v301; // edx
  float v302; // xmm5_4
  float v303; // xmm13_4
  float v304; // xmm14_4
  float v305; // xmm15_4
  __int64 v306; // rbx
  __int64 v307; // rcx
  unsigned int v308; // xmm7_4
  unsigned int v309; // xmm6_4
  unsigned int v310; // xmm11_4
  float v311; // xmm1_4
  __int64 v312; // rcx
  float v313; // xmm1_4
  float v314; // xmm0_4
  float v315; // xmm6_4
  float v316; // xmm1_4
  float v317; // xmm6_4
  float v318; // xmm7_4
  float v319; // xmm11_4
  float v320; // xmm3_4
  float v321; // xmm0_4
  float v322; // xmm2_4
  float v323; // xmm1_4
  float v324; // xmm11_4
  float v325; // xmm6_4
  float v326; // xmm3_4
  float v327; // xmm6_4
  unsigned int v328; // eax
  __int64 v329; // rax
  float v330; // xmm6_4
  float v331; // xmm5_4
  float v332; // xmm7_4
  __int64 v333; // rdi
  __int64 v334; // rbx
  float v335; // xmm1_4
  int v336; // eax
  float v337; // xmm1_4
  __m128d v338; // xmm0
  double v339; // xmm1_8
  __m128 v340; // xmm0
  float v341; // xmm6_4
  __m128d v342; // xmm1
  float v343; // xmm2_4
  float v344; // xmm2_4
  __m128d v345; // xmm2
  __m128d v346; // xmm0
  float v347; // xmm1_4
  unsigned int v348; // eax
  float v349; // xmm13_4
  float v350; // xmm11_4
  float v351; // xmm14_4
  float v352; // xmm15_4
  float v353; // xmm5_4
  float v354; // xmm6_4
  float v355; // xmm10_4
  float v356; // xmm0_4
  float v357; // xmm8_4
  float v358; // xmm9_4
  float v359; // xmm7_4
  float v360; // xmm2_4
  float v361; // xmm0_4
  float v362; // xmm1_4
  float v363; // xmm6_4
  float v364; // xmm11_4
  float v365; // xmm13_4
  float v366; // xmm14_4
  float v367; // xmm6_4
  unsigned int v368; // edx
  int v369; // eax
  int v370; // ebx
  float v371; // xmm1_4
  float v372; // xmm0_4
  unsigned int v373; // eax
  float v374; // xmm0_4
  unsigned int v375; // ecx
  float v376; // xmm6_4
  float v377; // xmm7_4
  int v378; // edi
  __int64 v379; // rax
  unsigned int v380; // r13d
  __int64 v381; // r8
  __int64 v382; // rdx
  int v383; // xmm1_4
  int v384; // xmm0_4
  __int64 v385; // rax
  __int64 v386; // rcx
  __int64 v387; // rax
  __int64 v388; // rcx
  __int64 v389; // rax
  __int64 v390; // rcx
  __int64 v391; // rax
  __int64 v392; // rcx
  __int64 v393; // rax
  __int64 v394; // rcx
  __int64 v395; // rax
  __int64 v396; // r14
  unsigned int *v397; // r9
  __int64 v398; // rax
  __int64 v399; // r14
  unsigned int *v400; // r9
  __int64 v401; // rdi
  __int64 v402; // rbx
  unsigned int *v403; // r9
  __int64 v404; // rax
  int v405; // r12d
  int v406; // edi
  unsigned int *v407; // r14
  __int64 v408; // r15
  __int64 v409; // rbx
  unsigned int *v410; // r9
  __int64 v411; // rax
  __int64 v412; // r15
  __int64 v413; // rbx
  unsigned int *v414; // r9
  __int64 v415; // rcx
  double v416; // xmm0_8
  float v417; // xmm6_4
  float v418; // xmm0_4
  float v419; // xmm6_4
  double v420; // xmm0_8
  float v421; // xmm1_4
  float v422; // xmm6_4
  int v423; // eax
  __int64 v424; // rdi
  __int64 v425; // rbx
  unsigned int *v426; // r9
  unsigned int v427; // xmm6_4
  __int64 v428; // rax
  __int64 v429; // rdi
  __int64 v430; // rbx
  unsigned int *v431; // r9
  __int64 v432; // rax
  __int64 v433; // rdi
  __int64 v434; // rbx
  unsigned int *v435; // r9
  __int64 v436; // rax
  int *v437; // rdi
  unsigned int v438; // xmm6_4
  __int64 v439; // rsi
  __int64 v440; // rbx
  unsigned int *v441; // r9
  __int64 v442; // rax
  __int64 v443; // rsi
  __int64 v444; // rbx
  unsigned int *v445; // r9
  __int64 v447; // [rsp+8h] [rbp-100h] BYREF
  __int64 v448; // [rsp+28h] [rbp-E0h]
  int v449; // [rsp+30h] [rbp-D8h]
  float v450; // [rsp+78h] [rbp-90h] BYREF
  float v451; // [rsp+7Ch] [rbp-8Ch]
  float v452; // [rsp+80h] [rbp-88h]
  __m128 v453; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v454; // [rsp+A0h] [rbp-68h]
  float v455; // [rsp+A4h] [rbp-64h]
  __int64 v456; // [rsp+A8h] [rbp-60h] BYREF
  float v457; // [rsp+B0h] [rbp-58h]
  float v458; // [rsp+B8h] [rbp-50h]
  float v459; // [rsp+BCh] [rbp-4Ch]
  float v460; // [rsp+C0h] [rbp-48h]
  unsigned int v461; // [rsp+C4h] [rbp-44h]
  float v462; // [rsp+C8h] [rbp-40h] BYREF
  float v463; // [rsp+CCh] [rbp-3Ch]
  float v464; // [rsp+D0h] [rbp-38h]
  float v465; // [rsp+D4h] [rbp-34h]
  __int64 v466; // [rsp+D8h] [rbp-30h] BYREF
  int v467; // [rsp+E0h] [rbp-28h]
  float v468; // [rsp+E8h] [rbp-20h]
  int v469; // [rsp+ECh] [rbp-1Ch]
  int v470; // [rsp+F0h] [rbp-18h] BYREF
  int v471; // [rsp+F4h] [rbp-14h]
  int v472; // [rsp+F8h] [rbp-10h]
  __int64 v473; // [rsp+100h] [rbp-8h]
  int v474; // [rsp+108h] [rbp+0h] BYREF
  int v475; // [rsp+10Ch] [rbp+4h]
  int v476; // [rsp+110h] [rbp+8h]
  float v477; // [rsp+118h] [rbp+10h]
  float v478; // [rsp+11Ch] [rbp+14h]
  float v479; // [rsp+120h] [rbp+18h]
  float v480; // [rsp+124h] [rbp+1Ch]
  float v481; // [rsp+128h] [rbp+20h]
  float v482; // [rsp+12Ch] [rbp+24h]
  __int64 v483; // [rsp+130h] [rbp+28h]
  _OWORD v484[2]; // [rsp+138h] [rbp+30h] BYREF
  int v485; // [rsp+158h] [rbp+50h]
  _DWORD v486[4]; // [rsp+160h] [rbp+58h] BYREF
  _BOOL8 v487; // [rsp+170h] [rbp+68h]
  __int128 v488; // [rsp+178h] [rbp+70h] BYREF
  __int128 v489; // [rsp+188h] [rbp+80h] BYREF
  float v490; // [rsp+198h] [rbp+90h]
  float v491; // [rsp+1A0h] [rbp+98h] BYREF
  float v492; // [rsp+1A4h] [rbp+9Ch]
  float v493; // [rsp+1A8h] [rbp+A0h]
  __int64 v494; // [rsp+1B0h] [rbp+A8h] BYREF
  float v495; // [rsp+1B8h] [rbp+B0h]
  _OWORD v496[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  int v497; // [rsp+1E0h] [rbp+D8h]
  __int64 v498; // [rsp+1E8h] [rbp+E0h]

  v1 = 7166LL * a1;
  v454 = a1;
  if ( dword_140404A6C[v1 + 280658335] && (dword_140404A6C[v1 + 280651436] & 0x20) != 0 )
    *(float *)&dword_140404A6C[v1 + 280651331] = *(float *)&dword_140404A6C[v1 + 280651384] * 8.0;
  v2 = dword_140404A6C[v1 + 280658306];
  v477 = 1.0;
  v478 = 1.0;
  if ( v2 < 100 )
    v477 = (float)v2 * 0.0099999998;
  v3 = dword_140404A6C[v1 + 280658308];
  if ( v3 < 100 )
    v478 = (float)v3 * 0.0099999998;
  if ( dword_140404A6C[v1 + 280651325] == 1 && *(float *)&dword_140404A6C[v1 + 280657931] < 0.0 )
    dword_140404A6C[v1 + 280657979] = 0;
  v4 = dword_140404A6C[v1 + 280658139];
  v5 = 0;
  v6 = dword_140404A6C[v1 + 280658149];
  v468 = *(float *)&v4;
  v469 = v6;
  if ( v4 > 0 && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v1 + 280658140] + 278845898] + 278521289] )
  {
    v5 = 1;
  }
  else if ( v6 > 0
         && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v1 + 280658150] + 278845898] + 278521289] )
  {
    v5 = 1;
  }
  v7 = dword_140404A6C[v1 + 280651327] == 2;
  v8 = 0.39269909;
  v455 = 0.39269909;
  if ( v7 )
  {
    v8 = 0.78539819;
    v455 = 0.78539819;
  }
  if ( (dword_140404A6C[v1 + 280651436] & 2) != 0 )
  {
    v8 = 0.0;
    v455 = 0.0;
  }
  if ( !v5 )
  {
    v8 = 0.0;
    v455 = 0.0;
  }
  if ( v4 > 0 && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v1 + 280658140] + 278845898] + 278521290] )
    v455 = -v8;
  if ( LOBYTE(dword_140404A6C[284024765]) )
    v455 = 0.0;
  v7 = dword_140404A6C[7166 * a1 + 280651313] == -1;
  v9 = 0;
  v459 = 0.0;
  v10 = 0;
  if ( !v7 )
  {
    v9 = (__m128)dword_140404A6C[7166 * a1 + 280651382];
    v10 = dword_140404A6C[7166 * a1 + 280651381];
    v459 = *(float *)&dword_140404A6C[7166 * a1 + 280651382];
  }
  v11 = (int)dword_140404A6C[7166 * a1 + 280651589];
  v12 = (float *)&dword_140404A6C[v1 + 280651452];
  v13 = (float *)&dword_140404A6C[v1 + 280651530];
  sub_14007AE70((float *)v484, (float *)&dword_140404A6C[v1 + 280651530], (float *)&dword_140404A6C[v1 + 280651452]);
  sub_14010E370(&v453, v484);
  v15 = &dword_140404A6C[v1 + 280657951];
  *(_QWORD *)v15 = 1065353216;
  *((_QWORD *)v15 + 1) = 0;
  *((_QWORD *)v15 + 2) = 1065353216;
  *((_QWORD *)v15 + 3) = 0;
  v15[8] = 1065353216;
  v16 = dword_140404A6C[v1 + 280651383];
  if ( dword_140404A6C[v1 + 280651313] != -1 )
    *((_QWORD *)&v16 + 1) = *((_QWORD *)&v10 + 1);
  if ( LOBYTE(dword_140404A6C[284024765]) )
    v16 = 0;
  v17.m128_u64[1] = *((_QWORD *)&v16 + 1);
  *(double *)v17.m128_u64 = MEMORY[0x1401F8AC0](v14);
  v18 = _mm_shuffle_ps(v17, v17, 1).m128_f32[0];
  v19 = v17.m128_f32[0];
  sub_14007B2A0((__int64)&dword_140404A6C[v1 + 280657951], (float *)&dword_140404A6C[v1 + 280657954]);
  v21 = (__m128)dword_140404A6C[v1 + 280651342];
  if ( (dword_140404A6C[v1 + 280651436] & 0x20) != 0 )
    v21.m128_f32[0] = v21.m128_f32[0] * 0.5;
  else
    v21.m128_f32[0] = (float)(v21.m128_f32[0] + *(float *)&dword_140404A6C[v1 + 280651384]) * 0.75;
  if ( dword_140404A6C[v1 + 280651313] != -1 )
    v21 = v9;
  v21.m128_f32[0] = v21.m128_f32[0] * 0.75;
  if ( LOBYTE(dword_140404A6C[284024765]) )
  {
    v22 = _mm_cvtps_pd(v21);
    v22.m128d_f64[0] = v22.m128d_f64[0] - 0.196349540849375;
    v21.m128_u64[1] = _mm_cvtpd_ps(v22).m128_u64[1];
  }
  v23.m128_u64[1] = v21.m128_u64[1];
  *(double *)v23.m128_u64 = MEMORY[0x1401F8AC0](v20);
  v24 = _mm_shuffle_ps(v23, v23, 1).m128_f32[0];
  v25 = v24 * v19;
  v26 = -(float)(v23.m128_f32[0] * v19);
  v27 = v23.m128_f32[0] * v18;
  v28 = v24 * v18;
  sub_14007B2A0((__int64)&dword_140404A6C[v1 + 280657951], (float *)&dword_140404A6C[v1 + 280657951]);
  v29 = v453.m128_f32[3];
  v30 = v453.m128_f32[2];
  v31 = v453.m128_f32[1];
  v32 = v453.m128_f32[0];
  if ( (float)((float)((float)(v453.m128_f32[3] * v28) + (float)(v453.m128_f32[2] * v26))
             + (float)((float)(v453.m128_f32[1] * v25) + (float)(v453.m128_f32[0] * (float)(v23.m128_f32[0] * v18)))) < 0.0 )
  {
    v453 = _mm_xor_ps(v453, (__m128)xmmword_140279870);
    v30 = v453.m128_f32[2];
    v31 = v453.m128_f32[1];
    v32 = v453.m128_f32[0];
    v29 = _mm_shuffle_ps(v453, v453, 255).m128_f32[0];
  }
  v453.m128_f32[1] = -v31;
  v453.m128_f32[0] = -v32;
  v453.m128_f32[2] = -v30;
  v33 = (float)((float)((float)((float)-v32 * v28) + (float)(v29 * v27)) + (float)((float)-v31 * v26))
      - (float)((float)-v30 * v25);
  v34 = (float)((float)((float)(v29 * v25) - (float)((float)-v32 * v26)) + (float)((float)-v31 * v28))
      + (float)((float)-v30 * v27);
  v35 = (float)((float)((float)((float)-v32 * v25) + (float)(v29 * v26)) - (float)((float)-v31 * v27))
      + (float)((float)-v30 * v28);
  v36 = (float)((float)((float)(v29 * v28) - (float)((float)-v32 * v27)) - (float)((float)-v31 * v25))
      - (float)((float)-v30 * v26);
  v37 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
  if ( v37 == 0.0 )
  {
    v38 = 0.0;
    v39 = 0.0;
    v40 = 0.0;
  }
  else
  {
    v38 = (float)(1.0 / v37) * v33;
    v39 = (float)(1.0 / v37) * v34;
    v40 = (float)(1.0 / v37) * v35;
  }
  v41 = acos(fminf(fmaxf(v36, -1.0), 1.0));
  v42 = v41 + v41;
  if ( LOBYTE(dword_140404A6C[284024765]) )
  {
    v44 = fmaxf(v42, -0.25);
    if ( v44 > 0.25 )
      v44 = 0.25;
    v43 = fabs(v44) * v44 * 4.0;
  }
  else
  {
    v43 = fmaxf(v42, -0.39269909);
    if ( v43 > 0.39269909 )
      v43 = 0.39269909;
  }
  v45 = *(float *)&dword_140404A6C[v1 + 280651462] - *(float *)&dword_140404A6C[v1 + 280651540];
  v46 = *(float *)&dword_140404A6C[v1 + 280651461] - *(float *)&dword_140404A6C[v1 + 280651539];
  v47 = *(float *)&dword_140404A6C[v1 + 280651463] - *(float *)&dword_140404A6C[v1 + 280651541];
  v48 = v11;
  v49 = (float *)&dword_140404A6C[36 * v11 + 485543033];
  v50 = (float)(v45 * v12[1]) + (float)(v46 * *v12);
  v51 = v46 * *(float *)&dword_140404A6C[v1 + 280651455];
  v52 = v46 * *(float *)&dword_140404A6C[v1 + 280651458];
  v53 = v50 + (float)(v47 * v12[2]);
  v54 = v47 * *(float *)&dword_140404A6C[v1 + 280651457];
  v55 = v47 * *(float *)&dword_140404A6C[v1 + 280651460];
  v449 = 1065353216;
  v56 = (float)((float)(v38 * v43) * 0.75) - (float)(v53 * 0.25);
  v57 = (float)((float)(v39 * v43) * 0.75)
      - (float)((float)((float)((float)(v45 * *(float *)&dword_140404A6C[v1 + 280651456]) + v51) + v54) * 0.25);
  v58 = (float)((float)(v40 * v43) * 0.75)
      - (float)((float)((float)((float)(v45 * *(float *)&dword_140404A6C[v1 + 280651459]) + v52) + v55) * 0.25);
  *v49 = (float)((float)(v57 * v13[3]) + (float)(v56 * *v13)) + (float)(v58 * v13[6]);
  v59 = (float)((float)(v57 * *(float *)&dword_140404A6C[v1 + 280651534])
              + (float)(v56 * *(float *)&dword_140404A6C[v1 + 280651531]))
      + (float)(v58 * *(float *)&dword_140404A6C[v1 + 280651537]);
  LODWORD(v448) = 1066401792;
  v49[1] = v59;
  v60 = v454;
  v49[2] = (float)((float)(v57 * *(float *)&dword_140404A6C[v1 + 280651535])
                 + (float)(v56 * *(float *)&dword_140404A6C[v1 + 280651532]))
         + (float)(v58 * *(float *)&dword_140404A6C[v1 + 280651538]);
  sub_1400B2BF0(v60, 0, 1, (_DWORD)v49, v448, v449);
  v61 = v49[1];
  v62 = *v49;
  v63 = v49[2];
  v64 = fsqrt((float)((float)(v62 * v62) + (float)(v61 * v61)) + (float)(v63 * v63));
  if ( v64 == 0.0 )
  {
    v65 = 0.0;
    v66 = 0.0;
    v67 = 0.0;
  }
  else
  {
    v65 = (float)(1.0 / v64) * v62;
    v66 = (float)(1.0 / v64) * v61;
    v67 = (float)(1.0 / v64) * v63;
  }
  v68 = v66 * *(float *)&dword_140404A6C[v1 + 280651456];
  v69 = v65 * *(float *)&dword_140404A6C[v1 + 280651455];
  v70 = (float)((float)(v66 * v12[1]) + (float)(v65 * *v12)) + (float)(v67 * v12[2]);
  v71 = v67 * *(float *)&dword_140404A6C[v1 + 280651457];
  v72 = (float)(v66 * *(float *)&dword_140404A6C[v1 + 280651459])
      + (float)(v65 * *(float *)&dword_140404A6C[v1 + 280651458]);
  v73 = v67 * *(float *)&dword_140404A6C[v1 + 280651460];
  *(float *)&v456 = v70;
  v457 = v72 + v73;
  *((float *)&v456 + 1) = (float)(v68 + v69) + v71;
  sub_14007AE70((float *)v15, v12, v13);
  sub_14007B2A0((__int64)v15, (float *)&v456);
  dword_140404A6C[61 * v48 + 486149287] = 0;
  v74 = (int)dword_140404A6C[v1 + 280651667];
  v75 = (float *)&dword_140404A6C[v1 + 280651608];
  v461 = dword_140404A6C[v1 + 280651667];
  sub_14007AE70((float *)v484, (float *)&dword_140404A6C[v1 + 280651608], v13);
  sub_14010E370(&v453, v484);
  v76 = &dword_140404A6C[v1 + 280657960];
  *(_QWORD *)v76 = 1065353216;
  *((_QWORD *)v76 + 1) = 0;
  *((_QWORD *)v76 + 2) = 1065353216;
  *((_QWORD *)v76 + 3) = 0;
  v76[8] = 1065353216;
  v77 = *(float *)&dword_140404A6C[v1 + 280651342];
  if ( (dword_140404A6C[v1 + 280651436] & 0x20) != 0 )
  {
    v78 = (__m128)dword_140404A6C[v1 + 280651342];
    v78.m128_f32[0] = v77 * 0.5;
  }
  else
  {
    v78 = (__m128)dword_140404A6C[v1 + 280651384];
    v78.m128_f32[0] = (float)(v78.m128_f32[0] * 0.75) + (float)(v77 * 0.25);
  }
  if ( dword_140404A6C[v1 + 280651313] != -1 )
    v78 = (__m128)LODWORD(v459);
  v78.m128_f32[0] = v78.m128_f32[0] * 0.5;
  if ( LOBYTE(dword_140404A6C[284024765]) )
  {
    v79 = _mm_cvtps_pd(v78);
    v79.m128d_f64[0] = v79.m128d_f64[0] - 0.5890486225481251;
    v78.m128_u64[1] = _mm_cvtpd_ps(v79).m128_u64[1];
  }
  v80.m128_u64[1] = v78.m128_u64[1];
  *(double *)v80.m128_u64 = MEMORY[0x1401F8AC0](0);
  v81 = _mm_shuffle_ps(v80, v80, 1).m128_f32[0];
  v82 = v80.m128_f32[0];
  sub_14007B2A0((__int64)&dword_140404A6C[v1 + 280657960], (float *)&dword_140404A6C[v1 + 280657960]);
  v84 = dword_140404A6C[v1 + 280651383];
  if ( dword_140404A6C[v1 + 280651313] != -1 )
    *((_QWORD *)&v84 + 1) = *((_QWORD *)&v10 + 1);
  if ( LOBYTE(dword_140404A6C[284024765]) )
    v84 = 0;
  v85.m128_u64[1] = *((_QWORD *)&v84 + 1);
  *(double *)v85.m128_u64 = MEMORY[0x1401F8AC0](v83);
  v86 = _mm_shuffle_ps(v85, v85, 1).m128_f32[0];
  v87 = v85.m128_f32[0] * v82;
  v88 = v86 * v82;
  v89 = v85.m128_f32[0] * v81;
  v90 = v86 * v81;
  sub_14007B2A0((__int64)&dword_140404A6C[v1 + 280657960], (float *)&dword_140404A6C[v1 + 280657963]);
  v91 = v453.m128_f32[3];
  v92 = v453.m128_f32[2];
  v93 = v453.m128_f32[1];
  v94 = v453.m128_f32[0];
  if ( (float)((float)((float)(v453.m128_f32[3] * v90) + (float)(v453.m128_f32[2] * (float)(v85.m128_f32[0] * v82)))
             + (float)((float)(v453.m128_f32[1] * (float)(v85.m128_f32[0] * v81)) + (float)(v453.m128_f32[0] * v88))) < 0.0 )
  {
    v453 = _mm_xor_ps(v453, (__m128)xmmword_140279870);
    v92 = v453.m128_f32[2];
    v93 = v453.m128_f32[1];
    v94 = v453.m128_f32[0];
    v91 = _mm_shuffle_ps(v453, v453, 255).m128_f32[0];
  }
  v453.m128_f32[1] = -v93;
  v453.m128_f32[0] = -v94;
  v453.m128_f32[2] = -v92;
  v95 = (float)((float)((float)((float)-v94 * v90) + (float)(v91 * v88)) + (float)((float)-v93 * v87))
      - (float)((float)-v92 * v89);
  v96 = (float)((float)((float)(v91 * v89) - (float)((float)-v94 * v87)) + (float)(v90 * (float)-v93))
      + (float)((float)-v92 * v88);
  v97 = (float)((float)((float)((float)-v94 * v89) + (float)(v91 * v87)) - (float)(v88 * (float)-v93))
      + (float)((float)-v92 * v90);
  v98 = (float)((float)((float)(v91 * v90) - (float)((float)-v94 * v88)) - (float)(v89 * (float)-v93))
      - (float)((float)-v92 * v87);
  v99 = fsqrt((float)((float)(v96 * v96) + (float)(v95 * v95)) + (float)(v97 * v97));
  if ( v99 == 0.0 )
  {
    v100 = 0.0;
    v101 = 0.0;
    v102 = 0.0;
  }
  else
  {
    v100 = (float)(1.0 / v99) * v95;
    v101 = (float)(1.0 / v99) * v96;
    v102 = (float)(1.0 / v99) * v97;
  }
  v103 = acos(fminf(fmaxf(v98, -1.0), 1.0));
  v104 = v103 + v103;
  if ( LOBYTE(dword_140404A6C[284024765]) )
  {
    v106 = fmaxf(v104, -0.25);
    if ( v106 > 0.25 )
      v106 = 0.25;
    v105 = fabs(v106) * v106 * 4.0;
  }
  else
  {
    v105 = fmaxf(v104, -0.39269909);
    if ( v105 > 0.39269909 )
      v105 = 0.39269909;
  }
  v107 = *(float *)&dword_140404A6C[v1 + 280651541] - *(float *)&dword_140404A6C[v1 + 280651619];
  v108 = *(float *)&dword_140404A6C[v1 + 280651540] - *(float *)&dword_140404A6C[v1 + 280651618];
  v109 = *(float *)&dword_140404A6C[v1 + 280651539] - *(float *)&dword_140404A6C[v1 + 280651617];
  v110 = v107 * v13[2];
  v111 = (float *)&dword_140404A6C[36 * v74 + 485543033];
  v112 = v108 * v13[1];
  v113 = v109 * *v13;
  v449 = 1065353216;
  v114 = v112 + v113;
  v115 = v109 * *(float *)&dword_140404A6C[v1 + 280651533];
  v116 = v109 * *(float *)&dword_140404A6C[v1 + 280651536];
  v117 = v114 + v110;
  v118 = v107 * *(float *)&dword_140404A6C[v1 + 280651535];
  v119 = v107 * *(float *)&dword_140404A6C[v1 + 280651538];
  v459 = v117 * -0.25;
  v120 = (float)((float)(v100 * v105) * 0.75) + (float)(v117 * -0.25);
  v121 = (float)(v108 * *(float *)&dword_140404A6C[v1 + 280651534]) + v115;
  v122 = v120 * *v75;
  v123 = (float)((float)((float)(v108 * *(float *)&dword_140404A6C[v1 + 280651537]) + v116) + v119) * -0.25;
  v124 = (float)(v121 + v118) * -0.25;
  v125 = (float)((float)(v102 * v105) * 0.75) + v123;
  v458 = v123;
  v126 = (float)((float)(v101 * v105) * 0.75) + v124;
  v460 = v124;
  *v111 = (float)((float)(v126 * v75[3]) + v122) + (float)(v125 * v75[6]);
  v127 = (float)((float)(v120 * *(float *)&dword_140404A6C[v1 + 280651609])
               + (float)(v126 * *(float *)&dword_140404A6C[v1 + 280651612]))
       + (float)(v125 * *(float *)&dword_140404A6C[v1 + 280651615]);
  LODWORD(v448) = 1066401792;
  v111[1] = v127;
  v128 = v454;
  v111[2] = (float)((float)(v120 * *(float *)&dword_140404A6C[v1 + 280651610])
                  + (float)(v126 * *(float *)&dword_140404A6C[v1 + 280651613]))
          + (float)(v125 * *(float *)&dword_140404A6C[v1 + 280651616]);
  sub_1400B2BF0(v128, 1, 2, (_DWORD)v111, v448, v449);
  v129 = v111[1];
  v130 = *v111;
  v131 = v111[2];
  v132 = fsqrt((float)((float)(v130 * v130) + (float)(v129 * v129)) + (float)(v131 * v131));
  if ( v132 == 0.0 )
  {
    v133 = 0.0;
    v134 = 0.0;
    v135 = 0.0;
  }
  else
  {
    v133 = (float)(1.0 / v132) * v130;
    v134 = (float)(1.0 / v132) * v129;
    v135 = (float)(1.0 / v132) * v131;
  }
  v136 = v134 * *(float *)&dword_140404A6C[v1 + 280651534];
  v137 = v133 * *(float *)&dword_140404A6C[v1 + 280651533];
  v138 = (float)((float)(v134 * v13[1]) + (float)(v133 * *v13)) + (float)(v135 * v13[2]);
  v139 = v135 * *(float *)&dword_140404A6C[v1 + 280651535];
  v140 = (float)(v134 * *(float *)&dword_140404A6C[v1 + 280651537])
       + (float)(v133 * *(float *)&dword_140404A6C[v1 + 280651536]);
  v141 = v135 * *(float *)&dword_140404A6C[v1 + 280651538];
  *(float *)&v456 = v138;
  v457 = v140 + v141;
  *((float *)&v456 + 1) = (float)(v136 + v137) + v139;
  sub_14007AE70((float *)&dword_140404A6C[v1 + 280657960], v13, (float *)&dword_140404A6C[v1 + 280651608]);
  sub_14007B2A0((__int64)&dword_140404A6C[v1 + 280657960], (float *)&v456);
  dword_140404A6C[61 * v461 + 486149287] = 0;
  if ( v5 && dword_140404A6C[v1 + 280651313] == -1 )
  {
    sub_1400AD030(v454);
    v142 = (int)dword_140404A6C[v1 + 280651589];
    sub_14007AE70((float *)v484, v13, v12);
    sub_14010E370(&v453, v484);
    v143 = v453.m128_f32[2];
    v144 = v453.m128_f32[3];
    v145 = v453.m128_f32[1];
    v146 = v453.m128_f32[0];
    v147 = *(float *)&dword_140404A6C[v1 + 280658118];
    v148 = *(float *)&dword_140404A6C[v1 + 280658119];
    v149 = *(float *)&dword_140404A6C[v1 + 280658116];
    v150 = *(float *)&dword_140404A6C[v1 + 280658117];
    if ( (float)((float)((float)(v453.m128_f32[2] * v147) + (float)(v453.m128_f32[3] * v148))
               + (float)((float)(v150 * v453.m128_f32[1]) + (float)(v149 * v453.m128_f32[0]))) < 0.0 )
    {
      v453 = _mm_xor_ps(v453, (__m128)xmmword_140279870);
      v143 = v453.m128_f32[2];
      v145 = v453.m128_f32[1];
      v146 = v453.m128_f32[0];
      v144 = _mm_shuffle_ps(v453, v453, 255).m128_f32[0];
    }
    v151 = v144 * v147;
    v453.m128_f32[1] = -v145;
    v453.m128_f32[0] = -v146;
    v453.m128_f32[2] = -v143;
    v152 = (float)((float)((float)((float)-v146 * v148) + (float)(v149 * v144)) + (float)((float)-v145 * v147))
         - (float)((float)-v143 * v150);
    v153 = (float)((float)((float)(v150 * v144) - (float)((float)-v146 * v147)) + (float)((float)-v145 * v148))
         + (float)(v149 * (float)-v143);
    v154 = (float)((float)((float)(v144 * v148) - (float)(v149 * (float)-v146)) - (float)((float)-v145 * v150))
         - (float)((float)-v143 * v147);
    v155 = (float)((float)(v151 + (float)((float)-v146 * v150)) - (float)(v149 * (float)-v145))
         + (float)((float)-v143 * v148);
    v156 = fsqrt((float)((float)(v153 * v153) + (float)(v152 * v152)) + (float)(v155 * v155));
    if ( v156 == 0.0 )
    {
      v157 = 0.0;
      v158 = 0.0;
      v159 = 0.0;
    }
    else
    {
      v157 = (float)(1.0 / v156) * v152;
      v158 = (float)(1.0 / v156) * v153;
      v159 = (float)(1.0 / v156) * v155;
    }
    v160 = acos(fminf(fmaxf(v154, -1.0), 1.0));
    v161 = v160 + v160;
    v162 = fmaxf(v161, -0.39269909);
    if ( v162 > 0.39269909 )
      v162 = 0.39269909;
    v163 = v158 * v162;
    v164 = v157 * v162;
    v165 = 18 * v142;
    v166 = v159 * v162;
    *(float *)&dword_140404A6C[2 * v165 + 485543033] = (float)((float)(v163 * v13[3]) + (float)(v164 * *v13))
                                                     + (float)(v166 * v13[6]);
    *(float *)&dword_140404A6C[2 * v165 + 485543034] = (float)((float)(v163 * v13[4]) + (float)(v164 * v13[1]))
                                                     + (float)(v166 * v13[7]);
    *(float *)&dword_140404A6C[2 * v165 + 485543035] = (float)((float)(v163 * v13[5]) + (float)(v164 * v13[2]))
                                                     + (float)(v166 * v13[8]);
    v167 = 61 * v142;
    v168 = (int)dword_140404A6C[v1 + 280651667];
    dword_140404A6C[v167 + 486149287] = 0;
    sub_14007AE70((float *)v484, (float *)&dword_140404A6C[v1 + 280651608], (float *)&dword_140404A6C[v1 + 280651530]);
    sub_14010E370(&v453, v484);
    v169 = v453.m128_f32[0];
    v170 = v453.m128_f32[1];
    v171 = v453.m128_f32[3];
    v172 = v453.m128_f32[2];
    v173 = *(float *)&dword_140404A6C[v1 + 280658121];
    v174 = *(float *)&dword_140404A6C[v1 + 280658120];
    v175 = *(float *)&dword_140404A6C[v1 + 280658122];
    v176 = *(float *)&dword_140404A6C[v1 + 280658123];
    if ( (float)((float)((float)(v173 * v453.m128_f32[1]) + (float)(v453.m128_f32[0] * v174))
               + (float)((float)(v175 * v453.m128_f32[2]) + (float)(v453.m128_f32[3] * v176))) < 0.0 )
    {
      v453 = _mm_xor_ps(v453, (__m128)xmmword_140279870);
      v172 = v453.m128_f32[2];
      v170 = v453.m128_f32[1];
      v169 = v453.m128_f32[0];
      v171 = _mm_shuffle_ps(v453, v453, 255).m128_f32[0];
    }
    v453.m128_f32[1] = -v170;
    v453.m128_f32[2] = -v172;
    v453.m128_f32[0] = -v169;
    v177 = (float)((float)((float)(v171 * v174) + (float)((float)-v169 * v176)) + (float)((float)-v170 * v175))
         - (float)((float)-v172 * v173);
    v178 = (float)((float)((float)(v173 * v171) - (float)(v175 * (float)-v169)) + (float)((float)-v170 * v176))
         + (float)((float)-v172 * v174);
    v179 = (float)(v175 * v171) + (float)(v173 * (float)-v169);
    v180 = (float)((float)((float)(v171 * v176) - (float)(v174 * (float)-v169)) - (float)(v173 * (float)-v170))
         - (float)((float)-v172 * v175);
    v181 = (float)(v179 - (float)(v174 * (float)-v170)) + (float)((float)-v172 * v176);
    v182 = fsqrt((float)((float)(v178 * v178) + (float)(v177 * v177)) + (float)(v181 * v181));
    if ( v182 == 0.0 )
    {
      v183 = 0.0;
      v184 = 0.0;
      v185 = 0.0;
    }
    else
    {
      v183 = v177 * (float)(1.0 / v182);
      v184 = v178 * (float)(1.0 / v182);
      v185 = v181 * (float)(1.0 / v182);
    }
    v186 = acos(fminf(fmaxf(v180, -1.0), 1.0));
    v187 = v186 + v186;
    v188 = fmaxf(v187, -0.39269909);
    if ( v188 > 0.39269909 )
      v188 = 0.39269909;
    v189 = v184 * v188;
    v190 = 18 * v168;
    v191 = v183 * v188;
    v192 = v185 * v188;
    *(float *)&dword_140404A6C[2 * v190 + 485543033] = (float)((float)(v189 * v75[3]) + (float)(v191 * *v75))
                                                     + (float)(v192 * v75[6]);
    *(float *)&dword_140404A6C[2 * v190 + 485543034] = (float)((float)(v189 * v75[4]) + (float)(v191 * v75[1]))
                                                     + (float)(v192 * v75[7]);
    *(float *)&dword_140404A6C[2 * v190 + 485543035] = (float)((float)(v189 * v75[5]) + (float)(v191 * v75[2]))
                                                     + (float)(v192 * v75[8]);
    dword_140404A6C[61 * v168 + 486149287] = 0;
  }
  v193 = (int)dword_140404A6C[v1 + 280651745];
  v194 = (float *)&dword_140404A6C[v1 + 280651686];
  sub_14007AE70((float *)v484, (float *)&dword_140404A6C[v1 + 280651686], (float *)&dword_140404A6C[v1 + 280651608]);
  sub_14010E370(&v453, v484);
  v195 = &dword_140404A6C[v1 + 280657969];
  *(_QWORD *)v195 = 1065353216;
  *((_QWORD *)v195 + 1) = 0;
  *((_QWORD *)v195 + 2) = 1065353216;
  *((_QWORD *)v195 + 3) = 0;
  v195[8] = 1065353216;
  v197.m128_u64[1] = 0;
  *(double *)v197.m128_u64 = MEMORY[0x1401F8AC0](v196);
  v198 = _mm_shuffle_ps(v197, v197, 1).m128_f32[0];
  v199 = v197.m128_f32[0];
  v200 = 0.0;
  v201 = 0.0;
  sub_14007B2A0((__int64)&dword_140404A6C[v1 + 280657969], (float *)&dword_140404A6C[v1 + 280657972]);
  if ( dword_140404A6C[v1 + 280651327] == 2 && v5 )
  {
    v200 = v197.m128_f32[0] * -0.098017141;
    v199 = v197.m128_f32[0] * 0.99518472;
    v201 = v198 * -0.098017141;
    v198 = v198 * 0.99518472;
    sub_14007B2A0((__int64)&dword_140404A6C[v1 + 280657969], (float *)&dword_140404A6C[v1 + 280657975]);
  }
  v203 = (__m128)dword_140404A6C[v1 + 280651384];
  v203.m128_f32[0] = (float)(v203.m128_f32[0] * 0.25) + (float)(*(float *)&dword_140404A6C[v1 + 280651342] * 0.5);
  if ( LOBYTE(dword_140404A6C[284024765]) )
  {
    v204 = _mm_cvtps_pd(v203);
    v204.m128d_f64[0] = v204.m128d_f64[0] - 0.39269908169875;
    v203.m128_u64[1] = _mm_cvtpd_ps(v204).m128_u64[1];
  }
  v205.m128_u64[1] = v203.m128_u64[1];
  *(double *)v205.m128_u64 = MEMORY[0x1401F8AC0](v202);
  v206 = _mm_shuffle_ps(v205, v205, 1).m128_f32[0];
  v207 = (float)(v200 * v206) + (float)(v198 * v205.m128_f32[0]);
  v208 = (float)(v199 * v206) + (float)(v201 * v205.m128_f32[0]);
  v209 = (float)(v201 * v206) - (float)(v199 * v205.m128_f32[0]);
  v463 = v208;
  v462 = v207;
  v210 = (float)(v198 * v206) - (float)(v200 * v205.m128_f32[0]);
  v464 = v209;
  v465 = v210;
  sub_14007B2A0((__int64)&dword_140404A6C[v1 + 280657969], (float *)&dword_140404A6C[v1 + 280657969]);
  if ( v5 && dword_140404A6C[v1 + 280651313] == -1 )
  {
    v212 = *(float *)&dword_140404A6C[v1 + 280658128];
    v213 = *(float *)&dword_140404A6C[v1 + 280658129];
    v214 = *(float *)&dword_140404A6C[v1 + 280658130];
    v215 = *(float *)&dword_140404A6C[v1 + 280658131];
    v216 = MEMORY[0x1401F8AC0](v211);
    v217 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v216, (__m128)*(unsigned __int64 *)&v216, 1).m128_f32[0];
    v218 = (float)(v214 * *(float *)&v216) + (float)(v213 * v217);
    v219 = (float)(v214 * v217) - (float)(v213 * *(float *)&v216);
    v220 = (float)(v217 * v212) + (float)(*(float *)&v216 * v215);
    v221 = (float)(v217 * v215) - (float)(*(float *)&v216 * v212);
    v223 = MEMORY[0x1401F8AC0](v222);
    v224 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v223, (__m128)*(unsigned __int64 *)&v223, 1).m128_f32[0];
    v207 = (float)(v220 * v224) - (float)(v219 * *(float *)&v223);
    v208 = (float)(v218 * v224) + (float)(v221 * *(float *)&v223);
    v209 = (float)(v219 * v224) + (float)(v220 * *(float *)&v223);
    v463 = v208;
    v462 = v207;
    v210 = (float)(v221 * v224) - (float)(v218 * *(float *)&v223);
    v464 = v209;
    v465 = v210;
  }
  v225 = v453.m128_f32[2];
  v226 = v453.m128_f32[1];
  v227 = v453.m128_f32[0];
  if ( (float)((float)((float)(v210 * v453.m128_f32[3]) + (float)(v209 * v453.m128_f32[2]))
             + (float)((float)(v208 * v453.m128_f32[1]) + (float)(v207 * v453.m128_f32[0]))) < 0.0 )
  {
    v453 = _mm_xor_ps(v453, (__m128)xmmword_140279870);
    v226 = v453.m128_f32[1];
    v227 = v453.m128_f32[0];
    v225 = _mm_shuffle_ps(v453, v453, 170).m128_f32[0];
  }
  v453.m128_f32[0] = -v227;
  v453.m128_f32[1] = -v226;
  v453.m128_f32[2] = -v225;
  sub_140105930(&v462, &v453, &v462);
  v228 = fsqrt((float)((float)(v463 * v463) + (float)(v462 * v462)) + (float)(v464 * v464));
  if ( v228 == 0.0 )
  {
    v229 = 0.0;
    v230 = 0.0;
    v231 = 0.0;
  }
  else
  {
    v229 = v462 * (float)(1.0 / v228);
    v230 = v463 * (float)(1.0 / v228);
    v231 = v464 * (float)(1.0 / v228);
  }
  v232 = acos(fminf(fmaxf(v465, -1.0), 1.0));
  v233 = v232 + v232;
  if ( LOBYTE(dword_140404A6C[284024765]) )
  {
    v235 = fmaxf(v233, -0.25);
    if ( v235 > 0.25 )
      v235 = 0.25;
    v234 = fabs(v235) * v235 * 4.0;
  }
  else
  {
    v234 = fmaxf(v233, -0.39269909);
    if ( v234 > 0.39269909 )
      v234 = 0.39269909;
  }
  v236 = v454;
  v237 = (float *)(0x140000000LL + 144 * v193 + 1946385488);
  v238 = (float)((float)(v230 * v234) * 0.75) + v460;
  v239 = (float)((float)(v229 * v234) * 0.75) + v459;
  v449 = 1065353216;
  v240 = (float)((float)(v231 * v234) * 0.75) + v458;
  *v237 = (float)((float)(v238 * v194[3]) + (float)(v239 * *v194)) + (float)(v240 * v194[6]);
  v241 = v240 * v194[7];
  v242 = (float)(v238 * v194[4]) + (float)(v239 * v194[1]);
  LODWORD(v448) = 1066401792;
  v237[1] = v242 + v241;
  v237[2] = (float)((float)(v238 * v194[5]) + (float)(v239 * v194[2])) + (float)(v240 * v194[8]);
  sub_1400B2BF0(v236, 2, 3, (_DWORD)v237, v448, v449);
  *v237 = *v237;
  v237[1] = v237[1];
  v237[2] = v237[2];
  dword_140404A6C[61 * v193 + 486149287] = 0;
  v243 = *(float *)(0x140000004LL + 144 * v193 + 1946385488);
  v244 = *v237;
  v245 = *(float *)(0x140000008LL + 144 * v193 + 1946385488);
  v246 = fsqrt((float)((float)(v244 * v244) + (float)(v243 * v243)) + (float)(v245 * v245));
  if ( v246 == 0.0 )
  {
    v247 = 0.0;
    v248 = 0.0;
    v249 = 0.0;
  }
  else
  {
    v247 = (float)(1.0 / v246) * v244;
    v248 = (float)(1.0 / v246) * v243;
    v249 = (float)(1.0 / v246) * v245;
  }
  v250 = v247 * *(float *)&dword_140404A6C[v1 + 280651611];
  v251 = v249 * *(float *)&dword_140404A6C[v1 + 280651613];
  *(float *)&v456 = (float)((float)(v248 * v75[1]) + (float)(v247 * *v75)) + (float)(v249 * v75[2]);
  v252 = (float)((float)(v248 * *(float *)&dword_140404A6C[v1 + 280651612]) + v250) + v251;
  v253 = (float)((float)(v248 * *(float *)&dword_140404A6C[v1 + 280651615])
               + (float)(v247 * *(float *)&dword_140404A6C[v1 + 280651614]))
       + (float)(v249 * *(float *)&dword_140404A6C[v1 + 280651616]);
  *((float *)&v456 + 1) = v252;
  v457 = v253;
  sub_14007AE70((float *)v195, (float *)&dword_140404A6C[v1 + 280651608], v194);
  sub_14007B2A0((__int64)v195, (float *)&v456);
  v254 = 0;
  v255 = 0;
  if ( v469 <= 0 )
    v254 = SLODWORD(v468) <= 0;
  v487 = v254;
  v482 = -v455;
  v483 = 0;
  do
  {
    v461 = 0;
    v256 = -1;
    v473 = 0;
    if ( v255 == 1 )
    {
      if ( (int)dword_140404A6C[v1 + 280658139] > 0 )
        v256 = dword_140404A6C[v1 + 280658140];
    }
    else if ( (int)dword_140404A6C[v1 + 280658149] <= 0 )
    {
      if ( (int)dword_140404A6C[v1 + 280658139] > 0 )
      {
        v267 = (int)dword_140404A6C[1760 * dword_140404A6C[v1 + 280658140] + 278845898];
        if ( ((int)dword_140404A6C[1268 * v267 + 278521316] > 1 || (_DWORD)v267 == 36)
          && (*(float *)&dword_140404A6C[v1 + 280657921] > 0.70700002 || (dword_140404A6C[v1 + 280651436] & 8) == 0) )
        {
          v256 = dword_140404A6C[v1 + 280658140];
          v461 = 1;
          v473 = 1;
        }
      }
    }
    else
    {
      v256 = dword_140404A6C[v1 + 280658150];
    }
    v459 = 0.0;
    v257 = 0;
    if ( v256 != -1 )
    {
      v258 = (int)dword_140404A6C[1760 * v256 + 278845898];
      v259 = dword_140404A6C[1268 * v258 + 278521289] != 0;
      if ( (_DWORD)v258 == 34
        || (LODWORD(v459) = dword_140404A6C[1268 * v258 + 278521289] != 0, v257 = v259, (_DWORD)v258 == 29) )
      {
        v459 = *(float *)&v259;
        v257 = v259;
        if ( !v255 )
        {
          v461 = 1;
          v473 = 1;
          v459 = *(float *)&v259;
        }
      }
    }
    v490 = 1.0;
    v488 = xmmword_140278D30;
    v489 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v488, (float *)&dword_1402F6178);
    sub_14007B2A0((__int64)&v488, (float *)&v488);
    sub_14007B2A0((__int64)&v488, (float *)&v488 + 3);
    if ( dword_140404A6C[v1 + 280658335] == 1 )
      sub_14007B2A0((__int64)&v488, (float *)&v489 + 2);
    if ( dword_140404A6C[v1 + 280651313] == -1 && (dword_140404A6C[v1 + 280651436] & 2) != 0 )
      sub_14007B2A0((__int64)&v488, (float *)&dword_1402F6178);
    if ( (dword_140404A6C[v1 + 280651436] & 0x20) != 0 || !dword_140404A6C[v1 + 280658335] )
      sub_14007B2A0((__int64)&v488, (float *)&dword_1402F6178);
    sub_14007B2A0((__int64)&v488, (float *)&dword_1402F6188);
    if ( v256 == -1 )
    {
      v488 = xmmword_140278D30;
      v490 = 1.0;
      v489 = xmmword_140278D30;
    }
    if ( !v257 || dword_140404A6C[v1 + 280651313] != -1 )
      goto LABEL_156;
    v261 = -*(float *)&dword_140404A6C[v1 + 280658128];
    v465 = *(float *)&dword_140404A6C[v1 + 280658131];
    v262 = *(float *)&dword_140404A6C[v1 + 280658129];
    v462 = v261;
    v263 = -*(float *)&dword_140404A6C[v1 + 280658130];
    v463 = -v262;
    v464 = v263;
    sub_14011C340(&v488, &v462);
    sub_14007B2A0((__int64)&v488, (float *)&v488);
    if ( dword_140404A6C[v1 + 280651313] == -1 && (dword_140404A6C[v1 + 280651436] & 2) != 0 )
      sub_14007B2A0((__int64)&v488, (float *)&v488);
    if ( (dword_140404A6C[v1 + 280651436] & 0x20) != 0 || !dword_140404A6C[v1 + 280658335] )
    {
      sub_14007B2A0((__int64)&v488, (float *)&v488);
      v264 = 0.1875;
      v265 = 0.0625;
      v266 = 0.0;
    }
    else
    {
LABEL_156:
      v264 = 0.1875;
      v265 = 0.0625;
      v266 = 0.0;
      if ( !v257 )
        goto LABEL_160;
    }
    if ( dword_140404A6C[v1 + 280651313] == -1 && (int)dword_140404A6C[v1 + 280651327] < 2 )
      v265 = 0.0625;
LABEL_160:
    v268 = dword_140404A6C[v1 + 280651327];
    if ( v268 == 2 )
    {
      v264 = 0.0625;
      v265 = 0.125;
    }
    if ( v257 && dword_140404A6C[v1 + 280651313] != -1 )
      v265 = 0.125;
    if ( !v255 && (int)dword_140404A6C[v1 + 280658149] > 0 )
    {
      v264 = -0.125;
      v265 = 0.125;
    }
    if ( v256 != -1 )
    {
      v260 = 7040LL * v256;
      v269 = *(unsigned int *)((char *)&dword_140404A6C[278845898] + v260);
      if ( v269 == 34 || v269 == 29 )
      {
        v264 = 0.0;
        v265 = 0.0;
        v266 = 0.0;
        if ( dword_140404A6C[v1 + 280651313] != -1 )
          v265 = -0.125;
      }
    }
    v270 = dword_140404A6C[v1 + 280651436] & 0x20;
    if ( v270 || !dword_140404A6C[v1 + 280658335] )
    {
      v271 = sin((float)(fminf(*(float *)&dword_140404A6C[v1 + 280651331] + 1.17809724509625, 0.0) * 3.0)) * 0.375;
      v266 = (float)(-0.25 - v271) * v490;
      v264 = v264 + (float)((float)(-0.25 - v271) * *((float *)&v489 + 2));
      v265 = v265 + (float)((float)(-0.25 - v271) * *((float *)&v489 + 3));
    }
    v272 = (float)((float)(v264 - (float)(*((float *)&v489 + 2) * 0.1875)) - (float)(*((float *)&v489 + 2) * 0.375))
         + (float)(*((float *)&v488 + 3) * 0.0625);
    v273 = (float)((float)(v265 - (float)(*((float *)&v489 + 3) * 0.1875)) - (float)(*((float *)&v489 + 3) * 0.375))
         + (float)(*(float *)&v489 * 0.0625);
    v274 = (float)((float)(v266 - (float)(v490 * 0.1875)) - (float)(v490 * 0.375))
         + (float)(*((float *)&v489 + 1) * 0.0625);
    if ( v256 != -1 )
    {
      v260 = 7040LL * v256;
      if ( *(unsigned int *)((char *)&dword_140404A6C[278845898] + v260) == 39 )
      {
        v272 = (float)((float)(*((float *)&v489 + 2) * 0.27500001) + v272) - (float)(*((float *)&v488 + 3) * 0.125);
        v273 = (float)((float)(*((float *)&v489 + 3) * 0.27500001) + v273) - (float)(*(float *)&v489 * 0.125);
        v274 = (float)((float)(v490 * 0.27500001) + v274) - (float)(*((float *)&v489 + 1) * 0.125);
      }
    }
    if ( v255 == 1 )
    {
      if ( v256 == -1 )
        goto LABEL_195;
      if ( dword_140404A6C[1760 * v256 + 278845898] == 25
        && dword_140404A6C[1760 * dword_140404A6C[v1 + 280658140] + 278846052] == 3 )
      {
        v272 = (float)((float)(*((float *)&v489 + 2) * 0.4375) + v272) + (float)(*((float *)&v488 + 3) * 0.0625);
        v273 = (float)((float)(*((float *)&v489 + 3) * 0.4375) + v273) + (float)(*(float *)&v489 * 0.0625);
        v274 = (float)((float)(v490 * 0.4375) + v274) + (float)(*((float *)&v489 + 1) * 0.0625);
      }
    }
    else if ( v256 == -1 )
    {
      goto LABEL_192;
    }
    v260 = 7040LL * v256;
    v275 = *(unsigned int *)((char *)&dword_140404A6C[278845898] + v260);
    if ( v275 == 11 )
    {
      if ( dword_140404A6C[v1 + 280651313] == -1 )
      {
        if ( v268 == 2 )
        {
          v272 = v272 + (float)(*((float *)&v489 + 2) * -0.25);
          v273 = v273 + (float)(*((float *)&v489 + 3) * -0.25);
          v274 = v274 + (float)(v490 * -0.25);
        }
        else
        {
          v272 = v272 + (float)(*((float *)&v488 + 3) * -0.125);
          v273 = v273 + (float)(*(float *)&v489 * -0.125);
          v274 = v274 + (float)(*((float *)&v489 + 1) * -0.125);
        }
      }
    }
    else if ( v275 == 29 || v275 == 34 )
    {
      goto LABEL_195;
    }
LABEL_192:
    if ( !v255 && (int)dword_140404A6C[v1 + 280658149] > 0 )
    {
      v272 = v272 + (float)(*((float *)&v489 + 2) * 0.125);
      v273 = v273 + (float)(*((float *)&v489 + 3) * 0.125);
      v274 = v274 + (float)(v490 * 0.125);
    }
LABEL_195:
    if ( v270 || !dword_140404A6C[v1 + 280658335] )
    {
      if ( v256 == -1 )
      {
LABEL_213:
        v278 = 0.0;
        v276 = v256;
        v279 = 0.0;
        v280 = 0.0;
        goto LABEL_214;
      }
    }
    else
    {
      if ( v256 == -1 )
        goto LABEL_213;
      if ( dword_140404A6C[1760 * v256 + 278845898] == 15 )
      {
        v272 = *(float *)&dword_1402F6188 * -0.65625;
        v273 = *(float *)&dword_1402F618C * -0.65625;
        v274 = *(float *)&dword_1402F6190 * -0.65625;
        if ( dword_140404A6C[v1 + 280651313] != -1 )
        {
          v272 = (float)(*(float *)&dword_1402F6188 * 0.125) + v272;
          v273 = (float)(*(float *)&dword_1402F618C * 0.125) + v273;
          v274 = (float)(*(float *)&dword_1402F6190 * 0.125) + v274;
        }
        if ( v255 )
        {
          if ( v255 == 1 )
            v272 = 0.1875;
        }
        else
        {
          v272 = -0.1875;
        }
      }
      if ( dword_140404A6C[1760 * v256 + 278845898] == 15 )
      {
        sub_14007B2A0((__int64)&v488, (float *)&dword_1402F6178);
        if ( !v255 || v255 == 1 )
          sub_14007B2A0((__int64)&v488, (float *)&v489 + 2);
      }
    }
    v276 = v256;
    v260 = 5072LL * (int)dword_140404A6C[1760 * v256 + 278845898];
    v277 = v260 + 12 * v473;
    v278 = *(float *)((char *)&dword_140404A6C[278521317] + v277);
    v279 = *(float *)((char *)&dword_140404A6C[278521318] + v277);
    v280 = *(float *)((char *)&dword_140404A6C[278521319] + v277);
LABEL_214:
    v281 = (float)(v278 * *(float *)&v488) + v272;
    v282 = v278;
    v283 = v281 + (float)(v279 * *((float *)&v488 + 3));
    v284 = (float)((float)(v278 * *((float *)&v488 + 2)) + v274) + (float)(v279 * *((float *)&v489 + 1));
    v285 = (float)((float)(v282 * *((float *)&v488 + 1)) + v273) + (float)(v279 * *(float *)&v489);
    v286 = (float)(v280 * *((float *)&v489 + 2)) + v283;
    v287 = (float)(v280 * v490) + v284;
    v288 = (float)(v280 * *((float *)&v489 + 3)) + v285;
    v450 = v286;
    v452 = v287;
    v451 = v288;
    if ( v256 != -1 && dword_140404A6C[1760 * v276 + 278845898] == 26 && dword_140404A6C[1760 * v276 + 278846112] )
    {
      v289 = v280 + 0.1875;
      v286 = (float)(*((float *)&v489 + 2) * v289) + v283;
      v288 = (float)(*((float *)&v489 + 3) * v289) + v285;
      v287 = (float)(v490 * v289) + v284;
      v450 = v286;
      v451 = v288;
      v452 = v287;
    }
    if ( (dword_140404A6C[v1 + 280651436] & 0x20) != 0 || !dword_140404A6C[v1 + 280658335] )
    {
      if ( v256 == -1 )
        goto LABEL_221;
      if ( dword_140404A6C[1760 * v276 + 278845898] == 15 )
      {
        sub_14007B2A0((__int64)&v488, (float *)&v488);
        if ( (unsigned int)v255 <= 1 )
          sub_14007B2A0((__int64)&v488, (float *)&v489 + 2);
      }
    }
    else if ( v256 == -1 )
    {
      goto LABEL_221;
    }
    if ( !v257 || (v299 = dword_140404A6C[1760 * v276 + 278845898], v299 == 11) )
    {
      v300 = v454;
    }
    else if ( v255 == 1 || v461 == 1 )
    {
      v300 = v454;
      sub_1400B29B0((unsigned int)&v450, v454, v461, v299, LODWORD(v455), (__int64)&v488);
      v287 = v452;
      v288 = v451;
      v286 = v450;
    }
    else
    {
      v300 = v454;
    }
    v301 = dword_140404A6C[v1 + 280658335];
    if ( v301 == 1 )
    {
      v302 = -(float)((float)((float)((float)(v288 * *((float *)&v488 + 1)) + (float)(v286 * *(float *)&v488))
                            + (float)(v287 * *((float *)&v488 + 2)))
                    * *(float *)&dword_140404A6C[v1 + 280658336]);
      v286 = v286 + (float)(*(float *)&v488 * v302);
      v288 = v288 + (float)(*((float *)&v488 + 1) * v302);
      v287 = v287 + (float)(*((float *)&v488 + 2) * v302);
      v450 = v286;
      v451 = v288;
      v452 = v287;
    }
    v303 = *(float *)&dword_140404A6C[v1 + 280657930];
    v304 = *(float *)&dword_140404A6C[v1 + 280657931];
    v305 = *(float *)&dword_140404A6C[v1 + 280657932];
    v306 = 1760 * v276;
    v307 = 47LL * (int)dword_140404A6C[1760 * v276 + 278845915];
    v308 = dword_140404A6C[v307 + 18215718];
    v309 = dword_140404A6C[v307 + 18215719];
    v310 = dword_140404A6C[v307 + 18215720];
    if ( LOBYTE(dword_140404A6C[284024765]) )
    {
      v491 = *(float *)&v308 - v303;
      v492 = *(float *)&v309 - v304;
      v493 = *(float *)&v310 - v305;
      v311 = fsqrt((float)((float)(v492 * v492) + (float)(v491 * v491)) + (float)(v493 * v493));
      sub_1400A56B0(&v491, v311 + v311, 0.0);
      v312 = v1 * 4 + 56 * ((unsigned int)v255 ^ 1LL);
      v313 = v492;
      *(float *)&v308 = (float)((float)(v491 + *(float *)((char *)&dword_140404A6C[280658230] + v312)) * 0.75)
                      + (float)(*(float *)&v308 * 0.25);
      v314 = *(float *)&v309 * 0.25;
      *(unsigned int *)((char *)&dword_140404A6C[280658230] + v312) = v308;
      v315 = (float)(v313 + *(float *)((char *)&dword_140404A6C[280658231] + v312)) * 0.75;
      v316 = v493;
      *(float *)&v309 = v315 + v314;
      *(unsigned int *)((char *)&dword_140404A6C[280658231] + v312) = v309;
      *(float *)&v310 = (float)((float)(v316 + *(float *)((char *)&dword_140404A6C[280658232] + v312)) * 0.75)
                      + (float)(*(float *)&v310 * 0.25);
      *(unsigned int *)((char *)&dword_140404A6C[280658232] + v312) = v310;
      v301 = dword_140404A6C[v1 + 280658335];
    }
    v317 = *(float *)&v309 - v304;
    v318 = *(float *)&v308 - v303;
    v319 = *(float *)&v310 - v305;
    v7 = (dword_140404A6C[v1 + 280651436] & 0x20) == 0;
    v320 = v317 * *(float *)&dword_140404A6C[v1 + 280651612];
    v321 = v318 * *(float *)&dword_140404A6C[v1 + 280651611];
    v322 = (float)((float)(v317 * *(float *)(0x140000004LL + v1 * 4 + 1126819788))
                 + (float)(v318 * *(float *)(0x140000000LL + v1 * 4 + 1126819788)))
         + (float)(v319 * *(float *)(0x140000008LL + v1 * 4 + 1126819788));
    v323 = v319 * *(float *)&dword_140404A6C[v1 + 280651613];
    v324 = v319 * *(float *)&dword_140404A6C[v1 + 280651616];
    v325 = (float)(v317 * *(float *)&dword_140404A6C[v1 + 280651615])
         + (float)(v318 * *(float *)&dword_140404A6C[v1 + 280651614]);
    *(float *)&v456 = v322;
    v326 = (float)(v320 + v321) + v323;
    v327 = v325 + v324;
    *((float *)&v456 + 1) = v326;
    v457 = v327;
    if ( v7 && v301 )
    {
      v286 = v286 + (float)(v322 * -0.75);
      v288 = v288 + (float)(v326 * -0.75);
      v287 = v287 + (float)(v327 * -0.75);
      v450 = v286;
      v451 = v288;
      v452 = v287;
    }
    v328 = dword_140404A6C[v306 + 278845898];
    if ( v328 == 34 || v328 == 29 )
    {
      sub_14007B2A0((__int64)&v488, (float *)&v488);
      v328 = dword_140404A6C[v306 + 278845898];
    }
    if ( v328 == 18 )
    {
      sub_14007B2A0((__int64)&v488, (float *)&v488);
      v328 = dword_140404A6C[v306 + 278845898];
    }
    if ( v328 == 28 )
    {
      sub_1400AC530(&v450, v300, v256);
      v496[0] = xmmword_140278D30;
      v497 = 1065353216;
      v496[1] = xmmword_140278D30;
      sub_14007B2A0((__int64)v496, (float *)&dword_1402F6188);
      sub_14011C080(&v488, 0x140000000LL + v1 * 4 + 1126819788, v496);
      v287 = v452;
      v288 = v451;
      v286 = v450;
    }
    v329 = (int)dword_140404A6C[1760 * v276 + 278845898];
    v260 = 2 * (v473 + 317 * v329);
    if ( fabs(*(float *)&dword_140404A6C[1268 * v329 + 278521332 + 4 * v473]) > 0.0 )
    {
      v330 = *(float *)&dword_140404A6C[1268 * v329 + 278521329 + 4 * v473];
      v331 = *(float *)&dword_140404A6C[1268 * v329 + 278521330 + 4 * v473];
      v332 = *(float *)&dword_140404A6C[1268 * v329 + 278521331 + 4 * v473];
      *(float *)&v456 = (float)((float)(*((float *)&v488 + 3) * v331) + (float)(*(float *)&v488 * v330))
                      + (float)(*((float *)&v489 + 2) * v332);
      *((float *)&v456 + 1) = (float)((float)(*(float *)&v489 * v331) + (float)(*((float *)&v488 + 1) * v330))
                            + (float)(*((float *)&v489 + 3) * v332);
      v457 = (float)((float)(*((float *)&v489 + 1) * v331) + (float)(*((float *)&v488 + 2) * v330))
           + (float)(v490 * v332);
      sub_14007B2A0((__int64)&v488, (float *)&v456);
    }
LABEL_221:
    if ( !v255 )
    {
      sub_1400A56B0((float *)&v456, 0.0078125, 0.0);
      *(float *)&v290 = *(float *)&v456 + *(float *)&dword_140404A6C[v1 + 280651412];
      v291 = *((float *)&v456 + 1);
      v292 = v457;
      dword_140404A6C[v1 + 280651412] = v290;
      *(float *)&v293 = v291 + *(float *)&dword_140404A6C[v1 + 280651413];
      dword_140404A6C[v1 + 280651413] = v293;
      *(float *)&v294 = v292 + *(float *)&dword_140404A6C[v1 + 280651414];
      dword_140404A6C[v1 + 280651414] = v294;
      *(float *)&v295 = *(float *)&v290 - (float)(*(float *)&dword_140404A6C[v1 + 280651409] * 0.00390625);
      dword_140404A6C[v1 + 280651412] = v295;
      *(float *)&v296 = *(float *)&v295 * 0.9375;
      *(float *)&v297 = *(float *)&v293 - (float)(*(float *)&dword_140404A6C[v1 + 280651410] * 0.00390625);
      dword_140404A6C[v1 + 280651413] = v297;
      v298 = *(float *)&dword_140404A6C[v1 + 280651411];
      dword_140404A6C[v1 + 280651412] = v296;
      *(float *)&dword_140404A6C[v1 + 280651413] = *(float *)&v297 * 0.9375;
      *(float *)&dword_140404A6C[v1 + 280651414] = (float)(*(float *)&v294 - (float)(v298 * 0.00390625)) * 0.9375;
      *(float *)&dword_140404A6C[v1 + 280651409] = *(float *)&v296 + *(float *)&dword_140404A6C[v1 + 280651409];
      *(float *)&dword_140404A6C[v1 + 280651410] = *(float *)&dword_140404A6C[v1 + 280651413]
                                                 + *(float *)&dword_140404A6C[v1 + 280651410];
      *(float *)&dword_140404A6C[v1 + 280651411] = *(float *)&dword_140404A6C[v1 + 280651414]
                                                 + *(float *)&dword_140404A6C[v1 + 280651411];
    }
    v333 = v483;
    v334 = 75 * v483;
    v335 = (float)((float)(*(float *)&v489 * 0.0625) + v288) - *(float *)&dword_140404A6C[75 * v483 + 282486150];
    v450 = (float)((float)(*((float *)&v488 + 3) * 0.0625) + v286) - *(float *)&dword_140404A6C[75 * v483 + 282486149];
    v451 = v335;
    v452 = (float)((float)(*((float *)&v489 + 1) * 0.0625) + v287) - *(float *)&dword_140404A6C[75 * v483 + 282486151];
    if ( v256 == -1 )
    {
      v450 = -0.0625;
      if ( v255 )
        v450 = 0.0625;
      v336 = dword_140404A6C[v1 + 280651327];
      v337 = *(float *)&dword_140404A6C[v1 + 280658138] * 0.39269908169875;
      if ( v336 > 0 )
        v337 = v337 * 0.5;
      if ( v255 == 1 )
        v337 = -v337;
      v338 = 0;
      v338.m128d_f64[0] = v337;
      if ( v336 )
        v339 = 0.196349540849375;
      else
        v339 = 0.39269908169875;
      v338.m128d_f64[0] = v338.m128d_f64[0] + v339;
      v340 = _mm_cvtpd_ps(v338);
      if ( (int)dword_140404A6C[v1 + 280657908] > 0 )
        v340 = (__m128)0x3F490FDBu;
      v341 = 0.875;
      if ( !v336 )
        v341 = 0.75;
      if ( LOBYTE(dword_140404A6C[284024765]) )
      {
        v342 = (__m128d)0x4005FDBBE9BBA90DuLL;
        v343 = *(float *)&dword_140404A6C[v1 + 280651342];
        v342.m128d_f64[0] = 2.74889357189125 - (float)((float)(v343 + *(float *)&dword_140404A6C[v1 + 280651384]) * 1.5);
        v340 = _mm_cvtpd_ps(v342);
        v341 = 1.0;
        if ( v343 > 0.0 )
        {
          v344 = v343 * 0.75;
          if ( v344 >= 0.75 )
            v341 = 0.25;
          else
            v341 = 1.0 - v344;
        }
      }
      if ( ((dword_140404A6C[v1 + 280651325] - 1) & 0xFFFFFFFD) == 0 )
      {
        v341 = 0.9375;
        v345 = (__m128d)0x3FF921FB54442EEAuLL;
        v345.m128d_f64[0] = 1.570796326795
                          - (float)(*(float *)&dword_140404A6C[v1 + 280651384]
                                  + *(float *)&dword_140404A6C[v1 + 280651342]);
        v340 = _mm_cvtpd_ps(v345);
      }
      if ( dword_140404A6C[v1 + 280651313] != -1 )
        v340 = (__m128)0x3FC90FDBu;
      v346.m128d_f64[1] = _mm_cvtps_pd(v340).m128d_f64[1];
      v346.m128d_f64[0] = MEMORY[0x1401F8A50](v260);
      v347 = _mm_shuffle_pd(v346, v346, 1).m128d_f64[0] * -0.65625 * v341;
      *(float *)v346.m128d_f64 = v346.m128d_f64[0] * -0.65625 * v341;
      v451 = v347;
      v452 = *(float *)v346.m128d_f64;
      if ( v487 && v255 == 1 && (dword_140404A6C[v1 + 280651436] & 3) == 3 )
      {
        v450 = -0.1875;
        v451 = 0.0;
        v452 = -0.65625;
        sub_14007B4D0(&v450, (float *)&dword_1402F6178);
        sub_14007B4D0(&v450, (float *)&dword_1402F6188);
      }
    }
    else if ( dword_140404A6C[1760 * v276 + 278845898] == 36 )
    {
      v450 = 0.1875;
      if ( v255 )
        v450 = -0.1875;
      v451 = 0.56318527;
      v452 = -0.11202452;
    }
    sub_14010E370(&v453, &v488);
    v7 = dword_140404A6C[v1 + 280658335] == 0;
    v453.m128_i32[0] ^= 0x80000000;
    v453.m128_f32[1] = -v453.m128_f32[1];
    v453.m128_i32[2] ^= 0x80000000;
    v460 = 0.19634955;
    if ( v7 )
      v460 = 0.78539819;
    if ( (int)dword_140404A6C[v1 + 280657908] > 0 )
      v460 = 0.78539819;
    v348 = dword_140404A6C[v1 + 280651325];
    if ( v348 == 3 )
    {
      v460 = 0.78539819;
    }
    else if ( v348 == 2 )
    {
      goto LABEL_297;
    }
    if ( dword_140404A6C[v1 + 280651324]
      && *(float *)&dword_140404A6C[v1 + 280657921] < 0.5
      && (dword_140404A6C[v1 + 280651436] & 8) != 0 )
    {
      v349 = *(float *)&dword_140404A6C[v1 + 280651609];
      v350 = *(float *)&dword_140404A6C[v1 + 280651608];
      v351 = *(float *)&dword_140404A6C[v1 + 280651610];
      v352 = *(float *)&dword_140404A6C[v1 + 280651611];
      v481 = *(float *)&dword_140404A6C[v1 + 280651616];
      v468 = *(float *)&dword_140404A6C[v1 + 280651612];
      v353 = (float)((float)(v350 * *(float *)&dword_1402F6188) + (float)(v349 * *(float *)&dword_1402F618C))
           + (float)(v351 * *(float *)&dword_1402F6190);
      v480 = *(float *)&dword_140404A6C[v1 + 280651613];
      v469 = dword_140404A6C[v1 + 280651614];
      v354 = (float)((float)(v352 * *(float *)&dword_1402F6188) + (float)(v468 * *(float *)&dword_1402F618C))
           + (float)(v480 * *(float *)&dword_1402F6190);
      v479 = *(float *)&dword_140404A6C[v1 + 280651615];
      v355 = (float)((float)(*(float *)&v469 * *(float *)&dword_1402F6188) + (float)(v479 * *(float *)&dword_1402F618C))
           + (float)(v481 * *(float *)&dword_1402F6190);
      v356 = fsqrt((float)((float)(v354 * v354) + (float)(v353 * v353)) + (float)(v355 * v355));
      if ( v356 == 0.0 )
      {
        v456 = 0;
        v357 = 0.0;
        v358 = 0.0;
        v359 = 0.0;
      }
      else
      {
        v357 = (float)(1.0 / v356) * v353;
        v358 = (float)(1.0 / v356) * v354;
        *(float *)&v456 = v357;
        v359 = (float)(1.0 / v356) * v355;
        *((float *)&v456 + 1) = v358;
      }
      v360 = *(float *)&dword_140404A6C[v334 + 282486149];
      v361 = *(float *)&dword_140404A6C[v334 + 282486150];
      v362 = *(float *)&dword_140404A6C[v334 + 282486151];
      v363 = 0.65625;
      v364 = (float)(v350 * v360) + *(float *)&dword_140404A6C[v1 + 280651596];
      v365 = (float)(v349 * v360) + *(float *)&dword_140404A6C[v1 + 280651597];
      v366 = (float)((float)(v351 * v360) + *(float *)&dword_140404A6C[v1 + 280651598]) + (float)(v480 * v361);
      v457 = v359;
      *(float *)&v494 = (float)(v364 + (float)(v352 * v361)) + (float)(*(float *)&v469 * v362);
      v491 = *(float *)&v494 - *(float *)&dword_1402F6188;
      v495 = v366 + (float)(v481 * v362);
      *((float *)&v494 + 1) = (float)(v365 + (float)(v468 * v361)) + (float)(v479 * v362);
      v493 = v495 - *(float *)&dword_1402F6190;
      v492 = *((float *)&v494 + 1) - *(float *)&dword_1402F618C;
      if ( (unsigned int)sub_1400DC050(&v494, &v491, 0) )
        v363 = (float)(*((float *)&v494 + 1) - *(float *)&dword_140404A6C[73006982]) + 0.00390625;
      v367 = -fminf(v363, 0.65625);
      v450 = v357 * v367;
      v451 = v358 * v367;
      v452 = v359 * v367;
    }
LABEL_297:
    v368 = dword_140404A6C[v1 + 280651436];
    v369 = 6;
    if ( v256 == -1 )
      v369 = 4;
    v485 = 1065353216;
    v494 = 0;
    v370 = v369 | 1;
    v495 = 0.0;
    v470 = 1050069988;
    v371 = *(&v477 + v333);
    v474 = 1063256064;
    v471 = 1041681380;
    v475 = 1063256064;
    v472 = 1041681380;
    v476 = 1063256064;
    v484[0] = xmmword_140278D30;
    if ( v371 >= 1.0 )
      v370 = v369;
    v484[1] = xmmword_140278D30;
    if ( v256 == -1 && (((v255 != 1) + 1) & v368) == (v255 != 1) + 1 )
    {
      v460 = 0.39269909;
      v372 = 0.0;
      v471 = 1050069988;
      v472 = 1050069988;
    }
    else
    {
      if ( dword_140404A6C[v1 + 280651313] != -1 || v256 != -1 )
        goto LABEL_312;
      v373 = dword_140404A6C[v1 + 280651325];
      if ( v373 != 3 )
      {
        if ( v373 == 1 && (v368 & 8) == 0 )
        {
LABEL_311:
          v458 = 0.0;
          v374 = 0.0;
          v470 = 1033292772;
          v471 = 1033292772;
          v472 = 1033292772;
          v474 = 1061158912;
          v475 = 1061158912;
          v476 = 1061158912;
          v466 = 0x3D8000003D800000LL;
          v467 = 1031798784;
          goto LABEL_328;
        }
LABEL_312:
        v372 = 0.0;
        if ( v256 != -1 )
        {
          v372 = 0.78539819;
          v375 = dword_140404A6C[1760 * v276 + 278845898];
          if ( v375 == 11 )
          {
            v372 = 0.39269909;
          }
          else if ( v375 == 3 )
          {
            v372 = 1.3744467;
          }
        }
        goto LABEL_317;
      }
      if ( *(float *)&dword_140404A6C[v1 + 280658028] >= 0.875 )
        goto LABEL_311;
      v372 = 0.0;
    }
LABEL_317:
    if ( v255 )
    {
      if ( v255 == 1 )
      {
        v458 = v372;
        v376 = v372;
      }
      else
      {
        v376 = v458;
      }
    }
    else
    {
      v376 = -v372;
      v458 = -v372;
    }
    if ( (v368 & 0x20) != 0 || !dword_140404A6C[v1 + 280658335] )
    {
      v376 = 0.0;
      v458 = 0.0;
    }
    v466 = 0;
    v467 = 0;
    if ( v371 < 1.0 )
    {
      *(float *)&v466 = (float)(v371 * 0.015625) + 0.00390625;
      *((float *)&v466 + 1) = *(float *)&v466;
    }
    v370 |= 0x10u;
    v374 = v376;
LABEL_328:
    v377 = v460;
    v378 = 3 * v255;
    sub_1400B1450(
      v454,
      2,
      3 * v255 + 4,
      (unsigned int)&v450,
      (__int64)v484,
      (__int64)&v494,
      1059586048,
      LODWORD(v374),
      (__int64)&v453,
      (__int64)&v470,
      (__int64)&v474,
      (__int64)&v466,
      LODWORD(v460),
      v370);
    if ( v256 == -1 )
    {
      if ( dword_140404A6C[v1 + 280651325] == 2 )
      {
        v416 = sub_14023EB20();
        v417 = *(float *)&v416;
        if ( *(float *)&v416 <= 0.0 )
          v418 = 0.25;
        else
          v418 = 4.0;
        v419 = v417 * v418;
        if ( v419 > 2.748893571891069 )
          v419 = 2.7488935;
        v450 = -0.09375;
        if ( v255 )
          v450 = 0.09375;
        v420 = MEMORY[0x1401F8A50](v415);
        v421 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v420, (__m128d)*(unsigned __int64 *)&v420, 1).m128d_f64[0]
             * -0.4921875;
        *(float *)&v420 = v420 * -0.4921875;
        v451 = v421;
        v452 = *(float *)&v420;
        if ( v419 <= 0.0 )
          v422 = 0.0;
        else
          v422 = v419 * 0.5;
        if ( v255 )
        {
          if ( v255 == 1 )
            v458 = v422;
          else
            v422 = v458;
        }
        else
        {
          v422 = -v422;
          v458 = v422;
        }
        v380 = v454;
        v466 = 0x3D8000003D800000LL;
        v467 = 1031798784;
        sub_1400B1450(
          v454,
          2,
          v378 + 4,
          (unsigned int)&v450,
          (__int64)v484,
          (__int64)&v494,
          1059586048,
          LODWORD(v422),
          (__int64)&v453,
          (__int64)&v470,
          (__int64)&v474,
          (__int64)&v466,
          LODWORD(v377),
          v370);
      }
      else
      {
        v380 = v454;
      }
    }
    else
    {
      v379 = 1760 * v276;
      v380 = v454;
      v456 = 0;
      v457 = 0.0;
      v381 = (int)dword_140404A6C[v379 + 278845898];
      v382 = 5072 * v381 + 12 * v473;
      v383 = *(unsigned int *)((char *)&dword_140404A6C[278521318] + v382);
      v486[0] = *(unsigned int *)((char *)&dword_140404A6C[278521317] + v382);
      v384 = *(unsigned int *)((char *)&dword_140404A6C[278521319] + v382);
      v486[1] = v383;
      v486[2] = v384;
      sub_1400B4DA0(
        v454,
        v378 + 6,
        v256,
        (unsigned int)&v456,
        (__int64)v486,
        (__int64)&dword_140404A6C[1268 * v381 + 278521329 + 4 * v461]);
      if ( (dword_140404A6C[v1 + 280651436] & 0x20) == 0
        && dword_140404A6C[v1 + 280658335]
        && v255 == 1
        && v459 != 0.0
        && dword_140404A6C[v1 + 280651313] == -1 )
      {
        sub_1400AA510(v380, v256);
      }
    }
    ++v483;
    ++v255;
  }
  while ( v255 < 2 );
  v385 = (int)dword_140404A6C[v1 + 280651667];
  dword_140404A6C[36 * dword_140404A6C[v1 + 280651589] + 485543048] = 0;
  v386 = 9 * v385;
  v387 = (int)dword_140404A6C[v1 + 280651745];
  dword_140404A6C[4 * v386 + 485543048] = 0;
  v388 = 9 * v387;
  v389 = (int)dword_140404A6C[v1 + 280651823];
  dword_140404A6C[4 * v388 + 485543048] = 0;
  v390 = 9 * v389;
  v391 = (int)dword_140404A6C[v1 + 280651901];
  dword_140404A6C[4 * v390 + 485543048] = 0;
  v392 = 9 * v391;
  v393 = (int)dword_140404A6C[v1 + 280652057];
  dword_140404A6C[4 * v392 + 485543048] = 0;
  v394 = 9 * v393;
  v395 = (int)dword_140404A6C[v1 + 280652135];
  dword_140404A6C[4 * v394 + 485543048] = 0;
  v7 = dword_140404A6C[v1 + 280651325] == 2;
  dword_140404A6C[36 * v395 + 485543048] = 0;
  if ( v7 )
  {
    v396 = (int)dword_140404A6C[v1 + 280651589];
    v397 = &dword_140404A6C[36 * v396 + 485543049];
    dword_140404A6C[36 * v396 + 485543048] = 0;
    *(_QWORD *)v397 = 0;
    v397[2] = 0;
    sub_1400A9EF0(v380, 0, 1, (float *)v397);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[36 * v396 + 485543049]
                               * *(float *)&dword_140404A6C[36 * v396 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[36 * v396 + 485543050]
                               * *(float *)&dword_140404A6C[36 * v396 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[36 * v396 + 485543051]
                       * *(float *)&dword_140404A6C[36 * v396 + 485543051])) > 0.0 )
      dword_140404A6C[36 * v396 + 485543048] = 1;
    v398 = 61 * v396;
    v399 = (int)dword_140404A6C[v1 + 280651667];
    dword_140404A6C[v398 + 486149287] = 1006632960;
    v400 = &dword_140404A6C[36 * v399 + 485543049];
    dword_140404A6C[36 * v399 + 485543048] = 0;
    *(_QWORD *)v400 = 0;
    v400[2] = 0;
    sub_1400A9EF0(v380, 1, 2, (float *)v400);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[36 * v399 + 485543049]
                               * *(float *)&dword_140404A6C[36 * v399 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[36 * v399 + 485543050]
                               * *(float *)&dword_140404A6C[36 * v399 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[36 * v399 + 485543051]
                       * *(float *)&dword_140404A6C[36 * v399 + 485543051])) > 0.0 )
      dword_140404A6C[36 * v399 + 485543048] = 1;
    v401 = (int)dword_140404A6C[v1 + 280651745];
    v402 = 36 * v401;
    v403 = &dword_140404A6C[36 * v401 + 485543049];
    dword_140404A6C[61 * v399 + 486149287] = 1006632960;
    dword_140404A6C[36 * v401 + 485543048] = 0;
    *(_QWORD *)v403 = 0;
    v403[2] = 0;
    sub_1400A9EF0(v380, 2, 3, (float *)v403);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[v402 + 485543049]
                               * *(float *)&dword_140404A6C[v402 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[v402 + 485543050]
                               * *(float *)&dword_140404A6C[v402 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[v402 + 485543051] * *(float *)&dword_140404A6C[v402 + 485543051])) > 0.0 )
      dword_140404A6C[v402 + 485543048] = 1;
    v404 = 61 * v401;
    v405 = 4;
    v406 = 4;
    v407 = &dword_140404A6C[v1 + 280651901];
    dword_140404A6C[v404 + 486149287] = 1006632960;
    do
    {
      v408 = (int)*(v407 - 78);
      v409 = 36 * v408;
      v410 = &dword_140404A6C[36 * v408 + 485543049];
      dword_140404A6C[36 * v408 + 485543048] = 0;
      *(_QWORD *)v410 = 0;
      v410[2] = 0;
      sub_1400A9EF0(v380, 2, v406, (float *)v410);
      if ( (float)((float)((float)(*(float *)&dword_140404A6C[v409 + 485543049]
                                 * *(float *)&dword_140404A6C[v409 + 485543049])
                         + (float)(*(float *)&dword_140404A6C[v409 + 485543050]
                                 * *(float *)&dword_140404A6C[v409 + 485543050]))
                 + (float)(*(float *)&dword_140404A6C[v409 + 485543051] * *(float *)&dword_140404A6C[v409 + 485543051])) > 0.0 )
        dword_140404A6C[v409 + 485543048] = 1;
      v411 = 61 * v408;
      v412 = (int)*v407;
      dword_140404A6C[v411 + 486149287] = 1023410176;
      v413 = 36 * v412;
      v414 = &dword_140404A6C[36 * v412 + 485543049];
      dword_140404A6C[36 * v412 + 485543048] = 0;
      *(_QWORD *)v414 = 0;
      v414[2] = 0;
      sub_1400A9EF0(v380, (unsigned int)v406, v406 + 1, (float *)v414);
      if ( (float)((float)((float)(*(float *)&dword_140404A6C[v413 + 485543049]
                                 * *(float *)&dword_140404A6C[v413 + 485543049])
                         + (float)(*(float *)&dword_140404A6C[v413 + 485543050]
                                 * *(float *)&dword_140404A6C[v413 + 485543050]))
                 + (float)(*(float *)&dword_140404A6C[v413 + 485543051] * *(float *)&dword_140404A6C[v413 + 485543051])) > 0.0 )
        dword_140404A6C[v413 + 485543048] = 1;
      v406 += 3;
      v407 += 234;
      dword_140404A6C[61 * v412 + 486149287] = 1023410176;
    }
    while ( v406 < 10 );
  }
  else
  {
    v405 = 4;
  }
  v423 = dword_140404A6C[v1 + 280651333];
  if ( v423 > 0 )
  {
    v424 = (int)dword_140404A6C[v1 + 280651589];
    v425 = 36 * v424;
    v426 = &dword_140404A6C[36 * v424 + 485543049];
    dword_140404A6C[36 * v424 + 485543048] = 0;
    *(_QWORD *)v426 = 0;
    v426[2] = 0;
    *(float *)&v427 = 0.125 - (float)(fminf((float)v423 * 0.016666668, 1.0) * 0.1171875);
    sub_1400A9EF0(v380, 0, 1, (float *)v426);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[v425 + 485543049]
                               * *(float *)&dword_140404A6C[v425 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[v425 + 485543050]
                               * *(float *)&dword_140404A6C[v425 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[v425 + 485543051] * *(float *)&dword_140404A6C[v425 + 485543051])) > 0.0 )
      dword_140404A6C[v425 + 485543048] = 1;
    v428 = 61 * v424;
    v429 = (int)dword_140404A6C[v1 + 280651667];
    dword_140404A6C[v428 + 486149287] = v427;
    v430 = 36 * v429;
    v431 = &dword_140404A6C[36 * v429 + 485543049];
    dword_140404A6C[36 * v429 + 485543048] = 0;
    *(_QWORD *)v431 = 0;
    v431[2] = 0;
    sub_1400A9EF0(v380, 1, 2, (float *)v431);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[v430 + 485543050]
                               * *(float *)&dword_140404A6C[v430 + 485543050])
                       + (float)(*(float *)&dword_140404A6C[v430 + 485543049]
                               * *(float *)&dword_140404A6C[v430 + 485543049]))
               + (float)(*(float *)&dword_140404A6C[v430 + 485543051] * *(float *)&dword_140404A6C[v430 + 485543051])) > 0.0 )
      dword_140404A6C[v430 + 485543048] = 1;
    v432 = 61 * v429;
    v433 = (int)dword_140404A6C[v1 + 280651745];
    dword_140404A6C[v432 + 486149287] = v427;
    v434 = 36 * v433;
    v435 = &dword_140404A6C[36 * v433 + 485543049];
    dword_140404A6C[36 * v433 + 485543048] = 0;
    *(_QWORD *)v435 = 0;
    v435[2] = 0;
    sub_1400A9EF0(v380, 2, 3, (float *)v435);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[v434 + 485543049]
                               * *(float *)&dword_140404A6C[v434 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[v434 + 485543050]
                               * *(float *)&dword_140404A6C[v434 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[v434 + 485543051] * *(float *)&dword_140404A6C[v434 + 485543051])) > 0.0 )
      dword_140404A6C[v434 + 485543048] = 1;
    v436 = 61 * v433;
    v437 = (int *)(0x140000000LL + v1 * 4 + 1126820960);
    dword_140404A6C[v436 + 486149287] = v427;
    *(float *)&v438 = *(float *)&v427 * 0.25;
    do
    {
      v439 = *(v437 - 78);
      v440 = 36 * v439;
      v441 = &dword_140404A6C[36 * v439 + 485543049];
      dword_140404A6C[36 * v439 + 485543048] = 0;
      *(_QWORD *)v441 = 0;
      v441[2] = 0;
      sub_1400A9EF0(v380, 2, v405, (float *)v441);
      if ( (float)((float)((float)(*(float *)&dword_140404A6C[v440 + 485543049]
                                 * *(float *)&dword_140404A6C[v440 + 485543049])
                         + (float)(*(float *)&dword_140404A6C[v440 + 485543050]
                                 * *(float *)&dword_140404A6C[v440 + 485543050]))
                 + (float)(*(float *)&dword_140404A6C[v440 + 485543051] * *(float *)&dword_140404A6C[v440 + 485543051])) > 0.0 )
        dword_140404A6C[v440 + 485543048] = 1;
      v442 = 61 * v439;
      v443 = *v437;
      dword_140404A6C[v442 + 486149287] = v438;
      v444 = 36 * v443;
      v445 = &dword_140404A6C[36 * v443 + 485543049];
      dword_140404A6C[36 * v443 + 485543048] = 0;
      *(_QWORD *)v445 = 0;
      v445[2] = 0;
      sub_1400A9EF0(v380, (unsigned int)v405, v405 + 1, (float *)v445);
      if ( (float)((float)((float)(*(float *)&dword_140404A6C[v444 + 485543049]
                                 * *(float *)&dword_140404A6C[v444 + 485543049])
                         + (float)(*(float *)&dword_140404A6C[v444 + 485543050]
                                 * *(float *)&dword_140404A6C[v444 + 485543050]))
                 + (float)(*(float *)&dword_140404A6C[v444 + 485543051] * *(float *)&dword_140404A6C[v444 + 485543051])) > 0.0 )
        dword_140404A6C[v444 + 485543048] = 1;
      v405 += 3;
      v437 += 234;
      dword_140404A6C[61 * v443 + 486149287] = v438;
    }
    while ( v405 < 10 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v447 ^ v498);
}

