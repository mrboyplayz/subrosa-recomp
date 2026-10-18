#include "shared_client.h"

//----- (000000014001A1C0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14001A1C0(signed int a1, int a2, int a3)
{
  signed int v3;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  int v13;
  float v14;
  int v15;
  float v16;
  float *v17;
  float v18;
  float v19;
  int v20;
  float v21;
  float v22;
  float v23;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001A1C0[128];
#define v25 (*(__int64 (*))(void *)(sr_frame_14001A1C0 + 0)) /* [rsp+8h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_14001A1C0 + 80)) /* [rsp+58h] */
#define v27 (*(int (*))(void *)(sr_frame_14001A1C0 + 96)) /* [rsp+68h] */
#define v28 (*(int (*))(void *)(sr_frame_14001A1C0 + 100)) /* [rsp+6Ch] */
#define v29 (*(sr_frame_i128 (*))(void *)(sr_frame_14001A1C0 + 104)) /* [rsp+70h] */

  v3 = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279000);
  v27 = 4;
  v28 = 5;
  v5 = 768LL * a3 + 12352LL * a2;
  if ( *(unsigned int *)((char *)&g_1ABC89C40 + v5) == 1 )
  {
    v6 = 1;
    v7 = 1;
    v8 = 1;
    if ( a1 >= 2 )
    {
      v9 = *(float *)((char *)&g_1ABC89C44 + v5);
      goto LABEL_6;
    }
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
  }
  v9 = 1.0
     - (float)(*(float *)((char *)&g_1ABC89C48 + v5)
             + *(float *)((char *)&g_1ABC89C44 + v5));
LABEL_6:
  v10 = *(float *)((char *)&g_1ABC89C48 + v5);
  v11 = *(float *)((char *)&g_1ABC89C4C + v5);
  v12 = *(float *)((char *)&g_1ABC89C50 + v5);
  if ( v9 <= 0.0 )
  {
    v13 = v6 ^ 1;
  }
  else
  {
    v27 = 6;
    v13 = v7 ^ 1;
    sub_140019940(a1, 0.0, 0.0, 0.0, v9, 1.0, 0.0625, 8 * v13 + 18, SR_VEC_LANES(128, si128, i32));
  }
  v14 = v10 + v9;
  v15 = 8 * v13;
  if ( v14 < 1.0 )
  {
    SR_VEC_LANES(128, si128, i32)[2] = 6;
    sub_140019940(a1, v14, 0.0, 0.0, 1.0 - v14, 1.0, 0.0625, v15 + 6, SR_VEC_LANES(128, si128, i32));
  }
  if ( v11 > 0.0 )
  {
    v28 = 6;
    sub_140019940(a1, 0.0, 0.0, 0.0, 1.0, v11, 0.0625, v15 + 34, SR_VEC_LANES(128, si128, i32));
  }
  v16 = v12 + v11;
  if ( v16 < 1.0 )
  {
    SR_VEC_LANES(128, si128, i32)[0] = 6;
    sub_140019940(a1, 0.0, v16, 0.0, 1.0, 1.0 - v16, 0.0625, v15 + 3, SR_VEC_LANES(128, si128, i32));
  }
  if ( *(int *)((char *)&g_1ABC89DB8 + v5) > 0 )
  {
    v17 = (float *)((char *)&g_1ABC89DC8 + v5);
    do
    {
      if ( v8 && a1 >= 2 )
      {
        v18 = *(v17 - 1);
        v19 = *v17;
      }
      else
      {
        v19 = *v17;
        v18 = 1.0 - (float)(*v17 + *(v17 - 1));
      }
      v20 = *((_DWORD *)v17 - 3);
      v21 = v17[2];
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v22 = -0.0625;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FA0);
          v27 = 6;
          v23 = 0.1875;
          v28 = 6;
        }
        else if ( v20 == 2 )
        {
          v22 = -0.0625;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FA0);
          v27 = 6;
          v23 = 0.3125;
          v28 = 6;
        }
        else
        {
          v22 = 0.0078125;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FC0);
          v27 = 7;
          v23 = 0.015625;
          v28 = 7;
        }
      }
      else
      {
        v22 = 0.0;
        v23 = 0.0625;
      }
      sub_140019940(a1, v18, v17[1], v22, v19, v21, v23, 0x3Fu, SR_VEC_LANES(128, si128, i32));
      ++v3;
      v17 += 6;
    }
    while ( v3 < *(int *)((char *)&g_1ABC89DB8 + v5) );
  }
  return 0; /* caller ignores native EAX */
}
#undef v25
#undef si128
#undef v27
#undef v28
#undef v29

