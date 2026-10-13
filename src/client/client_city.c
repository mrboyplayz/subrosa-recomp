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
  signed int v3; // r14d
  __int64 v5; // rsi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // r15
  float v9; // xmm6_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm7_4
  int v13; // ebx
  float v14; // xmm8_4
  int v15; // ebx
  float v16; // xmm7_4
  float *v17; // rbx
  float v18; // xmm1_4
  float v19; // xmm2_4
  int v20; // eax
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm0_4
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
  if ( *(unsigned int *)((char *)&dword_140404A6C[451023989] + v5) == 1 )
  {
    v6 = 1;
    v7 = 1;
    v8 = 1;
    if ( a1 >= 2 )
    {
      v9 = *(float *)((char *)&dword_140404A6C[451023990] + v5);
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
     - (float)(*(float *)((char *)&dword_140404A6C[451023991] + v5)
             + *(float *)((char *)&dword_140404A6C[451023990] + v5));
LABEL_6:
  v10 = *(float *)((char *)&dword_140404A6C[451023991] + v5);
  v11 = *(float *)((char *)&dword_140404A6C[451023992] + v5);
  v12 = *(float *)((char *)&dword_140404A6C[451023993] + v5);
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
  if ( *(int *)((char *)&dword_140404A6C[451024083] + v5) > 0 )
  {
    v17 = (float *)((char *)&dword_140404A6C[451024087] + v5);
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
    while ( v3 < *(int *)((char *)&dword_140404A6C[451024083] + v5) );
  }
  return 0; /* caller ignores native EAX */
}
#undef v25
#undef si128
#undef v27
#undef v28
#undef v29

// 140278FA0: using guessed type __int128 xmmword_140278FA0;
// 140278FC0: using guessed type __int128 xmmword_140278FC0;
// 140279000: using guessed type __int128 xmmword_140279000;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // r10d
  unsigned int v12; // r15d
  int i; // esi
  int j; // edi
  int k; // ebx
  int v16; // ebx
  int v17; // edi
  int v18; // r9d
  signed int v19; // r11d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned int v26; // edi
  unsigned int *v27; // rbx
  __int64 v28; // rsi
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // r12
  unsigned int *v35; // rbx
  int v36; // ecx
  signed int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  signed int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // r8
  signed int v44; // r13d
  __int64 v45; // r11
  __int64 v46; // rcx
  unsigned int *v47; // r12
  int v48; // edi
  int v49; // eax
  int v50; // r10d
  unsigned int v51; // edi
  unsigned int v52; // r9d
  int v53; // edx
  int v54; // ecx
  unsigned int v55; // r11d
  unsigned int v56; // r11d
  __int64 v57; // r9
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  __int64 v60; // r9
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  int v63; // edi
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rcx
  unsigned int *v67; // r15
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r14
  unsigned int v72; // esi
  unsigned int v73; // edi
  unsigned int v74; // ebx
  __int64 v75; // r8
  __int64 v76; // rdx
  unsigned int v77; // r12d
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // esi
  __int64 v81; // rcx
  unsigned int v82; // ebx
  __int64 v83; // r13
  unsigned int *v84; // rdi
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rbx
  int v88; // r12d
  unsigned int v89; // r9d
  __int64 v90; // rdi
  unsigned int v91; // edx
  unsigned int v92; // ecx
  unsigned int v93; // xmm0_4
  int v94; // eax
  float v95; // xmm8_4
  __m128i v96; // xmm10
  int v97; // ecx
  unsigned int v98; // xmm8_4
  float v99; // xmm7_4
  double v100; // xmm2_8
  float v101; // xmm11_4
  float v102; // xmm6_4
  float v103; // xmm12_4
  float v104; // xmm11_4
  float v105; // xmm3_4
  unsigned int v106; // xmm8_4
  float v107; // xmm4_4
  unsigned int v108; // xmm6_4
  float v109; // xmm5_4
  float v110; // xmm12_4
  float v111; // xmm10_4
  float v112; // xmm11_4
  unsigned int v113; // xmm7_4
  int v114; // esi
  __int64 v115; // rbx
  float v116; // xmm12_4
  unsigned int v117; // xmm0_4
  unsigned int v118; // xmm1_4
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rcx
  float v123; // xmm1_4
  float v124; // xmm0_4
  double v125; // xmm2_8
  float v126; // xmm10_4
  float v127; // xmm6_4
  float v128; // xmm11_4
  float v129; // xmm7_4
  float v130; // xmm12_4
  float v131; // xmm8_4
  float v132; // xmm10_4
  float v133; // xmm11_4
  float v134; // xmm3_4
  float v135; // xmm12_4
  float v136; // xmm6_4
  float v137; // xmm4_4
  float v138; // xmm7_4
  float v139; // xmm5_4
  float v140; // xmm8_4
  float v141; // xmm10_4
  float v142; // xmm11_4
  float v143; // xmm12_4
  double v144; // xmm2_8
  unsigned int v145; // xmm0_4
  int v146; // ecx
  unsigned int v147; // xmm10_4
  int v148; // edx
  unsigned int v149; // xmm12_4
  unsigned int v150; // xmm15_4
  unsigned int v151; // xmm11_4
  unsigned int v152; // xmm14_4
  unsigned int v153; // xmm7_4
  float v154; // xmm3_4
  int *v155; // rax
  int v156; // r8d
  float v157; // xmm2_4
  float v158; // xmm7_4
  float v159; // xmm0_4
  float v160; // xmm1_4
  __int64 v161; // rdx
  unsigned int v162; // ecx
  __int64 v163; // r8
  unsigned int v164; // ecx
  __int64 v165; // r8
  unsigned int v166; // r13d
  unsigned int v167; // edi
  unsigned int v168; // esi
  unsigned int v169; // r15d
  unsigned int v170; // xmm6_4
  __int128 v171; // xmm0
  int v172; // r9d
  int v173; // r10d
  unsigned int v174; // r8d
  __int64 v175; // rcx
  unsigned int *v176; // rcx
  __int64 v177; // rcx
  float v178; // xmm2_4
  unsigned int v179; // xmm4_4
  float v180; // xmm1_4
  unsigned int v181; // edx
  int v182; // eax
  unsigned int v183; // r11d
  __int128 v184; // xmm0
  unsigned int v185; // xmm8_4
  __int64 v186; // rcx
  unsigned int *v187; // rcx
  int v188; // eax
  int v189; // r8d
  __int64 v190; // r11
  __int64 v191; // r12
  float v192; // xmm6_4
  float *v193; // rbx
  __int64 v194; // rdx
  __int64 v195; // r9
  __int64 v196; // rcx
  float v197; // xmm5_4
  float v198; // xmm2_4
  float v199; // xmm1_4
  float v200; // xmm6_4
  float v201; // xmm3_4
  __int64 v202; // r8
  __int64 v203; // r10
  __int64 v204; // r8
  float v205; // xmm2_4
  __int64 v206; // rcx
  float v207; // xmm5_4
  float v208; // xmm6_4
  float v209; // xmm4_4
  float v210; // xmm2_4
  float v211; // xmm6_4
  float v212; // xmm3_4
  __int64 v213; // rax
  __int64 v214; // rcx
  float v215; // xmm2_4
  float v216; // xmm5_4
  float v217; // xmm6_4
  float v218; // xmm1_4
  float v219; // xmm2_4
  float v220; // xmm4_4
  float v221; // xmm6_4
  float v222; // xmm3_4
  __int64 v223; // rax
  float v224; // xmm6_4
  __int64 v225; // rcx
  float v226; // xmm0_4
  float v227; // xmm5_4
  float v228; // xmm6_4
  float v229; // xmm4_4
  float v230; // xmm2_4
  float v231; // xmm6_4
  float v232; // xmm3_4
  __int64 v233; // rax
  float v234; // xmm6_4
  __int64 v235; // rcx
  __int64 v236; // rax
  float v237; // xmm5_4
  float v238; // xmm1_4
  float v239; // xmm2_4
  float v240; // xmm3_4
  float v241; // xmm6_4
  __int64 v242; // rax
  float *v243; // r8
  float v244; // xmm6_4
  float v245; // xmm4_4
  float v246; // xmm3_4
  __int64 v247; // rcx
  float v248; // xmm0_4
  __int64 v249; // rax
  float v250; // xmm5_4
  float v251; // xmm1_4
  float v252; // xmm2_4
  float v253; // xmm3_4
  float v254; // xmm6_4
  __int64 v255; // rax
  __int64 v256; // rcx
  float v257; // xmm2_4
  float v258; // xmm0_4
  unsigned int v259; // xmm5_4
  float v260; // xmm1_4
  float v261; // xmm2_4
  unsigned int v262; // xmm0_4
  float v263; // xmm2_4
  float v264; // xmm3_4
  float v265; // xmm4_4
  __int128 v266; // xmm0
  __int64 v267; // rcx
  unsigned int *v268; // rcx
  __int64 v269; // rcx
  __int64 v270; // rcx
  __int64 v271; // rcx
  __int64 v272; // rcx
  bool v273; // zf
  float v274; // xmm3_4
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
  if ( dword_140404A6C[283831312] == 1 )
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
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327] = 0;
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181] = 0;
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
              if ( v29 == dword_140404A6C[460788391] )
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
          if ( (unsigned __int16)v48 >= (int)dword_140404A6C[70087027]
            && (unsigned __int16)v48 < (signed int)(dword_140404A6C[70087027] + 4) )
          {
            v69 = 5873 * v282;
            *(float *)&dword_140404A6C[v69 + 283831491] = (float)((float)v44 * 4.0) + 0.25;
            *(float *)&dword_140404A6C[v69 + 283831492] = (float)((float)v37 * 4.0) + 0.125;
            *(float *)&dword_140404A6C[v69 + 283831493] = (float)((float)v41 * 4.0) + 0.25;
            *(float *)&dword_140404A6C[v69 + 283831494] = (float)((float)(v44 + 1) * 4.0) - 0.25;
            *(float *)&dword_140404A6C[v69 + 283831495] = (float)((float)(v37 + 1) * 4.0) - 0.125;
            *(float *)&dword_140404A6C[v69 + 283831496] = (float)((float)(v41 + 1) * 4.0) - 0.25;
          }
          if ( (unsigned __int16)v48 >= (int)dword_140404A6C[40714341]
            && (unsigned __int16)v48 < (signed int)(dword_140404A6C[40714341] + 4) )
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
          if ( dword_140404A6C[283831312] == 7 )
            goto LABEL_97;
          v65 = (unsigned __int16)*(v47 - 21);
          if ( v65 < dword_140404A6C[19931114] || v65 > dword_140404A6C[19931117] )
            goto LABEL_97;
          v66 = 5873 * v64;
          v67 = &dword_140404A6C[v66 + 283831581];
          v68 = ((unsigned __int8)*(v47 - 21) - LOBYTE(dword_140404A6C[19931114]) - 2) & 3;
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
  dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327] = 0;
  dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181] = 0;
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
                    dword_140404A6C[14019 * dword_140404A6C[225641186]
                                  + 225654182
                                  + 4 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181]] = v82;
                    dword_140404A6C[14019 * dword_140404A6C[225641186]
                                  + 225654183
                                  + 4 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181]] = v77;
                    dword_140404A6C[14019 * dword_140404A6C[225641186]
                                  + 225654184
                                  + 4 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654181]++] = v80;
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
    v91 = dword_140404A6C[464720555];
    v92 = v277 + dword_140404A6C[464720556] + dword_140404A6C[464720553];
    *(float *)&v93 = (float)v278 * 4.0;
    v94 = dword_140404A6C[464720555] + v279;
    v294 = 1.0;
    v95 = (float)(int)(dword_140404A6C[464720553] + v277);
    dword_140404A6C[v90 + 283831486] = v93;
    v285 = *(float *)&v93;
    v96 = _mm_cvtsi32_si128(v92);
    v97 = v89 + v91 + dword_140404A6C[464720558];
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
      *(float *)((char *)&dword_140404A6C[283836333] + v119) = v111;
      *(float *)((char *)&dword_140404A6C[283836334] + v119) = v112;
      *(float *)((char *)&dword_140404A6C[283836335] + v119) = v116;
      v120 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(float *)((char *)&dword_140404A6C[283836336] + v120) = v105;
      *(float *)((char *)&dword_140404A6C[283836337] + v120) = v107;
      *(float *)((char *)&dword_140404A6C[283836338] + v120) = v109;
      v121 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(unsigned int *)((char *)&dword_140404A6C[283836339] + v121) = v117;
      *(_QWORD *)((char *)&dword_140404A6C[283836340] + v121) = __PAIR64__(DWORD1(v293), v118);
      v122 = v115 * 4 + 52LL * (int)dword_140404A6C[v115 + 283836331];
      *(unsigned int *)((char *)&dword_140404A6C[283836342] + v122) = v106;
      *(unsigned int *)((char *)&dword_140404A6C[283836343] + v122) = v108;
      *(unsigned int *)((char *)&dword_140404A6C[283836344] + v122) = v113;
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
    if ( dword_140404A6C[284024893] )
    {
      *(float *)&dword_140404A6C[v90 + 283831498] = v141;
      *(float *)&dword_140404A6C[v90 + 283831499] = v142;
      *(float *)&dword_140404A6C[v90 + 283831500] = v143;
    }
    *(float *)&dword_140404A6C[v90 + 283831501] = (float)((float)(v134 * 12.0) + v141) + (float)(v136 * 6.0);
    *(float *)&dword_140404A6C[v90 + 283831502] = (float)((float)(v137 * 12.0) + v142) + (float)(v138 * 6.0);
    *(float *)&dword_140404A6C[v90 + 283831503] = (float)((float)(v139 * 12.0) + v143) + (float)(v140 * 6.0);
    if ( dword_140404A6C[283831312] == 7 )
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
  v147 = dword_140404A6C[464720754];
  v148 = 0;
  v149 = dword_140404A6C[464720755];
  v150 = dword_140404A6C[464720756];
  v151 = dword_140404A6C[464720745];
  v152 = dword_140404A6C[464720746];
  v153 = dword_140404A6C[464720747];
  v154 = 65536.0;
  if ( (int)dword_140404A6C[225391228] > 0 )
  {
    v155 = (int *)&dword_140404A6C[225391231];
    do
    {
      v156 = v146;
      v157 = (float)((float)*(v155 - 1) * 4.0)
           - (float)((float)(*(float *)&dword_140404A6C[464720754] * 32.0) + *(float *)&dword_140404A6C[464720745]);
      v158 = v154;
      v159 = (float)((float)v155[1] * 4.0)
           - (float)((float)(*(float *)&dword_140404A6C[464720756] * 32.0) + *(float *)&dword_140404A6C[464720747]);
      v160 = fsqrt(
               (float)((float)(v157 * v157)
                     + (float)((float)((float)((float)*v155 * 4.0)
                                     - (float)((float)(*(float *)&dword_140404A6C[464720755] * 32.0)
                                             + *(float *)&dword_140404A6C[464720746]))
                             * (float)((float)((float)*v155 * 4.0)
                                     - (float)((float)(*(float *)&dword_140404A6C[464720755] * 32.0)
                                             + *(float *)&dword_140404A6C[464720746]))))
             + (float)(v159 * v159));
      if ( v154 > v160 )
        v154 = v160;
      v146 = v148;
      if ( v158 <= v160 )
        v146 = v156;
      ++v148;
      v155 += 34;
    }
    while ( v148 < (int)dword_140404A6C[225391228] );
    v153 = dword_140404A6C[464720747];
  }
  v161 = 34LL * v146;
  dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641321] = dword_140404A6C[v161 + 225391236];
  v162 = dword_140404A6C[225641186];
  v163 = 14019LL * (int)dword_140404A6C[225641186];
  if ( dword_140404A6C[v163 + 225641321] == -1 )
  {
    dword_140404A6C[v163 + 225641321] = dword_140404A6C[v161 + 225391238];
    v162 = dword_140404A6C[225641186];
  }
  dword_140404A6C[14019 * v162 + 225641322] = dword_140404A6C[v161 + 225391237];
  v164 = dword_140404A6C[225641186];
  v165 = 14019LL * (int)dword_140404A6C[225641186];
  if ( dword_140404A6C[v165 + 225641322] == -1 )
  {
    dword_140404A6C[v165 + 225641322] = dword_140404A6C[v161 + 225391239];
    v164 = dword_140404A6C[225641186];
  }
  v166 = dword_140404A6C[464720558];
  v167 = dword_140404A6C[464720555];
  v168 = dword_140404A6C[464720554];
  v169 = dword_140404A6C[464720553];
  v170 = dword_140404A6C[464720753];
  if ( v19 == -1 )
  {
    v181 = dword_140404A6C[464720557];
    v174 = dword_140404A6C[464720556];
    v172 = v277;
    v173 = v279;
  }
  else
  {
    v171 = *(_OWORD *)&dword_140404A6C[464720748];
    v172 = v277;
    v173 = v279;
    v174 = dword_140404A6C[464720556];
    dword_140404A6C[14019 * v164 + 225641203] = 1;
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641325] = v19;
    v175 = 14019LL * (int)dword_140404A6C[225641186];
    dword_140404A6C[v175 + 225641207] = v151;
    dword_140404A6C[v175 + 225641208] = v152;
    dword_140404A6C[v175 + 225641209] = v153;
    v176 = &dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641210];
    *(_OWORD *)v176 = v171;
    v176[4] = dword_140404A6C[464720752];
    v176[5] = v170;
    v176[6] = v147;
    v176[7] = v149;
    v176[8] = v150;
    v177 = 14019LL * (int)dword_140404A6C[225641186];
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
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
    v181 = dword_140404A6C[464720557];
    v182 = v88 + dword_140404A6C[464720557] + v168;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)v182 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    v164 = ++dword_140404A6C[225641186];
  }
  v183 = a8;
  if ( a8 != 10 )
  {
    v261 = (float)v172;
    if ( a8 == 12 )
    {
      dword_140404A6C[14019 * v164 + 225641203] = 6;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v261 * 4.0;
      *(float *)&v262 = (float)v173 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = (float)v88 * 4.0;
      dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v262;
      dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v262;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169)
                                                                                 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166)
                                                                                 * 4.0;
      dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
      v164 = ++dword_140404A6C[225641186];
    }
    else if ( a8 == 13 )
    {
      v263 = v261 * 4.0;
      v264 = (float)v88;
      dword_140404A6C[14019 * v164 + 225641203] = 5;
      v265 = (float)v173;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v263;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = (float)v88 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = (float)v173 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169)
                                                                                 * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
      *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166)
                                                                                 * 4.0;
      v273 = dword_140404A6C[456202453] == 0;
      dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
      if ( !v273 )
      {
        dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 0;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 1000;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 1;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 5000;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 2;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 10000;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 3;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 10000;
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654129
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 4;
        v181 = dword_140404A6C[464720557];
        dword_140404A6C[14019 * dword_140404A6C[225641186]
                      + 225654130
                      + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 100000;
      }
      v164 = ++dword_140404A6C[225641186];
      goto LABEL_171;
    }
    v185 = dword_140404A6C[464720752];
    goto LABEL_162;
  }
  v184 = *(_OWORD *)&dword_140404A6C[464720748];
  v185 = dword_140404A6C[464720752];
  dword_140404A6C[14019 * v164 + 225641203] = 4;
  v186 = 14019LL * (int)dword_140404A6C[225641186];
  dword_140404A6C[v186 + 225641207] = v151;
  dword_140404A6C[v186 + 225641208] = v152;
  dword_140404A6C[v186 + 225641209] = v153;
  v187 = &dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641210];
  v187[4] = v185;
  v187[5] = v170;
  v187[6] = v147;
  v187[7] = v149;
  v187[8] = v150;
  *(_OWORD *)v187 = v184;
  v188 = dword_140404A6C[468694332];
  dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327] = 0;
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
      v194 = 14019LL * (int)dword_140404A6C[225641186];
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
      *(float *)((char *)&dword_140404A6C[225641328] + v196) = v197;
      *(float *)((char *)&dword_140404A6C[225641329] + v196) = v198 + v199;
      *(float *)((char *)&dword_140404A6C[225641330] + v196) = v200 + v201;
      dword_140404A6C[14019 * dword_140404A6C[225641186]
                    + 225641331
                    + 197 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327]] = v189;
      v202 = (int)dword_140404A6C[v190 + 468694333];
      v203 = v202;
      dword_140404A6C[14019 * dword_140404A6C[225641186]
                    + 225641332
                    + 197 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327]] = v202;
      if ( v202 >= 4 )
      {
        v204 = v202 - 3;
        do
        {
          v205 = *(v193 - 1);
          v206 = 14019LL * (int)dword_140404A6C[225641186];
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
          v213 = 788LL * (int)dword_140404A6C[v206 + 225641327] + 12 * (v195 + 4673LL * (int)dword_140404A6C[225641186]);
          *(float *)((char *)&dword_140404A6C[225641333] + v213) = (float)((float)(v207
                                                                                 + *(float *)&dword_140404A6C[v206 + 225641207])
                                                                         + (float)(*v193
                                                                                 * *(float *)&dword_140404A6C[v206 + 225641213]))
                                                                 + (float)(v193[1]
                                                                         * *(float *)&dword_140404A6C[v206 + 225641216]);
          *(float *)((char *)&dword_140404A6C[225641334] + v213) = v210;
          *(float *)((char *)&dword_140404A6C[225641335] + v213) = v211;
          v214 = 14019LL * (int)dword_140404A6C[225641186];
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
          v223 = 788LL * (int)dword_140404A6C[v214 + 225641327] + 12 * (v195 + 4673LL * (int)dword_140404A6C[225641186]);
          *(float *)((char *)&dword_140404A6C[225641336] + v223) = v216;
          *(float *)((char *)&dword_140404A6C[225641337] + v223) = v219 + v218;
          *(float *)((char *)&dword_140404A6C[225641338] + v223) = v221;
          v224 = v193[7];
          v225 = 14019LL * (int)dword_140404A6C[225641186];
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
          v233 = 788LL * (int)dword_140404A6C[v225 + 225641327] + 12 * (v195 + 4673LL * (int)dword_140404A6C[225641186]);
          *(float *)((char *)&dword_140404A6C[225641339] + v233) = v227;
          *(float *)((char *)&dword_140404A6C[225641340] + v233) = v230;
          *(float *)((char *)&dword_140404A6C[225641341] + v233) = v231;
          v234 = v193[11];
          v193 += 16;
          v235 = 14019LL * (int)dword_140404A6C[225641186];
          v236 = v195 + 4673LL * (int)dword_140404A6C[225641186];
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
          *(float *)((char *)&dword_140404A6C[225641342] + v242) = v237;
          *(float *)((char *)&dword_140404A6C[225641343] + v242) = v239 + v238;
          *(float *)((char *)&dword_140404A6C[225641344] + v242) = v241 + v240;
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
          v247 = 14019LL * (int)dword_140404A6C[225641186];
          v248 = *v243 * *(float *)&dword_140404A6C[v247 + 225641213];
          v243 += 4;
          v249 = v195 + 4673LL * (int)dword_140404A6C[225641186];
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
          *(float *)((char *)&dword_140404A6C[225641333] + v255) = v250;
          *(float *)((char *)&dword_140404A6C[225641334] + v255) = v252 + v251;
          *(float *)((char *)&dword_140404A6C[225641335] + v255) = v254 + v253;
        }
        while ( v195 < v203 );
      }
      v190 += 257;
      v189 = v304;
      ++dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641327];
      --v191;
    }
    while ( v191 );
    v167 = dword_140404A6C[464720555];
    v168 = dword_140404A6C[464720554];
    v169 = dword_140404A6C[464720553];
    v166 = dword_140404A6C[464720558];
    v181 = dword_140404A6C[464720557];
    v174 = dword_140404A6C[464720556];
    v88 = v278;
    v172 = v277;
    v173 = v279;
    v183 = 10;
  }
  v256 = 14019LL * (int)dword_140404A6C[225641186];
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
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
  *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
  v164 = dword_140404A6C[225641186] + 1;
  v261 = (float)v172;
  ++dword_140404A6C[225641186];
