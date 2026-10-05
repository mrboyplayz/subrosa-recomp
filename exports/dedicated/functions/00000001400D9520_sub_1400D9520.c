/* Address: 0x1400d9520 | Name: sub_1400D9520 | Size: 8550 bytes */
_BOOL8 __fastcall sub_1400D9520(float *a1, float *a2, float *a3, float *a4, float a5, __int64 a6, float a7, float a8)
{
  unsigned __int16 v8; // r10
  float v10; // xmm4_4
  float v12; // r9d
  float v15; // xmm10_4
  int v16; // r15d
  int v17; // r9d
  __m128i v18; // xmm9
  __m128i v19; // xmm2
  __int64 v20; // r13
  float v21; // xmm8_4
  float v22; // xmm9_4
  float v23; // xmm2_4
  __int64 v24; // r12
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  float v28; // xmm13_4
  float v29; // xmm12_4
  float v30; // xmm14_4
  __int64 v31; // rax
  float v32; // xmm13_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm5_4
  float v39; // xmm7_4
  float v40; // xmm9_4
  float v41; // xmm11_4
  __int64 v42; // rax
  float v43; // xmm2_4
  float v44; // xmm2_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm7_4
  float v48; // xmm9_4
  float v49; // xmm7_4
  float v50; // xmm8_4
  float v51; // xmm3_4
  float v52; // xmm9_4
  float v53; // xmm7_4
  float v54; // xmm8_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm5_4
  float v58; // xmm3_4
  float v59; // xmm1_4
  float v60; // xmm4_4
  float v61; // xmm5_4
  float v62; // xmm1_4
  bool v63; // cf
  float v64; // xmm5_4
  float v65; // xmm4_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  float v68; // xmm3_4
  float v69; // xmm4_4
  float v70; // xmm5_4
  float v71; // xmm1_4
  float v72; // xmm7_4
  float v73; // xmm5_4
  float v74; // xmm3_4
  float v75; // xmm4_4
  float v76; // xmm1_4
  float v77; // xmm8_4
  float v78; // xmm11_4
  float v79; // xmm2_4
  float v80; // xmm9_4
  float v81; // xmm7_4
  float v82; // xmm9_4
  float v83; // xmm11_4
  float v84; // xmm7_4
  float v85; // xmm12_4
  float v86; // xmm8_4
  float v87; // xmm13_4
  float v88; // xmm1_4
  float v89; // xmm12_4
  float v90; // xmm2_4
  float v91; // xmm0_4
  float v92; // xmm8_4
  float v93; // xmm11_4
  float v94; // xmm12_4
  float v95; // xmm13_4
  float v96; // xmm14_4
  float v97; // xmm9_4
  float v98; // xmm11_4
  float v99; // xmm7_4
  float v100; // xmm2_4
  float v101; // xmm9_4
  float v102; // xmm11_4
  float v103; // xmm7_4
  float v104; // xmm12_4
  float v105; // xmm13_4
  float v106; // xmm14_4
  float v107; // xmm1_4
  float v108; // xmm2_4
  float v109; // xmm12_4
  float v110; // xmm0_4
  float v111; // xmm7_4
  float v112; // xmm12_4
  float v113; // xmm13_4
  float v114; // xmm14_4
  float v115; // xmm9_4
  float v116; // xmm11_4
  float v117; // xmm1_4
  float v118; // xmm7_4
  float v119; // xmm9_4
  float v120; // xmm11_4
  float v121; // xmm7_4
  float v122; // xmm12_4
  float v123; // xmm13_4
  float v124; // xmm14_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm12_4
  float v128; // xmm0_4
  float v129; // xmm7_4
  float v130; // xmm13_4
  float v131; // xmm14_4
  float v132; // xmm12_4
  float v133; // xmm9_4
  float v134; // xmm11_4
  float v135; // xmm2_4
  float v136; // xmm7_4
  float v137; // xmm12_4
  float v138; // xmm7_4
  float v139; // xmm9_4
  float v140; // xmm3_4
  float v141; // xmm5_4
  float v142; // xmm4_4
  float v143; // xmm1_4
  float v144; // xmm2_4
  float v145; // xmm3_4
  float v146; // xmm0_4
  __int64 v147; // rdx
  int v148; // r13d
  unsigned __int64 v149; // rcx
  int v150; // r12d
  __int64 v151; // r15
  __int64 v152; // rax
  float v153; // xmm14_4
  float v154; // xmm1_4
  float v155; // xmm7_4
  float v156; // xmm2_4
  float v157; // xmm5_4
  float v158; // xmm1_4
  float v159; // xmm11_4
  float v160; // xmm14_4
  float v161; // xmm13_4
  float v162; // xmm0_4
  float v163; // xmm12_4
  float v164; // xmm5_4
  float v165; // xmm13_4
  float v166; // xmm14_4
  float v167; // xmm3_4
  float v168; // xmm12_4
  float v169; // xmm11_4
  float v170; // xmm1_4
  float v171; // xmm9_4
  float v172; // xmm7_4
  float v173; // xmm8_4
  float v174; // xmm3_4
  float v175; // xmm9_4
  float v176; // xmm7_4
  float v177; // xmm8_4
  float v178; // xmm4_4
  float v179; // xmm3_4
  float v180; // xmm5_4
  float v181; // xmm3_4
  float v182; // xmm1_4
  float v183; // xmm2_4
  float v184; // xmm4_4
  float v185; // xmm5_4
  float v186; // xmm1_4
  float v187; // xmm3_4
  float v188; // xmm4_4
  float v189; // xmm5_4
  float v190; // xmm2_4
  float v191; // xmm4_4
  float v192; // xmm5_4
  float v193; // xmm1_4
  float v194; // xmm4_4
  float v195; // xmm5_4
  float v196; // xmm9_4
  float v197; // xmm3_4
  float v198; // xmm0_4
  float v199; // xmm8_4
  float v200; // xmm8_4
  float v201; // xmm11_4
  float v202; // xmm7_4
  float v203; // xmm8_4
  float v204; // xmm0_4
  float v205; // xmm11_4
  float v206; // xmm8_4
  float v207; // xmm7_4
  float v208; // xmm9_4
  float v209; // xmm1_4
  float v210; // xmm2_4
  float v211; // xmm0_4
  float v212; // xmm9_4
  float v213; // xmm8_4
  float v214; // xmm0_4
  float v215; // xmm11_4
  float v216; // xmm8_4
  float v217; // xmm7_4
  float v218; // xmm2_4
  float v219; // xmm8_4
  float v220; // xmm7_4
  float v221; // xmm11_4
  float v222; // xmm1_4
  float v223; // xmm2_4
  float v224; // xmm11_4
  float v225; // xmm0_4
  float v226; // xmm11_4
  float v227; // xmm0_4
  float v228; // xmm8_4
  float v229; // xmm11_4
  float v230; // xmm7_4
  float v231; // xmm2_4
  float v232; // xmm7_4
  float v233; // xmm11_4
  float v234; // xmm8_4
  float v235; // xmm1_4
  float v236; // xmm2_4
  float v237; // xmm0_4
  float v238; // xmm12_4
  float v239; // xmm13_4
  float v240; // xmm14_4
  float v241; // xmm0_4
  float v242; // xmm8_4
  float v243; // xmm11_4
  float v244; // xmm7_4
  float v245; // xmm2_4
  float v246; // xmm8_4
  float v247; // xmm7_4
  float v248; // xmm12_4
  float v249; // xmm3_4
  float v250; // xmm5_4
  float v251; // xmm4_4
  float v252; // xmm1_4
  float v253; // xmm3_4
  float v254; // xmm2_4
  float v255; // xmm0_4
  __int64 v256; // rax
  float v257; // xmm7_4
  float v258; // xmm8_4
  float v259; // xmm3_4
  float v260; // xmm1_4
  float v261; // xmm4_4
  float v262; // xmm5_4
  float v263; // xmm12_4
  float v264; // xmm13_4
  float v265; // xmm11_4
  float v266; // xmm2_4
  float v267; // xmm0_4
  float v268; // xmm12_4
  float v269; // xmm13_4
  float v270; // xmm2_4
  float v271; // xmm11_4
  float v272; // xmm7_4
  float v273; // xmm3_4
  float v274; // xmm8_4
  float v275; // xmm4_4
  float v276; // xmm5_4
  float v277; // xmm9_4
  float v278; // xmm7_4
  float v279; // xmm8_4
  float v280; // xmm3_4
  float v281; // xmm9_4
  float v282; // xmm7_4
  float v283; // xmm8_4
  float v284; // xmm3_4
  float v285; // xmm14_4
  float v286; // xmm5_4
  float v287; // xmm4_4
  float v288; // xmm3_4
  float v289; // xmm1_4
  float v290; // xmm2_4
  float v291; // xmm4_4
  float v292; // xmm5_4
  float v293; // xmm1_4
  float v294; // xmm3_4
  float v295; // xmm4_4
  float v296; // xmm5_4
  float v297; // xmm2_4
  float v298; // xmm4_4
  float v299; // xmm5_4
  float v300; // xmm1_4
  float v301; // xmm2_4
  float v302; // xmm1_4
  float v303; // xmm0_4
  float v304; // xmm1_4
  float v305; // xmm0_4
  float v306; // xmm2_4
  float v307; // xmm1_4
  float v308; // xmm0_4
  float v309; // xmm1_4
  float v310; // xmm0_4
  float v311; // xmm2_4
  float v312; // xmm1_4
  float v313; // xmm0_4
  float v314; // xmm1_4
  float v315; // xmm0_4
  int v316; // eax
  float v317; // xmm2_4
  float v318; // xmm1_4
  float v319; // xmm0_4
  float v320; // xmm1_4
  float v321; // xmm0_4
  float v323; // [rsp+48h] [rbp-C0h] BYREF
  float v324; // [rsp+4Ch] [rbp-BCh]
  float v325; // [rsp+50h] [rbp-B8h]
  float v326; // [rsp+58h] [rbp-B0h]
  float v327; // [rsp+60h] [rbp-A8h] BYREF
  float v328; // [rsp+64h] [rbp-A4h]
  float v329; // [rsp+68h] [rbp-A0h]
  float v330; // [rsp+70h] [rbp-98h]
  float v331; // [rsp+74h] [rbp-94h]
  float v332; // [rsp+78h] [rbp-90h]
  float v333; // [rsp+7Ch] [rbp-8Ch]
  float v334; // [rsp+80h] [rbp-88h]
  float v335; // [rsp+84h] [rbp-84h]
  float v336; // [rsp+88h] [rbp-80h]
  float v337; // [rsp+8Ch] [rbp-7Ch]
  float v338; // [rsp+90h] [rbp-78h]
  float v339; // [rsp+94h] [rbp-74h]
  float v340; // [rsp+98h] [rbp-70h]
  float v341; // [rsp+9Ch] [rbp-6Ch]
  float v342; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v343; // [rsp+A8h] [rbp-60h] BYREF
  float v344; // [rsp+B0h] [rbp-58h]
  float v345; // [rsp+B8h] [rbp-50h] BYREF
  float v346; // [rsp+BCh] [rbp-4Ch]
  float v347; // [rsp+C0h] [rbp-48h]
  float v348; // [rsp+C8h] [rbp-40h] BYREF
  float v349; // [rsp+CCh] [rbp-3Ch]
  float v350; // [rsp+D0h] [rbp-38h]
  float v351; // [rsp+D8h] [rbp-30h]
  float v352; // [rsp+E0h] [rbp-28h] BYREF
  float v353; // [rsp+E4h] [rbp-24h]
  float v354; // [rsp+E8h] [rbp-20h]
  float v355; // [rsp+F0h] [rbp-18h] BYREF
  float v356; // [rsp+F4h] [rbp-14h]
  float v357; // [rsp+F8h] [rbp-10h]
  float v358; // [rsp+100h] [rbp-8h] BYREF
  float v359; // [rsp+104h] [rbp-4h]
  float v360; // [rsp+108h] [rbp+0h]
  int v361; // [rsp+110h] [rbp+8h]
  __int64 v362; // [rsp+118h] [rbp+10h]
  float v363; // [rsp+120h] [rbp+18h] BYREF
  float v364; // [rsp+124h] [rbp+1Ch]
  float v365; // [rsp+128h] [rbp+20h]
  float v366; // [rsp+130h] [rbp+28h] BYREF
  float v367; // [rsp+134h] [rbp+2Ch]
  float v368; // [rsp+138h] [rbp+30h]
  float v369; // [rsp+140h] [rbp+38h] BYREF
  float v370; // [rsp+144h] [rbp+3Ch]
  float v371; // [rsp+148h] [rbp+40h]
  float v372; // [rsp+150h] [rbp+48h] BYREF
  float v373; // [rsp+154h] [rbp+4Ch] BYREF
  float v374; // [rsp+158h] [rbp+50h] BYREF
  float v375[43]; // [rsp+15Ch] [rbp+54h] BYREF
  float v376; // [rsp+248h] [rbp+140h]
  float v377; // [rsp+248h] [rbp+140h]
  float v378; // [rsp+248h] [rbp+140h]
  float v379; // [rsp+248h] [rbp+140h]
  float v380; // [rsp+248h] [rbp+140h]
  float v381; // [rsp+248h] [rbp+140h]
  float v382; // [rsp+248h] [rbp+140h]
  float v383; // [rsp+260h] [rbp+158h]

  v8 = LOWORD(a7);
  v10 = a8;
  v12 = a7;
  v15 = a5;
  *a3 = 65536.0;
  v16 = 0;
  v17 = HIWORD(LODWORD(v12));
  v18 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 4));
  v19 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 8));
  v20 = 232LL * v8;
  v21 = (float)*(int *)a6;
  v361 = v17;
  v22 = _mm_cvtepi32_ps(v18).m128_f32[0];
  v362 = v20;
  v23 = _mm_cvtepi32_ps(v19).m128_f32[0];
  v351 = v21;
  v341 = v22;
  v383 = v23;
  if ( *(int *)&byte_15AE31760[v20 + 104] > 0 )
  {
    v24 = 0;
    do
    {
      v25 = *(_QWORD *)&byte_15AE31760[v20 + 72];
      v26 = *(_QWORD *)&byte_15AE31760[v20 + 136];
      v27 = 3 * *(_DWORD *)(v24 + v26);
      v28 = v22 + *(float *)(v25 + 4 * v27 + 4);
      v29 = (float)(v21 + *(float *)(v25 + 4 * v27)) * v10;
      v30 = (float)(v23 + *(float *)(v25 + 4 * v27 + 8)) * v10;
      v31 = 3 * *(_DWORD *)(v24 + v26 + 4);
      v32 = v28 * v10;
      v342 = v29;
      v33 = v21 + *(float *)(v25 + 4 * v31);
      v34 = v22 + *(float *)(v25 + 4 * v31 + 4);
      v35 = v23 + *(float *)(v25 + 4 * v31 + 8);
      LODWORD(v31) = *(_DWORD *)(v24 + v26 + 8);
      v348 = v29;
      v36 = 3 * (int)v31;
      v37 = v34 * v10;
      v335 = v35 * v10;
      v38 = v21 + *(float *)(v25 + 4 * v36);
      v39 = v22 + *(float *)(v25 + 4 * v36 + 4);
      v40 = v23 + *(float *)(v25 + 4 * v36 + 8);
      LODWORD(v36) = *(_DWORD *)(v24 + v26 + 12);
      v354 = v35 * v10;
      v41 = v37 - v32;
      v42 = 3 * (int)v36;
      v331 = v32;
      v43 = v21 + *(float *)(v25 + 4 * v42);
      v349 = v32;
      v326 = v30;
      v350 = v30;
      v339 = v33 * v10;
      v352 = v33 * v10;
      v336 = v37;
      v337 = v43 * v10;
      v355 = v43 * v10;
      v44 = v341 + *(float *)(v25 + 4 * v42 + 4);
      v353 = v37;
      v334 = v38 * v10;
      v345 = v38 * v10;
      v333 = v39 * v10;
      v346 = v39 * v10;
      v376 = v40 * v10;
      v338 = v44 * v10;
      v356 = v44 * v10;
      v45 = v383 + *(float *)(v25 + 4 * v42 + 8);
      v347 = v40 * v10;
      v340 = (float)(v35 * v10) - v30;
      v332 = v45 * v10;
      v357 = v45 * v10;
      v330 = (float)(v33 * v10) - v29;
      v46 = (float)(v39 * v10) - v32;
      v47 = (float)(v40 * v10) - v30;
      v48 = (float)(v46 * v340) - (float)(v47 * v41);
      v49 = (float)(v47 * v330) - (float)((float)((float)(v38 * v10) - v29) * v340);
      v50 = (float)((float)((float)(v38 * v10) - v29) * v41) - (float)(v46 * v330);
      v51 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
      if ( v51 == 0.0 )
      {
        v327 = 0.0;
        v52 = 0.0;
        v328 = 0.0;
        v53 = 0.0;
        v329 = 0.0;
        v54 = 0.0;
      }
      else
      {
        v52 = v48 * (float)(1.0 / v51);
        v53 = v49 * (float)(1.0 / v51);
        v54 = v50 * (float)(1.0 / v51);
        v327 = v52;
        v328 = v53;
        v329 = v54;
      }
      v55 = *a4 - v29;
      v56 = a4[1] - v32;
      v57 = a4[2] - v30;
      v323 = v55;
      v324 = v56;
      v325 = v57;
      if ( (float)((float)((float)(v56 * v53) + (float)(v55 * v52)) + (float)(v57 * v54)) > 0.0 )
      {
        v343 = __PAIR64__(LODWORD(v56), LODWORD(v55));
        v344 = v57;
        v58 = (float)((float)(v56 * v53) + (float)(v55 * v52)) + (float)(v57 * v54);
        if ( v58 <= a5 && v58 >= 0.0 )
        {
          v59 = (float)(v53 * (float)-a5) + a4[1];
          *(float *)&v343 = (float)(v52 * (float)-a5) + *a4;
          *((float *)&v343 + 1) = v59;
          v344 = (float)(v54 * (float)-a5) + a4[2];
          if ( sub_140048690(&v323, &v327, &v372, a4, (float *)&v343, &v348, &v352, &v345) )
          {
            v60 = v324;
            v61 = v325;
            v62 = fsqrt(
                    (float)((float)((float)(v324 - a4[1]) * (float)(v324 - a4[1]))
                          + (float)((float)(v323 - *a4) * (float)(v323 - *a4)))
                  + (float)((float)(v325 - a4[2]) * (float)(v325 - a4[2])));
            v63 = v62 < *a3;
            a7 = v62;
            if ( v63 )
            {
              *a1 = v323;
              a1[1] = v60;
              a1[2] = v61;
              *a2 = v52;
              a2[1] = v53;
              a2[2] = v54;
              *a3 = v62;
            }
          }
        }
        v64 = a4[1];
        v65 = *a4;
        v66 = a4[2] - v30;
        v67 = *a4 - v29;
        v359 = v64 - v32;
        v358 = v67;
        v360 = v66;
        v68 = (float)((float)(v53 * (float)(v64 - v32)) + (float)(v52 * v67)) + (float)(v54 * v66);
        if ( v68 <= a5 && v68 >= 0.0 )
        {
          v358 = (float)(v52 * (float)-a5) + v65;
          v359 = (float)(v53 * (float)-a5) + v64;
          v360 = (float)(v54 * (float)-a5) + a4[2];
          if ( sub_140048690(&v323, &v327, &v373, a4, &v358, &v348, &v345, &v355) )
          {
            v69 = v324;
            v70 = v325;
            v71 = fsqrt(
                    (float)((float)((float)(v324 - a4[1]) * (float)(v324 - a4[1]))
                          + (float)((float)(v323 - *a4) * (float)(v323 - *a4)))
                  + (float)((float)(v325 - a4[2]) * (float)(v325 - a4[2])));
            v63 = v71 < *a3;
            a7 = v71;
            if ( v63 )
            {
              *a1 = v323;
              a1[1] = v69;
              a1[2] = v70;
              *a2 = v52;
              a2[1] = v53;
              a2[2] = v54;
              *a3 = v71;
            }
          }
        }
        v72 = v330;
        v73 = a4[2];
        v74 = *a4;
        v75 = a4[1];
        v76 = *a4 - v29;
        v77 = fsqrt((float)((float)(v72 * v72) + (float)(v41 * v41)) + (float)(v340 * v340));
        v330 = v73 - v30;
        if ( v77 == 0.0 )
        {
          v80 = 0.0;
          v78 = 0.0;
          v79 = 0.0;
        }
        else
        {
          v78 = v41 * (float)(1.0 / v77);
          v79 = (float)(1.0 / v77) * v340;
          v80 = (float)(1.0 / v77) * v72;
        }
        v81 = (float)((float)(v78 * (float)(v75 - v32)) + (float)(v80 * v76)) + (float)(v79 * v330);
        if ( v81 <= 0.0
          || v81 >= v77
          || (v82 = (float)(v80 * v81) + v29,
              v83 = (float)(v78 * v81) + v32,
              v84 = (float)(v81 * v79) + v30,
              v85 = v74 - v82,
              v86 = v75 - v83,
              v87 = v73 - v84,
              v88 = fsqrt((float)((float)(v86 * v86) + (float)(v85 * v85)) + (float)(v87 * v87)),
              v88 >= a5) )
        {
          v92 = *a3;
        }
        else
        {
          if ( v88 == 0.0 )
          {
            v89 = 0.0;
            v90 = 0.0;
            v91 = 0.0;
          }
          else
          {
            v89 = v85 * (float)(1.0 / v88);
            v90 = (float)(1.0 / v88) * v86;
            v91 = (float)(1.0 / v88) * v87;
          }
          v92 = *a3;
          a7 = v88;
          if ( v92 > v88 )
          {
            *a1 = v82;
            v92 = v88;
            a1[1] = v83;
            a1[2] = v84;
            *a2 = v89;
            a2[1] = v90;
            a2[2] = v91;
            *a3 = v88;
            v74 = *a4;
            v75 = a4[1];
            v73 = a4[2];
          }
        }
        v93 = v334 - v339;
        v94 = v333 - v336;
        v95 = v376 - v335;
        v96 = fsqrt((float)((float)(v94 * v94) + (float)(v93 * v93)) + (float)(v95 * v95));
        v330 = v73 - v335;
        if ( v96 == 0.0 )
        {
          v97 = 0.0;
          v98 = 0.0;
          v99 = 0.0;
        }
        else
        {
          v97 = (float)(1.0 / v96) * v93;
          v98 = (float)(1.0 / v96) * v94;
          v99 = (float)(1.0 / v96) * v95;
        }
        v100 = (float)((float)(v98 * (float)(v75 - v336)) + (float)(v97 * (float)(v74 - v339))) + (float)(v99 * v330);
        if ( v100 <= 0.0
          || v100 >= v96
          || (v101 = (float)(v97 * v100) + v339,
              v102 = (float)(v98 * v100) + v336,
              v103 = (float)(v99 * v100) + v335,
              v104 = v74 - v101,
              v105 = v75 - v102,
              v106 = v73 - v103,
              v107 = fsqrt((float)((float)(v105 * v105) + (float)(v104 * v104)) + (float)(v106 * v106)),
              v107 >= a5) )
        {
          v92 = *a3;
        }
        else
        {
          if ( v107 == 0.0 )
          {
            v108 = 0.0;
            v109 = 0.0;
            v110 = 0.0;
          }
          else
          {
            v108 = (float)(1.0 / v107) * v104;
            v109 = (float)(1.0 / v107) * v105;
            v110 = (float)(1.0 / v107) * v106;
          }
          a7 = v107;
          if ( v92 > v107 )
          {
            *a1 = v101;
            v92 = v107;
            a1[1] = v102;
            a1[2] = v103;
            *a2 = v108;
            a2[1] = v109;
            a2[2] = v110;
            *a3 = v107;
            v74 = *a4;
            v75 = a4[1];
            v73 = a4[2];
          }
        }
        v111 = v337 - v334;
        v112 = v338 - v333;
        v113 = v332 - v376;
        v330 = v74 - v334;
        v114 = fsqrt((float)((float)(v112 * v112) + (float)(v111 * v111)) + (float)(v113 * v113));
        if ( v114 == 0.0 )
        {
          v115 = 0.0;
          v116 = 0.0;
          v117 = 0.0;
        }
        else
        {
          v115 = (float)(1.0 / v114) * v111;
          v116 = (float)(1.0 / v114) * v112;
          v117 = (float)(1.0 / v114) * v113;
        }
        v118 = (float)((float)(v116 * (float)(v75 - v333)) + (float)(v115 * v330)) + (float)((float)(v73 - v376) * v117);
        if ( v118 <= 0.0
          || v118 >= v114
          || (v119 = (float)(v115 * v118) + v334,
              v120 = (float)(v116 * v118) + v333,
              v121 = (float)(v118 * v117) + v376,
              v122 = v74 - v119,
              v123 = v75 - v120,
              v124 = v73 - v121,
              v125 = fsqrt((float)((float)(v123 * v123) + (float)(v122 * v122)) + (float)(v124 * v124)),
              v125 >= a5) )
        {
          v92 = *a3;
        }
        else
        {
          if ( v125 == 0.0 )
          {
            v126 = 0.0;
            v127 = 0.0;
            v128 = 0.0;
          }
          else
          {
            v126 = (float)(1.0 / v125) * v122;
            v127 = (float)(1.0 / v125) * v123;
            v128 = (float)(1.0 / v125) * v124;
          }
          a7 = v125;
          if ( v92 > v125 )
          {
            *a1 = v119;
            v92 = v125;
            a1[1] = v120;
            a1[2] = v121;
            *a2 = v126;
            a2[1] = v127;
            a2[2] = v128;
            *a3 = v125;
            v74 = *a4;
            v75 = a4[1];
            v73 = a4[2];
          }
        }
        v129 = v342 - v337;
        v130 = v331 - v338;
        v131 = v326 - v332;
        v132 = fsqrt((float)((float)(v130 * v130) + (float)(v129 * v129)) + (float)(v131 * v131));
        if ( v132 == 0.0 )
        {
          v133 = 0.0;
          v134 = 0.0;
          v135 = 0.0;
        }
        else
        {
          v133 = (float)(1.0 / v132) * v129;
          v134 = (float)(1.0 / v132) * v130;
          v135 = (float)(1.0 / v132) * v131;
        }
        v136 = (float)((float)(v134 * (float)(v75 - v338)) + (float)(v133 * (float)(v74 - v337)))
             + (float)(v135 * (float)(v73 - v332));
        if ( v136 > 0.0 && v136 < v132 )
        {
          v137 = (float)(v136 * v133) + v337;
          v138 = (float)(v136 * v135) + v332;
          v139 = (float)((float)((float)((float)(v134 * (float)(v75 - v338)) + (float)(v133 * (float)(v74 - v337)))
                               + (float)(v135 * (float)(v73 - v332)))
                       * v134)
               + v338;
          v140 = v74 - v137;
          v141 = v73 - v138;
          v142 = v75 - v139;
          v143 = fsqrt((float)((float)(v142 * v142) + (float)(v140 * v140)) + (float)(v141 * v141));
          if ( v143 < a5 )
          {
            if ( v143 == 0.0 )
            {
              v144 = 0.0;
              v145 = 0.0;
              v146 = 0.0;
            }
            else
            {
              v144 = (float)(1.0 / v143) * v140;
              v145 = (float)(1.0 / v143) * v142;
              v146 = (float)(1.0 / v143) * v141;
            }
            a7 = v143;
            if ( v92 > v143 )
            {
              *a1 = v137;
              a1[1] = v139;
              a1[2] = v138;
              *a2 = v144;
              a2[1] = v145;
              a2[2] = v146;
              *a3 = v143;
            }
          }
        }
      }
      v10 = a8;
      v21 = v351;
      ++v16;
      v22 = v341;
      v24 += 16;
      v23 = v383;
    }
    while ( v16 < *(_DWORD *)&byte_15AE31760[v20 + 104] );
    LOWORD(v17) = v361;
  }
  v147 = v362;
  v148 = 0;
  if ( *(int *)&byte_15AE31760[v362 + 216] > 0 )
  {
    v149 = 0;
    v343 = 0;
    v150 = 1;
    do
    {
      if ( ((unsigned __int16)v150 & (unsigned __int16)v17 & 0x3FF) == 0 )
      {
        v151 = 6 * v149;
        v152 = *(_QWORD *)&byte_15AE31760[v147 + 224];
        v153 = v23;
        v154 = v23;
        v155 = v383 + *(float *)(v152 + 48 * v149 + 32);
        v156 = v21 + *(float *)(v152 + 48 * v149 + 24);
        v157 = v22 + *(float *)(v152 + 48 * v149 + 28);
        v158 = v154 + *(float *)(v152 + 48 * v149 + 20);
        v159 = v21 + *(float *)(v152 + 48 * v149 + 12);
        v160 = v153 + *(float *)(v152 + 48 * v149 + 8);
        v161 = v22 + *(float *)(v152 + 48 * v149 + 4);
        v162 = (float)(v22 + *(float *)(v152 + 48 * v149 + 16)) * v10;
        v163 = v21 + *(float *)(v152 + 48 * v149);
        v337 = (float)(v21 + *(float *)(v152 + 48 * v149 + 36)) * v10;
        v355 = v337;
        v164 = v157 * v10;
        v339 = (float)(v22 + *(float *)(v152 + 48 * v149 + 40)) * v10;
        v356 = v339;
        v165 = v161 * v10;
        v166 = v160 * v10;
        v167 = (float)(v383 + *(float *)(v152 + 48 * v149 + 44)) * v10;
        v168 = v163 * v10;
        v169 = v159 * v10;
        v332 = v162;
        v353 = v162;
        v335 = v155 * v10;
        v347 = v155 * v10;
        v338 = v156 * v10;
        v345 = v156 * v10;
        v340 = v167;
        v357 = v167;
        v333 = v158 * v10;
        v354 = v158 * v10;
        v170 = (float)(v158 * v10) - v166;
        v348 = v168;
        v349 = v165;
        v350 = v166;
        v171 = (float)((float)(v164 - v165) * v170)
             - (float)((float)((float)(v155 * v10) - v166) * (float)(v162 - v165));
        v336 = v169;
        v352 = v169;
        v334 = v164;
        v346 = v164;
        v172 = (float)((float)((float)(v155 * v10) - v166) * (float)(v169 - v168))
             - (float)((float)((float)(v156 * v10) - v168) * v170);
        v173 = (float)((float)((float)(v156 * v10) - v168) * (float)(v162 - v165))
             - (float)((float)(v164 - v165) * (float)(v169 - v168));
        v174 = fsqrt((float)((float)(v172 * v172) + (float)(v171 * v171)) + (float)(v173 * v173));
        if ( v174 == 0.0 )
        {
          v327 = 0.0;
          v175 = 0.0;
          v328 = 0.0;
          v176 = 0.0;
          v329 = 0.0;
          v177 = 0.0;
        }
        else
        {
          v175 = v171 * (float)(1.0 / v174);
          v176 = v172 * (float)(1.0 / v174);
          v177 = v173 * (float)(1.0 / v174);
          v327 = v175;
          v328 = v176;
          v329 = v177;
        }
        v178 = *a4 - v168;
        v179 = a4[1] - v165;
        v180 = a4[2] - v166;
        v323 = v178;
        v324 = v179;
        v325 = v180;
        if ( (float)((float)((float)(v179 * v176) + (float)(v178 * v175)) + (float)(v180 * v177)) > 0.0 )
        {
          v359 = v179;
          v358 = v178;
          v360 = v180;
          v181 = (float)((float)(v179 * v176) + (float)(v178 * v175)) + (float)(v180 * v177);
          if ( v181 <= v15 && v181 >= 0.0 )
          {
            v182 = (float)((float)-v15 * v176) + a4[1];
            v183 = (float)((float)-v15 * v177) + a4[2];
            v358 = (float)((float)-v15 * v175) + *a4;
            v359 = v182;
            v360 = v183;
            if ( sub_140048690(&v323, &v327, &v373, a4, &v358, &v348, &v352, &v345) )
            {
              v184 = v324;
              v185 = v325;
              v186 = fsqrt(
                       (float)((float)((float)(v324 - a4[1]) * (float)(v324 - a4[1]))
                             + (float)((float)(v323 - *a4) * (float)(v323 - *a4)))
                     + (float)((float)(v325 - a4[2]) * (float)(v325 - a4[2])));
              v63 = v186 < *a3;
              a7 = v186;
              if ( v63 )
              {
                *a1 = v323;
                a1[1] = v184;
                a1[2] = v185;
                *a2 = v175;
                a2[1] = v176;
                a2[2] = v177;
                *a3 = v186;
              }
            }
          }
          v187 = *a4;
          v188 = a4[1];
          v189 = a4[2];
          v363 = *a4 - v168;
          v364 = v188 - v165;
          v365 = v189 - v166;
          v190 = (float)((float)((float)(v188 - v165) * v176) + (float)(v363 * v175))
               + (float)((float)(v189 - v166) * v177);
          if ( v190 <= v15 && v190 >= 0.0 )
          {
            v363 = (float)((float)-v15 * v175) + v187;
            v364 = (float)((float)-v15 * v176) + v188;
            v365 = (float)((float)-v15 * v177) + v189;
            if ( sub_140048690(&v323, &v327, &v372, a4, &v363, &v348, &v345, &v355) )
            {
              v191 = v324;
              v192 = v325;
              v193 = fsqrt(
                       (float)((float)((float)(v324 - a4[1]) * (float)(v324 - a4[1]))
                             + (float)((float)(v323 - *a4) * (float)(v323 - *a4)))
                     + (float)((float)(v325 - a4[2]) * (float)(v325 - a4[2])));
              v63 = v193 < *a3;
              a7 = v193;
              if ( v63 )
              {
                *a1 = v323;
                a1[1] = v191;
                a1[2] = v192;
                *a2 = v175;
                a2[1] = v176;
                a2[2] = v177;
                *a3 = v193;
              }
            }
          }
          v194 = a4[1];
          v195 = a4[2];
          v196 = v169 - v168;
          v377 = v332 - v165;
          v326 = v333 - v166;
          v197 = *a4;
          v198 = *a4 - v168;
          v199 = fsqrt(
                   (float)((float)(v377 * v377) + (float)(v196 * v196))
                 + (float)((float)(v333 - v166) * (float)(v333 - v166)));
          v331 = v199;
          if ( v199 == 0.0 )
          {
            v203 = 0.0;
            v201 = 0.0;
            v202 = 0.0;
          }
          else
          {
            v200 = 1.0 / v199;
            v201 = v200 * v377;
            v202 = v200 * v326;
            v203 = v200 * v196;
          }
          v204 = (float)((float)(v198 * v203) + (float)((float)(v194 - v165) * v201))
               + (float)((float)(v195 - v166) * v202);
          if ( v204 <= 0.0
            || v204 >= v331
            || (v205 = (float)(v201 * v204) + v165,
                v206 = (float)(v203 * v204) + v168,
                v207 = (float)(v202 * v204) + v166,
                v208 = v197 - v206,
                v326 = v194 - v205,
                v378 = v195 - v207,
                v209 = fsqrt(
                         (float)((float)((float)(v194 - v205) * (float)(v194 - v205)) + (float)(v208 * v208))
                       + (float)(v378 * v378)),
                v209 >= v15) )
          {
            v212 = *a3;
          }
          else
          {
            if ( v209 == 0.0 )
            {
              v379 = 0.0;
              v211 = 0.0;
              v210 = 0.0;
            }
            else
            {
              v210 = v326 * (float)(1.0 / v209);
              a7 = v208 * (float)(1.0 / v209);
              v211 = a7;
              v379 = v378 * (float)(1.0 / v209);
            }
            v212 = *a3;
            a7 = v209;
            if ( v212 > v209 )
            {
              *a1 = v206;
              v212 = v209;
              a1[1] = v205;
              a1[2] = v207;
              *a2 = v211;
              a2[2] = v379;
              a2[1] = v210;
              *a3 = v209;
              v197 = *a4;
              v194 = a4[1];
              v195 = a4[2];
            }
          }
          v213 = v338 - v336;
          v380 = v334 - v332;
          v326 = v335 - v333;
          v214 = fsqrt(
                   (float)((float)(v380 * v380) + (float)(v213 * v213))
                 + (float)((float)(v335 - v333) * (float)(v335 - v333)));
          v331 = v194 - v332;
          v330 = v214;
          v342 = v195 - v333;
          if ( v214 == 0.0 )
          {
            v215 = 0.0;
            v216 = 0.0;
            v217 = 0.0;
          }
          else
          {
            v215 = (float)(1.0 / v214) * v213;
            v216 = (float)(1.0 / v214) * v380;
            v217 = (float)(1.0 / v214) * v326;
          }
          v218 = (float)((float)(v215 * (float)(v197 - v336)) + (float)(v216 * v331)) + (float)(v217 * v342);
          if ( v218 <= 0.0
            || v218 >= v330
            || (v219 = (float)(v216 * v218) + v332,
                v220 = (float)(v217 * v218) + v333,
                v331 = (float)(v218 * v215) + v336,
                v221 = v197 - v331,
                v326 = v194 - v219,
                v381 = v195 - v220,
                v222 = fsqrt(
                         (float)((float)((float)(v194 - v219) * (float)(v194 - v219)) + (float)(v221 * v221))
                       + (float)(v381 * v381)),
                v222 >= v15) )
          {
            v212 = *a3;
          }
          else
          {
            if ( v222 == 0.0 )
            {
              v223 = 0.0;
              v224 = 0.0;
              v225 = 0.0;
            }
            else
            {
              v223 = (float)(1.0 / v222) * v221;
              v224 = (float)(1.0 / v222) * v326;
              v225 = (float)(1.0 / v222) * v381;
            }
            a7 = v222;
            if ( v212 > v222 )
            {
              v212 = v222;
              *a1 = v331;
              a1[1] = v219;
              a1[2] = v220;
              *a2 = v223;
              a2[1] = v224;
              a2[2] = v225;
              *a3 = v222;
              v197 = *a4;
              v194 = a4[1];
              v195 = a4[2];
            }
          }
          v226 = v337 - v338;
          v382 = v339 - v334;
          v326 = v340 - v335;
          v227 = fsqrt(
                   (float)((float)(v382 * v382) + (float)(v226 * v226))
                 + (float)((float)(v340 - v335) * (float)(v340 - v335)));
          v331 = v194 - v334;
          v330 = v227;
          v342 = v195 - v335;
          if ( v227 == 0.0 )
          {
            v228 = 0.0;
            v229 = 0.0;
            v230 = 0.0;
          }
          else
          {
            v228 = (float)(1.0 / v227) * v226;
            v229 = (float)(1.0 / v227) * v382;
            v230 = (float)(1.0 / v227) * v326;
          }
          v231 = (float)((float)(v229 * v331) + (float)(v228 * (float)(v197 - v338))) + (float)(v230 * v342);
          if ( v231 <= 0.0
            || v231 >= v330
            || (v232 = (float)(v230 * v231) + v335,
                v233 = (float)(v229 * v231) + v334,
                v234 = (float)(v228 * v231) + v338,
                v331 = v194 - v233,
                v326 = v197 - v234,
                v235 = fsqrt(
                         (float)((float)((float)(v194 - v233) * (float)(v194 - v233))
                               + (float)((float)(v197 - v234) * (float)(v197 - v234)))
                       + (float)((float)(v195 - v232) * (float)(v195 - v232))),
                v235 >= v15) )
          {
            v212 = *a3;
          }
          else
          {
            if ( v235 == 0.0 )
            {
              v336 = 0.0;
              v236 = 0.0;
              v237 = 0.0;
            }
            else
            {
              v236 = (float)(1.0 / v235) * v326;
              v237 = (float)(1.0 / v235) * (float)(v195 - v232);
              v336 = (float)(1.0 / v235) * v331;
              v15 = a5;
            }
            a7 = v235;
            if ( v212 > v235 )
            {
              *a1 = v234;
              v212 = v235;
              a1[1] = v233;
              a1[2] = v232;
              *a2 = v236;
              a2[1] = v336;
              a2[2] = v237;
              *a3 = v235;
              v197 = *a4;
              v194 = a4[1];
              v195 = a4[2];
            }
          }
          v238 = v168 - v337;
          v239 = v165 - v339;
          v240 = v166 - v340;
          v241 = fsqrt((float)((float)(v239 * v239) + (float)(v238 * v238)) + (float)(v240 * v240));
          v326 = v241;
          if ( v241 == 0.0 )
          {
            v242 = 0.0;
            v243 = 0.0;
            v244 = 0.0;
          }
          else
          {
            v242 = (float)(1.0 / v241) * v238;
            v243 = (float)(1.0 / v241) * v239;
            v244 = (float)(1.0 / v241) * v240;
          }
          v245 = (float)((float)((float)(v194 - v339) * v243) + (float)(v242 * (float)(v197 - v337)))
               + (float)(v244 * (float)(v195 - v340));
          if ( v245 <= 0.0
            || v245 >= v326
            || (v246 = (float)(v242 * v245) + v337,
                v247 = (float)(v244 * v245) + v340,
                v248 = (float)(v245 * v243) + v339,
                v249 = v197 - v246,
                v250 = v195 - v247,
                v251 = v194 - v248,
                v252 = fsqrt((float)((float)(v251 * v251) + (float)(v249 * v249)) + (float)(v250 * v250)),
                v252 >= v15) )
          {
            v149 = v343;
          }
          else
          {
            if ( v252 == 0.0 )
            {
              v253 = 0.0;
              v254 = 0.0;
              v255 = 0.0;
            }
            else
            {
              v253 = v249 * (float)(1.0 / v252);
              v254 = (float)(1.0 / v252) * v251;
              v255 = (float)(1.0 / v252) * v250;
            }
            v149 = v343;
            a7 = v252;
            if ( v212 > v252 )
            {
              *a1 = v246;
              a1[1] = v248;
              a1[2] = v247;
              *a2 = v253;
              a2[1] = v254;
              a2[2] = v255;
              *a3 = v252;
            }
          }
        }
        v256 = *(_QWORD *)&byte_15AE31760[v362 + 224];
        v257 = v383 + *(float *)(v256 + 8 * v151 + 20);
        v258 = v351 + *(float *)(v256 + 8 * v151 + 12);
        v259 = v383 + *(float *)(v256 + 8 * v151 + 32);
        v260 = v341 + *(float *)(v256 + 8 * v151 + 4);
        v261 = v341 + *(float *)(v256 + 8 * v151 + 28);
        v262 = v351 + *(float *)(v256 + 8 * v151 + 24);
        v263 = v341 + *(float *)(v256 + 8 * v151 + 40);
        v264 = v383 + *(float *)(v256 + 8 * v151 + 44);
        v265 = v351 + *(float *)(v256 + 8 * v151 + 36);
        v266 = (float)(v341 + *(float *)(v256 + 8 * v151 + 16)) * a8;
        v355 = (float)(v351 + *(float *)(v256 + 8 * v151)) * a8;
        v267 = (float)(v383 + *(float *)(v256 + 8 * v151 + 8)) * a8;
        v268 = v263 * a8;
        v269 = v264 * a8;
        v346 = v266;
        v270 = v266 - v268;
        v271 = v265 * a8;
        v357 = v267;
        v347 = v257 * a8;
        v272 = (float)(v257 * a8) - v269;
        v354 = v259 * a8;
        v273 = (float)(v259 * a8) - v269;
        v345 = v258 * a8;
        v274 = (float)(v258 * a8) - v271;
        v356 = v260 * a8;
        v353 = v261 * a8;
        v275 = (float)(v261 * a8) - v268;
        v352 = v262 * a8;
        v276 = (float)(v262 * a8) - v271;
        v348 = v271;
        v277 = (float)(v270 * v273) - (float)(v272 * v275);
        v349 = v268;
        v278 = (float)(v272 * v276) - (float)(v274 * v273);
        v350 = v269;
        v279 = (float)(v274 * v275) - (float)(v270 * v276);
        v280 = fsqrt((float)((float)(v278 * v278) + (float)(v277 * v277)) + (float)(v279 * v279));
        if ( v280 == 0.0 )
        {
          v327 = 0.0;
          v281 = 0.0;
          v328 = 0.0;
          v282 = 0.0;
          v329 = 0.0;
          v283 = 0.0;
        }
        else
        {
          v281 = v277 * (float)(1.0 / v280);
          v282 = v278 * (float)(1.0 / v280);
          v283 = v279 * (float)(1.0 / v280);
          v327 = v281;
          v328 = v282;
          v329 = v283;
        }
        v284 = a4[1] - v268;
        v285 = *a4;
        v286 = a4[2] - v269;
        v287 = *a4 - v271;
        v324 = v284;
        v323 = v287;
        v325 = v286;
        if ( (float)((float)((float)(v284 * v282) + (float)(v287 * v281)) + (float)(v286 * v283)) > 0.0 )
        {
          v367 = v284;
          v366 = v287;
          v368 = v286;
          v288 = (float)((float)(v284 * v282) + (float)(v287 * v281)) + (float)(v286 * v283);
          if ( v288 <= v15 && v288 >= 0.0 )
          {
            v289 = (float)((float)-v15 * v282) + a4[1];
            v290 = (float)((float)-v15 * v283) + a4[2];
            v366 = (float)((float)-v15 * v281) + v285;
            v367 = v289;
            v368 = v290;
            if ( sub_140048690(&v323, &v327, &v374, a4, &v366, &v348, &v352, &v345) )
            {
              v291 = v324;
              v292 = v325;
              v293 = fsqrt(
                       (float)((float)((float)(v324 - a4[1]) * (float)(v324 - a4[1]))
                             + (float)((float)(v323 - *a4) * (float)(v323 - *a4)))
                     + (float)((float)(v325 - a4[2]) * (float)(v325 - a4[2])));
              v63 = v293 < *a3;
              a7 = v293;
              if ( v63 )
              {
                *a1 = v323;
                a1[1] = v291;
                a1[2] = v292;
                *a2 = v281;
                a2[1] = v282;
                a2[2] = v283;
                *a3 = v293;
              }
            }
          }
          v294 = *a4;
          v295 = a4[1];
          v296 = a4[2];
          v369 = *a4 - v271;
          v370 = v295 - v268;
          v371 = v296 - v269;
          v297 = (float)((float)((float)(v295 - v268) * v282) + (float)(v369 * v281))
               + (float)((float)(v296 - v269) * v283);
          if ( v297 <= v15 && v297 >= 0.0 )
          {
            v369 = (float)((float)-v15 * v281) + v294;
            v370 = (float)((float)-v15 * v282) + v295;
            v371 = (float)((float)-v15 * v283) + v296;
            if ( sub_140048690(&v323, &v327, v375, a4, &v369, &v348, &v345, &v355) )
            {
              v298 = v324;
              v299 = v325;
              v300 = fsqrt(
                       (float)((float)((float)(v324 - a4[1]) * (float)(v324 - a4[1]))
                             + (float)((float)(v323 - *a4) * (float)(v323 - *a4)))
                     + (float)((float)(v325 - a4[2]) * (float)(v325 - a4[2])));
              v63 = v300 < *a3;
              a7 = v300;
              if ( v63 )
              {
                *a1 = v323;
                a1[1] = v298;
                a1[2] = v299;
                *a2 = v281;
                a2[1] = v282;
                a2[2] = v283;
                *a3 = v300;
              }
            }
          }
          if ( (unsigned int)sub_1400D7280(&v323, &v327, &a7, a4, v15, &v348, &v352) )
          {
            v301 = a7;
            if ( a7 < *a3 )
            {
              v302 = v324;
              *a1 = v323;
              v303 = v325;
              a1[1] = v302;
              v304 = v327;
              a1[2] = v303;
              v305 = v328;
              *a2 = v304;
              a2[2] = v329;
              a2[1] = v305;
              *a3 = v301;
            }
          }
          if ( (unsigned int)sub_1400D7280(&v323, &v327, &a7, a4, v15, &v352, &v345) )
          {
            v306 = a7;
            if ( a7 < *a3 )
            {
              v307 = v324;
              *a1 = v323;
              v308 = v325;
              a1[1] = v307;
              v309 = v327;
              a1[2] = v308;
              v310 = v328;
              *a2 = v309;
              a2[2] = v329;
              a2[1] = v310;
              *a3 = v306;
            }
          }
          if ( (unsigned int)sub_1400D7280(&v323, &v327, &a7, a4, v15, &v345, &v355) )
          {
            v311 = a7;
            if ( a7 < *a3 )
            {
              v312 = v324;
              *a1 = v323;
              v313 = v325;
              a1[1] = v312;
              v314 = v327;
              a1[2] = v313;
              v315 = v328;
              *a2 = v314;
              a2[2] = v329;
              a2[1] = v315;
              *a3 = v311;
            }
          }
          v316 = sub_1400D7280(&v323, &v327, &a7, a4, v15, &v355, &v348);
          v149 = v343;
          if ( v316 )
          {
            v317 = a7;
            if ( a7 < *a3 )
            {
              v318 = v324;
              *a1 = v323;
              v319 = v325;
              a1[1] = v318;
              v320 = v327;
              a1[2] = v319;
              v321 = v328;
              *a2 = v320;
              a2[2] = v329;
              a2[1] = v321;
              *a3 = v317;
            }
          }
        }
      }
      ++v149;
      v10 = a8;
      ++v148;
      v21 = v351;
      v147 = v362;
      v22 = v341;
      v23 = v383;
      LOWORD(v17) = v361;
      v150 = __ROL4__(v150, 1);
      v343 = v149;
    }
    while ( v148 < *(_DWORD *)&byte_15AE31760[v362 + 216] );
  }
  return *a3 < 65536.0;
}