//----- (0000000140023AC0) ----------------------------------------------------
__int64            sub_140023AC0(
        int a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int i;
  int j;
  int k;
  int v16;
  int v17;
  int v18;
  signed int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int *v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned int *v35;
  int v36;
  signed int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  signed int v41;
  __int64 v42;
  __int64 v43;
  signed int v44;
  __int64 v45;
  __int64 v46;
  unsigned int *v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  __int64 v57;
  unsigned int v58;
  unsigned int v59;
  __int64 v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  __int64 v64;
  unsigned int v65;
  __int64 v66;
  unsigned int *v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  unsigned int v80;
  __int64 v81;
  unsigned int v82;
  __int64 v83;
  unsigned int *v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  unsigned int v89;
  __int64 v90;
  unsigned int v91;
  unsigned int v92;
  unsigned int v93;
  int v94;
  float v95;
  __m128i v96;
  int v97;
  unsigned int v98;
  float v99;
  double v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  unsigned int v106;
  float v107;
  unsigned int v108;
  float v109;
  float v110;
  float v111;
  float v112;
  unsigned int v113;
  int v114;
  __int64 v115;
  float v116;
  unsigned int v117;
  unsigned int v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  float v123;
  float v124;
  double v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  double v144;
  unsigned int v145;
  int v146;
  unsigned int v147;
  int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  unsigned int v153;
  float v154;
  int *v155;
  int v156;
  float v157;
  float v158;
  float v159;
  float v160;
  __int64 v161;
  unsigned int v162;
  __int64 v163;
  unsigned int v164;
  __int64 v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  unsigned int v170;
  __int128 v171;
  int v172;
  int v173;
  unsigned int v174;
  __int64 v175;
  unsigned int *v176;
  __int64 v177;
  float v178;
  unsigned int v179;
  float v180;
  unsigned int v181;
  int v182;
  unsigned int v183;
  __int128 v184;
  unsigned int v185;
  __int64 v186;
  unsigned int *v187;
  int v188;
  int v189;
  __int64 v190;
  __int64 v191;
  float v192;
  float *v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  float v197;
  float v198;
  float v199;
  float v200;
  float v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  float v205;
  __int64 v206;
  float v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  __int64 v213;
  __int64 v214;
  float v215;
  float v216;
  float v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float v222;
  __int64 v223;
  float v224;
  __int64 v225;
  float v226;
  float v227;
  float v228;
  float v229;
  float v230;
  float v231;
  float v232;
  __int64 v233;
  float v234;
  __int64 v235;
  __int64 v236;
  float v237;
  float v238;
  float v239;
  float v240;
  float v241;
  __int64 v242;
  float *v243;
  float v244;
  float v245;
  float v246;
  __int64 v247;
  float v248;
  __int64 v249;
  float v250;
  float v251;
  float v252;
  float v253;
  float v254;
  __int64 v255;
  __int64 v256;
  float v257;
  float v258;
  unsigned int v259;
  float v260;
  float v261;
  unsigned int v262;
  float v263;
  float v264;
  float v265;
  __int128 v266;
  __int64 v267;
  unsigned int *v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  bool v273;
  float v274;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140023AC0[528];
#define v276 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 0)) /* [rsp+0h] */
#define v277 (*(unsigned int (*))(void *)(sr_frame_140023AC0 + 48)) /* [rsp+30h] */
#define v278 (*(int (*))(void *)(sr_frame_140023AC0 + 52)) /* [rsp+34h] */
#define v279 (*(unsigned int (*))(void *)(sr_frame_140023AC0 + 56)) /* [rsp+38h] */
#define v280 (*(signed int (*))(void *)(sr_frame_140023AC0 + 60)) /* [rsp+3Ch] */
#define v281 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 64)) /* [rsp+40h] */
#define v282 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 72)) /* [rsp+48h] */
#define v283 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 80)) /* [rsp+50h] */
#define v284 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 88)) /* [rsp+58h] */
#define v285 (*(float (*))(void *)(sr_frame_140023AC0 + 96)) /* [rsp+60h] */
#define v286 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 104)) /* [rsp+68h] */
#define v287 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 112)) /* [rsp+70h] */
#define v288 (*(signed int (*))(void *)(sr_frame_140023AC0 + 120)) /* [rsp+78h] */
#define v289 (*(signed int (*))(void *)(sr_frame_140023AC0 + 124)) /* [rsp+7Ch] */
#define v290 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 128)) /* [rsp+80h] */
#define v291 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 136)) /* [rsp+88h] */
#define v292 (*(__int128 (*))(void *)(sr_frame_140023AC0 + 144)) /* [rsp+90h] */
#define v293 (*(__int128 (*))(void *)(sr_frame_140023AC0 + 160)) /* [rsp+A0h] */
#define v294 (*(float (*))(void *)(sr_frame_140023AC0 + 176)) /* [rsp+B0h] */
#define v295 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 184)) /* [rsp+B8h] */
#define v296 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 186)) /* [rsp+BAh] */
#define v297 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 188)) /* [rsp+BCh] */
#define v298 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 190)) /* [rsp+BEh] */
#define v299 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 192)) /* [rsp+C0h] */
#define v300 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 194)) /* [rsp+C2h] */
#define v301 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 196)) /* [rsp+C4h] */
#define v302 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 198)) /* [rsp+C6h] */
#define v303 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 200)) /* [rsp+C8h] */
#define v304 (*(int (*))(void *)(sr_frame_140023AC0 + 512)) /* [rsp+200h] */

  v9 = a3;
  v10 = a4;
  v278 = a3;
  v11 = a2;
  v279 = a4;
  v12 = a1;
  v277 = a2;
  v285 = *(float *)&a1;
  if ( game_type == 1 )
  {
    for ( i = 0; i < 64; ++i )
    {
      for ( j = 0; j < 64; ++j )
      {
        for ( k = 0; k < 64; ++k )
        {
          sub_140012670(v12, v11 + k, v9 + i, v10 + j);
          v9 = v278;
          v11 = v277;
        }
      }
    }
  }
  v16 = a7;
  v17 = a6;
  v18 = a5;
  v19 = a8;
  v282 = a7;
  if ( a8 > 5 )
    v19 = -1;
  v20 = a6;
  v280 = v19;
  v21 = a5;
  v287 = a5;
  v22 = a7;
  v286 = a6;
  if ( a7 > 0 )
  {
    v23 = v9;
    v24 = 0;
    v281 = 0;
    do
    {
      v25 = 0;
      if ( v20 > 0 )
      {
        do
        {
          if ( v21 > 0 )
          {
            v26 = v11;
            v27 = &dword_140404A6C[1216 * v25 + 451221709 + 1216 * v24];
            v28 = v21;
            do
            {
              if ( *v27 )
                sub_140012670(v12, v26, v23, v10);
              ++v26;
              v27 += 19;
              --v28;
            }
            while ( v28 );
            v21 = v287;
            v24 = v281;
            v20 = v286;
          }
          v11 = v277;
          ++v10;
          ++v25;
        }
        while ( v25 < v20 );
        v22 = v282;
        v10 = v279;
      }
      v11 = v277;
      v24 += 64;
      ++v23;
      v281 = v24;
      v282 = --v22;
    }
    while ( v22 );
    v19 = v280;
    v18 = a5;
    v16 = a7;
    v17 = a6;
  }
  v29 = 0;
  if ( v16 <= 0 )
  {
    v87 = v19;
    dword_140404A6C[14019 * item_block_region_count + 225641327] = 0;
    dword_140404A6C[14019 * item_block_region_count + 225654181] = 0;
    goto LABEL_121;
  }
  v30 = 0;
  v283 = 0;
  do
  {
    v31 = 0;
    v281 = 0;
    if ( v17 > 0 )
    {
      v32 = (unsigned int)v17;
      v282 = (unsigned int)v17;
      do
      {
        if ( v18 > 0 )
        {
          v33 = v277;
          v34 = (unsigned int)v18;
          v35 = &dword_140404A6C[1216 * v30 + 451221716 + 1216 * v31];
          do
          {
            v36 = *(v35 - 7);
            if ( v36 )
            {
              v295 = *(_WORD *)v35;
              v296 = *((_WORD *)v35 + 1);
              v297 = *((_WORD *)v35 + 2);
              v298 = *((_WORD *)v35 + 3);
              v299 = *((_WORD *)v35 + 4);
              v300 = *((_WORD *)v35 + 5);
              v301 = *((_WORD *)v35 + 6);
              v302 = *((_WORD *)v35 + 7);
              sub_14000F830(v12, v33, v29 + v278, v10, v36 | (a9 << 24), &v295);
              if ( v29 == g_1AE1C9508 )
                sub_14003FA40(v33, v10, (float)(v29 + v278) * 4.0);
            }
            ++v33;
            v35 += 19;
            --v34;
          }
          while ( v34 );
          v31 = v281;
          v32 = v282;
          v30 = v283;
          v18 = a5;
        }
        ++v31;
        ++v10;
        --v32;
        v281 = v31;
        v282 = v32;
      }
      while ( v32 );
      v16 = a7;
      v17 = a6;
    }
    v10 = v279;
    v30 += 64;
    ++v29;
    v283 = v30;
  }
  while ( v29 < v16 );
  v37 = v278;
  v282 = v280;
  v38 = 0;
  v39 = (unsigned int)v16;
  v286 = 0;
  v289 = v278;
  v287 = (unsigned int)v16;
  do
  {
    v40 = 0;
    v290 = 0;
    if ( v17 <= 0 )
      goto LABEL_102;
    v41 = v279;
    v42 = (unsigned int)v17;
    v291 = (unsigned int)v17;
    v288 = v279;
    do
    {
      v43 = 0;
      v284 = 0;
      if ( v18 <= 0 )
        goto LABEL_100;
      v44 = v277;
      v45 = v38 + v40;
      v46 = (unsigned int)v18;
      v47 = &dword_140404A6C[1216 * v38 + 451221731 + 1216 * v40];
      v281 = v38 + v40;
      v283 = (unsigned int)v18;
      do
      {
        v48 = *(v47 - 21);
        if ( !v48 )
          goto LABEL_98;
        v295 = *((_WORD *)v47 - 22);
        v296 = *((_WORD *)v47 - 21);
        v297 = *((_WORD *)v47 - 20);
        v298 = *((_WORD *)v47 - 19);
        v299 = *((_WORD *)v47 - 18);
        v300 = *((_WORD *)v47 - 17);
        v301 = *((_WORD *)v47 - 16);
        v302 = *((_WORD *)v47 - 15);
        if ( v48 == 0xFFFF )
        {
          v49 = *(v47 - 19);
          v50 = *(v47 - 18);
          v51 = v47[1197];
          v52 = v47[1];
          v53 = v49
              | (16
               * (v52 | (16 * (v51 | (16 * (v50 | (16 * (*(v47 - 17) | (2 * (*(v47 - 16) | (2 * *(v47 - 20))))))))))));
          if ( !v49 )
          {
            if ( !v50 )
            {
              v54 = *(v47 - 38);
              if ( (unsigned int)(v54 - 3) <= 0xC
                || v54 == 1
                || (v55 = dword_140404A6C[1216 * v45 + 451220497 + 19 * v43], v55 - 3 <= 0xC)
                || v55 == 1 )
              {
                v53 |= 2u;
              }
            }
            if ( !v52 )
            {
              if ( *v47 - 3 <= 0xC
                || *v47 == 1
                || (v56 = dword_140404A6C[1216 * v281 + 451220516 + 19 * v43], v56 - 3 <= 0xC)
                || v56 == 1 )
              {
                v53 |= 0x20u;
              }
            }
            v45 = v281;
          }
          if ( !v51 )
          {
            if ( !v52 )
            {
              v57 = 19 * (v43 + (v45 << 6) + 65);
              v58 = dword_140404A6C[v57 + 451221712];
              if ( v58 - 3 <= 0xC || v58 == 1 || (v59 = dword_140404A6C[v57 + 451221713], v59 - 3 <= 0xC) || v59 == 1 )
                v53 |= 0x200u;
            }
            if ( !v50 )
            {
              v60 = v43 + ((v45 + 1) << 6);
              v61 = dword_140404A6C[19 * v60 + 451221693];
              if ( v61 - 3 <= 0xC
                || v61 == 1
                || (v62 = dword_140404A6C[19 * v60 + 451221713], v62 - 3 <= 0xC)
                || v62 == 1 )
              {
                v53 |= 0x2000u;
              }
            }
          }
          v63 = sub_14001A990(0, v53);
          if ( !(unsigned int)sub_140016450(v12, v44, v37, v41) )
            sub_140016130(v12, v44, v37, v41, v63 | (a9 << 24) | 0x80000000, &v295);
          v43 = v284;
          v46 = v283;
LABEL_74:
          if ( v280 == -1 )
            goto LABEL_98;
          goto LABEL_75;
        }
        if ( v48 >= 0 )
          goto LABEL_74;
        sub_140016130(v12, v44, v37, v41, v48 | (a9 << 24) | 0x80000000, &v295);
        if ( v280 != -1 )
        {
          if ( (unsigned __int16)v48 >= (int)g_150F61038
            && (unsigned __int16)v48 < (signed int)(g_150F61038 + 4) )
          {
            v69 = 5873 * v282;
            *(float *)&dword_140404A6C[v69 + 283831491] = (float)((float)v44 * 4.0) + 0.25;
            *(float *)&dword_140404A6C[v69 + 283831492] = (float)((float)v37 * 4.0) + 0.125;
            *(float *)&dword_140404A6C[v69 + 283831493] = (float)((float)v41 * 4.0) + 0.25;
            *(float *)&dword_140404A6C[v69 + 283831494] = (float)((float)(v44 + 1) * 4.0) - 0.25;
            *(float *)&dword_140404A6C[v69 + 283831495] = (float)((float)(v37 + 1) * 4.0) - 0.125;
            *(float *)&dword_140404A6C[v69 + 283831496] = (float)((float)(v41 + 1) * 4.0) - 0.25;
          }
          if ( (unsigned __int16)v48 >= (int)g_149F54C00
            && (unsigned __int16)v48 < (signed int)(g_149F54C00 + 4) )
          {
            v64 = v282;
            v70 = 5873 * v282;
            *(float *)&dword_140404A6C[v70 + 283831498] = (float)((float)v44 * 4.0) + 2.0;
            *(float *)&dword_140404A6C[v70 + 283831499] = (float)((float)v37 * 4.0) + 2.0;
            *(float *)&dword_140404A6C[v70 + 283831500] = (float)((float)v41 * 4.0) + 2.0;
            goto LABEL_76;
          }
LABEL_75:
          v64 = v282;
LABEL_76:
          if ( game_type == 7 )
            goto LABEL_97;
          v65 = (unsigned __int16)*(v47 - 21);
          if ( v65 < g_14500CA14 || v65 > g_14500CA20 )
            goto LABEL_97;
          v66 = 5873 * v64;
          v67 = &dword_140404A6C[v66 + 283831581];
          v68 = ((unsigned __int8)*(v47 - 21) - LOBYTE(g_14500CA14) - 2) & 3;
          dword_140404A6C[v66 + 283831580] = v44;
          dword_140404A6C[v66 + 283831581] = v37;
          dword_140404A6C[v66 + 283831582] = v41;
          dword_140404A6C[v66 + 283831583] = v68;
          dword_140404A6C[v66 + 283831584] = v44;
          dword_140404A6C[v66 + 283831585] = v37;
          dword_140404A6C[v66 + 283831586] = v41;
          dword_140404A6C[v66 + 283831587] = v68;
          switch ( v68 )
          {
            case 0:
              dword_140404A6C[v66 + 283831584] = v44 + 1;
              break;
            case 1:
              goto LABEL_93;
            case 2:
              dword_140404A6C[v66 + 283831584] = v44 + 1;
              break;
            case 3:
LABEL_93:
              dword_140404A6C[v66 + 283831586] = v41 + 1;
              break;
          }
          v71 = 2;
          do
          {
            v72 = *(v67 - 1);
            v73 = *v67;
            v74 = v67[1];
            sub_140017260(0, v72, *v67, v74, (v67[2] << 10) | 6);
            sub_1400173C0(0, v72, v73, v74);
            v67 += 4;
            --v71;
          }
          while ( v71 );
          v41 = v288;
          v37 = v289;
          v12 = LODWORD(v285);
        }
LABEL_97:
        v43 = v284;
        v46 = v283;
LABEL_98:
        v45 = v281;
        ++v43;
        ++v44;
        v284 = v43;
        v47 += 19;
        v283 = --v46;
      }
      while ( v46 );
      v18 = a5;
      v40 = v290;
      v42 = v291;
      v38 = v286;
LABEL_100:
      ++v41;
      ++v40;
      --v42;
      v288 = v41;
      v291 = v42;
      v290 = v40;
    }
    while ( v42 );
    v39 = v287;
    v17 = a6;
LABEL_102:
    ++v37;
    v38 += 64;
    --v39;
    v289 = v37;
    v287 = v39;
    v286 = v38;
  }
  while ( v39 );
  v75 = (unsigned int)a7;
  v76 = 0;
  v77 = v278;
  v290 = 0;
  v281 = (unsigned int)a7;
  dword_140404A6C[14019 * item_block_region_count + 225641327] = 0;
  dword_140404A6C[14019 * item_block_region_count + 225654181] = 0;
  v78 = 0;
  v291 = 0;
  do
  {
    v79 = 0;
    v287 = 0;
    if ( v17 > 0 )
    {
      v80 = v279;
      v81 = (unsigned int)v17;
      v286 = (unsigned int)v17;
      do
      {
        if ( v18 > 0 )
        {
          v82 = v277;
          v83 = (unsigned int)v18;
          v84 = &dword_140404A6C[1216 * v76 + 451221727 + 1216 * v79];
          do
          {
            if ( *v84 )
            {
              sub_140016F60(v12, v82, v77, v80, *v84);
              v85 = (int)dword_140404A6C[948 * (*v84 & 0x3FF) + 272299416];
              if ( v85 > 0 )
              {
                v86 = 948LL * (*v84 & 0x3FF);
                do
                {
                  if ( dword_140404A6C[v86 + 272299433] == 39 )
                  {
                    dword_140404A6C[14019 * item_block_region_count
                                  + 225654182
                                  + 4 * dword_140404A6C[14019 * item_block_region_count + 225654181]] = v82;
                    dword_140404A6C[14019 * item_block_region_count
                                  + 225654183
                                  + 4 * dword_140404A6C[14019 * item_block_region_count + 225654181]] = v77;
                    dword_140404A6C[14019 * item_block_region_count
                                  + 225654184
                                  + 4 * dword_140404A6C[14019 * item_block_region_count + 225654181]++] = v80;
                  }
                  v86 += 29;
                  --v85;
                }
                while ( v85 );
              }
            }
            ++v82;
            v84 += 19;
            --v83;
          }
          while ( v83 );
          v79 = v287;
          v81 = v286;
          v76 = v290;
          v18 = a5;
        }
        ++v79;
        ++v80;
        --v81;
        v287 = v79;
        v286 = v81;
      }
      while ( v81 );
      v78 = v291;
      v75 = v281;
      v17 = a6;
    }
    v78 += 311296;
    v76 += 64;
    ++v77;
    v291 = v78;
    --v75;
    v290 = v76;
    v281 = v75;
  }
  while ( v75 );
  v87 = v282;
  v19 = v280;
LABEL_121:
  v88 = v278;
  if ( v19 != -1 )
  {
    v89 = v279;
    v90 = 5873 * v87;
    v91 = g_1AF0C9518;
    v92 = v277 + g_1AF0C951C + g_1AF0C9510;
    *(float *)&v93 = (float)v278 * 4.0;
    v94 = g_1AF0C9518 + v279;
    v294 = 1.0;
    v95 = (float)(int)(g_1AF0C9510 + v277);
    dword_140404A6C[v90 + 283831486] = v93;
    v285 = *(float *)&v93;
    v96 = _mm_cvtsi32_si128(v92);
    v97 = v89 + v91 + g_1AF0C9524;
    *(float *)&v98 = v95 * 4.0;
    dword_140404A6C[v90 + 283831485] = v98;
    *(float *)&dword_140404A6C[v90 + 283831487] = (float)v94 * 4.0;
    *(float *)SR_VEC_LANES(128, v96, i32) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v96), f32)[0] * 4.0;
    dword_140404A6C[v90 + 283831488] = SR_VEC_LANES(128, v96, i32)[0];
    *(float *)&dword_140404A6C[v90 + 283831489] = (float)(v88 + 1) * 4.0;
    *(float *)&dword_140404A6C[v90 + 283831490] = (float)v97 * 4.0;
    v99 = (float)v97 * 4.0;
    *(_QWORD *)&v100 = dword_140404A6C[5873 * v87 + 283831497];
    v101 = *(float *)&dword_140404A6C[5873 * v87 + 283831486];
    v102 = *(float *)&dword_140404A6C[5873 * v87 + 283831489];
    v103 = *(float *)&dword_140404A6C[5873 * v87 + 283831487];
    v292 = xmmword_140278D30;
    v293 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, v100);
    sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, sr_export_float_lane_container(1078530011));
    *(float *)SR_VEC_LANES(128, v96, i32) = *(float *)SR_VEC_LANES(128, v96, i32) + *(float *)&v98;
    v104 = v101 + v102;
    v105 = *(float *)&v292;
    v106 = DWORD2(v293);
    v107 = *((float *)&v292 + 1);
    v108 = HIDWORD(v293);
    v109 = *((float *)&v292 + 2);
    v110 = (float)(v103 + v99) * 0.5;
    v111 = (float)((float)(*(float *)SR_VEC_LANES(128, v96, i32) * 0.5) - (float)(*(float *)&v292 * 16.0))
         + (float)(*((float *)&v293 + 2) * 16.0);
    v112 = (float)((float)(v104 * 0.5) - (float)(*((float *)&v292 + 1) * 16.0)) + (float)(*((float *)&v293 + 3) * 16.0);
    v113 = LODWORD(v294);
    v114 = 0;
    v115 = 5873 * v87;
    v116 = (float)(v110 - (float)(*((float *)&v292 + 2) * 16.0)) + (float)(v294 * 16.0);
    do
    {
      v117 = HIDWORD(v292);
      v118 = v293;
      dword_140404A6C[13 * (int)dword_140404A6C[v115 + 283836331] + 283836332 + v115] = 0;
      v119 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(float *)((char *)&g_183EC4920 + v119) = v111;
      *(float *)((char *)&g_183EC4924 + v119) = v112;
      *(float *)((char *)&g_183EC4928 + v119) = v116;
      v120 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(float *)((char *)&g_183EC492C + v120) = v105;
      *(float *)((char *)&g_183EC4930 + v120) = v107;
      *(float *)((char *)&g_183EC4934 + v120) = v109;
      v121 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(unsigned int *)((char *)&g_183EC4938 + v121) = v117;
      *(_QWORD *)((char *)&g_183EC493C + v121) = __PAIR64__(DWORD1(v293), v118);
      v122 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(unsigned int *)((char *)&g_183EC4944 + v122) = v106;
      *(unsigned int *)((char *)&g_183EC4948 + v122) = v108;
      *(unsigned int *)((char *)&g_183EC494C + v122) = v113;
      ++dword_140404A6C[v115 + 283836331];
      if ( v114 == 3 )
      {
        sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, sr_export_float_lane_container(1078530011));
        v106 = DWORD2(v293);
        v108 = HIDWORD(v293);
        v113 = LODWORD(v294);
        v109 = *((float *)&v292 + 2);
        v107 = *((float *)&v292 + 1);
        v105 = *(float *)&v292;
        v123 = *((float *)&v293 + 3) * 24.0;
        v111 = v111 + (float)(*((float *)&v293 + 2) * 24.0);
        v124 = v294 * 24.0;
      }
      else
      {
        v123 = v107 * 4.0;
        v111 = v111 + (float)(v105 * 4.0);
        v124 = v109 * 4.0;
      }
      ++v114;
      v116 = v116 + v124;
      v112 = v112 + v123;
    }
    while ( v114 < 8 );
    *(_QWORD *)&v125 = dword_140404A6C[v90 + 283831497];
    v126 = *(float *)&dword_140404A6C[v90 + 283831485];
    v127 = *(float *)&dword_140404A6C[v90 + 283831488];
    v128 = *(float *)&dword_140404A6C[v90 + 283831486];
    v129 = *(float *)&dword_140404A6C[v90 + 283831489];
    v130 = *(float *)&dword_140404A6C[v90 + 283831487];
    v131 = *(float *)&dword_140404A6C[v90 + 283831490];
    v292 = xmmword_140278D30;
    v294 = 1.0;
    v293 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, v125);
    sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, sr_export_float_lane_container(1078530011));
    v132 = v126 + v127;
    v133 = v128 + v129;
    v134 = *(float *)&v292;
    v135 = v130 + v131;
    v136 = *((float *)&v293 + 2);
    v137 = *((float *)&v292 + 1);
    v138 = *((float *)&v293 + 3);
    v139 = *((float *)&v292 + 2);
    v140 = v294;
    v141 = (float)((float)(v132 * 0.5) + (float)(*(float *)&v292 * 4.0)) + (float)(*((float *)&v293 + 2) * 17.5);
    v142 = (float)((float)(v133 * 0.5) + (float)(*((float *)&v292 + 1) * 4.0)) + (float)(*((float *)&v293 + 3) * 17.5);
    v143 = (float)((float)(v135 * 0.5) + (float)(*((float *)&v292 + 2) * 4.0)) + (float)(v294 * 17.5);
    if ( g_183F7CB60 )
    {
      *(float *)&dword_140404A6C[v90 + 283831498] = v141;
      *(float *)&dword_140404A6C[v90 + 283831499] = v142;
      *(float *)&dword_140404A6C[v90 + 283831500] = v143;
    }
    *(float *)&dword_140404A6C[v90 + 283831501] = (float)((float)(v134 * 12.0) + v141) + (float)(v136 * 6.0);
    *(float *)&dword_140404A6C[v90 + 283831502] = (float)((float)(v137 * 12.0) + v142) + (float)(v138 * 6.0);
    *(float *)&dword_140404A6C[v90 + 283831503] = (float)((float)(v139 * 12.0) + v143) + (float)(v140 * 6.0);
    if ( game_type == 7 )
    {
      *(_QWORD *)&v144 = dword_140404A6C[v90 + 283831497];
      v294 = 1.0;
      v292 = xmmword_140278D30;
      v293 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v292, (float *)&v292 + 3, v144);
      *(float *)&v144 = v285 + 13.5;
      *(float *)&v145 = (float)(*(float *)&dword_140404A6C[v90 + 283831487] + *(float *)&dword_140404A6C[v90 + 283831490])
                      * 0.5;
      *(float *)&dword_140404A6C[v90 + 283831501] = (float)(*(float *)&dword_140404A6C[v90 + 283831485]
                                                          + *(float *)&dword_140404A6C[v90 + 283831488])
                                                  * 0.5;
      dword_140404A6C[v90 + 283831502] = LODWORD(v144);
      dword_140404A6C[v90 + 283831503] = v145;
    }
    v19 = v280;
  }
  v146 = 0;
  v147 = *(unsigned int *)&g_1AF0C9834;
  v148 = 0;
  v149 = *(unsigned int *)&g_1AF0C9838;
  v150 = *(unsigned int *)&g_1AF0C983C;
  v151 = *(unsigned int *)&g_1AF0C9810;
  v152 = *(unsigned int *)&g_1AF0C9814;
  v153 = *(unsigned int *)&g_1AF0C9818;
  v154 = 65536.0;
  if ( (int)g_175FD145C > 0 )
  {
    v155 = (int *)&g_175FD1468;
    do
    {
      v156 = v146;
      v157 = (float)((float)*(v155 - 1) * 4.0)
           - (float)((float)(g_1AF0C9834 * 32.0) + g_1AF0C9810);
      v158 = v154;
      v159 = (float)((float)v155[1] * 4.0)
           - (float)((float)(g_1AF0C983C * 32.0) + g_1AF0C9818);
      v160 = fsqrt(
               (float)((float)(v157 * v157)
                     + (float)((float)((float)((float)*v155 * 4.0)
                                     - (float)((float)(g_1AF0C9838 * 32.0)
                                             + g_1AF0C9814))
                             * (float)((float)((float)*v155 * 4.0)
                                     - (float)((float)(g_1AF0C9838 * 32.0)
                                             + g_1AF0C9814))))
             + (float)(v159 * v159));
      if ( v154 > v160 )
        v154 = v160;
      v146 = v148;
      if ( v158 <= v160 )
        v146 = v156;
      ++v148;
      v155 += 34;
    }
    while ( v148 < (int)g_175FD145C );
    v153 = *(unsigned int *)&g_1AF0C9818;
  }
  v161 = 34LL * v146;
  dword_140404A6C[14019 * item_block_region_count + 225641321] = dword_140404A6C[v161 + 225391236];
  v162 = item_block_region_count;
  v163 = 14019LL * (int)item_block_region_count;
  if ( dword_140404A6C[v163 + 225641321] == -1 )
  {
    dword_140404A6C[v163 + 225641321] = dword_140404A6C[v161 + 225391238];
    v162 = item_block_region_count;
  }
  dword_140404A6C[14019 * v162 + 225641322] = dword_140404A6C[v161 + 225391237];
  v164 = item_block_region_count;
  v165 = 14019LL * (int)item_block_region_count;
  if ( dword_140404A6C[v165 + 225641322] == -1 )
  {
    dword_140404A6C[v165 + 225641322] = dword_140404A6C[v161 + 225391239];
    v164 = item_block_region_count;
  }
  v166 = g_1AF0C9524;
  v167 = g_1AF0C9518;
  v168 = g_1AF0C9514;
  v169 = g_1AF0C9510;
  v170 = g_1AF0C9830;
  if ( v19 == -1 )
  {
    v181 = g_1AF0C9520;
    v174 = g_1AF0C951C;
    v172 = v277;
    v173 = v279;
  }
  else
  {
    v171 = g_1AF0C981C;
    v172 = v277;
    v173 = v279;
    v174 = g_1AF0C951C;
    dword_140404A6C[14019 * v164 + 225641203] = 1;
    dword_140404A6C[14019 * item_block_region_count + 225641325] = v19;
    v175 = 14019LL * (int)item_block_region_count;
    dword_140404A6C[v175 + 225641207] = v151;
    dword_140404A6C[v175 + 225641208] = v152;
    dword_140404A6C[v175 + 225641209] = v153;
    v176 = &dword_140404A6C[14019 * item_block_region_count + 225641210];
    *(_OWORD *)v176 = v171;
    v176[4] = g_1AF0C982C;
    v176[5] = v170;
    v176[6] = v147;
    v176[7] = v149;
    v176[8] = v150;
    v177 = 14019LL * (int)item_block_region_count;
    v178 = *(float *)&dword_140404A6C[v177 + 225641215] + *(float *)&dword_140404A6C[v177 + 225641215];
    *(float *)&v171 = *(float *)&dword_140404A6C[v177 + 225641218] * 18.0;
    *(float *)&v179 = (float)((float)((float)(*(float *)&dword_140404A6C[v177 + 225641211] * 32.0)
                                    + *(float *)&dword_140404A6C[v177 + 225641208])
                            + (float)(*(float *)&dword_140404A6C[v177 + 225641217] * 18.0))
                    + (float)(*(float *)&dword_140404A6C[v177 + 225641214] + *(float *)&dword_140404A6C[v177 + 225641214]);
    v180 = (float)(*(float *)&dword_140404A6C[v177 + 225641212] * 32.0) + *(float *)&dword_140404A6C[v177 + 225641209];
    *(float *)&dword_140404A6C[v177 + 225653936] = (float)((float)((float)(*(float *)&dword_140404A6C[v177 + 225641210]
                                                                         * 32.0)
                                                                 + *(float *)&dword_140404A6C[v177 + 225641207])
                                                         + (float)(*(float *)&dword_140404A6C[v177 + 225641216] * 18.0))
                                                 + (float)(*(float *)&dword_140404A6C[v177 + 225641213]
                                                         + *(float *)&dword_140404A6C[v177 + 225641213]);
    dword_140404A6C[v177 + 225653937] = v179;
    *(float *)&dword_140404A6C[v177 + 225653938] = (float)(v180 + *(float *)&v171) + v178;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(v167 + v173) * 4.0;
    v181 = g_1AF0C9520;
    v182 = v88 + g_1AF0C9520 + v168;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)v182 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    v164 = ++item_block_region_count;
  }
  v183 = a8;
  if ( a8 != 10 )
  {
    v261 = (float)v172;
    if ( a8 == 12 )
    {
      dword_140404A6C[14019 * v164 + 225641203] = 6;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = v261 * 4.0;
      *(float *)&v262 = (float)v173 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = (float)v88 * 4.0;
      dword_140404A6C[14019 * item_block_region_count + 225641209] = v262;
      dword_140404A6C[14019 * item_block_region_count + 225641209] = v262;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(v169 + v172) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(v168 + v88) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(v167 + v173) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(v172 + v174 + v169)
                                                                                 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(v173 + v167 + v166)
                                                                                 * 4.0;
      dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
      v164 = ++item_block_region_count;
    }
    else if ( a8 == 13 )
    {
      v263 = v261 * 4.0;
      v264 = (float)v88;
      dword_140404A6C[14019 * v164 + 225641203] = 5;
      v265 = (float)v173;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = v263;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = (float)v88 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641209] = (float)v173 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(v169 + v172) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(v168 + v88) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(v167 + v173) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(v172 + v174 + v169)
                                                                                 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(v173 + v167 + v166)
                                                                                 * 4.0;
      v273 = game_connected == 0;
      dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
      if ( !v273 )
      {
        dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 0;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 1000;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 1;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 5000;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 2;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 10000;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 3;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 10000;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 4;
        v181 = g_1AF0C9520;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 100000;
      }
      v164 = ++item_block_region_count;
      goto LABEL_171;
    }
    v185 = g_1AF0C982C;
    goto LABEL_162;
  }
  v184 = g_1AF0C981C;
  v185 = g_1AF0C982C;
  dword_140404A6C[14019 * v164 + 225641203] = 4;
  v186 = 14019LL * (int)item_block_region_count;
  dword_140404A6C[v186 + 225641207] = v151;
  dword_140404A6C[v186 + 225641208] = v152;
  dword_140404A6C[v186 + 225641209] = v153;
  v187 = &dword_140404A6C[14019 * item_block_region_count + 225641210];
  v187[4] = v185;
  v187[5] = v170;
  v187[6] = v147;
  v187[7] = v149;
  v187[8] = v150;
  *(_OWORD *)v187 = v184;
  v188 = g_1AFFF1F5C;
  dword_140404A6C[14019 * item_block_region_count + 225641327] = 0;
  if ( v188 > 0 )
  {
    v189 = a9 & 3;
    v304 = v189;
    v190 = 0;
    v191 = (unsigned int)v188;
    do
    {
      v192 = *(float *)&dword_140404A6C[v190 + 468694334];
      v193 = (float *)&dword_140404A6C[v190 + 468694335];
      v194 = 14019LL * (int)item_block_region_count;
      v195 = 0;
      v196 = v194 * 4 + 788LL * (int)dword_140404A6C[v194 + 225641327];
      v197 = (float)((float)((float)(v192 * *(float *)&dword_140404A6C[v194 + 225641210])
                           + *(float *)&dword_140404A6C[v194 + 225641207])
                   + (float)(*(float *)&dword_140404A6C[v190 + 468694335] * *(float *)&dword_140404A6C[v194 + 225641213]))
           + (float)(*(float *)&dword_140404A6C[v190 + 468694336] * *(float *)&dword_140404A6C[v194 + 225641216]);
      v198 = (float)((float)(v192 * *(float *)&dword_140404A6C[v194 + 225641211])
                   + *(float *)&dword_140404A6C[v194 + 225641208])
           + (float)(*(float *)&dword_140404A6C[v190 + 468694335] * *(float *)&dword_140404A6C[v194 + 225641214]);
      v199 = *(float *)&dword_140404A6C[v190 + 468694336] * *(float *)&dword_140404A6C[v194 + 225641217];
      v200 = (float)((float)(v192 * *(float *)&dword_140404A6C[v194 + 225641212])
                   + *(float *)&dword_140404A6C[v194 + 225641209])
           + (float)(*(float *)&dword_140404A6C[v190 + 468694335] * *(float *)&dword_140404A6C[v194 + 225641215]);
      v201 = *(float *)&dword_140404A6C[v190 + 468694336] * *(float *)&dword_140404A6C[v194 + 225641218];
      *(float *)((char *)&g_1760C582C + v196) = v197;
      *(float *)((char *)&g_1760C5830 + v196) = v198 + v199;
      *(float *)((char *)&g_1760C5834 + v196) = v200 + v201;
      dword_140404A6C[14019 * item_block_region_count
                    + 225641331
                    + 197 * dword_140404A6C[14019 * item_block_region_count + 225641327]] = v189;
      v202 = (int)dword_140404A6C[v190 + 468694333];
      v203 = v202;
      dword_140404A6C[14019 * item_block_region_count
                    + 225641332
                    + 197 * dword_140404A6C[14019 * item_block_region_count + 225641327]] = v202;
      if ( v202 >= 4 )
      {
        v204 = v202 - 3;
        do
        {
          v205 = *(v193 - 1);
          v206 = 14019LL * (int)item_block_region_count;
          v207 = v205 * *(float *)&dword_140404A6C[v206 + 225641210];
          v208 = (float)((float)(v205 * *(float *)&dword_140404A6C[v206 + 225641212])
                       + *(float *)&dword_140404A6C[v206 + 225641209])
               + (float)(*v193 * *(float *)&dword_140404A6C[v206 + 225641215]);
          v209 = v193[4];
          v210 = (float)((float)((float)(v205 * *(float *)&dword_140404A6C[v206 + 225641211])
                               + *(float *)&dword_140404A6C[v206 + 225641208])
                       + (float)(*v193 * *(float *)&dword_140404A6C[v206 + 225641214]))
               + (float)(v193[1] * *(float *)&dword_140404A6C[v206 + 225641217]);
          v211 = v208 + (float)(v193[1] * *(float *)&dword_140404A6C[v206 + 225641218]);
          v212 = v193[5];
          v213 = 788LL * (int)dword_140404A6C[v206 + 225641327] + 12 * (v195 + 4673LL * (int)item_block_region_count);
          *(float *)((char *)&g_1760C5840 + v213) = (float)((float)(v207
                                                                                 + *(float *)&dword_140404A6C[v206 + 225641207])
                                                                         + (float)(*v193
                                                                                 * *(float *)&dword_140404A6C[v206 + 225641213]))
                                                                 + (float)(v193[1]
                                                                         * *(float *)&dword_140404A6C[v206 + 225641216]);
          *(float *)((char *)&g_1760C5844 + v213) = v210;
          *(float *)((char *)&g_1760C5848 + v213) = v211;
          v214 = 14019LL * (int)item_block_region_count;
          v215 = v193[3];
          v216 = (float)((float)((float)(v215 * *(float *)&dword_140404A6C[v214 + 225641210])
                               + *(float *)&dword_140404A6C[v214 + 225641207])
                       + (float)(v209 * *(float *)&dword_140404A6C[v214 + 225641213]))
               + (float)(v212 * *(float *)&dword_140404A6C[v214 + 225641216]);
          v217 = (float)((float)(v215 * *(float *)&dword_140404A6C[v214 + 225641212])
                       + *(float *)&dword_140404A6C[v214 + 225641209])
               + (float)(v209 * *(float *)&dword_140404A6C[v214 + 225641215]);
          v218 = v212 * *(float *)&dword_140404A6C[v214 + 225641217];
          v219 = (float)((float)(v215 * *(float *)&dword_140404A6C[v214 + 225641211])
                       + *(float *)&dword_140404A6C[v214 + 225641208])
               + (float)(v209 * *(float *)&dword_140404A6C[v214 + 225641214]);
          v220 = v193[8];
          v221 = v217 + (float)(v212 * *(float *)&dword_140404A6C[v214 + 225641218]);
          v222 = v193[9];
          v223 = 788LL * (int)dword_140404A6C[v214 + 225641327] + 12 * (v195 + 4673LL * (int)item_block_region_count);
          *(float *)((char *)&g_1760C584C + v223) = v216;
          *(float *)((char *)&g_1760C5850 + v223) = v219 + v218;
          *(float *)((char *)&g_1760C5854 + v223) = v221;
          v224 = v193[7];
          v225 = 14019LL * (int)item_block_region_count;
          v226 = v220 * *(float *)&dword_140404A6C[v225 + 225641214];
          v227 = (float)((float)((float)(v224 * *(float *)&dword_140404A6C[v225 + 225641210])
                               + *(float *)&dword_140404A6C[v225 + 225641207])
                       + (float)(v220 * *(float *)&dword_140404A6C[v225 + 225641213]))
               + (float)(v222 * *(float *)&dword_140404A6C[v225 + 225641216]);
          v228 = (float)((float)(v224 * *(float *)&dword_140404A6C[v225 + 225641212])
                       + *(float *)&dword_140404A6C[v225 + 225641209])
               + (float)(v220 * *(float *)&dword_140404A6C[v225 + 225641215]);
          v229 = v193[12];
          v230 = (float)((float)((float)(v193[7] * *(float *)&dword_140404A6C[v225 + 225641211])
                               + *(float *)&dword_140404A6C[v225 + 225641208])
                       + v226)
               + (float)(v222 * *(float *)&dword_140404A6C[v225 + 225641217]);
          v231 = v228 + (float)(v222 * *(float *)&dword_140404A6C[v225 + 225641218]);
          v232 = v193[13];
          v233 = 788LL * (int)dword_140404A6C[v225 + 225641327] + 12 * (v195 + 4673LL * (int)item_block_region_count);
          *(float *)((char *)&g_1760C5858 + v233) = v227;
          *(float *)((char *)&g_1760C585C + v233) = v230;
          *(float *)((char *)&g_1760C5860 + v233) = v231;
          v234 = v193[11];
          v193 += 16;
          v235 = 14019LL * (int)item_block_region_count;
          v236 = v195 + 4673LL * (int)item_block_region_count;
          v195 += 4;
          v237 = (float)((float)((float)(v234 * *(float *)&dword_140404A6C[v235 + 225641210])
                               + *(float *)&dword_140404A6C[v235 + 225641207])
                       + (float)(v229 * *(float *)&dword_140404A6C[v235 + 225641213]))
               + (float)(v232 * *(float *)&dword_140404A6C[v235 + 225641216]);
          v238 = v232 * *(float *)&dword_140404A6C[v235 + 225641217];
          v239 = (float)((float)(v234 * *(float *)&dword_140404A6C[v235 + 225641211])
                       + *(float *)&dword_140404A6C[v235 + 225641208])
               + (float)(v229 * *(float *)&dword_140404A6C[v235 + 225641214]);
          v240 = v232 * *(float *)&dword_140404A6C[v235 + 225641218];
          v241 = (float)((float)(v234 * *(float *)&dword_140404A6C[v235 + 225641212])
                       + *(float *)&dword_140404A6C[v235 + 225641209])
               + (float)(v229 * *(float *)&dword_140404A6C[v235 + 225641215]);
          v242 = 788LL * (int)dword_140404A6C[v235 + 225641327] + 12 * v236;
          *(float *)((char *)&g_1760C5864 + v242) = v237;
          *(float *)((char *)&g_1760C5868 + v242) = v239 + v238;
          *(float *)((char *)&g_1760C586C + v242) = v241 + v240;
        }
        while ( v195 < v204 );
      }
      if ( v195 < v203 )
      {
        v243 = (float *)&dword_140404A6C[4 * v195 + 468694335 + v190];
        do
        {
          v244 = *(v243 - 1);
          v245 = *v243;
          v246 = v243[1];
          v247 = 14019LL * (int)item_block_region_count;
          v248 = *v243 * *(float *)&dword_140404A6C[v247 + 225641213];
          v243 += 4;
          v249 = v195 + 4673LL * (int)item_block_region_count;
          ++v195;
          v250 = (float)((float)((float)(v244 * *(float *)&dword_140404A6C[v247 + 225641210])
                               + *(float *)&dword_140404A6C[v247 + 225641207])
                       + v248)
               + (float)(v246 * *(float *)&dword_140404A6C[v247 + 225641216]);
          v251 = v246 * *(float *)&dword_140404A6C[v247 + 225641217];
          v252 = (float)((float)(v244 * *(float *)&dword_140404A6C[v247 + 225641211])
                       + *(float *)&dword_140404A6C[v247 + 225641208])
               + (float)(v245 * *(float *)&dword_140404A6C[v247 + 225641214]);
          v253 = v246 * *(float *)&dword_140404A6C[v247 + 225641218];
          v254 = (float)((float)(v244 * *(float *)&dword_140404A6C[v247 + 225641212])
                       + *(float *)&dword_140404A6C[v247 + 225641209])
               + (float)(v245 * *(float *)&dword_140404A6C[v247 + 225641215]);
          v255 = 788LL * (int)dword_140404A6C[v247 + 225641327] + 12 * v249;
          *(float *)((char *)&g_1760C5840 + v255) = v250;
          *(float *)((char *)&g_1760C5844 + v255) = v252 + v251;
          *(float *)((char *)&g_1760C5848 + v255) = v254 + v253;
        }
        while ( v195 < v203 );
      }
      v190 += 257;
      v189 = v304;
      ++dword_140404A6C[14019 * item_block_region_count + 225641327];
      --v191;
    }
    while ( v191 );
    v167 = g_1AF0C9518;
    v168 = g_1AF0C9514;
    v169 = g_1AF0C9510;
    v166 = g_1AF0C9524;
    v181 = g_1AF0C9520;
    v174 = g_1AF0C951C;
    v88 = v278;
    v172 = v277;
    v173 = v279;
    v183 = 10;
  }
  v256 = 14019LL * (int)item_block_region_count;
  v257 = *(float *)&dword_140404A6C[v256 + 225641215] + *(float *)&dword_140404A6C[v256 + 225641215];
  v258 = *(float *)&dword_140404A6C[v256 + 225641218] * 26.0;
  *(float *)&v259 = (float)((float)((float)(*(float *)&dword_140404A6C[v256 + 225641211] * 50.0)
                                  + *(float *)&dword_140404A6C[v256 + 225641208])
                          + (float)(*(float *)&dword_140404A6C[v256 + 225641217] * 26.0))
                  + (float)(*(float *)&dword_140404A6C[v256 + 225641214] + *(float *)&dword_140404A6C[v256 + 225641214]);
  v260 = (float)(*(float *)&dword_140404A6C[v256 + 225641212] * 50.0) + *(float *)&dword_140404A6C[v256 + 225641209];
  *(float *)&dword_140404A6C[v256 + 225653936] = (float)((float)((float)(*(float *)&dword_140404A6C[v256 + 225641210]
                                                                       * 50.0)
                                                               + *(float *)&dword_140404A6C[v256 + 225641207])
                                                       + (float)(*(float *)&dword_140404A6C[v256 + 225641216] * 26.0))
                                               + (float)(*(float *)&dword_140404A6C[v256 + 225641213]
                                                       + *(float *)&dword_140404A6C[v256 + 225641213]);
  dword_140404A6C[v256 + 225653937] = v259;
  *(float *)&dword_140404A6C[v256 + 225653938] = (float)(v260 + v258) + v257;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(v169 + v172) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(v168 + v88) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(v167 + v173) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
  v164 = item_block_region_count + 1;
  v261 = (float)v172;
  ++item_block_region_count;