LABEL_162:
  v263 = v261 * 4.0;
  v264 = (float)v88;
  v265 = (float)v173;
  if ( v183 == 11 )
  {
    v266 = *(_OWORD *)&dword_140404A6C[464720748];
    dword_140404A6C[14019 * v164 + 225641203] = 3;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = v264 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v265 * 4.0;
    v267 = 14019LL * (int)dword_140404A6C[225641186];
    dword_140404A6C[v267 + 225641207] = v151;
    dword_140404A6C[v267 + 225641208] = v152;
    dword_140404A6C[v267 + 225641209] = v153;
    v268 = &dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641210];
    *(_OWORD *)v268 = v266;
    v268[5] = dword_140404A6C[464720753];
    v268[4] = v185;
    v268[6] = v147;
    v268[7] = v149;
    v268[8] = v150;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    v269 = 14019LL * (int)dword_140404A6C[225641186];
    dword_140404A6C[v269 + 225654178] = dword_140404A6C[v269 + 225641207];
    dword_140404A6C[v269 + 225654179] = dword_140404A6C[v269 + 225641208];
    dword_140404A6C[v269 + 225654180] = dword_140404A6C[v269 + 225641209];
    v270 = 14019LL * (int)dword_140404A6C[225641186];
    *(float *)&dword_140404A6C[v270 + 225654178] = (float)(*(float *)&dword_140404A6C[v270 + 225641210] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654178];
    *(float *)&dword_140404A6C[v270 + 225654179] = (float)(*(float *)&dword_140404A6C[v270 + 225641211] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654179];
    *(float *)&dword_140404A6C[v270 + 225654180] = (float)(*(float *)&dword_140404A6C[v270 + 225641212] * 24.0)
                                                 + *(float *)&dword_140404A6C[v270 + 225654180];
    v271 = 14019LL * (int)dword_140404A6C[225641186];
    *(float *)&dword_140404A6C[v271 + 225654178] = (float)(*(float *)&dword_140404A6C[v271 + 225641216] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654178];
    *(float *)&dword_140404A6C[v271 + 225654179] = (float)(*(float *)&dword_140404A6C[v271 + 225641217] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654179];
    *(float *)&dword_140404A6C[v271 + 225654180] = (float)(*(float *)&dword_140404A6C[v271 + 225641218] * 80.0)
                                                 + *(float *)&dword_140404A6C[v271 + 225654180];
    v272 = 14019LL * (int)dword_140404A6C[225641186];
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
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = v264 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v265 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
LABEL_164:
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
LABEL_173:
    ++dword_140404A6C[225641186];
    return 0; /* native result ignored by both callers */
  }
