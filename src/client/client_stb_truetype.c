#include "shared_client.h"

//----- (00000001401740A0) ----------------------------------------------------
__int64            sub_1401740A0(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int v8;
  FILE *v9;
  unsigned __int64 (           *v13)(__int64, __int64, int);
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401740A0[176];
#define v11 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_1401740A0 + 48)) /* [rsp+30h] */
#define v14 (*(FILE * (*))(void *)(sr_frame_1401740A0 + 72)) /* [rsp+48h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 80)) /* [rsp+50h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 96)) /* [rsp+60h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 112)) /* [rsp+70h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_1401740A0 + 128)) /* [rsp+80h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 144)) /* [rsp+90h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_1401740A0 + 160)) /* [rsp+A0h] */

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = sub_14020B8E4((__int64 *)&Stream, a1, "wb");
  v9 = Stream;
  v13 = sub_14016E2F0;
  if ( v8 )
    v9 = nullptr;
  v14 = v9;
  if ( v9 )
  {
    sub_140174170((__int64)&v13, a2, a3, a4, a5);
    crt_fclose((__int64)v14);
  }
  return 0; /* the function has no caller */
}
#undef v11
#undef Stream
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20

//----- (0000000140174170) ----------------------------------------------------
__int64            sub_140174170(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  BOOL v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned __int64 *v23;
  int v24;
  int v25;
  unsigned __int64 *v26;
  int v27;
  int v28;
  char v29;
  unsigned int v30;
  int v31;
  char v32;
  int v33;
  __int64 v34;
  int v35;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140174170[144];
#define v36 (*(int (*))(void *)(sr_frame_140174170 + 0)) /* [rsp+C0h] */
#define v37 (*(int (*))(void *)(sr_frame_140174170 + 4)) /* [rsp+C4h] */
#define v38 (*(int (*))(void *)(sr_frame_140174170 + 8)) /* [rsp+C8h] */
#define v39 (*(int (*))(void *)(sr_frame_140174170 + 16)) /* [rsp+D0h] */
#define v40 (*(__int64 (*))(void *)(sr_frame_140174170 + 24)) /* [rsp+D8h] */
#define v43 (*(int (*))(void *)(sr_frame_140174170 + 128)) /* [rsp+140h] */
#define v44 (*(int (*))(void *)(sr_frame_140174170 + 136)) /* [rsp+148h] */

  v43 = a3;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = a2;
  v9 = a4 - 1;
  v10 = 0;
  v11 = ((a4 - 2) & 0xFFFFFFFD) == 0;
  v44 = v11;
  if ( ((a4 - 2) & 0xFFFFFFFD) != 0 )
    v9 = a4;
  LOBYTE(v10) = v9 < 2;
  v12 = v10 + 2;
  if ( a3 < 0 || a2 < 0 )
    return 0;
  v13 = 8 * (v11 + v9);
  if ( !dword_1402B280C )
    return sub_140176DF0(
             v7,
             -1,
             -1,
             a2,
             a3,
             a4,
             0,
             a5,
             v11,
             0,
             "111 221 2222 11",
             0,
             0,
             v12,
             0,
             0,
             0,
             0,
             0,
             a2,
             a3,
             v13,
             8 * v11);
  sub_140177A80(v7, "111 221 2222 11", 0, 0, v12 + 8, 0, 0, 0, 0, 0, a2, a3, v13, 8 * v11);
  if ( dword_140404A6C[18215637] )
  {
    v15 = 0;
    v16 = 1;
  }
  else
  {
    v15 = v6 - 1;
    v6 = -1;
    v43 = -1;
    v16 = -1;
  }
  v37 = v16;
  v36 = v15;
  if ( v15 == v6 )
    goto LABEL_46;
  v17 = v5 * v8 * v15;
  v18 = v5 * v8 * v16;
  v38 = v17;
  v39 = v18;
  do
  {
    v19 = 0;
    v20 = a5 + v17;
    v40 = v20;
    if ( v8 <= 0 )
      goto LABEL_45;
    v21 = v8 - 1;
    do
    {
      v22 = 1;
      v23 = (unsigned __int64 *)(v20 + (int)v5 * v19);
      v24 = 1;
      if ( v19 < v21 )
      {
        v24 = 2;
        v22 = sub_1401FC820((unsigned __int64 *)(v20 + (int)v5 * v19), v20 + (int)v5 * (v19 + 1), v5);
        v25 = v19 + 2;
        if ( v22 )
        {
          v26 = v23;
          if ( v25 < a2 )
          {
            v27 = v5 * v25;
            while ( v24 < 128 )
            {
              if ( !(unsigned int)sub_1401FC820(v26, v40 + v27, v5) )
              {
                --v24;
                break;
              }
              ++v24;
              v26 = (unsigned __int64 *)((char *)v26 + v5);
              v27 += v5;
              if ( v24 + v19 >= a2 )
              {
                v28 = *(_DWORD *)(v7 + 80);
                v29 = v24;
                v8 = a2;
                v30 = v28 + 1;
                goto LABEL_32;
              }
            }
          }
          v28 = *(_DWORD *)(v7 + 80);
          v29 = v24;
          v8 = a2;
          v30 = v28 + 1;
LABEL_32:
          v32 = v29 - 1;
          v33 = v28;
          if ( v30 > 0x40 && v28 )
          {
            (*(void (           **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
            v33 = 0;
            *(_DWORD *)(v7 + 80) = 0;
          }
          v11 = v44;
          *(_BYTE *)(v33 + v7 + 16) = v32;
          ++*(_DWORD *)(v7 + 80);
          if ( v24 > 0 )
          {
            v34 = (unsigned int)v24;
            do
            {
              sub_1401776D0(v7, -1, v5, v44, 0, (__int64)v23);
              v23 = (unsigned __int64 *)((char *)v23 + v5);
              --v34;
            }
            while ( v34 );
            v8 = a2;
          }
          goto LABEL_43;
        }
        if ( v25 < v8 )
        {
          v31 = v5 * v25;
          do
          {
            if ( v24 >= 128 )
              break;
            if ( (unsigned int)sub_1401FC820(v23, v40 + v31, v5) )
              break;
            ++v24;
            v31 += v5;
          }
          while ( v24 + v19 < v8 );
          v7 = a1;
          v22 = 0;
        }
        v11 = v44;
      }
      v28 = *(_DWORD *)(v7 + 80);
      v29 = v24;
      v30 = v28 + 1;
      if ( v22 )
        goto LABEL_32;
      v35 = *(_DWORD *)(v7 + 80);
      if ( v30 > 0x40 && v28 )
      {
        (*(void (           **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
        v35 = 0;
        *(_DWORD *)(v7 + 80) = 0;
      }
      *(_BYTE *)(v35 + v7 + 16) = v24 + 127;
      ++*(_DWORD *)(v7 + 80);
      sub_1401776D0(v7, -1, v5, v11, 0, (__int64)v23);
LABEL_43:
      v20 = v40;
      v21 = v8 - 1;
      v19 += v24;
    }
    while ( v19 < v8 );
    v15 = v36;
    v6 = v43;
    v18 = v39;
LABEL_45:
    v15 += v37;
    v17 = v18 + v38;
    v36 = v15;
    v38 += v18;
  }
  while ( v15 != v6 );
LABEL_46:
  if ( *(_DWORD *)(v7 + 80) )
  {
    (*(void (           **)(_QWORD, __int64))v7)(*(_QWORD *)(v7 + 8), v7 + 16);
    *(_DWORD *)(v7 + 80) = 0;
  }
  return 1;
}
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v43
#undef v44

//----- (00000001401745F0) ----------------------------------------------------
__int64            sub_1401745F0(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401745F0[160];
#define v7 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 0)) /* [rsp+0h] */
#define v8 (*(_QWORD (*)[2])(void *)(sr_frame_1401745F0 + 48)) /* [rsp+30h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 64)) /* [rsp+40h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 80)) /* [rsp+50h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 96)) /* [rsp+60h] */
#define v12 (*(__int128 (*))(void *)(sr_frame_1401745F0 + 112)) /* [rsp+70h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 128)) /* [rsp+80h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1401745F0 + 144)) /* [rsp+90h] */

  v8[0] = a1;
  v8[1] = a2;
  v13 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  return sub_140174170((__int64)v8, a3, a4, a5, a6); /* 0x14017465B: the result of this call is still in rax at the exit */
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14

//----- (0000000140174680) ----------------------------------------------------
__m128i *           sub_140174680(__int64 a1, int a2, _DWORD *a3, int a4)
{
  __int64 v4;
       __m128i *v5;
  int v7;
  __m128i *result;
  __m128i *v9;
  int v10;
  _DWORD *v11;
  int v12;
  int v13;
  int *v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  __m128i **v24;
  __m128i *v25;
  int v26;
  __int64 v27;
  __m128i *v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned __int64 v32;
  int v33;
  __int8 *v34;
  __int64 v35;
  __m128i *v36;
  unsigned __int8 *v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  __int16 v41;
  unsigned __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  __int32 *v63;
  unsigned __int64 v64;
  int v65;
  __int32 *v66;
  int *v67;
  int v68;
  int v69;
  int v70;
  __int32 *v71;
  unsigned __int64 v72;
  int v73;
  __int32 *v74;
  int *v75;
  int v76;
  int v77;
  int v78;
  __int32 *v79;
  unsigned __int64 v80;
  int v81;
  __int32 *v82;
  int *v83;
  int v84;
  int v85;
  int v86;
  __int32 *v87;
  unsigned __int64 v88;
  int v89;
  __int32 *v90;
  int *v91;
  int v92;
  char v93;
  __int32 *v94;
  unsigned __int64 v95;
  int v96;
  __int32 *v97;
  int *v98;
  int v99;
  __int64 v100;
  int v101;
  int v102;
  int v103;
  int v104;
  char v105;
  __int32 *v106;
  unsigned __int64 v107;
  int v108;
  __int32 *v109;
  int *v110;
  int v111;
  char v112;
  __int32 *v113;
  unsigned __int64 v114;
  int v115;
  __int32 *v116;
  int *v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  __int32 *v124;
  unsigned __int64 v125;
  int v126;
  __int32 *v127;
  int *v128;
  int v129;
  int v130;
  int v131;
  int v132;
  __int32 *v133;
  unsigned __int64 v134;
  int v135;
  __int32 *v136;
  int *v137;
  __int64 v138;
  __int64 v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  char v145;
  __int32 *v146;
  unsigned __int64 v147;
  int v148;
  __int32 *v149;
  int *v150;
  int v151;
  int v152;
  int v153;
  char v154;
  __int32 *v155;
  unsigned __int64 v156;
  int v157;
  __int32 *v158;
  int *v159;
  int v160;
  int v161;
  int v162;
  int v163;
  char v164;
  unsigned int v165;
  unsigned int v166;
  __int32 *v167;
  unsigned __int64 v168;
  int v169;
  __int32 *v170;
  int *v171;
  __int32 *v172;
  unsigned __int64 v173;
  int v174;
  __int32 *v175;
  int *v176;
  __int64 v177;
  __int64 *v178;
  unsigned int v179;
  unsigned int v180;
  __int64 v181;
  __int64 v182;
  __int64 i;
  int v184;
  __m128i *v185;
  int v186;
  int v187;
  __m128i *v188;
  int *v189;
  int v190;
  int *v191;
  int v192;
  int *v193;
  int v194;
  int *v195;
  unsigned __int64 v196;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140174680[64];
#define v197 (*(int (*))(void *)(sr_frame_140174680 + 0)) /* [rsp+20h] */
#define v198 (*(__m128i * (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define v199 (*(__int64 (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define v200 (*(__int64 (*))(void *)(sr_frame_140174680 + 8)) /* [rsp+28h] */
#define v201 (*(int (*))(void *)(sr_frame_140174680 + 16)) /* [rsp+30h] */
#define v202 (*(int (*))(void *)(sr_frame_140174680 + 20)) /* [rsp+34h] */
#define v203 (*(__int64 (*))(void *)(sr_frame_140174680 + 24)) /* [rsp+38h] */
#define v204 (*(int (*))(void *)(sr_frame_140174680 + 32)) /* [rsp+40h] */
#define v205 (*(__int64 (*))(void *)(sr_frame_140174680 + 32)) /* [rsp+40h] */
#define Block (*(__m128i * (*))(void *)(sr_frame_140174680 + 40)) /* [rsp+48h] */
#define v207 (*(unsigned __int8 * (*))(void *)(sr_frame_140174680 + 48)) /* [rsp+50h] */

  v4 = a1;
  v5 = nullptr;
  v198 = nullptr;
  v7 = a2;
  result = (__m128i *)sr_path_malloc(0x20000);
  Block = result;
  v9 = result;
  if ( !result )
    return result;
  v10 = 5;
  if ( a4 >= 5 )
    v10 = a4;
  v204 = v10;
  v11 = (_DWORD *)j__realloc_base_sr(0, 10);
  if ( v11 )
  {
    v5 = (     __m128i *)(v11 + 2);
    v11[1] = 0;
    v198 = (     __m128i *)(v11 + 2);
    *v11 = 2;
  }
  else
  {
    crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = 120;
  v12 = SR_VEC_LANES(128, v5[-1], i32)[2];
  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= v12 )
  {
    v13 = 2 * v12 + 1;
    v14 = (int *)j__realloc_base_sr(&SR_VEC_LANES(128, v5[-1], u64)[1], v13 + 8LL);
    if ( v14 )
    {
      v5 = (     __m128i *)(v14 + 2);
      *v14 = v13;
      v198 = (     __m128i *)(v14 + 2);
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  v15 = 3;
  v197 = 3;
  v16 = 3;
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = 94;
  crt_memset((void *)(uintptr_t)(v9), 0, 0x20000u);
  v202 = 0;
  v17 = 0;
  if ( v7 - 3 <= 0 )
    goto LABEL_229;
  while ( 1 )
  {
    v18 = v17;
    v19 = 3;
    v20 = 0;
    v207 = (unsigned __int8 *)(v4 + v17);
    v21 = *v207 + (v207[1] << 8) + (v207[2] << 16);
    v201 = 3;
    v203 = 0;
    v22 = (((8 * v21) ^ (unsigned int)v21) >> 5) + ((8 * v21) ^ v21);
    v23 = (((16 * v22) ^ v22) >> 17) + ((16 * v22) ^ v22);
    v24 = (__m128i **)v9 + (((_WORD)v23 + (unsigned __int16)(((v23 << 25) ^ v23) >> 6)) & 0x3FFF);
    v25 = *v24;
    if ( *v24 )
      v26 = SR_VEC_LANES(128, v25[-1], i32)[3];
    else
      v26 = 0;
    v27 = 0;
    v28 = *v24;
    if ( v26 > 0 )
    {
      v29 = a1;
      v30 = v17 - 0x8000;
      do
      {
        if ( SR_VEC_PTR_LANES(128, v25, i64)[v27] - v29 > v30 )
        {
          v31 = 0;
          v32 = 0;
          if ( a2 - v17 > 0 )
          {
            do
            {
              if ( v32 >= 0x102 )
                break;
              if ( *(_BYTE *)(SR_VEC_PTR_LANES(128, v25, i64)[v27] + v32) != *(_BYTE *)(v32 + v29 + v18) )
                break;
              ++v31;
              ++v32;
            }
            while ( (__int64)v32 < a2 - v17 );
            v19 = v201;
            v17 = v202;
            v29 = a1;
          }
          if ( v31 >= v19 )
          {
            v19 = v31;
            v201 = v31;
            v203 = SR_VEC_PTR_LANES(128, v25, i64)[v27];
          }
        }
        ++v27;
      }
      while ( v27 < v26 );
      v5 = v198;
      v20 = v203;
      v28 = *v24;
    }
    if ( v25 && SR_VEC_LANES(128, v25[-1], i32)[3] == 2 * v204 )
    {
      crt_memcpy(v25, (__m128i *)((char *)v25 + 8 * v204), 8LL * v204);
      SR_VEC_LANES(128, (*v24)[-1], i32)[3] = v204;
      v28 = *v24;
    }
    if ( v28 )
    {
      if ( SR_VEC_LANES(128, v28[-1], i32)[3] + 1 < SR_VEC_LANES(128, v28[-1], i32)[2] )
        goto LABEL_43;
      v33 = 2 * SR_VEC_LANES(128, v28[-1], i32)[2] + 1;
    }
    else
    {
      v33 = 2;
    }
    v34 = &SR_VEC_LANES(128, v28[-1], i8)[8];
    if ( !v28 )
      v34 = nullptr;
    v35 = j__realloc_base_sr(v34, 8 * v33 + 8LL);
    if ( v35 )
    {
      if ( !*v24 )
        *(_DWORD *)(v35 + 4) = 0;
      v36 = (__m128i *)(v35 + 8);
      *v24 = v36;
      SR_VEC_LANES(128, v36[-1], i32)[2] = v33;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
LABEL_43:
    v37 = v207;
    SR_VEC_PTR_LANES(128, (*v24), i64)[SR_VEC_LANES(128, (*v24)[-1], i32)[3]++] = (__int64)v207;
    if ( !v20 )
      goto LABEL_192;
    v38 = v207[1] + (v207[2] << 8) + (v207[3] << 16);
    v39 = (((8 * v38) ^ (unsigned int)v38) >> 5) + ((8 * v38) ^ v38);
    v40 = (((16 * v39) ^ v39) >> 17) + ((16 * v39) ^ v39);
    v41 = v40 + (((v40 << 25) ^ v40) >> 6);
    v42 = 0;
    v43 = SR_VEC_PTR_LANES(128, Block, i64)[v41 & 0x3FFF];
    if ( v43 )
      v44 = *(_DWORD *)(v43 - 4);
    else
      v44 = 0;
    v45 = 0;
    if ( v44 > 0 )
    {
      v46 = v202;
      v47 = a1;
      do
      {
        v48 = *(_QWORD *)(v43 + 8 * v45);
        if ( v48 - v47 > v202 - 0x7FFF )
        {
          v49 = 0;
          if ( a2 - v46 - 1 > 0 )
          {
            v50 = v18 - v48 + v47;
            do
            {
              if ( v42 >= 0x102 )
                break;
              if ( *(_BYTE *)(v48 + v42) != *(_BYTE *)(v48 + v42 + v50 + 1) )
                break;
              ++v49;
              ++v42;
            }
            while ( (__int64)v42 < a2 - v46 - 1 );
            v46 = v202;
            v47 = a1;
          }
          if ( v49 > v201 )
          {
            v37 = v207;
LABEL_192:
            v119 = *v37;
            if ( (unsigned __int8)v119 <= 0x8Fu )
            {
              v120 = v119 + 48;
              v121 = 0;
              v122 = 8;
              do
              {
                v123 = v120 & 1;
                v120 >>= 1;
                v121 = v123 | (2 * v121);
                --v122;
              }
              while ( v122 );
              v16 = v197 + 8;
              v15 |= v121 << v197;
              v197 = v16;
              if ( (int)v16 < 8 )
                goto LABEL_227;
              v124 = &SR_VEC_LANES(128, v5[-1], i32)[2];
              v125 = (unsigned __int64)v16 >> 3;
              v197 = v16 - 8 * (v16 >> 3);
              while ( 2 )
              {
                if ( v5 )
                {
                  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v124 )
                  {
                    v126 = 2 * *v124 + 1;
                    goto LABEL_201;
                  }
                }
                else
                {
                  v126 = 2;
LABEL_201:
                  v127 = v124;
                  if ( !v5 )
                    v127 = nullptr;
                  v128 = (int *)j__realloc_base_sr(v127, v126 + 8LL);
                  if ( v128 )
                  {
                    if ( !v5 )
                      v128[1] = 0;
                    v5 = (     __m128i *)(v128 + 2);
                    v124 = v128;
                    *v128 = v126;
                  }
                  else
                  {
                    crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
                  }
                }
                SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
                v15 >>= 8;
                if ( !--v125 )
                  goto LABEL_226;
                continue;
              }
            }
            v129 = v119 + 256;
            v130 = 0;
            v131 = 9;
            do
            {
              v132 = v129 & 1;
              v129 >>= 1;
              v130 = v132 | (2 * v130);
              --v131;
            }
            while ( v131 );
            v16 = v197 + 9;
            v15 |= v130 << v197;
            v197 = v16;
            if ( (int)v16 < 8 )
              goto LABEL_227;
            v133 = &SR_VEC_LANES(128, v5[-1], i32)[2];
            v134 = (unsigned __int64)v16 >> 3;
            v197 = v16 - 8 * (v16 >> 3);
            while ( 2 )
            {
              if ( v5 )
              {
                if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v133 )
                {
                  v135 = 2 * *v133 + 1;
                  goto LABEL_218;
                }
              }
              else
              {
                v135 = 2;
LABEL_218:
                v136 = v133;
                if ( !v5 )
                  v136 = nullptr;
                v137 = (int *)j__realloc_base_sr(v136, v135 + 8LL);
                if ( v137 )
                {
                  if ( !v5 )
                    v137[1] = 0;
                  v5 = (     __m128i *)(v137 + 2);
                  v133 = v137;
                  *v137 = v135;
                }
                else
                {
                  crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
                }
              }
              SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
              v15 >>= 8;
              if ( !--v134 )
              {
LABEL_226:
                v16 = v197;
LABEL_227:
                v198 = v5;
                v118 = 1;
                goto LABEL_228;
              }
              continue;
            }
          }
          v42 = 0;
        }
        ++v45;
      }
      while ( v45 < v44 );
      LODWORD(v20) = v203;
    }
    v51 = v201;
    v52 = v202 + a1 - v20;
    if ( v52 > 0x7FFF || v201 > 258 )
      crt_assert(
        (char *)L"d <= 32767 && best <= 258",
        (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
        0x3B2u);
    v53 = 0;
    v199 = 0;
    v54 = 0;
    v55 = 0;
    if ( v201 > (unsigned __int16)word_1403018C2 - 1 )
    {
      do
      {
        v56 = (unsigned __int16)word_1403018C4[v55++];
        ++v54;
      }
      while ( v201 > v56 - 1 );
      v199 = v55;
    }
    v57 = v54 + 257;
    if ( v54 + 257 <= 143 )
    {
      v58 = v54 + 305;
      v59 = 8;
      do
      {
        v60 = v58 & 1;
        v58 >>= 1;
        v53 = v60 | (2 * v53);
        --v59;
      }
      while ( v59 );
      v61 = v197 + 8;
      v62 = (v53 << v197) | v15;
      if ( v197 + 8 >= 8 )
      {
        v63 = &SR_VEC_LANES(128, v5[-1], i32)[2];
        v64 = (unsigned __int64)v61 >> 3;
        v61 -= 8 * (v61 >> 3);
        while ( v5 )
        {
          if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v63 )
          {
            v65 = 2 * *v63 + 1;
LABEL_75:
            v66 = v63;
            if ( !v5 )
              v66 = nullptr;
            v67 = (int *)j__realloc_base_sr(v66, v65 + 8LL);
            if ( v67 )
            {
              if ( !v5 )
                v67[1] = 0;
              v5 = (     __m128i *)(v67 + 2);
              v63 = v67;
              *v67 = v65;
            }
            else
            {
              crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
          v62 >>= 8;
          if ( !--v64 )
            goto LABEL_136;
        }
        v65 = 2;
        goto LABEL_75;
      }
      goto LABEL_137;
    }
    if ( v57 > 255 )
    {
      if ( v57 <= 279 )
      {
        v76 = v54 + 1;
        v77 = 7;
        do
        {
          v78 = v76 & 1;
          v76 >>= 1;
          v53 = v78 | (2 * v53);
          --v77;
        }
        while ( v77 );
        v61 = v197 + 7;
        v62 = (v53 << v197) | v15;
        if ( v197 + 7 < 8 )
          goto LABEL_137;
        v79 = &SR_VEC_LANES(128, v5[-1], i32)[2];
        v80 = (unsigned __int64)v61 >> 3;
        v61 -= 8 * (v61 >> 3);
        while ( v5 )
        {
          if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v79 )
          {
            v81 = 2 * *v79 + 1;
LABEL_111:
            v82 = v79;
            if ( !v5 )
              v82 = nullptr;
            v83 = (int *)j__realloc_base_sr(v82, v81 + 8LL);
            if ( v83 )
            {
              if ( !v5 )
                v83[1] = 0;
              v5 = (     __m128i *)(v83 + 2);
              v79 = v83;
              *v83 = v81;
            }
            else
            {
              crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
          v62 >>= 8;
          if ( !--v80 )
            goto LABEL_136;
        }
        v81 = 2;
        goto LABEL_111;
      }
      v84 = v54 + 169;
      v85 = 8;
      do
      {
        v86 = v84 & 1;
        v84 >>= 1;
        v53 = v86 | (2 * v53);
        --v85;
      }
      while ( v85 );
      v61 = v197 + 8;
      v62 = (v53 << v197) | v15;
      if ( v197 + 8 < 8 )
        goto LABEL_137;
      v87 = &SR_VEC_LANES(128, v5[-1], i32)[2];
      v88 = (unsigned __int64)v61 >> 3;
      v61 -= 8 * (v61 >> 3);
      while ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v87 )
        {
          v89 = 2 * *v87 + 1;
LABEL_128:
          v90 = v87;
          if ( !v5 )
            v90 = nullptr;
          v91 = (int *)j__realloc_base_sr(v90, v89 + 8LL);
          if ( v91 )
          {
            if ( !v5 )
              v91[1] = 0;
            v5 = (     __m128i *)(v91 + 2);
            v87 = v91;
            *v91 = v89;
          }
          else
          {
            crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
        v62 >>= 8;
        if ( !--v88 )
        {
LABEL_136:
          v55 = v199;
          v51 = v201;
          goto LABEL_137;
        }
      }
      v89 = 2;
      goto LABEL_128;
    }
    v68 = v54 + 513;
    v69 = 9;
    do
    {
      v70 = v68 & 1;
      v68 >>= 1;
      v53 = v70 | (2 * v53);
      --v69;
    }
    while ( v69 );
    v61 = v197 + 9;
    v62 = (v53 << v197) | v15;
    if ( v197 + 9 >= 8 )
    {
      v71 = &SR_VEC_LANES(128, v5[-1], i32)[2];
      v72 = (unsigned __int64)v61 >> 3;
      v61 -= 8 * (v61 >> 3);
      while ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v71 )
        {
          v73 = 2 * *v71 + 1;
LABEL_93:
          v74 = v71;
          if ( !v5 )
            v74 = nullptr;
          v75 = (int *)j__realloc_base_sr(v74, v73 + 8LL);
          if ( v75 )
          {
            if ( !v5 )
              v75[1] = 0;
            v5 = (     __m128i *)(v75 + 2);
            v71 = v75;
            *v75 = v73;
          }
          else
          {
            crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
        v62 >>= 8;
        if ( !--v72 )
          goto LABEL_136;
      }
      v73 = 2;
      goto LABEL_93;
    }
LABEL_137:
    v198 = v5;
    v92 = byte_140301900[v55];
    if ( !(_BYTE)v92 )
      goto LABEL_154;
    v93 = v61;
    v61 += v92;
    v62 |= (v51 - (unsigned __int16)word_1403018C0[v55]) << v93;
    if ( (int)v61 < 8 )
      goto LABEL_153;
    v94 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v95 = (unsigned __int64)v61 >> 3;
    do
    {
      if ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 < *v94 )
          goto LABEL_151;
        v96 = 2 * *v94 + 1;
      }
      else
      {
        v96 = 2;
      }
      v97 = v94;
      if ( !v5 )
        v97 = nullptr;
      v98 = (int *)j__realloc_base_sr(v97, v96 + 8LL);
      if ( v98 )
      {
        if ( !v5 )
          v98[1] = 0;
        v5 = (     __m128i *)(v98 + 2);
        v94 = v98;
        *v98 = v96;
      }
      else
      {
        crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
      }
LABEL_151:
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v62;
      v62 >>= 8;
      --v95;
    }
    while ( v95 );
    v61 -= 8 * (v61 >> 3);
LABEL_153:
    v198 = v5;
LABEL_154:
    v99 = 0;
    v100 = 0;
    if ( v52 > (unsigned __int16)word_140301922 - 1 )
    {
      do
      {
        v101 = (unsigned __int16)word_140301924[v100++];
        ++v99;
      }
      while ( v52 > v101 - 1 );
    }
    v102 = 0;
    v103 = 5;
    do
    {
      v104 = v99 & 1;
      v99 >>= 1;
      v102 = v104 | (2 * v102);
      --v103;
    }
    while ( v103 );
    v105 = v61;
    v16 = v61 + 5;
    v15 = (v102 << v105) | v62;
    v197 = v16;
    if ( (int)v16 >= 8 )
    {
      v106 = &SR_VEC_LANES(128, v5[-1], i32)[2];
      v107 = (unsigned __int64)v16 >> 3;
      v197 = v16 - 8 * (v16 >> 3);
      while ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v106 )
        {
          v108 = 2 * *v106 + 1;
LABEL_164:
          v109 = v106;
          if ( !v5 )
            v109 = nullptr;
          v110 = (int *)j__realloc_base_sr(v109, v108 + 8LL);
          if ( v110 )
          {
            if ( !v5 )
              v110[1] = 0;
            v5 = (     __m128i *)(v110 + 2);
            v106 = v110;
            *v110 = v108;
          }
          else
          {
            crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
          }
        }
        SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
        v15 >>= 8;
        if ( !--v107 )
        {
          v16 -= 8 * (v16 >> 3);
          v198 = v5;
          goto LABEL_173;
        }
      }
      v108 = 2;
      goto LABEL_164;
    }
LABEL_173:
    v111 = byte_140301960[v100];
    if ( !(_BYTE)v111 )
      goto LABEL_190;
    v112 = v16;
    v16 += v111;
    v15 |= (v52 - (unsigned __int16)word_140301920[v100]) << v112;
    v197 = v16;
    if ( (int)v16 < 8 )
      goto LABEL_189;
    v113 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v114 = (unsigned __int64)v16 >> 3;
    v197 = v16 - 8 * (v16 >> 3);
    while ( 2 )
    {
      if ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v113 )
        {
          v115 = 2 * *v113 + 1;
          goto LABEL_180;
        }
      }
      else
      {
        v115 = 2;
LABEL_180:
        v116 = v113;
        if ( !v5 )
          v116 = nullptr;
        v117 = (int *)j__realloc_base_sr(v116, v115 + 8LL);
        if ( v117 )
        {
          if ( !v5 )
            v117[1] = 0;
          v5 = (     __m128i *)(v117 + 2);
          v113 = v117;
          *v117 = v115;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
      v15 >>= 8;
      if ( --v114 )
        continue;
      break;
    }
    v16 -= 8 * (v16 >> 3);
LABEL_189:
    v198 = v5;
LABEL_190:
    v118 = v201;
LABEL_228:
    v7 = a2;
    v17 = v118 + v202;
    v4 = a1;
    v202 = v17;
    if ( v17 >= a2 - 3 )
      break;
    v9 = Block;
  }
LABEL_229:
  v138 = v17;
  v139 = v7;
  v205 = v17;
  v200 = v7;
  if ( v17 < (__int64)v7 )
  {
    while ( 1 )
    {
      v140 = *(unsigned __int8 *)(v138 + v4);
      v141 = 0;
      if ( (unsigned __int8)v140 > 0x8Fu )
        break;
      v142 = v140 + 48;
      v143 = 8;
      do
      {
        v144 = v142 & 1;
        v142 >>= 1;
        v141 = v144 | (2 * v141);
        --v143;
      }
      while ( v143 );
      v145 = v16;
      v16 += 8;
      v15 |= v141 << v145;
      if ( (int)v16 >= 8 )
      {
        v146 = &SR_VEC_LANES(128, v5[-1], i32)[2];
        v147 = (unsigned __int64)v16 >> 3;
        v16 -= 8 * (v16 >> 3);
        while ( v5 )
        {
          if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v146 )
          {
            v148 = 2 * *v146 + 1;
LABEL_239:
            v149 = v146;
            if ( !v5 )
              v149 = nullptr;
            v150 = (int *)j__realloc_base_sr(v149, v148 + 8LL);
            if ( v150 )
            {
              if ( !v5 )
                v150[1] = 0;
              v5 = (     __m128i *)(v150 + 2);
              v146 = v150;
              *v150 = v148;
            }
            else
            {
              crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
            }
          }
          SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
          v15 >>= 8;
          if ( !--v147 )
            goto LABEL_264;
        }
        v148 = 2;
        goto LABEL_239;
      }
LABEL_265:
      v205 = ++v138;
      if ( v138 >= v139 )
        goto LABEL_266;
    }
    v151 = v140 + 256;
    v152 = 9;
    do
    {
      v153 = v151 & 1;
      v151 >>= 1;
      v141 = v153 | (2 * v141);
      --v152;
    }
    while ( v152 );
    v154 = v16;
    v16 += 9;
    v15 |= v141 << v154;
    if ( (int)v16 < 8 )
      goto LABEL_265;
    v155 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v156 = (unsigned __int64)v16 >> 3;
    v16 -= 8 * (v16 >> 3);
    while ( 2 )
    {
      if ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v155 )
        {
          v157 = 2 * *v155 + 1;
          goto LABEL_256;
        }
      }
      else
      {
        v157 = 2;
LABEL_256:
        v158 = v155;
        if ( !v5 )
          v158 = nullptr;
        v159 = (int *)j__realloc_base_sr(v158, v157 + 8LL);
        if ( v159 )
        {
          if ( !v5 )
            v159[1] = 0;
          v5 = (     __m128i *)(v159 + 2);
          v155 = v159;
          *v159 = v157;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v15;
      v15 >>= 8;
      if ( !--v156 )
      {
LABEL_264:
        v4 = a1;
        v139 = v200;
        v138 = v205;
        goto LABEL_265;
      }
      continue;
    }
  }
LABEL_266:
  v160 = 0;
  v161 = 0;
  v162 = 7;
  do
  {
    v163 = v160 & 1;
    v160 >>= 1;
    v161 = v163 | (2 * v161);
    --v162;
  }
  while ( v162 );
  v164 = v16;
  v165 = v16 + 7;
  v166 = (v161 << v164) | v15;
  if ( (int)v165 >= 8 )
  {
    v167 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v168 = (unsigned __int64)v165 >> 3;
    v165 -= 8 * (v165 >> 3);
    while ( v5 )
    {
      if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v167 )
      {
        v169 = 2 * *v167 + 1;
LABEL_274:
        v170 = v167;
        if ( !v5 )
          v170 = nullptr;
        v171 = (int *)j__realloc_base_sr(v170, v169 + 8LL);
        if ( v171 )
        {
          if ( !v5 )
            v171[1] = 0;
          v5 = (     __m128i *)(v171 + 2);
          v167 = v171;
          *v171 = v169;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v166;
      v166 >>= 8;
      if ( !--v168 )
      {
        v139 = v200;
        goto LABEL_283;
      }
    }
    v169 = 2;
    goto LABEL_274;
  }
LABEL_283:
  if ( v165 )
  {
    while ( (int)++v165 < 8 )
    {
LABEL_298:
      if ( !v165 )
      {
        v139 = v200;
        goto LABEL_300;
      }
    }
    v172 = &SR_VEC_LANES(128, v5[-1], i32)[2];
    v173 = (unsigned __int64)v165 >> 3;
    v165 -= 8 * (v165 >> 3);
    while ( 2 )
    {
      if ( v5 )
      {
        if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= *v172 )
        {
          v174 = 2 * *v172 + 1;
          goto LABEL_290;
        }
      }
      else
      {
        v174 = 2;
LABEL_290:
        v175 = v172;
        if ( !v5 )
          v175 = nullptr;
        v176 = (int *)j__realloc_base_sr(v175, v174 + 8LL);
        if ( v176 )
        {
          if ( !v5 )
            v176[1] = 0;
          v5 = (     __m128i *)(v176 + 2);
          v172 = v176;
          *v176 = v174;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v166;
      v166 >>= 8;
      if ( !--v173 )
        goto LABEL_298;
      continue;
    }
  }
LABEL_300:
  v177 = 0x4000;
  v178 = (__int64 *)Block;
  do
  {
    if ( *v178 )
      free((void *)(*v178 - 8));
    ++v178;
    --v177;
  }
  while ( v177 );
  free(Block);
  v179 = 1;
  v180 = 0;
  if ( v139 > 0 )
  {
    v181 = 0;
    v182 = a2 % 5552;
    do
    {
      for ( i = 0; i < v182; v180 += v179 )
      {
        v184 = *(unsigned __int8 *)(v181 + a1 + i++);
        v179 += v184;
      }
      v181 += v182;
      v182 = 5552;
      v179 %= 0xFFF1u;
      v180 %= 0xFFF1u;
    }
    while ( v181 < v139 );
  }
  if ( v5 )
  {
    v185 = (__m128i *)&SR_VEC_LANES(128, v5[-1], u64)[1];
    v186 = SR_VEC_LANES(128, v5[-1], i32)[2];
    if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= v186 )
    {
      v187 = 2 * v186 + 1;
      goto LABEL_313;
    }
  }
  else
  {
    v185 = (__m128i *)-8LL;
    v187 = 2;
LABEL_313:
    v188 = v185;
    if ( !v5 )
      v188 = nullptr;
    v189 = (int *)j__realloc_base_sr(v188, v187 + 8LL);
    if ( v189 )
    {
      if ( !v5 )
        v189[1] = 0;
      v5 = (     __m128i *)(v189 + 2);
      v185 = (__m128i *)v189;
      *v189 = v187;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = BYTE1(v180);
  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, v185, i32)[0] )
  {
    v190 = 2 * SR_VEC_PTR_LANES(128, v185, i32)[0] + 1;
    v191 = (int *)j__realloc_base_sr(v185, v190 + 8LL);
    if ( v191 )
    {
      v5 = (     __m128i *)(v191 + 2);
      v185 = (__m128i *)v191;
      *v191 = v190;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v180;
  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, v185, i32)[0] )
  {
    v192 = 2 * SR_VEC_PTR_LANES(128, v185, i32)[0] + 1;
    v193 = (int *)j__realloc_base_sr(v185, v192 + 8LL);
    if ( v193 )
    {
      v5 = (     __m128i *)(v193 + 2);
      v185 = (__m128i *)v193;
      *v193 = v192;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = BYTE1(v179);
  if ( SR_VEC_LANES(128, v5[-1], i32)[3] + 1 >= SR_VEC_PTR_LANES(128, v185, i32)[0] )
  {
    v194 = 2 * SR_VEC_PTR_LANES(128, v185, i32)[0] + 1;
    v195 = (int *)j__realloc_base_sr(v185, v194 + 8LL);
    if ( v195 )
    {
      v5 = (     __m128i *)(v195 + 2);
      v185 = (__m128i *)v195;
      *v195 = v194;
    }
    else
    {
      crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    }
  }
  SR_VEC_PTR_LANES(128, v5, i8)[SR_VEC_LANES(128, v5[-1], i32)[3]++] = v179;
  v196 = SR_VEC_LANES(128, v5[-1], i32)[3];
  *a3 = v196;
  crt_memcpy(v185, v5, v196);
  return v185;
}
#undef v197
#undef v198
#undef v199
#undef v200
#undef v201
#undef v202
#undef v203
#undef v204
#undef v205
#undef Block
#undef v207

// 140174966: conditional instruction was optimized away because r8.8!=0

//----- (0000000140175A20) ----------------------------------------------------
__int64            sub_140175A20(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175A20[4112];
#define v6 (*(_QWORD (*)[6])(void *)(sr_frame_140175A20 + 0)) /* [rsp+0h] */
#define v7 (*(int (*))(void *)(sr_frame_140175A20 + 48)) /* [rsp+30h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_140175A20 + 4096)) /* [rsp+1000h] */

  v6[4] = a1;
  v6[1] = a3 + a4;
  v6[3] = a1;
  v6[5] = a1 + a2;
  v6[0] = a3;
  v7 = 0;
  sub_140168E00((__int64)v6, 1);
  return 0; /* the function has no caller */
}
#undef v6
#undef v7
#undef v8

//----- (0000000140175AC0) ----------------------------------------------------
__int64            sub_140175AC0(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4;
  char *v6;
  __int64 v8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175AC0[4112];
#define v9 (*(_QWORD (*)[3])(void *)(sr_frame_140175AC0 + 0)) /* [rsp+0h] */
#define v10 (*(char * (*))(void *)(sr_frame_140175AC0 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175AC0 + 32)) /* [rsp+20h] */
#define v12 (*(char * (*))(void *)(sr_frame_140175AC0 + 40)) /* [rsp+28h] */
#define v13 (*(int (*))(void *)(sr_frame_140175AC0 + 48)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140175AC0 + 4096)) /* [rsp+1000h] */

  v4 = a2;
  v6 = (char *)sr_path_malloc(0x4000);
  if ( v6 )
  {
    v9[0] = a1;
    v9[1] = a1 + v4;
    Block = v6;
    v12 = v6 + 0x4000;
    v10 = v6;
    v13 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v9, 1) )
    {
      if ( a3 )
        *a3 = (_DWORD)v10 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return 0; /* the function has no caller */
}
#undef v9
#undef v10
#undef Block
#undef v12
#undef v13
#undef v14

//----- (0000000140175B80) ----------------------------------------------------
__int64            sub_140175B80(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 v4;
  __int64 v6;
  char *v8;
  __int64 v10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175B80[4112];
#define v11 (*(_QWORD (*)[3])(void *)(sr_frame_140175B80 + 0)) /* [rsp+0h] */
#define v12 (*(char * (*))(void *)(sr_frame_140175B80 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175B80 + 32)) /* [rsp+20h] */
#define v14 (*(char * (*))(void *)(sr_frame_140175B80 + 40)) /* [rsp+28h] */
#define v15 (*(int (*))(void *)(sr_frame_140175B80 + 48)) /* [rsp+30h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140175B80 + 4096)) /* [rsp+1000h] */

  v4 = a3;
  v6 = a2;
  v8 = (char *)sr_path_malloc(a3);
  if ( v8 )
  {
    v11[0] = a1;
    v11[1] = a1 + v6;
    Block = v8;
    v14 = &v8[v4];
    v12 = v8;
    v15 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v11, 1) )
    {
      if ( a4 )
        *a4 = (_DWORD)v12 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return 0; /* the function has no caller */
}
#undef v11
#undef v12
#undef Block
#undef v14
#undef v15
#undef v16

//----- (0000000140175C40) ----------------------------------------------------
__int64            sub_140175C40(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 v4;
  __int64 v6;
  char *v8;
  __int64 v10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175C40[4208];
#define v11 (*(_QWORD (*)[3])(void *)(sr_frame_140175C40 + 0)) /* [rsp+0h] */
#define v12 (*(char * (*))(void *)(sr_frame_140175C40 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175C40 + 32)) /* [rsp+20h] */
#define v14 (*(char * (*))(void *)(sr_frame_140175C40 + 40)) /* [rsp+28h] */
#define v15 (*(int (*))(void *)(sr_frame_140175C40 + 48)) /* [rsp+30h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140175C40 + 4096)) /* [rsp+1000h] */
#define v17 (*(int (*))(void *)(sr_frame_140175C40 + 4192)) /* [rsp+1060h] */

  v4 = a3;
  v6 = a2;
  v8 = (char *)sr_path_malloc(a3);
  if ( v8 )
  {
    v11[1] = a1 + v6;
    v11[0] = a1;
    v14 = &v8[v4];
    Block = v8;
    v12 = v8;
    v15 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v11, v17) )
    {
      if ( a4 )
        *a4 = (_DWORD)v12 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return 0; /* the function has no caller */
}
#undef v11
#undef v12
#undef Block
#undef v14
#undef v15
#undef v16
#undef v17

//----- (0000000140175D00) ----------------------------------------------------
__int64            sub_140175D00(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175D00[4112];
#define v6 (*(_QWORD (*)[6])(void *)(sr_frame_140175D00 + 0)) /* [rsp+0h] */
#define v7 (*(int (*))(void *)(sr_frame_140175D00 + 48)) /* [rsp+30h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_140175D00 + 4096)) /* [rsp+1000h] */

  v6[4] = a1;
  v6[1] = a3 + a4;
  v6[3] = a1;
  v6[5] = a1 + a2;
  v6[0] = a3;
  v7 = 0;
  sub_140168E00((__int64)v6, 0);
  return 0; /* the function has no caller */
}
#undef v6
#undef v7
#undef v8

//----- (0000000140175DA0) ----------------------------------------------------
__int64            sub_140175DA0(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4;
  char *v6;
  __int64 v8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140175DA0[4112];
#define v9 (*(_QWORD (*)[3])(void *)(sr_frame_140175DA0 + 0)) /* [rsp+0h] */
#define v10 (*(char * (*))(void *)(sr_frame_140175DA0 + 24)) /* [rsp+18h] */
#define Block (*(void * (*))(void *)(sr_frame_140175DA0 + 32)) /* [rsp+20h] */
#define v12 (*(char * (*))(void *)(sr_frame_140175DA0 + 40)) /* [rsp+28h] */
#define v13 (*(int (*))(void *)(sr_frame_140175DA0 + 48)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140175DA0 + 4096)) /* [rsp+1000h] */

  v4 = a2;
  v6 = (char *)sr_path_malloc(0x4000);
  if ( v6 )
  {
    v9[0] = a1;
    v9[1] = a1 + v4;
    Block = v6;
    v12 = v6 + 0x4000;
    v10 = v6;
    v13 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v9, 0) )
    {
      if ( a3 )
        *a3 = (_DWORD)v10 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return 0; /* the function has no caller */
}
#undef v9
#undef v10
#undef Block
#undef v12
#undef v13
#undef v14

//----- (0000000140175E60) ----------------------------------------------------
__int64            sub_140175E60(__int64 a1, int a2)
{
  unsigned int v2;
  __int64 i;
  unsigned __int64 v4;

  v2 = -1;
  if ( a2 > 0 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v4 = *(unsigned __int8 *)(i + a1);
      v2 = (v2 >> 8) ^ dword_140301980[(unsigned __int8)v2 ^ v4];
    }
  }
  return ~v2;
}

//----- (0000000140175EB0) ----------------------------------------------------
unsigned __int8            sub_140175EB0(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, __m128i *a8)
{
  int v8;
  _DWORD *v11;
  int v12;
  int v13;
       __m128i *v14;
  unsigned __int8 result;
  __int64 v16;
       __m128i *v17;
  __int64 v18;
  __int8 v19;
  __int8 v20;
  int v21;
  __int8 *v22;
  __int64 v23;
  int v24;
  __int8 *v25;
  __int64 v26;
  __int64 v27;
  __int8 *v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  unsigned __int8 *v33;
  __int8 *v34;
  __int64 v35;
  int v36;
  __int8 *v37;
  __int64 v38;
  int v39;
  __int8 *v40;
  __int64 v41;

  v8 = a5;
  v11 = &unk_140301D98;
  if ( a5 )
    v11 = &unk_140301D80;
  v12 = a4 - a5 - 1;
  v13 = v11[a7];
  if ( dword_140404A6C[18215637] )
    v8 = v12;
  v14 = (     __m128i *)(a1 + a2 * v8);
  if ( dword_140404A6C[18215637] )
    a2 = -a2;
  if ( !v13 )
    return (unsigned __int8)crt_memcpy(a8, v14, a6 * a3);
  v16 = a2;
  if ( a6 > 0 )
  {
    v17 = v14;
    v18 = a6;
    do
    {
      switch ( v13 )
      {
        case 1:
        case 5:
        case 6:
          v19 = SR_VEC_PTR_LANES(128, v17, i8)[0];
          goto LABEL_18;
        case 2:
          v19 = SR_VEC_PTR_LANES(128, v17, i8)[0] - SR_VEC_PTR_LANES(128, v17, i8)[-a2];
          goto LABEL_18;
        case 3:
          v19 = SR_VEC_PTR_LANES(128, v17, i8)[0] - ((unsigned __int8)SR_VEC_PTR_LANES(128, v17, i8)[-a2] >> 1);
          goto LABEL_18;
        case 4:
          v20 = 0;
          if ( SR_VEC_PTR_LANES(128, v17, i8)[-a2] )
            v20 = SR_VEC_PTR_LANES(128, v17, i8)[-a2];
          v19 = SR_VEC_PTR_LANES(128, v17, i8)[0] - v20;
LABEL_18:
          SR_VEC_PTR_LANES(128, v17, i8)[(char *)a8 - (char *)v14] = v19;
          break;
        default:
          break;
      }
      v17 = (     __m128i *)((char *)v17 + 1);
      --v18;
    }
    while ( v18 );
  }
  result = v13 - 1;
  switch ( v13 )
  {
    case 1:
      v21 = a6 * a3;
      if ( a6 < (__int64)v21 )
      {
        v22 = &SR_VEC_PTR_LANES(128, v14, i8)[a6];
        v23 = v21 - (__int64)a6;
        do
        {
          result = (_BYTE)v22 - a6;
          v22[(char *)a8 - (char *)v14] = *v22 - v22[-a6];
          ++v22;
          --v23;
        }
        while ( v23 );
      }
      break;
    case 2:
      v24 = a6 * a3;
      if ( a6 < (__int64)v24 )
      {
        v25 = &SR_VEC_PTR_LANES(128, v14, i8)[a6];
        v26 = v24 - (__int64)a6;
        do
        {
          result = (_BYTE)v25 - a2;
          v25[(char *)a8 - (char *)v14] = *v25 - v25[-a2];
          ++v25;
          --v26;
        }
        while ( v26 );
      }
      break;
    case 3:
      v27 = a6 * a3;
      if ( a6 < v27 )
      {
        v28 = &SR_VEC_PTR_LANES(128, a8, i8)[a6 - (_QWORD)v14];
        v29 = v27 - a6;
        do
        {
          v30 = SR_VEC_PTR_LANES(128, v14, u8)[0];
          v31 = SR_VEC_PTR_LANES(128, v14, u8)[a6 - (__int64)a2];
          v14 = (     __m128i *)((char *)v14 + 1);
          result = SR_VEC_PTR_LANES(128, v14, i8)[a6 - 1] - ((unsigned int)(v30 + v31) >> 1);
          SR_VEC_PTR_LANES(128, v14, i8)[(_QWORD)v28 - 1] = result;
          --v29;
        }
        while ( v29 );
      }
      break;
    case 4:
      v32 = a6 * a3;
      if ( a6 < (__int64)v32 )
      {
        v33 = &SR_VEC_PTR_LANES(128, v14, u8)[a6 - (__int64)a2];
        v34 = &SR_VEC_PTR_LANES(128, a8, i8)[a2 - (_QWORD)v14];
        v35 = v32 - (__int64)a6;
        do
        {
          result = sub_140176F90(v33[v16 - a6], *v33, v33[-a6]);
          v33[(_QWORD)v34] = v33[v16] - result;
          ++v33;
          --v35;
        }
        while ( v35 );
      }
      break;
    case 5:
      v36 = a6 * a3;
      if ( a6 < (__int64)v36 )
      {
        v37 = &SR_VEC_PTR_LANES(128, v14, i8)[a6];
        v38 = v36 - (__int64)a6;
        do
        {
          result = *v37 - ((unsigned __int8)v37[-a6] >> 1);
          (v37++)[(char *)a8 - (char *)v14] = result;
          --v38;
        }
        while ( v38 );
      }
      break;
    case 6:
      v39 = a6 * a3;
      if ( a6 < (__int64)v39 )
      {
        v40 = &SR_VEC_PTR_LANES(128, v14, i8)[a6];
        v41 = v39 - (__int64)a6;
        do
        {
          result = (_BYTE)v40 - a6;
          v40[(char *)a8 - (char *)v14] = *v40 - v40[-a6];
          ++v40;
          --v41;
        }
        while ( v41 );
      }
      break;
    default:
      result = v13 - 1;
      break;
  }
  return result;
}

//----- (00000001401761E0) ----------------------------------------------------
__int64            sub_1401761E0(char *a1, char *a2)
{
  int v2;
  __int64 v3;
  __int64 v5;

  v2 = sub_14020B8E4(&v5, a1, a2);
  v3 = v5;
  if ( v2 )
    return 0;
  return v3;
}

//----- (0000000140176210) ----------------------------------------------------
float *           sub_140176210(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;

  v9 = *a6 + *a3;
  v10 = *a3 - *a6;
  v11 = *a7 + *a2;
  v12 = *a2 - *a7;
  v13 = *a8 + *a1;
  v14 = *a1 - *a8;
  v15 = *a5 + *a4;
  v16 = v12 + v14;
  v17 = (float)(*a4 - *a5) + v10;
  v18 = v15 + v13;
  v19 = v13 - v15;
  v20 = (float)(v10 + v12) * 0.70710677;
  v21 = (float)(v9 + v11) + v18;
  v22 = v18 - (float)(v9 + v11);
  v23 = (float)(v17 - (float)(v12 + v14)) * 0.38268343;
  v24 = v20 + v14;
  v25 = (float)((float)(v11 - v9) + v19) * 0.70710677;
  v26 = v14 - v20;
  v27 = (float)(v17 * 0.54119611) + v23;
  v28 = (float)(v16 * 1.306563) + v23;
  *a6 = v26 + v27;
  *a4 = v26 - v27;
  *a2 = v24 + v28;
  *a8 = v24 - v28;
  *a1 = v21;
  *a3 = v25 + v19;
  *a5 = v22;
  *a7 = v19 - v25;
  return a6;
}

//----- (0000000140176410) ----------------------------------------------------
__int64            CMFCVisualManager__OnDrawTab(
        __int64 a1,
        int *a2,
        int *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int16 *a8,
        _WORD *a9)
{
  unsigned __int16 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  float *v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float *v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  int v23;
  float v24;
  float v25;
  int v26;
  float v27;
  float v28;
  int v29;
  float v30;
  float v31;
  int v32;
  float v33;
  float v34;
  int v35;
  float v36;
  float v37;
  int v38;
  float v39;
  float v40;
  int v41;
  float v42;
  float v43;
  __int64 v44;
  bool v45;
  int v46;
  int *v47;
  int *v48;
  __int16 v49;
  int v50;
  int v51;
  unsigned __int16 i;
  int v53;
  int v54;
  int v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char *v60;
  __int64 v61;
  int v62;
  int v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int64 v69;
  int v70;
  int v71;
  unsigned int v72;
  int v73;
  int v74;
  int *v75;
  __int64 v76;
  int v77;
  int v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  int v83;
  __int16 v84;
  int v85;
  unsigned __int16 j;
  int *v87;
  int v88;
  int v89;
  int v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  int *v94;
  int v95;
  int v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140176410[448];
#define v101 (*(__int64 (*))(void *)(sr_frame_140176410 + 0)) /* [rsp+0h] */
#define v102 (*(char (*)[8])(void *)(sr_frame_140176410 + 64)) /* [rsp+40h] */
#define v103 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 72)) /* [rsp+48h] */
#define v104 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 74)) /* [rsp+4Ah] */
#define v105 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 76)) /* [rsp+4Ch] */
#define v106 (*(int * (*))(void *)(sr_frame_140176410 + 80)) /* [rsp+50h] */
#define v107 (*(int * (*))(void *)(sr_frame_140176410 + 88)) /* [rsp+58h] */
#define v108 (*(unsigned __int16 (*))(void *)(sr_frame_140176410 + 96)) /* [rsp+60h] */
#define v109 (*(__int64 (*))(void *)(sr_frame_140176410 + 104)) /* [rsp+68h] */
#define v110 (*(__int64 (*))(void *)(sr_frame_140176410 + 112)) /* [rsp+70h] */
#define v111 (*(__int64 (*))(void *)(sr_frame_140176410 + 120)) /* [rsp+78h] */
#define v112 (*(__int64 (*))(void *)(sr_frame_140176410 + 128)) /* [rsp+80h] */
#define v113 (*(__int64 (*))(void *)(sr_frame_140176410 + 136)) /* [rsp+88h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_140176410 + 144)) /* [rsp+90h] */
#define v115 (*(__int64 (*))(void *)(sr_frame_140176410 + 152)) /* [rsp+98h] */
#define v116 (*(_WORD * (*))(void *)(sr_frame_140176410 + 160)) /* [rsp+A0h] */
#define v117 (*(_DWORD (*)[61])(void *)(sr_frame_140176410 + 176)) /* [rsp+B0h] */
#define v118 (*(char (*))(void *)(sr_frame_140176410 + 420)) /* [rsp+1A4h] */
#define v119 (*(__int64 (*))(void *)(sr_frame_140176410 + 432)) /* [rsp+1B0h] */

  v115 = a1;
  v109 = (__int64)a8;
  v116 = a9;
  v110 = a4;
  v107 = a3;
  v105 = *a9;
  v104 = a9[1];
  v10 = a9[480];
  v103 = a9[481];
  v106 = a2;
  v108 = v10;
  if ( 8 * a5 > 0 )
  {
    v11 = 6;
    do
    {
      sub_140176210(
        (float *)(a4 + 4LL * (v11 - 6)),
        (float *)(a4 + 4LL * (v11 - 5)),
        (float *)(a4 + 4LL * (v11 - 4)),
        (float *)(a4 + 4LL * (v11 - 3)),
        (float *)(a4 + 4LL * (v11 - 2)),
        (float *)(a4 + 4LL * (v11 - 1)),
        (float *)(a4 + 4LL * v11),
        (float *)(a4 + 4LL * (v11 + 1)));
      v11 += a5;
    }
    while ( v11 - 6 < 8 * a5 );
  }
  v113 = a5;
  v12 = 8;
  v13 = 6 * a5;
  v111 = 8;
  v14 = (float *)(a4 + 4 * v13);
  v15 = 3 * a5 - v13;
  v16 = 2 * a5 - v13;
  v112 = v15;
  v114 = v16;
  do
  {
    sub_140176210(
      &v14[-6 * a5],
      &v14[a5 - v13],
      &v14[v16],
      &v14[v15],
      &v14[4 * a5 - v13],
      &v14[5 * a5 - v13],
      v14,
      &v14[7 * a5 - v13]);
    v15 = v112;
    ++v14;
    v16 = v114;
    --v12;
  }
  while ( v12 );
  v17 = 0;
  v18 = (float *)(v110 + 8);
  v19 = v115;
  v20 = 4 * v113;
  do
  {
    v21 = *(v18 - 2) * *(float *)(a6 + 4 * v17);
    if ( v21 >= 0.0 )
      v22 = v21 + 0.5;
    else
      v22 = v21 - 0.5;
    v23 = (int)v22;
    v24 = *(v18 - 1) * *(float *)(a6 + 4 * v17 + 4);
    v117[byte_14026E780[v17]] = v23;
    if ( v24 >= 0.0 )
      v25 = v24 + 0.5;
    else
      v25 = v24 - 0.5;
    v26 = (int)v25;
    v27 = *(float *)(a6 + 4 * v17 + 8) * *v18;
    v117[byte_14026E780[v17 + 1]] = v26;
    if ( v27 >= 0.0 )
      v28 = v27 + 0.5;
    else
      v28 = v27 - 0.5;
    v29 = (int)v28;
    v30 = *(float *)(a6 + 4 * v17 + 12) * v18[1];
    v117[byte_14026E780[v17 + 2]] = v29;
    if ( v30 >= 0.0 )
      v31 = v30 + 0.5;
    else
      v31 = v30 - 0.5;
    v32 = (int)v31;
    v33 = *(float *)(a6 + 4 * v17 + 16) * v18[2];
    v117[byte_14026E780[v17 + 3]] = v32;
    if ( v33 >= 0.0 )
      v34 = v33 + 0.5;
    else
      v34 = v33 - 0.5;
    v35 = (int)v34;
    v36 = *(float *)(a6 + 4 * v17 + 20) * v18[3];
    v117[byte_14026E780[v17 + 4]] = v35;
    if ( v36 >= 0.0 )
      v37 = v36 + 0.5;
    else
      v37 = v36 - 0.5;
    v38 = (int)v37;
    v39 = *(float *)(a6 + 4 * v17 + 24) * v18[4];
    v117[byte_14026E780[v17 + 5]] = v38;
    if ( v39 >= 0.0 )
      v40 = v39 + 0.5;
    else
      v40 = v39 - 0.5;
    v41 = (int)v40;
    v42 = *(float *)(a6 + 4 * v17 + 28) * v18[5];
    v117[byte_14026E780[v17 + 6]] = v41;
    if ( v42 >= 0.0 )
      v43 = v42 + 0.5;
    else
      v43 = v42 - 0.5;
    v44 = byte_14026E780[v17 + 7];
    v18 = (float *)((char *)v18 + v20);
    v17 += 8;
    v45 = v111-- == 1;
    v117[v44] = (int)v43;
  }
  while ( !v45 );
  v46 = v117[0] - a7;
  if ( v117[0] == a7 )
  {
    v47 = v107;
    sub_140176C80(v19, v106, v107, (unsigned __int16 *)v109);
    v48 = v106;
  }
  else
  {
    v49 = v46 - 1;
    v50 = abs32(v46);
    if ( v46 >= 0 )
      v49 = LOWORD(v117[0]) - a7;
    v51 = v50 >> 1;
    for ( i = 1; v51; v51 >>= 1 )
      ++i;
    v47 = v107;
    v53 = i;
    sub_140176C80(v19, v106, v107, (unsigned __int16 *)(v109 + 4LL * i));
    v48 = v106;
    v54 = v53 + *v107;
    v55 = *v106 | ((unsigned __int16)(v49 & ((1 << v53) - 1)) << (24 - v54));
    if ( v54 >= 8 )
    {
      v56 = (unsigned __int64)(unsigned int)v54 >> 3;
      v54 -= 8 * ((unsigned int)v54 >> 3);
      do
      {
        v57 = *(_QWORD *)(v19 + 8);
        v102[0] = BYTE2(v55);
        (*(void (           **)(__int64, char *, __int64))v19)(v57, v102, 1);
        if ( BYTE2(v55) == 0xFF )
        {
          v58 = *(_QWORD *)(v19 + 8);
          v102[0] = 0;
          (*(void (           **)(__int64, char *, __int64))v19)(v58, v102, 1);
        }
        v55 <<= 8;
        --v56;
      }
      while ( v56 );
      v48 = v106;
      v47 = v107;
    }
    *v48 = v55;
    *v47 = v54;
  }
  LODWORD(v59) = 63;
  v60 = &v118;
  v109 = 63;
  v61 = 63;
  while ( !*((_DWORD *)v60 + 2) )
  {
    if ( *((_DWORD *)v60 + 1) )
    {
      v59 = (unsigned int)(v59 - 1);
      goto LABEL_53;
    }
    if ( *(_DWORD *)v60 )
    {
      v59 = (unsigned int)(v59 - 2);
LABEL_53:
      v109 = v59;
      break;
    }
    v59 = (unsigned int)(v59 - 3);
    v61 -= 3;
    v60 -= 12;
    v109 = v59;
    if ( v61 <= 0 )
      break;
  }
  if ( (_DWORD)v59 )
  {
    v67 = (int)v59;
    LODWORD(v110) = 1;
    v68 = 1;
    if ( (int)v59 < 1LL )
    {
      v94 = v107;
    }
    else
    {
      v69 = 1;
      v111 = 1;
      do
      {
        v70 = v68;
        if ( !v117[v69] )
        {
          do
          {
            if ( v69 > v67 )
              break;
            ++v69;
            ++v68;
          }
          while ( !v117[v69] );
          LODWORD(v110) = v68;
          v111 = v69;
        }
        v71 = v68 - v70;
        LODWORD(v114) = v68 - v70;
        if ( v68 - v70 >= 16 )
        {
          v72 = v71 >> 4;
          if ( v71 >> 4 >= 1 )
          {
            v73 = v108;
            v74 = v103;
            v75 = v107;
            v76 = v72;
            LODWORD(v113) = v108;
            v112 = v72;
            do
            {
              v77 = v74 + *v75;
              v78 = *v48 | (v73 << (24 - (v74 + *(_BYTE *)v75)));
              if ( v77 >= 8 )
              {
                v79 = (unsigned __int64)(unsigned int)v77 >> 3;
                v77 -= 8 * ((unsigned int)v77 >> 3);
                do
                {
                  v80 = *(_QWORD *)(v19 + 8);
                  v102[0] = BYTE2(v78);
                  (*(void (           **)(__int64, char *, __int64))v19)(v80, v102, 1);
                  if ( BYTE2(v78) == 0xFF )
                  {
                    v81 = *(_QWORD *)(v19 + 8);
                    v102[0] = 0;
                    (*(void (           **)(__int64, char *, __int64))v19)(v81, v102, 1);
                  }
                  v78 <<= 8;
                  --v79;
                }
                while ( v79 );
                v76 = v112;
                v74 = v103;
                v73 = v113;
                v48 = v106;
              }
              --v76;
              *v48 = v78;
              v112 = v76;
              *v75 = v77;
            }
            while ( v76 );
            v69 = v111;
            v68 = v110;
            LOBYTE(v71) = v114;
          }
          v71 &= 0xFu;
        }
        v82 = v117[v69];
        v83 = abs32(v82);
        v84 = v82 - 1;
        if ( v82 >= 0 )
          v84 = v82;
        v85 = v83 >> 1;
        for ( j = 1; v85; v85 >>= 1 )
          ++j;
        v87 = v107;
        v88 = j;
        sub_140176C80(v19, v48, v107, &v116[32 * v71 + 2 * j]);
        v48 = v106;
        v89 = v88 + *v87;
        v90 = *v106 | ((unsigned __int16)(v84 & ((1 << v88) - 1)) << (24 - v89));
        if ( v89 >= 8 )
        {
          v91 = (unsigned __int64)(unsigned int)v89 >> 3;
          v89 -= 8 * ((unsigned int)v89 >> 3);
          do
          {
            v92 = *(_QWORD *)(v19 + 8);
            v102[0] = BYTE2(v90);
            (*(void (           **)(__int64, char *, __int64))v19)(v92, v102, 1);
            if ( BYTE2(v90) == 0xFF )
            {
              v93 = *(_QWORD *)(v19 + 8);
              v102[0] = 0;
              (*(void (           **)(__int64, char *, __int64))v19)(v93, v102, 1);
            }
            v90 <<= 8;
            --v91;
          }
          while ( v91 );
          v68 = v110;
          v48 = v106;
        }
        v94 = v107;
        ++v68;
        LODWORD(v59) = v109;
        ++v69;
        v67 = (int)v109;
        *v48 = v90;
        *v94 = v89;
        LODWORD(v110) = v68;
        v111 = v69;
      }
      while ( v69 <= v67 );
    }
    if ( (_DWORD)v59 != 63 )
    {
      v95 = *v94 + v104;
      v96 = *v48 | (v105 << (24 - (*(_BYTE *)v94 + v104)));
      if ( v95 >= 8 )
      {
        v97 = (unsigned __int64)(unsigned int)v95 >> 3;
        v95 -= 8 * ((unsigned int)v95 >> 3);
        do
        {
          v98 = *(_QWORD *)(v19 + 8);
          v102[0] = BYTE2(v96);
          (*(void (           **)(__int64, char *, __int64))v19)(v98, v102, 1);
          if ( BYTE2(v96) == 0xFF )
          {
            v99 = *(_QWORD *)(v19 + 8);
            v102[0] = 0;
            (*(void (           **)(__int64, char *, __int64))v19)(v99, v102, 1);
          }
          v96 <<= 8;
          --v97;
        }
        while ( v97 );
        v48 = v106;
        v94 = v107;
      }
      *v48 = v96;
      *v94 = v95;
    }
  }
  else
  {
    v62 = *v47 + v104;
    v63 = *v48 | (v105 << (24 - (*(_BYTE *)v47 + v104)));
    if ( v62 >= 8 )
    {
      v64 = (unsigned __int64)(unsigned int)v62 >> 3;
      v62 -= 8 * ((unsigned int)v62 >> 3);
      do
      {
        v65 = *(_QWORD *)(v19 + 8);
        v102[0] = BYTE2(v63);
        (*(void (           **)(__int64, char *, __int64))v19)(v65, v102, 1);
        if ( BYTE2(v63) == 0xFF )
        {
          v66 = *(_QWORD *)(v19 + 8);
          v102[0] = 0;
          (*(void (           **)(__int64, char *, __int64))v19)(v66, v102, 1);
        }
        v63 <<= 8;
        --v64;
      }
      while ( v64 );
      v48 = v106;
    }
    *v48 = v63;
    *v47 = v62;
  }
  return (unsigned int)v117[0]; /* 0x140176C51: mov eax, dword ptr [rbp - 0x50] */
}
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119

//----- (0000000140176C80) ----------------------------------------------------
__int64            sub_140176C80(__int64 a1, int *a2, int *a3, unsigned __int16 *a4)
{
  int v5;
  int v7;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  char v14;

  v5 = *a3 + a4[1];
  v7 = *a2 | (*a4 << (24 - (*(_BYTE *)a3 + a4[1])));
  if ( v5 < 8 )
  {
    *a2 = v7;
    *a3 = v5;
  }
  else
  {
    v9 = (unsigned __int64)(unsigned int)v5 >> 3;
    v10 = v5 - 8 * ((unsigned int)v5 >> 3);
    do
    {
      v11 = *(_QWORD *)(a1 + 8);
      v14 = BYTE2(v7);
      result = (*(__int64 (           **)(__int64, char *, __int64))a1)(v11, &v14, 1);
      if ( BYTE2(v7) == 0xFF )
      {
        v13 = *(_QWORD *)(a1 + 8);
        v14 = 0;
        result = (*(__int64 (           **)(__int64, char *, __int64))a1)(v13, &v14, 1);
      }
      v7 <<= 8;
      --v9;
    }
    while ( v9 );
    *a2 = v7;
    *a3 = v10;
  }
  return result;
}

//----- (0000000140176D40) ----------------------------------------------------
char            sub_140176D40(_BYTE *a1, float *a2)
{
  float v4;
  float v5;
  float v6;
  float v7;
  char result;
  int v9;

  v4 = fmaxf(fmaxf(a2[2], a2[1]), *a2);
  if ( v4 >= 1.0e-32 )
  {
    v5 = sub_14020B144(v4, &v9);
    v6 = (float)(v5 * 256.0) / v4;
    *a1 = (int)(float)(v6 * *a2);
    a1[1] = (int)(float)(v6 * a2[1]);
    v7 = v6 * a2[2];
    result = v9 + 0x80;
    a1[3] = v9 + 0x80;
    a1[2] = (int)v7;
  }
  else
  {
    *(_DWORD *)a1 = 0;
  }
  return result;
}

//----- (0000000140176DF0) ----------------------------------------------------
__int64 sub_140176DF0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        unsigned int a10,
        unsigned __int8 *a11,
        ...)
{
  int v11;
  __int64 v12;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  int v20;
  int v21;
  int v22;
  int v23[3];
  int v25;
  va_list va;

  va_start(va, a11);
  v25 = a3;
  v11 = a3;
  v12 = (unsigned int)a4;
  if ( a5 < 0 || a4 < 0 )
    return 0;
  sub_140177AB0(a1, a11, (__int64)va);
  v23[0] = 0;
  if ( a5 > 0 )
  {
    if ( dword_140404A6C[18215637] )
    {
      v11 = -v11;
      v25 = v11;
    }
    v14 = a5 - 1;
    v15 = -1;
    if ( v11 >= 0 )
    {
      v14 = 0;
      v15 = a5;
    }
    v20 = v14;
    v21 = v15;
    if ( v14 != v15 )
    {
      v16 = a6 * v12 * v14;
      v17 = a6 * v12 * v11;
      v22 = v17;
      do
      {
        if ( (int)v12 > 0 )
        {
          v18 = a8 + v16;
          do
          {
            sub_1401776D0(a1, a2, a6, a9, a7, v18);
            v18 += a6;
            --v12;
          }
          while ( v12 );
          v14 = v20;
          v11 = v25;
          v12 = (unsigned int)a4;
          v15 = v21;
          v17 = v22;
        }
        if ( *(_DWORD *)(a1 + 80) )
        {
          (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
          *(_DWORD *)(a1 + 80) = 0;
        }
        (*(void (           **)(_QWORD, int *, _QWORD))a1)(*(_QWORD *)(a1 + 8), v23, a10);
        v14 += v11;
        v16 += v17;
        v20 = v14;
      }
      while ( v14 != v15 );
    }
  }
  return 1;
}

//----- (0000000140176F90) ----------------------------------------------------
__int64            sub_140176F90(int a1, int a2, int a3)
{
  unsigned __int8 v3;
  int v4;
  signed int v5;
  signed int v6;
  signed int v7;
  __int64 result;
  bool v9;

  v3 = a1;
  v4 = a1 - a3 + a2 - a3;
  v5 = abs32(a2 - a3);
  v6 = abs32(a1 - a3);
  v7 = abs32(v4);
  if ( v5 <= v6 && v5 <= v7 )
    return v3;
  v9 = v6 <= v7;
  result = (unsigned __int8)a2;
  if ( !v9 )
    return (unsigned __int8)a3;
  return result;
}

//----- (0000000140177000) ----------------------------------------------------
__int64            sub_140177000(__int64 a1, char a2)
{
  char v3;

  v3 = a2;
  return (*(__int64 (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v3, 1);
}

//----- (0000000140177030) ----------------------------------------------------
__int64            sub_140177030(__int64 *a1, int a2, int a3)
{
  __int64 v3;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;

  v3 = *a1;
  if ( *a1 )
    v5 = 2 * *(_DWORD *)(v3 - 8);
  else
    v5 = 1;
  v6 = v5 + a2;
  v7 = v3 - 8;
  v8 = a3 * (v5 + a2) + 8LL;
  if ( !v3 )
    v7 = 0;
  v9 = j__realloc_base_sr(v7, v8);
  if ( v9 )
  {
    if ( !*a1 )
      *(_DWORD *)(v9 + 4) = 0;
    v11 = v9 + 8;
    *a1 = v11;
    *(_DWORD *)(v11 - 8) = v6;
    return *a1;
  }
  else
  {
    crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
    return *a1;
  }
}

//----- (0000000140177160) ----------------------------------------------------
__int64            sub_140177160(__int64 a1, char a2)
{
  int v2;
  int v5;

  v2 = *(_DWORD *)(a1 + 80);
  v5 = v2;
  if ( (unsigned int)(v2 + 1) > 0x40 && v2 )
  {
    (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    v5 = 0;
    *(_DWORD *)(a1 + 80) = 0;
  }
  *(_BYTE *)(v5 + a1 + 16) = a2;
  ++*(_DWORD *)(a1 + 80);
  return v5;
}

//----- (00000001401771B0) ----------------------------------------------------
__int64            sub_1401771B0(__int64 a1, char a2, char a3, char a4)
{
  int v6;
  int v9;

  v6 = *(_DWORD *)(a1 + 80);
  v9 = v6;
  if ( (unsigned int)(v6 + 3) > 0x40 && v6 )
  {
    (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    v9 = 0;
  }
  *(_DWORD *)(a1 + 80) = v9 + 3;
  *(_BYTE *)(v9 + a1 + 16) = a2;
  *(_BYTE *)(v9 + a1 + 17) = a3;
  *(_BYTE *)(v9 + a1 + 18) = a4;
  return v9;
}

//----- (0000000140177220) ----------------------------------------------------
__int64            sub_140177220(__int64 a1, int a2, __int64 a3)
{
  char v7;

  v7 = a2;
  if ( a2 > 128 )
    crt_assert((char *)L"length <= 128", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x28Du);
  (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v7, 1);
  return (*(__int64 (           **)(_QWORD, __int64, _QWORD))a1)(*(_QWORD *)(a1 + 8), a3, (unsigned int)a2);
}

//----- (0000000140177290) ----------------------------------------------------
__int64            sub_140177290(__int64 a1)
{
  __int64 result;

  if ( *(_DWORD *)(a1 + 80) )
  {
    result = (*(__int64 (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    *(_DWORD *)(a1 + 80) = 0;
  }
  return result;
}

//----- (00000001401772C0) ----------------------------------------------------
__int64            sub_1401772C0(__int64 a1, int a2, int a3, _BYTE *a4, float *a5)
{
  __int64 result;
  float *v8;
  _BYTE *v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  _BYTE *v13;
  float *v14;
  float *v15;
  float v16;
  float v17;
  float v18;
  float v19;
  char v20;
  int v21;
  int v22;
  int v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  _BYTE *v28;
  int v29;
  int v30;
  int v31;
  _BYTE *v32;
  char v33;
  unsigned int v34;
  __int64 v35;
  _BYTE *v36;
  int v37;
  float *v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  float *v42;
  float *v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401772C0[240];
#define v50 (*(char (*)[8])(void *)(sr_frame_1401772C0 + 0)) /* [rsp+28h] */
#define v51 (*(int (*))(void *)(sr_frame_1401772C0 + 8)) /* [rsp+30h] */
#define v52 (*(__int16 (*))(void *)(sr_frame_1401772C0 + 12)) /* [rsp+34h] */
#define v53 (*(char (*))(void *)(sr_frame_1401772C0 + 14)) /* [rsp+36h] */
#define v54 (*(char (*))(void *)(sr_frame_1401772C0 + 15)) /* [rsp+37h] */
#define v55 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 16)) /* [rsp+38h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 24)) /* [rsp+40h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1401772C0 + 32)) /* [rsp+48h] */
#define v58 (*(int (*))(void *)(sr_frame_1401772C0 + 216)) /* [rsp+100h] */
#define v59 (*(_BYTE * (*))(void *)(sr_frame_1401772C0 + 232)) /* [rsp+110h] */

  v59 = a4;
  result = (unsigned int)(a2 >> 8);
  v52 = 514;
  v53 = BYTE1(a2);
  v54 = a2;
  if ( a2 < 8 )
  {
    if ( a2 <= 0 )
      return result;
  }
  else if ( a2 < 0x8000 )
  {
    v8 = a5;
    v9 = a4;
    v10 = (unsigned int)a2;
    v58 = a3 - 3;
    v11 = a3 - 3;
    v12 = 2 * a2;
    v57 = 4LL * a3;
    v13 = &a4[v12];
    v55 = a2 - v12;
    v56 = 3 * a2 - v12;
    do
    {
      if ( v11 > 1 )
      {
        v15 = v8;
        v14 = v8;
      }
      else
      {
        v14 = v8 + 1;
        v15 = v8 + 2;
      }
      v16 = *v14;
      v17 = *v15;
      v18 = *v8;
      v19 = fmaxf(*v14, *v15);
      if ( *v8 > v19 )
        v19 = *v8;
      if ( v19 >= 1.0e-32 )
      {
        v24 = sub_14020B144(v19, &v58);
        v20 = v58 + 0x80;
        HIBYTE(v51) = v58 + 0x80;
        v25 = (float)(v24 * 256.0) / v19;
        v23 = (int)(float)(v18 * v25);
        v22 = (int)(float)(v16 * v25);
        LOBYTE(v51) = v23;
        v21 = (int)(float)(v17 * v25);
        BYTE1(v51) = v22;
        BYTE2(v51) = v21;
      }
      else
      {
        v20 = 0;
        v51 = 0;
        LOBYTE(v21) = 0;
        LOBYTE(v22) = 0;
        LOBYTE(v23) = 0;
      }
      v8 = (float *)((char *)v8 + v57);
      *v9++ = v23;
      v13[v55] = v22;
      v26 = v56;
      *v13 = v21;
      (v13++)[v26] = v20;
      --v10;
    }
    while ( v10 );
    v27 = 4;
    (*(void (           **)(_QWORD, __int16 *, __int64))a1)(*(_QWORD *)(a1 + 8), &v52, 4);
    v28 = v59;
    do
    {
      v29 = 0;
      do
      {
        v30 = v29 + 2;
        v31 = v29;
        if ( v29 + 2 < a2 )
        {
          v32 = &v28[v29 + 2];
          do
          {
            v33 = *(v32 - 2);
            if ( v33 == *(v32 - 1) && v33 == *v32 )
              break;
            ++v31;
            ++v30;
            ++v32;
          }
          while ( v30 < a2 );
        }
        if ( v31 + 2 >= a2 )
          v31 = a2;
        for ( ; v29 < v31; v29 += v34 )
        {
          v34 = v31 - v29;
          if ( v31 - v29 > 128 )
            v34 = 128;
          v35 = *(_QWORD *)(a1 + 8);
          LOBYTE(v58) = v34;
          (*(void (           **)(__int64, int *, __int64))a1)(v35, &v58, 1);
          (*(void (           **)(_QWORD, _BYTE *, _QWORD))a1)(*(_QWORD *)(a1 + 8), &v28[v29], v34);
        }
        if ( v31 + 2 < a2 )
        {
          if ( v31 < a2 )
          {
            v36 = &v28[v31];
            do
            {
              if ( *v36 != v28[v29] )
                break;
              ++v31;
              ++v36;
            }
            while ( v31 < a2 );
          }
          for ( ; v29 < v31; v29 += v37 )
          {
            v37 = v31 - v29;
            v50[0] = v28[v29];
            if ( v31 - v29 <= 127 )
            {
              LOBYTE(v58) = v37 + 0x80;
              if ( v37 + 128 > 255 )
                crt_assert(
                  (char *)L"length+128 <= 255",
                  (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
                  0x285u);
            }
            else
            {
              v37 = 127;
              LOBYTE(v58) = -1;
            }
            (*(void (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &v58, 1);
            (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v50, 1);
          }
        }
      }
      while ( v29 < a2 );
      result = a2;
      v28 += a2;
      --v27;
    }
    while ( v27 );
    return result;
  }
  v38 = a5;
  v39 = a3 - 3;
  v40 = (unsigned int)a2;
  v41 = 4LL * a3;
  do
  {
    if ( v39 > 1 )
    {
      v43 = v38;
      v42 = v38;
    }
    else
    {
      v42 = v38 + 1;
      v43 = v38 + 2;
    }
    v44 = *v42;
    v45 = *v43;
    v46 = *v38;
    v47 = fmaxf(*v42, *v43);
    if ( *v38 > v47 )
      v47 = *v38;
    if ( v47 >= 1.0e-32 )
    {
      v48 = sub_14020B144(v47, &v58);
      v49 = (float)(v48 * 256.0) / v47;
      LOBYTE(v51) = (int)(float)(v46 * v49);
      BYTE1(v51) = (int)(float)(v44 * v49);
      BYTE2(v51) = (int)(float)(v45 * v49);
      HIBYTE(v51) = v58 + 0x80;
    }
    else
    {
      v51 = 0;
    }
    result = (*(__int64 (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &v51, 4);
    v38 = (float *)((char *)v38 + v41);
    --v40;
  }
  while ( v40 );
  return result;
}
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59

//----- (00000001401776D0) ----------------------------------------------------
__int64            sub_1401776D0(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6;
  __int64 v8;
  __int64 v10;
  int v11;
  char v12;
  __int64 result;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  char v18;
  int v19;
  int v20;
  char v21;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401776D0[16];
#define v22 (*(char (*))(void *)(sr_frame_1401776D0 + 0)) /* [rsp+50h] */
#define v23 (*(char (*))(void *)(sr_frame_1401776D0 + 1)) /* [rsp+51h] */
#define v24 (*(char (*))(void *)(sr_frame_1401776D0 + 2)) /* [rsp+52h] */

  v6 = a6;
  v8 = a3;
  v10 = a2;
  if ( a4 < 0 )
  {
    v11 = *(_DWORD *)(a1 + 80);
    v12 = *(_BYTE *)(a3 + a6 - 1);
    if ( (unsigned int)(v11 + 1) > 0x40 && v11 )
    {
      (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
      v11 = 0;
      *(_DWORD *)(a1 + 80) = 0;
    }
    result = v11;
    *(_BYTE *)(v11 + a1 + 16) = v12;
    ++*(_DWORD *)(a1 + 80);
  }
  if ( (int)v8 <= 0 )
    goto LABEL_16;
  if ( (int)v8 <= 2 )
  {
    v18 = *(_BYTE *)v6;
    if ( a5 )
      result = sub_1401771B0(a1, v18, v18, v18);
    else
      result = sub_140177160(a1, v18);
  }
  else
  {
    if ( (_DWORD)v8 != 3 )
    {
      if ( (_DWORD)v8 != 4 )
        goto LABEL_16;
      if ( !a4 )
      {
        v14 = *(unsigned __int8 *)(v6 + 3);
        v15 = v14 * *(unsigned __int8 *)(v6 + 1);
        v22 = -(char)(v14 * (*(_BYTE *)v6 + 1)) - 1;
        v16 = v15;
        v17 = v14 * (*(unsigned __int8 *)(v6 + 2) - 255);
        v23 = v16 / 0xFF;
        v24 = ((int)((unsigned __int64)(2155905153LL * v17) >> 32) >> 7 < 0)
            + ((int)((unsigned __int64)(2155905153LL * v17) >> 32) >> 7)
            - 1;
        return sub_1401771B0(a1, *(&v22 + 1 - (int)v10), v23, *(&v23 + v10));
      }
    }
    result = sub_1401771B0(a1, *(_BYTE *)(1 - (int)v10 + v6), *(_BYTE *)(v6 + 1), *(_BYTE *)(v10 + v6 + 1));
  }
LABEL_16:
  if ( a4 > 0 )
  {
    v19 = *(_DWORD *)(a1 + 80);
    v20 = v19;
    v21 = *(_BYTE *)(v8 + v6 - 1);
    if ( (unsigned int)(v19 + 1) > 0x40 )
    {
      if ( v19 )
      {
        (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
        v20 = 0;
        *(_DWORD *)(a1 + 80) = 0;
      }
    }
    *(_BYTE *)(v20 + a1 + 16) = v21;
    ++*(_DWORD *)(a1 + 80);
    return v20;
  }
  return result;
}
#undef v22
#undef v23
#undef v24

//----- (0000000140177890) ----------------------------------------------------
__int64            sub_140177890(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        unsigned int a9,
        int a10)
{
  __int64 result;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177890[128];
#define v19 (*(int (*))(void *)(sr_frame_140177890 + 0)) /* [rsp+30h] */
#define v20 (*(int (*))(void *)(sr_frame_140177890 + 4)) /* [rsp+34h] */
#define v21 (*(int (*))(void *)(sr_frame_140177890 + 8)) /* [rsp+38h] */
#define v23 (*(int (*))(void *)(sr_frame_140177890 + 96)) /* [rsp+90h] */
#define v24 (*(int (*))(void *)(sr_frame_140177890 + 104)) /* [rsp+98h] */
#define v25 (*(int (*))(void *)(sr_frame_140177890 + 112)) /* [rsp+A0h] */

  v24 = a4;
  v23 = a3;
  result = (unsigned int)a5;
  v21 = 0;
  v11 = a3;
  if ( a5 > 0 )
  {
    if ( dword_140404A6C[18215637] )
    {
      v11 = -a3;
      v23 = -a3;
    }
    v13 = a5 - 1;
    v14 = -1;
    if ( v11 >= 0 )
    {
      v13 = 0;
      v14 = a5;
    }
    v25 = v13;
    v19 = v14;
    if ( v13 != v14 )
    {
      v15 = a6 * a4 * v13;
      v16 = a6 * a4 * v11;
      v20 = v16;
      do
      {
        if ( a4 > 0 )
        {
          v17 = a7 + v15;
          v18 = (unsigned int)a4;
          do
          {
            sub_1401776D0(a1, a2, a6, a8, a10, v17);
            v17 += a6;
            --v18;
          }
          while ( v18 );
          v11 = v23;
          v13 = v25;
          v14 = v19;
          v16 = v20;
        }
        if ( *(_DWORD *)(a1 + 80) )
        {
          (*(void (           **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
          *(_DWORD *)(a1 + 80) = 0;
        }
        result = (*(__int64 (           **)(_QWORD, int *, _QWORD))a1)(*(_QWORD *)(a1 + 8), &v21, a9);
        a4 = v24;
        v13 += v11;
        v15 += v16;
        v25 = v13;
      }
      while ( v13 != v14 );
    }
  }
  return result;
}
#undef v19
#undef v20
#undef v21
#undef v23
#undef v24
#undef v25

//----- (0000000140177A10) ----------------------------------------------------
__int64            sub_140177A10(__int64 a1, int a2, char a3)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177A10[16];
#define v5 (*(char (*))(void *)(sr_frame_140177A10 + 0)) /* [rsp+38h] */
#define v6 (*(char (*))(void *)(sr_frame_140177A10 + 8)) /* [rsp+40h] */

  v6 = a3;
  v5 = a2 + 0x80;
  if ( a2 + 128 > 255 )
    crt_assert(
      (char *)L"length+128 <= 255",
      (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
      0x285u);
  (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v5, 1);
  return (*(__int64 (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v6, 1);
}
#undef v5
#undef v6

//----- (0000000140177A80) ----------------------------------------------------
__int64 sub_140177A80(__int64 a1, unsigned __int8 *a2, ...)
{
  va_list va;

  va_start(va, a2);
  return sub_140177AB0(a1, a2, (__int64)va);
}

//----- (0000000140177AB0) ----------------------------------------------------
__int64            sub_140177AB0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result;
  unsigned __int8 *v4;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int16 *v11;
  __int64 v12;
  int v13;
  int v14;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177AB0[64];
#define v15 (*(int (*))(void *)(sr_frame_140177AB0 + 0)) /* [rsp+20h] */
#define v16 (*(char (*))(void *)(sr_frame_140177AB0 + 40)) /* [rsp+48h] */
#define v17 (*(__int16 (*))(void *)(sr_frame_140177AB0 + 56)) /* [rsp+58h] */

  result = *a2;
  v4 = a2;
  if ( (_BYTE)result )
  {
    v6 = a3 - 8;
    do
    {
      ++v4;
      v7 = (char)result - 32;
      if ( v7 )
      {
        v8 = v7 - 17;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 2 )
              return crt_assert(
                       (char *)L"0",
                       (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
                       0x173u);
            v10 = *(_DWORD *)(v6 + 8);
            v11 = (__int16 *)&v15;
            v6 += 8;
            v15 = v10;
            v12 = 4;
          }
          else
          {
            v13 = *(_DWORD *)(v6 + 8);
            v11 = &v17;
            v6 += 8;
            v17 = v13;
            v12 = 2;
          }
        }
        else
        {
          v14 = *(unsigned __int8 *)(v6 + 8);
          v11 = (__int16 *)&v16;
          v6 += 8;
          v16 = v14;
          v12 = 1;
        }
        (*(void (           **)(_QWORD, __int16 *, __int64))a1)(*(_QWORD *)(a1 + 8), v11, v12);
      }
      result = *v4;
    }
    while ( (_BYTE)result );
  }
  return result;
}
#undef v15
#undef v16
#undef v17

//----- (0000000140177C80) ----------------------------------------------------
_DWORD *           sub_140177C80(_DWORD *a1, _BYTE *a2, int *a3)
{
  _DWORD *v5;
  int *v6;
  int v7;
  int *v8;
  int *v9;

  v5 = a1;
  if ( *a3 >= 8 )
  {
    v6 = a1 - 2;
    while ( v5 )
    {
      if ( *(v5 - 1) + 1 >= *v6 )
      {
        v7 = 2 * *v6 + 1;
LABEL_7:
        v8 = v6;
        if ( !v5 )
          v8 = nullptr;
        v9 = (int *)j__realloc_base_sr(v8, v7 + 8LL);
        if ( v9 )
        {
          if ( !v5 )
            v9[1] = 0;
          v5 = v9 + 2;
          v6 = v9;
          *v9 = v7;
        }
        else
        {
          crt_assert("p", (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        }
      }
      *((_BYTE *)v5 + (int)(*(v5 - 1))++) = *a2;
      *(_DWORD *)a2 >>= 8;
      *a3 -= 8;
      if ( *a3 < 8 )
        return v5;
    }
    v7 = 2;
    goto LABEL_7;
  }
  return v5;
}

//----- (0000000140177D70) ----------------------------------------------------
__int64            sub_140177D70(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v3;
  int v5;
  int v6;
  int *v7;
  int v8;
  __int64 v9;
  __int64 result;
  int v11;
  int v12;
  __int64 v13;
  _DWORD *v14;

  v3 = a3;
  v5 = 0;
  if ( a3 > 0 )
  {
    v6 = a1[2];
    v7 = (int *)(a2 + 12);
    v8 = a1[3];
    v9 = 0;
    do
    {
      if ( v6 + *v7 > *a1 )
      {
        v8 = a1[4];
        v6 = 0;
        a1[3] = v8;
        a1[2] = 0;
      }
      if ( v8 + v7[1] > a1[1] )
        break;
      *(v7 - 3) = v6;
      result = (unsigned int)a1[3];
      v11 = *v7;
      *(v7 - 2) = result;
      v7[2] = 1;
      v6 = a1[2] + v11;
      v8 = a1[3];
      a1[2] = v6;
      v12 = v8 + v7[1];
      if ( v12 > a1[4] )
        a1[4] = v12;
      ++v5;
      ++v9;
      v7 += 6;
    }
    while ( v9 < v3 );
  }
  if ( v5 < v3 )
  {
    result = 3LL * v5;
    v13 = v3 - v5;
    v14 = (_DWORD *)(a2 + 20 + 24LL * v5);
    do
    {
      *v14 = 0;
      v14 += 6;
      --v13;
    }
    while ( v13 );
  }
  return result;
}

//----- (0000000140177E50) ----------------------------------------------------
__int64            sub_140177E50(
        __int64 a1,
        unsigned int a2,
        float a3,
        _WORD *a4,
        signed int a5,
        signed int a6,
        int a7,
        int a8,
        __int64 a9)
{
  unsigned int v9;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  float v16;
  int v17;
  int v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __m128 v31;
  __m128d v32;
  int v33;
  __m128 v34;
  __m128d v35;
  int v36;
  __m128 v37;
  __m128d v38;
  int v39;
  __m128 v40;
  __m128d v41;
  int v42;
  int v43;
  int v44;
  signed int v45;
  int v46;
  signed int v47;
  __int16 v48;
  __int64 v49;
  __m128i v50;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140177E50[176];
#define v51 (*(int (*))(void *)(sr_frame_140177E50 + 0)) /* [rsp+50h] */
#define v52 (*(int (*))(void *)(sr_frame_140177E50 + 4)) /* [rsp+54h] */
#define v53 (*(int (*))(void *)(sr_frame_140177E50 + 8)) /* [rsp+58h] */
#define v54 (*(int (*))(void *)(sr_frame_140177E50 + 12)) /* [rsp+5Ch] */
#define v55 (*(__int64 (*))(void *)(sr_frame_140177E50 + 24)) /* [rsp+68h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_140177E50 + 32)) /* [rsp+70h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_140177E50 + 40)) /* [rsp+78h] */
#define v58 (*(__int128 (*))(void *)(sr_frame_140177E50 + 48)) /* [rsp+80h] */
#define v59 (*(__int128 (*))(void *)(sr_frame_140177E50 + 64)) /* [rsp+90h] */
#define v60 (*(__int64 (*))(void *)(sr_frame_140177E50 + 80)) /* [rsp+A0h] */
#define v61 (*(int (*))(void *)(sr_frame_140177E50 + 88)) /* [rsp+A8h] */
#define v62 (*(__int64 (*))(void *)(sr_frame_140177E50 + 96)) /* [rsp+B0h] */
#define v63 (*(__int64 (*))(void *)(sr_frame_140177E50 + 104)) /* [rsp+B8h] */
#define v64 (*(int (*))(void *)(sr_frame_140177E50 + 132)) /* [rsp+D4h] */
#define v65 (*(int (*))(void *)(sr_frame_140177E50 + 136)) /* [rsp+D8h] */
#define v66 (*(int (*))(void *)(sr_frame_140177E50 + 172)) /* [rsp+FCh] */

  v9 = 0;
  v62 = 0;
  if ( !(unsigned int)sub_14017B740((__int64)&v62, a1, a2) )
    return 0xFFFFFFFFLL;
  crt_memset((void *)(uintptr_t)(a4), 0, a6 * a5);
  v12 = 1;
  v13 = 1;
  v14 = 1;
  v52 = 1;
  v15 = 0;
  v53 = 0;
  v16 = a3
      / (float)((__int16)(*(unsigned __int8 *)(v64 + v63 + 5) + (*(unsigned __int8 *)(v64 + v63 + 4) << 8))
              - (__int16)(*(unsigned __int8 *)(v64 + v63 + 7) + (*(unsigned __int8 *)(v64 + v63 + 6) << 8)));
  if ( a8 > 0 )
  {
    v55 = 0;
    v56 = a9 + 4;
    do
    {
      v17 = sub_140178410((__int64)&v62, a7 + v15);
      v18 = v17;
      v19 = *(unsigned __int8 *)(v64 + v63 + 35);
      if ( v17 >= (int)(v19 + (*(unsigned __int8 *)(v64 + v63 + 34) << 8)) )
      {
        v21 = v19 + ((unsigned __int64)*(unsigned __int8 *)(v64 + v63 + 34) << 8);
        v20 = (*(unsigned __int8 *)(v65 + v63 + 4 * v21 - 4) << 8) + *(unsigned __int8 *)(v65 + v63 + 4 * v21 - 3);
      }
      else
      {
        v20 = *(unsigned __int8 *)(v65 + v63 + 4 * v17 + 1) + (*(unsigned __int8 *)(v65 + v63 + 4 * v17) << 8);
      }
      v54 = v20;
      if ( v66 )
      {
        v57 = 1;
        v60 = 0;
        v61 = 0;
        v58 = 0;
        v59 = 0;
        v22 = sub_140182AD0((__int64)&v62, v17, (__int64)&v57);
        v23 = 0;
        v24 = 0;
        v25 = 0;
        if ( v22 )
          v23 = HIDWORD(v59);
        v26 = 0;
        if ( v22 )
        {
          v24 = v59;
          v25 = DWORD1(v59);
          v26 = DWORD2(v59);
        }
      }
      else
      {
        v27 = sub_14017DA60((__int64)&v62, v17);
        if ( v27 < 0 )
        {
          v28 = 0;
          v29 = 0;
          v30 = 0;
          goto LABEL_30;
        }
        v23 = (__int16)(*(unsigned __int8 *)(v27 + v63 + 9) + (*(unsigned __int8 *)(v27 + v63 + 8) << 8));
        v24 = (__int16)(*(unsigned __int8 *)(v27 + v63 + 3) + (*(unsigned __int8 *)(v27 + v63 + 2) << 8));
        v25 = (__int16)(*(unsigned __int8 *)(v27 + v63 + 7) + (*(unsigned __int8 *)(v27 + v63 + 6) << 8));
        v26 = (__int16)(*(unsigned __int8 *)(v27 + v63 + 5) + (*(unsigned __int8 *)(v27 + v63 + 4) << 8));
      }
      v31 = _mm_set_ss((float)-v26);
      SR_VEC_LANES(128, v31, f32)[0] = SR_VEC_LANES(128, v31, f32)[0] * v16;
      v32 = _mm_cvtps_pd(v31);
      v33 = (int)SR_VEC_LANES(128, v32, f64)[0];
      if ( (double)v33 != SR_VEC_LANES(128, v32, f64)[0] )
        SR_VEC_LANES(128, v32, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v32, v32)) & 1) + v33);
      v34 = _mm_set_ss((float)v25);
      v28 = (int)SR_VEC_LANES(128, v32, f64)[0];
      SR_VEC_LANES(128, v34, f32)[0] = SR_VEC_LANES(128, v34, f32)[0] * v16;
      v35 = _mm_cvtps_pd(v34);
      v36 = (int)SR_VEC_LANES(128, v35, f64)[0];
      if ( (double)v36 != SR_VEC_LANES(128, v35, f64)[0] )
        SR_VEC_LANES(128, v35, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v35, v35)) & 1) + v36);
      v37 = _mm_set_ss((float)v24);
      v29 = (int)SR_VEC_LANES(128, v35, f64)[0];
      SR_VEC_LANES(128, v37, f32)[0] = SR_VEC_LANES(128, v37, f32)[0] * v16;
      v38 = _mm_cvtps_pd(v37);
      v39 = (int)SR_VEC_LANES(128, v38, f64)[0];
      if ( (double)v39 != SR_VEC_LANES(128, v38, f64)[0] )
        SR_VEC_LANES(128, v38, f64)[0] = (double)(v39 - (_mm_movemask_pd(_mm_unpacklo_pd(v38, v38)) & 1));
      v9 = (int)SR_VEC_LANES(128, v38, f64)[0];
      v40 = _mm_set_ss((float)-v23);
      SR_VEC_LANES(128, v40, f32)[0] = SR_VEC_LANES(128, v40, f32)[0] * v16;
      v41 = _mm_cvtps_pd(v40);
      v42 = (int)SR_VEC_LANES(128, v41, f64)[0];
      if ( (double)v42 != SR_VEC_LANES(128, v41, f64)[0] )
        SR_VEC_LANES(128, v41, f64)[0] = (double)(v42 - (_mm_movemask_pd(_mm_unpacklo_pd(v41, v41)) & 1));
      v30 = (int)SR_VEC_LANES(128, v41, f64)[0];
LABEL_30:
      v43 = v29 - v9;
      v44 = v28 - v30;
      v45 = v43 + v14 + 1;
      if ( v45 >= a5 )
        v14 = 1;
      v46 = v52;
      if ( v45 < a5 )
        v46 = v13;
      v51 = v46;
      v47 = v44 + v46 + 1;
      if ( v47 >= a6 )
        return (unsigned int)-v53;
      if ( v43 + v14 >= a5 )
        crt_assert((char *)L"x+gw < pw", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xE47u);
      if ( v44 + v51 >= a6 )
        crt_assert((char *)L"y+gh < ph", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xE48u);
      sub_14017C040((__int64)&v62, (__int64)a4 + a5 * v51 + v14, v43, v44, a5, v16, v16, 0.0, 0, v18);
      *(_WORD *)(v56 - 4) = v14;
      *(_WORD *)(v56 - 2) = v51;
      v48 = v44 + v51;
      v49 = v55;
      *(_WORD *)v56 = v43 + v14;
      v14 += v43 + 1;
      *(_WORD *)(v56 + 2) = v48;
      if ( v47 <= v52 )
        v47 = v52;
      v15 = v53 + 1;
      v12 = v47;
      v13 = v51;
      ++v55;
      v52 = v12;
      ++v53;
      *(float *)(v56 + 12) = (float)v54 * v16;
      v50 = _mm_cvtsi32_si128(v9);
      v9 = 0;
      *(float *)(v56 + 8) = (float)v30;
      *(_DWORD *)(v56 + 4) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v50), u32)[0];
      v56 += 20;
    }
    while ( v49 + 1 < a8 );
  }
  return v12;
}
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66

// 1401780F2: conditional instruction was optimized away because rcx.8<100000000u
// 14017813A: conditional instruction was optimized away because rcx.8<100000000u
// 140178181: conditional instruction was optimized away because rcx.8<100000000u
// 1401781CA: conditional instruction was optimized away because rcx.8<100000000u

//----- (00000001401783D0) ----------------------------------------------------
_BOOL8            sub_1401783D0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  return a2 == (unsigned int)sub_14017D6B0(a1, a2, a3, a4);
}

//----- (00000001401783F0) ----------------------------------------------------
_BOOL8            sub_1401783F0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  return a2 == (unsigned int)sub_14017D6B0(a1, a2, a3, a4);
}

//----- (0000000140178410) ----------------------------------------------------
__int64            sub_140178410(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int16 v6;
  unsigned int v8;
  unsigned int v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  unsigned __int16 v13;
  unsigned __int16 v14;
  __int16 v15;
  __int64 v16;
  int v17;
  unsigned __int16 v18;
  __int16 v19;
  unsigned __int16 v20;
  unsigned int i;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int16 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  unsigned __int8 *v31;
  unsigned int v32;
  unsigned int v33;

  v2 = *(unsigned int *)(a1 + 52);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  v6 = *(unsigned __int8 *)(v2 + v3 + 1) + (*(unsigned __int8 *)(v2 + v3) << 8);
  switch ( v6 )
  {
    case 0:
      if ( a2 < *(unsigned __int8 *)(v2 + v3 + 3) - 6 + (*(unsigned __int8 *)(v2 + v3 + 2) << 8) )
        return *(unsigned __int8 *)(v2 + a2 + v3 + 6);
      return 0;
    case 6:
      v8 = *(unsigned __int8 *)(v2 + v3 + 7) + (*(unsigned __int8 *)(v2 + v3 + 6) << 8);
      if ( a2 >= v8 && a2 < v8 + (*(unsigned __int8 *)(v2 + v3 + 8) << 8) + *(unsigned __int8 *)(v2 + v3 + 9) )
        return (*(unsigned __int8 *)(v2 + 2 * (a2 - v8) + v3 + 10) << 8)
             + (unsigned int)*(unsigned __int8 *)(v2 + 2 * (a2 - v8) + v3 + 11);
      return 0;
    case 2:
      v9 = 1463;
LABEL_10:
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", v9);
      return 0;
    case 4:
      v10 = *(unsigned __int8 *)(v2 + v3 + 12);
      v11 = *(unsigned __int8 *)(v2 + v3 + 11);
      v12 = *(unsigned __int8 *)(v2 + v3 + 13);
      v13 = (unsigned __int16)(*(unsigned __int8 *)(v2 + v3 + 7) + (*(unsigned __int8 *)(v2 + v3 + 6) << 8)) >> 1;
      v14 = (*(unsigned __int8 *)(v2 + v3 + 8) << 8) + *(unsigned __int8 *)(v2 + v3 + 9);
      v15 = *(unsigned __int8 *)(v2 + v3 + 10) << 8;
      v16 = (unsigned int)(v2 + 14);
      v17 = v16;
      v18 = v14 >> 1;
      v19 = v15 + v11;
      v20 = (unsigned __int16)(v12 + (v10 << 8)) >> 1;
      if ( a2 <= 0xFFFF )
      {
        if ( a2 >= *(unsigned __int8 *)(v16 + 2LL * v20 + v3 + 1) + (*(unsigned __int8 *)(v16 + 2LL * v20 + v3) << 8) )
          v17 = v16 + 2 * v20;
        for ( i = v17 - 2; v19; --v19 )
        {
          v18 >>= 1;
          if ( a2 > *(unsigned __int8 *)(v3 + i + 2LL * v18 + 1) + (*(unsigned __int8 *)(v3 + i + 2LL * v18) << 8) )
            i += 2 * v18;
        }
        v22 = 2LL * (unsigned __int16)((i - (unsigned int)v16 + 2) >> 1);
        if ( a2 > *(unsigned __int8 *)(v16 + v22 + v3 + 1) + (*(unsigned __int8 *)(v16 + v22 + v3) << 8) )
          crt_assert(
            (char *)L"unicode_codepoint <= ttUSHORT(data + endCount + 2*item)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x5DBu);
        v23 = v4 + v22 + 2 * (unsigned int)v13;
        v24 = *(unsigned __int8 *)(v23 + v3 + 17) + (*(unsigned __int8 *)(v23 + v3 + 16) << 8);
        if ( a2 >= v24 )
        {
          v25 = *(unsigned __int8 *)(v4 + 6 * (unsigned int)v13 + v22 + v3 + 17)
              + (*(unsigned __int8 *)(v4 + 6 * (unsigned int)v13 + v22 + v3 + 16) << 8);
          if ( !v25 )
            return (unsigned __int16)(a2
                                    + (*(unsigned __int8 *)(v4 + v22 + 4 * (unsigned int)v13 + v3 + 16) << 8)
                                    + *(unsigned __int8 *)(v4 + v22 + 4 * (unsigned int)v13 + v3 + 17));
          v26 = v4 + v22 + 6 * (unsigned int)v13 + (__int64)(2 * (a2 - v24)) + v25;
          return (*(unsigned __int8 *)(v26 + v3 + 16) << 8) + (unsigned int)*(unsigned __int8 *)(v26 + v3 + 17);
        }
      }
      return 0;
  }
  if ( (unsigned __int16)(v6 - 12) > 1u )
  {
    v9 = 1534;
    goto LABEL_10;
  }
  v27 = 0;
  v28 = *(unsigned __int8 *)(v2 + v3 + 15)
      + ((*(unsigned __int8 *)(v2 + v3 + 14)
        + ((*(unsigned __int8 *)(v2 + v3 + 13) + (*(unsigned __int8 *)(v2 + v3 + 12) << 8)) << 8)) << 8);
  if ( v28 <= 0 )
    return 0;
  while ( 1 )
  {
    v29 = v27 + ((v28 - v27) >> 1);
    v30 = 12 * v29;
    v31 = (unsigned __int8 *)(v3 + v30 + v4);
    v32 = v31[19] + (v31[16] << 24) + (v31[18] << 8) + (v31[17] << 16);
    if ( a2 >= v32 )
      break;
    v28 = v27 + ((v28 - v27) >> 1);
LABEL_33:
    if ( v27 >= v28 )
      return 0;
  }
  if ( a2 > (unsigned int)(v31[23] + (v31[20] << 24) + (v31[22] << 8) + (v31[21] << 16)) )
  {
    v27 = v29 + 1;
    goto LABEL_33;
  }
  v33 = *(unsigned __int8 *)(v3 + v30 + v4 + 27)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 24) << 24)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 26) << 8)
      + (*(unsigned __int8 *)(v3 + v30 + v4 + 25) << 16);
  if ( v6 == 12 )
    return a2 + v33 - v32;
  else
    return v33;
}

//----- (0000000140178800) ----------------------------------------------------
__int64            sub_140178800(char *a1, __int64 a2, int a3)
{
  int v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  bool v10;
  unsigned int v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  int v16;

  v6 = 0;
  v7 = sub_140179790(a1);
  if ( (v7 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      v8 = -1;
      do
        ++v8;
      while ( *(_BYTE *)(v8 + a2) );
      v9 = (unsigned __int8)a1[v7];
      if ( *(_WORD *)&a1[v7] == 49 && !a1[v7 + 2] && !a1[v7 + 3] )
        break;
      if ( v9 == 116 )
      {
        if ( a1[v7 + 1] == 121 && a1[v7 + 2] == 112 && a1[v7 + 3] == 49 )
          break;
      }
      else if ( v9 == 79 && a1[v7 + 1] == 84 && a1[v7 + 2] == 84 && a1[v7 + 3] == 79 )
      {
        break;
      }
      if ( (_BYTE)v9 )
      {
        if ( (_BYTE)v9 != 116 || a1[v7 + 1] != 114 || a1[v7 + 2] != 117 )
          goto LABEL_42;
        v10 = a1[v7 + 3] == 101;
      }
      else
      {
        if ( a1[v7 + 1] != 1 || a1[v7 + 2] )
          goto LABEL_42;
        v10 = a1[v7 + 3] == 0;
      }
      if ( v10 )
        break;
LABEL_42:
      ++v6;
      v7 = sub_140179790(a1);
      if ( (v7 & 0x80000000) != 0 )
        return v7;
    }
    if ( !a3
      || (((unsigned __int8)a3 ^ (unsigned __int8)a1[(unsigned int)sub_140180D50((__int64)a1, v7, "head") + 45]) & 7) == 0 )
    {
      v11 = v7 + 12;
      v12 = 0;
      v13 = (unsigned __int8)a1[v7 + 5] + ((unsigned __int8)a1[v7 + 4] << 8);
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = v11 + 16 * v12;
          if ( a1[v14] == 110 && a1[v14 + 1] == 97 && a1[v14 + 2] == 109 && a1[v14 + 3] == 101 )
            break;
          if ( ++v12 >= v13 )
            goto LABEL_42;
        }
        v15 = (unsigned __int8)a1[16 * v12 + 11 + v11]
            + ((unsigned __int8)a1[16 * v12 + 8 + v11] << 24)
            + ((unsigned __int8)a1[v14 + 10] << 8)
            + ((unsigned __int8)a1[v14 + 9] << 16);
        if ( v15 )
        {
          if ( a3 )
          {
            if ( (unsigned int)sub_1401818E0((__int64)a1, v15, a2, v8, 16, -1) )
              return v7;
            v16 = sub_1401818E0((__int64)a1, v15, a2, v8, 1, -1);
          }
          else
          {
            if ( (unsigned int)sub_1401818E0((__int64)a1, v15, a2, v8, 16, 17) )
              return v7;
            v16 = sub_1401818E0((__int64)a1, v15, a2, v8, 1, 2);
          }
          if ( v16 || (unsigned int)sub_1401818E0((__int64)a1, v15, a2, v8, 3, -1) )
            return v7;
        }
      }
    }
    goto LABEL_42;
  }
  return v7;
}

//----- (0000000140178A70) ----------------------------------------------------
__int64            sub_140178A70(__int64 a1, int a2, float a3, void **a4, _DWORD *a5)
{
  float v5;
  __int64 v7;
  __int64 v9;
  int v10;
  __int64 v11;
  _BYTE *v12;
  __int64 v13;
  bool v14;
  int v15;
  _DWORD *v16;
  void *v17;
  int v18;
  int i;
  __int64 v21;
  __int16 *v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __m128i v26;
  float v27;
  float v28;
  __m128i v29;
  float v30;
  int v31;
  float sr_x0, sr_y0; /* the current point: xmm8, xmm9 */

  v31 = 0;
  v5 = a3 * a3;
  v7 = a2;
  v9 = 0;
  v10 = 0;
  LODWORD(v11) = 0;
  if ( a2 > 0 )
  {
    v12 = (_BYTE *)(a1 + 12);
    v13 = v7;
    do
    {
      v14 = *v12 == 1;
      v15 = v10 + 1;
      v12 += 14;
      if ( !v14 )
        v15 = v10;
      v10 = v15;
      --v13;
    }
    while ( v13 );
  }
  v16 = a5;
  *a5 = v10;
  if ( !v10 )
    return 0;
  v17 = (void *)sr_path_malloc(4LL * v10);
  *a4 = v17;
  if ( !v17 )
  {
    *v16 = 0;
    return 0;
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( i == 1 )
    {
      v9 = sr_path_malloc(8LL * v31);
      if ( !v9 )
      {
        free(nullptr);
        free(*a4);
        *a4 = nullptr;
        *v16 = 0;
        return 0;
      }
    }
    v31 = 0;
    v21 = -1;
    sr_x0 = 0.0f; /* 0x140178B31, 0x140178B35 */
    sr_y0 = 0.0f;
    if ( v7 > 0 )
    {
      v22 = (__int16 *)(a1 + 10);
      v23 = v7;
      while ( 1 )
      {
        if ( *((_BYTE *)v22 + 2) == 1 )
        {
          if ( v21 >= 0 )
            *((_DWORD *)*a4 + v21) = v31 - v11;
          ++v21;
          v11 = v31;
          v28 = (float)*(v22 - 5);
          v29 = _mm_cvtsi32_si128(*(v22 - 4));
          ++v31;
          v30 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0];
          sr_x0 = v28; /* 0x140178D41, 0x140178D54 */
          sr_y0 = v30;
          if ( v9 )
          {
            *(float *)(v9 + 8 * v11) = v28;
            *(float *)(v9 + 8 * v11 + 4) = v30;
          }
          goto LABEL_28;
        }
        if ( *((_BYTE *)v22 + 2) == 2 )
        {
          v24 = v31;
          v25 = (float)*(v22 - 5);
          v26 = _mm_cvtsi32_si128(*(v22 - 4));
          ++v31;
          v27 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v26), f32)[0];
          sr_x0 = v25; /* 0x140178CE7, 0x140178CFA */
          sr_y0 = v27;
          if ( v9 )
          {
            *(float *)(v9 + 8 * v24) = v25;
            *(float *)(v9 + 8 * v24 + 4) = v27;
          }
          goto LABEL_28;
        }
        if ( *((_BYTE *)v22 + 2) == 3 )
          break;
        if ( *((_BYTE *)v22 + 2) == 4 )
        {
          /* 0x140178C36: x0, y0 = xmm8, xmm9 (0x140178BC9, 0x140178BBE); the control points and end point are
             converted shorts stored as floats ([rsp+20h]..[rsp+48h]); the C had passed an int and a pointer for
             x0, y0 and the bits of three floats as numbers */
          sub_140183DC0(
            v9,
            &v31,
            sr_x0,
            sr_y0,
            (float)*(v22 - 3),
            (float)*(v22 - 2),
            (float)*(v22 - 1),
            (float)*v22,
            (float)*(v22 - 5),
            (float)*(v22 - 4),
            v5,
            0);
LABEL_20:
          v18 = *(v22 - 5);
          sr_x0 = (float)*(v22 - 5); /* 0x140178C4F, 0x140178C53 */
          sr_y0 = (float)*(v22 - 4);
        }
LABEL_28:
        v22 += 7;
        if ( !--v23 )
          goto LABEL_29;
      }
      /* 0x140178CC6: x0, y0 = xmm8, xmm9 (0x140178CAC, 0x140178C96) */
      sub_140184190(
        v9,
        &v31,
        sr_x0,
        sr_y0,
        (float)*(v22 - 3),
        (float)*(v22 - 2),
        (float)*(v22 - 5),
        (float)*(v22 - 4),
        v5,
        0);
      goto LABEL_20;
    }
LABEL_29:
    *((_DWORD *)*a4 + v21) = v31 - v11;
  }
  return v9;
}

//----- (0000000140178E30) ----------------------------------------------------
__int64            sub_140178E30(__int64 a1, int a2, int a3, int a4, float *a5, float *a6, float *a7, int a8)
{
  float v9;
  __int64 v10;
  float v11;
  float v12;
  __m128 v13;
  __m128d v14;
  int v15;
  __m128 v16;
  int v17;
  __m128d v18;
  int v19;
  __int64 result;

  if ( a8 )
    v9 = 0.0;
  else
    v9 = -0.5;
  v10 = 5LL * a4;
  v11 = 1.0 / (float)a2;
  v12 = 1.0 / (float)a3;
  v13 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a1 + 4 * v10 + 8))));
  SR_VEC_LANES(128, v13, f32)[0] = (float)(SR_VEC_LANES(128, v13, f32)[0] + *a5) + 0.5;
  v14 = _mm_cvtps_pd(v13);
  v15 = (int)SR_VEC_LANES(128, v14, f64)[0];
  if ( (double)v15 != SR_VEC_LANES(128, v14, f64)[0] )
    SR_VEC_LANES(128, v14, f64)[0] = (double)(v15 - (_mm_movemask_pd(_mm_unpacklo_pd(v14, v14)) & 1));
  v16 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a1 + 4 * v10 + 12))));
  v17 = (int)SR_VEC_LANES(128, v14, f64)[0];
  SR_VEC_LANES(128, v16, f32)[0] = (float)(SR_VEC_LANES(128, v16, f32)[0] + *a6) + 0.5;
  v18 = _mm_cvtps_pd(v16);
  v19 = (int)SR_VEC_LANES(128, v18, f64)[0];
  if ( (double)v19 != SR_VEC_LANES(128, v18, f64)[0] )
    SR_VEC_LANES(128, v18, f64)[0] = (double)(v19 - (_mm_movemask_pd(_mm_unpacklo_pd(v18, v18)) & 1));
  *a7 = (float)v17 + v9;
  a7[1] = (float)(int)SR_VEC_LANES(128, v18, f64)[0] + v9;
  a7[4] = (float)(v17 + *(unsigned __int16 *)(a1 + 4 * v10 + 4) - *(unsigned __int16 *)(a1 + 4 * v10)) + v9;
  a7[5] = (float)((int)SR_VEC_LANES(128, v18, f64)[0]
                + *(unsigned __int16 *)(a1 + 4 * v10 + 6)
                - *(unsigned __int16 *)(a1 + 4 * v10 + 2))
        + v9;
  a7[2] = (float)*(unsigned __int16 *)(a1 + 4 * v10) * v11;
  a7[3] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 2) * v12;
  a7[6] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 4) * v11;
  result = *(unsigned __int16 *)(a1 + 4 * v10 + 6);
  a7[7] = (float)*(unsigned __int16 *)(a1 + 4 * v10 + 6) * v12;
  *a5 = *(float *)(a1 + 4 * v10 + 16) + *a5;
  return result;
}

// 140178EAE: conditional instruction was optimized away because rcx.8<100000000u
// 140178EFC: conditional instruction was optimized away because rcx.8<100000000u

//----- (0000000140179010) ----------------------------------------------------
__int64            sub_140179010(__int64 a1, float a2, float a3, int a4, int *a5, int *a6, int *a7, int *a8)
{
  int v9;

  v9 = sub_140178410(a1, a4);
  return sub_140179E50(a1, a2, a3, 0.0, 0.0, v9, a5, a6, a7, a8);
}

//----- (0000000140179090) ----------------------------------------------------
__int64            sub_140179090(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v9;

  v9 = sub_140178410(a1, a2);
  return sub_140179B80(a1, v9, a3, a4, 0.0, 0, a5, a6, a7, a8);
}

//----- (0000000140179120) ----------------------------------------------------
__int64            sub_140179120(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  int v11;

  v11 = sub_140178410(a1, a2);
  return sub_140179B80(a1, v11, a3, a4, a5, a6, a7, a8, a9, a10);
}

//----- (0000000140179160) ----------------------------------------------------
__int64            sub_140179160(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10)
{
  int v11;

  v11 = sub_140178410(a1, a6);
  return sub_140179E50(a1, a2, a3, a4, a5, v11, a7, a8, a9, a10);
}

//----- (00000001401791D0) ----------------------------------------------------
__int64            sub_1401791D0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401791D0[64];
#define v18 (*(__int64 (*))(void *)(sr_frame_1401791D0 + 8)) /* [rsp+20h] */
#define v19 (*(__int128 (*))(void *)(sr_frame_1401791D0 + 16)) /* [rsp+28h] */
#define v20 (*(__int128 (*))(void *)(sr_frame_1401791D0 + 32)) /* [rsp+38h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_1401791D0 + 48)) /* [rsp+48h] */
#define v22 (*(int (*))(void *)(sr_frame_1401791D0 + 56)) /* [rsp+50h] */

  v9 = sub_140178410(a1, a2);
  if ( *(_DWORD *)(a1 + 76) )
  {
    v10 = 0;
    v18 = 1;
    v21 = 0;
    v22 = 0;
    v19 = 0;
    v20 = 0;
    v11 = sub_140182AD0(a1, v9, (__int64)&v18);
    v12 = v11;
    if ( a3 )
    {
      v13 = 0;
      if ( v11 )
        v13 = v20;
      *a3 = v13;
    }
    if ( a4 )
    {
      v14 = 0;
      if ( v11 )
        v14 = DWORD2(v20);
      *a4 = v14;
    }
    if ( a5 )
    {
      v15 = 0;
      if ( v12 )
        v15 = DWORD1(v20);
      *a5 = v15;
    }
    if ( a6 )
    {
      if ( v12 )
        v10 = HIDWORD(v20);
      *a6 = v10;
    }
  }
  else
  {
    v16 = sub_14017DA60(a1, v9);
    if ( v16 < 0 )
      return 0;
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 2LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 3LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 4LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 5LL));
    if ( a5 )
      *a5 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 6LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 7LL));
    if ( a6 )
      *a6 = (__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 9LL)
                    + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 8LL) << 8));
  }
  return 1;
}
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22

//----- (0000000140179360) ----------------------------------------------------
int            sub_140179360(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v7;

  v7 = sub_140178410(a1, a2);
  return sub_14017A3C0(a1, v7, a3, a4);
}

//----- (00000001401793A0) ----------------------------------------------------
__int64            sub_1401793A0(__int64 a1, int a2, int a3)
{
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int8 *v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  __int64 v17;
  unsigned int v18;

  if ( !*(_DWORD *)(a1 + 44) && !*(_DWORD *)(a1 + 48) )
    return 0;
  v6 = sub_140178410(a1, a3);
  v7 = sub_140178410(a1, a2);
  v8 = 0;
  v9 = v7;
  v10 = 0;
  if ( *(_DWORD *)(a1 + 48) )
    v10 = sub_14017DCC0(a1, v7, v6);
  v11 = *(int *)(a1 + 44);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v11);
    if ( v12[3] + (v12[2] << 8) )
    {
      if ( v12[9] + (v12[8] << 8) == 1 )
      {
        v13 = 0;
        v14 = v6 | (v9 << 16);
        v15 = (v12[10] << 8) + v12[11] - 1;
        if ( v15 >= 0 )
        {
          do
          {
            v16 = (v15 + v13) >> 1;
            v17 = 6 * v16;
            v18 = v12[v17 + 21] + (v12[v17 + 18] << 24) + (v12[v17 + 20] << 8) + (v12[v17 + 19] << 16);
            if ( v14 >= v18 )
            {
              if ( v14 <= v18 )
              {
                v8 = (__int16)(v12[v17 + 23] + (v12[v17 + 22] << 8));
                break;
              }
              v13 = v16 + 1;
            }
            else
            {
              v15 = v16 - 1;
            }
          }
          while ( v13 <= v15 );
        }
      }
    }
    v10 += v8;
  }
  return v10;
}

//----- (0000000140179510) ----------------------------------------------------
__int64            sub_140179510(
        __int64 a1,
        float a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        float a6,
        void *a7,
        int *a8,
        unsigned int *a9,
        signed int *a10)
{
  int v12;

  v12 = sub_140178410(a1, a3);
  return sub_14017A640(a1, a2, v12, a4, a5, a6, a7, a8, a9, a10);
}

//----- (0000000140179560) ----------------------------------------------------
__int64            sub_140179560(__int64 a1, int a2, __int64 *a3)
{
  int v5;

  v5 = sub_140178410(a1, a2);
  return sub_14017B360(a1, v5, a3);
}

//----- (0000000140179590) ----------------------------------------------------
_DWORD *           sub_140179590(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v5;

  v5 = *(_QWORD *)(a1 + 8) + *(int *)(a1 + 28);
  *a2 = (__int16)((*(unsigned __int8 *)(v5 + 36) << 8) + *(unsigned __int8 *)(v5 + 37));
  *a3 = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 38LL) << 8)
                + *(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 39LL));
  *a4 = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 40LL) << 8)
                + *(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 41LL));
  *a5 = (__int16)(*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 43LL)
                + (*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 42LL) << 8));
  return a5;
}

//----- (0000000140179650) ----------------------------------------------------
unsigned __int64            sub_140179650(__int64 a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  __int64 v6;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;

  v6 = *(_QWORD *)(a1 + 8);
  v10 = sub_140180D50(v6, *(_DWORD *)(a1 + 16), "name");
  if ( !v10 )
    return 0;
  v11 = 0;
  v12 = v10 + (*(unsigned __int8 *)(v6 + v10 + 4) << 8) + *(unsigned __int8 *)(v6 + v10 + 5);
  v13 = *(unsigned __int8 *)(v6 + v10 + 3) + (*(unsigned __int8 *)(v6 + v10 + 2) << 8);
  if ( !v13 )
    return 0;
  while ( 1 )
  {
    v14 = v10 + 6 + 12 * v11;
    if ( a3 == *(unsigned __int8 *)(v14 + v6 + 1) + (*(unsigned __int8 *)(v14 + v6) << 8)
      && a4 == *(unsigned __int8 *)(v14 + v6 + 3) + (*(unsigned __int8 *)(v14 + v6 + 2) << 8)
      && a5 == *(unsigned __int8 *)(v14 + v6 + 5) + (*(unsigned __int8 *)(v14 + v6 + 4) << 8)
      && a6 == *(unsigned __int8 *)(v14 + v6 + 7) + (*(unsigned __int8 *)(v14 + v6 + 6) << 8) )
    {
      break;
    }
    if ( ++v11 >= v13 )
      return 0;
  }
  *a2 = *(unsigned __int8 *)(v14 + v6 + 9) + (*(unsigned __int8 *)(v14 + v6 + 8) << 8);
  return ((unsigned __int64)*(unsigned __int8 *)(v14 + v6 + 10) << 8) + v6 + *(unsigned __int8 *)(v14 + v6 + 11) + v12;
}

//----- (0000000140179790) ----------------------------------------------------
__int64            sub_140179790(char *a1)
{
  int v1;
  _BYTE *v2;
  unsigned __int8 *v3;

  if ( sub_140181710(a1) )
    return (unsigned int)-(v1 != 0);
  if ( *v2 == 116
    && v2[1] == 116
    && v2[2] == 99
    && v2[3] == 102
    && ((v3[7] - 0x10000 + (v3[4] << 24) + (v3[6] << 8) + ((unsigned __int8)v2[5] << 16)) & 0xFFFEFFFF) == 0
    && v1 < v3[11] + ((v3[10] + ((v3[9] + (v3[8] << 8)) << 8)) << 8) )
  {
    return v3[4 * v1 + 15] + ((v3[4 * v1 + 14] + ((v3[4 * v1 + 13] + (v3[4 * v1 + 12] << 8)) << 8)) << 8);
  }
  return 0xFFFFFFFFLL;
}

//----- (0000000140179870) ----------------------------------------------------
__int64            sub_140179870(char *a1)
{
  int v1;
  _BYTE *v2;
  unsigned __int8 *v3;

  if ( sub_140181710(a1) )
    return (unsigned int)-(v1 != 0);
  if ( *v2 == 116
    && v2[1] == 116
    && v2[2] == 99
    && v2[3] == 102
    && ((v3[7] - 0x10000 + (v3[4] << 24) + (v3[6] << 8) + ((unsigned __int8)v2[5] << 16)) & 0xFFFEFFFF) == 0
    && v1 < v3[11] + ((v3[10] + ((v3[9] + (v3[8] << 8)) << 8)) << 8) )
  {
    return v3[4 * v1 + 15] + ((v3[4 * v1 + 14] + ((v3[4 * v1 + 13] + (v3[4 * v1 + 12] << 8)) << 8)) << 8);
  }
  return 0xFFFFFFFFLL;
}

//----- (0000000140179950) ----------------------------------------------------
int            sub_140179950(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result;

  if ( a2 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 4LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 5LL));
    *a2 = result;
  }
  if ( a3 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 6LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 7LL));
    *a3 = result;
  }
  if ( a4 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 8LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 9LL));
    *a4 = result;
  }
  return result;
}

//----- (0000000140179A00) ----------------------------------------------------
__int64            sub_140179A00(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4;
  __int64 result;

  v4 = *(_QWORD *)(a1 + 8);
  result = sub_140180D50(v4, *(_DWORD *)(a1 + 16), "OS/2");
  if ( (_DWORD)result )
  {
    if ( a2 )
      *a2 = (__int16)((*(unsigned __int8 *)(v4 + (int)result + 68) << 8) + *(unsigned __int8 *)(v4 + (int)result + 69));
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 70LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 71LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 72LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (int)result + 73LL));
    return 1;
  }
  return result;
}

//----- (0000000140179AD0) ----------------------------------------------------
__int64            sub_140179AD0(__int64 a1, float a2, float a3, int a4, int *a5, int *a6, int *a7, int *a8)
{
  return sub_140179E50(a1, a2, a3, 0.0, 0.0, a4, a5, a6, a7, a8);
}

//----- (0000000140179B20) ----------------------------------------------------
__int64            sub_140179B20(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  return sub_140179B80(a1, a2, a3, a4, 0.0, 0, a5, a6, a7, a8);
}

//----- (0000000140179B80) ----------------------------------------------------
__int64            sub_140179B80(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  int v13;
  __int64 result;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  __int16 v22;
  __m128 v23;
  __m128d v24;
  int v25;
  __m128 v26;
  __m128 v27;
  __m128d v28;
  int v29;
  __m128 v30;
  __m128d v31;
  int v32;
  __m128d v33;
  int v34;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140179B80[64];
#define v35 (*(__int64 (*))(void *)(sr_frame_140179B80 + 8)) /* [rsp+20h] */
#define v36 (*(__int128 (*))(void *)(sr_frame_140179B80 + 16)) /* [rsp+28h] */
#define v37 (*(__int128 (*))(void *)(sr_frame_140179B80 + 32)) /* [rsp+38h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_140179B80 + 48)) /* [rsp+48h] */
#define v39 (*(int (*))(void *)(sr_frame_140179B80 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    v13 = 0;
    v35 = 1;
    v38 = 0;
    v39 = 0;
    v36 = 0;
    v37 = 0;
    result = sub_140182AD0(a1, a2, (__int64)&v35);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( (_DWORD)result )
    {
      v15 = HIDWORD(v37);
      v16 = v37;
      v17 = DWORD1(v37);
      v13 = DWORD2(v37);
    }
    goto LABEL_7;
  }
  v18 = sub_14017DA60(a1, a2);
  if ( v18 >= 0 )
  {
    v19 = *(_QWORD *)(a1 + 8);
    v20 = v18;
    v21 = *(unsigned __int8 *)(v19 + v18 + 7);
    v15 = (__int16)(*(unsigned __int8 *)(v19 + v18 + 9) + (*(unsigned __int8 *)(v19 + v18 + 8) << 8));
    v22 = *(unsigned __int8 *)(v19 + v18 + 3) + (*(unsigned __int8 *)(v19 + v18 + 2) << 8);
    result = *(unsigned __int8 *)(v19 + v18 + 5);
    v16 = v22;
    v17 = (__int16)((*(unsigned __int8 *)(v19 + v20 + 6) << 8) + v21);
    v13 = (__int16)(result + (*(unsigned __int8 *)(v19 + v20 + 4) << 8));
LABEL_7:
    if ( a7 )
    {
      v23 = _mm_set_ss((float)v16);
      SR_VEC_LANES(128, v23, f32)[0] = (float)(SR_VEC_LANES(128, v23, f32)[0] * a3) + a5;
      v24 = _mm_cvtps_pd(v23);
      v25 = (int)SR_VEC_LANES(128, v24, f64)[0];
      if ( (double)v25 != SR_VEC_LANES(128, v24, f64)[0] )
        SR_VEC_LANES(128, v24, f64)[0] = (double)(v25 - (_mm_movemask_pd(_mm_unpacklo_pd(v24, v24)) & 1));
      result = (unsigned int)(int)SR_VEC_LANES(128, v24, f64)[0];
      *a7 = result;
    }
    v26 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
    if ( a8 )
    {
      v27 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
      SR_VEC_LANES(128, v27, f32)[0] = a6 - (float)((float)v15 * a4);
      v28 = _mm_cvtps_pd(v27);
      v29 = (int)SR_VEC_LANES(128, v28, f64)[0];
      if ( (double)v29 != SR_VEC_LANES(128, v28, f64)[0] )
        SR_VEC_LANES(128, v28, f64)[0] = (double)(v29 - (_mm_movemask_pd(_mm_unpacklo_pd(v28, v28)) & 1));
      result = (unsigned int)(int)SR_VEC_LANES(128, v28, f64)[0];
      *a8 = result;
    }
    if ( a9 )
    {
      v30 = _mm_set_ss((float)v17);
      SR_VEC_LANES(128, v30, f32)[0] = (float)(SR_VEC_LANES(128, v30, f32)[0] * a3) + a5;
      v31 = _mm_cvtps_pd(v30);
      v32 = (int)SR_VEC_LANES(128, v31, f64)[0];
      if ( (double)v32 != SR_VEC_LANES(128, v31, f64)[0] )
        SR_VEC_LANES(128, v31, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v31, v31)) & 1) + v32);
      result = (unsigned int)(int)SR_VEC_LANES(128, v31, f64)[0];
      *a9 = result;
    }
    if ( a10 )
    {
      SR_VEC_LANES(128, v26, f32)[0] = a6 - (float)((float)v13 * a4);
      v33 = _mm_cvtps_pd(v26);
      v34 = (int)SR_VEC_LANES(128, v33, f64)[0];
      if ( (double)v34 != SR_VEC_LANES(128, v33, f64)[0] )
        SR_VEC_LANES(128, v33, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v33, v33)) & 1) + v34);
      result = (unsigned int)(int)SR_VEC_LANES(128, v33, f64)[0];
      *a10 = result;
    }
    return result;
  }
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  result = (__int64)a10;
  if ( a10 )
    *a10 = 0;
  return result;
}
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39

// 140179CAB: conditional instruction was optimized away because rcx.8<100000000u
// 140179D0E: conditional instruction was optimized away because rcx.8<100000000u
// 140179D66: conditional instruction was optimized away because rcx.8<100000000u
// 140179DC4: conditional instruction was optimized away because rcx.8<100000000u

//----- (0000000140179E50) ----------------------------------------------------
__int64            sub_140179E50(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10)
{
  float v10;
  float v11;
  int v13;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __m128 v23;
  __m128d v24;
  int v25;
  int v26;
  __m128 v27;
  __m128d v28;
  int v29;
  __m128 v30;
  int v31;
  __m128d v32;
  int v33;
  __m128 v34;
  int v35;
  __m128d v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140179E50[96];
#define v43 (*(__int64 (*))(void *)(sr_frame_140179E50 + 0)) /* [rsp+58h] */
#define Block (*(void * (*))(void *)(sr_frame_140179E50 + 8)) /* [rsp+60h] */
#define v45 (*(int (*)[4])(void *)(sr_frame_140179E50 + 16)) /* [rsp+68h] */
#define v46 (*(__int64 (*))(void *)(sr_frame_140179E50 + 32)) /* [rsp+78h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_140179E50 + 40)) /* [rsp+80h] */
#define v48 (*(__int128 (*))(void *)(sr_frame_140179E50 + 48)) /* [rsp+88h] */
#define v49 (*(__int128 (*))(void *)(sr_frame_140179E50 + 64)) /* [rsp+98h] */
#define v50 (*(__int64 (*))(void *)(sr_frame_140179E50 + 80)) /* [rsp+A8h] */
#define v51 (*(int (*))(void *)(sr_frame_140179E50 + 88)) /* [rsp+B0h] */

  v10 = a2;
  v11 = a3;
  v13 = sub_14017B360(a1, a6, (__int64 *)&Block);
  if ( a2 == 0.0 )
    v10 = a3;
  if ( a3 == 0.0 )
  {
    if ( v10 == 0.0 )
    {
      free(Block);
      return 0;
    }
    v11 = v10;
  }
  v15 = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v47 = 1;
    v50 = 0;
    v49 = 0;
    v51 = 0;
    v48 = 0;
    v16 = sub_140182AD0(a1, a6, (__int64)&v47);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( v16 )
      v17 = HIDWORD(v49);
    v20 = 0;
    if ( v16 )
    {
      v18 = v49;
      v19 = DWORD1(v49);
      v20 = DWORD2(v49);
    }
    goto LABEL_15;
  }
  v21 = sub_14017DA60(a1, a6);
  if ( v21 >= 0 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    v17 = (__int16)(*(unsigned __int8 *)(v22 + v21 + 9) + (*(unsigned __int8 *)(v22 + v21 + 8) << 8));
    v18 = (__int16)(*(unsigned __int8 *)(v22 + v21 + 3) + (*(unsigned __int8 *)(v22 + v21 + 2) << 8));
    v19 = (__int16)((*(unsigned __int8 *)(v22 + v21 + 6) << 8) + *(unsigned __int8 *)(v22 + v21 + 7));
    v20 = (__int16)(*(unsigned __int8 *)(v22 + v21 + 5) + (*(unsigned __int8 *)(v22 + v21 + 4) << 8));
LABEL_15:
    v23 = _mm_set_ss((float)v18);
    SR_VEC_LANES(128, v23, f32)[0] = (float)(SR_VEC_LANES(128, v23, f32)[0] * v10) + a4;
    v24 = _mm_cvtps_pd(v23);
    v25 = (int)SR_VEC_LANES(128, v24, f64)[0];
    if ( (double)v25 != SR_VEC_LANES(128, v24, f64)[0] )
      SR_VEC_LANES(128, v24, f64)[0] = (double)(v25 - (_mm_movemask_pd(_mm_unpacklo_pd(v24, v24)) & 1));
    v26 = (int)SR_VEC_LANES(128, v24, f64)[0];
    v27 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a5))));
    SR_VEC_LANES(128, v27, f32)[0] = a5 - (float)((float)v17 * v11);
    v28 = _mm_cvtps_pd(v27);
    v29 = (int)SR_VEC_LANES(128, v28, f64)[0];
    if ( (double)v29 != SR_VEC_LANES(128, v28, f64)[0] )
      SR_VEC_LANES(128, v28, f64)[0] = (double)(v29 - (_mm_movemask_pd(_mm_unpacklo_pd(v28, v28)) & 1));
    v30 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a5))));
    v31 = (int)SR_VEC_LANES(128, v28, f64)[0];
    SR_VEC_LANES(128, v30, f32)[0] = a5 - (float)((float)v20 * v11);
    v32 = _mm_cvtps_pd(v30);
    v33 = (int)SR_VEC_LANES(128, v32, f64)[0];
    if ( (double)v33 != SR_VEC_LANES(128, v32, f64)[0] )
      SR_VEC_LANES(128, v32, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v32, v32)) & 1) + v33);
    v34 = _mm_set_ss((float)v19);
    v35 = (int)SR_VEC_LANES(128, v32, f64)[0];
    SR_VEC_LANES(128, v34, f32)[0] = (float)(SR_VEC_LANES(128, v34, f32)[0] * v10) + a4;
    v36 = _mm_cvtps_pd(v34);
    v37 = (int)SR_VEC_LANES(128, v36, f64)[0];
    if ( (double)v37 != SR_VEC_LANES(128, v36, f64)[0] )
      SR_VEC_LANES(128, v36, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v36, v36)) & 1) + v37);
    v38 = (int)SR_VEC_LANES(128, v36, f64)[0];
    v39 = v26;
    v40 = v31;
    goto LABEL_29;
  }
  v26 = 0;
  v31 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
LABEL_29:
  v41 = v38 - v39;
  v42 = v35 - v40;
  v45[0] = v41;
  v45[1] = v42;
  if ( a7 )
    *a7 = v41;
  if ( a8 )
    *a8 = v42;
  if ( a9 )
    *a9 = v26;
  if ( a10 )
    *a10 = v31;
  if ( v41 && v42 )
  {
    v46 = sr_path_malloc(v42 * v41);
    v15 = v46;
    if ( v46 )
    {
      v43 = *(_QWORD *)a1;
      v45[2] = v41;
      sub_14017D510(v45, 0.34999999, (__int64)Block, v13, v10, v11, a4, a5, v26, v31, 1, v43);
      v15 = v46;
    }
  }
  free(Block);
  return v15;
}
#undef v43
#undef Block
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51

// 140179FFF: conditional instruction was optimized away because rcx.8<100000000u
// 14017A04C: conditional instruction was optimized away because rcx.8<100000000u
// 14017A098: conditional instruction was optimized away because rcx.8<100000000u
// 14017A0E5: conditional instruction was optimized away because rdx.8<100000000u

//----- (000000014017A240) ----------------------------------------------------
__int64            sub_14017A240(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017A240[64];
#define v16 (*(__int64 (*))(void *)(sr_frame_14017A240 + 8)) /* [rsp+20h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_14017A240 + 16)) /* [rsp+28h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_14017A240 + 32)) /* [rsp+38h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_14017A240 + 48)) /* [rsp+48h] */
#define v20 (*(int (*))(void *)(sr_frame_14017A240 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    v9 = 0;
    v16 = 1;
    v19 = 0;
    v20 = 0;
    v17 = 0;
    v18 = 0;
    v10 = sub_140182AD0(a1, a2, (__int64)&v16);
    if ( a3 )
    {
      v11 = 0;
      if ( v10 )
        v11 = v18;
      *a3 = v11;
    }
    if ( a4 )
    {
      v12 = 0;
      if ( v10 )
        v12 = DWORD2(v18);
      *a4 = v12;
    }
    if ( a5 )
    {
      v13 = 0;
      if ( v10 )
        v13 = DWORD1(v18);
      *a5 = v13;
    }
    if ( a6 )
    {
      if ( v10 )
        v9 = HIDWORD(v18);
      *a6 = v9;
    }
  }
  else
  {
    v14 = sub_14017DA60(a1, a2);
    if ( v14 < 0 )
      return 0;
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 2LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 3LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 4LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 5LL));
    if ( a5 )
      *a5 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 6LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 7LL));
    if ( a6 )
      *a6 = (__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 9LL)
                    + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 8LL) << 8));
  }
  return 1;
}
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20

//----- (000000014017A3C0) ----------------------------------------------------
int            sub_14017A3C0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  __int16 v12;
  unsigned __int8 *v13;

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(int *)(a1 + 36);
  v6 = *(unsigned __int8 *)(v5 + v4 + 34);
  v7 = *(unsigned __int8 *)(v5 + v4 + 35);
  v8 = v7 + (*(unsigned __int8 *)(v5 + v4 + 34) << 8);
  if ( a2 >= v8 )
  {
    if ( a3 )
    {
      LODWORD(v5) = (__int16)((*(unsigned __int8 *)(v4 + *(int *)(a1 + 40) + 4 * (v7 + (v6 << 8)) - 4) << 8)
                            + *(unsigned __int8 *)(v4 + *(int *)(a1 + 40) + 4 * (v7 + (v6 << 8)) - 3));
      *a3 = v5;
    }
    if ( a4 )
    {
      v13 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 40) + 2 * (a2 - v8) + 4 * (v7 + (v6 << 8)));
      v11 = *v13;
      v12 = v13[1];
      goto LABEL_10;
    }
  }
  else
  {
    if ( a3 )
    {
      LODWORD(v5) = (__int16)((*(unsigned __int8 *)(4 * a2 + v4 + *(int *)(a1 + 40)) << 8)
                            + *(unsigned __int8 *)(4 * a2 + v4 + *(int *)(a1 + 40) + 1));
      *a3 = v5;
    }
    if ( a4 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = 4 * a2 + (__int64)*(int *)(a1 + 40);
      v11 = *(unsigned __int8 *)(v10 + v9 + 2);
      v12 = *(unsigned __int8 *)(v10 + v9 + 3);
LABEL_10:
      LODWORD(v5) = (__int16)((v11 << 8) + v12);
      *a4 = v5;
    }
  }
  return v5;
}

//----- (000000014017A4F0) ----------------------------------------------------
__int64            sub_14017A4F0(__int64 a1, int a2, int a3)
{
  int v3;
  unsigned int v7;
  __int64 v8;
  unsigned __int8 *v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned int v15;

  v3 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 48) )
    v7 = sub_14017DCC0(a1, a2, a3);
  v8 = *(int *)(a1 + 44);
  if ( !(_DWORD)v8 )
    return v7;
  v9 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v8);
  if ( v9[3] + (v9[2] << 8) )
  {
    if ( v9[9] + (v9[8] << 8) == 1 )
    {
      v10 = 0;
      v11 = a3 | (a2 << 16);
      v12 = (v9[10] << 8) + v9[11] - 1;
      if ( v12 >= 0 )
      {
        while ( 1 )
        {
          v13 = (v12 + v10) >> 1;
          v14 = 6 * v13;
          v15 = v9[v14 + 21] + (v9[v14 + 18] << 24) + (v9[v14 + 20] << 8) + (v9[v14 + 19] << 16);
          if ( v11 >= v15 )
          {
            if ( v11 <= v15 )
            {
              v3 = (__int16)(v9[v14 + 23] + (v9[v14 + 22] << 8));
              return v3 + v7;
            }
            v10 = v13 + 1;
          }
          else
          {
            v12 = v13 - 1;
          }
          if ( v10 > v12 )
            return v7;
        }
      }
    }
  }
  return v3 + v7;
}

//----- (000000014017A640) ----------------------------------------------------
__int64            sub_14017A640(
        __int64 a1,
        float a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        float a6,
        void *a7,
        int *a8,
        unsigned int *a9,
        signed int *a10)
{
  float v10;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __m128 v21;
  __m128d v22;
  int v23;
  __m128 v24;
  __m128d v25;
  __m128 v26;
  int v27;
  __m128d v28;
  int v29;
  __m128 v30;
  __m128d v31;
  int v32;
  signed int v33;
  unsigned int v34;
  int v35;
  signed int v36;
  int v37;
  signed int v38;
  float v39;
  __int64 v40;
  _BYTE *v41;
  __int64 v42;
  __int64 v43;
  _BYTE *v44;
  float *v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  _BYTE *v60;
  int v61;
  signed int v62;
  float v63;
  int v64;
  __int64 v65;
  int v66;
  __m128i v67;
  _BYTE *v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  int v76;
  __int64 v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  char v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  int v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017A640[224];
#define v133 (*(__int64 (*))(void *)(sr_frame_14017A640 + 8)) /* [rsp+0h] */
#define v134 (*(float (*))(void *)(sr_frame_14017A640 + 40)) /* [rsp+20h] */
#define v135 (*(float (*))(void *)(sr_frame_14017A640 + 44)) /* [rsp+24h] */
#define v136 (*(float (*))(void *)(sr_frame_14017A640 + 48)) /* [rsp+28h] */
#define v137 (*(float (*))(void *)(sr_frame_14017A640 + 52)) /* [rsp+2Ch] */
#define v138 (*(float (*))(void *)(sr_frame_14017A640 + 56)) /* [rsp+30h] */
#define v139 (*(float (*))(void *)(sr_frame_14017A640 + 60)) /* [rsp+34h] */
#define v140 (*(float (*))(void *)(sr_frame_14017A640 + 64)) /* [rsp+38h] */
#define v141 (*(signed int (*))(void *)(sr_frame_14017A640 + 68)) /* [rsp+3Ch] */
#define v142 (*(signed int (*))(void *)(sr_frame_14017A640 + 72)) /* [rsp+40h] */
#define Block (*(void * (*))(void *)(sr_frame_14017A640 + 80)) /* [rsp+48h] */
#define v144 (*(int (*))(void *)(sr_frame_14017A640 + 88)) /* [rsp+50h] */
#define v145 (*(float (*))(void *)(sr_frame_14017A640 + 92)) /* [rsp+54h] */
#define v146 (*(unsigned int (*))(void *)(sr_frame_14017A640 + 100)) /* [rsp+5Ch] */
#define v147 (*(float (*))(void *)(sr_frame_14017A640 + 104)) /* [rsp+60h] */
#define v148 (*(float (*))(void *)(sr_frame_14017A640 + 108)) /* [rsp+64h] */
#define v149 (*(float (*))(void *)(sr_frame_14017A640 + 112)) /* [rsp+68h] */
#define v150 (*(__int64 (*))(void *)(sr_frame_14017A640 + 120)) /* [rsp+70h] */
#define v151 (*(__int64 (*))(void *)(sr_frame_14017A640 + 128)) /* [rsp+78h] */
#define v152 (*(__int64 (*))(void *)(sr_frame_14017A640 + 136)) /* [rsp+80h] */
#define v153 (*(__int128 (*))(void *)(sr_frame_14017A640 + 144)) /* [rsp+88h] */
#define v154 (*(__int128 (*))(void *)(sr_frame_14017A640 + 160)) /* [rsp+98h] */
#define v155 (*(__int64 (*))(void *)(sr_frame_14017A640 + 176)) /* [rsp+A8h] */
#define v156 (*(int (*))(void *)(sr_frame_14017A640 + 184)) /* [rsp+B0h] */
#define v157 (*(float (*))(void *)(sr_frame_14017A640 + 192)) /* [rsp+B8h] */
#define v158 (*(float (*))(void *)(sr_frame_14017A640 + 196)) /* [rsp+BCh] */
#define v159 (*(float (*))(void *)(sr_frame_14017A640 + 200)) /* [rsp+C0h] */
#define v160 (*(__int64 (*))(void *)(sr_frame_14017A640 + 208)) /* [rsp+C8h] */

  v10 = a2;
  Block = a7;
  v136 = a2;
  if ( a2 != 0.0 )
  {
    v14 = 0;
    if ( *(_DWORD *)(a1 + 76) )
    {
      v152 = 1;
      v155 = 0;
      v156 = 0;
      v153 = 0;
      v154 = 0;
      v15 = sub_140182AD0(a1, a3, (__int64)&v152);
      v16 = 0;
      if ( v15 )
      {
        v16 = HIDWORD(v154);
        v14 = v154;
      }
      v17 = 0;
      if ( v15 )
        v17 = DWORD1(v154);
      v18 = 0;
      if ( v15 )
        v18 = DWORD2(v154);
    }
    else
    {
      v19 = sub_14017DA60(a1, a3);
      if ( v19 < 0 )
        return 0; /* 0x14017A719: js -> xor eax, eax */
      v20 = *(_QWORD *)(a1 + 8);
      v16 = (__int16)((*(unsigned __int8 *)(v20 + v19 + 8) << 8) + *(unsigned __int8 *)(v20 + v19 + 9));
      v14 = (__int16)(*(unsigned __int8 *)(v20 + v19 + 3) + (*(unsigned __int8 *)(v20 + v19 + 2) << 8));
      v17 = (__int16)((*(unsigned __int8 *)(v20 + v19 + 6) << 8) + *(unsigned __int8 *)(v20 + v19 + 7));
      v18 = (__int16)(*(unsigned __int8 *)(v20 + v19 + 5) + (*(unsigned __int8 *)(v20 + v19 + 4) << 8));
    }
    v21 = _mm_set_ss((float)v14);
    SR_VEC_LANES(128, v21, f32)[0] = SR_VEC_LANES(128, v21, f32)[0] * a2;
    v22 = _mm_cvtps_pd(v21);
    if ( (double)(int)SR_VEC_LANES(128, v22, f64)[0] != SR_VEC_LANES(128, v22, f64)[0] )
      SR_VEC_LANES(128, v22, f64)[0] = (double)((int)SR_VEC_LANES(128, v22, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v22, v22)) & 1));
    v23 = (int)SR_VEC_LANES(128, v22, f64)[0];
    v24 = _mm_set_ss((float)-v16);
    SR_VEC_LANES(128, v24, f32)[0] = SR_VEC_LANES(128, v24, f32)[0] * v10;
    v25 = _mm_cvtps_pd(v24);
    if ( (double)(int)SR_VEC_LANES(128, v25, f64)[0] != SR_VEC_LANES(128, v25, f64)[0] )
      SR_VEC_LANES(128, v25, f64)[0] = (double)((int)SR_VEC_LANES(128, v25, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v25, v25)) & 1));
    v26 = _mm_set_ss((float)v17);
    v27 = (int)SR_VEC_LANES(128, v25, f64)[0];
    SR_VEC_LANES(128, v26, f32)[0] = SR_VEC_LANES(128, v26, f32)[0] * v10;
    v28 = _mm_cvtps_pd(v26);
    if ( (double)(int)SR_VEC_LANES(128, v28, f64)[0] != SR_VEC_LANES(128, v28, f64)[0] )
      SR_VEC_LANES(128, v28, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v28, v28)) & 1) + (int)SR_VEC_LANES(128, v28, f64)[0]);
    v29 = (int)SR_VEC_LANES(128, v28, f64)[0];
    v30 = _mm_set_ss((float)-v18);
    SR_VEC_LANES(128, v30, f32)[0] = SR_VEC_LANES(128, v30, f32)[0] * v10;
    v31 = _mm_cvtps_pd(v30);
    if ( (double)(int)SR_VEC_LANES(128, v31, f64)[0] != SR_VEC_LANES(128, v31, f64)[0] )
      SR_VEC_LANES(128, v31, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v31, v31)) & 1) + (int)SR_VEC_LANES(128, v31, f64)[0]);
    v32 = (int)SR_VEC_LANES(128, v31, f64)[0];
    if ( v23 != v29 && v27 != v32 )
    {
      v33 = v27 - a4;
      v142 = a4 + v32;
      v34 = v23 - a4;
      v35 = a4 + v29;
      v146 = v34;
      v141 = v33;
      v36 = a4 + v29 - v34;
      v144 = v35;
      v37 = v142 - v33;
      if ( Block )
        *(_DWORD *)Block = v36;
      if ( a8 )
        *a8 = v37;
      if ( a9 )
        *a9 = v34;
      v38 = v33;
      if ( a10 )
        *a10 = v33;
      v39 = -v10;
      v145 = -v10;
      v40 = (int)sub_14017B360(a1, a3, (__int64 *)&Block);
      v151 = sr_path_malloc(v36 * v37);
      v41 = (_BYTE *)v151;
      v42 = v40;
      v43 = sr_path_malloc(4 * v40);
      v44 = Block;
      v45 = (float *)v43;
      if ( (int)v40 > 0 )
      {
        v46 = 0;
        v47 = 14LL * ((int)v40 - 1);
        v48 = 0;
        do
        {
          v49 = v44[v48 + 12];
          if ( v49 == 2 )
          {
            v50 = (float)((float)*(__int16 *)&v44[v47 + 2] * v39) - (float)((float)*(__int16 *)&v44[v48 + 2] * v39);
            v51 = (float)((float)*(__int16 *)&v44[v47] * v10) - (float)((float)*(__int16 *)&v44[v48] * v10);
            v52 = fsqrt((float)(v50 * v50) + (float)(v51 * v51));
            if ( v52 == 0.0 )
              goto LABEL_38;
            v53 = 1.0 / v52;
          }
          else
          {
            if ( v49 != 3
              || (v54 = (float)*(__int16 *)&v44[v48 + 4] * v10,
                  v55 = (float)((float)((float)*(__int16 *)&v44[v48] * v10) - (float)(v54 + v54))
                      + (float)((float)*(__int16 *)&v44[v47] * v10),
                  v56 = (float)*(__int16 *)&v44[v48 + 6] * v39,
                  v57 = (float)((float)*(__int16 *)&v44[v48 + 2] * v39) - (float)(v56 + v56),
                  v58 = (float)*(__int16 *)&v44[v47 + 2] * v39,
                  v59 = (float)((float)(v57 + v58) * (float)(v57 + v58)) + (float)(v55 * v55),
                  v59 == 0.0) )
            {
LABEL_38:
              v53 = 0.0;
              goto LABEL_39;
            }
            v53 = 1.0 / v59;
          }
LABEL_39:
          v47 = v48;
          v48 += 14;
          v45[v46++] = v53;
        }
        while ( v46 < v40 );
      }
      if ( v38 >= v142 )
        goto LABEL_99;
      v60 = v41;
      v61 = v146;
      v62 = v142;
      v63 = v158;
      v150 = v36;
      v64 = v144;
      v65 = v36;
      Block = v41;
LABEL_42:
      v66 = v61;
      if ( v61 >= v64 )
        goto LABEL_98;
      v67 = _mm_cvtsi32_si128(v38);
      v68 = v60;
      v69 = 1.0 / v10;
      v70 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v67), f32)[0] + 0.5;
      v71 = (float)a5;
      v135 = v70;
      v72 = v70 / v39;
      v149 = 1.0 / v10;
      v148 = v70 / v39;
      v147 = v71;
LABEL_44:
      v73 = 999999.0;
      v74 = (float)v66 + 0.5;
      v134 = v74;
      v75 = 0;
      v76 = sub_14017FB20(v69 * v74, v72, v40, (__int64)v44);
      if ( v42 <= 0 )
        goto LABEL_91;
      while ( 1 )
      {
        v77 = 14 * v75;
        v78 = (float)*(__int16 *)&v44[14 * v75] * v10;
        v79 = (float)*(__int16 *)&v44[14 * v75 + 2] * v145;
        v80 = v78 - v74;
        v81 = v79 - v70;
        v82 = (float)(v80 * v80) + (float)(v81 * v81);
        if ( v82 < (float)(v73 * v73) )
          v73 = fsqrt(v82);
        v83 = v44[v77 + 12];
        if ( v83 == 2 )
        {
          v84 = (float)((float)*(__int16 *)&v44[v77 - 14] * v10) - v78;
          v85 = (float)((float)*(__int16 *)&v44[v77 - 12] * v145) - v79;
          v86 = fabs((float)(v81 * v84) - (float)(v85 * v80)) * v45[v75];
          if ( !v75 )
            crt_assert((char *)L"i != 0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x115Eu);
          if ( v86 >= v73
            || (v87 = (float)((float)(v80 * v84) + (float)(v81 * v85))
                    / (float)((float)(v85 * v85) + (float)(v84 * v84)),
                v87 > -0.0) )
          {
            v74 = v134;
          }
          else
          {
            v74 = v134;
            if ( v87 >= -1.0 )
              v73 = v86;
          }
          goto LABEL_88;
        }
        if ( v83 != 3 )
          goto LABEL_89;
        v88 = (float)*(__int16 *)&v44[14 * v75 - 14] * v10;
        v89 = (float)*(__int16 *)&v44[14 * v75 - 12] * v145;
        v90 = (float)*(__int16 *)&v44[v77 + 4] * v10;
        v91 = (float)*(__int16 *)&v44[v77 + 6];
        v138 = v88;
        v92 = v91 * v145;
        v137 = v89;
        v139 = v90;
        v93 = fmaxf(v90, v78);
        v140 = v92;
        v94 = fminf(v92, v79);
        v95 = fmaxf(v92, v79);
        if ( v134 > (float)(fminf(fminf(v90, v78), v88) - v73)
          && v134 < (float)(fmaxf(v93, v88) + v73)
          && v70 > (float)(fminf(v94, v89) - v73)
          && v70 < (float)(fmaxf(v95, v89) + v73) )
        {
          break;
        }
        v74 = v134;
        v10 = v136;
LABEL_89:
        if ( ++v75 >= v42 )
        {
          v71 = v147;
LABEL_91:
          if ( !v76 )
            v73 = -v73;
          v130 = (float)(v73 * a6) + v71;
          if ( v130 >= 0.0 )
            v131 = fminf(v130, 255.0);
          else
            v131 = 0.0;
          ++v66;
          v72 = v148;
          LODWORD(v40) = v42;
          v69 = v149;
          *v68++ = (int)v131;
          v64 = v144;
          if ( v66 >= v144 )
          {
            v39 = v145;
            v38 = v141;
            v60 = Block;
            v61 = v146;
            v65 = v150;
            v62 = v142;
LABEL_98:
            ++v38;
            v60 += v65;
            v141 = v38;
            Block = v60;
            if ( v38 >= v62 )
            {
LABEL_99:
              free(v45);
              free(v44);
              return (__int64)v151; /* 0x14017B319: mov rax, rbx */
            }
            goto LABEL_42;
          }
          goto LABEL_44;
        }
      }
      v96 = v92 - v79;
      v97 = v90 - v78;
      v98 = v92 + v92;
      v99 = v45[v75];
      v100 = (float)(v78 - (float)(v90 + v90)) + v88;
      v101 = (float)(v79 - v98) + v89;
      v102 = (float)(v97 * v80) + (float)(v96 * v81);
      v103 = (float)((float)(v97 * v97) + (float)(v96 * v96)) + (float)(v96 * v96);
      v104 = (float)((float)(v96 * v101) + (float)(v97 * v100)) * 3.0;
      v105 = (float)((float)((float)(v81 * v101) + (float)(v80 * v100)) + (float)(v97 * v97)) + v103;
      if ( v99 == 0.0 )
      {
        if ( v104 == 0.0 )
        {
          if ( v105 != 0.0 )
          {
            v106 = 1;
            v107 = -(float)(v102 / v105);
            v157 = v107;
LABEL_67:
            v110 = v140;
            v111 = v137;
            v112 = v139;
            v113 = v138;
            if ( v107 >= 0.0 && v107 <= 1.0 )
            {
              v114 = v107 + v107;
              v115 = 1.0 - v107;
              v116 = v107 * v107;
              v117 = v114 * v115;
              v118 = v115 * v115;
              v119 = v116 * v137;
              v120 = (float)(v117 * v140) + (float)(v118 * v79);
              v121 = (float)((float)(v117 * v139) + (float)(v118 * v78)) + (float)(v116 * v138);
              v74 = v134;
              v122 = (float)((float)(v121 - v134) * (float)(v121 - v134))
                   + (float)((float)((float)(v120 + v119) - v135) * (float)((float)(v120 + v119) - v135));
              if ( v122 < (float)(v73 * v73) )
                v73 = fsqrt(v122);
LABEL_73:
              if ( v106 >= 2 && v63 >= 0.0 && v63 <= 1.0 )
              {
                v123 = (float)(v63 + v63) * (float)(1.0 - v63);
                v124 = (float)(v123 * v110) + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v79);
                v125 = (float)((float)((float)((float)((float)(v123 * v112)
                                                     + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v78))
                                             + (float)((float)(v63 * v63) * v113))
                                     - v74)
                             * (float)((float)((float)((float)(v123 * v112)
                                                     + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * v78))
                                             + (float)((float)(v63 * v63) * v113))
                                     - v74))
                     + (float)((float)((float)(v124 + (float)((float)(v63 * v63) * v111)) - v135)
                             * (float)((float)(v124 + (float)((float)(v63 * v63) * v111)) - v135));
                if ( v125 < (float)(v73 * v73) )
                  v73 = fsqrt(v125);
              }
              if ( v106 >= 3 && v159 >= 0.0 && v159 <= 1.0 )
              {
                v126 = (float)(v159 + v159) * (float)(1.0 - v159);
                v127 = (float)(1.0 - v159) * (float)(1.0 - v159);
                v128 = v126 * v110;
                v10 = v136;
                v129 = (float)((float)((float)((float)((float)(v126 * v112) + (float)(v127 * v78))
                                             + (float)((float)(v159 * v159) * v113))
                                     - v74)
                             * (float)((float)((float)((float)(v126 * v112) + (float)(v127 * v78))
                                             + (float)((float)(v159 * v159) * v113))
                                     - v74))
                     + (float)((float)((float)((float)(v128 + (float)(v127 * v79)) + (float)((float)(v159 * v159) * v111))
                                     - v135)
                             * (float)((float)((float)(v128 + (float)(v127 * v79)) + (float)((float)(v159 * v159) * v111))
                                     - v135));
                if ( v129 < (float)(v73 * v73) )
                  v73 = fsqrt(v129);
                goto LABEL_88;
              }
LABEL_87:
              v10 = v136;
LABEL_88:
              v70 = v135;
              goto LABEL_89;
            }
LABEL_72:
            v74 = v134;
            goto LABEL_73;
          }
        }
        else
        {
          v108 = (float)(v105 * v105) - (float)((float)(v104 * 4.0) * v102);
          if ( v108 >= 0.0 )
          {
            v109 = fsqrt(v108);
            v106 = 2;
            v107 = (float)((float)-v105 - v109) * (float)(0.5 / v104);
            v63 = (float)(v109 - v105) * (float)(0.5 / v104);
            v157 = v107;
            v158 = v63;
            goto LABEL_67;
          }
        }
        v74 = v134;
        goto LABEL_87;
      }
      v106 = sub_140183820(v104 * v99, v99 * v105, v102 * v99, &v157);
      v63 = v158;
      if ( v106 >= 1 )
      {
        v107 = v157;
        goto LABEL_67;
      }
      v111 = v137;
      v113 = v138;
      v112 = v139;
      v110 = v140;
      goto LABEL_72;
    }
  }
  return 0; /* 0x14017B326: xor eax, eax */
}
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef Block
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157
#undef v158
#undef v159
#undef v160

// 14017A7BF: conditional instruction was optimized away because rcx.8<100000000u
// 14017A809: conditional instruction was optimized away because rcx.8<100000000u
// 14017A850: conditional instruction was optimized away because rcx.8<100000000u
// 14017A89B: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017B360) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14017B360(__int64 a1, int a2, __int64 *a3)
{
  unsigned int v7;
  __int64 v8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017B360[112];
#define v9 (*(__int64 (*))(void *)(sr_frame_14017B360 + 0)) /* [rsp+20h] */
#define v10 (*(sr_frame_i128 (*))(void *)(sr_frame_14017B360 + 8)) /* [rsp+28h] */
#define v11 (*(sr_frame_i128 (*))(void *)(sr_frame_14017B360 + 24)) /* [rsp+38h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_14017B360 + 40)) /* [rsp+48h] */
#define v13 (*(int (*))(void *)(sr_frame_14017B360 + 48)) /* [rsp+50h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_14017B360 + 56)) /* [rsp+58h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_14017B360 + 64)) /* [rsp+60h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_14017B360 + 80)) /* [rsp+70h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_14017B360 + 96)) /* [rsp+80h] */
#define v18 (*(unsigned int (*))(void *)(sr_frame_14017B360 + 104)) /* [rsp+88h] */

  if ( !*(_DWORD *)(a1 + 76) )
    return sub_14017E380(a1, a2, a3);
  v7 = 0;
  v9 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v10 = 0;
  v11 = 0;
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)sub_140182AD0(a1, a2, (__int64)&v9)
    && (v8 = sr_path_malloc(14LL * v13), *a3 = v8, v17 = v8, (unsigned int)sub_140182AD0(a1, a2, (__int64)&v14)) )
  {
    v7 = v18;
    if ( v18 != v13 )
      crt_assert(
        (char *)L"output_ctx.num_vertices == count_ctx.num_vertices",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x8B6u);
  }
  else
  {
    *a3 = 0;
  }
  return v7;
}
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18

//----- (000000014017B460) ----------------------------------------------------
__int64            sub_14017B460(char *a1)
{
  unsigned __int8 *v1;
  _BYTE *v2;

  if ( sub_140181710(a1) )
    return 1;
  if ( *v2 == 116
    && v2[1] == 116
    && v2[2] == 99
    && v2[3] == 102
    && ((v1[7] - 0x10000 + (v1[4] << 24) + (v1[6] << 8) + ((unsigned __int8)v2[5] << 16)) & 0xFFFEFFFF) == 0 )
  {
    return v1[11] + ((v1[10] + ((v1[9] + (v1[8] << 8)) << 8)) << 8);
  }
  return 0;
}

//----- (000000014017B4F0) ----------------------------------------------------
__int64            sub_14017B4F0(char *a1)
{
  unsigned __int8 *v1;
  _BYTE *v2;

  if ( sub_140181710(a1) )
    return 1;
  if ( *v2 == 116
    && v2[1] == 116
    && v2[2] == 99
    && v2[3] == 102
    && ((v1[7] - 0x10000 + (v1[4] << 24) + (v1[6] << 8) + ((unsigned __int8)v2[5] << 16)) & 0xFFFEFFFF) == 0 )
  {
    return v1[11] + ((v1[10] + ((v1[9] + (v1[8] << 8)) << 8)) << 8);
  }
  return 0;
}

//----- (000000014017B740) ----------------------------------------------------
__int64            sub_14017B740(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  __m128i v19;
  __m128i v20;
  __int32 v21;
  int v22;
  _OWORD *v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017B740[144];
#define v33 (*(__m128i (*))(void *)(sr_frame_14017B740 + 0)) /* [rsp+20h] */
#define v34 (*(__m128i (*))(void *)(sr_frame_14017B740 + 16)) /* [rsp+30h] */
#define v35 (*(__m128i (*))(void *)(sr_frame_14017B740 + 32)) /* [rsp+40h] */
#define v36 (*(__int128 (*))(void *)(sr_frame_14017B740 + 48)) /* [rsp+50h] */
#define v37 (*(int (*))(void *)(sr_frame_14017B740 + 128)) /* [rsp+A0h] */
#define v38 (*(int (*))(void *)(sr_frame_14017B740 + 128)) /* [rsp+A0h] */
#define v39 (*(int (*))(void *)(sr_frame_14017B740 + 136)) /* [rsp+A8h] */

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  v4 = 0;
  v34 = _mm_cvtsi64_si128((long long)(0u));
  *(_OWORD *)(a1 + 64) = 0u;
  v7 = (unsigned int)sub_140180D50(a2, a3, "cmap");
  v8 = sub_140180D50(a2, a3, "loca");
  *(_DWORD *)(a1 + 24) = v8;
  v9 = v8;
  v10 = sub_140180D50(a2, a3, "head");
  *(_DWORD *)(a1 + 28) = v10;
  v11 = v10;
  v39 = sub_140180D50(a2, a3, "glyf");
  *(_DWORD *)(a1 + 32) = v39;
  v12 = sub_140180D50(a2, a3, "hhea");
  *(_DWORD *)(a1 + 36) = v12;
  v13 = v12;
  v37 = sub_140180D50(a2, a3, "hmtx");
  *(_DWORD *)(a1 + 40) = v37;
  *(_DWORD *)(a1 + 44) = sub_140180D50(a2, a3, "kern");
  *(_DWORD *)(a1 + 48) = sub_140180D50(a2, a3, "GPOS");
  if ( !(_DWORD)v7 || !v11 || !v13 || !v37 )
    return 0;
  if ( v39 )
  {
    if ( !v9 )
      return 0;
  }
  else
  {
    v38 = 2;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = sub_140180D50(a2, a3, "CFF ");
    if ( !v18 )
      return 0;
    v34 = _mm_cvtsi64_si128((long long)(0u));
    *(_OWORD *)(a1 + 128) = 0u;
    v19 = v34;
    SR_VEC_LANES(128, v34, i32)[3] = 0x20000000;
    SR_VEC_LANES(128, v34, i64)[0] = a2 + v18;
    *(__m128i_u *)(a1 + 144) = v19;
    SR_VEC_LANES(128, v34, i32)[2] = 0;
    v20 = v34;
    *(__m128i_u *)(a1 + 64) = v34;
    v33 = v20;
    if ( SR_VEC_READ_LANES(128, _mm_srli_si128(v20, 8), i32)[1] < 2 )
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( SR_VEC_LANES(128, v33, i32)[3] > 2 )
      LOBYTE(v21) = *(_BYTE *)(SR_VEC_LANES(128, v33, i64)[0] + 2);
    else
      LOBYTE(v21) = 0;
    v21 = (unsigned __int8)v21;
    if ( (unsigned __int8)v21 > SR_VEC_LANES(128, v33, i32)[3] )
    {
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      v21 = SR_VEC_LANES(128, v33, i32)[3];
    }
    SR_VEC_LANES(128, v33, i32)[2] = v21;
    sub_14017F1F0(&v35, (__int64)&v33);
    v34 = *(__m128i_u *)sub_14017F1F0(&v35, (__int64)&v33);
    v34 = *(__m128i_u *)sub_14017F410(&v35, (__int64)&v34, 0);
    sub_14017F1F0(&v35, (__int64)&v33);
    *(_OWORD *)(a1 + 96) = *sub_14017F1F0(&v35, (__int64)&v33);
    v35 = *(__m128i_u *)sub_1401803B0(&v35, (__int64)&v34, 17);
    if ( SR_VEC_LANES(128, v35, i32)[2] < SR_VEC_LANES(128, v35, i32)[3] )
      v15 = sub_14017F5B0((__int64)&v35);
    v35 = *(__m128i_u *)sub_1401803B0(&v35, (__int64)&v34, 262);
    if ( SR_VEC_LANES(128, v35, i32)[2] < SR_VEC_LANES(128, v35, i32)[3] )
      v38 = sub_14017F5B0((__int64)&v35);
    v35 = *(__m128i_u *)sub_1401803B0(&v35, (__int64)&v34, 292);
    if ( SR_VEC_LANES(128, v35, i32)[2] < SR_VEC_LANES(128, v35, i32)[3] )
      v16 = sub_14017F5B0((__int64)&v35);
    v35 = *(__m128i_u *)sub_1401803B0(&v35, (__int64)&v34, 293);
    if ( SR_VEC_LANES(128, v35, i32)[2] < SR_VEC_LANES(128, v35, i32)[3] )
      v17 = sub_14017F5B0((__int64)&v35);
    v35 = v34;
    v34 = v33;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)sub_140180F10((__int64)&v36, (__int64)&v34, (__int64)&v35);
    if ( v38 != 2 || !v15 )
      return 0;
    if ( v16 )
    {
      if ( !v17 )
        return 0;
      v22 = SR_VEC_LANES(128, v33, i32)[3];
      if ( v16 > SR_VEC_LANES(128, v33, i32)[3] || v16 < 0 )
      {
        crt_assert(
          (char *)L"!(o > b->size || o < 0)",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0x45Cu);
        v22 = SR_VEC_LANES(128, v33, i32)[3];
      }
      if ( v16 > v22 || (SR_VEC_LANES(128, v33, i32)[2] = v16, v16 < 0) )
        SR_VEC_LANES(128, v33, i32)[2] = v22;
      v23 = sub_14017F1F0(&v36, (__int64)&v33);
      v24 = SR_VEC_LANES(128, v33, i32)[3];
      v25 = SR_VEC_LANES(128, v33, i32)[3] - v17;
      v34 = _mm_cvtsi64_si128((long long)(0u));
      *(_OWORD *)(a1 + 128) = *v23;
      if ( v17 >= 0 && v25 >= 0 && v17 <= v24 )
      {
        SR_VEC_LANES(128, v34, i64)[0] = SR_VEC_LANES(128, v33, i64)[0] + v17;
        SR_VEC_LANES(128, v34, i32)[3] = v25;
      }
      *(__m128i_u *)(a1 + 144) = v34;
    }
    else
    {
      v24 = SR_VEC_LANES(128, v33, i32)[3];
    }
    if ( v15 > v24 || v15 < 0 )
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( v15 > v24 || (SR_VEC_LANES(128, v33, i32)[2] = v15, v15 < 0) )
      SR_VEC_LANES(128, v33, i32)[2] = v24;
    *(_OWORD *)(a1 + 80) = *sub_14017F1F0(&v36, (__int64)&v33);
  }
  v26 = sub_140180D50(a2, a3, "maxp");
  if ( v26 )
    v27 = *(unsigned __int8 *)(v26 + a2 + 5) + (*(unsigned __int8 *)(v26 + a2 + 4) << 8);
  else
    v27 = 0xFFFF;
  *(_DWORD *)(a1 + 20) = v27;
  v28 = *(unsigned __int8 *)(v7 + a2 + 3);
  v29 = *(unsigned __int8 *)(v7 + a2 + 2) << 8;
  *(_DWORD *)(a1 + 52) = 0;
  v30 = v28 + v29;
  if ( !v30 )
    return 0;
  do
  {
    v31 = (unsigned int)(v7 + 4 + 8 * v4);
    v32 = *(unsigned __int8 *)(v31 + a2 + 1) + (*(unsigned __int8 *)(v31 + a2) << 8);
    if ( !v32
      || v32 == 3
      && (*(unsigned __int8 *)(v31 + a2 + 3) + (*(unsigned __int8 *)(v31 + a2 + 2) << 8) == 1
       || *(unsigned __int8 *)(v31 + a2 + 3) + (*(unsigned __int8 *)(v31 + a2 + 2) << 8) == 10) )
    {
      *(_DWORD *)(a1 + 52) = v7
                           + ((((*(unsigned __int8 *)(v31 + a2 + 5) + (*(unsigned __int8 *)(v31 + a2 + 4) << 8)) << 8)
                             + *(unsigned __int8 *)(v31 + a2 + 6)) << 8)
                           + *(unsigned __int8 *)(v31 + a2 + 7);
    }
    ++v4;
  }
  while ( v4 < v30 );
  if ( !*(_DWORD *)(a1 + 52) )
    return 0;
  *(_DWORD *)(a1 + 56) = (*(unsigned __int8 *)(*(int *)(a1 + 28) + a2 + 50) << 8)
                       + *(unsigned __int8 *)(*(int *)(a1 + 28) + a2 + 51);
  return 1;
}
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39

//----- (000000014017BCC0) ----------------------------------------------------
__int64            sub_14017BCC0(__int64 a1, int a2)
{
  unsigned int v3;
  int v4;
  int v5;
  int v7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017BCC0[64];
#define v8 (*(__int64 (*))(void *)(sr_frame_14017BCC0 + 8)) /* [rsp+20h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_14017BCC0 + 16)) /* [rsp+28h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_14017BCC0 + 32)) /* [rsp+38h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_14017BCC0 + 48)) /* [rsp+48h] */
#define v12 (*(int (*))(void *)(sr_frame_14017BCC0 + 56)) /* [rsp+50h] */

  if ( *(_DWORD *)(a1 + 76) )
  {
    v3 = 0;
    v8 = 1;
    v11 = 0;
    v12 = 0;
    v9 = 0;
    v10 = 0;
    v4 = sub_140182AD0(a1, a2, (__int64)&v8);
    v5 = 0;
    if ( v4 )
      v5 = v12;
    LOBYTE(v3) = v5 == 0;
    return v3;
  }
  else
  {
    v7 = sub_14017DA60(a1, a2);
    return v7 < 0
        || *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v7 + 1LL) + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v7) << 8) == 0;
  }
}
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12

//----- (000000014017BD70) ----------------------------------------------------
void            sub_14017BD70(__int64 a1, __int64 a2, int a3, int a4, int a5, float a6, float a7, int a8)
{
  int v12;

  v12 = sub_140178410(a1, a8);
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, 0.0, 0, v12);
}

//----- (000000014017BE00) ----------------------------------------------------
void            sub_14017BE00(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10)
{
  int v14;

  v14 = sub_140178410(a1, a10);
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, a8, a9, v14);
}

//----- (000000014017BE60) ----------------------------------------------------
float *           sub_14017BE60(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10,
        int a11,
        float *a12,
        float *a13,
        int a14)
{
  int v18;
  float v19;
  float *result;

  v18 = sub_140178410(a1, a14);
  sub_14017C040(a1, (__int64)a2, a3 - a10 + 1, a4 - a11 + 1, a5, a6, a7, a8, a9, v18);
  if ( a10 > 1 )
    sub_140181080(a2, a3, a4, a5, a10);
  if ( a11 > 1 )
    sub_1401843E0((__int64)a2, a3, a4, a5, a11);
  if ( a10 )
    v19 = (float)(0.5 / (float)a10) * (float)(1 - a10);
  else
    v19 = 0.0;
  *a12 = v19;
  result = a13;
  if ( a11 )
    *a13 = (float)(0.5 / (float)a11) * (float)(1 - a11);
  else
    *a13 = 0.0;
  return result;
}

//----- (000000014017BFE0) ----------------------------------------------------
void            sub_14017BFE0(__int64 a1, __int64 a2, int a3, int a4, int a5, float a6, float a7, int a8)
{
  sub_14017C040(a1, a2, a3, a4, a5, a6, a7, 0.0, 0, a8);
}

//----- (000000014017C040) ----------------------------------------------------
void            sub_14017C040(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10)
{
  int v10;
  int v15;
  __m128 v16;
  float v17;
  float v18;
  float v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __m128 v25;
  __m128d v26;
  int v27;
  int v28;
  __m128 v29;
  __m128d v30;
  int v31;
  int v32;
  void *v33;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C040[208];
#define v34 (*(int (*)[4])(void *)(sr_frame_14017C040 + 0)) /* [rsp+60h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14017C040 + 16)) /* [rsp+70h] */
#define v36 (*(__int64 (*))(void *)(sr_frame_14017C040 + 24)) /* [rsp+78h] */
#define v37 (*(__int128 (*))(void *)(sr_frame_14017C040 + 32)) /* [rsp+80h] */
#define v38 (*(__int128 (*))(void *)(sr_frame_14017C040 + 48)) /* [rsp+90h] */
#define v39 (*(__int64 (*))(void *)(sr_frame_14017C040 + 64)) /* [rsp+A0h] */
#define v40 (*(int (*))(void *)(sr_frame_14017C040 + 72)) /* [rsp+A8h] */
#define Block (*(void * (*))(void *)(sr_frame_14017C040 + 192)) /* [rsp+120h] */

  v10 = a10;
  v15 = sub_14017B360(a1, a10, (__int64 *)&Block);
  v16 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(a9)));
  v17 = a8;
  v18 = a7;
  v19 = a6;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v20 = 0;
    v36 = 1;
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    v21 = sub_140182AD0(a1, v10, (__int64)&v36);
    v22 = 0;
    if ( v21 )
    {
      v22 = HIDWORD(v38);
      v20 = v38;
    }
  }
  else
  {
    v23 = sub_14017DA60(a1, v10);
    if ( v23 < 0 )
    {
      v28 = 0;
      v32 = 0;
      goto LABEL_15;
    }
    v24 = *(_QWORD *)(a1 + 8);
    v22 = (__int16)(*(unsigned __int8 *)(v24 + v23 + 9) + (*(unsigned __int8 *)(v24 + v23 + 8) << 8));
    v20 = (__int16)(*(unsigned __int8 *)(v24 + v23 + 3) + (*(unsigned __int8 *)(v24 + v23 + 2) << 8));
  }
  v25 = _mm_set_ss((float)v20);
  SR_VEC_LANES(128, v25, f32)[0] = (float)(SR_VEC_LANES(128, v25, f32)[0] * v19) + v17;
  v26 = _mm_cvtps_pd(v25);
  v27 = (int)SR_VEC_LANES(128, v26, f64)[0];
  if ( (double)v27 != SR_VEC_LANES(128, v26, f64)[0] )
    SR_VEC_LANES(128, v26, f64)[0] = (double)(v27 - (_mm_movemask_pd(_mm_unpacklo_pd(v26, v26)) & 1));
  v28 = (int)SR_VEC_LANES(128, v26, f64)[0];
  v29 = v16;
  SR_VEC_LANES(128, v29, f32)[0] = SR_VEC_LANES(128, v16, f32)[0] - (float)((float)v22 * v18);
  v30 = _mm_cvtps_pd(v29);
  v31 = (int)SR_VEC_LANES(128, v30, f64)[0];
  if ( (double)v31 != SR_VEC_LANES(128, v30, f64)[0] )
    SR_VEC_LANES(128, v30, f64)[0] = (double)(v31 - (_mm_movemask_pd(_mm_unpacklo_pd(v30, v30)) & 1));
  v32 = (int)SR_VEC_LANES(128, v30, f64)[0];
LABEL_15:
  v33 = Block;
  v35 = a2;
  v34[0] = a3;
  v34[2] = a5;
  v34[1] = a4;
  if ( a3 && a4 )
    sub_14017D510(v34, 0.34999999, (__int64)Block, v15, v19, v18, v17, SR_VEC_LANES(128, v16, f32)[0], v28, v32, 1, *(_QWORD *)a1);
  free(v33);
}
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef Block

// 14017C185: conditional instruction was optimized away because rcx.8<100000000u
// 14017C1D1: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017C2C0) ----------------------------------------------------
float *           sub_14017C2C0(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10,
        int a11,
        float *a12,
        float *a13,
        int a14)
{
  float v17;
  float *result;

  sub_14017C040(a1, (__int64)a2, a3 - a10 + 1, a4 - a11 + 1, a5, a6, a7, a8, a9, a14);
  if ( a10 > 1 )
    sub_140181080(a2, a3, a4, a5, a10);
  if ( a11 > 1 )
    sub_1401843E0((__int64)a2, a3, a4, a5, a11);
  if ( a10 )
    v17 = (float)(0.5 / (float)a10) * (float)(1 - a10);
  else
    v17 = 0.0;
  *a12 = v17;
  result = a13;
  if ( a11 )
    *a13 = (float)(0.5 / (float)a11) * (float)(1 - a11);
  else
    *a13 = 0.0;
  return result;
}

//----- (000000014017C420) ----------------------------------------------------
__int64            sub_14017C420(__int64 a1, _WORD *a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  void *v16;

  v11 = a3 - a6;
  v12 = sr_path_malloc(20);
  v13 = sr_path_malloc(v11);
  if ( !v12 )
  {
    if ( !v13 )
      return 0;
    v16 = (void *)v13;
LABEL_11:
    free(v16);
    return 0;
  }
  if ( !v13 )
  {
    v16 = (void *)v12;
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 48) = v13;
  *(_QWORD *)a1 = a7;
  v14 = a3;
  if ( a5 )
    v14 = a5;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = v14;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(a2);
  *(_QWORD *)(a1 + 8) = v12;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  *(_DWORD *)v12 = v11;
  *(_DWORD *)(v12 + 4) = a4 - a6;
  *(_QWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 16) = 0;
  if ( a2 )
    crt_memset((void *)(uintptr_t)(a2), 0, a4 * a3);
  return 1;
}

//----- (000000014017C520) ----------------------------------------------------
void            sub_14017C520(__int64 a1)
{
  free(*(void **)(a1 + 48));
  free(*(void **)(a1 + 8));
}

//----- (000000014017C540) ----------------------------------------------------
int *           sub_14017C540(_QWORD *a1, char *a2, __int64 a3, float a4, int a5, int a6, __int64 a7)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C540[32];
#define v8 (*(_DWORD (*)[2])(void *)(sr_frame_14017C540 + 0)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_14017C540 + 8)) /* [rsp+38h] */
#define v10 (*(int (*))(void *)(sr_frame_14017C540 + 16)) /* [rsp+40h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_14017C540 + 24)) /* [rsp+48h] */

  v8[1] = a5;
  v10 = a6;
  v11 = a7;
  *(float *)v8 = a4;
  v9 = 0;
  return sub_14017C590(a1, a2, a3, (__int64)v8, 1);
}
#undef v8
#undef v9
#undef v10
#undef v11

//----- (000000014017C590) ----------------------------------------------------
int *           sub_14017C590(_QWORD *a1, char *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  unsigned int *v14;
  __m128i v15;
  __m128i v16;
  signed __int64 v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __int64 v25;
  int v26;
  int v27;
  _DWORD *v28;
  unsigned __int64 v29;
  int *result;
  int *v31;
  unsigned int v32;
  int v33;
  _DWORD *v34;
  int v35;
  int v36;
  int *v37;
  int v38;
  __int64 i;
  int v40;
  int v41;
  int *v42;
  __int64 v43;
  unsigned int v44;
  _QWORD v45[20];

  if ( a5 > 0 )
  {
    v8 = a4 + 16;
    v9 = a5;
    do
    {
      v10 = 0;
      if ( *(int *)v8 > 0 )
      {
        v11 = 0;
        do
        {
          v11 += 28;
          ++v10;
          *(_WORD *)(v11 + *(_QWORD *)(v8 + 8) - 22) = 0;
          *(_WORD *)(v11 + *(_QWORD *)(v8 + 8) - 24) = 0;
          *(_WORD *)(v11 + *(_QWORD *)(v8 + 8) - 26) = 0;
          *(_WORD *)(v11 + *(_QWORD *)(v8 + 8) - 28) = 0;
        }
        while ( v10 < *(_DWORD *)v8 );
      }
      v8 += 40;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  v13 = 0;
  if ( a5 >= 8 )
  {
    v14 = (unsigned int *)(a4 + 96);
    v15 = _mm_cvtsi64_si128((long long)(0));
    v16 = _mm_cvtsi64_si128((long long)(0));
    v17 = 0;
    do
    {
      v18 = _mm_cvtsi32_si128(v14[10]);
      v13 += 8;
      v19 = _mm_cvtsi32_si128(*(v14 - 10));
      v17 += 8LL;
      v20 = _mm_cvtsi32_si128(*v14);
      v21 = _mm_cvtsi32_si128(*(v14 - 20));
      v14 += 80;
      v15 = _mm_add_epi32(_mm_unpacklo_epi64(_mm_unpacklo_epi32(v21, v19), _mm_unpacklo_epi32(v20, v18)), v15);
      v22 = _mm_add_epi32(
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v14 - 60)), _mm_cvtsi32_si128(*(v14 - 50))),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v14 - 40)), _mm_cvtsi32_si128(*(v14 - 30)))),
              v16);
      v16 = v22;
    }
    while ( v17 < (__int64)(a5 & 0xFFFFFFFFFFFFFFF8uLL) );
    v23 = _mm_add_epi32(v22, v15);
    v24 = _mm_add_epi32(v23, _mm_srli_si128(v23, 8));
    v12 = _mm_cvtsi128_si32(_mm_add_epi32(v24, _mm_srli_si128(v24, 4)));
  }
  v25 = v13;
  v26 = 0;
  v27 = 0;
  if ( v13 < (__int64)a5 )
  {
    if ( a5 - (__int64)v13 < 2 )
      goto LABEL_16;
    v28 = (_DWORD *)(a4 + 8 * (v13 + 4LL * v13 + 7));
    v29 = ((unsigned __int64)(a5 - v25 - 2) >> 1) + 1;
    v25 += 2 * v29;
    do
    {
      v26 += *(v28 - 10);
      v27 += *v28;
      v28 += 20;
      --v29;
    }
    while ( v29 );
    if ( v25 < a5 )
LABEL_16:
      v12 += *(_DWORD *)(a4 + 40 * v25 + 16);
    v12 += v27 + v26;
  }
  result = (int *)sr_path_malloc(24LL * v12);
  v31 = result;
  if ( result )
  {
    v45[0] = *a1;
    v32 = sub_140179790(a2);
    sub_14017B740((__int64)v45, (__int64)a2, v32);
    v33 = sub_14017C8A0((__int64)a1, (__int64)v45, a4, a5, (__int64)v31);
    v34 = (_DWORD *)a1[1];
    v35 = 0;
    if ( v33 > 0 )
    {
      v36 = v34[2];
      v37 = v31 + 3;
      v38 = v34[3];
      for ( i = 0; i < v33; ++i )
      {
        if ( v36 + *v37 > *v34 )
        {
          v38 = v34[4];
          v36 = 0;
          v34[3] = v38;
          v34[2] = 0;
        }
        if ( v38 + v37[1] > v34[1] )
          break;
        *(v37 - 3) = v36;
        v40 = *v37;
        *(v37 - 2) = v34[3];
        v37[2] = 1;
        v36 = v34[2] + v40;
        v38 = v34[3];
        v34[2] = v36;
        v41 = v38 + v37[1];
        if ( v41 > v34[4] )
          v34[4] = v41;
        ++v35;
        v37 += 6;
      }
    }
    if ( v35 < (__int64)v33 )
    {
      v42 = &v31[6 * v35 + 5];
      v43 = v33 - (__int64)v35;
      do
      {
        *v42 = 0;
        v42 += 6;
        --v43;
      }
      while ( v43 );
    }
    v44 = sub_14017CDD0((__int64)a1, (__int64)v45, a4, a5, (__int64)v31);
    free(v31);
    return (int *)v44;
  }
  return result;
}

//----- (000000014017C8A0) ----------------------------------------------------
__int64            sub_14017C8A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5;
  __int64 result;
  float *v9;
  __int64 v10;
  float v11;
  __int64 v12;
  float v13;
  bool v14;
  int v15;
  __int64 v16;
  _DWORD *v17;
  __int64 v18;
  int v19;
  int v20;
  float v21;
  float v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  __m128 v33;
  __m128d v34;
  __m128 v35;
  __m128d v36;
  __m128 v37;
  __m128d v38;
  __m128 v39;
  __m128d v40;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017C8A0[224];
#define v41 (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 0)) /* [rsp+20h] */
#define v42 (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 8)) /* [rsp+28h] */
#define v43 (*(__int128 (*))(void *)(sr_frame_14017C8A0 + 16)) /* [rsp+30h] */
#define v44 (*(__int128 (*))(void *)(sr_frame_14017C8A0 + 32)) /* [rsp+40h] */
#define v45 (*(__int64 (*))(void *)(sr_frame_14017C8A0 + 48)) /* [rsp+50h] */
#define v46 (*(int (*))(void *)(sr_frame_14017C8A0 + 56)) /* [rsp+58h] */
#define v47 (*(unsigned int (*))(void *)(sr_frame_14017C8A0 + 216)) /* [rsp+F8h] */

  v5 = 0;
  result = 0;
  v47 = 0;
  v41 = a4;
  if ( a4 > 0 )
  {
    v9 = (float *)(a3 + 32);
    v10 = 0;
    while ( 1 )
    {
      v11 = *(v9 - 8);
      if ( v11 <= 0.0 )
      {
        v13 = -(float)(v11
                     / (float)(*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 19LL)
                             + (*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 18LL) << 8)));
      }
      else
      {
        v12 = *(int *)(a2 + 36);
        v13 = v11
            / (float)((__int16)((*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 4) << 8)
                              + *(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 5))
                    - (__int16)(*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 7)
                              + (*(unsigned __int8 *)(v12 + *(_QWORD *)(a2 + 8) + 6) << 8)));
      }
      v14 = *((_DWORD *)v9 - 4) <= 0;
      v15 = 0;
      *(_BYTE *)v9 = *(_BYTE *)(a1 + 32);
      *((_BYTE *)v9 + 1) = *(_BYTE *)(a1 + 36);
      if ( !v14 )
        break;
      result = v47;
LABEL_32:
      v9 += 10;
      if ( !--v41 )
        return result;
    }
    v16 = 0;
    v17 = (_DWORD *)(a5 + 8 * (v10 + 2 * v10 + 2));
    while ( 1 )
    {
      v18 = *((_QWORD *)v9 - 3);
      v19 = v18 ? *(_DWORD *)(v18 + v16) : v15 + *((_DWORD *)v9 - 7);
      v20 = sub_140178410(a2, v19);
      v21 = (float)*(int *)(a1 + 36) * v13;
      v22 = (float)*(int *)(a1 + 32) * v13;
      if ( *(_DWORD *)(a2 + 76) )
        break;
      v27 = sub_14017DA60(a2, v20);
      if ( v27 >= 0 )
      {
        v32 = *(_QWORD *)(a2 + 8);
        v24 = (__int16)(*(unsigned __int8 *)(v32 + v27 + 9) + (*(unsigned __int8 *)(v32 + v27 + 8) << 8));
        v25 = (__int16)(*(unsigned __int8 *)(v32 + v27 + 3) + (*(unsigned __int8 *)(v32 + v27 + 2) << 8));
        v5 = (__int16)(*(unsigned __int8 *)(v32 + v27 + 7) + (*(unsigned __int8 *)(v32 + v27 + 6) << 8));
        v26 = (__int16)(*(unsigned __int8 *)(v32 + v27 + 5) + (*(unsigned __int8 *)(v32 + v27 + 4) << 8));
LABEL_20:
        v33 = _mm_set_ss((float)-v26);
        SR_VEC_LANES(128, v33, f32)[0] = SR_VEC_LANES(128, v33, f32)[0] * v21;
        v34 = _mm_cvtps_pd(v33);
        if ( (double)(int)SR_VEC_LANES(128, v34, f64)[0] != SR_VEC_LANES(128, v34, f64)[0] )
          SR_VEC_LANES(128, v34, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v34, v34)) & 1) + (int)SR_VEC_LANES(128, v34, f64)[0]);
        v35 = _mm_set_ss((float)v25);
        v28 = (int)SR_VEC_LANES(128, v34, f64)[0];
        SR_VEC_LANES(128, v35, f32)[0] = SR_VEC_LANES(128, v35, f32)[0] * v22;
        v36 = _mm_cvtps_pd(v35);
        if ( (double)(int)SR_VEC_LANES(128, v36, f64)[0] != SR_VEC_LANES(128, v36, f64)[0] )
          SR_VEC_LANES(128, v36, f64)[0] = (double)((int)SR_VEC_LANES(128, v36, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v36, v36)) & 1));
        v37 = _mm_set_ss((float)v5);
        v29 = (int)SR_VEC_LANES(128, v36, f64)[0];
        SR_VEC_LANES(128, v37, f32)[0] = SR_VEC_LANES(128, v37, f32)[0] * v22;
        v38 = _mm_cvtps_pd(v37);
        if ( (double)(int)SR_VEC_LANES(128, v38, f64)[0] != SR_VEC_LANES(128, v38, f64)[0] )
          SR_VEC_LANES(128, v38, f64)[0] = (double)(!(_mm_movemask_pd(_mm_unpacklo_pd(v38, v38)) & 1) + (int)SR_VEC_LANES(128, v38, f64)[0]);
        v30 = (int)SR_VEC_LANES(128, v38, f64)[0];
        v39 = _mm_set_ss((float)-v24);
        SR_VEC_LANES(128, v39, f32)[0] = SR_VEC_LANES(128, v39, f32)[0] * v21;
        v40 = _mm_cvtps_pd(v39);
        if ( (double)(int)SR_VEC_LANES(128, v40, f64)[0] != SR_VEC_LANES(128, v40, f64)[0] )
          SR_VEC_LANES(128, v40, f64)[0] = (double)((int)SR_VEC_LANES(128, v40, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v40, v40)) & 1));
        v31 = (int)SR_VEC_LANES(128, v40, f64)[0];
        v5 = 0;
        goto LABEL_29;
      }
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
LABEL_29:
      ++v10;
      ++v15;
      *(v17 - 1) = *(_DWORD *)(a1 + 28) - 1 + v30 + *(_DWORD *)(a1 + 32) - v29;
      result = v47 + 1;
      v16 += 4;
      ++v47;
      *v17 = *(_DWORD *)(a1 + 36) + v28 - v31 + *(_DWORD *)(a1 + 28) - 1;
      v17 += 6;
      if ( v15 >= *((_DWORD *)v9 - 4) )
        goto LABEL_32;
    }
    v42 = 1;
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v23 = sub_140182AD0(a2, v20, (__int64)&v42);
    v24 = 0;
    v25 = 0;
    if ( v23 )
    {
      v24 = HIDWORD(v44);
      v25 = v44;
      v5 = DWORD1(v44);
    }
    v26 = 0;
    if ( v23 )
      v26 = DWORD2(v44);
    goto LABEL_20;
  }
  return result;
}
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

// 14017CB1E: conditional instruction was optimized away because rcx.8<100000000u
// 14017CB66: conditional instruction was optimized away because rcx.8<100000000u
// 14017CBAB: conditional instruction was optimized away because rcx.8<100000000u
// 14017CBF7: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017CCF0) ----------------------------------------------------
__int64            sub_14017CCF0(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v5;
  int v6;
  int v7;
  _DWORD *v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _DWORD *v13;

  result = *(_QWORD *)(a1 + 8);
  v5 = a3;
  v6 = 0;
  if ( a3 > 0 )
  {
    v7 = *(_DWORD *)(result + 8);
    v8 = (_DWORD *)(a2 + 12);
    v9 = *(_DWORD *)(result + 12);
    v10 = 0;
    do
    {
      if ( v7 + *v8 > *(_DWORD *)result )
      {
        v9 = *(_DWORD *)(result + 16);
        v7 = 0;
        *(_DWORD *)(result + 12) = v9;
        *(_DWORD *)(result + 8) = 0;
      }
      if ( v9 + v8[1] > *(_DWORD *)(result + 4) )
        break;
      *(v8 - 3) = v7;
      *(v8 - 2) = *(_DWORD *)(result + 12);
      v8[2] = 1;
      v7 = *v8 + *(_DWORD *)(result + 8);
      v9 = *(_DWORD *)(result + 12);
      *(_DWORD *)(result + 8) = v7;
      v11 = v9 + v8[1];
      if ( v11 > *(_DWORD *)(result + 16) )
        *(_DWORD *)(result + 16) = v11;
      ++v6;
      ++v10;
      v8 += 6;
    }
    while ( v10 < v5 );
  }
  if ( v6 < v5 )
  {
    result = 3LL * v6;
    v12 = v5 - v6;
    v13 = (_DWORD *)(a2 + 20 + 24LL * v6);
    do
    {
      *v13 = 0;
      v13 += 6;
      --v12;
    }
    while ( v12 );
  }
  return result;
}

//----- (000000014017CDD0) ----------------------------------------------------
__int64            sub_14017CDD0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  float v12;
  int v13;
  int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _DWORD *v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  __int64 v33;
  __int16 v34;
  float v35;
  float v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  __m128 v43;
  __m128d v44;
  __m128 v45;
  __m128d v46;
  unsigned int v47;
  unsigned int v48;
  __int16 v49;
  int v50;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017CDD0[352];
#define v52 (*(int (*))(void *)(sr_frame_14017CDD0 + 0)) /* [rsp+50h] */
#define v53 (*(int (*))(void *)(sr_frame_14017CDD0 + 4)) /* [rsp+54h] */
#define v54 (*(int (*))(void *)(sr_frame_14017CDD0 + 8)) /* [rsp+58h] */
#define v55 (*(int (*))(void *)(sr_frame_14017CDD0 + 12)) /* [rsp+5Ch] */
#define v56 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 16)) /* [rsp+60h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 24)) /* [rsp+68h] */
#define v58 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 32)) /* [rsp+70h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 40)) /* [rsp+78h] */
#define v60 (*(__int128 (*))(void *)(sr_frame_14017CDD0 + 48)) /* [rsp+80h] */
#define v61 (*(__int128 (*))(void *)(sr_frame_14017CDD0 + 64)) /* [rsp+90h] */
#define v62 (*(__int64 (*))(void *)(sr_frame_14017CDD0 + 80)) /* [rsp+A0h] */
#define v63 (*(int (*))(void *)(sr_frame_14017CDD0 + 88)) /* [rsp+A8h] */
#define v64 (*(int (*))(void *)(sr_frame_14017CDD0 + 320)) /* [rsp+190h] */
#define v65 (*(int (*))(void *)(sr_frame_14017CDD0 + 344)) /* [rsp+1A8h] */

  v5 = 1;
  v54 = *(_DWORD *)(a1 + 32);
  v55 = *(_DWORD *)(a1 + 36);
  v58 = a4;
  v64 = 1;
  if ( a4 > 0 )
  {
    v8 = 0;
    v9 = a3 + 8;
    v56 = 0;
    while ( 1 )
    {
      v10 = *(float *)(v9 - 8);
      if ( v10 <= 0.0 )
      {
        v12 = -(float)(v10
                     / (float)(*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 19LL)
                             + (*(unsigned __int8 *)(*(int *)(a2 + 28) + *(_QWORD *)(a2 + 8) + 18LL) << 8)));
      }
      else
      {
        v11 = *(int *)(a2 + 36);
        v8 = v56;
        v12 = v10
            / (float)((__int16)(*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 5)
                              + (*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 4) << 8))
                    - (__int16)((*(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 6) << 8)
                              + *(unsigned __int8 *)(v11 + *(_QWORD *)(a2 + 8) + 7)));
      }
      v13 = *(unsigned __int8 *)(v9 + 24);
      *(_DWORD *)(a1 + 32) = v13;
      v14 = *(unsigned __int8 *)(v9 + 25);
      *(_DWORD *)(a1 + 36) = v14;
      v15 = 1.0 / (float)v13;
      v16 = 1.0 / (float)v14;
      v17 = v13 ? (float)(0.5 / (float)v13) * (float)(1 - v13) : 0.0;
      v18 = v14 ? (float)(0.5 / (float)v14) * (float)(1 - v14) : 0.0;
      v19 = 0;
      v52 = 0;
      if ( *(int *)(v9 + 8) > 0 )
        break;
LABEL_41:
      v9 += 40;
      if ( !--v58 )
        goto LABEL_42;
    }
    v5 = 0;
    v20 = 0;
    v57 = 0;
    v21 = 0;
    v22 = (_DWORD *)(a5 + 4 + 24 * v8);
    while ( 1 )
    {
      if ( !v22[4] )
      {
        v64 = 0;
        goto LABEL_40;
      }
      v23 = *(_QWORD *)(v9 + 16);
      v24 = *(_QWORD *)v9 ? *(_DWORD *)(v20 + *(_QWORD *)v9) : v19 + *(_DWORD *)(v9 - 4);
      v25 = sub_140178410(a2, v24);
      v65 = v25;
      v26 = *(_DWORD *)(a1 + 28);
      *(v22 - 1) += v26;
      *v22 += v26;
      v22[2] -= v26;
      v22[3] -= v26;
      v27 = *(int *)(a2 + 36);
      v28 = *(_QWORD *)(a2 + 8);
      v29 = *(unsigned __int8 *)(v27 + v28 + 34);
      v30 = *(unsigned __int8 *)(v27 + v28 + 35);
      if ( v25 >= (int)(v30 + (*(unsigned __int8 *)(v27 + v28 + 34) << 8)) )
      {
        v32 = *(int *)(a2 + 40) + v28;
        v33 = v30 + (v29 << 8);
        v34 = *(unsigned __int8 *)(v32 + 4 * v33 - 4);
        LOWORD(v32) = *(unsigned __int8 *)(v32 + 4 * v33 - 3);
        v25 = v65;
        v31 = (v34 << 8) + v32;
      }
      else
      {
        v31 = *(unsigned __int8 *)(*(int *)(a2 + 40) + v28 + 4 * v25 + 1)
            + (*(unsigned __int8 *)(*(int *)(a2 + 40) + v28 + 4 * v25) << 8);
      }
      v53 = v31;
      v35 = (float)*(int *)(a1 + 36) * v12;
      v36 = (float)*(int *)(a1 + 32) * v12;
      if ( *(_DWORD *)(a2 + 76) )
        break;
      v40 = sub_14017DA60(a2, v25);
      if ( v40 >= 0 )
      {
        v42 = *(_QWORD *)(a2 + 8);
        v38 = (__int16)(*(unsigned __int8 *)(v40 + v42 + 9) + (*(unsigned __int8 *)(v40 + v42 + 8) << 8));
        v39 = (__int16)((*(unsigned __int8 *)(v40 + v42 + 2) << 8) + *(unsigned __int8 *)(v40 + v42 + 3));
LABEL_29:
        v43 = _mm_set_ss((float)-v38);
        SR_VEC_LANES(128, v43, f32)[0] = SR_VEC_LANES(128, v43, f32)[0] * v35;
        v44 = _mm_cvtps_pd(v43);
        if ( (double)(int)SR_VEC_LANES(128, v44, f64)[0] != SR_VEC_LANES(128, v44, f64)[0] )
          SR_VEC_LANES(128, v44, f64)[0] = (double)((int)SR_VEC_LANES(128, v44, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v44, v44)) & 1));
        v45 = _mm_set_ss((float)v39);
        v41 = (int)SR_VEC_LANES(128, v44, f64)[0];
        SR_VEC_LANES(128, v45, f32)[0] = SR_VEC_LANES(128, v45, f32)[0] * v36;
        v46 = _mm_cvtps_pd(v45);
        if ( (double)(int)SR_VEC_LANES(128, v46, f64)[0] != SR_VEC_LANES(128, v46, f64)[0] )
          SR_VEC_LANES(128, v46, f64)[0] = (double)((int)SR_VEC_LANES(128, v46, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v46, v46)) & 1));
        v5 = (int)SR_VEC_LANES(128, v46, f64)[0];
        goto LABEL_34;
      }
      v41 = 0;
LABEL_34:
      sub_14017C040(
        a2,
        *(_QWORD *)(a1 + 40) + (int)*(v22 - 1) + (__int64)(*v22 * *(_DWORD *)(a1 + 24)),
        v22[2] - *(_DWORD *)(a1 + 32) + 1,
        v22[3] - *(_DWORD *)(a1 + 36) + 1,
        *(_DWORD *)(a1 + 24),
        (float)*(int *)(a1 + 32) * v12,
        (float)*(int *)(a1 + 36) * v12,
        0.0,
        0,
        v65);
      v47 = *(_DWORD *)(a1 + 32);
      if ( v47 > 1 )
        sub_140181080(
          (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + (int)*(v22 - 1) + (__int64)(*v22 * *(_DWORD *)(a1 + 24))),
          v22[2],
          v22[3],
          *(_DWORD *)(a1 + 24),
          v47);
      v48 = *(_DWORD *)(a1 + 36);
      if ( v48 > 1 )
        sub_1401843E0(
          *(_QWORD *)(a1 + 40) + (int)*(v22 - 1) + (__int64)(*v22 * *(_DWORD *)(a1 + 24)),
          v22[2],
          v22[3],
          *(_DWORD *)(a1 + 24),
          v48);
      v19 = v52;
      v20 = v57;
      v8 = v56;
      *(_WORD *)(v21 + v23) = *((_WORD *)v22 - 2);
      *(_WORD *)(v21 + v23 + 2) = *(_WORD *)v22;
      *(_WORD *)(v21 + v23 + 4) = *((_WORD *)v22 - 2) + *((_WORD *)v22 + 4);
      v49 = *(_WORD *)v22 + *((_WORD *)v22 + 6);
      *(float *)(v21 + v23 + 16) = (float)v53 * v12;
      *(_WORD *)(v21 + v23 + 6) = v49;
      *(float *)(v21 + v23 + 12) = (float)((float)v41 * v16) + v18;
      *(float *)(v21 + v23 + 8) = (float)((float)v5 * v15) + v17;
      v50 = v5 + v22[2];
      v5 = v64;
      *(float *)(v21 + v23 + 20) = (float)((float)v50 * v15) + v17;
      *(float *)(v21 + v23 + 24) = (float)((float)(v41 + v22[3]) * v16) + v18;
LABEL_40:
      ++v8;
      ++v19;
      v20 += 4;
      v56 = v8;
      v22 += 6;
      v52 = v19;
      v21 += 28;
      v57 = v20;
      if ( v19 >= *(_DWORD *)(v9 + 8) )
        goto LABEL_41;
      v5 = 0;
    }
    v59 = 1;
    v62 = 0;
    v63 = 0;
    v60 = 0;
    v61 = 0;
    v37 = sub_140182AD0(a2, v25, (__int64)&v59);
    v38 = 0;
    v39 = 0;
    if ( v37 )
    {
      v38 = HIDWORD(v61);
      v39 = v61;
    }
    goto LABEL_29;
  }
LABEL_42:
  *(_DWORD *)(a1 + 32) = v54;
  *(_DWORD *)(a1 + 36) = v55;
  return (unsigned int)v5;
}
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65

// 14017D197: conditional instruction was optimized away because rcx.8<100000000u
// 14017D1DC: conditional instruction was optimized away because rcx.8<100000000u

//----- (000000014017D490) ----------------------------------------------------
__int64            sub_14017D490(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result;

  if ( a2 > 8 )
    result = crt_assert(
               (char *)L"h_oversample <= 8",
               (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
               0xEE1u);
  if ( a3 > 8 )
    result = crt_assert(
               (char *)L"v_oversample <= 8",
               (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
               0xEE2u);
  if ( a2 <= 8 )
    *(_DWORD *)(a1 + 32) = a2;
  if ( a3 <= 8 )
    *(_DWORD *)(a1 + 36) = a3;
  return result;
}

//----- (000000014017D510) ----------------------------------------------------
void            sub_14017D510(
        int *a1,
        float a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 v12;
  float v13;
  float v14;
  __int64 v16;
  void *v17;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017D510[80];
#define Block (*(void * (*))(void *)(sr_frame_14017D510 + 0)) /* [rsp+60h] */
#define v19 (*(unsigned int (*))(void *)(sr_frame_14017D510 + 72)) /* [rsp+A8h] */

  v12 = a12;
  v13 = a5;
  v14 = a6;
  v19 = 0;
  Block = nullptr;
  v16 = sub_140178A70(a3, a4, a2 / fminf(a5, a6), &Block, &v19);
  v17 = (void *)v16;
  if ( v16 )
  {
    sub_140181CF0(a1, v16, (int *)Block, v19, v13, v14, a7, a8, a9, a10, a11, v12);
    free(Block);
    free(v17);
  }
}
#undef Block
#undef v19

//----- (000000014017D6B0) ----------------------------------------------------
__int64            sub_14017D6B0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  __int64 result;
  int v5;
  int v8;
  int v9;
  int v10;
  unsigned __int16 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int8 v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;

  result = 0;
  v5 = a4;
  if ( a4 )
  {
    v8 = 3;
    v9 = 1;
    v10 = 2;
    do
    {
      v11 = a3[1] + (*a3 << 8);
      if ( v11 >= 0x80u )
      {
        if ( v11 < 0x800u )
        {
          if ( v9 >= a2 )
            return 0xFFFFFFFFLL;
          v13 = (int)result;
          v14 = result + 1;
          v15 = a3[1];
          if ( *(unsigned __int8 *)(v13 + a1) != (v11 >> 6) + 192 )
            return 0xFFFFFFFFLL;
          v9 += 2;
          v8 += 2;
          v10 += 2;
          goto LABEL_25;
        }
        if ( v11 < 0xD800u )
          goto LABEL_21;
        if ( v11 >= 0xDC00u )
        {
          if ( v11 < 0xE000u )
            return 0xFFFFFFFFLL;
LABEL_21:
          if ( v10 >= a2 )
            return 0xFFFFFFFFLL;
          v24 = (int)result;
          v25 = result + 1;
          v15 = a3[1];
          if ( *(unsigned __int8 *)(v24 + a1) != (v11 >> 12) + 224 )
            return 0xFFFFFFFFLL;
          v26 = v25;
          v14 = v25 + 1;
          if ( *(unsigned __int8 *)(v26 + a1) != ((v11 >> 6) & 0x3F) + 128 )
            return 0xFFFFFFFFLL;
          v9 += 3;
          v8 += 3;
          v10 += 3;
LABEL_25:
          v27 = v14;
          result = (unsigned int)(v14 + 1);
          if ( *(unsigned __int8 *)(v27 + a1) != (v15 & 0x3F) + 128 )
            return 0xFFFFFFFFLL;
          goto LABEL_26;
        }
        if ( v8 >= a2 )
          return 0xFFFFFFFFLL;
        v16 = (int)result;
        v17 = (a3[2] << 8) - 56613888 + (v11 << 10) + a3[3];
        v18 = result + 1;
        if ( *(unsigned __int8 *)(v16 + a1) != (v17 >> 18) + 240 )
          return 0xFFFFFFFFLL;
        v19 = v18;
        v20 = v18 + 1;
        if ( *(unsigned __int8 *)(v19 + a1) != ((v17 >> 12) & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        v21 = v20;
        v22 = v20 + 1;
        if ( *(unsigned __int8 *)(v21 + a1) != ((v17 >> 6) & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        v23 = v22;
        result = (unsigned int)(v22 + 1);
        v9 += 4;
        v8 += 4;
        v10 += 4;
        if ( *(unsigned __int8 *)(v23 + a1) != (v17 & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        a3 += 2;
        v5 -= 2;
      }
      else
      {
        if ( (int)result >= a2 )
          return 0xFFFFFFFFLL;
        v12 = (int)result;
        ++v9;
        result = (unsigned int)(result + 1);
        ++v8;
        ++v10;
        if ( *(unsigned __int8 *)(v12 + a1) != v11 )
          return 0xFFFFFFFFLL;
      }
LABEL_26:
      a3 += 2;
      v5 -= 2;
    }
    while ( v5 );
  }
  return result;
}

//----- (000000014017D900) ----------------------------------------------------
__int64            sub_14017D900(unsigned __int8 *a1, int a2)
{
  int v4;
  int v5;
  int v6;
  unsigned __int8 *v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;

  if ( a1[1] + (*a1 << 8) != 1 )
  {
    if ( a1[1] + (*a1 << 8) == 2 )
    {
      v4 = 0;
      v5 = a1[3] - 1 + (a1[2] << 8);
      if ( v5 >= 0 )
      {
        while ( 1 )
        {
          v6 = (v5 + v4) >> 1;
          v7 = &a1[6 * v6 + 4];
          v8 = v7[1] + (*v7 << 8);
          if ( a2 >= v8 )
          {
            if ( a2 <= v7[3] + (v7[2] << 8) )
              return a2 + v7[5] + (v7[4] << 8) - v8;
            v4 = v6 + 1;
          }
          else
          {
            v5 = v6 - 1;
          }
          if ( v4 > v5 )
            return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x92Fu);
    }
    return 0xFFFFFFFFLL;
  }
  v9 = 0;
  v10 = (a1[2] << 8) + a1[3] - 1;
  if ( v10 < 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v11 = (v10 + v9) >> 1;
    v12 = a1[2 * v11 + 5] + (a1[2 * v11 + 4] << 8);
    if ( a2 >= v12 )
      break;
    v10 = v11 - 1;
LABEL_18:
    if ( v9 > v10 )
      return 0xFFFFFFFFLL;
  }
  if ( a2 > v12 )
  {
    v9 = v11 + 1;
    goto LABEL_18;
  }
  return v11;
}

//----- (000000014017DA60) ----------------------------------------------------
__int64            sub_14017DA60(__int64 a1, int a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  unsigned __int8 *v9;
  unsigned int v10;
  unsigned __int8 *v12;
  unsigned int v13;

  if ( *(_DWORD *)(a1 + 76) )
    crt_assert((char *)L"!info->cff.size", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x614u);
  if ( a2 >= *(_DWORD *)(a1 + 20) )
    return 0xFFFFFFFFLL;
  v4 = *(_DWORD *)(a1 + 56);
  if ( v4 >= 2 )
    return 0xFFFFFFFFLL;
  v5 = *(int *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v12 = (unsigned __int8 *)(v5 + v6 + 4 * a2);
    v13 = *(_DWORD *)(a1 + 32) + ((((v12[1] + (*v12 << 8)) << 8) + v12[2]) << 8) + v12[3];
    if ( v13 == *(_DWORD *)(a1 + 32) + ((((v12[5] + (v12[4] << 8)) << 8) + v12[6]) << 8) + v12[7] )
      return (unsigned int)-1;
    return v13;
  }
  else
  {
    v7 = v6 + 2 * a2;
    v8 = *(_DWORD *)(a1 + 32);
    v9 = (unsigned __int8 *)(v7 + v5);
    v10 = v8 + 2 * (v9[1] + (*v9 << 8));
    if ( v10 == v8 + 2 * (v9[3] + (v9[2] << 8)) )
      return (unsigned int)-1;
    return v10;
  }
}

//----- (000000014017DB90) ----------------------------------------------------
__int64            sub_14017DB90(unsigned __int8 *a1, int a2)
{
  int v5;
  int v6;
  int v7;
  unsigned __int8 *v8;
  int v9;
  int v10;
  int v11;

  if ( a1[1] + (*a1 << 8) != 1 )
  {
    if ( a1[1] + (*a1 << 8) == 2 )
    {
      v5 = 0;
      v6 = (a1[2] << 8) + a1[3] - 1;
      if ( v6 >= 0 )
      {
        while ( 1 )
        {
          v7 = (v6 + v5) >> 1;
          v8 = &a1[6 * v7 + 4];
          if ( a2 >= v8[1] + (*v8 << 8) )
          {
            if ( a2 <= v8[3] + (v8[2] << 8) )
              return v8[5] + (v8[4] << 8);
            v5 = v7 + 1;
          }
          else
          {
            v6 = v7 - 1;
          }
          if ( v5 > v6 )
            return 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x960u);
    }
    return 0xFFFFFFFFLL;
  }
  v9 = a1[2];
  v10 = a1[3];
  v11 = v10 + (v9 << 8);
  if ( a2 < v11 || a2 >= v10 + ((v9 + a1[4]) << 8) + a1[5] )
    return 0xFFFFFFFFLL;
  return (a1[2 * (a2 - v11) + 6] << 8) + (unsigned int)a1[2 * (a2 - v11) + 7];
}

//----- (000000014017DCC0) ----------------------------------------------------
int            sub_14017DCC0(__int64 a1, int a2, int a3)
{
  __int64 v3;
  int v5;
  unsigned __int8 *v6;
  unsigned __int8 *v7;
  signed __int64 v8;
  unsigned __int8 *v9;
  unsigned __int8 *v10;
  __int64 v11;
  unsigned __int8 *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int16 v19;
  __int16 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  unsigned __int8 *v26;
  unsigned __int64 v27;
  int v28;
  unsigned __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned __int8 *v34;
  int v35;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017DCC0[144];
#define v37 (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 0)) /* [rsp+20h] */
#define i (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 8)) /* [rsp+28h] */
#define v39 (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 16)) /* [rsp+30h] */
#define v40 (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 24)) /* [rsp+38h] */
#define v41 (*(signed __int64 (*))(void *)(sr_frame_14017DCC0 + 32)) /* [rsp+40h] */
#define v42 (*(unsigned __int8 * (*))(void *)(sr_frame_14017DCC0 + 40)) /* [rsp+48h] */
#define v43 (*(unsigned __int8 (*))(void *)(sr_frame_14017DCC0 + 112)) /* [rsp+90h] */
#define v45 (*(int (*))(void *)(sr_frame_14017DCC0 + 136)) /* [rsp+A8h] */

  v3 = *(int *)(a1 + 48);
  v5 = a2;
  if ( (_DWORD)v3 )
  {
    v6 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v3);
    if ( v6[1] + (*v6 << 8) == 1 && !(v6[3] + (v6[2] << 8)) )
    {
      v7 = &v6[256 * (unsigned __int64)v6[8] + v6[9]];
      v42 = v7;
      v41 = ((unsigned __int64)*v7 << 8) + v7[1];
      if ( v41 )
      {
        v8 = 0;
        v9 = v7 + 2;
        v37 = 0;
        for ( i = v7 + 2; ; i += 2 )
        {
          v10 = &v7[256 * (unsigned __int64)*v9 + v9[1]];
          v40 = v10;
          if ( v10[1] + (*v10 << 8) == 2 )
          {
            v11 = 0;
            v39 = ((unsigned __int64)v10[4] << 8) + v10[5];
            if ( v39 )
              break;
          }
LABEL_25:
          ++v8;
          v9 = i + 2;
          v37 = v8;
          if ( v8 >= v41 )
            return 0;
          v7 = v42;
        }
        while ( 1 )
        {
          v12 = &v10[256 * (unsigned __int64)v10[2 * v11 + 6] + v10[2 * v11 + 7]];
          v13 = *v12;
          v14 = v12[1];
          v15 = sub_14017D900(&v12[256 * (unsigned __int64)v12[2] + v12[3]], v5);
          v16 = v15;
          if ( v15 != -1 )
          {
            if ( v14 + (v13 << 8) == 1 )
            {
              v25 = 2 * v15;
              v26 = &v12[v12[v25 + 11]];
              v27 = (unsigned __int64)v12[v25 + 10] << 8;
              v28 = v26[v27];
              v29 = (unsigned __int64)&v26[v27 + 2];
              v30 = v26[v27 + 1];
              if ( v12[5] + (v12[4] << 8) != 4 || v12[7] + (v12[6] << 8) )
                return 0;
              if ( v16 >= v12[9] + (v12[8] << 8) )
                crt_assert(
                  (char *)L"coverageIndex < pairSetCount",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9A1u);
              v31 = 0;
              v32 = (v28 << 8) + v30 - 1;
              if ( v32 >= 0 )
              {
                do
                {
                  v33 = (v31 + v32) >> 1;
                  v34 = (unsigned __int8 *)(v29 + 4 * v33);
                  v35 = (*v34 << 8) + v34[1];
                  if ( a3 >= v35 )
                  {
                    if ( a3 <= v35 )
                      return (__int16)((v34[2] << 8) + v34[3]);
                    v31 = v33 + 1;
                  }
                  else
                  {
                    v32 = v33 - 1;
                  }
                }
                while ( v31 <= v32 );
              }
LABEL_22:
              v5 = a2;
              goto LABEL_23;
            }
            if ( v14 + (v13 << 8) == 2 )
            {
              v17 = v12[10];
              v18 = v12[11];
              v19 = v12[5] + (v12[4] << 8);
              v20 = v12[7] + (v12[6] << 8);
              v21 = sub_14017DB90(&v12[256 * (unsigned __int64)v12[8] + v12[9]], v5);
              v22 = sub_14017DB90(&v12[256 * (unsigned __int64)v17 + v18], a3);
              v23 = v12[14];
              v43 = v12[15];
              v45 = v12[13] + (v12[12] << 8);
              if ( v21 >= v45 )
                crt_assert(
                  (char *)L"glyph1class < class1Count",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9C5u);
              v24 = v43 + (v23 << 8);
              if ( v22 >= v24 )
                crt_assert(
                  (char *)L"glyph2class < class2Count",
                  (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  0x9C6u);
              if ( v19 != 4 || v20 )
                return 0;
              if ( v21 >= 0 && v21 < v45 && v22 >= 0 && v22 < v24 )
                return (__int16)(v12[2 * v21 * v24 + 17 + 2 * v22] + (v12[2 * v21 * v24 + 16 + 2 * v22] << 8));
              goto LABEL_22;
            }
            crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x9D8u);
          }
LABEL_23:
          v10 = v40;
          if ( ++v11 >= v39 )
          {
            v8 = v37;
            goto LABEL_25;
          }
        }
      }
    }
  }
  return 0;
}
#undef v37
#undef i
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v45

//----- (000000014017E0F0) ----------------------------------------------------
__int64            sub_14017E0F0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E0F0[64];
#define v15 (*(__int64 (*))(void *)(sr_frame_14017E0F0 + 8)) /* [rsp+20h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_14017E0F0 + 16)) /* [rsp+28h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_14017E0F0 + 32)) /* [rsp+38h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_14017E0F0 + 48)) /* [rsp+48h] */
#define v19 (*(unsigned int (*))(void *)(sr_frame_14017E0F0 + 56)) /* [rsp+50h] */

  v15 = 1;
  v7 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v9 = sub_140182AD0(a1, a2, (__int64)&v15);
  if ( a3 )
  {
    v10 = 0;
    if ( v9 )
      v10 = v17;
    *a3 = v10;
  }
  if ( a4 )
  {
    v11 = 0;
    if ( v9 )
      v11 = DWORD2(v17);
    *a4 = v11;
  }
  if ( a5 )
  {
    v12 = 0;
    if ( v9 )
      v12 = DWORD1(v17);
    *a5 = v12;
  }
  if ( a6 )
  {
    v13 = 0;
    if ( v9 )
      v13 = HIDWORD(v17);
    *a6 = v13;
  }
  if ( v9 )
    return v19;
  return v7;
}
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19

//----- (000000014017E1A0) ----------------------------------------------------
int            sub_14017E1A0(__int64 a1, int a2, int a3)
{
  unsigned __int8 *v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned int v9;

  v3 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 44));
  if ( !*(_DWORD *)(a1 + 44) )
    return 0;
  if ( !(v3[3] + (v3[2] << 8)) )
    return 0;
  if ( v3[9] + (v3[8] << 8) != 1 )
    return 0;
  v4 = 0;
  v5 = a3 | (a2 << 16);
  v6 = (v3[10] << 8) + v3[11] - 1;
  if ( v6 < 0 )
    return 0;
  while ( 1 )
  {
    v7 = (v6 + v4) >> 1;
    v8 = 6 * v7;
    v9 = v3[v8 + 21] + (v3[v8 + 18] << 24) + (v3[v8 + 20] << 8) + (v3[v8 + 19] << 16);
    if ( v5 >= v9 )
      break;
    v6 = v7 - 1;
LABEL_9:
    if ( v4 > v6 )
      return 0;
  }
  if ( v5 > v9 )
  {
    v4 = v7 + 1;
    goto LABEL_9;
  }
  return (__int16)((v3[v8 + 22] << 8) + v3[v8 + 23]);
}

//----- (000000014017E2A0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14017E2A0(__int64 a1, int a2, __int64 *a3)
{
  __int64 v6;
  unsigned int v7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E2A0[112];
#define v9 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 0)) /* [rsp+20h] */
#define v10 (*(sr_frame_i128 (*))(void *)(sr_frame_14017E2A0 + 8)) /* [rsp+28h] */
#define v11 (*(sr_frame_i128 (*))(void *)(sr_frame_14017E2A0 + 24)) /* [rsp+38h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 40)) /* [rsp+48h] */
#define v13 (*(int (*))(void *)(sr_frame_14017E2A0 + 48)) /* [rsp+50h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 56)) /* [rsp+58h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_14017E2A0 + 64)) /* [rsp+60h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_14017E2A0 + 80)) /* [rsp+70h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_14017E2A0 + 96)) /* [rsp+80h] */
#define v18 (*(unsigned int (*))(void *)(sr_frame_14017E2A0 + 104)) /* [rsp+88h] */

  v9 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v10 = 0;
  v11 = 0;
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)sub_140182AD0(a1, a2, (__int64)&v9)
    && (v6 = sr_path_malloc(14LL * v13), *a3 = v6, v17 = v6, (unsigned int)sub_140182AD0(a1, a2, (__int64)&v14)) )
  {
    v7 = v18;
    if ( v18 != v13 )
      crt_assert(
        (char *)L"output_ctx.num_vertices == count_ctx.num_vertices",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x8B6u);
    return v7;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18

//----- (000000014017E380) ----------------------------------------------------
__int64            sub_14017E380(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3;
  int v4;
  __m128i *v7;
  int v8;
  int v9;
  __int16 v10;
  char v11;
  BOOL v12;
  int v13;
  __int64 v14;
  int v15;
  char *v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8 v19;
  __int64 v20;
  _BYTE *v21;
  __int64 v22;
  int v23;
  __int64 v24;
  char v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  char v30;
  int v31;
  __int64 v32;
  __int16 *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int16 v48;
  __int16 v49;
  int v50;
  int v51;
  __int64 result;
  char *v53;
  char v54;
  float v55;
  int v56;
  float v57;
  int v58;
  __m128i v59;
  int v60;
  float v61;
  float v62;
  int v63;
  float v64;
  float v65;
  __m128i v66;
  int v67;
  __m128i v68;
  int v69;
  int v70;
  float v71;
  float v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  char *v78;
  float v79;
  float v80;
  float v81;
  float v82;
  char *v83;
  float v84;
  float v85;
  float v86;
  float v87;
  char *v88;
  float v89;
  float v90;
  float v91;
  float v92;
  char *v93;
  float v94;
  float v95;
  float v96;
  float v97;
  __int64 v98;
  __int64 v99;
  char *v100;
  float v101;
  float v102;
  float v103;
  float v104;
  int v105;
  __m128i *v106;
  __m128i *v107;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017E380[304];
#define v108 (*(__int16 (*))(void *)(sr_frame_14017E380 + 0)) /* [rsp+50h] */
#define v109 (*(int (*))(void *)(sr_frame_14017E380 + 4)) /* [rsp+54h] */
#define v110 (*(int (*))(void *)(sr_frame_14017E380 + 8)) /* [rsp+58h] */
#define v111 (*(int (*))(void *)(sr_frame_14017E380 + 12)) /* [rsp+5Ch] */
#define v112 (*(int (*))(void *)(sr_frame_14017E380 + 16)) /* [rsp+60h] */
#define v113 (*(int (*))(void *)(sr_frame_14017E380 + 20)) /* [rsp+64h] */
#define v114 (*(unsigned __int8 * (*))(void *)(sr_frame_14017E380 + 24)) /* [rsp+68h] */
#define v115 (*(__int64 (*))(void *)(sr_frame_14017E380 + 32)) /* [rsp+70h] */
#define Block (*(void * (*))(void *)(sr_frame_14017E380 + 272)) /* [rsp+160h] */
#define v117 (*(__int64 * (*))(void *)(sr_frame_14017E380 + 288)) /* [rsp+170h] */
#define v118 (*(__int16 (*))(void *)(sr_frame_14017E380 + 296)) /* [rsp+178h] */

  v117 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v7 = nullptr;
  v8 = 0;
  v9 = sub_14017DA60(a1, a2);
  *a3 = 0;
  if ( v9 < 0 )
    return 0;
  v10 = *(unsigned __int8 *)(v9 + v3 + 1) + (*(unsigned __int8 *)(v9 + v3) << 8);
  if ( v10 > 0 )
  {
    v11 = 0;
    v114 = (unsigned __int8 *)(v9 + v3 + 10);
    v12 = 0;
    v13 = 2 * v10;
    v14 = v13;
    v15 = v114[v13 - 1] + (v114[v13 - 2] << 8);
    v16 = (char *)(v13
                 + v9
                 + ((unsigned __int64)*(unsigned __int8 *)(v9 + (__int64)v13 + v3 + 10) << 8)
                 + *(unsigned __int8 *)(v9 + (__int64)v13 + v3 + 11)
                 + v3
                 + 12);
    v17 = sr_path_malloc(14LL * (v15 + v13 + 1));
    v18 = v17;
    if ( !v17 )
      return 0;
    v111 = 0;
    v19 = 0;
    v115 = (unsigned int)(v15 + 1);
    if ( v15 == -1 )
    {
      v34 = 0;
      v50 = 0;
      v51 = 0;
      v35 = 0;
      v36 = 0;
      LOWORD(v37) = 0;
      LOWORD(v38) = 0;
    }
    else
    {
      v20 = (unsigned int)(v15 + 1);
      v21 = (_BYTE *)(14 * v14 + v17 + 12);
      do
      {
        if ( v19 )
        {
          --v19;
        }
        else
        {
          v11 = *v16;
          if ( (*v16 & 8) != 0 )
            v19 = v16[1];
          v16 += ((v11 & 8) != 0) + 1;
        }
        *v21 = v11;
        v21 += 14;
        --v20;
      }
      while ( v20 );
      v22 = (unsigned int)(v15 + 1);
      v23 = 0;
      v24 = v17 + 14 * v14;
      do
      {
        v25 = *(_BYTE *)(v24 + 12) & 0x10;
        if ( (*(_BYTE *)(v24 + 12) & 2) != 0 )
        {
          v26 = (unsigned __int8)*v16++;
          if ( !v25 )
            v26 = -v26;
          v23 += v26;
        }
        else if ( !v25 )
        {
          v23 += (__int16)(((unsigned __int8)*v16 << 8) + (unsigned __int8)v16[1]);
          v16 += 2;
        }
        *(_WORD *)v24 = v23;
        v24 += 14;
        --v22;
      }
      while ( v22 );
      v27 = (unsigned int)(v15 + 1);
      v28 = 14 * v14 + v17 + 2;
      v29 = 0;
      do
      {
        v30 = *(_BYTE *)(v28 + 10) & 0x20;
        if ( (*(_BYTE *)(v28 + 10) & 4) != 0 )
        {
          v31 = (unsigned __int8)*v16++;
          if ( !v30 )
            v31 = -v31;
          v29 += v31;
        }
        else if ( !v30 )
        {
          v29 += (__int16)(((unsigned __int8)*v16 << 8) + (unsigned __int8)v16[1]);
          v16 += 2;
        }
        *(_WORD *)v28 = v29;
        v28 += 14;
        --v27;
      }
      while ( v27 );
      v32 = 0;
      v109 = 0;
      v33 = (__int16 *)(v17 + 14 * v14);
      v110 = 0;
      v34 = 0;
      v112 = 0;
      v35 = 0;
      v113 = 0;
      v36 = 0;
      LOWORD(v37) = 0;
      LOWORD(v38) = 0;
      v39 = 0;
      do
      {
        v40 = *v33;
        v41 = *((_BYTE *)v33 + 12);
        v118 = *v33;
        v42 = v33[1];
        v108 = v33[1];
        LOBYTE(Block) = v41;
        if ( v111 == v39 )
        {
          if ( v32 )
          {
            v43 = sub_14017FA30(v18, v34, v4, v12, v38, v37, v110, v109, v36, v35);
            v36 = v112;
            v34 = v43;
            v41 = (char)Block;
            v39 = v113;
          }
          v12 = (v41 & 1) == 0;
          if ( (v41 & 1) != 0 )
          {
            LOWORD(v38) = v40;
            LOWORD(v37) = v42;
          }
          else
          {
            v38 = v33[7];
            v37 = v33[8];
            v110 = v40;
            v109 = v42;
            if ( (v33[13] & 1) != 0 )
            {
              ++v39;
              ++v32;
              v33 += 7;
            }
            else
            {
              v38 = (v40 + v38) >> 1;
              v37 = (v42 + v37) >> 1;
            }
          }
          v44 = v34++;
          v45 = 14 * v44;
          v4 = 0;
          *(_DWORD *)(v45 + v18 + 4) = 0;
          *(_BYTE *)(v45 + v18 + 12) = 1;
          *(_WORD *)(v45 + v18) = v38;
          *(_WORD *)(v45 + v18 + 2) = v37;
          v111 = (*v114 << 8) + v114[1] + 1;
          v114 += 2;
        }
        else if ( (v41 & 1) != 0 )
        {
          v47 = 14LL * v34++;
          if ( v4 )
          {
            v48 = v35;
            v49 = v36;
          }
          else
          {
            v48 = 0;
            v49 = 0;
          }
          *(_BYTE *)(v47 + v18 + 12) = (v4 != 0) + 2;
          *(_WORD *)(v47 + v18) = v118;
          *(_WORD *)(v47 + v18 + 2) = v108;
          *(_WORD *)(v47 + v18 + 4) = v49;
          v4 = 0;
          *(_WORD *)(v47 + v18 + 6) = v48;
        }
        else
        {
          if ( v4 )
          {
            v46 = 14LL * v34;
            *(_WORD *)(v46 + v18) = (v36 + v40) >> 1;
            *(_WORD *)(v46 + v18 + 2) = (v42 + v35) >> 1;
            ++v34;
            *(_BYTE *)(v46 + v18 + 12) = 3;
            *(_WORD *)(v46 + v18 + 4) = v36;
            *(_WORD *)(v46 + v18 + 6) = v35;
          }
          v36 = v40;
          v112 = v40;
          v35 = v42;
          v4 = 1;
        }
        ++v39;
        ++v32;
        v33 += 7;
        v113 = v39;
      }
      while ( v32 < v115 );
      v50 = v109;
      v51 = v110;
    }
    LODWORD(result) = sub_14017FA30(v18, v34, v4, v12, v38, v37, v51, v50, v36, v35);
    *v117 = v18;
    return (unsigned int)result;
  }
  if ( v10 != -1 )
  {
    if ( v10 < 0 )
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x730u);
LABEL_90:
    *v117 = (__int64)v7;
    return (unsigned int)v8;
  }
  v53 = (char *)(v9 + v3 + 10);
  while ( 1 )
  {
    v54 = v53[1];
    v55 = 0.0;
    v56 = (unsigned __int8)v53[2];
    v57 = 0.0;
    v58 = (unsigned __int8)v53[3];
    v53 += 4;
    Block = nullptr;
    if ( (v54 & 2) != 0 )
    {
      if ( (v54 & 1) != 0 )
      {
        v59 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]));
        v60 = (__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]);
        v53 += 4;
      }
      else
      {
        v59 = _mm_cvtsi32_si128(*v53);
        v60 = v53[1];
        v53 += 2;
      }
      v55 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v59), f32)[0];
      v57 = (float)v60;
    }
    else
    {
      crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x6FBu);
    }
    if ( (v54 & 8) != 0 )
    {
      v61 = 0.0;
      v62 = 0.0;
      v63 = (__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]);
      v53 += 2;
      v64 = (float)v63 * 0.000061035156;
      v65 = v64;
    }
    else if ( (v54 & 0x40) != 0 )
    {
      v61 = 0.0;
      v62 = 0.0;
      v66 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]));
      v67 = (__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]);
      v53 += 4;
      v65 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v66), f32)[0] * 0.000061035156;
      v64 = (float)v67 * 0.000061035156;
    }
    else if ( v54 >= 0 )
    {
      v64 = 1.0;
      v61 = 0.0;
      v62 = 0.0;
      v65 = 1.0;
    }
    else
    {
      v65 = (float)(__int16)(((unsigned __int8)*v53 << 8) + (unsigned __int8)v53[1]) * 0.000061035156;
      v68 = _mm_cvtsi32_si128((__int16)(((unsigned __int8)v53[4] << 8) + (unsigned __int8)v53[5]));
      v62 = (float)(__int16)(((unsigned __int8)v53[2] << 8) + (unsigned __int8)v53[3]) * 0.000061035156;
      v69 = (__int16)(((unsigned __int8)v53[6] << 8) + (unsigned __int8)v53[7]);
      v53 += 8;
      v61 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v68), f32)[0] * 0.000061035156;
      v64 = (float)v69 * 0.000061035156;
    }
    v70 = v58 + (v56 << 8);
    v71 = fsqrt((float)(v62 * v62) + (float)(v65 * v65));
    v72 = fsqrt((float)(v64 * v64) + (float)(v61 * v61));
    v73 = *(_DWORD *)(a1 + 76) ? sub_14017E2A0(a1, v70, (__int64 *)&Block) : sub_14017E380(a1, v70, (__int64 *)&Block);
    if ( v73 > 0 )
      break;
LABEL_81:
    if ( (v54 & 0x20) == 0 )
      goto LABEL_90;
  }
  v74 = v73;
  v75 = 0;
  if ( v73 < 4LL )
    goto LABEL_73;
  v76 = 0;
  v77 = ((unsigned __int64)(v73 - 4LL) >> 2) + 1;
  v75 = 4 * v77;
  do
  {
    v78 = (char *)Block;
    v79 = (float)*(__int16 *)((char *)Block + v76 + 2);
    v80 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v76) * v62) + (float)(v79 * v64)) + v57) * v72;
    *(_WORD *)((char *)Block + v76) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block + v76) * v65)
                                                                 + (float)(v79 * v61))
                                                         + v55)
                                                 * v71);
    *(_WORD *)&v78[v76 + 2] = (int)v80;
    v81 = (float)*(__int16 *)&v78[v76 + 6];
    v82 = (float)((float)((float)((float)*(__int16 *)&v78[v76 + 4] * v62) + (float)(v81 * v64)) + v57) * v72;
    *(_WORD *)&v78[v76 + 4] = (int)(float)((float)((float)((float)((float)*(__int16 *)&v78[v76 + 4] * v65)
                                                         + (float)(v81 * v61))
                                                 + v55)
                                         * v71);
    *(_WORD *)&v78[v76 + 6] = (int)v82;
    v83 = (char *)Block;
    v84 = (float)*(__int16 *)((char *)Block + v76 + 16);
    v85 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v76 + 14) * v62) + (float)(v84 * v64)) + v57)
        * v72;
    *(_WORD *)((char *)Block + v76 + 14) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block
                                                                                                  + v76
                                                                                                  + 14)
                                                                              * v65)
                                                                      + (float)(v84 * v61))
                                                              + v55)
                                                      * v71);
    *(_WORD *)&v83[v76 + 16] = (int)v85;
    v86 = (float)*(__int16 *)&v83[v76 + 18] * v62;
    v87 = (float)*(__int16 *)&v83[v76 + 20] * v64;
    *(_WORD *)&v83[v76 + 18] = (int)(float)((float)((float)((float)((float)*(__int16 *)&v83[v76 + 18] * v65)
                                                          + (float)((float)*(__int16 *)&v83[v76 + 20] * v61))
                                                  + v55)
                                          * v71);
    *(_WORD *)&v83[v76 + 20] = (int)(float)((float)((float)(v86 + v87) + v57) * v72);
    v88 = (char *)Block;
    v89 = (float)*(__int16 *)((char *)Block + v76 + 30);
    v90 = (float)*(__int16 *)((char *)Block + v76 + 28);
    *(_WORD *)((char *)Block + v76 + 28) = (int)(float)((float)((float)((float)(v90 * v65) + (float)(v89 * v61)) + v55)
                                                      * v71);
    *(_WORD *)&v88[v76 + 30] = (int)(float)((float)((float)((float)(v90 * v62) + (float)(v89 * v64)) + v57) * v72);
    v91 = (float)*(__int16 *)&v88[v76 + 34];
    v92 = (float)*(__int16 *)&v88[v76 + 32];
    *(_WORD *)&v88[v76 + 32] = (int)(float)((float)((float)((float)(v92 * v65) + (float)(v91 * v61)) + v55) * v71);
    *(_WORD *)&v88[v76 + 34] = (int)(float)((float)((float)((float)(v92 * v62) + (float)(v91 * v64)) + v57) * v72);
    v93 = (char *)Block;
    v94 = (float)*(__int16 *)((char *)Block + v76 + 44);
    v95 = (float)((float)((float)((float)*(__int16 *)((char *)Block + v76 + 42) * v62) + (float)(v94 * v64)) + v57)
        * v72;
    *(_WORD *)((char *)Block + v76 + 42) = (int)(float)((float)((float)((float)((float)*(__int16 *)((char *)Block
                                                                                                  + v76
                                                                                                  + 42)
                                                                              * v65)
                                                                      + (float)(v94 * v61))
                                                              + v55)
                                                      * v71);
    *(_WORD *)&v93[v76 + 44] = (int)v95;
    v96 = (float)*(__int16 *)&v93[v76 + 48];
    v97 = (float)*(__int16 *)&v93[v76 + 46];
    *(_WORD *)&v93[v76 + 46] = (int)(float)((float)((float)((float)(v97 * v65) + (float)(v96 * v61)) + v55) * v71);
    *(_WORD *)&v93[v76 + 48] = (int)(float)((float)((float)((float)(v97 * v62) + (float)(v96 * v64)) + v57) * v72);
    v76 += 56;
    --v77;
  }
  while ( v77 );
  if ( v75 < v73 )
  {
LABEL_73:
    v98 = 14 * v75;
    v99 = v73 - v75;
    do
    {
      v100 = (char *)Block;
      v101 = (float)*(__int16 *)((char *)Block + v98 + 2);
      v102 = (float)*(__int16 *)((char *)Block + v98);
      *(_WORD *)((char *)Block + v98) = (int)(float)((float)((float)((float)(v102 * v65) + (float)(v101 * v61)) + v55)
                                                   * v71);
      *(_WORD *)&v100[v98 + 2] = (int)(float)((float)((float)((float)(v102 * v62) + (float)(v101 * v64)) + v57) * v72);
      v103 = (float)*(__int16 *)&v100[v98 + 6];
      v104 = (float)*(__int16 *)&v100[v98 + 4];
      *(_WORD *)&v100[v98 + 4] = (int)(float)((float)((float)((float)(v104 * v65) + (float)(v103 * v61)) + v55) * v71);
      *(_WORD *)&v100[v98 + 6] = (int)(float)((float)((float)((float)(v104 * v62) + (float)(v103 * v64)) + v57) * v72);
      v98 += 14;
      --v99;
    }
    while ( v99 );
  }
  v105 = v73 + v8;
  v106 = (__m128i *)sr_path_malloc(14LL * (v73 + v8));
  v107 = v106;
  if ( v106 )
  {
    if ( v8 > 0 )
      crt_memcpy(v106, v7, 14LL * v8);
    crt_memcpy((__m128i *)((char *)v107 + 14 * v8), (     __m128i *)Block, 14 * v74);
    if ( v7 )
      free(v7);
    v7 = v107;
    free(Block);
    v8 = v105;
    goto LABEL_81;
  }
  if ( v7 )
    free(v7);
  if ( Block )
    free(Block);
  return 0;
}
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef Block
#undef v117
#undef v118

// 14017EDF9: conditional instruction was optimized away because eax.4>=1

//----- (000000014017F020) ----------------------------------------------------
__int64            sub_14017F020(__int64 a1, unsigned int a2)
{
  __int64 v2;
  unsigned int v3;
  int v5;
  __int64 v6;
  int v7;
  unsigned __int8 v8;
  __int64 v9;

  v2 = a2;
  v3 = 0;
  if ( a2 - 1 <= 3
    || (crt_assert((char *)L"n >= 1 && n <= 4", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x469u),
        (int)v2 > 0) )
  {
    v5 = *(_DWORD *)(a1 + 12);
    v6 = v2;
    v7 = *(_DWORD *)(a1 + 8);
    do
    {
      if ( v7 < v5 )
      {
        v9 = v7++;
        v8 = *(_BYTE *)(v9 + *(_QWORD *)a1);
        *(_DWORD *)(a1 + 8) = v7;
      }
      else
      {
        v8 = 0;
      }
      v3 = v8 | (v3 << 8);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}

//----- (000000014017F0C0) ----------------------------------------------------
char            sub_14017F0C0(__int64 a1)
{
  __int64 v2;

  v2 = *(int *)(a1 + 8);
  if ( (int)v2 < *(_DWORD *)(a1 + 12) )
    return *(_BYTE *)(v2 + *(_QWORD *)a1);
  else
    return 0;
}

//----- (000000014017F0E0) ----------------------------------------------------
__int64            sub_14017F0E0(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4;

  *(_OWORD *)a1 = 0u;
  if ( a3 >= 0 && a4 >= 0 )
  {
    v4 = *(_DWORD *)(a2 + 12);
    if ( a3 <= v4 && a4 <= v4 - a3 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a2 + a3;
      *(_DWORD *)(a1 + 12) = a4;
    }
  }
  return a1;
}

//----- (000000014017F130) ----------------------------------------------------
__int64            sub_14017F130(__int64 a1, int a2)
{
  __int64 result;

  result = *(unsigned int *)(a1 + 12);
  if ( (a2 > (int)result || a2 < 0)
    && ((crt_assert(
           (char *)L"!(o > b->size || o < 0)",
           (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
           0x45Cu),
         result = *(unsigned int *)(a1 + 12),
         a2 > (int)result)
     || a2 < 0) )
  {
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a2;
  }
  return result;
}

//----- (000000014017F190) ----------------------------------------------------
__int64            sub_14017F190(__int64 a1, int a2)
{
  __int64 result;
  int v4;

  result = *(unsigned int *)(a1 + 12);
  v4 = a2 + *(_DWORD *)(a1 + 8);
  if ( (v4 > (int)result || v4 < 0)
    && ((crt_assert(
           (char *)L"!(o > b->size || o < 0)",
           (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
           0x45Cu),
         result = *(unsigned int *)(a1 + 12),
         v4 > (int)result)
     || v4 < 0) )
  {
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v4;
  }
  return result;
}

//----- (000000014017F1F0) ----------------------------------------------------
_OWORD *           sub_14017F1F0(_OWORD *a1, __int64 a2)
{
  __int64 v2;
  int v4;
  int v6;
  int v7;
  unsigned __int8 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int8 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  __int128 v19;

  v2 = *(int *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  if ( (int)v2 < v4 )
  {
    v9 = *(_QWORD *)a2;
    v7 = v2 + 1;
    v6 = *(unsigned __int8 *)(v2 + *(_QWORD *)a2);
    *(_DWORD *)(a2 + 8) = v2 + 1;
    if ( (int)v2 + 1 < v4 )
    {
      v10 = v7;
      v7 = v2 + 2;
      v8 = *(_BYTE *)(v10 + v9);
      *(_DWORD *)(a2 + 8) = v2 + 2;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v6 = 0;
    v7 = *(_DWORD *)(a2 + 8);
    v8 = 0;
  }
  v11 = v8 | (v6 << 8);
  if ( v11 )
  {
    if ( v7 < v4 )
    {
      v13 = v7++;
      v12 = *(_BYTE *)(v13 + *(_QWORD *)a2);
      *(_DWORD *)(a2 + 8) = v7;
    }
    else
    {
      v12 = 0;
    }
    v14 = v12;
    if ( !v12 || v12 > 4u )
    {
      crt_assert(
        (char *)L"offsize >= 1 && offsize <= 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x48Cu);
      v4 = *(_DWORD *)(a2 + 12);
      v7 = *(_DWORD *)(a2 + 8);
    }
    v15 = v7 + v14 * v11;
    if ( v15 > v4 || v15 < 0 )
    {
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      if ( v15 > *(_DWORD *)(a2 + 12) || v15 < 0 )
        v15 = *(_DWORD *)(a2 + 12);
    }
    *(_DWORD *)(a2 + 8) = v15;
    v16 = sub_14017F020(a2, v14);
    v4 = *(_DWORD *)(a2 + 12);
    v7 = *(_DWORD *)(a2 + 8) + v16 - 1;
    if ( v7 > v4 || v7 < 0 )
    {
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      v4 = *(_DWORD *)(a2 + 12);
      if ( v7 > v4 || v7 < 0 )
        v7 = *(_DWORD *)(a2 + 12);
    }
    *(_DWORD *)(a2 + 8) = v7;
  }
  v17 = v7 - v2;
  v19 = 0u;
  if ( (int)v2 >= 0 && v17 >= 0 && (int)v2 <= v4 && v17 <= v4 - (int)v2 )
  {
    HIDWORD(v19) = v17;
    *(_QWORD *)&v19 = *(_QWORD *)a2 + v2;
  }
  *a1 = v19;
  return a1;
}

//----- (000000014017F380) ----------------------------------------------------
__int64            sub_14017F380(__int64 a1)
{
  int v1;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  unsigned __int8 v8;

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 < 0 )
  {
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    v1 = *(_DWORD *)(a1 + 12);
  }
  v3 = 0;
  v4 = 0;
  if ( v1 < 0 )
    v4 = v1;
  *(_DWORD *)(a1 + 8) = v4;
  if ( v4 >= v1 )
    return (unsigned int)(v3 << 8);
  v5 = v4;
  v6 = v4 + 1;
  v3 = *(unsigned __int8 *)(v5 + *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = v6;
  if ( v6 >= v1 )
    return (unsigned int)(v3 << 8);
  v8 = *(_BYTE *)(v6 + *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = v6 + 1;
  return v8 | (unsigned int)(v3 << 8);
}

//----- (000000014017F410) ----------------------------------------------------
_OWORD *           sub_14017F410(_OWORD *a1, __int64 a2, int a3)
{
  __int64 v3;
  int v7;
  __int64 v8;
  int v9;
  unsigned __int8 v10;
  __int64 v11;
  int v12;
  unsigned __int8 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __int128 v22;

  v3 = *(int *)(a2 + 12);
  if ( (int)v3 < 0 )
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  v7 = 0;
  if ( (int)v3 < 0 )
    v7 = v3;
  v8 = v7;
  if ( v7 < v3 )
  {
    v11 = ++v7;
    v9 = *(unsigned __int8 *)(v8 + *(_QWORD *)a2);
    if ( v8 + 1 < v3 )
    {
      v10 = *(_BYTE *)(v11 + *(_QWORD *)a2);
      ++v7;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v12 = v10 | (v9 << 8);
  if ( v7 < (int)v3 )
  {
    v14 = v7++;
    v13 = *(_BYTE *)(v14 + *(_QWORD *)a2);
  }
  else
  {
    v13 = 0;
  }
  v15 = v13;
  if ( a3 < 0 || a3 >= v12 )
    crt_assert((char *)L"i >= 0 && i < count", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4D1u);
  if ( v15 - 1 > 3 )
    crt_assert(
      (char *)L"offsize >= 1 && offsize <= 4",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x4D2u);
  v16 = v7 + a3 * v15;
  if ( v16 > (int)v3 || v16 < 0 )
  {
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    if ( v16 > (int)v3 || v16 < 0 )
      v16 = v3;
  }
  *(_DWORD *)(a2 + 8) = v16;
  v17 = sub_14017F020(a2, v15);
  v18 = sub_14017F020(a2, v15) - v17;
  v22 = 0u;
  v19 = v15 * (v12 + 1) + v17 + 2;
  if ( v19 >= 0 && v18 >= 0 )
  {
    v20 = *(_DWORD *)(a2 + 12);
    if ( v19 <= v20 && v18 <= v20 - v19 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)a2 + v19;
      HIDWORD(v22) = v18;
    }
  }
  *a1 = v22;
  return a1;
}

//----- (000000014017F5B0) ----------------------------------------------------
__int64            sub_14017F5B0(__int64 a1)
{
  __int64 v1;
  int v3;
  unsigned __int8 v4;
  __int64 result;
  unsigned __int8 v6;
  unsigned __int8 v7;
  __int64 v8;
  int v9;
  int v10;
  unsigned __int8 v11;

  v1 = *(int *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  if ( (int)v1 < v3 )
  {
    v4 = *(_BYTE *)(v1 + *(_QWORD *)a1);
    LODWORD(v1) = v1 + 1;
    *(_DWORD *)(a1 + 8) = v1;
  }
  else
  {
    v4 = 0;
  }
  if ( (unsigned int)v4 - 32 <= 0xD6 )
    return (unsigned int)v4 - 139;
  if ( (unsigned int)v4 - 247 > 3 )
  {
    if ( (unsigned int)v4 - 251 > 3 )
    {
      if ( v4 == 28 )
      {
        if ( (int)v1 < v3 )
        {
          v8 = (int)v1;
          v9 = v1 + 1;
          v10 = *(unsigned __int8 *)(v8 + *(_QWORD *)a1);
          *(_DWORD *)(a1 + 8) = v9;
          if ( v9 < v3 )
          {
            v11 = *(_BYTE *)(v9 + *(_QWORD *)a1);
            *(_DWORD *)(a1 + 8) = v9 + 1;
            LODWORD(result) = v11 | (v10 << 8);
          }
          else
          {
            LODWORD(result) = v10 << 8;
          }
          return (unsigned int)result;
        }
        else
        {
          return 0;
        }
      }
      else if ( v4 == 29 )
      {
        return sub_14017F020(a1, 4u);
      }
      else
      {
        crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x49Bu);
        return 0;
      }
    }
    else if ( (int)v1 < v3 )
    {
      v7 = *(_BYTE *)((int)v1 + *(_QWORD *)a1);
      *(_DWORD *)(a1 + 8) = v1 + 1;
      return 64148 - (v4 << 8) - (unsigned int)v7;
    }
    else
    {
      return 64148 - (v4 << 8);
    }
  }
  else if ( (int)v1 < v3 )
  {
    v6 = *(_BYTE *)((int)v1 + *(_QWORD *)a1);
    *(_DWORD *)(a1 + 8) = v1 + 1;
    return (v4 << 8) + (unsigned int)v6 - 63124;
  }
  else
  {
    return (v4 << 8) - 63124;
  }
}

//----- (000000014017F720) ----------------------------------------------------
__int64            sub_14017F720(__int64 a1)
{
  __int64 result;
  unsigned __int8 v3;
  int v4;
  int v5;
  int v6;
  unsigned __int8 v7;
  __int64 v8;
  int v9;

  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12)
    || (result = *(_QWORD *)a1, v3 = *(_BYTE *)(*(int *)(a1 + 8) + *(_QWORD *)a1), v3 < 0x1Cu) )
  {
    crt_assert((char *)L"b0 >= 28", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4A1u);
    return sub_14017F5B0(a1);
  }
  if ( v3 != 30 )
    return sub_14017F5B0(a1);
  v4 = *(_DWORD *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 8) + 1;
  if ( (v5 > v4 || (v6 = *(_DWORD *)(a1 + 12), v5 < 0))
    && ((result = crt_assert(
                    (char *)L"!(o > b->size || o < 0)",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                    0x45Cu),
         v4 = *(_DWORD *)(a1 + 12),
         v6 = v4,
         v5 > v4)
     || v5 < 0) )
  {
    *(_DWORD *)(a1 + 8) = v4;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v5;
    if ( v5 < v6 )
    {
      do
      {
        if ( v5 < v6 )
        {
          v8 = v5++;
          v7 = *(_BYTE *)(v8 + *(_QWORD *)a1);
          *(_DWORD *)(a1 + 8) = v5;
        }
        else
        {
          v7 = 0;
        }
        v9 = v7;
        result = v7 & 0xF;
      }
      while ( (_BYTE)result != 15 && (v9 & 0xFFFFFFF0) != 0xF0 && v5 < v4 );
    }
  }
  return result;
}

//----- (000000014017F820) ----------------------------------------------------
_OWORD *           sub_14017F820(_OWORD *a1, __int64 a2, int a3)
{
  int v6;
  int v7;
  __int32 v8;
  unsigned __int8 v9;
  int v10;
  unsigned __int8 v11;
  __int64 v12;
  int v13;
  unsigned __int8 v14;
  __int64 v15;
  int v16;
  unsigned __int8 v17;
  __int64 v18;
  int v19;
  unsigned __int8 v20;
  __int64 v21;
  int v22;
  unsigned __int8 v23;
  __int64 v24;
  int v25;
  unsigned __int8 v26;
  __int64 v27;
  int v28;
  int v29;
  unsigned __int8 v30;
  __m128i v31;
  __int128 v32;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017F820[64];
#define v34 (*(__m128i (*))(void *)(sr_frame_14017F820 + 0)) /* [rsp+20h] */
#define v35 (*(__int128 (*))(void *)(sr_frame_14017F820 + 16)) /* [rsp+30h] */
#define v36 (*(__int128 (*))(void *)(sr_frame_14017F820 + 32)) /* [rsp+40h] */
#define v37 (*(_BYTE (*)[16])(void *)(sr_frame_14017F820 + 48)) /* [rsp+50h] */

  v6 = -1;
  v34 = *(__m128i_u *)(a2 + 144);
  if ( SR_VEC_READ_LANES(128, _mm_srli_si128(v34, 8), i32)[1] < 0 )
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  if ( SR_VEC_LANES(128, v34, i32)[3] < 0 )
  {
    v8 = SR_VEC_LANES(128, v34, i32)[3];
LABEL_35:
    v29 = v8 + a3;
    if ( v29 > SR_VEC_LANES(128, v34, i32)[3] || v29 < 0 )
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
    if ( v29 > SR_VEC_LANES(128, v34, i32)[3] || v29 < 0 || v29 >= SR_VEC_LANES(128, v34, i32)[3] )
      v30 = 0;
    else
      v30 = *(_BYTE *)(v29 + SR_VEC_LANES(128, v34, i64)[0]);
    v6 = v30;
    goto LABEL_44;
  }
  v7 = 0;
  v8 = 0;
  if ( SR_VEC_LANES(128, v34, i32)[3] <= 0 )
    goto LABEL_35;
  v8 = 1;
  if ( !*(_BYTE *)SR_VEC_LANES(128, v34, i64)[0] )
    goto LABEL_35;
  if ( *(_BYTE *)SR_VEC_LANES(128, v34, i64)[0] == 3 )
  {
    if ( SR_VEC_LANES(128, v34, i32)[3] > 1 )
    {
      v8 = 2;
      v9 = *(_BYTE *)(SR_VEC_LANES(128, v34, i64)[0] + 1);
    }
    else
    {
      v9 = 0;
    }
    v10 = v9;
    if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
    {
      v12 = v8++;
      v11 = *(_BYTE *)(v12 + SR_VEC_LANES(128, v34, i64)[0]);
    }
    else
    {
      v11 = 0;
    }
    v13 = v11 | (v10 << 8);
    if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
    {
      v15 = v8++;
      v14 = *(_BYTE *)(v15 + SR_VEC_LANES(128, v34, i64)[0]);
    }
    else
    {
      v14 = 0;
    }
    v16 = v14;
    if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
    {
      v18 = v8++;
      v17 = *(_BYTE *)(v18 + SR_VEC_LANES(128, v34, i64)[0]);
    }
    else
    {
      v17 = 0;
    }
    v19 = v17 | (v16 << 8);
    if ( v13 )
    {
      while ( 1 )
      {
        if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
        {
          v21 = v8++;
          v20 = *(_BYTE *)(v21 + SR_VEC_LANES(128, v34, i64)[0]);
        }
        else
        {
          v20 = 0;
        }
        v22 = v20;
        if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
        {
          v24 = v8++;
          v23 = *(_BYTE *)(v24 + SR_VEC_LANES(128, v34, i64)[0]);
        }
        else
        {
          v23 = 0;
        }
        v25 = v23;
        if ( v8 < SR_VEC_LANES(128, v34, i32)[3] )
        {
          v27 = v8++;
          v26 = *(_BYTE *)(v27 + SR_VEC_LANES(128, v34, i64)[0]);
        }
        else
        {
          v26 = 0;
        }
        v28 = v26 | (v25 << 8);
        if ( a3 >= v19 && a3 < v28 )
          break;
        ++v7;
        v19 = v28;
        if ( v7 >= v13 )
          goto LABEL_44;
      }
      v6 = v22;
    }
  }
LABEL_44:
  v34 = *(__m128i_u *)(a2 + 128);
  v31 = *(__m128i_u *)sub_14017F410(&v36, (__int64)&v34, v6);
  v35 = *(_OWORD *)(a2 + 64);
  v34 = v31;
  v32 = *(_OWORD *)sub_140180F10((__int64)v37, (__int64)&v35, (__int64)&v34);
  *a1 = v32;
  return a1;
}
#undef v34
#undef v35
#undef v36
#undef v37

//----- (000000014017FA30) ----------------------------------------------------
__int64            sub_14017FA30(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10;
  __int64 v12;
  __int64 v13;
  __int64 v15;

  v10 = a2;
  if ( a4 )
  {
    if ( a3 )
    {
      v12 = 14LL * a2;
      *(_WORD *)(v12 + a1) = (a7 + a9) >> 1;
      *(_BYTE *)(v12 + a1 + 12) = 3;
      *(_WORD *)(v12 + a1 + 4) = a9;
      *(_WORD *)(v12 + a1 + 6) = a10;
      *(_WORD *)(v12 + a1 + 2) = (a8 + a10) >> 1;
      v10 = a2 + 1;
    }
    v13 = 14LL * v10;
    *(_WORD *)(v13 + a1) = a5;
    *(_WORD *)(v13 + a1 + 2) = a6;
    *(_WORD *)(v13 + a1 + 4) = a7;
    *(_BYTE *)(v13 + a1 + 12) = 3;
    *(_WORD *)(v13 + a1 + 6) = a8;
    return (unsigned int)(v10 + 1);
  }
  else
  {
    v15 = 14LL * a2;
    *(_WORD *)(v15 + a1) = a5;
    *(_WORD *)(v15 + a1 + 2) = a6;
    if ( a3 )
    {
      *(_WORD *)(v15 + a1 + 4) = a9;
      *(_WORD *)(v15 + a1 + 6) = a10;
      *(_BYTE *)(v15 + a1 + 12) = 3;
    }
    else
    {
      *(_BYTE *)(v15 + a1 + 12) = 2;
      *(_DWORD *)(v15 + a1 + 4) = 0;
    }
    return (unsigned int)(a2 + 1);
  }
}

//----- (000000014017FB20) ----------------------------------------------------
__int64            sub_14017FB20(float a1, float a2, unsigned int a3, __int64 a4)
{
  unsigned int v5;
  float v6;
  __int64 v8;
  float v9;
  __int16 *v10;
  __int64 v11;
  char v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  float v31;
  float v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14017FB20[64];
#define v41 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 0)) /* [rsp+30h] */
#define v42 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 8)) /* [rsp+38h] */
#define v43 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 16)) /* [rsp+40h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_14017FB20 + 24)) /* [rsp+48h] */
#define v45 (*(float (*)[2])(void *)(sr_frame_14017FB20 + 32)) /* [rsp+50h] */
#define v46 (*(float (*)[6])(void *)(sr_frame_14017FB20 + 40)) /* [rsp+58h] */

  v5 = 0;
  v6 = a2;
  v8 = a3;
  v44 = 1065353216;
  v45[0] = a1;
  v9 = fmod(a2, 1.0);
  if ( v9 >= 0.0099999998 )
  {
    if ( v9 > 0.99000001 )
      v6 = v6 + -0.0099999998;
  }
  else
  {
    v6 = v6 + 0.0099999998;
  }
  v45[1] = v6;
  if ( (int)v8 > 0 )
  {
    v10 = (__int16 *)(a4 - 12);
    v11 = v8;
    do
    {
      v12 = *((_BYTE *)v10 + 24);
      if ( v12 == 2 )
      {
        v13 = *v10;
        v14 = v10[7];
        v15 = v14;
        if ( v13 < v14 )
          v15 = *v10;
        if ( v6 > (float)v15 )
        {
          v16 = *v10;
          if ( v13 < v14 )
            v16 = v10[7];
          if ( v6 < (float)v16 )
          {
            v17 = v10[6];
            v18 = *(v10 - 1);
            v19 = v17;
            if ( v18 < v17 )
              v19 = *(v10 - 1);
            if ( a1 > (float)v19
              && (float)((float)((float)((float)(v6 - (float)v13) / (float)(v14 - v13)) * (float)(v17 - v18))
                       + (float)v18) < a1 )
            {
              v20 = -1;
              if ( v13 < v14 )
                v20 = 1;
              v5 += v20;
            }
          }
        }
      }
      else if ( v12 == 3 )
      {
        v21 = v10[9];
        v22 = v10[7];
        v23 = v21;
        v24 = *v10;
        v25 = v22;
        v26 = v10[8];
        v27 = v24;
        v28 = v10[6];
        v29 = *(v10 - 1);
        v30 = v28;
        if ( v26 < v28 )
          v30 = v10[8];
        if ( v29 < v30 )
          v30 = *(v10 - 1);
        if ( v21 < v22 )
          v25 = v10[9];
        if ( v24 < v25 )
          v25 = *v10;
        if ( v21 < v22 )
          v23 = v10[7];
        if ( v24 < v23 )
          v27 = v23;
        if ( v6 > (float)v25 && v6 < (float)v27 && a1 > (float)v30 )
        {
          v31 = (float)v24;
          v32 = (float)v21;
          v43[0] = (float)v29;
          v43[1] = (float)v24;
          v42[0] = (float)v26;
          v42[1] = (float)v21;
          v41[0] = (float)v28;
          v41[1] = (float)v22;
          if ( (float)v29 == (float)v26 && v31 == v32 || (float)v26 == (float)v28 && v32 == (float)v22 )
          {
            v33 = v22;
            if ( v24 < v22 )
              v33 = v24;
            if ( v6 > (float)v33 )
            {
              v34 = v24;
              if ( v24 < v22 )
                v34 = v22;
              if ( v6 < (float)v34 )
              {
                v35 = v28;
                if ( v29 < v28 )
                  v35 = v29;
                if ( a1 > (float)v35
                  && (float)((float)((float)((float)(v6 - v31) / (float)(v22 - v24)) * (float)(v28 - v29)) + (float)v29) < a1 )
                {
                  v36 = -1;
                  if ( v24 < v22 )
                    v36 = 1;
                  v5 += v36;
                }
              }
            }
          }
          else
          {
            v37 = sub_1401827E0(v45, (float *)&v44, v43, v42, v41, v46);
            if ( v37 >= 1 && v46[0] < 0.0 )
            {
              v38 = 1;
              if ( v46[1] < 0.0 )
                v38 = -1;
              v5 += v38;
            }
            if ( v37 >= 2 && v46[2] < 0.0 )
            {
              v39 = 1;
              if ( v46[3] < 0.0 )
                v39 = -1;
              v5 += v39;
            }
          }
        }
      }
      v10 += 7;
      --v11;
    }
    while ( v11 );
  }
  return v5;
}
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46

//----- (000000014017FF00) ----------------------------------------------------
__int64            sub_14017FF00(__int64 a1)
{
  float v1;
  int v3;
  int v4;
  __int64 v5;
  __int64 result;

  v1 = *(float *)(a1 + 8);
  if ( v1 != *(float *)(a1 + 16) || *(float *)(a1 + 20) != *(float *)(a1 + 12) )
  {
    v3 = (int)*(float *)(a1 + 12);
    v4 = (int)v1;
    if ( *(_DWORD *)a1 )
    {
      if ( v4 > *(_DWORD *)(a1 + 28) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 28) = v4;
      if ( v3 > *(_DWORD *)(a1 + 36) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 36) = v3;
      if ( v4 < *(_DWORD *)(a1 + 24) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 24) = v4;
      if ( v3 < *(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 4) )
        *(_DWORD *)(a1 + 32) = v3;
      ++*(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 4) = 1;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
      *(_WORD *)(v5 + 2) = v3;
      *(_DWORD *)(v5 + 4) = 0;
      *(_BYTE *)(v5 + 12) = 2;
      *(_WORD *)v5 = v4;
      *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = 0;
      result = *(_QWORD *)(a1 + 40);
      *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + result + 10) = 0;
    }
  }
  return result;
}

//----- (000000014017FFC0) ----------------------------------------------------
void            sub_14017FFC0(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v7;
  float v8;
  float v9;

  v7 = a2 + *(float *)(a1 + 16);
  v8 = a3 + *(float *)(a1 + 20);
  v9 = (float)(v7 + a4) + a6;
  *(float *)(a1 + 16) = v9;
  *(float *)(a1 + 20) = (float)(v8 + a5) + a7;
  sub_140180200(
    a1,
    4,
    (int)v9,
    (int)(float)((float)(v8 + a5) + a7),
    (int)v7,
    (int)v8,
    (int)(float)(v7 + a4),
    (int)(float)(v8 + a5));
}
//----- (0000000140180060) ----------------------------------------------------
__int64            sub_140180060(__int64 a1, float a2, float a3)
{
  bool v3;
  float v5;
  float v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 result;

  v3 = *(_DWORD *)a1 == 0;
  v5 = a2 + *(float *)(a1 + 16);
  v6 = a3 + *(float *)(a1 + 20);
  *(float *)(a1 + 16) = v5;
  *(float *)(a1 + 20) = v6;
  v7 = (int)v6;
  v8 = (int)v5;
  if ( v3 )
  {
    v9 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
    *(_WORD *)(v9 + 2) = v7;
    *(_DWORD *)(v9 + 4) = 0;
    *(_BYTE *)(v9 + 12) = 2;
    *(_WORD *)v9 = v8;
    *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = 0;
    result = *(_QWORD *)(a1 + 40);
    *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + result + 10) = 0;
  }
  else
  {
    if ( v8 > *(_DWORD *)(a1 + 28) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 28) = v8;
    if ( v7 > *(_DWORD *)(a1 + 36) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 36) = v7;
    if ( v8 < *(_DWORD *)(a1 + 24) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 24) = v8;
    if ( v7 < *(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 32) = v7;
    ++*(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 4) = 1;
  }
  return result;
}

//----- (0000000140180120) ----------------------------------------------------
__int64            sub_140180120(__int64 a1, float a2, float a3)
{
  __int64 result;
  __int64 v4;
  bool v5;
  float v6;
  float v7;
  int v8;
  int v9;
  __int64 v10;

  result = sub_14017FF00(a1);
  v5 = *(_DWORD *)v4 == 0;
  v6 = a2 + *(float *)(v4 + 16);
  v7 = a3 + *(float *)(v4 + 20);
  *(float *)(v4 + 16) = v6;
  *(float *)(v4 + 8) = v6;
  *(float *)(v4 + 20) = v7;
  *(float *)(v4 + 12) = v7;
  v8 = (int)v7;
  v9 = (int)v6;
  if ( v5 )
  {
    v10 = *(_QWORD *)(v4 + 40) + 14LL * *(int *)(v4 + 48);
    *(_WORD *)(v10 + 2) = v8;
    *(_DWORD *)(v10 + 4) = 0;
    *(_BYTE *)(v10 + 12) = 1;
    *(_WORD *)v10 = v9;
    *(_WORD *)(14LL * *(int *)(v4 + 48) + *(_QWORD *)(v4 + 40) + 8) = 0;
    result = *(_QWORD *)(v4 + 40);
    *(_WORD *)(14LL * (int)(*(_DWORD *)(v4 + 48))++ + result + 10) = 0;
  }
  else
  {
    if ( v9 > *(_DWORD *)(v4 + 28) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 28) = v9;
    if ( v8 > *(_DWORD *)(v4 + 36) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 36) = v8;
    if ( v9 < *(_DWORD *)(v4 + 24) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 24) = v9;
    if ( v8 < *(_DWORD *)(v4 + 32) || !*(_DWORD *)(v4 + 4) )
      *(_DWORD *)(v4 + 32) = v8;
    ++*(_DWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 4) = 1;
  }
  return result;
}

//----- (0000000140180200) ----------------------------------------------------
void            sub_140180200(__int64 a1, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;

  if ( *(_DWORD *)a1 )
  {
    v10 = *(_DWORD *)(a1 + 28);
    if ( a3 > v10 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 28) = a3;
      v10 = a3;
    }
    v11 = *(_DWORD *)(a1 + 36);
    if ( a4 > v11 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 36) = a4;
      v11 = a4;
    }
    v12 = *(_DWORD *)(a1 + 24);
    if ( a3 < v12 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 24) = a3;
      v12 = a3;
    }
    v13 = *(_DWORD *)(a1 + 32);
    if ( a4 < v13 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 32) = a4;
      v13 = a4;
    }
    *(_DWORD *)(a1 + 4) = 1;
    if ( a2 == 4 )
    {
      if ( a5 > v10 )
      {
        *(_DWORD *)(a1 + 28) = a5;
        v10 = a5;
      }
      if ( a6 > v11 )
      {
        *(_DWORD *)(a1 + 36) = a6;
        v11 = a6;
      }
      if ( a5 < v12 )
      {
        *(_DWORD *)(a1 + 24) = a5;
        v12 = a5;
      }
      if ( a6 < v13 )
      {
        *(_DWORD *)(a1 + 32) = a6;
        v13 = a6;
      }
      if ( a7 > v10 )
        *(_DWORD *)(a1 + 28) = a7;
      if ( a8 > v11 )
        *(_DWORD *)(a1 + 36) = a8;
      if ( a7 < v12 )
        *(_DWORD *)(a1 + 24) = a7;
      ++*(_DWORD *)(a1 + 48);
      if ( a8 < v13 )
        *(_DWORD *)(a1 + 32) = a8;
    }
    else
    {
      ++*(_DWORD *)(a1 + 48);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
    *(_WORD *)(v14 + 4) = a5;
    *(_WORD *)(v14 + 6) = a6;
    *(_BYTE *)(v14 + 12) = a2;
    *(_WORD *)v14 = a3;
    *(_WORD *)(v14 + 2) = a4;
    *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = a7;
    *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + *(_QWORD *)(a1 + 40) + 10) = a8;
  }
}

//----- (0000000140180360) ----------------------------------------------------
float            sub_140180360(float a1)
{
  float v1;

  if ( a1 >= 0.0 )
    return pow(a1, 0.3333333432674408);
  v1 = pow((float)-a1, 0.3333333432674408);
  return -v1;
}

//----- (00000001401803B0) ----------------------------------------------------
_OWORD *           sub_1401803B0(_OWORD *a1, __int64 a2, int a3)
{
  int v5;
  int v7;
  int v8;
  int v9;
  unsigned __int8 v10;
  int v11;
  int v12;
  int v13;
  char v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  unsigned __int8 v20;
  __int64 v21;
  __int64 v22;
  int v24;
  __int128 v25;

  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 < 0 )
  {
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
    v5 = *(_DWORD *)(a2 + 12);
  }
  v7 = 0;
  if ( v5 < 0 )
    v7 = v5;
  *(_DWORD *)(a2 + 8) = v7;
  if ( v7 >= v5 )
  {
LABEL_38:
    v25 = 0u;
    if ( v5 >= 0 )
    {
      v22 = *(_QWORD *)a2;
LABEL_40:
      *(_QWORD *)&v25 = v22;
    }
  }
  else
  {
    v8 = v7;
    while ( 1 )
    {
      while ( (unsigned __int8)sub_14017F0C0(a2) >= 0x1Cu )
      {
        v9 = *(_DWORD *)(a2 + 12);
        if ( v8 >= v9 || (v10 = *(_BYTE *)(v8 + *(_QWORD *)a2), v10 < 0x1Cu) )
        {
          crt_assert((char *)L"b0 >= 28", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x4A1u);
        }
        else if ( v10 == 30 )
        {
          if ( (++v8 > v9 || (v11 = *(_DWORD *)(a2 + 12), v8 < 0))
            && ((crt_assert(
                   (char *)L"!(o > b->size || o < 0)",
                   (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                   0x45Cu),
                 v11 = *(_DWORD *)(a2 + 12),
                 v9 = v11,
                 v8 > v11)
             || v8 < 0) )
          {
            v8 = *(_DWORD *)(a2 + 12);
            *(_DWORD *)(a2 + 8) = v11;
          }
          else
          {
            *(_DWORD *)(a2 + 8) = v8;
            if ( v8 < v9 )
            {
              v12 = v9;
              v13 = v8;
              do
              {
                if ( v13 < v9 )
                {
                  v12 = v11;
                  v15 = v13++;
                  v14 = *(_BYTE *)(v15 + *(_QWORD *)a2);
                  *(_DWORD *)(a2 + 8) = v13;
                }
                else
                {
                  v14 = 0;
                }
                v8 = v13;
              }
              while ( (v14 & 0xF) != 0xF && (v14 & 0xF0) != 0xF0 && v13 < v12 );
            }
          }
          continue;
        }
        sub_14017F5B0(a2);
        v8 = *(_DWORD *)(a2 + 8);
      }
      v5 = *(_DWORD *)(a2 + 12);
      v16 = v8;
      if ( v8 < v5 )
      {
        v18 = v8++;
        LOBYTE(v17) = *(_BYTE *)(v18 + *(_QWORD *)a2);
        *(_DWORD *)(a2 + 8) = v8;
      }
      else
      {
        LOBYTE(v17) = 0;
      }
      v17 = (unsigned __int8)v17;
      v19 = v8;
      if ( (unsigned __int8)v17 == 12 )
      {
        if ( v8 < v5 )
        {
          ++v8;
          v21 = v19;
          v19 = v8;
          v20 = *(_BYTE *)(v21 + *(_QWORD *)a2);
          *(_DWORD *)(a2 + 8) = v8;
        }
        else
        {
          v20 = 0;
        }
        v17 = v20 | 0x100;
      }
      if ( v17 == a3 )
        break;
      v7 = v19;
      if ( v19 >= v5 )
        goto LABEL_38;
    }
    v24 = v16 - v7;
    v25 = 0u;
    if ( v7 >= 0 && v24 >= 0 && v7 <= v5 && v24 <= v5 - v7 )
    {
      v22 = *(_QWORD *)a2 + v7;
      HIDWORD(v25) = v24;
      goto LABEL_40;
    }
  }
  *a1 = v25;
  return a1;
}

//----- (00000001401805D0) ----------------------------------------------------
__int64            sub_1401805D0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int128 v9;

  v4 = a3;
  result = (__int64)sub_1401803B0(&v9, a1, a2);
  v7 = v4;
  v9 = *(_OWORD *)result;
  if ( (int)v4 > 0 )
  {
    v8 = 0;
    do
    {
      result = HIDWORD(v9);
      if ( SDWORD2(v9) >= SHIDWORD(v9) )
        break;
      result = sub_14017F5B0((__int64)&v9);
      *(_DWORD *)(a4 + 4 * v8++) = result;
    }
    while ( v8 < v7 );
  }
  return result;
}

//----- (0000000140180640) ----------------------------------------------------
void            sub_140180640(__int64 a1, __int64 a2, int a3, float *a4, float a5)
{
  float *v5;
  float v8;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  int v18;
  float v19;
  float v20;
  float v21;
  int v22;
  int v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float *v30;
  unsigned __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  int v42;
  float v43;
  int v44;
  float v45;
  float v46;
  float v47;
  bool v48;
  bool v49;

  if ( a4 )
  {
    v5 = a4;
    v8 = a5 + 1.0;
    while ( 1 )
    {
      if ( a5 > v5[7] )
        crt_assert((char *)L"e->ey >= y_top", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xB92u);
      v10 = v5[3];
      v11 = v5[2];
      if ( v10 == 0.0 )
      {
        if ( v11 < (float)a3 )
        {
          if ( v11 < 0.0 )
          {
            sub_140181350(a2 - 4, 0, v5, v11, a5, v11, v8);
          }
          else
          {
            sub_140181350(a1, (int)v11, v5, v11, a5, v11, v8);
            sub_140181350(a2 - 4, (int)v11 + 1, v5, v11, a5, v11, v8);
          }
        }
        goto LABEL_63;
      }
      v12 = v5[6];
      v13 = v5[4];
      v14 = v10 + v11;
      if ( v12 > v8 || (v15 = v5[7], v15 < a5) )
      {
        crt_assert(
          (char *)L"e->sy <= y_bottom && e->ey >= y_top",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0xBA5u);
        v12 = v5[6];
        v15 = v5[7];
      }
      if ( v12 <= a5 )
      {
        v16 = v11;
        v12 = a5;
      }
      else
      {
        v16 = (float)((float)(v12 - a5) * v10) + v11;
      }
      if ( v15 >= v8 )
      {
        v17 = v10 + v11;
        v15 = a5 + 1.0;
      }
      else
      {
        v17 = (float)((float)(v15 - a5) * v10) + v11;
      }
      if ( v16 >= 0.0 && v17 >= 0.0 && v16 < (float)a3 && v17 < (float)a3 )
      {
        v18 = (int)v16;
        if ( SLODWORD(v16) == SLODWORD(v17) )
        {
          v19 = v15 - v12;
          if ( v18 < 0 || v18 >= a3 )
            crt_assert(
              (char *)L"x >= 0 && x < len",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xBC1u);
          *(float *)(a1 + 4LL * v18) = (float)((float)((float)(1.0
                                                             - (float)((float)((float)(v17 - (float)v18)
                                                                             + (float)(v16 - (float)v18))
                                                                     * 0.5))
                                                     * v5[5])
                                             * v19)
                                     + *(float *)(a1 + 4LL * v18);
          *(float *)(a2 + 4LL * v18) = (float)(v19 * v5[5]) + *(float *)(a2 + 4LL * v18);
        }
        else
        {
          if ( v16 > v17 )
          {
            v13 = -v13;
            v11 = v10 + v11;
            v20 = v8 - (float)(v12 - a5);
            v12 = v8 - (float)(v15 - a5);
            v15 = v20;
            v21 = v17;
            v17 = v16;
            v16 = v21;
          }
          v22 = (int)v17;
          v23 = (int)v16 + 1;
          v24 = v23;
          v25 = (float)v23 - v11;
          v26 = v5[5];
          v27 = v26 * v13;
          v28 = (float)(v25 * v13) + a5;
          v29 = (float)(v28 - v12) * v26;
          *(float *)(a1 + 4LL * (int)v16) = (float)((float)(0.5 - (float)((float)(v16 - (float)(int)v16) * 0.5)) * v29)
                                          + *(float *)(a1 + 4LL * (int)v16);
          if ( v23 < (__int64)(int)v17 )
          {
            if ( v22 - (__int64)v23 < 4 )
              goto LABEL_66;
            v30 = (float *)(a1 + 8 + 4LL * v23);
            v31 = ((unsigned __int64)(v22 - (__int64)v23 - 4) >> 2) + 1;
            v32 = v27 * 0.5;
            v24 += 4 * v31;
            do
            {
              v33 = v32 + v29;
              v34 = v29 + v27;
              *(v30 - 2) = v33 + *(v30 - 2);
              v35 = v32 + v34;
              v36 = v34 + v27;
              v37 = v32 + v36;
              v38 = v36 + v27;
              *(v30 - 1) = v35 + *(v30 - 1);
              v39 = v32 + v38;
              v29 = v38 + v27;
              *v30 = v37 + *v30;
              v30[1] = v39 + v30[1];
              v30 += 4;
              --v31;
            }
            while ( v31 );
            if ( v24 < v22 )
            {
LABEL_66:
              do
              {
                v40 = (float)(v27 * 0.5) + v29;
                v29 = v29 + v27;
                *(float *)(a1 + 4 * v24) = v40 + *(float *)(a1 + 4 * v24);
                ++v24;
              }
              while ( v24 < v22 );
            }
          }
          v41 = v28 + (float)((float)(v22 - (int)v16 - 1) * v13);
          if ( fabs(v29) > 1.01 )
            crt_assert(
              (char *)L"fabs(area) <= 1.01f",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xBE6u);
          *(float *)(a1 + 4LL * v22) = (float)((float)((float)((float)(1.0 - (float)((float)(v17 - (float)v22) * 0.5))
                                                             * v26)
                                                     * (float)(v15 - v41))
                                             + v29)
                                     + *(float *)(a1 + 4LL * v22);
          *(float *)(a2 + 4LL * v22) = (float)((float)(v15 - v12) * v26) + *(float *)(a2 + 4LL * v22);
        }
        goto LABEL_63;
      }
      v42 = 0;
      if ( a3 > 0 )
        break;
LABEL_63:
      v5 = *(float **)v5;
      if ( !v5 )
        return;
    }
    v43 = 1.0 / v10;
    while ( 1 )
    {
      v44 = v42 + 1;
      v45 = (float)v42;
      v46 = (float)(v42 + 1);
      v47 = (float)((float)(v46 - v11) * v43) + a5;
      if ( v11 >= (float)v42 || v14 <= v46 )
        break;
      sub_140181350(a1, v42, v5, v11, a5, (float)v42, (float)((float)((float)v42 - v11) * v43) + a5);
      sub_140181350(
        a1,
        v42,
        v5,
        v45,
        (float)((float)((float)v42 - v11) * v43) + a5,
        (float)v44,
        (float)((float)((float)v44 - v11) * v43) + a5);
LABEL_62:
      sub_140181350(a1, v42++, v5, v46, v47, v14, v8);
      if ( v44 >= a3 )
        goto LABEL_63;
    }
    if ( v14 < v45 && v11 > v46 )
    {
      sub_140181350(a1, v42, v5, v11, a5, (float)v44, (float)((float)((float)v44 - v11) * v43) + a5);
      sub_140181350(
        a1,
        v42,
        v5,
        v46,
        (float)((float)((float)v44 - v11) * v43) + a5,
        (float)v42,
        (float)((float)((float)v42 - v11) * v43) + a5);
LABEL_54:
      v46 = (float)v42;
      v47 = (float)((float)((float)v42 - v11) * v43) + a5;
      goto LABEL_62;
    }
    if ( v11 >= v45 )
    {
      v48 = v14 < v45;
    }
    else
    {
      v48 = v14 < v45;
      if ( v14 > v45 )
      {
LABEL_53:
        sub_140181350(a1, v42, v5, v11, a5, (float)v42, (float)((float)((float)v42 - v11) * v43) + a5);
        goto LABEL_54;
      }
    }
    if ( !v48 || v11 <= v45 )
    {
      if ( v11 >= v46 )
      {
        v49 = v14 < v46;
      }
      else
      {
        v49 = v14 < v46;
        if ( v14 > v46 )
        {
LABEL_57:
          sub_140181350(a1, v42, v5, v11, a5, (float)v44, (float)((float)((float)v44 - v11) * v43) + a5);
          goto LABEL_62;
        }
      }
      if ( !v49 || v11 <= v46 )
      {
        v46 = v11;
        v47 = a5;
        goto LABEL_62;
      }
      goto LABEL_57;
    }
    goto LABEL_53;
  }
}

//----- (0000000140180D50) ----------------------------------------------------
__int64            sub_140180D50(__int64 a1, unsigned int a2, char *a3)
{
  __int64 v3;
  unsigned int v4;
  int v5;
  int v6;
  __int64 v7;

  v3 = a2;
  v4 = a2 + 12;
  v5 = 0;
  v6 = *(unsigned __int8 *)(v3 + a1 + 5) + (*(unsigned __int8 *)(v3 + a1 + 4) << 8);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v7 = v4 + 16 * v5;
    if ( *(unsigned __int8 *)(v7 + a1) == *a3
      && *(unsigned __int8 *)(v7 + a1 + 1) == a3[1]
      && *(unsigned __int8 *)(v7 + a1 + 2) == a3[2]
      && *(unsigned __int8 *)(v7 + a1 + 3) == a3[3] )
    {
      break;
    }
    if ( ++v5 >= v6 )
      return 0;
  }
  return *(unsigned __int8 *)(v7 + a1 + 11)
       + ((*(unsigned __int8 *)(v7 + a1 + 10)
         + ((*(unsigned __int8 *)(v7 + a1 + 9) + (*(unsigned __int8 *)(v7 + a1 + 8) << 8)) << 8)) << 8);
}

//----- (0000000140180E10) ----------------------------------------------------
_QWORD *           sub_140180E10(_QWORD *a1, __int64 *a2, int a3)
{
  int v3;
  int v7;
  int v8;
  unsigned __int8 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140180E10[32];
#define v17 (*(__int128 (*))(void *)(sr_frame_140180E10 + 0)) /* [rsp+20h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140180E10 + 16)) /* [rsp+30h] */

  v3 = *((_DWORD *)a2 + 3);
  if ( v3 < 0 )
    crt_assert(
      (char *)L"!(o > b->size || o < 0)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
      0x45Cu);
  v7 = 0;
  if ( v3 < 0 )
    v7 = v3;
  *((_DWORD *)a2 + 2) = v7;
  if ( v7 < v3 )
  {
    v10 = v7 + 1;
    v11 = v7;
    v12 = *a2;
    *((_DWORD *)a2 + 2) = v10;
    v8 = *(unsigned __int8 *)(v11 + v12);
    if ( v10 < v3 )
    {
      v9 = *(_BYTE *)(v10 + v12);
      *((_DWORD *)a2 + 2) = v10 + 1;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  v13 = v9 | (v8 << 8);
  v14 = 107;
  if ( v13 < 0x846C )
  {
    if ( v13 >= 0x4D8 )
      v14 = 1131;
  }
  else
  {
    v14 = 0x8000;
  }
  v15 = v14 + a3;
  if ( v15 < 0 || v15 >= (int)v13 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
  else
  {
    v17 = *(_OWORD *)a2;
    *(_OWORD *)a1 = *sub_14017F410(&v18, (__int64)&v17, v15);
  }
  return a1;
}
#undef v17
#undef v18

//----- (0000000140180F10) ----------------------------------------------------
__int64            sub_140180F10(__int64 a1, __int64 a2, __int64 a3)
{
  int v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140180F10[80];
#define v12 (*(__int128 (*))(void *)(sr_frame_140180F10 + 0)) /* [rsp+20h] */
#define v13 (*(_OWORD (*)[2])(void *)(sr_frame_140180F10 + 16)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140180F10 + 64)) /* [rsp+60h] */

  v14 = 0;
  v5 = 0;
  v6 = 0;
  v12 = *sub_1401803B0(&v12, a3, 18);
  do
  {
    if ( SDWORD2(v12) >= SHIDWORD(v12) )
      break;
    *((_DWORD *)&v14 + v6++) = sub_14017F5B0((__int64)&v12);
  }
  while ( v6 < 2 );
  v7 = HIDWORD(v14);
  if ( !HIDWORD(v14) || !(_DWORD)v14 )
    goto LABEL_20;
  v12 = 0u;
  if ( v14 >= 0 && (int)v14 >= 0 )
  {
    v8 = *(_DWORD *)(a2 + 12);
    if ( SHIDWORD(v14) <= v8 && (int)v14 <= v8 - HIDWORD(v14) )
    {
      HIDWORD(v12) = v14;
      *(_QWORD *)&v12 = *(_QWORD *)a2 + SHIDWORD(v14);
    }
  }
  v12 = *sub_1401803B0(v13, (__int64)&v12, 19);
  if ( SDWORD2(v12) < SHIDWORD(v12) )
    v5 = sub_14017F5B0((__int64)&v12);
  if ( v5 )
  {
    v9 = v5 + v7;
    v10 = *(_DWORD *)(a2 + 12);
    if ( v9 > v10 || v9 < 0 )
    {
      crt_assert(
        (char *)L"!(o > b->size || o < 0)",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        0x45Cu);
      if ( v9 > v10 || v9 < 0 )
        v9 = v10;
    }
    *(_DWORD *)(a2 + 8) = v9;
    *(_OWORD *)a1 = *sub_14017F1F0(v13, a2);
  }
  else
  {
LABEL_20:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}
#undef v12
#undef v13
#undef v14

//----- (0000000140181080) ----------------------------------------------------
__int64            sub_140181080(unsigned __int8 *a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5;
  __int64 v6;
  unsigned __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  unsigned __int8 *v12;
  __int64 v13;
  int v14;
  __int64 v15;
  unsigned __int8 *v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int8 *v20;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned __int8 *v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int8 *v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8 *v34;
  __int64 v35;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140181080[64];
#define v37 (*(__int64 (*))(void *)(sr_frame_140181080 + 0)) /* [rsp+0h] */
#define v38 (*(int (*))(void *)(sr_frame_140181080 + 32)) /* [rsp+20h] */
#define v39 (*(__int64 (*))(void *)(sr_frame_140181080 + 40)) /* [rsp+28h] */
#define v40 (*(_QWORD (*)[2])(void *)(sr_frame_140181080 + 48)) /* [rsp+30h] */

  v38 = a2;
  v40[0] = 0;
  v5 = a2;
  v6 = (int)(a2 - a5);
  if ( a3 > 0 )
  {
    v8 = a5;
    v9 = (unsigned int)a3;
    v39 = a4;
    do
    {
      crt_memset((void *)(uintptr_t)(v40), 0, v8);
      v10 = 0;
      switch ( a5 )
      {
        case 2u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v28 = a1;
            v29 = v6 + 1;
            do
            {
              v30 = *v28++;
              v31 = ((_BYTE)v11 + 2) & 7;
              v10 += v30 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v31) = v30;
              *(v28 - 1) = v10 >> 1;
              --v29;
            }
            while ( v29 );
          }
          break;
        case 3u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v24 = a1;
            v25 = v6 + 1;
            do
            {
              v26 = *v24++;
              v27 = ((_BYTE)v11 + 3) & 7;
              v10 += v26 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v27) = v26;
              *(v24 - 1) = v10 / 3;
              --v25;
            }
            while ( v25 );
          }
          break;
        case 4u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v20 = a1;
            v21 = v6 + 1;
            do
            {
              v22 = *v20++;
              v23 = ((_BYTE)v11 - 4) & 7;
              v10 += v22 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v23) = v22;
              *(v20 - 1) = v10 >> 2;
              --v21;
            }
            while ( v21 );
          }
          break;
        default:
          v11 = 0;
          if ( a5 == 5 )
          {
            if ( v6 >= 0 )
            {
              v16 = a1;
              v17 = v6 + 1;
              do
              {
                v18 = *v16++;
                v19 = ((_BYTE)v11 - 3) & 7;
                v10 += v18 - *((unsigned __int8 *)v40 + (v11++ & 7));
                *((_BYTE *)v40 + v19) = v18;
                *(v16 - 1) = v10 / 5;
                --v17;
              }
              while ( v17 );
            }
          }
          else if ( v6 >= 0 )
          {
            v12 = a1;
            v13 = v6 + 1;
            do
            {
              v14 = *v12++;
              v15 = ((_BYTE)a5 + (_BYTE)v11) & 7;
              v10 += v14 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v15) = v14;
              *(v12 - 1) = v10 / a5;
              --v13;
            }
            while ( v13 );
          }
          break;
      }
      if ( v11 < v5 )
      {
        v32 = v11;
        v33 = (unsigned int)(v5 - v11);
        v34 = &a1[v11];
        do
        {
          if ( *v34 )
            crt_assert(
              (char *)L"pixels[i] == 0",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xF20u);
          v35 = v32++ & 7;
          v10 -= *((unsigned __int8 *)v40 + v35);
          *v34++ = v10 / a5;
          --v33;
        }
        while ( v33 );
        v5 = v38;
      }
      a1 += v39;
      v8 = a5;
      --v9;
    }
    while ( v9 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v37
#undef v38
#undef v39
#undef v40

//----- (0000000140181350) ----------------------------------------------------
__int64            sub_140181350(__int64 a1, int a2, float *a3, float a4, float a5, float a6, float a7)
{
  float v8;
  float v11;
  __int64 v12;
  __int64 result;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  unsigned int v19;
  __int16 *v20;

  v8 = a7;
  v11 = a5;
  v12 = a2;
  if ( a5 != a7 )
  {
    if ( a5 >= a7 )
      result = crt_assert((char *)L"y0 < y1", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xB68u);
    v14 = a3[7];
    if ( v14 < a3[6] )
    {
      result = crt_assert(
                 (char *)L"e->sy <= e->ey",
                 (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                 0xB69u);
      v14 = a3[7];
    }
    if ( a5 <= v14 )
    {
      v15 = a3[6];
      if ( a7 >= v15 )
      {
        v16 = a6;
        if ( a5 < v15 )
        {
          v11 = a3[6];
          a4 = a4 + (float)((float)((float)(v15 - a5) * (float)(a6 - a4)) / (float)(a7 - a5));
        }
        if ( a7 > v14 )
        {
          v8 = v14;
          v16 = a6 + (float)((float)((float)(v14 - a7) * (float)(a6 - a4)) / (float)(a7 - v11));
        }
        result = (unsigned int)(v12 + 1);
        v17 = (float)(int)v12;
        v18 = (float)(v12 + 1);
        if ( a4 == (float)(int)v12 )
        {
          if ( v16 <= v18 )
            goto LABEL_24;
          v19 = 2934;
          v20 = L"x1 <= x+1";
          goto LABEL_23;
        }
        if ( a4 == v18 )
        {
          if ( v16 < v17 )
            result = crt_assert(
                       (char *)L"x1 >= x",
                       (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                       0xB78u);
          if ( a4 <= v17 )
          {
LABEL_24:
            if ( v16 <= v17 )
              goto LABEL_25;
            if ( a4 < v18 )
              goto LABEL_32;
          }
        }
        else
        {
          if ( a4 <= v17 )
          {
            if ( v16 <= v17 )
            {
LABEL_25:
              *(float *)(a1 + 4 * v12) = (float)((float)(v8 - v11) * a3[5]) + *(float *)(a1 + 4 * v12);
              return result;
            }
            v19 = 2938;
            v20 = L"x1 <= x";
LABEL_23:
            result = crt_assert((char *)v20, (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", v19);
            goto LABEL_24;
          }
          if ( a4 < v18 )
          {
            if ( v16 >= v17 && v16 <= v18 )
              goto LABEL_41;
            result = crt_assert(
                       (char *)L"x1 >= x && x1 <= x+1",
                       (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                       0xB7Eu);
            goto LABEL_38;
          }
          if ( v16 >= v18 )
            return result;
          result = crt_assert(
                     (char *)L"x1 >= x+1",
                     (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                     0xB7Cu);
        }
        if ( v16 >= v18 )
          return result;
LABEL_32:
        if ( a4 < v17 || a4 > v18 )
        {
LABEL_40:
          result = crt_assert(
                     (char *)L"x0 >= x && x0 <= x+1 && x1 >= x && x1 <= x+1",
                     (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                     0xB85u);
LABEL_41:
          *(float *)(a1 + 4 * v12) = (float)((float)(1.0 - (float)((float)((float)(a4 - v17) + (float)(v16 - v17)) * 0.5))
                                           * (float)((float)(v8 - v11) * a3[5]))
                                   + *(float *)(a1 + 4 * v12);
          return result;
        }
LABEL_38:
        if ( v16 >= v17 && v16 <= v18 )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
  }
  return result;
}

//----- (0000000140181620) ----------------------------------------------------
_QWORD *           sub_140181620(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result;
  unsigned int v5;

  result = *(_QWORD **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = *result;
    return result;
  }
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 )
    goto LABEL_10;
  if ( a2 >= 0x20 )
  {
    v5 = 100;
    if ( a2 < 0x80 )
      v5 = 800;
  }
  else
  {
    v5 = 2000;
  }
  result = (_QWORD *)sr_path_malloc(a2 * v5 + 8);
  if ( result )
  {
    *result = *(_QWORD *)a1;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(result);
LABEL_10:
    *(_DWORD *)(a1 + 16) = v5 - 1;
    return (_QWORD *)(a2 * (int)(v5 - 1) + *(_QWORD *)a1 + 8LL);
  }
  return result;
}

//----- (00000001401816D0) ----------------------------------------------------
void            sub_1401816D0(_QWORD **a1)
{
  _QWORD *v1;
  _QWORD *v2;

  v1 = *a1;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      free(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}

//----- (0000000140181710) ----------------------------------------------------
__int64            sub_140181710(char *a1)
{
  char v1;

  v1 = *a1;
  if ( *a1 == 49 )
  {
    if ( a1[1] || a1[2] )
      return 0;
    return a1[3] == 0;
  }
  else
  {
    if ( v1 == 116 && a1[1] == 121 && a1[2] == 112 && a1[3] == 49 )
      return 1;
    if ( v1 == 79 )
    {
      if ( a1[1] != 84 || a1[2] != 84 )
        return 0;
      return a1[3] == 79;
    }
    else if ( v1 )
    {
      if ( v1 != 116 || a1[1] != 114 || a1[2] != 117 )
        return 0;
      return a1[3] == 101;
    }
    else
    {
      if ( a1[1] != 1 || a1[2] )
        return 0;
      return a1[3] == 0;
    }
  }
}

//----- (0000000140181790) ----------------------------------------------------
_BOOL8            sub_140181790(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  int v11;

  v8 = -1;
  do
    ++v8;
  while ( *(_BYTE *)(a3 + v8) );
  if ( !(unsigned int)sub_140181710((char *)(a2 + a1))
    || a4 && (((unsigned __int8)a4 ^ *(_BYTE *)((unsigned int)sub_140180D50(a1, a2, "head") + a1 + 45)) & 7) != 0 )
  {
    return 0;
  }
  v9 = sub_140180D50(a1, a2, "name");
  v10 = v9;
  if ( !v9 )
    return 0;
  if ( !a4 )
  {
    if ( !(unsigned int)sub_1401818E0(a1, v9, a3, v8, 16, 17) )
    {
      v11 = sub_1401818E0(a1, v10, a3, v8, 1, 2);
      return v11 || (unsigned int)sub_1401818E0(a1, v10, a3, v8, 3, -1);
    }
    return 1;
  }
  if ( (unsigned int)sub_1401818E0(a1, v9, a3, v8, 16, -1) )
    return 1;
  v11 = sub_1401818E0(a1, v10, a3, v8, 1, -1);
  return v11 || (unsigned int)sub_1401818E0(a1, v10, a3, v8, 3, -1);
}

//----- (00000001401818E0) ----------------------------------------------------
__int64            sub_1401818E0(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6;
  unsigned __int8 *v7;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401818E0[96];
#define v20 (*(int (*))(void *)(sr_frame_1401818E0 + 0)) /* [rsp+20h] */
#define v22 (*(unsigned int (*))(void *)(sr_frame_1401818E0 + 88)) /* [rsp+78h] */

  v22 = a2;
  v6 = 0;
  v7 = (unsigned __int8 *)(a1 + a2);
  v9 = v7[3] + (v7[2] << 8);
  v10 = a2 + (v7[4] << 8) + v7[5];
  v20 = v10;
  if ( !v9 )
    return 0;
  v11 = a1;
  while ( 1 )
  {
    v12 = a2 + 12 * v6 + 6;
    if ( *(unsigned __int8 *)(v12 + v11 + 7) + (*(unsigned __int8 *)(v12 + v11 + 6) << 8) != a5 )
      goto LABEL_21;
    v13 = *(unsigned __int8 *)(v12 + v11 + 1) + (*(unsigned __int8 *)(v12 + v11) << 8);
    v14 = *(unsigned __int8 *)(v12 + v11 + 3) + (*(unsigned __int8 *)(v12 + v11 + 2) << 8);
    v15 = *(unsigned __int8 *)(v12 + v11 + 5) + (*(unsigned __int8 *)(v12 + v11 + 4) << 8);
    if ( v13 )
    {
      if ( v13 != 3 || v14 != 1 && v14 != 10 )
        goto LABEL_21;
    }
    v16 = v10;
    v17 = sub_14017D6B0(
            a3,
            a4,
            (unsigned __int8 *)(v11
                              + v10
                              + ((unsigned __int64)*(unsigned __int8 *)(v12 + v11 + 10) << 8)
                              + *(unsigned __int8 *)(v12 + v11 + 11)),
            (*(unsigned __int8 *)(v12 + v11 + 8) << 8) + (unsigned int)*(unsigned __int8 *)(v12 + v11 + 9));
    v11 = a1;
    if ( v17 >= 0 )
    {
      if ( v6 + 1 < v9
        && *(unsigned __int8 *)(v12 + a1 + 19) + (*(unsigned __int8 *)(v12 + a1 + 18) << 8) == a6
        && *(unsigned __int8 *)(v12 + a1 + 13) + (*(unsigned __int8 *)(v12 + a1 + 12) << 8) == v13
        && *(unsigned __int8 *)(v12 + a1 + 15) + (*(unsigned __int8 *)(v12 + a1 + 14) << 8) == v14
        && *(unsigned __int8 *)(v12 + a1 + 17) + (*(unsigned __int8 *)(v12 + a1 + 16) << 8) == v15 )
      {
        v18 = *(unsigned __int8 *)(v12 + a1 + 21) + (*(unsigned __int8 *)(v12 + a1 + 20) << 8);
        if ( v18 )
        {
          if ( v17 < a4 && *(_BYTE *)(v17 + a3) == 32 )
          {
            if ( a4 - (v17 + 1) == (unsigned int)sub_14017D6B0(
                                                   a3 + v17 + 1,
                                                   a4 - (v17 + 1),
                                                   (unsigned __int8 *)(a1
                                                                     + v16
                                                                     + ((unsigned __int64)*(unsigned __int8 *)(v12 + a1 + 22) << 8)
                                                                     + *(unsigned __int8 *)(v12 + a1 + 23)),
                                                   v18) )
              return 1;
            v11 = a1;
          }
          goto LABEL_20;
        }
      }
      if ( v17 == a4 )
        return 1;
    }
LABEL_20:
    v10 = v20;
    a2 = v22;
LABEL_21:
    if ( ++v6 >= v9 )
      return 0;
  }
}
#undef v20
#undef v22

//----- (0000000140181B30) ----------------------------------------------------
__int64            sub_140181B30(__int64 a1, __int64 a2, int a3, float a4)
{
  __int64 v4;
  int v8;
  _QWORD *v9;
  _QWORD *v10;
  int v11;
  float v12;
  int v14;
  float v15;

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)v4;
    goto LABEL_8;
  }
  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v9 = (_QWORD *)sr_path_malloc(25608);
    v10 = v9;
    if ( !v9 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    *v9 = *(_QWORD *)a1;
    v8 = 800;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(v10);
  }
  v11 = v8 - 1;
  v4 = 32LL * v11 + *(_QWORD *)a1 + 8LL;
  *(_DWORD *)(a1 + 16) = v11;
LABEL_8:
  v12 = (float)(*(float *)(a2 + 8) - *(float *)a2) / (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4));
  if ( v4 )
  {
    v14 = 1065353216;
    v15 = 0.0;
    *(float *)(v4 + 12) = v12;
    if ( v12 != 0.0 )
      v15 = 1.0 / v12;
    *(float *)(v4 + 16) = v15;
    *(float *)(v4 + 8) = (float)((float)((float)(a4 - *(float *)(a2 + 4)) * v12) + *(float *)a2) - (float)a3;
    if ( !*(_DWORD *)(a2 + 16) )
      v14 = -1082130432;
    *(_DWORD *)(v4 + 20) = v14;
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)v4 = 0;
    return v4;
  }
  else
  {
    crt_assert((char *)L"z != ((void *)0)", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xABEu);
    return 0;
  }
}

//----- (0000000140181C60) ----------------------------------------------------
__int64            sub_140181C60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3;

  v3 = a3;
  if ( a3 >= 0x40000000 )
    crt_assert((char *)L"size < 0x40000000", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0x472u);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}

//----- (0000000140181CF0) ----------------------------------------------------
__int64            sub_140181CF0(
        int *a1,
        __int64 a2,
        int *a3,
        unsigned int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  int *v12;
  float v13;
  __int64 v14;
  __int64 v15;
  int *v16;
  int v17;
  __int64 v18;
  __m128i v19;
  __m128i v20;
  signed __int64 v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  int v26;
  int v27;
  float *v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  float *v39;
  float *v40;
  unsigned int v41;
  __int64 v42;
  float v43;
  __int64 v44;
  float v45;
  int v46;
  bool v47;
  bool v48;
  float v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  bool v57;
  bool v58;
  float v59;
  float v60;
  float v61;
  float v62;
  __int64 v63;
  int v64;
  bool v65;
  bool v66;
  float v67;
  float v68;
  float v69;
  float v70;
  __int64 v71;
  __int64 v72;
  int v73;
  bool v74;
  bool v75;
  float v76;
  float v77;
  float v78;
  __int64 v79;
  float *v80;
  float v81;
  __int64 v82;
  float v83;
  int v84;
  bool v85;
  bool v86;
  float v87;
  float v88;
  float v89;
  __int64 v90;
  float *v91;
  __int128 v92;
  float v93;
  float *v94;
  __int64 v95;
  float v96;
  int v97;
  __int64 v98;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140181CF0[144];
#define v100 (*(_QWORD (*)[8])(void *)(sr_frame_140181CF0 + 0)) /* [rsp+0h] */
#define v101 (*(int (*))(void *)(sr_frame_140181CF0 + 64)) /* [rsp+40h] */
#define v102 (*(int * (*))(void *)(sr_frame_140181CF0 + 72)) /* [rsp+48h] */
#define v103 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 80)) /* [rsp+50h] */
#define v104 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 88)) /* [rsp+58h] */
#define v105 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 96)) /* [rsp+60h] */
#define v106 (*(int * (*))(void *)(sr_frame_140181CF0 + 104)) /* [rsp+68h] */
#define v107 (*(__int128 (*))(void *)(sr_frame_140181CF0 + 112)) /* [rsp+70h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_140181CF0 + 136)) /* [rsp+88h] */

  v12 = a3;
  v13 = a6;
  v14 = a2;
  v15 = a4;
  v16 = a1;
  v102 = a3;
  v105 = a2;
  v106 = a1;
  if ( a11 )
    v13 = -a6;
  v17 = 0;
  LODWORD(v18) = 0;
  if ( (int)v15 >= 8 )
  {
    v19 = _mm_cvtsi64_si128((long long)(0));
    v20 = _mm_cvtsi64_si128((long long)(0));
    v21 = 0;
    do
    {
      LODWORD(v18) = v18 + 8;
      v19 = _mm_add_epi32(_mm_loadu_si128((     __m128i *)&a3[v21]), v19);
      v22 = _mm_loadu_si128((     __m128i *)&a3[v21 + 4]);
      v21 += 8LL;
      v23 = _mm_add_epi32(v22, v20);
      v20 = v23;
    }
    while ( v21 < (__int64)((int)v15 & 0xFFFFFFFFFFFFFFF8uLL) );
    v24 = _mm_add_epi32(v23, v19);
    v25 = _mm_add_epi32(v24, _mm_srli_si128(v24, 8));
    v17 = _mm_cvtsi128_si32(_mm_add_epi32(v25, _mm_srli_si128(v25, 4)));
  }
  v26 = 0;
  v18 = (int)v18;
  v27 = 0;
  if ( (int)v18 < (__int64)(int)v15 )
  {
    if ( (int)v15 - (__int64)(int)v18 < 2 )
      goto LABEL_11;
    do
    {
      v26 += v12[v18];
      v27 += v12[v18 + 1];
      v18 += 2;
    }
    while ( v18 < (int)v15 - 1LL );
    if ( v18 < (int)v15 )
LABEL_11:
      v17 += v12[v18];
    v17 += v27 + v26;
  }
  v104 = sr_path_malloc(20LL * (v17 + 1));
  v28 = (float *)v104;
  if ( !v104 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v29 = 0;
  v30 = 0;
  if ( (int)v15 <= 0 )
    goto LABEL_63;
  v31 = 0;
  v103 = v15;
  do
  {
    v32 = 0;
    v33 = 0;
    v34 = v14 + 8LL * v29;
    v35 = *v12;
    v29 += *v12;
    v101 = v29;
    v36 = v35 - 1;
    if ( v35 < 4 )
    {
      if ( v35 <= 0 )
        goto LABEL_61;
      v37 = v36;
    }
    else
    {
      v37 = v36;
      v38 = 2;
      v39 = &v28[5 * v31];
      v40 = (float *)(v34 + 20);
      v41 = ((unsigned int)(v35 - 4) >> 2) + 1;
      v42 = v41;
      v32 = 4 * v41;
      do
      {
        v43 = *(float *)(v34 + 8 * v37 + 4);
        v44 = v33;
        v45 = *(v40 - 4);
        if ( v43 != v45 )
        {
          v46 = 0;
          v39[4] = 0.0;
          if ( a11 )
          {
            v47 = v43 < v45;
            v48 = v43 == v45;
          }
          else
          {
            v47 = v45 < v43;
            v48 = v45 == v43;
          }
          LOBYTE(v46) = !v47 && !v48;
          if ( v46 )
          {
            v44 = v37;
            *((_DWORD *)v39 + 4) = 1;
            v37 = v33;
          }
          ++v30;
          ++v31;
          v49 = (float)(v13 * *(float *)(v34 + 8 * v44 + 4)) + a8;
          *v39 = (float)(a5 * *(float *)(v34 + 8 * v44)) + a7;
          v50 = a5 * *(float *)(v34 + 8 * v37);
          v39[1] = v49;
          v51 = (float)(v13 * *(float *)(v34 + 8 * v37 + 4)) + a8;
          v39[2] = v50 + a7;
          v39[3] = v51;
          v39 += 5;
        }
        v52 = *(v40 - 2);
        v53 = v38 - 1;
        v54 = v38 - 1;
        v55 = v33;
        if ( v45 != v52 )
        {
          v56 = 0;
          v39[4] = 0.0;
          if ( a11 )
          {
            v57 = v45 < v52;
            v58 = v45 == v52;
          }
          else
          {
            v57 = v52 < v45;
            v58 = v52 == v45;
          }
          LOBYTE(v56) = !v57 && !v58;
          if ( v56 )
          {
            *((_DWORD *)v39 + 4) = 1;
            v54 = v33;
            v55 = v38 - 1;
          }
          ++v30;
          ++v31;
          v59 = (float)(v13 * *(float *)(v34 + 8 * v54 + 4)) + a8;
          *v39 = (float)(a5 * *(float *)(v34 + 8 * v54)) + a7;
          v60 = a5 * *(float *)(v34 + 8 * v55);
          v39[1] = v59;
          v61 = (float)(v13 * *(float *)(v34 + 8 * v55 + 4)) + a8;
          v39[2] = v60 + a7;
          v39[3] = v61;
          v39 += 5;
        }
        v62 = *v40;
        v63 = v38;
        if ( v52 != *v40 )
        {
          v64 = 0;
          v39[4] = 0.0;
          if ( a11 )
          {
            v65 = v52 < v62;
            v66 = v52 == v62;
          }
          else
          {
            v65 = v62 < v52;
            v66 = v62 == v52;
          }
          LOBYTE(v64) = !v65 && !v66;
          if ( v64 )
          {
            v63 = v38 - 1;
            *((_DWORD *)v39 + 4) = 1;
            v53 = v38;
          }
          ++v30;
          ++v31;
          v67 = (float)(v13 * *(float *)(v34 + 8 * v63 + 4)) + a8;
          *v39 = (float)(a5 * *(float *)(v34 + 8 * v63)) + a7;
          v68 = a5 * *(float *)(v34 + 8 * v53);
          v39[1] = v67;
          v69 = (float)(v13 * *(float *)(v34 + 8 * v53 + 4)) + a8;
          v39[2] = v68 + a7;
          v39[3] = v69;
          v39 += 5;
        }
        v70 = v40[2];
        v37 = v38 + 1;
        v71 = v38 + 1;
        v72 = v38;
        if ( v62 != v70 )
        {
          v73 = 0;
          v39[4] = 0.0;
          if ( a11 )
          {
            v74 = v62 < v70;
            v75 = v62 == v70;
          }
          else
          {
            v74 = v70 < v62;
            v75 = v70 == v62;
          }
          LOBYTE(v73) = !v74 && !v75;
          if ( v73 )
          {
            *((_DWORD *)v39 + 4) = 1;
            v71 = v38;
            v72 = v38 + 1;
          }
          ++v30;
          ++v31;
          v76 = (float)(v13 * *(float *)(v34 + 8 * v71 + 4)) + a8;
          *v39 = (float)(a5 * *(float *)(v34 + 8 * v71)) + a7;
          v77 = a5 * *(float *)(v34 + 8 * v72);
          v39[1] = v76;
          v78 = (float)(v13 * *(float *)(v34 + 8 * v72 + 4)) + a8;
          v39[2] = v77 + a7;
          v39[3] = v78;
          v39 += 5;
        }
        v33 += 4;
        v38 += 4;
        v40 += 8;
        --v42;
      }
      while ( v42 );
      v12 = v102;
      v28 = (float *)v104;
      v15 = v103;
      if ( v32 >= v35 )
        goto LABEL_60;
    }
    v79 = (unsigned int)(v35 - v32);
    v80 = &v28[4 * v31 + 4 + v31];
    do
    {
      v81 = *(float *)(v34 + 8 * v37 + 4);
      v82 = v33;
      v83 = *(float *)(v34 + 8 * v33 + 4);
      if ( v81 != v83 )
      {
        v84 = 0;
        *v80 = 0.0;
        if ( a11 )
        {
          v85 = v81 < v83;
          v86 = v81 == v83;
        }
        else
        {
          v85 = v83 < v81;
          v86 = v83 == v81;
        }
        LOBYTE(v84) = !v85 && !v86;
        if ( v84 )
        {
          v82 = v37;
          *(_DWORD *)v80 = 1;
          v37 = v33;
        }
        ++v30;
        ++v31;
        v87 = (float)(v13 * *(float *)(v34 + 8 * v82 + 4)) + a8;
        *(v80 - 4) = (float)(a5 * *(float *)(v34 + 8 * v82)) + a7;
        v88 = a5 * *(float *)(v34 + 8 * v37);
        *(v80 - 3) = v87;
        v89 = (float)(v13 * *(float *)(v34 + 8 * v37 + 4)) + a8;
        *(v80 - 2) = v88 + a7;
        *(v80 - 1) = v89;
        v80 += 5;
      }
      v37 = v33++;
      --v79;
    }
    while ( v79 );
LABEL_60:
    v29 = v101;
LABEL_61:
    v14 = v105;
    ++v12;
    --v15;
    v102 = v12;
    v103 = v15;
  }
  while ( v15 );
  v16 = v106;
LABEL_63:
  sub_140183BF0(v28, v30);
  if ( v30 > 1LL )
  {
    v90 = 1;
    v91 = v28 + 5;
    do
    {
      v92 = *(_OWORD *)v91;
      v93 = v91[4];
      v94 = v91 - 5;
      v95 = v90;
      v107 = *(_OWORD *)v91;
      v96 = *((float *)&v107 + 1);
      do
      {
        if ( v96 >= v94[1] )
          break;
        v97 = *((_DWORD *)v94 + 4);
        --v95;
        *(_OWORD *)(v94 + 5) = *(_OWORD *)v94;
        *((_DWORD *)v94 + 9) = v97;
        v94 -= 5;
      }
      while ( v95 > 0 );
      if ( v90 != v95 )
      {
        v98 = 5 * v95;
        *(_OWORD *)&v28[v98] = v92;
        v28[v98 + 4] = v93;
      }
      ++v90;
      v91 += 5;
    }
    while ( v90 < v30 );
  }
  v100[6] = a12;
  sub_140182310(v16, (__int64)v28, v30, 1, a9, a10);
  free(v28);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108

//----- (0000000140182310) ----------------------------------------------------
__int64            sub_140182310(int *a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int v6;
  int v7;
  float *v9;
  _QWORD *v10;
  float *v12;
  int v13;
  __int64 v14;
  _WORD *v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  float **v20;
  float v21;
  float v22;
  int v23;
  char *v24;
  float v25;
  __int64 v26;
  _QWORD *v27;
  float v28;
  float v29;
  int v30;
  float v31;
  int v32;
  int v33;
  float v34;
  float *v35;
  signed __int64 v36;
  int v37;
  int v38;
  float **v39;
  float **v40;
  _QWORD *v41;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140182310[624];
#define v43 (*(__int64 (*))(void *)(sr_frame_140182310 + 0)) /* [rsp+0h] */
#define v44 (*(int (*))(void *)(sr_frame_140182310 + 48)) /* [rsp+30h] */
#define v45 (*(_WORD * (*))(void *)(sr_frame_140182310 + 56)) /* [rsp+38h] */
#define v46 (*(float * (*))(void *)(sr_frame_140182310 + 64)) /* [rsp+40h] */
#define v47 (*(char * (*))(void *)(sr_frame_140182310 + 72)) /* [rsp+48h] */
#define v48 (*(_BYTE (*)[528])(void *)(sr_frame_140182310 + 80)) /* [rsp+50h] */
#define v49 (*(__int64 (*))(void *)(sr_frame_140182310 + 608)) /* [rsp+260h] */

  v6 = *a1;
  v7 = 0;
  v9 = nullptr;
  v10 = nullptr;
  v12 = nullptr;
  v13 = 0;
  v14 = a3;
  v46 = nullptr;
  v44 = 0;
  if ( v6 <= 64 )
  {
    v15 = v48;
  }
  else
  {
    v15 = (_WORD *)sr_path_malloc(4LL * (2 * v6 + 1));
    v13 = 0;
    v6 = *a1;
  }
  v16 = a6;
  v45 = v15;
  v17 = (char *)&v15[2 * v6];
  v18 = a6 + a1[1];
  v47 = v17;
  *(float *)(a2 + 20 * v14 + 4) = (float)v18 + 1.0;
  if ( a1[1] > 0 )
  {
    while ( 1 )
    {
      v19 = *a1;
      v20 = &v46;
      v21 = (float)(v13 + v16);
      v22 = v21 + 1.0;
      crt_memset((void *)(uintptr_t)(v45), 0, 4LL * *a1);
      v23 = v19 + 1;
      v24 = v47;
      crt_memset((void *)(uintptr_t)(v47), 0, 4LL * v23);
      if ( v9 )
      {
        do
        {
          if ( v21 < v9[7] )
          {
            v20 = (float **)v9;
          }
          else
          {
            *v20 = *(float **)v9;
            if ( v9[5] == 0.0 )
              crt_assert(
                (char *)L"z->direction",
                (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                0xC4Eu);
            *(_QWORD *)v9 = (uint64)(uintptr_t)(v12);
            v12 = v9;
            v9[5] = 0.0;
          }
          v9 = *v20;
        }
        while ( *v20 );
        v9 = v46;
      }
      v25 = *(float *)(a2 + 4);
      if ( v25 <= v22 )
        break;
LABEL_35:
      v15 = v45;
      if ( v9 )
        sub_140180640((__int64)v45, (__int64)(v24 + 4), *a1, v9, v21);
      v32 = v44;
      v33 = 0;
      v34 = 0.0;
      if ( *a1 > 0 )
      {
        v35 = (float *)v45;
        v36 = v24 - (char *)v45;
        do
        {
          v34 = v34 + *(float *)((char *)v35 + v36);
          v37 = (int)(float)((float)(fabs(v34 + *v35) * 255.0) + 0.5);
          if ( v37 > 255 )
            LOBYTE(v37) = -1;
          ++v35;
          v38 = v33 + v32 * a1[2];
          ++v33;
          *(_BYTE *)(v38 + *((_QWORD *)a1 + 2)) = v37;
        }
        while ( v33 < *a1 );
        v15 = v45;
      }
      v39 = &v46;
      if ( v9 )
      {
        v40 = (float **)v9;
        do
        {
          *((float *)v40 + 2) = *((float *)v40 + 3) + *((float *)v40 + 2);
          v39 = (float **)*v39;
          v40 = (float **)*v39;
        }
        while ( *v39 );
      }
      v16 = a6;
      v13 = v32 + 1;
      v44 = v13;
      if ( v13 >= a1[1] )
        goto LABEL_47;
    }
    while ( v25 == *(float *)(a2 + 12) )
    {
LABEL_33:
      v25 = *(float *)(a2 + 24);
      a2 += 20;
      if ( v25 > v22 )
      {
        v24 = v47;
        goto LABEL_35;
      }
    }
    if ( v12 )
    {
      v26 = (__int64)v12;
      v12 = *(float **)v12;
      goto LABEL_22;
    }
    if ( !v7 )
    {
      v27 = (_QWORD *)sr_path_malloc(25608);
      if ( !v27 )
      {
        v26 = 0;
        goto LABEL_22;
      }
      *v27 = (uint64)(uintptr_t)(v10);
      v7 = 800;
      v10 = v27;
    }
    v26 = (__int64)&v10[4 * --v7 + 1];
LABEL_22:
    v28 = (float)(*(float *)(a2 + 8) - *(float *)a2) / (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4));
    if ( v26 )
    {
      *(float *)(v26 + 12) = v28;
      if ( v28 == 0.0 )
        v29 = 0.0;
      else
        v29 = 1.0 / v28;
      *(float *)(v26 + 16) = v29;
      *(float *)(v26 + 8) = (float)((float)((float)(v21 - *(float *)(a2 + 4)) * v28) + *(float *)a2) - (float)a5;
      if ( *(_DWORD *)(a2 + 16) )
        v30 = 1065353216;
      else
        v30 = -1082130432;
      *(_DWORD *)(v26 + 20) = v30;
      *(_DWORD *)(v26 + 24) = *(_DWORD *)(a2 + 4);
      v31 = *(float *)(a2 + 12);
      *(_QWORD *)v26 = 0;
      *(float *)(v26 + 28) = v31;
      if ( v31 < v21 )
        crt_assert(
          (char *)L"z->ey >= scan_y_top",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
          0xC5Bu);
      *(_QWORD *)v26 = (uint64)(uintptr_t)(v9);
      v9 = (float *)v26;
      v46 = (float *)v26;
    }
    else
    {
      crt_assert((char *)L"z != ((void *)0)", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 0xABEu);
    }
    goto LABEL_33;
  }
LABEL_47:
  if ( v10 )
  {
    do
    {
      v41 = (_QWORD *)*v10;
      free(v10);
      v10 = v41;
    }
    while ( v41 );
  }
  if ( v15 != (_WORD *)v48 )
    free(v15);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49

//----- (00000001401827E0) ----------------------------------------------------
__int64            sub_1401827E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6;
  float v7;
  float v8;
  float v9;
  unsigned int v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;

  v6 = 0.0;
  v7 = *a2;
  v8 = *a2;
  v9 = a2[1];
  v10 = 0;
  v11 = a3[1];
  v12 = (float)(v8 * v11) - (float)(*a3 * v9);
  v13 = (float)(a4[1] * v7) - (float)(*a4 * v9);
  v14 = v13 + v13;
  v15 = v13 - v12;
  v16 = (float)((float)(a5[1] * v7) - (float)(*a5 * v9)) + (float)(v12 - v14);
  v17 = v12 - (float)((float)(a1[1] * v7) - (float)(*a1 * v9));
  if ( v16 == 0.0 )
  {
    v20 = (float)(-0.5 / v15) * v17;
    if ( v20 < 0.0 || v20 > 1.0 )
      return 0;
    v10 = 1;
  }
  else
  {
    v18 = (float)(v15 * v15) - (float)(v17 * v16);
    if ( v18 <= 0.0 )
      return 0;
    v19 = fsqrt(v18);
    v6 = (float)(v15 - v19) * (float)(-1.0 / v16);
    v20 = (float)(v19 + v15) * (float)(-1.0 / v16);
    if ( v20 >= 0.0 )
      v10 = v20 <= 1.0;
    if ( v19 > 0.0 && v6 >= 0.0 && v6 <= 1.0 )
    {
      if ( !v10 )
        v20 = (float)(v15 - v19) * (float)(-1.0 / v16);
      ++v10;
    }
    if ( !v10 )
      return 0;
  }
  v22 = 1.0 / (float)((float)(v9 * v9) + (float)(v7 * v7));
  v23 = v7 * v22;
  v24 = v9 * v22;
  v25 = (float)(*a3 * v23) + (float)(v11 * v24);
  v26 = (float)((float)(*a5 * v23) + (float)(a5[1] * v24)) - v25;
  v27 = (float)((float)(*a4 * v23) + (float)(a4[1] * v24)) - v25;
  v28 = v25 - (float)((float)(*a1 * v23) + (float)(a1[1] * v24));
  a6[1] = (float)(v20 * v16) + v15;
  *a6 = (float)((float)((float)((float)(2.0 - (float)(v20 + v20)) * v20) * v27) + v28)
      + (float)((float)(v20 * v20) * v26);
  if ( v10 <= 1 )
    return 1;
  a6[3] = (float)(v6 * v16) + v15;
  a6[2] = (float)((float)((float)((float)(2.0 - (float)(v6 + v6)) * v6) * v27) + v28) + (float)((float)(v6 * v6) * v26);
  return 2;
}

//----- (0000000140182AD0) ----------------------------------------------------
__int64            sub_140182AD0(__int64 a1, int a2, __int64 a3)
{
  int v4;
  int v5;
  __m128i v6;
  __m128i *v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  int v16;
  int v17;
  __int64 v18;
  __int32 v19;
  int v20;
  int v21;
  int v22;
  __int32 v23;
  float *v24;
  int v25;
  __int64 v26;
  float v28;
  float v29;
  int v30;
  float *v31;
  int v32;
  float *v33;
  float *v34;
  __int64 v35;
  int v36;
  float v37;
  __int64 v38;
  int v39;
  float *v40;
  float v41;
  float v42;
  float v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __m128i *v47;
  unsigned __int8 v48;
  __int32 v49;
  __int64 v50;
  int v51;
  unsigned __int8 v52;
  unsigned int v53;
  int v54;
  int v55;
  __m128i v56;
  char v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  __int32 v63;
  int v64;
  __int16 v65;
  float v66;
  unsigned __int8 v67;
  int v68;
  unsigned __int8 v69;
  __int64 v70;
  int v71;
  unsigned __int8 v72;
  __int64 v73;
  int v74;
  unsigned __int8 v75;
  __int64 v76;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140182AD0[560];
#define v77 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 0)) /* [rsp+8h] */
#define v78 (*(float (*))(void *)(sr_frame_140182AD0 + 40)) /* [rsp+30h] */
#define v79 (*(float (*))(void *)(sr_frame_140182AD0 + 48)) /* [rsp+38h] */
#define v80 (*(int (*))(void *)(sr_frame_140182AD0 + 64)) /* [rsp+48h] */
#define v81 (*(__m128i (*))(void *)(sr_frame_140182AD0 + 80)) /* [rsp+58h] */
#define v82 (*(int (*))(void *)(sr_frame_140182AD0 + 96)) /* [rsp+68h] */
#define v83 (*(int (*))(void *)(sr_frame_140182AD0 + 100)) /* [rsp+6Ch] */
#define v84 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 104)) /* [rsp+70h] */
#define v85 (*(__m128i (*))(void *)(sr_frame_140182AD0 + 112)) /* [rsp+78h] */
#define v86 (*(int (*))(void *)(sr_frame_140182AD0 + 128)) /* [rsp+88h] */
#define v87 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 136)) /* [rsp+90h] */
#define v88 (*(__int128 (*))(void *)(sr_frame_140182AD0 + 144)) /* [rsp+98h] */
#define v89 (*(__int128 (*))(void *)(sr_frame_140182AD0 + 160)) /* [rsp+A8h] */
#define v90 (*(__int128 (*))(void *)(sr_frame_140182AD0 + 176)) /* [rsp+B8h] */
#define v91 (*(float (*))(void *)(sr_frame_140182AD0 + 192)) /* [rsp+C8h] */
#define v92 (*(float (*))(void *)(sr_frame_140182AD0 + 196)) /* [rsp+CCh] */
#define v93 (*(float (*))(void *)(sr_frame_140182AD0 + 200)) /* [rsp+D0h] */
#define v94 (*(float (*))(void *)(sr_frame_140182AD0 + 204)) /* [rsp+D4h] */
#define v95 (*(float (*))(void *)(sr_frame_140182AD0 + 208)) /* [rsp+D8h] */
#define v96 (*(float (*))(void *)(sr_frame_140182AD0 + 212)) /* [rsp+DCh] */
#define v97 (*(float (*))(void *)(sr_frame_140182AD0 + 216)) /* [rsp+E0h] */
#define v98 (*(float (*))(void *)(sr_frame_140182AD0 + 220)) /* [rsp+E4h] */
#define v99 (*(float (*))(void *)(sr_frame_140182AD0 + 224)) /* [rsp+E8h] */
#define v100 (*(float (*))(void *)(sr_frame_140182AD0 + 228)) /* [rsp+ECh] */
#define v101 (*(float (*))(void *)(sr_frame_140182AD0 + 232)) /* [rsp+F0h] */
#define v102 (*(float (*))(void *)(sr_frame_140182AD0 + 236)) /* [rsp+F4h] */
#define v103 (*(__m128i (*)[10])(void *)(sr_frame_140182AD0 + 384)) /* [rsp+188h] */
#define v104 (*(__int64 (*))(void *)(sr_frame_140182AD0 + 544)) /* [rsp+228h] */

  v87 = a1;
  v86 = a2;
  v82 = 0;
  v4 = 0;
  v84 = 0;
  v5 = 0;
  v6 = *(__m128i_u *)(a1 + 80);
  v88 = *(_OWORD *)(a1 + 112);
  v83 = 1;
  v85 = v6;
  v7 = (__m128i *)sub_14017F410(&v81, (__int64)&v85, a2);
  v8 = v97;
  v9 = v96;
  v10 = v95;
  v11 = v94;
  v12 = v93;
  v13 = v92;
  v14 = v91;
  v15 = v99;
  v81 = *v7;
  v16 = SR_VEC_LANES(128, v81, i32)[2];
  while ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
  {
    v17 = 0;
    v18 = v16++;
    v80 = 1;
    v19 = v16;
    SR_VEC_LANES(128, v81, i32)[2] = v16;
    v20 = *(unsigned __int8 *)(v18 + SR_VEC_LANES(128, v81, i64)[0]);
    v21 = v20;
    switch ( *(_BYTE *)(v18 + SR_VEC_LANES(128, v81, i64)[0]) )
    {
      case 1:
      case 3:
      case 0x12:
      case 0x17:
        v82 += v5 / 2;
        v5 = 0;
        continue;
      case 4:
        v83 = 0;
        if ( v5 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, 0.0, *((float *)&v90 + v5 + 3));
        v5 = 0;
        continue;
      case 5:
        if ( v5 < 2 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v24 = &v91;
        do
        {
          sub_140180060(a3, *v24, v24[1]);
          v24 = (float *)(v26 + 8);
        }
        while ( v25 + 2 < v5 );
        v5 = 0;
        continue;
      case 6:
        if ( v5 >= 1 )
          goto LABEL_27;
        return 0; /* 0x140182DEF: xor eax, eax */
      case 7:
        if ( v5 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        while ( v17 < v5 )
        {
          sub_140180060(a3, 0.0, *(&v91 + v17++));
LABEL_27:
          if ( v17 >= v5 )
            break;
          sub_140180060(a3, *(&v91 + v17++), 0.0);
        }
        goto LABEL_68;
      case 8:
        if ( v5 < 6 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v30 = 5;
        v31 = &v95;
        do
        {
          sub_14017FFC0(a3, *(v31 - 4), *(v31 - 3), *(v31 - 2), *(v31 - 1), *v31, v31[1]);
          v30 += 6;
          v31 += 6;
        }
        while ( v30 < v5 );
        v5 = 0;
        continue;
      case 0xA:
        v44 = v87;
        if ( !HIDWORD(v84) )
        {
          if ( *(_DWORD *)(v87 + 156) )
            v88 = *sub_14017F820(&v89, v87, v86);
          HIDWORD(v84) = 1;
        }
        goto LABEL_74;
      case 0xB:
        if ( v4 <= 0 )
          return 0; /* 0x140182DEF: xor eax, eax */
        LODWORD(v84) = --v4;
        v81 = v103[v4];
        v16 = SR_VEC_LANES(128, v81, i32)[2];
        continue;
      case 0xC:
        if ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
        {
          v57 = *(_BYTE *)(v16++ + SR_VEC_LANES(128, v81, i64)[0]);
          SR_VEC_LANES(128, v81, i32)[2] = v19 + 1;
        }
        else
        {
          v57 = 0;
        }
        switch ( v57 )
        {
          case '"':
            if ( v5 < 7 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, v14, 0.0, v13, v12, v11, 0.0);
            sub_14017FFC0(a3, v10, 0.0, v9, -v12, v8, 0.0);
            v5 = 0;
            break;
          case '#':
            if ( v5 < 13 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, v14, v13, v12, v11, v10, v9);
            v79 = v102;
            v78 = v101;
LABEL_115:
            v62 = v99;
            sub_14017FFC0(a3, v8, v98, v99, v100, v78, v79);
            v15 = v62;
            v5 = 0;
            continue;
          case '$':
            if ( v5 < 9 )
              return 0; /* 0x140182DEF: xor eax, eax */
            sub_14017FFC0(a3, v14, v13, v12, v11, v10, 0.0);
            sub_14017FFC0(a3, v9, 0.0, v8, v98, v15, -(float)((float)(v11 + v13) + v98));
            v5 = 0;
            break;
          default:
            if ( v57 != 37 || v5 < 11 )
              return 0; /* 0x140182DEF: xor eax, eax */
            v58 = v101;
            v59 = v101;
            v60 = (float)((float)((float)(v12 + v14) + v10) + v8) + v99;
            v61 = (float)((float)((float)(v11 + v13) + v9) + v98) + v100;
            if ( fabs(v60) <= fabs(v61) )
              v59 = -v60;
            else
              v58 = -v61;
            sub_14017FFC0(a3, v14, v13, v12, v11, v10, v9);
            v79 = v58;
            v78 = v59;
            goto LABEL_115;
        }
        break;
      case 0xE:
        sub_14017FF00(a3);
        return 1; /* 0x14018378E: mov eax, 1 */
      case 0x13:
      case 0x14:
        v22 = v82;
        if ( v83 )
        {
          v22 = v5 / 2 + v82;
          v82 = v22;
        }
        v23 = SR_VEC_LANES(128, v81, i32)[3];
        v83 = 0;
        v16 += (v22 + 7) / 8;
        if ( v16 > SR_VEC_LANES(128, v81, i32)[3] || v16 < 0 )
          crt_assert(
            (char *)L"!(o > b->size || o < 0)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x45Cu);
        if ( v16 > v23 || v16 < 0 )
        {
          SR_VEC_LANES(128, v81, i32)[2] = v23;
          v16 = v23;
          v5 = 0;
        }
        else
        {
          SR_VEC_LANES(128, v81, i32)[2] = v16;
          v5 = 0;
        }
        continue;
      case 0x15:
        v83 = 0;
        if ( v5 < 2 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, *((float *)&v90 + v5 + 2), *((float *)&v90 + v5 + 3));
        v5 = 0;
        continue;
      case 0x16:
        v83 = 0;
        if ( v5 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180120(a3, *((float *)&v90 + v5 + 3), 0.0);
        v5 = 0;
        continue;
      case 0x18:
        if ( v5 < 8 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v32 = 5;
        v33 = &v95;
        do
        {
          sub_14017FFC0(a3, *(v33 - 4), *(v33 - 3), *(v33 - 2), *(v33 - 1), *v33, v33[1]);
          v17 += 6;
          v33 += 6;
          v32 += 6;
        }
        while ( v32 < v5 - 2 );
        if ( v17 + 1 >= v5 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_140180060(a3, *(&v91 + v17), *(&v92 + v17));
        v4 = v84;
        v5 = 0;
        continue;
      case 0x19:
        if ( v5 < 8 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v34 = &v91;
        do
        {
          sub_140180060(a3, *v34, v34[1]);
          v17 += 2;
          v34 = (float *)(v35 + 8);
        }
        while ( v36 + 2 < v5 - 6 );
        if ( v17 + 5 >= v5 )
          return 0; /* 0x140182DEF: xor eax, eax */
        sub_14017FFC0(a3, *(&v91 + v17), *(&v92 + v17), *(&v93 + v17), *(&v94 + v17), *(&v95 + v17), *(&v96 + v17));
        v5 = 0;
        continue;
      case 0x1A:
      case 0x1B:
        if ( v5 < 4 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v37 = 0.0;
        v38 = v5 & 1;
        if ( (v5 & 1) != 0 )
          v37 = v14;
        v39 = v38 + 3;
        if ( (int)v38 + 3 >= v5 )
          goto LABEL_68;
        v40 = &v93 + v38;
        do
        {
          v41 = v40[1];
          if ( (_BYTE)v20 == 27 )
          {
            v42 = v40[1];
            v43 = *(v40 - 2);
            v41 = 0.0;
          }
          else
          {
            v43 = v37;
            v42 = 0.0;
            v37 = *(v40 - 2);
          }
          sub_14017FFC0(a3, v43, v37, *(v40 - 1), *v40, v42, v41);
          v39 += 4;
          v40 += 4;
          v37 = 0.0;
        }
        while ( v39 < v5 );
        v5 = 0;
        continue;
      case 0x1D:
        v44 = v87;
LABEL_74:
        if ( v5 < 1 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v45 = (int)*(&v91 + --v5);
        if ( v4 >= 10 )
          return 0; /* 0x140182DEF: xor eax, eax */
        v46 = v4++;
        LODWORD(v84) = v4;
        v103[v46] = v81;
        v47 = (__m128i *)&v88;
        if ( v21 != 10 )
          v47 = (__m128i *)(v44 + 96);
        v81 = *v47;
        if ( SR_VEC_READ_LANES(128, _mm_srli_si128(v81, 8), i32)[1] < 0 )
          crt_assert(
            (char *)L"!(o > b->size || o < 0)",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
            0x45Cu);
        v48 = 0;
        v49 = SR_VEC_LANES(128, v81, i32)[3];
        if ( SR_VEC_LANES(128, v81, i32)[3] >= 0 )
          v49 = 0;
        SR_VEC_LANES(128, v81, i32)[2] = v49;
        if ( v49 < SR_VEC_LANES(128, v81, i32)[3] )
        {
          v50 = v49++;
          SR_VEC_LANES(128, v81, i32)[2] = v49;
          v48 = *(_BYTE *)(v50 + SR_VEC_LANES(128, v81, i64)[0]);
        }
        v51 = v48;
        if ( v49 < SR_VEC_LANES(128, v81, i32)[3] )
        {
          SR_VEC_LANES(128, v81, i32)[2] = v49 + 1;
          v52 = *(_BYTE *)(v49 + SR_VEC_LANES(128, v81, i64)[0]);
        }
        else
        {
          v52 = 0;
        }
        v53 = v52 | (v51 << 8);
        if ( v53 < 0x846C )
        {
          v54 = 107;
          if ( v53 >= 0x4D8 )
            v54 = 1131;
        }
        else
        {
          v54 = 0x8000;
        }
        v55 = v54 + v45;
        if ( v54 + v45 < 0 || v55 >= (int)v53 )
        {
          v85 = _mm_cvtsi64_si128((long long)(0u));
          v56 = _mm_cvtsi64_si128((long long)(0u));
        }
        else
        {
          v85 = v81;
          v56 = *(__m128i_u *)sub_14017F410(&v90, (__int64)&v85, v55);
          v85 = v56;
        }
        v81 = v56;
        if ( !SR_VEC_READ_LANES(128, _mm_srli_si128(v56, 8), u32)[1] )
          return 0; /* 0x140182DEF: xor eax, eax */
        SR_VEC_LANES(128, v81, i32)[2] = 0;
        v16 = 0;
        continue;
      case 0x1E:
        if ( v5 >= 4 )
          goto LABEL_34;
        return 0; /* 0x140182DEF: xor eax, eax */
      case 0x1F:
        if ( v5 < 4 )
          return 0; /* 0x140182DEF: xor eax, eax */
        while ( v17 + 3 < v5 )
        {
          v29 = v5 - v17 == 5 ? *(&v91 + v17 + 4) : 0.0;
          sub_14017FFC0(a3, *(&v91 + v17), 0.0, *(&v92 + v17), *(&v93 + v17), v29, *(&v94 + v17));
          v17 += 4;
LABEL_34:
          if ( v17 + 3 >= v5 )
            break;
          if ( v5 - v17 == 5 )
            v28 = *(&v91 + v17 + 4);
          else
            v28 = 0.0;
          sub_14017FFC0(a3, 0.0, *(&v91 + v17), *(&v92 + v17), *(&v93 + v17), *(&v94 + v17), v28);
          v17 += 4;
        }
LABEL_68:
        v5 = 0;
        continue;
      default:
        if ( v20 == 255 )
        {
          if ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
          {
            v67 = *(_BYTE *)(v16++ + SR_VEC_LANES(128, v81, i64)[0]);
            SR_VEC_LANES(128, v81, i32)[2] = ++v19;
          }
          else
          {
            v67 = 0;
          }
          v68 = v67;
          if ( v19 < SR_VEC_LANES(128, v81, i32)[3] )
          {
            v70 = v16++;
            SR_VEC_LANES(128, v81, i32)[2] = v16;
            v69 = *(_BYTE *)(v70 + SR_VEC_LANES(128, v81, i64)[0]);
          }
          else
          {
            v69 = 0;
          }
          v71 = v69 | (v68 << 8);
          if ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
          {
            v73 = v16++;
            SR_VEC_LANES(128, v81, i32)[2] = v16;
            v72 = *(_BYTE *)(v73 + SR_VEC_LANES(128, v81, i64)[0]);
          }
          else
          {
            v72 = 0;
          }
          v74 = v72 | (v71 << 8);
          if ( v16 < SR_VEC_LANES(128, v81, i32)[3] )
          {
            v76 = v16++;
            SR_VEC_LANES(128, v81, i32)[2] = v16;
            v75 = *(_BYTE *)(v76 + SR_VEC_LANES(128, v81, i64)[0]);
          }
          else
          {
            v75 = 0;
          }
          v66 = (float)(v75 | (v74 << 8)) * 0.000015258789;
        }
        else
        {
          if ( v20 != 28 && (unsigned int)(v20 - 32) > 0xDE )
            return 0; /* 0x140182DEF: xor eax, eax */
          v63 = SR_VEC_LANES(128, v81, i32)[3];
          v64 = v16 - 1;
          if ( v16 - 1 > SR_VEC_LANES(128, v81, i32)[3] || v64 < 0 )
            crt_assert(
              (char *)L"!(o > b->size || o < 0)",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0x45Cu);
          if ( v64 > v63 || (SR_VEC_LANES(128, v81, i32)[2] = v16 - 1, v64 < 0) )
            SR_VEC_LANES(128, v81, i32)[2] = v63;
          v65 = sub_14017F5B0((__int64)&v81);
          v16 = SR_VEC_LANES(128, v81, i32)[2];
          v66 = (float)v65;
        }
        if ( v5 >= 48 )
          return 0; /* 0x140182DEF: xor eax, eax */
        *(&v91 + v5) = v66;
        v8 = v97;
        v9 = v96;
        ++v5;
        v10 = v95;
        v11 = v94;
        v12 = v93;
        v13 = v92;
        v14 = v91;
        v15 = v99;
        continue;
    }
  }
  return 0; /* 0x140182DEF: xor eax, eax */
}
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
#undef v85
#undef v86
#undef v87
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104

// 140182CAF: conditional instruction was optimized away because %var_2C0.4==1
// 140182CC9: conditional instruction was optimized away because %var_2C0.4==1
// 140182CE7: conditional instruction was optimized away because %var_2C0.4==1
// 140182D22: conditional instruction was optimized away because %var_2C0.4==1
// 140182D5B: conditional instruction was optimized away because %var_2C0.4==1
// 140182D94: conditional instruction was optimized away because %var_2C0.4==1
// 140182DDC: conditional instruction was optimized away because %var_2C0.4==1
// 140182FDE: conditional instruction was optimized away because %var_2C0.4==1
// 140182FF9: conditional instruction was optimized away because edi.4>=8
// 14018308B: conditional instruction was optimized away because %var_2C0.4==1
// 1401830A4: conditional instruction was optimized away because edi.4>=8
// 14018312D: conditional instruction was optimized away because %var_2C0.4==1
// 1401831CC: conditional instruction was optimized away because %var_2C0.4==1
// 1401831E2: conditional instruction was optimized away because %var_2C0.4==1
// 140183524: conditional instruction was optimized away because %var_2C0.4==1
// 1401835A6: conditional instruction was optimized away because %var_2C0.4==1
// 140183621: conditional instruction was optimized away because %var_2C0.4==1

//----- (0000000140183820) ----------------------------------------------------
__int64            sub_140183820(float a1, float a2, float a3, float *a4)
{
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __m128 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;

  v5 = a2 - (float)((float)(a1 * a1) * 0.33333334);
  v6 = a1 * -0.33333334;
  v7 = (float)(v5 * v5) * v5;
  v8 = (float)((float)((float)((float)((float)(a1 + a1) * a1) - (float)(a2 * 9.0)) * a1) * 0.037037037) + a3;
  v9 = (float)(v8 * v8) + (float)(v7 * 0.14814815);
  if ( v9 < 0.0 )
  {
    v18 = ((__m128)_mm_cvtsi32_si128((int)(0xC1D80000)));
    SR_VEC_LANES(128, v18, f32)[0] = -27.0 / v7;
    v19 = fsqrt(v5 * -0.33333334);
    v20 = acos(SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v18)), f64)[0] * v8 * -0.5);
    v21 = v20 * 0.33333334;
    v22 = cosf(v21);
    *(double *)SR_VEC_LANES(128, v18, u64) = cos(v21 - 1.570796);
    v23 = *(double *)SR_VEC_LANES(128, v18, u64);
    v24 = v23 * 1.7320508;
    *a4 = (float)((float)(v19 + v19) * v22) + v6;
    a4[1] = v6 - (float)((float)(v24 + v22) * v19);
    a4[2] = v6 - (float)((float)(v22 - v24) * v19);
    return 3;
  }
  else
  {
    v10 = fsqrt(v9);
    v11 = (float)(v10 - v8) * 0.5;
    v12 = (float)((float)-v8 - v10) * 0.5;
    if ( v11 >= 0.0 )
    {
      v14 = pow(v11, 0.3333333432674408);
    }
    else
    {
      v13 = pow((float)-v11, 0.3333333432674408);
      v14 = -v13;
    }
    if ( v12 >= 0.0 )
    {
      v16 = pow(v12, 0.3333333432674408);
    }
    else
    {
      v15 = pow((float)-v12, 0.3333333432674408);
      v16 = -v15;
    }
    *a4 = (float)(v14 + v6) + v16;
    return 1;
  }
}

//----- (0000000140183A70) ----------------------------------------------------
__int64            sub_140183A70(float *a1, int a2)
{
  __int64 v2;
  __int64 v4;
  float *v5;
  __int128 v6;
  float v7;
  float *v8;
  __int64 v9;
  float v10;
  int v11;
  __int64 v12;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183A70[64];
#define v14 (*(__int64 (*))(void *)(sr_frame_140183A70 + 0)) /* [rsp+0h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140183A70 + 32)) /* [rsp+20h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140183A70 + 56)) /* [rsp+38h] */

  v2 = a2;
  sub_140183BF0(a1, a2);
  if ( v2 > 1 )
  {
    v4 = 1;
    v5 = a1 + 5;
    do
    {
      v6 = *(_OWORD *)v5;
      v7 = v5[4];
      v8 = v5 - 5;
      v9 = v4;
      v15 = *(_OWORD *)v5;
      v10 = *((float *)&v15 + 1);
      do
      {
        if ( v10 >= v8[1] )
          break;
        v11 = *((_DWORD *)v8 + 4);
        --v9;
        *(_OWORD *)(v8 + 5) = *(_OWORD *)v8;
        *((_DWORD *)v8 + 9) = v11;
        v8 -= 5;
      }
      while ( v9 > 0 );
      if ( v4 != v9 )
      {
        v12 = 5 * v9;
        *(_OWORD *)&a1[v12] = v6;
        a1[v12 + 4] = v7;
      }
      ++v4;
      v5 += 5;
    }
    while ( v4 < v2 );
  }
  return 0; /* the function has no caller */
}
#undef v14
#undef v15
#undef v16

//----- (0000000140183B30) ----------------------------------------------------
__int64            sub_140183B30(__int64 a1, int a2)
{
  __int64 v3;
  __int128 *v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int128 v8;
  float v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183B30[32];
#define v14 (*(__int128 (*))(void *)(sr_frame_140183B30 + 0)) /* [rsp+0h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140183B30 + 24)) /* [rsp+18h] */

  if ( a2 > 1 )
  {
    v3 = 1;
    v4 = (__int128 *)(a1 + 20);
    v5 = (unsigned int)(a2 - 1);
    do
    {
      v6 = *((_DWORD *)v4 + 4);
      v7 = v3;
      v8 = *v4;
      v14 = *v4;
      if ( v3 > 0 )
      {
        v9 = *((float *)&v14 + 1);
        v10 = (__int64)v4 - 20;
        do
        {
          if ( v9 >= *(float *)(v10 + 4) )
            break;
          v11 = *(_DWORD *)(v10 + 16);
          --v7;
          *(_OWORD *)(v10 + 20) = *(_OWORD *)v10;
          *(_DWORD *)(v10 + 36) = v11;
          v10 -= 20;
        }
        while ( v7 > 0 );
        if ( v3 != v7 )
        {
          v12 = 5 * v7;
          *(_OWORD *)(a1 + 4 * v12) = v8;
          *(_DWORD *)(a1 + 4 * v12 + 16) = v6;
        }
      }
      ++v3;
      v4 = (__int128 *)((char *)v4 + 20);
      --v5;
    }
    while ( v5 );
    return 0; /* the function has no caller */
  }
  return result;
}
#undef v14
#undef v15

//----- (0000000140183BF0) ----------------------------------------------------
void            sub_140183BF0(float *a1, int a2)
{
  unsigned int v2;
  float v4;
  signed int v5;
  float *v6;
  float *v7;
  __int64 v8;
  float v9;
  float v10;
  BOOL v11;
  signed int v12;
  __int64 v13;
  __int128 v14;
  float v15;
  float v16;
  int v17;
  __int128 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  float *v22;
  __int64 v23;
  bool v24;
  float *v25;
  __int64 v26;
  __int64 v27;
  __int128 v28;
  float v29;
  float v30;
  bool v31;
  signed int v32;
  int v33;

  if ( a2 > 12 )
  {
    v2 = a2;
    do
    {
      v4 = a1[1];
      v5 = v2 - 1;
      v6 = a1;
      v7 = a1;
      v8 = v2 - 1LL;
      v9 = a1[5 * ((unsigned __int64)v2 >> 1) + 1];
      v10 = a1[5 * v8 + 1];
      v11 = v10 > v9;
      if ( v9 > v4 != v11 )
      {
        v12 = 0;
        if ( v10 > v4 != v11 )
          v12 = v2 - 1;
        v13 = 5LL * v12;
        v14 = *(_OWORD *)&a1[5 * v12];
        v15 = a1[5 * v12 + 4];
        *(_OWORD *)&a1[v13] = *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)];
        a1[v13 + 4] = a1[5 * ((unsigned __int64)v2 >> 1) + 4];
        *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)] = v14;
        a1[5 * ((unsigned __int64)v2 >> 1) + 4] = v15;
      }
      v16 = a1[4];
      v17 = 1;
      v18 = *(_OWORD *)a1;
      v19 = 1;
      *(_OWORD *)a1 = *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)];
      a1[4] = a1[5 * ((unsigned __int64)v2 >> 1) + 4];
      *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)] = v18;
      a1[5 * ((unsigned __int64)v2 >> 1) + 4] = v16;
      while ( 1 )
      {
        v20 = a1[1];
        v21 = v19 + 4 * v19 + 1;
        v31 = v20 <= a1[v21];
        v22 = &a1[v21];
        if ( !v31 )
        {
          do
          {
            ++v17;
            v22 += 5;
            ++v19;
          }
          while ( v20 > *v22 );
        }
        v23 = v8 + 4 * v8 + 1;
        v24 = v20 < a1[v23];
        v25 = &a1[v23];
        if ( v24 )
        {
          do
          {
            --v5;
            v25 -= 5;
            --v8;
          }
          while ( v20 < *v25 );
        }
        if ( v19 >= v8 )
          break;
        v26 = 5 * v8;
        ++v17;
        v27 = 5 * v19;
        --v5;
        v28 = *(_OWORD *)&a1[5 * v19];
        v29 = a1[5 * v19++ + 4];
        *(_OWORD *)&a1[v27] = *(_OWORD *)&a1[5 * v8];
        v30 = a1[5 * v8-- + 4];
        a1[v27 + 4] = v30;
        *(_OWORD *)&a1[v26] = v28;
        a1[v26 + 4] = v29;
      }
      v2 -= v17;
      v31 = v5 < (int)v2;
      v32 = v2;
      v33 = v5;
      if ( v5 >= (int)v2 )
      {
        v33 = v2;
        v2 = v5;
      }
      a1 += 5 * v17;
      if ( !v31 )
        v7 = a1;
      sub_140183BF0(v7, v33);
      if ( v5 >= v32 )
        a1 = v6;
    }
    while ( (int)v2 > 12 );
  }
}

//----- (0000000140183DC0) ----------------------------------------------------
__int64            sub_140183DC0(
        __int64 a1,
        int *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        int a12)
{
  float v12 = a3; // xmm2_4: x0 (0x140183DC0 keeps it in its home slot [rsp+120h]); Hex-Rays had lost it
  float v13 = a4; // xmm3_4: y0 ([rsp+128h])
  __int64 result;
  int v15;
  __m128 v18;
  float v19;
  float v20;
  float v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __m128 v31;
  unsigned int v32;
  float v33;
  float v34;
  float v35;
  unsigned int v36;
  __m128 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __m128 v42;
  float v43;
  double v44;
  __m128d v45;
  __int64 v46;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140183DC0[64];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_140183DC0 + 0)) /* [rsp+108h] */
#define v48 (*(float (*))(void *)(sr_frame_140183DC0 + 24)) /* [rsp+120h] */
#define v49 (*(float (*))(void *)(sr_frame_140183DC0 + 32)) /* [rsp+128h] */
#define v50 (*(float (*))(void *)(sr_frame_140183DC0 + 56)) /* [rsp+140h] */

  result = (__int64)&retaddr;
  v49 = v13;
  v48 = v12;
  v15 = a12;
  v18 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
  v19 = a7;
  v20 = v13;
  v21 = a5;
  SR_VEC_LANES(128, v22, f32)[0] = a6;
  v23 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a6))));
  SR_VEC_LANES(128, v23, f32)[0] = a6 - v13;
  v24 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a10))));
  SR_VEC_LANES(128, v18, f32)[0] = (float)((float)(a8 - a6) * (float)(a8 - a6)) + (float)((float)(a7 - a5) * (float)(a7 - a5));
  SR_VEC_LANES(128, v23, f32)[0] = (float)(SR_VEC_LANES(128, v23, f32)[0] * SR_VEC_LANES(128, v23, f32)[0]) + (float)((float)(a5 - v12) * (float)(a5 - v12));
  SR_VEC_LANES(128, v24, f32)[0] = (float)((float)(a10 - a8) * (float)(a10 - a8)) + (float)((float)(a9 - a7) * (float)(a9 - a7));
  SR_VEC_LANES(128, v18, f32)[0] = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v18)), f64)[0]
                  + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v23)), f64)[0]
                  + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v24)), f64)[0];
  v25 = (float)(SR_VEC_LANES(128, v18, f32)[0] * SR_VEC_LANES(128, v18, f32)[0])
      - (float)((float)((float)(a10 - v20) * (float)(a10 - v20)) + (float)((float)(a9 - v12) * (float)(a9 - v12)));
  if ( a12 <= 16 )
  {
    while ( v25 > a11 )
    {
      ++v15;
      v26 = v21 * 0.5;
      v27 = v19 * 0.5;
      v28 = SR_VEC_LANES(128, v22, f32)[0] * 0.5;
      v29 = v27 + (float)(v21 * 0.5);
      v30 = (float)(v48 * 0.5) + v26;
      v31 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
      *(float *)&v32 = (float)(v49 * 0.5) + (float)(SR_VEC_LANES(128, v22, f32)[0] * 0.5);
      SR_VEC_LANES(128, v31, f32)[0] = a8 * 0.5;
      v33 = (float)(a9 * 0.5) + v27;
      v22 = v31;
      SR_VEC_LANES(128, v22, f32)[0] = (float)(a8 * 0.5) + v28;
      v50 = v33;
      v34 = (float)(v29 + v30) * 0.5;
      SR_VEC_LANES(128, v31, f32)[0] = SR_VEC_LANES(128, v22, f32)[0] + *(float *)&v32;
      v21 = (float)(v29 + v33) * 0.5;
      SR_VEC_LANES(128, v22, f32)[0] = SR_VEC_LANES(128, v22, f32)[0] + (float)((float)(a10 * 0.5) + (float)(a8 * 0.5));
      a8 = (float)(a10 * 0.5) + (float)(a8 * 0.5);
      SR_VEC_LANES(128, v31, f32)[0] = SR_VEC_LANES(128, v31, f32)[0] * 0.5;
      SR_VEC_LANES(128, v22, f32)[0] = SR_VEC_LANES(128, v22, f32)[0] * 0.5;
      v35 = (float)(v21 + v34) * 0.5;
      *(float *)&v36 = (float)(SR_VEC_LANES(128, v22, f32)[0] + SR_VEC_LANES(128, v31, f32)[0]) * 0.5;
      /* 0x140184044: x0, y0 from [rsp+120h] / [rsp+128h] (0x140183F37, 0x140183F2A), the current start point */
      result = sub_140183DC0(a1, a2, v48, v49, v30, *(float *)&v32, v34, SR_VEC_LANES(128, v31, f32)[0], v35, *(float *)&v36, a11, v15);
      v37 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(a8))));
      v48 = v35;
      v49 = *(float *)&v36;
      v38 = v33 - v21;
      v39 = a9 - v33;
      v40 = v21 - v35;
      v41 = a9 - v35;
      v42 = v22;
      SR_VEC_LANES(128, v42, f32)[0] = SR_VEC_LANES(128, v22, f32)[0] - *(float *)&v36;
      v43 = a10 - *(float *)&v36;
      SR_VEC_LANES(128, v37, f32)[0] = (float)((float)(a8 - SR_VEC_LANES(128, v22, f32)[0]) * (float)(a8 - SR_VEC_LANES(128, v22, f32)[0])) + (float)(v38 * v38);
      v19 = v50;
      v44 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v37)), f64)[0];
      SR_VEC_LANES(128, v42, f32)[0] = (float)(SR_VEC_LANES(128, v42, f32)[0] * SR_VEC_LANES(128, v42, f32)[0]) + (float)(v40 * v40);
      v45 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
      SR_VEC_LANES(128, v45, f64)[0] = (float)((float)((float)(a10 - a8) * (float)(a10 - a8)) + (float)(v39 * v39));
      *(float *)SR_VEC_LANES(128, v45, f64) = v44 + SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v42)), f64)[0] + SR_VEC_READ_LANES(128, _mm_sqrt_pd(v45), f64)[0];
      v25 = (float)(*(float *)SR_VEC_LANES(128, v45, f64) * *(float *)SR_VEC_LANES(128, v45, f64))
          - (float)((float)(v43 * v43) + (float)(v41 * v41));
      if ( v15 > 16 )
        return result;
    }
    v46 = *a2;
    if ( a1 )
    {
      *(float *)(a1 + 8 * v46) = a9;
      *(float *)(a1 + 8 * v46 + 4) = a10;
      LODWORD(v46) = *a2;
    }
    result = (unsigned int)(v46 + 1);
    *a2 = result;
  }
  return result;
}
#undef retaddr
#undef v48
#undef v49
#undef v50

//----- (0000000140184190) ----------------------------------------------------
__int64            sub_140184190(
        __int64 a1,
        int *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10)
{
  float v10 = a3; // xmm2_4: x0; Hex-Rays had lost it
  float v11 = a4; // xmm3_4: y0
  float v12;
  float v15;
  float v16;
  float v17;
  int v18;
  int v19;
  __int64 v20;

  v12 = v10;
  v15 = (float)((float)(a5 + a5) + (float)(v10 + a7)) * 0.25;
  v16 = (float)((float)(v10 + a7) * 0.5) - v15;
  if ( a10 <= 16 )
  {
    v17 = (float)((float)(v11 + a8) * 0.5) - (float)((float)((float)(a6 + a6) + (float)(v11 + a8)) * 0.25);
    if ( (float)((float)(v17 * v17) + (float)(v16 * v16)) <= a9 )
    {
      v20 = *a2;
      if ( a1 )
      {
        *(float *)(a1 + 8 * v20) = a7;
        *(float *)(a1 + 8 * v20 + 4) = a8;
        LODWORD(v20) = *a2;
      }
      *a2 = v20 + 1;
    }
    else
    {
      sub_140184190(
        a1,
        a2,
        a3,
        a4,
        (float)(v12 + a5) * 0.5,
        (float)(v11 + a6) * 0.5,
        v15,
        (float)((float)(a6 + a6) + (float)(v11 + a8)) * 0.25,
        a9,
        a10 + 1);
      /* 0x14018431E: the second half starts at the midpoint (xmm2 = xmm11 from 0x140184237, xmm3 = xmm12 from
         0x140184252); the C had passed undefined locals */
      sub_140184190(
        a1,
        a2,
        v15,
        (float)((float)((float)(a6 + a6) + (float)(v11 + a8)) * 0.25),
        (float)(a5 + a7) * 0.5,
        (float)(a6 + a8) * 0.5,
        a7,
        a8,
        a9,
        a10 + 1);
    }
  }
  return 1;
}

//----- (00000001401843E0) ----------------------------------------------------
__int64            sub_1401843E0(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5;
  int v6;
  __int64 v7;
  int v8;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _BYTE *v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401843E0[64];
#define v35 (*(__int64 (*))(void *)(sr_frame_1401843E0 + 0)) /* [rsp+0h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_1401843E0 + 32)) /* [rsp+20h] */
#define v37 (*(int (*))(void *)(sr_frame_1401843E0 + 36)) /* [rsp+24h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_1401843E0 + 40)) /* [rsp+28h] */
#define v39 (*(_QWORD (*)[2])(void *)(sr_frame_1401843E0 + 48)) /* [rsp+30h] */

  v5 = a5;
  v6 = a3 - a5;
  v7 = a4;
  v37 = a3;
  v8 = a3;
  v36 = a5;
  v39[0] = 0;
  if ( a2 > 0 )
  {
    v10 = a5;
    v11 = (unsigned int)a2;
    v38 = (unsigned int)a2;
    do
    {
      crt_memset((void *)(uintptr_t)(v39), 0, v10);
      v12 = 0;
      switch ( v5 )
      {
        case 2u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v26 = 0;
            do
            {
              v27 = v26;
              v26 += v7;
              v12 += *(unsigned __int8 *)(v27 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v28 = ((_BYTE)v13++ + 2) & 7;
              *((_BYTE *)v39 + v28) = *(_BYTE *)(v27 + a1);
              *(_BYTE *)(v27 + a1) = v12 >> 1;
            }
            while ( v13 <= v6 );
          }
          break;
        case 3u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v23 = 0;
            do
            {
              v24 = v23;
              v23 += v7;
              v12 += *(unsigned __int8 *)(v24 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v25 = ((_BYTE)v13++ + 3) & 7;
              *((_BYTE *)v39 + v25) = *(_BYTE *)(v24 + a1);
              *(_BYTE *)(v24 + a1) = v12 / 3;
            }
            while ( v13 <= v6 );
          }
          break;
        case 4u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v20 = 0;
            do
            {
              v21 = v20;
              v20 += v7;
              v12 += *(unsigned __int8 *)(v21 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v22 = ((_BYTE)v13++ - 4) & 7;
              *((_BYTE *)v39 + v22) = *(_BYTE *)(v21 + a1);
              *(_BYTE *)(v21 + a1) = v12 >> 2;
            }
            while ( v13 <= v6 );
          }
          break;
        default:
          v13 = 0;
          if ( v5 == 5 )
          {
            if ( v6 >= 0 )
            {
              v17 = 0;
              do
              {
                v18 = v17;
                v17 += v7;
                v12 += *(unsigned __int8 *)(v18 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
                v19 = ((_BYTE)v13++ - 3) & 7;
                *((_BYTE *)v39 + v19) = *(_BYTE *)(v18 + a1);
                *(_BYTE *)(v18 + a1) = v12 / 5;
              }
              while ( v13 <= v6 );
            }
          }
          else if ( v6 >= 0 )
          {
            v14 = 0;
            do
            {
              v15 = v14;
              v14 += v7;
              v12 += *(unsigned __int8 *)(v15 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v16 = ((_BYTE)v5 + (_BYTE)v13++) & 7;
              *((_BYTE *)v39 + v16) = *(_BYTE *)(v15 + a1);
              *(_BYTE *)(v15 + a1) = v12 / v5;
            }
            while ( v13 <= v6 );
          }
          break;
      }
      if ( v13 < v8 )
      {
        v29 = v13;
        v30 = (_BYTE *)(a1 + v13 * (int)v7);
        v31 = (unsigned int)(v8 - v13);
        v32 = v36;
        do
        {
          if ( *v30 )
          {
            crt_assert(
              (char *)L"pixels[i*stride_in_bytes] == 0",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
              0xF5Eu);
            v32 = v36;
          }
          v33 = v29++ & 7;
          v12 -= *((unsigned __int8 *)v39 + v33);
          *v30 = v12 / v32;
          v30 += v7;
          --v31;
        }
        while ( v31 );
        v5 = v36;
        v11 = v38;
        v8 = v37;
      }
      ++a1;
      v10 = v5;
      v38 = --v11;
    }
    while ( v11 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39

//----- (0000000140184710) ----------------------------------------------------
_BOOL8            sub_140184710(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float v8;
  float v10;
  float v12;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float *v21;
  float *v22;
  float *v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  _BOOL8 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140184710[176];
#define v35 (*(__int64 (*))(void *)(sr_frame_140184710 + 0)) /* [rsp+40h] */
#define v36 (*(float (*))(void *)(sr_frame_140184710 + 8)) /* [rsp+48h] */
#define v37 (*(float (*))(void *)(sr_frame_140184710 + 168)) /* [rsp+E8h] */

  v8 = a4[1] - a2[1];
  v10 = a3[2] - a2[2];
  v12 = a3[1] - a2[1];
  v14 = *a3 - *a2;
  v15 = a4[2] - a2[2];
  v16 = *a4 - *a2;
  v17 = (float)(v8 * v10) - (float)(v15 * v12);
  v18 = (float)(v15 * v14) - (float)(v16 * v10);
  v19 = (float)(v16 * v12) - (float)(v8 * v14);
  v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
  if ( v20 == 0.0 )
  {
    v35 = 0;
    v36 = 0.0;
  }
  else
  {
    *(float *)&v35 = v17 * (float)(1.0 / v20);
    *((float *)&v35 + 1) = v18 * (float)(1.0 / v20);
    v36 = v19 * (float)(1.0 / v20);
  }
  v21 = a6;
  v22 = a7;
  if ( sub_140078230(a1, (float *)&v35, &v37, a6, a7, a2, a3, a4) )
    return 1;
  v23 = a5;
  v24 = a4[1] - a2[1];
  v25 = a5[2] - a2[2];
  v26 = a5[1] - a2[1];
  v27 = a4[2] - a2[2];
  v28 = *a4 - *a2;
  v29 = (float)(v26 * v27) - (float)(v25 * v24);
  v30 = *a5 - *a2;
  v31 = (float)(v30 * v24) - (float)(v26 * v28);
  v32 = (float)(v25 * v28) - (float)(v30 * v27);
  v33 = fsqrt((float)((float)(v32 * v32) + (float)(v29 * v29)) + (float)(v31 * v31));
  if ( v33 == 0.0 )
  {
    v35 = 0;
    v36 = 0.0;
  }
  else
  {
    *(float *)&v35 = v29 * (float)(1.0 / v33);
    *((float *)&v35 + 1) = v32 * (float)(1.0 / v33);
    v36 = v31 * (float)(1.0 / v33);
  }
  if ( sub_140078230(a1, (float *)&v35, &v37, v21, v22, a2, a4, a5) )
    return 1;
  sub_14006EC40((float *)&v35, a2, a3, v23);
  if ( sub_140078230(a1, (float *)&v35, &v37, v21, v22, a2, a3, v23) )
    return 1;
  sub_14006EC40((float *)&v35, a3, a4, v23);
  result = sub_140078230(a1, (float *)&v35, &v37, v21, v22, a3, a4, v23);
  if ( result )
    return 1;
  return result;
}
#undef v35
#undef v36
#undef v37

//----- (0000000140184A70) ----------------------------------------------------
int sub_140184A70()
{
  int result;
  __int64 PerformanceCount;

  result = QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  if ( result )
    return (int)((double)(long long)PerformanceCount * *(double *)&dword_140404A6C[278520505]);
  return result;
}