LABEL_162:
  v263 = v261 * 4.0;
  v264 = (float)v88;
  v265 = (float)v173;
  if ( v183 == 11 )
  {
    v266 = g_1AF0C981C;
    dword_140404A6C[14019 * v164 + 225641203] = 3;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = v264 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641209] = v265 * 4.0;
    v267 = 14019LL * (int)item_block_region_count;
    dword_140404A6C[v267 + 225641207] = v151;
    dword_140404A6C[v267 + 225641208] = v152;
    dword_140404A6C[v267 + 225641209] = v153;
    v268 = &dword_140404A6C[14019 * item_block_region_count + 225641210];
    *(_OWORD *)v268 = v266;
    v268[5] = g_1AF0C9830;
    v268[4] = v185;
    v268[6] = v147;
    v268[7] = v149;
    v268[8] = v150;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    v269 = 14019LL * (int)item_block_region_count;
    dword_140404A6C[v269 + 225654178] = dword_140404A6C[v269 + 225641207];
    dword_140404A6C[v269 + 225654179] = dword_140404A6C[v269 + 225641208];
    dword_140404A6C[v269 + 225654180] = dword_140404A6C[v269 + 225641209];
    v270 = 14019LL * (int)item_block_region_count;
    *(float *)&dword_140404A6C[v270 + 225654178] = (float)(*(float *)&dword_140404A6C[v270 + 225641210] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654178];
    *(float *)&dword_140404A6C[v270 + 225654179] = (float)(*(float *)&dword_140404A6C[v270 + 225641211] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654179];
    *(float *)&dword_140404A6C[v270 + 225654180] = (float)(*(float *)&dword_140404A6C[v270 + 225641212] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654180];
    v271 = 14019LL * (int)item_block_region_count;
    *(float *)&dword_140404A6C[v271 + 225654178] = (float)(*(float *)&dword_140404A6C[v271 + 225641216] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654178];
    *(float *)&dword_140404A6C[v271 + 225654179] = (float)(*(float *)&dword_140404A6C[v271 + 225641217] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654179];
    *(float *)&dword_140404A6C[v271 + 225654180] = (float)(*(float *)&dword_140404A6C[v271 + 225641218] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654180];
    v272 = 14019LL * (int)item_block_region_count;
    *(float *)&dword_140404A6C[v272 + 225654178] = (float)(*(float *)&dword_140404A6C[v272 + 225641213]
                                                         + *(float *)&dword_140404A6C[v272 + 225641213])
                                                 + *(float *)&dword_140404A6C[v272 + 225654178];
    *(float *)&dword_140404A6C[v272 + 225654179] = (float)(*(float *)&dword_140404A6C[v272 + 225641214]
                                                         + *(float *)&dword_140404A6C[v272 + 225641214])
                                                 + *(float *)&dword_140404A6C[v272 + 225654179];
    *(float *)&dword_140404A6C[v272 + 225654180] = (float)(*(float *)&dword_140404A6C[v272 + 225641215]
                                                         + *(float *)&dword_140404A6C[v272 + 225641215])
                                                 + *(float *)&dword_140404A6C[v272 + 225654180];
    goto LABEL_164;
  }
  if ( v183 == 14 )
  {
    dword_140404A6C[14019 * v164 + 225641203] = 8;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = v264 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641209] = v265 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