LABEL_171:
  v274 = v264 * 4.0;
  if ( v183 == 16 )
  {
    dword_140404A6C[14019 * v164 + 225641203] = 9;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641207] = v263;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641208] = v274;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641209] = v265 * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641219] = (float)(int)(v169 + v172) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641220] = (float)(int)(v168 + v88) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641221] = (float)(int)(v167 + v173) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641222] = (float)(int)(v172 + v174 + v169) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641223] = (float)(int)(v88 + v181 + v168) * 4.0;
    *(float *)&dword_140404A6C[14019 * dword_140404A6C[225641186] + 225641224] = (float)(int)(v173 + v167 + v166) * 4.0;
    dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128] = 0;
    dword_140404A6C[14019 * dword_140404A6C[225641186]
                  + 225654129
                  + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]] = 0;
    dword_140404A6C[14019 * dword_140404A6C[225641186]
                  + 225654130
                  + 3 * dword_140404A6C[14019 * dword_140404A6C[225641186] + 225654128]++] = 20;
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

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000140026E70) ----------------------------------------------------
__int64 sub_140026E70()
{
  int v0; // esi
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rdi
  int v4; // ecx
  char *v5; // rdx
  unsigned int *v6; // rcx
  char v7; // al
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  char *v13; // rcx
  char v14; // dl
  char v15; // dl
  char v16; // dl
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140026E70[352];
#define v18 (*(__int64 (*))(void *)(sr_frame_140026E70 + 0)) /* [rsp+0h] */
#define FindData (*(_BYTE (*)[304])(void *)(sr_frame_140026E70 + 32)) /* [rsp+20h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140026E70 + 336)) /* [rsp+150h] */

  LOBYTE(dword_140404A6C[451023973]) = 0;
  LOBYTE(dword_140404A6C[451027061]) = 0;
  LOBYTE(dword_140404A6C[451030149]) = 0;
  LOBYTE(dword_140404A6C[451033237]) = 0;
  LOBYTE(dword_140404A6C[451036325]) = 0;
  LOBYTE(dword_140404A6C[451039413]) = 0;
  LOBYTE(dword_140404A6C[451042501]) = 0;
  LOBYTE(dword_140404A6C[451045589]) = 0;
  LOBYTE(dword_140404A6C[451048677]) = 0;
  LOBYTE(dword_140404A6C[451051765]) = 0;
  LOBYTE(dword_140404A6C[451054853]) = 0;
  LOBYTE(dword_140404A6C[451057941]) = 0;
  LOBYTE(dword_140404A6C[451061029]) = 0;
  LOBYTE(dword_140404A6C[451064117]) = 0;
  LOBYTE(dword_140404A6C[451067205]) = 0;
  LOBYTE(dword_140404A6C[451070293]) = 0;
  LOBYTE(dword_140404A6C[451073381]) = 0;
  LOBYTE(dword_140404A6C[451076469]) = 0;
  LOBYTE(dword_140404A6C[451079557]) = 0;
  LOBYTE(dword_140404A6C[451082645]) = 0;
  LOBYTE(dword_140404A6C[451085733]) = 0;
  LOBYTE(dword_140404A6C[451088821]) = 0;
  LOBYTE(dword_140404A6C[451091909]) = 0;
  LOBYTE(dword_140404A6C[451094997]) = 0;
  LOBYTE(dword_140404A6C[451098085]) = 0;
  LOBYTE(dword_140404A6C[451101173]) = 0;
  LOBYTE(dword_140404A6C[451104261]) = 0;
  LOBYTE(dword_140404A6C[451107349]) = 0;
  LOBYTE(dword_140404A6C[451110437]) = 0;
  LOBYTE(dword_140404A6C[451113525]) = 0;
  LOBYTE(dword_140404A6C[451116613]) = 0;
  LOBYTE(dword_140404A6C[451119701]) = 0;
  LOBYTE(dword_140404A6C[451122789]) = 0;
  LOBYTE(dword_140404A6C[451125877]) = 0;
  LOBYTE(dword_140404A6C[451128965]) = 0;
  LOBYTE(dword_140404A6C[451132053]) = 0;
  LOBYTE(dword_140404A6C[451135141]) = 0;
  LOBYTE(dword_140404A6C[451138229]) = 0;
  LOBYTE(dword_140404A6C[451141317]) = 0;
  LOBYTE(dword_140404A6C[451144405]) = 0;
  LOBYTE(dword_140404A6C[451147493]) = 0;
  LOBYTE(dword_140404A6C[451150581]) = 0;
  LOBYTE(dword_140404A6C[451153669]) = 0;
  LOBYTE(dword_140404A6C[451156757]) = 0;
  LOBYTE(dword_140404A6C[451159845]) = 0;
  LOBYTE(dword_140404A6C[451162933]) = 0;
  LOBYTE(dword_140404A6C[451166021]) = 0;
  LOBYTE(dword_140404A6C[451169109]) = 0;
  LOBYTE(dword_140404A6C[451172197]) = 0;
  LOBYTE(dword_140404A6C[451175285]) = 0;
  LOBYTE(dword_140404A6C[451178373]) = 0;
  LOBYTE(dword_140404A6C[451181461]) = 0;
  LOBYTE(dword_140404A6C[451184549]) = 0;
  LOBYTE(dword_140404A6C[451187637]) = 0;
  LOBYTE(dword_140404A6C[451190725]) = 0;
  LOBYTE(dword_140404A6C[451193813]) = 0;
  LOBYTE(dword_140404A6C[451196901]) = 0;
  LOBYTE(dword_140404A6C[451199989]) = 0;
  LOBYTE(dword_140404A6C[451203077]) = 0;
  LOBYTE(dword_140404A6C[451206165]) = 0;
  LOBYTE(dword_140404A6C[451209253]) = 0;
  LOBYTE(dword_140404A6C[451212341]) = 0;
  LOBYTE(dword_140404A6C[451215429]) = 0;
  LOBYTE(dword_140404A6C[451218517]) = 0;
  v0 = sub_14024C22C("buildblock");
  v1 = sub_14023A198("*.sbl", (__int64)FindData);
  v2 = 0;
  dword_140404A6C[293119325] = 0;
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
        ++dword_140404A6C[293119325];
      }
      v8 = sub_14023A5C4(v3, (__int64)FindData);
      v4 = dword_140404A6C[293119325];
    }
    while ( v8 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v4 + 293119326]) = 0;
  sub_140239CCC(v3);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[293119326],
    (int)dword_140404A6C[293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  v9 = dword_140404A6C[293119325];
  v10 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
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
      v9 = dword_140404A6C[293119325];
    }
    while ( v10 < (int)dword_140404A6C[293119325] );
  }
  if ( !v0 )
  {
    sub_14024C22C("..");
    v9 = dword_140404A6C[293119325];
  }
  if ( v9 > 64 )
    v9 = 64;
  dword_140404A6C[293119325] = v9;
  if ( v9 > 0 )
  {
    do
    {
      sub_140027230((     char *)&dword_140404A6C[16 * (__int64)v2 + 293119326], v2);
      ++v2;
    }
    while ( v2 < (int)dword_140404A6C[293119325] );
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v18
#undef FindData
#undef v20

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18622DFE0: using guessed type unsigned int;
// 1ABC89C00: using guessed type unsigned int;
// 1ABC8CC40: using guessed type unsigned int;
// 1ABC8FC80: using guessed type unsigned int;
// 1ABC92CC0: using guessed type unsigned int;
// 1ABC95D00: using guessed type unsigned int;
// 1ABC98D40: using guessed type unsigned int;
// 1ABC9BD80: using guessed type unsigned int;
// 1ABC9EDC0: using guessed type unsigned int;
// 1ABCA1E00: using guessed type unsigned int;
// 1ABCA4E40: using guessed type unsigned int;
// 1ABCA7E80: using guessed type unsigned int;
// 1ABCAAEC0: using guessed type unsigned int;
// 1ABCADF00: using guessed type unsigned int;
// 1ABCB0F40: using guessed type unsigned int;
// 1ABCB3F80: using guessed type unsigned int;
// 1ABCB6FC0: using guessed type unsigned int;
// 1ABCBA000: using guessed type unsigned int;
// 1ABCBD040: using guessed type unsigned int;
// 1ABCC0080: using guessed type unsigned int;
// 1ABCC30C0: using guessed type unsigned int;
// 1ABCC6100: using guessed type unsigned int;
// 1ABCC9140: using guessed type unsigned int;
// 1ABCCC180: using guessed type unsigned int;
// 1ABCCF1C0: using guessed type unsigned int;
// 1ABCD2200: using guessed type unsigned int;
// 1ABCD5240: using guessed type unsigned int;
// 1ABCD8280: using guessed type unsigned int;
// 1ABCDB2C0: using guessed type unsigned int;
// 1ABCDE300: using guessed type unsigned int;
// 1ABCE1340: using guessed type unsigned int;
// 1ABCE4380: using guessed type unsigned int;
// 1ABCE73C0: using guessed type unsigned int;
// 1ABCEA400: using guessed type unsigned int;
// 1ABCED440: using guessed type unsigned int;
// 1ABCF0480: using guessed type unsigned int;
// 1ABCF34C0: using guessed type unsigned int;
// 1ABCF6500: using guessed type unsigned int;
// 1ABCF9540: using guessed type unsigned int;
// 1ABCFC580: using guessed type unsigned int;
// 1ABCFF5C0: using guessed type unsigned int;
// 1ABD02600: using guessed type unsigned int;
// 1ABD05640: using guessed type unsigned int;
// 1ABD08680: using guessed type unsigned int;
// 1ABD0B6C0: using guessed type unsigned int;
// 1ABD0E700: using guessed type unsigned int;
// 1ABD11740: using guessed type unsigned int;
// 1ABD14780: using guessed type unsigned int;
// 1ABD177C0: using guessed type unsigned int;
// 1ABD1A800: using guessed type unsigned int;
// 1ABD1D840: using guessed type unsigned int;
// 1ABD20880: using guessed type unsigned int;
// 1ABD238C0: using guessed type unsigned int;
// 1ABD26900: using guessed type unsigned int;
// 1ABD29940: using guessed type unsigned int;
// 1ABD2C980: using guessed type unsigned int;
// 1ABD2F9C0: using guessed type unsigned int;
// 1ABD32A00: using guessed type unsigned int;
// 1ABD35A40: using guessed type unsigned int;
// 1ABD38A80: using guessed type unsigned int;
// 1ABD3BAC0: using guessed type unsigned int;
// 1ABD3EB00: using guessed type unsigned int;
// 1ABD41B40: using guessed type unsigned int;
// 1ABD44B80: using guessed type unsigned int;
// 1ABD47BC0: using guessed type unsigned int;

//----- (0000000140027230) ----------------------------------------------------
__int64            sub_140027230(     char *a1, int a2)
{
  __int64 v2; // rsi
       char *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  char *v7; // rcx
  char v8; // al
  __int64 v9; // r13
  __int64 v10; // r15
  unsigned int *v11; // rbp
  unsigned int *v12; // r14
  signed int v13; // esi
  __int64 v14; // rdi
  signed int v15; // esi
  char *v16; // rdi
  signed int v17; // esi
  __int64 v18; // rdi
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
  sub_140158AB0(v25, "buildblock/%s.sbl", a1);
  v4 = sub_14020B8D8(v25, "rb");
  v5 = v4;
  if ( v4 )
  {
    (*(void (           **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(&v21, 4, 1, v4);
    if ( v21 == 1 )
    {
      v6 = 3088 * v2;
      v7 = (char *)&dword_140404A6C[451023973] + 12352 * v2 - (_QWORD)v3;
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
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 94,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 93,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 92,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 91,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 90,
          4,
          1,
          v5);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
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
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023996] + v14,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023997] + v14,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451023998] + v14,
              4,
              1,
              v5);
            ++v13;
          }
          while ( v13 < (int)*(v11 - 7) );
          v9 = v23;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          v12 - 81,
          4,
          1,
          v5);
        v15 = 0;
        if ( (int)*v11 > 0 )
        {
          do
          {
            v16 = (char *)v12 + 20LL * v15 - (_QWORD)&dword_140404A6C[451024083];
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024003] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024004] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024005] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024006] + (_QWORD)v16,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024007] + (_QWORD)v16,
              4,
              1,
              v5);
            ++v15;
          }
          while ( v15 < (int)*v11 );
          v10 = v22;
          v9 = v23;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(v12, 4, 1, v5);
        v17 = 0;
        if ( (int)v11[81] > 0 )
        {
          do
          {
            v18 = v6 * 4 + 24 * (v9 + v17);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024084] + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024086] + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024087] + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024088] + v18,
              4,
              1,
              v5);
            (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              (char *)&dword_140404A6C[451024089] + v18,
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
    sub_14020B9E8(v5);
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE008: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000140027690) ----------------------------------------------------
__int64 sub_140027690()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int i; // edi
  int v3; // r10d
       char *v4; // r11

  v0 = &dword_140404A6C[468675899];
  result = (__int64)sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468675899]), 0, 0x100u);
  for ( i = 0; i < (int)dword_140404A6C[468675642]; ++v0 )
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140027A60) ----------------------------------------------------
__int64 sub_140027A60()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = &dword_140404A6C[468693308];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468693308]), 0, 0x1000u);
  result = dword_140404A6C[468676923];
  v2 = 0;
  if ( (int)dword_140404A6C[468676923] > 0 )
  {
    v3 = dword_140404A6C[273270149];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[272299397];
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
        result = dword_140404A6C[468676923];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 181676080: using guessed type unsigned int;

//----- (0000000140027B40) ----------------------------------------------------
__int64 sub_140027B40()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = &dword_140404A6C[468674618];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468674618]), 0, 0x1000u);
  result = dword_140404A6C[468658233];
  v2 = 0;
  if ( (int)dword_140404A6C[468658233] > 0 )
  {
    v3 = dword_140404A6C[19928869];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[20074597];
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
        result = dword_140404A6C[468658233];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A700: using guessed type unsigned int;

//----- (0000000140027C20) ----------------------------------------------------
__int64 sub_140027C20()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = &dword_140404A6C[468657209];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468657209]), 0, 0x400u);
  result = dword_140404A6C[468653112];
  v2 = 0;
  if ( (int)dword_140404A6C[468653112] > 0 )
  {
    v3 = dword_140404A6C[421784253];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[421784739];
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
        result = dword_140404A6C[468653112];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A4CFF560: using guessed type unsigned int;

//----- (0000000140028790) ----------------------------------------------------
__int64            sub_140028790(     char *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int *v7; // rsi
  __int64 v8; // r12
  unsigned int *v9; // r14
  signed int v10; // ebp
  __int64 v11; // rdi
  signed int v12; // ebp
  __int64 v13; // rdi
  signed int v14; // ebp
  __int64 v15; // r14
  __int64 v16; // rdi
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
  sub_140158AB0(v24, "buildblock/%s.sbl", a1);
  v3 = sub_14020B8D8(v24, "wb");
  v4 = v3;
  if ( v3 )
  {
    v19 = 1;
    (*(void (           **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250405])(&v19, 4, 1, v3);
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
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 94,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 93,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 92,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 91,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        v9 - 90,
        4,
        1,
        v4,
        v19);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
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
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023996] + v11,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023997] + v11,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451023998] + v11,
            4,
            1,
            v4,
            v19);
          ++v10;
        }
        while ( v10 < (int)*(v7 - 7) );
        v9 = v23;
      }
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
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
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024003] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024004] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024005] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024006] + v13,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024007] + v13,
            4,
            1,
            v4,
            v19);
          ++v12;
        }
        while ( v12 < (int)*v7 );
        v6 = v20;
      }
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
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
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024084] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024086] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024087] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024088] + v16,
            4,
            1,
            v4,
            v19);
          (*(void (           **)(char *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
            (char *)&dword_140404A6C[451024089] + v16,
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
    sub_14020B9E8(v4);
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1862AE000: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);

//----- (0000000140028BD0) ----------------------------------------------------
__int64 sub_140028BD0()
{
  unsigned int *v0; // rbx
  signed int v1; // eax
  signed int v2; // esi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx
  unsigned int *v9; // rbx
  signed int v10; // eax
  signed int v11; // esi
  int v12; // r11d
  signed int v13; // r9d
       char *v14; // r10
  unsigned int *v15; // rbx
  signed int v16; // eax
  signed int v17; // esi
  int v18; // r11d
  signed int v19; // r9d
  unsigned int *v20; // r10
  unsigned int *v21; // rax
  int v22; // ecx
  int v23; // edx
  signed int v24; // edx
  signed int v25; // esi
  __int64 result; // rax
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // r11d
  __int64 v30; // rbx
  int v31; // r10d
  __int64 v32; // rcx
  unsigned int *v33; // rdx
  _WORD *v34; // r9
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  __int16 v37; // cx
  __int16 v38; // ax
  __int16 v39; // cx
  __int16 v40; // ax
  __int16 v41; // cx
  __int16 v42; // ax
  __int16 v43; // cx
  __int16 v44; // ax
  __int16 v45; // cx
  __int16 v46; // ax
  __int16 v47; // cx
  __int16 v48; // ax
  __int16 v49; // cx
  int v50; // ecx
  unsigned int v51; // eax

  v0 = &dword_140404A6C[468657209];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468657209]), 0, 0x400u);
  v1 = dword_140404A6C[468653112];
  v2 = 0;
  if ( (int)dword_140404A6C[468653112] > 0 )
  {
    v3 = dword_140404A6C[421784253];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[421784739];
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
        v1 = dword_140404A6C[468653112];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < v1 );
  }
  v9 = &dword_140404A6C[468674618];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468674618]), 0, 0x1000u);
  v10 = dword_140404A6C[468658233];
  v11 = 0;
  if ( (int)dword_140404A6C[468658233] > 0 )
  {
    v12 = dword_140404A6C[19928869];
    do
    {
      v13 = 0;
      if ( v12 > 0 )
      {
        v14 = (     char *)&dword_140404A6C[20074597];
        do
        {
          if ( !strcmp_sr((     char *)&dword_140404A6C[16 * (__int64)v11 + 468658234], v14) )
            *v9 = v13;
          ++v13;
          v14 += 232;
        }
        while ( v13 < v12 );
        v10 = dword_140404A6C[468658233];
      }
      ++v11;
      ++v9;
    }
    while ( v11 < v10 );
  }
  sub_140027690();
  v15 = &dword_140404A6C[468693308];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[468693308]), 0, 0x1000u);
  v16 = dword_140404A6C[468676923];
  v17 = 0;
  if ( (int)dword_140404A6C[468676923] > 0 )
  {
    v18 = dword_140404A6C[273270149];
    do
    {
      v19 = 0;
      if ( v18 > 0 )
      {
        v20 = &dword_140404A6C[272299397];
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
        v16 = dword_140404A6C[468676923];
      }
      ++v17;
      ++v15;
    }
    while ( v17 < v16 );
  }
  v24 = dword_140404A6C[456856223];
  v25 = 0;
  result = dword_140404A6C[456856221];
  v27 = dword_140404A6C[456856222];
  dword_140404A6C[460788387] = dword_140404A6C[456856221];
  dword_140404A6C[460788388] = dword_140404A6C[456856222];
  dword_140404A6C[460788389] = dword_140404A6C[456856223];
  if ( (int)dword_140404A6C[456856223] > 0 )
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
              result = dword_140404A6C[460788387];
              v33 += 15;
              v34 += 30;
            }
            while ( v31 <= (int)dword_140404A6C[460788387] );
            v27 = dword_140404A6C[460788388];
          }
          ++v29;
          ++v30;
        }
        while ( v29 <= v27 );
        v24 = dword_140404A6C[460788389];
      }
      ++v25;
      v28 += 64;
    }
    while ( v25 < v24 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A700: using guessed type unsigned int;
// 181676080: using guessed type unsigned int;
// 1A4CFF560: using guessed type unsigned int;
// 1AD2C94E0: using guessed type unsigned int;
// 1AD2C94E4: using guessed type unsigned int;
// 1AD2C94E8: using guessed type unsigned int;
// 1AE1C94F8: using guessed type unsigned int;
// 1AE1C94FC: using guessed type unsigned int;
// 1AE1C9500: using guessed type unsigned int;
// 1AFFC9B4C: using guessed type unsigned int;
// 1AFFCEB50: using guessed type unsigned int;
// 1AFFE0F58: using guessed type unsigned int;

//----- (0000000140029120) ----------------------------------------------------
__int64 sub_140029120()
{
  int v0; // ecx
  int v1; // r12d
  int v2; // ebp
  int v3; // r13d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r11
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // r8
  __int64 v12; // rbx
  _WORD *v13; // rcx
  unsigned int *v14; // r9
  unsigned int *v15; // rdx
  __int64 v16; // r10
  unsigned int v17; // eax
  __int64 result; // rax
  signed int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rbp
  unsigned int v29; // edx
  int v30; // edi
  __int64 i; // rsi
  unsigned int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // r10d
  __int64 v35; // r11
  int v36; // ecx
  unsigned int v37; // r9d
  unsigned int *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // r8d
  unsigned int v43; // r10d
  __int64 v44; // r11
  int v45; // ecx
  unsigned int v46; // r9d
  unsigned int *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // eax
  unsigned int v51; // r8d
  unsigned int v52; // r10d
  __int64 v53; // r11
  int v54; // ecx
  unsigned int v55; // r9d
  unsigned int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // eax
  unsigned int v60; // r8d
  unsigned int v61; // r10d
  __int64 v62; // r11
  int v63; // ecx
  unsigned int v64; // r9d
  unsigned int *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140029120[128];
#define v68 (*(__int64 (*))(void *)(sr_frame_140029120 + 0)) /* [rsp+0h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_140029120 + 8)) /* [rsp+8h] */
#define v70 (*(int (*))(void *)(sr_frame_140029120 + 96)) /* [rsp+60h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_140029120 + 112)) /* [rsp+70h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_140029120 + 120)) /* [rsp+78h] */

  v0 = dword_140404A6C[460788389];
  v1 = dword_140404A6C[460788388];
  v2 = 0;
  if ( (int)dword_140404A6C[460788389] > 0 )
  {
    v3 = dword_140404A6C[460788387];
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
            v0 = dword_140404A6C[460788389];
          }
          ++v5;
          --v6;
        }
        while ( v6 );
        v1 = dword_140404A6C[460788388];
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
    v19 = dword_140404A6C[421769141];
    v20 = 0;
    v69 = 0;
    do
    {
      v21 = 0;
      v72 = 0;
      if ( v1 >= 0 )
      {
        v22 = dword_140404A6C[460788387];
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
                      v37 = *(unsigned __int16 *)((char *)&dword_140404A6C[451221716] + 2 * (v27 + i));
                      v38 = &dword_140404A6C[421769143];
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
                      while ( (__int64)v38 < (__int64)&dword_140404A6C[421781431] );
                      if ( v36 < 4096 )
                      {
                        v40 = 3 * v39;
                        v19 = v36 + 1;
                        dword_140404A6C[v40 + 421769142] = v37;
                        dword_140404A6C[v40 + 421769143] = v34;
                        dword_140404A6C[v40 + 421769144] = v33;
                        dword_140404A6C[421769141] = v36 + 1;
                      }
                      else
                      {
                        LOWORD(v36) = 0;
                      }
LABEL_46:
                      *(_WORD *)((char *)&dword_140404A6C[451221716] + 2 * (v27 + i)) = v36 + 0x8000;
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
                      v46 = *(unsigned __int16 *)((char *)&dword_140404A6C[451221716] + 2 + 2 * (v27 + i));
                      v47 = &dword_140404A6C[421769143];
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
                      while ( (__int64)v47 < (__int64)&dword_140404A6C[421781431] );
                      if ( v45 < 4096 )
                      {
                        v49 = 3 * v48;
                        dword_140404A6C[v49 + 421769142] = v46;
                        v19 = v45 + 1;
                        dword_140404A6C[v49 + 421769143] = v43;
                        dword_140404A6C[v49 + 421769144] = v42;
                        dword_140404A6C[421769141] = v45 + 1;
                      }
                      else
                      {
                        LOWORD(v45) = 0;
                      }
LABEL_64:
                      *(_WORD *)((char *)&dword_140404A6C[451221716] + 2 + 2 * (v27 + i)) = v45 + 0x8000;
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
                      v55 = *(unsigned __int16 *)((char *)&dword_140404A6C[451221717] + 2 * (v27 + i));
                      v56 = &dword_140404A6C[421769143];
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
                      while ( (__int64)v56 < (__int64)&dword_140404A6C[421781431] );
                      if ( v54 < 4096 )
                      {
                        v58 = 3 * v57;
                        dword_140404A6C[v58 + 421769142] = v55;
                        v19 = v54 + 1;
                        dword_140404A6C[v58 + 421769143] = v52;
                        dword_140404A6C[v58 + 421769144] = v51;
                        dword_140404A6C[421769141] = v54 + 1;
                      }
                      else
                      {
                        LOWORD(v54) = 0;
                      }
LABEL_82:
                      *(_WORD *)((char *)&dword_140404A6C[451221717] + 2 * (v27 + i)) = v54 + 0x8000;
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
                      v64 = *(unsigned __int16 *)((char *)&dword_140404A6C[451221717] + 2 + 2 * (v27 + i));
                      v65 = &dword_140404A6C[421769143];
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
                      while ( (__int64)v65 < (__int64)&dword_140404A6C[421781431] );
                      if ( v63 < 4096 )
                      {
                        v67 = 3 * v66;
                        dword_140404A6C[v67 + 421769142] = v64;
                        v19 = v63 + 1;
                        dword_140404A6C[v67 + 421769143] = v61;
                        dword_140404A6C[v67 + 421769144] = v60;
                        dword_140404A6C[421769141] = v63 + 1;
                      }
                      else
                      {
                        LOWORD(v63) = 0;
                      }
LABEL_100:
                      *(_WORD *)((char *)&dword_140404A6C[451221717] + 2 + 2 * (v27 + i)) = v63 + 0x8000;
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
            v22 = dword_140404A6C[460788387];
          }
          ++v21;
          --v23;
          v72 = v21;
          v68 = v23;
        }
        while ( v23 );
        LODWORD(result) = v70;
        v1 = dword_140404A6C[460788388];
      }
      result = (unsigned int)(result + 1);
      ++v20;
      v70 = result;
      v69 = v20;
    }
    while ( (int)result < (int)dword_140404A6C[460788389] );
  }
  return result;
}
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A4CF0940: using guessed type unsigned int;
// 1AE1C94F8: using guessed type unsigned int;
// 1AE1C94FC: using guessed type unsigned int;
// 1AE1C9500: using guessed type unsigned int;