LABEL_164:
    dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
LABEL_173:
    ++item_block_region_count;
    return 0; /* native result ignored by both callers */
  }
LABEL_171:
  v274 = v264 * 4.0;
  if ( v183 == 16 )
  {
    dword_140404A6C[14019 * v164 + 225641203] = 9;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = v274;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641209] = v265 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
    dword_140404A6C[14019 * item_block_region_count
                  + 225654129
                  + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 0;
    dword_140404A6C[14019 * item_block_region_count
                  + 225654130
                  + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 20;
    goto LABEL_173;
  }
  return 0; /* native result ignored by both callers */
}
#undef v276
#undef v277
#undef v278
#undef v279
#undef v280
#undef v281
#undef v282
#undef v283
#undef v284
#undef v285
#undef v286
#undef v287
#undef v288
#undef v289
#undef v290
#undef v291
#undef v292
#undef v293
#undef v294
#undef v295
#undef v296
#undef v297
#undef v298
#undef v299
#undef v300
#undef v301
#undef v302
#undef v303
#undef v304

//----- (0000000140026E70) ----------------------------------------------------
__int64 sub_140026E70()
{
  int v0;
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  char *v5;
  unsigned int *v6;
  char v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  char *v13;
  char v14;
  char v15;
  char v16;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140026E70[352];
#define v18 (*(__int64 (*))(void *)(sr_frame_140026E70 + 0)) /* [rsp+0h] */
#define FindData (*(_BYTE (*)[304])(void *)(sr_frame_140026E70 + 32)) /* [rsp+20h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140026E70 + 336)) /* [rsp+150h] */

  LOBYTE(g_1ABC89C00) = 0;
  LOBYTE(g_1ABC8CC40) = 0;
  LOBYTE(g_1ABC8FC80) = 0;
  LOBYTE(g_1ABC92CC0) = 0;
  LOBYTE(g_1ABC95D00) = 0;
  LOBYTE(g_1ABC98D40) = 0;
  LOBYTE(g_1ABC9BD80) = 0;
  LOBYTE(g_1ABC9EDC0) = 0;
  LOBYTE(g_1ABCA1E00) = 0;
  LOBYTE(g_1ABCA4E40) = 0;
  LOBYTE(g_1ABCA7E80) = 0;
  LOBYTE(g_1ABCAAEC0) = 0;
  LOBYTE(g_1ABCADF00) = 0;
  LOBYTE(g_1ABCB0F40) = 0;
  LOBYTE(g_1ABCB3F80) = 0;
  LOBYTE(g_1ABCB6FC0) = 0;
  LOBYTE(g_1ABCBA000) = 0;
  LOBYTE(g_1ABCBD040) = 0;
  LOBYTE(g_1ABCC0080) = 0;
  LOBYTE(g_1ABCC30C0) = 0;
  LOBYTE(g_1ABCC6100) = 0;
  LOBYTE(g_1ABCC9140) = 0;
  LOBYTE(g_1ABCCC180) = 0;
  LOBYTE(g_1ABCCF1C0) = 0;
  LOBYTE(g_1ABCD2200) = 0;
  LOBYTE(g_1ABCD5240) = 0;
  LOBYTE(g_1ABCD8280) = 0;
  LOBYTE(g_1ABCDB2C0) = 0;
  LOBYTE(g_1ABCDE300) = 0;
  LOBYTE(g_1ABCE1340) = 0;
  LOBYTE(g_1ABCE4380) = 0;
  LOBYTE(g_1ABCE73C0) = 0;
  LOBYTE(g_1ABCEA400) = 0;
  LOBYTE(g_1ABCED440) = 0;
  LOBYTE(g_1ABCF0480) = 0;
  LOBYTE(g_1ABCF34C0) = 0;
  LOBYTE(g_1ABCF6500) = 0;
  LOBYTE(g_1ABCF9540) = 0;
  LOBYTE(g_1ABCFC580) = 0;
  LOBYTE(g_1ABCFF5C0) = 0;
  LOBYTE(g_1ABD02600) = 0;
  LOBYTE(g_1ABD05640) = 0;
  LOBYTE(g_1ABD08680) = 0;
  LOBYTE(g_1ABD0B6C0) = 0;
  LOBYTE(g_1ABD0E700) = 0;
  LOBYTE(g_1ABD11740) = 0;
  LOBYTE(g_1ABD14780) = 0;
  LOBYTE(g_1ABD177C0) = 0;
  LOBYTE(g_1ABD1A800) = 0;
  LOBYTE(g_1ABD1D840) = 0;
  LOBYTE(g_1ABD20880) = 0;
  LOBYTE(g_1ABD238C0) = 0;
  LOBYTE(g_1ABD26900) = 0;
  LOBYTE(g_1ABD29940) = 0;
  LOBYTE(g_1ABD2C980) = 0;
  LOBYTE(g_1ABD2F9C0) = 0;
  LOBYTE(g_1ABD32A00) = 0;
  LOBYTE(g_1ABD35A40) = 0;
  LOBYTE(g_1ABD38A80) = 0;
  LOBYTE(g_1ABD3BAC0) = 0;
  LOBYTE(g_1ABD3EB00) = 0;
  LOBYTE(g_1ABD41B40) = 0;
  LOBYTE(g_1ABD44B80) = 0;
  LOBYTE(g_1ABD47BC0) = 0;
  v0 = crt_chdir("buildblock");
  v1 = sub_14023A198("*.sbl", (__int64)FindData);
  v2 = 0;
  g_18622DFE0 = 0;
  v3 = v1;
  v4 = 0;
  if ( (_DWORD)v1 != -1 )
  {
    do
    {
      if ( v4 >= 1024 )
        break;
      if ( (FindData[0] & 0x10) == 0 )
      {
        v5 = &FindData[36];
        v6 = &dword_140404A6C[16 * (__int64)v4 + 293119326];
        do
        {
          v7 = *v5++;
          *(_BYTE *)v6 = v7;
          v6 = (unsigned int *)((char *)v6 + 1);
        }
        while ( v7 );
        ++g_18622DFE0;
      }
      v8 = sub_14023A5C4(v3, (__int64)FindData);
      v4 = g_18622DFE0;
    }
    while ( v8 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v4 + 293119326]) = 0;
  sub_140239CCC(v3);
  sub_14023AE00(
    (unsigned __int64)&g_18622DFE4,
    (int)g_18622DFE0,
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  v9 = g_18622DFE0;
  v10 = 0;
  if ( (int)g_18622DFE0 > 0 )
  {
    v11 = 0;
    do
    {
      v12 = 0;
      v13 = (char *)&dword_140404A6C[v11 + 293119326] + 1;
      do
      {
        v14 = *(v13 - 1);
        if ( !v14 || v14 == 46 )
          break;
        if ( !*v13 || *v13 == 46 )
        {
          ++v12;
          break;
        }
        v15 = v13[1];
        if ( !v15 || v15 == 46 )
        {
          v12 += 2;
          break;
        }
        v16 = v13[2];
        if ( !v16 || v16 == 46 )
        {
          v12 += 3;
          break;
        }
        v12 += 4;
        v13 += 4;
      }
      while ( v12 < 64 );
      ++v10;
      *((_BYTE *)&dword_140404A6C[v11 + 293119326] + v12) = 0;
      v11 += 16;
      v9 = g_18622DFE0;
    }
    while ( v10 < (int)g_18622DFE0 );
  }
  if ( !v0 )
  {
    crt_chdir("..");
    v9 = g_18622DFE0;
  }
  if ( v9 > 64 )
    v9 = 64;
  g_18622DFE0 = v9;
  if ( v9 > 0 )
  {
    do
    {
      sub_140027230((     char *)&dword_140404A6C[16 * (__int64)v2 + 293119326], v2);
      ++v2;
    }
    while ( v2 < (int)g_18622DFE0 );
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v18
#undef FindData
#undef v20

//----- (0000000140027230) ----------------------------------------------------
__int64            sub_140027230(     char *a1, int a2)
{
  __int64 v2;
       char *v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char *v7;
  char v8;
  __int64 v9;
  __int64 v10;
  unsigned int *v11;
  unsigned int *v12;
  signed int v13;
  __int64 v14;
  signed int v15;
  char *v16;
  signed int v17;
  __int64 v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140027230[144];
#define v20 (*(__int64 (*))(void *)(sr_frame_140027230 + 0)) /* [rsp+0h] */
#define v21 (*(int (*))(void *)(sr_frame_140027230 + 32)) /* [rsp+20h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_140027230 + 40)) /* [rsp+28h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140027230 + 48)) /* [rsp+30h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140027230 + 56)) /* [rsp+38h] */
#define v25 (*(char (*)[64])(void *)(sr_frame_140027230 + 64)) /* [rsp+40h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140027230 + 128)) /* [rsp+80h] */

  v2 = a2;
  v3 = a1;
  crt_sprintf(v25, "buildblock/%s.sbl", a1);
  v4 = crt_fopen(v25, "rb");
  v5 = v4;
  if ( v4 )
  {
    (*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(&v21, 4, 1, v4);
    if ( v21 == 1 )
    {
      v6 = 3088 * v2;
      v7 = (char *)&g_1ABC89C00 + 12352 * v2 - (_QWORD)v3;
      do
      {
        v8 = *v3;
        v3[(_QWORD)v7] = *v3;
        ++v3;
      }
      while ( v8 );
      v9 = 0;
      v24 = 16;
      v10 = 0;
      v23 = 0;
      v22 = 0;
      v11 = &dword_140404A6C[v6 + 451024002];
      v12 = &dword_140404A6C[v6 + 451024083];
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          v12 - 94,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          v12 - 93,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          v12 - 92,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          v12 - 91,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          v12 - 90,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          v12 - 88,
          4,
          1,
          v5);
        v13 = 0;
        if ( (int)*(v11 - 7) > 0 )
        {
          do
          {
            v14 = v6 * 4 + 12 * (v10 + v13);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C5C + v14,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C60 + v14,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C64 + v14,
              4,
              1,
              v5);
            ++v13;
          }
          while ( v13 < (int)*(v11 - 7) );
          v9 = v23;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          v12 - 81,
          4,
          1,
          v5);
        v15 = 0;
        if ( (int)*v11 > 0 )
        {
          do
          {
            v16 = (char *)v12 + 20LL * v15 - (_QWORD)&g_1ABC89DB8;
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C78 + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C7C + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C80 + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C84 + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C88 + (_QWORD)v16,
              4,
              1,
              v5);
            ++v15;
          }
          while ( v15 < (int)*v11 );
          v10 = v22;
          v9 = v23;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(v12, 4, 1, v5);
        v17 = 0;
        if ( (int)v11[81] > 0 )
        {
          do
          {
            v18 = v6 * 4 + 24 * (v9 + v17);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DBC + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DC4 + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DC8 + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DCC + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DD0 + v18,
              4,
              1,
              v5);
            ++v17;
          }
          while ( v17 < (int)v11[81] );
          v10 = v22;
        }
        v10 += 64;
        v9 += 32;
        v12 += 192;
        v22 = v10;
        v11 += 192;
        v23 = v9;
        --v24;
      }
      while ( v24 );
    }
    crt_fclose(v5);
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

//----- (0000000140027690) ----------------------------------------------------
__int64 sub_140027690()
{
  unsigned int *v0;
  __int64 result;
  int i;
  int v3;
       char *v4;

  v0 = &g_1AFFDFF58;
  result = (__int64)crt_memset((void *)(uintptr_t)(&g_1AFFDFF58), 0, 0x100u);
  for ( i = 0; i < (int)g_1AFFDFB54; ++v0 )
  {
    v3 = 2;
    v4 = (     char *)&dword_140404A6C[16 * (__int64)i + 468675643];
    do
    {
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451017797]) )
        *v0 = v3 - 2;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451020885]) )
        *v0 = v3 - 1;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451023973]) )
        *v0 = v3;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451027061]) )
        *v0 = v3 + 1;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451030149]) )
        *v0 = v3 + 2;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451033237]) )
        *v0 = v3 + 3;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451036325]) )
        *v0 = v3 + 4;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451039413]) )
        *v0 = v3 + 5;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451042501]) )
        *v0 = v3 + 6;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451045589]) )
        *v0 = v3 + 7;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451048677]) )
        *v0 = v3 + 8;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451051765]) )
        *v0 = v3 + 9;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451054853]) )
        *v0 = v3 + 10;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451057941]) )
        *v0 = v3 + 11;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451061029]) )
        *v0 = v3 + 12;
      if ( !strcmp_sr(v4, (     char *)&dword_140404A6C[3088 * v3 + 451064117]) )
        *v0 = v3 + 13;
      v3 += 16;
      result = (unsigned int)(v3 - 2);
    }
    while ( (int)result < 64 );
    ++i;
  }
  return result;
}

//----- (0000000140027A60) ----------------------------------------------------
__int64 sub_140027A60()
{
  unsigned int *v0;
  __int64 result;
  int v2;
  int v3;
  signed int v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int v8;

  v0 = &g_1AFFF0F5C;
  crt_memset((void *)(uintptr_t)(&g_1AFFF0F5C), 0, 0x1000u);
  result = g_1AFFE0F58;
  v2 = 0;
  if ( (int)g_1AFFE0F58 > 0 )
  {
    v3 = g_181676080;
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &g_1812C2080;
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468676924];
          do
          {
            v7 = *((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468676924]));
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 948;
        }
        while ( v4 < v3 );
        result = g_1AFFE0F58;
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

//----- (0000000140027B40) ----------------------------------------------------
__int64 sub_140027B40()
{
  unsigned int *v0;
  __int64 result;
  int v2;
  int v3;
  signed int v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int v8;

  v0 = &g_1AFFDEB54;
  crt_memset((void *)(uintptr_t)(&g_1AFFDEB54), 0, 0x1000u);
  result = g_1AFFCEB50;
  v2 = 0;
  if ( (int)g_1AFFCEB50 > 0 )
  {
    v3 = g_14500A700;
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &g_145098C00;
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468658234];
          do
          {
            v7 = *((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468658234]));
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 58;
        }
        while ( v4 < v3 );
        result = g_1AFFCEB50;
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