//----- (0000000140037DE0) ----------------------------------------------------
void            sub_140037DE0(signed int a1, int a2, unsigned int a3, unsigned int a4, unsigned __int16 a5)
{
  /* Clean implementation: src/engine/world_grid.c, checked against the original executable
     (tools/native-compare suite grid). */
  extern void world_grid_insert(int layer, int x, int y, int z, unsigned short object);
  world_grid_insert(a1, a2, (int)a3, (int)a4, a5);
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
  __int64 v9; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int *v18; // r15
  __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  __int64 v25; // rax
  __int64 v26; // rax
  float v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm4_4
  float v35; // xmm7_4
  float v36; // xmm8_4
  float v37; // xmm3_4
  int v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned int *v7; // rax
  __int16 v8; // dx
  __int64 v9; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140077710[32];
#define v10 (*(int (*))(void *)(sr_frame_140077710 + 0)) /* [rsp+60h] */
#define v11 (*(char * (*))(void *)(sr_frame_140077710 + 8)) /* [rsp+68h] */
#define v12 (*(char * (*))(void *)(sr_frame_140077710 + 16)) /* [rsp+70h] */

  dword_140404A6C[451221605] = unk_140404208();
  dword_140404A6C[451221606] = unk_140404210(35633);
  dword_140404A6C[451221607] = unk_140404210(35632);
  v11 = (char *)sr_mem_1402b21b0;
  v12 = (char *)sr_mem_1402b2320;
  ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[451221606], 1, (const char *const *)&v11, nullptr);
  unk_140404200(dword_140404A6C[451221606], v0);
  unk_1404041F0(dword_140404A6C[451221605], dword_140404A6C[451221606], v1);
  ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[451221607], 1, (const char *const *)&v12, nullptr);
  unk_140404200(dword_140404A6C[451221607], v2);
  unk_1404041F0(dword_140404A6C[451221605], dword_140404A6C[451221607], v3);
  unk_1404042D0(dword_140404A6C[451221605]);
  qword_1404042E0(dword_140404A6C[451221605]);
  dword_140404A6C[451221610] = unk_140404288(dword_140404A6C[451221605], "modelviewprojectionmatrix");
  dword_140404A6C[451221618] = unk_140404288(dword_140404A6C[451221605], "tex_color");
  qword_140404308(dword_140404A6C[451221618], 0);
  unk_140404778(1, &dword_140404A6C[451221643]);
  unk_140404180(1, &dword_140404A6C[451221644]);
  unk_140404060(1, &dword_140404A6C[451221642]);
  qword_140404050(3553, dword_140404A6C[451221642]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9728);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9728);
  v10 = -1;
  v4 = 0;
  (*(void (           **)(__int64, _QWORD, __int64, __int64, int, _DWORD, int, int, int *))&dword_140404A6C[18215083])(
    3553,
    0,
    6408,
    1,
    1,
    0,
    6408,
    5121,
    &v10);
  unk_140404180(1, &dword_140404A6C[456807039]);
  unk_140404180(1, &dword_140404A6C[456807040]);
  unk_140404768(dword_140404A6C[451221643]);
  qword_140404170(34962, dword_140404A6C[456807039], v5);
  unk_140404190(34962, 2359296, 0, 35040);
  v7 = &dword_140404A6C[456807042];
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
  qword_140404170(34963, dword_140404A6C[456807040], v6);
  unk_140404190(34963, 196608, &dword_140404A6C[456807041], 35044);
  qword_140404170(34963, 0, v9);
  dword_140404A6C[456217206] = -1;
}
#undef v10
#undef v11
#undef v12

// 14007777A: variable 'v0' is possibly undefined
// 14007778C: variable 'v1' is possibly undefined
// 1400777B0: variable 'v2' is possibly undefined
// 1400777C2: variable 'v3' is possibly undefined
// 140077939: variable 'v5' is possibly undefined
// 1400779A2: variable 'v6' is possibly undefined
// 1400779CB: variable 'v9' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041F0: using guessed type __int64 (__fastcall *unk_1404041F0)(_QWORD, _QWORD, _QWORD);
// 140404200: using guessed type __int64 (__fastcall *unk_140404200)(_QWORD, _QWORD);
// 140404208: using guessed type __int64 (*unk_140404208)(void);
// 140404210: using guessed type __int64 (__fastcall *unk_140404210)(_QWORD);
// 140404288: using guessed type __int64 (__fastcall *unk_140404288)(_QWORD, _QWORD);
// 1404042D0: using guessed type __int64 (__fastcall *unk_1404042D0)(_QWORD);
// 1404042D8: using guessed type __int64 (__fastcall *unk_1404042D8)(_QWORD, _QWORD, _QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404768: using guessed type __int64 (__fastcall *unk_140404768)(_QWORD);
// 140404778: using guessed type __int64 (__fastcall *unk_140404778)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 1AD059444: using guessed type unsigned int;

//----- (00000001401885C0) ----------------------------------------------------
__int64            sub_1401885C0(int *a1, int a2, int a3)
{
  extern void world_street_range_triangles(void *list, int street, int range);
  world_street_range_triangles(a1, a2, a3);
  return 0;
}

//----- (0000000140188720) ----------------------------------------------------
__int64            sub_140188720(int *a1, float *a2, float *a3, int a4, int a5)
{
  /* Clean implementation: src/engine/world_street_query.c, checked against the original executable
     (tools/native-compare suite streetquery). The original returns a leftover register; no caller reads it. */
  extern void world_street_triangles_in_box(int *list, const float *box_min, const float *box_max, int street,
                                            int range);
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

//----- (0000000140003760) ----------------------------------------------------
__int64            sub_140003760(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // r9d
  signed int v7; // eax
  __int64 result; // rax

  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628800] = a3;
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628801] = a4;
  v4 = &dword_140404A6C[34 * a1 + 225391205];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628802] = v4[35] + v4[25];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628804] = v4[36] + v4[27];
  v5 = 34LL * a2;
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] = v4[26];
  v6 = dword_140404A6C[225628799];
  v7 = dword_140404A6C[v5 + 225391231];
  if ( (int)dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] > v7 )
  {
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] = v7;
    v6 = dword_140404A6C[225628799];
  }
  dword_140404A6C[12 * v6 + 225628805] = dword_140404A6C[v5 + 225391230]
                                       - dword_140404A6C[v5 + 225391242]
                                       - v4[25]
                                       - v4[35];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628806] = dword_140404A6C[v5 + 225391232]
                                                               - dword_140404A6C[v5 + 225391243]
                                                               - v4[27]
                                                               - dword_140404A6C[34 * a1 + 225391241];
  result = (int)dword_140404A6C[225628799];
  dword_140404A6C[12 * dword_140404A6C[225628799]++ + 225628807] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1760B9468: using guessed type unsigned int;