//----- (0000000140027C20) ----------------------------------------------------
__int64 sub_140027C20()
{
  unsigned int *v0;
  __int64 result;
  int v2;
  int v3;
  signed int v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int v8;

  v0 = &g_1AFFCDB50;
  crt_memset((void *)(uintptr_t)(&g_1AFFCDB50), 0, 0x400u);
  result = g_1AFFC9B4C;
  v2 = 0;
  if ( (int)g_1AFFC9B4C > 0 )
  {
    v3 = g_1A4CFF560;
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &g_1A4CFFCF8;
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468653113];
          do
          {
            v7 = *((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468653113]));
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 46;
        }
        while ( v4 < v3 );
        result = g_1AFFC9B4C;
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

//----- (0000000140028790) ----------------------------------------------------
__int64            sub_140028790(     char *a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int *v7;
  __int64 v8;
  unsigned int *v9;
  signed int v10;
  __int64 v11;
  signed int v12;
  __int64 v13;
  signed int v14;
  __int64 v15;
  __int64 v16;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140028790[160];
#define v18 (*(__int64 (*))(void *)(sr_frame_140028790 + 0)) /* [rsp+0h] */
#define v19 (*(int (*))(void *)(sr_frame_140028790 + 32)) /* [rsp+20h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140028790 + 40)) /* [rsp+28h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_140028790 + 48)) /* [rsp+30h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_140028790 + 56)) /* [rsp+38h] */
#define v23 (*(unsigned int * (*))(void *)(sr_frame_140028790 + 64)) /* [rsp+40h] */
#define v24 (*(char (*)[64])(void *)(sr_frame_140028790 + 80)) /* [rsp+50h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140028790 + 144)) /* [rsp+90h] */

  v2 = a2;
  crt_sprintf(v24, "buildblock/%s.sbl", a1);
  v3 = crt_fopen(v24, "wb");
  v4 = v3;
  if ( v3 )
  {
    v19 = 1;
    (*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE000)(&v19, 4, 1, v3);
    v5 = 12352 * v2;
    v6 = 0;
    v21 = 0;
    v20 = 0;
    v22 = 16;
    v7 = &dword_140404A6C[3088 * v2 + 451024002];
    v8 = 3088 * v2;
    do
    {
      v9 = &dword_140404A6C[v8 + 451024083];
      v23 = v9;
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        v9 - 94,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        v9 - 93,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        v9 - 92,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        v9 - 91,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        v9 - 90,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        v9 - 88,
        4,
        1,
        v4,
        v19);
      v10 = 0;
      if ( (int)*(v7 - 7) > 0 )
      {
        do
        {
          v11 = v5 + 12 * (v6 + v10);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C5C + v11,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C60 + v11,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C64 + v11,
            4,
            1,
            v4,
            v19);
          ++v10;
        }
        while ( v10 < (int)*(v7 - 7) );
        v9 = v23;
      }
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        v9 - 81,
        4,
        1,
        v4,
        v19);
      v12 = 0;
      if ( (int)*v7 > 0 )
      {
        do
        {
          v13 = v8 * 4 + 20LL * v12;
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C78 + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C7C + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C80 + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C84 + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C88 + v13,
            4,
            1,
            v4,
            v19);
          ++v12;
        }
        while ( v12 < (int)*v7 );
        v6 = v20;
      }
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        v9,
        4,
        1,
        v4,
        v19);
      v14 = 0;
      if ( (int)v7[81] > 0 )
      {
        v15 = v21;
        do
        {
          v16 = v5 + 24 * (v15 + v14);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DBC + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DC4 + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DC8 + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DCC + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DD0 + v16,
            4,
            1,
            v4,
            v19);
          ++v14;
        }
        while ( v14 < (int)v7[81] );
        v6 = v20;
      }
      v21 += 32;
      v6 += 64;
      v8 += 192;
      v7 += 192;
      v20 = v6;
      --v22;
    }
    while ( v22 );
    crt_fclose(v4);
  }
  return 0; /* the function has no caller */
}
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

//----- (0000000140028BD0) ----------------------------------------------------
__int64 sub_140028BD0()
{
  unsigned int *v0;
  signed int v1;
  signed int v2;
  int v3;
  signed int v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int v8;
  unsigned int *v9;
  signed int v10;
  signed int v11;
  int v12;
  signed int v13;
       char *v14;
  unsigned int *v15;
  signed int v16;
  signed int v17;
  int v18;
  signed int v19;
  unsigned int *v20;
  unsigned int *v21;
  int v22;
  int v23;
  signed int v24;
  signed int v25;
  __int64 result;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  unsigned int *v33;
  _WORD *v34;
  unsigned int v35;
  unsigned int v36;
  __int16 v37;
  __int16 v38;
  __int16 v39;
  __int16 v40;
  __int16 v41;
  __int16 v42;
  __int16 v43;
  __int16 v44;
  __int16 v45;
  __int16 v46;
  __int16 v47;
  __int16 v48;
  __int16 v49;
  int v50;
  unsigned int v51;

  v0 = &g_1AFFCDB50;
  crt_memset((void *)(uintptr_t)(&g_1AFFCDB50), 0, 0x400u);
  v1 = g_1AFFC9B4C;
  v2 = 0;
  if ( (int)g_1AFFC9B4C > 0 )
  {
    v3 = g_1A4CFF560;
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &g_1A4CFFCF8;
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468653113];
          do
          {
            v7 = *((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468653113]));
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 46;
        }
        while ( v4 < v3 );
        v1 = g_1AFFC9B4C;
      }
      ++v2;
      ++v0;
    }
    while ( v2 < v1 );
  }
  v9 = &g_1AFFDEB54;
  crt_memset((void *)(uintptr_t)(&g_1AFFDEB54), 0, 0x1000u);
  v10 = g_1AFFCEB50;
  v11 = 0;
  if ( (int)g_1AFFCEB50 > 0 )
  {
    v12 = g_14500A700;
    do
    {
      v13 = 0;
      if ( v12 > 0 )
      {
        v14 = (     char *)&g_145098C00;
        do
        {
          if ( !strcmp_sr((     char *)&dword_140404A6C[16 * (__int64)v11 + 468658234], v14) )
            *v9 = v13;
          ++v13;
          v14 += 232;
        }
        while ( v13 < v12 );
        v10 = g_1AFFCEB50;
      }
      ++v11;
      ++v9;
    }
    while ( v11 < v10 );
  }
  sub_140027690();
  v15 = &g_1AFFF0F5C;
  crt_memset((void *)(uintptr_t)(&g_1AFFF0F5C), 0, 0x1000u);
  v16 = g_1AFFE0F58;
  v17 = 0;
  if ( (int)g_1AFFE0F58 > 0 )
  {
    v18 = g_181676080;
    do
    {
      v19 = 0;
      if ( v18 > 0 )
      {
        v20 = &g_1812C2080;
        do
        {
          v21 = &dword_140404A6C[16 * (__int64)v17 + 468676924];
          do
          {
            v22 = *((unsigned __int8 *)v21 + ((char *)v20 - (char *)&dword_140404A6C[16 * (__int64)v17 + 468676924]));
            v23 = *(unsigned __int8 *)v21 - v22;
            if ( v23 )
              break;
            v21 = (unsigned int *)((char *)v21 + 1);
          }
          while ( v22 );
          if ( !v23 )
            *v15 = v19;
          ++v19;
          v20 += 948;
        }
        while ( v19 < v18 );
        v16 = g_1AFFE0F58;
      }
      ++v17;
      ++v15;
    }
    while ( v17 < v16 );
  }
  v24 = g_1AD2C94E8;
  v25 = 0;
  result = g_1AD2C94E0;
  v27 = g_1AD2C94E4;
  g_1AE1C94F8 = g_1AD2C94E0;
  g_1AE1C94FC = g_1AD2C94E4;
  g_1AE1C9500 = g_1AD2C94E8;
  if ( (int)g_1AD2C94E8 > 0 )
  {
    v28 = 0;
    do
    {
      v29 = 0;
      v30 = 0;
      if ( v27 >= 0 )
      {
        do
        {
          v31 = 0;
          if ( (int)result >= 0 )
          {
            v32 = 960 * (v28 + v30);
            v33 = &dword_140404A6C[v32 + 460788394];
            v34 = (_WORD *)&dword_140404A6C[v32 + 460788399] + 1;
            do
            {
              v35 = *(v33 - 3932166);
              *v33 = v35;
              if ( (v35 & 0xE0000000) == 0x80000000 )
                *v33 = (HIBYTE(v35) & 3) + (dword_140404A6C[(v35 & 0x3FF) + 468674618] | 0x80000000);
              v36 = *(v33 - 3932165);
              v33[1] = v36;
              if ( (v36 & 0xE0000000) == 0x80000000 )
                v33[1] = (HIBYTE(v36) & 3) + (dword_140404A6C[(v36 & 0x3FF) + 468674618] | 0x80000000);
              *(v33 - 1) = dword_140404A6C[*(v33 - 3932167) + 468675899];
              v33[2] = *(v33 - 3932164);
              v33[3] = *(v33 - 3932163);
              v33[4] = *(v33 - 3932162);
              v37 = *(v34 - 7864332);
              *(v34 - 1) = *(v34 - 7864333) & 0xFF00
                         | LOWORD(dword_140404A6C[(unsigned __int8)*(v34 - 7864333) + 468657209]);
              v38 = v37 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v37 + 468657209]);
              v39 = *(v34 - 7864331);
              *v34 = v38;
              v40 = v39 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v39 + 468657209]);
              v41 = *(v34 - 7864330);
              v34[1] = v40;
              v42 = v41 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v41 + 468657209]);
              v43 = *(v34 - 7864329);
              v34[2] = v42;
              v44 = v43 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v43 + 468657209]);
              v45 = *(v34 - 7864328);
              v34[3] = v44;
              v46 = v45 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v45 + 468657209]);
              v47 = *(v34 - 7864327);
              v34[4] = v46;
              v48 = v47 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v47 + 468657209]);
              v49 = *(v34 - 7864326);
              v34[5] = v48;
              v34[6] = v49 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)v49 + 468657209]);
              v34[7] = dword_140404A6C[(unsigned __int8)*(v34 - 7864325) + 468657209];
              v34[8] = dword_140404A6C[(unsigned __int8)*(v34 - 7864324) + 468657209];
              v34[9] = dword_140404A6C[(unsigned __int8)*(v34 - 7864323) + 468657209];
              v34[10] = dword_140404A6C[(unsigned __int8)*(v34 - 7864322) + 468657209];
              v34[11] = dword_140404A6C[(unsigned __int8)*(v34 - 7864321) + 468657209];
              v34[12] = dword_140404A6C[(unsigned __int8)*(v34 - 7864320) + 468657209];
              v34[13] = dword_140404A6C[(unsigned __int8)*(v34 - 7864319) + 468657209];
              v34[14] = dword_140404A6C[(unsigned __int8)*(v34 - 7864318) + 468657209];
              v50 = *(v33 - 3932153);
              if ( v50 )
                v51 = dword_140404A6C[(v50 & 0x3FF) + 468693308] | v50 & 0x3000000 | 0x40000000;
              else
                v51 = 0;
              v33[13] = v51;
              ++v31;
              result = g_1AE1C94F8;
              v33 += 15;
              v34 += 30;
            }
            while ( v31 <= (int)g_1AE1C94F8 );
            v27 = g_1AE1C94FC;
          }
          ++v29;
          ++v30;
        }
        while ( v29 <= v27 );
        v24 = g_1AE1C9500;
      }
      ++v25;
      v28 += 64;
    }
    while ( v25 < v24 );
  }
  return result;
}