//----- (00000001400038E0) ----------------------------------------------------
__int64            sub_1400038E0(signed int a1, signed int a2, signed int a3, signed int a4)
{
  __int64 v5; // r11
  __int64 v7; // r10
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  signed int v13; // r8d
  int v14; // edx

  v5 = 34LL * a1;
  v7 = 34LL * a2;
  if ( (int)(dword_140404A6C[v7 + 225391230] - dword_140404A6C[v5 + 225391230]) <= (int)(dword_140404A6C[v7 + 225391232]
                                                                                       - dword_140404A6C[v5 + 225391232]) )
  {
    dword_140404A6C[396 * dword_140404A6C[225426046] + 225426058] = 1;
    dword_140404A6C[v5 + 225391237] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v5 + 225391240] < a3 )
      dword_140404A6C[v5 + 225391240] = a3;
    if ( (int)dword_140404A6C[v5 + 225391242] < a4 )
      dword_140404A6C[v5 + 225391242] = a4;
    dword_140404A6C[v7 + 225391239] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v7 + 225391240] < a3 )
      dword_140404A6C[v7 + 225391240] = a3;
    if ( (int)dword_140404A6C[v7 + 225391242] < a4 )
      dword_140404A6C[v7 + 225391242] = a4;
  }
  else
  {
    dword_140404A6C[396 * dword_140404A6C[225426046] + 225426058] = 0;
    dword_140404A6C[v5 + 225391236] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v5 + 225391241] < a4 )
      dword_140404A6C[v5 + 225391241] = a4;
    if ( (int)dword_140404A6C[v5 + 225391243] < a3 )
      dword_140404A6C[v5 + 225391243] = a3;
    dword_140404A6C[v7 + 225391238] = dword_140404A6C[225426046];
    if ( (int)dword_140404A6C[v7 + 225391241] < a4 )
      dword_140404A6C[v7 + 225391241] = a4;
    if ( (int)dword_140404A6C[v7 + 225391243] < a3 )
      dword_140404A6C[v7 + 225391243] = a3;
  }
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174] = (float)(int)(dword_140404A6C[v7 + 225391230]
                                                                                        - dword_140404A6C[v5 + 225391230]);
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426175] = 0;
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426176] = (float)(int)(dword_140404A6C[v7 + 225391232]
                                                                                        - dword_140404A6C[v5 + 225391232]);
  sub_14007A240(
    (__int64)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174],
    (float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426174]);
  *(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426177] = -*(float *)&dword_140404A6C[396 * dword_140404A6C[225426046] + 225426176];
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426178] = 0;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426179] = dword_140404A6C[396 * dword_140404A6C[225426046]
                                                                                + 225426174];
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426056] = a1;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426057] = a2;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426059] = a3;
  dword_140404A6C[396 * dword_140404A6C[225426046] + 225426060] = a4;
  v10 = 396LL * (int)dword_140404A6C[225426046];
  v11 = 34LL * (int)dword_140404A6C[v10 + 225426056];
  if ( dword_140404A6C[v10 + 225426058] )
  {
    v13 = dword_140404A6C[v11 + 225391230] - 256;
    result = (unsigned int)((unsigned __int64)(2454267027LL * v13) >> 32) >> 31;
    v14 = v13 / 56;
    if ( v13 / 56 )
    {
      switch ( v14 )
      {
        case 1:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Bunten Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 10;
          break;
        case 2:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Carmack Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 11;
          break;
        case 3:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "David Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 12;
          break;
        case 4:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Eugene Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 13;
          break;
        case 5:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Flinn Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 14;
          break;
        case 6:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Garriott Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 15;
          break;
        case 7:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Holland Ave");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 16;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_140404A6C[v10 + 225426047], "Abrash Ave");
      result = (int)dword_140404A6C[225426046];
      dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 9;
    }
  }
  else
  {
    result = (unsigned int)((int)(dword_140404A6C[v11 + 225391232] - 256) / 32);
    if ( (_DWORD)result )
    {
      switch ( (_DWORD)result )
      {
        case 1:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Second Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 1;
          break;
        case 2:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Third Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 2;
          break;
        case 3:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Fourth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 3;
          break;
        case 4:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Fifth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 4;
          break;
        case 5:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Sixth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 5;
          break;
        case 6:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Seventh Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 6;
          break;
        case 7:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Eighth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 7;
          break;
        case 8:
          strcpy((char *)&dword_140404A6C[v10 + 225426047], "Ninth Street");
          result = (int)dword_140404A6C[225426046];
          dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 8;
          break;
      }
    }
    else
    {
      strcpy((char *)&dword_140404A6C[v10 + 225426047], "First Street");
      result = (int)dword_140404A6C[225426046];
      dword_140404A6C[396 * dword_140404A6C[225426046] + 225426055] = 0;
    }
  }
  ++dword_140404A6C[225426046];
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 175FF3464: using guessed type unsigned int;

//----- (0000000140020130) ----------------------------------------------------
__int64            sub_140020130(int a1)
{
  __int64 v2; // rsi
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  int v5; // edi
  unsigned int v6; // ecx
  int v7; // edx
  int i; // ebx
  unsigned int v9; // r10d
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  int v14; // ebp
  unsigned int v15; // edi
  int v16; // ebx
  unsigned int v17; // edi
  unsigned int v18; // ebp
  int j; // ebx
  int v20; // ebp
  unsigned int v21; // edi
  int v22; // ebx
  int v23; // ebx
  unsigned int v24; // edi
  unsigned int v25; // ebp
  unsigned int v26; // r14d
  unsigned int v27; // ebx
  int v28; // r15d
  unsigned int v29; // edi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140020130[80];
#define v31 (*(__int64 (*))(void *)(sr_frame_140020130 + 0)) /* [rsp+0h] */
#define v32 (*(__int64 (*))(void *)(sr_frame_140020130 + 48)) /* [rsp+30h] */
#define v33 (*(__int64 (*))(void *)(sr_frame_140020130 + 56)) /* [rsp+38h] */
#define v34 (*(__int64 (*))(void *)(sr_frame_140020130 + 64)) /* [rsp+40h] */

  v2 = 34LL * a1;
  v32 = 0x1000100010001LL;
  v33 = 0x1000100010001LL;
  v3 = dword_140404A6C[v2 + 225391232];
  v4 = dword_140404A6C[v2 + 225391241];
  v5 = v3 - dword_140404A6C[v2 + 225391243];
  if ( v5 < (int)(v4 + v3) )
  {
    v6 = dword_140404A6C[v2 + 225391230];
    v7 = v6 + dword_140404A6C[v2 + 225391240];
    do
    {
      for ( i = v6 - dword_140404A6C[v2 + 225391242]; i < v7; v7 = v6 + dword_140404A6C[v2 + 225391240] )
      {
        sub_14000F830(0, i++, dword_140404A6C[v2 + 225391231], v5, 0x40000000u, &v32);
        v6 = dword_140404A6C[v2 + 225391230];
      }
      v4 = dword_140404A6C[v2 + 225391241];
      ++v5;
      v3 = dword_140404A6C[v2 + 225391232];
    }
    while ( v5 < (int)(v4 + v3) );
  }
  v9 = dword_140404A6C[v2 + 225391238];
  v10 = dword_140404A6C[v2 + 225391236] == -1;
  v32 = 0;
  v33 = 0;
  v11 = !v10 + 1;
  if ( dword_140404A6C[v2 + 225391237] == -1 )
    v11 = !v10;
  v12 = v11 + 1;
  if ( v9 == -1 )
    v12 = v11;
  v13 = v12 + 1;
  if ( dword_140404A6C[v2 + 225391239] == -1 )
    v13 = v12;
  if ( dword_140404A6C[v2 + 225391236] == -1 )
  {
    v14 = dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240];
    v15 = dword_140404A6C[v2 + 225391231];
    v16 = v3 - dword_140404A6C[v2 + 225391243] - 1;
    if ( v16 < (int)(v4 + v3 + 1) )
    {
      do
      {
        sub_14000F830(0, v14, v15 + 1, v16, dword_140404A6C[19928887] | 0x80000000, &v32);
        v3 = dword_140404A6C[v2 + 225391232];
        ++v16;
        v4 = dword_140404A6C[v2 + 225391241];
      }
      while ( v16 < (int)(v4 + v3 + 1) );
      v9 = dword_140404A6C[v2 + 225391238];
    }
  }
  if ( v9 == -1 )
  {
    v17 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391240];
    v18 = dword_140404A6C[v2 + 225391231];
    for ( j = v3 - dword_140404A6C[v2 + 225391243] - 1; j < (int)(v4 + v3 + 1); v4 = dword_140404A6C[v2 + 225391241] )
    {
      sub_14000F830(0, v17 - 1, v18 + 1, j, dword_140404A6C[19928887] | 0x80000000, &v32);
      v3 = dword_140404A6C[v2 + 225391232];
      ++j;
    }
  }
  if ( dword_140404A6C[v2 + 225391237] == -1 )
  {
    v20 = v4 + v3;
    v21 = dword_140404A6C[v2 + 225391231];
    v22 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391242] - 1;
    if ( v22 < (int)(dword_140404A6C[v2 + 225391240] + dword_140404A6C[v2 + 225391230] + 1) )
    {
      do
        sub_14000F830(0, v22++, v21 + 1, v20, dword_140404A6C[19928887] | 0x80000000, &v32);
      while ( v22 < (int)(dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240] + 1) );
    }
  }
  if ( dword_140404A6C[v2 + 225391239] == -1 )
  {
    v23 = dword_140404A6C[v2 + 225391230] - dword_140404A6C[v2 + 225391242] - 1;
    v24 = dword_140404A6C[v2 + 225391232] - dword_140404A6C[v2 + 225391243];
    v25 = dword_140404A6C[v2 + 225391231];
    if ( v23 < (int)(dword_140404A6C[v2 + 225391240] + dword_140404A6C[v2 + 225391230] + 1) )
    {
      do
        sub_14000F830(0, v23++, v25 + 1, v24 - 1, dword_140404A6C[19928887] | 0x80000000, &v32);
      while ( v23 < (int)(dword_140404A6C[v2 + 225391230] + dword_140404A6C[v2 + 225391240] + 1) );
    }
  }
  if ( v13 > 2 )
  {
    v26 = dword_140404A6C[v2 + 225391230];
    v27 = dword_140404A6C[v2 + 225391232];
    v28 = a1 << 12;
    v29 = dword_140404A6C[v2 + 225391231] + 1;
    if ( dword_140404A6C[v2 + 225391238] != -1 )
      sub_140017260(0, v26 + dword_140404A6C[v2 + 225391240], v29, v27 + dword_140404A6C[v2 + 225391241], v28 | 1);
    if ( dword_140404A6C[v2 + 225391236] != -1 )
      sub_140017260(
        0,
        v26 - dword_140404A6C[v2 + 225391240] - 1,
        v29,
        v27 - dword_140404A6C[v2 + 225391241] - 1,
        v28 | 0x801);
    if ( dword_140404A6C[v2 + 225391239] != -1 )
      sub_140017260(
        0,
        v26 - dword_140404A6C[v2 + 225391240] - 1,
        v29,
        v27 + dword_140404A6C[v2 + 225391241],
        v28 | 0x1000401);
    if ( dword_140404A6C[v2 + 225391237] != -1 )
      sub_140017260(
        0,
        v26 + dword_140404A6C[v2 + 225391240],
        v29,
        v27 - dword_140404A6C[v2 + 225391241] - 1,
        v28 | 0x1000C01);
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v31
#undef v32
#undef v33
#undef v34

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014002A680) ----------------------------------------------------
__int64            sub_14002A680()
{
  extern void world_build_race_track(void);
  /* src/engine/world_streets.c; the original's return value is the street adder's, no caller reads it. */
  world_build_race_track();
  return 0;
}

//----- (000000014003FA40) ----------------------------------------------------
unsigned int *           sub_14003FA40(int a1, int a2, float a3)
{
  __int64 v4; // rcx
  unsigned int *result; // rax
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // r8

  if ( (unsigned int)a1 <= 0xFFE && (unsigned int)a2 <= 0xFFE && !dword_140404A6C[284024893] )
  {
    v4 = a1 + (a2 << 12);
    result = &dword_140404A6C[225391205];
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254388963] )
      *(float *)&dword_140404A6C[v4 + 254388963] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254388964] )
      *(float *)&dword_140404A6C[v4 + 254388964] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254393059] )
      *(float *)&dword_140404A6C[v4 + 254393059] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254393060] )
      *(float *)&dword_140404A6C[v4 + 254393060] = a3;
    if ( a1 >= (int)dword_140404A6C[225391222]
      && a1 <= (int)dword_140404A6C[225391225]
      && a2 >= (int)dword_140404A6C[225391224]
      && a2 <= (int)dword_140404A6C[225391227] )
    {
      v6 = a1 + 1024;
      v7 = a2 + 1024;
      if ( (unsigned int)v6 <= 0xFFF && (unsigned int)v7 <= 0xFFF )
      {
        v8 = (v6 >> 2) + (v7 >> 2 << 10);
        *(_WORD *)(*(_QWORD *)&dword_140404A6C[272248185] + 2 * v8) &= ~(1 << ((v6 & 3) + 4 * (a2 & 3)));
        return (unsigned int *)((v6 & 3) + 4 * (a2 & 3u));
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 181290050: using guessed type unsigned int;

//----- (000000014008C030) ----------------------------------------------------
void sub_14008C030()
{
  int v0; // ebp
  unsigned int *v1; // rsi
  __int64 i; // r14
  int v3; // eax
  signed int v4; // ebx
  __int64 j; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // xmm0_8
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdi

  v0 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v1 = &dword_140404A6C[225654128];
    for ( i = 0; ; i += 4673 )
    {
      if ( *(v1 - 12925) == 3 )
      {
        v3 = *v1;
        v4 = 0;
        for ( j = 0; v4 < (int)*v1; v3 = *v1 )
        {
          if ( (rand() & 7) != 0 )
          {
            ++v4;
            ++j;
          }
          else
          {
            v6 = (int)*v1;
            *v1 = v6 - 1;
            v7 = 3 * (i + v6);
            v8 = *(_QWORD *)&dword_140404A6C[3 * i + 225654126 + 3 * v6];
            v9 = 3 * (i + j);
            *(_QWORD *)&dword_140404A6C[v9 + 225654129] = v8;
            dword_140404A6C[v9 + 225654131] = dword_140404A6C[v7 + 225654128];
          }
        }
        if ( v3 < 8 )
          break;
      }
LABEL_24:
      ++v0;
      v1 += 14019;
      if ( v0 >= (int)dword_140404A6C[225641186] )
        return;
    }
    while ( 1 )
    {
      v10 = rand() & 0xF;
      if ( v10 < 2 )
        break;
      if ( v10 >= 6 )
      {
        if ( v10 < 0xA )
        {
          v11 = 15;
          goto LABEL_22;
        }
        if ( v10 < 0xD )
        {
          v11 = 9;
          goto LABEL_22;
        }
        if ( v10 < 0xF )
        {
          v11 = 6;
          goto LABEL_22;
        }
        LODWORD(v11) = 4;
        v12 = 4;
        if ( (rand() & 0xF) == 0 )
        {
          v11 = 5;
          goto LABEL_22;
        }
      }
      else
      {
        LODWORD(v11) = 0;
        v12 = 0;
      }
LABEL_23:
      dword_140404A6C[3 * i + 225654129 + 3 * (int)*v1] = v11;
      dword_140404A6C[3 * i + 225654130 + 3 * (int)*v1] = dword_140404A6C[24944 * v12 + 346707730];
      dword_140404A6C[3 * i + 225654131 + 3 * (int)(*v1)++] = rand() % 6;
      if ( (int)*v1 >= 8 )
        goto LABEL_24;
    }
    v11 = 7;
LABEL_22:
    v12 = v11;
    goto LABEL_23;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014008C310) ----------------------------------------------------
unsigned int *sub_14008C310()
{
  unsigned int *result; // rax
  signed int v1; // ecx
  signed int v2; // r8d
  unsigned int v3; // r10d
  __int64 v4; // r9
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // r12d
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // r11d
  __int64 v23; // rdx
  __int64 v24; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned int *)&retaddr;
  v1 = dword_140404A6C[225641186];
  v2 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v3 = dword_140404A6C[278539038];
    v4 = 0;
    v5 = dword_140404A6C[278536502];
    v6 = dword_140404A6C[278532698];
    v7 = dword_140404A6C[278533966];
    v8 = dword_140404A6C[278535234];
    v9 = dword_140404A6C[278526358];
    v10 = dword_140404A6C[278525090];
    result = &dword_140404A6C[225654128];
    v11 = dword_140404A6C[278531430];
    v12 = dword_140404A6C[278530162];
    do
    {
      if ( *(result - 12925) == 8 )
      {
        *result = 0;
        result[1] = 11;
        dword_140404A6C[3 * v4 + 225654130] = v8;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v13 = (int)*result;
        *result = v13 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v13] = 12;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v5;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v14 = (int)*result;
        *result = v14 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v14] = 7;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v12;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v15 = (int)*result;
        *result = v15 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v15] = 8;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v11;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v16 = (int)*result;
        *result = v16 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v16] = 1;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = dword_140404A6C[278522554];
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v17 = (int)*result;
        *result = v17 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v17] = 2;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = dword_140404A6C[278523822];
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v18 = (int)*result;
        *result = v18 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v18] = 3;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v10;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v19 = (int)*result;
        *result = v19 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v19] = 4;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v9;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v20 = (int)*result;
        *result = v20 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v20] = 9;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v6;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v21 = (int)*result;
        *result = v21 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v21] = 10;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v7;
        v22 = dword_140404A6C[278537770];
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v23 = (int)*result;
        *result = v23 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v23] = 14;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v3;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)*result] = 0;
        v24 = (int)*result;
        *result = v24 + 1;
        dword_140404A6C[3 * v4 + 225654132 + 3 * v24] = 13;
        dword_140404A6C[3 * v4 + 225654130 + 3 * (int)*result] = v22;
        dword_140404A6C[3 * v4 + 225654131 + 3 * (int)(*result)++] = 0;
        v1 = dword_140404A6C[225641186];
      }
      ++v2;
      v4 += 4673;
      result += 14019;
    }
    while ( v2 < v1 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1760C55F4: using guessed type unsigned int;
// 182A7F554: using guessed type unsigned int;
// 182A80924: using guessed type unsigned int;
// 182A81CF4: using guessed type unsigned int;
// 182A830C4: using guessed type unsigned int;
// 182A86C34: using guessed type unsigned int;
// 182A88004: using guessed type unsigned int;
// 182A893D4: using guessed type unsigned int;
// 182A8A7A4: using guessed type unsigned int;
// 182A8BB74: using guessed type unsigned int;
// 182A8CF44: using guessed type unsigned int;
// 182A8E314: using guessed type unsigned int;
// 182A8F6E4: using guessed type unsigned int;

//----- (000000014008D150) ----------------------------------------------------
__int64            sub_14008D150(int a1, float *a2, float *a3)
{
  __int64 v5; // r11
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  int v9; // esi
  int v10; // r9d
  int v11; // r10d
  int v12; // edx
  __int64 v13; // rdx
  int v14; // eax
  __int64 result; // rax

  v5 = 24LL * a1;
  v6 = dword_140404A6C[v5 + 225171871];
  v7 = dword_140404A6C[v5 + 225171872];
  v8 = dword_140404A6C[v5 + 225171870];
  v9 = dword_140404A6C[v5 + 225171873];
  v10 = v6 - 1;
  v11 = v7 - 1;
  if ( v8 == 1 )
  {
    v12 = v7 - 1;
  }
  else
  {
    v12 = 0;
    if ( v8 == 2 )
    {
LABEL_7:
      v13 = dword_140404A6C[v5 + 225171870];
      do
      {
        v14 = v6;
        v6 = v7;
        v7 = v14;
        --v13;
      }
      while ( v13 );
      goto LABEL_9;
    }
  }
  v11 = v6 - 1;
  v10 = 0;
  if ( v8 != 3 )
  {
    v11 = 0;
    v10 = v12;
  }
  if ( v8 > 0 )
    goto LABEL_7;
LABEL_9:
  *a2 = (float)(int)(dword_140404A6C[v5 + 225171867] - v10) * 4.0;
  a2[1] = (float)(int)dword_140404A6C[v5 + 225171868] * 4.0;
  result = dword_140404A6C[v5 + 225171869] - v11;
  a2[2] = (float)(int)result * 4.0;
  *a3 = (float)v6 * 4.0;
  a3[2] = (float)v7 * 4.0;
  a3[1] = (float)v9 * 4.0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D4A90) ----------------------------------------------------
__int64            sub_1400D4A90(int a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // r10d
  int v5; // ecx
  unsigned int *v6; // rax
  int v7; // edx
  __int64 v8; // rdx
  unsigned int *v9; // r11
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r11
  int v14; // eax

  v2 = a2;
  v3 = a1;
  if ( a1 == a2 )
    return 0xFFFFFFFFLL;
  v4 = dword_140404A6C[193074052];
  v5 = 0;
  if ( (int)dword_140404A6C[193074052] <= 0 )
  {
LABEL_9:
    v8 = 3 * v3;
    v9 = &dword_140404A6C[3 * v2 + 193070965];
    if ( dword_140404A6C[3 * v3 + 193070980] == v9[15] )
    {
      dword_140404A6C[13 * dword_140404A6C[193074052] + 193074055] = 1;
      v4 = dword_140404A6C[193074052];
      if ( (int)dword_140404A6C[v8 + 193070982] > (int)v9[17] )
      {
        v11 = v3;
        LODWORD(v3) = v2;
        LODWORD(v2) = v11;
      }
    }
    else if ( dword_140404A6C[v8 + 193070982] != v9[17] )
    {
      return 0xFFFFFFFFLL;
    }
    v12 = 3LL * (int)v3;
    v13 = 3LL * (int)v2;
    if ( dword_140404A6C[v12 + 193070982] == dword_140404A6C[v13 + 193070982] )
    {
      dword_140404A6C[13 * v4 + 193074055] = 0;
      v4 = dword_140404A6C[193074052];
      if ( (int)dword_140404A6C[v12 + 193070980] > (int)dword_140404A6C[v13 + 193070980] )
      {
        v14 = v3;
        LODWORD(v3) = v2;
        LODWORD(v2) = v14;
      }
    }
    dword_140404A6C[13 * v4 + 193074053] = v3;
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074054] = v2;
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074056] = dword_140404A6C[193070975];
    dword_140404A6C[13 * dword_140404A6C[193074052] + 193074057] = dword_140404A6C[193070976];
    strcpy((char *)&dword_140404A6C[13 * dword_140404A6C[193074052] + 193074058], "Street");
    return dword_140404A6C[193074052]++;
  }
  v6 = &dword_140404A6C[193074054];
  while ( 1 )
  {
    v7 = *(v6 - 1);
    if ( v7 == (_DWORD)v3 && *v6 == (_DWORD)v2 )
      break;
    if ( v7 == (_DWORD)v2 && *v6 == (_DWORD)v3 )
      break;
    ++v5;
    v6 += 13;
    if ( v5 >= (int)dword_140404A6C[193074052] )
      goto LABEL_9;
  }
  return (unsigned int)v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16E486868: using guessed type unsigned int;
// 16E48686C: using guessed type unsigned int;
// 16E48987C: using guessed type unsigned int;