//----- (0000000140029120) ----------------------------------------------------
__int64 sub_140029120()
{
  int v0;
  int v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned int *v11;
  __int64 v12;
  _WORD *v13;
  unsigned int *v14;
  unsigned int *v15;
  __int64 v16;
  unsigned int v17;
  __int64 result;
  signed int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  __int64 i;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  int v36;
  unsigned int v37;
  unsigned int *v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  unsigned int *v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  unsigned int *v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  __int64 v62;
  int v63;
  unsigned int v64;
  unsigned int *v65;
  __int64 v66;
  __int64 v67;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140029120[128];
#define v68 (*(__int64 (*))(void *)(sr_frame_140029120 + 0)) /* [rsp+0h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_140029120 + 8)) /* [rsp+8h] */
#define v70 (*(int (*))(void *)(sr_frame_140029120 + 96)) /* [rsp+60h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_140029120 + 112)) /* [rsp+70h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_140029120 + 120)) /* [rsp+78h] */

  v0 = g_1AE1C9500;
  v1 = g_1AE1C94FC;
  v2 = 0;
  if ( (int)g_1AE1C9500 > 0 )
  {
    v3 = g_1AE1C94F8;
    v4 = 0;
    do
    {
      v5 = 0;
      if ( v1 >= 0 )
      {
        v6 = (unsigned int)(v1 + 1);
        do
        {
          v7 = 0;
          if ( v3 >= 0 )
          {
            v8 = v0 - 1;
            v9 = v5 + (v4 << 6);
            v10 = 960 * v9;
            v11 = &dword_140404A6C[1216 * v9 + 451221710];
            v12 = (unsigned int)(v3 + 1);
            v13 = (_WORD *)&dword_140404A6C[451221717 + 1216 * v9];
            v14 = &dword_140404A6C[v10 + 460788395];
            v15 = &dword_140404A6C[v10 + 460788400];
            do
            {
              *(v11 - 1) = *(v14 - 1);
              *v11 = *v14;
              *(v13 - 2) = *((_WORD *)v15 - 2);
              *(v13 - 1) = *((_WORD *)v15 - 1);
              *v13 = *(_WORD *)v15;
              v13[1] = *((_WORD *)v15 + 1);
              v13[2] = *((_WORD *)v15 + 2);
              v13[3] = *((_WORD *)v15 + 3);
              v13[4] = *((_WORD *)v15 + 4);
              v13[5] = *((_WORD *)v15 + 5);
              v13[6] = *((_WORD *)v15 + 6);
              v13[7] = *((_WORD *)v15 + 7);
              v13[8] = *((_WORD *)v15 + 8);
              v13[9] = *((_WORD *)v15 + 9);
              v13[10] = *((_WORD *)v15 + 10);
              v13[11] = *((_WORD *)v15 + 11);
              v13[12] = *((_WORD *)v15 + 12);
              v13[13] = *((_WORD *)v15 + 13);
              *((_QWORD *)v11 + 2) = v14[3];
              if ( v2 >= v8
                || (v16 = 15 * (v7 + ((v5 + ((v4 + 1) << 6)) << 6)), !dword_140404A6C[v16 + 460788394])
                || !dword_140404A6C[v16 + 460788395]
                || dword_140404A6C[v16 + 460788398] )
              {
                v11[5] = 1;
              }
              ++v7;
              v11[1] = *(v14 - 2);
              v15 += 15;
              v13 += 38;
              v11[2] = v14[1];
              v11[3] = v14[2];
              v17 = v14[12];
              v14 += 15;
              v11[17] = v17;
              v11 += 19;
              --v12;
            }
            while ( v12 );
            v0 = g_1AE1C9500;
          }
          ++v5;
          --v6;
        }
        while ( v6 );
        v1 = g_1AE1C94FC;
      }
      ++v2;
      ++v4;
    }
    while ( v2 < v0 );
  }
  result = 0;
  v70 = 0;
  if ( v0 > 0 )
  {
    v19 = g_1A4CF0940;
    v20 = 0;
    v69 = 0;
    do
    {
      v21 = 0;
      v72 = 0;
      if ( v1 >= 0 )
      {
        v22 = g_1AE1C94F8;
        v23 = (unsigned int)(v1 + 1);
        v68 = v23;
        do
        {
          v24 = 0;
          if ( v22 >= 0 )
          {
            v25 = (unsigned int)(v22 + 1);
            v26 = v21 + (v20 << 6);
            v71 = v25;
            v27 = 2432 * v26;
            v28 = 1216 * v26;
            do
            {
              if ( dword_140404A6C[v28 + 451221709] == 0x40000000 )
              {
                v29 = dword_140404A6C[v28 + 451221710];
                if ( v29 == 0xFFFF
                  || !v29
                  || dword_140404A6C[58 * (unsigned __int16)v29 + 20074650]
                  || (v29 & 0xC0000000) == 0xC0000000 )
                {
                  v30 = 1;
                  for ( i = 1; i < 5; i += 4 )
                  {
                    switch ( i )
                    {
                      case 1LL:
                        v32 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                        break;
                      case 2LL:
                        v32 = dword_140404A6C[v28 + 451221713];
                        break;
                      case 3LL:
                        v32 = dword_140404A6C[v28 + 451221712];
                        break;
                      default:
                        v32 = dword_140404A6C[v28 + 451221732];
                        break;
                    }
                    v33 = v32 - 3;
                    if ( v32 - 3 <= 0xC )
                    {
                      v34 = dword_140404A6C[v28 + 451221711];
                      v35 = 2 * (v27 + i) + 1809100220;
                      v36 = 0;
                      v37 = *(unsigned __int16 *)((char *)&g_1ABD4ADBC + 2 * (v27 + i));
                      v38 = &g_1A4CF0948;
                      v39 = 0;
                      do
                      {
                        if ( v36 >= v19 )
                          break;
                        if ( *(v38 - 1) == v37 && *v38 == v34 && v38[1] == v33 )
                          goto LABEL_46;
                        ++v36;
                        ++v39;
                        v38 += 3;
                      }
                      while ( (__int64)v38 < (__int64)&g_1A4CFC948 );
                      if ( v36 < 4096 )
                      {
                        v40 = 3 * v39;
                        v19 = v36 + 1;
                        dword_140404A6C[v40 + 421769142] = v37;
                        dword_140404A6C[v40 + 421769143] = v34;
                        dword_140404A6C[v40 + 421769144] = v33;
                        g_1A4CF0940 = v36 + 1;
                      }
                      else
                      {
                        LOWORD(v36) = 0;
                      }
LABEL_46:
                      *(_WORD *)((char *)&g_1ABD4ADBC + 2 * (v27 + i)) = v36 + 0x8000;
                    }
                    if ( v30 )
                    {
                      if ( v30 == 1 )
                      {
                        v41 = dword_140404A6C[v28 + 451221713];
                      }
                      else if ( v30 == 2 )
                      {
                        v41 = dword_140404A6C[v28 + 451221712];
                      }
                      else
                      {
                        v41 = dword_140404A6C[v28 + 451221732];
                      }
                    }
                    else
                    {
                      v41 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    v42 = v41 - 3;
                    if ( v41 - 3 <= 0xC )
                    {
                      v43 = dword_140404A6C[v28 + 451221711];
                      v44 = 2 * (v27 + i) + 1809100222;
                      v45 = 0;
                      v46 = *(unsigned __int16 *)((char *)&g_1ABD4ADBC + 2 + 2 * (v27 + i));
                      v47 = &g_1A4CF0948;
                      v48 = 0;
                      do
                      {
                        if ( v45 >= v19 )
                          break;
                        if ( *(v47 - 1) == v46 && *v47 == v43 && v47[1] == v42 )
                          goto LABEL_64;
                        ++v45;
                        ++v48;
                        v47 += 3;
                      }
                      while ( (__int64)v47 < (__int64)&g_1A4CFC948 );
                      if ( v45 < 4096 )
                      {
                        v49 = 3 * v48;
                        dword_140404A6C[v49 + 421769142] = v46;
                        v19 = v45 + 1;
                        dword_140404A6C[v49 + 421769143] = v43;
                        dword_140404A6C[v49 + 421769144] = v42;
                        g_1A4CF0940 = v45 + 1;
                      }
                      else
                      {
                        LOWORD(v45) = 0;
                      }
LABEL_64:
                      *(_WORD *)((char *)&g_1ABD4ADBC + 2 + 2 * (v27 + i)) = v45 + 0x8000;
                    }
                    if ( v30 == -1 )
                    {
                      v50 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    else if ( v30 )
                    {
                      if ( v30 == 1 )
                        v50 = dword_140404A6C[v28 + 451221712];
                      else
                        v50 = dword_140404A6C[v28 + 451221732];
                    }
                    else
                    {
                      v50 = dword_140404A6C[v28 + 451221713];
                    }
                    v51 = v50 - 3;
                    if ( v50 - 3 <= 0xC )
                    {
                      v52 = dword_140404A6C[v28 + 451221711];
                      v53 = 2 * (v27 + i) + 1809100224;
                      v54 = 0;
                      v55 = *(unsigned __int16 *)((char *)&g_1ABD4ADC0 + 2 * (v27 + i));
                      v56 = &g_1A4CF0948;
                      v57 = 0;
                      do
                      {
                        if ( v54 >= v19 )
                          break;
                        if ( *(v56 - 1) == v55 && *v56 == v52 && v56[1] == v51 )
                          goto LABEL_82;
                        ++v54;
                        ++v57;
                        v56 += 3;
                      }
                      while ( (__int64)v56 < (__int64)&g_1A4CFC948 );
                      if ( v54 < 4096 )
                      {
                        v58 = 3 * v57;
                        dword_140404A6C[v58 + 421769142] = v55;
                        v19 = v54 + 1;
                        dword_140404A6C[v58 + 421769143] = v52;
                        dword_140404A6C[v58 + 421769144] = v51;
                        g_1A4CF0940 = v54 + 1;
                      }
                      else
                      {
                        LOWORD(v54) = 0;
                      }
LABEL_82:
                      *(_WORD *)((char *)&g_1ABD4ADC0 + 2 * (v27 + i)) = v54 + 0x8000;
                    }
                    if ( v30 == -2 )
                    {
                      v59 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    else if ( v30 == -1 )
                    {
                      v59 = dword_140404A6C[v28 + 451221713];
                    }
                    else if ( v30 )
                    {
                      v59 = dword_140404A6C[v28 + 451221732];
                    }
                    else
                    {
                      v59 = dword_140404A6C[v28 + 451221712];
                    }
                    v60 = v59 - 3;
                    if ( v59 - 3 <= 0xC )
                    {
                      v61 = dword_140404A6C[v28 + 451221711];
                      v62 = 2 * (v27 + i) + 1809100226;
                      v63 = 0;
                      v64 = *(unsigned __int16 *)((char *)&g_1ABD4ADC0 + 2 + 2 * (v27 + i));
                      v65 = &g_1A4CF0948;
                      v66 = 0;
                      do
                      {
                        if ( v63 >= v19 )
                          break;
                        if ( *(v65 - 1) == v64 && *v65 == v61 && v65[1] == v60 )
                          goto LABEL_100;
                        ++v63;
                        ++v66;
                        v65 += 3;
                      }
                      while ( (__int64)v65 < (__int64)&g_1A4CFC948 );
                      if ( v63 < 4096 )
                      {
                        v67 = 3 * v66;
                        dword_140404A6C[v67 + 421769142] = v64;
                        v19 = v63 + 1;
                        dword_140404A6C[v67 + 421769143] = v61;
                        dword_140404A6C[v67 + 421769144] = v60;
                        g_1A4CF0940 = v63 + 1;
                      }
                      else
                      {
                        LOWORD(v63) = 0;
                      }
LABEL_100:
                      *(_WORD *)((char *)&g_1ABD4ADC0 + 2 + 2 * (v27 + i)) = v63 + 0x8000;
                    }
                    v30 += 4;
                  }
                  v25 = v71;
                }
              }
              ++v24;
              v28 += 19;
              v27 += 38;
              v71 = --v25;
            }
            while ( v25 );
            v21 = v72;
            v23 = v68;
            v20 = v69;
            v22 = g_1AE1C94F8;
          }
          ++v21;
          --v23;
          v72 = v21;
          v68 = v23;
        }
        while ( v23 );
        LODWORD(result) = v70;
        v1 = g_1AE1C94FC;
      }
      result = (unsigned int)(result + 1);
      ++v20;
      v70 = result;
      v69 = v20;
    }
    while ( (int)result < (int)g_1AE1C9500 );
  }
  return result;
}
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72

//----- (0000000140037DE0) ----------------------------------------------------
void            sub_140037DE0(signed int a1, int a2, unsigned int a3, unsigned int a4, unsigned __int16 a5)
{
  __int64 v8;
  __int64 v9;
  signed int v10;
  signed int v11;
  signed int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if ( (unsigned int)a1 <= 3 && a2 >= 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v8 = a1;
    v9 = 263004LL * a1;
    v10 = (unsigned int)a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 && (int)(a3 >> 6) < (int)dword_140404A6C[v9 + 111579651] )
    {
      v12 = dword_140404A6C[v9 + 111579652];
      if ( (int)(a4 >> 6) < v12 )
      {
        v13 = 4LL * (int)(v10 + v11 * ((a4 >> 6) + (a3 >> 6) * v12));
        LODWORD(v14) = *(_DWORD *)(v13 + *(_QWORD *)&dword_140404A6C[2 * v8 + 421506981]);
        if ( (_DWORD)v14 != -1
          || (v14 = (int)world_grid_block_count,
              ++world_grid_block_count,
              *(_DWORD *)(v13 + *(_QWORD *)&dword_140404A6C[2 * v8 + 421506981]) = v14,
              crt_memset((void *)(uintptr_t)(&dword_140404A6C[512 * v14 + 421506990]), 0xFFu, 0x800u),
              (_DWORD)v14 != -1) )
        {
          v15 = ((__int64)(int)v14 << 9) + (((unsigned int)a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7));
          LODWORD(v16) = dword_140404A6C[v15 + 421506990];
          if ( (_DWORD)v16 != -1 )
            goto LABEL_15;
          v16 = (int)world_grid_leaf_count;
          if ( (int)world_grid_leaf_count < 2048 )
          {
            v17 = 512;
            ++world_grid_leaf_count;
            dword_140404A6C[v15 + 421506990] = v16;
            v18 = 67584 * v16;
            do
            {
              v18 += 132;
              *(_DWORD *)(v18 + g_1A4CF0928 - 132) = 0;
              --v17;
            }
            while ( v17 );
            if ( (_DWORD)v16 != -1 )
            {
LABEL_15:
              v19 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)) + ((__int64)(int)v16 << 9);
              v20 = *(int *)(132 * v19 + g_1A4CF0928);
              if ( (int)v20 < 32 )
              {
                *(_DWORD *)(g_1A4CF0928 + 4 * (v20 + 33 * v19) + 4) = a5;
                ++*(_DWORD *)(132 * v19 + g_1A4CF0928);
              }
            }
          }
        }
      }
    }
  }
}

//----- (000000014003ED30) ----------------------------------------------------
_BOOL8            sub_14003ED30(
        float *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int *v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  int v38;
  float v39;
  float v40;
  int v41;
  int v42;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003ED30[256];
#define v44 (*(__int64 (*))(void *)(sr_frame_14003ED30 + 0)) /* [rsp+58h] */
#define v45 (*(float (*))(void *)(sr_frame_14003ED30 + 8)) /* [rsp+60h] */
#define v46 (*(float (*))(void *)(sr_frame_14003ED30 + 16)) /* [rsp+68h] */
#define v47 (*(float (*))(void *)(sr_frame_14003ED30 + 20)) /* [rsp+6Ch] */
#define v48 (*(float (*))(void *)(sr_frame_14003ED30 + 24)) /* [rsp+70h] */
#define v49 (*(float (*)[4])(void *)(sr_frame_14003ED30 + 32)) /* [rsp+78h] */
#define v50 (*(float (*)[4])(void *)(sr_frame_14003ED30 + 48)) /* [rsp+88h] */
#define v51 (*(float (*)[6])(void *)(sr_frame_14003ED30 + 64)) /* [rsp+98h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_14003ED30 + 248)) /* [rsp+150h] */

  v9 = (int)a7;
  v12 = 15432LL * (int)a7;
  if ( fabs(*a4 - *(float *)&dword_140404A6C[v12 + 358297503]) > 64.0 )
    return 0;
  if ( fabs(a4[2] - *(float *)&dword_140404A6C[v12 + 358297505]) > 64.0 )
    return 0;
  if ( fabs(a4[1] - *(float *)&dword_140404A6C[v12 + 358297504]) > 64.0 )
    return 0;
  v14 = (int)a8;
  *a3 = 65536.0;
  v15 = v14 + 15432 * v9;
  v16 = (int)dword_140404A6C[v15 + 358300580];
  if ( (int)v16 >= (int)dword_140404A6C[v15 + 358300584] )
    return 0;
  v17 = 5144 * v9;
  v52 = 5144 * v9;
  v18 = &dword_140404A6C[10288 * v9 + 358300589 + 5144 * v9 + 2 * v16 + v16];
  do
  {
    v19 = v17 + (int)*v18;
    v20 = *(float *)&dword_140404A6C[3 * v17 + 358297508 + 3 * (int)*(v18 - 1)];
    v21 = *(float *)&dword_140404A6C[3 * v17 + 358297509 + 3 * (int)*(v18 - 1)];
    LODWORD(v50[0]) = dword_140404A6C[3 * v17 + 358297507 + 3 * (int)*(v18 - 1)];
    v50[1] = v20;
    v22 = *(float *)&dword_140404A6C[3 * v19 + 358297509];
    v23 = *(float *)&dword_140404A6C[3 * v19 + 358297507];
    v24 = *(float *)&dword_140404A6C[3 * v19 + 358297508];
    v25 = (int)v18[1];
    v49[2] = v22;
    v26 = v17 + v25;
    v27 = v22 - v21;
    v50[2] = v21;
    v49[1] = v24;
    v28 = v24 - v20;
    v49[0] = v23;
    v29 = v23 - v50[0];
    v30 = *(float *)&dword_140404A6C[3 * v26 + 358297509];
    v31 = *(float *)&dword_140404A6C[3 * v26 + 358297507];
    v47 = *(float *)&dword_140404A6C[3 * v26 + 358297508];
    v48 = v30;
    v32 = v30 - v21;
    v46 = v31;
    v33 = v31 - v50[0];
    v34 = (float)((float)(v47 - v20) * v27) - (float)(v32 * v28);
    v35 = (float)(v32 * v29) - (float)(v33 * v27);
    v36 = (float)(v33 * v28) - (float)((float)(v47 - v20) * v29);
    v37 = fsqrt((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
    if ( v37 == 0.0 )
    {
      v44 = 0;
      v45 = 0.0;
    }
    else
    {
      *(float *)&v44 = v34 * (float)(1.0 / v37);
      *((float *)&v44 + 1) = v35 * (float)(1.0 / v37);
      v45 = v36 * (float)(1.0 / v37);
    }
    if ( sub_14003F0B0(v51, (float *)&v44, (float *)&a7, a4, a5, *(float *)&a6, v50, v49, &v46) )
    {
      v38 = a7;
      if ( *(float *)&a7 < *a3 )
      {
        v39 = v51[1];
        *a1 = v51[0];
        v40 = v51[2];
        a1[1] = v39;
        v41 = v44;
        a1[2] = v40;
        v42 = HIDWORD(v44);
        *(_DWORD *)a2 = v41;
        *(float *)(a2 + 8) = v45;
        *(_DWORD *)(a2 + 4) = v42;
        *(_DWORD *)a3 = v38;
      }
    }
    v17 = v52;
    LODWORD(v16) = v16 + 1;
    v18 += 3;
  }
  while ( (int)v16 < (int)dword_140404A6C[v15 + 358300584] );
  return *a3 < 65536.0;
}
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52

//----- (000000014005F6E0) ----------------------------------------------------
__int64            sub_14005F6E0(unsigned int a1, float *a2, float a3, float a4)
{
  extern void world_add_street(unsigned int kind, const float *quad, float lower, float raise);
  /* src/engine/world_streets.c; the original returns a leftover register, no caller reads it. */
  world_add_street(a1, a2, a3, a4);
  return 0;
}

//----- (00000001400603A0) ----------------------------------------------------
__int64            sub_1400603A0(unsigned int a1, float *a2, float *a3, float *a4, float *a5, float a6)
{
  extern int world_add_rail(unsigned int kind, const float *start, const float *end, const float *start_direction,
                            const float *end_direction, float width);
  /* src/engine/world_streets.c */
  return world_add_rail(a1, a2, a3, a4, a5, a6);
}

//----- (0000000140077710) ----------------------------------------------------
void sub_140077710()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int *v7;
  __int16 v8;
  __int64 v9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140077710[32];
#define v10 (*(int (*))(void *)(sr_frame_140077710 + 0)) /* [rsp+60h] */
#define v11 (*(char * (*))(void *)(sr_frame_140077710 + 8)) /* [rsp+68h] */
#define v12 (*(char * (*))(void *)(sr_frame_140077710 + 16)) /* [rsp+70h] */

  renderer_ui_program = glCreateProgram();
  g_1ABD4AC04 = glCreateShader(35633);
  g_1ABD4AC08 = glCreateShader(35632);
  v11 = (char *)sr_mem_1402b21b0;
  v12 = (char *)sr_mem_1402b2320;
  glShaderSource(g_1ABD4AC04, 1, (const char *const *)&v11, nullptr);
  glCompileShader(g_1ABD4AC04);
  glAttachShader(renderer_ui_program, g_1ABD4AC04);
  glShaderSource(g_1ABD4AC08, 1, (const char *const *)&v12, nullptr);
  glCompileShader(g_1ABD4AC08);
  glAttachShader(renderer_ui_program, g_1ABD4AC08);
  glLinkProgram(renderer_ui_program);
  glUseProgram(renderer_ui_program);
  renderer_ui_matrix_uniform = glGetUniformLocation(renderer_ui_program, "modelviewprojectionmatrix");
  g_1ABD4AC34 = glGetUniformLocation(renderer_ui_program, "tex_color");
  glUniform1i(g_1ABD4AC34, 0);
  glGenVertexArrays(1, &g_1ABD4AC98);
  glGenBuffers(1, &renderer_quad_buffer);
  glGenTextures(1, &renderer_white_texture);
  glBindTexture(3553, renderer_white_texture);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9728);
  glTexParameteri(3553, 10241, 9728);
  v10 = -1;
  v4 = 0;
  glTexImage2D(3553,
    0,
    6408,
    1,
    1,
    0,
    6408,
    5121,
    &v10);
  glGenBuffers(1, &g_1AD299468);
  glGenBuffers(1, &g_1AD29946C);
  glBindVertexArray(g_1ABD4AC98);
  glBindBuffer(34962, g_1AD299468);
  glBufferData(34962, 2359296, 0, 35040);
  v7 = &g_1AD299474;
  do
  {
    v7 += 3;
    v8 = 4 * v4++;
    *((_WORD *)v7 - 8) = v8;
    *((_WORD *)v7 - 5) = v8;
    *((_WORD *)v7 - 7) = v8 + 1;
    *((_WORD *)v7 - 6) = v8 + 2;
    *((_WORD *)v7 - 3) = v8 + 3;
    *((_WORD *)v7 - 4) = v8 + 2;
  }
  while ( v4 < 0x4000 );
  glBindBuffer(34963, g_1AD29946C);
  glBufferData(34963, 196608, &g_1AD299470, 35044);
  glBindBuffer(34963, 0);
  g_1AD059444 = -1;
}
#undef v10
#undef v11
#undef v12

//----- (00000001401885C0) ----------------------------------------------------
__int64            sub_1401885C0(int *a1, int a2, int a3)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  signed int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = a2;
  result = a3;
  v6 = a3 + 15432LL * a2;
  v7 = dword_140404A6C[v6 + 358300580];
  if ( v7 < (int)dword_140404A6C[v6 + 358300584] )
  {
    v8 = (int)dword_140404A6C[v6 + 358300580];
    do
    {
      v9 = *a1;
      if ( (int)v9 < 1024 )
      {
        v10 = 6 * v9;
        v11 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300588 + 3 * v8]);
        a1[2 * v10 + 1] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300588 + 3 * v8]];
        a1[2 * v10 + 2] = dword_140404A6C[v11 + 358297508];
        a1[2 * v10 + 3] = dword_140404A6C[v11 + 358297509];
        v12 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300589 + 3 * v8]);
        v13 = 6LL * *a1;
        a1[2 * v13 + 4] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300589 + 3 * v8]];
        a1[2 * v13 + 5] = dword_140404A6C[v12 + 358297508];
        a1[2 * v13 + 6] = dword_140404A6C[v12 + 358297509];
        v14 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300590 + 3 * v8]);
        v15 = 6LL * *a1;
        a1[2 * v15 + 7] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300590 + 3 * v8]];
        a1[2 * v15 + 8] = dword_140404A6C[v14 + 358297508];
        a1[2 * v15 + 9] = dword_140404A6C[v14 + 358297509];
        v16 = 6LL * *a1;
        a1[2 * v16 + 10] = dword_140404A6C[15432 * v3 + 358303660 + 3 * v8];
        a1[2 * v16 + 11] = dword_140404A6C[15432 * v3 + 358303661 + 3 * v8];
        result = dword_140404A6C[15432 * v3 + 358303662 + 3 * v8];
        a1[2 * v16 + 12] = result;
        ++*a1;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < (int)dword_140404A6C[v6 + 358300584] );
  }
  return result;
}

//----- (0000000140188720) ----------------------------------------------------
__int64            sub_140188720(int *a1, float *a2, float *a3, int a4, int a5)
{
  /* Ported to src/engine/world_streets.c and compared with the original
     (tools/native-compare, suite streets). Callers discard the result. */
  extern void world_street_triangles_in_box(void *, const float *, const float *, int, int);
  world_street_triangles_in_box(a1, a2, a3, a4, a5);
  return 0;
}

//----- (0000000140188B80) ----------------------------------------------------
__int64            sub_140188B80(__int64 a1, __int64 a2, __int64 a3)
{
  extern void world_build_street_meshes(void);
  /* src/engine/world_street_mesh.c; takes no arguments (the decompiler saw leftover registers). The original
     returns the scratch stride, no caller reads it. */
  world_build_street_meshes();
  return 8;
}

//----- (00000001401899F0) ----------------------------------------------------
__int64            sub_1401899F0(int a1)
{
  extern void world_file_street(int index);
  /* src/engine/world_streets.c; the original returns a leftover register, no caller reads it. */
  world_file_street(a1);
  return 0;
}