//----- (000000014011B9F0) ----------------------------------------------------
_BOOL8            sub_14011B9F0(int a1, float *a2, float a3)
{
  __int64 v3; // rcx
  float v4; // xmm1_4
  float v5; // xmm1_4
  _BOOL8 result; // rax

  v3 = 14019LL * a1;
  result = false;
  if ( *a2 >= (float)(*(float *)&dword_140404A6C[v3 + 225641219] - a3)
    && *a2 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641222]) )
  {
    v4 = a2[1];
    if ( v4 >= (float)(*(float *)&dword_140404A6C[v3 + 225641220] - a3)
      && v4 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641223]) )
    {
      v5 = a2[2];
      if ( v5 >= (float)(*(float *)&dword_140404A6C[v3 + 225641221] - a3)
        && v5 < (float)(a3 + *(float *)&dword_140404A6C[v3 + 225641224]) )
      {
        return true;
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140130000) ----------------------------------------------------
__int64 sub_140130000()
{
  extern int traffic_random_street(void);
  return (unsigned int)traffic_random_street();
}

//----- (0000000140139740) ----------------------------------------------------
__int64            sub_140139740(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  int v3; // r12d
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // eax
  __m128i v7; // xmm7
  float *v8; // r15
  int v9; // r14d
  signed int v10; // eax
  float v11; // xmm7_4
  float v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  bool v15; // zf
  float v16; // xmm2_4
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  float v22; // xmm2_4
  unsigned int v23; // ecx
  float v24; // xmm4_4
  float v25; // xmm8_4
  float v26; // xmm3_4
  float v27; // xmm9_4
  unsigned int v28; // eax
  __m128i v29; // xmm5
  __int64 result; // rax
  float v31; // xmm5_4
  __int64 v32; // rdx
  float v33; // xmm0_4
  float v34; // xmm2_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  float v39; // xmm2_4
  __int64 v40; // rcx
  __int64 v41; // rcx

  v1 = 396LL * a1;
  v2 = dword_140404A6C[v1 + 225426059];
  v3 = dword_140404A6C[v1 + 225426060];
  v4 = 34LL * (int)dword_140404A6C[v1 + 225426057];
  v5 = 34LL * (int)dword_140404A6C[v1 + 225426056];
  if ( dword_140404A6C[v1 + 225426058] )
    v6 = dword_140404A6C[v4 + 225391232]
       - dword_140404A6C[v5 + 225391241]
       - dword_140404A6C[v5 + 225391232]
       - dword_140404A6C[v4 + 225391243];
  else
    v6 = dword_140404A6C[v4 + 225391230]
       - dword_140404A6C[v5 + 225391240]
       - dword_140404A6C[v5 + 225391230]
       - dword_140404A6C[v4 + 225391242];
  v7 = _mm_cvtsi32_si128(v6);
  v8 = (float *)&dword_140404A6C[v1 + 225426174];
  v9 = 0;
  v10 = dword_140404A6C[v4 + 225391230] - dword_140404A6C[v5 + 225391230];
  dword_140404A6C[v1 + 225426175] = 0;
  v11 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v7), f32)[0] * 4.0;
  *v8 = (float)v10;
  *(float *)&dword_140404A6C[v1 + 225426176] = (float)(int)(dword_140404A6C[v4 + 225391232]
                                                          - dword_140404A6C[v5 + 225391232]);
  sub_14007A240((__int64)v8, v8);
  v12 = *v8;
  *(_QWORD *)&dword_140404A6C[v1 + 225426177] = COERCE_UNSIGNED_INT(-*(float *)&dword_140404A6C[v1 + 225426176]);
  *(float *)&dword_140404A6C[v1 + 225426179] = v12;
  if ( dword_140404A6C[v1 + 225426058] )
    v13 = dword_140404A6C[v5 + 225391230];
  else
    v13 = dword_140404A6C[v5 + 225391230] + dword_140404A6C[v5 + 225391240];
  *(float *)&dword_140404A6C[v1 + 225426180] = (float)v13 * 4.0;
  if ( dword_140404A6C[v1 + 225426058] == 1 )
    v14 = dword_140404A6C[v5 + 225391232] + dword_140404A6C[v5 + 225391241];
  else
    v14 = dword_140404A6C[v5 + 225391232];
  *(float *)&dword_140404A6C[v1 + 225426182] = (float)v14 * 4.0;
  v15 = dword_140404A6C[v1 + 225426058] == 0;
  if ( dword_140404A6C[v1 + 225426058] )
    v16 = (float)v3 * 4.0;
  else
    v16 = (float)(int)v2 * -4.0;
  *(float *)&dword_140404A6C[v1 + 225426180] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426177])
                                             + *(float *)&dword_140404A6C[v1 + 225426180];
  *(float *)&dword_140404A6C[v1 + 225426181] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426178])
                                             + *(float *)&dword_140404A6C[v1 + 225426181];
  *(float *)&dword_140404A6C[v1 + 225426182] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426179])
                                             + *(float *)&dword_140404A6C[v1 + 225426182];
  v17 = dword_140404A6C[v4 + 225391230];
  if ( v15 )
    v17 -= dword_140404A6C[v4 + 225391242];
  *(float *)&dword_140404A6C[v1 + 225426183] = (float)v17 * 4.0;
  v18 = dword_140404A6C[v4 + 225391232];
  if ( dword_140404A6C[v1 + 225426058] == 1 )
    v18 -= dword_140404A6C[v4 + 225391243];
  *(float *)&dword_140404A6C[v1 + 225426185] = (float)v18 * 4.0;
  v19 = dword_140404A6C[v5 + 225391231];
  v20 = dword_140404A6C[v4 + 225391231];
  if ( v19 >= v20 )
  {
    *(float *)&dword_140404A6C[v1 + 225426181] = (float)((float)v20 + 1.0) * 4.0;
    v21 = dword_140404A6C[v5 + 225391231];
  }
  else
  {
    *(float *)&dword_140404A6C[v1 + 225426181] = (float)((float)v19 + 1.0) * 4.0;
    v21 = dword_140404A6C[v4 + 225391231];
  }
  *(float *)&dword_140404A6C[v1 + 225426184] = (float)((float)v21 * 4.0) + 8.0;
  if ( dword_140404A6C[v1 + 225426058] )
    v22 = (float)(int)v2 * -4.0;
  else
    v22 = (float)v3 * 4.0;
  *(float *)&dword_140404A6C[v1 + 225426183] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426177])
                                             + *(float *)&dword_140404A6C[v1 + 225426183];
  *(float *)&dword_140404A6C[v1 + 225426184] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426178])
                                             + *(float *)&dword_140404A6C[v1 + 225426184];
  *(float *)&dword_140404A6C[v1 + 225426185] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426179])
                                             + *(float *)&dword_140404A6C[v1 + 225426185];
  v23 = dword_140404A6C[v1 + 225426058];
  if ( !v23 )
  {
    v24 = (float)(int)(dword_140404A6C[v5 + 225391230] + dword_140404A6C[v5 + 225391240]) * 4.0;
    v25 = v24;
    v26 = (float)((float)(int)(dword_140404A6C[v5 + 225391231] + 1) * 4.0) + 0.125;
    v27 = v26;
LABEL_25:
    v28 = dword_140404A6C[v5 + 225391232];
    goto LABEL_26;
  }
  v24 = (float)(int)dword_140404A6C[v5 + 225391230] * 4.0;
  v25 = v24;
  v26 = (float)((float)(int)(dword_140404A6C[v5 + 225391231] + 1) * 4.0) + 0.125;
  v27 = v26;
  if ( v23 != 1 )
    goto LABEL_25;
  v28 = dword_140404A6C[v5 + 225391232] + dword_140404A6C[v5 + 225391241];
LABEL_26:
  v29 = _mm_cvtsi32_si128(v28);
  result = 0;
  dword_140404A6C[v1 + 225426061] = 0;
  v31 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0] * 4.0;
  if ( (int)v2 > 0 )
  {
    v32 = v2;
    do
    {
      v33 = (float)(int)v2;
      LODWORD(v2) = v2 - 1;
      dword_140404A6C[7 * (int)result + 225426062 + v1] = 0;
      v34 = 2.0 - (float)(v33 * 4.0);
      v35 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426063] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v24;
      *(float *)((char *)&dword_140404A6C[225426064] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v26;
      *(float *)((char *)&dword_140404A6C[225426065] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v36 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v24;
      *(float *)((char *)&dword_140404A6C[225426067] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v26;
      *(float *)((char *)&dword_140404A6C[225426068] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v37 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v37) = (float)(v11 * *v8)
                                                            + *(float *)((char *)&dword_140404A6C[225426066] + v37);
      *(float *)((char *)&dword_140404A6C[225426067] + v37) = (float)(v11 * v8[1])
                                                            + *(float *)((char *)&dword_140404A6C[225426067] + v37);
      *(float *)((char *)&dword_140404A6C[225426068] + v37) = (float)(v11 * v8[2])
                                                            + *(float *)((char *)&dword_140404A6C[225426068] + v37);
      result = dword_140404A6C[v1 + 225426061] + 1;
      dword_140404A6C[v1 + 225426061] = result;
      --v32;
    }
    while ( v32 );
  }
  if ( v3 > 0 )
  {
    do
    {
      ++v9;
      dword_140404A6C[7 * (int)result + 225426062 + v1] = 1;
      v38 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      v39 = (float)((float)v9 * 4.0) - 2.0;
      *(float *)((char *)&dword_140404A6C[225426063] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v25;
      *(float *)((char *)&dword_140404A6C[225426064] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v27;
      *(float *)((char *)&dword_140404A6C[225426065] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v40 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v25;
      *(float *)((char *)&dword_140404A6C[225426067] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v27;
      *(float *)((char *)&dword_140404A6C[225426068] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v41 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v41) = (float)(v11 * *v8)
                                                            + *(float *)((char *)&dword_140404A6C[225426066] + v41);
      *(float *)((char *)&dword_140404A6C[225426067] + v41) = (float)(v11 * v8[1])
                                                            + *(float *)((char *)&dword_140404A6C[225426067] + v41);
      *(float *)((char *)&dword_140404A6C[225426068] + v41) = (float)(v11 * v8[2])
                                                            + *(float *)((char *)&dword_140404A6C[225426068] + v41);
      result = dword_140404A6C[v1 + 225426061] + 1;
      dword_140404A6C[v1 + 225426061] = result;
    }
    while ( v9 < v3 );
  }
  return result;
}

// 14013A54F: variable 'v61' is possibly undefined
// 14013A581: variable 'v62' is possibly undefined
// 14013A5C0: variable 'v63' is possibly undefined
// 14013A638: variable 'v65' is possibly undefined
// 14013A688: variable 'v66' is possibly undefined
// 14013C2E2: variable 'v134' is possibly undefined
// 14013C2E2: variable 'v133' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140278F50: using guessed type __int128 xmmword_140278F50;
// 140278FD0: using guessed type __int128 xmmword_140278FD0;
// 140279010: using guessed type __int128 xmmword_140279010;
// 14030186C: using guessed type int dword_14030186C;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404208: using guessed type __int64 (*unk_140404208)(void);
// 140404210: using guessed type __int64 (__fastcall *unk_140404210)(_QWORD);
// 1404046D0: using guessed type __int64 (__fastcall *unk_1404046D0)(_QWORD, _QWORD);
// 140404700: using guessed type __int64 (__fastcall *unk_140404700)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 151E4618C: using guessed type unsigned int;
// 15414F280: using guessed type unsigned int;
// 15414F290: using guessed type unsigned int;
// 15414F2A0: using guessed type unsigned int;
// 15414F2B0: using guessed type unsigned int;
// 15414F2C0: using guessed type unsigned int;
// 15414F2D0: using guessed type unsigned int;
// 15414F2E0: using guessed type unsigned int;
// 15414F2F0: using guessed type unsigned int;
// 15414F300: using guessed type unsigned int;
// 15414F310: using guessed type unsigned int;
// 15414F320: using guessed type unsigned int;
// 15414F330: using guessed type unsigned int;
// 15414F340: using guessed type unsigned int;
// 15414F350: using guessed type unsigned int;
// 15414F360: using guessed type unsigned int;
// 15414F370: using guessed type unsigned int;
// 15414F380: using guessed type unsigned int;
// 15414F390: using guessed type unsigned int;
// 15414F3A0: using guessed type unsigned int;
// 15414F3B0: using guessed type unsigned int;
// 15414F3C0: using guessed type unsigned int;
// 15414F3D0: using guessed type unsigned int;
// 15414F3E0: using guessed type unsigned int;
// 15414F3F0: using guessed type unsigned int;
// 15414F400: using guessed type unsigned int;
// 15414F410: using guessed type unsigned int;
// 15414F420: using guessed type unsigned int;
// 15414F430: using guessed type unsigned int;
// 15414F440: using guessed type unsigned int;
// 15414F450: using guessed type unsigned int;
// 15414F460: using guessed type unsigned int;
// 15414F470: using guessed type unsigned int;
// 15414F480: using guessed type unsigned int;
// 15414F490: using guessed type unsigned int;
// 15414F4A0: using guessed type unsigned int;
// 15414F4B0: using guessed type unsigned int;
// 154150060: using guessed type unsigned int;
// 154150240: using guessed type unsigned int;
// 154150250: using guessed type unsigned int;
// 1541502E0: using guessed type unsigned int;
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;
// 1810FF788: using guessed type unsigned int;
// 18399EBB4: using guessed type unsigned int;
// 18399EBB8: using guessed type unsigned int;
// 183E97740: using guessed type unsigned int;
// 183E97744: using guessed type unsigned int;
// 183E97748: using guessed type unsigned int;
// 183E9774C: using guessed type unsigned int;
// 183E97750: using guessed type unsigned int;
// 183E97760: using guessed type unsigned int;
// 183E97770: using guessed type unsigned int;
// 183E97774: using guessed type unsigned int;
// 183E97790: using guessed type unsigned int;
// 183E97794: using guessed type unsigned int;
// 183E97798: using guessed type unsigned int;
// 183E977A0: using guessed type unsigned int;
// 183E977A4: using guessed type unsigned int;
// 183E98C4C: using guessed type unsigned int;
// 183E9908C: using guessed type unsigned int;
// 183E99094: using guessed type unsigned int;
// 183E990A0: using guessed type unsigned int;
// 183E990A4: using guessed type unsigned int;
// 183EBB768: using guessed type unsigned int;
// 183EBC350: using guessed type unsigned int;
// 183EBC3DC: using guessed type unsigned int;
// 183EBF0F4: using guessed type unsigned int;
// 183EBF128: using guessed type unsigned int;
// 183EBF170: using guessed type unsigned int;
// 1862AE010: using guessed type unsigned int;
// 187BDE460: using guessed type unsigned int;
// 1A4CFF8D0: using guessed type unsigned int;
// 1A7971DA0: using guessed type unsigned int;
// 1A7971DA4: using guessed type unsigned int;
// 1A7971DD0: using guessed type unsigned int;
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;
// 1B0037428: using guessed type int[];
// 1B003742C: using guessed type unsigned int;

//----- (0000000140188900) ----------------------------------------------------
__int64            sub_140188900(int *a1, float *a2, float *a3, int a4)
{
  /* Clean implementation: src/engine/world_street_query.c, checked against the original executable
     (tools/native-compare suite streetquery). The original returns a leftover register; its caller ignores it. */
  extern void world_street_triangles(int *list, const float *box_min, const float *box_max, int ranges);
  world_street_triangles(a1, a2, a3, a4);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014018C250) ----------------------------------------------------
void            sub_14018C250(int a1)
{
  extern void traffic_list_street_cars(int street);
  traffic_list_street_cars(a1);
}

